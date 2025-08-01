#include "FUN_1800de0d0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800de0d0(longlong param_1) {
longlong lVar1;
  code *pcVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1800a6c20(*(longlong *)(param_1 + 8) + 0x18);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    if ((lVar1 - (longlong)*(LPVOID *)(lVar1 + -8)) - 8U < 0x20) {
      thunk_FUN_18012d5e8(*(LPVOID *)(lVar1 + -8));
      return;
    }
    FUN_18012b7b4();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}
}

