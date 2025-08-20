/*
------------------------------------------------------------------------------
    dllmain.cpp
    Part of the PulseV ASI module (x64, /std:c++17)

    Overview:
    ---------
    This file implements the entry point and core hooking logic for the PulseV
    graphics overlay / debugging system. It attaches to Direct3D 11 games at
    runtime and provides the following capabilities:

      • DXGI swapchain Present hook (via MinHook) for frame-level interception.
      • Device context hooks (OMSetRenderTargets, PSSetShaderResources) for
        observing and interacting with depth resources.
      • Depth resource capture and resolution:
            - Detects the active scene-sized DepthStencilView (DSV).
            - Creates a typeless Shader Resource View (SRV).
            - Uses a compute shader pipeline to resolve MSAA/non-MSAA depth into
              a single-sample R32_FLOAT texture.
      • Optional integration with ReShade (if PULSV_ENABLE_RESHADE is defined):
            - Registers an add-on and exposes the resolved depth as the semantic
              "PULSV_DEPTH" for use in ReShade effects.
            - Provides overlay UI callbacks and uniform injection.
      • Logging facility with timestamped severity levels.
      • On-disk markers (PulseV.log, PulseV_loaded.txt) for diagnostics.

    Hotkeys (runtime toggles):
    --------------------------
      F9  : Toggle verbose logging to PulseV.log
      F8  : Enable/disable SRV hook logging
      F7  : Bind resolved depth texture to slot t12 for custom shaders

    Build Flags:
    ------------
      PULSV_ENABLE_RESHADE   Enables ReShade add-on integration and overlays.
      RFX_GAME_GTAV          Enables GTA V-specific depth switching logic.

    External Dependencies:
    ----------------------
      - Direct3D 11 (d3d11.lib, dxgi.lib, d3dcompiler.lib)
      - MinHook library for API detouring
      - (Optional) ReShade Add-on SDK
      - depth_scanner_api (PulseV module)

    Key Components:
    ---------------
      - Logging:       Log(), write_loaded_marker()
      - Hooks:         hkPresent, hkOMSetRenderTargets, hkPSSetShaderResources
      - Depth helpers: ensure_in_depth_srv_from_dsv(), ensure_out_targets(),
                       resolve_depth_with_cs()
      - Lifecycle:     InitThread(), uninstall_all(), DllMain()

    Notes:
    ------
      • Designed as an ASI plugin for injection into game processes.
      • Uses a global mutex ("Global\\PulseV_Hooks_Singleton") to prevent
        multiple instances from initializing simultaneously.
      • Cleanly tears down hooks and releases resources on process detach.

    License:
    --------
    Internal development code – distribution subject to project license terms.
  
    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

// ---------- DllMain.cpp    x64, /std:c++17  ----------
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include <d3dcompiler.h>
#include <cstdio>
#include <cstdarg>
#include <atomic>
#include <vector>
#include <cstring>

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "d3dcompiler.lib")

#include "MinHook.h"

// ---------- (optional) ReShade add-on glue ----------
#ifdef PULSV_ENABLE_RESHADE
#include <reshade.hpp>
#include <reshade_api.hpp>
#include "depth_scanner_api.hpp"
using namespace reshade;
using namespace reshade::api;


// ---- Add-on callbacks (implemented in PulseV_AddonGlue.cpp) ----
extern void startup(device* dev);  // addon_event::init_device
extern void on_init_swapchain(swapchain* sc, bool resize);  // addon_event::init_swapchain
extern void inject_uniforms(effect_runtime* rt, command_list* cmd,
    resource_view rtv, resource_view rtv_srgb); // reshade_begin_effects
extern void shaders_reloaded(effect_runtime* rt); // reshade_reloaded_effects
extern void draw_uniforms_overlay(effect_runtime* rt); // overlay // overlay

// Data reader lifetime (owned by .asi)
extern void RegisterPulseVDataSource(HMODULE self);
extern void UnregisterPulseVDataSource(HMODULE self);

#if defined(RFX_GAME_GTAV)
extern void register_depth_switcher();
extern void unregister_depth_switcher();
#endif
#endif // PULSV_ENABLE_RESHADE

#ifdef PULSV_ENABLE_RESHADE
// ...
static void RegisterReShadeAddOn(HMODULE self);
static void UnregisterReShadeAddOn(HMODULE self);
#endif


// ----------------- Globals -----------------
static HMODULE               gModule = nullptr;
static std::atomic<bool>     gReady{ false };

static ID3D11Device* gDev = nullptr;
static ID3D11DeviceContext* gCtx = nullptr;
static std::atomic<bool>     gCtxHooked{ false };

static std::atomic<bool>     gVerbose{ false };        // F9 toggles verbose logging
static std::atomic<bool>     gSRVHookEnabled{ true };  // F8 toggles SRV hook
static void* gPSSetHookTarget = nullptr;

static UINT                  gBackW = 0, gBackH = 0;       // swapchain size
static std::atomic<bool>     gBindDepth{ false };            // F7: bind resolved depth to t12

// Input (game) depth we sniff from DSV
static ID3D11Resource* gDepthRes = nullptr;  // the game's depth resource we last saw
static ID3D11ShaderResourceView* gDepthSRVIn = nullptr;  // SRV to read the game's depth (MSAA or not)
static ID3D11DepthStencilView* gDSVForResolve = nullptr; // set in OMSet, consumed in Present

// Resolved (single-sample) depth we produce
static ID3D11Texture2D* gDepthOutTex = nullptr;  // R32_FLOAT, 1x
static ID3D11UnorderedAccessView* gDepthOutUAV = nullptr;
static ID3D11ShaderResourceView* gDepthOutSRV = nullptr;  // <- expose to ReShade / or bind to t12

// Compute shaders (compiled once)
static ID3D11ComputeShader* gCSResolveMSAA = nullptr; // reads Texture2DMS<float> -> writes R32F
static ID3D11ComputeShader* gCSCopy = nullptr; // reads Texture2D<float>   -> writes R32F

// Track the actual MSAA sample count we saw on the input depth
static UINT gInputSamples = 1;

// One compute shader per MSAA count (index = sample count). 0..32 just to be safe.
static ID3D11ComputeShader* gCSResolveMSAA_ByCount[33] = {};

#ifdef PULSV_ENABLE_RESHADE
static resource_view               gReshadeDepthView = { 0 }; // handle for ReShade binding
#endif

// ----------------- Logging -----------------
static void logf(const char* fmt, ...) {
    char path[MAX_PATH]; GetModuleFileNameA(gModule, path, MAX_PATH);
    char* slash = strrchr(path, '\\'); if (slash) *(slash + 1) = '\0';
    strcat_s(path, "PulseV.log");
    FILE* f = nullptr;
    if (fopen_s(&f, path, "a+") == 0 && f) {
        va_list ap; va_start(ap, fmt); vfprintf(f, fmt, ap); va_end(ap);
        fputc('\n', f); fclose(f);
    }
}
static void write_loaded_marker() {
    char path[MAX_PATH]; GetModuleFileNameA(gModule, path, MAX_PATH);
    char* slash = strrchr(path, '\\'); if (slash) *(slash + 1) = '\0';
    strcat_s(path, "PulseV_loaded.txt");
    HANDLE h = CreateFileA(path, GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
    if (h != INVALID_HANDLE_VALUE) CloseHandle(h);
}
static bool throttle_500ms() { static DWORD last = 0; DWORD now = GetTickCount(); if (now - last < 500) return false; last = now; return true; }

// ============================================================================
// [PULSV STAMP / SECTION A] Build-stamp helpers
// Purpose: Emit a recognizable, single-line stamp into PulseV.log so you can
//          instantly tell which binary is running.
// How it works:
//   • Uses __DATE__/__TIME__ (compile-time) plus optional custom tags.
//   • You can pass extras via Preprocessor Definitions, e.g.:
//       PULSV_BUILD_TAG="\"DEV-msaa-template\""   (note the escaped quotes)
//       PULSV_GIT_SHA="\"a1b2c3d4\""
//   • Call LogBuildStamp() once in InitThread() (see SECTION B).
// ============================================================================

#ifndef PULSV_BUILD_TAG
#define PULSV_BUILD_TAG ""
#endif
#ifndef PULSV_GIT_SHA
#define PULSV_GIT_SHA ""
#endif

// Turn the optional macros into actual char* we can safely inspect.
static const char* kPulsvBuildTag =
#if defined(PULSV_BUILD_TAG)
PULSV_BUILD_TAG
#else
""
#endif
;

static const char* kPulsvGitSha =
#if defined(PULSV_GIT_SHA)
PULSV_GIT_SHA
#else
""
#endif
;

// Optional: prevent duplicate stamps if someone somehow double-inits.
static std::atomic<bool> gStampPrinted{ false };

static void LogBuildStamp()
{
    if (gStampPrinted.exchange(true)) return; // already stamped this run

    // Example output:
    // PulseV build: Aug 20 2025 15:42:10 tag=DEV-msaa-template sha=a1b2c3d4
    logf("PulseV build: %s %s%s%s%s%s",
        __DATE__, __TIME__,
        (kPulsvBuildTag && kPulsvBuildTag[0]) ? " tag=" : "", (kPulsvBuildTag && kPulsvBuildTag[0]) ? kPulsvBuildTag : "",
        (kPulsvGitSha && kPulsvGitSha[0]) ? " sha=" : "", (kPulsvGitSha && kPulsvGitSha[0]) ? kPulsvGitSha : "");
}
// ============================================================================

// ----------------- MinHook targets -----------------
typedef HRESULT(STDMETHODCALLTYPE* Present_t)(IDXGISwapChain*, UINT, UINT);
static Present_t oPresent = nullptr;

typedef void (STDMETHODCALLTYPE* OMSetRenderTargets_t)(ID3D11DeviceContext*, UINT, ID3D11RenderTargetView* const*, ID3D11DepthStencilView*);
typedef void (STDMETHODCALLTYPE* PSSetShaderResources_t)(ID3D11DeviceContext*, UINT, UINT, ID3D11ShaderResourceView* const*);
static OMSetRenderTargets_t   oOMSetRenderTargets = nullptr;
static PSSetShaderResources_t oPSSetShaderResources = nullptr;

// ----------------- HLSL sources (compute) -----------------
static const char* kCS_MSAA_Tmpl = R"#(
#ifndef MSAA_SAMPLES
#error MSAA_SAMPLES must be defined as a positive integer literal
#endif

Texture2DMS<float, MSAA_SAMPLES>   DepthIn : register(t0);
RWTexture2D<float>                 DepthOut : register(u0);

[numthreads(16,16,1)]
void kCS_MSAA_LinearAvg(uint3 id : SV_DispatchThreadID)
{
    uint w, h, sc;
    DepthInMSAA.GetDimensions(w, h, sc);
    if (id.x >= w || id.y >= h) return;

    float acc = 0.0;
    [loop] for (uint i = 0; i < 8; ++i) {
        if (i >= sc) break;
        float d = DepthInMSAA.Load(int2(id.xy), i);
        acc += LinearizeDepth(d, zNear, zFar, gReversedDepth);
    }
    DepthOut[id.xy] = acc / max(1u, sc);
}
)#";

static const char* kCS_Copy = R"#(
Texture2D<float> DepthIn : register(t0);
RWTexture2D<float> DepthOut : register(u0);
[numthreads(16,16,1)]
void main(uint3 id : SV_DispatchThreadID)
{
    uint w, h;
    DepthIn.GetDimensions(w, h);
    if (id.x >= w || id.y >= h) return;
    float d = DepthIn.Load(int3(int2(id.xy), 0));
    DepthOut[id.xy] = d;
}
)#";

// ----------------- Helpers -----------------
static void release_in_depth()
{
    if (gDepthSRVIn) { gDepthSRVIn->Release(); gDepthSRVIn = nullptr; }
    if (gDepthRes) { gDepthRes->Release();   gDepthRes = nullptr; }
}

static void release_out_depth()
{
    if (gDepthOutSRV) { gDepthOutSRV->Release(); gDepthOutSRV = nullptr; }
    if (gDepthOutUAV) { gDepthOutUAV->Release(); gDepthOutUAV = nullptr; }
    if (gDepthOutTex) { gDepthOutTex->Release(); gDepthOutTex = nullptr; }
#ifdef PULSV_ENABLE_RESHADE
    gReshadeDepthView = { 0 };
#endif
}

static bool compile_cs(const char* src, const D3D_SHADER_MACRO* defines, ID3D11ComputeShader** out, const char* dbgname)
{
    ID3DBlob* blob = nullptr, * err = nullptr;
    UINT flags = D3DCOMPILE_ENABLE_STRICTNESS | D3DCOMPILE_OPTIMIZATION_LEVEL3;
    HRESULT hr = D3DCompile(src, strlen(src), dbgname, defines, nullptr, "main", "cs_5_0", flags, 0, &blob, &err);
    if (FAILED(hr)) {
        if (err) { logf("D3DCompile(%s) failed: %s", dbgname, (const char*)err->GetBufferPointer()); err->Release(); }
        return false;
    }
    hr = gDev->CreateComputeShader(blob->GetBufferPointer(), blob->GetBufferSize(), nullptr, out);
    blob->Release();
    if (FAILED(hr)) {
        logf("CreateComputeShader(%s) failed hr=0x%08X", dbgname, hr);
        return false;
    }
    return true;
}

static bool ensure_cs_pipeline()
{
    if (!gDev) return false;

    // Always ensure the non-MSAA copy shader exists
    if (!gCSCopy) {
        if (!compile_cs(kCS_Copy, nullptr, &gCSCopy, "copy")) {
            logf("ensure_cs_pipeline: non-MSAA copy CS failed");
            return false;
        }
    }
    return true; // MSAA variants are compiled lazily per count
}

static bool ensure_out_targets(UINT w, UINT h)
{
    if (!gDev) return false;
    if (gDepthOutTex) {
        D3D11_TEXTURE2D_DESC td{}; gDepthOutTex->GetDesc(&td);
        if (td.Width == w && td.Height == h) return true;
        release_out_depth();
    }

    D3D11_TEXTURE2D_DESC td{};
    td.Width = w; td.Height = h; td.MipLevels = 1; td.ArraySize = 1;
    td.Format = DXGI_FORMAT_R32_FLOAT;
    td.SampleDesc.Count = 1; td.SampleDesc.Quality = 0;
    td.Usage = D3D11_USAGE_DEFAULT;
    td.BindFlags = D3D11_BIND_SHADER_RESOURCE | D3D11_BIND_UNORDERED_ACCESS;

    if (FAILED(gDev->CreateTexture2D(&td, nullptr, &gDepthOutTex))) { logf("CreateTexture2D(R32F) failed"); return false; }
    if (FAILED(gDev->CreateUnorderedAccessView(gDepthOutTex, nullptr, &gDepthOutUAV))) { logf("CreateUAV failed"); return false; }
    if (FAILED(gDev->CreateShaderResourceView(gDepthOutTex, nullptr, &gDepthOutSRV))) { logf("CreateSRV(out) failed"); return false; }

#ifdef PULSV_ENABLE_RESHADE
    gReshadeDepthView = resource_view{ (uint64_t)gDepthOutSRV };
#endif

    if (gVerbose.load()) logf("ensure_out_targets: %ux%u R32F created", w, h);
    return true;
}

static DXGI_FORMAT pick_depth_srv_format(DXGI_FORMAT typelessFmt)
{
    switch (typelessFmt) {
    case DXGI_FORMAT_R32G8X24_TYPELESS: return DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
    case DXGI_FORMAT_R24G8_TYPELESS:    return DXGI_FORMAT_R24_UNORM_X8_TYPELESS;
    case DXGI_FORMAT_R32_TYPELESS:      return DXGI_FORMAT_R32_FLOAT;
    default: return DXGI_FORMAT_UNKNOWN;
    }
}

static bool ensure_in_depth_srv_from_dsv(ID3D11DepthStencilView* dsv, bool& isMSAA)
{
    isMSAA = false;
    if (!gDev || !dsv) return false;

    // If already set for this resource, keep it
    ID3D11Resource* res = nullptr; dsv->GetResource(&res);
    if (!res) return false;
    if (gDepthRes == res && gDepthSRVIn) { res->Release(); return true; }

    // New resource: rebuild SRV
    release_in_depth();

    ID3D11Texture2D* tex = nullptr;
    if (FAILED(res->QueryInterface(__uuidof(ID3D11Texture2D), (void**)&tex)) || !tex) { res->Release(); return false; }

    D3D11_TEXTURE2D_DESC td{}; tex->GetDesc(&td);
    isMSAA = (td.SampleDesc.Count > 1);

    gInputSamples = td.SampleDesc.Count ? td.SampleDesc.Count : 1;

    if ((td.BindFlags & D3D11_BIND_SHADER_RESOURCE) == 0) {
        if (gVerbose.load() && throttle_500ms()) logf("Depth lacks SRV bind flag, cannot read");
        tex->Release(); res->Release(); return false;
    }

    DXGI_FORMAT srvFmt = pick_depth_srv_format(td.Format);
    if (srvFmt == DXGI_FORMAT_UNKNOWN) {
        if (gVerbose.load() && throttle_500ms()) logf("Unsupported depth typeless fmt=%u", (unsigned)td.Format);
        tex->Release(); res->Release(); return false;
    }

    D3D11_SHADER_RESOURCE_VIEW_DESC sd{};
    sd.Format = srvFmt;
    sd.ViewDimension = isMSAA ? D3D11_SRV_DIMENSION_TEXTURE2DMS : D3D11_SRV_DIMENSION_TEXTURE2D;
    if (!isMSAA) { sd.Texture2D.MostDetailedMip = 0; sd.Texture2D.MipLevels = 1; }

    if (FAILED(gDev->CreateShaderResourceView(res, &sd, &gDepthSRVIn))) {
        if (gVerbose.load() && throttle_500ms()) logf("Create SRV on depth failed");
        tex->Release(); res->Release(); return false;
    }

    gDepthRes = res; // keep ref
    tex->Release();

    if (gVerbose.load() && throttle_500ms())
        logf("Input depth SRV ready: %s (fmt=%u, samples=%u)",
            isMSAA ? "MSAA" : "single", (unsigned)sd.Format, td.SampleDesc.Count);
    return true;
}

#if 0
// Compiles a CS with optional #defines
static bool compile_cs(const char* src,
    const D3D_SHADER_MACRO* defines,
    ID3D11ComputeShader** out,
    const char* dbgname)
{
    ID3DBlob* blob = nullptr, * err = nullptr;
    UINT flags = D3DCOMPILE_ENABLE_STRICTNESS | D3DCOMPILE_OPTIMIZATION_LEVEL3;
    HRESULT hr = D3DCompile(src, strlen(src), dbgname, defines, nullptr,
        "main", "cs_5_0", flags, 0, &blob, &err);
    if (FAILED(hr)) {
        if (err) { logf("D3DCompile(%s) failed: %s", dbgname, (const char*)err->GetBufferPointer()); err->Release(); }
        return false;
    }
    hr = gDev->CreateComputeShader(blob->GetBufferPointer(), blob->GetBufferSize(), nullptr, out);
    blob->Release();
    if (FAILED(hr)) { logf("CreateComputeShader(%s) failed hr=0x%08X", dbgname, hr); return false; }
    return true;
}
#endif


// Returns (or lazily compiles) the MSAA resolve CS for a given sample count
static ID3D11ComputeShader* get_or_make_msaa_cs(UINT samples)
{
    if (samples <= 1) return gCSCopy;        // non-MSAA path uses the copy CS
    if (samples > 32) samples = 32;          // clamp

    if (gCSResolveMSAA_ByCount[samples])
        return gCSResolveMSAA_ByCount[samples];

    char buf[16]; _snprintf_s(buf, _TRUNCATE, "%u", samples);
    D3D_SHADER_MACRO defs[] = { {"MSAA_SAMPLES", buf}, {nullptr, nullptr} };

    ID3D11ComputeShader* cs = nullptr;
    if (!compile_cs(kCS_MSAA_Tmpl, defs, &cs, "msaa"))
        return nullptr;

    gCSResolveMSAA_ByCount[samples] = cs;
    return cs;
}

static void resolve_depth_with_cs(bool isMSAA)
{
    if (!gCtx || !gDepthSRVIn || !gDepthOutUAV) return;
    if (!ensure_cs_pipeline()) return;

    // Save minimal compute state
    ID3D11ComputeShader* prevCS = nullptr;
    ID3D11ShaderResourceView* prevSRV[1] = { nullptr };
    ID3D11UnorderedAccessView* prevUAV[1] = { nullptr };
    gCtx->CSGetShader(&prevCS, nullptr, nullptr);
    gCtx->CSGetShaderResources(0, 1, prevSRV);
    gCtx->CSGetUnorderedAccessViews(0, 1, prevUAV);

    // Choose shader based on actual sample count
    ID3D11ComputeShader* useCS = nullptr;
    if (gInputSamples > 1) {
        useCS = get_or_make_msaa_cs(gInputSamples);
    }
    else {
        // Ensure non-MSAA shader exists
        if (!ensure_cs_pipeline()) { /* already logged */ }
        useCS = gCSCopy;
    }
    if (!useCS) {
        // Could not compile MSAA variant; bail for this frame
        if (gVerbose.load() && throttle_500ms()) logf("resolve_depth_with_cs: no CS available (samples=%u)", gInputSamples);
        // Restore and exit
        if (prevUAV[0]) gCtx->CSSetUnorderedAccessViews(0, 1, prevUAV, nullptr);
        if (prevSRV[0]) gCtx->CSSetShaderResources(0, 1, prevSRV);
        if (prevCS)     gCtx->CSSetShader(prevCS, nullptr, 0);
        if (prevUAV[0]) prevUAV[0]->Release();
        if (prevSRV[0]) prevSRV[0]->Release();
        if (prevCS)     prevCS->Release();
        return;
    }

    // Bind
    gCtx->CSSetShader(useCS, nullptr, 0);
    gCtx->CSSetShaderResources(0, 1, &gDepthSRVIn);
    gCtx->CSSetUnorderedAccessViews(0, 1, &gDepthOutUAV, nullptr);


    // Dispatch
    UINT gx = (gBackW + 15) / 16;
    UINT gy = (gBackH + 15) / 16;
    gCtx->Dispatch(gx, gy, 1);

    // Unbind (avoid hazards)
    ID3D11ShaderResourceView* nullSRV[1] = { nullptr };
    ID3D11UnorderedAccessView* nullUAV[1] = { nullptr };
    gCtx->CSSetShaderResources(0, 1, nullSRV);
    gCtx->CSSetUnorderedAccessViews(0, 1, nullUAV, nullptr);
    gCtx->CSSetShader(nullptr, nullptr, 0);

    // Restore prior state (best effort)
    if (prevUAV[0]) gCtx->CSSetUnorderedAccessViews(0, 1, prevUAV, nullptr);
    if (prevSRV[0]) gCtx->CSSetShaderResources(0, 1, prevSRV);
    if (prevCS)     gCtx->CSSetShader(prevCS, nullptr, 0);
    if (prevUAV[0]) prevUAV[0]->Release();
    if (prevSRV[0]) prevSRV[0]->Release();
    if (prevCS)     prevCS->Release();
}

