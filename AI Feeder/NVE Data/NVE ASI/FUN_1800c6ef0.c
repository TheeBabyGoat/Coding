#include "FUN_1800c6ef0.h"
#include <stdint.h>
#include <stddef.h>

int32_t FUN_1800c6ef0(int32_t param_1) {
if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801f3a90) {
    FUN_180125398(&DAT_1801f3a90);
    if (DAT_1801f3a90 == -1) {
      DAT_1801f3a98 = param_1;
      _Init_thread_footer(&DAT_1801f3a90);
    }
  }
  return DAT_1801f3a98;
}
}

