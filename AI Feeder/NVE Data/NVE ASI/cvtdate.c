#include "cvtdate.h"
#include <stdint.h>
#include <stddef.h>

void __cdecl cvtdate(enum `anonymous namespace'::transition_type,enum
   A0x7639d0b4::date_type,int,int,int,int,int,int,int,int,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
cvtdate(transition_type param_1,date_type param_2,int param_3,int param_4,int param_5,int param_6,
       int param_7,int param_8,int param_9,int param_10,int param_11) {
bool bVar1;
  errno_t eVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  long local_res8 [2];
  
  local_res8[0] = 0;
  lVar4 = (longlong)param_4;
  bVar1 = __crt_time_is_leap_year<int>(param_3);
  if (param_2 == 1) {
    if (bVar1) {
      iVar6 = *(int *)(&DAT_18018020c + lVar4 * 4);
    }
    else {
      iVar6 = *(int *)(&DAT_1801801d4 + lVar4 * 4);
    }
    iVar3 = param_3 + -1;
    iVar5 = (((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) + iVar6 + 1 +
             ((param_3 + 299) / 400 - iVar3 / 100) + param_3 * 0x16d + -0x63db) % 7;
    iVar3 = (param_5 * 7 - iVar5) + iVar6 + 1 + param_6;
    iVar6 = iVar3 + -7;
    if (param_6 < iVar5) {
      iVar6 = iVar3;
    }
    if (bVar1) {
      iVar3 = (&DAT_180180210)[lVar4];
    }
    else {
      iVar3 = *(int *)(&DAT_1801801d8 + lVar4 * 4);
    }
    if ((param_5 == 5) && (iVar3 < iVar6)) {
      iVar6 = iVar6 + -7;
    }
  }
  else {
    if (bVar1) {
      iVar6 = *(int *)(&DAT_18018020c + lVar4 * 4);
    }
    else {
      iVar6 = *(int *)(&DAT_1801801d4 + lVar4 * 4);
    }
    iVar6 = iVar6 + param_7;
  }
  iVar5 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
  iVar3 = param_3;
  if (param_1 != 0) {
    DAT_1801eb614 = iVar6;
    DAT_1801eb618 = iVar5;
    eVar2 = _get_dstbias(local_res8);
    if (eVar2 != 0) {
                    
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    DAT_1801eb618 = DAT_1801eb618 + local_res8[0] * 1000;
    iVar6 = DAT_1801eb604;
    iVar3 = DAT_1801eb600;
    iVar5 = DAT_1801eb608;
    DAT_1801eb610 = param_3;
    if (DAT_1801eb618 < 0) {
      DAT_1801eb618 = DAT_1801eb618 + 86400000;
      DAT_1801eb614 = DAT_1801eb614 + -1;
    }
    else if (86399999 < DAT_1801eb618) {
      DAT_1801eb618 = DAT_1801eb618 + -86400000;
      DAT_1801eb614 = DAT_1801eb614 + 1;
    }
  }
  DAT_1801eb608 = iVar5;
  DAT_1801eb604 = iVar6;
  DAT_1801eb600 = iVar3;
  return;
}
}

 cvtdate(0,1,iVar7,(iVar7 < 0x6b) + 3,(0x6a < iVar7) + 1,0,0,2,0,0,0);
        iVar4 = param_1[5];
        uVar13 = 0;
        uVar5 = 0;
        uVar12 = 0;
        uVar11 = 2;
        dVar3 = 5;
        if (0x6a < iVar7) {
dVar3 = dVar14;
        }
}

 cvtdate(0,1,iVar7,(uint)DAT_1801ee3fa,(uint)DAT_1801ee3fe,(uint)DAT_1801ee3fc,0,
                  (uint)DAT_1801ee400,(uint)DAT_1801ee402,(uint)DAT_1801ee404,(uint)DAT_1801ee406);
          iVar7 = param_1[5];
        }
        else {
          uVar12 = (uint)DAT_1801ee406;
          uVar13 = (uint)DAT_1801ee404;
          uVar5 = (uint)DAT_1801ee402;
          uVar11 = (uint)DAT_1801ee400;
          uVar6 = (ulonglong)DAT_1801ee3fa;
          bVar1 = __crt_time_is_leap_year<int>(iVar7);
          if (bVar1) {
iVar4 = *(int *)(&DAT_18018020c + uVar6 * 4);
          }
}

 cvtdate(1,dVar14,iVar4,uVar10,dVar3,dVar15,dVar9,uVar11,uVar12,uVar5,uVar13);
    }
    iVar7 = param_1[7];
    if (DAT_1801eb604 < DAT_1801eb614) {
if ((iVar7 < DAT_1801eb604) || (DAT_1801eb614 < iVar7)) goto LAB_18013b63d;
      if ((iVar7 <= DAT_1801eb604) || (DAT_1801eb614 <= iVar7)) {
LAB_18013b60b:
        iVar4 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar7 == DAT_1801eb604) {
          return DAT_1801eb608 <= iVar4;
        }
        return iVar4 < DAT_1801eb618;
      }
    }
}

