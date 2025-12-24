// Water mask status overlay
//--------------------------
// Minimal status text overlay (uses the existing overlay device/context save/restore).
// Logs are already emitted via logx::info; this is just a visual breadcrumb if needed.

#include "water_mask_overlay.h"
#include "water_mask.h"
#include "overlay.h"
#include "logging.h"

#include <wrl/client.h>
using Microsoft::WRL::ComPtr;

namespace water_mask_overlay {

void draw(IDXGISwapChain* /*sc*/)
{
    // For now, rely on logs. Keep this stub so we can expand to on-screen
    // preview later without touching other files.
    ID3D11ShaderResourceView* srv = nullptr;
    if (water_mask::get_publish_srv(&srv)) {
        logx::info("[DevRV] Water mask (Initalized): SRV=%p", (void*)srv);
        srv->Release();
    }
}

} // namespace water_mask_overlay
