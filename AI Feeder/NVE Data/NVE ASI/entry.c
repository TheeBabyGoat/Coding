#include "entry.h"
#include <stdint.h>
#include <stddef.h>

void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3) {
if (param_2 == 1) {
    __security_init_cookie();
  }
  FUN_180125c54(param_1,param_2,param_3);
  return;
}
}

