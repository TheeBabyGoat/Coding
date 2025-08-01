#include <stdint.h>
#include <stddef.h>

// ---- Function: __scrt_acquire_startup_lock ----
/* Library Function - Single Match
    __scrt_acquire_startup_lock
   
   Library: Visual Studio 2019 Release */

ulonglong __scrt_acquire_startup_lock(void)

{
  ulonglong uVar1;
  bool bVar2;
  int32_t extraout_var;
  ulonglong uVar3;
  
  bVar2 = __scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT71(extraout_var,bVar2);
  if ((int)uVar3 == 0) {
LAB_180125576:
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      uVar3 = 0;
      LOCK();
      bVar2 = DAT_1801ed690 == 0;
      uVar1 = *(ulonglong *)((longlong)Self + 8);
      if (!bVar2) {
        uVar3 = DAT_1801ed690;
        uVar1 = DAT_1801ed690;
      }
      DAT_1801ed690 = uVar1;
      UNLOCK();
      if (bVar2) goto LAB_180125576;
    } while (*(ulonglong *)((longlong)Self + 8) != uVar3);
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3;
}

// ---- Function: __scrt_dllmain_after_initialize_c ----
/* Library Function - Single Match
    __scrt_dllmain_after_initialize_c
   
   Library: Visual Studio 2019 Release */

int32_t __scrt_dllmain_after_initialize_c(void)

{
  bool bVar1;
  int32_t extraout_var;
  int32_t uVar2;
  ulonglong uVar3;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar2 = FUN_1800a7f80();
    uVar3 = _configure_narrow_argv((int)uVar2);
    if ((int)uVar3 != 0) {
      return uVar3 & 0xffffffffffffff00;
    }
    uVar2 = thunk_FUN_180137620();
  }
  else {
    uVar2 = FUN_180125e38();
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}

// ---- Function: __scrt_dllmain_before_initialize_c ----
/* Library Function - Single Match
    __scrt_dllmain_before_initialize_c
   
   Library: Visual Studio 2019 Release */

bool __scrt_dllmain_before_initialize_c(void)

{
  int32_t uVar1;
  
  uVar1 = __scrt_initialize_onexit_tables(0);
  return (char)uVar1 != '\0';
}

// ---- Function: __scrt_dllmain_crt_thread_attach ----
/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2019 Release */

int32_t __scrt_dllmain_crt_thread_attach(void)

{
  bool bVar1;
  
  bVar1 = __vcrt_thread_attach();
  if (bVar1) {
    bVar1 = FUN_180138158();
    if (bVar1) {
      return 1;
    }
    FUN_180127aa8();
  }
  return 0;
}

// ---- Function: __scrt_dllmain_crt_thread_detach ----
/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2019 Release */

int32_t __scrt_dllmain_crt_thread_detach(void)

{
  __acrt_thread_detach();
  FUN_180127aa8();
  return 1;
}

// ---- Function: __scrt_dllmain_exception_filter ----
/* Library Function - Single Match
    __scrt_dllmain_exception_filter
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_exception_filter
               (int32_t param_1,int param_2,int32_t param_3,int32_t *param_4,int param_5,
               int32_t param_6)

{
  bool bVar1;
  int32_t extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if (((int)CONCAT71(extraout_var,bVar1) == 0) && (param_2 == 1)) {
    (*(code *)PTR__guard_dispatch_icall_180157468)(param_1,0,param_3);
  }
  FUN_180136e18(param_5,param_6);
  return;
}

// ---- Function: __scrt_dllmain_uninitialize_c ----
/* Library Function - Single Match
    __scrt_dllmain_uninitialize_c
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_uninitialize_c(void)

{
  bool bVar1;
  int32_t extraout_var;
  int iVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_180137f64(&DAT_1801ed6a0);
    return;
  }
  iVar2 = FUN_180137268();
  if (iVar2 == 0) {
    FUN_18013724c();
  }
  return;
}

// ---- Function: FUN_1801256a0 ----
void FUN_1801256a0(void)

{
  FUN_1801381b4();
  FUN_180127ad4();
  return;
}

// ---- Function: FUN_1801256b4 ----
ulonglong FUN_1801256b4(int param_1)

{
  ulonglong uVar1;
  int32_t uVar2;
  
  if (param_1 == 0) {
    DAT_1801ed698 = 1;
  }
  FUN_180125e38();
  uVar1 = __vcrt_initialize();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_180138144();
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    uVar1 = __vcrt_uninitialize('\0');
  }
  return uVar1 & 0xffffffffffffff00;
}

// ---- Function: __scrt_initialize_onexit_tables ----
/* Library Function - Single Match
    __scrt_initialize_onexit_tables
   
   Library: Visual Studio 2019 Release */

