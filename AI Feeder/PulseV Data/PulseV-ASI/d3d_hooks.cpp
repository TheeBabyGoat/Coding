#include "d3d_hooks.hpp"
#include "logging_stub.hpp"
#include <vector>
#include <mutex>

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include "MinHook.h"  // link MinHook

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxgi.lib")

template<typename T> static inline void safe_release(T*& p) { if (p) { p->Release(); p = nullptr; } }

B0CBuffer          gPV_B0 = {};
ID3D11Device* gPV_Device = nullptr;
ID3D11DeviceContext* gPV_Ctx = nullptr;
static IDXGISwapChain* sSwap = nullptr;
DepthTracker           gPV_Depth;

static std::atomic<bool> sReady{ false };
static ID3D11Buffer* sB0Buf = nullptr;
static D3D11_TEXTURE2D_DESC sBackDesc = {};

using PFN_PRESENT = HRESULT(STDMETHODCALLTYPE*)(IDXGISwapChain*, UINT, UINT);
using PFN_OMSETRTV = void    (STDMETHODCALLTYPE*)(ID3D11DeviceContext*, UINT, ID3D11RenderTargetView* const*, ID3D11DepthStencilView*);
using PFN_DRAW = void    (STDMETHODCALLTYPE*)(ID3D11DeviceContext*, UINT, UINT);
using PFN_DRAWINDEXED = void    (STDMETHODCALLTYPE*)(ID3D11DeviceContext*, UINT, UINT, INT);
using PFN_PSSETSRV = void    (STDMETHODCALLTYPE*)(ID3D11DeviceContext*, UINT, UINT, ID3D11ShaderResourceView* const*);

static PFN_PRESENT     oPresent = nullptr;
static PFN_OMSETRTV    oOMSetRTs = nullptr;
static PFN_DRAW        oDraw = nullptr;
static PFN_DRAWINDEXED oDrawIndexed = nullptr;
static PFN_PSSETSRV    oPSSetSRV = nullptr;

static void updateBackbufferDesc(IDXGISwapChain* sc)
{
    ID3D11Texture2D* bb = nullptr;
    if (SUCCEEDED(sc->GetBuffer(0, __uuidof(ID3D11Texture2D), (void**)&bb)) && bb) {
        bb->GetDesc(&sBackDesc);
    }
    safe_release(bb);
}

static void ensureB0()
{
    if (!gPV_Device) return;
    if (!sB0Buf) {
        D3D11_BUFFER_DESC bd = {};
        bd.ByteWidth = sizeof(B0CBuffer);
        bd.Usage = D3D11_USAGE_DYNAMIC;
        bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
        bd.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
        gPV_Device->CreateBuffer(&bd, nullptr, &sB0Buf);
    }
    if (gPV_Ctx && sB0Buf) {
        D3D11_MAPPED_SUBRESOURCE ms{};
        if (SUCCEEDED(gPV_Ctx->Map(sB0Buf, 0, D3D11_MAP_WRITE_DISCARD, 0, &ms))) {
            memcpy(ms.pData, &gPV_B0, sizeof(gPV_B0));
            gPV_Ctx->Unmap(sB0Buf, 0);
        }
        gPV_Ctx->VSSetConstantBuffers(0, 1, &sB0Buf);
        gPV_Ctx->PSSetConstantBuffers(0, 1, &sB0Buf);
        gPV_Ctx->CSSetConstantBuffers(0, 1, &sB0Buf);
    }
}

static bool shouldOverrideT12(UINT startSlot, UINT numViews)
{
    return (startSlot <= 12 && (startSlot + numViews) > 12);
}

// ---------------- Hooks ----------------

static void STDMETHODCALLTYPE hkOMSetRenderTargets(
    ID3D11DeviceContext* ctx, UINT NumViews,
    ID3D11RenderTargetView* const* ppRTVs,
    ID3D11DepthStencilView* pDSV)
{
    gPV_Depth.onBindDSV(pDSV);
    oOMSetRTs(ctx, NumViews, ppRTVs, pDSV);
}

static void STDMETHODCALLTYPE hkDraw(ID3D11DeviceContext* ctx, UINT VertexCount, UINT StartVertexLocation)
{
    gPV_Depth.onDraw(VertexCount);
    oDraw(ctx, VertexCount, StartVertexLocation);
}

