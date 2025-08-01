#include "FUN_1800a96c0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a96c0(int32_t param_1,int32_t param_2,longlong *param_3) {
char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800a96c0(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    thunk_FUN_18012d5e8(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}
}

