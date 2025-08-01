#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_18012b47c ----
longlong FUN_18012b47c(longlong param_1,longlong param_2)

{
  DWORD dwErrCode;
  longlong lVar1;
  
  lVar1 = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    dwErrCode = GetLastError();
    *(int32_t *)(param_2 + 8) = 0;
    *(int32_t *)(param_2 + 0x10) = 1;
    SetLastError(dwErrCode);
  }
  else {
    lVar1 = *(longlong *)(param_2 + 8);
  }
  return param_1 + lVar1 * 8;
}

// ---- Function: __acrt_call_reportfault ----
/* Library Function - Single Match
    __acrt_call_reportfault
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_call_reportfault(int param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  LONG LVar2;
  PRUNTIME_FUNCTION FunctionEntry;
  int32_t auStackX_8 [8];
  int32_t auStackY_608 [32];
  DWORD64 local_5c8;
  _EXCEPTION_POINTERS local_5c0;
  ulonglong local_5b0;
  PVOID local_5a8 [2];
  EXCEPTION_RECORD local_598;
  _CONTEXT local_4f8;
  ulonglong local_28;
  
  local_28 = DAT_1801eb080 ^ (ulonglong)auStackY_608;
  if (param_1 != -1) {
    FUN_18012649c();
  }
  FUN_180151670((int32_t (*) [32])&local_598,0,0x98);
  FUN_180151670((int32_t (*) [32])&local_4f8,0,0x4d0);
  local_5c0.ExceptionRecord = &local_598;
  local_5c0.ContextRecord = &local_4f8;
  RtlCaptureContext(&local_4f8);
  FunctionEntry = RtlLookupFunctionEntry(local_4f8.Rip,&local_5c8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_5c8,local_4f8.Rip,FunctionEntry,&local_4f8,local_5a8,&local_5b0,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  local_4f8.Rsp = (DWORD64)auStackX_8;
  local_598.ExceptionCode = param_2;
  local_598.ExceptionFlags = param_3;
  BVar1 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar2 = UnhandledExceptionFilter(&local_5c0);
  if (((LVar2 == 0) && (BVar1 == 0)) && (param_1 != -1)) {
    FUN_18012649c();
  }
  FUN_1801252c0(local_28 ^ (ulonglong)auStackY_608);
  return;
}

// ---- Function: FUN_18012b624 ----
void FUN_18012b624(int32_t param_1)

{
  _DAT_1801edd78 = param_1;
  return;
}

// ---- Function: FUN_18012b62c ----
void FUN_18012b62c(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  )

{
  longlong lVar1;
  longlong local_48 [2];
  int32_t local_38;
  int32_t *local_30;
  int32_t *puStack_28;
  char local_20;
  int32_t local_1c;
  char local_18;
  int32_t local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1801ee158 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1801eb448;
    puStack_28 = PTR_DAT_1801eb450;
  }
  FUN_18012b6c8(param_1,param_2,param_3,param_4,param_5,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar1 = FUN_18012b3a8(local_48);
    *(int32_t *)(lVar1 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar1 = FUN_18012b3a8(local_48);
    *(int32_t *)(lVar1 + 0x24) = local_14;
  }
  return;
}

// ---- Function: FUN_18012b6c8 ----
void FUN_18012b6c8(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  ,longlong *param_6)

{
  __acrt_ptd *p_Var1;
  ulonglong *puVar2;
  byte bVar3;
  
  p_Var1 = FUN_18012b410(param_6);
  if (((p_Var1 == (__acrt_ptd *)0x0) || (*(longlong *)(p_Var1 + 0x3b8) == 0)) &&
     (puVar2 = (ulonglong *)FUN_18012b47c(0x1801edd78,(longlong)param_6),
     bVar3 = (byte)DAT_1801eb080 & 0x3f,
     (*puVar2 ^ DAT_1801eb080) >> bVar3 == 0 && (*puVar2 ^ DAT_1801eb080) << 0x40 - bVar3 == 0)) {
                    
    _invoke_watson(param_1,param_2,param_3,param_4,param_5);
  }
  (*(code *)PTR__guard_dispatch_icall_180157478)(param_1,param_2,param_3,param_4,param_5);
  return;
}

// ---- Function: FUN_18012b794 ----
void FUN_18012b794(void)

{
  FUN_18012b62c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}

// ---- Function: FUN_18012b7b4 ----
void FUN_18012b7b4(void)

{
  FUN_18012b62c((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                    
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// ---- Function: _invoke_watson ----
/* Library Function - Single Match
    _invoke_watson
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  BOOL BVar2;
  HANDLE hProcess;
  int32_t *puVar3;
  int32_t auStack_28 [8];
  int32_t auStack_20 [32];
  
  puVar3 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  *(int32_t *)(puVar3 + -8) = 0x18012b812;
  __acrt_call_reportfault(2,0xc0000417,1);
  *(int32_t *)(puVar3 + -8) = 0x18012b818;
  hProcess = GetCurrentProcess();
                    
                    
  TerminateProcess(hProcess,0xc0000417);
  return;
}

// ---- Function: FUN_18012b82c ----
longlong FUN_18012b82c(longlong *param_1)

{
  longlong lVar1;
  _FILETIME local_res8 [4];
  
  local_res8[0].dwLowDateTime = 0;
  local_res8[0].dwHighDateTime = 0;
  GetSystemTimeAsFileTime(local_res8);
  lVar1 = SUB168(SEXT816(-0x29406b2a1a85bd43) *
                 SEXT816((longlong)local_res8[0] + -0x19db1ded53e8000),8) +
          (longlong)local_res8[0] + -0x19db1ded53e8000;
  lVar1 = (lVar1 >> 0x17) - (lVar1 >> 0x3f);
  if (0x793582aff < lVar1) {
    lVar1 = -1;
  }
  if (param_1 != (longlong *)0x0) {
    *param_1 = lVar1;
  }
  return lVar1;
}

// ---- Function: FUN_18012b8a0 ----
int FUN_18012b8a0(tm *param_1,__int64 *param_2)

{
  int iVar1;
  int iVar2;
  errno_t eVar3;
  int iVar4;
  int iVar5;
  ulong *puVar6;
  longlong lVar7;
  longlong lVar8;
  long local_res8 [4];
  long local_res18 [2];
  long local_res20 [2];
  longlong local_28 [2];
  
  iVar2 = _UNK_18015ad9c;
  iVar1 = _UNK_18015ad98;
  iVar5 = _UNK_18015ad94;
  iVar4 = _DAT_18015ad90;
  if (param_1 != (tm *)0x0) {
    param_1->tm_sec = _DAT_18015ad90;
    param_1->tm_min = iVar5;
    param_1->tm_hour = iVar1;
    param_1->tm_mday = iVar2;
    param_1->tm_mon = iVar4;
    param_1->tm_year = iVar5;
    param_1->tm_wday = iVar1;
    param_1->tm_yday = iVar2;
    param_1->tm_isdst = iVar4;
    if (param_2 != (__int64 *)0x0) {
      if ((*param_2 < 0) || (0x793582aff < *param_2)) {
        puVar6 = __doserrno();
        *puVar6 = 0x16;
        return 0x16;
      }
      __tzset();
      local_res18[0] = 0;
      local_res20[0] = 0;
      local_res8[0] = 0;
      eVar3 = FID_conflict__get_daylight(local_res18);
      if ((eVar3 == 0) &&
         ((eVar3 = _get_dstbias(local_res20), eVar3 == 0 &&
          (eVar3 = FID_conflict__get_daylight(local_res8), eVar3 == 0)))) {
        if (*param_2 - 0x3f481U < 0x7935041fe) {
          local_28[0] = *param_2 - (longlong)local_res8[0];
          iVar4 = common_gmtime_s<__int64>(param_1,local_28);
          if (iVar4 != 0) {
            return iVar4;
          }
          if ((local_res18[0] != 0) && (iVar4 = _isindst(param_1), iVar4 != 0)) {
            local_28[0] = local_28[0] - local_res20[0];
            iVar4 = common_gmtime_s<__int64>(param_1,local_28);
            if (iVar4 != 0) {
              return iVar4;
            }
            param_1->tm_isdst = 1;
          }
        }
        else {
          iVar4 = common_gmtime_s<__int64>(param_1,param_2);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = param_1->tm_sec;
          if ((local_res18[0] != 0) && (iVar5 = _isindst(param_1), iVar5 != 0)) {
            local_res8[0] = local_res8[0] + local_res20[0];
            param_1->tm_isdst = 1;
          }
          lVar8 = (longlong)iVar4 - (longlong)local_res8[0];
          lVar7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar8),8) + lVar8;
          iVar4 = (int)lVar8 + ((int)(lVar7 >> 5) - (int)(lVar7 >> 0x3f)) * -0x3c;
          param_1->tm_sec = iVar4;
          if (iVar4 < 0) {
            lVar8 = lVar8 + -0x3c;
            param_1->tm_sec = iVar4 + 0x3c;
          }
          lVar8 = lVar8 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar8),8);
          lVar8 = ((lVar8 >> 5) - (lVar8 >> 0x3f)) + (longlong)param_1->tm_min;
          lVar7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar8),8) + lVar8;
          iVar4 = (int)lVar8 + ((int)(lVar7 >> 5) - (int)(lVar7 >> 0x3f)) * -0x3c;
          param_1->tm_min = iVar4;
          if (iVar4 < 0) {
            lVar8 = lVar8 + -0x3c;
            param_1->tm_min = iVar4 + 0x3c;
          }
          lVar8 = lVar8 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar8),8);
          lVar8 = ((lVar8 >> 5) - (lVar8 >> 0x3f)) + (longlong)param_1->tm_hour;
          iVar4 = (int)lVar8 + (int)(lVar8 / 0x18) * -0x18;
          param_1->tm_hour = iVar4;
          if (iVar4 < 0) {
            lVar8 = lVar8 + -0x18;
            param_1->tm_hour = iVar4 + 0x18;
          }
          lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
          lVar8 = (lVar8 >> 2) - (lVar8 >> 0x3f);
          iVar4 = (int)lVar8;
          if (lVar8 < 1) {
            if (lVar8 < 0) {
              iVar5 = param_1->tm_mday + iVar4;
              param_1->tm_mday = iVar5;
              param_1->tm_wday = (param_1->tm_wday + 7 + iVar4) % 7;
              iVar4 = param_1->tm_yday + iVar4;
              if (iVar5 < 1) {
                param_1->tm_year = param_1->tm_year + -1;
                param_1->tm_mday = iVar5 + 0x1f;
                param_1->tm_yday = iVar4 + 0x16d;
                param_1->tm_mon = 0xb;
              }
              else {
                param_1->tm_yday = iVar4;
              }
            }
          }
          else {
            param_1->tm_mday = param_1->tm_mday + iVar4;
            param_1->tm_yday = param_1->tm_yday + iVar4;
            param_1->tm_wday = (param_1->tm_wday + iVar4) % 7;
          }
        }
        return 0;
      }
                    
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  puVar6 = __doserrno();
  *puVar6 = 0x16;
  FUN_18012b794();
  return 0x16;
}

// ---- Function: FID_conflict__localtime64 ----
/* Library Function - Multiple Matches With Different Base Names
    _gmtime32
    _gmtime64
    _localtime32
    _localtime64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

tm * __cdecl FID_conflict__localtime64(__time32_t *_Time)

{
  int iVar1;
  tm *ptVar2;
  tm *ptVar3;
  
  ptVar2 = __getgmtimebuf();
  ptVar3 = (tm *)0x0;
  if ((ptVar2 != (tm *)0x0) &&
     (iVar1 = FUN_18012b8a0(ptVar2,(__int64 *)_Time), ptVar3 = ptVar2, iVar1 != 0)) {
    ptVar3 = (tm *)0x0;
  }
  return ptVar3;
}

// ---- Function: __crt_time_is_leap_year_int_ ----
/* Library Function - Single Match
    bool __cdecl __crt_time_is_leap_year<int>(int)
   
   Library: Visual Studio 2015 Release */

