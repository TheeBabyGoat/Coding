#include "FUN_1800c6b80.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c6b80(longlong *param_1) {
LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  pvVar1 = (LPVOID)*param_1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar1)) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
}

