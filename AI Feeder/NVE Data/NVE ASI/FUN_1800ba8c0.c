#include "FUN_1800ba8c0.h"
#include <stdint.h>
#include <stddef.h>

void * FUN_1800ba8c0(int32_t param_1,ulonglong param_2) {
code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  if (param_2 < 0x800000000000000) {
    uVar4 = param_2 * 0x20;
    if (uVar4 == 0) {
      return (void *)0x0;
    }
    if (uVar4 < 0x1000) {
      pvVar2 = operator_new(uVar4);
      return pvVar2;
    }
    if (uVar4 < uVar4 + 0x27) {
      pvVar2 = operator_new(uVar4 + 0x27);
      if (pvVar2 != (void *)0x0) {
        pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)pvVar3 + -8) = pvVar2;
        return pvVar3;
      }
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      pvVar2 = (void *)(*pcVar1)();
      return pvVar2;
    }
  }
  FUN_1800ba8a0();
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}
}

