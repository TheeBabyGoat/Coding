/*
------------------------------------------------------------------------------
    depth_overlay.cpp
    Depth Scanner Overlay (ImGui + ReShade)
    Part of the PulseV ASI project

    Overview:
    ---------
    Implements an ImGui-based overlay for inspecting and controlling depth
    buffer selection in ReShade. It enumerates candidate depth resources,
    displays their properties in a sortable table, and allows users to pin or
    unpin a resource for forced selection.

    Key Points:
    -----------
      • Overlay window:
          - Titled "PulseV • Depth Scanner".
          - Displays all tracked depth candidates or a placeholder message if
            none observed yet.
      • User controls:
          - "Auto-select" button to clear pinned resource.
          - Per-row "Pin"/"Unpin" buttons to manually override auto-selection.
      • Candidate table:
          - Columns: Pin, Selected, Resolution, Format, Samples, Verts, Draws,
            Flags, Last Seen Frame, Resource Handle.
          - Flags column shows indicators: BB (backbuffer-sized),
            FS (fullscreen pass), RevClr (reversed clear detected).
      • Integration:
          - register_overlay() installs the overlay with ReShade.
          - unregister_overlay() removes it (using expected SDK call form).

    Purpose:
    --------
      • Provide a developer/debugging UI to visualize and override the depth
        buffer selection logic implemented in depth.cpp.
      • Facilitate heuristic validation by showing draw stats, formats, and
        clear behavior for each candidate depth resource.
      • Allow forced user selection when auto-heuristics do not yield the
        desired depth.

    Notes:
    ------
      • Requires ImGui to be included before ReShade headers so version macros
        propagate correctly.
      • Uses PRIu64 from <cinttypes> for safe 64-bit frame index printing.
      • ImGui table sizing uses GetTextLineHeightWithSpacing() for consistent
        vertical sizing across themes.
      • Window title prefixed with "PulseV •" to match other PulseV overlays.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#ifndef ImTextureID
#define ImTextureID ImU64
#endif

#include <imgui.h>          // 1) include ImGui first
#include <reshade.hpp>      // 2) this pulls in reshade_overlay.hpp, which now SEES IMGUI_VERSION_NUM
#include <reshade_api.hpp>
#include "depth_scanner_api.hpp"  // 3) your own header AFTER reshade/imgui
#include <algorithm>
#include <cinttypes>


using namespace reshade::api;

namespace depthscan {

static void draw_overlay_impl(effect_runtime* rt)
{
    if (rt == nullptr) return;

    auto items = enumerate(rt);

    if (ImGui::Begin("PulseV • Depth Scanner")) {
        if (items.empty()) {
            ImGui::TextUnformatted("No depth candidates observed yet. Move around in-game to populate this list.");
        } else {
            // Controls
            if (ImGui::Button("Auto-select")) {
                clear_forced(rt);
            }
            ImGui::SameLine();
            ImGui::TextDisabled("Click a row to pin / unpin.");

            ImGui::Separator();

            ImGuiTableFlags flags = ImGuiTableFlags_RowBg | ImGuiTableFlags_BordersOuter | ImGuiTableFlags_BordersV
                                  | ImGuiTableFlags_Resizable | ImGuiTableFlags_Reorderable | ImGuiTableFlags_Sortable
                                  | ImGuiTableFlags_ScrollY | ImGuiTableFlags_SizingFixedFit;
            if (ImGui::BeginTable("depth_scan_table", 10, flags, ImVec2(0, ImGui::GetTextLineHeightWithSpacing() * 18))) {
                ImGui::TableSetupScrollFreeze(0, 1);
                ImGui::TableSetupColumn("Pin", ImGuiTableColumnFlags_NoSort | ImGuiTableColumnFlags_WidthFixed, 36.0f);
                ImGui::TableSetupColumn("Selected", ImGuiTableColumnFlags_NoSort | ImGuiTableColumnFlags_WidthFixed, 70.0f);
                ImGui::TableSetupColumn("Resolution", ImGuiTableColumnFlags_DefaultSort | ImGuiTableColumnFlags_WidthFixed, 110.0f);
                ImGui::TableSetupColumn("Format", ImGuiTableColumnFlags_WidthFixed, 80.0f);
                ImGui::TableSetupColumn("Samples", ImGuiTableColumnFlags_WidthFixed, 70.0f);
                ImGui::TableSetupColumn("Verts", ImGuiTableColumnFlags_PreferSortDescending, 70.0f);
                ImGui::TableSetupColumn("Draws", ImGuiTableColumnFlags_PreferSortDescending, 70.0f);
                ImGui::TableSetupColumn("Flags", ImGuiTableColumnFlags_WidthStretch);
                ImGui::TableSetupColumn("Last Seen", ImGuiTableColumnFlags_WidthFixed, 90.0f);
                ImGui::TableSetupColumn("Handle", ImGuiTableColumnFlags_WidthFixed, 120.0f);
                ImGui::TableHeadersRow();

                int idx = 0;
                for (const auto& c : items) {
                    ImGui::TableNextRow();
                    ImGui::TableSetColumnIndex(0);
                    bool pinned = c.is_forced;
                    ImGui::PushID(idx);
                    if (pinned) {
                        if (ImGui::SmallButton("Unpin")) {
                            force_select(rt, {0});
                        }
                    } else {
                        if (ImGui::SmallButton("Pin")) {
                            force_select(rt, c.res);
                        }
                    }

                    ImGui::TableSetColumnIndex(1);
                    if (c.is_selected) ImGui::TextUnformatted("✔ current");

                    ImGui::TableSetColumnIndex(2);
                    ImGui::Text("%ux%u", c.desc.texture.width, c.desc.texture.height);

                    ImGui::TableSetColumnIndex(3);
                    ImGui::Text("%d", static_cast<int>(c.desc.texture.format));

                    ImGui::TableSetColumnIndex(4);
                    ImGui::Text("%u", c.desc.texture.samples);

                    ImGui::TableSetColumnIndex(5);
                    ImGui::Text("%u", c.verts);

                    ImGui::TableSetColumnIndex(6);
                    ImGui::Text("%u", c.draws);

                    ImGui::TableSetColumnIndex(7);
                    if (c.backbuffer_size) ImGui::TextDisabled("BB ");
                    ImGui::SameLine();
                    if (c.gta_fullscreen) ImGui::TextDisabled("FS ");
                    ImGui::SameLine();
                    if (c.reversed_clear) ImGui::TextDisabled("RevClr ");

                    ImGui::TableSetColumnIndex(8);
                    ImGui::Text("%" PRIu64, c.last_seen_frame);

                    ImGui::TableSetColumnIndex(9);
                    ImGui::Text("0x%llX", static_cast<unsigned long long>(c.res.handle));

                    ImGui::PopID();
                    ++idx;
                }
                ImGui::EndTable();
            }
        }
    }
    ImGui::End();
}

void register_overlay()
{
    reshade::register_overlay("Depth Scanner", &draw_overlay_impl);
}

void unregister_overlay()
{
    // Use the form your ReShade SDK expects. If 1-arg doesn’t compile, use the 2-arg form:
    // reshade::unregister_overlay("Depth Scanner", &draw_overlay_impl);
    reshade::unregister_overlay("Depth Scanner", &draw_overlay_impl);
}

} // namespace depthscan
