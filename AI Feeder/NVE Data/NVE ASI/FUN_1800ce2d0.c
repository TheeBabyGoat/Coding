#include "FUN_1800ce2d0.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800ce2d0(int32_t *param_1) {
int32_t *puVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  void *pvVar7;
  _Locimp *p_Var8;
  
  *param_1 = &PTR_FUN_1801cc3c0;
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  puVar2 = param_1 + 2;
  *puVar2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar3 = param_1 + 5;
  *puVar3 = 0;
  puVar4 = param_1 + 6;
  *puVar4 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar5 = param_1 + 9;
  *(int32_t *)puVar5 = 0;
  puVar6 = (int32_t *)((longlong)param_1 + 0x4c);
  *puVar6 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  pvVar7 = operator_new(0x10);
  p_Var8 = FUN_180124548('\x01');
  *(_Locimp **)((longlong)pvVar7 + 8) = p_Var8;
  param_1[0xc] = pvVar7;
  param_1[3] = puVar1;
  param_1[4] = puVar2;
  param_1[7] = puVar3;
  param_1[8] = puVar4;
  param_1[10] = puVar5;
  param_1[0xb] = puVar6;
  *puVar2 = 0;
  *puVar4 = 0;
  *puVar6 = 0;
  *puVar1 = 0;
  *puVar3 = 0;
  *(int32_t *)puVar5 = 0;
  return param_1;
}
}

