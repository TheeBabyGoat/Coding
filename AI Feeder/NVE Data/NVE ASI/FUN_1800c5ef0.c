#include "FUN_1800c5ef0.h"
#include <stdint.h>
#include <stddef.h>

float * FUN_1800c5ef0(float *param_1,int32_t *param_2) {
byte *pbVar1;
  byte *pbVar2;
  int32_t local_res10 [2];
  int32_t local_18 [2];
  
  local_res10[0] = 0;
  FUN_1800a9050(param_1,local_res10);
  pbVar1 = (byte *)param_2[1];
  for (pbVar2 = (byte *)*param_2; pbVar2 != pbVar1; pbVar2 = pbVar2 + 0x10) {
    FUN_1800c6190(param_1,local_18,pbVar2);
  }
  return param_1;
}
}

