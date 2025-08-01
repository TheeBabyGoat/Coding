#include "FUN_1800b5f90.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b5f90(void) {
code *pcVar1;
  longlong local_28 [5];
  
  FUN_1800b5eb0(local_28);
  FUN_1801279a8(local_28,&DAT_1801e8df8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
}

