#include "FUN_1800ba200.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800ba200(int32_t *param_1,longlong param_2) {
int32_t uVar1;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(int32_t *)(param_2 + 0x20);
  param_1[3] = *(int32_t *)(param_2 + 0x18);
  param_1[4] = uVar1;
  return param_1;
}
}

