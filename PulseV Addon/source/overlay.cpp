// DevRV Overlay renderer
//-----------------------
// Renders a compact on-screen overlay (depth heatmap and debug panels) over the game's back buffer using D3D11.
// Resources are created lazily on first draw; full device/OM/RS/PS state is saved and restored.
// Drawing starts only after a few Presents to let the game's pipeline stabilize.
//
// Hotkeys:
//   F11 – toggle overlay on/off
//   F5  – dump current OM/PS bindings to the debugger
//   F6  – toggle render-target scanner (debug)
//   F7  – cycle candidate RTVs (debug)
//   F10 – cycle depth visualization mode (Heatmap / RawZ / RawInv / LinearGray)
//   F12 – toggle reflection preview
//
// Integrates with gta5_depth (copy depth out of the current DSV) and render_target_scanner
// to help find reflective/scene render targets without disturbing the game's state.


#include "overlay.h"
#include "logging.h"
#include "depth_heatmap.h"
#include "gta5_depth_hook.h"
#include "natives.h"
#include "render_target_scanner.h"
#include <Windows.h>

 // Compile-time control: enable heatmap overlay only in Debug builds.

static bool g_prevF6 = false; // rising-edge toggle for scanner
#ifndef NDEBUG
#define OVERLAY_HEATMAP_ENABLED 1
#else
#define OVERLAY_HEATMAP_ENABLED 0
#endif


#include <d3d11.h>
#include <d3d11_1.h>
#include <d3dcompiler.h>
#include <wrl/client.h>
#include <string>

#include <atomic>
#include <d3d11.h>
#include <dxgi.h>
#include <wrl/client.h>
#include "d3d11_hooks.h"

// Logging helper (uses existing logger)
#define DEV_LOGF(fmt, ...) logx::info(fmt, __VA_ARGS__)

// ---------------------------------------------
// F5 dump of current OM/PS bindings
// ---------------------------------------------
using Microsoft::WRL::ComPtr;
namespace {
struct TexInfo { UINT w=0, h=0, samples=1; DXGI_FORMAT fmt=DXGI_FORMAT_UNKNOWN; };

static bool GetTexInfoFromResource(ID3D11Resource* res, TexInfo* out) {
    if (!res || !out) return false;
    D3D11_RESOURCE_DIMENSION dim = D3D11_RESOURCE_DIMENSION_UNKNOWN;
    res->GetType(&dim);
    if (dim == D3D11_RESOURCE_DIMENSION_TEXTURE2D) {
        ID3D11Texture2D* t2 = nullptr;
        if (SUCCEEDED(res->QueryInterface(__uuidof(ID3D11Texture2D), (void**)&t2)) && t2) {
            D3D11_TEXTURE2D_DESC d{};
            t2->GetDesc(&d);
            out->w = d.Width; out->h = d.Height; out->samples = d.SampleDesc.Count; out->fmt = d.Format;
            t2->Release();
            return true;
        }
    }
    return false;
}

static void LogRTVsAndDSV(ID3D11DeviceContext* ctx) {
    if (!ctx) { DEV_LOGF("[DevRV] (warn) null context in LogRTVsAndDSV"); return; }
    const UINT kMaxRT = D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT;
    ID3D11RenderTargetView* rtvs[kMaxRT] = {};
    ID3D11DepthStencilView* dsv = nullptr;
    ctx->OMGetRenderTargets(kMaxRT, rtvs, &dsv);
    UINT count = 0; for (UINT i=0;i<kMaxRT;++i) if (rtvs[i]) ++count;
    DEV_LOGF("[DevRV] F5 OM bindings: %u RTV(s) + DSV %p", count, (void*)dsv);
    for (UINT i=0;i<kMaxRT;++i) if (rtvs[i]) {
        ID3D11Resource* res = nullptr; rtvs[i]->GetResource(&res);
        TexInfo ti{}; GetTexInfoFromResource(res, &ti);
        UINT bindFlags=0; { D3D11_RESOURCE_DIMENSION dim=D3D11_RESOURCE_DIMENSION_UNKNOWN; if(res) res->GetType(&dim);
        if(res && dim==D3D11_RESOURCE_DIMENSION_TEXTURE2D){ ID3D11Texture2D* t2=nullptr; if(SUCCEEDED(res->QueryInterface(__uuidof(ID3D11Texture2D),(void**)&t2)) && t2){ D3D11_TEXTURE2D_DESC td{}; t2->GetDesc(&td); bindFlags=td.BindFlags; t2->Release(); } } }
        DEV_LOGF("[DevRV]  RTV[%u]=%p -> res=%p %ux%u samples=%u fmt=%d bind=%#x",
                   i, (void*)rtvs[i], (void*)res, ti.w, ti.h, ti.samples, (int)ti.fmt, bindFlags);
        if (res) res->Release();
    }
    if (dsv) {
        ID3D11Resource* res = nullptr; dsv->GetResource(&res);
        TexInfo ti{}; GetTexInfoFromResource(res, &ti);
        UINT bindFlags=0; { D3D11_RESOURCE_DIMENSION dim=D3D11_RESOURCE_DIMENSION_UNKNOWN; if(res) res->GetType(&dim);
        if(res && dim==D3D11_RESOURCE_DIMENSION_TEXTURE2D){ ID3D11Texture2D* t2=nullptr; if(SUCCEEDED(res->QueryInterface(__uuidof(ID3D11Texture2D),(void**)&t2)) && t2){ D3D11_TEXTURE2D_DESC td{}; t2->GetDesc(&td); bindFlags=td.BindFlags; t2->Release(); } } }
        DEV_LOGF("[DevRV]  DSV=%p -> res=%p %ux%u samples=%u fmt=%d bind=%#x",
                   (void*)dsv, (void*)res, ti.w, ti.h, ti.samples, (int)ti.fmt, bindFlags);
        if (res) res->Release();
    }
    for (UINT i=0;i<kMaxRT;++i) if (rtvs[i]) rtvs[i]->Release();
    if (dsv) dsv->Release();
}

static void LogPSSRVSlots(ID3D11DeviceContext* ctx, UINT start=0, UINT end=32) {
    if (!ctx) { DEV_LOGF("[DevRV] (warn) null context in LogPSSRVSlots"); return; }
    if (end > 128) end = 128;
    for (UINT slot = start; slot < end; ) {
        UINT batch = (end - slot > 16 ? 16u : (end - slot));
        ID3D11ShaderResourceView* srvs[16] = {};
        ctx->PSGetShaderResources(slot, batch, srvs);
        for (UINT i=0;i<batch;++i) {
            UINT s = slot + i; if (!srvs[i]) continue;
            ID3D11Resource* res = nullptr; srvs[i]->GetResource(&res);
            TexInfo ti{}; GetTexInfoFromResource(res, &ti);
        UINT bindFlags=0; { D3D11_RESOURCE_DIMENSION dim=D3D11_RESOURCE_DIMENSION_UNKNOWN; if(res) res->GetType(&dim);
        if(res && dim==D3D11_RESOURCE_DIMENSION_TEXTURE2D){ ID3D11Texture2D* t2=nullptr; if(SUCCEEDED(res->QueryInterface(__uuidof(ID3D11Texture2D),(void**)&t2)) && t2){ D3D11_TEXTURE2D_DESC td{}; t2->GetDesc(&td); bindFlags=td.BindFlags; t2->Release(); } } }
            DEV_LOGF("[DevRV]  PS.SRV[%u]=%p -> res=%p %ux%u samples=%u",
                       s, (void*)srvs[i], (void*)res, ti.w, ti.h, ti.samples);
            if (res) res->Release(); srvs[i]->Release();
        }
        slot += batch;
    }
}


// Acquire a usable D3D11 immediate context (AddRef'd).
// Prefer hooks::context(); if null, fall back to hooks::device()->GetImmediateContext().
static ID3D11DeviceContext* AcquireContextAddRef() {
    ID3D11DeviceContext* ctx = hooks::context();
    if (ctx) { ctx->AddRef(); return ctx; }
    ID3D11Device* dev = hooks::device();
    if (dev) {
        ID3D11DeviceContext* c = nullptr;
        dev->GetImmediateContext(&c);
        return c; // AddRef'd by GetImmediateContext
    }
    return nullptr;
}
static void LogCurrentBindings() {
    Microsoft::WRL::ComPtr<ID3D11DeviceContext> hold;
    ID3D11DeviceContext* ctx = AcquireContextAddRef();
    hold.Attach(ctx);
    if (!ctx) { DEV_LOGF("[DevRV] (warn) no D3D11 context available for F5 dump"); return; }
    DEV_LOGF("[DevRV] -------- F5 dump: current selections --------");
    LogRTVsAndDSV(ctx);
    LogPSSRVSlots(ctx, 0, 32);
    DEV_LOGF("[DevRV] -------- end F5 dump --------");
}
} // anonymous namespace

