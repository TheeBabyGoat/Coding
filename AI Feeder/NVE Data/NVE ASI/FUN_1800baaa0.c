#include "FUN_1800baaa0.h"
#include <stdint.h>
#include <stddef.h>

int32_t FUN_1800baaa0(void) {
int *piVar1;
  char *local_18;
  int32_t local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801fb360) {
    FUN_180125398(&DAT_1801fb360);
    if (DAT_1801fb360 == -1) {
      local_18 = "8A 48 03 33 FF";
      local_10 = 0xe;
      piVar1 = (int *)FUN_1800a68d0(&local_18);
      DAT_1801fb368 = (int32_t *)((longlong)piVar1 + (longlong)*piVar1 + 4);
      _Init_thread_footer(&DAT_1801fb360);
    }
  }
  return *DAT_1801fb368;
}
}

