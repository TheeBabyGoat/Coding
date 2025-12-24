// Depth heatmap renderer (implementation)
//----------------------------------------
// Compiles lightweight VS/PS at runtime to render a full-screen quad sampling a depth SRV.
// Manages constant buffers for near/far/gamma, build-time flags for reversed-Z and raw/linear modes,
// and sampler and rasterizer/blend/depth states to ensure non-intrusive rendering.

#include "depth_heatmap.h"
#include <d3d11.h>
#include <d3dcompiler.h>
#include <windows.h>
#include <string.h>
#include <string>



using Microsoft::WRL::ComPtr;

struct HeatmapCB
{
    float NearPlane; // E.g. 0.1
    float FarPlane; // E.g. 1000.0
    float Gamma; // E.g. 0.95
    UINT  Flags; // Bit 0: reversed-Z (1=reversed)
};

static const char* kVS = R"(
struct VSOut {
    float4 pos : SV_Position;
    float2 uv  : TEXCOORD0;
};
VSOut main(uint id : SV_VertexID) {
    float2 pos = float2((id == 2) ? 3.0 : -1.0, (id == 1) ? 3.0 : -1.0);
    float2 uv  = float2((pos.x+1.0)*0.5, 1.0 - (pos.y+1.0)*0.5);
    VSOut o; o.pos = float4(pos, 0, 1); o.uv = uv; return o;
}
)";

static const char* kPS2D = R"(
Texture2D<float> DepthBuffer : register(t0);
SamplerState DepthSamp : register(s0);
cbuffer ScaleBias : register(b0) {
    float4 scaleBias; // xy = panel scale, zw = bias
    float2 srcSize;
    float2 _pad;
}
cbuffer HeatmapCB : register(b1) {
    float NearPlane;
    float FarPlane;
    float Gamma;
    uint Flags; // bit0=reversedZ, bit1=RAW_Z, bit2=RAW_INV, bit3=RAW_LINEAR_GRAY, bit4=RAW_LOG_GRAY
}
float LinearizeDepth(float z) {
    if ((Flags & 0x1u) != 0u) z = 1.0 - z; // reversed-Z first
    float n = max(1e-6, NearPlane);
    float f = max(n + 1e-6, FarPlane);
    return (n * f) / (f - z * (f - n));
}
float3 Heat(float t) {
    float3 c0 = float3(0.19, 0.07, 0.23);
    float3 c1 = float3(0.07, 0.40, 0.93);
    float3 c2 = float3(0.80, 0.97, 0.20);
    float3 c3 = float3(0.95, 0.30, 0.15);
    float3 a = lerp(c0, c1, saturate(t * 2.0));
    float3 b = lerp(c2, c3, saturate((t - 0.5) * 2.0));
    return lerp(a, b, step(0.5, t));
}
float4 main(float4 pos : SV_Position, float2 uv : TEXCOORD0) : SV_Target {
    float2 panelUV = uv * scaleBias.xy + scaleBias.zw;
    if (panelUV.x < 0.0 || panelUV.y < 0.0 || panelUV.x > 1.0 || panelUV.y > 1.0) discard;
    float2 invScale = max(scaleBias.xy, float2(1e-6, 1e-6));
    float2 suv = (panelUV - scaleBias.zw) / invScale;
    suv = saturate(suv);
    float z = DepthBuffer.Sample(DepthSamp, suv);
    // Raw displays respect reversed-Z
    if ((Flags & 0x2u) != 0u) { // RAW_Z
        float zr = ((Flags & 0x1u) != 0u) ? (1.0 - z) : z;
        return float4(zr.xxx, 1.0);
    }
    if ((Flags & 0x4u) != 0u) { // RAW_INV
        float zi = ((Flags & 0x1u) != 0u) ? z : (1.0 - z);
        return float4(zi.xxx, 1.0);
    }
    float lin = LinearizeDepth(z);
    float t = saturate((lin - NearPlane) / max(1e-6, (FarPlane - NearPlane)));
    // Logarithmic mapping if bit4 set
    if ((Flags & 0x10u) != 0u) {
        float ratio = max(1e-6, FarPlane / max(1e-6, NearPlane));
        float logt = log2(max(1e-6, lin / max(1e-6, NearPlane))) / log2(ratio);
        t = saturate(logt);
    }
    t = pow(t, max(0.001, Gamma));
    // Grayscale if bit3 set
    if ((Flags & 0x8u) != 0u) return float4(t.xxx, 1.0);
    float3 rgb = Heat(t);
    return float4(rgb, 1.0);
}
)";


