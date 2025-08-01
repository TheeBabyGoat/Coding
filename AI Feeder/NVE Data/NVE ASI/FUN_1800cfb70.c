#include "FUN_1800cfb70.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800cfb70(int32_t *param_1,ulonglong param_2) {
ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  code *pcVar5;
  void *pvVar6;
  int32_t *puVar7;
  __uint64 _Var8;
  ulonglong uVar9;
  ulonglong uVar10;
  int32_t *puVar11;
  
  lVar2 = param_1[2];
  uVar10 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
    FUN_1800ba540();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar9 = lVar2 + param_2 | 7;
  uVar3 = param_1[3];
  if ((uVar9 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar1 = uVar3 + (uVar3 >> 1);
    uVar10 = uVar9;
    if (uVar9 < uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffff < uVar10 + 1) goto LAB_1800cfcc9;
    _Var8 = (uVar10 + 1) * 2;
    if (_Var8 != 0) goto LAB_1800cfc09;
    puVar7 = (int32_t *)0x0;
  }
  else {
    _Var8 = 0xfffffffffffffffe;
LAB_1800cfc09:
    if (_Var8 < 0x1000) {
      puVar7 = (int32_t *)operator_new(_Var8);
    }
    else {
      if (_Var8 + 0x27 <= _Var8) {
LAB_1800cfcc9:
        FUN_1800ba8a0();
        pcVar5 = (code *)swi(3);
        puVar7 = (int32_t *)(*pcVar5)();
        return puVar7;
      }
      pvVar6 = operator_new(_Var8 + 0x27);
      if (pvVar6 == (void *)0x0) goto LAB_1800cfcc3;
      puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
      puVar7[-1] = pvVar6;
    }
  }
  param_1[2] = lVar2 + param_2;
  uVar9 = lVar2 * 2 + 2;
  param_1[3] = uVar10;
  if (uVar3 < 8) {
    FUN_180150fd0(puVar7,param_1,uVar9);
  }
  else {
    puVar4 = (int32_t *)*param_1;
    FUN_180150fd0(puVar7,puVar4,uVar9);
    puVar11 = puVar4;
    if ((0xfff < uVar3 * 2 + 2) &&
       (puVar11 = (int32_t *)puVar4[-1],
       0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar11)))) {
LAB_1800cfcc3:
      FUN_18012b7b4();
      pcVar5 = (code *)swi(3);
      puVar7 = (int32_t *)(*pcVar5)();
      return puVar7;
    }
    thunk_FUN_18012d5e8(puVar11);
  }
  *param_1 = puVar7;
  return param_1;
}
}

 FUN_1800cfb70((int32_t *)param_1,uVar6);
  }
  puVar9 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
puVar9 = *(uint **)param_1;
  }
}

