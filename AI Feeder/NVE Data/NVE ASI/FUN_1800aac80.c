#include "FUN_1800aac80.h"
#include <stdint.h>
#include <stddef.h>

int32_t *** FUN_1800aac80(int32_t ***param_1,int32_t *param_2,ulonglong *param_3) {
int32_t **ppuVar1;
  ulonglong uVar2;
  ulonglong local_18;
  ulonglong uStack_10;
  
  local_18 = *param_3;
  uStack_10 = param_3[1];
  FUN_1800b8dc0(param_1,&local_18,param_2);
  *param_1 = (int32_t **)&PTR_FUN_1801879a0;
  param_1[5] = (int32_t **)0x0;
  param_1[6] = (int32_t **)0x0;
  param_1[7] = (int32_t **)0x0;
  param_1[8] = (int32_t **)0x7;
  *(int32_t *)(param_1 + 5) = 0;
  param_1[9] = (int32_t **)0x0;
  param_1[10] = (int32_t **)0x0;
  param_1[0xb] = (int32_t **)0x0;
  param_1[0xc] = (int32_t **)0x7;
  *(int32_t *)(param_1 + 9) = 0;
  ppuVar1 = (int32_t **)"Unknown exception";
  if (param_1[1] != (int32_t **)0x0) {
    ppuVar1 = param_1[1];
  }
  param_1[0xd] = (int32_t **)0x0;
  param_1[0xe] = (int32_t **)0x0;
  param_1[0xf] = (int32_t **)0x0;
  param_1[0x10] = (int32_t **)0x0;
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)((longlong)ppuVar1 + uVar2) != '\0');
  FUN_1800ba360(param_1 + 0xd,ppuVar1,uVar2);
  return param_1;
}
}

