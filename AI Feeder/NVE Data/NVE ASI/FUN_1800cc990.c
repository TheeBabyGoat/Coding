#include "FUN_1800cc990.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800cc990(longlong param_1,longlong param_2) {
char cVar1;
  longlong *plVar2;
  
  plVar2 = FUN_1800ce6c0(param_2);
  cVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
  if (cVar1 != '\0') {
    *(int32_t *)(param_1 + 0x68) = 0;
    return;
  }
  *(longlong **)(param_1 + 0x68) = plVar2;
  *(int32_t **)(param_1 + 0x18) = (int32_t *)(param_1 + 8);
  *(int32_t **)(param_1 + 0x20) = (int32_t *)(param_1 + 0x10);
  *(int32_t **)(param_1 + 0x38) = (int32_t *)(param_1 + 0x28);
  *(int32_t **)(param_1 + 0x40) = (int32_t *)(param_1 + 0x30);
  *(int32_t **)(param_1 + 0x50) = (int32_t *)(param_1 + 0x48);
  *(int32_t **)(param_1 + 0x58) = (int32_t *)(param_1 + 0x4c);
  *(int32_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x4c) = 0;
  *(int32_t *)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x28) = 0;
  *(int32_t *)(param_1 + 0x48) = 0;
  return;
}
}

