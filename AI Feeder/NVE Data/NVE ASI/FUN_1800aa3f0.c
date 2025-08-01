#include "FUN_1800aa3f0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800aa3f0(longlong param_1) {
longlong *plVar1;
  LPVOID pvVar2;
  code *pcVar3;
  LPVOID pvVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  for (plVar5 = *(longlong **)(param_1 + 0x18); plVar5 != plVar1; plVar5 = plVar5 + 4) {
    FUN_1800ba040(plVar5);
  }
  pvVar2 = *(LPVOID *)(param_1 + 8);
  pvVar4 = pvVar2;
  if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 5)) &&
     (pvVar4 = *(LPVOID *)((longlong)pvVar2 + -8),
     0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
    FUN_18012b7b4();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  thunk_FUN_18012d5e8(pvVar4);
  return;
}
}

