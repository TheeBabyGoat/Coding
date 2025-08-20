/*
------------------------------------------------------------------------------
    shader_cache.cpp
    HLSL Shader Compilation and Binary Caching (PulseV Runtime)
------------------------------------------------------------------------------
*/

#include "shader_cache.h"
#include <fstream>
#include <vector>
#include <d3dcompiler.h>
#include <ShlObj.h>
#include <filesystem>
#include <cstdio>

#pragma comment(lib, "d3dcompiler.lib")
#pragma comment(lib, "Shell32.lib")
#pragma comment(lib, "Ole32.lib")

#define LogInfo(...)
#define LogError(...)

template<typename T>
static inline void safe_release(T*& p) { if (p) { p->Release(); p = nullptr; } }

namespace ShaderCache {

    static std::wstring get_cache_dir() {
        PWSTR path = nullptr;
        const HRESULT hr = SHGetKnownFolderPath(FOLDERID_LocalAppData, 0, NULL, &path);
        if (SUCCEEDED(hr)) {
            std::wstring base(path);
            CoTaskMemFree(path);
            return base + L"\\PulseV\\cache\\";
        }
        return L"";
    }

    bool GetOrCompileShader(
        ID3D11Device* device,
        const std::wstring& cache_key,
        const std::wstring& source_path,
        const std::string& entry_point,
        const std::string& profile,
        ID3D11ComputeShader** out_shader)
    {
        if (!device || !out_shader) return false;
        *out_shader = nullptr;

        const std::wstring base_dir = get_cache_dir();
        if (base_dir.empty()) return false;

        std::filesystem::path cache_file_path = std::filesystem::path(base_dir) / cache_key;
        std::error_code ec;
        std::filesystem::create_directories(cache_file_path.parent_path(), ec);

        // Try cache
        {
            std::ifstream f(cache_file_path, std::ios::binary);
            if (f.good()) {
                f.seekg(0, std::ios::end);
                const std::streampos end = f.tellg();
                f.seekg(0, std::ios::beg);
                if (end > 0) {
                    std::vector<char> blob(static_cast<size_t>(end));
                    f.read(blob.data(), blob.size());
                    f.close();
                    if (SUCCEEDED(device->CreateComputeShader(blob.data(), blob.size(), nullptr, out_shader))) {
                        return true;
                    }
                }
                else {
                    f.close();
                }
            }
        }

        // Compile
        ID3DBlob* blob = nullptr;
        ID3DBlob* err = nullptr;
        UINT flags = D3DCOMPILE_ENABLE_STRICTNESS | D3DCOMPILE_OPTIMIZATION_LEVEL3;
#if defined(_DEBUG) || defined(DEBUG)
        flags |= D3DCOMPILE_DEBUG;
#endif

        HRESULT hr = D3DCompileFromFile(
            source_path.c_str(), nullptr, D3D_COMPILE_STANDARD_FILE_INCLUDE,
            entry_point.c_str(), profile.c_str(), flags, 0, &blob, &err);

        if (err) { err->Release(); err = nullptr; }
        if (FAILED(hr)) { safe_release(blob); return false; }

        hr = device->CreateComputeShader(blob->GetBufferPointer(), blob->GetBufferSize(), nullptr, out_shader);
        if (FAILED(hr) || !*out_shader) { safe_release(blob); return false; }

        // Write cache (best effort)
        std::ofstream wf(cache_file_path, std::ios::out | std::ios::binary);
        if (wf.good()) {
            wf.write((const char*)blob->GetBufferPointer(), blob->GetBufferSize());
            wf.close();
        }

        safe_release(blob);
        return true;
    }

} // namespace ShaderCache
