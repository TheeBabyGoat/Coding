#include "FUN_1800c2e90.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c2e90(void) {
longlong lVar1;
  code *pcVar2;
  int32_t uVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  INT_PTR IVar6;
  int *piVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  longlong *plVar10;
  int32_t *puVar11;
  HMODULE pHVar12;
  int32_t auStack_108 [32];
  char *local_e8;
  int32_t local_e0;
  DWORD local_d8 [2];
  _SYSTEM_INFO local_d0;
  longlong local_98;
  int32_t uStack_90;
  int32_t local_88;
  int32_t uStack_80;
  longlong local_78;
  int32_t uStack_70;
  int32_t local_68;
  int32_t uStack_60;
  longlong *local_50;
  longlong local_48;
  longlong lStack_40;
  int32_t local_38;
  int32_t local_30;
  int32_t local_28;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_108;
  uVar3 = FUN_1800c6ef0(DAT_1801f3a40);
  pHVar4 = (HMODULE)FUN_1800c6f60();
  if ((((pHVar4 != (HMODULE)0x0) &&
       (pFVar5 = GetProcAddress(pHVar4,"ReShadeRegisterAddon"), pFVar5 != (FARPROC)0x0)) &&
      (IVar6 = (*pFVar5)(uVar3,0xd), (char)IVar6 != '\0')) &&
     ((pFVar5 = GetProcAddress(pHVar4,"ReShadeGetImGuiFunctionTable"), pFVar5 != (FARPROC)0x0 &&
      (DAT_1801f3ae0 = (*pFVar5)(0x4a60), DAT_1801f3ae0 != 0)))) {
    FUN_1800e0ba0();
    local_30 = FUN_1800c6f60();
    uStack_90 = 0;
    local_88 = _DAT_1801d8f70;
    uStack_80 = _UNK_1801d8f78;
    local_98 = 0;
    uStack_70 = 0;
    local_68 = _DAT_1801d8f70;
    uStack_60 = _UNK_1801d8f78;
    local_78 = 0;
    local_50 = (longlong *)0x0;
    local_48 = 0;
    lStack_40 = 0;
    local_38 = 0;
    local_28 = 0;
    local_e8 = "C7 05 ? ? ? ? ? ? ? ? 3A C1";
    local_e0 = 0x1b;
    FUN_180117400(&local_98,&local_e8);
    FUN_1801175d0(&local_98,0xffffffff);
    if (7 < (ulonglong)(local_48 - (longlong)local_50)) {
      FUN_1801175d0(&local_98,1);
      lVar1 = *local_50;
      VirtualProtect((LPVOID)(lVar1 + -0x28),6,0x40,local_d8);
      *(int32_t *)(lVar1 + -0x28) = 0x90909090;
      *(int32_t *)(lVar1 + -0x24) = 0x9090;
      VirtualProtect((LPVOID)(lVar1 + -0x28),6,local_d8[0],local_d8);
    }
    if (local_50 != (longlong *)0x0) {
      plVar10 = local_50;
      if ((0xfff < (lStack_40 - (longlong)local_50 & 0xfffffffffffffff8U)) &&
         (plVar10 = (longlong *)local_50[-1],
         0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)plVar10)))) {
        FUN_18012b7b4();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      thunk_FUN_18012d5e8(plVar10);
      local_50 = (longlong *)0x0;
      local_48 = 0;
      lStack_40 = 0;
    }
    FUN_1800a6800(&local_78);
    FUN_1800a6800(&local_98);
    local_e8 = "33 C0 48 39 05 ? ? ? ? 74 2E 48 8B 0D ? ? ? ? 48 85 C9 74 22";
    local_e0 = 0x3c;
    piVar7 = (int *)FUN_1800a68d0(&local_e8);
    DAT_1801fba68 = (longlong)piVar7 + (longlong)*piVar7 + 4;
    local_e8 = "0F 29 62 20 8B 81 ? ? 00 00";
    local_e0 = 0x1b;
    piVar7 = (int *)FUN_1800a68d0(&local_e8);
    DAT_1801fb468 = (longlong)piVar7 + (longlong)*piVar7 + 4;
    local_e8 = "4C 8D 05 ? ? ? ? 45 33 C9 BA CE 00 00 00";
    local_e0 = 0x28;
    piVar7 = (int *)FUN_1800a68d0(&local_e8);
    FUN_180121510((int32_t *)((longlong)piVar7 + (longlong)*piVar7 + 4),FUN_1800bb320,
                  &DAT_1801fb460);
    local_e8 = "84 C3 74 0D 83 C9 FF E8";
    local_e0 = 0x17;
    puVar8 = (int32_t *)FUN_1800a68d0(&local_e8);
    FUN_180121510(puVar8,FUN_1800a7f80,(longlong *)0x0);
    local_e8 = "48 8B 1F 33 D2 48 8B CB";
    local_e0 = 0x17;
    puVar8 = (int32_t *)FUN_1800a68d0(&local_e8);
    FUN_180121510(puVar8,FUN_1800c2ad0,&DAT_1801fc730);
    local_e8 = "83 FB 0A 0F 85 ? ? ? ? 8B";
    local_e0 = 0x19;
    puVar9 = (int32_t *)FUN_1800a68d0(&local_e8);
    DAT_1801fc738 = puVar9 + (longlong)*(int *)(puVar9 + 1) + 5;
    pHVar4 = GetModuleHandleW((LPCWSTR)0x0);
    if (DAT_1801f53c0 == (int32_t *)0x0) {
      GetSystemInfo(&local_d0);
      pHVar12 = (HMODULE)local_d0.lpMinimumApplicationAddress;
      if (((HMODULE)0x40000000 < pHVar4) &&
         (local_d0.lpMinimumApplicationAddress < pHVar4 + -0x10000000)) {
        pHVar12 = pHVar4 + -0x10000000;
      }
      do {
        if ((pHVar4 < pHVar12) ||
           (pHVar4 = (HMODULE)FUN_180117dd0((ulonglong)pHVar4,pHVar12,
                                            (ulonglong)local_d0.dwAllocationGranularity),
           pHVar4 == (HMODULE)0x0)) {
          puVar11 = (int32_t *)0x0;
          if (DAT_1801f53c0 == (int32_t *)0x0) goto LAB_1800c32a2;
          break;
        }
        DAT_1801f53c0 = (int32_t *)VirtualAlloc(pHVar4,0x1000,0x3000,0x40);
      } while (DAT_1801f53c0 == (int32_t *)0x0);
    }
    *DAT_1801f53c0 = 0xb848;
    *(code **)(DAT_1801f53c0 + 1) = FUN_1800c2b10;
    DAT_1801f53c0[5] = 0xe0ff;
    *(int32_t *)(DAT_1801f53c0 + 6) = 0xcccccccccccccccc;
    puVar11 = DAT_1801f53c0;
    DAT_1801f53c0 = DAT_1801f53c0 + 10;
