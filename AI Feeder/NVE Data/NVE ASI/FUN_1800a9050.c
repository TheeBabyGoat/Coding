#include "FUN_1800a9050.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800a9050(int32_t *param_1,int32_t *param_2) {
void *pvVar1;
  
  *param_1 = *param_2;
  *(int32_t *)(param_1 + 2) = 0;
  *(int32_t *)(param_1 + 4) = 0;
  pvVar1 = operator_new(0x20);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)(param_1 + 2) = pvVar1;
  *(ulonglong *)(param_1 + 6) = 0;
  *(int32_t *)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 10) = 0;
  *(int32_t *)(param_1 + 0xc) = 7;
  *(int32_t *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  FUN_1800a9140((ulonglong *)(param_1 + 6),0x10,*(int32_t *)(param_1 + 2));
  return param_1;
}
}

 FUN_1800a9050(param_1,local_res10);
  pbVar1 = (byte *)param_2[1];
  for (pbVar2 = (byte *)*param_2; pbVar2 != pbVar1; pbVar2 = pbVar2 + 0x10) {
FUN_1800c6190(param_1,local_18,pbVar2);
  }
}

