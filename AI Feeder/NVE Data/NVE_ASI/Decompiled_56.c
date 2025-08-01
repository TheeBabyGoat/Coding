#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_180127aa8 ----
int32_t FUN_180127aa8(void)

{
  FUN_180127b58();
  return 1;
}

// ---- Function: __vcrt_uninitialize ----
/* Library Function - Single Match
    __vcrt_uninitialize
   
   Library: Visual Studio 2019 Release */

int32_t __vcrt_uninitialize(char param_1)

{
  int32_t in_RAX;
  
  if (param_1 == '\0') {
    __vcrt_uninitialize_ptd();
    in_RAX = __vcrt_uninitialize_locks();
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

// ---- Function: FUN_180127ad4 ----
int32_t FUN_180127ad4(void)

{
  __vcrt_uninitialize_ptd();
  return 1;
}

// ---- Function: __std_type_info_compare ----
/* Library Function - Single Match
    __std_type_info_compare
   
   Library: Visual Studio 2019 Release */

uint __std_type_info_compare(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    pbVar2 = (byte *)(param_1 + 9);
    lVar3 = (param_2 + 9) - (longlong)pbVar2;
    do {
      bVar1 = *pbVar2;
      if (bVar1 != pbVar2[lVar3]) {
        return -(uint)(bVar1 < pbVar2[lVar3]) | 1;
      }
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  return 0;
}

// ---- Function: FUN_180127b0c ----
void FUN_180127b0c(PSLIST_HEADER param_1)

{
  PSLIST_ENTRY p_Var1;
  PSLIST_ENTRY_conflict p_Var2;
  
  p_Var2 = InterlockedFlushSList(param_1);
  while (p_Var2 != (PSLIST_ENTRY_conflict)0x0) {
    p_Var1 = p_Var2->Next;
    FUN_18012d5e8(p_Var2);
    p_Var2 = p_Var1;
  }
  return;
}

// ---- Function: FUN_180127b58 ----
void FUN_180127b58(void)

{
  int32_t *puVar1;
  
  if (DAT_1801eb0f0 != 0xffffffff) {
    puVar1 = (int32_t *)__vcrt_FlsGetValue(DAT_1801eb0f0);
    __vcrt_FlsSetValue(DAT_1801eb0f0,(LPVOID)0x0);
    if ((puVar1 != (int32_t *)0x0) && (puVar1 != &DAT_1801edc80)) {
      FUN_18012d5e8(puVar1);
    }
  }
  return;
}

// ---- Function: __vcrt_getptd ----
/* Library Function - Single Match
    __vcrt_getptd
   
   Library: Visual Studio 2019 Release */

void __vcrt_getptd(void)

{
  LPVOID pvVar1;
  
  pvVar1 = __vcrt_getptd_noexit();
  if (pvVar1 != (LPVOID)0x0) {
    return;
  }
                    
  abort();
}

// ---- Function: __vcrt_getptd_noexit ----
/* Library Function - Single Match
    __vcrt_getptd_noexit
   
   Library: Visual Studio 2019 Release */

LPVOID __vcrt_getptd_noexit(void)

{
  DWORD dwErrCode;
  int iVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  
  if (DAT_1801eb0f0 == 0xffffffff) {
    pvVar3 = (LPVOID)0x0;
  }
  else {
    dwErrCode = GetLastError();
    pvVar2 = (LPVOID)__vcrt_FlsGetValue(DAT_1801eb0f0);
    pvVar4 = (LPVOID)0x0;
    pvVar3 = pvVar4;
    if (((pvVar2 != (LPVOID)0xffffffffffffffff) && (pvVar3 = pvVar2, pvVar2 == (LPVOID)0x0)) &&
       (iVar1 = __vcrt_FlsSetValue(DAT_1801eb0f0,(LPVOID)0xffffffffffffffff), pvVar3 = pvVar4,
       iVar1 != 0)) {
      pvVar3 = _calloc_base(1,0x80);
      if ((pvVar3 == (LPVOID)0x0) || (iVar1 = __vcrt_FlsSetValue(DAT_1801eb0f0,pvVar3), iVar1 == 0))
      {
        __vcrt_FlsSetValue(DAT_1801eb0f0,(LPVOID)0x0);
        pvVar2 = pvVar3;
      }
      else {
        *(int32_t *)((longlong)pvVar3 + 0x78) = 0xfffffffe;
        pvVar2 = pvVar4;
        pvVar4 = pvVar3;
      }
      FUN_18012d5e8(pvVar2);
      pvVar3 = pvVar4;
    }
    SetLastError(dwErrCode);
  }
  return pvVar3;
}

// ---- Function: __vcrt_getptd_noinit ----
/* Library Function - Single Match
    __vcrt_getptd_noinit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong __vcrt_getptd_noinit(void)

{
  DWORD dwErrCode;
  longlong lVar1;
  
  if (DAT_1801eb0f0 == -1) {
    lVar1 = 0;
  }
  else {
    dwErrCode = GetLastError();
    lVar1 = __vcrt_FlsGetValue(DAT_1801eb0f0);
    SetLastError(dwErrCode);
    if (lVar1 == -1) {
      lVar1 = 0;
    }
  }
  return lVar1;
}

// ---- Function: __vcrt_initialize_ptd ----
/* Library Function - Single Match
    __vcrt_initialize_ptd
   
   Library: Visual Studio 2019 Release */

uint __vcrt_initialize_ptd(void)

{
  uint uVar1;
  int iVar2;
  uint3 extraout_var;
  
  uVar1 = __vcrt_FlsAlloc(&LAB_180127b38);
  DAT_1801eb0f0 = uVar1;
  if (uVar1 != 0xffffffff) {
    iVar2 = __vcrt_FlsSetValue(uVar1,&DAT_1801edc80);
    if (iVar2 != 0) {
      _DAT_1801edcf8 = 0xfffffffe;
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
    __vcrt_uninitialize_ptd();
    uVar1 = (uint)extraout_var << 8;
  }
  return uVar1 & 0xffffff00;
}

// ---- Function: __vcrt_uninitialize_ptd ----
/* Library Function - Single Match
    __vcrt_uninitialize_ptd
   
   Library: Visual Studio 2019 Release */

int32_t __vcrt_uninitialize_ptd(void)

{
  if (DAT_1801eb0f0 != -1) {
    __vcrt_FlsFree(DAT_1801eb0f0);
    DAT_1801eb0f0 = -1;
  }
  return 1;
}

// ---- Function: FUN_180127d38 ----
void FUN_180127d38(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  if (*(int *)((longlong)*(int *)(param_3 + 0x1c) + *param_1) == -2) {
    FUN_180127de4(param_3,(longlong)param_2,*param_2);
  }
  return;
}

// ---- Function: GetUnwindTryBlock ----
/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::GetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
__FrameHandler3::GetUnwindTryBlock
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  longlong *plVar1;
  longlong local_res18 [2];
  
  plVar1 = FUN_180126a68((longlong *)param_1,(ulonglong *)param_2,(longlong)param_3,local_res18);
  return *(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1);
}

// ---- Function: SetState ----
/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::SetState(unsigned __int64 * __ptr64,struct
   _s_FuncInfo const * __ptr64,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __FrameHandler3::SetState(__uint64 *param_1,_s_FuncInfo *param_2,int param_3)

{
  *(int *)((longlong)param_2->dispUnwindHelp + *param_1) = param_3;
  return;
}

// ---- Function: SetUnwindTryBlock ----
/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::SetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
__FrameHandler3::SetUnwindTryBlock
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3,int param_4)

{
  longlong *plVar1;
  longlong local_res18 [2];
  
  plVar1 = FUN_180126a68((longlong *)param_1,(ulonglong *)param_2,(longlong)param_3,local_res18);
  if (*(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1) < param_4) {
    *(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1) = param_4;
  }
  return;
}

// ---- Function: FUN_180127dd4 ----
void FUN_180127dd4(longlong param_1,ulonglong *param_2)

{
  FUN_180127de4(param_1,(longlong)param_2,*param_2);
  return;
}

// ---- Function: FUN_180127ddc ----
void FUN_180127ddc(longlong param_1,ulonglong *param_2)

{
  FUN_180127e4c(param_1,(longlong)param_2,*param_2);
  return;
}

