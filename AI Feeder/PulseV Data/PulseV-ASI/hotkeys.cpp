/*
------------------------------------------------------------------------------
    hotkeys.cpp
    Developer Hotkey Controls for PulseV Runtime
    Part of the PulseV ASI project

    Overview:
    ---------
    Provides hotkey-driven toggles for runtime debugging and diagnostics.
    Includes debounced input handlers and query functions for runtime
    features such as logging, SRV hooks, and depth binding.

    Hotkeys:
    --------
      • F9 – Toggle verbose log level.
      • F8 – Toggle pixel shader SRV hooking.
      • F7 – Toggle binding of resolved depth to t12.

    Core Functions:
    ---------------
      • void process_hotkeys();
        - Call once per frame to poll hotkey state.

      • bool is_log_level_toggled();
      • bool is_srv_hook_toggled();
      • bool is_depth_binding_toggled();
        - Query toggle state of each respective feature.

    Notes:
    ------
      • All hotkeys are debounced using internal state.
      • Uses GetAsyncKeyState for polling (Win32-specific).
      • Requires foreground keyboard focus to respond.

    Usage:
    ------
      - Typically invoked from within the main Present hook or frame update.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#include "hotkeys.h"
#include <Windows.h>

namespace Hotkeys {

    // Basic debouncing
    static bool g_log_level_toggled = false;
    static bool g_srv_hook_toggled = false;
    static bool g_depth_binding_toggled = false;

    static bool is_key_pressed_once(int vk) {
        static bool pressed[256] = { false };
        if (GetAsyncKeyState(vk) & 0x8000) {
            if (!pressed[vk]) {
                pressed[vk] = true;
                return true;
            }
        }
        else {
            pressed[vk] = false;
        }
        return false;
    }

    void process_hotkeys() {
        if (is_key_pressed_once(VK_F9)) {
            g_log_level_toggled = !g_log_level_toggled;
        }
        if (is_key_pressed_once(VK_F8)) {
            g_srv_hook_toggled = !g_srv_hook_toggled;
        }
        if (is_key_pressed_once(VK_F7)) {
            g_depth_binding_toggled = !g_depth_binding_toggled;
        }
    }

    bool is_log_level_toggled() {
        return g_log_level_toggled;
    }

    bool is_srv_hook_toggled() {
        return g_srv_hook_toggled;
    }

    bool is_depth_binding_toggled() {
        return g_depth_binding_toggled;
    }

} // namespace Hotkeys
