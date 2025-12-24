// GTA V depth capture implementation
//-----------------------------------
// Implements a safe path to read the current depth buffer: when a DSV is bound, create a compatible
// typeless texture, CopyResource/Resolve as needed, and publish an SRV for overlay sampling.
// Installs small vtable detours via MinHook where appropriate and keeps allocations lazy.

#include "gta5_depth_hook.h"
#include <wrl/client.h>
#include <d3dcompiler.h>
#include <d3d11.h>
#include <dxgi.h>
#include <mutex>
#include <cstdio>
#include "MinHook.h"
#include "render_target_scanner.h"
#include "gbuffer_export.h"


using Microsoft::WRL::ComPtr;

namespace gta5_depth {

    struct DepthCopy {
        ComPtr<ID3D11Texture2D>          tex; // 1× R32_FLOAT target
        ComPtr<ID3D11RenderTargetView>   rtv; // RTV for the 1× target
        ComPtr<ID3D11ShaderResourceView> srv; // SRV to sample in ReShade
        UINT w = 0, h = 0;
    };

    // ---- Internal state ----
    static ID3D11Device* g_dev = nullptr; // Weak
    static ID3D11DeviceContext* g_ctx = nullptr; // Weak
    static ID3D11DepthStencilView* g_lastDSV = nullptr; // Weak
    static DepthCopy               g_copy;

    static bool g_loggedOnceDSV = false;
    // Heatmap-style "depth touched this frame" latch
    static bool g_depth_touched_this_frame = false;
    static bool g_omHooked = false;
    static bool g_clearHooked = false;

    using PFN_OMSetRenderTargets = void (STDMETHODCALLTYPE*)(ID3D11DeviceContext*, UINT, ID3D11RenderTargetView* const*, ID3D11DepthStencilView*);
    using PFN_ClearDepthStencilView = void (STDMETHODCALLTYPE*)(ID3D11DeviceContext*, ID3D11DepthStencilView*, UINT, FLOAT, UINT8);

    static PFN_OMSetRenderTargets    s_origOM = nullptr;
    static PFN_ClearDepthStencilView s_origClr = nullptr;

    static void log_line(const char* s) {
        OutputDebugStringA(s);
        OutputDebugStringA("\n");
    }

    template<typename IFace>
    static void** vtbl(IFace* p) { return *reinterpret_cast<void***>(p); }

    static bool hook_vtable(void** slot, void* detour, void** orig) {
        if (!*slot) return false;
        MH_CreateHook(*slot, detour, orig);
        MH_EnableHook(*slot);
        return true;
    }


    // ---- Single-sample resolve target (lazy) ----
    static bool ensure_linear_target(UINT w, UINT h)
    {
        if (!g_dev || !w || !h) return false;
        if (g_copy.tex && g_copy.w == w && g_copy.h == h) return true;

        g_copy = {}; // release old

        D3D11_TEXTURE2D_DESC td{};
        td.Width = w;
        td.Height = h;
        td.MipLevels = 1;
        td.ArraySize = 1;
        td.Format = DXGI_FORMAT_R32_FLOAT;      // single-channel float
        td.SampleDesc.Count = 1;                          // 1× (non-MSAA)
        td.SampleDesc.Quality = 0;
        td.Usage = D3D11_USAGE_DEFAULT;
        td.BindFlags = D3D11_BIND_RENDER_TARGET | D3D11_BIND_SHADER_RESOURCE;

        ComPtr<ID3D11Texture2D> tex;
        if (FAILED(g_dev->CreateTexture2D(&td, nullptr, &tex))) return false;

        ComPtr<ID3D11RenderTargetView> rtv;
        if (FAILED(g_dev->CreateRenderTargetView(tex.Get(), nullptr, &rtv))) return false;

        ComPtr<ID3D11ShaderResourceView> srv;
        if (FAILED(g_dev->CreateShaderResourceView(tex.Get(), nullptr, &srv))) return false;

        g_copy.tex = std::move(tex);
        g_copy.rtv = std::move(rtv);
        g_copy.srv = std::move(srv);
        g_copy.w = w; g_copy.h = h;
        return true;
    }

    // ---- Tiny resolve shaders/state (lazy) ----
    static ComPtr<ID3D11VertexShader>  s_resolveVS;
    static ComPtr<ID3D11PixelShader>   s_resolvePS_2D;
    static ComPtr<ID3D11PixelShader>   s_resolvePS_MS;
    static ComPtr<ID3D11InputLayout>   s_resolveIL;
    static ComPtr<ID3D11SamplerState>  s_linearSamp;
    static ComPtr<ID3D11Buffer>        s_cbSize; // b0: uint w,h; float fw,fh

