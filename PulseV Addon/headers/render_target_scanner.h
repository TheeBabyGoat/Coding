// Render-target scanner API
//--------------------------
// Functions to install the PS SRV hook from Present, react to OMSetRenderTargets,
// and query/cycle the currently selected render target/SRV for debugging.
// Also exposes last seen RTV/UAV format+bind flags and a clean shutdown path.

#pragma once
#include <d3d11.h>
#include <wrl/client.h>

namespace render_target_scanner {

// Install PSSetShaderResources hook (idempotent). Should be called from Present.
bool try_install_pssrv_hook_from_present(IDXGISwapChain* sc);

// Called from our existing OMSetRenderTargets detour.
void on_om_set_render_targets(ID3D11DeviceContext* ctx,
                              UINT numRTVs,
                              ID3D11RenderTargetView* const* rtvs,
                              ID3D11DepthStencilView* dsv);

// Retrieve the currently selected render-target SRV + info.
bool get_selected_rt_srv(ID3D11ShaderResourceView** outSrv,
                         UINT* w, UINT* h, UINT* samples);

// Scanning is always on; these exist for completeness.
void set_enabled(bool enabled);
bool is_enabled();
void toggle_enabled();

// Cycle candidates (F7 next / F6 prev).
bool cycle_next_rtv_candidate();
bool cycle_prev_rtv_candidate();

// Clear the current confirmed render target resource/SRV.
void clear_confirmed();

// Stage+slot of the selected RT SRV (for logging).
bool get_stage_and_slot(unsigned* outSlot, const char** outStage);

// Retrieve last seen RTV desc.Format and its resource BindFlags. Returns false if none.
bool get_last_rtv_desc(DXGI_FORMAT* outFmt, UINT* outBindFlags);
// Retrieve last seen UAV desc.Format and its resource BindFlags. Returns false if none.
bool get_last_uav_desc(DXGI_FORMAT* outFmt, UINT* outBindFlags);

 // Cleanup, remove hooks.
void shutdown();

} // namespace render_target_scanner
