#include "FUN_1800a6d10.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a6d10(longlong param_1) {
LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  pvVar1 = *(LPVOID *)(param_1 + 0x18);
  if (pvVar1 != (LPVOID)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (*(longlong *)(param_1 + 0x28) - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
    *(int32_t *)(param_1 + 0x18) = 0;
    *(int32_t *)(param_1 + 0x20) = 0;
    *(int32_t *)(param_1 + 0x28) = 0;
  }
  FUN_1800a8fb0((longlong *)(param_1 + 8));
  return;
}
}

