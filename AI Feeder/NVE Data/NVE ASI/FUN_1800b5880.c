#include "FUN_1800b5880.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b5880(param_2,*(int32_t **)param_1[7],*param_1,&local_28,uVar2,uVar1,param_3);
    if ((p_Var3 != (_Locimp *)0x0) &&
       (puVar5 = (int32_t *)(**(code **)(*(longlong *)p_Var3 + 0x10))(p_Var3),
       puVar5 != (int32_t *)0x0)) {
(**(code **)*puVar5)(puVar5,1);
    }
}

 FUN_1800b5880(param_2,*(int32_t **)param_1[7],*param_1,&local_28,uVar2,uVar1,param_3);
    if ((p_Var3 != (_Locimp *)0x0) &&
       (puVar5 = (int32_t *)(**(code **)(*(longlong *)p_Var3 + 0x10))(p_Var3),
       puVar5 != (int32_t *)0x0)) {
(**(code **)*puVar5)(puVar5,1);
    }
}

 FUN_1800b5880(&local_res8,*(int32_t **)param_1[6],*(longlong *)param_1[7],&local_28,uVar4,
                  uVar1,param_3);
    param_3 = (int32_t *)*extraout_RAX;
    if ((*(longlong *)param_1[10] != *(longlong *)param_1[0xb]) || (*(char *)param_1[0xc] != '\0')) {
uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
      if ((ulonglong)param_3[3] < param_3[2] + 1) {
        (**(code **)*param_3)(param_3,param_3[2] + 1);
      }
      *(int32_t *)(param_3[1] + param_3[2]) = uVar4;
      param_3[2] = param_3[2] + 1;
      *(int32_t *)param_1[0xc] = 0;
    }
}

int32_t * FUN_1800b5880(int32_t *param_1,int32_t *param_2,longlong param_3,int32_t *param_4,
             char param_5,uint param_6,int32_t *param_7) {
char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  ulonglong uVar9;
  char *pcVar10;
  
  iVar6 = 0;
  pcVar10 = (char *)*param_4;
  iVar4 = 0;
  pcVar3 = (char *)param_1;
  pcVar8 = pcVar10;
  if (0 < (int)param_6) {
    uVar9 = (ulonglong)param_6;
    pcVar3 = pcVar10;
    do {
      iVar4 = iVar4 + *pcVar3;
      pcVar8 = pcVar3 + 1;
      if (pcVar3 + 1 == pcVar10 + param_4[1]) {
        iVar6 = iVar6 + 1;
        pcVar8 = pcVar3;
      }
      pcVar3 = pcVar8;
      uVar9 = uVar9 - 1;
      pcVar8 = pcVar3;
    } while (uVar9 != 0);
  }
  pcVar10 = (char *)(param_3 - iVar4);
  if (param_2 != pcVar10) {
    do {
      cVar1 = *param_2;
      if ((ulonglong)param_7[3] < param_7[2] + 1) {
        (**(code **)*param_7)(param_7);
      }
      pcVar3 = (char *)param_7[2];
      param_2 = param_2 + 1;
      pcVar3[param_7[1]] = cVar1;
      param_7[2] = param_7[2] + 1;
    } while (param_2 != pcVar10);
  }
  if ((int)param_6 < 1) {
    *param_1 = param_7;
  }
  else {
    do {
      iVar4 = iVar6 + -1;
      if (iVar6 < 1) {
        pcVar8 = pcVar8 + -1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      if ((ulonglong)param_7[3] < param_7[2] + 1) {
        (**(code **)*param_7)(param_7);
      }
      pcVar3 = (char *)param_7[2];
      pcVar3[param_7[1]] = param_5;
      lVar5 = param_7[2] + 1;
      param_7[2] = lVar5;
      cVar1 = *pcVar8;
      for (pcVar7 = pcVar10; pcVar7 != pcVar10 + cVar1; pcVar7 = pcVar7 + 1) {
        cVar2 = *pcVar7;
        if ((ulonglong)param_7[3] < lVar5 + 1U) {
          (**(code **)*param_7)(param_7);
        }
        pcVar3 = (char *)param_7[2];
        pcVar3[param_7[1]] = cVar2;
        param_7[2] = param_7[2] + 1;
        lVar5 = param_7[2];
      }
      param_6 = param_6 - 1;
      pcVar10 = pcVar10 + *pcVar8;
    } while (0 < (int)param_6);
    *param_1 = param_7;
  }
  return (int32_t *)pcVar3;
}
}

 FUN_1800b5880(param_2,*(int32_t **)param_1[7],*param_1,&local_28,uVar2,uVar1,param_3);
    if ((p_Var3 != (_Locimp *)0x0) &&
       (puVar5 = (int32_t *)(**(code **)(*(longlong *)p_Var3 + 0x10))(p_Var3),
       puVar5 != (int32_t *)0x0)) {
(**(code **)*puVar5)(puVar5,1);
    }
}

