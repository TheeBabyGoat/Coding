#include "FUN_1800aab10.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800aab10((LPWSTR)&local_70,(UINT)uVar12,pppppppWVar15);
  local_b8 = (LPCWSTR *****)((ulonglong)local_b8 & 0xffffffff00000000);
  local_b0 = (LPCWSTR ****)&PTR_vftable_1801ebd20;
  pppppppWVar19 = &local_70;
  bVar11 = FUN_1800b8cb0((LPCWSTR)pppppppWVar19,(longlong *)&local_b8);
  pppppppWVar13 = (LPCWSTR ******)(ulonglong)bVar11;
  if ((int)local_b8 == 0) {
FUN_1800ba040((longlong *)&local_70);
    FUN_1800a6800(local_50);
    FUN_1800a6800(&local_90);
    if (bVar11 == 0) goto LAB_1800a7803;
    uStack_88 = 0;
    local_80 = _DAT_1801d8fc0;
    uStack_78 = _UNK_1801d8fc8;
    local_90._0_6_ = CONCAT24(s_crashes_180182c98._4_2_,s_crashes_180182c98._0_4_);
    local_90._0_7_ = CONCAT16(s_crashes_180182c98[6],(int32_t)local_90);
    local_90 = (LPVOID)(ulonglong)(uint7)local_90;
    pppppppWVar13 = (LPCWSTR ******)FUN_18011cb10(local_50,&local_90,pppppppWVar15);
    ppppppWVar2 = pppppppWVar13[2];
    if ((LPCWSTR *****)0xf < pppppppWVar13[3]) {
      pppppppWVar13 = (LPCWSTR ******)*pppppppWVar13;
    }
    uVar12 = __std_fs_code_page();
    pppppppWVar15 = &local_b8;
    local_b8 = (LPCWSTR *****)pppppppWVar13;
    local_b0 = (LPCWSTR ****)ppppppWVar2;
    FUN_1800aab10((LPWSTR)&local_70,(UINT)uVar12,pppppppWVar15);
    pppppppWVar19 = &local_70;
    if (7 < local_58) {
      pppppppWVar19 = (LPCWSTR ******)local_70;
    }
    uVar14 = __std_fs_create_directory((LPCWSTR)pppppppWVar19);
    iVar22 = (int)((ulonglong)uVar14 >> 0x20);
    if (iVar22 == 0) {
      FUN_1800ba040((longlong *)&local_70);
      FUN_1800a6800(local_50);
      if (0xf < uStack_78) {
        pvVar18 = local_90;
        if (0xfff < uStack_78 + 1) {
          iVar20 = (int)(uStack_78 + 0x28 >> 0x20);
          pvVar18 = *(LPVOID *)((longlong)local_90 + -8);
          if (0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pvVar18))) goto LAB_1800a7855;
        }
        thunk_FUN_18012d5e8(pvVar18);
      }
      uStack_88 = 0;
      local_80 = _DAT_1801d8fc0;
      uStack_78 = _UNK_1801d8fc8;
      local_90._0_6_ = CONCAT24(s_crashes_180182c98._4_2_,s_crashes_180182c98._0_4_);
      local_90._0_7_ = CONCAT16(s_crashes_180182c98[6],(int32_t)local_90);
      local_90 = (LPVOID)(ulonglong)(uint7)local_90;
      pppppppWVar15 = (LPCWSTR ******)FUN_18011cb10(local_50,&local_90,pppppppWVar15);
      ppppppWVar2 = pppppppWVar15[2];
      if ((LPCWSTR *****)0xf < pppppppWVar15[3]) {
        pppppppWVar15 = (LPCWSTR ******)*pppppppWVar15;
      }
      uVar12 = __std_fs_code_page();
      local_b8 = (LPCWSTR *****)pppppppWVar15;
      local_b0 = (LPCWSTR ****)ppppppWVar2;
      FUN_1800aab10(local_30,(UINT)uVar12,&local_b8);
      FUN_1800a6800(local_50);
      FUN_1800a6800(&local_90);
      local_a8 = (LPCWSTR *****)0x0;
      ppppppWStack_a0 = (LPCWSTR *****)0x0;
      local_98 = 0;
      local_c8[0] = (LPCWSTR *****)&local_70;
      local_70 = (LPCWSTR *****)0x0;
      uStack_68 = 0;
      plVar16 = (longlong *)FUN_1800b8a70(&local_90,(int32_t *)local_30);
      FUN_1800a9290(&local_b8,plVar16,(longlong *)&local_70,(longlong *)&local_a8);
      FUN_1800a98d0((ulonglong *)local_a8,(ulonglong *)ppppppWStack_a0,
                    (longlong)ppppppWStack_a0 - (longlong)local_a8 >> 5,0);
      pppppppWVar15 = (LPCWSTR ******)local_a8;
      pppppppWVar19 = (LPCWSTR ******)ppppppWStack_a0;
      if (local_a8 != ppppppWStack_a0) {
        do {
          pppppppWVar13 = pppppppWVar19 + -4;
          if (pppppppWVar15 == pppppppWVar13) break;
          ppppppWVar2 = *pppppppWVar15;
          ppppppWVar7 = pppppppWVar15[1];
          ppppppWVar8 = pppppppWVar15[2];
          ppppppWVar9 = pppppppWVar15[3];
          uVar4 = *(int32_t *)((longlong)pppppppWVar19 + -0x1c);
          uVar5 = *(int32_t *)(pppppppWVar19 + -3);
          uVar6 = *(int32_t *)((longlong)pppppppWVar19 + -0x14);
          *(int32_t *)pppppppWVar15 = *(int32_t *)pppppppWVar13;
          *(int32_t *)((longlong)pppppppWVar15 + 4) = uVar4;
          *(int32_t *)(pppppppWVar15 + 1) = uVar5;
          *(int32_t *)((longlong)pppppppWVar15 + 0xc) = uVar6;
          ppppppWVar10 = pppppppWVar19[-1];
          pppppppWVar15[2] = pppppppWVar19[-2];
          pppppppWVar15[3] = ppppppWVar10;
          *pppppppWVar13 = ppppppWVar2;
          pppppppWVar19[-3] = ppppppWVar7;
          pppppppWVar19[-2] = ppppppWVar8;
          pppppppWVar19[-1] = ppppppWVar9;
          pppppppWVar15 = pppppppWVar15 + 4;
          pppppppWVar19 = pppppppWVar13;
        } while (pppppppWVar15 != pppppppWVar13);
      }
      if (0x19 < (ulonglong)((longlong)ppppppWStack_a0 - (longlong)local_a8 >> 5)) {
        iVar22 = 0x19;
        lVar23 = 800;
        do {
          pppppppWVar13 = (LPCWSTR ******)((longlong)local_a8 + lVar23);
          pppppppWVar15 = pppppppWVar13;
          if ((LPCWSTR *****)0x7 < pppppppWVar13[3]) {
            pppppppWVar15 = (LPCWSTR ******)*pppppppWVar13;
          }
          FUN_180123a28((LPCWSTR)pppppppWVar15);
          iVar20 = extraout_var;
          if (extraout_var != 0) goto LAB_1800a785b;
          iVar22 = iVar22 + 1;
          lVar23 = lVar23 + 0x20;
        } while ((ulonglong)(longlong)iVar22 <
                 (ulonglong)((longlong)ppppppWStack_a0 - (longlong)local_a8 >> 5));
      }
      SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_1800a7870);
      pHVar17 = GetModuleHandleW((LPCWSTR)0x0);
      pppppppWVar19 = (LPCWSTR ******)(longlong)pHVar17[0xf].unused;
      puVar21 = (uint *)((longlong)&pHVar17->unused +
                        (ulonglong)*(uint *)((longlong)(pppppppWVar19 + 0x12) + (longlong)pHVar17));
      uVar1 = puVar21[3];
      while (uVar1 != 0) {
        pppppppWVar19 = (LPCWSTR ******)((longlong)&pHVar17->unused + (ulonglong)puVar21[3]);
        uVar12 = FUN_18012d518((byte *)pppppppWVar19,(byte *)"kernel32.dll");
        if ((int)uVar12 == 0) {
          if (*puVar21 != 0) {
            plVar16 = (longlong *)((longlong)&pHVar17->unused + (ulonglong)*puVar21);
            pppppppWVar15 = (LPCWSTR ******)((longlong)&pHVar17->unused + (ulonglong)puVar21[4]);
            lVar23 = *plVar16;
            goto joined_r0x0001800a772d;
          }
          break;
        }
        uVar1 = puVar21[8];
        puVar21 = puVar21 + 5;
      }
