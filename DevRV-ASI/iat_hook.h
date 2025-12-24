
// Import Address Table (IAT) hook helpers
//----------------------------------------
// Simple helpers to patch a module's IAT entry for a given imported function and return the original.

#pragma once
#include <Windows.h>

namespace iat_hook
{
    bool replace_import(HMODULE mod, const char* moduleName, const char* funcName, void* replacement, void** original);
}
