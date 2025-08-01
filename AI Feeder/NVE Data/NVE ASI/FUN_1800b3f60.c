#include "FUN_1800b3f60.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b3f60(longlong param_1) {
int32_t *puVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  
  if (*(longlong *)(param_1 + 0x10) == 0x100) {
    *(int32_t *)(param_1 + 0x10) = 0;
    puVar1 = *(int32_t **)(param_1 + 0x20);
    puVar3 = puVar1;
    puVar2 = puVar1;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar3 = (int32_t *)*puVar1;
      puVar2 = (int32_t *)*puVar1;
    }
    FUN_1800b7500(puVar1,(longlong)puVar2 + (puVar1[2] - (longlong)puVar3),
                  (int32_t *)(param_1 + 0x28),0x100);
    *(int32_t **)(param_1 + 0x20) = puVar1;
  }
  return;
}
}