    static const char kVS[] = R"(
struct VSIn { float2 pos:POSITION; float2 uv:TEXCOORD0; };
struct VSOut{ float4 pos:SV_Position; float2 uv:TEXCOORD0; };
VSOut main(VSIn i){ VSOut o; o.pos=float4(i.pos,0,1); o.uv=i.uv; return o; }
)";

    static const char kPS_2D[] = R"(
Texture2D<float> Depth : register(t0);
SamplerState     Samp  : register(s0);
struct PSIn{ float4 pos:SV_Position; float2 uv:TEXCOORD0; };
float4 main(PSIn i):SV_Target { float z=Depth.SampleLevel(Samp,i.uv,0); return float4(z,z,z,1); }
)";

    static const char kPS_MS[] = R"(
Texture2DMS<float> DepthMS : register(t0);
cbuffer CBSize:register(b0){ uint w; uint h; float fw; float fh; }
struct PSIn{ float4 pos:SV_Position; float2 uv:TEXCOORD0; };
float4 main(PSIn i):SV_Target {
    int2 ip=int2(i.uv.x*fw, i.uv.y*fh);
    float z=DepthMS.Load(ip,0);
    return float4(z,z,z,1);
}
)";

    static bool ensure_resolve_shaders()
    {
        if (s_resolveVS) return true;
        ComPtr<ID3DBlob> vsb, ps2d, psms, err;
        if (FAILED(D3DCompile(kVS, sizeof(kVS), nullptr, nullptr, nullptr, "main", "vs_5_0", 0, 0, &vsb, &err))) return false;
        if (FAILED(D3DCompile(kPS_2D, sizeof(kPS_2D), nullptr, nullptr, nullptr, "main", "ps_5_0", 0, 0, &ps2d, &err))) return false;
        if (FAILED(D3DCompile(kPS_MS, sizeof(kPS_MS), nullptr, nullptr, nullptr, "main", "ps_5_0", 0, 0, &psms, &err))) return false;

        if (FAILED(g_dev->CreateVertexShader(vsb->GetBufferPointer(), vsb->GetBufferSize(), nullptr, &s_resolveVS))) return false;
        if (FAILED(g_dev->CreatePixelShader(ps2d->GetBufferPointer(), ps2d->GetBufferSize(), nullptr, &s_resolvePS_2D))) return false;
        if (FAILED(g_dev->CreatePixelShader(psms->GetBufferPointer(), psms->GetBufferSize(), nullptr, &s_resolvePS_MS))) return false;

        D3D11_INPUT_ELEMENT_DESC ild[2] = {
            { "POSITION",0,DXGI_FORMAT_R32G32_FLOAT,0,0,  D3D11_INPUT_PER_VERTEX_DATA,0 },
            { "TEXCOORD",0,DXGI_FORMAT_R32G32_FLOAT,0,8,  D3D11_INPUT_PER_VERTEX_DATA,0 },
        };
        if (FAILED(g_dev->CreateInputLayout(ild, 2, vsb->GetBufferPointer(), vsb->GetBufferSize(), &s_resolveIL))) return false;
        return true;
    }

    static bool ensure_resolve_state()
    {
        if (!s_linearSamp) {
            D3D11_SAMPLER_DESC sd{};
            sd.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;
            sd.AddressU = sd.AddressV = sd.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;
            if (FAILED(g_dev->CreateSamplerState(&sd, &s_linearSamp))) return false;
        }
        if (!s_cbSize) {
            D3D11_BUFFER_DESC bd{};
            bd.ByteWidth = 16; bd.Usage = D3D11_USAGE_DYNAMIC;
            bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER; bd.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
            if (FAILED(g_dev->CreateBuffer(&bd, nullptr, &s_cbSize))) return false;
        }
        return true;
    }
    // ---- Detours ----

    static void STDMETHODCALLTYPE hk_OMSetRenderTargets(
        ID3D11DeviceContext* ctx, UINT nrt, ID3D11RenderTargetView* const* rtvs, ID3D11DepthStencilView* dsv)
    {
        if (!g_ctx) g_ctx = ctx;
        if (!g_dev && ctx) { ComPtr<ID3D11Device> d; ctx->GetDevice(&d); g_dev = d.Get(); }

        if (!dsv) {
            ID3D11DepthStencilView* prev = nullptr;
            ctx->OMGetRenderTargets(0, nullptr, &prev);
            if (prev) { g_lastDSV = prev; prev->Release(); }
        }
        else {
            g_lastDSV = dsv;
        }


        render_target_scanner::on_om_set_render_targets(ctx, nrt, rtvs, dsv);
        gbuffer_export::on_om_set_render_targets(ctx, nrt, rtvs, dsv);
        if (s_origOM) s_origOM(ctx, nrt, rtvs, dsv);
    }

    static void STDMETHODCALLTYPE hk_ClearDepthStencilView(
        ID3D11DeviceContext* ctx, ID3D11DepthStencilView* dsv, UINT flags, FLOAT depth, UINT8 stencil)
    {
        if (dsv) {
            g_lastDSV = dsv;
            g_depth_touched_this_frame = true; // mark heatmap-style latch
            if (!g_loggedOnceDSV) {
                ComPtr<ID3D11Resource> res;
                dsv->GetResource(&res);
                ComPtr<ID3D11Texture2D> tex; res.As(&tex);
                if (tex) {
                    D3D11_TEXTURE2D_DESC sd{}; tex->GetDesc(&sd);
                    char buf[200];
                    std::snprintf(buf, sizeof(buf), "[DevRV] DSV fmt=%d w=%u h=%u samples=%u",
                        (int)sd.Format, sd.Width, sd.Height, sd.SampleDesc.Count);
                    log_line(buf);
                    g_loggedOnceDSV = true;
                }
            }
        }
        if (s_origClr) s_origClr(ctx, dsv, flags, depth, stencil);
    }

    // ---- API ----

    bool try_install_om_hook_from_present(IDXGISwapChain* sc) {
        if (g_omHooked) return true;
        if (!sc) return false;

        ComPtr<ID3D11Device> dev;
        if (FAILED(sc->GetDevice(__uuidof(ID3D11Device), (void**)dev.GetAddressOf()))) return false;
        ComPtr<ID3D11DeviceContext> ctx; dev->GetImmediateContext(&ctx);
        void** v = vtbl(ctx.Get());
        if (!hook_vtable(&v[33], (void*)hk_OMSetRenderTargets, (void**)&s_origOM)) return false;
        g_omHooked = true;
        log_line("[DevRV] OM hook installed.");
        return true;
    }

    bool try_install_clear_hook_from_present(IDXGISwapChain* sc) {
        if (g_clearHooked) return true;
        if (!sc) return false;

        ComPtr<ID3D11Device> dev;
        if (FAILED(sc->GetDevice(__uuidof(ID3D11Device), (void**)dev.GetAddressOf()))) return false;
        ComPtr<ID3D11DeviceContext> ctx; dev->GetImmediateContext(&ctx);
        void** v = vtbl(ctx.Get());
        // ClearDepthStencilView is 53; try 52 as fallback.
        if (!hook_vtable(&v[53], (void*)hk_ClearDepthStencilView, (void**)&s_origClr)) {
            if (!hook_vtable(&v[52], (void*)hk_ClearDepthStencilView, (void**)&s_origClr))
                return false;
        }
        g_clearHooked = true;
        log_line("[DevRV] Clear hook installed.");
        return true;
    }


    bool CopyDepthFromDSVNow(ID3D11DeviceContext* ctx, ID3D11DepthStencilView* dsv)
    {
        if (!g_dev || !ctx || !dsv) return false;
        if (!g_ctx) g_ctx = ctx;

        ComPtr<ID3D11Resource> res;
        dsv->GetResource(&res);
        ComPtr<ID3D11Texture2D> src;
        if (FAILED(res.As(&src))) return false;

        D3D11_TEXTURE2D_DESC sd{};
        src->GetDesc(&sd);
        if (!ensure_linear_target(sd.Width, sd.Height)) return false;
        if (!ensure_resolve_shaders() || !ensure_resolve_state()) return false;

        // Build a temporary SRV for the source depth (2D vs 2DMS)
        D3D11_SHADER_RESOURCE_VIEW_DESC sv{};
        sv.Format = (sd.Format == DXGI_FORMAT_R24G8_TYPELESS || sd.Format == DXGI_FORMAT_R24_UNORM_X8_TYPELESS)
            ? DXGI_FORMAT_R24_UNORM_X8_TYPELESS
            : DXGI_FORMAT_R32_FLOAT; // common readable view
        if (sd.SampleDesc.Count > 1) {
            sv.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2DMS;
        }
        else {
            sv.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
            sv.Texture2D.MipLevels = 1;
        }

        ComPtr<ID3D11ShaderResourceView> srcSRV;
        if (FAILED(g_dev->CreateShaderResourceView(src.Get(), &sv, &srcSRV))) return false;

        // Fullscreen triangle VB
        struct V { float x, y, u, v; };
        const V tri[3] = { {-1,-1,0,1}, {-1,3,0,-1}, {3,-1,2,1} };
        ComPtr<ID3D11Buffer> vb;
        D3D11_BUFFER_DESC vbd{};
        vbd.ByteWidth = sizeof(tri); vbd.Usage = D3D11_USAGE_IMMUTABLE; vbd.BindFlags = D3D11_BIND_VERTEX_BUFFER;
        D3D11_SUBRESOURCE_DATA srd{ tri, 0, 0 };
        if (FAILED(g_dev->CreateBuffer(&vbd, &srd, &vb))) return false;

        // CB: w,h + float versions
        D3D11_MAPPED_SUBRESOURCE map{};
        if (SUCCEEDED(ctx->Map(s_cbSize.Get(), 0, D3D11_MAP_WRITE_DISCARD, 0, &map))) {
            UINT* u = (UINT*)map.pData; u[0] = sd.Width; u[1] = sd.Height;
            float* f = (float*)map.pData; f[2] = (float)sd.Width; f[3] = (float)sd.Height;
            ctx->Unmap(s_cbSize.Get(), 0);
        }

        D3D11_VIEWPORT vp{ 0.f,0.f, (float)sd.Width,(float)sd.Height, 0.f,1.f };
        UINT stride = sizeof(V), offset = 0;

        // Bind pipeline
        ID3D11RenderTargetView* rtv = g_copy.rtv.Get();
        ctx->OMSetRenderTargets(1, &rtv, nullptr);
        ctx->RSSetViewports(1, &vp);
        ctx->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
        ctx->IASetInputLayout(s_resolveIL.Get());
        ctx->IASetVertexBuffers(0, 1, vb.GetAddressOf(), &stride, &offset);

        ctx->VSSetShader(s_resolveVS.Get(), nullptr, 0);
        if (sd.SampleDesc.Count > 1) {
            ctx->PSSetShader(s_resolvePS_MS.Get(), nullptr, 0);
            ctx->PSSetConstantBuffers(0, 1, s_cbSize.GetAddressOf());
        }
        else {
            ctx->PSSetShader(s_resolvePS_2D.Get(), nullptr, 0);
            ctx->PSSetSamplers(0, 1, s_linearSamp.GetAddressOf());
        }
        ctx->PSSetShaderResources(0, 1, srcSRV.GetAddressOf());

        ctx->Draw(3, 0);

        // Unbind SRV to avoid hazards
        ID3D11ShaderResourceView* nullSRV = nullptr;
        ctx->PSSetShaderResources(0, 1, &nullSRV);

        return true;
    }



    bool GetDepthCopySRV(ID3D11ShaderResourceView** outSRV, UINT* w, UINT* h, UINT* smp)
    {
        if (!outSRV) return false;

        // Refuse stale/menu frames: must have a valid DSV that was touched this frame
        if (!g_ctx || !g_lastDSV || !g_depth_touched_this_frame)
            return false;

        // Build/refresh the copy now, for *this* frame
        if (!CopyDepthFromDSVNow(g_ctx, g_lastDSV))
            return false;

        if (!g_copy.srv) return false;

        *outSRV = g_copy.srv.Get();
        (*outSRV)->AddRef();
        if (w)   *w = g_copy.w;
        if (h)   *h = g_copy.h;
        if (smp) *smp = 1;                 // single-sample export
        return true;
    }


    ID3D11DepthStencilView* GetLastDSV() { return g_lastDSV; }

    void LogDSVOnce() { g_loggedOnceDSV = true; }


    // Optional: reset the per-frame "depth touched" latch (call at start of Present)
    void ResetDepthTouchedLatch() { g_depth_touched_this_frame = false; }
    void ShutdownDepthHook() {
        if (g_omHooked && s_origOM) {
            MH_DisableHook((LPVOID)s_origOM);
            MH_RemoveHook((LPVOID)s_origOM);
            s_origOM = nullptr;
            g_omHooked = false;
        }
        if (g_clearHooked && s_origClr) {
            MH_DisableHook((LPVOID)s_origClr);
            MH_RemoveHook((LPVOID)s_origClr);
            s_origClr = nullptr;
            g_clearHooked = false;
        }
        g_copy.srv.Reset();
        g_copy.rtv.Reset();
        g_copy.tex.Reset();
        g_copy.w = g_copy.h = 0;
        g_lastDSV = nullptr;
        g_ctx = nullptr;
        g_dev = nullptr;
    }

} // namespace gta5_depth
