#include <stdint.h>
#include <stddef.h>

// ---- Function: common_getenv_s_wchar_t_ ----
int __cdecl
common_getenv_s<wchar_t>(__uint64 *param_1,wchar_t *param_2,__uint64 param_3,wchar_t *param_4)

{
  bool bVar1;
  errno_t eVar2;
  ulong *puVar3;
  wchar_t *_Src;
  longlong lVar4;
  ulonglong uVar6;
  int iVar7;
  longlong lVar5;
  
  __acrt_lock(0xb);
  iVar7 = 0;
  if (param_1 != (__uint64 *)0x0) {
    *param_1 = 0;
    if (param_2 == (wchar_t *)0x0) {
LAB_180135978:
      if (param_3 == 0) goto LAB_18013597d;
LAB_180135984:
      bVar1 = false;
    }
    else {
      if (param_3 == 0) {
        if (param_2 == (wchar_t *)0x0) goto LAB_180135978;
        goto LAB_180135984;
      }
LAB_18013597d:
      bVar1 = true;
    }
    if (bVar1) {
      if (param_2 != (wchar_t *)0x0) {
        *param_2 = L'\0';
      }
      _Src = common_getenv_nolock<wchar_t>(param_4);
      if (_Src != (wchar_t *)0x0) {
        lVar4 = -1;
        do {
          lVar5 = lVar4;
          lVar4 = lVar5 + 1;
        } while (_Src[lVar4] != L'\0');
        uVar6 = lVar5 + 2;
        *param_1 = uVar6;
        if (param_3 != 0) {
          if (param_3 < uVar6) {
            iVar7 = 0x22;
          }
          else {
            eVar2 = wcscpy_s(param_2,param_3,_Src);
            if (eVar2 != 0) {
                    
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
      }
      goto LAB_1801359d6;
    }
  }
  puVar3 = __doserrno();
  iVar7 = 0x16;
  *puVar3 = 0x16;
  FUN_18012b794();
LAB_1801359d6:
  __acrt_unlock(0xb);
  return iVar7;
}

// ---- Function: common_getenv_char_ ----
char * __cdecl common_getenv<char>(char *param_1)

{
  ulong *puVar1;
  ulonglong uVar2;
  char *pcVar3;
  
  if ((param_1 != (char *)0x0) &&
     (uVar2 = FUN_180136a44((int32_t (*) [32])param_1,0x7fff), uVar2 < 0x7fff)) {
    __acrt_lock(0xb);
    pcVar3 = common_getenv_nolock<char>(param_1);
    __acrt_unlock(0xb);
    return pcVar3;
  }
  puVar1 = __doserrno();
  *puVar1 = 0x16;
  FUN_18012b794();
  return (char *)0x0;
}

// ---- Function: FUN_180135a24 ----
uint FUN_180135a24(LPCSTR param_1,longlong param_2,int32_t param_3,UINT param_4)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  LPVOID pvVar4;
  ulong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_1 == (LPCSTR)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_18013bf3c(*(LPVOID *)(param_2 + 0x10));
      *(int32_t *)(param_2 + 0x28) = 0;
    }
    *(int32_t *)(param_2 + 0x10) = 0;
    *(int32_t *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != '\0') {
      iVar2 = FUN_180141178(param_4,9,param_1,-1,(LPWSTR)0x0,0);
      uVar7 = (ulonglong)iVar2;
      if (iVar2 != 0) {
        uVar6 = *(ulonglong *)(param_2 + 0x18);
        if (uVar6 < uVar7) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_18013bf3c(*(LPVOID *)(param_2 + 0x10));
            *(int32_t *)(param_2 + 0x28) = 0;
          }
          pvVar4 = _malloc_base(uVar7 * 2);
          *(LPVOID *)(param_2 + 0x10) = pvVar4;
          uVar1 = ~-(uint)(pvVar4 != (LPVOID)0x0) & 0xc;
          uVar6 = 0;
          if (uVar1 == 0) {
            uVar6 = uVar7;
          }
          *(bool *)(param_2 + 0x28) = uVar1 == 0;
          *(ulonglong *)(param_2 + 0x18) = uVar6;
          if (uVar1 != 0) {
            return uVar1;
          }
        }
        iVar2 = FUN_180141178(param_4,9,param_1,-1,*(LPWSTR *)(param_2 + 0x10),(int)uVar6);
        if ((longlong)iVar2 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar2 + -1;
          return 0;
        }
      }
      DVar3 = GetLastError();
      FUN_1801312a8(DVar3);
      puVar5 = __doserrno();
      return *puVar5;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_18013bf3c(*(LPVOID *)(param_2 + 0x10));
        *(int32_t *)(param_2 + 0x28) = 0;
      }
      pvVar4 = _malloc_base(2);
      *(LPVOID *)(param_2 + 0x10) = pvVar4;
      uVar1 = ~-(uint)(pvVar4 != (LPVOID)0x0) & 0xc;
      *(bool *)(param_2 + 0x28) = uVar1 == 0;
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)(uVar1 == 0);
      if (uVar1 != 0) {
        return uVar1;
      }
    }
    **(int32_t **)(param_2 + 0x10) = 0;
  }
  *(int32_t *)(param_2 + 0x20) = 0;
  return 0;
}

