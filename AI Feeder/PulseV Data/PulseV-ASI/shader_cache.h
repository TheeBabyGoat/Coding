/*
------------------------------------------------------------------------------
    shader_cache.h
    HLSL Shader Compilation and Caching Interface
    Part of the PulseV Runtime System

    Overview:
    ---------
    Declares the interface for runtime compilation and binary caching of
    HLSL compute shaders. Used primarily by internal subsystems such as
    depth resolve, post-processing, and diagnostics.

    Key Function:
    -------------
    bool GetOrCompileShader(
        ID3D11Device* device,
        const std::wstring& cache_path,
        const std::wstring& source_path,
        const std::string& entry_point,
        const std::string& profile,
        ID3D11ComputeShader** out_shader
    );

    Parameters:
    -----------
      • device        – The D3D11 device used to create the shader.
      • cache_path    – LocalAppData-relative path to use as cache key.
      • source_path   – Path to the HLSL source file on disk.
      • entry_point   – Entry function name within the shader source.
      • profile       – Shader model profile (e.g., "cs_5_0").
      • out_shader    – Resulting shader pointer (created or loaded).

    Behavior:
    ---------
      • Attempts to load a precompiled shader from binary cache.
      • If unavailable, compiles the shader from disk and writes the result
        to the cache directory for future runs.

    Use Cases:
    ----------
      • Internal tools that rely on compute shaders (e.g., depth resolve).
      • Performance optimization for one-time shader compilation.

    Requirements:
    -------------
      • D3DCompiler_47.dll available at runtime (via OS or redistribution).
      • Valid shader source code accessible at runtime.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#pragma once
#include <d3d11.h>
#include <wrl.h>
#include <string>

using Microsoft::WRL::ComPtr;

bool CompileCS(ID3D11Device* device,
    const std::wstring& file,
    const std::string& entry,
    ComPtr<ID3D11ComputeShader>& outCS);

namespace ShaderCache {
    bool GetOrCompileShader(
        ID3D11Device* device,
        const std::wstring& cache_key,
        const std::wstring& source_path,
        const std::string& entry_point,
        const std::string& profile,
        ID3D11ComputeShader** out_shader
    );
}
