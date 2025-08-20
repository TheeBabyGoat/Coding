
#pragma once
#include <d3d11.h>

namespace DeviceEvents {
    void on_device_lost();
    void on_before_device_reset();
    void on_after_device_reset(ID3D11Device* new_device, ID3D11DeviceContext* new_ctx);
    void on_swapchain_resize(UINT width, UINT height);
}
