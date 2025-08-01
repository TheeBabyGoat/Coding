#include "compute_year.h"
#include <stdint.h>
#include <stddef.h>

int __cdecl compute_year(__int64 & __ptr64,bool & __ptr64)
   
   Library: Visual Studio 2019 Release */

int __cdecl compute_year(__int64 *param_1,bool *param_2) {
int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = *param_1;
  lVar2 = lVar6 + SUB168(SEXT816(-0x77ceb70a34ed8f47) * SEXT816(lVar6),8);
  iVar3 = (int)((ulonglong)lVar2 >> 0x18) - (int)(lVar2 >> 0x3f);
  iVar5 = iVar3 + 0x46;
  iVar1 = iVar3 + 0x45;
  lVar6 = lVar6 + ((longlong)
                   (((iVar3 + 0x171) / 400 - iVar1 / 100) +
                   ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) + -0x11) + (longlong)iVar3 * 0x16d) *
                  -0x15180;
  *param_1 = lVar6;
  if (lVar6 < 0) {
    *param_1 = lVar6 + 0x1e13380;
    bVar4 = __crt_time_is_leap_year<int>(iVar1);
    if (!bVar4) {
      return iVar1;
    }
    *param_1 = lVar6 + 0x1e28500;
    iVar5 = iVar1;
  }
  else {
    bVar4 = __crt_time_is_leap_year<int>(iVar5);
    if (!bVar4) {
      return iVar5;
    }
  }
  *param_2 = true;
  return iVar5;
}
}

