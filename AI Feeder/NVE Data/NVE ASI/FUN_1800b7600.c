#include "FUN_1800b7600.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b7600(longlong param_1) {
longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  plVar2 = *(longlong **)(param_1 + 0x20);
  *(int32_t *)(param_1 + 0x10) = 0;
  if ((ulonglong)plVar2[3] < 0x10) {
    lVar4 = plVar2[2] + (longlong)plVar2;
    plVar3 = plVar2;
  }
  else {
    lVar4 = *plVar2 + plVar2[2];
    plVar3 = (longlong *)*plVar2;
  }
  FUN_1800b7500(plVar2,lVar4 - (longlong)plVar3,(int32_t *)(param_1 + 0x28),
                ((lVar1 + param_1) - (param_1 + 0x28)) + 0x28);
  *(longlong **)(param_1 + 0x20) = plVar2;
  return;
}
}

