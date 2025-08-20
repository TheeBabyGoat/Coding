/*
------------------------------------------------------------------------------
    depth.cpp
    GTAV/NVE‑tailored ReShade depth binding (Direct3D 11)
    Part of the PulseV ASI project

    Overview:
    ---------
    Implements a ReShade add‑on that forces D3D11 depth‑stencil resources to be
    typeless + SRV‑capable at creation time, tracks per‑resource draw activity
    each frame, and exposes the heuristically “best” depth buffer to effects.
    The selected depth is bound under the conventional texture name "DEPTH",
    and commonly used booleans can be populated via effect annotations
    (`source = "bufready_depth"` and `source = "depth_reversed"`).

    Key Points:
    -----------
      • DX11‑only path guarded by device_api checks.
      • Resource creation fixups:
          - on_create_resource(): force typeless formats and add SRV usage.
          - on_create_resource_view(): fix up typed views for DSV/SRV.
      • Per‑frame tracking:
          - Counts vertices and drawcalls against the currently bound DSV.
          - Detects reversed depth via clear value (!= 1.0f).
          - Snapshots stats on present into a device‑wide table (shared_mutex).
      • Heuristic selection (GTAV/NVE‑biased):
          - Prefer exact backbuffer resolution.
          - Prefer 1–2 fullscreen passes (6 or 12 vertices total).
          - Otherwise pick by higher vertex count, then drawcalls, then recency.
      • Effect binding:
          - Creates/destroys an SRV for the chosen depth resource.
          - Binds to "DEPTH" and sets annotated booleans for buffer‑ready and
            depth‑reversed.
      • User control:
          - depthscan::force_select()/clear_forced() to pin/unpin a resource.
          - depthscan::enumerate() returns scored candidates for UI.

    Purpose:
    --------
      • Make in‑game depth sampling reliable for ReShade effects in GTAV/NVE.
      • Avoid engine‑specific hacks by enforcing typeless DS + SRV access.
      • Provide a stable, low‑overhead heuristic to auto‑select the scene depth.

    Validation:
    -----------
      • Strict checks on API (DX11) and resource kind (2D depth textures).
      • Safe defaults for unknown view descriptors (2D, 1 level/layer).
      • Periodic culling of stale resources to bound memory usage.

    Notes:
    ------
      • Thread‑safety: device‑wide depth table guarded by std::shared_mutex.
      • Minimal state: no ImGui, no viewport tracking (not needed).
      • DX11 immediate command list state is attached via queue callbacks.
      • Barriers are no‑ops on DX11 but kept to document intent.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#include "depth_scanner_api.hpp"
#include "depth.hpp"

#include <reshade.hpp>
#include <reshade_api.hpp>

#include <shared_mutex>
#include <unordered_map>
#include <cstring>   // std::strcmp
#include <cstdint>   // uint32_t, uint64_t
#include <vector>    // std::vector
#include <algorithm> // std::sort
#include <Unknwn.h> // for COM GUID machinery (safe to include)

using namespace reshade::api;

// ==========================================================================
// Minimal shared state & helpers
// ==========================================================================

static std::shared_mutex s_mutex; // protects device-wide depth table during snapshot/selection

// Hash for reshade::api::resource (wraps 64-bit handle)
struct ResourceHash
{
    size_t operator()(resource r) const noexcept { return std::hash<uint64_t>{}(r.handle); }
};

// Per-draw aggregation (current frame)
struct draw_stats
{
    uint32_t vertices = 0; // sum(vertices * instances)
    uint32_t drawcalls = 0; // number of draw calls

    // Prefer the candidate with more total vertices; break ties by drawcalls
    bool operator>(const draw_stats& o) const {
        return vertices != o.vertices ? vertices > o.vertices : drawcalls > o.drawcalls;
    }
};

// Per-resource stats captured during a frame (and a couple of flags)
struct depth_frame_stats
{
    draw_stats total;               // aggregated counts for the frame
    draw_stats current;             // accumulation bucket used during the frame
    bool reversed_clear_value = false; // true if DS was cleared to something != 1.0f at least once
};

// Command-list-local state (immediate list for DX11)
struct __declspec(uuid("c6a5b0f3-0d7f-4f4e-9d8a-7f9d0d6a27c1")) state_tracking
{
    reshade::api::resource current_depth = { 0 };
    std::unordered_map<reshade::api::resource, depth_frame_stats, ResourceHash> used;

    void reset() { current_depth = { 0 }; used.clear(); }
};


// Device-wide memory of last-seen stats per depth resource
struct dev_depth_info
{
    depth_frame_stats last;   // snapshot from previous present
    uint64_t          last_seen_frame = 0;
};

struct __declspec(uuid("9b2a8f9b-3c2d-4e1a-92e0-1f2b0b0a77a4")) device_data
{
    uint64_t frame_index = 0;
    std::unordered_map<reshade::api::resource, dev_depth_info, ResourceHash> table;
};

// Effect-runtime-local handles to currently exposed depth
struct __declspec(uuid("f1cde5a6-7a4d-45b0-9a9b-0cbf5e2a3d11")) runtime_data
{
    reshade::api::resource      selected_depth = { 0 };
    reshade::api::resource_view depth_srv = { 0 };
};

// ==========================================================================
// UI/Scanner API implementation
// ==========================================================================

namespace depthscan{

    static reshade::api::resource s_forced = { 0 };

    std::vector<Candidate> enumerate(reshade::api::effect_runtime* rt)
    {
        std::vector<Candidate> out;
        if (rt == nullptr) return out;

        auto* dev = rt->get_device();
        auto* dd = dev->get_private_data<device_data>();
        if (!dd) return out;

        uint32_t fw = 0, fh = 0;
        rt->get_screenshot_width_and_height(&fw, &fh);

        const resource selected = rt->get_private_data<runtime_data>()->selected_depth;

        std::shared_lock<std::shared_mutex> lock(s_mutex);
        out.reserve(dd->table.size());
        for (const auto& kv : dd->table) {
            Candidate c = {};
            c.res = kv.first;
            const dev_depth_info& info = kv.second;

            const resource_desc desc = dev->get_resource_desc(c.res);
            if (desc.type != resource_type::texture_2d)
                continue;

            c.desc = desc;
            c.last_seen_frame = info.last_seen_frame;
            c.draws = info.last.total.drawcalls;
            c.verts = info.last.total.vertices;
            c.reversed_clear = info.last.reversed_clear_value;
            c.backbuffer_size = (desc.texture.width == fw && desc.texture.height == fh);
            c.gta_fullscreen = c.backbuffer_size && ((c.draws == 1 && c.verts == 6) || (c.draws == 2 && c.verts == 12));
            c.is_selected = (selected == c.res);
            c.is_forced = (s_forced == c.res);
            out.push_back(c);
        }

        std::sort(out.begin(), out.end(), [](const Candidate& a, const Candidate& b) {
            // Same heuristic we use in selection: prefer GTA fullscreen, then higher vertices, then draws
            if (a.gta_fullscreen != b.gta_fullscreen) return a.gta_fullscreen && !b.gta_fullscreen;
            if (a.verts != b.verts) return a.verts > b.verts;
            if (a.draws != b.draws) return a.draws > b.draws;
            // Finally prefer backbuffer-sized
            if (a.backbuffer_size != b.backbuffer_size) return a.backbuffer_size && !b.backbuffer_size;
            return a.last_seen_frame > b.last_seen_frame;
            });

        return out;
    }

    void force_select(reshade::api::effect_runtime*, reshade::api::resource res)
    {
        s_forced = res;
    }

    void clear_forced(reshade::api::effect_runtime*)
    {
        s_forced = { 0 };
    }

} // namespace depthscan

;

// --------------------------------------------------------------------------
// Effect-side binding update helper
// --------------------------------------------------------------------------

static void update_effect_bindings(reshade::api::effect_runtime* rt)
{
    const auto& data = *rt->get_private_data<runtime_data>();

    // Bind our depth SRV to "DEPTH" (used by effects as a conventional name)
    rt->update_texture_bindings("DEPTH", data.depth_srv, data.depth_srv);

    // Set common booleans if effects opted-in via "source" annotations
    const bool buf_ready = (data.depth_srv != 0);

    // Try to infer "depth_reversed" from the resource snapshot, if available
    bool reversed = false;
    if (buf_ready) {
        auto* dev = rt->get_device();
        auto* dd = dev->get_private_data<device_data>();
        const resource r = dev->get_resource_from_view(data.depth_srv);
        const auto it = dd->table.find(r);
        if (it != dd->table.end())
            reversed = it->second.last.reversed_clear_value;
    }

    // Walk all uniforms and set the ones with the expected annotations
    rt->enumerate_uniform_variables(nullptr, [buf_ready, reversed](reshade::api::effect_runtime* r,
        reshade::api::effect_uniform_variable u) {
            char src[64] = {};
            if (r->get_annotation_string_from_uniform_variable(u, "source", src)) {
                if (std::strcmp(src, "bufready_depth") == 0)
                    r->set_uniform_value_bool(u, buf_ready);
                else if (std::strcmp(src, "depth_reversed") == 0)
                    r->set_uniform_value_bool(u, reversed);
            }
        });
}

// ==========================================================================
// Device / runtime init & teardown
// ==========================================================================

static void on_init_device(device* dev) { dev->create_private_data<device_data>(); }
static void on_destroy_device(device* dev) { dev->destroy_private_data<device_data>(); }
static void on_init_command_list(command_list* cmd) { cmd->create_private_data<state_tracking>(); }
static void on_destroy_command_list(command_list* cmd) { cmd->destroy_private_data<state_tracking>(); }
static void on_init_effect_runtime(effect_runtime* rt) { rt->create_private_data<runtime_data>(); }

static void on_destroy_effect_runtime(effect_runtime* rt)
{
    auto& data = *rt->get_private_data<runtime_data>();
    if (data.depth_srv != 0) {
        rt->get_device()->destroy_resource_view(data.depth_srv);
        data.depth_srv = { 0 };
    }
    data.selected_depth = { 0 };
    rt->destroy_private_data<runtime_data>();
}

// DX11 immediate command list lives on the queue object in ReShade
static void on_init_command_queue(command_queue* q)
{
    if (auto* imm = q->get_immediate_command_list())
        imm->create_private_data<state_tracking>();
}

static void on_destroy_command_queue(command_queue* q)
{
    if (auto* imm = q->get_immediate_command_list())
        imm->destroy_private_data<state_tracking>();
}

// ==========================================================================
// Resource hooks (DX11 only): Make DS typeless & SRV-capable
// ==========================================================================

static bool on_create_resource(device* dev, resource_desc& desc, subresource_data*, resource_usage)
{
    if (dev->get_api() != device_api::d3d11)                return false;
    if (desc.type != resource_type::texture_2d)             return false;
    if ((desc.usage & resource_usage::depth_stencil) == 0)  return false;

    // Force typeless format so we can create SRVs later; also flag as shader-readable
    desc.texture.format = format_to_typeless(desc.texture.format);
    desc.usage |= resource_usage::shader_resource;
    return true; // modified
}

static bool on_create_resource_view(device* dev, resource res, resource_usage usage, resource_view_desc& desc)
{
    if (dev->get_api() != device_api::d3d11) return false;

    const resource_desc rd = dev->get_resource_desc(res);
    if ((rd.usage & resource_usage::depth_stencil) == 0) return false;

    // If the app already requested a concrete typed format, we generally leave it alone.
    // Otherwise we fix up the typed view by usage (DSV vs SRV) for typeless resources.
    if (desc.format == format::unknown || desc.format == format_to_typeless(desc.format)) {
        if (usage == resource_usage::depth_stencil)
            desc.format = format_to_depth_stencil_typed(rd.texture.format);
        else if (usage == resource_usage::shader_resource)
            desc.format = format_to_default_typed(rd.texture.format);
    }

    // Some titles provide 'unknown' view type; default to 2D, single mip/layer.
    if (desc.type == resource_view_type::unknown) {
        desc.type = resource_view_type::texture_2d;
        desc.texture.first_level = 0;
        desc.texture.level_count = 1; // DS has no mips
        desc.texture.first_layer = 0;
        desc.texture.layer_count = 1;
    }

    return true; // modified (or at least validated)
}

// ==========================================================================
// Draw / Bind events
// ==========================================================================

// Track which depth resource is currently bound on this command list
static void on_bind_depth_stencil(command_list* cmd, uint32_t, const resource_view*, resource_view dsv)
{
    auto& st = *cmd->get_private_data<state_tracking>();
    st.current_depth = (dsv != 0) ? cmd->get_device()->get_resource_from_view(dsv) : resource{ 0 };
}

// Count draw workload against the currently bound depth (unindexed & indexed)
static bool on_draw(command_list* cmd, uint32_t vertices, uint32_t instances, uint32_t, uint32_t)
{
    auto& st = *cmd->get_private_data<state_tracking>();
    if (st.current_depth == 0) return false;

    auto& s = st.used[st.current_depth].current;
    s.vertices += vertices * instances;
    s.drawcalls += 1;
    return false; // we don't override the draw
}

static bool on_draw_indexed(command_list* cmd, uint32_t indices, uint32_t instances, uint32_t, int32_t, uint32_t)
{
    return on_draw(cmd, indices, instances, 0, 0);
}

// Watch for clears to non-1.0 to infer reversed depth (0 = far, 1 = near)
static bool on_clear_depth_stencil(command_list* cmd, resource_view dsv, const float* depth, const uint8_t*, uint32_t, const rect*)
{
    if (!depth) return false;
    auto& st = *cmd->get_private_data<state_tracking>();
    const resource res = cmd->get_device()->get_resource_from_view(dsv);
    st.used[res].reversed_clear_value |= (*depth != 1.0f);
    return false;
}

// Command-list reuse boundary
static void on_reset_command_list(command_list* cmd)
{
    cmd->get_private_data<state_tracking>()->reset();
}

// ==========================================================================
// Present: snapshot per-resource stats to device_data and reset
// ==========================================================================

static void on_present(command_queue* queue, swapchain* sc, const rect*, const rect*, uint32_t, const rect*)
{
    device* dev = sc->get_device();
    auto* dd = dev->get_private_data<device_data>();
    dd->frame_index++;

    // Grab the immediate command list off the queue (DX11 path)
    command_list* imm = queue->get_immediate_command_list();
    if (!imm) return;

    auto* st = imm->get_private_data<state_tracking>();
    if (!st) return;

    std::unique_lock<std::shared_mutex> lock(s_mutex);

    // Roll current->total and copy to the device table
    for (auto& kv : st->used) {
        const resource res = kv.first;
        auto& df = kv.second;

        df.total.vertices += df.current.vertices;
        df.total.drawcalls += df.current.drawcalls;
        df.current = {}; // only totals matter at frame end

        auto& out = dd->table[res];
        out.last = df;
        out.last_seen_frame = dd->frame_index;
    }

    // Cull resources we haven't seen in a while (avoid unbounded growth)
    for (auto it = dd->table.begin(); it != dd->table.end(); ) {
        if (dd->frame_index > it->second.last_seen_frame + 60)
            it = dd->table.erase(it);
        else
            ++it;
    }

    st->reset();
}

// ==========================================================================
// ReShade effect pass: choose best depth (GTAV heuristic) and bind as DEPTH
// ==========================================================================

static void on_begin_effects(effect_runtime* rt, command_list* cmd, resource_view, resource_view)
{
    auto* dev = rt->get_device();
    auto* dd = dev->get_private_data<device_data>();
    auto& rd = *rt->get_private_data<runtime_data>();

    // Match only backbuffer-sized depth textures
    uint32_t fw = 0, fh = 0;
    rt->get_screenshot_width_and_height(&fw, &fh);

    // Selection heuristic:
    //  - exact backbuffer resolution
    //  - prefer 1 or 2 fullscreen draws (6 or 12 verts)
    //  - otherwise, pick the candidate with the largest totals
    resource   best = { 0 };
    draw_stats best_stats = {};
    bool       best_is_gta_fullscreen = false;

    {
        std::shared_lock<std::shared_mutex> lock(s_mutex);

        for (const auto& kv : dd->table) {
            const resource res = kv.first;
            const auto& info = kv.second;

            const resource_desc desc = dev->get_resource_desc(res);
            if (desc.type != resource_type::texture_2d)                 continue;
            if (desc.texture.width != fw || desc.texture.height != fh)  continue;

            const auto& snap = info.last.total;
            const bool gta_fullscreen =
                ((snap.drawcalls == 1 && snap.vertices == 6) ||
                    (snap.drawcalls == 2 && snap.vertices == 12));

            if (!best.handle) {
                best = res; best_stats = snap; best_is_gta_fullscreen = gta_fullscreen; continue;
            }

            if (gta_fullscreen && !best_is_gta_fullscreen) {
                best = res; best_stats = snap; best_is_gta_fullscreen = true; continue;
            }

            if (gta_fullscreen == best_is_gta_fullscreen && snap > best_stats) {
                best = res; best_stats = snap; best_is_gta_fullscreen = gta_fullscreen; continue;
            }
        }
    }

    // Respect user pin (if any)
    if (depthscan::s_forced != 0) {
        // Only honor if the resource is still tracked
        if (dd->table.find(depthscan::s_forced) != dd->table.end()) {
            best = depthscan::s_forced;
        }
    }

    const resource_view prev_srv = rd.depth_srv;

    // (Re)create SRV for the newly selected depth
    if (best != 0) {
        if (rd.selected_depth != best || prev_srv == 0) {
            if (prev_srv != 0)
                dev->destroy_resource_view(prev_srv);

            const resource_desc d = dev->get_resource_desc(best);
            resource_view_desc srv_desc(format_to_default_typed(d.texture.format));
            srv_desc.type = resource_view_type::texture_2d;
            srv_desc.texture.first_level = 0;
            srv_desc.texture.level_count = 1;
            srv_desc.texture.first_layer = 0;
            srv_desc.texture.layer_count = 1;

            if (!dev->create_resource_view(best, resource_usage::shader_resource, srv_desc, &rd.depth_srv)) {
                rd.depth_srv = { 0 };
                rd.selected_depth = { 0 };
            }
            else {
                rd.selected_depth = best;
            }
        }
    }
    else {
        // No match this frame -> drop binding
        if (prev_srv != 0) {
            dev->destroy_resource_view(prev_srv);
            rd.depth_srv = { 0 };
            rd.selected_depth = { 0 };
        }
    }

    if (prev_srv != rd.depth_srv)
        update_effect_bindings(rt);

    // DX11 barriers are effectively no-ops, but keep the intent explicit
    if (rd.depth_srv != 0) {
        const resource res = dev->get_resource_from_view(rd.depth_srv);
        cmd->barrier(res,
            resource_usage::depth_stencil | resource_usage::shader_resource,
            resource_usage::shader_resource);
    }
}

static void on_finish_effects(effect_runtime* rt, command_list* cmd, resource_view, resource_view)
{
    const auto& rd = *rt->get_private_data<runtime_data>();
    if (rd.depth_srv != 0) {
        const resource res = rt->get_device()->get_resource_from_view(rd.depth_srv);
        cmd->barrier(res,
            resource_usage::shader_resource,
            resource_usage::depth_stencil | resource_usage::shader_resource);
    }
}

// ==========================================================================
// Public entry points
// ==========================================================================

void register_depth_switcher()
{
    // Device lifetime
    reshade::register_event<reshade::addon_event::init_device>(on_init_device);
    reshade::register_event<reshade::addon_event::destroy_device>(on_destroy_device);

    // Queue lifetime (needed to attach state to the DX11 immediate cmd list)
    reshade::register_event<reshade::addon_event::init_command_queue>(on_init_command_queue);
    reshade::register_event<reshade::addon_event::destroy_command_queue>(on_destroy_command_queue);

    // Command list lifetime
    reshade::register_event<reshade::addon_event::init_command_list>(on_init_command_list);
    reshade::register_event<reshade::addon_event::destroy_command_list>(on_destroy_command_list);
    reshade::register_event<reshade::addon_event::reset_command_list>(on_reset_command_list);

    // Effect runtime lifetime
    reshade::register_event<reshade::addon_event::init_effect_runtime>(on_init_effect_runtime);
    reshade::register_event<reshade::addon_event::destroy_effect_runtime>(on_destroy_effect_runtime);

    // Resource creation fixes (typeless DS + SRV)
    reshade::register_event<reshade::addon_event::create_resource>(on_create_resource);
    reshade::register_event<reshade::addon_event::create_resource_view>(on_create_resource_view);

    // Per-draw tracking
    reshade::register_event<reshade::addon_event::bind_render_targets_and_depth_stencil>(on_bind_depth_stencil);
    reshade::register_event<reshade::addon_event::draw>(on_draw);
    reshade::register_event<reshade::addon_event::draw_indexed>(on_draw_indexed);
    reshade::register_event<reshade::addon_event::clear_depth_stencil_view>(on_clear_depth_stencil);

    // Frame boundary
    reshade::register_event<reshade::addon_event::present>(on_present);

    // ReShade effect pass hooks
    reshade::register_event<reshade::addon_event::reshade_begin_effects>(on_begin_effects);
    reshade::register_event<reshade::addon_event::reshade_finish_effects>(on_finish_effects);
    reshade::register_event<reshade::addon_event::reshade_reloaded_effects>(update_effect_bindings);
}

void unregister_depth_switcher()
{
    // ReShade effect pass hooks
    reshade::unregister_event<reshade::addon_event::reshade_reloaded_effects>(update_effect_bindings);
    reshade::unregister_event<reshade::addon_event::reshade_finish_effects>(on_finish_effects);
    reshade::unregister_event<reshade::addon_event::reshade_begin_effects>(on_begin_effects);

    // Frame boundary
    reshade::unregister_event<reshade::addon_event::present>(on_present);

    // Per-draw tracking
    reshade::unregister_event<reshade::addon_event::clear_depth_stencil_view>(on_clear_depth_stencil);
    reshade::unregister_event<reshade::addon_event::draw_indexed>(on_draw_indexed);
    reshade::unregister_event<reshade::addon_event::draw>(on_draw);
    reshade::unregister_event<reshade::addon_event::bind_render_targets_and_depth_stencil>(on_bind_depth_stencil);

    // Resource creation fixes
    reshade::unregister_event<reshade::addon_event::create_resource_view>(on_create_resource_view);
    reshade::unregister_event<reshade::addon_event::create_resource>(on_create_resource);

    // Effect runtime lifetime
    reshade::unregister_event<reshade::addon_event::destroy_effect_runtime>(on_destroy_effect_runtime);
    reshade::unregister_event<reshade::addon_event::init_effect_runtime>(on_init_effect_runtime);

    // Command list lifetime
    reshade::unregister_event<reshade::addon_event::reset_command_list>(on_reset_command_list);
    reshade::unregister_event<reshade::addon_event::destroy_command_list>(on_destroy_command_list);
    reshade::unregister_event<reshade::addon_event::init_command_list>(on_init_command_list);

    // Queue lifetime
    reshade::unregister_event<reshade::addon_event::destroy_command_queue>(on_destroy_command_queue);
    reshade::unregister_event<reshade::addon_event::init_command_queue>(on_init_command_queue);

    // Device lifetime
    reshade::unregister_event<reshade::addon_event::destroy_device>(on_destroy_device);
    reshade::unregister_event<reshade::addon_event::init_device>(on_init_device);
}
