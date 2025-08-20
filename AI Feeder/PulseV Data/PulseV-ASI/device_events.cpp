/*
------------------------------------------------------------------------------
    device_events.cpp
    Device and Swapchain Event Hooks (PulseV Core)

    Overview:
    ---------
    Provides callbacks for handling graphics device lifecycle events,
    such as device loss, reset, and swapchain resize. Intended to be
    used as central notification points for resource cleanup and reinit.

    Purpose:
    --------
    • Centralize notification of graphics events to resource managers.
    • Provide predictable hooks for handling:
        - Device lost
        - Device reset (before/after)
        - Swapchain resize
    • Prevent resource leaks or crashes by coordinating cleanup and reinitialization.

    Key Hooks:
    ----------
    • on_device_lost()
        - Called when the D3D device is lost. Should release all GPU-dependent resources.
    • on_before_device_reset()
        - Called just before a device reset. Triggers same logic as device lost.
    • on_after_device_reset(ID3D11Device*, ID3D11DeviceContext*)
        - Called after a device reset completes. Should reinitialize GPU resources.
    • on_swapchain_resize(UINT width, UINT height)
        - Called after swapchain is resized. Triggers reallocation of size-dependent resources.

    Design Notes:
    -------------
    • The actual resource managers (depth resolver, shader cache, etc.)
      must be wired up to respond to these events externally.
    • Logging is stubbed for now (`LogInfo` is a no-op).
    • Functions are declared in `device_events.h` within the `DeviceEvents` namespace.

    Usage:
    ------
    These functions should be invoked from the ReShade device event callbacks
    or other D3D hook layers depending on integration architecture.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#include "device_events.h"
// #include "depth_resolve.h" // etc.

// #include "../logging.h" // Assuming a logging header exists
#include <stdio.h>
#define LogInfo(...) // printf(__VA_ARGS__)

namespace DeviceEvents {

    void on_device_lost() {
        LogInfo("Device lost detected.\n");
        // This would call release functions on all systems that hold D3D resources.
        // e.g., g_depth_resolver.release_resources();
        // e.g., g_shader_cache.release_shaders();
    }

    void on_before_device_reset() {
        LogInfo("Device reset imminent.\n");
        // This would call release functions on all systems that hold D3D resources.
        on_device_lost();
    }

    void on_after_device_reset(ID3D11Device* new_device, ID3D11DeviceContext* new_ctx) {
        LogInfo("Device has been reset.\n");
        // This would call init functions on all systems, passing the new device.
        // e.g., g_shader_cache.re_warm(new_device);
    }

    void on_swapchain_resize(UINT width, UINT height) {
        LogInfo("Swapchain resized to %u x %u.\n", width, height);
        // This would call resize-specific functions, e.g. to recreate render targets.
        // e.g., g_depth_resolver.on_resize(width, height);
    }

} // namespace DeviceEvents
