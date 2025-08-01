#include "FUN_1800ba840.h"
#include <stdint.h>
#include <stddef.h>

char * FUN_1800ba840(longlong param_1) {
char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}
}