static bool g_prevF5_down = false;


using Microsoft::WRL::ComPtr;

 //  -------------------------------------------------------------------
 // Overlay drawing guard and query.
 //
 // We expose a function overlay_is_drawing() that returns true while
 // The overlay is actively drawing. The OM hook uses this to avoid.
 // Re-entering OMSetRenderTargets during the overlay's own draw call.
 // A static atomic flag indicates whether the overlay is currently.
 // Drawing. The DrawingScope RAII helper toggles this flag when.
 // overlay::draw enters and leaves.

static std::atomic<bool> s_overlayIsDrawing{ false };

bool overlay_is_drawing() {
    return s_overlayIsDrawing.load(std::memory_order_relaxed);
}

struct DrawingScope {
    DrawingScope() { s_overlayIsDrawing.store(true, std::memory_order_relaxed); }
    ~DrawingScope() { s_overlayIsDrawing.store(false, std::memory_order_relaxed); }
};

 
// ---------------------------------------------
// Simple texture preview (for render target)
// ---------------------------------------------
#ifndef NDEBUG
namespace {
struct TexturePreview {
    void reset(){ m_vs.Reset(); m_ps2d.Reset(); m_ps2dms.Reset(); m_samp.Reset(); m_cbScaleBias.Reset(); m_blend.Reset(); m_dss.Reset(); m_rs.Reset(); m_dev.Reset(); m_ctx.Reset(); gDim = D3D11_SRV_DIMENSION_UNKNOWN; }

    Microsoft::WRL::ComPtr<ID3D11Device>        m_dev;
    Microsoft::WRL::ComPtr<ID3D11DeviceContext> m_ctx;
    Microsoft::WRL::ComPtr<ID3D11VertexShader>  m_vs;
    Microsoft::WRL::ComPtr<ID3D11PixelShader>   m_ps2d;
    Microsoft::WRL::ComPtr<ID3D11PixelShader>   m_ps2dms;
    Microsoft::WRL::ComPtr<ID3D11SamplerState>  m_samp;
    Microsoft::WRL::ComPtr<ID3D11Buffer>        m_cbScaleBias;
    Microsoft::WRL::ComPtr<ID3D11BlendState>    m_blend;
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState> m_dss;
    Microsoft::WRL::ComPtr<ID3D11RasterizerState>   m_rs;
    D3D11_SRV_DIMENSION gDim = D3D11_SRV_DIMENSION_UNKNOWN;

    bool init(ID3D11Device* dev, ID3D11DeviceContext* ctx) {
        if (!dev || !ctx) return false;
        if (m_dev) return true;
        m_dev = dev; m_ctx = ctx;

        static const char* kVS = R"(
        struct VSOut { float4 pos:SV_Position; float2 uv:TEXCOORD0; };
        VSOut main(uint id:SV_VertexID){
            float2 pos = float2((id==2)?3.0:-1.0, (id==1)?3.0:-1.0);
            float2 uv  = float2((pos.x+1.0)*0.5, 1.0 - (pos.y+1.0)*0.5);
            VSOut o; o.pos=float4(pos,0,1); o.uv=uv; return o;
        })";

        static const char* kPS2D = R"(
        Texture2D Tex : register(t0);
        SamplerState Samp : register(s0);
        cbuffer ScaleBias : register(b0) {
            float4 scaleBias; float2 srcSize; float2 _pad;
        }
        float4 main(float4 pos:SV_Position, float2 uv:TEXCOORD0) : SV_Target {
            float2 panelUV = uv * scaleBias.xy + scaleBias.zw;
            if (panelUV.x<0||panelUV.y<0||panelUV.x>1||panelUV.y>1) discard;
            float2 invScale = max(scaleBias.xy, float2(1e-6,1e-6));
            float2 suv = (panelUV - scaleBias.zw) / invScale;
            suv = saturate(suv);
            return Tex.Sample(Samp, suv);
        })";

