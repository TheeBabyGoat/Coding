#include <stdint.h>
#include <stddef.h>

// ---- Function: FrameUnwindToEmptyState ----
/* Library Function - Single Match
    public: static void __cdecl __FrameHandler4::FrameUnwindToEmptyState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct FH4::FuncInfo4 * __ptr64)
   
   Library: Visual Studio 2019 Release */

void __cdecl
__FrameHandler4::FrameUnwindToEmptyState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,FuncInfo4 *param_3)

{
  __uint64 local_res8 [4];
  
  local_res8[0] = *param_1;
  if (((byte)*param_3 & 1) != 0) {
    local_res8[0] = *(__uint64 *)(*(uint *)(param_3 + 0x14) + local_res8[0]);
  }
  FUN_18012a724((longlong *)local_res8,(ulonglong *)param_2,(longlong)param_3,-1);
  return;
}

// ---- Function: FUN_180126a68 ----
longlong * FUN_180126a68(longlong *param_1,ulonglong *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  PRUNTIME_FUNCTION p_Var3;
  uint uVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong local_res8;
  
  uVar8 = *(uint *)(param_3 + 0xc);
  iVar2 = FUN_180127dd4(param_3,param_2);
  *param_4 = *param_1;
  do {
    do {
      if (uVar8 == 0) {
        return param_4;
      }
      uVar8 = uVar8 - 1;
      lVar7 = (longlong)*(int *)(param_3 + 0x10) + (ulonglong)uVar8 * 0x14 + param_2[1];
    } while ((iVar2 <= *(int *)(lVar7 + 4)) || (*(int *)(lVar7 + 8) < iVar2));
    p_Var3 = RtlLookupFunctionEntry(*param_2,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    uVar5 = 0;
    lVar9 = (longlong)*(int *)(lVar7 + 0x10) + local_res8;
    uVar1 = *(uint *)(lVar7 + 0xc);
    if (uVar1 != 0) {
      piVar6 = (int *)(lVar9 + 0xc);
      do {
        if ((longlong)*piVar6 == (ulonglong)p_Var3->BeginAddress) break;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        piVar6 = piVar6 + 5;
      } while (uVar4 < uVar1);
    }
    if ((uint)uVar5 < uVar1) {
      *param_4 = *(longlong *)((longlong)*(int *)(lVar9 + 0x10 + uVar5 * 0x14) + *param_1);
      return param_4;
    }
  } while( true );
}

// ---- Function: GetEstablisherFrame ----
/* Library Function - Single Match
    public: static unsigned __int64 * __ptr64 __cdecl __FrameHandler4::GetEstablisherFrame(unsigned
   __int64 * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct FH4::FuncInfo4 * __ptr64,unsigned
   __int64 * __ptr64)
   
   Library: Visual Studio 2019 Release */

__uint64 * __cdecl
__FrameHandler4::GetEstablisherFrame
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,FuncInfo4 *param_3,__uint64 *param_4)

{
  *param_4 = *param_1;
  if (((byte)*param_3 & 1) != 0) {
    *param_4 = *(__uint64 *)((ulonglong)*(uint *)(param_3 + 0x14) + *param_1);
  }
  return param_4;
}

// ---- Function: FUN_180126b5c ----
int32_t *
FUN_180126b5c(int32_t *param_1,int32_t param_2,int param_3,ulonglong *param_4,longlong param_5
             )

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  int32_t uStack_3c;
  int32_t uStack_2c;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_5 + 0xc);
  iVar5 = FUN_180127dd4(param_5,param_4);
  uVar8 = 0;
  if (uVar3 == 0) {
                    
    abort();
  }
  uVar4 = param_4[1];
  lVar9 = (longlong)*(int *)(param_5 + 0x10);
  iVar10 = -1;
  uVar13 = 0xffffffff;
  uVar7 = uVar3;
  do {
    uVar1 = uVar7 - 1;
    lVar2 = uVar4 + (ulonglong)uVar1 * 0x14;
    if ((*(int *)(lVar2 + 4 + lVar9) < iVar5) && (iVar5 <= *(int *)(lVar2 + 8 + lVar9))) break;
    uVar7 = uVar1;
  } while (uVar1 != 0);
  uVar11 = uVar8;
  if (uVar7 != 0) {
    uVar11 = uVar4 + (ulonglong)(uVar7 - 1) * 0x14 + lVar9;
  }
  piVar6 = (int *)(uVar4 + lVar9);
  do {
    if ((((uVar11 == 0) || ((*(int *)(uVar11 + 4) < *piVar6 && (piVar6[1] <= *(int *)(uVar11 + 8))))
         ) && (*piVar6 <= param_3)) && ((param_3 <= piVar6[1] && (uVar13 = uVar8, iVar10 == -1)))) {
      iVar10 = (int)uVar8;
    }
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    piVar6 = piVar6 + 5;
  } while (uVar7 < uVar3);
  iVar5 = 0;
  if (iVar10 != -1) {
    iVar5 = iVar10;
  }
  iVar12 = 0;
  if (iVar10 != -1) {
    iVar12 = (int)uVar13 + 1;
  }
  *param_1 = param_2;
  param_1[1] = CONCAT44(uStack_3c,iVar5);
  param_1[2] = param_2;
  param_1[3] = CONCAT44(uStack_2c,iVar12);
  return param_1;
}

