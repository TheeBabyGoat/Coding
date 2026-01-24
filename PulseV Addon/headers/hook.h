
// Tiny trampoline hook (x64)
//---------------------------
// Header-only helper to create a trampoline that overwrites a target prolog with an absolute jump.
// Stores the original bytes, builds a small executable stub, and supports remove/restore at runtime.

#pragma once
#include <Windows.h>
#include <cstdint>

namespace simplehook
{
    struct Hook
    {
        void* target{};
        void* detour{};
        void* trampoline{};
        size_t patchLen{};
        BYTE original[32]{};
        bool installed{};
    };

    inline void write_abs_jump(void* at, void* to)
    {
        BYTE stub[12] = { 0x48, 0xB8 };
        *reinterpret_cast<void**>(stub + 2) = to;
        stub[10] = 0xFF; stub[11] = 0xE0;
        DWORD old{};
        VirtualProtect(at, sizeof(stub), PAGE_EXECUTE_READWRITE, &old);
        memcpy(at, stub, sizeof(stub));
        VirtualProtect(at, sizeof(stub), old, &old);
        FlushInstructionCache(GetCurrentProcess(), at, sizeof(stub));
    }

    inline bool create(Hook& h, void* target, void* detour, size_t patchLen = 12)
    {
        if (patchLen < 12 || patchLen > sizeof(h.original)) return false;
        h.target = target; h.detour = detour; h.patchLen = patchLen;
        memcpy(h.original, target, patchLen);
        h.trampoline = VirtualAlloc(nullptr, patchLen + 16, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
        if (!h.trampoline) return false;
        memcpy(h.trampoline, h.original, patchLen);
        void* jmpBackAt = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(h.trampoline) + patchLen);
        write_abs_jump(jmpBackAt, reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(h.target) + patchLen));
        write_abs_jump(h.target, detour);
        h.installed = true; return true;
    }

    inline bool remove(Hook& h)
    {
        if (!h.installed) return false;
        DWORD old{};
        VirtualProtect(h.target, h.patchLen, PAGE_EXECUTE_READWRITE, &old);
        memcpy(h.target, h.original, h.patchLen);
        VirtualProtect(h.target, h.patchLen, old, &old);
        FlushInstructionCache(GetCurrentProcess(), h.target, h.patchLen);
        if (h.trampoline) VirtualFree(h.trampoline, 0, MEM_RELEASE);
        h = Hook{}; return true;
    }
}
