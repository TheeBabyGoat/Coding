
// Debug logging helpers
//----------------------
// Small printf-style helpers that write to OutputDebugString[A/W].
// Use info()/warn()/error() for uniform logging without external dependencies.

#pragma once
#include <Windows.h>
#include <cstdio>
#include <cwchar>

namespace logx {
    inline void info(const char* fmt, ...) {
        char buf[2048]; va_list ap; va_start(ap, fmt);
        _vsnprintf_s(buf, _TRUNCATE, fmt, ap); va_end(ap);
        OutputDebugStringA(buf); OutputDebugStringA("\n");
    }
    inline void info_w(const wchar_t* fmt, ...) {
        wchar_t buf[2048]; va_list ap; va_start(ap, fmt);
        _vsnwprintf_s(buf, _TRUNCATE, fmt, ap); va_end(ap);
        OutputDebugStringW(buf); OutputDebugStringW(L"\n");
    }
    inline void warn(const char* fmt, ...)
    {
        char buf[1024];
        va_list ap;
        va_start(ap, fmt);
        _vsnprintf_s(buf, _TRUNCATE, fmt, ap);
        va_end(ap);

 // Prefix (optional): keep consistent with your other logs.
        OutputDebugStringA(buf);
        OutputDebugStringA("\n");
    }

} // namespace logx
