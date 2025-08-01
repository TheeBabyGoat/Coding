#include "FUN_1800a7c80.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a7c80(void) {
char *pcVar1;
  int32_t (*pauVar2) [32];
  code *pcVar3;
  int32_t uVar4;
  int32_t uVar5;
  int iVar6;
  HANDLE pvVar7;
  int32_t (*pauVar8) [16];
  int32_t (*pauVar9) [32];
  int32_t (*pauVar10) [32];
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int32_t auStack_21a8 [32];
  uint local_2188 [2];
  int32_t (*local_2180) [32];
  int32_t uStack_2178;
  ulonglong local_2170;
  ulonglong uStack_2168;
  char local_2160 [8];
  int32_t local_2158;
  int32_t uStack_2150;
  int32_t local_2148;
  int32_t local_2138 [1024];
  CHAR local_138;
  char acStack_137 [271];
  ulonglong local_28;
  
  local_28 = DAT_1801eb080 ^ (ulonglong)auStack_21a8;
  local_2188[0] = 0;
  pvVar7 = GetCurrentProcess();
  iVar6 = K32EnumProcessModules(pvVar7,local_2138,0x2000,local_2188);
  uVar5 = _UNK_1801d9ad8;
  uVar4 = _DAT_1801d9ad0;
  if (iVar6 != 0) {
    if (0x2000 < local_2188[0]) {
      local_2188[0] = 0x2000;
    }
    uVar12 = 0;
    if ((local_2188[0] & 0xfffffff8) != 0) {
      do {
        GetModuleFileNameA((HMODULE)local_2138[uVar12],&local_138,0x104);
        local_2180 = (int32_t (*) [32])0x0;
        uStack_2178 = 0;
        local_2170 = 0;
        uStack_2168 = 0;
        uVar15 = 0xffffffffffffffff;
        do {
          uVar14 = uVar15 + 1;
          pcVar1 = acStack_137 + uVar15;
          uVar15 = uVar14;
        } while (*pcVar1 != '\0');
        FUN_1800ba360(&local_2180,(int32_t *)&local_138,uVar14);
        local_2148 = 0xf;
        local_2160[0] = '\0';
        local_2160[1] = '\0';
        local_2160[2] = '\0';
        local_2160[3] = '\0';
        local_2160[4] = '\0';
        local_2160[5] = '\0';
        local_2158 = uVar4;
        uStack_2150 = uVar5;
        pauVar8 = (int32_t (*) [16])FUN_1800a8d60(local_2160);
        uVar15 = 0xffffffffffffffff;
        pauVar10 = (int32_t (*) [32])&local_2180;
        if (0xf < uStack_2168) {
          pauVar10 = local_2180;
        }
        do {
          uVar15 = uVar15 + 1;
        } while ((*pauVar8)[uVar15] != '\0');
        if (local_2170 < uVar15) {
LAB_1800a7e01:
          lVar13 = -1;
        }
        else if (uVar15 == 0) {
          lVar13 = 0;
        }
        else {
          pauVar2 = (int32_t (*) [32])(*pauVar10 + local_2170);
          pauVar9 = (int32_t (*) [32])thunk_FUN_180124070(pauVar10,pauVar2,pauVar8,uVar15);
          if (pauVar9 == pauVar2) goto LAB_1800a7e01;
          lVar13 = (longlong)pauVar9 - (longlong)pauVar10;
        }
        if (0xf < uStack_2168) {
          pauVar10 = local_2180;
          if ((0xfff < uStack_2168 + 1) &&
             (pauVar10 = *(int32_t (**) [32])(local_2180[-1] + 0x18),
             0x1f < (ulonglong)((longlong)local_2180 + (-8 - (longlong)pauVar10)))) {
            FUN_18012b7b4();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          thunk_FUN_18012d5e8(pauVar10);
        }
      } while ((lVar13 == -1) &&
              (uVar11 = (int)uVar12 + 1, uVar12 = (ulonglong)uVar11, uVar11 < local_2188[0] >> 3));
    }
  }
  FUN_1801252c0(local_28 ^ (ulonglong)auStack_21a8);
  return;
}
}