// ---- Function: FUN_180126c90 ----
int32_t * FUN_180126c90(int32_t *param_1,int *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int32_t uStack_3c;
  int32_t uStack_2c;
  int *local_28;
  int iStack_20;
  
  iVar5 = 0;
  iVar8 = 0;
  iStack_20 = 0;
  iVar6 = 0;
  local_28 = param_2;
  FUN_180127020((longlong)param_2,(longlong)&local_28);
  iVar4 = 0;
  if (*param_2 != 0) {
    pbVar7 = *(byte **)(param_2 + 2);
    iVar6 = 0;
    do {
      iVar3 = iVar5;
      if ((((int)*(int32_t *)(param_2 + 6) <= param_3) &&
          (param_3 <= (int)((ulonglong)*(int32_t *)(param_2 + 6) >> 0x20))) &&
         (iVar8 = iVar4, iVar3 = iVar4, iVar6 = iVar4, iVar5 == 0)) {
        iVar8 = 0;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      iVar4 = iVar4 + 1;
      bVar1 = (&DAT_1801784b0)[*pbVar7 & 0xf];
      pbVar7 = pbVar7 + -(longlong)(char)(&DAT_1801784a0)[*pbVar7 & 0xf];
      uVar2 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_2 + 2) = pbVar7;
      param_2[6] = uVar2 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_1801784b0)[*pbVar7 & 0xf];
      pbVar7 = pbVar7 + -(longlong)(char)(&DAT_1801784a0)[*pbVar7 & 0xf];
      uVar2 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_2 + 2) = pbVar7;
      param_2[7] = uVar2 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_1801784b0)[*pbVar7 & 0xf];
      pbVar7 = pbVar7 + -(longlong)(char)(&DAT_1801784a0)[*pbVar7 & 0xf];
      uVar2 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_2 + 2) = pbVar7;
      param_2[8] = uVar2 >> (bVar1 & 0x1f);
      iVar3 = *(int *)pbVar7;
      pbVar7 = pbVar7 + 4;
      *(byte **)(param_2 + 2) = pbVar7;
      param_2[9] = iVar3;
    } while (iVar4 != *param_2);
  }
  iStack_20 = iVar8;
  local_28 = param_2;
  FUN_180127020((longlong)param_2,(longlong)&local_28);
  *(int **)param_1 = param_2;
  param_1[2] = iVar8;
  param_1[3] = uStack_3c;
  *(int **)(param_1 + 4) = param_2;
  *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_2c,iVar6 + 1);
  return param_1;
}

// ---- Function: FUN_180126dfc ----
void FUN_180126dfc(int32_t *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,ULONG_PTR param_6,int param_7,int32_t param_8,
                  int32_t param_9,int32_t *param_10,byte param_11)

{
  int32_t auStackY_e8 [32];
  EXCEPTION_RECORD local_b8;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStackY_e8;
  local_b8._0_8_ = _DAT_180178560;
  local_b8.ExceptionRecord = _UNK_180178568;
  local_b8.ExceptionAddress = _DAT_180178570;
  local_b8._24_8_ = _UNK_180178578;
  local_b8.ExceptionInformation[9] = _UNK_1801785c8;
  local_b8.ExceptionInformation[10]._0_4_ = _DAT_1801785d0;
  local_b8.ExceptionInformation[10]._4_4_ = _UNK_1801785d4;
  local_b8.ExceptionInformation[0xb]._0_4_ = _UNK_1801785d8;
  local_b8.ExceptionInformation[0xb]._4_4_ = _UNK_1801785dc;
  local_b8.ExceptionInformation[0xc]._0_4_ = _DAT_1801785e0;
  local_b8.ExceptionInformation[0xc]._4_4_ = _UNK_1801785e4;
  local_b8.ExceptionInformation[0xd]._0_4_ = _UNK_1801785e8;
  local_b8.ExceptionInformation[0xd]._4_4_ = _UNK_1801785ec;
  local_b8.ExceptionInformation[0xe] = DAT_1801785f0;
  local_b8.ExceptionInformation[0] = (ULONG_PTR)&LAB_180129f14;
  local_b8.ExceptionInformation[2] = param_5;
  local_b8.ExceptionInformation[3] = (ULONG_PTR)param_7;
  local_b8.ExceptionInformation[5] = param_6;
  local_b8.ExceptionInformation[7] = (ULONG_PTR)param_11;
  local_b8.ExceptionInformation[8] = 0x19930520;
  local_b8.ExceptionInformation[1] = param_4;
  local_b8.ExceptionInformation[4] = param_3;
  local_b8.ExceptionInformation[6] = param_2;
  RtlUnwindEx((PVOID)*param_1,(PVOID)*param_10,&local_b8,(PVOID)0x0,(PCONTEXT)param_10[5],
              (PUNWIND_HISTORY_TABLE)param_10[8]);
  FUN_1801252c0(local_18 ^ (ulonglong)auStackY_e8);
  return;
}

