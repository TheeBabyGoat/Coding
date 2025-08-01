#include "FUN_1800b8040.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800b8040(longlong *param_1,longlong *param_2,int32_t param_3) {
ulonglong uVar1;
  longlong *plVar2;
  
  if (param_1 != param_2) {
    uVar1 = param_2[2];
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (longlong *)*param_2;
    }
    if (uVar1 <= (ulonglong)param_1[3]) {
      plVar2 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        plVar2 = (longlong *)*param_1;
      }
      param_1[2] = uVar1;
      FUN_180150fd0(plVar2,param_2,uVar1 * 2);
      *(int32_t *)(uVar1 * 2 + (longlong)plVar2) = 0;
      return param_1;
    }
    FUN_1800b7ee0(param_1,uVar1,param_3,param_2);
  }
  return param_1;
}
}