LAB_1800a7793:
      ppppppWVar2 = ppppppWStack_a0;
      pppppppWVar15 = (LPCWSTR ******)local_a8;
      if ((LPCWSTR ******)local_a8 != (LPCWSTR ******)0x0) {
        for (; pppppppWVar15 != (LPCWSTR ******)ppppppWVar2; pppppppWVar15 = pppppppWVar15 + 4) {
          pppppppWVar19 = pppppppWVar15;
          FUN_1800ba040((longlong *)pppppppWVar15);
        }
        pppppppWVar13 = (LPCWSTR ******)local_a8;
        if ((0xfff < (local_98 - (longlong)local_a8 & 0xffffffffffffffe0U)) &&
           (pppppppWVar13 = (LPCWSTR ******)((LPCWSTR ******)local_a8)[-1],
           0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pppppppWVar13)))) {
          FUN_18012b7b4();
          goto LAB_1800a7832;
        }
        thunk_FUN_18012d5e8(pppppppWVar13);
        local_a8 = (LPCWSTR *****)0x0;
        ppppppWStack_a0 = (LPCWSTR *****)0x0;
        local_98 = 0;
      }
      FUN_1800ba040((longlong *)local_30);
LAB_1800a7803:
      FUN_1801252c0(local_10 ^ (ulonglong)auStack_e8);
      return;
    }
  }
}

 FUN_1800aab10((LPWSTR)&local_70,(UINT)uVar12,pppppppWVar15);
    pppppppWVar19 = &local_70;
    if (7 < local_58) {
pppppppWVar19 = (LPCWSTR ******)local_70;
    }
}

 FUN_1800aab10(local_30,(UINT)uVar12,&local_b8);
      FUN_1800a6800(local_50);
      FUN_1800a6800(&local_90);
      local_a8 = (LPCWSTR *****)0x0;
      ppppppWStack_a0 = (LPCWSTR *****)0x0;
      local_98 = 0;
      local_c8[0] = (LPCWSTR *****)&local_70;
      local_70 = (LPCWSTR *****)0x0;
      uStack_68 = 0;
      plVar16 = (longlong *)FUN_1800b8a70(&local_90,(int32_t *)local_30);
      FUN_1800a9290(&local_b8,plVar16,(longlong *)&local_70,(longlong *)&local_a8);
      FUN_1800a98d0((ulonglong *)local_a8,(ulonglong *)ppppppWStack_a0,
                    (longlong)ppppppWStack_a0 - (longlong)local_a8 >> 5,0);
      pppppppWVar15 = (LPCWSTR ******)local_a8;
      pppppppWVar19 = (LPCWSTR ******)ppppppWStack_a0;
      if (local_a8 != ppppppWStack_a0) {
do {
          pppppppWVar13 = pppppppWVar19 + -4;
          if (pppppppWVar15 == pppppppWVar13) break;
          ppppppWVar2 = *pppppppWVar15;
          ppppppWVar7 = pppppppWVar15[1];
          ppppppWVar8 = pppppppWVar15[2];
          ppppppWVar9 = pppppppWVar15[3];
          uVar4 = *(int32_t *)((longlong)pppppppWVar19 + -0x1c);
          uVar5 = *(int32_t *)(pppppppWVar19 + -3);
          uVar6 = *(int32_t *)((longlong)pppppppWVar19 + -0x14);
          *(int32_t *)pppppppWVar15 = *(int32_t *)pppppppWVar13;
          *(int32_t *)((longlong)pppppppWVar15 + 4) = uVar4;
          *(int32_t *)(pppppppWVar15 + 1) = uVar5;
          *(int32_t *)((longlong)pppppppWVar15 + 0xc) = uVar6;
          ppppppWVar10 = pppppppWVar19[-1];
          pppppppWVar15[2] = pppppppWVar19[-2];
          pppppppWVar15[3] = ppppppWVar10;
          *pppppppWVar13 = ppppppWVar2;
          pppppppWVar19[-3] = ppppppWVar7;
          pppppppWVar19[-2] = ppppppWVar8;
          pppppppWVar19[-1] = ppppppWVar9;
          pppppppWVar15 = pppppppWVar15 + 4;
          pppppppWVar19 = pppppppWVar13;
        } while (pppppppWVar15 != pppppppWVar13);
      }
}

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
}