// ---- Function: FUN_180126f00 ----
void FUN_180126f00(int32_t *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,int32_t param_6,int param_7,int param_8,longlong param_9,
                  int32_t *param_10,byte param_11)

{
  int32_t auStackY_e8 [32];
  EXCEPTION_RECORD local_b8;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStackY_e8;
  local_b8._0_8_ = _DAT_1801784c0;
  local_b8.ExceptionRecord = _UNK_1801784c8;
  local_b8.ExceptionAddress = _DAT_1801784d0;
  local_b8._24_8_ = _UNK_1801784d8;
  local_b8.ExceptionInformation[10]._0_4_ = _DAT_180178530;
  local_b8.ExceptionInformation[10]._4_4_ = _UNK_180178534;
  local_b8.ExceptionInformation[0xc]._0_4_ = _DAT_180178540;
  local_b8.ExceptionInformation[0xc]._4_4_ = _UNK_180178544;
  local_b8.ExceptionInformation[0xd]._0_4_ = _UNK_180178548;
  local_b8.ExceptionInformation[0xd]._4_4_ = _UNK_18017854c;
  local_b8.ExceptionInformation[0xe] = DAT_180178550;
  local_b8.ExceptionInformation[0] = (ULONG_PTR)&LAB_18012a100;
  local_b8.ExceptionInformation[2] = param_5;
  local_b8.ExceptionInformation[3] = (ULONG_PTR)param_7;
  local_b8.ExceptionInformation[7] = (ULONG_PTR)param_11;
  local_b8.ExceptionInformation[5] = *(longlong *)(param_9 + 0x18) + param_10[1];
  local_b8.ExceptionInformation[9] = *(longlong *)(param_9 + 0x20) + param_10[1];
  local_b8.ExceptionInformation[0xb] = (ULONG_PTR)param_8;
  local_b8.ExceptionInformation[8] = 0x19930520;
  local_b8.ExceptionInformation[1] = param_4;
  local_b8.ExceptionInformation[4] = param_3;
  local_b8.ExceptionInformation[6] = param_2;
  RtlUnwindEx((PVOID)*param_1,(PVOID)*param_10,&local_b8,(PVOID)0x0,(PCONTEXT)param_10[5],
              (PUNWIND_HISTORY_TABLE)param_10[8]);
  FUN_1801252c0(local_18 ^ (ulonglong)auStackY_e8);
  return;
}

