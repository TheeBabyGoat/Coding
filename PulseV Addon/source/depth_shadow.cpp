// Depth-from-PS SRV (experimental implementation)
//------------------------------------------------
// Installs a PSSetShaderResources vtable hook to detect when the depth buffer is bound as a shader resource.
// If a compatible DSV is found, builds an SRV directly on it to avoid a copy path.

#include "depth_shadow.h"
#include <dxgi.h>
#include <d3d11.h>
#include <windows.h>
#include <string>

using Microsoft::WRL::ComPtr;

static DepthShadow* gDepthSelf = nullptr;

static DXGI_FORMAT srv_format_for_depth(DXGI_FORMAT dsvFmt)
{
    switch (dsvFmt)
    {
    case DXGI_FORMAT_D32_FLOAT: return DXGI_FORMAT_R32_FLOAT;
    case DXGI_FORMAT_D24_UNORM_S8_UINT: return DXGI_FORMAT_R24_UNORM_X8_TYPELESS;
    case DXGI_FORMAT_D16_UNORM: return DXGI_FORMAT_R16_UNORM;
    case DXGI_FORMAT_D32_FLOAT_S8X24_UINT: return DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
    default: return DXGI_FORMAT_UNKNOWN;
    }
}

bool DepthShadow::init(ID3D11Device* dev, ID3D11DeviceContext* ctx)
{
    if (!dev || !ctx) return false;
    m_dev = dev; m_ctx = ctx; gDepthSelf = this; return true;
}

void DepthShadow::reset()
{
    m_srv.Reset(); m_srvResource.Reset(); m_w = m_h = 0; m_reason.clear();
}

void DepthShadow::set_reason(const char* r)
{
    m_reason = r ? r : "";
#if DEPTHSHADOW_VERBOSE
    static ULONGLONG s_lastTick = 0;
    static std::string s_lastMsg;
    if (!m_reason.empty()) {
        if (m_reason.find("No DSV bound") != std::string::npos) return;
        ULONGLONG now = GetTickCount64();
        if (m_reason == s_lastMsg && (now - s_lastTick) < 1500) return;
        s_lastMsg = m_reason; s_lastTick = now;
        std::string line = "[DevRV][DepthShadow] " + m_reason + "\n";
        OutputDebugStringA(line.c_str());
    }
#endif
}

bool DepthShadow::make_direct_srv_on_dsv(ID3D11DepthStencilView* dsv)
{
    if (!dsv) return false;
    D3D11_DEPTH_STENCIL_VIEW_DESC dsvDesc{}; dsv->GetDesc(&dsvDesc);
    ComPtr<ID3D11Resource> res; dsv->GetResource(&res);
    if (!res) return false;

    D3D11_RESOURCE_DIMENSION dim{}; res->GetType(&dim);
    if (dim != D3D11_RESOURCE_DIMENSION_TEXTURE2D) { set_reason("Depth is not Texture2D; skipping."); return false; }

    ComPtr<ID3D11Texture2D> tex; res.As(&tex);
    D3D11_TEXTURE2D_DESC td{}; tex->GetDesc(&td);
    m_w = td.Width; m_h = td.Height;

    if (td.SampleDesc.Count > 1) { set_reason("Depth is MSAA; generic SRV creation not supported."); return false; }

    DXGI_FORMAT srvFmt = srv_format_for_depth(dsvDesc.Format);
    if (srvFmt == DXGI_FORMAT_UNKNOWN) { set_reason("Unsupported depth format for SRV."); return false; }

    D3D11_SHADER_RESOURCE_VIEW_DESC sd{};
    sd.Format = srvFmt; sd.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
    sd.Texture2D.MipLevels = 1; sd.Texture2D.MostDetailedMip = 0;
    ComPtr<ID3D11ShaderResourceView> srv;
    HRESULT hr = m_dev->CreateShaderResourceView(res.Get(), &sd, &srv);
    if (FAILED(hr)) { set_reason("Depth resource lacks SRV bind flag; cannot make direct SRV."); return false; }

    m_srv = srv; m_srvResource = res; set_reason("Using direct SRV on bound depth."); return true;
}

bool DepthShadow::capture_from_bound_depth()
{
    reset();
    ComPtr<ID3D11RenderTargetView> anyRTV; ComPtr<ID3D11DepthStencilView> dsv;
    m_ctx->OMGetRenderTargets(1, anyRTV.GetAddressOf(), dsv.GetAddressOf());
    if (!anyRTV && !dsv) return false;
    if (!dsv) { set_reason("No DSV bound at Present."); return false; }
    return make_direct_srv_on_dsv(dsv.Get());
}

