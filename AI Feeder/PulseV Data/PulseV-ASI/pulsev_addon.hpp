/*
------------------------------------------------------------------------------
    pulseV_addon.hpp
    ReShade Addon Integration Header for PulseV Runtime

    Overview:
    ---------
    Declares and includes all necessary types and platform-specific headers
    required for the PulseV ReShade addon functionality. Acts as the central
    hub for exposing engine data to shaders via ReShade uniform annotations.

    This file is shared by `PulseV_AddonGlue.cpp` and related modules that
    bridge game data extraction with ReShade’s effect runtime.

    Key Inclusions:
    ---------------
      • ReShade API:
          - `reshade.hpp` and `imgui.h` for runtime control and overlay UI
          - Uses ReShade’s `effect_runtime`, `device`, `command_list`, etc.

      • PulseV Core Types:
          - `types.hpp`: math primitives (Float3, Float4x4, etc.)
          - `reshade_data.hpp`: type aliases and uniform value variants
          - `data_reader.hpp`: runtime accessor for game-derived state
          - `depth.hpp`: access to resolved depth buffers and stats

      • Game-Specific Data Sources:
          - Compile-time selection based on RFX_GAME_GTAV or RFX_GAME_RDR1
          - Includes `gtav_source.hpp` or `rdr1_source.hpp`
          - Each source implements `DataSource` interface for metadata

    Purpose:
    --------
      • Define dependencies and includes for PulseV’s ReShade injection system.
      • Provide conditional compilation logic for selecting the correct
        game-specific data source (GTA V or RDR1).
      • Serve as a bridge between the ReShade hook code and the engine data
        made available through PulseV’s data capture system.

    Constraints:
    ------------
      • Must define a valid `RFX_GAME_*` macro at build time, e.g.:
          - `RFX_GAME_GTAV`
          - `RFX_GAME_RDR1`
      • Will fail to compile if no valid game is selected via `#error`.

    Notes:
    ------
      • This header is tightly coupled with `PulseV_AddonGlue.cpp`.
      • Do not include this from unrelated translation units – it assumes
        the full ReShade runtime is available and active.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#pragma once 

#include "imgui.h"
#include "reshade.hpp"
#include "types.hpp"
#include "reshade_data.hpp"
#include "game_data_source.hpp"
#include "data_reader.hpp"
#include "depth.hpp"

#if defined RFX_GAME_GTAV
#include "gtav_source.hpp"
#elif defined RFX_GAME_RDR1
#include "rdr1_source.hpp"
#else
#error "A valid target (RFX_GAME_?) must be set!"
#endif