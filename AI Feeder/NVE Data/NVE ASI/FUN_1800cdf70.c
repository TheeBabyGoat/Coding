#include "FUN_1800cdf70.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800cdf70(int32_t *param_1) {
int32_t uVar1;
  
  FUN_1800ce2d0(param_1);
  *(int32_t *)((longlong)param_1 + 0x7c) = 0;
  *(int32_t *)((longlong)param_1 + 0x71) = 0;
  *param_1 = &PTR_LAB_1801cc438;
  param_1[3] = param_1 + 1;
  param_1[0xb] = (int32_t *)((longlong)param_1 + 0x4c);
  param_1[4] = param_1 + 2;
  param_1[7] = param_1 + 5;
  param_1[8] = param_1 + 6;
  param_1[10] = param_1 + 9;
  param_1[2] = 0;
  param_1[6] = 0;
  *(int32_t *)((longlong)param_1 + 0x4c) = 0;
  uVar1 = DAT_1801fc930;
  param_1[1] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 9) = 0;
  *(int32_t *)((longlong)param_1 + 0x74) = uVar1;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  return param_1;
}
}

