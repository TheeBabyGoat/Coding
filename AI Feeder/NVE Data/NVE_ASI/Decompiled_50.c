#include <stdint.h>
#include <stddef.h>

// ---- Function: _Atexit ----
/* Library Function - Single Match
    void __cdecl _Atexit(void (__cdecl*)(void))
   
   Library: Visual Studio 2019 Release */

void __cdecl _Atexit(_func_void *param_1)

{
  PVOID pvVar1;
  
  if (DAT_1801eb060 != 0) {
    pvVar1 = EncodePointer(param_1);
    DAT_1801eb060 = DAT_1801eb060 + -1;
    *(PVOID *)(&DAT_1801ed530 + DAT_1801eb060 * 8) = pvVar1;
    return;
  }
                    
  abort();
}

// ---- Function: DeleteCriticalSection ----
void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    
                    
  DeleteCriticalSection(lpCriticalSection);
  return;
}

// ---- Function: FUN_180124f40 ----
void FUN_180124f40(int32_t param_1)

{
                    
                    
  InitializeCriticalSectionEx(param_1,4000,0);
  return;
}

// ---- Function: EnterCriticalSection ----
void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    
                    
  EnterCriticalSection(lpCriticalSection);
  return;
}

// ---- Function: LeaveCriticalSection ----
void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    
                    
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// ---- Function: FUN_180124f60 ----
int32_t FUN_180124f60(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleW(L"kernel32.dll");
  DAT_1801ed580 = GetProcAddress(hModule,"GetSystemTimePreciseAsFileTime");
  _DAT_1801ed588 = GetProcAddress(hModule,"GetTempPath2W");
  return 0;
}

