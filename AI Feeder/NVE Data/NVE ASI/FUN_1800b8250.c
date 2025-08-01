#include "FUN_1800b8250.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800b8250(int32_t *param_1,ulonglong param_2,int32_t param_3,int32_t *param_4,
             longlong param_5) {
ulonglong uVar1;
  int32_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  int32_t *puVar5;
  code *pcVar6;
  void *pvVar7;
  int32_t *puVar8;
  __uint64 _Var9;
  ulonglong uVar10;
  ulonglong uVar11;
  int32_t *puVar12;
  
  lVar3 = param_1[2];
  uVar11 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar3 < param_2) {
    FUN_1800ba540();
    pcVar6 = (code *)swi(3);
    puVar8 = (int32_t *)(*pcVar6)();
    return puVar8;
  }
  puVar8 = (int32_t *)0x0;
  uVar4 = param_1[3];
  uVar10 = lVar3 + param_2 | 7;
  if ((uVar10 < 0x7fffffffffffffff) && (uVar4 <= 0x7ffffffffffffffe - (uVar4 >> 1))) {
    uVar1 = uVar4 + (uVar4 >> 1);
    uVar11 = uVar10;
    if (uVar10 < uVar1) {
      uVar11 = uVar1;
    }
    if (0x7fffffffffffffff < uVar11 + 1) goto LAB_1800b8402;
    _Var9 = (uVar11 + 1) * 2;
    if (_Var9 != 0) goto LAB_1800b82fd;
  }
  else {
    _Var9 = 0xfffffffffffffffe;
LAB_1800b82fd:
    if (_Var9 < 0x1000) {
      puVar8 = (int32_t *)operator_new(_Var9);
    }
    else {
      if (_Var9 + 0x27 <= _Var9) {
LAB_1800b8402:
        FUN_1800ba8a0();
        pcVar6 = (code *)swi(3);
        puVar8 = (int32_t *)(*pcVar6)();
        return puVar8;
      }
      pvVar7 = operator_new(_Var9 + 0x27);
      if (pvVar7 == (void *)0x0) goto LAB_1800b83fc;
      puVar8 = (int32_t *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
      puVar8[-1] = pvVar7;
    }
  }
  param_1[2] = lVar3 + param_2;
  uVar10 = lVar3 * 2;
  param_1[3] = uVar11;
  puVar2 = (int32_t *)((longlong)puVar8 + (lVar3 + param_5) * 2);
  if (uVar4 < 8) {
    FUN_180150fd0(puVar8,param_1,uVar10);
    FUN_180150fd0((int32_t *)(uVar10 + (longlong)puVar8),param_4,param_5 * 2);
    *puVar2 = 0;
  }
  else {
    puVar5 = (int32_t *)*param_1;
    FUN_180150fd0(puVar8,puVar5,uVar10);
    FUN_180150fd0((int32_t *)(uVar10 + (longlong)puVar8),param_4,param_5 * 2);
    *puVar2 = 0;
    puVar12 = puVar5;
    if ((0xfff < uVar4 * 2 + 2) &&
       (puVar12 = (int32_t *)puVar5[-1],
       0x1f < (ulonglong)((longlong)puVar5 + (-8 - (longlong)puVar12)))) {
LAB_1800b83fc:
      FUN_18012b7b4();
      pcVar6 = (code *)swi(3);
      puVar8 = (int32_t *)(*pcVar6)();
      return puVar8;
    }
    thunk_FUN_18012d5e8(puVar12);
  }
  *param_1 = puVar8;
  return param_1;
}
}

