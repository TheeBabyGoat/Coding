#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_18013afe0 ----
int32_t FUN_18013afe0(void)

{
  return DAT_1801ee330;
}

// ---- Function: FUN_18013afe8 ----
int32_t FUN_18013afe8(void)

{
  return DAT_1801ee338;
}

// ---- Function: FID_conflict__get_daylight ----
/* Library Function - Multiple Matches With Different Base Names
    _get_daylight
    _get_dstbias
    _get_timezone
   
   Library: Visual Studio 2019 Release */

errno_t __cdecl FID_conflict__get_daylight(long *_Timezone)

{
  errno_t eVar1;
  ulong *puVar2;
  
  if (_Timezone == (long *)0x0) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_18012b794();
    eVar1 = 0x16;
  }
  else {
    *_Timezone = DAT_1801ee324;
    eVar1 = 0;
  }
  return eVar1;
}

// ---- Function: _get_dstbias ----
/* Library Function - Single Match
    _get_dstbias
   
   Library: Visual Studio 2019 Release */

errno_t __cdecl _get_dstbias(long *_Daylight_savings_bias)

{
  errno_t eVar1;
  ulong *puVar2;
  
  if (_Daylight_savings_bias == (long *)0x0) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_18012b794();
    eVar1 = 0x16;
  }
  else {
    *_Daylight_savings_bias = DAT_1801ee328;
    eVar1 = 0;
  }
  return eVar1;
}

// ---- Function: FID_conflict__get_daylight ----
/* Library Function - Multiple Matches With Different Base Names
    _get_daylight
    _get_dstbias
    _get_timezone
   
   Library: Visual Studio 2019 Release */

errno_t __cdecl FID_conflict__get_daylight(long *_Timezone)

{
  errno_t eVar1;
  ulong *puVar2;
  
  if (_Timezone == (long *)0x0) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_18012b794();
    eVar1 = 0x16;
  }
  else {
    *_Timezone = DAT_1801ee320;
    eVar1 = 0;
  }
  return eVar1;
}

// ---- Function: common_gmtime_s___int64_ ----
/* Library Function - Single Match
    int __cdecl common_gmtime_s<__int64>(struct tm * __ptr64 const,__int64 const * __ptr64 const)
   
   Library: Visual Studio 2019 Release */

int __cdecl common_gmtime_s<__int64>(tm *param_1,__int64 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  bool local_res8 [8];
  longlong local_res18 [2];
  
  iVar2 = _UNK_18015ad9c;
  iVar1 = _UNK_18015ad98;
  iVar6 = _UNK_18015ad94;
  iVar3 = _DAT_18015ad90;
  if (param_1 != (tm *)0x0) {
    param_1->tm_sec = _DAT_18015ad90;
    param_1->tm_min = iVar6;
    param_1->tm_hour = iVar1;
    param_1->tm_mday = iVar2;
    param_1->tm_mon = iVar3;
    param_1->tm_year = iVar6;
    param_1->tm_wday = iVar1;
    param_1->tm_yday = iVar2;
    param_1->tm_isdst = iVar3;
    if (param_2 != (__int64 *)0x0) {
      local_res18[0] = *param_2;
      if ((-0xa8c1 < local_res18[0]) && (local_res18[0] < 0x79358efe0)) {
        local_res8[0] = false;
        iVar3 = compute_year(local_res18,local_res8);
        piVar7 = (int *)&DAT_1801801d8;
        param_1->tm_year = iVar3;
        iVar6 = 1;
        iVar3 = (int)(local_res18[0] / 0x15180);
        param_1->tm_yday = iVar3;
        local_res18[0] = local_res18[0] + (longlong)iVar3 * -0x15180;
        piVar8 = piVar7;
        if (local_res8[0] != false) {
          piVar7 = &DAT_180180210;
          piVar8 = piVar7;
        }
        while (piVar7 = piVar7 + 1, *piVar7 < iVar3) {
          iVar6 = iVar6 + 1;
        }
        param_1->tm_mon = iVar6 + -1;
        param_1->tm_mday = iVar3 - piVar8[(longlong)iVar6 + -1];
        lVar5 = *param_2;
        param_1->tm_isdst = 0;
        param_1->tm_wday = ((int)(lVar5 / 0x15180) + 4) % 7;
        iVar3 = (int)(local_res18[0] / 0xe10);
        param_1->tm_hour = iVar3;
        local_res18[0] = local_res18[0] + (longlong)iVar3 * -0xe10;
        lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(local_res18[0]),8) + local_res18[0];
        iVar3 = (int)(lVar5 >> 5) - (int)(lVar5 >> 0x3f);
        param_1->tm_min = iVar3;
        param_1->tm_sec = (int)local_res18[0] + iVar3 * -0x3c;
        return 0;
      }
      puVar4 = __doserrno();
      *puVar4 = 0x16;
      return 0x16;
    }
  }
  puVar4 = __doserrno();
  *puVar4 = 0x16;
  FUN_18012b794();
  return 0x16;
}

