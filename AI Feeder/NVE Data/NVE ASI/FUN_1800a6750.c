#include "FUN_1800a6750.h"
#include <stdint.h>
#include <stddef.h>

longlong FUN_1800a6750(void) {
int *piVar1;
  char *local_18;
  int32_t local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801f53dc) {
    FUN_180125398(&DAT_1801f53dc);
    if (DAT_1801f53dc == -1) {
      local_18 = "10 79 40 F3 44 0F 10 49 48";
      local_10 = 0x1a;
      piVar1 = (int *)FUN_1800a68d0(&local_18);
      DAT_1801f53e0 = (longlong)piVar1 + (longlong)*piVar1 + 4;
      _Init_thread_footer(&DAT_1801f53dc);
    }
  }
  return DAT_1801f53e0;
}
}