static const char* kPSMS = R"(
Texture2DMS<float> DepthTexMS : register(t0);
cbuffer ScaleBias : register(b0) {
    float4 scaleBias;
    float2 srcSize;
    float2 _pad;
}
cbuffer HeatmapCB : register(b1) {
    float NearPlane;
    float FarPlane;
    float Gamma;
    uint Flags; // bit0=reversedZ, bit1=RAW_Z, bit2=RAW_INV, bit3=RAW_LINEAR_GRAY, bit4=RAW_LOG_GRAY
}
float LinearizeDepth(float z) {
    if ((Flags & 0x1u) != 0u) z = 1.0 - z; // reversed-Z first
    float n = max(1e-6, NearPlane);
    float f = max(n + 1e-6, FarPlane);
    return (n * f) / (f - z * (f - n));
}
float3 Heat(float t) {
    float3 c0 = float3(0.19, 0.07, 0.23);
    float3 c1 = float3(0.07, 0.40, 0.93);
    float3 c2 = float3(0.80, 0.97, 0.20);
    float3 c3 = float3(0.95, 0.30, 0.15);
    float3 a = lerp(c0, c1, saturate(t * 2.0));
    float3 b = lerp(c2, c3, saturate((t - 0.5) * 2.0));
    return lerp(a, b, step(0.5, t));
}
float4 main(float4 pos : SV_Position, float2 uv : TEXCOORD0) : SV_Target {
    float2 panelUV = uv * scaleBias.xy + scaleBias.zw;
    if (panelUV.x < 0.0 || panelUV.y < 0.0 || panelUV.x > 1.0 || panelUV.y > 1.0) discard;
    float2 invScale = max(scaleBias.xy, float2(1e-6, 1e-6));
    float2 suv = (panelUV - scaleBias.zw) / invScale;
    suv = saturate(suv);
    uint2 ip = uint2(suv * srcSize + 0.5);
    float z = DepthTexMS.Load(ip, 0);
    if ((Flags & 0x2u) != 0u) { // RAW_Z
        float zr = ((Flags & 0x1u) != 0u) ? (1.0 - z) : z;
        return float4(zr.xxx, 1.0);
    }
    if ((Flags & 0x4u) != 0u) { // RAW_INV
        float zi = ((Flags & 0x1u) != 0u) ? z : (1.0 - z);
        return float4(zi.xxx, 1.0);
    }
    float lin = LinearizeDepth(z);
    float t = saturate((lin - NearPlane) / max(1e-6, (FarPlane - NearPlane)));
    if ((Flags & 0x10u) != 0u) {
        float ratio = max(1e-6, FarPlane / max(1e-6, NearPlane));
        float logt = log2(max(1e-6, lin / max(1e-6, NearPlane))) / log2(ratio);
        t = saturate(logt);
    }
    t = pow(t, max(0.001, Gamma));
    if ((Flags & 0x8u) != 0u) return float4(t.xxx, 1.0);
    float3 rgb = Heat(t);
    return float4(rgb, 1.0);
}
)";



static D3D11_SRV_DIMENSION gLastDim = (D3D11_SRV_DIMENSION)0;