        static const char* kPS2DMS = R"(
        Texture2DMS<float4> TexMS : register(t0);
        cbuffer ScaleBias : register(b0) { float4 scaleBias; float2 srcSize; float2 _pad; }
        float4 main(float4 pos:SV_Position, float2 uv:TEXCOORD0) : SV_Target {
            float2 panelUV = uv * scaleBias.xy + scaleBias.zw;
            if (panelUV.x<0||panelUV.y<0||panelUV.x>1||panelUV.y>1) discard;
            float2 invScale = max(scaleBias.xy, float2(1e-6,1e-6));
            float2 suv = (panelUV - scaleBias.zw) / invScale;
            suv = saturate(suv);
            // fetch sample 0
            uint2 ip = uint2(suv * srcSize);
            return TexMS.Load(ip, 0);
        })";

        Microsoft::WRL::ComPtr<ID3DBlob> vsb, psb, err;
        if (FAILED(D3DCompile(kVS, (UINT)strlen(kVS), "prev_vs", nullptr, nullptr, "main", "vs_5_0", 0, 0, &vsb, &err))) {
            if (err) OutputDebugStringA((std::string("[DevRV][Preview] VS error: ") + (char*)err->GetBufferPointer() + "\n").c_str());
            return false;
        }
        m_dev->CreateVertexShader(vsb->GetBufferPointer(), vsb->GetBufferSize(), nullptr, &m_vs);

        if (FAILED(D3DCompile(kPS2D, (UINT)strlen(kPS2D), "prev_ps2d", nullptr, nullptr, "main", "ps_5_0", 0, 0, &psb, &err))) {
            if (err) OutputDebugStringA((std::string("[DevRV][Preview] PS2D error: ") + (char*)err->GetBufferPointer() + "\n").c_str());
        } else {
            m_dev->CreatePixelShader(psb->GetBufferPointer(), psb->GetBufferSize(), nullptr, &m_ps2d);
        }
        if (FAILED(D3DCompile(kPS2DMS, (UINT)strlen(kPS2DMS), "prev_ps2dms", nullptr, nullptr, "main", "ps_5_0", 0, 0, &psb, &err))) {
            if (err) OutputDebugStringA((std::string("[DevRV][Preview] PS2DMS error: ") + (char*)err->GetBufferPointer() + "\n").c_str());
        } else {
            m_dev->CreatePixelShader(psb->GetBufferPointer(), psb->GetBufferSize(), nullptr, &m_ps2dms);
        }

        D3D11_SAMPLER_DESC sd{}; sd.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;
        sd.AddressU = sd.AddressV = sd.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;
        m_dev->CreateSamplerState(&sd, &m_samp);

        D3D11_BUFFER_DESC cbd{}; cbd.ByteWidth = 32; // 2 float4s
        cbd.Usage = D3D11_USAGE_DYNAMIC; cbd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
        cbd.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
        m_dev->CreateBuffer(&cbd, nullptr, &m_cbScaleBias);

        // Simple states
        D3D11_BLEND_DESC bd{}; bd.RenderTarget[0].BlendEnable = FALSE;
        bd.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;
        m_dev->CreateBlendState(&bd, &m_blend);

        D3D11_DEPTH_STENCIL_DESC dd{}; dd.DepthEnable = FALSE; dd.StencilEnable = FALSE;
        m_dev->CreateDepthStencilState(&dd, &m_dss);

        D3D11_RASTERIZER_DESC rd{}; rd.CullMode = D3D11_CULL_NONE; rd.FillMode = D3D11_FILL_SOLID;
        rd.ScissorEnable = TRUE; // respect game scissor
        m_dev->CreateRasterizerState(&rd, &m_rs);
        return true;
    }

    bool draw(ID3D11ShaderResourceView* srv, UINT srcW, UINT srcH, UINT backW, UINT backH, UINT targetW = 256, UINT targetH = 256, UINT margin = 16) {
        if (!srv || !m_vs || (!m_ps2d && !m_ps2dms)) return false;
        D3D11_SHADER_RESOURCE_VIEW_DESC sd{}; srv->GetDesc(&sd);
        gDim = sd.ViewDimension;

        // Fill scale-bias
        D3D11_MAPPED_SUBRESOURCE map{};
        if (SUCCEEDED(m_ctx->Map(m_cbScaleBias.Get(), 0, D3D11_MAP_WRITE_DISCARD, 0, &map))) {
            float sx = (float)targetW / (float)backW;
            float sy = (float)targetH / (float)backH;
            float bx = (float)margin / (float)backW;
            float by = 1.0f - sy - (float)margin / (float)backH; // bottom-left with margin
            float data[8] = { sx, sy, bx, by, (float)srcW, (float)srcH, 0.0f, 0.0f };
            memcpy(map.pData, data, sizeof(data));
            m_ctx->Unmap(m_cbScaleBias.Get(), 0);
        }

        // Bind pipeline
        ID3D11ShaderResourceView* srvs[1] = { srv };
        ID3D11SamplerState* samps[1] = { m_samp.Get() };
        m_ctx->VSSetShader(m_vs.Get(), nullptr, 0);
        m_ctx->PSSetShader((gDim == D3D11_SRV_DIMENSION_TEXTURE2DMS || gDim == D3D11_SRV_DIMENSION_TEXTURE2DMSARRAY) ? m_ps2dms.Get() : m_ps2d.Get(), nullptr, 0);
        m_ctx->PSSetShaderResources(0, 1, srvs);
        m_ctx->PSSetSamplers(0, 1, samps);
        ID3D11Buffer* cbs[1] = { m_cbScaleBias.Get() };
        m_ctx->VSSetConstantBuffers(0, 1, cbs);
        m_ctx->PSSetConstantBuffers(0, 1, cbs);
        FLOAT bf[4] = {0,0,0,0};
        m_ctx->OMSetBlendState(m_blend.Get(), bf, 0xffffffff);
        m_ctx->OMSetDepthStencilState(m_dss.Get(), 0);
        m_ctx->RSSetState(m_rs.Get());

        D3D11_RECT _r; _r.left = (LONG)margin; _r.top = (LONG)(backH - targetH - margin);
        _r.right = (LONG)(margin + targetW); _r.bottom = (LONG)(backH - margin);
        m_ctx->RSSetScissorRects(1, &_r);

        m_ctx->IASetInputLayout(nullptr);
        m_ctx->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
        m_ctx->Draw(3, 0);
        return true;
    }
};
static TexturePreview gPrev;
} // anon
#endif // NDEBUG

//  -------------------------------------------------------------------
 // Debug rendering helper.
 //
