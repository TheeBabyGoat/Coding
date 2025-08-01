#include "FUN_1800ae4a0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800ae4a0(longlong *param_1,char *param_2,longlong param_3,uint param_4,uint param_5) {
int32_t auVar1 [16];
  sbyte sVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar8;
  char *pcVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int32_t auStack_78 [40];
  uint local_50 [8];
  ulonglong local_30;
  ulonglong uVar7;
  
  local_30 = DAT_1801eb080 ^ (ulonglong)auStack_78;
  uVar12 = param_5 + 0x37 >> 5;
  uVar13 = uVar12 - 1;
  uVar8 = (ulonglong)uVar13;
  sVar2 = (sbyte)(param_5 & 0x1f);
  uVar4 = param_4 << sVar2;
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  if (8 < (param_5 & 0x1f)) {
    local_50[uVar12 - 2] = uVar4;
    uVar4 = param_4 >> (0x20U - sVar2 & 0x1f);
  }
  iVar10 = 0;
  local_50[uVar8] = uVar4;
  if (uVar13 != 0) {
    puVar11 = local_50 + 4;
    do {
      uVar4 = local_50[uVar8];
      local_50[uVar8] = uVar4 / 1000000000;
      uVar12 = uVar4 % 1000000000;
      uVar7 = uVar8;
      do {
        uVar6 = (int)uVar7 - 1;
        uVar7 = (ulonglong)uVar6;
        uVar13 = local_50[uVar7];
        uVar3 = CONCAT44(uVar12,uVar13);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        lVar5 = SUB168(ZEXT816(0x12e0be826d694b2f) * auVar1,8);
        uVar12 = (uint)((uVar3 - lVar5 >> 1) + lVar5 >> 0x1d);
        local_50[uVar7] = uVar12;
        uVar12 = uVar13 + uVar12 * -1000000000;
      } while (uVar6 != 0);
      *puVar11 = uVar12;
      iVar10 = iVar10 + 1;
      puVar11 = puVar11 + 1;
    } while ((uVar4 / 1000000000 != 0) ||
            (uVar4 = (int)uVar8 - 1, uVar8 = (ulonglong)uVar4, uVar4 != 0));
  }
  if (local_50[0] < 1000000000) {
    if (local_50[0] < 100000000) {
      if (local_50[0] < 10000000) {
        if (local_50[0] < 1000000) {
          if (local_50[0] < 100000) {
            if (local_50[0] < 10000) {
              if (local_50[0] < 1000) {
                if (local_50[0] < 100) {
                  uVar8 = (ulonglong)(2 - (local_50[0] < 10));
                }
                else {
                  uVar8 = 3;
                }
              }
              else {
                uVar8 = 4;
              }
            }
            else {
              uVar8 = 5;
            }
          }
          else {
            uVar8 = 6;
          }
        }
        else {
          uVar8 = 7;
        }
      }
      else {
        uVar8 = 8;
      }
    }
    else {
      uVar8 = 9;
    }
  }
  else {
    uVar8 = 10;
  }
  if (param_3 - (longlong)param_2 < (longlong)(ulonglong)((uint)uVar8 + iVar10 * 9)) {
    *param_1 = param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_1800b18f0((uint)uVar8,local_50[0],param_2);
    pcVar9 = param_2 + uVar8;
    lVar5 = (longlong)(iVar10 + -1);
    if (-1 < iVar10 + -1) {
      do {
        FUN_1800b20c0(local_50[lVar5 + 4],pcVar9);
        pcVar9 = pcVar9 + 9;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
    *param_1 = (longlong)pcVar9;
    *(int32_t *)(param_1 + 1) = 0;
  }
  FUN_1801252c0(local_30 ^ (ulonglong)auStack_78);
  return;
}
}

 FUN_1800ae4a0(param_1,param_2,param_3,param_6 | 0x800000,param_7 - 0x96);
            return param_1;
          }
          iVar1 = 0;
          if (uVar5 != 0) {
for (; (uVar5 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
            }
          }
}

