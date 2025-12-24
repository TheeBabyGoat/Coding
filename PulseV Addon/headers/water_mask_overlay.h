#pragma once
#include <d3d11.h>

namespace water_mask_overlay {

// Draw a tiny status overlay in the corner (non-intrusive).
// Safe to call every frame from overlay::draw().
void draw(IDXGISwapChain* sc);

} // namespace water_mask_overlay