// ---- Function: compute_year ----
/* Library Function - Single Match
    int __cdecl compute_year(__int64 & __ptr64,bool & __ptr64)
   
   Library: Visual Studio 2019 Release */

int __cdecl compute_year(__int64 *param_1,bool *param_2)

{
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

// ---- Function: __getgmtimebuf ----
/* Library Function - Single Match
    __getgmtimebuf
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

tm * __cdecl __getgmtimebuf(void)

{
  __acrt_ptd *p_Var1;
  LPVOID pvVar2;
  ulong *puVar3;
  
  p_Var1 = FUN_180138950();
  if (p_Var1 != (__acrt_ptd *)0x0) {
    if (*(tm **)(p_Var1 + 0x68) != (tm *)0x0) {
      return *(tm **)(p_Var1 + 0x68);
    }
    pvVar2 = _malloc_base(0x24);
    *(LPVOID *)(p_Var1 + 0x68) = pvVar2;
    FUN_18013bf3c((LPVOID)0x0);
    if (*(tm **)(p_Var1 + 0x68) != (tm *)0x0) {
      return *(tm **)(p_Var1 + 0x68);
    }
  }
  puVar3 = __doserrno();
  *puVar3 = 0xc;
  return (tm *)0x0;
}

// ---- Function: common_gmtime_s___int64_ ----
int __cdecl common_gmtime_s<__int64>(tm *param_1,__int64 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  bool abStackX_8 [8];
  longlong alStackX_18 [2];
  
  iVar2 = _UNK_18015ad9c;
  iVar1 = _UNK_18015ad98;
  iVar6 = _UNK_18015ad94;
  iVar3 = _DAT_18015ad90;
  if (param_1 != (tm *)0x0) {
    param_1->tm_sec = _DAT_18015ad90;
    param_1->tm_min = iVar6;
    param_1->tm_hour = iVar1;
    param_1->tm_mday = iVar2;
    param_1->tm_mon = iVar3;
    param_1->tm_year = iVar6;
    param_1->tm_wday = iVar1;
    param_1->tm_yday = iVar2;
    param_1->tm_isdst = iVar3;
    if (param_2 != (__int64 *)0x0) {
      alStackX_18[0] = *param_2;
      if ((-0xa8c1 < alStackX_18[0]) && (alStackX_18[0] < 0x79358efe0)) {
        abStackX_8[0] = false;
        iVar3 = compute_year(alStackX_18,abStackX_8);
        piVar7 = (int *)&DAT_1801801d8;
        param_1->tm_year = iVar3;
        iVar6 = 1;
        iVar3 = (int)(alStackX_18[0] / 0x15180);
        param_1->tm_yday = iVar3;
        alStackX_18[0] = alStackX_18[0] + (longlong)iVar3 * -0x15180;
        piVar8 = piVar7;
        if (abStackX_8[0] != false) {
          piVar7 = &DAT_180180210;
          piVar8 = piVar7;
        }
        while (piVar7 = piVar7 + 1, *piVar7 < iVar3) {
          iVar6 = iVar6 + 1;
        }
        param_1->tm_mon = iVar6 + -1;
        param_1->tm_mday = iVar3 - piVar8[(longlong)iVar6 + -1];
        lVar5 = *param_2;
        param_1->tm_isdst = 0;
        param_1->tm_wday = ((int)(lVar5 / 0x15180) + 4) % 7;
        iVar3 = (int)(alStackX_18[0] / 0xe10);
        param_1->tm_hour = iVar3;
        alStackX_18[0] = alStackX_18[0] + (longlong)iVar3 * -0xe10;
        lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(alStackX_18[0]),8) + alStackX_18[0];
        iVar3 = (int)(lVar5 >> 5) - (int)(lVar5 >> 0x3f);
        param_1->tm_min = iVar3;
        param_1->tm_sec = (int)alStackX_18[0] + iVar3 * -0x3c;
        return 0;
      }
      puVar4 = __doserrno();
      *puVar4 = 0x16;
      return 0x16;
    }
  }
  puVar4 = __doserrno();
  *puVar4 = 0x16;
  FUN_18012b794();
  return 0x16;
}

// ---- Function: FUN_18013b35c ----
bool FUN_18013b35c(int *param_1)

{
  bool bVar1;
  errno_t eVar2;
  date_type dVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  date_type dVar8;
  date_type dVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  date_type dVar14;
  long local_res10 [2];
  date_type dVar15;
  
  local_res10[0] = 0;
  eVar2 = FID_conflict__get_daylight(local_res10);
  if (eVar2 != 0) {
                    
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_res10[0] == 0) {
LAB_18013b63d:
    bVar1 = false;
  }
  else {
    iVar7 = param_1[5];
    dVar14 = 1;
    if ((iVar7 != DAT_1801eb600) || (iVar7 != DAT_1801eb610)) {
      dVar8 = 0;
      if (DAT_1801ee350 == 0) {
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
        dVar9 = 0;
        uVar10 = (0x6a < iVar7) + 10;
        dVar15 = 0;
      }
      else {
        if (DAT_1801ee3f8 == 0) {
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
          else {
            iVar4 = *(int *)(&DAT_1801801d4 + uVar6 * 4);
          }
          DAT_1801eb604 = (uint)DAT_1801ee3fe + iVar4;
          DAT_1801eb608 = ((uVar11 * 0x3c + uVar5) * 0x3c + uVar13) * 1000 + uVar12;
          DAT_1801eb600 = iVar7;
        }
        uVar10 = (uint)DAT_1801ee3a6;
        uVar11 = (uint)DAT_1801ee3ac;
        uVar12 = (uint)DAT_1801ee3ae;
        uVar5 = (uint)DAT_1801ee3b0;
        uVar13 = (uint)DAT_1801ee3b2;
        if (DAT_1801ee3a4 != 0) {
          dVar9 = (date_type)DAT_1801ee3aa;
          dVar3 = dVar8;
          dVar15 = dVar8;
        }
        else {
          dVar3 = (uint)DAT_1801ee3aa;
          dVar15 = (uint)DAT_1801ee3a8;
          dVar9 = dVar8;
        }
        dVar14 = (date_type)(DAT_1801ee3a4 == 0);
        iVar4 = iVar7;
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
    else if ((DAT_1801eb614 <= iVar7) && (iVar7 <= DAT_1801eb604)) {
      if ((iVar7 <= DAT_1801eb614) || (DAT_1801eb604 <= iVar7)) goto LAB_18013b60b;
      goto LAB_18013b63d;
    }
    bVar1 = true;
  }
  return bVar1;
}

// ---- Function: cvtdate ----
/* Library Function - Single Match
    void __cdecl cvtdate(enum `anonymous namespace'::transition_type,enum
   A0x7639d0b4::date_type,int,int,int,int,int,int,int,int,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
cvtdate(transition_type param_1,date_type param_2,int param_3,int param_4,int param_5,int param_6,
       int param_7,int param_8,int param_9,int param_10,int param_11)

{
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

// ---- Function: tzset_env_copy_to_tzname ----
/* Library Function - Single Match
    void __cdecl tzset_env_copy_to_tzname(wchar_t const * __ptr64 const,wchar_t * __ptr64 const,char
   * __ptr64 const,unsigned __int64)
   
   Library: Visual Studio 2019 Release */

void __cdecl
tzset_env_copy_to_tzname(wchar_t *param_1,wchar_t *param_2,char *param_3,__uint64 param_4)

{
  ulong uVar1;
  int32_t uVar2;
  uint uVar3;
  longlong local_28;
  longlong local_20;
  char local_10;
  
  uVar1 = FUN_180145f04(param_2,0x40,(longlong)param_1,param_4);
  if (uVar1 == 0) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
    uVar3 = 0xfde9;
    if (*(int *)(local_20 + 0xc) == 0xfde9) {
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      uVar2 = FUN_18013a680();
      if ((int)uVar2 == 0) {
        if (local_10 != (char)uVar2) {
          *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 1;
      }
      else {
        if (local_10 != '\0') {
          *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 0;
      }
    }
    FUN_180141208(uVar3,0,param_2,(int)param_4,param_3,0x3f,(LPBOOL)0x0,(LPBOOL)0x0);
    return;
  }
                    
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// ---- Function: FUN_18013b934 ----
void FUN_18013b934(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t wVar2;
  long lVar3;
  errno_t eVar4;
  uint uVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  wchar_t *pwVar8;
  int *piVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  int32_t uVar13;
  long local_res10 [2];
  uint local_res18 [2];
  longlong local_res20;
  
  puVar6 = (int32_t *)FUN_18013afe0();
  puVar7 = (int32_t *)FUN_18013afe8();
  local_res10[0] = 0;
  local_res18[0] = 0;
  eVar4 = FID_conflict__get_daylight(local_res10);
  if ((eVar4 == 0) && (eVar4 = FID_conflict__get_daylight((long *)local_res18), eVar4 == 0)) {
    if (DAT_1801ee340 != (wchar_t *)0x0) {
      pwVar8 = param_1;
      do {
        wVar1 = *pwVar8;
        wVar2 = *(wchar_t *)((longlong)pwVar8 + ((longlong)DAT_1801ee340 - (longlong)param_1));
        if (wVar1 != wVar2) break;
        pwVar8 = pwVar8 + 1;
      } while (wVar2 != L'\0');
      if (wVar1 == wVar2) {
        return;
      }
    }
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (param_1[lVar11] != L'\0');
    pwVar8 = (wchar_t *)_malloc_base(lVar11 * 2 + 2);
    if (pwVar8 != (wchar_t *)0x0) {
      FUN_18013bf3c(DAT_1801ee340);
      lVar11 = -1;
      do {
        lVar12 = lVar11;
        lVar11 = lVar12 + 1;
      } while (param_1[lVar11] != L'\0');
      DAT_1801ee340 = pwVar8;
      eVar4 = wcscpy_s(pwVar8,lVar12 + 2,param_1);
      if (eVar4 != 0) goto LAB_18013bb99;
      FUN_180151670((int32_t (*) [32])*puVar7,0,0x80);
      FUN_180151670((int32_t (*) [32])puVar7[1],0,0x80);
      FUN_180151670((int32_t (*) [32])*puVar6,0,0x40);
      FUN_180151670((int32_t (*) [32])puVar6[1],0,0x40);
      uVar13 = 3;
      tzset_env_copy_to_tzname(param_1,(wchar_t *)*puVar7,(char *)*puVar6,3);
      lVar11 = 3;
      do {
        if (*param_1 != L'\0') {
          param_1 = param_1 + 1;
        }
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      wVar1 = *param_1;
      pwVar8 = param_1 + 1;
      if (wVar1 != L'-') {
        pwVar8 = param_1;
      }
      uVar5 = FUN_180131fe4((longlong)pwVar8,&local_res20,10,uVar13);
      local_res10[0] = uVar5 * 0xe10;
      for (; (*pwVar8 == L'+' || ((ushort)(*pwVar8 + L'￐') < 10)); pwVar8 = pwVar8 + 1) {
      }
      if (*pwVar8 == L':') {
        pwVar8 = pwVar8 + 1;
        uVar5 = FUN_180131fe4((longlong)pwVar8,&local_res20,10,uVar13);
        local_res10[0] = local_res10[0] + uVar5 * 0x3c;
        wVar2 = *pwVar8;
        while ((0x2f < (ushort)wVar2 && ((ushort)wVar2 < 0x3a))) {
          pwVar8 = pwVar8 + 1;
          wVar2 = *pwVar8;
        }
        if (wVar2 == L':') {
          pwVar8 = pwVar8 + 1;
          uVar5 = FUN_180131fe4((longlong)pwVar8,&local_res20,10,uVar13);
          local_res10[0] = local_res10[0] + uVar5;
          for (; (0x2f < (ushort)*pwVar8 && ((ushort)*pwVar8 < 0x3a)); pwVar8 = pwVar8 + 1) {
          }
        }
      }
      if (wVar1 == L'-') {
        local_res10[0] = -local_res10[0];
      }
      local_res18[0] = (uint)(*pwVar8 != L'\0');
      if (*pwVar8 != L'\0') {
        tzset_env_copy_to_tzname(pwVar8,(wchar_t *)puVar7[1],(char *)puVar6[1],3);
      }
      lVar3 = local_res10[0];
      piVar9 = FUN_18013afd8();
      uVar5 = local_res18[0];
      *piVar9 = lVar3;
      puVar10 = FUN_18013afc8();
      *puVar10 = uVar5;
    }
    FUN_18013bf3c((LPVOID)0x0);
    return;
  }
LAB_18013bb99:
                    
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// ---- Function: tzset_from_system_nolock ----
/* Library Function - Single Match
    void __cdecl tzset_from_system_nolock(void)
   
   Library: Visual Studio 2019 Release */

void __cdecl tzset_from_system_nolock(void)

{
  long lVar1;
  errno_t eVar2;
  DWORD DVar3;
  UINT UVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long local_res8 [2];
  long local_res10 [2];
  long local_res18 [2];
  
  puVar5 = (int32_t *)FUN_18013afe0();
  puVar6 = (int32_t *)FUN_18013afe8();
  iVar10 = 0;
  lVar9 = 0;
  local_res8[0] = 0;
  local_res10[0] = 0;
  local_res18[0] = 0;
  eVar2 = FID_conflict__get_daylight(local_res8);
  if (((eVar2 == 0) && (eVar2 = FID_conflict__get_daylight(local_res10), eVar2 == 0)) &&
     (eVar2 = _get_dstbias(local_res18), eVar2 == 0)) {
    FUN_18013bf3c(DAT_1801ee340);
    DAT_1801ee340 = (LPVOID)0x0;
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_1801ee360);
    if (DVar3 != 0xffffffff) {
      local_res8[0] = DAT_1801ee360 * 0x3c;
      DAT_1801ee350 = 1;
      if (DAT_1801ee3a6 != 0) {
        local_res8[0] = DAT_1801ee3b4 * 0x3c + local_res8[0];
      }
      if ((DAT_1801ee3fa != 0) && (DAT_1801ee408 != 0)) {
        iVar10 = (DAT_1801ee408 - DAT_1801ee3b4) * 0x3c;
        lVar9 = 1;
      }
      local_res10[0] = lVar9;
      local_res18[0] = iVar10;
      FUN_180151670((int32_t (*) [32])*puVar6,0,0x80);
      FUN_180151670((int32_t (*) [32])puVar6[1],0,0x80);
      FUN_180151670((int32_t (*) [32])*puVar5,0,0x40);
      FUN_180151670((int32_t (*) [32])puVar5[1],0,0x40);
      UVar4 = ___lc_codepage_func();
      tzset_os_copy_to_tzname((wchar_t *)&DAT_1801ee364,(wchar_t *)*puVar6,(char *)*puVar5,UVar4);
      tzset_os_copy_to_tzname
                ((wchar_t *)&DAT_1801ee3b8,(wchar_t *)puVar6[1],(char *)puVar5[1],UVar4);
    }
    lVar9 = local_res8[0];
    piVar7 = FUN_18013afd8();
    lVar1 = local_res10[0];
    *piVar7 = lVar9;
    plVar8 = FUN_18013afc8();
    lVar9 = local_res18[0];
    *plVar8 = lVar1;
    piVar7 = FUN_18013afd0();
    *piVar7 = lVar9;
    return;
  }
                    
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// ---- Function: FUN_18013bd38 ----
void FUN_18013bd38(void)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int32_t auStack_248 [32];
  __uint64 local_228;
  __uint64 local_220;
  wchar_t local_218 [256];
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_248;
  pwVar3 = (wchar_t *)0x0;
  DAT_1801eb610 = 0xffffffff;
  DAT_1801ee350 = 0;
  DAT_1801eb600 = 0xffffffff;
  iVar1 = common_getenv_s<wchar_t>(&local_228,local_218,0x100,L"TZ");
  if (iVar1 == 0) {
    pwVar2 = local_218;
LAB_18013be2f:
    if (*pwVar2 != L'\0') {
      FUN_18013b934(pwVar2);
      goto LAB_18013bdac;
    }
  }
  else if (iVar1 == 0x22) {
    pwVar2 = (wchar_t *)_malloc_base(local_228 * 2);
    if (pwVar2 == (wchar_t *)0x0) {
      pwVar2 = (wchar_t *)0x0;
    }
    else {
      iVar1 = common_getenv_s<wchar_t>(&local_220,pwVar2,local_228,L"TZ");
      if (iVar1 == 0) {
        FUN_18013bf3c((LPVOID)0x0);
        pwVar3 = pwVar2;
        if (pwVar2 == local_218) {
          pwVar3 = (wchar_t *)0x0;
        }
        goto LAB_18013be2f;
      }
    }
    FUN_18013bf3c(pwVar2);
  }
  tzset_from_system_nolock();
LAB_18013bdac:
  FUN_18013bf3c(pwVar3);
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_248);
  return;
}

// ---- Function: tzset_os_copy_to_tzname ----
/* Library Function - Single Match
    void __cdecl tzset_os_copy_to_tzname(wchar_t const * __ptr64 const,wchar_t * __ptr64 const,char
   * __ptr64 const,unsigned int)
   
   Library: Visual Studio 2019 Release */

void __cdecl tzset_os_copy_to_tzname(wchar_t *param_1,wchar_t *param_2,char *param_3,uint param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_180145f04(param_2,0x40,(longlong)param_1,0x20);
  if (uVar1 == 0) {
    FUN_180141208(param_4,0,param_1,-1,param_3,0x40,(LPBOOL)0x0,(LPBOOL)0x0);
    return;
  }
                    
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// ---- Function: __tzset ----
/* Library Function - Single Match
    __tzset
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __tzset(void)

{
  if (DAT_1801ee354 == 0) {
    __acrt_lock(6);
    if (DAT_1801ee354 == 0) {
      FUN_18013bd38();
      LOCK();
      DAT_1801ee354 = DAT_1801ee354 + 1;
      UNLOCK();
    }
    __acrt_unlock(6);
    return;
  }
  return;
}

