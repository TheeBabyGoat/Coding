#include "FUN_1800b37b0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b37b0(int32_t *param_1,int32_t *param_2,ulonglong param_3,int *param_4) {
char cVar1;
  int32_t uVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  int32_t *puVar6;
  longlong lVar7;
  int32_t auStackY_d8 [32];
  int32_t uVar8;
  int32_t in_stack_ffffffffffffff4c;
  char local_a8 [4];
  int32_t local_a4;
  int32_t local_a2;
  int local_a0 [2];
  char *local_98;
  int32_t uStack_90;
  int32_t *local_88;
  char *local_80;
  int *local_78;
  int *local_70;
  char *local_68;
  char **local_60;
  char *local_58;
  int32_t uStack_50;
  char local_48 [16];
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1801eb080 ^ (ulonglong)auStackY_d8;
  uVar8 = 0x10;
  FUN_1800b3370((longlong *)&local_58,(int32_t *)local_48,(longlong)local_38,param_3,0x10);
  local_98 = local_58;
  uStack_90 = uStack_50;
  local_a4 = 0x7830;
  local_a0[0] = ((int)local_58 - (int)local_48) + 2;
  if ((char)param_4[2] == 'P') {
    local_a4 = 0x5830;
    for (pcVar5 = local_48; pcVar5 != local_58; pcVar5 = pcVar5 + 1) {
      cVar1 = *pcVar5;
      if (('`' < cVar1) && (cVar1 < '{')) {
        *pcVar5 = cVar1 + -0x20;
      }
    }
  }
  if ((*(char *)((longlong)param_4 + 0xd) == '\0') || (*(char *)((longlong)param_4 + 9) != '\0')) {
    local_88 = &local_a4;
    local_a8[0] = '\0';
    local_80 = local_a8;
    local_78 = local_a0;
    local_68 = local_48;
    local_60 = &local_98;
    local_70 = param_4;
    FUN_1800b3590(param_1,param_2,local_a0[0],param_4,CONCAT44(in_stack_ffffffffffffff4c,uVar8),
                  &local_88);
  }
  else {
    puVar6 = &local_a4;
    local_a8[0] = '\x01';
    do {
      uVar2 = *(int32_t *)puVar6;
      if ((ulonglong)param_2[3] < param_2[2] + 1) {
        (**(code **)*param_2)(param_2);
      }
      puVar6 = (int32_t *)((longlong)puVar6 + 1);
      *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
      lVar3 = param_2[2] + 1;
      param_2[2] = lVar3;
    } while (puVar6 != &local_a2);
    if (((local_a8[0] != '\0') && (local_a0[0] < *param_4)) &&
       (iVar4 = *param_4 - local_a0[0], lVar7 = (longlong)iVar4, 0 < iVar4)) {
      do {
        if ((ulonglong)param_2[3] < lVar3 + 1U) {
          (**(code **)*param_2)(param_2);
        }
        lVar7 = lVar7 + -1;
        *(int32_t *)(param_2[1] + param_2[2]) = 0x30;
        param_2[2] = param_2[2] + 1;
        lVar3 = param_2[2];
      } while (0 < lVar7);
    }
    FUN_1800b6180(param_1,local_48,local_98,param_2);
  }
  FUN_1801252c0(local_38[0] ^ (ulonglong)auStackY_d8);
  return;
}
}

