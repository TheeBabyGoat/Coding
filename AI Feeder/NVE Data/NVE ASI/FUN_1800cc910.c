#include "FUN_1800cc910.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800cc910(longlong *param_1) {
*(int32_t ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_1801cc4b8;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xb0;
  FUN_1800cd640(param_1 + 2);
  *(int32_t ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_1801cc4b0;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  *(int32_t ***)(param_1 + 0x16) = &PTR_LAB_1801cc4d0;
  std::ios_base::_Ios_base_dtor((ios_base *)(param_1 + 0x16));
  return;
}
}

