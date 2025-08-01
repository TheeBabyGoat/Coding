#include "FUN_1800b7820.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800b7820(longlong *param_1,byte *param_2,byte *param_3,uint *param_4) {
byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  
  bVar1 = *param_2;
  *param_4 = (uint)bVar1;
  if (bVar1 < 0x80) {
    *(int32_t *)(param_1 + 1) = 1;
    *param_1 = (longlong)(param_2 + 1);
    return param_1;
  }
  if (bVar1 - 0xc2 < 0x1e) {
    uVar3 = 2;
  }
  else if (bVar1 - 0xe0 < 0x10) {
    uVar3 = 3;
  }
  else {
    if (4 < bVar1 - 0xf0) {
      *param_1 = (longlong)(param_2 + 1);
      *param_4 = 0xfffd;
      *(int32_t *)(param_1 + 1) = 0;
      return param_1;
    }
    uVar3 = 4;
  }
  pbVar6 = param_2 + 1;
  if (pbVar6 == param_3) {
    *param_1 = (longlong)param_3;
    *param_4 = 0xfffd;
    *(int32_t *)(param_1 + 1) = 0;
    return param_1;
  }
  if (bVar1 == 0xe0) {
    if (0x9f < *pbVar6) goto LAB_1800b7907;
  }
  else {
    if (bVar1 == 0xed) {
      bVar7 = *pbVar6 < 0x9f;
      bVar8 = *pbVar6 == 0x9f;
    }
    else {
      if (bVar1 == 0xf0) {
        if (*pbVar6 < 0x90) {
          *param_1 = (longlong)pbVar6;
          *param_4 = 0xfffd;
          *(int32_t *)(param_1 + 1) = 0;
          return param_1;
        }
        goto LAB_1800b7907;
      }
      if (bVar1 != 0xf4) goto LAB_1800b7907;
      bVar7 = *pbVar6 < 0x8f;
      bVar8 = *pbVar6 == 0x8f;
    }
    if (bVar7 || bVar8) {
LAB_1800b7907:
      if (uVar3 == 2) {
        uVar2 = 0x1f;
      }
      else if (uVar3 == 3) {
        uVar2 = 0xf;
      }
      else {
        uVar2 = 7;
      }
      uVar2 = uVar2 & bVar1;
      uVar4 = (ulonglong)uVar3;
      iVar5 = 1;
      *param_4 = uVar2;
      if (1 < uVar4) {
        do {
          if (((param_3 <= param_2 + iVar5) || (bVar1 = *pbVar6, bVar1 < 0x80)) || (0xbf < bVar1)) {
            *param_4 = 0xfffd;
            *param_1 = (longlong)(param_2 + iVar5);
            *(int32_t *)(param_1 + 1) = 0;
            return param_1;
          }
          pbVar6 = pbVar6 + 1;
          uVar2 = bVar1 & 0x3f | uVar2 << 6;
          iVar5 = iVar5 + 1;
          *param_4 = uVar2;
        } while ((longlong)pbVar6 - (longlong)param_2 < (longlong)uVar4);
      }
      *(int32_t *)(param_1 + 1) = 1;
      *param_1 = (longlong)(param_2 + uVar4);
      return param_1;
    }
  }
  *param_1 = (longlong)pbVar6;
  *param_4 = 0xfffd;
  *(int32_t *)(param_1 + 1) = 0;
  return param_1;
}
}

