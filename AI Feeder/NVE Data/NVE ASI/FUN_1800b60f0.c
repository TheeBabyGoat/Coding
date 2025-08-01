#include "FUN_1800b60f0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b60f0(longlong param_1) {
LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return;
}
}

