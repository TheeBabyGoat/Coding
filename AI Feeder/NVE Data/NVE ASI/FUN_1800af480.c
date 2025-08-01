#include "FUN_1800af480.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800af480(int32_t *param_1,int32_t *param_2,int32_t *param_3) {
uint uVar1;
  longlong *plVar2;
  int32_t *puVar3;
  int32_t uVar4;
  _Locimp *p_Var5;
  longlong *plVar6;
  int32_t *puVar7;
  longlong *extraout_RAX;
  int iVar8;
  longlong lVar9;
  int32_t *puVar10;
  int32_t local_res8;
  longlong local_28;
  _Locimp *local_20;
  
  if (*(char *)param_1[1] == '\0') {
    if (*(char *)*param_1 == '\x01') {
      if ((ulonglong)param_3[3] < param_3[2] + 1) {
        (**(code **)*param_3)(param_3);
      }
      *(int32_t *)(param_3[1] + param_3[2]) = 0x2b;
    }
    else {
      if (*(char *)*param_1 != '\x03') goto LAB_1800af525;
      if ((ulonglong)param_3[3] < param_3[2] + 1) {
        (**(code **)*param_3)(param_3);
      }
      *(int32_t *)(param_3[1] + param_3[2]) = 0x20;
    }
  }
  else {
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = 0x2d;
  }
  param_3[2] = param_3[2] + 1;
LAB_1800af525:
  if (*(char *)param_1[2] != '\0') {
    if ((*(int *)param_1[3] < *(int *)param_1[4]) &&
       (iVar8 = *(int *)param_1[4] - *(int *)param_1[3], lVar9 = (longlong)iVar8, 0 < iVar8)) {
      do {
        if ((ulonglong)param_3[3] < param_3[2] + 1) {
          (**(code **)*param_3)(param_3);
        }
        *(int32_t *)(param_3[1] + param_3[2]) = 0x30;
        param_3[2] = param_3[2] + 1;
        lVar9 = lVar9 + -1;
      } while (0 < lVar9);
    }
  }
  if (*(char *)(param_1[4] + 0xc) != '\0') {
    if (*(longlong *)param_1[5] == 0) {
      p_Var5 = FUN_180124548('\x01');
      local_20 = p_Var5;
    }
    else {
      p_Var5 = *(_Locimp **)(*(longlong *)param_1[5] + 8);
      local_20 = p_Var5;
      (**(code **)(*(longlong *)p_Var5 + 8))(p_Var5);
    }
    plVar6 = FUN_1800b5fd0((longlong)&local_28);
    if ((p_Var5 != (_Locimp *)0x0) &&
       (puVar7 = (int32_t *)(**(code **)(*(longlong *)p_Var5 + 0x10))(p_Var5),
       puVar7 != (int32_t *)0x0)) {
      (**(code **)*puVar7)(puVar7,1);
    }
    uVar1 = *(uint *)param_1[9];
    uVar4 = (**(code **)(*plVar6 + 0x20))(plVar6);
    plVar2 = (longlong *)param_1[8];
    local_28 = (longlong)plVar2;
    if (0xf < (ulonglong)plVar2[3]) {
      local_28 = *plVar2;
    }
    local_20 = (_Locimp *)plVar2[2];
    FUN_1800b5880(&local_res8,*(int32_t **)param_1[6],*(longlong *)param_1[7],&local_28,uVar4,
                  uVar1,param_3);
    param_3 = (int32_t *)*extraout_RAX;
    if ((*(longlong *)param_1[10] != *(longlong *)param_1[0xb]) || (*(char *)param_1[0xc] != '\0'))
    {
      uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
      if ((ulonglong)param_3[3] < param_3[2] + 1) {
        (**(code **)*param_3)(param_3,param_3[2] + 1);
      }
      *(int32_t *)(param_3[1] + param_3[2]) = uVar4;
      param_3[2] = param_3[2] + 1;
      *(int32_t *)param_1[0xc] = 0;
    }
    *(int32_t *)param_1[6] = *(int32_t *)param_1[7];
    if (*(longlong *)param_1[10] != *(longlong *)param_1[0xb]) {
      plVar6 = (longlong *)param_1[6];
      *plVar6 = *plVar6 + 1;
    }
  }
  puVar3 = *(int32_t **)param_1[0xd];
  for (puVar10 = *(int32_t **)param_1[6]; puVar10 != puVar3; puVar10 = puVar10 + 1) {
    uVar4 = *puVar10;
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = uVar4;
    param_3[2] = param_3[2] + 1;
  }
  if ((*(char *)(param_1[4] + 0xb) != '\0') && (*(char *)param_1[0xc] != '\0')) {
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = 0x2e;
    param_3[2] = param_3[2] + 1;
  }
  iVar8 = *(int *)param_1[0xe];
  while (0 < iVar8) {
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = 0x30;
    param_3[2] = param_3[2] + 1;
    *(int *)param_1[0xe] = *(int *)param_1[0xe] + -1;
    iVar8 = *(int *)param_1[0xe];
  }
  puVar3 = *(int32_t **)param_1[0xb];
  for (puVar10 = *(int32_t **)param_1[0xd]; puVar10 != puVar3; puVar10 = puVar10 + 1) {
    uVar4 = *puVar10;
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = uVar4;
    param_3[2] = param_3[2] + 1;
  }
  *param_2 = param_3;
  return param_2;
}
}