int32_t __scrt_initialize_onexit_tables(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong in_RAX;
  int32_t extraout_var;
  int32_t uVar3;
  
  if (DAT_1801ed699 == '\0') {
    if (1 < param_1) {
      FUN_1801264a4(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    bVar2 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar2) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      DAT_1801ed6a0 = _DAT_18015ad90;
      uRam00000001801ed6a8 = _UNK_18015ad98;
      _DAT_1801ed6b0 = 0xffffffffffffffff;
      _DAT_1801ed6b8 = _DAT_18015ad90;
      uRam00000001801ed6c0 = _UNK_18015ad98;
      _DAT_1801ed6c8 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_1801ed6a0);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table((longlong *)&DAT_1801ed6b8), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_1801ed699 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}

// ---- Function: FUN_18012577c ----
ulonglong FUN_18012577c(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = 0x5a4d;
  if (IMAGE_DOS_HEADER_180000000.e_magic == (char  [2])0x5a4d) {
    lVar3 = (longlong)(int)IMAGE_DOS_HEADER_180000000.e_lfanew;
    if ((*(int *)(lVar3 + 0x180000000) == 0x4550) &&
       (uVar1 = 0x20b,
       *(short *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar3 + -4) == 0x20b)) {
      lVar4 = (ulonglong)*(ushort *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar3 + -8) +
              0x18 + lVar3 + 0x180000000;
      uVar1 = (ulonglong)*(ushort *)(IMAGE_DOS_HEADER_180000000.e_magic + lVar3 + 6);
      lVar3 = lVar4 + uVar1 * 0x28;
      for (; lVar4 != lVar3; lVar4 = lVar4 + 0x28) {
        if (((ulonglong)*(uint *)(lVar4 + 0xc) <= param_1 - 0x180000000U) &&
           (uVar1 = (ulonglong)(*(int *)(lVar4 + 8) + *(uint *)(lVar4 + 0xc)),
           param_1 - 0x180000000U < uVar1)) goto LAB_1801257f2;
      }
      lVar4 = 0;
LAB_1801257f2:
      if (lVar4 == 0) {
        return uVar1 & 0xffffffffffffff00;
      }
      uVar2 = (uint7)(uVar1 >> 8);
      if (*(int *)(lVar4 + 0x24) < 0) {
        return (ulonglong)uVar2 << 8;
      }
      return CONCAT71(uVar2,1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}

// ---- Function: __scrt_release_startup_lock ----
/* Library Function - Single Match
    __scrt_release_startup_lock
   
   Library: Visual Studio 2019 Release */

void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  int32_t extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_1801ed690 = 0;
    UNLOCK();
  }
  return;
}

// ---- Function: __scrt_uninitialize_crt ----
/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2019 Release */

int32_t __scrt_uninitialize_crt(bool param_1,char param_2)

{
  int32_t in_RAX;
  
  if ((DAT_1801ed698 == '\0') || (param_2 == '\0')) {
    __acrt_uninitialize(param_1);
    in_RAX = __vcrt_uninitialize(param_1);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

// ---- Function: _onexit ----
/* Library Function - Single Match
    _onexit
   
   Library: Visual Studio 2019 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  _onexit_t p_Var2;
  
  if (DAT_1801ed6a0 == -1) {
    iVar1 = FUN_180137f54(_Func);
  }
  else {
    iVar1 = _register_onexit_function(&DAT_1801ed6a0,_Func);
  }
  p_Var2 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var2 = _Func;
  }
  return p_Var2;
}

// ---- Function: atexit ----
/* Library Function - Single Match
    atexit
   
   Library: Visual Studio 2019 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}

// ---- Function: tls_callback_0 ----
void tls_callback_0(int32_t param_1,int param_2)

{
  longlong lVar1;
  int32_t **ppuVar2;
  
  if ((param_2 == 2) &&
     (lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8),
     *(char *)(lVar1 + 0x14) != '\x01')) {
    *(int32_t *)(lVar1 + 0x14) = 1;
    for (ppuVar2 = &PTR_FUN_1801576a8; ppuVar2 != (int32_t **)&DAT_1801576b0;
        ppuVar2 = ppuVar2 + 1) {
      if (*ppuVar2 != (int32_t *)0x0) {
        (*(code *)PTR__guard_dispatch_icall_180157468)();
      }
    }
  }
  return;
}

// ---- Function: tls_callback_1 ----
void tls_callback_1(int32_t param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  
  if ((param_2 == 3) || (param_2 == 0)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    piVar5 = *(int **)(lVar1 + 0x20);
    if (*(int **)(lVar1 + 0x20) != (int *)0x0) {
      while( true ) {
        iVar3 = *piVar5 + -1;
        if (-1 < iVar3) {
          plVar4 = (longlong *)(piVar5 + ((longlong)iVar3 + 2) * 2);
          do {
            if (*plVar4 != 0) {
              (*(code *)PTR__guard_dispatch_icall_180157468)();
            }
            plVar4 = plVar4 + -1;
            iVar3 = iVar3 + -1;
          } while (-1 < iVar3);
        }
        piVar2 = *(int **)(piVar5 + 2);
        if (piVar2 == (int *)0x0) break;
        FUN_18012d5e8(piVar5);
        *(int **)(lVar1 + 0x20) = piVar2;
        piVar5 = piVar2;
      }
      *(int32_t *)(lVar1 + 0x20) = 0;
    }
  }
  return;
}

