/*
------------------------------------------------------------------------------
    depth.hpp
    Public Interface for DX11 Depth Switcher
    Part of the PulseV ASI project

    Overview:
    ---------
    Declares the minimal public entry points for the Direct3D 11 depth
    switcher module. These functions register and unregister the ReShade
    add-on event hooks implemented in depth.cpp.

    Key Points:
    -----------
      • register_depth_switcher():
          - Installs all required ReShade callbacks for device, queue,
            command list, resource creation, draw events, and effect runtime.
          - Enables automatic depth-stencil selection and binding.
      • unregister_depth_switcher():
          - Removes all hooks and restores ReShade state to its baseline.
      • DX11-only: guarded internally against non-D3D11 devices.

    Purpose:
    --------
      • Provide a simple, explicit API for enabling or disabling the depth
        binding logic at runtime.
      • Keep the implementation details (tracking, heuristics, SRV creation)
        private to depth.cpp.

    Notes:
    ------
      • Intended to be called from ASI initialization and teardown paths.
      • Safe to call multiple times; repeated registrations are idempotent.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#pragma once

// Minimal public surface for the DX11 depth switcher.
// Implementations are in depth.cpp.

void register_depth_switcher();
void unregister_depth_switcher();
