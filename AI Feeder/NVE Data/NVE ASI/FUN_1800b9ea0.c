#include "FUN_1800b9ea0.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800b9ea0(int32_t *param_1,uint param_2) {
FUN_1800a6800(param_1 + 0xd);
  FUN_1800ba040(param_1 + 9);
  FUN_1800ba040(param_1 + 5);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_18012d5e8(param_1);
  }
  return param_1;
}
}