bool DepthHeatmap::init(ID3D11Device* dev, ID3D11DeviceContext* ctx)
{
    if (!dev || !ctx) return false;
    m_dev = dev; m_ctx = ctx;

    D3D11_BLEND_DESC bd{};
 // Bd.RenderTarget[0].BlendEnable = TRUE; // Enable blending if needed.
    bd.RenderTarget[0].BlendEnable = FALSE; // Opaque
    bd.RenderTarget[0].SrcBlend = D3D11_BLEND_SRC_ALPHA;
    bd.RenderTarget[0].DestBlend = D3D11_BLEND_INV_SRC_ALPHA;
    bd.RenderTarget[0].BlendOp = D3D11_BLEND_OP_ADD;
    bd.RenderTarget[0].SrcBlendAlpha = D3D11_BLEND_ONE;
    bd.RenderTarget[0].DestBlendAlpha = D3D11_BLEND_ONE;
    bd.RenderTarget[0].BlendOpAlpha = D3D11_BLEND_OP_ADD;
    bd.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;
    m_dev->CreateBlendState(&bd, &m_blend);

    D3D11_DEPTH_STENCIL_DESC ds{};
    ds.DepthEnable = FALSE;
    m_dev->CreateDepthStencilState(&ds, &m_depthState);

    D3D11_RASTERIZER_DESC rs{};
    rs.FillMode = D3D11_FILL_SOLID;
    rs.CullMode = D3D11_CULL_NONE;
    rs.ScissorEnable = FALSE;
    rs.DepthClipEnable = TRUE;
    m_dev->CreateRasterizerState(&rs, &m_rs);

    D3D11_SAMPLER_DESC sd{};
    sd.Filter = D3D11_FILTER_MIN_MAG_MIP_POINT;
    sd.AddressU = sd.AddressV = sd.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;
    sd.MaxLOD = D3D11_FLOAT32_MAX;
    m_dev->CreateSamplerState(&sd, &m_samp);

    D3D11_BUFFER_DESC cbd{};
    cbd.ByteWidth = 32; // Float4 scaleBias + float2 srcSize + padding.
    cbd.Usage = D3D11_USAGE_DYNAMIC;
    cbd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
    cbd.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
    m_dev->CreateBuffer(&cbd, nullptr, &m_cbScaleBias);
    cbd.ByteWidth = sizeof(HeatmapCB);
    cbd.Usage = D3D11_USAGE_DYNAMIC;
    cbd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
    cbd.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
    m_dev->CreateBuffer(&cbd, nullptr, &m_cbHeatmap);

    return true;
}


void DepthHeatmap::shutdown()
{
    m_ps.Reset();
    m_vs.Reset();
    m_il.Reset();
    m_blend.Reset();
    m_depthState.Reset();
    m_rs.Reset();
    m_samp.Reset();
    m_cbScaleBias.Reset();
    m_cbHeatmap.Reset();

}

bool DepthHeatmap::ensure_shaders()
{
    if (m_vs) return true;
    ComPtr<ID3DBlob> vsb, err;
    HRESULT hr = D3DCompile(kVS, (UINT)strlen(kVS), "heat_vs", nullptr, nullptr, "main", "vs_5_0", 0, 0, &vsb, &err);
    if (FAILED(hr)) {
        if (err) {
            std::string s = "[DevRV][Heatmap] VS compile error: ";
            s.append((const char*)err->GetBufferPointer(), err->GetBufferSize());
            OutputDebugStringA((s + "\n").c_str());
        }
        return false;
    }
    m_dev->CreateVertexShader(vsb->GetBufferPointer(), vsb->GetBufferSize(), nullptr, &m_vs);
    return m_vs != nullptr;
}

void DepthHeatmap::backup_state()
{
    auto& b = m_backup;
    m_ctx->OMGetRenderTargets(8, b.rtvs, &b.dsv);

    m_ctx->IAGetInputLayout(&b.il);
    m_ctx->IAGetPrimitiveTopology(&b.topo);

    m_ctx->VSGetShader(&b.vs, nullptr, nullptr);
    m_ctx->PSGetShader(&b.ps, nullptr, nullptr);
    m_ctx->GSGetShader(&b.gs, nullptr, nullptr);
    m_ctx->HSGetShader(&b.hs, nullptr, nullptr);
    m_ctx->DSGetShader(&b.ds, nullptr, nullptr);
    m_ctx->CSGetShader(&b.cs, nullptr, nullptr);

    m_ctx->PSGetShaderResources(0, 16, b.ps_srvs);
    m_ctx->PSGetSamplers(0, 16, b.ps_samps);

    m_ctx->VSGetConstantBuffers(0, 16, b.vs_cbs);
    m_ctx->PSGetConstantBuffers(0, 16, b.ps_cbs);

    FLOAT bf[4]; UINT sm;
    m_ctx->OMGetBlendState(&b.blend, bf, &sm);
    for (int i = 0; i < 4; ++i) b.blend_factor[i] = bf[i]; b.sample_mask = sm;

    m_ctx->OMGetDepthStencilState(&b.dss, &b.stencil_ref);
    m_ctx->RSGetState(&b.rs);

    m_backup.numVP = 16; m_ctx->RSGetViewports(&m_backup.numVP, m_backup.vps);
    m_backup.numSc = 16; m_ctx->RSGetScissorRects(&m_backup.numSc, m_backup.scissors);
}

