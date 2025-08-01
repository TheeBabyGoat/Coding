#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_18012649c ----
void FUN_18012649c(void)

{
  _DAT_1801edc54 = 0;
  return;
}

// ---- Function: FUN_1801264a4 ----
void FUN_1801264a4(int32_t param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  PRUNTIME_FUNCTION FunctionEntry;
  int32_t *puVar4;
  int32_t unaff_retaddr;
  DWORD64 local_res10;
  int32_t local_res18 [8];
  int32_t local_res20 [8];
  int32_t auStack_5c8 [8];
  int32_t auStack_5c0 [232];
  int32_t local_4d8 [152];
  int32_t *local_440;
  DWORD64 local_3e0;
  
  puVar4 = auStack_5c8;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar4 = auStack_5c0;
  }
  *(int32_t *)(puVar4 + -8) = 0x1801264d8;
  FUN_18012649c();
  *(int32_t *)(puVar4 + -8) = 0x1801264e9;
  FUN_180151670((int32_t (*) [32])local_4d8,0,0x4d0);
  *(int32_t *)(puVar4 + -8) = 0x1801264f3;
  RtlCaptureContext(local_4d8);
  *(int32_t *)(puVar4 + -8) = 0x18012650d;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(int32_t *)(puVar4 + 0x38) = 0;
    *(int32_t **)(puVar4 + 0x30) = local_res18;
    *(int32_t **)(puVar4 + 0x28) = local_res20;
    *(int32_t **)(puVar4 + 0x20) = local_4d8;
    *(int32_t *)(puVar4 + -8) = 0x18012654e;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(int32_t *)(puVar4 + -8) = 0x180126580;
  FUN_180151670((int32_t (*) [32])(puVar4 + 0x50),0,0x98);
  *(int32_t *)(puVar4 + 0x60) = unaff_retaddr;
  *(int32_t *)(puVar4 + 0x50) = 0x40000015;
  *(int32_t *)(puVar4 + 0x54) = 1;
  *(int32_t *)(puVar4 + -8) = 0x1801265a2;
  BVar2 = IsDebuggerPresent();
  *(int32_t **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(int32_t **)(puVar4 + 0x48) = local_4d8;
  *(int32_t *)(puVar4 + -8) = 0x1801265bf;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(int32_t *)(puVar4 + -8) = 0x1801265ca;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(int32_t *)(puVar4 + -8) = 0x1801265db;
    FUN_18012649c();
  }
  return;
}

// ---- Function: __security_init_cookie ----
/* Library Function - Single Match
    __security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  _FILETIME local_18 [2];
  
  if (DAT_1801eb080 == 0x2b992ddfa232) {
    local_res8.dwLowDateTime = 0;
    local_res8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res8);
    local_18[0] = local_res8;
    DVar1 = GetCurrentThreadId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res10);
    DAT_1801eb080 =
         ((ulonglong)local_res10.s.LowPart << 0x20 ^
          CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^
         (ulonglong)local_18) & 0xffffffffffff;
    if (DAT_1801eb080 == 0x2b992ddfa232) {
      DAT_1801eb080 = 0x2b992ddfa233;
    }
  }
  DAT_1801eb0c0 = ~DAT_1801eb080;
  return;
}

// ---- Function: FUN_180126698 ----
void FUN_180126698(void)

{
                    
                    
  InitializeSListHead(&DAT_1801edc60);
  return;
}

// ---- Function: FUN_1801266a8 ----
void FUN_1801266a8(void)

{
  FUN_180127b0c((PSLIST_HEADER)&DAT_1801edc60);
  return;
}

// ---- Function: FUN_1801266b4 ----
int32_t * FUN_1801266b4(void)

{
  return &DAT_1801edc70;
}

// ---- Function: __scrt_initialize_default_local_stdio_options ----
/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2019 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_1800f87c0();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_1801266b4();
  *puVar1 = *puVar1 | 2;
  return;
}

// ---- Function: FUN_1801266d8 ----
int32_t ** FUN_1801266d8(void)

{
  return &PTR_tls_callback_0_180178338;
}

// ---- Function: _RTC_Initialize ----
/* Library Function - Single Match
    _RTC_Initialize
   
   Library: Visual Studio 2019 Release */

void _RTC_Initialize(void)

{
  longlong *plVar1;
  
  for (plVar1 = &DAT_1801ded00; plVar1 < &DAT_1801ded00; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_180157468)();
    }
  }
  return;
}

// ---- Function: FUN_18012671c ----
void FUN_18012671c(void)

{
  longlong *plVar1;
  
  for (plVar1 = &DAT_1801ded10; plVar1 < &DAT_1801ded10; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_180157468)();
    }
  }
  return;
}

