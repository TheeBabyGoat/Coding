#include "FUN_1800b6140.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b6140(longlong param_1) {
int32_t *puVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    puVar1 = (int32_t *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if (puVar1 != (int32_t *)0x0) {
                    
                    
      (**(code **)*puVar1)(puVar1,1,*(code **)*puVar1);
      return;
    }
  }
  return;
}
}