// ---- Function: FUN_180127020 ----
void FUN_180127020(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  int32_t uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulonglong uVar7;
  
  pbVar6 = *(byte **)(param_1 + 0x10);
  *(byte **)(param_1 + 8) = pbVar6;
  bVar1 = (&DAT_1801784b0)[*pbVar6 & 0xf];
  pbVar6 = pbVar6 + -(longlong)(char)(&DAT_1801784a0)[*pbVar6 & 0xf];
  uVar2 = *(uint *)(pbVar6 + -4);
  *(byte **)(param_1 + 8) = pbVar6;
  *(uint *)(param_1 + 0x18) = uVar2 >> (bVar1 & 0x1f);
  bVar1 = (&DAT_1801784b0)[*pbVar6 & 0xf];
  pbVar6 = pbVar6 + -(longlong)(char)(&DAT_1801784a0)[*pbVar6 & 0xf];
  uVar2 = *(uint *)(pbVar6 + -4);
  *(byte **)(param_1 + 8) = pbVar6;
  *(uint *)(param_1 + 0x1c) = uVar2 >> (bVar1 & 0x1f);
  bVar1 = (&DAT_1801784b0)[*pbVar6 & 0xf];
  pbVar6 = pbVar6 + -(longlong)(char)(&DAT_1801784a0)[*pbVar6 & 0xf];
  uVar2 = *(uint *)(pbVar6 + -4);
  *(byte **)(param_1 + 8) = pbVar6;
  *(uint *)(param_1 + 0x20) = uVar2 >> (bVar1 & 0x1f);
  uVar3 = *(int32_t *)pbVar6;
  pbVar6 = pbVar6 + 4;
  iVar4 = *(int *)(param_2 + 8);
  *(byte **)(param_1 + 8) = pbVar6;
  *(int32_t *)(param_1 + 0x24) = uVar3;
  if (iVar4 != 0) {
    uVar7 = (ulonglong)*(uint *)(param_2 + 8);
    do {
      bVar1 = (&DAT_1801784b0)[*pbVar6 & 0xf];
      pbVar6 = pbVar6 + -(longlong)(char)(&DAT_1801784a0)[*pbVar6 & 0xf];
      uVar2 = *(uint *)(pbVar6 + -4);
      *(byte **)(param_1 + 8) = pbVar6;
      *(uint *)(param_1 + 0x18) = uVar2 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_1801784b0)[*pbVar6 & 0xf];
      pbVar6 = pbVar6 + -(longlong)(char)(&DAT_1801784a0)[*pbVar6 & 0xf];
      uVar2 = *(uint *)(pbVar6 + -4);
      *(byte **)(param_1 + 8) = pbVar6;
      *(uint *)(param_1 + 0x1c) = uVar2 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_1801784b0)[*pbVar6 & 0xf];
      pbVar6 = pbVar6 + -(longlong)(char)(&DAT_1801784a0)[*pbVar6 & 0xf];
      uVar2 = *(uint *)(pbVar6 + -4);
      pbVar5 = pbVar6 + 4;
      *(byte **)(param_1 + 8) = pbVar6;
      *(uint *)(param_1 + 0x20) = uVar2 >> (bVar1 & 0x1f);
      uVar3 = *(int32_t *)pbVar6;
      *(byte **)(param_1 + 8) = pbVar5;
      *(int32_t *)(param_1 + 0x24) = uVar3;
      bVar1 = (&DAT_1801784b0)[*pbVar5 & 0xf];
      pbVar5 = pbVar5 + -(longlong)(char)(&DAT_1801784a0)[*pbVar5 & 0xf];
      uVar2 = *(uint *)(pbVar5 + -4);
      *(byte **)(param_1 + 8) = pbVar5;
      *(uint *)(param_1 + 0x18) = uVar2 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_1801784b0)[*pbVar5 & 0xf];
      pbVar5 = pbVar5 + -(longlong)(char)(&DAT_1801784a0)[*pbVar5 & 0xf];
      uVar2 = *(uint *)(pbVar5 + -4);
      *(byte **)(param_1 + 8) = pbVar5;
      *(uint *)(param_1 + 0x1c) = uVar2 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_1801784b0)[*pbVar5 & 0xf];
      pbVar5 = pbVar5 + -(longlong)(char)(&DAT_1801784a0)[*pbVar5 & 0xf];
      uVar2 = *(uint *)(pbVar5 + -4);
      pbVar6 = pbVar5 + 4;
      *(byte **)(param_1 + 8) = pbVar5;
      *(uint *)(param_1 + 0x20) = uVar2 >> (bVar1 & 0x1f);
      uVar3 = *(int32_t *)pbVar5;
      *(byte **)(param_1 + 8) = pbVar6;
      *(int32_t *)(param_1 + 0x24) = uVar3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

// ---- Function: _CreateFrameInfo ----
/* Library Function - Single Match
    _CreateFrameInfo
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int32_t * _CreateFrameInfo(int32_t *param_1,int32_t param_2)

{
  longlong lVar1;
  int32_t uVar2;
  
  *param_1 = param_2;
  lVar1 = __vcrt_getptd();
  if (param_1 < *(int32_t **)(lVar1 + 0x58)) {
    lVar1 = __vcrt_getptd();
    uVar2 = *(int32_t *)(lVar1 + 0x58);
  }
  else {
    uVar2 = 0;
  }
  param_1[1] = uVar2;
  lVar1 = __vcrt_getptd();
  *(int32_t **)(lVar1 + 0x58) = param_1;
  return param_1;
}

// ---- Function: _FindAndUnlinkFrame ----
/* Library Function - Single Match
    _FindAndUnlinkFrame
   
   Library: Visual Studio 2019 Release */

