#include "FUN_1800baa10.h"
#include <stdint.h>
#include <stddef.h>

int32_t FUN_1800baa10(void) {
int *piVar1;
  char *local_18;
  int32_t local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801fb350) {
    FUN_180125398(&DAT_1801fb350);
    if (DAT_1801fb350 == -1) {
      local_18 = "0F 57 C0 8D 0C 40 8B 05";
      local_10 = 0x17;
      piVar1 = (int *)FUN_1800a68d0(&local_18);
      DAT_1801fb358 = (int32_t *)((longlong)piVar1 + (longlong)*piVar1 + 4);
      _Init_thread_footer(&DAT_1801fb350);
    }
  }
  return *DAT_1801fb358;
}
}

