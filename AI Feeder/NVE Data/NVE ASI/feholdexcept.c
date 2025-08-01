#include "feholdexcept.h"
#include <stdint.h>
#include <stddef.h>

int32_t feholdexcept(int32_t *param_1) {
bool bVar1;
  int32_t uVar2;
  int32_t extraout_var;
  uint local_res10;
  int32_t uStackX_14;
  
  local_res10 = 0;
  uStackX_14 = 0;
  uVar2 = fegetenv(&local_res10);
  if ((int)uVar2 == 0) {
    uVar2 = CONCAT44(uStackX_14,local_res10);
    local_res10 = local_res10 | 0x1f;
    *param_1 = uVar2;
    bVar1 = FUN_18014c230(&local_res10);
    if ((int)CONCAT71(extraout_var,bVar1) == 0) {
      FUN_18014ca28();
      return 0;
    }
  }
  return 1;
}
}

 feholdexcept((int32_t *)local_7b8);
  }
  puVar1 = local_7d8;
  *(char **)(param_4 + 2) = param_5;
  uVar4 = 0x20;
  if ((longlong)local_7d8 < 0) {
uVar4 = 0x2d;
  }
}