// ----------------- Our depth path (called when main DSV seen) -----------------
static void build_resolved_depth_from_dsv(ID3D11DepthStencilView* dsv)
{
    if (!gBackW || !gBackH) return;

    bool isMSAA = false;
    if (!ensure_in_depth_srv_from_dsv(dsv, isMSAA)) return;
    if (!ensure_out_targets(gBackW, gBackH)) return;

    resolve_depth_with_cs(isMSAA);

#ifdef PULSV_ENABLE_RESHADE
    // ReShade binding is applied in the callback.
#endif
}

// ----------------- Hook bodies -----------------
static void log_dsv_info_throttled(ID3D11DepthStencilView* dsv) {
    if (!gVerbose.load() || !dsv || !throttle_500ms()) return;
    ID3D11Resource* res = nullptr; dsv->GetResource(&res);
    if (!res) return;
    ID3D11Texture2D* tex = nullptr;
    if (SUCCEEDED(res->QueryInterface(__uuidof(ID3D11Texture2D), (void**)&tex)) && tex) {
        D3D11_TEXTURE2D_DESC td{}; tex->GetDesc(&td);
        logf("OMSetRenderTargets: DSV %ux%u fmt=%u samples=%u", td.Width, td.Height, (unsigned)td.Format, td.SampleDesc.Count);
        tex->Release();
    }
    res->Release();
}
static void log_srv_slots_throttled(UINT startSlot, UINT numViews, ID3D11ShaderResourceView* const* views)
{
    if (!gVerbose.load() || !views || numViews == 0 || !throttle_500ms()) return;
    const UINT limit = (numViews < 4) ? numViews : 4;
    for (UINT i = 0; i < limit; ++i) {
        auto* srv = views[i]; if (!srv) continue;
        D3D11_SHADER_RESOURCE_VIEW_DESC sd{}; srv->GetDesc(&sd);
        bool depthish =
            sd.Format == DXGI_FORMAT_R32_FLOAT ||
            sd.Format == DXGI_FORMAT_R24_UNORM_X8_TYPELESS ||
            sd.Format == DXGI_FORMAT_R16_UNORM ||
            sd.Format == DXGI_FORMAT_R32_TYPELESS ||
            sd.Format == DXGI_FORMAT_R16_TYPELESS;
        logf("PSSetShaderResources: t%u fmt=%u%s", startSlot + i, (unsigned)sd.Format, depthish ? " (depth-ish)" : "");
    }
}

