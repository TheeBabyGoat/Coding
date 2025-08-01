#include "FUN_1800af0e0.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800af0e0(longlong *param_1,char *param_2,longlong param_3,uint param_4,int param_5) {
uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int32_t (*pauVar5) [32];
  int iVar6;
  uint uVar7;
  char cVar8;
  
  iVar6 = 6;
  if (-1 < param_5) {
    iVar6 = param_5;
  }
  uVar3 = param_4 >> 0x17;
  uVar7 = (param_4 & 0x7fffff) * 2;
  if (uVar3 == 0) {
    uVar1 = -(uint)((param_4 & 0x7fffff) != 0) & 0xffffff82;
  }
  else {
    uVar1 = uVar3 - 0x7f;
  }
  if (uVar3 != 0) {
    uVar7 = uVar7 | 0x1000000;
  }
  uVar3 = -uVar1;
  if (0 < (int)uVar1) {
    uVar3 = uVar1;
  }
  cVar8 = '-';
  if (-1 < (int)uVar1) {
    cVar8 = '+';
  }
  if (uVar3 < 10) {
    lVar4 = 4;
  }
  else {
    lVar4 = 6 - (ulonglong)(uVar3 < 100);
  }
  if ((param_3 - (longlong)param_2 < (longlong)iVar6) ||
     ((param_3 - (longlong)param_2) - (longlong)iVar6 < (longlong)((ulonglong)(0 < iVar6) + lVar4)))
  {
    *param_1 = param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    if (iVar6 < 6) {
      uVar7 = uVar7 + (1 << (('\x06' - (char)iVar6) * '\x04' & 0x1fU) & (uVar7 * 2 - 1 | uVar7) &
                      uVar7 * 2);
    }
    uVar1 = uVar7 & 0xffffff;
    *param_2 = (char)(uVar7 >> 0x18) + '0';
    pauVar5 = (int32_t (*) [32])(param_2 + 1);
    if (0 < iVar6) {
      (*pauVar5)[0] = '.';
      iVar6 = iVar6 + -1;
      iVar2 = 0x14;
      param_2[2] = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar1 >> 0x14];
      pauVar5 = (int32_t (*) [32])(param_2 + 3);
      if (iVar6 != 0) {
        uVar7 = 0x100000;
        do {
          if (iVar2 == 0) {
            FUN_180151670(pauVar5,0x30,(longlong)iVar6);
            pauVar5 = (int32_t (*) [32])(*pauVar5 + iVar6);
            break;
          }
          iVar2 = iVar2 + -4;
          uVar1 = uVar1 & uVar7 - 1;
          uVar7 = uVar7 >> 4 | uVar7 << 0x1c;
          (*pauVar5)[0] = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar1 >> ((byte)iVar2 & 0x3f)];
          pauVar5 = (int32_t (*) [32])(*pauVar5 + 1);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    (*pauVar5)[0] = 'p';
    (*pauVar5)[1] = cVar8;
    FUN_1800b4050(param_1,(int32_t *)(*pauVar5 + 2),param_3,(ulonglong)uVar3,10);
  }
  return param_1;
}
}

 FUN_1800af0e0(param_1,(char *)param_2,(longlong)param_3,(uint)fVar1,param_6);
        return param_1;
      }
      FUN_1800aedf0(param_1,(int32_t *)param_2,(int32_t *)param_3,fVar1,param_6);
      return param_1;
    }
    if ((int)param_6 < 1000000000) {
uVar2 = 6;
      if (-1 < (int)param_6) {
        uVar2 = param_6;
      }
      FUN_1800b1a00(local_18,param_2,param_3,(ulonglong)(double)fVar1,uVar2);
      *param_1 = *extraout_RAX;
      *(int *)(param_1 + 1) = (int)extraout_RAX[1];
      return param_1;
    }
}

