// Depth heatmap renderer (interface)
//-----------------------------------
// Draws a full-screen quad that visualizes depth using several modes:
//   - Heatmap (default), RawZ, RawInv (1 - z), Linear gray (gamma-corrected).
// Provides state backup/restore helpers so the game's pipeline is restored exactly after drawing.

#pragma once
#include <d3d11.h>
#include <wrl/client.h>

class DepthHeatmap
{
public:
 // Flag bits (match shader):
 // Bit 0 = reversed-Z.
 // Bit 1 = RAW_Z (hardware depth, grayscale)
 // Bit 2 = RAW_INV (1 - z, grayscale)
 // Bit 3 = RAW_LINEAR_GRAY (linearized+normalized+gamma, grayscale)
    enum HeatmapFlags : unsigned {
    HF_ReversedZ = 1u << 0,
    HF_RawZ = 1u << 1,
    HF_RawInv = 1u << 2,
    HF_RawLinearGray = 1u << 3,
    HF_RawLog = 1u << 4,
};

public:
    bool init(ID3D11Device* dev, ID3D11DeviceContext* ctx);
    void shutdown();
    bool draw(ID3D11ShaderResourceView* depthSRV, UINT srcW, UINT srcH, UINT backW, UINT backH);

 // Overlay can set visualization flags each frame (see enum above).
    inline void set_mode_flags(unsigned f) { m_modeFlags = f; }
    inline unsigned mode_flags() const { return m_modeFlags; }

private:
    bool ensure_shaders();
    void backup_state();
    void restore_state();

    Microsoft::WRL::ComPtr<ID3D11Device>        m_dev;
    Microsoft::WRL::ComPtr<ID3D11DeviceContext> m_ctx;

    Microsoft::WRL::ComPtr<ID3D11VertexShader> m_vs;
    Microsoft::WRL::ComPtr<ID3D11PixelShader>  m_ps;
    Microsoft::WRL::ComPtr<ID3D11InputLayout>  m_il;

    Microsoft::WRL::ComPtr<ID3D11BlendState>        m_blend;
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState> m_depthState;
    Microsoft::WRL::ComPtr<ID3D11RasterizerState>   m_rs;
    Microsoft::WRL::ComPtr<ID3D11SamplerState>      m_samp;

    struct Backup {
        ID3D11RenderTargetView* rtvs[8]{};
        ID3D11DepthStencilView* dsv = nullptr;

        ID3D11VertexShader* vs = nullptr;
        ID3D11PixelShader* ps = nullptr;
        ID3D11GeometryShader* gs = nullptr;
        ID3D11HullShader* hs = nullptr;
        ID3D11DomainShader* ds = nullptr;
        ID3D11ComputeShader* cs = nullptr;

        ID3D11InputLayout* il = nullptr;
        D3D11_PRIMITIVE_TOPOLOGY topo{};

        ID3D11ShaderResourceView* ps_srvs[16]{};
        ID3D11SamplerState* ps_samps[16]{};
        ID3D11Buffer* vs_cbs[16]{};
        ID3D11Buffer* ps_cbs[16]{};
        ID3D11BlendState* blend = nullptr;
        FLOAT                      blend_factor[4]{};
        UINT                       sample_mask = 0xffffffff;
        ID3D11DepthStencilState* dss = nullptr;
        UINT                       stencil_ref = 0;
        ID3D11RasterizerState* rs = nullptr;
        D3D11_VIEWPORT             vps[16]{}; UINT numVP = 0;
        D3D11_RECT                 scissors[16]{}; UINT numSc = 0;
    } m_backup;

 // Constant buffers
    Microsoft::WRL::ComPtr<ID3D11Buffer> m_cbScaleBias; // B0 (scale/bias + src size)
    Microsoft::WRL::ComPtr<ID3D11Buffer> m_cbHeatmap; // B1 (Near/Far/Gamma/Flags)

 // Visualization flags for the shader (combined bitmask from HeatmapFlags)
    unsigned m_modeFlags = HF_ReversedZ; // Default to reversed-Z on (GTA V)
};
