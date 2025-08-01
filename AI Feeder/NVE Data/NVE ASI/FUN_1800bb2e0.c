#include "FUN_1800bb2e0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800bb2e0(void) {
int32_t *puVar1;
  int32_t *puVar2;
  
  puVar1 = DAT_1801ec6e0;
  puVar2 = DAT_1801ec6d8;
  if (DAT_1801ec6d8 != DAT_1801ec6e0) {
    do {
      (*(code *)*puVar2)();
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
  }
  return;
}
}

