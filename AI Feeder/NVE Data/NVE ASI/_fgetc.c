#include "_fgetc.h"
#include <stdint.h>
#include <stddef.h>

ulonglong _fgetc_nolock(int32_t *param_1) {
int *piVar1;
  ulong *puVar2;
  ulonglong uVar3;
  
  if (param_1 == (int32_t *)0x0) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_18012b794();
    uVar3 = 0xffffffff;
  }
  else {
    piVar1 = (int *)(param_1 + 2);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar3 = FUN_18013eb04(param_1);
      return uVar3;
    }
    uVar3 = (ulonglong)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
  }
  return uVar3;
}
}

