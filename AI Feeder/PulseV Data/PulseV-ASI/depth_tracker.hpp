#pragma once
#include <d3d11.h>
#include <dxgi.h>
#include <unordered_map>
#include <mutex>

struct DepthStats {
    UINT width = 0, height = 0;
    UINT samples = 1;
    UINT64 draws = 0;
    UINT64 verts = 0;
    ID3D11Texture2D* tex = nullptr;            // backing texture
    ID3D11DepthStencilView* dsv = nullptr;     // map key (not ref-counted)
};

struct DepthSelection {
    ID3D11Texture2D* resolvedTex = nullptr;   // single-sample R32_FLOAT
    ID3D11ShaderResourceView* resolvedSRV = nullptr;   // SRV for binding (t12)
    ID3D11UnorderedAccessView* resolvedUAV = nullptr;  // UAV for compute resolve
    D3D11_TEXTURE2D_DESC       desc = {};
};

class DepthTracker {
public:
    ~DepthTracker() { release(); }

    void onBindDSV(ID3D11DepthStencilView* dsv);
    void onDraw(UINT primCount);
    void onPresent(ID3D11Device* dev, ID3D11DeviceContext* ctx, const D3D11_TEXTURE2D_DESC& backDesc);

    ID3D11ShaderResourceView* getDepthSRV() const { return sel_.resolvedSRV; }
    void release();

private:
    void buildResolved(ID3D11Device* dev, ID3D11DeviceContext* ctx, const DepthStats& ds);

    mutable std::mutex mtx_;
    std::unordered_map<ID3D11DepthStencilView*, DepthStats> map_;
    ID3D11DepthStencilView* current_ = nullptr; // weak
    DepthSelection sel_;
};