// ---- Function: _CallSETranslator__ ----
/* Library Function - Multiple Matches With Same Base Name
    int __cdecl _CallSETranslator<class __FrameHandler3>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   _s_FuncInfo const * __ptr64,unsigned long,unsigned __int64 * __ptr64)
    int __cdecl _CallSETranslator<class __FrameHandler3>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   _s_FuncInfo const * __ptr64,unsigned long,unsigned __int64 * __ptr64,int)
    int __cdecl _CallSETranslator<class __FrameHandler4>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   FuncInfo4 * __ptr64,unsigned long,unsigned __int64 * __ptr64)
    int __cdecl _CallSETranslator<class __FrameHandler4>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   FH4::FuncInfo4 * __ptr64,unsigned long,unsigned __int64 * __ptr64,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int32_t _CallSETranslator<>(int32_t *param_1,int32_t param_2,int32_t param_3)

{
  int32_t *local_20;
  int32_t local_18;
  
  local_20 = param_1;
  local_18 = param_3;
  __vcrt_getptd();
  (*(code *)PTR__guard_dispatch_icall_180157468)(*param_1,&local_20);
  return 0;
}

// ---- Function: _CallSETranslator__ ----
/* Library Function - Multiple Matches With Same Base Name
    int __cdecl _CallSETranslator<class __FrameHandler3>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   _s_FuncInfo const * __ptr64,unsigned long,unsigned __int64 * __ptr64)
    int __cdecl _CallSETranslator<class __FrameHandler3>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   _s_FuncInfo const * __ptr64,unsigned long,unsigned __int64 * __ptr64,int)
    int __cdecl _CallSETranslator<class __FrameHandler4>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   FuncInfo4 * __ptr64,unsigned long,unsigned __int64 * __ptr64)
    int __cdecl _CallSETranslator<class __FrameHandler4>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   FH4::FuncInfo4 * __ptr64,unsigned long,unsigned __int64 * __ptr64,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int32_t _CallSETranslator<>(int32_t *param_1,int32_t param_2,int32_t param_3)

{
  int32_t *local_20;
  int32_t local_18;
  
  local_20 = param_1;
  local_18 = param_3;
  __vcrt_getptd();
  (*(code *)PTR__guard_dispatch_icall_180157468)(*param_1,&local_20);
  return 0;
}

// ---- Function: FUN_180126800 ----
longlong FUN_180126800(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  do {
    if (uVar1 == 0) {
      return 0;
    }
    uVar1 = uVar1 - 1;
    lVar2 = __vcrt_getptd();
    lVar2 = (longlong)*(int *)(param_1 + 0x10) +
            *(longlong *)(lVar2 + 0x60) + (ulonglong)uVar1 * 0x14;
  } while ((param_2 <= *(int *)(lVar2 + 4)) || (*(int *)(lVar2 + 8) < param_2));
  return lVar2;
}

// ---- Function: FUN_180126864 ----
longlong FUN_180126864(byte *param_1,byte *param_2,longlong param_3,int param_4,char param_5)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  int32_t uVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  byte bVar11;
  
  bVar11 = *param_1;
  pbVar10 = param_1 + 1;
  *param_2 = bVar11;
  if ((bVar11 & 4) != 0) {
    bVar3 = *pbVar10;
    pbVar10 = pbVar10 + -(longlong)(char)(&DAT_1801784a0)[bVar3 & 0xf];
    *(uint *)(param_2 + 4) = *(uint *)(pbVar10 + -4) >> ((&DAT_1801784b0)[bVar3 & 0xf] & 0x1f);
  }
  if ((bVar11 & 8) != 0) {
    uVar4 = *(int32_t *)pbVar10;
    pbVar10 = pbVar10 + 4;
    *(int32_t *)(param_2 + 8) = uVar4;
  }
  if ((bVar11 & 0x10) != 0) {
    uVar4 = *(int32_t *)pbVar10;
    pbVar10 = pbVar10 + 4;
    *(int32_t *)(param_2 + 0xc) = uVar4;
  }
  uVar9 = 0;
  pbVar8 = pbVar10 + 4;
  if ((param_5 == '\0') && ((bVar11 & 2) != 0)) {
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    if (*(int *)pbVar10 == 0) {
      pcVar6 = (code *)swi(0x29);
      (*pcVar6)(7);
    }
    else {
      uVar7 = *(byte *)(*(int *)pbVar10 + param_3) & 0xf;
      pbVar10 = (byte *)(*(int *)pbVar10 + param_3) + -(longlong)(char)(&DAT_1801784a0)[uVar7];
      puVar1 = (uint *)(pbVar10 + -4);
      if (*puVar1 >> ((&DAT_1801784b0)[uVar7] & 0x1f) != 0) {
        do {
          iVar5 = *(int *)pbVar10;
          pbVar2 = pbVar10 + 4;
          pbVar10 = pbVar10 + 8;
          if (iVar5 == param_4) {
            *(int32_t *)(param_2 + 0x10) = *(int32_t *)pbVar2;
            break;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *puVar1 >> ((&DAT_1801784b0)[uVar7] & 0x1f));
      }
    }
  }
  else {
    *(int32_t *)(param_2 + 0x10) = *(int32_t *)pbVar10;
  }
  if ((bVar11 & 1) != 0) {
    bVar11 = *pbVar8;
    pbVar8 = pbVar8 + -(longlong)(char)(&DAT_1801784a0)[bVar11 & 0xf];
    *(uint *)(param_2 + 0x14) = *(uint *)(pbVar8 + -4) >> ((&DAT_1801784b0)[bVar11 & 0xf] & 0x1f);
  }
  return (longlong)pbVar8 - (longlong)param_1;
}

// ---- Function: FUN_18012699c ----
bool FUN_18012699c(ulonglong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_180127dd4(param_2,param_1);
  lVar2 = FUN_180126800(param_2,iVar1);
  return lVar2 != 0;
}

// ---- Function: FUN_1801269c8 ----
byte FUN_1801269c8(int32_t param_1,byte *param_2)

{
  return *param_2 & 1;
}

// ---- Function: FrameUnwindToEmptyState ----
/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::FrameUnwindToEmptyState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
__FrameHandler3::FrameUnwindToEmptyState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  int iVar1;
  __uint64 *p_Var2;
  longlong lVar3;
  longlong local_res20;
  
  p_Var2 = (__uint64 *)
           FUN_180126a68((longlong *)param_1,(ulonglong *)param_2,(longlong)param_3,&local_res20);
  iVar1 = FUN_180127dd4((longlong)param_3,(ulonglong *)param_2);
  lVar3 = FUN_180126800((longlong)param_3,iVar1);
  if (lVar3 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(lVar3 + 4);
  }
  FUN_18012a598(p_Var2,(ulonglong *)param_2,param_3,iVar1);
  return;
}

