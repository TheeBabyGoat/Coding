#include "FUN_1800ca960.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800ca960(longlong *param_1,int32_t *param_2,int32_t *param_3,ulonglong param_4) {
int32_t *puVar1;
  LPVOID pvVar2;
  code *pcVar3;
  longlong lVar4;
  void *pvVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  ulonglong uVar10;
  int32_t *puVar11;
  LPVOID pvVar12;
  ulonglong uVar13;
  
  if (param_4 != 0) {
    puVar9 = (int32_t *)*param_1;
    puVar1 = (int32_t *)param_1[1];
    if (param_4 <= (ulonglong)((param_1[2] - (longlong)puVar1) / 0x28)) {
      uVar6 = ((longlong)puVar1 - (longlong)param_2) / 0x28;
      uVar10 = param_4 * 0x28;
      if (param_4 < uVar6) {
        FUN_180150fd0(puVar1,puVar1 + param_4 * -5,uVar10);
        param_1[1] = (longlong)(puVar1 + ((longlong)uVar10 / 0x28) * 5);
        uVar6 = (longlong)(puVar1 + param_4 * -5) - (longlong)param_2;
        FUN_180150fd0((int32_t *)((longlong)puVar1 - uVar6),param_2,uVar6);
        FUN_180150fd0(param_2,param_3,uVar10);
        return;
      }
      FUN_180150fd0(param_2 + param_4 * 5,param_2,(longlong)puVar1 - (longlong)param_2);
      param_1[1] = (longlong)(param_2 + param_4 * 5 + uVar6 * 5);
      FUN_180150fd0(param_2,param_3,uVar10);
      return;
    }
    uVar6 = (longlong)puVar1 - (longlong)puVar9;
    if (0x666666666666666U - (longlong)uVar6 / 0x28 < param_4) {
      FUN_1800aa480();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar10 = (longlong)uVar6 / 0x28 + param_4;
    uVar13 = (param_1[2] - (longlong)puVar9) / 0x28;
    if (0x666666666666666 - (uVar13 >> 1) < uVar13) {
LAB_1800cac68:
      FUN_1800ba8a0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar13 = (uVar13 >> 1) + uVar13;
    uVar7 = uVar10;
    if (uVar10 <= uVar13) {
      uVar7 = uVar13;
    }
    if (0x666666666666666 < uVar7) goto LAB_1800cac68;
    uVar13 = uVar7 * 0x28;
    if (uVar13 == 0) {
      puVar11 = (int32_t *)0x0;
    }
    else if (uVar13 < 0x1000) {
      puVar11 = (int32_t *)operator_new(uVar13);
    }
    else {
      if (uVar13 + 0x27 <= uVar13) goto LAB_1800cac68;
      pvVar5 = operator_new(uVar13 + 0x27);
      if (pvVar5 == (void *)0x0) goto LAB_1800cac74;
      puVar11 = (int32_t *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
      puVar11[-1] = pvVar5;
    }
    lVar4 = ((longlong)param_2 - (longlong)puVar9) / 0x28;
    FUN_180150fd0(puVar11 + lVar4 * 5,param_3,param_4 * 0x28);
    if ((param_4 != 1) || (puVar8 = puVar11, param_2 != puVar1)) {
      FUN_180150fd0(puVar11,puVar9,(longlong)param_2 - (longlong)puVar9);
      uVar6 = (longlong)puVar1 - (longlong)param_2;
      puVar8 = puVar11 + (lVar4 + param_4) * 5;
      puVar9 = param_2;
    }
    FUN_180150fd0(puVar8,puVar9,uVar6);
    pvVar2 = (LPVOID)*param_1;
    if (pvVar2 != (LPVOID)0x0) {
      pvVar12 = pvVar2;
      if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar2) / 0x28) * 0x28)) &&
         (pvVar12 = *(LPVOID *)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar12)))) {
LAB_1800cac74:
        FUN_18012b7b4();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      thunk_FUN_18012d5e8(pvVar12);
    }
    *param_1 = (longlong)puVar11;
    param_1[1] = (longlong)(puVar11 + uVar10 * 5);
    param_1[2] = (longlong)(puVar11 + uVar7 * 5);
  }
  return;
}
}

