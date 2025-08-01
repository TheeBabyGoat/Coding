#include "FUN_1800a6430.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a6430(void) {
DAT_1801fce58 = operator_new(0x20);
  *(void **)DAT_1801fce58 = DAT_1801fce58;
  *(void **)((longlong)DAT_1801fce58 + 8) = DAT_1801fce58;
  *(void **)((longlong)DAT_1801fce58 + 0x10) = DAT_1801fce58;
  *(int32_t *)((longlong)DAT_1801fce58 + 0x18) = 0x101;
  atexit((_func_5014 *)&LAB_180156580);
  return;
}
}

