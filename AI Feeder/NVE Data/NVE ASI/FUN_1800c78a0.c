#include "FUN_1800c78a0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c78a0(longlong *param_1) {
int32_t *puVar1;
  
  puVar1 = (int32_t *)operator_new(0x20);
  *(int32_t *)((longlong)puVar1 + 0x19) = 0;
  *(int32_t *)((longlong)puVar1 + 0x1d) = 0;
  *(int32_t *)((longlong)puVar1 + 0x1f) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(int32_t *)(puVar1 + 3) = 0;
                    
                    
  (**(code **)(*param_1 + 0x10))(param_1,&DAT_1801cc1f0);
  return;
}
}

