#include "FUN_1800b1670.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800b1670(longlong *param_1,int32_t (*param_2) [32],int32_t (*param_3) [32],
             int32_t param_4,int param_5) {
uint uVar1;
  int32_t uVar2;
  longlong *plVar3;
  byte bVar4;
  ulonglong uVar5;
  char *pcVar6;
  int32_t (*pauVar7) [32];
  int32_t (*pauVar8) [32];
  ulonglong uVar9;
  uint uVar10;
  int32_t in_XMM3 [16];
  longlong local_18 [2];
  
  uVar5 = in_XMM3._0_8_;
  pauVar8 = param_2;
  if (in_XMM3[7] < '\0') {
    if (param_2 == param_3) goto LAB_1800b1696;
    pauVar8 = (int32_t (*) [32])(*param_2 + 1);
    (*param_2)[0] = 0x2d;
    uVar5 = uVar5 & 0x7fffffffffffffff;
  }
  if ((uVar5 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if ((uVar5 & 0xfffffffffffff) == 0) {
      pcVar6 = "inf";
      uVar5 = 3;
    }
    else if ((in_XMM3[7] < '\0') && ((uVar5 & 0xfffffffffffff) == 0x8000000000000)) {
      pcVar6 = "nan(ind)";
      uVar5 = 8;
    }
    else if ((uVar5 & 0x8000000000000) == 0) {
      pcVar6 = "nan(snan)";
      uVar5 = 9;
    }
    else {
      pcVar6 = "nan";
      uVar5 = 3;
    }
    if ((longlong)param_3 - (longlong)pauVar8 < (longlong)uVar5) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
      return param_1;
    }
    FUN_180150fd0((int32_t *)pauVar8,(int32_t *)pcVar6,uVar5);
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)(*pauVar8 + uVar5);
    return param_1;
  }
  if (param_5 != 4) {
    plVar3 = FUN_1800b1490(local_18,pauVar8,param_3,uVar5,param_5);
    *param_1 = *plVar3;
    *(int *)(param_1 + 1) = (int)plVar3[1];
    return param_1;
  }
  if (uVar5 == 0) {
    if (3 < (longlong)param_3 - (longlong)pauVar8) {
      *(int32_t *)*pauVar8 = 0x302b7030;
      *param_1 = (longlong)(*pauVar8 + 4);
      *(int32_t *)(param_1 + 1) = 0;
      return param_1;
    }
  }
  else {
    uVar9 = uVar5 & 0xfffffffffffff;
    uVar10 = 0xfffffc02;
    uVar1 = (uint)(uVar5 >> 0x20);
    if (uVar1 >> 0x14 != 0) {
      uVar10 = (uVar1 >> 0x14) - 0x3ff;
    }
    if (pauVar8 != param_3) {
      pauVar7 = (int32_t (*) [32])(*pauVar8 + 1);
      (*pauVar8)[0] = (uVar1 >> 0x14 != 0) + '0';
      if (uVar9 != 0) {
        if (pauVar7 == param_3) goto LAB_1800b1696;
        (*pauVar7)[0] = 0x2e;
        pauVar7 = (int32_t (*) [32])(*pauVar8 + 2);
        bVar4 = 0x34;
        do {
          bVar4 = bVar4 - 4;
          if (pauVar7 == param_3) goto LAB_1800b1696;
          (*pauVar7)[0] =
               "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar9 >> (bVar4 & 0x3f) & 0xffffffff];
          pauVar7 = (int32_t (*) [32])(*pauVar7 + 1);
          uVar9 = uVar9 & (1L << (bVar4 & 0x3f)) - 1U;
        } while (uVar9 != 0);
      }
      if (1 < (longlong)param_3 - (longlong)pauVar7) {
        (*pauVar7)[0] = 0x70;
        uVar2 = 0x2d;
        if (-1 < (int)uVar10) {
          uVar2 = 0x2b;
        }
        (*pauVar7)[1] = uVar2;
        uVar1 = -uVar10;
        if (0 < (int)uVar10) {
          uVar1 = uVar10;
        }
        FUN_1800b4050(param_1,(int32_t *)(*pauVar7 + 2),(longlong)param_3,(ulonglong)uVar1,10);
        return param_1;
      }
    }
  }
LAB_1800b1696:
  *param_1 = (longlong)param_3;
  *(int32_t *)(param_1 + 1) = 0x84;
  return param_1;
}
}