bool __cdecl __crt_time_is_leap_year<int>(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar1 == 0) && (param_1 != (param_1 / 100) * 100)) {
    return true;
  }
  return param_1 + 0x76c == ((param_1 + 0x76c) / 400) * 400;
}

// ---- Function: _LocaleUpdate ----
/* Library Function - Single Match
    public: __cdecl _LocaleUpdate::_LocaleUpdate(struct __crt_locale_pointers * __ptr64 const)
   __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,__crt_locale_pointers *param_1)

{
  _LocaleUpdate *p_Var1;
  uint uVar2;
  __acrt_ptd *p_Var3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  
  this[0x18] = (_LocaleUpdate)0x0;
  p_Var1 = this + 8;
  if (param_1 == (__crt_locale_pointers *)0x0) {
    uVar4 = PTR_PTR_1801eb448._0_4_;
    uVar5 = PTR_PTR_1801eb448._4_4_;
    uVar6 = PTR_DAT_1801eb450._0_4_;
    uVar7 = PTR_DAT_1801eb450._4_4_;
    if (DAT_1801ee158 != 0) {
      p_Var3 = FUN_1801387d8();
      *(__acrt_ptd **)this = p_Var3;
      *(longlong *)p_Var1 = *(longlong *)(p_Var3 + 0x90);
      *(int32_t *)(this + 0x10) = *(int32_t *)(p_Var3 + 0x88);
      FUN_18013c1fc((longlong)p_Var3,(longlong *)p_Var1);
      FUN_18013c268(*(longlong *)this,(longlong *)(this + 0x10));
      uVar2 = *(uint *)(*(longlong *)this + 0x3a8);
      if ((uVar2 & 2) != 0) {
        return this;
      }
      *(uint *)(*(longlong *)this + 0x3a8) = uVar2 | 2;
      this[0x18] = (_LocaleUpdate)0x1;
      return this;
    }
  }
  else {
    uVar4 = *(int32_t *)param_1;
    uVar5 = *(int32_t *)(param_1 + 4);
    uVar6 = *(int32_t *)(param_1 + 8);
    uVar7 = *(int32_t *)(param_1 + 0xc);
  }
  *(int32_t *)p_Var1 = uVar4;
  *(int32_t *)(this + 0xc) = uVar5;
  *(int32_t *)(this + 0x10) = uVar6;
  *(int32_t *)(this + 0x14) = uVar7;
  return this;
}

// ---- Function: compute_iso_week_internal ----
/* Library Function - Single Match
    int __cdecl compute_iso_week_internal(int,int,int)
   
   Library: Visual Studio 2015 Release */

