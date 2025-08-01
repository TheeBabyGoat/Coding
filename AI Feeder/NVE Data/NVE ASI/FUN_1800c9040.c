#include "FUN_1800c9040.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c9040(longlong *param_1,longlong *param_2) {
int32_t local_res8 [8];
  int32_t local_18 [2];
  int32_t *local_10;
  
  (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1f0,&local_10);
  if (local_10[2] != 0) {
    local_10 = (int32_t *)*local_10;
    local_res8[0] = 0xf0;
    local_18[0] = 0xc0;
    (**(code **)(*param_2 + 0x20))(param_2,1,&local_10,local_18,local_res8);
  }
  return;
}
}

