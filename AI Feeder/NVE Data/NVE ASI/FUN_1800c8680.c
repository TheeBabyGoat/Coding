#include "FUN_1800c8680.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c8680(longlong *param_1) {
longlong local_res8;
  
  (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1d0,&local_res8);
  *(int32_t *)(local_res8 + 0x6c) = 0;
  *(int32_t *)(local_res8 + 0x74) = 0;
  *(int32_t *)(local_res8 + 0x7c) = 0;
  *(int32_t *)(local_res8 + 0x84) = 0;
  *(int32_t *)(local_res8 + 0x8c) = 0x3f800000;
  FUN_1800c9a40(local_res8 + 0x28);
  *(int32_t *)(local_res8 + 0x20) = 0;
  return;
}
}