// ---- Function: FUN_180135ba0 ----
ulong FUN_180135ba0(LPCWSTR param_1,longlong param_2,int32_t param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;
  ulong *puVar3;
  
  if (param_1 == (LPCWSTR)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      *(int32_t *)(param_2 + 0x28) = 0;
    }
    *(int32_t *)(param_2 + 0x10) = 0;
    *(int32_t *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != L'\0') {
      iVar1 = FUN_180141208(param_4,0,param_1,-1,(LPSTR)0x0,0,(LPBOOL)0x0,(LPBOOL)0x0);
      if (iVar1 != 0) {
        if (*(ulonglong *)(param_2 + 0x18) < (ulonglong)(longlong)iVar1) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            *(int32_t *)(param_2 + 0x28) = 0;
          }
          goto LAB_180135bf4;
        }
        iVar1 = FUN_180141208(param_4,0,param_1,-1,*(LPSTR *)(param_2 + 0x10),
                              (int)*(ulonglong *)(param_2 + 0x18),(LPBOOL)0x0,(LPBOOL)0x0);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_1801312a8(DVar2);
      puVar3 = __doserrno();
      return *puVar3;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        *(int32_t *)(param_2 + 0x28) = 0;
      }
LAB_180135bf4:
      puVar3 = __doserrno();
      *puVar3 = 0x22;
      *(int32_t *)(param_2 + 0x28) = 0;
      *(int32_t *)(param_2 + 0x18) = 0;
      return 0x22;
    }
    **(int32_t **)(param_2 + 0x10) = 0;
  }
  *(int32_t *)(param_2 + 0x20) = 0;
  return 0;
}

// ---- Function: ___lc_codepage_func ----
/* Library Function - Single Match
    ___lc_codepage_func
   
   Library: Visual Studio 2019 Release */

UINT __cdecl ___lc_codepage_func(void)

{
  __acrt_ptd *p_Var1;
  longlong local_res8 [4];
  
  p_Var1 = FUN_1801387d8();
  local_res8[0] = *(longlong *)(p_Var1 + 0x90);
  FUN_18013c1fc((longlong)p_Var1,local_res8);
  return *(UINT *)(local_res8[0] + 0xc);
}

// ---- Function: FUN_180135cec ----
longlong FUN_180135cec(void)

{
  __acrt_ptd *p_Var1;
  longlong local_res8 [4];
  
  p_Var1 = FUN_1801387d8();
  local_res8[0] = *(longlong *)(p_Var1 + 0x90);
  FUN_18013c1fc((longlong)p_Var1,local_res8);
  return local_res8[0] + 0x128;
}

// ---- Function: FUN_180135d20 ----
int32_t FUN_180135d20(void)

{
  __acrt_ptd *p_Var1;
  longlong local_res8 [4];
  
  p_Var1 = FUN_1801387d8();
  local_res8[0] = *(longlong *)(p_Var1 + 0x90);
  FUN_18013c1fc((longlong)p_Var1,local_res8);
  return *(int32_t *)(local_res8[0] + 8);
}

// ---- Function: abort ----
/* Library Function - Single Match
    abort
   
   Library: Visual Studio 2019 Release */

void __cdecl abort(void)

