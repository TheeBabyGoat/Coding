#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_18012aeb0 ----
void FUN_18012aeb0(void)

{
  return;
}

// ---- Function: FUN_18012aee0 ----
void FUN_18012aee0(void)

{
  return;
}

// ---- Function: __except_validate_context_record ----
/* Library Function - Single Match
    __except_validate_context_record
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __except_validate_context_record(longlong param_1)

{
  code *pcVar1;
  
  if ((code *)PTR__guard_check_icall_180157460 != _guard_check_icall) {
    if ((*(ulonglong *)(param_1 + 0x98) < *(ulonglong *)((longlong)Self + 0x10)) ||
       (*(ulonglong *)((longlong)Self + 8) < *(ulonglong *)(param_1 + 0x98))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0xd);
    }
  }
  return;
}

// ---- Function: __vcrt_initialize_locks ----
/* Library Function - Single Match
    __vcrt_initialize_locks
   
   Library: Visual Studio 2017 Release */

int32_t __vcrt_initialize_locks(void)

{
  int32_t uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar1 = __vcrt_InitializeCriticalSectionEx
                      ((LPCRITICAL_SECTION)(&DAT_1801edd08 + uVar2 * 0x28),4000,0);
    if ((int)uVar1 == 0) {
      uVar2 = __vcrt_uninitialize_locks();
      return uVar2 & 0xffffffffffffff00;
    }
    DAT_1801edd30 = DAT_1801edd30 + 1;
    uVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar3;
  } while (uVar3 == 0);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}

// ---- Function: __vcrt_uninitialize_locks ----
/* Library Function - Single Match
    __vcrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

int32_t __vcrt_uninitialize_locks(void)

{
  int32_t in_RAX;
  int32_t extraout_RAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_1801edd30;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1801edd08 + uVar1 * 0x28));
    DAT_1801edd30 = DAT_1801edd30 - 1;
    in_RAX = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

// ---- Function: FUN_18012af9c ----
FARPROC FUN_18012af9c(uint param_1,LPCSTR param_2,uint *param_3,uint *param_4)

{
  longlong lVar1;
  wchar_t *lpLibFileName;
  DWORD DVar2;
  int iVar3;
  HMODULE hLibModule;
  FARPROC pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_1;
  pFVar4 = *(FARPROC *)(&DAT_1801edd50 + uVar6 * 8);
  if (pFVar4 != (FARPROC)0xffffffffffffffff) {
    if (pFVar4 != (FARPROC)0x0) {
      return pFVar4;
    }
    if (param_3 != param_4) {
      do {
        uVar5 = (ulonglong)*param_3;
        hLibModule = *(HMODULE *)(&DAT_1801edd38 + uVar5 * 8);
        if (hLibModule == (HMODULE)0x0) {
          lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_fibers_l1_1_1_1801793f8)[uVar5];
          hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
          if ((hLibModule != (HMODULE)0x0) ||
             (((DVar2 = GetLastError(), DVar2 == 0x57 &&
               (iVar3 = wcsncmp(lpLibFileName,L"api-ms-",7), iVar3 != 0)) &&
              (hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0), hLibModule != (HMODULE)0x0)
              ))) {
            LOCK();
            lVar1 = *(longlong *)(&DAT_1801edd38 + uVar5 * 8);
            *(HMODULE *)(&DAT_1801edd38 + uVar5 * 8) = hLibModule;
            UNLOCK();
            if (lVar1 != 0) {
              FreeLibrary(hLibModule);
            }
            goto LAB_18012b0cd;
          }
          LOCK();
          *(int32_t *)(&DAT_1801edd38 + uVar5 * 8) = 0xffffffffffffffff;
          UNLOCK();
        }
        else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_18012b0cd:
          pFVar4 = GetProcAddress(hLibModule,param_2);
          if (pFVar4 != (FARPROC)0x0) {
            LOCK();
            *(FARPROC *)(&DAT_1801edd50 + uVar6 * 8) = pFVar4;
            UNLOCK();
            return pFVar4;
          }
          break;
        }
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
    }
    LOCK();
    *(int32_t *)(&DAT_1801edd50 + uVar6 * 8) = 0xffffffffffffffff;
    UNLOCK();
  }
  return (FARPROC)0x0;
}

// ---- Function: __vcrt_FlsAlloc ----
/* Library Function - Single Match
    __vcrt_FlsAlloc
   
   Library: Visual Studio 2019 Release */

