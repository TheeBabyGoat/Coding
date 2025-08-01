#include "FUN_1800bb320.h"
#include <stdint.h>
#include <stddef.h>

int32_t FUN_1800bb320(void) {
longlong lVar1;
  int32_t uVar2;
  
  uVar2 = (*DAT_1801fb460)();
  lVar1 = *DAT_1801fb468;
  if (lVar1 != 0) {
    _DAT_1801fb450 = *(int32_t *)(lVar1 + 0x6d0);
    DAT_1801fb458 = *(int32_t *)(lVar1 + 0x6d8);
    _DAT_1801fb440 = *(int32_t *)(lVar1 + 0x6e0);
    DAT_1801fb448 = *(int32_t *)(lVar1 + 0x6e8);
  }
  return uVar2;
}
}

