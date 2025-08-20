
/*
------------------------------------------------------------------------------
    overlay.cpp
    Developer On-Screen Overlay Rendering
    Part of the PulseV ASI project

    Overview:
    ---------
    Implements a simple ReShade-based overlay window that displays live
    diagnostic and status information relevant to the PulseV runtime.

    Features:
    ---------
      • Displays:
          - Depth export status
          - Shader prewarm status
          - Shader cache status
          - Depth resolve timing in ms
          - Runtime hotkey toggle states
      • Thread-safe data exchange via mutex
      • Automatically positioned/anchored ImGui window

    API:
    ----
      • Render(runtime, data)
          - Renders the overlay with the latest captured diagnostic data.
          - Should be called within ReShade’s on_overlay_present or similar.

      • UpdateData(data)
          - Updates the current overlay data from external systems.
          - Thread-safe using std::mutex.

    Threading:
    ----------
      • Render and UpdateData synchronize using g_data_mutex.
      • UpdateData should be called from outside the render thread.
      • Render must be called on the ReShade callback thread.

    Dependencies:
    -------------
      • ReShade API (effect_runtime)
      • Dear ImGui

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#include "pulseV_addon.hpp"
#include "overlay.h"
#include <reshade.hpp>
#include <imgui.h>
#include <unordered_map>
#include <string>
#include <variant>
#include <mutex>  // <<< REQUIRED for std::mutex and std::lock_guard


namespace Overlay {

    static OverlayData g_overlay_data;
    static std::mutex  g_data_mutex;

    void Render(reshade::api::effect_runtime* /*runtime*/, const OverlayData& /*unused*/)
    {
        // Copy under lock, then render without holding the mutex
        OverlayData snapshot;
        {
            std::lock_guard<std::mutex> lock(g_data_mutex);
            snapshot = g_overlay_data;
        }

        ImGui::SetNextWindowPos(ImVec2(10, 10), ImGuiCond_FirstUseEver);
        ImGui::SetNextWindowSize(ImVec2(350, 200), ImGuiCond_FirstUseEver);
        ImGui::Begin("PulseV Info", nullptr,
            ImGuiWindowFlags_NoTitleBar |
            ImGuiWindowFlags_AlwaysAutoResize |
            ImGuiWindowFlags_NoMove |
            ImGuiWindowFlags_NoResize |
            ImGuiWindowFlags_NoSavedSettings);

        ImGui::Text("Depth Status: %s", snapshot.depth_status.c_str());
        ImGui::Text("Prewarm Status: %s", snapshot.prewarm_status.c_str());
        ImGui::Text("Cache Status: %s", snapshot.cache_status.c_str());
        ImGui::Text("Resolve Time: %.2f ms", snapshot.resolve_time_ms);

        ImGui::Separator();
        ImGui::Text("Hotkeys:");
        for (const auto& state : snapshot.hotkey_states) {
            ImGui::TextUnformatted(state.c_str());
        }

        ImGui::End();
    }

    void UpdateData(const OverlayData& data)
    {
        std::lock_guard<std::mutex> lock(g_data_mutex);
        g_overlay_data = data;
    }

} // namespace Overlay
