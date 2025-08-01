#include "FUN_1800ca750.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800ca750(longlong param_1) {
if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1800cb100((longlong *)(*(longlong *)(param_1 + 8) + 0x60));
  }
  if (*(LPVOID *)(param_1 + 8) != (LPVOID)0x0) {
    thunk_FUN_18012d5e8(*(LPVOID *)(param_1 + 8));
    return;
  }
  return;
}
}

