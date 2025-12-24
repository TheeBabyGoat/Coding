// GTA V depth capture helpers
//----------------------------
// Utilities to locate the active depth buffer and expose it as a sampled SRV for overlay rendering.
// Installs deferred hooks (from Present) on OMSetRenderTargets and Clear* calls as needed to discover
// the current DSV and copy it into a typeless texture that can be bound for sampling.
// Provides helpers to log the DSV once, query the last DSV (weak), copy its contents immediately,
// and retrieve the SRV/size/sample-count for the copied depth.

#pragma once
#include <d3d11.h>
#include <wrl/client.h>

namespace gta5_depth {

 // Attempt deferred installers from Present (idempotent)
bool try_install_om_hook_from_present(IDXGISwapChain* sc);
bool try_install_clear_hook_from_present(IDXGISwapChain* sc);

 // One-time flag helpers.
void LogDSVOnce();

 // Weak pointer to last observed DSV (do not Release())
ID3D11DepthStencilView* GetLastDSV();

 // Copy current DSV into our SRV (called before drawing overlay)
bool CopyDepthFromDSVNow(ID3D11DeviceContext* ctx, ID3D11DepthStencilView* dsv);

 // Get the SRV of the copied depth (AddRef'd)
bool GetDepthCopySRV(ID3D11ShaderResourceView** outSRV,
                     UINT* width, UINT* height, UINT* samples);

 // Optional: clean shutdown.
void ShutdownDepthHook();

} // namespace gta5_depth
