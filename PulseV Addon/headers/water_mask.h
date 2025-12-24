#pragma once
#include <d3d11.h>
#include <wrl/client.h>

namespace water_mask {

// Install Draw/DrawIndexed hooks (idempotent). Call from Present once device/context are valid.
bool try_install_draw_hooks_from_present(IDXGISwapChain* sc);

// Called at the start of our Present detour (stable point) to freeze the "winner" for publishing.
void on_present_begin(IDXGISwapChain* sc, int presentCount);

// Returns the SRV to publish to ReShade this frame. Adds a ref when outSRV is returned true.
bool get_publish_srv(ID3D11ShaderResourceView** outSRV);

// Optional: clear internal state on shutdown.
void shutdown();

} // namespace water_mask

// Export a tiny C ABI for external tooling (e.g., a ReShade add-on) to fetch the SRV.
// The returned SRV is AddRef'd; caller must Release() when done. Returns 1 on success, 0 on failure.
extern "C" __declspec(dllexport) int __cdecl PulseV_GetWaterMaskSRV(ID3D11ShaderResourceView** outSRV);
