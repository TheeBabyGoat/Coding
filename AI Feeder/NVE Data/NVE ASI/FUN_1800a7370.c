#include "FUN_1800a7370.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a7370(int32_t param_1,int32_t param_2,int32_t **param_3) {
uint uVar1;
  LPCWSTR *****ppppppWVar2;
  code *pcVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  LPCWSTR *****ppppppWVar7;
  LPCWSTR *****ppppppWVar8;
  LPCWSTR *****ppppppWVar9;
  LPCWSTR *****ppppppWVar10;
  byte bVar11;
  ulonglong uVar12;
  LPCWSTR ******pppppppWVar13;
  int32_t uVar14;
  LPCWSTR ******pppppppWVar15;
  longlong *plVar16;
  int extraout_var;
  HMODULE pHVar17;
  LPVOID pvVar18;
  LPCWSTR ******pppppppWVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  longlong lVar23;
  int32_t auStack_e8 [32];
  LPCWSTR *****local_c8 [2];
  LPCWSTR *****local_b8;
  LPCWSTR ****local_b0;
  LPCWSTR *****local_a8;
  LPCWSTR *****ppppppWStack_a0;
  longlong local_98;
  int32_t local_90;
  int32_t uStack_88;
  int32_t local_80;
  ulonglong uStack_78;
  LPCWSTR *****local_70;
  int32_t uStack_68;
  ulonglong local_58;
  longlong local_50 [4];
  WCHAR local_30 [16];
  ulonglong local_10;
  
  local_10 = DAT_1801eb080 ^ (ulonglong)auStack_e8;
  uStack_88 = 0;
  local_80 = _DAT_1801d8fc0;
  uStack_78 = _UNK_1801d8fc8;
  local_90._0_6_ = CONCAT24(DAT_180182c90._4_2_,(int32_t)DAT_180182c90);
  local_90._0_7_ = CONCAT16(DAT_180182c90._6_1_,(int32_t)local_90);
  local_90 = (LPVOID)(ulonglong)(uint7)local_90;
  local_b8 = (LPCWSTR *****)FUN_18011cb10(local_50,&local_90,param_3);
  local_b0 = local_b8[2];
  if ((LPCWSTR ****)0xf < local_b8[3]) {
    local_b8 = (LPCWSTR *****)*local_b8;
  }
  uVar12 = __std_fs_code_page();
  pppppppWVar15 = &local_b8;
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
  else {
LAB_1800a7832:
    pppppppWVar15 = &local_b8;
    FUN_1800ba290(pppppppWVar19,pppppppWVar15,&local_70);
    iVar22 = (int)((ulonglong)pppppppWVar15 >> 0x20);
  }
  iVar20 = 0;
  FUN_1800b8c40((int32_t *)"create_directory",iVar22,&local_70);
LAB_1800a7855:
  FUN_18012b7b4();
LAB_1800a785b:
  FUN_1800b8c40((int32_t *)"remove",iVar20,pppppppWVar13);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
joined_r0x0001800a772d:
  if (lVar23 == 0) goto LAB_1800a7793;
  if (-1 < lVar23) {
    pppppppWVar19 = (LPCWSTR ******)((longlong)&pHVar17->unused + lVar23 + 2);
    uVar12 = FUN_18012d518((byte *)pppppppWVar19,(byte *)"SetUnhandledExceptionFilter");
    if ((int)uVar12 == 0) {
      VirtualProtect(pppppppWVar15,8,4,(PDWORD)local_c8);
      *pppppppWVar15 = (LPCWSTR *****)&LAB_1800a7c70;
      VirtualProtect(pppppppWVar15,8,(DWORD)local_c8[0],(PDWORD)local_c8);
      pppppppWVar19 = pppppppWVar15;
      goto LAB_1800a7793;
    }
  }
  plVar16 = plVar16 + 1;
  pppppppWVar15 = pppppppWVar15 + 1;
  lVar23 = *plVar16;
  goto joined_r0x0001800a772d;
}
}

