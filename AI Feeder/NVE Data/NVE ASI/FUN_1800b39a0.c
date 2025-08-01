#include "FUN_1800b39a0.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800b39a0(longlong *param_1,int32_t *param_2,int param_3,int *param_4,int32_t param_5,
             longlong *param_6) {
int32_t *puVar1;
  int32_t uVar2;
  int iVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  char cVar9;
  int32_t *puVar10;
  int iVar11;
  int32_t local_res8;
  
  iVar3 = *param_4;
  iVar11 = 0;
  cVar9 = *(char *)((longlong)param_4 + 9);
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar9 = '\x02';
  }
  iVar6 = 0;
  if (param_3 < iVar3) {
    if (cVar9 != '\x01') {
      if (cVar9 == '\x02') {
        iVar6 = iVar3 - param_3;
      }
      else {
        iVar6 = 0;
        if (cVar9 == '\x03') {
          iVar6 = (iVar3 - param_3) / 2;
          iVar11 = (iVar3 - iVar6) - param_3;
        }
      }
      goto LAB_1800b3a0d;
    }
    uVar7 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
    iVar11 = iVar3 - param_3;
  }
  else {
LAB_1800b3a0d:
    uVar7 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
    puVar1 = (int32_t *)((longlong)param_4 + 0xf);
    if (0 < iVar6) {
      puVar10 = puVar1 + uVar7;
      puVar5 = puVar1;
      do {
        for (; puVar5 != puVar10; puVar5 = puVar5 + 1) {
          uVar2 = *puVar5;
          if ((ulonglong)param_2[3] < param_2[2] + 1) {
            (**(code **)*param_2)(param_2);
          }
          *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
          param_2[2] = param_2[2] + 1;
        }
        iVar6 = iVar6 + -1;
        puVar5 = puVar1;
      } while (0 < iVar6);
      goto LAB_1800b3a88;
    }
  }
  puVar10 = (int32_t *)((longlong)param_4 + uVar7 + 0xf);
LAB_1800b3a88:
  plVar8 = FUN_1800ac210(param_6,&local_res8,param_2);
  puVar4 = (int32_t *)*plVar8;
  for (; puVar1 = (int32_t *)((longlong)param_4 + 0xf), 0 < iVar11; iVar11 = iVar11 + -1) {
    for (; puVar1 != puVar10; puVar1 = puVar1 + 1) {
      uVar2 = *puVar1;
      if ((ulonglong)puVar4[3] < puVar4[2] + 1) {
        (**(code **)*puVar4)(puVar4);
      }
      *(int32_t *)(puVar4[1] + puVar4[2]) = uVar2;
      puVar4[2] = puVar4[2] + 1;
    }
  }
  *param_1 = (longlong)puVar4;
  return param_1;
}
}

 FUN_1800b39a0(param_1,param_2,local_17c,param_4,uVar15,(longlong *)&local_128);
    if (uStack_c0 < 0x10) goto LAB_1800b3ed6;
    pppppcVar8 = (char *****)local_d8;
    if (0xfff < uStack_c0 + 1) {
pppppcVar8 = (char *****)local_d8[-1];
      pcVar9 = (char *)((longlong)local_d8 + (-8 - (longlong)pppppcVar8));
      goto joined_r0x0001800b3f3e;
    }
}

