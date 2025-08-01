#include "fegetenv.h"
#include <stdint.h>
#include <stddef.h>

int32_t fegetenv(uint *param_1) {
uint uVar1;
  
  uVar1 = FUN_180147770();
  *param_1 = uVar1;
  uVar1 = FUN_180147854();
  param_1[1] = uVar1;
  return 0;
}
}

 fegetenv((uint *)local_7b8);
  local_7b0 = (local_7b8[0] & 0x1f) != 0x1f;
  if ((bool)local_7b0) {
feholdexcept((int32_t *)local_7b8);
  }
}

