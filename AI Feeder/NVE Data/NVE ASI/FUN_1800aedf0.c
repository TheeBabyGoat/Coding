#include "FUN_1800aedf0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800aedf0(longlong *param_1,int32_t *param_2,int32_t *param_3,float param_4,
                  int param_5) {
char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  int32_t *extraout_RAX;
  int32_t (*pauVar6) [32];
  float *pfVar7;
  ulonglong uVar8;
  uint uVar9;
  int32_t *puVar10;
  int32_t (*pauVar11) [32];
  int32_t (*pauVar12) [32];
  int32_t auStackY_118 [32];
  int32_t (*local_e8) [32];
  int32_t uStack_e0;
  int32_t local_d8 [14];
  int32_t local_63 [11];
  ulonglong local_58;
  
  local_58 = DAT_1801eb080 ^ (ulonglong)auStackY_118;
  if (param_4 == 0.0) {
    if (param_2 == param_3) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
    }
    else {
      *(int32_t *)param_2 = 0x30;
      *param_1 = (longlong)param_2 + 1;
      *(int32_t *)(param_1 + 1) = 0;
    }
    goto LAB_1800af0b6;
  }
  if (param_5 < 0) {
    param_5 = 6;
LAB_1800aee8a:
    pfVar7 = (float *)(&DAT_180177d00 + (longlong)(((param_5 + 10) * (param_5 + -1)) / 2) * 4);
    iVar3 = param_5;
  }
  else {
    if (param_5 == 0) {
      param_5 = 1;
      goto LAB_1800aee8a;
    }
    if ((param_5 < 1000000) && (param_5 < 8)) goto LAB_1800aee8a;
    iVar3 = 1000000;
    if (param_5 < 1000000) {
      iVar3 = param_5;
    }
    param_5 = iVar3;
    pfVar7 = (float *)&DAT_180177e00;
    iVar3 = param_5;
    if (0x27 < param_5) {
      iVar3 = 0x27;
    }
  }
  for (pfVar5 = pfVar7; (pfVar5 != pfVar7 + (longlong)iVar3 + 5 && ((uint)*pfVar5 < (uint)param_4));
      pfVar5 = pfVar5 + 1) {
  }
  iVar3 = (int)((longlong)pfVar5 - (longlong)pfVar7 >> 2) + -5;
  if ((iVar3 < param_5) && (-5 < iVar3)) {
    bVar2 = true;
    uVar9 = (param_5 - iVar3) - 1;
    if (0x25 < (int)uVar9) {
      uVar9 = 0x25;
    }
    if ((int)uVar9 < 0) {
      uVar4 = 6;
    }
    else {
      uVar4 = uVar9;
      if (999999999 < (int)uVar9) {
        pauVar6 = (int32_t (*) [32])local_63;
        pauVar12 = (int32_t (*) [32])0x0;
        pauVar11 = (int32_t (*) [32])0x0;
        goto LAB_1800af00f;
      }
    }
    FUN_1800b1a00(&local_e8,(int32_t (*) [32])local_d8,(int32_t (*) [32])local_63,
                  (ulonglong)(double)param_4,uVar4);
    pauVar12 = (int32_t (*) [32])0x0;
    pauVar6 = (int32_t (*) [32])*extraout_RAX;
    pauVar11 = (int32_t (*) [32])0x0;
  }
  else {
    bVar2 = false;
    uVar9 = param_5 - 1;
    if (0x6f < (int)uVar9) {
      uVar9 = 0x6f;
    }
    if ((int)uVar9 < 0) {
      uVar4 = 6;
LAB_1800aefaf:
      FUN_1800b2380((longlong *)&local_e8,(int32_t (*) [32])local_d8,
                    (int32_t (*) [32])local_63,(ulonglong)(double)param_4,uVar4);
    }
    else {
      uVar4 = uVar9;
      if ((int)uVar9 < 1000000000) goto LAB_1800aefaf;
      local_e8 = (int32_t (*) [32])local_63;
      uStack_e0 = 0x84;
    }
    pauVar12 = local_e8;
    pauVar6 = thunk_FUN_180123d80((int32_t (*) [32])local_d8,local_e8,0x65);
    pauVar11 = pauVar6;
  }
LAB_1800af00f:
  if (0 < (int)uVar9) {
    cVar1 = pauVar6[-1][0x1f];
    while (cVar1 == '0') {
      cVar1 = pauVar6[-1][0x1e];
      pauVar6 = (int32_t (*) [32])(pauVar6[-1] + 0x1f);
    }
    if (pauVar6[-1][0x1f] == '.') {
      pauVar6 = (int32_t (*) [32])(pauVar6[-1] + 0x1f);
    }
  }
  uVar8 = (longlong)pauVar6 - (longlong)local_d8;
  if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar8) {
LAB_1800af049:
    *param_1 = (longlong)param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_180150fd0(param_2,local_d8,uVar8);
    puVar10 = (int32_t *)((longlong)param_2 + uVar8);
    if (!bVar2) {
      uVar8 = (longlong)pauVar12 - (longlong)pauVar11;
      if ((longlong)param_3 - (longlong)puVar10 < (longlong)uVar8) goto LAB_1800af049;
      FUN_180150fd0(puVar10,(int32_t *)pauVar11,uVar8);
      puVar10 = (int32_t *)((longlong)puVar10 + uVar8);
    }
    *param_1 = (longlong)puVar10;
    *(int32_t *)(param_1 + 1) = 0;
  }
LAB_1800af0b6:
  FUN_1801252c0(local_58 ^ (ulonglong)auStackY_118);
  return;
}
}