LAB_1800c32a2:
    *puVar9 = 0xe8;
    *(int *)(puVar9 + 1) = ((int)puVar11 - (int)puVar9) + -5;
    piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x10);
    if ((*piVar7 < DAT_1801f3a84) && (FUN_180125398(&DAT_1801f3a84), DAT_1801f3a84 == -1)) {
      pHVar4 = (HMODULE)FUN_1800c6f60();
      DAT_1801f3a88 = GetProcAddress(pHVar4,"ReShadeRegisterOverlay");
      _Init_thread_footer(&DAT_1801f3a84);
    }
    if (DAT_1801f3a88 != (FARPROC)0x0) {
      (*DAT_1801f3a88)(&DAT_180182d14,FUN_1800e2480);
    }
    FUN_1800c5f70(FUN_1800baee0);
    if ((*piVar7 < DAT_1801fc740) && (FUN_180125398(&DAT_1801fc740), DAT_1801fc740 == -1)) {
      pHVar4 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc748 = GetProcAddress(pHVar4,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc740);
    }
    if (DAT_1801fc748 != (FARPROC)0x0) {
      (*DAT_1801fc748)(0x4b,FUN_1800bb2e0);
    }
    FUN_1800c6000(FUN_1800bb280);
    if ((*piVar7 < DAT_1801fc750) && (FUN_180125398(&DAT_1801fc750), DAT_1801fc750 == -1)) {
      pHVar4 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc758 = GetProcAddress(pHVar4,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc750);
    }
    if (DAT_1801fc758 != (FARPROC)0x0) {
      (*DAT_1801fc758)(0x1b,&LAB_1800cbee0);
    }
    if ((*piVar7 < DAT_1801fc760) && (FUN_180125398(&DAT_1801fc760), DAT_1801fc760 == -1)) {
      pHVar4 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc768 = GetProcAddress(pHVar4,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc760);
    }
    if (DAT_1801fc768 != (FARPROC)0x0) {
      (*DAT_1801fc768)(0x1a,FUN_1800cbea0);
    }
    if ((*piVar7 < DAT_1801fc770) && (FUN_180125398(&DAT_1801fc770), DAT_1801fc770 == -1)) {
      pHVar4 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc778 = GetProcAddress(pHVar4,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc770);
    }
    if (DAT_1801fc778 != (FARPROC)0x0) {
      (*DAT_1801fc778)(0x51,&LAB_1800c2b50);
    }
    FUN_1800c90b0();
  }
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_108);
  return;
}
}