void DepthHeatmap::restore_state()
{
    auto& b = m_backup;

    m_ctx->OMSetRenderTargets(8, b.rtvs, b.dsv);
    for (UINT i = 0; i < 8; ++i) if (b.rtvs[i]) b.rtvs[i]->Release();
    if (b.dsv) b.dsv->Release();

    m_ctx->IASetInputLayout(b.il);
    if (b.il) b.il->Release();
    m_ctx->IASetPrimitiveTopology(b.topo);

    m_ctx->VSSetShader(b.vs, nullptr, 0);
    m_ctx->PSSetShader(b.ps, nullptr, 0);
    m_ctx->GSSetShader(b.gs, nullptr, 0);
    m_ctx->HSSetShader(b.hs, nullptr, 0);
    m_ctx->DSSetShader(b.ds, nullptr, 0);
    m_ctx->CSSetShader(b.cs, nullptr, 0);
    if (b.vs) b.vs->Release();
    if (b.ps) b.ps->Release();
    if (b.gs) b.gs->Release();
    if (b.hs) b.hs->Release();
    if (b.ds) b.ds->Release();
    if (b.cs) b.cs->Release();

    m_ctx->PSSetShaderResources(0, 16, b.ps_srvs);
    m_ctx->PSSetSamplers(0, 16, b.ps_samps);
    for (int i = 0; i < 16; ++i) { if (b.ps_srvs[i]) b.ps_srvs[i]->Release(); if (b.ps_samps[i]) b.ps_samps[i]->Release(); }

    m_ctx->VSSetConstantBuffers(0, 16, b.vs_cbs);
    m_ctx->PSSetConstantBuffers(0, 16, b.ps_cbs);
    for (int i = 0; i < 16; ++i) { if (b.vs_cbs[i]) b.vs_cbs[i]->Release(); if (b.ps_cbs[i]) b.ps_cbs[i]->Release(); }

    m_ctx->OMSetBlendState(b.blend, b.blend_factor, b.sample_mask);
    if (b.blend) b.blend->Release();

    m_ctx->OMSetDepthStencilState(b.dss, b.stencil_ref);
    if (b.dss) b.dss->Release();
    m_ctx->RSSetState(b.rs);
    if (b.rs) b.rs->Release();

    m_ctx->RSSetViewports(b.numVP, b.vps);
    m_ctx->RSSetScissorRects(b.numSc, b.scissors);
}

