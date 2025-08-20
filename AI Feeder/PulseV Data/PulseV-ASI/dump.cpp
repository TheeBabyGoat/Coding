/*
------------------------------------------------------------------------------
    dump.cpp
    PulseV Frame Dumping Utility (Diagnostics Module)

    Overview:
    ---------
    Provides a developer-facing utility for dumping real-time GPU and swapchain
    diagnostics to disk. Outputs JSON metadata and optionally image data from
    the active depth surface.

    Main Entry Point:
    -----------------
    void Diagnostics::DumpFrame(
        const std::string& dump_path,
        ID3D11Device* device,
        IDXGISwapChain* swap_chain,
        const DsvInfo& active_dsv_info,
        ID3D11Texture2D* resolved_depth_tex
    );

    Responsibilities:
    -----------------
    • Creates a timestamped JSON file in the specified dump path.
    • Captures:
      - Device feature level
      - Swapchain resolution and format
      - Active depth-stencil view (DSV) metadata
    • Logs file creation to console (currently LogInfo is stubbed).
    • PNG depth dump is not implemented but described in comments for future dev.

    Utilities:
    ----------
    • dxgi_format_to_string(DXGI_FORMAT):
        Converts DXGI format enums to string for logging and JSON export.

    TODOs:
    ------
    • Implement resolved depth PNG export (requires third-party lib).
    • Extend format string table if new DXGI formats are relevant.

    Notes:
    ------
    • This file is meant for internal diagnostics and frame capture.
    • Should only be active when gCfg.diagnostics.dump_frame is true.
    • All timestamped output uses `std::put_time` and system clock.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#include "dump.h"
#include <fstream>
#include <sstream>
#include <chrono>
#include <iomanip>
#include <filesystem>

// #include "../logging.h" // Assuming a logging header exists
#include <stdio.h>
#define LogInfo(...) // printf(__VA_ARGS__)

namespace Diagnostics {

    // A simple helper to convert DXGI_FORMAT to string
    const char* dxgi_format_to_string(DXGI_FORMAT format) {
        switch (format) {
        case DXGI_FORMAT_R32G8X24_TYPELESS: return "R32G8X24_TYPELESS";
        case DXGI_FORMAT_D32_FLOAT_S8X24_UINT: return "D32_FLOAT_S8X24_UINT";
        case DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS: return "R32_FLOAT_X8X24_TYPELESS";
        case DXGI_FORMAT_X32_TYPELESS_G8X24_UINT: return "X32_TYPELESS_G8X24_UINT";
        case DXGI_FORMAT_R24G8_TYPELESS: return "R24G8_TYPELESS";
        case DXGI_FORMAT_D24_UNORM_S8_UINT: return "D24_UNORM_S8_UINT";
        case DXGI_FORMAT_R24_UNORM_X8_TYPELESS: return "R24_UNORM_X8_TYPELESS";
        case DXGI_FORMAT_X24_TYPELESS_G8_UINT: return "X24_TYPELESS_G8_UINT";
        case DXGI_FORMAT_R32_TYPELESS: return "R32_TYPELESS";
        case DXGI_FORMAT_D32_FLOAT: return "D32_FLOAT";
        case DXGI_FORMAT_R32_FLOAT: return "R32_FLOAT";
        default: return "Unknown";
        }
    }

    void DumpFrame(
        const std::string& dump_path,
        ID3D11Device* device,
        IDXGISwapChain* swap_chain,
        const DsvInfo& active_dsv_info,
        ID3D11Texture2D* resolved_depth_tex)
    {
        // Create dump directory
        std::filesystem::create_directories(dump_path);

        // Generate filename from timestamp
        auto now = std::chrono::system_clock::now();
        auto time_t_now = std::chrono::system_clock::to_time_t(now);
        std::tm tm_now;
        localtime_s(&tm_now, &time_t_now);

        std::stringstream ss;
        ss << std::put_time(&tm_now, "dump_%Y%m%d_%H%M%S");
        std::string base_filename = dump_path + "/" + ss.str();

        // --- Write JSON data ---
        std::ofstream json_file(base_filename + ".json");
        if (json_file.is_open()) {
            json_file << "{\n";

            // Device caps
            D3D_FEATURE_LEVEL feature_level = device->GetFeatureLevel();
            json_file << "  \"device_caps\": {\n";
            json_file << "    \"feature_level\": \"" << feature_level << "\"\n";
            json_file << "  },\n";

            // Swapchain info
            DXGI_SWAP_CHAIN_DESC sc_desc;
            if (SUCCEEDED(swap_chain->GetDesc(&sc_desc))) {
                json_file << "  \"swap_chain\": {\n";
                json_file << "    \"width\": " << sc_desc.BufferDesc.Width << ",\n";
                json_file << "    \"height\": " << sc_desc.BufferDesc.Height << ",\n";
                json_file << "    \"format\": \"" << dxgi_format_to_string(sc_desc.BufferDesc.Format) << "\"\n";
                json_file << "  },\n";
            }

            // Active DSV info
            json_file << "  \"active_dsv\": {\n";
            json_file << "    \"width\": " << active_dsv_info.width << ",\n";
            json_file << "    \"height\": " << active_dsv_info.height << ",\n";
            json_file << "    \"format\": \"" << dxgi_format_to_string(active_dsv_info.format) << "\",\n";
            json_file << "    \"msaa_samples\": " << active_dsv_info.msaa_samples << "\n";
            json_file << "  }\n";

            json_file << "}\n";
            json_file.close();
            LogInfo("Wrote diagnostics dump to %s.json\n", base_filename.c_str());
        }

        // --- Write PNG data (TODO) ---
        // This would require a PNG library (e.g., lodepng, stb_image_write)
        // which is out of scope for this task's constraints.
        // The logic would be:
        // 1. Create a staging texture with CPU read access.
        // 2. CopySubresourceRegion from resolved_depth_tex to the staging texture.
        // 3. Map the staging texture to get a pointer to the depth data.
        // 4. Normalize the R32F data to 16-bit unsigned integers.
        // 5. Use a PNG library to write the 16-bit grayscale data to a file.
        // 6. Unmap and release the staging texture.
        if (resolved_depth_tex) {
            LogInfo("PNG dump for resolved depth is not implemented.\n");
        }
    }

} // namespace Diagnostics
