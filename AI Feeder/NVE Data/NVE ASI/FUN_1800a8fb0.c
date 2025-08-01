#include "FUN_1800a8fb0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a8fb0(longlong *param_1) {
int32_t *puVar1;
  int32_t *puVar2;
  LPVOID pvVar3;
  code *pcVar4;
  
  puVar1 = (int32_t *)*param_1;
  *(int32_t *)puVar1[1] = 0;
  puVar1 = (int32_t *)*puVar1;
  while (puVar1 != (int32_t *)0x0) {
    puVar2 = (int32_t *)*puVar1;
    FUN_1800a6c20((longlong)(puVar1 + 3));
    if (0x1f < (ulonglong)((longlong)puVar1 + (-8 - (longlong)puVar1[-1]))) goto LAB_1800a903c;
    thunk_FUN_18012d5e8((LPVOID)puVar1[-1]);
    puVar1 = puVar2;
  }
  pvVar3 = *(LPVOID *)(*param_1 + -8);
  if ((*param_1 - (longlong)pvVar3) - 8U < 0x20) {
    thunk_FUN_18012d5e8(pvVar3);
    return;
  }
LAB_1800a903c:
  FUN_18012b7b4();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}
}

