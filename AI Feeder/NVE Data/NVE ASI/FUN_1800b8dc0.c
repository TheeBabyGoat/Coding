#include "FUN_1800b8dc0.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b8dc0(param_1,&local_18,param_2);
  *param_1 = (int32_t **)&PTR_FUN_1801879a0;
  param_1[5] = (int32_t **)0x0;
  param_1[6] = (int32_t **)0x0;
  param_1[7] = (int32_t **)0x0;
  param_1[8] = (int32_t **)0x7;
  *(int32_t *)(param_1 + 5) = 0;
  param_1[9] = (int32_t **)0x0;
  param_1[10] = (int32_t **)0x0;
  param_1[0xb] = (int32_t **)0x0;
  param_1[0xc] = (int32_t **)0x7;
  *(int32_t *)(param_1 + 9) = 0;
  ppuVar1 = (int32_t **)"Unknown exception";
  if (param_1[1] != (int32_t **)0x0) {
ppuVar1 = param_1[1];
  }
}

void FUN_1800b8dc0(int32_t ***param_1,ulonglong *param_2,int32_t *param_3) {
code *pcVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int32_t **ppuVar4;
  int32_t ****ppppuVar5;
  int32_t *****pppppuVar6;
  int32_t ****ppppuVar7;
  int32_t auStack_c8 [32];
  int32_t ****local_a8;
  int32_t local_a0;
  int32_t local_98 [4];
  int32_t ****local_78;
  int32_t **ppuStack_70;
  int32_t **local_68;
  int32_t **ppuStack_60;
  int32_t ***local_58 [2];
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1801eb080 ^ (ulonglong)auStack_c8;
  local_a8 = (int32_t ****)param_1;
  ppppuVar5 = (int32_t ****)FUN_1800ba630(local_98,param_3);
  uVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_a8 = ppppuVar5;
  if (ppppuVar5[2] != (int32_t ***)0x0) {
    FUN_1800b9910((longlong *)ppppuVar5,(int32_t *)&DAT_18018796c,2);
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,local_58,uVar2 & 0xffffffff);
  ppppuVar7 = local_58;
  if (0xf < local_40) {
    ppppuVar7 = (int32_t ****)local_58[0];
  }
  FUN_1800b9910((longlong *)ppppuVar5,ppppuVar7,local_48);
  FUN_1800a6800((longlong *)local_58);
  local_78 = (int32_t ****)*ppppuVar5;
  ppuStack_70 = ppppuVar5[1];
  local_68 = ppppuVar5[2];
  ppuStack_60 = ppppuVar5[3];
  *(int32_t *)ppppuVar5 = 0;
  ppppuVar5[2] = (int32_t ***)0x0;
  ppppuVar5[3] = (int32_t ***)0xf;
  FUN_1800a6800((longlong *)ppppuVar5);
  local_a8 = &local_78;
  if ((int32_t ***)0xf < ppuStack_60) {
    local_a8 = local_78;
  }
  *param_1 = (int32_t **)std::exception::vftable;
  param_1[1] = (int32_t **)0x0;
  param_1[2] = (int32_t **)0x0;
  local_a0 = 1;
  __std_exception_copy((longlong *)&local_a8,(longlong *)(param_1 + 1));
  *param_1 = (int32_t **)std::runtime_error::vftable;
  if ((int32_t ***)0xf < ppuStack_60) {
    pppppuVar6 = (int32_t *****)local_78;
    if ((0xfff < (longlong)ppuStack_60 + 1U) &&
       (pppppuVar6 = (int32_t *****)local_78[-1],
       0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pppppuVar6)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pppppuVar6);
  }
  *param_1 = (int32_t **)std::_System_error::vftable;
  ppuVar4 = (int32_t **)param_2[1];
  param_1[3] = (int32_t **)*param_2;
  param_1[4] = ppuVar4;
  FUN_1801252c0(local_38 ^ (ulonglong)auStack_c8);
  return;
}
}

 FUN_1800b8dc0(param_1,(ulonglong *)&local_68,param_2);
  *param_1 = (int32_t **)&PTR_FUN_1801879a0;
  FUN_1800b9f10(param_1 + 5,param_3);
  param_1[0xb] = (int32_t **)0x0;
  param_1[0xc] = (int32_t **)0x0;
  param_1[9] = (int32_t **)0x0;
  param_1[10] = (int32_t **)0x0;
  param_1[0xb] = (int32_t **)0x0;
  param_1[0xc] = (int32_t **)0x7;
  *(int32_t *)(param_1 + 9) = 0;
  local_48[1] = 0;
  local_48[2] = _DAT_1801d8f60;
  uStack_30 = _UNK_1801d8f68;
  local_48[0] = 0;
  local_68 = (int32_t **)"Unknown exception";
  if (param_1[1] != (int32_t **)0x0) {
local_68 = param_1[1];
  }
}