static void STDMETHODCALLTYPE hkOMSetRenderTargets(
    ID3D11DeviceContext* ctx, UINT numRTV,
    ID3D11RenderTargetView* const* rtvs,
    ID3D11DepthStencilView* dsv)
{
    log_dsv_info_throttled(dsv);

    if (dsv && gBackW && gBackH) {
        ID3D11Resource* res = nullptr; dsv->GetResource(&res);
        if (res) {
            ID3D11Texture2D* tex = nullptr; D3D11_TEXTURE2D_DESC td{};
            if (SUCCEEDED(res->QueryInterface(__uuidof(ID3D11Texture2D), (void**)&tex)) && tex) {
                tex->GetDesc(&td);
                if (td.Width == gBackW && td.Height == gBackH) {
                    // scene-sized depth: keep the latest one we see this frame
                    if (gDSVForResolve != dsv) {
                        if (gDSVForResolve) gDSVForResolve->Release();
                        gDSVForResolve = dsv; gDSVForResolve->AddRef();
                    }
                }
                tex->Release();
            }
            res->Release();
        }
    }

    oOMSetRenderTargets(ctx, numRTV, rtvs, dsv);
}

static void STDMETHODCALLTYPE hkPSSetShaderResources(
    ID3D11DeviceContext* ctx, UINT startSlot, UINT numViews,
    ID3D11ShaderResourceView* const* views)
{
    if (gSRVHookEnabled.load()) log_srv_slots_throttled(startSlot, numViews, views);
    oPSSetShaderResources(ctx, startSlot, numViews, views);
}

