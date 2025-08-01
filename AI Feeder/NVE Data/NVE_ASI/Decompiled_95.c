#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_180153a40 ----
void FUN_180153a40(int32_t param_1,longlong param_2)

{
  thunk_FUN_18012d5e8(*(LPVOID *)(param_2 + 0xd0));
  return;
}

// ---- Function: FUN_180153ad0 ----
void FUN_180153ad0(int32_t param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x68) & 1) != 0) {
    *(uint *)(param_2 + 0x68) = *(uint *)(param_2 + 0x68) & 0xfffffffe;
    thunk_FUN_1800ba040(*(longlong **)(param_2 + 0x60));
  }
  return;
}

// ---- Function: FUN_1801540f0 ----
void FUN_1801540f0(int32_t param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_1800a6800(*(longlong **)(param_2 + 0x50));
  }
  return;
}

// ---- Function: FUN_1801541f0 ----
void FUN_1801541f0(int32_t param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_1800a6800(*(longlong **)(param_2 + 0x40));
  }
  return;
}

// ---- Function: FUN_180154440 ----
void FUN_180154440(int32_t param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    thunk_FUN_1800a6800(*(longlong **)(param_2 + 0x28));
  }
  return;
}

// ---- Function: FUN_180154830 ----
void FUN_180154830(int32_t param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_1800a6800(*(longlong **)(param_2 + 0x50));
  }
  return;
}

// ---- Function: FUN_180154e50 ----
void FUN_180154e50(int32_t param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_1800a6c20(*(longlong *)(param_2 + 0x50));
  }
  return;
}

// ---- Function: FUN_180154f30 ----
bool FUN_180154f30(int32_t *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}

// ---- Function: FUN_180155243 ----
void FUN_180155243(int32_t param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}

// ---- Function: FUN_18015525a ----
void FUN_18015525a(int32_t param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x20));
  return;
}

// ---- Function: FUN_180155273 ----
void FUN_180155273(void)

{
  FUN_1801256a0();
  return;
}

// ---- Function: FUN_180155287 ----
void FUN_180155287(int32_t *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(int32_t *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(int32_t *)(param_2 + 0x70),dllmain_crt_dispatch,*(int *)*param_1,param_1);
  return;
}

// ---- Function: FUN_1801554b1 ----
void FUN_1801554b1(void)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  *(int32_t *)(lVar1 + 0x78) = 0xfffffffe;
  return;
}

// ---- Function: FUN_1801554cd ----
void FUN_1801554cd(int32_t *param_1,longlong param_2)

{
  *(int32_t **)(param_2 + 0x58) = param_1;
  FUN_18012a4e4(param_1,*(longlong *)(param_2 + 0xb8),(int32_t *)(param_2 + 0x20));
  return;
}

// ---- Function: FUN_180155578 ----
void FUN_180155578(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  *(_EXCEPTION_POINTERS **)(param_2 + 0x80) = param_1;
  ExFilterRethrowFH4(param_1,*(EHExceptionRecord **)(param_2 + 0xe8),*(int *)(param_2 + 0xd8),
                     (int *)(param_2 + 0x20));
  return;
}

// ---- Function: FUN_180155638 ----
void FUN_180155638(int32_t *param_1)

{
  __FrameUnwindFilter(param_1);
  return;
}

// ---- Function: FUN_18015564e ----
void FUN_18015564e(void)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = __vcrt_getptd();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}