{
  code *pcVar1;
  BOOL BVar2;
  longlong lVar3;
  int32_t *puVar4;
  int32_t auStack_28 [8];
  int32_t auStack_20 [32];
  
  puVar4 = auStack_28;
  lVar3 = __acrt_get_sigabrt_handler();
  if (lVar3 != 0) {
    FUN_180141cb0(0x16);
  }
  if ((DAT_1801eb2c0 & 2) != 0) {
    BVar2 = IsProcessorFeaturePresent(0x17);
    puVar4 = auStack_28;
    if (BVar2 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(int32_t *)(puVar4 + -8) = 0x1801363ff;
    __acrt_call_reportfault(3,0x40000015,1);
  }
  *(int32_t *)(puVar4 + -8) = 0x180136409;
  FUN_18013725c(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: _malloc_base ----
LPVOID _malloc_base(ulonglong param_1)

{
  int iVar1;
  int32_t *puVar2;
  LPVOID pvVar3;
  ulong *puVar4;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_1801ee8a8,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar1 = FUN_180147668();
    } while ((iVar1 != 0) && (puVar2 = FUN_180136d74(param_1), (int)puVar2 != 0));
  }
  puVar4 = __doserrno();
  *puVar4 = 0xc;
  return (LPVOID)0x0;
}

// ---- Function: operator___class__lambda_e9ce07acdb0b138e546925ae9f1a2c9c__class__lambda_2116bde18c9e5f34230805ea4a4660ed_____ptr64_class__lambda_5d037afbfc54bf1ca80d3d1ee4062886___ ----
/* Library Function - Single Match
    public: char * __ptr64 __cdecl __crt_seh_guarded_call<char * __ptr64>::operator()<class
   <lambda_e9ce07acdb0b138e546925ae9f1a2c9c>,class <lambda_2116bde18c9e5f34230805ea4a4660ed> &
   __ptr64,class <lambda_5d037afbfc54bf1ca80d3d1ee4062886> >(class
   <lambda_e9ce07acdb0b138e546925ae9f1a2c9c> && __ptr64,class
   <lambda_2116bde18c9e5f34230805ea4a4660ed> & __ptr64,class
   <lambda_5d037afbfc54bf1ca80d3d1ee4062886> && __ptr64) __ptr64
   
   Library: Visual Studio 2019 Release */

char * __thiscall
__crt_seh_guarded_call<char*___ptr64>::
operator()<class_<lambda_e9ce07acdb0b138e546925ae9f1a2c9c>,class_<lambda_2116bde18c9e5f34230805ea4a4660ed>&___ptr64,class_<lambda_5d037afbfc54bf1ca80d3d1ee4062886>_>
          (__crt_seh_guarded_call<char*___ptr64> *this,
          <lambda_e9ce07acdb0b138e546925ae9f1a2c9c> *param_1,
          <lambda_2116bde18c9e5f34230805ea4a4660ed> *param_2,
          <lambda_5d037afbfc54bf1ca80d3d1ee4062886> *param_3)

{
  char *pcVar1;
  
  __acrt_lock(*(int *)param_1);
  pcVar1 = <lambda_2116bde18c9e5f34230805ea4a4660ed>::operator()(param_2);
  __acrt_unlock(*(int *)param_3);
  return pcVar1;
}

// ---- Function: operator__ ----
/* Library Function - Single Match
    public: char * __ptr64 __cdecl <lambda_2116bde18c9e5f34230805ea4a4660ed>::operator()(void)const
   __ptr64
   
   Library: Visual Studio 2019 Release */

char * __thiscall
<lambda_2116bde18c9e5f34230805ea4a4660ed>::operator()
          (<lambda_2116bde18c9e5f34230805ea4a4660ed> *this)

{
  byte *pbVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  LPWSTR pWVar7;
  __acrt_ptd *p_Var8;
  LPWSTR pWVar9;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_38;
  int32_t local_30;
  
  pbVar1 = (byte *)**(int32_t **)(this + 8);
  iVar5 = **(int **)this;
  if (pbVar1 == (byte *)0x0) {
    pwVar6 = _wsetlocale(iVar5,(wchar_t *)0x0);
  }
  else {
    iVar4 = FUN_180142248(&local_res10,(LPWSTR)0x0,0,pbVar1,0x7fffffff);
    if ((iVar4 == 0x16) || (iVar4 == 0x22)) {
LAB_1801366c2:
                    
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    pWVar7 = (LPWSTR)_calloc_base(local_res10,2);
    pWVar9 = (LPWSTR)0x0;
    if (pWVar7 == (LPWSTR)0x0) goto LAB_1801364d6;
    iVar4 = FUN_180142248((ulonglong *)0x0,pWVar7,local_res10,pbVar1,0xffffffffffffffff);
    if (iVar4 != 0) {
      if ((iVar4 == 0x16) || (pWVar9 = pWVar7, iVar4 == 0x22)) goto LAB_1801366c2;
      goto LAB_1801364d6;
    }
    pwVar6 = _wsetlocale(iVar5,pWVar7);
    FUN_18013bf3c(pWVar7);
  }
  if (pwVar6 == (LPCWSTR)0x0) {
    return (char *)0x0;
  }
  p_Var8 = FUN_1801387d8();
  local_38 = *(longlong *)(p_Var8 + 0x90);
  local_30 = *(int32_t *)(p_Var8 + 0x88);
  local_res8 = 0;
  iVar5 = FUN_180142744(&local_res8,(byte *)0x0,0,pwVar6,0,(int32_t *)&local_38);
  if (iVar5 == 0) {
    pWVar9 = (LPWSTR)_malloc_base(local_res8 + 4);
    if (pWVar9 == (LPWSTR)0x0) {
      return (char *)0x0;
    }
    pWVar7 = pWVar9 + 2;
    iVar5 = FUN_180142744((ulonglong *)0x0,(byte *)pWVar7,local_res8,pwVar6,0xffffffffffffffff,
                          (int32_t *)&local_38);
    lVar3 = local_38;
    if (iVar5 == 0) {
      piVar2 = *(int **)((longlong)**(int **)this * 0x20 + 0x30 + local_38);
      if (piVar2 != (int *)0x0) {
        LOCK();
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          FUN_18013bf3c(*(LPVOID *)((longlong)**(int **)this * 0x20 + 0x30 + local_38));
          *(int32_t *)((longlong)**(int **)this * 0x20 + 0x30 + lVar3) = 0;
        }
      }
      if (((DAT_1801eb774 & *(uint *)(p_Var8 + 0x3a8)) == 0) &&
         (piVar2 = *(int **)((longlong)**(int **)this * 0x20 + 0x30 + lVar3), piVar2 != (int *)0x0))
      {
        LOCK();
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          FUN_18013bf3c(*(LPVOID *)((longlong)**(int **)this * 0x20 + 0x30 + lVar3));
          *(int32_t *)((longlong)**(int **)this * 0x20 + 0x30 + lVar3) = 0;
        }
      }
      *(int32_t *)pWVar9 = *(int32_t *)(lVar3 + 0x10);
      *(LPWSTR *)((longlong)**(int **)this * 0x20 + 0x30 + lVar3) = pWVar9;
      *(LPWSTR *)(((longlong)**(int **)this + 1) * 0x20 + lVar3) = pWVar7;
      return (char *)pWVar7;
    }
    if ((iVar5 != 0x16) && (iVar5 != 0x22)) {
LAB_1801364d6:
      FUN_18013bf3c(pWVar9);
      return (char *)0x0;
    }
  }
  else if ((iVar5 != 0x16) && (iVar5 != 0x22)) {
    return (char *)0x0;
  }
                    
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// ---- Function: setlocale ----
/* Library Function - Single Match
    setlocale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

char * __cdecl setlocale(int _Category,char *_Locale)

{
  char *pcVar1;
  int local_res8 [2];
  char *local_res10;
  __crt_seh_guarded_call<char*___ptr64> local_res18 [8];
  int32_t local_res20 [2];
  int32_t local_28 [2];
  int *local_20;
  char **local_18;
  
  local_res8[0] = _Category;
  local_res10 = _Locale;
  __acrt_eagerly_load_locale_apis();
  local_20 = local_res8;
  local_18 = &local_res10;
  local_res20[0] = 4;
  local_28[0] = 4;
  pcVar1 = __crt_seh_guarded_call<char*___ptr64>::
           operator()<class_<lambda_e9ce07acdb0b138e546925ae9f1a2c9c>,class_<lambda_2116bde18c9e5f34230805ea4a4660ed>&___ptr64,class_<lambda_5d037afbfc54bf1ca80d3d1ee4062886>_>
                     (local_res18,(<lambda_e9ce07acdb0b138e546925ae9f1a2c9c> *)local_28,
                      (<lambda_2116bde18c9e5f34230805ea4a4660ed> *)&local_20,
                      (<lambda_5d037afbfc54bf1ca80d3d1ee4062886> *)local_res20);
  return pcVar1;
}

// ---- Function: __acrt_lock ----
/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lock(int param_1)

{
                    
                    
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_1801edda0 + (longlong)param_1 * 0x28));
  return;
}

// ---- Function: FUN_1801367a0 ----
int32_t FUN_1801367a0(void)

{
  int32_t in_RAX;
  int32_t extraout_RAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_1801edfd0;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1801edda0 + uVar1 * 0x28));
    DAT_1801edfd0 = DAT_1801edfd0 - 1;
    in_RAX = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

// ---- Function: __acrt_unlock ----
/* Library Function - Single Match
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_unlock(int param_1)

{
                    
                    
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1801edda0 + (longlong)param_1 * 0x28));
  return;
}

// ---- Function: _lock_locales ----
/* Library Function - Single Match
    _lock_locales
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _lock_locales(void)

{
  __acrt_eagerly_load_locale_apis();
                    
                    
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1801ede40);
  return;
}

// ---- Function: FUN_180136810 ----
void FUN_180136810(void)

{
                    
                    
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1801ede40);
  return;
}

