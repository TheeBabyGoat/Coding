/*
------------------------------------------------------------------------------
    dump.h
    PulseV Frame Dumping Interface (Diagnostics Module)

    Overview:
    ---------
    Defines the interface for frame-level diagnostics dumping, intended
    for developer inspection of Direct3D 11 rendering state at runtime.

    Usage:
    ------
    Call Diagnostics::DumpFrame(...) from within a depth or frame capture
    pass, typically guarded by a config check (gCfg.diagnostics.dump_frame).

    Structures:
    -----------
    struct Diagnostics::DsvInfo
        Describes the active depth-stencil view at the time of capture.
        - UINT width           : Width of the DSV surface
        - UINT height          : Height of the DSV surface
        - DXGI_FORMAT format   : DXGI pixel format of the DSV
        - UINT msaa_samples    : MSAA sample count (1 = no MSAA)

    Functions:
    ----------
    void Diagnostics::DumpFrame(
        const std::string& dump_path,
        ID3D11Device* device,
        IDXGISwapChain* swap_chain,
        const DsvInfo& active_dsv_info,
        ID3D11Texture2D* resolved_depth_tex
    );
        - Captures a JSON file describing the current frame's graphics state.
        - Optionally captures depth texture output (currently unimplemented).

    Notes:
    ------
    • Assumes D3D11 runtime (ID3D11Device, IDXGISwapChain).
    • PNG writing is stubbed in implementation and requires external libraries.
    • Output files are timestamped and written to the specified directory.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#pragma once
#include <d3d11.h>
#include <string>

namespace Diagnostics {
    struct DsvInfo {
        UINT width;
        UINT height;
        DXGI_FORMAT format;
        UINT msaa_samples;
    };

    void DumpFrame(
        const std::string& dump_path,
        ID3D11Device* device,
        IDXGISwapChain* swap_chain,
        const DsvInfo& active_dsv_info,
        ID3D11Texture2D* resolved_depth_tex
    );
}
