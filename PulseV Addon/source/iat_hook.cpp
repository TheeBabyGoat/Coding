
// Import Address Table (IAT) hook helpers
//----------------------------------------
// Walks a PE's import directory to find a specific module+function and replaces its IAT slot.
// Returns the original pointer if requested. No code outside the IAT is modified.

#include "iat_hook.h"
#include <cstdint>
#include <cstring>
#include <winnt.h>

#pragma pack(push,1)
struct IMAGE_DOS_HEADER_ {
    uint16_t e_magic; uint16_t e_cblp; uint16_t e_cp; uint16_t e_crlc; uint16_t e_cparhdr; uint16_t e_minalloc;
    uint16_t e_maxalloc; uint16_t e_ss; uint16_t e_sp; uint16_t e_csum; uint16_t e_ip; uint16_t e_cs;
    uint16_t e_lfarlc; uint16_t e_ovno; uint16_t e_res[4]; uint16_t e_oemid; uint16_t e_oeminfo; uint16_t e_res2[10];
    int32_t e_lfanew;
};
#pragma pack(pop)

static IMAGE_NT_HEADERS* getNtHeaders(HMODULE mod)
{
    auto base = reinterpret_cast<uint8_t*>(mod);
    auto dos  = reinterpret_cast<IMAGE_DOS_HEADER_*>(base);
    if (!dos || dos->e_magic != 0x5A4D) return nullptr;
    auto nth  = reinterpret_cast<IMAGE_NT_HEADERS*>(base + dos->e_lfanew);
    if (!nth || nth->Signature != 0x4550) return nullptr;
    return nth;
}

bool iat_hook::replace_import(HMODULE mod, const char* moduleName, const char* funcName, void* replacement, void** original)
{
    if (!mod) mod = GetModuleHandleA(nullptr);
    auto nth = getNtHeaders(mod);
    if (!nth) return false;

    auto base = reinterpret_cast<uint8_t*>(mod);
    const IMAGE_DATA_DIRECTORY& impDir = nth->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT];
    if (impDir.VirtualAddress == 0 || impDir.Size == 0) return false;

    auto imp = reinterpret_cast<IMAGE_IMPORT_DESCRIPTOR*>(base + impDir.VirtualAddress);
    for (; imp->Name; ++imp)
    {
        const char* modName = reinterpret_cast<const char*>(base + imp->Name);
        if (_stricmp(modName, moduleName) != 0) continue;

        auto thunkOrig = reinterpret_cast<IMAGE_THUNK_DATA*>(base + imp->OriginalFirstThunk);
        auto thunkIAT  = reinterpret_cast<IMAGE_THUNK_DATA*>(base + imp->FirstThunk);
        for (; thunkOrig->u1.AddressOfData; ++thunkOrig, ++thunkIAT)
        {
            if (IMAGE_SNAP_BY_ORDINAL(thunkOrig->u1.Ordinal)) continue;
            auto ibn = reinterpret_cast<IMAGE_IMPORT_BY_NAME*>(base + thunkOrig->u1.AddressOfData);
            if (strcmp(reinterpret_cast<const char*>(ibn->Name), funcName) == 0)
            {
                DWORD old{};
                void** pFunc = reinterpret_cast<void**>(&thunkIAT->u1.Function);
                if (original) *original = *pFunc;
                if (!VirtualProtect(pFunc, sizeof(void*), PAGE_READWRITE, &old)) return false;
                *pFunc = replacement;
                VirtualProtect(pFunc, sizeof(void*), old, &old);
                FlushInstructionCache(GetCurrentProcess(), pFunc, sizeof(void*));
                return true;
            }
        }
    }
    return false;
}
