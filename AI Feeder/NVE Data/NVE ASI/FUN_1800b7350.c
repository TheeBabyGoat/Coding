#include "FUN_1800b7350.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800b7350(int32_t *param_1,ulonglong param_2,int32_t param_3,ulonglong param_4,
             int32_t *param_5,ulonglong param_6) {
ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  code *pcVar5;
  void *pvVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int32_t *puVar10;
  
  lVar2 = param_1[2];
  uVar9 = 0x7fffffffffffffff;
  if (0x7fffffffffffffffU - lVar2 < param_2) {
    FUN_1800ba540();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar8 = lVar2 + param_2 | 0xf;
  uVar3 = param_1[3];
  if ((uVar8 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar9 = uVar8;
    if (uVar8 < uVar1) {
      uVar9 = uVar1;
    }
    uVar1 = uVar9 + 1;
    if (uVar1 == 0) {
      puVar7 = (int32_t *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar8 = uVar9 + 0x28;
        if (uVar8 <= uVar1) {
          FUN_1800ba8a0();
          pcVar5 = (code *)swi(3);
          puVar7 = (int32_t *)(*pcVar5)();
          return puVar7;
        }
        goto LAB_1800b73f8;
      }
      puVar7 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar8 = 0x8000000000000027;
LAB_1800b73f8:
    pvVar6 = operator_new(uVar8);
    if (pvVar6 == (void *)0x0) goto LAB_1800b74ec;
    puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = pvVar6;
  }
  param_1[3] = uVar9;
  puVar10 = (int32_t *)(param_4 + (longlong)puVar7);
  param_1[2] = lVar2 + param_2;
  if (uVar3 < 0x10) {
    FUN_180150fd0(puVar7,param_1,param_4);
    FUN_180150fd0(puVar10,param_5,param_6);
    FUN_180150fd0((int32_t *)((longlong)puVar10 + param_6),
                  (int32_t *)(param_4 + (longlong)param_1),(lVar2 - param_4) + 1);
  }
  else {
    puVar4 = (int32_t *)*param_1;
    FUN_180150fd0(puVar7,puVar4,param_4);
    FUN_180150fd0(puVar10,param_5,param_6);
    FUN_180150fd0((int32_t *)((longlong)puVar10 + param_6),
                  (int32_t *)((longlong)puVar4 + param_4),(lVar2 - param_4) + 1);
    puVar10 = puVar4;
    if ((0xfff < uVar3 + 1) &&
       (puVar10 = (int32_t *)puVar4[-1],
       0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar10)))) {
LAB_1800b74ec:
      FUN_18012b7b4();
      pcVar5 = (code *)swi(3);
      puVar7 = (int32_t *)(*pcVar5)();
      return puVar7;
    }
    thunk_FUN_18012d5e8(puVar10);
  }
  *param_1 = puVar7;
  return param_1;
}
}

