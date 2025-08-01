#include "FUN_1800cdd30.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800cdd30(longlong *param_1) {
longlong *plVar1;
  int iVar2;
  
  iVar2 = __uncaught_exceptions();
  if (iVar2 == 0) {
    FUN_1800ce150((longlong *)*param_1);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}
}

