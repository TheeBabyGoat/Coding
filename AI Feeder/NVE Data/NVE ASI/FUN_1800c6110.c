#include "FUN_1800c6110.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c6110(int32_t param_1,int32_t param_2,longlong *param_3) {
char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800c6110(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_1800a6800(param_3 + 4);
    thunk_FUN_18012d5e8(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}
}