static void install_ctx_hooks_once() {
    if (!gCtx || gCtxHooked.load()) return;
    void** vtbl = *(void***)(gCtx);
    // PSSetShaderResources = 8, OMSetRenderTargets = 33
    if (MH_CreateHook(vtbl[33], hkOMSetRenderTargets, (void**)&oOMSetRenderTargets) == MH_OK)
        MH_EnableHook(vtbl[33]);
    gPSSetHookTarget = vtbl[8];
    if (MH_CreateHook(gPSSetHookTarget, hkPSSetShaderResources, (void**)&oPSSetShaderResources) == MH_OK)
        MH_EnableHook(gPSSetHookTarget);

    gCtxHooked.store(true);
    logf("Context hooks installed: OMSetRenderTargets@%p, PSSetShaderResources@%p", oOMSetRenderTargets, oPSSetShaderResources);
}

// Present detour
static HRESULT STDMETHODCALLTYPE hkPresent(IDXGISwapChain* sc, UINT sync, UINT flags) {
    if (GetAsyncKeyState(VK_F9) & 1) { bool v = !gVerbose.load(); gVerbose.store(v); logf("Verbose logs: %s", v ? "ON" : "OFF"); }
    if (GetAsyncKeyState(VK_F8) & 1) { bool en = !gSRVHookEnabled.load(); gSRVHookEnabled.store(en); if (gPSSetHookTarget) { if (en) MH_EnableHook(gPSSetHookTarget); else MH_DisableHook(gPSSetHookTarget); } logf("SRV hook: %s", en ? "ENABLED" : "DISABLED"); }
    if (GetAsyncKeyState(VK_F7) & 1) { bool b = !gBindDepth.load(); gBindDepth.store(b); logf("Bind resolved depth to t12: %s", b ? "ON" : "OFF"); }

    DXGI_SWAP_CHAIN_DESC desc{}; if (SUCCEEDED(sc->GetDesc(&desc))) {
        if (desc.BufferDesc.Width != gBackW || desc.BufferDesc.Height != gBackH) {
            gBackW = desc.BufferDesc.Width; gBackH = desc.BufferDesc.Height;
            release_out_depth(); // size changed, recreate
            if (gVerbose.load()) logf("Swapchain size: %ux%u", gBackW, gBackH);
        }
    }

    static bool once = false;
    if (!once) {
        once = true;
        logf("hkPresent: fired");
        if (!gDev) sc->GetDevice(__uuidof(ID3D11Device), (void**)&gDev);
        if (gDev && !gCtx) gDev->GetImmediateContext(&gCtx);
        if (gCtx) install_ctx_hooks_once();

#ifdef PULSV_ENABLE_RESHADE
        // No longer registering here; moved to InitThread.
#endif
    }

    // Resolve depth ONCE per frame (if a candidate DSV was seen)
    if (gDSVForResolve) {
        build_resolved_depth_from_dsv(gDSVForResolve);
        gDSVForResolve->Release();
        gDSVForResolve = nullptr;
    }

    // Optional: bind resolved depth to t12 for your own shaders
    if (gBindDepth.load() && gCtx && gDepthOutSRV) {
        ID3D11ShaderResourceView* v = gDepthOutSRV;
        gCtx->PSSetShaderResources(12, 1, &v);
        if (gVerbose.load() && throttle_500ms()) logf("Bound resolved R32F depth to t12");
    }

    return oPresent(sc, sync, flags);
}

