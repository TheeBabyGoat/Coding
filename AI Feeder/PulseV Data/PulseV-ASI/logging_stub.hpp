/*
------------------------------------------------------------------------------
    logging_stub.hpp
    Minimal logging utility for PulseV ASI

    Overview:
    ---------
    Provides a lightweight logging function `pv_log` that can be used
    throughout the project for debug messages. By default, logs are only
    emitted in Debug builds via `OutputDebugStringA`.

    Key Points:
    -----------
      • pv_log(fmt, ...):
          - Variadic printf-style logging function.
          - Buffers formatted output up to 2048 characters.
          - In Debug builds: forwards messages to the Visual Studio
            debugger console using `OutputDebugStringA`.
          - In Release builds: compiled out (no overhead).

    Purpose:
    --------
      • Offer a consistent and simple way to add instrumentation,
        warnings, or error messages during development.
      • Can be swapped or extended to integrate with a more robust
        logging backend (file logging, in-game overlays, etc.).

    Notes:
    ------
      • Uses C standard library variadic functions (va_list, vsnprintf).
      • Buffer length is fixed; overly long messages will be truncated.
      • If deeper logging is required, replace this stub with a
        project-wide logging system.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#pragma once
#include <cstdarg>
#include <cstdio>

// Replace with your logging.cpp hooks if you want.
// For now: prints to OutputDebugStringA in Debug builds.
inline void pv_log(const char* fmt, ...)
{
#ifdef _DEBUG
    char buf[2048];
    va_list ap; va_start(ap, fmt);
    vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);
    OutputDebugStringA(buf);
    OutputDebugStringA("\n");
#else
    (void)fmt;
#endif
}
