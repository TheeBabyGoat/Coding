#include "FUN_1800b9e60.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b9e60(int32_t *param_1) {
FUN_1800a6800(param_1 + 0xd);
  FUN_1800ba040(param_1 + 9);
  FUN_1800ba040(param_1 + 5);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}
}

