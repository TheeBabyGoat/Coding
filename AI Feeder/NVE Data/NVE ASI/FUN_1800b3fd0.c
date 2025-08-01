#include "FUN_1800b3fd0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b3fd0(int32_t *param_1) {
longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_1801835f0;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    param_1[2] = 0;
    plVar2 = (longlong *)param_1[4];
    if ((ulonglong)plVar2[3] < 0x10) {
      lVar4 = plVar2[2] + (longlong)plVar2;
      plVar3 = plVar2;
    }
    else {
      lVar4 = *plVar2 + plVar2[2];
      plVar3 = (longlong *)*plVar2;
    }
    FUN_1800b7500(plVar2,lVar4 - (longlong)plVar3,param_1 + 5,
                  (longlong)param_1 + (lVar1 - (longlong)(param_1 + 5)) + 0x28);
    param_1[4] = plVar2;
  }
  return;
}
}

