#include "FUN_1800c79c0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c79c0(longlong *param_1) {
int32_t (*pauVar1) [32];
  longlong *plVar2;
  int32_t (*pauVar3) [32];
  ulonglong uVar4;
  longlong local_res8;
  
  FUN_1800ca000(param_1);
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
  (**(code **)(*plVar2 + 8))(plVar2,&DAT_1801cc1e0,&local_res8);
  pauVar1 = *(int32_t (**) [32])(local_res8 + 0x10);
  pauVar3 = thunk_FUN_180123f80(*(int32_t (**) [32])(local_res8 + 8),pauVar1,(ulonglong)param_1);
  if ((pauVar3 != pauVar1) &&
     (pauVar3 = FUN_180124290(pauVar3,pauVar1,(ulonglong)param_1), pauVar3 != pauVar1)) {
    uVar4 = *(longlong *)(local_res8 + 0x10) - (longlong)pauVar1;
    FUN_180150fd0((int32_t *)pauVar3,(int32_t *)pauVar1,uVar4);
    *(ulonglong *)(local_res8 + 0x10) = uVar4 + (longlong)pauVar3;
  }
  return;
}
}