int __cdecl compute_iso_week_internal(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = ((param_3 - (param_2 + 6) % 7) + 7) / 7;
  bVar1 = __crt_time_is_leap_year<int>(param_1);
  iVar5 = param_3 - (uint)bVar1;
  iVar4 = ((param_2 - param_3) + 0x173) % 7;
  iVar3 = (int)(bVar1 + 0x16d + iVar4) % 7;
  if ((((iVar5 < 0x16c) || (iVar3 != 2)) && ((iVar5 < 0x16b || (iVar3 != 3)))) &&
     ((iVar5 < 0x16a || (iVar3 != 4)))) {
    if (iVar4 - 2U < 3) {
      iVar2 = iVar2 + 1;
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}

// ---- Function: FUN_18012bdd4 ----
int32_t
FUN_18012bdd4(int32_t param_1,ushort param_2,uint *param_3,longlong *param_4,ulonglong *param_5,
             int32_t **param_6,byte param_7)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  errno_t eVar4;
  uint uVar5;
  int32_t **in_RAX;
  int32_t uVar6;
  ulong *puVar7;
  uint uVar8;
  short *psVar9;
  ushort uVar10;
  uint uVar11;
  short *psVar12;
  bool bVar13;
  bool bVar14;
  uint local_res10 [2];
  long local_38 [4];
  
  if (param_2 < 0x5b) {
    if (param_2 == 0x5a) {
      __tzset();
      param_6 = (int32_t **)FUN_18013afe8();
      uVar1 = *param_5;
      for (psVar9 = *(short **)((ulonglong)(-(uint)(param_3[8] != 0) & 8) + (longlong)param_6);
          (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
        param_6 = (int32_t **)*param_4;
        *(short *)param_6 = *psVar9;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 - 1;
        uVar1 = *param_5;
      }
      goto LAB_18012cca0;
    }
    uVar10 = 0x4d;
    if (0x4d < param_2) {
      if (param_2 == 0x52) {
        uVar6 = FUN_18012bdd4(param_1,0x48,param_3,param_4,param_5,param_6,param_7);
        if ((char)uVar6 != '\0') {
          uVar1 = *param_5;
          for (psVar9 = &DAT_1801d8db0; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
            *(short *)*param_4 = *psVar9;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 - 1;
            uVar1 = *param_5;
          }
          goto LAB_18012c0ec;
        }
      }
      else {
        if (param_2 == 0x53) {
          uVar8 = *param_3;
          bVar13 = uVar8 < 0x3c;
          bVar14 = uVar8 == 0x3c;
          goto LAB_18012bf59;
        }
        if (param_2 != 0x54) {
          if (param_2 != 0x55) {
            if (param_2 == 0x56) {
              uVar8 = param_3[6];
              uVar11 = param_3[5];
              uVar5 = compute_iso_week_internal(uVar11,uVar8,param_3[7]);
              if (uVar5 == 0) {
                bVar13 = __crt_time_is_leap_year<int>(uVar11 - 1);
                uVar8 = compute_iso_week_internal
                                  (uVar11 - 1,(uVar8 - param_3[7]) + 7,bVar13 + 0x16d);
              }
              else {
                uVar8 = 1;
                if (0 < (int)uVar5) {
                  uVar8 = uVar5;
                }
              }
              uVar10 = ~-(ushort)(param_7 != 0) & 0x30;
              goto LAB_18012be88;
            }
            if (param_2 != 0x57) {
              if (param_2 == 0x58) goto LAB_18012c15a;
              if (param_2 != 0x59) goto LAB_18012c20f;
              uVar8 = param_3[5] + 0x76c;
              if (uVar8 < 10000) {
                uVar10 = ~-(ushort)(param_7 != 0) & 0x30;
                goto LAB_18012c6f6;
              }
              goto LAB_18012c1ff;
            }
          }
          uVar11 = param_3[6];
          if (uVar11 < 7) {
            uVar8 = 0;
            if (param_2 == 0x57) {
              if (uVar11 == 0) {
                uVar11 = 6;
              }
              else {
                uVar11 = uVar11 - 1;
              }
            }
            uVar5 = param_3[7];
            if (uVar5 < 0x16e) {
              if (((int)uVar11 <= (int)uVar5) &&
                 (uVar8 = (int)uVar5 / 7, (int)uVar11 <= (int)uVar5 % 7)) {
                uVar8 = uVar8 + 1;
              }
              uVar10 = ~-(ushort)(param_7 != 0) & 0x30;
              goto LAB_18012be88;
            }
          }
          goto LAB_18012c1ff;
        }
        uVar6 = FUN_18012bdd4(param_1,0x48,param_3,param_4,param_5,param_6,param_7);
        if ((char)uVar6 != '\0') {
          psVar12 = &DAT_1801d8db0;
          uVar1 = *param_5;
          for (psVar9 = &DAT_1801d8db0; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
            *(short *)*param_4 = *psVar9;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 - 1;
            uVar1 = *param_5;
          }
          uVar6 = FUN_18012bdd4(param_1,0x4d,param_3,param_4,param_5,param_6,param_7);
          if ((char)uVar6 != '\0') {
            uVar1 = *param_5;
            for (; (uVar1 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
              *(short *)*param_4 = *psVar12;
              *param_4 = *param_4 + 2;
              *param_5 = *param_5 - 1;
              uVar1 = *param_5;
            }
            uVar10 = 0x53;
            goto LAB_18012c0ec;
          }
        }
      }
LAB_18012bfb3:
      in_RAX = (int32_t **)__doserrno();
      *(ulong *)in_RAX = 0x16;
      goto LAB_18012c20f;
    }
    if (param_2 == 0x4d) {
      uVar8 = param_3[1];
      bVar13 = uVar8 < 0x3b;
      bVar14 = uVar8 == 0x3b;
LAB_18012bf59:
      if (bVar13 || bVar14) {
LAB_18012bf5f:
        uVar10 = ~-(ushort)(param_7 != 0) & 0x30;
LAB_18012be88:
        iVar3 = 2;
LAB_18012be94:
        param_6 = (int32_t **)FUN_18012ccc0(uVar8,iVar3,param_4,param_5,uVar10);
LAB_18012cca0:
        return CONCAT71((int7)((ulonglong)param_6 >> 8),1);
      }
    }
    else {
      if (param_2 == 0x25) {
        uVar1 = *param_5;
        param_6 = in_RAX;
        for (psVar9 = &DAT_180179564; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
          param_6 = (int32_t **)*param_4;
          *(short *)param_6 = *psVar9;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 - 1;
          uVar1 = *param_5;
        }
        goto LAB_18012cca0;
      }
      if (param_2 == 0x41) {
        if (param_3[6] < 7) {
          uVar1 = *param_5;
          for (psVar9 = (short *)param_6[(longlong)(int)param_3[6] + 0x33];
              (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
            param_6 = (int32_t **)*param_4;
            *(short *)param_6 = *psVar9;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 - 1;
            uVar1 = *param_5;
          }
          goto LAB_18012cca0;
        }
      }
      else if (param_2 == 0x42) {
        if (param_3[4] < 0xc) {
          uVar1 = *param_5;
          for (psVar9 = (short *)param_6[(longlong)(int)param_3[4] + 0x46];
              (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
            param_6 = (int32_t **)*param_4;
            *(short *)param_6 = *psVar9;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 - 1;
            uVar1 = *param_5;
          }
          goto LAB_18012cca0;
        }
      }
      else {
        if (param_2 != 0x43) {
          if (param_2 == 0x44) {
            uVar6 = FUN_18012bdd4(param_1,0x6d,param_3,param_4,param_5,param_6,param_7);
            if ((char)uVar6 != '\0') {
              psVar12 = &DAT_180179554;
              uVar1 = *param_5;
              for (psVar9 = &DAT_180179554; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
                *(short *)*param_4 = *psVar9;
                *param_4 = *param_4 + 2;
                *param_5 = *param_5 - 1;
                uVar1 = *param_5;
              }
              uVar6 = FUN_18012bdd4(param_1,100,param_3,param_4,param_5,param_6,param_7);
              if ((char)uVar6 != '\0') {
                uVar1 = *param_5;
                for (; (uVar1 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
                  *(short *)*param_4 = *psVar12;
                  *param_4 = *param_4 + 2;
                  *param_5 = *param_5 - 1;
                  uVar1 = *param_5;
                }
                uVar10 = 0x79;
                goto LAB_18012c0ec;
              }
            }
          }
          else {
            if (param_2 != 0x46) {
              if (param_2 == 0x47) {
                uVar8 = param_3[5];
                if (uVar8 + 0x76c < 10000) {
                  iVar3 = compute_iso_week_internal(uVar8,param_3[6],param_3[7]);
                  if (iVar3 == 0) {
                    uVar8 = uVar8 - 1;
                  }
                  else if (iVar3 < 1) {
                    uVar8 = uVar8 + 1;
                  }
                  uVar8 = uVar8 + 0x76c;
                  uVar10 = 0x30;
LAB_18012c6f6:
                  iVar3 = 4;
                  goto LAB_18012be94;
                }
                goto LAB_18012c1ff;
              }
              if (param_2 == 0x48) {
                uVar8 = param_3[2];
                bVar13 = uVar8 < 0x17;
                bVar14 = uVar8 == 0x17;
                goto LAB_18012bf59;
              }
              if (param_2 != 0x49) goto LAB_18012c20f;
              if (0x17 < param_3[2]) goto LAB_18012c1ff;
              uVar8 = (int)param_3[2] % 0xc;
              if (uVar8 == 0) {
                uVar8 = 0xc;
              }
              goto LAB_18012bf5f;
            }
            uVar6 = FUN_18012bdd4(param_1,0x59,param_3,param_4,param_5,param_6,param_7);
            if ((char)uVar6 != '\0') {
              psVar12 = &DAT_180178284;
              uVar1 = *param_5;
              for (psVar9 = &DAT_180178284; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
                *(short *)*param_4 = *psVar9;
                *param_4 = *param_4 + 2;
                *param_5 = *param_5 - 1;
                uVar1 = *param_5;
              }
              uVar6 = FUN_18012bdd4(param_1,0x6d,param_3,param_4,param_5,param_6,param_7);
              if ((char)uVar6 != '\0') {
                uVar1 = *param_5;
                for (; (uVar1 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
                  *(short *)*param_4 = *psVar12;
                  *param_4 = *param_4 + 2;
                  *param_5 = *param_5 - 1;
                  uVar1 = *param_5;
                }
                uVar10 = 100;
                goto LAB_18012c0ec;
              }
            }
          }
          goto LAB_18012bfb3;
        }
        if (param_3[5] + 0x76c < 10000) {
          uVar8 = (int)(param_3[5] + 0x76c) / 100;
          goto LAB_18012c3d5;
        }
      }
    }
  }
  else if (param_2 < 0x6f) {
    if (param_2 == 0x6e) {
      uVar1 = *param_5;
      param_6 = in_RAX;
      for (psVar9 = &DAT_180179558; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
        param_6 = (int32_t **)*param_4;
        *(short *)param_6 = *psVar9;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 - 1;
        uVar1 = *param_5;
      }
      goto LAB_18012cca0;
    }
    if (param_2 == 0x61) {
      if (param_3[6] < 7) {
        uVar1 = *param_5;
        for (psVar9 = (short *)param_6[(longlong)(int)param_3[6] + 0x2c];
            (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
          param_6 = (int32_t **)*param_4;
          *(short *)param_6 = *psVar9;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 - 1;
          uVar1 = *param_5;
        }
        goto LAB_18012cca0;
      }
    }
    else if (param_2 == 0x62) {
LAB_18012c169:
      if (param_3[4] < 0xc) {
        uVar1 = *param_5;
        for (psVar9 = (short *)param_6[(longlong)(int)param_3[4] + 0x3a];
            (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
          param_6 = (int32_t **)*param_4;
          *(short *)param_6 = *psVar9;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 - 1;
          uVar1 = *param_5;
        }
        goto LAB_18012cca0;
      }
    }
    else {
      if (param_2 == 99) {
        if ((param_6 == &PTR_DAT_18017afe0) && (param_7 == 0)) {
          uVar6 = FUN_18012bdd4(param_1,0x61,param_3,param_4,param_5,&PTR_DAT_18017afe0,0);
          if ((char)uVar6 != '\0') {
            psVar12 = &DAT_180179550;
            uVar1 = *param_5;
            for (psVar9 = &DAT_180179550; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
              *(short *)*param_4 = *psVar9;
              *param_4 = *param_4 + 2;
              *param_5 = *param_5 - 1;
              uVar1 = *param_5;
            }
            uVar6 = FUN_18012bdd4(param_1,0x62,param_3,param_4,param_5,&PTR_DAT_18017afe0,0);
            if ((char)uVar6 != '\0') {
              uVar1 = *param_5;
              for (psVar9 = &DAT_180179550; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
                *(short *)*param_4 = *psVar9;
                *param_4 = *param_4 + 2;
                *param_5 = *param_5 - 1;
                uVar1 = *param_5;
              }
              uVar6 = FUN_18012bdd4(param_1,0x65,param_3,param_4,param_5,&PTR_DAT_18017afe0,0);
              if ((char)uVar6 != '\0') {
                uVar1 = *param_5;
                for (psVar9 = &DAT_180179550; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
                  *(short *)*param_4 = *psVar9;
                  *param_4 = *param_4 + 2;
                  *param_5 = *param_5 - 1;
                  uVar1 = *param_5;
                }
                uVar6 = FUN_18012bdd4(param_1,0x54,param_3,param_4,param_5,&PTR_DAT_18017afe0,0);
                if ((char)uVar6 != '\0') {
                  uVar1 = *param_5;
                  for (; (uVar1 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
                    *(short *)*param_4 = *psVar12;
                    *param_4 = *param_4 + 2;
                    *param_5 = *param_5 - 1;
                    uVar1 = *param_5;
                  }
                  param_7 = 0;
                  uVar10 = 0x59;
                  goto LAB_18012c0ec;
                }
              }
            }
          }
        }
        else {
          cVar2 = FUN_18012ce10(param_1,(uint)param_7,(WORD *)param_3,param_4,(longlong *)param_5,
                                (longlong)param_6);
          if (cVar2 != '\0') {
            uVar1 = *param_5;
            for (psVar9 = &DAT_180179550; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
              *(short *)*param_4 = *psVar9;
              *param_4 = *param_4 + 2;
              *param_5 = *param_5 - 1;
              uVar1 = *param_5;
            }
LAB_18012c15a:
            uVar8 = 2;
            goto LAB_18012c15f;
          }
        }
        goto LAB_18012bfb3;
      }
      if (param_2 == 100) {
        uVar8 = param_3[3];
        bVar13 = uVar8 - 1 < 0x1e;
        bVar14 = uVar8 - 1 == 0x1e;
        goto LAB_18012bf59;
      }
      if (param_2 == 0x65) {
        uVar8 = param_3[3];
        if (uVar8 - 1 < 0x1f) {
          uVar10 = (ushort)(byte)((param_7 ^ 1) << 5);
          goto LAB_18012be88;
        }
      }
      else if (param_2 == 0x67) {
        uVar8 = param_3[5];
        if (uVar8 + 0x76c < 10000) {
          iVar3 = compute_iso_week_internal(uVar8,param_3[6],param_3[7]);
          if (iVar3 == 0) {
            uVar8 = uVar8 - 1;
          }
          else if (iVar3 < 1) {
            uVar8 = uVar8 + 1;
          }
          uVar10 = 0x30;
          uVar8 = (int)(uVar8 + 0x76c) % 100;
          goto LAB_18012be88;
        }
      }
      else {
        if (param_2 == 0x68) goto LAB_18012c169;
        if (param_2 == 0x6a) {
          if (param_3[7] < 0x16e) {
            uVar10 = ~-(ushort)(param_7 != 0) & 0x30;
            uVar8 = param_3[7] + 1;
            iVar3 = 3;
            goto LAB_18012be94;
          }
        }
        else {
          if (param_2 != 0x6d) goto LAB_18012c20f;
          if (param_3[4] < 0xc) {
            uVar10 = ~-(ushort)(param_7 != 0) & 0x30;
            uVar8 = param_3[4] + 1;
            goto LAB_18012be88;
          }
        }
      }
    }
  }
  else if (param_2 == 0x70) {
    if (param_3[2] < 0x18) {
      if ((int)param_3[2] < 0xc) {
        psVar9 = (short *)param_6[0x52];
      }
      else {
        psVar9 = (short *)param_6[0x53];
      }
      uVar1 = *param_5;
      for (; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
        param_6 = (int32_t **)*param_4;
        *(short *)param_6 = *psVar9;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 - 1;
        uVar1 = *param_5;
      }
      goto LAB_18012cca0;
    }
  }
  else {
    if (param_2 == 0x72) {
      if (param_6 == &PTR_DAT_18017afe0) {
        uVar6 = FUN_18012bdd4(param_1,0x49,param_3,param_4,param_5,&PTR_DAT_18017afe0,param_7);
        if ((char)uVar6 != '\0') {
          psVar12 = &DAT_1801d8db0;
          uVar1 = *param_5;
          for (psVar9 = &DAT_1801d8db0; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
            *(short *)*param_4 = *psVar9;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 - 1;
            uVar1 = *param_5;
          }
          uVar6 = FUN_18012bdd4(param_1,0x4d,param_3,param_4,param_5,&PTR_DAT_18017afe0,param_7);
          if ((char)uVar6 != '\0') {
            uVar1 = *param_5;
            for (; (uVar1 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
              *(short *)*param_4 = *psVar12;
              *param_4 = *param_4 + 2;
              *param_5 = *param_5 - 1;
              uVar1 = *param_5;
            }
            uVar6 = FUN_18012bdd4(param_1,0x53,param_3,param_4,param_5,&PTR_DAT_18017afe0,param_7);
            if ((char)uVar6 != '\0') {
              uVar1 = *param_5;
              for (psVar9 = &DAT_180179550; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
                *(short *)*param_4 = *psVar9;
                *param_4 = *param_4 + 2;
                *param_5 = *param_5 - 1;
                uVar1 = *param_5;
              }
              uVar10 = 0x70;
              goto LAB_18012c0ec;
            }
          }
        }
        goto LAB_18012bfb3;
      }
      uVar10 = 0x58;
LAB_18012c0ec:
      param_6 = (int32_t **)FUN_18012bdd4(param_1,uVar10,param_3,param_4,param_5,param_6,param_7);
LAB_18012c0f1:
      if ((char)param_6 != '\0') goto LAB_18012cca0;
      goto LAB_18012bfb3;
    }
    if (param_2 == 0x74) {
      uVar1 = *param_5;
      param_6 = in_RAX;
      for (psVar9 = &DAT_18017955c; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
        param_6 = (int32_t **)*param_4;
        *(short *)param_6 = *psVar9;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 - 1;
        uVar1 = *param_5;
      }
      goto LAB_18012cca0;
    }
    if ((param_2 == 0x75) || (param_2 == 0x77)) {
      uVar8 = param_3[6];
      if (6 < uVar8) goto LAB_18012c1ff;
      if ((uVar8 == 0) && (param_2 == 0x75)) {
        uVar8 = 7;
      }
      uVar10 = ~-(ushort)(param_7 != 0) & 0x30;
      iVar3 = 1;
      goto LAB_18012be94;
    }
    if (param_2 == 0x78) {
      uVar8 = (uint)param_7;
LAB_18012c15f:
      param_6 = (int32_t **)
                FUN_18012ce10(param_1,uVar8,(WORD *)param_3,param_4,(longlong *)param_5,
                              (longlong)param_6);
      goto LAB_18012c0f1;
    }
    if (param_2 == 0x79) {
      if (param_3[5] + 0x76c < 10000) {
        uVar8 = (int)(param_3[5] + 0x76c) % 100;
LAB_18012c3d5:
        uVar10 = ~-(ushort)(param_7 != 0) & 0x30;
        goto LAB_18012be88;
      }
    }
    else {
      if (param_2 != 0x7a) goto LAB_18012c20f;
      __tzset();
      local_res10[0] = 0;
      eVar4 = FID_conflict__get_daylight((long *)local_res10);
      if (eVar4 == 0) {
        if (param_3[8] != 0) {
          local_38[0] = 0;
          eVar4 = _get_dstbias(local_38);
          if (eVar4 != 0) goto LAB_18012c1ff;
          local_res10[0] = local_res10[0] + local_38[0];
        }
        psVar9 = &DAT_180178284;
        iVar3 = (int)((local_res10[0] ^ (int)local_res10[0] >> 0x1f) - ((int)local_res10[0] >> 0x1f)
                     ) / 0x3c;
        uVar8 = iVar3 % 0x3c;
        if ((int)local_res10[0] < 1) {
          psVar9 = &DAT_180179560;
        }
        uVar1 = *param_5;
        for (; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
          *(short *)*param_4 = *psVar9;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 - 1;
          uVar1 = *param_5;
        }
        FUN_18012ccc0(iVar3 / 0x3c,2,param_4,param_5,0x30);
        iVar3 = 2;
        uVar10 = 0x30;
        goto LAB_18012be94;
      }
    }
  }
LAB_18012c1ff:
  puVar7 = __doserrno();
  *puVar7 = 0x16;
  in_RAX = (int32_t **)FUN_18012b794();
LAB_18012c20f:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}

// ---- Function: FUN_18012ccc0 ----
void FUN_18012ccc0(uint param_1,int param_2,longlong *param_3,ulonglong *param_4,short param_5)

{
  ulonglong uVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  longlong lVar6;
  int iVar7;
  short *psVar8;
  bool bVar9;
  
  if (param_5 == 0) {
    psVar5 = (short *)*param_3;
    if (1 < *param_4) {
      do {
        psVar8 = psVar5;
        uVar2 = (int)param_1 / 10;
        *psVar8 = (short)param_1 + (short)uVar2 * -10 + 0x30;
        uVar1 = *param_4;
        *param_4 = uVar1 - 1;
        if ((int)uVar2 < 1) break;
        psVar5 = psVar8 + 1;
        param_1 = uVar2;
      } while (1 < uVar1 - 1);
      psVar5 = (short *)*param_3;
      *param_3 = (longlong)(psVar8 + 1);
      for (; psVar5 < psVar8; psVar5 = psVar5 + 1) {
        sVar3 = *psVar8;
        *psVar8 = *psVar5;
        psVar8 = psVar8 + -1;
        *psVar5 = sVar3;
      }
      return;
    }
    *param_3 = (longlong)((short *)*param_3 + -*param_4);
  }
  else if ((ulonglong)(longlong)param_2 < *param_4) {
    iVar4 = 0;
    if (param_2 != 0) {
      lVar6 = (longlong)(param_2 + -1) * 2;
      iVar7 = param_2 + -1;
      iVar4 = 0;
      do {
        sVar3 = param_5;
        if (param_1 != 0) {
          sVar3 = (short)param_1 +
                  (((short)((int)param_1 / 10) + (short)((int)param_1 >> 0x1f)) -
                  (short)((longlong)(int)param_1 * 0x66666667 >> 0x3f)) * -10 + 0x30;
        }
        *(short *)(lVar6 + *param_3) = sVar3;
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + -2;
        param_1 = (int)param_1 / 10;
        bVar9 = iVar7 != 0;
        iVar7 = iVar7 + -1;
      } while (bVar9);
    }
    *param_3 = *param_3 + (longlong)iVar4 * 2;
    *param_4 = *param_4 - (longlong)iVar4;
    return;
  }
  *param_4 = 0;
  return;
}

// ---- Function: FUN_18012ce10 ----
void FUN_18012ce10(int32_t param_1,int param_2,WORD *param_3,longlong *param_4,longlong *param_5,
                  longlong param_6)

{
  short sVar1;
  ushort *puVar2;
  uint *puVar3;
  int32_t uVar4;
  int32_t *puVar5;
  ushort uVar6;
  int iVar7;
  ulonglong uVar8;
  int32_t *puVar9;
  int32_t uVar10;
  ulong *puVar11;
  WCHAR WVar12;
  uint uVar13;
  ulonglong uVar14;
  short *psVar15;
  int32_t uVar16;
  int32_t *puVar17;
  int32_t *puVar18;
  int32_t *puVar19;
  WCHAR *pWVar20;
  LPCWSTR pWVar21;
  longlong lVar22;
  int32_t uVar23;
  int32_t auStackY_a8 [32];
  uint *local_68;
  int32_t local_60;
  SYSTEMTIME local_58;
  ulonglong local_48;
  
  puVar18 = auStackY_a8;
  puVar19 = auStackY_a8;
  local_48 = DAT_1801eb080 ^ (ulonglong)&local_68;
  local_68 = (uint *)param_3;
  local_60 = param_1;
  if (param_2 == 0) {
    pWVar21 = *(LPCWSTR *)(param_6 + 0x2a0);
  }
  else if (param_2 == 1) {
    pWVar21 = *(LPCWSTR *)(param_6 + 0x2a8);
  }
  else {
    pWVar21 = *(LPCWSTR *)(param_6 + 0x2b0);
  }
  puVar5 = auStackY_a8;
  if (*(int *)(param_6 + 0x158) != 1) {
    local_58.wYear = param_3[10] + 0x76c;
    local_58.wMonth = param_3[8] + 1;
    local_58.wMilliseconds = 0;
    local_58.wDay = param_3[6];
    local_58.wHour = param_3[4];
    local_58.wMinute = param_3[2];
    local_58.wSecond = *param_3;
    if (param_2 == 2) {
      iVar7 = FUN_18013a9c0(*(ushort **)(param_6 + 0x2b8),0,&local_58,pWVar21,(LPWSTR)0x0,0);
    }
    else {
      iVar7 = FUN_18013a870(*(ushort **)(param_6 + 0x2b8),0,&local_58,pWVar21,(LPWSTR)0x0,0,0);
    }
    puVar5 = auStackY_a8;
    if ((iVar7 != 0) &&
       (uVar14 = (longlong)iVar7 * 2 + 0x10,
       uVar14 = -(ulonglong)((ulonglong)((longlong)iVar7 * 2) < uVar14) & uVar14,
       puVar5 = auStackY_a8, uVar14 != 0)) {
      if (uVar14 < 0x401) {
        uVar8 = uVar14 + 0xf;
        if (uVar8 <= uVar14) {
          uVar8 = 0xffffffffffffff0;
        }
        lVar22 = -(uVar8 & 0xfffffffffffffff0);
        puVar18 = auStackY_a8 + lVar22;
        puVar9 = (int32_t *)((longlong)&local_68 + lVar22);
        puVar5 = auStackY_a8 + lVar22;
        if (puVar9 == (int32_t *)0x0) goto LAB_18012d03c;
        *puVar9 = 0xcccc;
LAB_18012cf89:
        puVar9 = puVar9 + 4;
        puVar19 = puVar18;
      }
      else {
        puVar9 = (int32_t *)_malloc_base(uVar14);
        if (puVar9 != (int32_t *)0x0) {
          *puVar9 = 0xdddd;
          goto LAB_18012cf89;
        }
      }
      puVar5 = puVar19;
      if (puVar9 != (int32_t *)0x0) {
        puVar2 = *(ushort **)(param_6 + 0x2b8);
        puVar17 = puVar9;
        if (param_2 == 2) {
          *(int *)(puVar19 + 0x28) = iVar7;
          *(int32_t **)(puVar19 + 0x20) = puVar9;
          *(int32_t *)(puVar19 + -8) = 0x18012cfba;
          iVar7 = FUN_18013a9c0(puVar2,0,&local_58,pWVar21,*(LPWSTR *)(puVar19 + 0x20),
                                *(int *)(puVar19 + 0x28));
        }
        else {
          *(int32_t *)(puVar19 + 0x30) = 0;
          *(int *)(puVar19 + 0x28) = iVar7;
          *(int32_t **)(puVar19 + 0x20) = puVar9;
          *(int32_t *)(puVar19 + -8) = 0x18012cfd2;
          iVar7 = FUN_18013a870(puVar2,0,&local_58,pWVar21,*(LPWSTR *)(puVar19 + 0x20),
                                *(int *)(puVar19 + 0x28),*(int32_t *)(puVar19 + 0x30));
        }
        while ((iVar7 = iVar7 + -1, 0 < iVar7 && (*param_5 != 0))) {
          *(int32_t *)*param_4 = *(int32_t *)puVar17;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          puVar17 = (int32_t *)((longlong)puVar17 + 2);
        }
        if (puVar9[-4] == 0xdddd) {
          *(int32_t *)(puVar19 + -8) = 0x18012d010;
          FUN_18013bf3c(puVar9 + -4);
        }
        goto LAB_18012d012;
      }
    }
  }
LAB_18012d03c:
  puVar19 = puVar5;
  uVar4 = local_60;
  WVar12 = *pWVar21;
  while (WVar12 != L'\0') {
    uVar14 = 0;
    lVar22 = *param_5;
    if (lVar22 == 0) break;
    uVar16 = 0;
    WVar12 = *pWVar21;
    uVar8 = uVar14;
    pWVar20 = pWVar21;
    do {
      pWVar20 = pWVar20 + 1;
      uVar13 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar13;
      uVar14 = uVar14 + 1;
    } while (*pWVar20 == WVar12);
    uVar23 = 1;
    if ((ushort)WVar12 < 0x65) {
      if (WVar12 == L'd') {
        if ((uVar13 == 1) || (uVar23 = uVar16, uVar13 == 2)) {
          uVar16 = uVar23;
          uVar6 = 100;
        }
        else if (uVar13 == 3) {
          uVar6 = 0x61;
        }
        else {
          if (uVar13 != 4) goto LAB_18012d2c0;
          uVar6 = 0x41;
        }
        goto LAB_18012d2e0;
      }
      if (WVar12 != L'\'') {
        if (WVar12 == L'A') {
LAB_18012d0bf:
          *(int32_t *)(puVar19 + -8) = 0x18012d0ce;
          uVar14 = FUN_18013c080(pWVar21,L"am/pm");
          if ((int)uVar14 == 0) {
            pWVar20 = pWVar21 + 5;
          }
          else {
            *(int32_t *)(puVar19 + -8) = 0x18012d139;
            uVar14 = FUN_18013c080(pWVar21,L"a/p");
            if ((int)uVar14 == 0) {
              pWVar20 = pWVar21 + 3;
            }
          }
          uVar6 = 0x70;
        }
        else if (WVar12 == L'H') {
          if ((uVar13 != 1) && (uVar23 = uVar16, uVar13 != 2)) goto LAB_18012d2c0;
          uVar16 = uVar23;
          uVar6 = 0x48;
        }
        else {
          if (WVar12 != L'M') {
            if (WVar12 != L'a') goto LAB_18012d2c0;
            goto LAB_18012d0bf;
          }
          if ((uVar13 == 1) || (uVar23 = uVar16, uVar13 == 2)) {
            uVar16 = uVar23;
            uVar6 = 0x6d;
          }
          else if (uVar13 == 3) {
            uVar6 = 0x62;
          }
          else {
            if (uVar13 != 4) goto LAB_18012d2c0;
            uVar6 = 0x42;
          }
        }
        goto LAB_18012d2e0;
      }
      if ((uVar13 & 1) == 0) {
        pWVar20 = pWVar21 + (int)uVar13;
      }
      else {
        pWVar20 = pWVar21 + uVar14;
        WVar12 = *pWVar20;
        if (WVar12 == L'\0') break;
        do {
          if ((lVar22 == 0) || (pWVar20 = pWVar20 + 1, WVar12 == L'\'')) break;
          *(WCHAR *)*param_4 = WVar12;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          WVar12 = *pWVar20;
          lVar22 = *param_5;
        } while (WVar12 != L'\0');
      }
    }
    else {
      if (WVar12 == L'h') {
        if ((uVar13 != 1) && (uVar23 = uVar16, uVar13 != 2)) goto LAB_18012d2c0;
        uVar16 = uVar23;
        uVar6 = 0x49;
      }
      else if (WVar12 == L'm') {
        if ((uVar13 != 1) && (uVar23 = uVar16, uVar13 != 2)) goto LAB_18012d2c0;
        uVar16 = uVar23;
        uVar6 = 0x4d;
      }
      else if (WVar12 == L's') {
        if ((uVar13 != 1) && (uVar23 = uVar16, uVar13 != 2)) goto LAB_18012d2c0;
        uVar16 = uVar23;
        uVar6 = 0x53;
      }
      else {
        if (WVar12 == L't') {
          if ((int)local_68[2] < 0xc) {
            psVar15 = *(short **)(param_6 + 0x290);
          }
          else {
            psVar15 = *(short **)(param_6 + 0x298);
          }
          if (uVar13 == 1) {
            *(short *)*param_4 = *psVar15;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
          }
          else {
            while ((sVar1 = *psVar15, sVar1 != 0 && (lVar22 != 0))) {
              psVar15 = psVar15 + 1;
              *(short *)*param_4 = sVar1;
              *param_4 = *param_4 + 2;
              *param_5 = *param_5 + -1;
              lVar22 = *param_5;
            }
          }
          goto LAB_18012d30e;
        }
        if (WVar12 != L'y') {
LAB_18012d2c0:
          pWVar20 = pWVar21 + 1;
          *(WCHAR *)*param_4 = WVar12;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          goto LAB_18012d30e;
        }
        if (uVar13 == 2) {
          uVar6 = 0x79;
        }
        else {
          if (uVar13 != 4) goto LAB_18012d2c0;
          uVar6 = 0x59;
        }
      }
LAB_18012d2e0:
      puVar3 = local_68;
      puVar19[0x30] = uVar16;
      *(longlong *)(puVar19 + 0x28) = param_6;
      *(longlong **)(puVar19 + 0x20) = param_5;
      *(int32_t *)(puVar19 + -8) = 0x18012d300;
      uVar10 = FUN_18012bdd4(uVar4,uVar6,puVar3,param_4,*(ulonglong **)(puVar19 + 0x20),
                             *(int32_t ***)(puVar19 + 0x28),puVar19[0x30]);
      if ((char)uVar10 == '\0') {
        *(int32_t *)(puVar19 + -8) = 0x18012d326;
        puVar11 = __doserrno();
        *puVar11 = 0x16;
        break;
      }
    }
LAB_18012d30e:
    pWVar21 = pWVar20;
    WVar12 = *pWVar20;
  }
LAB_18012d012:
  uVar14 = local_48 ^ (ulonglong)&local_68;
  *(int32_t *)(puVar19 + -8) = 0x18012d01e;
  FUN_1801252c0(uVar14);
  return;
}