void __vcrt_FlsAlloc(int32_t param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_18012af9c(0,"FlsAlloc",(uint *)&DAT_1801794b8,(uint *)"FlsAlloc");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR__guard_dispatch_icall_180157468)(param_1);
    return;
  }
                    
                    
  TlsAlloc();
  return;
}

// ---- Function: __vcrt_FlsFree ----
/* Library Function - Single Match
    __vcrt_FlsFree
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __vcrt_FlsFree(int32_t param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_18012af9c(1,"FlsFree",(uint *)&DAT_1801794d0,(uint *)"FlsFree");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR__guard_dispatch_icall_180157468)();
    return;
  }
                    
                    
  TlsFree(param_1);
  return;
}

// ---- Function: __vcrt_FlsGetValue ----
/* Library Function - Single Match
    __vcrt_FlsGetValue
   
   Library: Visual Studio 2019 Release */

void __vcrt_FlsGetValue(int32_t param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_18012af9c(2,"FlsGetValue",(uint *)&DAT_1801794e0,(uint *)"FlsGetValue");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR__guard_dispatch_icall_180157468)();
    return;
  }
                    
                    
  TlsGetValue(param_1);
  return;
}

// ---- Function: __vcrt_FlsSetValue ----
/* Library Function - Single Match
    __vcrt_FlsSetValue
   
   Library: Visual Studio 2019 Release */

void __vcrt_FlsSetValue(DWORD param_1,LPVOID param_2)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_18012af9c(3,"FlsSetValue",(uint *)&DAT_1801794f8,(uint *)"FlsSetValue");
  if (pFVar1 == (FARPROC)0x0) {
    TlsSetValue(param_1,param_2);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_180157468)();
  }
  return;
}

// ---- Function: __vcrt_InitializeCriticalSectionEx ----
/* Library Function - Single Match
    __vcrt_InitializeCriticalSectionEx
   
   Library: Visual Studio 2017 Release */

void __vcrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION param_1,DWORD param_2,int32_t param_3)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_18012af9c(4,"InitializeCriticalSectionEx",(uint *)&DAT_180179510,
                         (uint *)"InitializeCriticalSectionEx");
  if (pFVar1 == (FARPROC)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_180157468)(param_1,param_2,param_3);
  }
  return;
}

// ---- Function: _CallSettingFrame ----
/* Library Function - Single Match
    _CallSettingFrame
   
   Library: Visual Studio */

void _CallSettingFrame(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_18012aeb0();
  (*pcVar1)();
  FUN_18012aee0();
  FUN_18012aeb0();
  return;
}

// ---- Function: FUN_18012b300 ----
void FUN_18012b300(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_18012aeb0();
  (*pcVar1)();
  FUN_18012aee0();
  return;
}

// ---- Function: FUN_18012b330 ----
void FUN_18012b330(void)

{
  FUN_18012aeb0();
  return;
}

// ---- Function: _CallSettingFrameEncoded ----
/* Library Function - Single Match
    _CallSettingFrameEncoded
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void _CallSettingFrameEncoded(int32_t param_1,int32_t param_2,int32_t param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_18012aeb0();
  (*pcVar1)(param_3);
  FUN_18012aee0();
  FUN_18012aeb0();
  return;
}

// ---- Function: FUN_18012b3a8 ----
longlong FUN_18012b3a8(longlong *param_1)

{
  __acrt_ptd *p_Var1;
  longlong lVar2;
  DWORD local_res8 [2];
  
  if (*param_1 == 0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      lVar2 = 0;
      *(int32_t *)(param_1 + 2) = 1;
    }
    else {
      lVar2 = param_1[1];
    }
    p_Var1 = FUN_180138a18(local_res8,lVar2);
    *param_1 = (longlong)p_Var1;
    SetLastError(local_res8[0]);
    if (p_Var1 == (__acrt_ptd *)0x0) {
                    
      abort();
    }
  }
  return *param_1;
}

// ---- Function: FUN_18012b410 ----
__acrt_ptd * FUN_18012b410(longlong *param_1)

{
  __acrt_ptd *p_Var1;
  longlong lVar2;
  DWORD local_res8 [2];
  
  p_Var1 = (__acrt_ptd *)*param_1;
  lVar2 = 0;
  if (p_Var1 == (__acrt_ptd *)0x0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      *(int32_t *)(param_1 + 2) = 1;
    }
    else {
      lVar2 = param_1[1];
    }
    p_Var1 = FUN_180138a18(local_res8,lVar2);
    *param_1 = (longlong)p_Var1;
    SetLastError(local_res8[0]);
  }
  return p_Var1;
}

