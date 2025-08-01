#include "_register.h"
#include <stdint.h>
#include <stddef.h>

void _register_onexit_function(int32_t param_1,int32_t param_2) {
int32_t local_res8;
  int32_t local_res10;
  int32_t local_res18 [8];
  int local_res20 [2];
  int local_28 [2];
  int32_t *local_20;
  int32_t *local_18;
  
  local_20 = &local_res8;
  local_18 = &local_res10;
  local_res20[0] = 2;
  local_28[0] = 2;
  local_res8 = param_1;
  local_res10 = param_2;
  operator()<>(local_res18,local_28,&local_20,local_res20);
  return;
}
}