// Overlay draw toggle (F11)
// -------------------------
// When enabled, draws the diagnostic overlay (depth heatmap + debug panels) on top of the
// swap chain back buffer.
//
// Implementation details:
//  • Resources and state objects are created lazily on first use.
//  • The full D3D11 pipeline state (IA/VS/RS/OM/PS) is saved and restored around our draw.
//  • We render via a tiny full‑screen-quad shader pair and sample the exported depth SRV when available.
//    If no depth SRV is available yet, the overlay renders UI only (no depth visualization).
//  • We never ClearView‑fill or tint the back buffer; instead we draw with blending into the existing RTV
//    to avoid disturbing the game's pipeline.
//  • Drawing is deferred for a few Presents after startup so the engine can settle.
static void draw_debug_block_no_shaders(
    ID3D11Device* dev,
    ID3D11DeviceContext* ctx,
    IDXGISwapChain* sc,
    float r, float g, float b, float a)
{
    if (!dev || !ctx || !sc) return;
 // Obtain the backbuffer texture and create an RTV for it.
    Microsoft::WRL::ComPtr<ID3D11Texture2D> back;
    Microsoft::WRL::ComPtr<ID3D11RenderTargetView> backRTV;
    if (FAILED(sc->GetBuffer(0, __uuidof(ID3D11Texture2D), (void**)back.GetAddressOf()))) {
        return;
    }
    if (FAILED(dev->CreateRenderTargetView(back.Get(), nullptr, backRTV.GetAddressOf()))) {
        return;
    }
 // Backup current OM targets and relevant state.
    ID3D11RenderTargetView* prevRTV[8]{};
    ID3D11DepthStencilView* prevDSV = nullptr;
    ctx->OMGetRenderTargets(8, prevRTV, &prevDSV);
    ID3D11BlendState* prevBS = nullptr; float prevBlend[4] = { 0 }; UINT prevMask = 0;
    ctx->OMGetBlendState(&prevBS, prevBlend, &prevMask);
    ID3D11DepthStencilState* prevDSS = nullptr; UINT prevStencilRef = 0;
    ctx->OMGetDepthStencilState(&prevDSS, &prevStencilRef);
    ID3D11RasterizerState* prevRS = nullptr;
    ctx->RSGetState(&prevRS);
    D3D11_VIEWPORT prevVP{}; UINT prevVPCount = 1;
    ctx->RSGetViewports(&prevVPCount, &prevVP);
 // Bind backbuffer RTV. Disable depth testing and enable alpha blending.
    ctx->OMSetRenderTargets(1, backRTV.GetAddressOf(), nullptr);
    Microsoft::WRL::ComPtr<ID3D11BlendState> alphaBS;
    D3D11_BLEND_DESC bd{};
    bd.RenderTarget[0].BlendEnable = TRUE;
    bd.RenderTarget[0].SrcBlend = D3D11_BLEND_SRC_ALPHA;
    bd.RenderTarget[0].DestBlend = D3D11_BLEND_INV_SRC_ALPHA;
    bd.RenderTarget[0].BlendOp = D3D11_BLEND_OP_ADD;
    bd.RenderTarget[0].SrcBlendAlpha = D3D11_BLEND_ONE;
    bd.RenderTarget[0].DestBlendAlpha = D3D11_BLEND_INV_SRC_ALPHA;
    bd.RenderTarget[0].BlendOpAlpha = D3D11_BLEND_OP_ADD;
    bd.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;
    if (SUCCEEDED(dev->CreateBlendState(&bd, alphaBS.GetAddressOf()))) {
        float blendFactor[4] = { 0, 0, 0, 0 };
        ctx->OMSetBlendState(alphaBS.Get(), blendFactor, 0xFFFFFFFF);
    }
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState> dsOff;
    D3D11_DEPTH_STENCIL_DESC dsDesc{};
    dsDesc.DepthEnable = FALSE;
    dsDesc.StencilEnable = FALSE;
    if (SUCCEEDED(dev->CreateDepthStencilState(&dsDesc, dsOff.GetAddressOf()))) {
        ctx->OMSetDepthStencilState(dsOff.Get(), 0);
    }
 // Determine a rectangle occupying roughly the lower-left quarter of the screen.
    DXGI_SWAP_CHAIN_DESC sd{};
    sc->GetDesc(&sd);
    D3D11_RECT rect{};
    rect.left = 16;
    rect.bottom = (LONG)sd.BufferDesc.Height - 16;
    rect.right = 16 + ((LONG)sd.BufferDesc.Width / 4);
    rect.top = rect.bottom - ((LONG)sd.BufferDesc.Height / 4);
 // Attempt to use ID3D11DeviceContext1::ClearView to fill the rect.
    Microsoft::WRL::ComPtr<ID3D11DeviceContext1> ctx1;
    if (SUCCEEDED(ctx->QueryInterface(IID_PPV_ARGS(&ctx1)))) {
        const float color[4] = { r, g, b, a };
        ctx1->ClearView(backRTV.Get(), color, &rect, 1);
    }
    else {
 // Fallback: clear entire backbuffer with a faint tint if ClearView not available.
        const float color[4] = { r * 0.25f, g * 0.25f, b * 0.25f, a };
        ctx->ClearRenderTargetView(backRTV.Get(), color);
    }
 
        // Reflection preview (optional) - independent of depth overlay visibility
_skip_reflection_draw:
        // Restore previous state.
    ctx->OMSetRenderTargets(8, prevRTV, prevDSV);
    ctx->OMSetBlendState(prevBS, prevBlend, prevMask);
    ctx->OMSetDepthStencilState(prevDSS, prevStencilRef);
    ctx->RSSetState(prevRS);
    ctx->RSSetViewports(prevVPCount, &prevVP);
 // Release references.
    for (UINT i = 0; i < 8; ++i) {
        if (prevRTV[i]) prevRTV[i]->Release();
    }
    if (prevDSV) prevDSV->Release();
    if (prevBS)  prevBS->Release();
    if (prevDSS) prevDSS->Release();
    if (prevRS)  prevRS->Release();
}

namespace {
 // Toggle key and overlay state. The overlay can be toggled on.
 // And off with F11. These variables are not atomic because they.
 // Are accessed only from the render thread.
    bool g_enabled = true;
    bool g_prevF11 = false;
    bool g_showDepth = false;

 // Depth visualization mode (F10 to cycle):
 // 0=Heatmap, 1=RawZ, 2=RawInv, 3=LinearGray.
    int  g_depthVisMode = 0;
    bool g_prevF10 = false;

 // Logging guards to avoid spamming DebugView. These flags track.
 // Whether we've already logged the presence or absence of a depth.
 // SRV when the depth overlay is enabled, and whether we've.
 // Logged the debug block draw. They are reset whenever the.
 // Overlay is toggled via F11. They are not atomic because they.
 // Are accessed only from the render thread.
    bool g_loggedDepthOk = false;
    bool g_loggedDepthFail = false;
    bool g_loggedDebug = false;
    bool g_showReflection = false;
    bool g_prevF12 = false;
    bool g_prevF7 = false;
    UINT g_prevReflW=0, g_prevReflH=0, g_prevReflS=0;
    ID3D11ShaderResourceView* g_prevReflPtr = nullptr;

 // Overlay resources. We create the backbuffer render target view.
 // Lazily on demand. The viewport is updated whenever the RTV is.
 // (Re)created to match the swap chain dimensions.
    ComPtr<ID3D11RenderTargetView> g_backbufferRTV;
    D3D11_VIEWPORT                  g_vp{};

 // Depth heatmap implementation. This object encapsulates shader.
 // Compilation and rendering of the depth overlay.
    DepthHeatmap gHeat;

 // Cached depth buffer SRV and underlying resource. If the depth.
 // Buffer changes (e.g. due to a resize or MSAA toggle) these.
 // Objects are released and recreated. We also track the width,.
 // Height and sample count of the depth texture to pass to the.
 // Heatmap shader.
    ComPtr<ID3D11Resource>          g_depthRes;
    ComPtr<ID3D11ShaderResourceView> g_depthSRV;
    UINT                            g_depthW = 0;
    UINT                            g_depthH = 0;
    UINT                            g_depthSamples = 1;

 // Helper to (re)create the backbuffer RTV. Called on the first.
 // Draw or when the swap chain is resized.
    static void ensure_backbuffer_rtv(IDXGISwapChain* sc, ID3D11Device* dev) {
        DXGI_SWAP_CHAIN_DESC sd{}; sc->GetDesc(&sd);
        bool needRecreate = false;
        if (g_backbufferRTV) {
            // Validate existing RTV against current swapchain size
            Microsoft::WRL::ComPtr<ID3D11Resource> res;
            g_backbufferRTV->GetResource(&res);
            Microsoft::WRL::ComPtr<ID3D11Texture2D> tex;
            if (!res || FAILED(res.As(&tex))) {
                needRecreate = true;
            } else {
                D3D11_TEXTURE2D_DESC td{};
                tex->GetDesc(&td);
                if (td.Width != sd.BufferDesc.Width || td.Height != sd.BufferDesc.Height) {
                    needRecreate = true;
                }
            }
        } else {
            needRecreate = true;
        }
        if (!needRecreate) return;
        g_backbufferRTV.Reset();
        render_target_scanner::clear_confirmed();
        ComPtr<ID3D11Texture2D> back;
        HRESULT _hrGetBuf = sc->GetBuffer(0, __uuidof(ID3D11Texture2D), (void**)back.GetAddressOf());
        if (SUCCEEDED(_hrGetBuf)) {
            dev->CreateRenderTargetView(back.Get(), nullptr, &g_backbufferRTV);
            DXGI_SWAP_CHAIN_DESC sd{};
            sc->GetDesc(&sd);
            g_vp.TopLeftX = 0.0f;
            g_vp.TopLeftY = 0.0f;
            g_vp.Width = static_cast<float>(sd.BufferDesc.Width);
            g_vp.Height = static_cast<float>(sd.BufferDesc.Height);
            g_vp.MinDepth = 0.0f;
            g_vp.MaxDepth = 1.0f;
            logx::info("[DevRV] Backbuffer RTV (re)created: %ux%u", sd.BufferDesc.Width, sd.BufferDesc.Height);
        }
    }

