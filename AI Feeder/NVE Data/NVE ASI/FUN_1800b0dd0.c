#include "FUN_1800b0dd0.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800b0dd0(longlong *param_1,int32_t (*param_2) [32],int32_t (*param_3) [32],
             ulonglong *param_4,int param_5,ulonglong param_6) {
int iVar1;
  longlong lVar2;
  int iVar3;
  int32_t uVar4;
  ulonglong uVar5;
  int32_t *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  int32_t *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar8 = *param_4;
  iVar9 = (int)param_4[1];
  uVar11 = (ulonglong)iVar9;
  if (uVar8 < 10000000000000000) {
    if (uVar8 < 1000000000000000) {
      if (uVar8 < 100000000000000) {
        if (uVar8 < 10000000000000) {
          if (uVar8 < 1000000000000) {
            if (uVar8 < 100000000000) {
              if (uVar8 < 10000000000) {
                if (uVar8 < 1000000000) {
                  if (uVar8 < 100000000) {
                    if (uVar8 < 10000000) {
                      if (uVar8 < 1000000) {
                        if (uVar8 < 100000) {
                          if (uVar8 < 10000) {
                            if (uVar8 < 1000) {
                              if (uVar8 < 100) {
                                uVar16 = 2 - (uVar8 < 10);
                              }
                              else {
                                uVar16 = 3;
                              }
                            }
                            else {
                              uVar16 = 4;
                            }
                          }
                          else {
                            uVar16 = 5;
                          }
                        }
                        else {
                          uVar16 = 6;
                        }
                      }
                      else {
                        uVar16 = 7;
                      }
                    }
                    else {
                      uVar16 = 8;
                    }
                  }
                  else {
                    uVar16 = 9;
                  }
                }
                else {
                  uVar16 = 10;
                }
              }
              else {
                uVar16 = 0xb;
              }
            }
            else {
              uVar16 = 0xc;
            }
          }
          else {
            uVar16 = 0xd;
          }
        }
        else {
          uVar16 = 0xe;
        }
      }
      else {
        uVar16 = 0xf;
      }
    }
    else {
      uVar16 = 0x10;
    }
  }
  else {
    uVar16 = 0x11;
  }
  uVar17 = uVar16 + iVar9;
  iVar1 = uVar17 - 1;
  iVar14 = (int)uVar8;
  if (param_5 == 0) {
    iVar3 = -3;
    if (uVar16 != 1) {
      iVar3 = -3 - uVar16;
    }
    if ((iVar3 <= iVar9) && (iVar9 <= (int)((uVar16 != 1) + 4))) goto LAB_1800b0fcf;
  }
  else if (param_5 == 3) {
    if (uVar17 + 3 < 10) {
LAB_1800b0fcf:
      if (iVar9 < 0) {
        if ((int)uVar17 < 1) {
          uVar7 = 2 - iVar9;
        }
        else {
          uVar7 = uVar16 + 1;
        }
      }
      else {
        uVar7 = uVar17;
        if (uVar8 == 1) {
          uVar7 = uVar17 - (byte)(&DAT_180183180)[uVar11];
        }
      }
      uVar12 = (ulonglong)uVar7;
      if ((longlong)uVar12 <= (longlong)param_3 - (longlong)param_2) {
        uVar5 = uVar12;
        if (0 < iVar9) {
          if (0x16 < iVar9) {
LAB_1800b1031:
            FUN_1800b1a00(param_1,param_2,param_3,param_6,0);
            return param_1;
          }
          lVar2 = 0;
          if (uVar8 != 0) {
            for (; (uVar8 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
            }
          }
          if (*(ulonglong *)(&DAT_1801832c0 + uVar11 * 8) < uVar8 >> ((byte)lVar2 & 0x3f))
          goto LAB_1800b1031;
          uVar5 = (ulonglong)uVar16;
        }
        puVar10 = (int32_t *)(*param_2 + uVar5);
        if ((uVar8 & 0xffffffff00000000) != 0) {
          uVar8 = uVar8 / 100000000;
          uVar15 = iVar14 + (int)uVar8 * -100000000;
          uVar7 = uVar15 % 10000;
          uVar15 = (uVar15 / 10000) % 10000;
          puVar10[-1] = *(int32_t *)
                         (
                         "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                         + (uVar7 % 100) * 2);
          puVar10[-2] = *(int32_t *)
                         (
                         "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                         + (uVar7 / 100) * 2);
          puVar10[-3] = *(int32_t *)
                         (
                         "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                         + (uVar15 % 100) * 2);
          puVar10 = puVar10 + -4;
          *puVar10 = *(int32_t *)
                      (
                      "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                      + (uVar15 / 100) * 2);
        }
        uVar7 = (uint)uVar8;
        while (uVar15 = (uint)uVar8, 9999 < uVar7) {
          uVar8 = (uVar8 & 0xffffffff) / 10000;
          uVar7 = (uint)uVar8;
          uVar15 = uVar15 + uVar7 * -10000;
          puVar10[-1] = *(int32_t *)
                         (
                         "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                         + (uVar15 % 100) * 2);
          puVar10 = puVar10 + -2;
          *puVar10 = *(int32_t *)
                      (
                      "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                      + (uVar15 / 100) * 2);
        }
        uVar7 = uVar15;
        if (99 < uVar15) {
          uVar7 = (uint)((uVar8 & 0xffffffff) / 100);
          puVar10 = puVar10 + -1;
          *puVar10 = *(int32_t *)
                      (
                      "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                      + (uVar15 + uVar7 * -100) * 2);
        }
        if (uVar7 < 10) {
          *(char *)((longlong)puVar10 + -1) = (char)uVar7 + '0';
        }
        else {
          puVar10[-1] = *(int32_t *)
                         (
                         "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                         + uVar7 * 2);
        }
        if (iVar9 < 1) {
          if (iVar9 != 0) {
            if (0 < (int)uVar17) {
              FUN_180150fd0((int32_t *)param_2,(int32_t *)(*param_2 + 1),(longlong)(int)uVar17
                           );
              puVar6 = *param_2 + uVar12;
              (*param_2)[(int)uVar17] = 0x2e;
              goto LAB_1800b1463;
            }
            *(int32_t *)*param_2 = 0x2e30;
            if ((int)uVar17 < 0) {
              FUN_180151670((int32_t (*) [32])(*param_2 + 2),0x30,(longlong)(int)-uVar17);
            }
          }
          puVar6 = *param_2 + uVar12;
        }
        else {
          FUN_180151670((int32_t (*) [32])(*param_2 + uVar16),0x30,uVar11);
          puVar6 = *param_2 + uVar12;
        }
        goto LAB_1800b1463;
      }
      goto LAB_1800b0fab;
    }
  }
  else if (param_5 == 2) goto LAB_1800b0fcf;
  uVar17 = (0xc6 < uVar17 + 0x62) + 4 + uVar16 + (uint)(1 < uVar16);
  if ((longlong)(ulonglong)uVar17 <= (longlong)param_3 - (longlong)param_2) {
    uVar11 = 0;
    if ((uVar8 & 0xffffffff00000000) != 0) {
      uVar8 = uVar8 / 100000000;
      uVar15 = iVar14 + (int)uVar8 * -100000000;
      uVar7 = uVar15 % 10000;
      uVar15 = (uVar15 / 10000) % 10000;
      *(int32_t *)(param_2[-1] + (ulonglong)uVar16 + 0x1f) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (uVar7 % 100) * 2);
      *(int32_t *)(param_2[-1] + (ulonglong)uVar16 + 0x1d) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (uVar7 / 100) * 2);
      uVar11 = 8;
      *(int32_t *)(param_2[-1] + (ulonglong)uVar16 + 0x1b) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (uVar15 % 100) * 2);
      *(int32_t *)(param_2[-1] + (ulonglong)uVar16 + 0x19) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (uVar15 / 100) * 2);
    }
    if (9999 < (uint)uVar8) {
      uVar12 = uVar11;
      uVar5 = uVar8;
      do {
        uVar8 = (uVar5 & 0xffffffff) / 10000;
        uVar7 = (int)uVar5 + (uint)uVar8 * -10000;
        uVar11 = (ulonglong)((int)uVar12 + 4);
        *(int32_t *)((uVar16 - uVar12) + -1 + (longlong)param_2) =
             *(int32_t *)
              (
              "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
              + (uVar7 % 100) * 2);
        *(int32_t *)((uVar16 - uVar12) + -3 + (longlong)param_2) =
             *(int32_t *)
              (
              "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
              + (uVar7 / 100) * 2);
        uVar12 = uVar11;
        uVar5 = uVar8;
      } while (9999 < (uint)uVar8);
    }
    uVar15 = (uint)uVar8;
    uVar7 = uVar15;
    if (99 < uVar15) {
      uVar7 = (uint)((uVar8 & 0xffffffff) / 100);
      *(int32_t *)((uVar16 - uVar11) + -1 + (longlong)param_2) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (uVar15 + uVar7 * -100) * 2);
    }
    if (uVar7 < 10) {
      cVar13 = (char)uVar7 + '0';
    }
    else {
      (*param_2)[2] =
           "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
           [uVar7 * 2 + 1];
      cVar13 = "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
               [uVar7 * 2];
    }
    (*param_2)[0] = cVar13;
    if (uVar16 < 2) {
      uVar16 = 1;
    }
    else {
      (*param_2)[1] = 0x2e;
      uVar16 = uVar16 + 1;
    }
    (*param_2)[uVar16] = 0x65;
    iVar9 = iVar1;
    if (iVar1 < 0) {
      iVar9 = -iVar1;
    }
    uVar4 = 0x2d;
    if (-1 < iVar1) {
      uVar4 = 0x2b;
    }
    (*param_2)[uVar16 + 1] = uVar4;
    if (iVar9 < 100) {
      *(int32_t *)(*param_2 + (uVar16 + 2)) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + iVar9 * 2);
    }
    else {
      *(int32_t *)(*param_2 + (uVar16 + 2)) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (iVar9 / 10) * 2);
      (*param_2)[uVar16 + 4] = (char)iVar9 + (char)(iVar9 / 10) * -10 + '0';
    }
    puVar6 = *param_2 + uVar17;
LAB_1800b1463:
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)puVar6;
    return param_1;
  }
LAB_1800b0fab:
  *param_1 = (longlong)param_3;
  *(int32_t *)(param_1 + 1) = 0x84;
  return param_1;
}
}

 FUN_1800b0dd0(param_1,param_2,param_3,&local_18,param_5,param_4);
    }
    return param_1;
  }
  if (param_5 == 1) {
if (4 < (longlong)param_3 - (longlong)param_2) {
      *(int32_t *)*param_2 = DAT_18018316c;
      (*param_2)[4] = DAT_180183170;
      *param_1 = (longlong)(*param_2 + 5);
      *(int32_t *)(param_1 + 1) = 0;
      return param_1;
    }
  }
}

