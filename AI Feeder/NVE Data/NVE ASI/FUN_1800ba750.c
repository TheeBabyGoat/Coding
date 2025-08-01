#include "FUN_1800ba750.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800ba750(int32_t *param_1) {
longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 4) {
    FUN_1800a6800(plVar2);
  }
  return;
}
}