// ----------------- Present hook installer -----------------
static void install_present_hook() {
    WNDCLASSA wc{}; wc.lpfnWndProc = DefWindowProcA; wc.hInstance = GetModuleHandleA(nullptr); wc.lpszClassName = "PULSEV_DUMMY_WND";
    RegisterClassA(&wc);
    HWND wnd = CreateWindowA(wc.lpszClassName, "pv", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 16, 16, nullptr, nullptr, wc.hInstance, nullptr);

    DXGI_SWAP_CHAIN_DESC sd{};
    sd.BufferCount = 2;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = wnd;
    sd.SampleDesc.Count = 1;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

    ID3D11Device* dev = nullptr; ID3D11DeviceContext* ctx = nullptr; IDXGISwapChain* sc = nullptr; D3D_FEATURE_LEVEL fl{};
    HRESULT hr = D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, 0, nullptr, 0, D3D11_SDK_VERSION, &sd, &sc, &dev, &fl, &ctx);
    if (FAILED(hr)) { logf("bootstrap D3D11CreateDeviceAndSwapChain failed hr=0x%08X", hr); if (wnd) DestroyWindow(wnd); return; }

    void** vtbl = *(void***)(sc);
    MH_STATUS s = MH_Initialize(); if (s != MH_OK && s != MH_ERROR_ALREADY_INITIALIZED) logf("MH_Initialize failed %d", s);
    s = MH_CreateHook(vtbl[8], hkPresent, (void**)&oPresent); if (s != MH_OK) logf("MH_CreateHook(Present) failed %d", s);
    s = MH_EnableHook(vtbl[8]); if (s != MH_OK) logf("MH_EnableHook(Present) failed %d", s);

    logf("install_present_hook done. oPresent=%p", oPresent);
    if (sc) sc->Release(); if (ctx) ctx->Release(); if (dev) dev->Release(); if (wnd) DestroyWindow(wnd);
}

