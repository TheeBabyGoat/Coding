/*
------------------------------------------------------------------------------
    depth_resolve.cpp
    PulseV Depth Buffer Resolver (DX11 Runtime Hook)

    Overview:
    ---------
    Implements runtime tracking and selection of active depth-stencil views (DSVs),
    and lays the groundwork for resolving depth textures into linearized R32F buffers
    usable by ReShade effects and debug overlays.

    Responsibilities:
    -----------------
    • Tracks all DSVs set during rendering with metadata:
        - Resolution, last seen frame, use count.
    • Picks the "best" DSV per frame based on size or usage.
    • Manages internal resolved texture + SRV/UAV resources.
    • Releases unused DSVs after an aging threshold.
    • Provides a public API to retrieve the resolved depth SRV.
    • Stubs out the depth resolve compute logic (TODO).

    Classes & Structures:
    ---------------------
    • DepthResolver
        - on_om_set_render_targets(ID3D11DepthStencilView*)
            > Tracks and catalogs each DSV used.
        - on_present(ID3D11Device*, ID3D11DeviceContext*)
            > Resolves depth using best DSV each frame.
        - get_resolved_depth_srv()
            > Returns SRV for resolved depth (used by shaders/UI).
        - resolve_dsv(...)
            > Stub for future compute shader-based depth copy.
        - release_resources()
            > Cleans up all internal COM objects and state.

    Design Notes:
    -------------
    • Implements a simple least-recently-used (LRU) cleanup mechanism.
    • Current resolve logic is not yet implemented – placeholder only.
    • Supports multi-DSV scenes and MSAA detection in future stages.
    • Uses AddRef/Release to ensure safety with runtime COM usage.
    • Resolved depth output will eventually be bound to ReShade slot.

    Logging:
    --------
    • Logging is disabled by default (LogInfo is a no-op macro).
    • Uncomment #define LogInfo(...) if diagnostic output is needed.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#include "depth_resolve.h"
#include "pulsev_config.h"
// #include "../logging.h" // Assuming a logging header exists

// A simple logger for now
#include <stdio.h>
#define LogInfo(...) // printf(__VA_ARGS__)

template<typename T>
static inline void safe_release(T*& p) {
    if (p) {
        p->Release();
        p = nullptr;
    }
}

DepthResolver::DepthResolver() {}

DepthResolver::~DepthResolver() {
    release_resources();
}

void DepthResolver::release_resources() {
    for (auto& pair : m_dsv_map) {
        safe_release(pair.second.dsv);
    }
    m_dsv_map.clear();
    safe_release(m_resolved_tex);
    safe_release(m_resolved_srv);
    safe_release(m_resolved_uav);
}

void DepthResolver::on_om_set_render_targets(ID3D11DepthStencilView* dsv) {
    if (!dsv) return;

    auto it = m_dsv_map.find(dsv);
    if (it == m_dsv_map.end()) {
        DsvInfo info;
        info.dsv = dsv;
        dsv->AddRef();

        ID3D11Resource* res = nullptr;
        dsv->GetResource(&res);
        if (res) {
            ID3D11Texture2D* tex = nullptr;
            if (SUCCEEDED(res->QueryInterface(__uuidof(ID3D11Texture2D), (void**)&tex))) {
                D3D11_TEXTURE2D_DESC desc;
                tex->GetDesc(&desc);
                info.width = desc.Width;
                info.height = desc.Height;
                safe_release(tex);
            }
            safe_release(res);
        }

        info.last_frame_seen = m_frame_count;
        info.use_count = 1;
        m_dsv_map[dsv] = info;
    }
    else {
        it->second.last_frame_seen = m_frame_count;
        it->second.use_count++;
    }
}

ID3D11DepthStencilView* DepthResolver::pick_best_dsv() {
    ID3D11DepthStencilView* best_dsv = nullptr;
    UINT64 max_size = 0;
    UINT max_use_count = 0;

    // Heuristic: Pick largest DSV seen this frame.
    // Fallback: Pick most frequently used DSV.
    for (auto const& [dsv, info] : m_dsv_map) {
        if (info.last_frame_seen == m_frame_count) {
            UINT64 size = (UINT64)info.width * info.height;
            if (size > max_size) {
                max_size = size;
                best_dsv = dsv;
            }
        }
    }

    if (best_dsv) {
        return best_dsv;
    }

    for (auto const& [dsv, info] : m_dsv_map) {
        if (info.use_count > max_use_count) {
            max_use_count = info.use_count;
            best_dsv = dsv;
        }
    }

    return best_dsv;
}

void DepthResolver::on_present(ID3D11Device* device, ID3D11DeviceContext* ctx) {
    m_frame_count++;

    ID3D11DepthStencilView* dsv_to_resolve = pick_best_dsv();

    if (dsv_to_resolve) {
        resolve_dsv(device, ctx, dsv_to_resolve);
    }

    // Clean up old entries
    const UINT64 cleanup_threshold = 1000; // frames
    for (auto it = m_dsv_map.begin(); it != m_dsv_map.end(); ) {
        if (m_frame_count - it->second.last_frame_seen > cleanup_threshold) {
            safe_release(it->second.dsv);
            it = m_dsv_map.erase(it);
        }
        else {
            ++it;
        }
    }
}

ID3D11ShaderResourceView* DepthResolver::get_resolved_depth_srv() {
    return m_resolved_srv;
}

void DepthResolver::resolve_dsv(ID3D11Device* device, ID3D11DeviceContext* ctx, ID3D11DepthStencilView* dsv) {
    // TODO: Implement the actual resolve logic here.
    // This will involve:
    // 1. Checking DSV format and MSAA settings.
    // 2. Creating a compatible SRV (or an intermediate texture if needed).
    // 3. Creating the output texture if it doesn't exist or size is wrong.
    // 4. Dispatching the correct compute shader (MSAA vs. non-MSAA copy).
    // 5. Optionally running a linearization pass.
    LogInfo("Resolving DSV: %p\n", dsv);
}
