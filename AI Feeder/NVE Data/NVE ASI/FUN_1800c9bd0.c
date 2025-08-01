#include "FUN_1800c9bd0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c9bd0(longlong *param_1) {
int32_t *puVar1;
  int32_t *puVar2;
  
  puVar1 = (int32_t *)*param_1;
  *(int32_t *)puVar1[1] = 0;
  puVar1 = (int32_t *)*puVar1;
  while (puVar1 != (int32_t *)0x0) {
    puVar2 = (int32_t *)*puVar1;
    FUN_1800cb100(puVar1 + 0xc);
    thunk_FUN_18012d5e8(puVar1);
    puVar1 = puVar2;
  }
  thunk_FUN_18012d5e8((LPVOID)*param_1);
  return;
}
}

