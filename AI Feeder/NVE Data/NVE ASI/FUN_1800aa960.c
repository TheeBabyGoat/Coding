#include "FUN_1800aa960.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800aa960(int32_t *param_1,ulonglong param_2,int32_t param_3,longlong param_4,
             int32_t param_5) {
ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  code *pcVar5;
  void *pvVar6;
  int32_t *puVar7;
  __uint64 _Var8;
  longlong lVar9;
  ulonglong uVar10;
  int32_t *puVar11;
  ulonglong uVar12;
  int32_t *puVar13;
  
  lVar2 = param_1[2];
  uVar12 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
    FUN_1800ba540();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar10 = lVar2 + param_2 | 7;
  uVar3 = param_1[3];
  puVar7 = (int32_t *)0x0;
  if ((uVar10 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar1 = uVar3 + (uVar3 >> 1);
    uVar12 = uVar10;
    if (uVar10 < uVar1) {
      uVar12 = uVar1;
    }
    if (0x7fffffffffffffff < uVar12 + 1) goto LAB_1800aab00;
    _Var8 = (uVar12 + 1) * 2;
    if (_Var8 != 0) goto LAB_1800aaa07;
  }
  else {
    _Var8 = 0xfffffffffffffffe;
LAB_1800aaa07:
    if (_Var8 < 0x1000) {
      puVar7 = (int32_t *)operator_new(_Var8);
    }
    else {
      if (_Var8 + 0x27 <= _Var8) {
LAB_1800aab00:
        FUN_1800ba8a0();
        pcVar5 = (code *)swi(3);
        puVar7 = (int32_t *)(*pcVar5)();
        return puVar7;
      }
      pvVar6 = operator_new(_Var8 + 0x27);
      if (pvVar6 == (void *)0x0) goto LAB_1800aaafa;
      puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
      puVar7[-1] = pvVar6;
    }
  }
  param_1[3] = uVar12;
  uVar12 = lVar2 * 2;
  param_1[2] = lVar2 + param_2;
  puVar13 = (int32_t *)(uVar12 + (longlong)puVar7);
  if (uVar3 < 8) {
    FUN_180150fd0(puVar7,param_1,uVar12);
    lVar9 = param_4;
    if (param_4 != 0) {
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar13 = param_5;
        puVar13 = puVar13 + 1;
      }
    }
    *(int32_t *)((longlong)puVar7 + (lVar2 + param_4) * 2) = 0;
  }
  else {
    puVar4 = (int32_t *)*param_1;
    FUN_180150fd0(puVar7,puVar4,uVar12);
    lVar9 = param_4;
    if (param_4 != 0) {
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar13 = param_5;
        puVar13 = puVar13 + 1;
      }
    }
    *(int32_t *)((longlong)puVar7 + (lVar2 + param_4) * 2) = 0;
    puVar11 = puVar4;
    if ((0xfff < uVar3 * 2 + 2) &&
       (puVar11 = (int32_t *)puVar4[-1],
       0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar11)))) {
LAB_1800aaafa:
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

 FUN_1800aa960((int32_t *)param_1,uVar6,(ulonglong)param_1 & 0xff,uVar6,0);
      }
      else {
        *(ulonglong *)(param_1 + 8) = uVar7;
        pWVar5 = param_1;
        if (7 < *(ulonglong *)(param_1 + 0xc)) {
pWVar5 = *(LPWSTR *)param_1;
        }
}

