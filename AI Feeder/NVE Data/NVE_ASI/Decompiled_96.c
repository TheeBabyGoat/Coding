#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_180155671 ----
void FUN_180155671(int32_t *param_1)

{
  __FrameUnwindFilter(param_1);
  return;
}

// ---- Function: fin_1 ----
/* Library Function - Multiple Matches With Same Base Name
    int `public: static void __cdecl __FrameHandler4::FrameUnwindToState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct FuncInfo4 * __ptr64,int)'::`1'::fin$1
    int `public: static void __cdecl __FrameHandler4::FrameUnwindToState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct FH4::FuncInfo4 * __ptr64,int)'::`1'::fin$1
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void fin_1(void)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = __vcrt_getptd();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}

// ---- Function: FUN_1801556aa ----
void FUN_1801556aa(int32_t param_1,longlong param_2)

{
  FUN_18012ef20(**(longlong **)(param_2 + 0x48));
  return;
}

// ---- Function: FUN_1801556c5 ----
void FUN_1801556c5(int32_t param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x98));
  return;
}

// ---- Function: FUN_1801556e2 ----
void FUN_1801556e2(int32_t param_1,longlong param_2)

{
  FUN_18012ef20(*(longlong *)(param_2 + 0x40));
  return;
}

// ---- Function: FUN_1801556fa ----
void FUN_1801556fa(int32_t param_1,longlong param_2)

{
  FUN_18012ef20(*(longlong *)(param_2 + 0x60));
  return;
}

// ---- Function: FUN_180155712 ----
void FUN_180155712(int32_t param_1,longlong param_2)

{
  FUN_18012ef20(*(longlong *)(param_2 + 0x40));
  return;
}

// ---- Function: FUN_18015572c ----
void FUN_18015572c(int32_t param_1,longlong param_2)

{
  FUN_18012ef20(*(longlong *)(param_2 + 0x38));
  return;
}

// ---- Function: FUN_180155744 ----
void FUN_180155744(int32_t param_1,longlong param_2)

{
  FUN_18012ef20(*(longlong *)(param_2 + 0x58));
  return;
}

// ---- Function: FUN_18015575e ----
void FUN_18015575e(int32_t param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) == 0) {
    __acrt_stdio_free_stream(*(int32_t *)(param_2 + 0x40));
  }
  FUN_18012ef20(*(longlong *)(param_2 + 0x40));
  return;
}

// ---- Function: FUN_180155789 ----
void FUN_180155789(void)

{
  __acrt_unlock(0xb);
  return;
}

// ---- Function: FUN_1801557a2 ----
void FUN_1801557a2(void)

{
  __acrt_unlock(0xb);
  return;
}

// ---- Function: FUN_1801557bb ----
void FUN_1801557bb(int32_t param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x48));
  return;
}

// ---- Function: FUN_1801557d5 ----
void FUN_1801557d5(void)

{
  __acrt_unlock(0);
  return;
}

// ---- Function: FUN_1801557eb ----
int32_t FUN_1801557eb(int32_t *param_1,longlong param_2)

{
  int iVar1;
  
  *(int32_t **)(param_2 + 0x28) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 0x24) = iVar1;
  *(uint *)(param_2 + 0x20) = (uint)(iVar1 == -0x1f928c9d);
  return *(int32_t *)(param_2 + 0x20);
}

// ---- Function: FUN_180155818 ----
void FUN_180155818(int32_t param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x58));
  return;
}

// ---- Function: FUN_180155832 ----
void FUN_180155832(int32_t param_1,longlong param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(longlong *)**(int32_t **)(param_2 + 0x48) + 0x3a8);
  *puVar1 = *puVar1 & 0xffffffef;
  return;
}

