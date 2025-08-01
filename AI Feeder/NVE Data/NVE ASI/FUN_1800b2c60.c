#include "FUN_1800b2c60.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b2c60(longlong *param_1,int32_t *param_2,int32_t *param_3,ulonglong param_4,
                  int param_5) {
char cVar1;
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  int32_t *extraout_RAX;
  int32_t (*pauVar5) [32];
  int iVar6;
  ulonglong *puVar7;
  int32_t (*pauVar8) [32];
  int32_t *puVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  uint uVar12;
  int32_t (*pauVar13) [32];
  int32_t auStackY_3a8 [32];
  int32_t (*local_378) [32];
  int32_t uStack_370;
  int32_t local_368 [96];
  int32_t local_63 [11];
  ulonglong local_58;
  
  local_58 = DAT_1801eb080 ^ (ulonglong)auStackY_3a8;
  if (param_4 == 0) {
    if (param_2 == param_3) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
    }
    else {
      *(int32_t *)param_2 = 0x30;
      *param_1 = (longlong)param_2 + 1;
      *(int32_t *)(param_1 + 1) = 0;
    }
    goto LAB_1800b2f67;
  }
  if (param_5 < 0) {
    param_5 = 6;
LAB_1800b2cfa:
    puVar11 = (ulonglong *)(&DAT_180176d10 + (longlong)(((param_5 + 10) * (param_5 + -1)) / 2) * 8);
    iVar6 = param_5;
  }
  else {
    if (param_5 == 0) {
      param_5 = 1;
      goto LAB_1800b2cfa;
    }
    if ((param_5 < 1000000) && (param_5 < 0x10)) goto LAB_1800b2cfa;
    iVar6 = 1000000;
    if (param_5 < 1000000) {
      iVar6 = param_5;
    }
    param_5 = iVar6;
    puVar11 = (ulonglong *)&DAT_180177330;
    iVar6 = param_5;
    if (0x135 < param_5) {
      iVar6 = 0x135;
    }
  }
  puVar7 = puVar11;
  if (param_5 < 0x9c) {
    for (; (puVar7 != puVar11 + (longlong)iVar6 + 5 && (*puVar7 < param_4)); puVar7 = puVar7 + 1) {
    }
  }
  else {
    uVar10 = (longlong)(puVar11 + (longlong)iVar6 + 5) - (longlong)puVar11 >> 3;
    while (uVar3 = uVar10, 0 < (longlong)uVar3) {
      uVar10 = uVar3 >> 1;
      if (puVar7[uVar10] < param_4) {
        puVar7 = puVar7 + uVar10 + 1;
        uVar10 = uVar3 + (-1 - uVar10);
      }
    }
  }
  iVar6 = (int)((longlong)puVar7 - (longlong)puVar11 >> 3) + -5;
  if ((iVar6 < param_5) && (-5 < iVar6)) {
    bVar2 = true;
    uVar12 = (param_5 - iVar6) - 1;
    if (0x42 < (int)uVar12) {
      uVar12 = 0x42;
    }
    if ((int)uVar12 < 0) {
      uVar4 = 6;
    }
    else {
      uVar4 = uVar12;
      if (999999999 < (int)uVar12) {
        pauVar5 = (int32_t (*) [32])local_63;
        pauVar8 = (int32_t (*) [32])0x0;
        pauVar13 = (int32_t (*) [32])0x0;
        goto LAB_1800b2ebf;
      }
    }
    FUN_1800b1a00(&local_378,(int32_t (*) [32])local_368,(int32_t (*) [32])local_63,param_4,
                  uVar4);
    pauVar8 = (int32_t (*) [32])0x0;
    pauVar5 = (int32_t (*) [32])*extraout_RAX;
    pauVar13 = (int32_t (*) [32])0x0;
  }
  else {
    bVar2 = false;
    uVar12 = param_5 - 1;
    if (0x2fe < (int)uVar12) {
      uVar12 = 0x2fe;
    }
    if ((int)uVar12 < 0) {
      uVar4 = 6;
LAB_1800b2e63:
      FUN_1800b2380((longlong *)&local_378,(int32_t (*) [32])local_368,
                    (int32_t (*) [32])local_63,param_4,uVar4);
    }
    else {
      uVar4 = uVar12;
      if ((int)uVar12 < 1000000000) goto LAB_1800b2e63;
      local_378 = (int32_t (*) [32])local_63;
      uStack_370 = 0x84;
    }
    pauVar8 = local_378;
    pauVar5 = thunk_FUN_180123d80((int32_t (*) [32])local_368,local_378,0x65);
    pauVar13 = pauVar5;
  }
LAB_1800b2ebf:
  if (0 < (int)uVar12) {
    cVar1 = pauVar5[-1][0x1f];
    while (cVar1 == '0') {
      cVar1 = pauVar5[-1][0x1e];
      pauVar5 = (int32_t (*) [32])(pauVar5[-1] + 0x1f);
    }
    if (pauVar5[-1][0x1f] == '.') {
      pauVar5 = (int32_t (*) [32])(pauVar5[-1] + 0x1f);
    }
  }
  uVar10 = (longlong)pauVar5 - (longlong)local_368;
  if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar10) {
LAB_1800b2efa:
    *param_1 = (longlong)param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_180150fd0(param_2,local_368,uVar10);
    puVar9 = (int32_t *)((longlong)param_2 + uVar10);
    if (!bVar2) {
      uVar10 = (longlong)pauVar8 - (longlong)pauVar13;
      if ((longlong)param_3 - (longlong)puVar9 < (longlong)uVar10) goto LAB_1800b2efa;
      FUN_180150fd0(puVar9,(int32_t *)pauVar13,uVar10);
      puVar9 = (int32_t *)((longlong)puVar9 + uVar10);
    }
    *param_1 = (longlong)puVar9;
    *(int32_t *)(param_1 + 1) = 0;
  }
LAB_1800b2f67:
  FUN_1801252c0(local_58 ^ (ulonglong)auStackY_3a8);
  return;
}
}

