// depth_export.cpp
#include <d3d11.h>
#include "gta5_depth_hook.h"
#include <atomic>

// Return the single-sample R32F depth copy SRV (AddRef'd). 1 = success.
extern "C" __declspec(dllexport) int __cdecl PulseV_GetDepthSRV(ID3D11ShaderResourceView** outSRV)
{
    if (!outSRV) return 0;
    if (!gta5_depth::g_depth_publish_enabled.load(std::memory_order_acquire)) return 0;
    UINT w = 0, h = 0, samples = 1;
    return gta5_depth::GetDepthCopySRV(outSRV, &w, &h, &samples) ? 1 : 0;
}

// For now this is the same as GetDepthSRV: the copy is already a single-sample R32F "linear-ish" depth.
extern "C" __declspec(dllexport) int __cdecl PulseV_GetDepthLinearSRV(ID3D11ShaderResourceView** outSRV)
{
    return PulseV_GetDepthSRV(outSRV);
}

// Query depth buffer metadata (width/height/samples). 1 = success.
extern "C" __declspec(dllexport) int __cdecl PulseV_GetDepthInfo(unsigned int* w, unsigned int* h, unsigned int* samples)
{
    if (!gta5_depth::g_depth_publish_enabled.load(std::memory_order_acquire)) return 0;
    ID3D11ShaderResourceView* tmp = nullptr;
    UINT W = 0, H = 0, S = 1;
    const bool ok = gta5_depth::GetDepthCopySRV(&tmp, &W, &H, &S);
    if (tmp) tmp->Release();            // we only needed the info
    if (!ok) return 0;
    if (w) *w = W; if (h) *h = H; if (samples) *samples = S;
    return 1;
}
