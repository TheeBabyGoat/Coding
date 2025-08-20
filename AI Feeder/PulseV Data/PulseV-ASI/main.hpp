/*
------------------------------------------------------------------------------
    main.hpp
    PulseV Development Test Entry Points
    Part of the PulseV ASI project

    Overview:
    ---------
    Defines placeholder entry points for initializing and cleaning up a
    developer testing module within the PulseV ASI runtime. Currently a stub,
    but serves as the entry point for any ImGui overlays or runtime test logic.

    Key Points:
    -----------
      • Entry Points:
          - InitDevTest(HINSTANCE): intended to register dev UI, debug panels,
            or test hooks at runtime.
          - CleanupDevTest(HINSTANCE): performs teardown or deregistration of
            dev-specific components.

      • Dependencies:
          - ImGui: UI framework expected for overlay development.
          - PulseV Core: includes `types.hpp`, `depth.hpp`, `game_data_source.hpp`,
            and `data_reader.hpp`, making it easy to build debug views for any
            camera, matrix, depth, or weather state.

      • Current State:
          - Both functions are no-ops with `(void)hinst` to suppress warnings.
          - Meant to be expanded with developer overlay widgets or feature toggles.

    Purpose:
    --------
      • Scaffold for runtime testing, diagnostics, and development UI.
      • May host toggles, sliders, matrix displays, and debug info panels.
      • Provides a clean boundary for experimental or non-production overlays.

    Notes:
    ------
      • This file is safe to stub or exclude in production builds.
      • You can connect these entry points to your ReShade addon system or
        call them explicitly during `DllMain` attach/detach.
      • Be sure to isolate dev/test-only state to avoid runtime pollution.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/


#pragma once 

#include <string>
#include <unordered_map>
#include "imgui.h"
#include "types.hpp"
#include "game_data_source.hpp"
#include "data_reader.hpp"
#include "depth.hpp"



#pragma once 

#include <string>
#include <unordered_map>
#include "imgui.h"
#include "types.hpp"
#include "game_data_source.hpp"
#include "data_reader.hpp"
#include "depth.hpp"