 // Convert a typeless depth format to a compatible SRV format.
    static DXGI_FORMAT SRVFormatFromDSVFormat(DXGI_FORMAT f) {
        switch (f) {
        case DXGI_FORMAT_D24_UNORM_S8_UINT:      return DXGI_FORMAT_R24_UNORM_X8_TYPELESS;
        case DXGI_FORMAT_D32_FLOAT:              return DXGI_FORMAT_R32_FLOAT;
        case DXGI_FORMAT_D16_UNORM:              return DXGI_FORMAT_R16_UNORM;
        case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:   return DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
 // Accept the typeless DSVs too.
        case DXGI_FORMAT_R24G8_TYPELESS:         return DXGI_FORMAT_R24_UNORM_X8_TYPELESS;
        case DXGI_FORMAT_R32_TYPELESS:           return DXGI_FORMAT_R32_FLOAT;
        case DXGI_FORMAT_R16_TYPELESS:           return DXGI_FORMAT_R16_UNORM;
        case DXGI_FORMAT_R32G8X24_TYPELESS:      return DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
        default:                                 return DXGI_FORMAT_UNKNOWN;
        }
    }


 // Create or update the depth SRV based on the last bound DSV. The.
 // Overlay should call this once per frame before drawing the.
 // Depth heatmap. It compares the resource pointer to the cached.
 // Resource and only recreates the SRV if necessary.
    static void ensure_depth_srv(ID3D11Device* dev, ID3D11DeviceContext* ctx) {
 // First attempt to obtain a copied depth SRV from the depth hook.
 // Raw pointer for depth copy SRV returned from depth hook. Use a distinct.
 // Name to avoid conflicting with ComPtr variables later in this function.
        ID3D11ShaderResourceView* copySrvRaw = nullptr;
        UINT w = 0, h = 0, samples = 1;
        if (gta5_depth::GetDepthCopySRV(&copySrvRaw, &w, &h, &samples)) {
 // Acquire the underlying resource from the SRV to track changes.
            ComPtr<ID3D11Resource> res;
            copySrvRaw->GetResource(&res);
            if (res) {
 // If the resource has changed from the cached one, reset and update.
                if (res.Get() != g_depthRes.Get()) {
                    g_depthSRV.Reset();
                    g_depthRes.Reset();
                    g_depthRes = res;
                    g_depthSRV = copySrvRaw; // Assigning to ComPtr increments ref.
                    g_depthW = w;
                    g_depthH = h;
                    g_depthSamples = samples;
                }
 // If res matches and depth SRV not set, assign.
                if (!g_depthSRV) {
                    g_depthRes = res;
                    g_depthSRV = copySrvRaw;
                    g_depthW = w;
                    g_depthH = h;
                    g_depthSamples = samples;
                }
            }
            return;
        }

 // Fallback: build SRV from last DSV (if no copied depth exists).
        ID3D11DepthStencilView* dsv = gta5_depth::GetLastDSV();
        Microsoft::WRL::ComPtr<ID3D11DepthStencilView> curDSV;
        if (!dsv) {
            ID3D11DepthStencilView* tmp = nullptr; ctx->OMGetRenderTargets(0, nullptr, &tmp);
            if (tmp) { curDSV.Attach(tmp); dsv = curDSV.Get(); }
        }
        if (!dsv) { return; }
        ComPtr<ID3D11Resource> res;
        dsv->GetResource(&res);
        if (!res) {
            return;
        }
 // If the underlying resource has changed, recreate our depth.
 // Copy and SRV. If it has not changed we can reuse our.
 // Existing copy and simply update its contents via CopyResource.
        bool newResource = (res.Get() != g_depthRes.Get());
 // Determine dimensions and format of the source texture.
        D3D11_RESOURCE_DIMENSION dim;
        res->GetType(&dim);
        if (dim != D3D11_RESOURCE_DIMENSION_TEXTURE2D) {
            return;
        }
        ComPtr<ID3D11Texture2D> tex;
        res.As(&tex);
        D3D11_TEXTURE2D_DESC td{};
        tex->GetDesc(&td);
 // Determine typeless format for the copy.
        DXGI_FORMAT copyFmt = DXGI_FORMAT_UNKNOWN;
        switch (td.Format) {
        case DXGI_FORMAT_D24_UNORM_S8_UINT:         copyFmt = DXGI_FORMAT_R24G8_TYPELESS; break;
        case DXGI_FORMAT_D32_FLOAT:                 copyFmt = DXGI_FORMAT_R32_TYPELESS;   break;
        case DXGI_FORMAT_D16_UNORM:                 copyFmt = DXGI_FORMAT_R16_TYPELESS;   break;
        case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:      copyFmt = DXGI_FORMAT_R32G8X24_TYPELESS; break;
        default:                                    copyFmt = td.Format; break;
        }
 // Create a new copy texture and SRV if the resource has changed.
 // Or if our cached copy texture does not exist or has different.
 // Dimensions/sample count. Otherwise reuse the existing copy.
        bool needNew = newResource;
        if (!g_depthSRV) {
            needNew = true;
        }
        if (!needNew) {
            if (g_depthW != td.Width || g_depthH != td.Height || g_depthSamples != td.SampleDesc.Count) {
                needNew = true;
            }
        }
 // These hold the typeless copy texture and SRV when we need.
 // To (re)create them. We use different names from the raw pointer.
 // Variable above to avoid type mismatches.
        ComPtr<ID3D11Texture2D> newTex;
        ComPtr<ID3D11ShaderResourceView> newSrv;
        if (needNew) {
 // Create the copy texture.
            D3D11_TEXTURE2D_DESC cd = td;
            cd.Format = copyFmt;
            cd.BindFlags = D3D11_BIND_SHADER_RESOURCE;
            cd.CPUAccessFlags = 0;
            cd.MipLevels = 1;
            cd.MiscFlags = 0;
            if (FAILED(dev->CreateTexture2D(&cd, nullptr, &newTex))) {
                return;
            }
 // Create SRV on the copy texture (must be a readable, non-typeless view format)
            DXGI_FORMAT srvFmt = SRVFormatFromDSVFormat(td.Format);
            if (srvFmt == DXGI_FORMAT_UNKNOWN) {
 // Pick a sane readable view format from the source DSV format.
                switch (td.Format) {
                case DXGI_FORMAT_D24_UNORM_S8_UINT:
                case DXGI_FORMAT_R24G8_TYPELESS:
                    srvFmt = DXGI_FORMAT_R24_UNORM_X8_TYPELESS; break;
                case DXGI_FORMAT_D16_UNORM:
                case DXGI_FORMAT_R16_TYPELESS:
                    srvFmt = DXGI_FORMAT_R16_UNORM; break;
                case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
                case DXGI_FORMAT_R32G8X24_TYPELESS:
                    srvFmt = DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS; break;
                default:
                    srvFmt = DXGI_FORMAT_R32_FLOAT; break; // Safe default
                }
            }

            D3D11_SHADER_RESOURCE_VIEW_DESC sd{};
            sd.Format = srvFmt;
            if (td.ArraySize > 1) {
                if (td.SampleDesc.Count > 1) {
                    sd.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2DMSARRAY;
                    sd.Texture2DMSArray.FirstArraySlice = 0;
                    sd.Texture2DMSArray.ArraySize = td.ArraySize;
                }
                else {
                    sd.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2DARRAY;
                    sd.Texture2DArray.MostDetailedMip = 0;
                    sd.Texture2DArray.MipLevels = 1;
                    sd.Texture2DArray.FirstArraySlice = 0;
                    sd.Texture2DArray.ArraySize = td.ArraySize;
                }
            }
            else {
                if (td.SampleDesc.Count > 1) {
                    sd.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2DMS;
                }
                else {
                    sd.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
                    sd.Texture2D.MostDetailedMip = 0;
                    sd.Texture2D.MipLevels = 1;
                }
            }
            if (FAILED(dev->CreateShaderResourceView(newTex.Get(), &sd, &newSrv))) {
                return;
            }
 // Update cached pointers and dimensions. Assigning the ComPtr.
 // Values will AddRef appropriately.
            g_depthRes = newTex;
            g_depthSRV = newSrv;
            g_depthW = td.Width;
            g_depthH = td.Height;
            g_depthSamples = td.SampleDesc.Count;
        }
        else {
 // Reuse existing copy and SRV.
            newTex = reinterpret_cast<ID3D11Texture2D*>(g_depthRes.Get());
            newSrv = g_depthSRV;
        }
 // Copy the depth resource into our typeless copy. This.
 // Ensures we have a shader-readable version of the depth.
        ctx->CopyResource(newTex.Get(), res.Get());
    }

