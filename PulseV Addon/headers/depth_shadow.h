// Depth-from-PS SRV (experimental)
//---------------------------------
// Optional path that tries to obtain the scene depth by snooping PSSetShaderResources and reusing
// the depth SRV directly when available. Primarily useful for experiments and fallback scenarios.

#pragma once
#include <d3d11.h>
#include <wrl/client.h>
#include <string>

#ifndef DEPTHSHADOW_VERBOSE
#define DEPTHSHADOW_VERBOSE 0
#endif

class DepthShadow
{
public:
    bool init(ID3D11Device* dev, ID3D11DeviceContext* ctx);
    void reset();

    bool install_ps_srv_hook(); // Vtable hook on PSSetShaderResources.
    bool capture_auto(); // Prefer: direct on DSV else PS SRV borrowed.
    bool capture_from_bound_depth(); // Legacy direct-only

    ID3D11ShaderResourceView* srv() const { return m_srv.Get(); }
    UINT width()  const { return m_w; }
    UINT height() const { return m_h; }
    const char*  last_reason() const { return m_reason.c_str(); }

    void note_ps_srvs(UINT start, UINT count, ID3D11ShaderResourceView* const* srvs);

private:
    bool make_direct_srv_on_dsv(ID3D11DepthStencilView* dsv);
    bool snoop_ps_srvs_match_dsv();
    void set_reason(const char* r);

    Microsoft::WRL::ComPtr<ID3D11Device>        m_dev;
    Microsoft::WRL::ComPtr<ID3D11DeviceContext> m_ctx;
    Microsoft::WRL::ComPtr<ID3D11ShaderResourceView> m_srv;
    Microsoft::WRL::ComPtr<ID3D11Resource>           m_srvResource;
    UINT m_w = 0, m_h = 0;
    std::string m_reason;
    bool m_hookInstalled = false;
};
