#include "FUN_1800cbea0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800cbea0(void) {
longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar2 = *(longlong **)(lVar1 + 0x130);
  if (plVar2 != *(longlong **)(lVar1 + 0x138)) {
    FUN_1800c6090(plVar2,*(longlong **)(lVar1 + 0x138));
    *(int32_t *)(lVar1 + 0x138) = *(int32_t *)(lVar1 + 0x130);
  }
  return;
}
}

