/*
------------------------------------------------------------------------------
    hotkeys.h
    Developer Hotkey Controls for PulseV Runtime
    Part of the PulseV ASI project

    Overview:
    ---------
    Declares runtime-accessible hotkey toggles used during development and
    debugging. These toggles allow quick control of optional features
    such as verbose logging, shader resource view (SRV) hooking, and
    depth binding behavior.

    Features:
    ---------
      • F9  – Toggle verbose logging output.
      • F8  – Toggle pixel shader SRV hooking logic.
      • F7  – Toggle binding of resolved depth texture to t12 slot.

    API:
    ----
      • process_hotkeys()
          - Polls for hotkey input (should be called once per frame).

      • is_log_level_toggled()
          - Returns current state of F9-controlled log toggle.

      • is_srv_hook_toggled()
          - Returns current state of F8-controlled SRV hook toggle.

      • is_depth_binding_toggled()
          - Returns current state of F7-controlled depth binding toggle.

    Implementation Notes:
    ---------------------
      • Internally debounced using static state.
      • Uses GetAsyncKeyState (Win32 only).
      • Only responds when the game window is focused.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/
#pragma once

namespace Hotkeys {
    void process_hotkeys();

    bool is_log_level_toggled();
    bool is_srv_hook_toggled();
    bool is_depth_binding_toggled();
}
