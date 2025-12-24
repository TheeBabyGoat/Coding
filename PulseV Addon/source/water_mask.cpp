// Water mask capture (DevRV)
//---------------------------
// Detects the "water mask" SRV by watching PS slot 9 during actual draws,
// freezing the last match once per frame at Present, and exposing it for ReShade consumption.
// Fingerprint (from logs):
//   - Size: 960x540 (exact; can be made dynamic-res aware later)
//   - Format: DXGI_FORMAT_B8G8R8A8_UNORM (87)
//   - Mips: 1
//   - Samples: 1
//   - Resource BindFlags: SRV | RTV (0x28)
//   - Bound to PS slot 9 during the water pass

#include "water_mask.h"
#include "d3d11_hooks.h"
#include "overlay.h"
#include "logging.h"
#include "minhook.h"

#include <mutex>

using Microsoft::WRL::ComPtr;

namespace water_mask {

static std::mutex                  g_mtx;
static ID3D11Device*               g_dev = nullptr;   // weak
static ID3D11DeviceContext*        g_ctx = nullptr;   // weak

// Per-frame book-keeping
static ComPtr<ID3D11ShaderResourceView> g_usedThisFrame;   // candidate seen during a draw()
static ComPtr<ID3D11ShaderResourceView> g_publishSRV;      // frozen at Present
static bool                        g_loggedAcquired = false;
static bool                        g_loggedLost = false;

// Draw hooks
typedef void (STDMETHODCALLTYPE* PFN_Draw)(ID3D11DeviceContext*, UINT, UINT);
typedef void (STDMETHODCALLTYPE* PFN_DrawIndexed)(ID3D11DeviceContext*, UINT, UINT, INT);

static PFN_Draw         s_origDraw = nullptr;
static PFN_DrawIndexed  s_origDrawIndexed = nullptr;
static bool             s_hooksInstalled = false;

static bool MatchesFingerprint(ID3D11ShaderResourceView* srv, UINT* outW=nullptr, UINT* outH=nullptr, UINT* outMips=nullptr, UINT* outSamples=nullptr, DXGI_FORMAT* outFmt=nullptr, UINT* outBind=nullptr)
{
    if (!srv) return false;
    ID3D11Resource* res = nullptr;
    srv->GetResource(&res);
    if (!res) return false;
    D3D11_RESOURCE_DIMENSION dim = D3D11_RESOURCE_DIMENSION_UNKNOWN;
    res->GetType(&dim);
    bool ok = false;
    if (dim == D3D11_RESOURCE_DIMENSION_TEXTURE2D) {
        ID3D11Texture2D* t2 = nullptr;
        if (SUCCEEDED(res->QueryInterface(__uuidof(ID3D11Texture2D), (void**)&t2)) && t2) {
            D3D11_TEXTURE2D_DESC td{}; t2->GetDesc(&td);
            UINT w=td.Width, h=td.Height, mips=td.MipLevels, samples=td.SampleDesc.Count, bind=td.BindFlags;
            DXGI_FORMAT fmt = td.Format;
            if (outW) *outW=w; if (outH) *outH=h; if (outMips) *outMips=mips; if (outSamples) *outSamples=samples; if (outFmt) *outFmt=fmt; if (outBind) *outBind=bind;
            if (w==960 && h==540 && mips==1 && samples==1 && fmt==DXGI_FORMAT_B8G8R8A8_UNORM && (bind & (D3D11_BIND_SHADER_RESOURCE|D3D11_BIND_RENDER_TARGET))==(D3D11_BIND_SHADER_RESOURCE|D3D11_BIND_RENDER_TARGET)) {
                ok = true;
            }
            t2->Release();
        }
    }
    res->Release();
    return ok;
}

// Avoid capturing during our own overlay draws.
static inline bool IsSafeToInspect() {
    return !overlay_is_drawing();
}

static void MaybeCaptureSlot9(ID3D11DeviceContext* ctx)
{
    if (!IsSafeToInspect()) return;
    ID3D11ShaderResourceView* srv = nullptr;
    ctx->PSGetShaderResources(9, 1, &srv);
    if (!srv) return;

    UINT w=0,h=0,mips=0,samples=0,bind=0;
    DXGI_FORMAT fmt=DXGI_FORMAT_UNKNOWN;
    const bool match = MatchesFingerprint(srv, &w,&h,&mips,&samples,&fmt,&bind);
    if (match) {
        std::lock_guard<std::mutex> lock(g_mtx);
        g_usedThisFrame = srv; // ComPtr grabs ref
        if (!g_loggedAcquired) {
            logx::info("[DevRV] Water mask match at PS slot 9: SRV=%p (%ux%u mips=%u samples=%u fmt=%d bind=%#x)", (void*)srv, w,h,mips,samples,(int)fmt,bind);
            g_loggedAcquired = true;
            g_loggedLost = false;
        }
    }
    srv->Release();
}

// Detours
static void STDMETHODCALLTYPE hkDraw(ID3D11DeviceContext* c, UINT VertexCount, UINT StartVertexLocation)
{
    if (s_origDraw) {
        MaybeCaptureSlot9(c);
        s_origDraw(c, VertexCount, StartVertexLocation);
    }
}

static void STDMETHODCALLTYPE hkDrawIndexed(ID3D11DeviceContext* c, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation)
{
    if (s_origDrawIndexed) {
        MaybeCaptureSlot9(c);
        s_origDrawIndexed(c, IndexCount, StartIndexLocation, BaseVertexLocation);
    }
}

bool try_install_draw_hooks_from_present(IDXGISwapChain* sc)
{
    if (s_hooksInstalled) return true;
    if (!sc) return false;

    ID3D11Device* dev = nullptr;
    if (FAILED(sc->GetDevice(__uuidof(ID3D11Device), (void**)&dev)) || !dev) return false;
    ID3D11DeviceContext* ctx = nullptr;
    dev->GetImmediateContext(&ctx);
    if (!ctx) { dev->Release(); return false; }

    {
        std::lock_guard<std::mutex> lock(g_mtx);
        g_dev = dev; g_ctx = ctx;
    }

    void** vtbl = *(void***)ctx;
    // Indices per this project's mapping (PSSetSRV was vtbl[8]):
    // DrawIndexed=12, Draw=13
    auto pDrawIndexed = (PFN_DrawIndexed)vtbl[12];
    auto pDraw        = (PFN_Draw)vtbl[13];

    if (!s_origDrawIndexed) {
        if (MH_CreateHook((LPVOID)pDrawIndexed, (LPVOID)&hkDrawIndexed, reinterpret_cast<LPVOID*>(&s_origDrawIndexed)) != MH_OK) {
            logx::info("[DevRV] WaterMask: failed to hook DrawIndexed");
        }
    }
    if (!s_origDraw) {
        if (MH_CreateHook((LPVOID)pDraw, (LPVOID)&hkDraw, reinterpret_cast<LPVOID*>(&s_origDraw)) != MH_OK) {
            logx::info("[DevRV] WaterMask: failed to hook Draw");
        }
    }
    if (s_origDraw || s_origDrawIndexed) {
        MH_EnableHook(MH_ALL_HOOKS);
        s_hooksInstalled = true;
        logx::info("[DevRV] WaterMask: draw hooks installed.");
    }

    ctx->Release();
    dev->Release();
    return s_hooksInstalled;
}

void on_present_begin(IDXGISwapChain* /*sc*/, int /*presentCount*/)
{
    // Freeze winner once per frame; if none seen, keep last good.
    std::lock_guard<std::mutex> lock(g_mtx);
    if (g_usedThisFrame) {
        g_publishSRV = g_usedThisFrame;
        g_usedThisFrame.Reset();
        // Log publish once (non-spam)
        logx::info("[DevRV] Water mask frozen for publish: SRV=%p", (void*)g_publishSRV.Get());
        g_loggedAcquired = true;
        g_loggedLost = false;
    } else {
        if (!g_publishSRV && !g_loggedLost) {
            logx::info("[DevRV] Water mask not seen yet; will keep waiting (retaining last good if any).");
            g_loggedLost = true;
            g_loggedAcquired = false;
        }
    }
}

bool get_publish_srv(ID3D11ShaderResourceView** outSRV)
{
    if (!outSRV) return false;
    std::lock_guard<std::mutex> lock(g_mtx);
    if (!g_publishSRV) return false;
    *outSRV = g_publishSRV.Get();
    (*outSRV)->AddRef();
    return true;
}

void shutdown()
{
    std::lock_guard<std::mutex> lock(g_mtx);
    g_usedThisFrame.Reset();
    g_publishSRV.Reset();
    g_dev = nullptr; g_ctx = nullptr;
    g_loggedAcquired = g_loggedLost = false;
    if (s_hooksInstalled) {
        MH_DisableHook(MH_ALL_HOOKS);
        s_hooksInstalled = false;
        s_origDraw = nullptr;
        s_origDrawIndexed = nullptr;
    }
}

} // namespace water_mask

extern "C" __declspec(dllexport) int __cdecl PulseV_GetWaterMaskSRV(ID3D11ShaderResourceView** outSRV)
{
    return water_mask::get_publish_srv(outSRV) ? 1 : 0;
}
