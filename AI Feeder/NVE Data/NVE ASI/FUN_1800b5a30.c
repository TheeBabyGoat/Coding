#include "FUN_1800b5a30.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800b5a30(int32_t *param_1,uint param_2) {
*param_1 = std::numpunct<char>::vftable;
  FUN_18012d5e8((LPVOID)param_1[2]);
  FUN_18012d5e8((LPVOID)param_1[4]);
  FUN_18012d5e8((LPVOID)param_1[5]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_18012d5e8(param_1);
  }
  return param_1;
}
}

