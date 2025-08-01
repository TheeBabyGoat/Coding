#include "FUN_1800a67e0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a67e0(longlong param_1) {
int32_t *puVar1;
  int32_t uVar2;
  
  puVar1 = *(int32_t **)(param_1 + 0x18);
  uVar2 = (**(code **)(param_1 + 0x10))();
  *puVar1 = uVar2;
  return;
}
}

