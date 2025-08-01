#include "FUN_1800c75a0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c75a0(longlong param_1,longlong param_2) {
int32_t *puVar1;
  int32_t *puVar2;
  longlong lVar3;
  int32_t uVar4;
  longlong *plVar5;
  int32_t local_28 [2];
  
  *(int32_t *)(param_1 + 0x20) = *(int32_t *)(param_2 + 0x20);
  if (*(uint *)(param_1 + 0x6c) <= *(uint *)(param_2 + 0x6c)) {
    uVar4 = *(int32_t *)(param_2 + 0x74);
    *(int32_t *)(param_1 + 0x6c) = *(int32_t *)(param_2 + 0x6c);
    *(int32_t *)(param_1 + 0x74) = uVar4;
    uVar4 = *(int32_t *)(param_2 + 0x84);
    *(int32_t *)(param_1 + 0x7c) = *(int32_t *)(param_2 + 0x7c);
    *(int32_t *)(param_1 + 0x84) = uVar4;
    *(int32_t *)(param_1 + 0x8c) = *(int32_t *)(param_2 + 0x8c);
  }
  if (*(ulonglong *)(param_2 + 0x38) != 0) {
    FUN_1800c9ae0((float *)(param_1 + 0x28),*(ulonglong *)(param_2 + 0x38));
    puVar1 = *(int32_t **)(param_2 + 0x30);
    for (puVar2 = (int32_t *)*puVar1; puVar2 != puVar1; puVar2 = (int32_t *)*puVar2) {
      plVar5 = FUN_1800ca300((float *)(param_1 + 0x28),local_28,puVar2 + 2);
      lVar3 = *plVar5;
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + *(int *)(puVar2 + 3);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + *(int *)((longlong)puVar2 + 0x1c);
      *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + *(int *)(puVar2 + 4);
      *(int *)(lVar3 + 0x3c) = *(int *)(lVar3 + 0x3c) + *(int *)((longlong)puVar2 + 0x3c);
      *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + *(int *)(puVar2 + 8);
      *(int *)(lVar3 + 0x44) = *(int *)(lVar3 + 0x44) + *(int *)((longlong)puVar2 + 0x44);
      FUN_1800ca960((longlong *)(lVar3 + 0x60),*(int32_t **)(lVar3 + 0x68),
                    (int32_t *)puVar2[0xc],(puVar2[0xd] - (longlong)puVar2[0xc]) / 0x28);
      *(byte *)(lVar3 + 0x78) = *(byte *)(lVar3 + 0x78) | *(byte *)(puVar2 + 0xf);
      *(int32_t *)(lVar3 + 0x79) = *(int32_t *)((longlong)puVar2 + 0x79);
    }
  }
  return;
}
}

 FUN_1800c75a0((longlong)local_b8,local_d8[0]);
    *(int32_t *)(lVar3 + 0x6c) = 0;
    *(int32_t *)(lVar3 + 0x74) = 0;
    *(int32_t *)(lVar3 + 0x7c) = 0;
    *(int32_t *)(lVar3 + 0x84) = 0;
    *(int32_t *)(lVar3 + 0x8c) = 0x3f800000;
    FUN_1800c9a40(lVar3 + 0x28);
    plVar6 = local_88;
  }
  if ((local_80 != 0) && ((local_80 != 1 || (8 < *(uint *)(*plVar6 + 0x1c))))) {
*local_res10 = *local_res10 + 1;
    puVar10 = *(ulonglong **)local_res10[5];
    if (puVar10 != (ulonglong *)local_res10[5]) {
      do {
        uVar13 = puVar10[2] >> 4;
        uVar9 = local_60 & uVar13;
        plVar8 = *(longlong **)(local_78 + 8 + uVar9 * 0x10);
        if (plVar8 == plVar6) {
LAB_1800c8a26:
          plVar8 = (longlong *)0x0;
        }
        else {
          uVar2 = plVar8[2];
          while (puVar10[2] != uVar2) {
            if (plVar8 == *(longlong **)(local_78 + uVar9 * 0x10)) goto LAB_1800c8a26;
            plVar8 = (longlong *)plVar8[1];
            uVar2 = plVar8[2];
          }
        }
        plVar7 = plVar6;
        if (plVar8 != (longlong *)0x0) {
          plVar7 = plVar8;
        }
        if ((plVar7 == plVar6) && (puVar10[0x10] + 0x1e < *local_res10)) {
          uVar13 = local_res10[10] & uVar13;
          uVar9 = local_res10[7];
          puVar11 = *(ulonglong **)(uVar9 + uVar13 * 0x10);
          if (*(ulonglong **)(uVar9 + 8 + uVar13 * 0x10) == puVar10) {
            if (puVar11 == puVar10) {
              uVar2 = local_res10[5];
              *(ulonglong *)(uVar9 + uVar13 * 0x10) = uVar2;
              *(ulonglong *)(uVar9 + 8 + uVar13 * 0x10) = uVar2;
            }
            else {
              *(ulonglong *)(uVar9 + 8 + uVar13 * 0x10) = puVar10[1];
            }
          }
          else if (puVar11 == puVar10) {
            *(ulonglong *)(uVar9 + uVar13 * 0x10) = *puVar10;
          }
          puVar11 = (ulonglong *)*puVar10;
          local_res10[6] = local_res10[6] - 1;
          *(ulonglong **)puVar10[1] = puVar11;
          puVar11[1] = puVar10[1];
          FUN_1800cb100((longlong *)(puVar10 + 0xc));
          thunk_FUN_18012d5e8(puVar10);
          plVar6 = local_88;
        }
        else {
          puVar11 = (ulonglong *)*puVar10;
        }
        puVar10 = puVar11;
      } while (puVar11 != (ulonglong *)local_res10[5]);
    }
    for (plVar8 = (longlong *)*plVar6; plVar8 != plVar6; plVar8 = (longlong *)*plVar8) {
      plVar7 = FUN_1800ca060((float *)(local_res10 + 4),local_d8,(ulonglong *)(plVar8 + 2));
      lVar3 = *plVar7;
      lVar4 = plVar8[4];
      *(longlong *)(lVar3 + 0x18) = plVar8[3];
      *(longlong *)(lVar3 + 0x20) = lVar4;
      lVar4 = plVar8[6];
      *(longlong *)(lVar3 + 0x28) = plVar8[5];
      *(longlong *)(lVar3 + 0x30) = lVar4;
      *(int *)(lVar3 + 0x38) = (int)plVar8[7];
      uVar5 = *(int32_t *)((longlong)plVar8 + 0x44);
      *(int32_t *)(lVar3 + 0x3c) = *(int32_t *)((longlong)plVar8 + 0x3c);
      *(int32_t *)(lVar3 + 0x44) = uVar5;
      uVar5 = *(int32_t *)((longlong)plVar8 + 0x54);
      *(int32_t *)(lVar3 + 0x4c) = *(int32_t *)((longlong)plVar8 + 0x4c);
      *(int32_t *)(lVar3 + 0x54) = uVar5;
      *(int32_t *)(lVar3 + 0x5c) = *(int32_t *)((longlong)plVar8 + 0x5c);
      puVar10 = (ulonglong *)(plVar8 + 0xc);
      if ((ulonglong *)(lVar3 + 0x60) != puVar10) {
        FUN_1800ca5d0((ulonglong *)(lVar3 + 0x60),(int32_t *)*puVar10,
                      (longlong)(plVar8[0xd] - *puVar10) / 0x28);
      }
      *(char *)(lVar3 + 0x78) = (char)plVar8[0xf];
      *(int32_t *)(lVar3 + 0x79) = *(int32_t *)((longlong)plVar8 + 0x79);
      *(ulonglong *)(lVar3 + 0x80) = *local_res10;
      if (*(longlong *)(lVar3 + 0x88) == -1) {
        *(ulonglong *)(lVar3 + 0x88) = *local_res10;
      }
    }
  }
}

