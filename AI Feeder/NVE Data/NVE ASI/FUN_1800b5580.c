#include "FUN_1800b5580.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800b5580(int32_t *param_1,int32_t *param_2,ulonglong param_3,longlong *param_4,
             longlong param_5) {
char cVar1;
  int32_t local_58 [16];
  int32_t *local_48;
  longlong lStack_40;
  int32_t local_38;
  longlong local_28;
  longlong lStack_20;
  int32_t local_18;
  
  cVar1 = (char)param_4[1];
  local_58[0] = (int32_t)param_3;
  if ((cVar1 == '\0') || (cVar1 == 'c')) {
    if (cVar1 != '?') {
      local_48 = local_58;
      lStack_40 = 1;
      FUN_1800b5450(param_1,param_2,(longlong *)&local_48,param_4);
      return param_1;
    }
  }
  else if (cVar1 != '?') {
    local_38 = (int32_t)param_4[2];
    local_48 = (int32_t *)*param_4;
    lStack_40 = param_4[1];
    FUN_1800b3b10(param_1,param_2,param_3,(int *)&local_48,param_5);
    return param_1;
  }
  local_18 = (int32_t)param_4[2];
  local_28 = *param_4;
  lStack_20 = param_4[1];
  local_48 = local_58;
  lStack_40 = 1;
  FUN_1800b4bf0(param_1,param_2,(longlong *)&local_48,(int *)&local_28,0x27);
  return param_1;
}
}