LPWSTR FUN_1800aab10(LPWSTR param_1,UINT param_2,int32_t *param_3) {
ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  int32_t uVar4;
  LPWSTR pWVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  LPWSTR pWVar8;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  param_1[4] = L'\0';
  param_1[5] = L'\0';
  param_1[6] = L'\0';
  param_1[7] = L'\0';
  param_1[8] = L'\0';
  param_1[9] = L'\0';
  param_1[10] = L'\0';
  param_1[0xb] = L'\0';
  param_1[0xc] = L'\a';
  param_1[0xd] = L'\0';
  param_1[0xe] = L'\0';
  param_1[0xf] = L'\0';
  *param_1 = L'\0';
  uVar1 = param_3[1];
  if (uVar1 != 0) {
    if (0x7fffffff < uVar1) {
      FUN_1800b8f90(0x16);
      pcVar2 = (code *)swi(3);
      pWVar5 = (LPWSTR)(*pcVar2)();
      return pWVar5;
    }
    uVar4 = __std_fs_convert_narrow_to_wide(param_2,(LPCSTR)*param_3,(int)uVar1,(LPWSTR)0x0,0);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
      FUN_1800b9500(iVar3);
      pcVar2 = (code *)swi(3);
      pWVar5 = (LPWSTR)(*pcVar2)();
      return pWVar5;
    }
    uVar1 = *(ulonglong *)(param_1 + 8);
    uVar7 = (ulonglong)(int)uVar4;
    if (uVar1 < uVar7) {
      uVar6 = uVar7 - uVar1;
      if (*(ulonglong *)(param_1 + 0xc) - uVar1 < uVar6) {
        FUN_1800aa960((int32_t *)param_1,uVar6,(ulonglong)param_1 & 0xff,uVar6,0);
      }
      else {
        *(ulonglong *)(param_1 + 8) = uVar7;
        pWVar5 = param_1;
        if (7 < *(ulonglong *)(param_1 + 0xc)) {
          pWVar5 = *(LPWSTR *)param_1;
        }
        pWVar8 = pWVar5 + uVar1;
        if (uVar6 != 0) {
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pWVar8 = L'\0';
            pWVar8 = pWVar8 + 1;
          }
        }
        pWVar5[uVar7] = L'\0';
      }
    }
    else {
      *(ulonglong *)(param_1 + 8) = uVar7;
      pWVar5 = param_1;
      if (7 < *(ulonglong *)(param_1 + 0xc)) {
        pWVar5 = *(LPWSTR *)param_1;
      }
      pWVar5[uVar7] = L'\0';
    }
    pWVar5 = param_1;
    if (7 < *(ulonglong *)(param_1 + 0xc)) {
      pWVar5 = *(LPWSTR *)param_1;
    }
    uVar4 = __std_fs_convert_narrow_to_wide
                      (param_2,(LPCSTR)*param_3,*(int *)(param_3 + 1),pWVar5,(int)uVar4);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
      FUN_1800b9500(iVar3);
      pcVar2 = (code *)swi(3);
      pWVar5 = (LPWSTR)(*pcVar2)();
      return pWVar5;
    }
  }
  return param_1;
}
}

 FUN_1800aab10(local_68,(UINT)uVar4,&local_1f8);
  FUN_1800cfce0((uint *)local_88,uVar9,(uint *)local_68);
  FUN_1800ba040((longlong *)local_68);
  FUN_1800a6800((longlong *)local_c8);
  local_1f8 = (int32_t (*) [32])((ulonglong)local_1f8 & 0xffffffff00000000);
  ppuStack_1f0 = &PTR_vftable_1801ebd20;
  pWVar6 = local_88;
  cVar3 = FUN_1800b8cb0(pWVar6,(longlong *)&local_1f8);
  if ((int)local_1f8 != 0) goto LAB_1800cc8fc;
  if (cVar3 != '\0') {
pwVar10 = local_88;
    FUN_1800ce4f0(local_1d8,pwVar10);
    FUN_1800cd880(local_1d8,pwVar10,2);
    ppauVar11 = local_c8;
    plVar5 = FUN_1800cd7a0(local_1d8,ppauVar11);
    uVar4 = plVar5[1] + *plVar5;
    local_1f8 = (int32_t (*) [32])0x0;
    ppuStack_1f0 = (int32_t **)0x0;
    local_1e8 = (int32_t (*) [32])0x0;
    if (uVar4 == 0) {
      pauVar14 = (int32_t (*) [32])0x0;
    }
    else {
      FUN_1800cf060((ulonglong *)&local_1f8,uVar4);
      pauVar14 = local_1f8;
      ppauVar11 = (int32_t (**) [32])0x0;
      FUN_180151670(local_1f8,0,uVar4);
      ppuStack_1f0 = (int32_t **)(*pauVar14 + uVar4);
    }
    pauVar17 = local_1e8;
    ppuVar2 = ppuStack_1f0;
    plVar5 = FUN_1800cd880(local_1d8,ppauVar11,0);
    uVar4 = (longlong)ppuVar2 - (longlong)pauVar14;
    FUN_1800cda80(plVar5,pauVar14,uVar4);
    pauVar7 = pauVar14;
    pauVar12 = pauVar15;
    if (uVar4 != 0) {
      do {
        (*pauVar7)[0] = (*pauVar7)[0] ^ (&DAT_1801cc4c0)[(ulonglong)(~(uint)pauVar12 & 1) * 4];
        uVar13 = (uint)pauVar12 + 1;
        pauVar7 = (int32_t (*) [32])(*pauVar7 + 1);
        pauVar12 = (int32_t (*) [32])(ulonglong)uVar13;
      } while ((ulonglong)(longlong)(int)uVar13 < uVar4);
    }
    plVar5 = (longlong *)param_4[1];
    if (plVar5 == (longlong *)param_4[2]) {
      FUN_1800ced50(param_4,plVar5,(longlong *)&local_1f8);
      pauVar15 = local_1e8;
      pauVar14 = local_1f8;
    }
    else {
      *plVar5 = (longlong)pauVar14;
      plVar5[1] = (longlong)ppuVar2;
      plVar5[2] = (longlong)pauVar17;
      param_4[1] = param_4[1] + 0x18;
      pauVar14 = pauVar15;
    }
    *param_3 = *(int32_t *)(param_4[1] + -0x18);
    pWVar6 = (LPCWSTR)param_4[1];
    param_3[1] = *(longlong *)(pWVar6 + -8) - *(longlong *)(pWVar6 + -0xc);
    if (pauVar14 != (int32_t (*) [32])0x0) {
      pauVar17 = pauVar14;
      if ((0xfff < (ulonglong)((longlong)pauVar15 - (longlong)pauVar14)) &&
         (pauVar17 = *(int32_t (**) [32])(pauVar14[-1] + 0x18),
         0x1f < (ulonglong)((longlong)pauVar14 + (-8 - (longlong)pauVar17)))) {
        FUN_18012b7b4();
        goto LAB_1800cc8f6;
      }
      thunk_FUN_18012d5e8(pauVar17);
    }
    *(int32_t ***)((longlong)local_1d8 + (longlong)*(int *)(local_1d8[0] + 4)) =
         &PTR_LAB_1801cc4b8;
    *(int *)((longlong)&iStack_1dc + (longlong)*(int *)(local_1d8[0] + 4)) =
         *(int *)(local_1d8[0] + 4) + -0xb0;
    FUN_1800cd640(local_1d8 + 2);
    *(int32_t ***)((longlong)local_1d8 + (longlong)*(int *)(local_1d8[0] + 4)) =
         &PTR_LAB_1801cc4b0;
    *(int *)((longlong)&iStack_1dc + (longlong)*(int *)(local_1d8[0] + 4)) =
         *(int *)(local_1d8[0] + 4) + -0x18;
    local_128[0] = &PTR_LAB_1801cc4d0;
    std::ios_base::_Ios_base_dtor((ios_base *)local_128);
  }
}

 FUN_1800aab10((LPWSTR)local_40,(UINT)uVar7,param_3);
    pppWVar5 = local_40;
    if (7 < local_28) {
pppWVar5 = (LPCWSTR **)local_40[0];
    }
}

