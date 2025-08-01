#include "FUN_1800bac30.h"
#include <stdint.h>
#include <stddef.h>

int32_t FUN_1800bac30(void) {
int *piVar1;
  char *local_18;
  int32_t local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801fb380) {
    FUN_180125398(&DAT_1801fb380);
    if (DAT_1801fb380 == -1) {
      local_18 = "F3 0F 58 83 00 01 00 00 0F 2F C6";
      local_10 = 0x20;
      piVar1 = (int *)FUN_1800a68d0(&local_18);
      DAT_1801fb388 = (int32_t *)((longlong)piVar1 + (longlong)*piVar1 + 4);
      _Init_thread_footer(&DAT_1801fb380);
    }
  }
  return *DAT_1801fb388;
}
}