 // Capture and restore a broad set of D3D11 state to avoid.
 // Disrupting the game's rendering. This structure is based on.
 // Observations of the state used in GTA5 and similar titles. It.
 // Captures render targets, viewport, scissors, blend state,.
 // Depth-stencil state, rasteriser state, primitive topology and.
 // Relevant shaders, samplers and constant buffers. Additional.
 // State can be added if necessary.
    struct D3D11StateBackup {
        ID3D11RenderTargetView* rtvs[8]{};
        ID3D11DepthStencilView* dsv{};
        ID3D11InputLayout* il{};
        D3D11_PRIMITIVE_TOPOLOGY topo{};
        ID3D11VertexShader* vs{};
        ID3D11PixelShader* ps{};
        ID3D11GeometryShader* gs{};
        ID3D11HullShader* hs{};
        ID3D11DomainShader* ds{};
        ID3D11ComputeShader* cs{};
        ID3D11ShaderResourceView* ps_srvs[16]{};
        ID3D11SamplerState* ps_samps[16]{};
        ID3D11Buffer* vs_cbs[16]{};
        ID3D11Buffer* ps_cbs[16]{};
        ID3D11BlendState* blend{};
        float                    blend_factor[4]{};
        UINT                     sample_mask{};
        ID3D11DepthStencilState* dss{};
        UINT                     stencil_ref{};
        ID3D11RasterizerState* rs{};
        D3D11_VIEWPORT           vps[16]{};
        UINT                     numVP{};
        D3D11_RECT               scissors[16]{};
        UINT                     numSc{};
        void Capture(ID3D11DeviceContext* c) {
            c->OMGetRenderTargets(8, rtvs, &dsv);
            c->IAGetInputLayout(&il);
            c->IAGetPrimitiveTopology(&topo);
            c->VSGetShader(&vs, nullptr, nullptr);
            c->PSGetShader(&ps, nullptr, nullptr);
            c->GSGetShader(&gs, nullptr, nullptr);
            c->HSGetShader(&hs, nullptr, nullptr);
            c->DSGetShader(&ds, nullptr, nullptr);
            c->CSGetShader(&cs, nullptr, nullptr);
            c->PSGetShaderResources(0, 16, ps_srvs);
            c->PSGetSamplers(0, 16, ps_samps);
            c->VSGetConstantBuffers(0, 16, vs_cbs);
            c->PSGetConstantBuffers(0, 16, ps_cbs);
            c->OMGetBlendState(&blend, blend_factor, &sample_mask);
            c->OMGetDepthStencilState(&dss, &stencil_ref);
            c->RSGetState(&rs);
            numVP = 16;
            c->RSGetViewports(&numVP, vps);
            numSc = 16;
            c->RSGetScissorRects(&numSc, scissors);
        }
        void Restore(ID3D11DeviceContext* c) {
            c->OMSetRenderTargets(8, rtvs, dsv);
            for (UINT i = 0; i < 8; ++i) {
                if (rtvs[i]) rtvs[i]->Release();
            }
            if (dsv) dsv->Release();
            c->IASetInputLayout(il);
            if (il) il->Release();
            c->IASetPrimitiveTopology(topo);
            c->VSSetShader(vs, nullptr, 0);
            c->PSSetShader(ps, nullptr, 0);
            c->GSSetShader(gs, nullptr, 0);
            c->HSSetShader(hs, nullptr, 0);
            c->DSSetShader(ds, nullptr, 0);
            c->CSSetShader(cs, nullptr, 0);
            if (vs) vs->Release();
            if (ps) ps->Release();
            if (gs) gs->Release();
            if (hs) hs->Release();
            if (ds) ds->Release();
            if (cs) cs->Release();
            c->PSSetShaderResources(0, 16, ps_srvs);
            c->PSSetSamplers(0, 16, ps_samps);
            for (int i = 0; i < 16; ++i) {
                if (ps_srvs[i]) ps_srvs[i]->Release();
                if (ps_samps[i]) ps_samps[i]->Release();
            }
            c->VSSetConstantBuffers(0, 16, vs_cbs);
            c->PSSetConstantBuffers(0, 16, ps_cbs);
            for (int i = 0; i < 16; ++i) {
                if (vs_cbs[i]) vs_cbs[i]->Release();
                if (ps_cbs[i]) ps_cbs[i]->Release();
            }
            c->OMSetBlendState(blend, blend_factor, sample_mask);
            if (blend) blend->Release();
            c->OMSetDepthStencilState(dss, stencil_ref);
            if (dss) dss->Release();
            c->RSSetState(rs);
            if (rs) rs->Release();
            c->RSSetViewports(numVP, vps);
            c->RSSetScissorRects(numSc, scissors);
        }
    };
}

namespace overlay {

    bool init(ID3D11Device* dev, ID3D11DeviceContext* ctx, IDXGISwapChain* sc) {
 // Initialise heatmap. This may compile shaders and create.
 // Constant buffers. We ignore the swap chain here; the RTV.
 // Will be created lazily in draw().
        if (dev && ctx) {
            gHeat.init(dev, ctx);
        }
 // Reset state.
        g_backbufferRTV.Reset();
        g_depthRes.Reset();
        g_depthSRV.Reset();
        g_depthW = 0;
        g_depthH = 0;
        g_depthSamples = 1;
        g_enabled = true;
        g_prevF11 = false;
        g_showDepth = false;
        logx::info("[DevRV] Overlay initialised.");
        return true;
    }

