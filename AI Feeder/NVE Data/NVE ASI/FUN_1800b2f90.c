#include "FUN_1800b2f90.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800b2f90(longlong *param_1,char *param_2,longlong param_3,ulonglong param_4,int param_5) {
uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int32_t (*pauVar5) [32];
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char cVar9;
  
  iVar6 = 0xd;
  if (-1 < param_5) {
    iVar6 = param_5;
  }
  uVar7 = param_4 & 0xfffffffffffff;
  uVar1 = (uint)(param_4 >> 0x20);
  uVar4 = uVar1 >> 0x14;
  if (uVar4 == 0) {
    uVar1 = -(uint)(uVar7 != 0) & 0xfffffc02;
  }
  else {
    uVar1 = (uVar1 >> 0x14) - 0x3ff;
  }
  if (uVar4 != 0) {
    uVar7 = uVar7 | 0x10000000000000;
  }
  uVar4 = -uVar1;
  if (0 < (int)uVar1) {
    uVar4 = uVar1;
  }
  cVar9 = '-';
  if (-1 < (int)uVar1) {
    cVar9 = '+';
  }
  if (uVar4 < 10) {
    lVar3 = 4;
  }
  else if (uVar4 < 100) {
    lVar3 = 5;
  }
  else {
    lVar3 = 7 - (ulonglong)(uVar4 < 1000);
  }
  if ((param_3 - (longlong)param_2 < (longlong)iVar6) ||
     ((param_3 - (longlong)param_2) - (longlong)iVar6 < (longlong)((ulonglong)(0 < iVar6) + lVar3)))
  {
    *param_1 = param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    if (iVar6 < 0xd) {
      uVar7 = uVar7 + (1L << (('\r' - (char)iVar6) * '\x04' & 0x3fU) & (uVar7 * 2 - 1 | uVar7) &
                      uVar7 * 2);
    }
    uVar8 = uVar7 & 0xfffffffffffff;
    *param_2 = (char)(uVar7 >> 0x34) + '0';
    pauVar5 = (int32_t (*) [32])(param_2 + 1);
    if (0 < iVar6) {
      (*pauVar5)[0] = '.';
      iVar6 = iVar6 + -1;
      iVar2 = 0x30;
      param_2[2] = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar8 >> 0x30];
      pauVar5 = (int32_t (*) [32])(param_2 + 3);
      if (iVar6 != 0) {
        uVar7 = 0x1000000000000;
        do {
          if (iVar2 == 0) {
            FUN_180151670(pauVar5,0x30,(longlong)iVar6);
            pauVar5 = (int32_t (*) [32])(*pauVar5 + iVar6);
            break;
          }
          iVar2 = iVar2 + -4;
          uVar8 = uVar8 & uVar7 - 1;
          uVar7 = uVar7 >> 4 | uVar7 << 0x3c;
          (*pauVar5)[0] =
               "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar8 >> ((byte)iVar2 & 0x3f) & 0xffffffff];
          pauVar5 = (int32_t (*) [32])(*pauVar5 + 1);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    (*pauVar5)[0] = 'p';
    (*pauVar5)[1] = cVar9;
    FUN_1800b4050(param_1,(int32_t *)(*pauVar5 + 2),param_3,(ulonglong)uVar4,10);
  }
  return param_1;
}
}

 FUN_1800b2f90(param_1,(char *)param_2,(longlong)param_3,uVar2,param_6);
        return param_1;
      }
      FUN_1800b2c60(param_1,(int32_t *)param_2,(int32_t *)param_3,uVar2,param_6);
      return param_1;
    }
    if ((int)param_6 < 1000000000) {
uVar1 = 6;
      if (-1 < (int)param_6) {
        uVar1 = param_6;
      }
      FUN_1800b1a00(local_18,param_2,param_3,uVar2,uVar1);
      *param_1 = *extraout_RAX;
      *(int *)(param_1 + 1) = (int)extraout_RAX[1];
      return param_1;
    }
}