bool DepthHeatmap::draw(ID3D11ShaderResourceView* depthSRV, UINT srcW, UINT srcH, UINT backW, UINT backH)
{
 // If no depth SRV or shaders could not be ensured, we cannot draw.
    if (!depthSRV || !ensure_shaders()) {
        return false;
    }

 // Choose pixel shader variant based on SRV dimension.
    D3D11_SHADER_RESOURCE_VIEW_DESC sd{};
    depthSRV->GetDesc(&sd);
    D3D11_SRV_DIMENSION dim = sd.ViewDimension;

    if (!m_ps || dim != gLastDim) {
        gLastDim = dim;
        m_ps.Reset();
        const char* src = kPS2D;
        if (dim == D3D11_SRV_DIMENSION_TEXTURE2DMS || dim == D3D11_SRV_DIMENSION_TEXTURE2DMSARRAY) {
            src = kPSMS;
        }
        ComPtr<ID3DBlob> psb, err;
        HRESULT hr = D3DCompile(src, (UINT)strlen(src), "heat_ps", nullptr, nullptr, "main", "ps_5_0", 0, 0, &psb, &err);
        if (FAILED(hr)) {
            if (err) {
                std::string s = "[DevRV][Heatmap] PS compile error: ";
                s.append((const char*)err->GetBufferPointer(), err->GetBufferSize());
                OutputDebugStringA((s + "\n").c_str());
            }
            return false;
        }
        m_dev->CreatePixelShader(psb->GetBufferPointer(), psb->GetBufferSize(), nullptr, &m_ps);
        if (!m_ps) return false;
    }

 // NOTE: We intentionally do not call backup_state() or restore_state()
 // Here. The overlay is responsible for saving and restoring the.
 // D3D11 state around calls to this function. Performing state.
 // Backup/restore both here and in the overlay can result in.
 // Double AddRef/Release on COM objects and subsequent crashes.
    m_ctx->IASetInputLayout(nullptr);
    m_ctx->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    m_ctx->VSSetShader(m_vs.Get(), nullptr, 0);
    m_ctx->PSSetShader(m_ps.Get(), nullptr, 0);
    m_ctx->PSSetSamplers(0, 1, m_samp.GetAddressOf());
    m_ctx->PSSetShaderResources(0, 1, &depthSRV);

    D3D11_MAPPED_SUBRESOURCE map{};
    if (SUCCEEDED(m_ctx->Map(m_cbScaleBias.Get(), 0, D3D11_MAP_WRITE_DISCARD, 0, &map))) {
        float targetW = (backW >= 640) ? 320.0f : backW * 0.5f;
        float targetH = targetW * 9.0f / 16.0f;
        float sx = targetW / (float)backW;
        float sy = targetH / (float)backH;
        float bx = 0.0f;
        float by = 1.0f - sy;
        float data[8] = { sx, sy, bx, by, (float)srcW, (float)srcH, 0.0f, 0.0f };
        memcpy(map.pData, data, sizeof(data));
        m_ctx->Unmap(m_cbScaleBias.Get(), 0);
    }

 // Fill HeatmapCB (defaults: 0.1..1000.0, gamma 0.95, reversed-Z on)
    HeatmapCB hcb{};
    hcb.NearPlane = 0.1f;
    hcb.FarPlane = 1000.0f;
    hcb.Gamma = 0.95f;
    hcb.Flags = (m_modeFlags & 0x1Fu); // Keep bit0 (reversed-Z), allow bits 1..3.

 // Set ONE of these depending on the view you want:
 // Hcb.Flags |= 0x2u; // RAW_Z (hardware)
 // Hcb.Flags |= 0x4u; // RAW_INV (1 - z)
 // Hcb.Flags |= 0x8u; // RAW_LINEAR_GRAY (linearized grayscale)
    D3D11_MAPPED_SUBRESOURCE map2{};
    if (SUCCEEDED(m_ctx->Map(m_cbHeatmap.Get(), 0, D3D11_MAP_WRITE_DISCARD, 0, &map2))) {
        memcpy(map2.pData, &hcb, sizeof(hcb));
        m_ctx->Unmap(m_cbHeatmap.Get(), 0);
    }

 // OLD:
 // ID3D11Buffer* cbs[1] = { m_cbScaleBias.Get() };
 // m_ctx->PSSetConstantBuffers(0, 1, cbs);

 // NEW (bind both b0 and b1)
    ID3D11Buffer* cbs[2] = { m_cbScaleBias.Get(), m_cbHeatmap.Get() };
    m_ctx->PSSetConstantBuffers(0, 2, cbs);

    FLOAT bf[4] = { 0,0,0,0 };
    m_ctx->OMSetBlendState(m_blend.Get(), bf, 0xffffffff);
    m_ctx->OMSetDepthStencilState(m_depthState.Get(), 0);
    m_ctx->RSSetState(m_rs.Get());

    m_ctx->Draw(3, 0);

 // We do not unbind the depth SRV or restore state here. The.
 // Calling code (overlay) will restore the previous state, which.
 // Includes unbinding any shader resource views. Unbinding here.
 // Could interfere with the overlay's state management.
    return true;
}
