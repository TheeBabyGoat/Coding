#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1801371d4 ----
void FUN_1801371d4(int32_t param_1)

{
  BOOL BVar1;
  FARPROC pFVar2;
  HMODULE local_res10 [3];
  
  local_res10[0] = (HMODULE)0x0;
  BVar1 = GetModuleHandleExW(0,L"mscoree.dll",local_res10);
  if ((BVar1 != 0) &&
     (pFVar2 = GetProcAddress(local_res10[0],"CorExitProcess"), pFVar2 != (FARPROC)0x0)) {
    (*(code *)PTR__guard_dispatch_icall_180157478)(param_1);
  }
  if (local_res10[0] != (HMODULE)0x0) {
    FreeLibrary(local_res10[0]);
  }
  return;
}

// ---- Function: FUN_180137244 ----
void FUN_180137244(int32_t param_1)

{
  DAT_1801edfe8 = param_1;
  return;
}

// ---- Function: FUN_18013724c ----
void FUN_18013724c(void)

{
  FUN_1801370b4(0,0,1);
  return;
}

// ---- Function: FUN_18013725c ----
void FUN_18013725c(UINT param_1)

{
  FUN_1801370b4(param_1,2,0);
  return;
}

// ---- Function: FUN_180137268 ----
int32_t FUN_180137268(void)

{
  return DAT_1801edfe0;
}

