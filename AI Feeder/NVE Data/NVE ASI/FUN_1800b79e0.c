#include "FUN_1800b79e0.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800b79e0(int32_t *param_1,longlong param_2) {
longlong local_18;
  int32_t local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  __std_exception_copy(&local_18,param_1 + 1);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}
}