// ----------------- ReShade add-on callback -----------------
#ifdef PULSV_ENABLE_RESHADE
static void on_begin_effects(effect_runtime* runtime, command_list*, resource_view rtv, resource_view rtv_srgb)
{
    (void)rtv; (void)rtv_srgb;
    if (gReshadeDepthView.handle != 0)
        runtime->update_texture_bindings("PULSV_DEPTH", gReshadeDepthView, { 0 });
}
#endif

// ----------------- Uninstall / Thread / DllMain -----------------
static void uninstall_all() {
    MH_DisableHook(MH_ALL_HOOKS);
    MH_Uninitialize();

    if (gCtx) { gCtx->Release(); gCtx = nullptr; }
    if (gDev) { gDev->Release(); gDev = nullptr; }

    release_in_depth();
    release_out_depth();
    if (gCSResolveMSAA) { gCSResolveMSAA->Release(); gCSResolveMSAA = nullptr; }
    if (gCSCopy) { gCSCopy->Release();        gCSCopy = nullptr; }

    for (UINT i = 0; i < _countof(gCSResolveMSAA_ByCount); ++i) {
        if (gCSResolveMSAA_ByCount[i]) { gCSResolveMSAA_ByCount[i]->Release(); gCSResolveMSAA_ByCount[i] = nullptr; }
    }

    gReady.store(false);
}

