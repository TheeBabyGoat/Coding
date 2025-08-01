#include "FUN_1800bacc0.h"
#include <stdint.h>
#include <stddef.h>

longlong FUN_1800bacc0(void) {
int *piVar1;
  char *local_18;
  int32_t local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801f3a48) {
    FUN_180125398(&DAT_1801f3a48);
    if (DAT_1801f3a48 == -1) {
      local_18 = "BA 95 C8 C9 AA";
      local_10 = 0xe;
      piVar1 = (int *)FUN_1800a68d0(&local_18);
      DAT_1801f3a50 = (longlong)piVar1 + (longlong)*piVar1 + 4;
      _Init_thread_footer(&DAT_1801f3a48);
    }
  }
  return DAT_1801f3a50;
}
}