static void STDMETHODCALLTYPE hkDrawIndexed(ID3D11DeviceContext* ctx, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation)
{
    gPV_Depth.onDraw(IndexCount);
    oDrawIndexed(ctx, IndexCount, StartIndexLocation, BaseVertexLocation);
}

static void STDMETHODCALLTYPE hkPSSetShaderResources(
    ID3D11DeviceContext* ctx, UINT StartSlot, UINT NumViews,
    ID3D11ShaderResourceView* const* ppSRV)
{
    if (shouldOverrideT12(StartSlot, NumViews)) {
        if (auto* srv = gPV_Depth.getDepthSRV()) {
            std::vector<ID3D11ShaderResourceView*> tmp(ppSRV, ppSRV + NumViews);
            UINT t12 = 12;
            if (t12 >= StartSlot && t12 < StartSlot + NumViews) {
                tmp[t12 - StartSlot] = srv; // DepthTex @ t12
            }
            oPSSetSRV(ctx, StartSlot, NumViews, tmp.data());
            return;
        }
    }
    oPSSetSRV(ctx, StartSlot, NumViews, ppSRV);
}

static HRESULT STDMETHODCALLTYPE hkPresent(IDXGISwapChain* sc, UINT SyncInterval, UINT Flags)
{
    if (!sReady.load()) {
        if (SUCCEEDED(sc->GetDevice(__uuidof(ID3D11Device), (void**)&gPV_Device)) && gPV_Device) {
            gPV_Device->GetImmediateContext(&gPV_Ctx);
            sSwap = sc;
            updateBackbufferDesc(sc);

            auto** vtbl = *(void***)(gPV_Ctx);
            // Indices are SDK-dependent; these are common for D3D11.0:
            MH_CreateHook(vtbl[33], hkOMSetRenderTargets, (void**)&oOMSetRTs);   // OMSetRenderTargets
            MH_CreateHook(vtbl[12], hkDraw, (void**)&oDraw);        // Draw
            MH_CreateHook(vtbl[13], hkDrawIndexed, (void**)&oDrawIndexed); // DrawIndexed
            MH_CreateHook(vtbl[107], hkPSSetShaderResources, (void**)&oPSSetSRV);  // PSSetShaderResources

            MH_EnableHook(MH_ALL_HOOKS);
            sReady.store(true);
            pv_log("PulseV: context hooks installed.");
        }
    }

    if (gPV_Device && gPV_Ctx) {
        updateBackbufferDesc(sc);
        gPV_Depth.onPresent(gPV_Device, gPV_Ctx, sBackDesc);
        // TODO: write your latest uniforms into gPV_B0 before upload
        ensureB0();
    }

    return oPresent(sc, SyncInterval, Flags);
}

// Create dummy device to fetch vtbl and hook Present
static void hook_present_once()
{
    DXGI_SWAP_CHAIN_DESC sd = {};
    sd.BufferCount = 2;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = GetForegroundWindow();
    sd.SampleDesc.Count = 1;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

    ID3D11Device* dev = nullptr;
    ID3D11DeviceContext* ctx = nullptr;
    IDXGISwapChain* sc = nullptr;

    D3D_FEATURE_LEVEL fl;
    if (FAILED(D3D11CreateDeviceAndSwapChain(
        nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, 0, nullptr, 0,
        D3D11_SDK_VERSION, &sd, &sc, &dev, &fl, &ctx))) {
        pv_log("PulseV: bootstrap device creation failed.");
        return;
    }

    auto** vtbl = *(void***)(sc);
    MH_CreateHook(vtbl[8], hkPresent, (void**)&oPresent); // Present
    MH_EnableHook(vtbl[8]);

    safe_release(sc);
    safe_release(ctx);
    safe_release(dev);
}

bool PV_InstallD3D11Hooks()
{
    if (MH_Initialize() != MH_OK) return false;
    hook_present_once();
    pv_log("PulseV: Present hook installed.");
    return true;
}

void PV_UninstallD3D11Hooks()
{
    gPV_Depth.release();
    safe_release(sB0Buf);
    sReady.store(false);
    MH_DisableHook(MH_ALL_HOOKS);
    MH_Uninitialize();
    pv_log("PulseV: hooks uninstalled.");
}