void _FindAndUnlinkFrame(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = __vcrt_getptd();
  if (param_1 == *(longlong *)(lVar2 + 0x58)) {
    lVar2 = __vcrt_getptd();
    lVar2 = *(longlong *)(lVar2 + 0x58);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      bVar3 = param_1 == lVar2;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = __vcrt_getptd();
        *(longlong *)(lVar2 + 0x58) = lVar1;
        return;
      }
    }
  }
                    
  abort();
}

// ---- Function: _GetImageBase ----
/* Library Function - Single Match
    _GetImageBase
   
   Library: Visual Studio 2019 Release */

int32_t _GetImageBase(void)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  return *(int32_t *)(lVar1 + 0x60);
}

// ---- Function: _GetThrowImageBase ----
/* Library Function - Single Match
    _GetThrowImageBase
   
   Library: Visual Studio 2019 Release */

int32_t _GetThrowImageBase(void)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  return *(int32_t *)(lVar1 + 0x68);
}

// ---- Function: FUN_18012729c ----
void FUN_18012729c(int32_t param_1)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  *(int32_t *)(lVar1 + 0x60) = param_1;
  return;
}

// ---- Function: FUN_1801272b4 ----
void FUN_1801272b4(int32_t param_1)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  *(int32_t *)(lVar1 + 0x68) = param_1;
  return;
}

// ---- Function: FUN_1801272cc ----
void FUN_1801272cc(EHExceptionRecord *param_1,__uint64 param_2,_CONTEXT *param_3,
                  _xDISPATCHER_CONTEXT *param_4)

{
  int32_t uVar1;
  longlong lVar2;
  __uint64 local_res8;
  
  uVar1 = *(int32_t *)(param_4 + 8);
  local_res8 = param_2;
  lVar2 = __vcrt_getptd();
  *(int32_t *)(lVar2 + 0x60) = uVar1;
  uVar1 = *(int32_t *)(param_1 + 0x38);
  lVar2 = __vcrt_getptd();
  *(int32_t *)(lVar2 + 0x68) = uVar1;
  lVar2 = __vcrt_getptd();
  thunk_FUN_180129830(param_1,&local_res8,param_3,param_4,
                      (_s_FuncInfo *)
                      ((ulonglong)**(uint **)(param_4 + 0x38) + *(longlong *)(lVar2 + 0x60)),0,
                      (__uint64 *)0x0,0);
  return;
}

// ---- Function: FUN_180127354 ----
void FUN_180127354(EHExceptionRecord *param_1,__uint64 param_2,_CONTEXT *param_3,
                  _xDISPATCHER_CONTEXT *param_4)

{
  int32_t uVar1;
  longlong lVar2;
  __uint64 local_res8;
  FuncInfo4 local_28 [4];
  int32_t local_24;
  int32_t local_20;
  int32_t local_1c;
  int32_t local_18;
  int32_t local_14;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar1 = *(int32_t *)(param_4 + 8);
  local_28[0] = (FuncInfo4)0x0;
  local_res8 = param_2;
  lVar2 = __vcrt_getptd();
  *(int32_t *)(lVar2 + 0x60) = uVar1;
  uVar1 = *(int32_t *)(param_1 + 0x38);
  lVar2 = __vcrt_getptd();
  *(int32_t *)(lVar2 + 0x68) = uVar1;
  lVar2 = __vcrt_getptd();
  FUN_180126864((byte *)((ulonglong)**(uint **)(param_4 + 0x38) + *(longlong *)(lVar2 + 0x60)),
                (byte *)local_28,*(longlong *)(param_4 + 8),**(int **)(param_4 + 0x10),'\0');
  FUN_180129d04(param_1,&local_res8,param_3,param_4,local_28,0,(__uint64 *)0x0,0);
  return;
}

// ---- Function: __DestructExceptionObject ----
/* Library Function - Single Match
    __DestructExceptionObject
   
   Library: Visual Studio 2019 Release */

void __DestructExceptionObject(int *param_1)

{
  byte *pbVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[6] == 4)) &&
     ((param_1[8] + 0xe66cfae0U < 3 && (pbVar1 = *(byte **)(param_1 + 0xc), pbVar1 != (byte *)0x0)))
     ) {
    if (*(int *)(pbVar1 + 4) == 0) {
      if (((*pbVar1 & 0x10) != 0) && (**(longlong **)(param_1 + 10) != 0)) {
        (*(code *)PTR__guard_dispatch_icall_180157468)();
      }
    }
    else {
      FUN_180127484(*(int32_t *)(param_1 + 10),
                    (int32_t *)((longlong)*(int *)(pbVar1 + 4) + *(longlong *)(param_1 + 0xe)));
    }
  }
  return;
}

