#include "FUN_1800c6820.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800c6820(puVar1,DAT_1801ec6f8,&local_88);
  }
  else {
    *DAT_1801ec6f8 = &LAB_1800bb850;
    DAT_1801ec6f8 = DAT_1801ec6f8 + 1;
  }
  local_88 = &LAB_1800bbf20;
  if (DAT_1801ec6e0 == DAT_1801ec6e8) {
FUN_1800c69d0(puVar1,DAT_1801ec6e0,&local_88);
  }
}

int32_t * FUN_1800c6820(int32_t param_1,int32_t *param_2,int32_t *param_3) {
ulonglong uVar1;
  int32_t *puVar2;
  code *pcVar3;
  longlong lVar4;
  void *pvVar5;
  int32_t *puVar6;
  ulonglong uVar7;
  int32_t *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar9 = (longlong)param_2 - (longlong)DAT_1801ec6f0;
  lVar4 = (longlong)DAT_1801ec6f8 - (longlong)DAT_1801ec6f0 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
    FUN_1800aa480();
    pcVar3 = (code *)swi(3);
    puVar6 = (int32_t *)(*pcVar3)();
    return puVar6;
  }
  uVar7 = (longlong)DAT_1801ec700 - (longlong)DAT_1801ec6f0 >> 3;
  uVar1 = lVar4 + 1;
  if (0x1fffffffffffffff - (uVar7 >> 1) < uVar7) {
LAB_1800c69c0:
    FUN_1800ba8a0();
    pcVar3 = (code *)swi(3);
    puVar6 = (int32_t *)(*pcVar3)();
    return puVar6;
  }
  uVar7 = (uVar7 >> 1) + uVar7;
  uVar10 = uVar1;
  if (uVar1 <= uVar7) {
    uVar10 = uVar7;
  }
  if (0x1fffffffffffffff < uVar10) goto LAB_1800c69c0;
  uVar7 = uVar10 * 8;
  if (uVar7 == 0) {
    puVar6 = (int32_t *)0x0;
  }
  else if (uVar7 < 0x1000) {
    puVar6 = (int32_t *)operator_new(uVar7);
  }
  else {
    if (uVar7 + 0x27 <= uVar7) goto LAB_1800c69c0;
    pvVar5 = operator_new(uVar7 + 0x27);
    if (pvVar5 == (void *)0x0) goto LAB_1800c69ba;
    puVar6 = (int32_t *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
    puVar6[-1] = pvVar5;
  }
  puVar2 = puVar6 + (lVar9 >> 3);
  *puVar2 = *param_3;
  if (param_2 == DAT_1801ec6f8) {
    uVar7 = (longlong)DAT_1801ec6f8 - (longlong)DAT_1801ec6f0;
    puVar8 = puVar6;
    param_2 = DAT_1801ec6f0;
  }
  else {
    FUN_180150fd0(puVar6,DAT_1801ec6f0,(longlong)param_2 - (longlong)DAT_1801ec6f0);
    puVar8 = puVar2 + 1;
    uVar7 = (longlong)DAT_1801ec6f8 - (longlong)param_2;
  }
  FUN_180150fd0(puVar8,param_2,uVar7);
  if (DAT_1801ec6f0 != (int32_t *)0x0) {
    puVar8 = DAT_1801ec6f0;
    if ((0xfff < ((longlong)DAT_1801ec700 - (longlong)DAT_1801ec6f0 & 0xfffffffffffffff8U)) &&
       (puVar8 = (int32_t *)DAT_1801ec6f0[-1],
       0x1f < (ulonglong)((longlong)DAT_1801ec6f0 + (-8 - (longlong)puVar8)))) {
LAB_1800c69ba:
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      puVar6 = (int32_t *)(*pcVar3)();
      return puVar6;
    }
    thunk_FUN_18012d5e8(puVar8);
  }
  DAT_1801ec6f0 = puVar6;
  DAT_1801ec6f8 = puVar6 + uVar1;
  DAT_1801ec700 = puVar6 + uVar10;
  return puVar2;
}
}