// ---- Function: FUN_180124fac ----
void FUN_180124fac(LPCWSTR param_1,uint param_2,char *param_3,int param_4,int32_t param_5,
                  int param_6,UINT param_7,int param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  ulonglong uVar5;
  LPCWSTR lpSrcStr;
  LPCWSTR lpWideCharStr;
  ulonglong uVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  int32_t auStackY_78 [32];
  ulonglong local_28 [2];
  
  puVar7 = auStackY_78;
  local_28[0] = DAT_1801eb080 ^ (ulonglong)local_28;
  iVar3 = param_4;
  if (0 < param_4) {
    sVar4 = __strncnt(param_3,(longlong)param_4);
    iVar2 = (int)sVar4;
    iVar3 = iVar2 + 1;
    if (param_4 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  iVar2 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,iVar3,(LPWSTR)0x0,0);
  puVar8 = auStackY_78;
  if ((iVar2 == 0) ||
     (uVar6 = (longlong)iVar2 * 2 + 0x10,
     uVar6 = -(ulonglong)((ulonglong)((longlong)iVar2 * 2) < uVar6) & uVar6, puVar8 = auStackY_78,
     uVar6 == 0)) goto LAB_1801250d9;
  if (uVar6 < 0x401) {
    uVar5 = uVar6 + 0xf;
    if (uVar5 <= uVar6) {
      uVar5 = 0xffffffffffffff0;
    }
    lVar1 = -(uVar5 & 0xfffffffffffffff0);
    puVar8 = auStackY_78 + lVar1;
    puVar7 = auStackY_78 + lVar1;
    lpSrcStr = (LPCWSTR)((longlong)local_28 + lVar1);
    if (lpSrcStr == (LPCWSTR)0x0) goto LAB_1801250d9;
    lpSrcStr[0] = L'쳌';
    lpSrcStr[1] = L'\0';
LAB_180125099:
    lpSrcStr = lpSrcStr + 8;
    puVar8 = puVar7;
  }
  else {
    lpSrcStr = (LPCWSTR)_malloc_base(uVar6);
    puVar8 = auStackY_78;
    if (lpSrcStr != (LPCWSTR)0x0) {
      lpSrcStr[0] = L'\xdddd';
      lpSrcStr[1] = L'\0';
      goto LAB_180125099;
    }
  }
  if (lpSrcStr == (LPCWSTR)0x0) goto LAB_1801250d9;
  *(int *)(puVar8 + 0x28) = iVar2;
  *(LPCWSTR *)(puVar8 + 0x20) = lpSrcStr;
  *(int32_t *)(puVar8 + -8) = 0x1801250c0;
  iVar3 = MultiByteToWideChar(param_7,1,param_3,iVar3,*(LPWSTR *)(puVar8 + 0x20),
                              *(int *)(puVar8 + 0x28));
  if (iVar3 != 0) {
    *(int32_t *)(puVar8 + 0x40) = 0;
    *(int32_t *)(puVar8 + 0x38) = 0;
    *(int32_t *)(puVar8 + 0x30) = 0;
    *(int32_t *)(puVar8 + 0x28) = 0;
    *(int32_t *)(puVar8 + 0x20) = 0;
    *(int32_t *)(puVar8 + -8) = 0x180125129;
    iVar3 = LCMapStringEx(param_1,param_2,lpSrcStr,iVar2,*(LPWSTR *)(puVar8 + 0x20),
                          *(int *)(puVar8 + 0x28),*(LPNLSVERSIONINFO *)(puVar8 + 0x30),
                          *(LPVOID *)(puVar8 + 0x38),*(LPARAM *)(puVar8 + 0x40));
    if (iVar3 != 0) {
      puVar9 = puVar8;
      if ((param_2 & 0x400) == 0) {
        uVar6 = (longlong)iVar3 * 2 + 0x10;
        uVar6 = -(ulonglong)((ulonglong)((longlong)iVar3 * 2) < uVar6) & uVar6;
        if (uVar6 == 0) goto LAB_18012528d;
        if (uVar6 < 0x401) {
          uVar5 = uVar6 + 0xf;
          if (uVar5 <= uVar6) {
            uVar5 = 0xffffffffffffff0;
          }
          *(int32_t *)(puVar8 + -8) = 0x1801251ba;
          lVar1 = -(uVar5 & 0xfffffffffffffff0);
          puVar9 = puVar8 + lVar1;
          lpWideCharStr = (LPCWSTR)(puVar8 + lVar1 + 0x50);
          if (lpWideCharStr == (LPCWSTR)0x0) goto LAB_18012528d;
          lpWideCharStr[0] = L'쳌';
          lpWideCharStr[1] = L'\0';
          puVar8 = puVar8 + lVar1;
LAB_1801251e6:
          lpWideCharStr = lpWideCharStr + 8;
          puVar9 = puVar8;
        }
        else {
          *(int32_t *)(puVar8 + -8) = 0x1801251d8;
          lpWideCharStr = (LPCWSTR)_malloc_base(uVar6);
          if (lpWideCharStr != (LPCWSTR)0x0) {
            lpWideCharStr[0] = L'\xdddd';
            lpWideCharStr[1] = L'\0';
            goto LAB_1801251e6;
          }
        }
        if (lpWideCharStr == (LPCWSTR)0x0) goto LAB_18012528d;
        *(int32_t *)(puVar9 + 0x40) = 0;
        *(int32_t *)(puVar9 + 0x38) = 0;
        *(int32_t *)(puVar9 + 0x30) = 0;
        *(int *)(puVar9 + 0x28) = iVar3;
        *(LPCWSTR *)(puVar9 + 0x20) = lpWideCharStr;
        *(int32_t *)(puVar9 + -8) = 0x180125220;
        iVar2 = LCMapStringEx(param_1,param_2,lpSrcStr,iVar2,*(LPWSTR *)(puVar9 + 0x20),
                              *(int *)(puVar9 + 0x28),*(LPNLSVERSIONINFO *)(puVar9 + 0x30),
                              *(LPVOID *)(puVar9 + 0x38),*(LPARAM *)(puVar9 + 0x40));
        if (iVar2 != 0) {
          *(int32_t *)(puVar9 + 0x38) = 0;
          *(int32_t *)(puVar9 + 0x30) = 0;
          if (param_6 == 0) {
            *(int32_t *)(puVar9 + 0x28) = 0;
            *(int32_t *)(puVar9 + 0x20) = 0;
          }
          else {
            *(int *)(puVar9 + 0x28) = param_6;
            *(int32_t *)(puVar9 + 0x20) = param_5;
          }
          *(int32_t *)(puVar9 + -8) = 0x18012527a;
          WideCharToMultiByte(param_7,0,lpWideCharStr,iVar3,*(LPSTR *)(puVar9 + 0x20),
                              *(int *)(puVar9 + 0x28),*(LPCSTR *)(puVar9 + 0x30),
                              *(LPBOOL *)(puVar9 + 0x38));
          if (*(int *)(lpWideCharStr + -8) == 0xdddd) {
            *(int32_t *)(puVar9 + -8) = 0x18012528d;
            FUN_18012d5e8(lpWideCharStr + -8);
          }
          goto LAB_18012528d;
        }
        if (*(int *)(lpWideCharStr + -8) == 0xdddd) {
          *(int32_t *)(puVar9 + -8) = 0x180125238;
          FUN_18012d5e8(lpWideCharStr + -8);
        }
        iVar3 = *(int *)(lpSrcStr + -8);
      }
      else {
        if ((param_6 != 0) && (iVar3 <= param_6)) {
          *(int32_t *)(puVar8 + 0x40) = 0;
          *(int32_t *)(puVar8 + 0x38) = 0;
          *(int32_t *)(puVar8 + 0x30) = 0;
          *(int *)(puVar8 + 0x28) = param_6;
          *(int32_t *)(puVar8 + 0x20) = param_5;
          *(int32_t *)(puVar8 + -8) = 0x18012517b;
          LCMapStringEx(param_1,param_2,lpSrcStr,iVar2,*(LPWSTR *)(puVar8 + 0x20),
                        *(int *)(puVar8 + 0x28),*(LPNLSVERSIONINFO *)(puVar8 + 0x30),
                        *(LPVOID *)(puVar8 + 0x38),*(LPARAM *)(puVar8 + 0x40));
        }
LAB_18012528d:
        iVar3 = *(int *)(lpSrcStr + -8);
      }
      puVar8 = puVar9;
      if (iVar3 == 0xdddd) {
        *(int32_t *)(puVar9 + -8) = 0x18012529e;
        FUN_18012d5e8(lpSrcStr + -8);
      }
      goto LAB_1801250d9;
    }
  }
  if (*(int *)(lpSrcStr + -8) == 0xdddd) {
    *(int32_t *)(puVar8 + -8) = 0x1801250d7;
    FUN_18012d5e8(lpSrcStr + -8);
  }
LAB_1801250d9:
  uVar6 = local_28[0] ^ (ulonglong)local_28;
  *(int32_t *)(puVar8 + -8) = 0x1801250e5;
  FUN_1801252c0(uVar6);
  return;
}

// ---- Function: FUN_1801252c0 ----
void FUN_1801252c0(longlong param_1)

{
  if ((param_1 == DAT_1801eb080) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
  FUN_180126224();
  return;
}

// ---- Function: thunk_FUN_18012d5e8 ----
void thunk_FUN_18012d5e8(LPVOID param_1)

{
  FUN_18013bf3c(param_1);
  return;
}

// ---- Function: thunk_FUN_18012d5e8 ----
void thunk_FUN_18012d5e8(LPVOID param_1)

{
  FUN_18013bf3c(param_1);
  return;
}

// ---- Function: FUN_1801252f0 ----
void FUN_1801252f0(int32_t *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1801ed680);
  *param_1 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1801ed680);
                    
                    
  WakeAllConditionVariable(&DAT_1801ed678);
  return;
}

