#include "FUN_1800c9a40.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c9a40(longlong param_1) {
int32_t *puVar1;
  int32_t *puVar2;
  int32_t local_res8;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar1 = *(int32_t **)(param_1 + 8);
    *(int32_t *)puVar1[1] = 0;
    puVar1 = (int32_t *)*puVar1;
    while (puVar1 != (int32_t *)0x0) {
      puVar2 = (int32_t *)*puVar1;
      FUN_1800cb100(puVar1 + 0xc);
      thunk_FUN_18012d5e8(puVar1);
      puVar1 = puVar2;
    }
    *(int32_t *)*(int32_t *)(param_1 + 8) = *(int32_t *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(int32_t *)(param_1 + 0x10) = 0;
    local_res8 = *(int32_t *)(param_1 + 8);
    FUN_1800a9480(*(int32_t **)(param_1 + 0x18),*(int32_t **)(param_1 + 0x20),&local_res8);
  }
  return;
}
}

