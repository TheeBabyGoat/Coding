#include "FUN_1800cae20.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800cae20(local_a8,&local_f8,puVar2 + 2);
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_1801ee948);
  puVar2 = local_a0;
  local_b0 = 0;
  for (puVar1 = (int32_t *)*local_a0; puVar11 = (ulonglong *)0x0, puVar1 != puVar2;
      puVar1 = (int32_t *)*puVar1) {
if (((((*(int *)((longlong)puVar1 + 0x1c) != 0) && (3 < *(uint *)(puVar1 + 3))) &&
         (*puVar4 <= (ulonglong)puVar1[0x10])) && (puVar1[0x11] + 1 < *puVar4)) &&
       ((((**(code **)(*plVar10 + 0x50))(plVar10,&local_f8,puVar1[2]), uStack_e0 < 2 ||
         (cVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,0x19), cVar7 != '\0')) &&
        (uStack_e4 - 0x13 < 2)))) {
      local_118[0] = 0;
      local_110[0] = 0;
      FUN_18011cdd0(local_118,local_110);
      if (((local_f0 == local_118[0]) || ((int)local_ec == local_110[0])) &&
         (0xc < *(uint *)(puVar1 + 3))) {
        puVar11 = (ulonglong *)puVar1[2];
        *local_c0 = (longlong)puVar11;
        local_108 = uStack_e4;
        break;
      }
    }
  }
}

int32_t * FUN_1800cae20(float *param_1,int32_t *param_2,ulonglong *param_3) {
int32_t *puVar1;
  longlong lVar2;
  int32_t *puVar3;
  code *pcVar4;
  int32_t uVar5;
  int32_t *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int32_t *puVar9;
  float fVar10;
  
  uVar8 = *param_3 >> 4;
  puVar6 = *(int32_t **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  puVar9 = *(int32_t **)(param_1 + 2);
  if (puVar6 != puVar9) {
    uVar7 = puVar6[2];
    puVar9 = puVar6;
    while( true ) {
      if (*param_3 == uVar7) {
        *param_2 = puVar9;
        *(int32_t *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == *(int32_t **)
                     (*(longlong *)(param_1 + 6) + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      break;
      puVar9 = (int32_t *)puVar9[1];
      uVar7 = puVar9[2];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x1c71c71c71c71c7) {
LAB_1800cb0e8:
    FUN_180123338(0x1801cc0f0);
    pcVar4 = (code *)swi(3);
    puVar6 = (int32_t *)(*pcVar4)();
    return puVar6;
  }
  puVar6 = (int32_t *)operator_new(0x90);
  puVar6[2] = *param_3;
  uVar7 = param_3[2];
  puVar6[3] = param_3[1];
  puVar6[4] = uVar7;
  uVar7 = param_3[4];
  puVar6[5] = param_3[3];
  puVar6[6] = uVar7;
  *(int *)(puVar6 + 7) = (int)param_3[5];
  uVar5 = *(int32_t *)((longlong)param_3 + 0x34);
  *(int32_t *)((longlong)puVar6 + 0x3c) = *(int32_t *)((longlong)param_3 + 0x2c);
  *(int32_t *)((longlong)puVar6 + 0x44) = uVar5;
  uVar5 = *(int32_t *)((longlong)param_3 + 0x44);
  *(int32_t *)((longlong)puVar6 + 0x4c) = *(int32_t *)((longlong)param_3 + 0x3c);
  *(int32_t *)((longlong)puVar6 + 0x54) = uVar5;
  *(int32_t *)((longlong)puVar6 + 0x5c) = *(int32_t *)((longlong)param_3 + 0x4c);
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  uVar7 = (longlong)(param_3[0xb] - param_3[10]) / 0x28;
  if (uVar7 != 0) {
    if (0x666666666666666 < uVar7) {
      FUN_1800aa480();
      goto LAB_1800cb0e8;
    }
    FUN_1800ca8d0(puVar6 + 0xc,uVar7);
    puVar1 = (int32_t *)puVar6[0xc];
    uVar7 = param_3[0xb] - (longlong)param_3[10];
    FUN_180150fd0(puVar1,(int32_t *)param_3[10],uVar7);
    puVar6[0xd] = puVar1 + ((longlong)uVar7 / 0x28) * 5;
  }
  *(char *)(puVar6 + 0xf) = (char)param_3[0xd];
  *(int32_t *)((longlong)puVar6 + 0x79) = *(int32_t *)((longlong)param_3 + 0x69);
  puVar6[0x10] = param_3[0xe];
  puVar6[0x11] = param_3[0xf];
  fVar10 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar10 && fVar10 != *param_1) {
    FUN_1800ca7d0(param_1);
    puVar1 = *(int32_t **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10);
    puVar9 = *(int32_t **)(param_1 + 2);
    if (puVar1 != puVar9) {
      lVar2 = puVar1[2];
      puVar9 = puVar1;
      while (puVar6[2] != lVar2) {
        if (puVar9 == *(int32_t **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10)
           ) goto LAB_1800cb086;
        puVar9 = (int32_t *)puVar9[1];
        lVar2 = puVar9[2];
      }
      puVar9 = (int32_t *)*puVar9;
    }
  }
LAB_1800cb086:
  puVar1 = (int32_t *)puVar9[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar6 = puVar9;
  puVar6[1] = puVar1;
  *puVar1 = puVar6;
  puVar9[1] = puVar6;
  uVar8 = *(ulonglong *)(param_1 + 0xc) & uVar8;
  lVar2 = *(longlong *)(param_1 + 6);
  puVar3 = *(int32_t **)(lVar2 + uVar8 * 0x10);
  if (puVar3 == *(int32_t **)(param_1 + 2)) {
    *(int32_t **)(lVar2 + uVar8 * 0x10) = puVar6;
  }
  else {
    if (puVar3 == puVar9) {
      *(int32_t **)(lVar2 + uVar8 * 0x10) = puVar6;
      goto LAB_1800cb0d5;
    }
    if (*(int32_t **)(lVar2 + 8 + uVar8 * 0x10) != puVar1) goto LAB_1800cb0d5;
  }
  *(int32_t **)(lVar2 + 8 + uVar8 * 0x10) = puVar6;
LAB_1800cb0d5:
  *param_2 = puVar6;
  *(int32_t *)(param_2 + 1) = 1;
  return param_2;
}
}

