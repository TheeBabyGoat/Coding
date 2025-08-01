#include "FUN_1800ac210.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800ac210(longlong *param_1,int32_t *param_2,int32_t *param_3) {
uint uVar1;
  int32_t uVar2;
  _Locimp *p_Var3;
  longlong *plVar4;
  int32_t *puVar5;
  int iVar6;
  int32_t *puVar7;
  longlong lVar8;
  int32_t *puVar9;
  int32_t local_38 [8];
  _Locimp *local_30;
  longlong local_28;
  longlong local_20;
  
  if (*(char *)(param_1[1] + 10) == '\x01') {
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = 0x2b;
  }
  else {
    if (*(char *)(param_1[1] + 10) != '\x03') goto LAB_1800ac28b;
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = 0x20;
  }
  param_3[2] = param_3[2] + 1;
LAB_1800ac28b:
  puVar7 = *(int32_t **)param_1[3];
  puVar9 = puVar7 + ((int32_t *)param_1[3])[1];
  for (; puVar7 != puVar9; puVar7 = puVar7 + 1) {
    uVar2 = *puVar7;
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[2] + param_3[1]) = uVar2;
    param_3[2] = param_3[2] + 1;
  }
  if (*(char *)param_1[4] != '\0') {
    if ((*(int *)param_1[5] < *(int *)param_1[1]) &&
       (iVar6 = *(int *)param_1[1] - *(int *)param_1[5], lVar8 = (longlong)iVar6, 0 < iVar6)) {
      do {
        if ((ulonglong)param_3[3] < param_3[2] + 1) {
          (**(code **)*param_3)(param_3);
        }
        *(int32_t *)(param_3[2] + param_3[1]) = 0x30;
        param_3[2] = param_3[2] + 1;
        lVar8 = lVar8 + -1;
      } while (0 < lVar8);
    }
  }
  uVar1 = *(uint *)param_1[6];
  if ((int)uVar1 < 1) {
    FUN_1800b6180(param_2,*(int32_t **)param_1[7],(int32_t *)*param_1,param_3);
  }
  else {
    if (*(longlong *)param_1[9] == 0) {
      p_Var3 = FUN_180124548('\x01');
      local_30 = p_Var3;
    }
    else {
      p_Var3 = *(_Locimp **)(*(longlong *)param_1[9] + 8);
      local_30 = p_Var3;
      (**(code **)(*(longlong *)p_Var3 + 8))(p_Var3);
    }
    plVar4 = FUN_1800b5fd0((longlong)local_38);
    uVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
    plVar4 = (longlong *)param_1[8];
    local_28 = (longlong)plVar4;
    if (0xf < (ulonglong)plVar4[3]) {
      local_28 = *plVar4;
    }
    local_20 = plVar4[2];
    FUN_1800b5880(param_2,*(int32_t **)param_1[7],*param_1,&local_28,uVar2,uVar1,param_3);
    if ((p_Var3 != (_Locimp *)0x0) &&
       (puVar5 = (int32_t *)(**(code **)(*(longlong *)p_Var3 + 0x10))(p_Var3),
       puVar5 != (int32_t *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  return param_2;
}
}

 FUN_1800ac210((longlong *)&local_128,local_168,param_2);
    if (uStack_c0 < 0x10) goto LAB_1800ac897;
    pppppppcVar10 = (char *******)local_d8;
    if (0xfff < uStack_c0 + 1) {
pppppppcVar10 = (char *******)local_d8[-1];
      pcVar11 = (char *)((longlong)local_d8 + (-8 - (longlong)pppppppcVar10));
joined_r0x0001800aca18:
      if ((char *)0x1f < pcVar11) {
LAB_1800aca43:
        FUN_18012b7b4();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
}

 FUN_1800ac210((longlong *)&local_128,local_170,param_2);
    if (uStack_c0 < 0x10) goto LAB_1800ad9e7;
    pppppppcVar10 = (char *******)local_d8;
    if (0xfff < uStack_c0 + 1) {
pppppppcVar10 = (char *******)local_d8[-1];
      pcVar11 = (char *)((longlong)local_d8 + (-8 - (longlong)pppppppcVar10));
joined_r0x0001800adb68:
      if ((char *)0x1f < pcVar11) {
LAB_1800adb93:
        FUN_18012b7b4();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
}

 FUN_1800ac210((longlong *)&local_128,param_1,param_2);
    if (uStack_c0 < 0x10) goto LAB_1800b3ed6;
    pppppcVar8 = (char *****)local_d8;
    if (0xfff < uStack_c0 + 1) {
pppppcVar8 = (char *****)local_d8[-1];
      pcVar9 = (char *)((longlong)local_d8 + (-8 - (longlong)pppppcVar8));
joined_r0x0001800b3f3e:
      if ((char *)0x1f < pcVar9) {
LAB_1800b3f48:
        FUN_18012b7b4();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
}

