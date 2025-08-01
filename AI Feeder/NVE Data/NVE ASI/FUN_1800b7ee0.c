#include "FUN_1800b7ee0.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800b7ee0(longlong *param_1,ulonglong param_2,int32_t param_3,int32_t *param_4) {
ulonglong uVar1;
  ulonglong uVar2;
  LPVOID pvVar3;
  code *pcVar4;
  void *pvVar5;
  longlong *plVar6;
  __uint64 _Var7;
  LPVOID pvVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int32_t *puVar11;
  
  uVar10 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe < param_2) {
    FUN_1800ba540();
    pcVar4 = (code *)swi(3);
    plVar6 = (longlong *)(*pcVar4)();
    return plVar6;
  }
  uVar9 = param_2 | 7;
  puVar11 = (int32_t *)0x0;
  uVar2 = param_1[3];
  if ((uVar9 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) {
    uVar1 = uVar2 + (uVar2 >> 1);
    uVar10 = uVar9;
    if (uVar9 < uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffff < uVar10 + 1) goto LAB_1800b8032;
    _Var7 = (uVar10 + 1) * 2;
    if (_Var7 != 0) goto LAB_1800b7f76;
  }
  else {
    _Var7 = 0xfffffffffffffffe;
LAB_1800b7f76:
    if (_Var7 < 0x1000) {
      puVar11 = (int32_t *)operator_new(_Var7);
    }
    else {
      if (_Var7 + 0x27 <= _Var7) {
LAB_1800b8032:
        FUN_1800ba8a0();
        pcVar4 = (code *)swi(3);
        plVar6 = (longlong *)(*pcVar4)();
        return plVar6;
      }
      pvVar5 = operator_new(_Var7 + 0x27);
      if (pvVar5 == (void *)0x0) goto LAB_1800b802c;
      puVar11 = (int32_t *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
      puVar11[-1] = pvVar5;
    }
  }
  param_1[3] = uVar10;
  param_1[2] = param_2;
  FUN_180150fd0(puVar11,param_4,param_2 * 2);
  *(int32_t *)(param_2 * 2 + (longlong)puVar11) = 0;
  if (7 < uVar2) {
    pvVar3 = (LPVOID)*param_1;
    pvVar8 = pvVar3;
    if ((0xfff < uVar2 * 2 + 2) &&
       (pvVar8 = *(LPVOID *)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar8)))) {
LAB_1800b802c:
      FUN_18012b7b4();
      pcVar4 = (code *)swi(3);
      plVar6 = (longlong *)(*pcVar4)();
      return plVar6;
    }
    thunk_FUN_18012d5e8(pvVar8);
  }
  *param_1 = (longlong)puVar11;
  return param_1;
}
}

