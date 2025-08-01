#include "FUN_1800ca8d0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800ca8d0(ulonglong *param_1,ulonglong param_2) {
code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  if (param_2 < 0x666666666666667) {
    uVar4 = param_2 * 0x28;
    if (uVar4 == 0) {
      pvVar3 = (void *)0x0;
    }
    else if (uVar4 < 0x1000) {
      pvVar3 = operator_new(uVar4);
    }
    else {
      if (uVar4 + 0x27 <= uVar4) goto LAB_1800ca94b;
      pvVar2 = operator_new(uVar4 + 0x27);
      if (pvVar2 == (void *)0x0) {
        FUN_18012b7b4();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar3 - 8) = pvVar2;
    }
    *param_1 = (ulonglong)pvVar3;
    param_1[1] = (ulonglong)pvVar3;
    param_1[2] = (ulonglong)((longlong)pvVar3 + uVar4);
    return;
  }
LAB_1800ca94b:
  FUN_1800ba8a0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
}

