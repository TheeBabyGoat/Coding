#include "logging.h"
#include <mutex>
#include "gbuffer_export.h"
#include "pulsev_log_once.h"

using Microsoft::WRL::ComPtr;

namespace gbuffer_export {

static std::mutex g_mtx;
static ComPtr<ID3D11Device> g_dev;
static ComPtr<ID3D11ShaderResourceView> g_srv_rt0; // diffuse/albedo
static ComPtr<ID3D11ShaderResourceView> g_srv_rt1; // normals
static ComPtr<ID3D11ShaderResourceView> g_srv_rt2; // specular/roughness
static ComPtr<ID3D11ShaderResourceView> g_srv_rt3; // irradiance/lighting

static ID3D11Resource* g_res_rt0 = nullptr;
static ID3D11Resource* g_res_rt1 = nullptr;
static ID3D11Resource* g_res_rt2 = nullptr;
static ID3D11Resource* g_res_rt3 = nullptr;

static bool g_logged_once_ok = false;

static DXGI_FORMAT map_rtv_to_srv(DXGI_FORMAT f)
{
    switch (f)
    {
    case DXGI_FORMAT_B8G8R8A8_UNORM: return DXGI_FORMAT_B8G8R8A8_UNORM;
    case DXGI_FORMAT_R8G8B8A8_UNORM: return DXGI_FORMAT_R8G8B8A8_UNORM;
    case DXGI_FORMAT_R10G10B10A2_UNORM: return DXGI_FORMAT_R10G10B10A2_UNORM;
    case DXGI_FORMAT_R16G16B16A16_FLOAT: return DXGI_FORMAT_R16G16B16A16_FLOAT;
    case DXGI_FORMAT_R16G16B16A16_UNORM: return DXGI_FORMAT_R16G16B16A16_UNORM;
    default:
        // Typeless mapping: if RTV is typeless, attempt same code path
        return f;
    }
}

static void create_or_update_srv(ID3D11Device* dev, ID3D11RenderTargetView* rtv,
                                 ComPtr<ID3D11ShaderResourceView>& dst_srv,
                                 ID3D11Resource*& tracked_res)
{
    if (!rtv) return;

    ID3D11Resource* res = nullptr;
    rtv->GetResource(&res);
    if (!res) return;

    if (res == tracked_res && dst_srv) {
        res->Release();
        return; // no change
    }

    // Keep previous SRV/tracked_res until new SRV creation succeeds
    // Inspect RTV format to pick SRV format
    D3D11_RENDER_TARGET_VIEW_DESC rtv_desc{};
    rtv->GetDesc(&rtv_desc);
    DXGI_FORMAT srv_fmt = map_rtv_to_srv(rtv_desc.Format);

    // Only handle Texture2D resources here
    D3D11_SHADER_RESOURCE_VIEW_DESC sd{};
    sd.Format = srv_fmt;
    if (rtv_desc.ViewDimension == D3D11_RTV_DIMENSION_TEXTURE2D ||
        rtv_desc.ViewDimension == D3D11_RTV_DIMENSION_TEXTURE2DMS)
    {
        sd.ViewDimension = (rtv_desc.ViewDimension == D3D11_RTV_DIMENSION_TEXTURE2DMS)
                            ? D3D11_SRV_DIMENSION_TEXTURE2DMS
                            : D3D11_SRV_DIMENSION_TEXTURE2D;
        sd.Texture2D.MipLevels = 1;
        sd.Texture2D.MostDetailedMip = 0;
    }
    else
    {
        res->Release();
        return;
    }

    ComPtr<ID3D11ShaderResourceView> srv;
    if (SUCCEEDED(dev->CreateShaderResourceView(res, &sd, &srv))) {
        if (tracked_res) tracked_res->Release();
        // Log once when an SRV is first created for this slot
        if (tracked_res == nullptr) {
            PULSV_LOG_ONCE("gbuf:created", "[DevRV] GBuffer SRV created (fmt=%d dim=%d)", sd.Format, sd.ViewDimension);
        }
        tracked_res = res; // keep ownership of the resource pointer for change detection
        dst_srv = srv;

        if (!g_logged_once_ok)
        {
            // Log once with size/format for quick validation
            ComPtr<ID3D11Texture2D> t2;
            if (SUCCEEDED(res->QueryInterface(__uuidof(ID3D11Texture2D), (void**)t2.GetAddressOf())) && t2)
            {
                D3D11_TEXTURE2D_DESC d{}; t2->GetDesc(&d);
                logx::info("[DevRV] GBuffer SRV bound (W=%u H=%u MSAA=%u fmt=%u)",
                           d.Width, d.Height,
                           d.SampleDesc.Count ? d.SampleDesc.Count : 1, d.Format);
            }
            g_logged_once_ok = true;
        }
    }
    else
    {
        res->Release();
    }
}

void on_om_set_render_targets(ID3D11DeviceContext* ctx,
                              UINT numRTVs,
                              ID3D11RenderTargetView* const* rtvs,
                              ID3D11DepthStencilView* dsv)
{
    if (!ctx || numRTVs == 0 || rtvs == nullptr) return;
    if (dsv == nullptr) return; // only track passes with a DSV (GBUFFER/LIGHTING)
    

    std::lock_guard<std::mutex> lock(g_mtx);

    if (!g_dev) { ID3D11Device* d=nullptr; ctx->GetDevice(&d); g_dev.Attach(d); }
    if (!g_dev) return;

    // Capture up to first four MRTs when set together. GTA V binds 3-4 MRTs for GBuffer.
    if (numRTVs >= 1 && rtvs[0]) create_or_update_srv(g_dev.Get(), rtvs[0], g_srv_rt0, g_res_rt0);
    if (numRTVs >= 2 && rtvs[1]) create_or_update_srv(g_dev.Get(), rtvs[1], g_srv_rt1, g_res_rt1);
    if (numRTVs >= 3 && rtvs[2]) create_or_update_srv(g_dev.Get(), rtvs[2], g_srv_rt2, g_res_rt2);
    if (numRTVs >= 4 && rtvs[3]) create_or_update_srv(g_dev.Get(), rtvs[3], g_srv_rt3, g_res_rt3);
}

void shutdown()
{
    std::lock_guard<std::mutex> lock(g_mtx);
    g_srv_rt0.Reset(); g_srv_rt1.Reset(); g_srv_rt2.Reset(); g_srv_rt3.Reset();
    if (g_res_rt0) { g_res_rt0->Release(); g_res_rt0 = nullptr; }
    if (g_res_rt1) { g_res_rt1->Release(); g_res_rt1 = nullptr; }
    if (g_res_rt2) { g_res_rt2->Release(); g_res_rt2 = nullptr; }
    if (g_res_rt3) { g_res_rt3->Release(); g_res_rt3 = nullptr; }
    g_dev.Reset();
    g_logged_once_ok = false;
}

bool get_diffuse_srv(ID3D11ShaderResourceView** out) {
    if (!out || !g_srv_rt0) return false; *out = g_srv_rt0.Get(); (*out)->AddRef(); return true;
}
bool get_normal_srv(ID3D11ShaderResourceView** out) {
    if (!out || !g_srv_rt1) return false; *out = g_srv_rt1.Get(); (*out)->AddRef(); return true;
}
bool get_specular_srv(ID3D11ShaderResourceView** out) {
    if (!out || !g_srv_rt2) return false; *out = g_srv_rt2.Get(); (*out)->AddRef(); return true;
}
bool get_irradiance_srv(ID3D11ShaderResourceView** out) {
    if (!out || !g_srv_rt3) return false; *out = g_srv_rt3.Get(); (*out)->AddRef(); return true;
}

} // namespace gbuffer_export

// ---- C exports (ReShade add-on will GetProcAddress these) ----
extern "C" __declspec(dllexport) int __cdecl PulseV_GetGBufferDiffuseSRV(ID3D11ShaderResourceView** outSRV)
{
    return gbuffer_export::get_diffuse_srv(outSRV) ? 1 : 0;
}
extern "C" __declspec(dllexport) int __cdecl PulseV_GetGBufferNormalSRV(ID3D11ShaderResourceView** outSRV)
{
    return gbuffer_export::get_normal_srv(outSRV) ? 1 : 0;
}
extern "C" __declspec(dllexport) int __cdecl PulseV_GetGBufferSpecularSRV(ID3D11ShaderResourceView** outSRV)
{
    return gbuffer_export::get_specular_srv(outSRV) ? 1 : 0;
}
extern "C" __declspec(dllexport) int __cdecl PulseV_GetGBufferIrradianceSRV(ID3D11ShaderResourceView** outSRV)
{
    return gbuffer_export::get_irradiance_srv(outSRV) ? 1 : 0;
}
