#include "FUN_1800b5af0.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800b5af0(longlong param_1,int32_t *param_2) {
int32_t *puVar1;
  ulonglong uVar2;
  
  puVar1 = *(int32_t **)(param_1 + 0x20);
  uVar2 = 0xffffffffffffffff;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)((longlong)puVar1 + uVar2) != '\0');
  FUN_1800ba360(param_2,puVar1,uVar2);
  return param_2;
}
}