    void shutdown() {
        gHeat.shutdown();
        g_backbufferRTV.Reset();
        g_depthRes.Reset();
        g_depthSRV.Reset();
        g_depthW = 0;
        g_depthH = 0;
        g_depthSamples = 1;
        g_enabled = false;
        logx::info("[DevRV] Overlay shutdown.");
    }

    void draw(IDXGISwapChain* sc, int presentCount) {
#if !OVERLAY_HEATMAP_ENABLED
        (void)sc; (void)presentCount;
 // EARLY_RETURN_RELEASE_GUARD: In release builds the overlay is disabled entirely.
        return;
#endif

 // Mark that we are drawing so the OM hook can avoid reentry.
        DrawingScope _scope_guard;
 // Do nothing if overlay not enabled or not enough frames have passed.
        if (!g_enabled || !sc) {
            return;
        }
        if (presentCount < 3) {
            return;
        }
        // Handle ALT+Tab/minimized window: skip and drop cached RTV so it recreates on restore.
        DXGI_SWAP_CHAIN_DESC _sd{}; sc->GetDesc(&_sd);
        if (IsIconic(_sd.OutputWindow)) {
            g_backbufferRTV.Reset();
            render_target_scanner::clear_confirmed();
            return;
        }

 // Toggle overlay with F11. We call GetAsyncKeyState each frame.
 // And edge-detect transitions. This toggles the depth overlay.
        SHORT keyState = GetAsyncKeyState(VK_F11);
    // --- F5: dump current OM/PS bindings ---
    {
        SHORT kF5 = GetAsyncKeyState(VK_F5);
        bool downF5 = (kF5 & 0x8000) != 0;
        if (downF5 && !g_prevF5_down) {
            DEV_LOGF("[DevRV] F5 pressed: dumping current OM/PS bindings");
            LogCurrentBindings();
        }
        g_prevF5_down = downF5;
    }
        // (fixed) moved GetAsyncKeyState(VK_F11) into the assignment above
        bool isPressed = (keyState & 0x8000) != 0;
        if (isPressed && !g_prevF11) {
            g_showDepth = !g_showDepth;
 // Reset logging flags on toggle so we don't spam DebugView.
            g_loggedDepthOk = false;
            g_loggedDepthFail = false;
            g_loggedDebug = false;
            logx::info("[DevRV] DepthHeatmap %s", g_showDepth ? "ON" : "OFF");
        }
        g_prevF11 = isPressed;

 // Scanner toggle on F6 (debug only)
        
        // Cycle through RTV candidates for reflection preview (F7)
        SHORT kF7 = GetAsyncKeyState(VK_F7);
        bool pressedF7 = (kF7 & 0x8000) != 0;
        if (pressedF7 && !g_prevF7) {
            logx::info("[DevRV] F7 pressed");
            render_target_scanner::cycle_next_rtv_candidate();
        }
        g_prevF7 = pressedF7;



        // Previous RT candidate (F6) - scanner is always on (no toggling)
        SHORT kF6 = GetAsyncKeyState(VK_F6);
        bool pressedF6 = (kF6 & 0x8000) != 0;
        if (pressedF6 && !g_prevF6) {
            render_target_scanner::cycle_prev_rtv_candidate();
        }
        g_prevF6 = pressedF6;
        // Depth visualization mode toggle on F10 (works every frame).
        SHORT k = GetAsyncKeyState(VK_F10);
        bool pressed = (k & 0x8000) != 0;
        if (pressed && !g_prevF10) {
            g_depthVisMode = (g_depthVisMode + 1) % 5; // 0..3
            logx::info("[DevRV] Depth mode = %d (0=Heatmap,1=RawZ,2=RawInv,3=LinearGray,4=LogGray)", g_depthVisMode);
        }
        g_prevF10 = pressed;

        // Reflection preview toggle on F12
        SHORT kF12 = GetAsyncKeyState(VK_F12);
        bool pressedF12 = (kF12 & 0x8000) != 0;
        if (pressedF12 && !g_prevF12) { g_showReflection = !g_showReflection; logx::info("[DevRV] Reflection preview %s", g_showReflection?"ON":"OFF"); }
        g_prevF12 = pressedF12;

 // Obtain the device and context from the swap chain. We release.
 // These references after use.
        ID3D11Device* dev = nullptr;
        sc->GetDevice(__uuidof(ID3D11Device), (void**)&dev);
        if (!dev) {
            return;
        }
        // Device-removed guard (common after ALT+Tab in some drivers)
        if (FAILED(dev->GetDeviceRemovedReason())) {
            g_backbufferRTV.Reset();
            g_depthSRV.Reset();
            g_depthRes.Reset();
            gPrev.reset();
            dev->Release();
            return;
        }
        ID3D11DeviceContext* ctx = nullptr;
        dev->GetImmediateContext(&ctx);
        if (!ctx) {
            dev->Release();
            return;
        }
 // Optional debug block underlay (comment out if not desired).
        if (g_showDepth) {
            if (!g_loggedDebug) {
                logx::info("[DevRV] overlay::draw(): debug block");
                g_loggedDebug = true;
            }
 // draw_debug_block_no_shaders(dev, ctx, sc, 1.0f, 0.0f, 1.0f, 0.6f);
        }
 // Create backbuffer RTV and update viewport if necessary.
        ensure_backbuffer_rtv(sc, dev);
 // Create or refresh the depth SRV based on the last DSV recorded.
 // By the OM hook. This updates g_depthSRV, g_depthRes, g_depthW,.
 // G_depthH and g_depthSamples. We call this even if depth overlay.
 // Is disabled so the SRV is ready when toggled on.
        ensure_depth_srv(dev, ctx);
 // Save current state.
        D3D11StateBackup state;
        state.Capture(ctx);
 // Set backbuffer RT and viewport for overlay rendering.
        ctx->OMSetRenderTargets(1, g_backbufferRTV.GetAddressOf(), nullptr);
        ctx->RSSetViewports(1, &g_vp);
 // Log depth SRV status once per toggle and draw the depth heatmap if available.
        if (g_showDepth) {
            if (g_depthSRV) {
                if (!g_loggedDepthOk) {
                    logx::info("[DevRV] Depth SRV ready: %ux%u samples=%u", g_depthW, g_depthH, g_depthSamples);
                    g_loggedDepthOk = true;
                    g_loggedDepthFail = false;
                }
 // Retrieve backbuffer dimensions for heatmap scaling.
                DXGI_SWAP_CHAIN_DESC scd{};
                sc->GetDesc(&scd);
                UINT backW = scd.BufferDesc.Width;
                UINT backH = scd.BufferDesc.Height;

 // Select visualization flags for the shader.
                unsigned flags = 0u;
                flags |= 0x1u; // reversed-Z for depth displays
                
switch (g_depthVisMode) {
case 1: flags |= 0x2u; break; // RAW_Z
case 2: flags |= 0x4u; break; // RAW_INV
case 3: flags |= 0x8u; break; // RAW_LINEAR_GRAY
case 4: flags |= 0x10u; flags |= 0x8u; break; // RAW_LOG_GRAY + grayscale
default: break; // Heatmap
}

                gHeat.set_mode_flags(flags);

 // Draw the heatmap (or raw) overlay.
                gHeat.draw(g_depthSRV.Get(), g_depthW, g_depthH, backW, backH);

                


                // Reflection preview (optional)
            }
            else {
                if (!g_loggedDepthFail) {
                    logx::info("[DevRV] Depth SRV unavailable");
                    g_loggedDepthFail = true;
                    g_loggedDepthOk = false;
                }
            }
        }
 
        // Reflection preview (optional) - independent of depth overlay visibility
        #ifndef NDEBUG
        if (g_showReflection) {
            Microsoft::WRL::ComPtr<ID3D11ShaderResourceView> refl;
            UINT rw=0, rh=0, rs=1;
            if (render_target_scanner::get_selected_rt_srv(refl.GetAddressOf(), &rw, &rh, &rs)) {



                    // Validate SRV device after ALT+Tab; drop if it belongs to a different device
                    if (refl) {
                        Microsoft::WRL::ComPtr<ID3D11Resource> _res;
                        refl->GetResource(&_res);
                        if (_res) {
                            ID3D11Device* _srvDev = nullptr;
                            _res->GetDevice(&_srvDev);
                            if (_srvDev && _srvDev != dev) {
                                // SRV from old device – clear and skip
                                render_target_scanner::clear_confirmed();
                                _srvDev->Release();
                                goto _skip_reflection_draw;
                            }
                            if (_srvDev) _srvDev->Release();
                        }
                    }

                if (gPrev.init(dev, ctx)) {
                    DXGI_SWAP_CHAIN_DESC _scd{}; sc->GetDesc(&_scd); UINT _backW=_scd.BufferDesc.Width; UINT _backH=_scd.BufferDesc.Height; gPrev.draw(refl.Get(), rw, rh, _backW, _backH, _backW, _backH, 0);
                    if (refl.Get() != g_prevReflPtr || rw!=g_prevReflW || rh!=g_prevReflH || rs!=g_prevReflS) {
// Enhanced F12 preview log: print SRV fmt/mips/bind + RTV/UAV fmt/bind (xxx if unknown)
DXGI_FORMAT srvFmt = DXGI_FORMAT_UNKNOWN; UINT srvMips = 0; UINT resBindFlags = 0;
if (refl) {
    D3D11_SHADER_RESOURCE_VIEW_DESC sdesc{}; refl->GetDesc(&sdesc); srvFmt = sdesc.Format;
    ID3D11Resource* rsrcTmp = nullptr; refl->GetResource(&rsrcTmp);
    if (rsrcTmp) {
        D3D11_RESOURCE_DIMENSION dim = D3D11_RESOURCE_DIMENSION_UNKNOWN; rsrcTmp->GetType(&dim);
        if (dim == D3D11_RESOURCE_DIMENSION_TEXTURE2D) {
            ID3D11Texture2D* t2=nullptr;
            if (SUCCEEDED(rsrcTmp->QueryInterface(__uuidof(ID3D11Texture2D),(void**)&t2)) && t2) {
                D3D11_TEXTURE2D_DESC td{}; t2->GetDesc(&td);
                srvMips = td.MipLevels ? td.MipLevels : 1;
                resBindFlags = td.BindFlags;
                t2->Release();
            }
        }
        rsrcTmp->Release();
    }
}
unsigned __stageSlot = 0; const char* __stageName = "?";
render_target_scanner::get_stage_and_slot(&__stageSlot, &__stageName);
logx::info("[DevRV] F12 preview SRV=%p (%ux%u mips=%u samples=%u fmt=%d)  %s Slot [%u] | Res bind=%#x",
           (void*)refl.Get(), rw, rh, srvMips ? srvMips : 1, rs, (int)srvFmt,
           __stageName ? __stageName : "?", __stageSlot, resBindFlags);
DXGI_FORMAT lastRTVFmt = DXGI_FORMAT_UNKNOWN; UINT lastRTVBind = 0;
DXGI_FORMAT lastUAVFmt = DXGI_FORMAT_UNKNOWN; UINT lastUAVBind = 0;
bool haveRTVInfo = render_target_scanner::get_last_rtv_desc(&lastRTVFmt, &lastRTVBind);
bool haveUAVInfo = render_target_scanner::get_last_uav_desc(&lastUAVFmt, &lastUAVBind);
char rtvFmtBuf[16]; const char* rtvFmtStr = haveRTVInfo ? (snprintf(rtvFmtBuf, sizeof(rtvFmtBuf), "%d", (int)lastRTVFmt), rtvFmtBuf) : "xxx";
char rtvBindBuf[16]; const char* rtvBindStr = haveRTVInfo ? (snprintf(rtvBindBuf, sizeof(rtvBindBuf), "0x%X", lastRTVBind), rtvBindBuf) : "xxx";
char uavFmtBuf[16]; const char* uavFmtStr = haveUAVInfo ? (snprintf(uavFmtBuf, sizeof(uavFmtBuf), "%d", (int)lastUAVFmt), uavFmtBuf) : "xxx";
char uavBindBuf[16]; const char* uavBindStr = haveUAVInfo ? (snprintf(uavBindBuf, sizeof(uavBindBuf), "0x%X", lastUAVBind), uavBindBuf) : "xxx";
logx::info("[DevRV]           RTV fmt=%s bind=%s | UAV fmt=%s bind=%s", rtvFmtStr, rtvBindStr, uavFmtStr, uavBindStr);

                        unsigned stageSlot = 0; const char* stageName = "PS"; render_target_scanner::get_stage_and_slot(&stageSlot, &stageName);
                    // Also report DSV info alongside SRV + stage/slot
                    ID3D11DepthStencilView* logDSV = gta5_depth::GetLastDSV();
                    UINT dsw=0, dsh=0, dss=1;
                    if (logDSV) {
                        Microsoft::WRL::ComPtr<ID3D11Resource> dres;
                        logDSV->GetResource(&dres);
                        if (dres) {
                            D3D11_RESOURCE_DIMENSION dim = D3D11_RESOURCE_DIMENSION_UNKNOWN;
                            dres->GetType(&dim);
                            if (dim == D3D11_RESOURCE_DIMENSION_TEXTURE2D) {
                                ID3D11Texture2D* t2=nullptr;
                                if (SUCCEEDED(dres->QueryInterface(__uuidof(ID3D11Texture2D),(void**)&t2)) && t2) {
                                    D3D11_TEXTURE2D_DESC td{}; t2->GetDesc(&td);
                                    dsw = td.Width; dsh = td.Height; dss = td.SampleDesc.Count?td.SampleDesc.Count:1;
                                    t2->Release();
                                }
                            }
                        }
                    }
//                     logx::info("[DevRV] F12 preview SRV=%p (%ux%u, samples=%u)  DSV=%p (%ux%u, samples=%u)  %s Slot [%u]",
//                                (void*)refl.Get(), rw, rh, rs, (void*)logDSV, dsw, dsh, dss, stageName?stageName:"?", stageSlot);

                    logx::info("[DevRV] F12 preview SRV=%p (%ux%u, samples=%u) %s Slot [%u]", (void*)refl.Get(), rw, rh, rs, stageName, stageSlot);
                        g_prevReflPtr=refl.Get(); g_prevReflW=rw; g_prevReflH=rh; g_prevReflS=rs;
                    }
                } else {
                    logx::warn("[DevRV] Reflection preview init failed");
                }
            }
        }
        #endif

_skip_reflection_draw:
        // Restore previous state.
        state.Restore(ctx);
 // Release references.
        ctx->Release();
        dev->Release();
    }

} // namespace overlay