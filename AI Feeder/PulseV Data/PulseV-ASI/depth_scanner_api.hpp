/*
------------------------------------------------------------------------------
    depth_scanner_api.hpp
    Public API for Depth Scanner (ReShade Integration)
    Part of the PulseV ASI project

    Overview:
    ---------
    Declares the public-facing interface for the ReShade depth scanner module.
    This API exposes candidate depth buffer metadata, selection controls, and
    the ImGui-based overlay registration functions.

    Key Points:
    -----------
      • Candidate structure:
          - Wraps a reshade::api::resource and its resource_desc.
          - Tracks per-frame statistics (draws, vertices).
          - Flags for reversed clears, backbuffer-size matches, GTA fullscreen
            heuristic, selection status, and forced pin state.
      • Candidate enumeration:
          - enumerate(rt) returns a snapshot of all tracked candidates sorted
            by the selection heuristic (best-first).
      • Selection control:
          - force_select(rt, res): pins a specific candidate resource.
          - clear_forced(rt): clears the pinned override, restoring auto-select.
      • Overlay integration:
          - register_overlay(): installs the ImGui overlay window.
          - unregister_overlay(): removes the overlay window.

    Purpose:
    --------
      • Provide external modules and overlays with a stable, lightweight
        interface for inspecting and controlling depth buffer selection.
      • Allow UI-driven manual overrides of the automatic selection heuristic.
      • Support ReShade-based visualization for debugging and user tuning.

    Notes:
    ------
      • Enumeration results are snapshots; they may change on subsequent frames.
      • Passing a null resource ({0}) to force_select() is equivalent to calling
        clear_forced().
      • Designed as a minimal, public surface — all detailed logic resides in
        depth.cpp and depth_overlay.cpp.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#pragma once
#include <vector>
#include <string>
#include <reshade_api.hpp>

// Minimal public API for the depth scanning UI (ReShade path)
namespace depthscan {

struct Candidate {
    reshade::api::resource              res;             // underlying depth texture (typeless)
    reshade::api::resource_desc         desc;            // description (size/format/samples)
    uint64_t                            last_seen_frame = 0;
    uint32_t                            draws = 0;
    uint32_t                            verts = 0;
    bool                                reversed_clear = false;  // cleared to != 1.0 at least once
    bool                                backbuffer_size = false; // matches backbuffer W/H
    bool                                gta_fullscreen = false;  // 6 or 12 vertices in 1-2 draws
    bool                                is_selected = false;     // currently bound to "DEPTH"
    bool                                is_forced = false;       // pinned by the user
};

// Enumerate current candidates known to the depth module for a given runtime.
// Returns a snapshot sorted by our selection heuristic (best first).
std::vector<Candidate> enumerate(reshade::api::effect_runtime* rt);

// Pin/unpin a specific candidate. Pass {0} to clear.
void force_select(reshade::api::effect_runtime* rt, reshade::api::resource res);
void clear_forced(reshade::api::effect_runtime* rt);

// Register/unregister the ImGui overlay for the scanner.
void register_overlay();
void unregister_overlay();

} // namespace depthscan
