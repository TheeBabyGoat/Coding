// GBuffer capture & export (DevRV)
//------------------------------------
// Observes OMSetRenderTargets to capture GTA V's GBuffer MRTs (RT0..RT3) and
// exposes them as SRVs for ReShade via exported C functions.
// This module is lightweight and does not draw. SRVs are created lazily and
// refreshed only when the underlying RTV resource changes.
// Logging uses logx::info but is one-shot to avoid spam.

#pragma once
#include <d3d11.h>
#include <wrl/client.h>

namespace gbuffer_export {

// Should be called from the OMSetRenderTargets detour (idempotent).
void on_om_set_render_targets(ID3D11DeviceContext* ctx,
                              UINT numRTVs,
                              ID3D11RenderTargetView* const* rtvs,
                              ID3D11DepthStencilView* dsv);

// Optional clean shutdown (releases SRVs).
void shutdown();

// Export helpers used by C exports (return AddRef'd SRV, return true on success).
bool get_diffuse_srv(ID3D11ShaderResourceView** out);
bool get_normal_srv(ID3D11ShaderResourceView** out);
bool get_specular_srv(ID3D11ShaderResourceView** out);
bool get_irradiance_srv(ID3D11ShaderResourceView** out);

} // namespace gbuffer_export