// ---- Function: _Init_thread_footer ----
/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2019 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1801ed680);
  uVar1 = (ulonglong)_tls_index;
  DAT_1801eb070 = DAT_1801eb070 + 1;
  *param_1 = DAT_1801eb070;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x10) = DAT_1801eb070;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1801ed680);
                    
                    
  WakeAllConditionVariable(&DAT_1801ed678);
  return;
}

// ---- Function: FUN_180125398 ----
void FUN_180125398(int *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1801ed680);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_1801253fd:
                    
                    
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1801ed680);
      return;
    }
    if (*param_1 != -1) {
      *(int32_t *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10) =
           DAT_1801eb070;
      goto LAB_1801253fd;
    }
    SleepConditionVariableSRW
              ((PCONDITION_VARIABLE)&DAT_1801ed678,(PSRWLOCK)&DAT_1801ed680,0xffffffff,0);
  } while( true );
}

// ---- Function: FUN_180125410 ----
int32_t * FUN_180125410(int32_t *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_18012d5e8(param_1);
  }
  return param_1;
}

// ---- Function: operator_new ----
/* Library Function - Single Match
    void * __ptr64 __cdecl operator new(unsigned __int64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __cdecl operator_new(__uint64 param_1)

{
  code *pcVar1;
  int32_t *puVar2;
  LPVOID pvVar3;
  void *pvVar4;
  
  do {
    pvVar3 = _malloc_base(param_1);
    if (pvVar3 != (LPVOID)0x0) {
      return pvVar3;
    }
    puVar2 = FUN_180136d74(param_1);
  } while ((int)puVar2 != 0);
  if (param_1 == 0xffffffffffffffff) {
    FUN_1800ba8a0();
    pcVar1 = (code *)swi(3);
    pvVar4 = (void *)(*pcVar1)();
    return pvVar4;
  }
  FUN_1801232f8();
  pcVar1 = (code *)swi(3);
  pvVar4 = (void *)(*pcVar1)();
  return pvVar4;
}

// ---- Function: _eh_vector_destructor_iterator_ ----
/* Library Function - Single Match
    void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,unsigned
   __int64,void (__cdecl*)(void * __ptr64))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
  while( true ) {
    if (param_3 == 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*(code *)PTR__guard_dispatch_icall_180157468)(pvVar1);
    param_3 = param_3 - 1;
  }
  return;
}

// ---- Function: __ArrayUnwind ----
/* Library Function - Single Match
    void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,unsigned __int64,void (__cdecl*)(void
   * __ptr64))
   
   Library: Visual Studio 2019 Release */

void __cdecl
__ArrayUnwind(void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  __uint64 _Var1;
  
  for (_Var1 = 0; _Var1 != param_3; _Var1 = _Var1 + 1) {
    param_1 = (void *)((longlong)param_1 - param_2);
    (*(code *)PTR__guard_dispatch_icall_180157468)(param_1);
  }
  return;
}

