#include "FUN_1800b3990.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b3990(void) {
code *pcVar1;
  
  FUN_18012b7b4();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
}

