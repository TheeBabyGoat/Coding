#include "FUN_1800c88c0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c88c0(int32_t param_1,longlong *param_2) {
int32_t *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int32_t uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  int32_t *puVar12;
  ulonglong uVar13;
  ulonglong *local_res10;
  longlong local_d8 [2];
  int32_t *local_c8;
  int32_t local_c0;
  int32_t local_b8 [40];
  int32_t local_90 [8];
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_60;
  
  plVar6 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*plVar6 + 8))(plVar6,&DAT_1801cc1e0,&local_res10);
  local_c8 = &DAT_1801ee948;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1801ee948);
  local_c0 = 1;
  FUN_1800c74c0(local_b8,1);
  puVar1 = (int32_t *)local_res10[2];
  plVar6 = local_88;
  for (puVar12 = (int32_t *)local_res10[1]; local_88 = plVar6, puVar12 != puVar1;
      puVar12 = puVar12 + 1) {
    (**(code **)(*(longlong *)*puVar12 + 8))((longlong *)*puVar12,&DAT_1801cc1d0,local_d8);
    lVar3 = local_d8[0];
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
  FUN_1800c76d0((longlong)local_90);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1801ee948);
  return;
}
}

