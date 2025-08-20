/*
------------------------------------------------------------------------------
    overlay.h
    Developer Overlay Interface
    Part of the PulseV ASI project

    Overview:
    ---------
    Declares the interface for PulseV's on-screen debug overlay, which renders
    real-time status information using ReShade + ImGui.

    Types:
    ------
      • OverlayData
          - Data structure holding all overlay-relevant state.
          - Includes depth export status, shader diagnostics, and hotkey states.
          - `resolve_time_ms` gives last-frame depth resolve duration.

    API:
    ----
      • void Render(effect_runtime* runtime, const OverlayData& data)
          - Renders the overlay window to the active ReShade runtime.
          - Should be invoked during ReShade's render callback.
      
      • void UpdateData(const OverlayData& data)
          - Replaces the internal overlay data with the given contents.
          - Thread-safe: guarded by internal mutex.
          - Should be called by game systems when overlay state changes.

    Notes:
    ------
      • OverlayData is stored internally and protected via mutex.
      • The `data` parameter to Render is ignored (currently unused).
           • Window layout and positioning are static for now.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#pragma once
#include <string>
#include <vector>
#include <reshade.hpp>

namespace Overlay {
    struct OverlayData {
        std::string depth_status;
        std::string prewarm_status;
        std::string cache_status;
        std::vector<std::string> hotkey_states;
        float resolve_time_ms = 0.0f;
    };

    // Renders the overlay using the latest internal snapshot
    void Render(reshade::api::effect_runtime* runtime, const OverlayData& /*unused*/);

    // Thread-safe update of the internal snapshot
    void UpdateData(const OverlayData& data);
}

