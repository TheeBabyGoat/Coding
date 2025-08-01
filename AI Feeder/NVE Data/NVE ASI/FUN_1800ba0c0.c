#include "FUN_1800ba0c0.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800ba0c0(int32_t *param_1,longlong param_2) {
int32_t uVar1;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(int32_t *)(param_2 + 0x20);
  param_1[3] = *(int32_t *)(param_2 + 0x18);
  param_1[4] = uVar1;
  *param_1 = &PTR_FUN_1801879a0;
  FUN_1800b9f10(param_1 + 5,(int32_t *)(param_2 + 0x28));
  FUN_1800b9f10(param_1 + 9,(int32_t *)(param_2 + 0x48));
  FUN_1800ba630(param_1 + 0xd,(int32_t *)(param_2 + 0x68));
  return param_1;
}
}

