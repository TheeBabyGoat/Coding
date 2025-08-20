/*
------------------------------------------------------------------------------
    reshade_data.hpp
    ReShade Swapchain & Game Memory Utilities
    Part of the PulseV ASI project

    Overview:
    ---------
    Declares interfaces for querying the ReShade swapchain resolution and
    provides lightweight memory reading utilities relative to the game’s base
    address.

    Responsibilities:
    -----------------
      • Declare `on_init_swapchain` to handle ReShade's initialization event.
      • Expose `get_render_target_resolution()` for resolution-aware systems.
      • Define `read_game_memory<T>` for safe game-relative memory reads.

    Key Features:
    -------------
      • `on_init_swapchain`:
          - Hooked by ReShade to detect swapchain creation or resizing.
          - Resolution information is stored internally in `reshade_data.cpp`.

      • `get_render_target_resolution()`:
          - Returns the first captured valid swapchain render resolution.
          - Returned as a `const UInt2&` (struct with width/height).

      • `read_game_memory<T>(offset)`:
          - Templated function to read memory from a fixed offset relative to
            the base module handle.
          - Returns `std::optional<T>` to reflect read success/failure.
          - Lazy-initializes `game_base_addr` via `GetModuleHandle(nullptr)`.
          - Returns `std::nullopt` if the computed pointer is null.

    Usage Notes:
    ------------
      • Intended for non-invasive memory inspection (e.g., camera matrices,
        environment settings).
      • Assumes read-only or passive access — no memory protection changes.
      • Offset is added to base module address for portability.

    Dependencies:
    -------------
      • `reshade.hpp` – for swapchain API.
      • `types.hpp` – for `UInt2`.
      • `util.hpp` – assumed to contain general utilities/macros.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#pragma once

#include <optional>
#include "reshade.hpp"
#include "types.hpp"
#include "util.hpp"


void on_init_swapchain(reshade::api::swapchain *swapchain, bool resize);

extern const UInt2 get_render_target_resolution();


static uintptr_t game_base_addr = NULL;

template <typename T>
extern const std::optional<T> read_game_memory(uintptr_t offset)
{
	if (game_base_addr == NULL) {
		game_base_addr = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));
	}

	uintptr_t address = game_base_addr + offset;
	T *pointer = reinterpret_cast<T *>(address);

	if (pointer == nullptr) {
		return std::nullopt;
	}

	return *pointer;
}