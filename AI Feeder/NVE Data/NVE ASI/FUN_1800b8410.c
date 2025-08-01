#include "FUN_1800b8410.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800b8410(int32_t *param_1,int32_t *param_2,ulonglong param_3) {
longlong lVar1;
  int32_t *puVar2;
  byte local_res8;
  
  lVar1 = param_1[2];
  if (param_3 <= (ulonglong)(param_1[3] - lVar1)) {
    param_1[2] = lVar1 + param_3;
    puVar2 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar2 = (int32_t *)*param_1;
    }
    FUN_180150fd0((int32_t *)((longlong)puVar2 + lVar1 * 2),param_2,param_3 * 2);
    *(int32_t *)((longlong)puVar2 + (lVar1 + param_3) * 2) = 0;
    return param_1;
  }
  puVar2 = FUN_1800b8250(param_1,param_3,(ulonglong)local_res8,param_2,param_3);
  return puVar2;
}
}