// ============================================================================
// [PULSV STAMP / SECTION C] Environment stamp (optional)
// Logs compiler version, C++ level, and target arch once.
// Helps differentiate “same source, different toolchain” cases.
// ============================================================================
static void LogEnvStamp()
{
#ifdef _MSC_FULL_VER
    logf("Env: MSVC=%d CXX=%ld %s",
        _MSC_FULL_VER, (long)__cplusplus,
#ifdef _WIN64
        "x64"
#else
        "x86"
#endif
    );
#else
    logf("Env: CXX=%ld %s", (long)__cplusplus,
#ifdef _WIN64
        "x64"
#else
        "x86"
#endif
    );
#endif
}

static DWORD WINAPI InitThread(LPVOID) {
 // ============================================================================
// [PULSV STAMP / SECTION B] Emit the build stamp at startup
// Place this as the first line of InitThread() so the stamp appears before
// any other logs from this run.
// ============================================================================
    LogBuildStamp();
    LogEnvStamp();
// ============================================================================
    write_loaded_marker();
    logf("InitThread: begin");
    install_present_hook();

#ifdef PULSV_ENABLE_RESHADE
    // After hooks are installed, but before the game is pumping frames,
    // it's now safe to register our ReShade add-on.
    RegisterReShadeAddOn(gModule);
#endif

    logf("InitThread: end (.asi active)");
    gReady.store(true);
    return 0;
}

