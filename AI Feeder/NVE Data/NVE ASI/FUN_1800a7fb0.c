#include "FUN_1800a7fb0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a7fb0(HINSTANCE__ *param_1,int32_t param_2,int32_t **param_3,FILE *param_4) {
uint uVar1;
  code *pcVar2;
  longlong lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  char cVar8;
  int32_t uVar9;
  int iVar10;
  HMODULE pHVar11;
  FARPROC pFVar12;
  int32_t *puVar13;
  char **ppcVar14;
  char *pcVar15;
  INT_PTR IVar16;
  int *piVar17;
  LPCWSTR pWVar18;
  int32_t *lpAddress;
  FILE *pFVar19;
  LPCSTR *******ppppppppCVar20;
  ulonglong uVar21;
  char **_Filename;
  longlong lVar22;
  code **ppcVar23;
  ulonglong uVar24;
  bool bVar25;
  int32_t auStack_208 [32];
  code *local_1e8;
  int32_t **local_1e0;
  int32_t local_1d8 [24];
  ulonglong local_1c0;
  char *local_1b8;
  char *pcStack_1b0;
  int32_t local_1a8;
  ulonglong uStack_1a0;
  LPCSTR ******local_198 [3];
  ulonglong uStack_180;
  int32_t local_178;
  int32_t uStack_170;
  int32_t local_168;
  int32_t uStack_160;
  int32_t local_158;
  int32_t uStack_150;
  int32_t local_148;
  int32_t uStack_140;
  int32_t local_138;
  int32_t uStack_130;
  int32_t local_128;
  int32_t uStack_120;
  int32_t local_118;
  int32_t uStack_110;
  int32_t local_108;
  int32_t uStack_100;
  int32_t local_f8;
  int32_t uStack_f0;
  int32_t local_e8;
  int32_t uStack_e0;
  int32_t local_d8;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_1801eb080 ^ (ulonglong)auStack_208;
  uVar24 = 0;
  DAT_1801ee940 = 1;
  LOCK();
  bVar25 = DAT_1801ee918 == 0;
  if (bVar25) {
    DAT_1801ee918 = 1;
  }
  UNLOCK();
  uVar21 = uVar24;
  while (!bVar25) {
    Sleep((uint)(0x1f < uVar21));
    uVar21 = uVar21 + 1;
    LOCK();
    bVar25 = DAT_1801ee918 == 0;
    if (bVar25) {
      DAT_1801ee918 = 1;
    }
    UNLOCK();
  }
  if (DAT_1801ee920 == (HANDLE)0x0) {
    param_3 = (int32_t **)0x0;
    DAT_1801ee920 = HeapCreate(0,0,0);
  }
  LOCK();
  DAT_1801ee918 = 0;
  UNLOCK();
  local_1b8 = (char *)0x0;
  pcStack_1b0 = (char *)0x0;
  local_1b8 = (char *)operator_new(0x20);
  uVar4 = s_NVE_keyboardhook_180182d50._8_8_;
  local_1a8 = _DAT_1801d9050;
  uStack_1a0 = _UNK_1801d9058;
  *(int32_t *)local_1b8 = s_NVE_keyboardhook_180182d50._0_8_;
  *(int32_t *)(local_1b8 + 8) = uVar4;
  local_1b8[0x10] = '\0';
  local_1e8 = (code *)FUN_18011cb10(local_198,&local_1b8,param_3);
  local_1e0 = *(int32_t ***)(local_1e8 + 0x10);
  if (0xf < *(ulonglong *)(local_1e8 + 0x18)) {
    local_1e8 = *(code **)local_1e8;
  }
  uVar21 = __std_fs_code_page();
  FUN_1800aab10((LPWSTR)local_1d8,(UINT)uVar21,&local_1e8);
  local_1e8 = (code *)((ulonglong)local_1e8 & 0xffffffff00000000);
  local_1e0 = &PTR_vftable_1801ebd20;
  pWVar18 = (LPCWSTR)local_1d8;
  cVar8 = FUN_1800b8cb0(pWVar18,(longlong *)&local_1e8);
  if ((int)local_1e8 == 0) {
    FUN_1800ba040((longlong *)local_1d8);
    FUN_1800a6800((longlong *)local_198);
    if (0xf < uStack_1a0) {
      pcVar15 = local_1b8;
      if ((0xfff < uStack_1a0 + 1) &&
         (pcVar15 = *(char **)(local_1b8 + -8), (char *)0x1f < local_1b8 + (-8 - (longlong)pcVar15))
         ) goto LAB_1800a89e4;
      thunk_FUN_18012d5e8(pcVar15);
    }
    if (cVar8 != '\0') {
      pHVar11 = GetModuleHandleW(L"user32.dll");
      if ((pHVar11 != (HMODULE)0x0) &&
         (pFVar12 = GetProcAddress(pHVar11,"SetWindowsHookExA"), pFVar12 != (FARPROC)0x0)) {
        FUN_180121510((int32_t *)pFVar12,FUN_1800a7f80,(longlong *)0x0);
      }
      FUN_1801217f0(0);
    }
    local_1e8 = (code *)0x180182d98;
    local_1e0 = (int32_t **)0x26;
    puVar13 = (int32_t *)FUN_1800a68d0(&local_1e8);
    FUN_180121510(puVar13,FUN_1800a7f90,&DAT_1801ee900);
    local_1e8 = (code *)0x0;
    local_1e0 = (int32_t **)0x0;
    local_1b8 = "LMAO!!!";
    pcStack_1b0 = (char *)0x7;
    ppcVar23 = &local_1e8;
    FUN_1800b7670((longlong *)local_1d8,(longlong *)&local_1b8,(ulonglong *)ppcVar23);
    pFVar19 = (FILE *)local_1d8;
    if (0xf < local_1c0) {
      pFVar19 = (FILE *)local_1d8._0_8_;
    }
    OutputDebugStringA((LPCSTR)pFVar19);
    FUN_1800a6800((longlong *)local_1d8);
    pHVar11 = GetModuleHandleW((LPCWSTR)0x0);
    DAT_1801ee910 = pHVar11 + -0x50000000;
    ppppppppCVar20 = (LPCSTR *******)0x10;
    uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x10);
    piVar17 = (int *)(ulonglong)uVar1;
    if ((int)uVar1 < DAT_1801fb330) {
      piVar17 = &DAT_1801fb330;
      FUN_180125398(&DAT_1801fb330);
      if (DAT_1801fb330 == -1) {
        atexit((_func_5014 *)&LAB_180155bd0);
        piVar17 = &DAT_1801fb330;
        _Init_thread_footer(&DAT_1801fb330);
      }
    }
    uVar9 = FUN_18011ccf0();
    _Filename = &DAT_1801ebce0;
    if (DAT_1801ebcf0 != 0) goto LAB_1800a83a6;
    local_1e0 = (int32_t **)CONCAT44(local_1e0._4_4_,uVar9);
    local_1e8 = (code *)0x1000000000000000;
    local_1d8._0_8_ = (FILE *)0x1;
    local_1d8._8_8_ = &local_1e8;
    local_1b8 = "hints-{}.dat";
    pcStack_1b0 = (char *)0xc;
    ppcVar23 = (code **)local_1d8;
    FUN_1800b7670((longlong *)local_198,(longlong *)&local_1b8,(ulonglong *)ppcVar23);
    ppppppppCVar20 = local_198;
    ppcVar14 = (char **)FUN_18011cb10(local_48,ppppppppCVar20,(int32_t **)ppcVar23);
    if (ppcVar14 != &DAT_1801ebce0) {
      ppppppppCVar20 = (LPCSTR *******)DAT_1801ebcf8;
      if ((LPCSTR ****)0xf < DAT_1801ebcf8) {
        ppppppppCVar20 = (LPCSTR *******)((longlong)DAT_1801ebcf8 + 1);
        pcVar15 = DAT_1801ebce0;
        if ((LPCSTR *******)0xfff < ppppppppCVar20) {
          ppppppppCVar20 = (LPCSTR *******)(DAT_1801ebcf8 + 5);
          pcVar15 = *(char **)(DAT_1801ebce0 + -8);
          pWVar18 = (LPCWSTR)(DAT_1801ebce0 + (-8 - (longlong)pcVar15));
          if ((LPCWSTR)0x1f < pWVar18) {
            FUN_18012b7b4();
            goto LAB_1800a89d4;
          }
        }
        thunk_FUN_18012d5e8(pcVar15);
      }
      DAT_1801ebce0 = *ppcVar14;
      lRam00000001801ebce8 = ppcVar14[1];
      DAT_1801ebcf0 = (longlong)ppcVar14[2];
      DAT_1801ebcf8 = (LPCSTR ****)ppcVar14[3];
      ppcVar14[2] = (char *)0x0;
      ppcVar14[3] = (char *)0xf;
      *(int32_t *)ppcVar14 = 0;
    }
    FUN_1800a6800(local_48);
    piVar17 = (int *)local_198;
    FUN_1800a6800((longlong *)piVar17);
