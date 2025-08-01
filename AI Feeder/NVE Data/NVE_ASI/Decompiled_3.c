#include <stdint.h>
#include <stddef.h>

// ---- Function: thunk_FUN_1800a6c20 ----
void thunk_FUN_1800a6c20(longlong param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  pvVar1 = *(LPVOID *)(param_1 + 0x80);
  if (pvVar1 != (LPVOID)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (*(longlong *)(param_1 + 0x90) - (longlong)pvVar1 & 0xfffffffffffffffcU)) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
    *(int32_t *)(param_1 + 0x80) = 0;
    *(int32_t *)(param_1 + 0x88) = 0;
    *(int32_t *)(param_1 + 0x90) = 0;
  }
  return;
}

// ---- Function: FUN_1800a6ca0 ----
void FUN_1800a6ca0(longlong param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  pvVar1 = *(LPVOID *)(param_1 + 0x18);
  if (pvVar1 != (LPVOID)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (*(longlong *)(param_1 + 0x28) - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
    *(int32_t *)(param_1 + 0x18) = 0;
    *(int32_t *)(param_1 + 0x20) = 0;
    *(int32_t *)(param_1 + 0x28) = 0;
  }
  FUN_1800a8b10((longlong *)(param_1 + 8));
  return;
}

// ---- Function: FUN_1800a6d10 ----
void FUN_1800a6d10(longlong param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  pvVar1 = *(LPVOID *)(param_1 + 0x18);
  if (pvVar1 != (LPVOID)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (*(longlong *)(param_1 + 0x28) - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
    *(int32_t *)(param_1 + 0x18) = 0;
    *(int32_t *)(param_1 + 0x20) = 0;
    *(int32_t *)(param_1 + 0x28) = 0;
  }
  FUN_1800a8fb0((longlong *)(param_1 + 8));
  return;
}

// ---- Function: FUN_1800a6d80 ----
void FUN_1800a6d80(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *pvVar4;
  void *pvVar5;
  void *local_18;
  int32_t uStack_10;
  
  DAT_1801f3a3c = 0;
  DAT_1801fb100 = DAT_1801ee940 == '\0';
  DAT_1801f3a3b = 0;
  DAT_1801f3a3a = 0;
  DAT_1801f3a39 = 0;
  DAT_1801f3a38 = 0;
  _DAT_1801ec440 = 0;
  _DAT_1801ec448 = 0;
  DAT_1801f3a34 = 0;
  _DAT_1801ec450 = 0;
  DAT_1801ec458 = 0;
  DAT_1801f3a30 = 0;
  _DAT_1801ec460 = 0;
  _DAT_1801ec468 = 0;
  _DAT_1801ec470 = 0;
  DAT_1801ec478 = 0;
  _DAT_1801ebe40 = 0x800;
  DAT_1801f3a28 = 0;
  DAT_1801f3a24 = 0;
  DAT_1801ebe38 = 0x41000000;
  _DAT_1801ec480 = 0x3f7ef9db;
  _DAT_1801ec484 = 0x3f4bc6a8;
  _DAT_1801ec488 = 0x3ef2b021;
  DAT_1801f3a20 = 0;
  DAT_1801ebe34 = 3;
  DAT_1801ebe30 = 0x43340000;
  DAT_1801ebe2c = 0x3fc00000;
  DAT_1801ebe28 = 0x43800000;
  DAT_1801ebe25 = 1;
  DAT_1801ebe24 = 1;
  DAT_1801f3a19 = 0;
  DAT_1801f3a18 = 0;
  DAT_1801f3a1c = 0;
  DAT_1801f3a1b = 0;
  DAT_1801f3a1a = 0;
  DAT_1801f3a17 = 0;
  DAT_1801ebe20 = 2;
  DAT_1801f3a16 = 0;
  DAT_1801ebe1c = 1;
  DAT_1801f3a15 = 0;
  DAT_1801f3a14 = 0;
  DAT_1801ebe18 = 2;
  DAT_1801f3a13 = 0;
  DAT_1801ebe14 = 1;
  DAT_1801f3a12 = 0;
  _DAT_1801ec490 = 0;
  _DAT_1801ec498 = 0;
  _DAT_1801ec4a0 = 0;
  _DAT_1801ec4a8 = 0;
  _DAT_1801ec4b0 = 0;
  _DAT_1801ec4b8 = 0;
  _DAT_1801ec4c0 = 0;
  _DAT_1801ec4c8 = 0;
  _DAT_1801ec4d0 = 0;
  _DAT_1801ec4d8 = 0;
  _DAT_1801fb108 = local_18;
  uRam00000001801fb110 = uStack_10;
  _DAT_1801ec4e0 = 0;
  _DAT_1801ec4e8 = 0;
  _DAT_1801ec4f0 = 0;
  _DAT_1801ec4f8 = 0;
  _DAT_1801ec500 = 0;
  _DAT_1801ec508 = 0;
  _DAT_1801ec510 = 0;
  _DAT_1801ec518 = 0;
  _DAT_1801ec520 = 0;
  _DAT_1801ec528 = 0;
  _DAT_1801ec530 = 0;
  _DAT_1801ec538 = 0;
  _DAT_1801ec540 = 0;
  _DAT_1801ec548 = 0;
  _DAT_1801ec550 = 0;
  _DAT_1801ec558 = 0;
  DAT_1801f3a0e = 0;
  DAT_1801f3a0d = 0;
  DAT_1801f3a0c = 0;
  DAT_1801f3a11 = 0;
  DAT_1801f3a10 = 0;
  DAT_1801f3a0f = 0;
  uStack_10 = 0;
  pvVar5 = operator_new(0x30);
  *(void **)pvVar5 = pvVar5;
  *(void **)((longlong)pvVar5 + 8) = pvVar5;
  *(void **)((longlong)pvVar5 + 0x10) = pvVar5;
  *(int32_t *)((longlong)pvVar5 + 0x18) = 0x101;
  pvVar4 = DAT_1801fb118;
  cVar1 = *(char *)((longlong)*(longlong **)((longlong)DAT_1801fb118 + 8) + 0x19);
  plVar3 = *(longlong **)((longlong)DAT_1801fb118 + 8);
  while (cVar1 == '\0') {
    local_18 = pvVar5;
    FUN_1800a9420(&DAT_1801fb118,&DAT_1801fb118,(longlong *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    thunk_FUN_18012d5e8(plVar3);
    plVar3 = plVar2;
    pvVar5 = local_18;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  *(void **)((longlong)pvVar4 + 8) = pvVar4;
  *(void **)pvVar4 = pvVar4;
  *(void **)((longlong)pvVar4 + 0x10) = pvVar4;
  local_18 = DAT_1801fb118;
  DAT_1801fb118 = pvVar5;
  DAT_1801fb120 = uStack_10;
  FUN_1800a8f50((longlong *)&local_18);
  _DAT_1801f3a08 = 0;
  PTR_DAT_1801ebdc0 = &DAT_180182c84;
  _DAT_1801f3a04 = 0;
  DAT_1801f3a00 = 0;
  DAT_1801f39fc = 0;
  DAT_1801ebe10 = 0x40a00000;
  DAT_1801ebe0c = 0x40000000;
  _DAT_1801f39f8 = 0;
  DAT_1801f39f6 = 0;
  DAT_1801f39f5 = 0;
  DAT_1801f39f4 = 0;
  _DAT_1801f39f0 = 0;
  DAT_1801f39ec = 0;
  _DAT_1801ec560 = 0;
  _DAT_1801ec568 = 0;
  _DAT_1801ec570 = 0;
  _DAT_1801ec578 = 0;
  _DAT_1801ec580 = 0;
  _DAT_1801ec588 = 0;
  DAT_1801ebe09 = 1;
  DAT_1801ebe08 = 1;
  _DAT_1801ebe00 = 0;
  _DAT_1801ebe04 = 0x42c80000;
  _DAT_1801ebdf8 = 0x42c80000;
  _DAT_1801ebdfc = 0x44228000;
  _DAT_1801ebdf0 = 0x44228000;
  _DAT_1801ebdf4 = 0x461c4000;
  _DAT_1801ebde8 = 0x44bb8000;
  _DAT_1801ebdec = 0x466a6000;
  _DAT_1801ebde0 = 0x44228000;
  _DAT_1801ebde4 = 0x461c4000;
  _DAT_1801ebdd8 = 0;
  _DAT_1801ebddc = 0x41f00000;
  DAT_1801ebdd0 = 0x40a00000;
  _DAT_1801ebdcc = 0x44548000;
  DAT_1801ebdc8 = 0x41200000;
  DAT_1801f39ea = 0;
  DAT_1801f39e9 = 0;
  DAT_1801f39e8 = 0;
  DAT_1801f39e7 = 0;
  DAT_1801ebdbc = 0x42480000;
  DAT_1801ebdb8 = 0x3f800000;
  DAT_1801f39e6 = 0;
  DAT_1801f39e5 = 0;
  DAT_1801ebdb4 = 0x3f800000;
  DAT_1801ebdb0 = 0x41c80000;
  DAT_1801f39e4 = 0;
  DAT_1801ebdac = 0x206;
  DAT_1801ebda8 = 0x205;
  DAT_1801ebda4 = 0x238;
  DAT_1801ebda0 = 0x234;
  DAT_1801ebd9c = 0x222;
  DAT_1801ebd98 = 0x225;
  DAT_1801ebd94 = 0x226;
  DAT_1801ebd90 = 0x232;
  DAT_1801ebd8c = 0x203;
  DAT_1801ebd88 = 0x204;
  DAT_1801ebd84 = 0x210;
  DAT_1801ebd80 = 0x202;
  DAT_1801ebd7c = 0x201;
  DAT_1801ebd78 = 0x40000000;
  DAT_1801ebd74 = 0x3f800000;
  DAT_1801ebd70 = 0x3f800000;
  DAT_1801ebd6c = 0x3f800000;
  DAT_1801ebd68 = 0x3f800000;
  DAT_1801ebd64 = 0x3f800000;
  DAT_1801ebd60 = 0x3f800000;
  DAT_1801ebd5c = 0x3f800000;
  DAT_1801ebd58 = 0x3f800000;
  DAT_1801f39e0 = 0;
  DAT_1801f39dc = 0;
  DAT_1801f39d8 = 0;
  DAT_1801f39d4 = 0;
  DAT_1801f39d0 = 0;
  DAT_1801f39cc = 0;
  DAT_1801f39c8 = 0;
  _DAT_1801ebd54 = 0x3f800000;
  DAT_1801ebd50 = 0x3f800000;
  DAT_1801ebd4c = 0x3f800000;
  DAT_1801ebd48 = 0x3f800000;
  DAT_1801ebd44 = 0x3f800000;
  DAT_1801ebd40 = 0x3f800000;
  DAT_1801ebd3c = 0x3f800000;
  DAT_1801ebd38 = 0x3f800000;
  DAT_1801ebd34 = 0x3f800000;
  _DAT_1801ebd30 = 0x3f800000;
  return;
}

// ---- Function: FUN_1800a7370 ----
void FUN_1800a7370(int32_t param_1,int32_t param_2,int32_t **param_3)

{
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

// ---- Function: FUN_1800a7c80 ----
void FUN_1800a7c80(void)

{
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

// ---- Function: FUN_1800a7e90 ----
void FUN_1800a7e90(void)

{
  int32_t uVar1;
  
  if (DAT_1801ebe34 < 4) {
    uVar1 = *(int32_t *)(DAT_1801fb170 + (longlong)DAT_1801ebe34 * 0xc);
    DAT_1801ebd04 = (int)uVar1;
    DAT_1801ebd08 = (int)((ulonglong)uVar1 >> 0x20);
    DAT_1801ebd00 = *(int32_t *)(DAT_1801fb170 + 8 + (longlong)DAT_1801ebe34 * 0xc);
    return;
  }
  DAT_1801ebd08 = DAT_1801ebe2c;
  DAT_1801ebd00 = DAT_1801ebe28;
  DAT_1801ebd04 = DAT_1801ebe30;
  return;
}

// ---- Function: FUN_1800a7f10 ----
void FUN_1800a7f10(longlong param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  pvVar1 = *(LPVOID *)(param_1 + 0x18);
  if (pvVar1 != (LPVOID)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (*(longlong *)(param_1 + 0x28) - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
    *(int32_t *)(param_1 + 0x18) = 0;
    *(int32_t *)(param_1 + 0x20) = 0;
    *(int32_t *)(param_1 + 0x28) = 0;
  }
  FUN_1800a8c80((longlong *)(param_1 + 8));
  return;
}

// ---- Function: FUN_1800a7f80 ----
int32_t FUN_1800a7f80(void)

{
  return 1;
}

// ---- Function: FUN_1800a7f90 ----
void FUN_1800a7f90(void)

{
  (*DAT_1801ee900)();
                    
  ExitProcess(0);
}

// ---- Function: FUN_1800a7fb0 ----
void FUN_1800a7fb0(HINSTANCE__ *param_1,int32_t param_2,int32_t **param_3,FILE *param_4)

{
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

// ---- Function: FUN_1800a87a1 ----
void FUN_1800a87a1(void)

{
  char cVar1;
  int32_t *puVar2;
  int *piVar3;
  FARPROC pFVar4;
  HMODULE pHVar5;
  LPCSTR pCVar6;
  longlong *plVar7;
  longlong unaff_RBP;
  HINSTANCE__ *unaff_RSI;
  LPCSTR in_stack_00000030;
  ulonglong in_stack_00000048;
  char *pcStack0000000000000050;
  int32_t uStack0000000000000058;
  LPCSTR in_stack_00000070;
  
  puVar2 = (int32_t *)FUN_1800a68d0((int32_t *)&stack0x00000020);
  FUN_180121510(puVar2,&LAB_1800d1690,&DAT_1801fc970);
  puVar2 = (int32_t *)FUN_1800a68d0((int32_t *)&stack0x00000020);
  FUN_180121510(puVar2,&LAB_1800dcc20,(longlong *)&DAT_1801fca10);
  piVar3 = (int *)FUN_1800a68d0((int32_t *)&stack0x00000020);
  DAT_1801fca08 = (longlong)piVar3 + (longlong)*piVar3 + 4;
  FUN_1800c2e90();
  if (DAT_1801f3af0 == (HMODULE)0x0) {
    DAT_1801f3af0 = LoadLibraryA("IgcsConnector.addon64");
    if (DAT_1801f3af0 == (HMODULE)0x0) {
      pcStack0000000000000050 = "IGCS: no has..";
      uStack0000000000000058 = 0xe;
      FUN_1800b7670((longlong *)&stack0x00000030,(longlong *)&stack0x00000050,
                    (ulonglong *)&stack0x00000020);
      pCVar6 = (LPCSTR)&stack0x00000030;
      if (0xf < in_stack_00000048) {
        pCVar6 = in_stack_00000030;
      }
      OutputDebugStringA(pCVar6);
      plVar7 = (longlong *)&stack0x00000030;
      goto LAB_1800a8940;
    }
  }
  pFVar4 = GetProcAddress(DAT_1801f3af0,"connectFromCameraTools");
  (*pFVar4)();
  pcStack0000000000000050 = "IGCS: {}";
  uStack0000000000000058 = 8;
  FUN_1800b7670((longlong *)&stack0x00000070,(longlong *)&stack0x00000050,
                (ulonglong *)&stack0x00000030);
  pCVar6 = (LPCSTR)&stack0x00000070;
  if (0xf < *(ulonglong *)(unaff_RBP + -0x78)) {
    pCVar6 = in_stack_00000070;
  }
  OutputDebugStringA(pCVar6);
  plVar7 = (longlong *)&stack0x00000070;
LAB_1800a8940:
  FUN_1800a6800(plVar7);
  pHVar5 = LoadLibraryA("scripthookv.dll");
  if (pHVar5 != (HMODULE)0x0) {
    scriptRegister(unaff_RSI,FUN_1800fb410);
    scriptRegister(unaff_RSI,FUN_1800a6b10);
    DAT_1801f3a38 = 1;
  }
  FUN_1801217f0(0);
  Sleep(0x32);
  cVar1 = FUN_1800a7c80();
  if (cVar1 != '\0') {
    DAT_1801f3a3c = 1;
  }
  FUN_1801252c0(*(ulonglong *)(unaff_RBP + 0xe0) ^ (ulonglong)&stack0x00000000);
  return;
}

// ---- Function: FUN_1800a89f0 ----
int32_t FUN_1800a89f0(HMODULE param_1,int param_2)

{
  if (param_2 != 0) {
    if (param_2 == 1) {
      DAT_1801f3a40 = 0x180000000;
      DisableThreadLibraryCalls(param_1);
      CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_1800a7fb0,param_1,0,(LPDWORD)0x0);
    }
    return 1;
  }
                    
  ExitProcess(0);
}

// ---- Function: FUN_1800a8a50 ----
void FUN_1800a8a50(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_1800a96c0(param_1,param_1,(longlong *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    thunk_FUN_18012d5e8(plVar3);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  thunk_FUN_18012d5e8((LPVOID)*param_1);
  return;
}

// ---- Function: FUN_1800a8ab0 ----
void FUN_1800a8ab0(longlong *param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  pvVar1 = (LPVOID)*param_1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

// ---- Function: FUN_1800a8b10 ----
void FUN_1800a8b10(longlong *param_1)

{
  int32_t *puVar1;
  int32_t *puVar2;
  
  puVar1 = (int32_t *)*param_1;
  *(int32_t *)puVar1[1] = 0;
  puVar1 = (int32_t *)*puVar1;
  while (puVar1 != (int32_t *)0x0) {
    puVar2 = (int32_t *)*puVar1;
    thunk_FUN_18012d5e8(puVar1);
    puVar1 = puVar2;
  }
  thunk_FUN_18012d5e8((LPVOID)*param_1);
  return;
}

// ---- Function: FUN_1800a8b70 ----
int32_t * FUN_1800a8b70(int32_t *param_1)

{
  int32_t *puVar1;
  int32_t uVar2;
  LPVOID pvVar3;
  code *pcVar4;
  void *pvVar5;
  int32_t *puVar6;
  longlong lVar7;
  int32_t *puVar8;
  LPVOID pvVar9;
  
  *param_1 = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *(int32_t *)(param_1 + 4) = 0;
  pvVar5 = operator_new(0x18);
  *(void **)pvVar5 = pvVar5;
  *(void **)((longlong)pvVar5 + 8) = pvVar5;
  *(void **)(param_1 + 2) = pvVar5;
  *(int32_t *)(param_1 + 6) = 0;
  *(int32_t *)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 10) = 0;
  *(int32_t *)(param_1 + 0xc) = 7;
  *(int32_t *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  uVar2 = *(int32_t *)(param_1 + 2);
  puVar6 = (int32_t *)operator_new(0x80);
  pvVar3 = *(LPVOID *)(param_1 + 6);
  lVar7 = *(longlong *)(param_1 + 10) - (longlong)pvVar3 >> 3;
  if (lVar7 != 0) {
    pvVar9 = pvVar3;
    if ((0xfff < (ulonglong)(lVar7 * 8)) &&
       (pvVar9 = *(LPVOID *)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9)))) {
      FUN_18012b7b4();
      pcVar4 = (code *)swi(3);
      puVar8 = (int32_t *)(*pcVar4)();
      return puVar8;
    }
    thunk_FUN_18012d5e8(pvVar9);
  }
  *(int32_t **)(param_1 + 6) = puVar6;
  puVar1 = puVar6 + 0x10;
  *(int32_t **)(param_1 + 8) = puVar1;
  *(int32_t **)(param_1 + 10) = puVar1;
  for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    *puVar6 = uVar2;
  }
  return param_1;
}

