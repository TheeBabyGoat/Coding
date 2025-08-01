#include "FUN_1800a6470.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a6470(void) {
DAT_1801fce68 = operator_new(0x20);
  *(void **)DAT_1801fce68 = DAT_1801fce68;
  *(void **)((longlong)DAT_1801fce68 + 8) = DAT_1801fce68;
  *(void **)((longlong)DAT_1801fce68 + 0x10) = DAT_1801fce68;
  *(int32_t *)((longlong)DAT_1801fce68 + 0x18) = 0x101;
  atexit((_func_5014 *)&LAB_180156570);
  return;
}
}