LAB_1800a83a6:
    FUN_1800a7370(piVar17,ppppppppCVar20,(int32_t **)ppcVar23);
    if ((LPCSTR ****)0xf < DAT_1801ebcf8) {
      _Filename = (char **)DAT_1801ebce0;
    }
    DAT_1801ee942 = 1;
    ppcVar23 = (code **)&DAT_1801d8620;
    DAT_1801f39b8 = (char *)_Filename;
    fopen_s((FILE **)local_1d8,(char *)_Filename,"rb");
    puVar13 = DAT_1801f39b0;
    if ((FILE *)local_1d8._0_8_ != (FILE *)0x0) {
      iVar10 = feof((FILE *)local_1d8._0_8_);
      while (iVar10 == 0) {
        fread(&local_1e8,1,8,(FILE *)local_1d8._0_8_);
        ppcVar23 = (code **)0x8;
        param_4 = (FILE *)local_1d8._0_8_;
        fread(&local_1b8,1,8,(FILE *)local_1d8._0_8_);
        FUN_180117970((ulonglong)local_1e8,(longlong)local_1b8);
        iVar10 = feof((FILE *)local_1d8._0_8_);
      }
      FUN_18012f050((int *)local_1d8._0_8_);
      puVar13 = DAT_1801f39b0;
    }
    for (; puVar13 != (int32_t *)0x0; puVar13 = (int32_t *)puVar13[1]) {
      (**(code **)*puVar13)(puVar13);
    }
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
    else {
      *DAT_1801ec6e0 = FUN_1800e7060;
      DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
    }
    lpAddress = (int32_t *)0x32;
    Sleep(0x32);
    FUN_180112600();
    FUN_1800a6d80();
    puVar13 = DAT_1801ec6e0;
    local_1e8 = FUN_180118050;
    if (DAT_1801ec6e0 == DAT_1801ec6e8) {
      ppcVar23 = &local_1e8;
      FUN_1800c69d0(lpAddress,DAT_1801ec6e0,ppcVar23);
    }
    else {
      *DAT_1801ec6e0 = FUN_180118050;
      DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
    }
    FUN_180118090(lpAddress,puVar13,(int32_t **)ppcVar23,&param_4->_ptr);
    FUN_1800a7e90();
    FUN_1800dab50();
    if (DAT_1801f3a14 != '\0') {
      iVar10 = FUN_18011ccf0();
      if (iVar10 < 0x945) {
        DAT_1801f3a15 = 1;
      }
      else {
        local_178 = 0;
        uStack_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        uVar1 = (uint)local_158;
        local_158 = CONCAT44(0x4d,uVar1 & 0xffffff00);
        uStack_150 = 0x4700000026;
        local_148 = _DAT_1801d92a0;
        uStack_140 = _UNK_1801d92a8;
        local_138 = _DAT_1801d9290;
        uStack_130 = _UNK_1801d9298;
        local_128 = _DAT_1801d96e0;
        uStack_120 = _UNK_1801d96e8;
        local_118 = _DAT_1801d9790;
        uStack_110 = _UNK_1801d9798;
        local_108 = _DAT_1801d9110;
        uStack_100 = _UNK_1801d9118;
        local_f8 = _DAT_1801d96c0;
        uStack_f0 = _UNK_1801d96c8;
        local_e8 = _DAT_1801d9600;
        uStack_e0 = _UNK_1801d9608;
        local_d8 = 0xf;
        local_1e8 = (code *)FUN_1800d8a10((char *)&local_178);
        local_1e0 = (int32_t **)0xffffffffffffffff;
        do {
          local_1e0 = (int32_t **)((longlong)local_1e0 + 1);
        } while (local_1e8[(longlong)local_1e0] != (code)0x0);
        lpAddress = (int32_t *)FUN_1800a68d0(&local_1e8);
        FUN_180121510(lpAddress,&LAB_1800d8a00,(longlong *)&DAT_1801fc9a0);
        if (DAT_1801ebe24 != '\0') {
          lpAddress = (int32_t *)0x3;
          FUN_1800d8970(3);
        }
        if (DAT_1801f3a13 != '\0') {
          local_1e8 = (code *)0x1801d4f58;
          local_1e0 = (int32_t **)0x1d;
          lpAddress = (int32_t *)FUN_1800a68d0(&local_1e8);
          VirtualProtect(lpAddress,100,0x40,(PDWORD)local_1d8);
          uVar7 = _UNK_1801d9d7c;
          uVar6 = _UNK_1801d9d78;
          uVar5 = _UNK_1801d9d74;
          uVar9 = _DAT_1801d9d70;
          *(int32_t *)lpAddress = _DAT_1801d9d70;
          *(int32_t *)((longlong)lpAddress + 4) = uVar5;
          *(int32_t *)(lpAddress + 1) = uVar6;
          *(int32_t *)((longlong)lpAddress + 0xc) = uVar7;
          *(int32_t *)(lpAddress + 2) = uVar9;
          *(int32_t *)((longlong)lpAddress + 0x14) = uVar5;
          *(int32_t *)(lpAddress + 3) = uVar6;
          *(int32_t *)((longlong)lpAddress + 0x1c) = uVar7;
          *(int32_t *)(lpAddress + 4) = uVar9;
          *(int32_t *)((longlong)lpAddress + 0x24) = uVar5;
          *(int32_t *)(lpAddress + 5) = uVar6;
          *(int32_t *)((longlong)lpAddress + 0x2c) = uVar7;
          *(int32_t *)(lpAddress + 6) = uVar9;
          *(int32_t *)((longlong)lpAddress + 0x34) = uVar5;
          *(int32_t *)(lpAddress + 7) = uVar6;
          *(int32_t *)((longlong)lpAddress + 0x3c) = uVar7;
          *(int32_t *)(lpAddress + 8) = uVar9;
          *(int32_t *)((longlong)lpAddress + 0x44) = uVar5;
          *(int32_t *)(lpAddress + 9) = uVar6;
          *(int32_t *)((longlong)lpAddress + 0x4c) = uVar7;
          *(int32_t *)(lpAddress + 10) = uVar9;
          *(int32_t *)((longlong)lpAddress + 0x54) = uVar5;
          *(int32_t *)(lpAddress + 0xb) = uVar6;
          *(int32_t *)((longlong)lpAddress + 0x5c) = uVar7;
          *(int32_t *)(lpAddress + 0xc) = uVar9;
          VirtualProtect(lpAddress,100,local_1d8._0_4_,(PDWORD)local_1d8);
        }
      }
    }
    if (DAT_1801f3a18 != '\0') {
      FUN_1800d0350(lpAddress);
      FUN_1800d9270();
    }
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = uStack_140 & 0xffffffff00000000;
    uVar21 = uVar24;
    do {
      *(int *)((longlong)&uStack_140 + uVar21 * 4 + 4) =
           ((char)(&DAT_1801d4e90)[uVar21] * 0x67 + 3) % 0x7f;
      uVar21 = uVar21 + 1;
    } while ((longlong)uVar21 < 0x3b);
    do {
      iVar10 = ((*(int *)((longlong)&uStack_140 + uVar24 * 4 + 4) + -3) * 0x25) % 0x7f + 0x7f;
      *(char *)((longlong)&local_178 + uVar24) =
           (char)iVar10 +
           (((char)(iVar10 / 0x7f) + (char)(iVar10 >> 0x1f)) -
           (char)((longlong)iVar10 * 0x81020409 >> 0x3f)) * -0x7f;
      uVar24 = uVar24 + 1;
    } while (uVar24 < 0x3b);
    uStack_140._0_4_ = (uint)(uint3)uStack_140;
    lVar22 = -1;
    do {
      local_1e0 = (int32_t **)(lVar22 + 1);
      lVar3 = lVar22 + 1;
      lVar22 = (longlong)local_1e0;
    } while (*(char *)((longlong)&local_178 + lVar3) != '\0');
    local_1e8 = (code *)&local_178;
    puVar13 = (int32_t *)FUN_1800a68d0(&local_1e8);
    FUN_180121510(puVar13,&LAB_1800d1690,&DAT_1801fc970);
    local_1e8 = (code *)0x1801d50b8;
    local_1e0 = (int32_t **)0x17;
    puVar13 = (int32_t *)FUN_1800a68d0(&local_1e8);
    FUN_180121510(puVar13,&LAB_1800dcc20,(longlong *)&DAT_1801fca10);
    local_1e8 = (code *)0x1801d50d0;
    local_1e0 = (int32_t **)0x1e;
    piVar17 = (int *)FUN_1800a68d0(&local_1e8);
    DAT_1801fca08 = (longlong)piVar17 + (longlong)*piVar17 + 4;
    FUN_1800c2e90();
    if ((DAT_1801f3af0 == (HMODULE)0x0) &&
       (DAT_1801f3af0 = LoadLibraryA("IgcsConnector.addon64"), DAT_1801f3af0 == (HMODULE)0x0)) {
      local_1e8 = (code *)0x0;
      local_1e0 = (int32_t **)0x0;
      local_1b8 = "IGCS: no has..";
      pcStack_1b0 = (char *)0xe;
      FUN_1800b7670((longlong *)local_1d8,(longlong *)&local_1b8,(ulonglong *)&local_1e8);
      pFVar19 = (FILE *)local_1d8;
      if (0xf < local_1c0) {
        pFVar19 = (FILE *)local_1d8._0_8_;
      }
      OutputDebugStringA((LPCSTR)pFVar19);
      ppppppppCVar20 = (LPCSTR *******)local_1d8;
    }
    else {
      pFVar12 = GetProcAddress(DAT_1801f3af0,"connectFromCameraTools");
      IVar16 = (*pFVar12)();
      local_1e0 = (int32_t **)CONCAT71(local_1e0._1_7_,(char)IVar16);
      local_1e8 = (code *)0x5000000000000000;
      local_1d8._0_8_ = (FILE *)0x1;
      local_1d8._8_8_ = &local_1e8;
      local_1b8 = "IGCS: {}";
      pcStack_1b0 = (char *)0x8;
      FUN_1800b7670((longlong *)local_198,(longlong *)&local_1b8,(ulonglong *)local_1d8);
      ppppppppCVar20 = local_198;
      if (0xf < uStack_180) {
        ppppppppCVar20 = (LPCSTR *******)local_198[0];
      }
      OutputDebugStringA((LPCSTR)ppppppppCVar20);
      ppppppppCVar20 = local_198;
    }
    FUN_1800a6800((longlong *)ppppppppCVar20);
    pHVar11 = LoadLibraryA("scripthookv.dll");
    if (pHVar11 != (HMODULE)0x0) {
      scriptRegister(param_1,FUN_1800fb410);
      scriptRegister(param_1,FUN_1800a6b10);
      DAT_1801f3a38 = 1;
    }
    FUN_1801217f0(0);
    Sleep(0x32);
    cVar8 = FUN_1800a7c80();
    if (cVar8 != '\0') {
      DAT_1801f3a3c = 1;
    }
    FUN_1801252c0(local_28 ^ (ulonglong)auStack_208);
    return;
  }
LAB_1800a89d4:
  FUN_1800ba290(pWVar18,&local_1e8,(int32_t *)local_1d8);
LAB_1800a89e4:
  FUN_18012b7b4();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}
}

