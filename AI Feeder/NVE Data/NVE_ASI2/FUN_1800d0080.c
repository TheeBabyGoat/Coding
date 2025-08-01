#include "FUN_1800d0080.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800d0080();
    local_1e8 = (code *)0x1801d6010;
    local_1e0 = (int32_t **)0x31;
    piVar17 = (int *)FUN_1800a68d0(&local_1e8);
    DAT_1801f3b30 = (longlong)piVar17 + (longlong)*piVar17 + 4;
    local_1e8 = FUN_1800e7060;
    if (DAT_1801ec6e0 == DAT_1801ec6e8) {
ppcVar23 = &local_1e8;
      FUN_1800c69d0((longlong)*piVar17,DAT_1801ec6e0,ppcVar23);
    }
}

void FUN_1800d0080(void) {
code *pcVar1;
  bool bVar2;
  HMODULE pHVar3;
  longlong lVar4;
  int *piVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  longlong *plVar8;
  int32_t uVar9;
  int32_t auStack_108 [32];
  char *local_e8;
  int32_t local_e0;
  longlong local_d8 [3];
  int32_t uStack_c0;
  longlong local_b8 [3];
  int32_t uStack_a0;
  longlong *local_90;
  int32_t local_88;
  longlong lStack_80;
  int32_t local_78;
  HMODULE local_70;
  int32_t local_68;
  _MEMORYSTATUSEX local_58;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_108;
  pHVar3 = GetModuleHandleA("GTAV.ResourceAdjuster.asi");
  if (pHVar3 == (HMODULE)0x0) {
    local_70 = GetModuleHandleW((LPCWSTR)0x0);
    DAT_1801ee910 = local_70 + -0x50000000;
    local_d8[1] = 0;
    local_d8[2] = _DAT_1801d8f70;
    uStack_c0 = _UNK_1801d8f78;
    local_d8[0] = 0;
    local_b8[1] = 0;
    local_b8[2] = _DAT_1801d8f70;
    uStack_a0 = _UNK_1801d8f78;
    local_b8[0] = 0;
    uVar9 = 0;
    local_90 = (longlong *)0x0;
    local_88 = 0;
    lStack_80 = 0;
    local_78 = 0;
    local_68 = 0;
    local_e8 = "48 83 64 24 30 00 83 4C 24 28 FF 33 D2 48";
    local_e0 = 0x29;
    FUN_180117400(local_d8,&local_e8);
    FUN_1801175d0(local_d8,1);
    FUN_1801175d0(local_d8,0xffffffff);
    *(int32_t *)(*local_90 + -4) = 0xc3;
    if (local_90 != (longlong *)0x0) {
      plVar8 = local_90;
      if ((0xfff < (lStack_80 - (longlong)local_90 & 0xfffffffffffffff8U)) &&
         (plVar8 = (longlong *)local_90[-1],
         0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)plVar8)))) {
        FUN_18012b7b4();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      thunk_FUN_18012d5e8(plVar8);
      local_90 = (longlong *)0x0;
      local_88 = 0;
      lStack_80 = 0;
    }
    FUN_1800a6800(local_b8);
    FUN_1800a6800(local_d8);
    local_e8 = "BA 00 00 05 00 48 8B C8 44 88";
    local_e0 = 0x1d;
    lVar4 = FUN_1800a68d0(&local_e8);
    *(int32_t *)(lVar4 + 1) = 0xa0000;
    *(int32_t *)(lVar4 + 0x17) = 0xa001b;
    local_e8 = "4C 63 C0 48 8D 05 ? ? ? ? 48 8D 14";
    local_e0 = 0x22;
    piVar5 = (int *)FUN_1800a68d0(&local_e8);
    DAT_1801fc940 = (longlong)piVar5 + (longlong)*piVar5 + 4;
    local_58.ullTotalPhys = 0;
    local_58.ullAvailPhys = 0;
    local_58.ullTotalPageFile = 0;
    local_58.ullAvailPageFile = 0;
    local_58.ullTotalVirtual = 0;
    local_58.ullAvailVirtual = 0;
    local_58.ullAvailExtendedVirtual = 0;
    local_58.dwLength = 0x40;
    local_58.dwMemoryLoad = 0;
    OpenGL_OpenGL_OpenGL_GlobalMemoryStatusEx(&local_58);
    bVar2 = true;
    if (0x7cfffffff < local_58.ullTotalPhys) {
      uVar9 = 0xe0000000;
    }
    if (local_58.ullTotalPhys < 0x5dc000000) {
      if (local_58.ullTotalPhys < 0x3e8000000) {
        if (local_58.ullTotalPhys < 0x2ee000000) {
          if (local_58.ullTotalPhys < 0x1f4000000) {
            bVar2 = false;
          }
          else {
            uVar9 = 0x40000000;
          }
        }
        else {
          uVar9 = 0x60000000;
        }
      }
      else {
        uVar9 = 0x80000000;
      }
    }
    else {
      uVar9 = 0xc0000000;
    }
    puVar6 = (int32_t *)(DAT_1801fc940 + 0x10);
    lVar4 = 0x14;
    do {
      puVar6[1] = 0xf1e00000;
      *puVar6 = 0xf1e00000;
      puVar6[-1] = 0xa1400000;
      puVar6[-2] = 0x78f00000;
      puVar6 = puVar6 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if (bVar2) {
      local_e8 = "41 B8 00 00 00 40 48 8B D5 89";
      local_e0 = 0x1d;
      puVar7 = (int32_t *)FUN_1800a68d0(&local_e8);
      *puVar7 = uVar9;
    }
  }
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_108);
  return;
}
}

