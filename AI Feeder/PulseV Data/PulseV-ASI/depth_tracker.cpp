/*
------------------------------------------------------------------------------
    depth_tracker.cpp
    Direct3D 11 Depth Tracker (heuristic buffer selection + resolve)
    Part of the PulseV ASI project

    Overview:
    ---------
    Implements a lightweight tracker for D3D11 depth-stencil usage. Tracks all
    depth resources bound as DSVs, accumulates per-frame draw statistics, and
    selects the most likely scene depth buffer at present time. The chosen
    buffer is resolved into a single-sample R32_FLOAT texture and exposed via
    an SRV for external sampling.

    Key Points:
    -----------
       Resource tracking:
          - onBindDSV(): remembers each bound depth resource and caches its
            dimensions, sample count, and texture pointer.
          - onDraw(): increments draw and vertex counters for the current DSV.
       Heuristic selection:
          - onPresent(): scores candidates per frame.
              * Strong bias toward backbuffer-sized depth.
              * Adds weight for draw count and vertex count.
          - Highest-scoring resource is resolved for external use.
       Resolve path:
          - buildResolved(): allocates an R32_FLOAT texture + SRV if needed.
          - Performs CopyResource from the tracked depth texture when possible.
          - Detects MSAA depth and warns that a shader resolve pass is required
            (stubbed as TODO).
       Cleanup:
          - release(): frees SRV/texture and clears tracking maps.

    Purpose:
    --------
       Provide a standalone, minimal implementation of heuristic depth
        detection for DX11 titles.
       Enable sampling of the chosen depth buffer by ReShade or external
        modules, even if the game does not expose an SRV alias by default.
       Act as a simplified alternative to the more advanced depth_scanner
        module.

    Notes:
    ------
       Thread-safety: guarded with std::mutex for bind/draw/present/release.
       CopyResource may fail for pure DSV formats without SRV aliases 
        engine behavior varies. A custom shader resolve is recommended for
        robust MSAA handling.
       Logging performed via pv_log() from logging_stub.hpp.

    License:
    --------
    Internal development code  distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#include "depth_tracker.hpp"
#include "logging_stub.hpp"
#include "shader_cache.h"
#include "pulsev_config.h"
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

static DXGI_FORMAT DepthToSRVFormat(DXGI_FORMAT fmt)
{
    switch (fmt) {
        case DXGI_FORMAT_R32_TYPELESS:          return DXGI_FORMAT_R32_FLOAT;
        case DXGI_FORMAT_R24G8_TYPELESS:        return DXGI_FORMAT_R24_UNORM_X8_TYPELESS;
        case DXGI_FORMAT_R32G8X24_TYPELESS:     return DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
        case DXGI_FORMAT_D32_FLOAT:             return DXGI_FORMAT_R32_FLOAT;
        case DXGI_FORMAT_D24_UNORM_S8_UINT:     return DXGI_FORMAT_R24_UNORM_X8_TYPELESS;
        case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:  return DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
        default: return DXGI_FORMAT_UNKNOWN;
    }
}

struct LinearizeParamsCB { float zNear, zFar, gReversedDepth, _pad; };
static ID3D11Buffer* gCB_Linearize = nullptr;
static ID3D11ComputeShader* gCS_MSAA_LinearAvg = nullptr;
static ID3D11ComputeShader* gCS_Copy = nullptr;

static void EnsureCS(ID3D11Device* dev)
{
    if (gCS_MSAA_LinearAvg && gCS_Copy) return;

    // Let ShaderCache decide the base cache directory (LocalAppData\PulseV\cache)
    // and we give it a subkey under that directory.
    ShaderCache::GetOrCompileShader(
        dev,
        L"depth_resolve\\msaa_linearavg.cso",
        L"./shaders/depth_resolve.hlsl",
        "kCS_MSAA_LinearAvg",
        "cs_5_0",
        &gCS_MSAA_LinearAvg
    );

    ShaderCache::GetOrCompileShader(
        dev,
        L"depth_resolve\\copy.cso",
        L"./shaders/depth_resolve.hlsl",
        "kCS_Copy",
        "cs_5_0",
        &gCS_Copy
    );
}

static void EnsureCB(ID3D11Device* dev)
{
    if (gCB_Linearize) return;
    D3D11_BUFFER_DESC bd = {};
    bd.ByteWidth = sizeof(LinearizeParamsCB);
    bd.Usage = D3D11_USAGE_DYNAMIC;
    bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
    bd.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
    dev->CreateBuffer(&bd, nullptr, &gCB_Linearize);
}

template<typename T> static inline void safe_release(T*& p) { if (p) { p->Release(); p = nullptr; } }

void DepthTracker::onBindDSV(ID3D11DepthStencilView* dsv)
{
    std::lock_guard<std::mutex> lock(mtx_);
    current_ = dsv;
    if (!dsv) return;

    if (map_.count(dsv) == 0) {
        DepthStats ds = {};
        ds.dsv = dsv;

        ID3D11Resource* res = nullptr;
        dsv->GetResource(&res);
        if (res) {
            ID3D11Texture2D* t2d = nullptr;
            if (SUCCEEDED(res->QueryInterface(__uuidof(ID3D11Texture2D), (void**)&t2d))) {
                ds.tex = t2d;
                D3D11_TEXTURE2D_DESC td = {};
                t2d->GetDesc(&td);
                ds.width = td.Width;
                ds.height = td.Height;
                ds.samples = td.SampleDesc.Count;
            }
            res->Release();
        }
        map_[dsv] = ds;
    }
}

void DepthTracker::onDraw(UINT primCount)
{
    std::lock_guard<std::mutex> lock(mtx_);
    if (!current_) return;
    auto it = map_.find(current_);
    if (it == map_.end()) return;
    it->second.draws++;
    it->second.verts += primCount;
}

void DepthTracker::buildResolved(ID3D11Device* dev, ID3D11DeviceContext* ctx, const DepthStats& ds)
{
    // (Re)create resolved target if needed
    if (!sel_.resolvedTex || sel_.desc.Width != ds.width || sel_.desc.Height != ds.height) {
        safe_release(sel_.resolvedSRV);
        safe_release(sel_.resolvedTex);

        D3D11_TEXTURE2D_DESC td = {};
        td.Width = ds.width;  td.Height = ds.height;
        td.MipLevels = 1;     td.ArraySize = 1;
        td.Format = DXGI_FORMAT_R32_FLOAT;
        td.SampleDesc.Count = 1;
        td.Usage = D3D11_USAGE_DEFAULT;
        td.BindFlags = D3D11_BIND_SHADER_RESOURCE | D3D11_BIND_UNORDERED_ACCESS;

        if (FAILED(dev->CreateTexture2D(&td, nullptr, &sel_.resolvedTex))) {
            pv_log("DepthTracker: CreateTexture2D failed");
            return;
        }
        // Create UAV for compute output
        safe_release(sel_.resolvedUAV);
        D3D11_UNORDERED_ACCESS_VIEW_DESC uavd = {};
        uavd.Format = td.Format;
        uavd.ViewDimension = D3D11_UAV_DIMENSION_TEXTURE2D;
        if (FAILED(dev->CreateUnorderedAccessView(sel_.resolvedTex, &uavd, &sel_.resolvedUAV))) {
            pv_log("DepthTracker: CreateUAV failed");
            return;
        }
        sel_.desc = td;

        D3D11_SHADER_RESOURCE_VIEW_DESC sd = {};
        sd.Format = td.Format;
        sd.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
        sd.Texture2D.MostDetailedMip = 0;
        sd.Texture2D.MipLevels = 1;

        if (FAILED(dev->CreateShaderResourceView(sel_.resolvedTex, &sd, &sel_.resolvedSRV))) {
            pv_log("DepthTracker: CreateSRV failed");
            return;
        }
    }

    if (!ds.tex) return;

    // NOTE: Direct CopyResource from depth often isnt valid unless an SRV alias exists.
    // For MSAA depth or DSV-only formats, add a tiny PS/CS pass to sample depth and write R32_FLOAT.
    D3D11_TEXTURE2D_DESC srcd = {};
    ds.tex->GetDesc(&srcd);
    // Compute resolve path (handles MSAA and non-MSAA reliably)
    EnsureCS(dev);
    EnsureCB(dev);

    // Build SRV for depth input (MSAA or non-MSAA)
    DXGI_FORMAT srvFmt = DepthToSRVFormat(srcd.Format);
    if (srvFmt == DXGI_FORMAT_UNKNOWN) {
        pv_log("DepthTracker: Unsupported depth format for SRV");
        return;
    }

    D3D11_SHADER_RESOURCE_VIEW_DESC sd = {};
    sd.Format = srvFmt;
    if (srcd.SampleDesc.Count > 1) {
        sd.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2DMS;
    } else {
        sd.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
        sd.Texture2D.MostDetailedMip = 0;
        sd.Texture2D.MipLevels = 1;
    }

    ID3D11ShaderResourceView* depthSRV = nullptr;
    if (FAILED(dev->CreateShaderResourceView(ds.tex, &sd, &depthSRV))) {
        pv_log("DepthTracker: CreateShaderResourceView failed");
        return;
    }

    // Update constants
    D3D11_MAPPED_SUBRESOURCE m = {};
    if (SUCCEEDED(ctx->Map(gCB_Linearize, 0, D3D11_MAP_WRITE_DISCARD, 0, &m))) {
        auto* p = (LinearizeParamsCB*)m.pData;
        p->zNear = gCfg.depth.near_plane;
        p->zFar  = gCfg.depth.far_plane;
        p->gReversedDepth = 1.0f; // GTAV uses reversed depth
        p->_pad = 0.0f;
        ctx->Unmap(gCB_Linearize, 0);
    }

    // Unbind DSV to avoid hazards (cannot be DSV and SRV/UAV at once)
    ctx->OMSetRenderTargets(0, nullptr, nullptr);

    // Bind CS pipeline
    ID3D11ShaderResourceView* srvs[1] = { depthSRV };
    ID3D11UnorderedAccessView* uavs[1] = { sel_.resolvedUAV };
    ctx->CSSetConstantBuffers(0, 1, &gCB_Linearize);
    ctx->CSSetShaderResources(0, 1, srvs);
    ctx->CSSetUnorderedAccessViews(0, 1, uavs, nullptr);

    if (srcd.SampleDesc.Count > 1) {
        ctx->CSSetShader(gCS_MSAA_LinearAvg, nullptr, 0);
    } else {
        ctx->CSSetShader(gCS_Copy, nullptr, 0);
    }

    const UINT gx = (ds.width + 15) / 16;
    const UINT gy = (ds.height + 15) / 16;
    ctx->Dispatch(gx, gy, 1);

    // Unbind
    ID3D11UnorderedAccessView* nullUAV[1] = { nullptr };
    ID3D11ShaderResourceView*  nullSRV[1] = { nullptr };
    ctx->CSSetUnorderedAccessViews(0, 1, nullUAV, nullptr);
    ctx->CSSetShaderResources(0, 1, nullSRV);
    ctx->CSSetShader(nullptr, nullptr, 0);

    depthSRV->Release();
    
}

void DepthTracker::onPresent(ID3D11Device* dev, ID3D11DeviceContext* ctx, const D3D11_TEXTURE2D_DESC& backDesc)
{
    std::lock_guard<std::mutex> lock(mtx_);
    if (map_.empty()) return;

    ID3D11DepthStencilView* best = nullptr;
    UINT64 bestScore = 0;

    for (auto& kv : map_) {
        const DepthStats& ds = kv.second;
        UINT64 score = 0;
        if (ds.width == backDesc.Width && ds.height == backDesc.Height) score += (1ull << 60);
        score += (ds.draws << 20);
        score += ds.verts;
        if (score > bestScore) { bestScore = score; best = kv.first; }
    }
    if (!best) return;

    buildResolved(dev, ctx, map_[best]);

    // Reset counters for next frame
    for (auto& kv : map_) {
        kv.second.draws = kv.second.verts = 0;
    }
}

void DepthTracker::release()
{
    std::lock_guard<std::mutex> lock(mtx_);
    safe_release(sel_.resolvedSRV);
    safe_release(sel_.resolvedTex);
    map_.clear();
    current_ = nullptr;
}
