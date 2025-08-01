#include "FUN_1800a8f50.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a8f50(longlong *param_1) {
char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_1800a9420(param_1,param_1,(longlong *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    thunk_FUN_18012d5e8(plVar3);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  thunk_FUN_18012d5e8((LPVOID)*param_1);
  return;
}
}