// -------- ReShade registration helpers (only compiled if enabled) --------
#ifdef PULSV_ENABLE_RESHADE
static bool gReShadeRegistered = false;

static void RegisterReShadeAddOn(HMODULE self)
{
    if (gReShadeRegistered)
        return;

    // Returns false if ReShade is not present    that's fine.
    if (!reshade::register_addon(self)) {
        logf("ReShade not detected (register_addon failed)    continuing without add-on bindings.");
        return;
    }

    // Register your events
    reshade::register_event<addon_event::init_device>(startup);
    reshade::register_event<addon_event::init_swapchain>(on_init_swapchain);
    reshade::register_event<addon_event::reshade_begin_effects>(on_begin_effects);
    reshade::register_event<addon_event::reshade_reloaded_effects>(shaders_reloaded);

    // Bind PULSV_DEPTH each frame


    // Overlay UI
    reshade::register_overlay("PulseV", draw_uniforms_overlay);
    depthscan::register_overlay();

    // Create and register the data reader owned by this .asi
    RegisterPulseVDataSource(self);

#if defined(RFX_GAME_GTAV)
    register_depth_switcher();
#endif

    gReShadeRegistered = true;
    logf("ReShade add-on registered from .asi");
}

static void UnregisterReShadeAddOn(HMODULE self)
{
    if (!gReShadeRegistered)
        return;

#if defined(RFX_GAME_GTAV)
    unregister_depth_switcher();
#endif

    // Unregister in reverse-ish order
    depthscan::unregister_overlay();
    reshade::unregister_overlay("PulseV", draw_uniforms_overlay);
    reshade::unregister_event<addon_event::reshade_begin_effects>(on_begin_effects);
    reshade::unregister_event<addon_event::reshade_reloaded_effects>(shaders_reloaded);
    reshade::unregister_event<addon_event::reshade_begin_effects>(inject_uniforms);
    reshade::unregister_event<addon_event::init_swapchain>(on_init_swapchain);
    reshade::unregister_event<addon_event::init_device>(startup);

    // Tear down the data reader we created
    UnregisterPulseVDataSource(self);

    reshade::unregister_addon(self);
    gReShadeRegistered = false;
    logf("ReShade add-on unregistered from .asi");
}
#endif // PULSV_ENABLE_RESHADE

// Singleton guard so the .asi won't init twice (e.g., if someone leaves an old DLL)
static HANDLE gPulseVMutex = nullptr;

// ===== DllMain (with optional ReShade integration) =====
BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        gModule = hModule;
        DisableThreadLibraryCalls(hModule);

        // Singleton (avoid double init if another copy loads)
        gPulseVMutex = CreateMutexA(nullptr, TRUE, "Global\\PulseV_Hooks_Singleton");
        if (GetLastError() == ERROR_ALREADY_EXISTS)
        {
            logf("Another PulseV instance already active; skipping initialization.");
            return TRUE;
        }

#ifdef PULSV_ENABLE_RESHADE
        // Registration is now handled in InitThread.
#endif

        // Start hook thread
        HANDLE h = CreateThread(nullptr, 0, InitThread, nullptr, 0, nullptr);
        if (h) CloseHandle(h);
    }
    else if (reason == DLL_PROCESS_DETACH)
    {
        // Tear down hooks/resources
        uninstall_all();
        logf("DllMain: detach");

#ifdef PULSV_ENABLE_RESHADE
        UnregisterReShadeAddOn(hModule);
#endif
        if (gPulseVMutex) { ReleaseMutex(gPulseVMutex); CloseHandle(gPulseVMutex); gPulseVMutex = nullptr; }
    }
    return TRUE;
}