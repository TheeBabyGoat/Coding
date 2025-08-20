/*
------------------------------------------------------------------------------
    reshade_data.cpp
    ReShade Swapchain Resolution Tracking
    Part of the PulseV ASI project

    Overview:
    ---------
    Tracks and exposes the active render target resolution based on the first
    initialized ReShade swapchain. Ensures consistency for resolution-aware
    shader behavior, overlays, and shared memory consumers.

    Responsibilities:
    -----------------
      • Handles `on_init_swapchain` callback from ReShade.
      • Captures and stores the resolution of the first swapchain that owns a
        valid render target.
      • Ignores subsequent swapchains (e.g., overlays or secondary views).
      • Exposes a getter for other modules via `get_render_target_resolution()`.

    Behavior:
    ---------
      • First swapchain HWND is stored as a guard (`first_swapchain_hwnd`).
      • Only accepts swapchains with usage flag `resource_usage::render_target`.
      • Logs the detected resolution for debugging purposes.

    Internal State:
    ---------------
      • `render_target_resolution`: Resolution of the first valid swapchain.
      • `first_swapchain_hwnd`: Guards against handling multiple windows.

    Public API:
    -----------
      • void on_init_swapchain(reshade::api::swapchain*, bool resize)
          - Called by ReShade when a swapchain is initialized or resized.
          - Captures the back buffer resolution once.

      • const UInt2 get_render_target_resolution()
          - Returns the previously captured render target dimensions.
          - Returns {0,0} if no valid swapchain has been processed yet.

    Notes:
    ------
      • Does not support dynamic updates if the game switches resolution after
        initialization.
      • `UInt2` is expected to be a simple struct with `uint32_t x, y`.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#include "reshade_data.hpp"


static UInt2 render_target_resolution = { 0, 0 };
static void *first_swapchain_hwnd = NULL;

void on_init_swapchain(reshade::api::swapchain *swapchain, bool resize)
{
	void *hwnd = swapchain->get_hwnd();

	if (first_swapchain_hwnd == NULL) {
		first_swapchain_hwnd = hwnd;
	}

	if (hwnd != first_swapchain_hwnd) {
		return;
	}

	const auto &back_buffer = swapchain->get_device()->get_resource_desc(swapchain->get_current_back_buffer());

	if (static_cast<int>(back_buffer.usage & reshade::api::resource_usage::render_target) == 0) {
		return;
	}

	LOG(("Detected resolution: " + std::to_string(back_buffer.texture.width) + "x" + std::to_string(back_buffer.texture.height)).c_str());

	render_target_resolution = {
		back_buffer.texture.width,
		back_buffer.texture.height
	};
}

const UInt2 get_render_target_resolution() {
	return render_target_resolution;
}