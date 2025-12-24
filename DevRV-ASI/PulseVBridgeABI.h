
#pragma once
#include <stdint.h>

#pragma pack(push, 8)
struct PulseVBridgeABI {
    uint32_t magic;   // 'PLSV' = 0x56534C50
    uint32_t version; // 1
    uint32_t clients;
    uint32_t flags;   // bit0 = connected
    void*    reserved[8];
};
#pragma pack(pop)
