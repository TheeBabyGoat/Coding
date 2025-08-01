#include "FUN_1800b4bf0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b4bf0(int32_t *param_1,int32_t *param_2,longlong *param_3,int *param_4,
                  byte param_5) {
code *pcVar1;
  ulonglong uVar2;
  int32_t ****ppppuVar3;
  longlong lVar4;
  int32_t auStackY_1d8 [32];
  int32_t in_stack_fffffffffffffe48;
  int32_t ***local_1a8;
  byte *pbStack_1a0;
  int local_198 [2];
  int32_t ***local_190;
  int32_t uStack_188;
  int32_t local_180;
  ulonglong local_178;
  int32_t **local_168;
  int32_t *local_160;
  ulonglong local_158;
  int32_t local_150;
  int32_t ***local_148;
  int32_t local_140 [33];
  ulonglong local_38;
  
  local_38 = DAT_1801eb080 ^ (ulonglong)auStackY_1d8;
  if ((param_4[1] < 0) && (*param_4 < 1)) {
    local_1a8 = (int32_t ***)*param_3;
    pbStack_1a0 = (byte *)param_3[1];
    FUN_1800b4480(param_1,param_2,&local_1a8,param_5);
  }
  else {
    uStack_188 = 0;
    local_180 = 0;
    local_178 = 0xf;
    local_190 = (int32_t ****)0x0;
    local_160 = local_140;
    local_158 = 0;
    local_150 = 0x100;
    local_168 = &PTR_FUN_1801835f0;
    local_148 = &local_190;
    local_1a8 = (int32_t ***)*param_3;
    pbStack_1a0 = (byte *)param_3[1];
    FUN_1800b4480((int32_t *)local_198,&local_168,&local_1a8,param_5);
    uVar2 = local_158;
    local_168 = &PTR_FUN_1801835f0;
    if (local_158 != 0) {
      local_158 = 0;
      if (local_148[3] < (int32_t ***)0x10) {
        lVar4 = (longlong)local_148[2] + (longlong)local_148;
        ppppuVar3 = (int32_t ****)local_148;
      }
      else {
        lVar4 = (longlong)*local_148 + (longlong)local_148[2];
        ppppuVar3 = (int32_t ****)*local_148;
      }
      FUN_1800b7500(local_148,lVar4 - (longlong)ppppuVar3,local_140,uVar2);
    }
    local_198[0] = param_4[1];
    local_1a8 = &local_190;
    if (0xf < local_178) {
      local_1a8 = local_190;
    }
    pbStack_1a0 = (byte *)local_180;
    pbStack_1a0 = FUN_1800b5110(&local_1a8,local_198);
    local_1a8 = &local_190;
    FUN_1800b4a30(param_1,param_2,local_198[0],param_4,in_stack_fffffffffffffe48,&local_1a8);
    if (0xf < local_178) {
      ppppuVar3 = (int32_t ****)local_190;
      if ((0xfff < local_178 + 1) &&
         (ppppuVar3 = (int32_t ****)local_190[-1],
         0x1f < (ulonglong)((longlong)local_190 + (-8 - (longlong)ppppuVar3)))) {
        FUN_18012b7b4();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      thunk_FUN_18012d5e8(ppppuVar3);
    }
  }
  FUN_1801252c0(local_38 ^ (ulonglong)auStackY_1d8);
  return;
}
}

 FUN_1800b4bf0(param_1,param_2,&local_48,(int *)&local_38,0x22);
    return param_1;
  }
  local_res20[0] = *(int *)((longlong)param_4 + 4);
  if ((local_res20[0] < 0) && ((int)*param_4 < 1)) {
puVar3 = (int32_t *)*param_3;
    puVar2 = puVar3 + param_3[1];
    for (; puVar3 != puVar2; puVar3 = puVar3 + 1) {
      uVar1 = *puVar3;
      if ((ulonglong)param_2[3] < param_2[2] + 1) {
        (**(code **)*param_2)(param_2);
      }
      *(int32_t *)(param_2[2] + param_2[1]) = uVar1;
      param_2[2] = param_2[2] + 1;
    }
    *param_1 = param_2;
    return param_1;
  }
}

