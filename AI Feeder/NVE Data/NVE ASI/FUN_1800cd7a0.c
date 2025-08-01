#include "FUN_1800cd7a0.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800cd7a0(longlong *param_1,int32_t *param_2) {
longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_1800ce210(param_1);
  if ((*(byte *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) & 6) == 0) {
    plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,0,1,1);
    plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  else {
    *param_2 = 0xffffffffffffffff;
    param_2[1] = 0;
    param_2[2] = 0;
    plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return param_2;
}
}

