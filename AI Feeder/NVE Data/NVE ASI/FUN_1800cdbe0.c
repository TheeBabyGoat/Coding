#include "FUN_1800cdbe0.h"
#include <stdint.h>
#include <stddef.h>

ios_base * FUN_1800cdbe0(ios_base *param_1,uint param_2) {
ios_base *piVar1;
  
  piVar1 = param_1 + -0xb0;
  *(int32_t ***)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0xb0) =
       &PTR_LAB_1801cc4b8;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0xb4) =
       *(int *)(*(longlong *)piVar1 + 4) + -0xb0;
  FUN_1800cd640((longlong *)(param_1 + -0xa0));
  *(int32_t ***)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0xb0) =
       &PTR_LAB_1801cc4b0;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0xb4) =
       *(int *)(*(longlong *)piVar1 + 4) + -0x18;
  *(int32_t ***)param_1 = &PTR_LAB_1801cc4d0;
  std::ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_18012d5e8(piVar1);
  }
  return piVar1;
}
}