bool DepthShadow::snoop_ps_srvs_match_dsv()
{
    ComPtr<ID3D11DepthStencilView> dsv;
    m_ctx->OMGetRenderTargets(0, nullptr, dsv.GetAddressOf());
    if (!dsv) return false;
    ComPtr<ID3D11Resource> dsvRes; dsv->GetResource(&dsvRes);
    if (!dsvRes) return false;

    const UINT kMax = 128;
    ID3D11ShaderResourceView* slots[kMax] = {};
    m_ctx->PSGetShaderResources(0, kMax, slots);

    bool found = false;
    for (UINT i = 0; i < kMax; ++i) {
        if (!slots[i]) continue;
        ComPtr<ID3D11Resource> sres; slots[i]->GetResource(&sres);
        if (sres.Get() == dsvRes.Get()) {
            m_srv = slots[i]; m_srvResource = sres;
            D3D11_RESOURCE_DIMENSION dim{}; sres->GetType(&dim);
            if (dim == D3D11_RESOURCE_DIMENSION_TEXTURE2D) {
                ComPtr<ID3D11Texture2D> t; sres.As(&t);
                D3D11_TEXTURE2D_DESC td{}; t->GetDesc(&td);
                m_w = td.Width; m_h = td.Height;
            }
            found = true;
            set_reason("Borrowed depth SRV from PS slot.");
        }
    }
    for (UINT i=0;i<kMax;++i) if (slots[i]) slots[i]->Release();
    return found;
}

bool DepthShadow::capture_auto()
{
    if (capture_from_bound_depth()) return true;
    reset();
    if (m_srv) return true; // Previously cached by hook this frame.
    if (snoop_ps_srvs_match_dsv()) return true;
    set_reason("No sampleable depth found this frame.");
    return false;
}

 // ---- Active vtable hook on PSSetShaderResources ----
typedef void (STDMETHODCALLTYPE *PFN_PSSetShaderResources)(ID3D11DeviceContext* ctx, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppSRVs);
static PFN_PSSetShaderResources s_OrigPSSet = nullptr;
static UINT s_VtblIndex_PSSet = 8;

static void STDMETHODCALLTYPE HK_PSSetShaderResources(ID3D11DeviceContext* ctx, UINT start, UINT count, ID3D11ShaderResourceView* const* srvs)
{
    s_OrigPSSet(ctx, start, count, srvs);
    if (gDepthSelf) gDepthSelf->note_ps_srvs(start, count, srvs);
}

bool DepthShadow::install_ps_srv_hook()
{
    if (m_hookInstalled || !m_ctx) return m_hookInstalled;
    void** vtbl = *reinterpret_cast<void***>(m_ctx.Get());
    if (!vtbl) return false;

    DWORD oldProt = 0;
    if (!VirtualProtect(&vtbl[s_VtblIndex_PSSet], sizeof(void*), PAGE_EXECUTE_READWRITE, &oldProt)) {
        set_reason("Failed to patch PSSetShaderResources vtable entry (protect).");
        return false;
    }
    s_OrigPSSet = reinterpret_cast<PFN_PSSetShaderResources>(vtbl[s_VtblIndex_PSSet]);
    vtbl[s_VtblIndex_PSSet] = reinterpret_cast<void*>(&HK_PSSetShaderResources);
    VirtualProtect(&vtbl[s_VtblIndex_PSSet], sizeof(void*), oldProt, &oldProt);
    FlushInstructionCache(GetCurrentProcess(), &vtbl[s_VtblIndex_PSSet], sizeof(void*));
    m_hookInstalled = (s_OrigPSSet != nullptr);
    if (m_hookInstalled) set_reason("PSSetShaderResources hook installed.");
    return m_hookInstalled;
}

void DepthShadow::note_ps_srvs(UINT start, UINT count, ID3D11ShaderResourceView* const* srvs)
{
    if (!srvs || !count) return;
    ComPtr<ID3D11DepthStencilView> dsv;
    m_ctx->OMGetRenderTargets(0, nullptr, dsv.GetAddressOf());
    if (!dsv) return;
    ComPtr<ID3D11Resource> dsvRes; dsv->GetResource(&dsvRes);
    if (!dsvRes) return;

    for (UINT i=0;i<count;++i) {
        ID3D11ShaderResourceView* s = srvs[i];
        if (!s) continue;
        ComPtr<ID3D11Resource> sres; s->GetResource(&sres);
        if (sres.Get() == dsvRes.Get()) {
            m_srv = s; m_srvResource = sres;
            D3D11_RESOURCE_DIMENSION dim{}; sres->GetType(&dim);
            if (dim == D3D11_RESOURCE_DIMENSION_TEXTURE2D) {
                ComPtr<ID3D11Texture2D> t; sres.As(&t);
                D3D11_TEXTURE2D_DESC td{}; t->GetDesc(&td);
                m_w = td.Width; m_h = td.Height;
            }
#if DEPTHSHADOW_VERBOSE
            OutputDebugStringA("[DevRV][DepthShadow] Borrowed depth SRV at bind.\n");
#endif
            break;
        }
    }
}