// ---- Function: FUN_180137270 ----
void FUN_180137270(char *param_1,int32_t *param_2,char *param_3,longlong *param_4,
                  longlong *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (int32_t *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar2 = false;
  do {
    if (*param_1 == '\"') {
      bVar2 = !bVar2;
      cVar3 = '\"';
      pcVar6 = param_1 + 1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (char *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      cVar3 = *param_1;
      pcVar6 = param_1 + 1;
      iVar5 = FUN_180143e68((int)cVar3);
      if (iVar5 != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (char *)0x0) {
          *param_3 = *pcVar6;
          param_3 = param_3 + 1;
        }
        pcVar6 = param_1 + 2;
      }
      if (cVar3 == '\0') {
        pcVar6 = pcVar6 + -1;
        goto LAB_180137328;
      }
    }
    param_1 = pcVar6;
  } while ((bVar2) || ((cVar3 != ' ' && (cVar3 != '\t'))));
  if (param_3 != (char *)0x0) {
    param_3[-1] = '\0';
  }
LAB_180137328:
  bVar2 = false;
  while (cVar3 = *pcVar6, cVar3 != '\0') {
    while ((cVar3 == ' ' || (cVar3 == '\t'))) {
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar6;
    }
    if (cVar3 == '\0') break;
    if (param_2 != (int32_t *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      while( true ) {
        if (*pcVar6 != '\\') break;
        pcVar6 = pcVar6 + 1;
        uVar4 = uVar4 + 1;
      }
      if (*pcVar6 == '\"') {
        if ((uVar4 & 1) == 0) {
          if ((bVar2) && (pcVar6[1] == '\"')) {
            pcVar6 = pcVar6 + 1;
          }
          else {
            bVar1 = false;
            bVar2 = !bVar2;
          }
        }
        uVar4 = uVar4 >> 1;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (param_3 != (char *)0x0) {
          *param_3 = '\\';
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      cVar3 = *pcVar6;
      if ((cVar3 == '\0') || ((!bVar2 && ((cVar3 == ' ' || (cVar3 == '\t')))))) break;
      if (bVar1) {
        if (param_3 != (char *)0x0) {
          *param_3 = cVar3;
          param_3 = param_3 + 1;
        }
        iVar5 = FUN_180143e68((int)*pcVar6);
        if (iVar5 != 0) {
          *param_5 = *param_5 + 1;
          pcVar6 = pcVar6 + 1;
          if (param_3 != (char *)0x0) {
            *param_3 = *pcVar6;
            param_3 = param_3 + 1;
          }
        }
        *param_5 = *param_5 + 1;
      }
      pcVar6 = pcVar6 + 1;
    }
    if (param_3 != (char *)0x0) {
      *param_3 = '\0';
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (int32_t *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}

// ---- Function: __acrt_allocate_buffer_for_argv ----
/* Library Function - Single Match
    __acrt_allocate_buffer_for_argv
   
   Library: Visual Studio 2019 Release */

LPVOID __acrt_allocate_buffer_for_argv(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  int32_t auVar1 [16];
  LPVOID pvVar2;
  
  if ((param_1 < 0x1fffffffffffffff) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     param_2 < SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0))) {
    if (param_2 * param_3 < ~(param_1 * 8)) {
      pvVar2 = _calloc_base(param_1 * 8 + param_2 * param_3,1);
      FUN_18013bf3c((LPVOID)0x0);
      return pvVar2;
    }
  }
  return (LPVOID)0x0;
}

// ---- Function: _configure_narrow_argv ----
/* Library Function - Single Match
    _configure_narrow_argv
   
   Library: Visual Studio 2019 Release */

ulonglong _configure_narrow_argv(int param_1)

{
  longlong lVar1;
  ulong *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  char *pcVar8;
  longlong *local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar5 = 0;
  if (param_1 != 0) {
    if (param_1 - 1U < 2) {
      __acrt_initialize_multibyte();
      FUN_18014319c((HMODULE)0x0,&DAT_1801ee000,0x104);
      _DAT_1801ee878 = &DAT_1801ee000;
      if ((DAT_1801ee898 == (char *)0x0) || (pcVar8 = DAT_1801ee898, *DAT_1801ee898 == '\0')) {
        pcVar8 = &DAT_1801ee000;
      }
      local_res18 = 0;
      local_res20 = 0;
      FUN_180137270(pcVar8,(int32_t *)0x0,(char *)0x0,(longlong *)&local_res18,
                    (longlong *)&local_res20);
      uVar4 = local_res18;
      plVar3 = (longlong *)__acrt_allocate_buffer_for_argv(local_res18,local_res20,1);
      if (plVar3 != (longlong *)0x0) {
        FUN_180137270(pcVar8,plVar3,(char *)(plVar3 + uVar4),(longlong *)&local_res18,
                      (longlong *)&local_res20);
        if (param_1 == 1) {
          _DAT_1801ee880 = (int)local_res18 + -1;
          plVar6 = (longlong *)0x0;
          DAT_1801ee888 = plVar3;
        }
        else {
          local_res10 = (longlong *)0x0;
          uVar4 = thunk_FUN_180142a7c(plVar3,&local_res10);
          plVar6 = local_res10;
          if ((int)uVar4 != 0) {
            FUN_18013bf3c(local_res10);
            local_res10 = (longlong *)0x0;
            FUN_18013bf3c(plVar3);
            return uVar4 & 0xffffffff;
          }
          _DAT_1801ee880 = 0;
          lVar1 = *local_res10;
          while (lVar1 != 0) {
            local_res10 = local_res10 + 1;
            uVar5 = uVar5 + 1;
            _DAT_1801ee880 = (int)uVar5;
            lVar1 = *local_res10;
          }
          local_res10 = (longlong *)0x0;
          DAT_1801ee888 = plVar6;
          FUN_18013bf3c((LPVOID)0x0);
          local_res10 = (longlong *)0x0;
          plVar6 = plVar3;
        }
        FUN_18013bf3c(plVar6);
        return 0;
      }
      puVar2 = __doserrno();
      uVar7 = 0xc;
      *puVar2 = 0xc;
      FUN_18013bf3c((LPVOID)0x0);
    }
    else {
      puVar2 = __doserrno();
      uVar7 = 0x16;
      *puVar2 = 0x16;
      FUN_18012b794();
    }
    uVar5 = (ulonglong)uVar7;
  }
  return uVar5;
}

// ---- Function: FUN_180137620 ----
int32_t FUN_180137620(void)

{
  int32_t *puVar1;
  LPSTR pCVar2;
  int32_t uVar3;
  int32_t *puVar4;
  
  uVar3 = 0;
  if (DAT_1801ee108 == (int32_t *)0x0) {
    __acrt_initialize_multibyte();
    pCVar2 = FUN_180143ea4();
    if (pCVar2 == (LPSTR)0x0) {
      FUN_18013bf3c((LPVOID)0x0);
      uVar3 = 0xffffffff;
    }
    else {
      puVar4 = FUN_180137704(pCVar2);
      puVar1 = puVar4;
      if (puVar4 == (int32_t *)0x0) {
        uVar3 = 0xffffffff;
        puVar4 = DAT_1801ee108;
        puVar1 = DAT_1801ee120;
      }
      DAT_1801ee120 = puVar1;
      DAT_1801ee108 = puVar4;
      FUN_18013bf3c((LPVOID)0x0);
      FUN_18013bf3c(pCVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// ---- Function: FUN_180137694 ----
int32_t FUN_180137694(void)

{
  int32_t *puVar1;
  LPWCH pWVar2;
  int32_t uVar3;
  int32_t *puVar4;
  
  uVar3 = 0;
  if (DAT_1801ee110 == (int32_t *)0x0) {
    pWVar2 = FUN_180143fb4();
    if (pWVar2 == (LPWCH)0x0) {
      FUN_18013bf3c((LPVOID)0x0);
      uVar3 = 0xffffffff;
    }
    else {
      puVar4 = FUN_180137814(pWVar2);
      puVar1 = puVar4;
      if (puVar4 == (int32_t *)0x0) {
        uVar3 = 0xffffffff;
        puVar4 = DAT_1801ee110;
        puVar1 = DAT_1801ee118;
      }
      DAT_1801ee118 = puVar1;
      DAT_1801ee110 = puVar4;
      FUN_18013bf3c((LPVOID)0x0);
      FUN_18013bf3c(pWVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// ---- Function: FUN_180137704 ----
int32_t * FUN_180137704(char *param_1)

{
  errno_t eVar1;
  longlong lVar2;
  longlong lVar3;
  int32_t *puVar4;
  char *pcVar5;
  char cVar6;
  longlong lVar7;
  ulonglong _SizeInBytes;
  int32_t *puVar8;
  
  cVar6 = *param_1;
  lVar7 = 0;
  pcVar5 = param_1;
  while (cVar6 != '\0') {
    lVar2 = lVar7 + 1;
    if (cVar6 == '=') {
      lVar2 = lVar7;
    }
    lVar7 = -1;
    do {
      lVar3 = lVar7;
      lVar7 = lVar3 + 1;
    } while (pcVar5[lVar7] != '\0');
    pcVar5 = pcVar5 + lVar3 + 2;
    lVar7 = lVar2;
    cVar6 = *pcVar5;
  }
  puVar4 = (int32_t *)_calloc_base(lVar7 + 1,8);
  puVar8 = puVar4;
  if (puVar4 == (int32_t *)0x0) {
LAB_180137767:
    FUN_18013bf3c((LPVOID)0x0);
    puVar4 = (int32_t *)0x0;
  }
  else {
    for (; *param_1 != '\0'; param_1 = param_1 + _SizeInBytes) {
      lVar7 = -1;
      do {
        lVar2 = lVar7;
        lVar7 = lVar2 + 1;
      } while (param_1[lVar7] != '\0');
      _SizeInBytes = lVar2 + 2;
      if (*param_1 != '=') {
        pcVar5 = (char *)_calloc_base(_SizeInBytes,1);
        if (pcVar5 == (char *)0x0) {
          free_environment<>(puVar4);
          FUN_18013bf3c((LPVOID)0x0);
          goto LAB_180137767;
        }
        eVar1 = strcpy_s(pcVar5,_SizeInBytes,param_1);
        if (eVar1 != 0) {
                    
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *puVar8 = pcVar5;
        puVar8 = puVar8 + 1;
        FUN_18013bf3c((LPVOID)0x0);
      }
    }
    FUN_18013bf3c((LPVOID)0x0);
  }
  return puVar4;
}

// ---- Function: FUN_180137814 ----
int32_t * FUN_180137814(wchar_t *param_1)

{
  errno_t eVar1;
  longlong lVar2;
  longlong lVar3;
  int32_t *puVar4;
  wchar_t *pwVar5;
  wchar_t wVar6;
  longlong lVar7;
  ulonglong _SizeInWords;
  int32_t *puVar8;
  
  wVar6 = *param_1;
  lVar7 = 0;
  pwVar5 = param_1;
  while (wVar6 != L'\0') {
    lVar2 = lVar7 + 1;
    if (wVar6 == L'=') {
      lVar2 = lVar7;
    }
    lVar7 = -1;
    do {
      lVar3 = lVar7;
      lVar7 = lVar3 + 1;
    } while (pwVar5[lVar7] != L'\0');
    pwVar5 = pwVar5 + lVar3 + 2;
    lVar7 = lVar2;
    wVar6 = *pwVar5;
  }
  puVar4 = (int32_t *)_calloc_base(lVar7 + 1,8);
  puVar8 = puVar4;
  if (puVar4 == (int32_t *)0x0) {
LAB_18013787f:
    FUN_18013bf3c((LPVOID)0x0);
    puVar4 = (int32_t *)0x0;
  }
  else {
    for (; *param_1 != L'\0'; param_1 = param_1 + _SizeInWords) {
      lVar7 = -1;
      do {
        lVar2 = lVar7;
        lVar7 = lVar2 + 1;
      } while (param_1[lVar7] != L'\0');
      _SizeInWords = lVar2 + 2;
      if (*param_1 != L'=') {
        pwVar5 = (wchar_t *)_calloc_base(_SizeInWords,2);
        if (pwVar5 == (wchar_t *)0x0) {
          free_environment<>(puVar4);
          FUN_18013bf3c((LPVOID)0x0);
          goto LAB_18013787f;
        }
        eVar1 = wcscpy_s(pwVar5,_SizeInWords,param_1);
        if (eVar1 != 0) {
                    
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *puVar8 = pwVar5;
        puVar8 = puVar8 + 1;
        FUN_18013bf3c((LPVOID)0x0);
      }
    }
    FUN_18013bf3c((LPVOID)0x0);
  }
  return puVar4;
}

// ---- Function: free_environment__ ----
/* Library Function - Multiple Matches With Same Base Name
    void __cdecl free_environment<char>(char * __ptr64 * __ptr64 const)
    void __cdecl free_environment<wchar_t>(wchar_t * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void free_environment<>(int32_t *param_1)

{
  LPVOID pvVar1;
  int32_t *puVar2;
  
  if (param_1 != (int32_t *)0x0) {
    pvVar1 = (LPVOID)*param_1;
    puVar2 = param_1;
    while (pvVar1 != (LPVOID)0x0) {
      FUN_18013bf3c(pvVar1);
      puVar2 = puVar2 + 1;
      pvVar1 = (LPVOID)*puVar2;
    }
    FUN_18013bf3c(param_1);
  }
  return;
}

// ---- Function: FUN_180137974 ----
int32_t FUN_180137974(void)

{
  int iVar1;
  int32_t uVar2;
  char *pcVar3;
  int32_t *puVar4;
  
  puVar4 = DAT_1801ee110;
  if (DAT_1801ee110 == (int32_t *)0x0) {
LAB_18013799d:
    uVar2 = 0xffffffff;
  }
  else {
    for (; (LPCWSTR)*puVar4 != (LPCWSTR)0x0; puVar4 = puVar4 + 1) {
      iVar1 = FUN_180141208(0,0,(LPCWSTR)*puVar4,-1,(LPSTR)0x0,0,(LPBOOL)0x0,(LPBOOL)0x0);
      if (iVar1 == 0) goto LAB_18013799d;
      pcVar3 = (char *)_calloc_base((longlong)iVar1,1);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = (char *)0x0;
LAB_180137a48:
        FUN_18013bf3c(pcVar3);
        goto LAB_18013799d;
      }
      iVar1 = FUN_180141208(0,0,(LPCWSTR)*puVar4,-1,pcVar3,iVar1,(LPBOOL)0x0,(LPBOOL)0x0);
      if (iVar1 == 0) goto LAB_180137a48;
      thunk_FUN_180144050(pcVar3,0);
      FUN_18013bf3c((LPVOID)0x0);
    }
    uVar2 = 0;
  }
  return uVar2;
}

// ---- Function: FUN_180137a54 ----
int32_t FUN_180137a54(void)

{
  int iVar1;
  int32_t uVar2;
  int32_t (*pauVar3) [32];
  int32_t *puVar4;
  
  puVar4 = DAT_1801ee108;
  if (DAT_1801ee108 == (int32_t *)0x0) {
LAB_180137a77:
    uVar2 = 0xffffffff;
  }
  else {
    for (; (LPCSTR)*puVar4 != (LPCSTR)0x0; puVar4 = puVar4 + 1) {
      iVar1 = FUN_180141178(0,0,(LPCSTR)*puVar4,-1,(LPWSTR)0x0,0);
      if (iVar1 == 0) goto LAB_180137a77;
      pauVar3 = (int32_t (*) [32])_calloc_base((longlong)iVar1,2);
      if (pauVar3 == (int32_t (*) [32])0x0) {
        pauVar3 = (int32_t (*) [32])0x0;
LAB_180137b04:
        FUN_18013bf3c(pauVar3);
        goto LAB_180137a77;
      }
      iVar1 = FUN_180141178(0,0,(LPCSTR)*puVar4,-1,(LPWSTR)pauVar3,iVar1);
      if (iVar1 == 0) goto LAB_180137b04;
      thunk_FUN_1801443a8(pauVar3,0);
      FUN_18013bf3c((LPVOID)0x0);
    }
    uVar2 = 0;
  }
  return uVar2;
}

// ---- Function: uninitialize_environment_internal__ ----
/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(int32_t *param_1)

{
  if ((int32_t *)*param_1 != DAT_1801ee120) {
    free_environment<>((int32_t *)*param_1);
  }
  return;
}

// ---- Function: uninitialize_environment_internal__ ----
/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(int32_t *param_1)

{
  if ((int32_t *)*param_1 != DAT_1801ee118) {
    free_environment<>((int32_t *)*param_1);
  }
  return;
}

