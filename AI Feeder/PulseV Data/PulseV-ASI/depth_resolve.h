/*
------------------------------------------------------------------------------
    depth_resolve.h
    PulseV Depth Resolver Interface (DX11)

    Overview:
    ---------
    Declares the `DepthResolver` class responsible for tracking depth-stencil
    views (DSVs) during rendering and exposing the resolved linear depth as
    a shader resource for effects and diagnostics.

    Purpose:
    --------
    • Track all active DSVs across OMSetRenderTargets calls.
    • Select the most relevant DSV per frame using heuristics.
    • Manage and expose an R32F resolved depth texture and SRV.
    • Prepare for compute shader-based depth copy and linearization.

    Public Methods:
    ---------------
    • on_om_set_render_targets(ID3D11DepthStencilView*)
        - Called when a DSV is bound; tracks and catalogs it.
    • on_present(ID3D11Device*, ID3D11DeviceContext*)
        - Called every frame; resolves best DSV to internal buffer.
    • release_resources()
        - Releases all internal COM objects and clears tracked state.
    • get_resolved_depth_srv()
        - Returns SRV pointing to the latest resolved depth texture.

    Internal Details:
    -----------------
    • DsvInfo struct:
        - Holds resolution, lifetime, and usage metadata per DSV.
    • Heuristic selection:
        - Prefers largest DSV seen in current frame.
        - Falls back to most-used DSV if none were seen.
    • Resource Handles:
        - `m_resolved_tex`: Output texture for resolved depth (R32F).
        - `m_resolved_srv`: Shader Resource View (bound to ReShade).
        - `m_resolved_uav`: Placeholder for compute shader output.

    Design Notes:
    -------------
    • Thread safety not guaranteed — call only from render thread.
    • LRU cleanup purges old/unused DSVs after ~1000 frames.
    • Actual resolve logic (MSAA copy, linearization) is stubbed out
      in the implementation and will be added in later passes.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#pragma once
#include <d3d11.h>
#include <vector>
#include <map>

class DepthResolver {
public:
    DepthResolver();
    ~DepthResolver();

    void on_om_set_render_targets(ID3D11DepthStencilView* dsv);
    void on_present(ID3D11Device* device, ID3D11DeviceContext* ctx);
    void release_resources();

    ID3D11ShaderResourceView* get_resolved_depth_srv();

private:
    struct DsvInfo {
        ID3D11DepthStencilView* dsv = nullptr;
        UINT64 last_frame_seen = 0;
        UINT use_count = 0;
        UINT width = 0;
        UINT height = 0;
    };

    void resolve_dsv(ID3D11Device* device, ID3D11DeviceContext* ctx, ID3D11DepthStencilView* dsv);
    ID3D11DepthStencilView* pick_best_dsv();

    // State
    UINT64 m_frame_count = 0;
    std::map<ID3D11DepthStencilView*, DsvInfo> m_dsv_map;

    // Resolved output
    ID3D11Texture2D* m_resolved_tex = nullptr;
    ID3D11ShaderResourceView* m_resolved_srv = nullptr;
    ID3D11UnorderedAccessView* m_resolved_uav = nullptr;
};
