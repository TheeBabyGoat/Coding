#include "FUN_1800ae6e0.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800ae6e0(longlong *param_1,char *param_2,longlong param_3,ulonglong param_4,int param_5,
             uint param_6,int param_7) {
int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  char *pcVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  
  iVar10 = (int)(param_4 >> 0x20);
  uVar2 = FUN_1800b2160((uint)param_4);
  uVar6 = (ulonglong)uVar2;
  uVar7 = uVar2 + iVar10;
  iVar1 = uVar7 - 1;
  uVar5 = (uint)param_4;
  if (param_5 == 0) {
    iVar4 = -3;
    if (uVar2 != 1) {
      iVar4 = -3 - uVar2;
    }
    if ((iVar4 <= iVar10) && (iVar10 <= (int)((uVar2 != 1) + 4))) goto LAB_1800ae78c;
  }
  else if (param_5 == 3) {
    if (uVar7 + 3 < 10) {
LAB_1800ae78c:
      if (iVar10 < 0) {
        if ((int)uVar7 < 1) {
          uVar2 = 2 - iVar10;
        }
        else {
          uVar2 = uVar2 + 1;
        }
      }
      else {
        uVar2 = uVar7;
        if (uVar5 == 1) {
          uVar2 = uVar7 - (byte)(&DAT_180183118)[iVar10];
        }
      }
      uVar11 = (ulonglong)uVar2;
      if ((longlong)uVar11 <= param_3 - (longlong)param_2) {
        uVar3 = uVar11;
        if (0 < iVar10) {
          if (10 < iVar10) {
LAB_1800ae7f5:
            FUN_1800ae4a0(param_1,param_2,param_3,param_6 | 0x800000,param_7 - 0x96);
            return param_1;
          }
          iVar1 = 0;
          if (uVar5 != 0) {
            for (; (uVar5 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
            }
          }
          uVar3 = uVar6;
          if (*(uint *)(&DAT_180183140 + (longlong)iVar10 * 4) < uVar5 >> ((byte)iVar1 & 0x1f))
          goto LAB_1800ae7f5;
        }
        pcVar8 = param_2 + uVar3;
        while (uVar2 = (uint)param_4, 9999 < uVar5) {
          param_4 = (param_4 & 0xffffffff) / 10000;
          uVar5 = (uint)param_4;
          uVar2 = uVar2 + uVar5 * -10000;
          *(int32_t *)(pcVar8 + -2) =
               *(int32_t *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                + (uVar2 % 100) * 2);
          pcVar8 = pcVar8 + -4;
          *(int32_t *)pcVar8 =
               *(int32_t *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                + (uVar2 / 100) * 2);
        }
        uVar5 = uVar2;
        if (99 < uVar2) {
          uVar5 = (uint)((param_4 & 0xffffffff) / 100);
          pcVar8 = pcVar8 + -2;
          *(int32_t *)pcVar8 =
               *(int32_t *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                + (uVar2 + uVar5 * -100) * 2);
        }
        if (uVar5 < 10) {
          pcVar8[-1] = (char)uVar5 + '0';
        }
        else {
          *(int32_t *)(pcVar8 + -2) =
               *(int32_t *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                + uVar5 * 2);
        }
        if (iVar10 < 1) {
          if (iVar10 != 0) {
            if (0 < (int)uVar7) {
              FUN_180150fd0((int32_t *)param_2,(int32_t *)(param_2 + 1),(longlong)(int)uVar7);
              pcVar8 = param_2 + uVar11;
              param_2[(int)uVar7] = '.';
              goto LAB_1800aea66;
            }
            param_2[0] = '0';
            param_2[1] = '.';
            if ((int)uVar7 < 0) {
              FUN_180151670((int32_t (*) [32])(param_2 + 2),0x30,(longlong)(int)-uVar7);
            }
          }
          pcVar8 = param_2 + uVar11;
        }
        else {
          FUN_180151670((int32_t (*) [32])(param_2 + uVar6),0x30,(longlong)iVar10);
          pcVar8 = param_2 + uVar11;
        }
        goto LAB_1800aea66;
      }
      goto LAB_1800ae768;
    }
  }
  else if (param_5 == 2) goto LAB_1800ae78c;
  uVar11 = (ulonglong)((1 < uVar2) + 4 + uVar2);
  if ((longlong)uVar11 <= param_3 - (longlong)param_2) {
    uVar3 = 0;
    while (uVar7 = (uint)param_4, 9999 < uVar5) {
      param_4 = (param_4 & 0xffffffff) / 10000;
      uVar5 = (uint)param_4;
      uVar7 = uVar7 + uVar5 * -10000;
      *(int32_t *)(param_2 + uVar6 + (-1 - uVar3)) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (uVar7 % 100) * 2);
      *(int32_t *)(param_2 + uVar6 + (-3 - uVar3)) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (uVar7 / 100) * 2);
      uVar3 = (ulonglong)((int)uVar3 + 4);
    }
    uVar5 = uVar7;
    if (99 < uVar7) {
      uVar5 = (uint)((param_4 & 0xffffffff) / 100);
      *(int32_t *)(param_2 + (uVar6 - uVar3) + -1) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (uVar7 + uVar5 * -100) * 2);
    }
    if (uVar5 < 10) {
      cVar9 = (char)uVar5 + '0';
    }
    else {
      param_2[2] = "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                   [uVar5 * 2 + 1];
      cVar9 = "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
              [uVar5 * 2];
    }
    *param_2 = cVar9;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    else {
      param_2[1] = '.';
      uVar2 = uVar2 + 1;
    }
    param_2[uVar2] = 'e';
    iVar10 = iVar1;
    if (iVar1 < 0) {
      iVar10 = -iVar1;
    }
    cVar9 = '-';
    if (-1 < iVar1) {
      cVar9 = '+';
    }
    param_2[uVar2 + 1] = cVar9;
    *(int32_t *)(param_2 + (uVar2 + 2)) =
         *(int32_t *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
          + iVar10 * 2);
    pcVar8 = param_2 + uVar11;
LAB_1800aea66:
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)pcVar8;
    return param_1;
  }
LAB_1800ae768:
  *param_1 = param_3;
  *(int32_t *)(param_1 + 1) = 0x84;
  return param_1;
}
}

