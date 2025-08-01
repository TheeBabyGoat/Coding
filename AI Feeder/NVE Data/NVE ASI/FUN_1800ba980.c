#include "FUN_1800ba980.h"
#include <stdint.h>
#include <stddef.h>

int32_t FUN_1800ba980(void) {
int *piVar1;
  char *local_18;
  int32_t local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801fb340) {
    FUN_180125398(&DAT_1801fb340);
    if (DAT_1801fb340 == -1) {
      local_18 = "41 83 7D 20 02 49 8B 47 30";
      local_10 = 0x1a;
      piVar1 = (int *)FUN_1800a68d0(&local_18);
      DAT_1801fb348 = (int32_t *)((longlong)piVar1 + (longlong)*piVar1 + 4);
      _Init_thread_footer(&DAT_1801fb340);
    }
  }
  return *DAT_1801fb348;
}
}

