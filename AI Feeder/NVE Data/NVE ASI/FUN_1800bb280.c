#include "FUN_1800bb280.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800bb280(int32_t param_1) {
int32_t *puVar1;
  int32_t *puVar2;
  
  puVar1 = DAT_1801ec6c8;
  DAT_1801f3ad8 = 0;
  puVar2 = DAT_1801ec6c0;
  if (DAT_1801ec6c0 != DAT_1801ec6c8) {
    do {
      (*(code *)*puVar2)(param_1);
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
  }
  return;
}
}

