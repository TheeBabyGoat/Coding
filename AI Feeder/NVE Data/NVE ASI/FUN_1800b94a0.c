#include "FUN_1800b94a0.h"
#include <stdint.h>
#include <stddef.h>

int32_t FUN_1800b94a0(longlong *param_1,int32_t param_2,int *param_3) {
int *piVar1;
  uint7 uVar2;
  int32_t local_18 [16];
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x18))(param_1,local_18,param_2);
  uVar2 = (uint7)((ulonglong)piVar1 >> 8);
  if ((*(longlong *)(*(longlong *)(piVar1 + 2) + 8) == *(longlong *)(*(longlong *)(param_3 + 2) + 8)
      ) && (*piVar1 == *param_3)) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}
}

