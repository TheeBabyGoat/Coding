#include "FUN_1800b8fd0.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800b8fd0(int32_t *param_1,ulonglong param_2,int32_t param_3,ulonglong param_4,
             byte param_5) {
ulonglong uVar1;
  int32_t (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  int32_t *puVar5;
  code *pcVar6;
  void *pvVar7;
  int32_t *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int32_t *puVar11;
  
  uVar3 = param_1[2];
  uVar10 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar3 < param_2) {
    FUN_1800ba540();
    pcVar6 = (code *)swi(3);
    puVar8 = (int32_t *)(*pcVar6)();
    return puVar8;
  }
  uVar9 = uVar3 + param_2 | 0xf;
  uVar4 = param_1[3];
  if ((uVar9 < 0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) {
    uVar1 = uVar4 + (uVar4 >> 1);
    uVar10 = uVar9;
    if (uVar9 < uVar1) {
      uVar10 = uVar1;
    }
    uVar1 = uVar10 + 1;
    if (uVar1 == 0) {
      puVar8 = (int32_t *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar9 = uVar10 + 0x28;
        if (uVar9 <= uVar1) {
          FUN_1800ba8a0();
          pcVar6 = (code *)swi(3);
          puVar8 = (int32_t *)(*pcVar6)();
          return puVar8;
        }
        goto LAB_1800b9078;
      }
      puVar8 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar9 = 0x8000000000000027;
LAB_1800b9078:
    pvVar7 = operator_new(uVar9);
    if (pvVar7 == (void *)0x0) goto LAB_1800b914d;
    puVar8 = (int32_t *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
    puVar8[-1] = pvVar7;
  }
  param_1[2] = uVar3 + param_2;
  pauVar2 = (int32_t (*) [32])(uVar3 + (longlong)puVar8);
  param_1[3] = uVar10;
  if (uVar4 < 0x10) {
    FUN_180150fd0(puVar8,param_1,uVar3);
    FUN_180151670(pauVar2,param_5,param_4);
    (*pauVar2)[param_4] = 0;
  }
  else {
    puVar5 = (int32_t *)*param_1;
    FUN_180150fd0(puVar8,puVar5,uVar3);
    FUN_180151670(pauVar2,param_5,param_4);
    (*pauVar2)[param_4] = 0;
    puVar11 = puVar5;
    if ((0xfff < uVar4 + 1) &&
       (puVar11 = (int32_t *)puVar5[-1],
       0x1f < (ulonglong)((longlong)puVar5 + (-8 - (longlong)puVar11)))) {
LAB_1800b914d:
      FUN_18012b7b4();
      pcVar6 = (code *)swi(3);
      puVar8 = (int32_t *)(*pcVar6)();
      return puVar8;
    }
    thunk_FUN_18012d5e8(puVar11);
  }
  *param_1 = puVar8;
  return param_1;
}
}

 FUN_1800b8fd0(puVar4,uVar11,(ulonglong)param_4,uVar11,0x20);
          }
          else {
            param_1[0x4e] = uVar2;
            if (0xf < (ulonglong)param_1[0x4f]) {
puVar4 = (int32_t *)*puVar4;
            }
}

