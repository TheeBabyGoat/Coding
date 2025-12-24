// Render-target scanner (debug utilities)
//----------------------------------------
// Observes OMSetRenderTargets and PSSetShaderResources to track render-target and depth usage.
// Keeps lightweight metadata for candidate RTV resources and allows cycling through them for preview.
// Records last seen RTV/UAV formats and bind flags for diagnostics.
// Designed to be enabled from Present after a short warm-up to minimize interference.

#include "render_target_scanner.h"
#include "logging.h"
#include "overlay.h"
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <mutex>

#ifndef NDEBUG
  #include "MinHook.h"
#endif

using Microsoft::WRL::ComPtr;

namespace render_target_scanner {

static DXGI_FORMAT g_lastRTVFormat = DXGI_FORMAT_UNKNOWN;
static UINT        g_lastRTVBind   = 0;
static DXGI_FORMAT g_lastUAVFormat = DXGI_FORMAT_UNKNOWN;
static UINT        g_lastUAVBind   = 0;

// ---- State ----
static std::mutex                 g_mtx;
static bool                       g_enabled = true;
static bool                       g_psHooked = false;
static ID3D11Device*              g_dev = nullptr;   // weak
static ID3D11DeviceContext*       g_ctx = nullptr;   // weak

struct TexInfo { UINT w=0, h=0, samples=1; };
static std::unordered_map<ID3D11Resource*, TexInfo> g_rtvCandidates;
static std::vector<ID3D11Resource*>                 g_rtvOrder;
static size_t                                       g_rtvCycleIndex = 0;
static std::unordered_set<ID3D11Resource*>          g_loggedRTVCandidates;

static ID3D11Resource*            g_confirmedRes = nullptr;
static TexInfo                    g_confirmedInfo;
static ComPtr<ID3D11ShaderResourceView> g_confirmedSRV;

static UINT                       g_confirmedSlot = 0;
static const char*                g_confirmedStage = "PS";
static bool                       g_loggedSeenOnce = false;

static const UINT kMaxW = 1920;
static const UINT kMaxH = 1080;

// ---- Utils ----
static bool GetTexInfoFromRTV(ID3D11RenderTargetView* rtv, ID3D11Resource** outRes, TexInfo* outInfo) {
    if (!rtv) return false;
    ID3D11Resource* res = nullptr;
    rtv->GetResource(&res);
    if (!res) return false;

    D3D11_RESOURCE_DIMENSION dim = D3D11_RESOURCE_DIMENSION_UNKNOWN;
    res->GetType(&dim);
    TexInfo info{};

    if (dim == D3D11_RESOURCE_DIMENSION_TEXTURE2D) {
        ID3D11Texture2D* t2 = nullptr;
        if (SUCCEEDED(res->QueryInterface(__uuidof(ID3D11Texture2D), (void**)&t2)) && t2) {
            D3D11_TEXTURE2D_DESC d{}; t2->GetDesc(&d);
            info.w = d.Width; info.h = d.Height; info.samples = d.SampleDesc.Count ? d.SampleDesc.Count : 1;
            t2->Release();
        }
    }
    if (outRes) *outRes = res; else res->Release();
    if (outInfo) *outInfo = info;
    return true;
}

static bool GetResFromSRV(ID3D11ShaderResourceView* srv, ID3D11Resource** outRes) {
    if (!srv) return false;
    ID3D11Resource* res = nullptr; srv->GetResource(&res);
    if (!res) return false;
    if (outRes) { *outRes = res; } else { res->Release(); }
    return true;
}

static void TryCreateConfirmedSRV() {
    if (!g_confirmedRes) { g_confirmedSRV.Reset(); return; }
    if (g_confirmedSRV)   return;

    // Let D3D choose SRV desc where possible
    if (FAILED(g_dev->CreateShaderResourceView(g_confirmedRes, nullptr, g_confirmedSRV.ReleaseAndGetAddressOf()))) {
        // Fallback to 2D or 2DMS
        D3D11_RESOURCE_DIMENSION dim = D3D11_RESOURCE_DIMENSION_UNKNOWN;
        g_confirmedRes->GetType(&dim);
        D3D11_SHADER_RESOURCE_VIEW_DESC sd{};
        if (dim == D3D11_RESOURCE_DIMENSION_TEXTURE2D) {
            ID3D11Texture2D* t2 = nullptr;
            if (SUCCEEDED(g_confirmedRes->QueryInterface(__uuidof(ID3D11Texture2D), (void**)&t2)) && t2) {
                D3D11_TEXTURE2D_DESC td{}; t2->GetDesc(&td);
                sd.Format = td.Format;
                if (td.SampleDesc.Count > 1) {
                    sd.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2DMS;
                } else {
                    sd.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
                    sd.Texture2D.MostDetailedMip = 0;
                    sd.Texture2D.MipLevels = 1;
                }
                t2->Release();
            }
        }
        g_dev->CreateShaderResourceView(g_confirmedRes, &sd, g_confirmedSRV.ReleaseAndGetAddressOf());
    }
}

// ---- Hooks ----
typedef void (STDMETHODCALLTYPE* PFN_PSSetShaderResources)(
    ID3D11DeviceContext*, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppSRVs);

// === Added: Multi-stage SRV/UAV hooks (function-pointer detours, no capturing lambdas) ===
typedef void (STDMETHODCALLTYPE* PFN_VSSetShaderResources)(
    ID3D11DeviceContext*, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppSRVs);
typedef void (STDMETHODCALLTYPE* PFN_GSSetShaderResources)(
    ID3D11DeviceContext*, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppSRVs);
typedef void (STDMETHODCALLTYPE* PFN_HSSetShaderResources)(
    ID3D11DeviceContext*, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppSRVs);
typedef void (STDMETHODCALLTYPE* PFN_DSSetShaderResources)(
    ID3D11DeviceContext*, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppSRVs);
typedef void (STDMETHODCALLTYPE* PFN_CSSetShaderResources)(
    ID3D11DeviceContext*, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppSRVs);

typedef void (STDMETHODCALLTYPE* PFN_CSSetUnorderedAccessViews)(
    ID3D11DeviceContext*, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView* const* ppUAVs, const UINT* pUAVInitialCounts);
typedef void (STDMETHODCALLTYPE* PFN_OMSetRenderTargetsAndUnorderedAccessViews)(
    ID3D11DeviceContext*, UINT NumRTVs, ID3D11RenderTargetView* const* ppRTVs, ID3D11DepthStencilView* pDSV,
    UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView* const* ppUAVs, const UINT* pUAVInitialCounts);

static PFN_VSSetShaderResources s_origVSSetSRVs = nullptr;
static PFN_GSSetShaderResources s_origGSSetSRVs = nullptr;
static PFN_HSSetShaderResources s_origHSSetSRVs = nullptr;
static PFN_DSSetShaderResources s_origDSSetSRVs = nullptr;
static PFN_CSSetShaderResources s_origCSSetSRVs = nullptr;
static PFN_CSSetUnorderedAccessViews s_origCSSetUAVs = nullptr;
static PFN_OMSetRenderTargetsAndUnorderedAccessViews s_origOMSetRTUAVs = nullptr;

// Helpers to centralize SRV/UAV matching against g_confirmedRes
static void HandleSRVBind(const char* stage, UINT start, UINT num, ID3D11ShaderResourceView* const* srvs) {
    if (!g_enabled || !g_confirmedRes || !srvs) return;
    if (overlay_is_drawing()) return;
    for (UINT i = 0; i < num; ++i) {
        ID3D11ShaderResourceView* s = srvs[i];
        if (!s) continue;
        ID3D11Resource* r = nullptr;
        s->GetResource(&r);
        if (!r) continue;
        if (r == g_confirmedRes) {
            std::lock_guard<std::mutex> lock(g_mtx);
            g_confirmedStage = stage;
            g_confirmedSlot  = start + i;
        }
        r->Release();
    }
}

static void HandleUAVBind(const char* stageUAV, UINT start, UINT num, ID3D11UnorderedAccessView* const* uavs) {
    if (!g_enabled || !g_confirmedRes || !uavs) return;
    if (overlay_is_drawing()) return;
    for (UINT i = 0; i < num; ++i) {
        ID3D11UnorderedAccessView* u = uavs[i];
        if (!u) continue;
        ID3D11Resource* r = nullptr;
        u->GetResource(&r);
    if (!r) continue;
    if (r == g_confirmedRes) {
        D3D11_UNORDERED_ACCESS_VIEW_DESC uavDesc{}; u->GetDesc(&uavDesc);
        g_lastUAVFormat = uavDesc.Format;
        UINT bindFlags = 0; D3D11_RESOURCE_DIMENSION dim = D3D11_RESOURCE_DIMENSION_UNKNOWN; r->GetType(&dim);
        if (dim == D3D11_RESOURCE_DIMENSION_TEXTURE2D) {
            ID3D11Texture2D* t2=nullptr; if (SUCCEEDED(r->QueryInterface(__uuidof(ID3D11Texture2D),(void**)&t2)) && t2) {
                D3D11_TEXTURE2D_DESC td{}; t2->GetDesc(&td); bindFlags = td.BindFlags; t2->Release(); }
        }
        g_lastUAVBind = bindFlags;
    }
        if (r == g_confirmedRes) {
            std::lock_guard<std::mutex> lock(g_mtx);
            g_confirmedStage = stageUAV;
            g_confirmedSlot  = start + i;
        }
        r->Release();
    }
}

// --- Detours (must be plain function pointers, not lambdas) ---
static void STDMETHODCALLTYPE Detour_VSSetSRV(ID3D11DeviceContext* c, UINT start, UINT num, ID3D11ShaderResourceView* const* srvs) {
    HandleSRVBind("VS", start, num, srvs);
    if (s_origVSSetSRVs) s_origVSSetSRVs(c, start, num, srvs);
}
static void STDMETHODCALLTYPE Detour_GSSetSRV(ID3D11DeviceContext* c, UINT start, UINT num, ID3D11ShaderResourceView* const* srvs) {
    HandleSRVBind("GS", start, num, srvs);
    if (s_origGSSetSRVs) s_origGSSetSRVs(c, start, num, srvs);
}
static void STDMETHODCALLTYPE Detour_HSSetSRV(ID3D11DeviceContext* c, UINT start, UINT num, ID3D11ShaderResourceView* const* srvs) {
    HandleSRVBind("HS", start, num, srvs);
    if (s_origHSSetSRVs) s_origHSSetSRVs(c, start, num, srvs);
}
static void STDMETHODCALLTYPE Detour_DSSetSRV(ID3D11DeviceContext* c, UINT start, UINT num, ID3D11ShaderResourceView* const* srvs) {
    HandleSRVBind("DS", start, num, srvs);
    if (s_origDSSetSRVs) s_origDSSetSRVs(c, start, num, srvs);
}
static void STDMETHODCALLTYPE Detour_CSSetSRV(ID3D11DeviceContext* c, UINT start, UINT num, ID3D11ShaderResourceView* const* srvs) {
    HandleSRVBind("CS", start, num, srvs);
    if (s_origCSSetSRVs) s_origCSSetSRVs(c, start, num, srvs);
}
static void STDMETHODCALLTYPE Detour_CSSetUAV(ID3D11DeviceContext* c, UINT start, UINT num, ID3D11UnorderedAccessView* const* uavs, const UINT* pInit) {
    HandleUAVBind("CS_UAV", start, num, uavs);
    if (s_origCSSetUAVs) s_origCSSetUAVs(c, start, num, uavs, pInit);
}
static void STDMETHODCALLTYPE Detour_OMSetRTUAVs(
    ID3D11DeviceContext* c, UINT NumRTVs, ID3D11RenderTargetView* const* ppRTVs, ID3D11DepthStencilView* pDSV,
    UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView* const* ppUAVs, const UINT* pInit)
{
    if (ppRTVs && NumRTVs) {
        on_om_set_render_targets(c, NumRTVs, ppRTVs, pDSV);
    }
    HandleUAVBind("PS_UAV", UAVStartSlot, NumUAVs, ppUAVs);
    if (s_origOMSetRTUAVs) s_origOMSetRTUAVs(c, NumRTVs, ppRTVs, pDSV, UAVStartSlot, NumUAVs, ppUAVs, pInit);
}
static PFN_PSSetShaderResources s_origPSSetSRVs = nullptr;

bool try_install_pssrv_hook_from_present(IDXGISwapChain* sc) {
#ifndef NDEBUG
    if (g_psHooked) return true;
    if (!sc) return false;

    ID3D11Device* dev = nullptr;
    if (FAILED(sc->GetDevice(__uuidof(ID3D11Device), (void**)&dev)) || !dev) return false;
    ID3D11DeviceContext* ctx = nullptr; dev->GetImmediateContext(&ctx);
    if (!ctx) { dev->Release(); return false; }

    {
        std::lock_guard<std::mutex> lock(g_mtx);
        g_dev = dev; g_ctx = ctx;
    }

    void** vtbl = *(void***)ctx;
    auto target = (PFN_PSSetShaderResources)vtbl[8]; // common index for PSSetShaderResources
    if (!s_origPSSetSRVs) {
        MH_CreateHook((LPVOID)target, (LPVOID)+[](
            ID3D11DeviceContext* c, UINT start, UINT num, ID3D11ShaderResourceView* const* srvs)
        {
            if (!s_origPSSetSRVs) return;
            if (!g_enabled || overlay_is_drawing()) { s_origPSSetSRVs(c, start, num, srvs); return; }

            for (UINT i=0; i<num; ++i) {
                ID3D11ShaderResourceView* srv = srvs ? srvs[i] : nullptr;
                if (!srv) continue;
                ID3D11Resource* res = nullptr;
                srv->GetResource(&res);
                if (!res) continue;

                // Record first-seen candidates (size filtered)
                {
                    D3D11_RESOURCE_DIMENSION dim = D3D11_RESOURCE_DIMENSION_UNKNOWN;
                    res->GetType(&dim);
                    if (dim == D3D11_RESOURCE_DIMENSION_TEXTURE2D) {
                        ID3D11Texture2D* t2=nullptr;
                        if (SUCCEEDED(res->QueryInterface(__uuidof(ID3D11Texture2D), (void**)&t2)) && t2) {
                            D3D11_TEXTURE2D_DESC d{}; t2->GetDesc(&d);
                            TexInfo info{d.Width, d.Height, d.SampleDesc.Count? d.SampleDesc.Count:1};
                            t2->Release();
                            if (info.w <= kMaxW && info.h <= kMaxH) {
                                std::lock_guard<std::mutex> lock(g_mtx);
                                if (!g_rtvCandidates.count(res)) {
                                    g_rtvCandidates.emplace(res, info);
                                    g_rtvOrder.push_back(res);
                                } else {
                                    res->Release();
                                }
                            } else {
                                res->Release();
                            }
                        } else {
                            res->Release();
                        }
                    } else {
                        res->Release();
                    }
                }

                if (g_confirmedRes) {
                    if (res == g_confirmedRes) {
                        g_confirmedSRV = srv; // ComPtr AddRef
                        if (!g_loggedSeenOnce) {
                            g_confirmedSlot = start + i;
                            g_confirmedStage = "PS";
                            g_loggedSeenOnce = true;
                        }
                    }
                    res->Release();
                }
            }

            s_origPSSetSRVs(c, start, num, srvs);
        }, (void**)&s_origPSSetSRVs);
        MH_EnableHook((LPVOID)target);
    // --- Additional stage SRV/UAV hooks ---
    // vtable indices for ID3D11DeviceContext:
    // VSSetShaderResources: 25, GS:31, HS:59, DS:63, CS:67
    // OMSetRenderTargetsAndUnorderedAccessViews: 34, CSSetUnorderedAccessViews: 68
    auto hook_with_detour = [&](int idx, LPVOID detour, void** origOut) {
        void** vtbl2 = *(void***)ctx;
        void* tgt = vtbl2[idx];
        if (tgt && origOut && !*origOut) {
            MH_CreateHook(tgt, detour, origOut);
            MH_EnableHook(tgt);
        }
    };
    hook_with_detour(25, (LPVOID)Detour_VSSetSRV, (void**)&s_origVSSetSRVs);
    hook_with_detour(31, (LPVOID)Detour_GSSetSRV, (void**)&s_origGSSetSRVs);
    hook_with_detour(59, (LPVOID)Detour_HSSetSRV, (void**)&s_origHSSetSRVs);
    hook_with_detour(63, (LPVOID)Detour_DSSetSRV, (void**)&s_origDSSetSRVs);
    hook_with_detour(67, (LPVOID)Detour_CSSetSRV, (void**)&s_origCSSetSRVs);
    hook_with_detour(68, (LPVOID)Detour_CSSetUAV, (void**)&s_origCSSetUAVs);
    hook_with_detour(34, (LPVOID)Detour_OMSetRTUAVs, (void**)&s_origOMSetRTUAVs);

    }
    g_psHooked = true;
    return true;
#else
    (void)sc;
    return true;
#endif
}

void on_om_set_render_targets(ID3D11DeviceContext* ctx,
                              UINT numRTVs,
                              ID3D11RenderTargetView* const* rtvs,
                              ID3D11DepthStencilView* dsv)
{
    // Integrate DSV into candidate set and prefer as default when unconfirmed
    if (ctx && dsv) {
        ID3D11Resource* dres = nullptr;
        dsv->GetResource(&dres);
        if (dres) {
            D3D11_RESOURCE_DIMENSION dim = D3D11_RESOURCE_DIMENSION_UNKNOWN;
            dres->GetType(&dim);
            TexInfo dinfo{};
            if (dim == D3D11_RESOURCE_DIMENSION_TEXTURE2D) {
                ID3D11Texture2D* t2=nullptr;
                if (SUCCEEDED(dres->QueryInterface(__uuidof(ID3D11Texture2D), (void**)&t2)) && t2) {
                    D3D11_TEXTURE2D_DESC td{}; t2->GetDesc(&td);
                    dinfo.w = td.Width; dinfo.h = td.Height; dinfo.samples = td.SampleDesc.Count?td.SampleDesc.Count:1;
                    t2->Release();
                }
            }
            if (dinfo.w && dinfo.h && dinfo.w <= kMaxW && dinfo.h <= kMaxH) {
                std::lock_guard<std::mutex> lock(g_mtx);
                if (!g_rtvCandidates.count(dres)) {
                    g_rtvCandidates.emplace(dres, dinfo);
                    g_rtvOrder.push_back(dres);
                }
                if (!g_confirmedRes) {
                    g_confirmedRes = dres; g_confirmedRes->AddRef();
                    g_confirmedInfo = dinfo;
                    g_confirmedSRV.Reset();
                    g_loggedSeenOnce = false;
                }
            }
            dres->Release();
        }
    }

    if (!ctx || !rtvs || numRTVs == 0) return;
    if (!g_enabled) return;

    for (UINT i=0; i<numRTVs; ++i) {
        ID3D11RenderTargetView* rtv = rtvs[i];
        if (!rtv) continue;
        ID3D11Resource* res = nullptr;
        TexInfo info{};
        if (!GetTexInfoFromRTV(rtv, &res, &info)) continue;
// If this RTV refers to currently confirmed resource, record view format and resource bind flags
if (g_confirmedRes && res == g_confirmedRes) {
    D3D11_RENDER_TARGET_VIEW_DESC rtvDesc{}; rtv->GetDesc(&rtvDesc);
    g_lastRTVFormat = rtvDesc.Format;
    UINT bindFlags = 0; D3D11_RESOURCE_DIMENSION dim = D3D11_RESOURCE_DIMENSION_UNKNOWN; res->GetType(&dim);
    if (dim == D3D11_RESOURCE_DIMENSION_TEXTURE2D) {
        ID3D11Texture2D* t2=nullptr; if (SUCCEEDED(res->QueryInterface(__uuidof(ID3D11Texture2D),(void**)&t2)) && t2) {
            D3D11_TEXTURE2D_DESC td{}; t2->GetDesc(&td); bindFlags = td.BindFlags; t2->Release(); }
    }
    g_lastRTVBind = bindFlags;
}


        if (info.w <= kMaxW && info.h <= kMaxH) {
            std::lock_guard<std::mutex> lock(g_mtx);
            if (!g_rtvCandidates.count(res)) {
                g_rtvCandidates.emplace(res, info);
                g_rtvOrder.push_back(res);
            } else {
                res->Release();
            }
        } else {
            res->Release();
        }
    }

    if (g_confirmedRes && !g_confirmedSRV) {
        TryCreateConfirmedSRV();
    }
}

// ---- API ----
bool get_selected_rt_srv(ID3D11ShaderResourceView** outSrv,
                         UINT* w, UINT* h, UINT* samples)
{
    if (!g_confirmedSRV) return false;
    if (outSrv) { *outSrv = g_confirmedSRV.Get(); g_confirmedSRV->AddRef(); }
    if (w) *w = g_confirmedInfo.w;
    if (h) *h = g_confirmedInfo.h;
    if (samples) *samples = g_confirmedInfo.samples;
    return true;
}

void set_enabled(bool enabled) {
    std::lock_guard<std::mutex> lock(g_mtx);
    g_enabled = enabled;
}
bool is_enabled() { return g_enabled; }
void toggle_enabled() { set_enabled(!is_enabled()); }

bool cycle_next_rtv_candidate() {
    if (!g_enabled) return false;
    std::lock_guard<std::mutex> lock(g_mtx);
    if (g_rtvOrder.empty()) return false;

    g_rtvCycleIndex = (g_rtvCycleIndex + 1) % g_rtvOrder.size();
    ID3D11Resource* res = g_rtvOrder[g_rtvCycleIndex];
    auto it = g_rtvCandidates.find(res);
    if (it == g_rtvCandidates.end()) return false;

    if (g_confirmedRes) g_confirmedRes->Release();
    g_confirmedRes = res; g_confirmedRes->AddRef();
    g_confirmedInfo = it->second;
    g_confirmedSRV.Reset();
    g_loggedSeenOnce = false;
    g_lastRTVFormat = DXGI_FORMAT_UNKNOWN; g_lastRTVBind = 0; g_lastUAVFormat = DXGI_FORMAT_UNKNOWN; g_lastUAVBind = 0;
    TryCreateConfirmedSRV();
    return true;
}

bool cycle_prev_rtv_candidate() {
    if (!g_enabled) return false;
    std::lock_guard<std::mutex> lock(g_mtx);
    if (g_rtvOrder.empty()) return false;

    if (g_rtvCycleIndex == 0) g_rtvCycleIndex = g_rtvOrder.size() - 1;
    else g_rtvCycleIndex = (g_rtvCycleIndex - 1) % g_rtvOrder.size();

    ID3D11Resource* res = g_rtvOrder[g_rtvCycleIndex];
    auto it = g_rtvCandidates.find(res);
    if (it == g_rtvCandidates.end()) return false;

    if (g_confirmedRes) g_confirmedRes->Release();
    g_confirmedRes = res; g_confirmedRes->AddRef();
    g_confirmedInfo = it->second;
    g_confirmedSRV.Reset();
    g_loggedSeenOnce = false;
    g_lastRTVFormat = DXGI_FORMAT_UNKNOWN; g_lastRTVBind = 0; g_lastUAVFormat = DXGI_FORMAT_UNKNOWN; g_lastUAVBind = 0;
    TryCreateConfirmedSRV();
    return true;
}

void clear_confirmed() {
    std::lock_guard<std::mutex> lock(g_mtx);
    if (g_confirmedRes) { g_confirmedRes->Release(); g_confirmedRes = nullptr; }
    g_confirmedSRV.Reset();
    g_loggedSeenOnce = false;
}

bool get_stage_and_slot(unsigned* outSlot, const char** outStage) {
    if (!g_confirmedSRV) return false;
    if (outSlot) *outSlot = g_confirmedSlot;
    if (outStage) *outStage = g_confirmedStage;
    return true;
}

bool get_last_rtv_desc(DXGI_FORMAT* outFmt, UINT* outBindFlags) {
    if (outFmt) *outFmt = g_lastRTVFormat;
    if (outBindFlags) *outBindFlags = g_lastRTVBind;
    return g_lastRTVFormat != DXGI_FORMAT_UNKNOWN;
}
bool get_last_uav_desc(DXGI_FORMAT* outFmt, UINT* outBindFlags) {
    if (outFmt) *outFmt = g_lastUAVFormat;
    if (outBindFlags) *outBindFlags = g_lastUAVBind;
    return g_lastUAVFormat != DXGI_FORMAT_UNKNOWN;
}
void shutdown() {
#ifndef NDEBUG
    if (s_origPSSetSRVs) {
        MH_DisableHook(MH_ALL_HOOKS);
        s_origPSSetSRVs = nullptr;
    }
#endif
    clear_confirmed();
    g_rtvCandidates.clear();
    g_rtvOrder.clear();
    g_rtvCycleIndex = 0;
}

} // namespace render_target_scanner
