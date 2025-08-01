#include "FUN_1800b86e0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b86e0(int32_t *param_1,int32_t *param_2,ulonglong param_3) {
code *pcVar1;
  ulonglong uVar2;
  void *pvVar3;
  __uint64 _Var4;
  int32_t *puVar5;
  
  if (0x7ffffffffffffffe < param_3) {
    FUN_1800ba540();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    FUN_180150fd0(param_1,param_2,param_3 * 2);
    *(int32_t *)(param_3 * 2 + (longlong)param_1) = 0;
    return;
  }
  uVar2 = param_3 | 7;
  puVar5 = (int32_t *)0x0;
  if (uVar2 < 0x7fffffffffffffff) {
    if (uVar2 < 10) {
      uVar2 = 10;
    }
    if (0x7fffffffffffffff < uVar2 + 1) goto LAB_1800b87fe;
    _Var4 = (uVar2 + 1) * 2;
    if (_Var4 == 0) goto LAB_1800b87bf;
  }
  else {
    _Var4 = 0xfffffffffffffffe;
    uVar2 = 0x7ffffffffffffffe;
  }
  if (_Var4 < 0x1000) {
    puVar5 = (int32_t *)operator_new(_Var4);
  }
  else {
    if (_Var4 + 0x27 <= _Var4) {
LAB_1800b87fe:
      FUN_1800ba8a0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar3 = operator_new(_Var4 + 0x27);
    if (pvVar3 == (void *)0x0) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar5 = (int32_t *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    puVar5[-1] = pvVar3;
  }
LAB_1800b87bf:
  param_1[2] = param_3;
  *param_1 = puVar5;
  param_1[3] = uVar2;
  FUN_180150fd0(puVar5,param_2,param_3 * 2);
  *(int32_t *)(param_3 * 2 + (longlong)puVar5) = 0;
  return;
}
}

 FUN_1800b86e0((int32_t *)local_40,(int32_t *)(param_2 + 0xb),uVar11);
  uVar3 = param_1[7];
  puVar8 = puVar1;
  if (7 < uVar3) {
puVar8 = *(uint **)puVar1;
  }
}

