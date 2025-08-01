#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_180127de4 ----
int32_t FUN_180127de4(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 + lVar4 != 0) {
      uVar3 = 0;
      if (*(uint *)(param_1 + 0x14) != 0) {
        do {
          if (param_3 < (ulonglong)(*(int *)(lVar4 + uVar3 * 8 + lVar1) + lVar1)) break;
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
        } while (uVar2 < *(uint *)(param_1 + 0x14));
        if ((int)uVar3 != 0) {
          return *(int32_t *)(lVar1 + (ulonglong)((int)uVar3 - 1) * 8 + 4 + lVar4);
        }
      }
      return 0xffffffff;
    }
  }
                    
  abort();
}

// ---- Function: FUN_180127e4c ----
int FUN_180127e4c(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar4 = 0;
    pbVar6 = (byte *)((longlong)*(int *)(param_1 + 0x10) + *(longlong *)(param_2 + 8));
    uVar5 = 0;
    iVar3 = -1;
    uVar2 = *pbVar6 & 0xf;
    pbVar6 = pbVar6 + -(longlong)(char)(&DAT_1801784a0)[uVar2];
    puVar1 = (uint *)(pbVar6 + -4);
    if (*puVar1 >> ((&DAT_1801784b0)[uVar2] & 0x1f) != 0) {
      do {
        pbVar7 = pbVar6 + -(longlong)(char)(&DAT_1801784a0)[*pbVar6 & 0xf];
        uVar4 = uVar4 + (*(uint *)(pbVar7 + -4) >> ((&DAT_1801784b0)[*pbVar6 & 0xf] & 0x1f));
        if (param_3 < (ulonglong)uVar4 + (ulonglong)**(uint **)(param_2 + 0x10) +
                      *(longlong *)(param_2 + 8)) break;
        uVar5 = uVar5 + 1;
        pbVar6 = pbVar7 + -(longlong)(char)(&DAT_1801784a0)[*pbVar7 & 0xf];
        iVar3 = (*(uint *)(pbVar6 + -4) >> ((&DAT_1801784b0)[*pbVar7 & 0xf] & 0x1f)) - 1;
      } while (uVar5 < *puVar1 >> ((&DAT_1801784b0)[uVar2] & 0x1f));
      if (uVar5 != 0) {
        return iVar3;
      }
      return -1;
    }
  }
  return -1;
}

// ---- Function: FUN_180127f3c ----
char FUN_180127f3c(longlong param_1,longlong *param_2,byte *param_3,byte *param_4)

{
  longlong lVar1;
  int32_t *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar4 = 0;
  uVar6 = 0;
  iVar5 = 0;
  uVar3 = uVar4;
  iVar7 = iVar5;
  if (*(int *)(param_3 + 4) != 0) {
    iVar7 = *(int *)(param_3 + 4);
    lVar1 = _GetImageBase();
    uVar3 = iVar7 + lVar1;
  }
  if (uVar3 == 0) {
    return '\0';
  }
  uVar3 = uVar4;
  if (iVar7 != 0) {
    lVar1 = _GetImageBase();
    uVar3 = lVar1 + *(int *)(param_3 + 4);
  }
  if (*(char *)(uVar3 + 0x10) == '\0') {
    return '\0';
  }
  if ((*(int *)(param_3 + 8) == 0) && (-1 < *(int *)param_3)) {
    return '\0';
  }
  if (-1 < *(int *)param_3) {
    param_2 = (longlong *)((longlong)*(int *)(param_3 + 8) + *param_2);
  }
  if ((((*param_3 & 0x80) == 0) || ((*param_4 & 0x10) == 0)) || (DAT_1801edc78 == 0)) {
    if ((*param_3 & 8) == 0) {
      if ((*param_4 & 1) == 0) {
        uVar3 = uVar4;
        if (*(int *)(param_4 + 0x18) != 0) {
          iVar5 = *(int *)(param_4 + 0x18);
          lVar1 = _GetThrowImageBase();
          uVar3 = iVar5 + lVar1;
        }
        if (uVar3 != 0) {
          if ((*(longlong *)(param_1 + 0x28) != 0) && (param_2 != (longlong *)0x0)) {
            if (iVar5 != 0) {
              lVar1 = _GetThrowImageBase();
              uVar4 = lVar1 + *(int *)(param_4 + 0x18);
            }
            if (uVar4 != 0) {
              uVar6 = (ulonglong)(((*param_4 & 4) != 0) + 1);
              goto LAB_1801280fa;
            }
          }
                    
          abort();
        }
        if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0)) {
                    
          abort();
        }
        iVar7 = *(int *)(param_4 + 0x14);
        puVar2 = (int32_t *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
        FUN_180150fd0(param_2,puVar2,(longlong)iVar7);
        goto LAB_1801280fa;
      }
      if ((*(int32_t **)(param_1 + 0x28) == (int32_t *)0x0) || (param_2 == (longlong *)0x0)) {
                    
        abort();
      }
      FUN_180150fd0(param_2,*(int32_t **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
      uVar6 = uVar4;
      if ((*(int *)(param_4 + 0x14) != 8) || (*param_2 == 0)) goto LAB_1801280fa;
      lVar1 = *param_2;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if ((lVar1 == 0) || (param_2 == (longlong *)0x0)) {
                    
        abort();
      }
      *param_2 = lVar1;
    }
  }
  else {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_180157468)();
    if ((lVar1 == 0) || (param_2 == (longlong *)0x0)) {
                    
      abort();
    }
    *param_2 = lVar1;
  }
  lVar1 = __AdjustPointer(lVar1,(int *)(param_4 + 8));
  *param_2 = lVar1;
  uVar6 = uVar4;
LAB_1801280fa:
  return (char)uVar6;
}

// ---- Function: FUN_18012813c ----
char FUN_18012813c(longlong param_1,longlong *param_2,longlong param_3,byte *param_4)

{
  longlong lVar1;
  int32_t *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar4 = 0;
  uVar6 = 0;
  iVar5 = 0;
  uVar3 = uVar4;
  iVar7 = iVar5;
  if (*(int *)(param_3 + 8) != 0) {
    iVar7 = *(int *)(param_3 + 8);
    lVar1 = _GetImageBase();
    uVar3 = iVar7 + lVar1;
  }
  if (uVar3 == 0) {
    return '\0';
  }
  uVar3 = uVar4;
  if (iVar7 != 0) {
    lVar1 = _GetImageBase();
    uVar3 = lVar1 + *(int *)(param_3 + 8);
  }
  if (*(char *)(uVar3 + 0x10) == '\0') {
    return '\0';
  }
  if ((*(int *)(param_3 + 0xc) == 0) && (-1 < *(int *)(param_3 + 4))) {
    return '\0';
  }
  if (-1 < *(int *)(param_3 + 4)) {
    param_2 = (longlong *)((ulonglong)*(uint *)(param_3 + 0xc) + *param_2);
  }
  if ((((*(byte *)(param_3 + 4) & 0x80) == 0) || ((*param_4 & 0x10) == 0)) || (DAT_1801edc78 == 0))
  {
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      if ((*param_4 & 1) == 0) {
        uVar3 = uVar4;
        if (*(int *)(param_4 + 0x18) != 0) {
          iVar5 = *(int *)(param_4 + 0x18);
          lVar1 = _GetThrowImageBase();
          uVar3 = iVar5 + lVar1;
        }
        if (uVar3 != 0) {
          if ((*(longlong *)(param_1 + 0x28) != 0) && (param_2 != (longlong *)0x0)) {
            if (iVar5 != 0) {
              lVar1 = _GetThrowImageBase();
              uVar4 = lVar1 + *(int *)(param_4 + 0x18);
            }
            if (uVar4 != 0) {
              uVar6 = (ulonglong)(((*param_4 & 4) != 0) + 1);
              goto LAB_1801282fd;
            }
          }
                    
          abort();
        }
        if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0)) {
                    
          abort();
        }
        iVar7 = *(int *)(param_4 + 0x14);
        puVar2 = (int32_t *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
        FUN_180150fd0(param_2,puVar2,(longlong)iVar7);
        goto LAB_1801282fd;
      }
      if ((*(int32_t **)(param_1 + 0x28) == (int32_t *)0x0) || (param_2 == (longlong *)0x0)) {
                    
        abort();
      }
      FUN_180150fd0(param_2,*(int32_t **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
      uVar6 = uVar4;
      if ((*(int *)(param_4 + 0x14) != 8) || (*param_2 == 0)) goto LAB_1801282fd;
      lVar1 = *param_2;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if ((lVar1 == 0) || (param_2 == (longlong *)0x0)) {
                    
        abort();
      }
      *param_2 = lVar1;
    }
  }
  else {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_180157468)();
    if ((lVar1 == 0) || (param_2 == (longlong *)0x0)) {
                    
      abort();
    }
    *param_2 = lVar1;
  }
  lVar1 = __AdjustPointer(lVar1,(int *)(param_4 + 8));
  *param_2 = lVar1;
  uVar6 = uVar4;
LAB_1801282fd:
  return (char)uVar6;
}

// ---- Function: BuildCatchObjectInternal_class___FrameHandler3_ ----
/* Library Function - Single Match
    void __cdecl BuildCatchObjectInternal<class __FrameHandler3>(struct EHExceptionRecord *
   __ptr64,void * __ptr64,struct _s_HandlerType const * __ptr64,struct _s_CatchableType const *
   __ptr64)
   
   Library: Visual Studio 2019 Release */

void __cdecl
BuildCatchObjectInternal<class___FrameHandler3>
          (EHExceptionRecord *param_1,void *param_2,_s_HandlerType *param_3,
          _s_CatchableType *param_4)

{
  char cVar1;
  int iVar2;
  int32_t extraout_var;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  int32_t *UNRECOVERED_JUMPTABLE;
  void *pvVar6;
  
  UNRECOVERED_JUMPTABLE = (int32_t *)0x0;
  pvVar6 = param_2;
  if (-1 < *(int *)param_3) {
                    
    pvVar6 = (void *)((longlong)*(int *)(param_3 + 8) + *param_2);
  }
  cVar1 = FUN_180127f3c((longlong)param_1,(longlong *)param_2,(byte *)param_3,(byte *)param_4);
  iVar2 = (int)CONCAT71(extraout_var,cVar1);
  if (iVar2 == 1) {
    lVar4 = __AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    if (*(int *)(param_4 + 0x18) != 0) {
      lVar5 = _GetThrowImageBase();
      UNRECOVERED_JUMPTABLE = (int32_t *)(*(int *)(param_4 + 0x18) + lVar5);
    }
    FUN_18012acd8(pvVar6,UNRECOVERED_JUMPTABLE,lVar4);
  }
  else if (iVar2 == 2) {
    pvVar3 = (void *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    if (*(int *)(param_4 + 0x18) != 0) {
      lVar4 = _GetThrowImageBase();
      UNRECOVERED_JUMPTABLE = (int32_t *)(*(int *)(param_4 + 0x18) + lVar4);
    }
    _CallMemberFunction2(pvVar6,UNRECOVERED_JUMPTABLE,pvVar3,1);
  }
  return;
}

// ---- Function: BuildCatchObjectInternal_class___FrameHandler4_ ----
/* Library Function - Single Match
    void __cdecl BuildCatchObjectInternal<class __FrameHandler4>(struct EHExceptionRecord *
   __ptr64,void * __ptr64,struct FH4::HandlerType4 * __ptr64,struct _s_CatchableType const *
   __ptr64)
   
   Library: Visual Studio 2019 Release */

void __cdecl
BuildCatchObjectInternal<class___FrameHandler4>
          (EHExceptionRecord *param_1,void *param_2,HandlerType4 *param_3,_s_CatchableType *param_4)

{
  char cVar1;
  int iVar2;
  int32_t extraout_var;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  int32_t *UNRECOVERED_JUMPTABLE;
  void *pvVar6;
  
  UNRECOVERED_JUMPTABLE = (int32_t *)0x0;
  pvVar6 = param_2;
  if (-1 < *(int *)(param_3 + 4)) {
                    
    pvVar6 = (void *)((ulonglong)*(uint *)(param_3 + 0xc) + *param_2);
  }
  cVar1 = FUN_18012813c((longlong)param_1,(longlong *)param_2,(longlong)param_3,(byte *)param_4);
  iVar2 = (int)CONCAT71(extraout_var,cVar1);
  if (iVar2 == 1) {
    lVar4 = __AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    if (*(int *)(param_4 + 0x18) != 0) {
      lVar5 = _GetThrowImageBase();
      UNRECOVERED_JUMPTABLE = (int32_t *)(*(int *)(param_4 + 0x18) + lVar5);
    }
    FUN_18012acd8(pvVar6,UNRECOVERED_JUMPTABLE,lVar4);
  }
  else if (iVar2 == 2) {
    pvVar3 = (void *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    if (*(int *)(param_4 + 0x18) != 0) {
      lVar4 = _GetThrowImageBase();
      UNRECOVERED_JUMPTABLE = (int32_t *)(*(int *)(param_4 + 0x18) + lVar4);
    }
    _CallMemberFunction2(pvVar6,UNRECOVERED_JUMPTABLE,pvVar3,1);
  }
  return;
}

// ---- Function: CatchIt_class___FrameHandler3_ ----
/* Library Function - Single Match
    void __cdecl CatchIt<class __FrameHandler3>(struct EHExceptionRecord * __ptr64,unsigned __int64
   * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo
   const * __ptr64,struct _s_HandlerType const * __ptr64,struct _s_CatchableType const *
   __ptr64,struct _s_TryBlockMapEntry const * __ptr64,int,unsigned __int64 * __ptr64,unsigned
   char,unsigned char)
   
   Library: Visual Studio 2019 Release */

void __cdecl
CatchIt<class___FrameHandler3>
          (EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
          _xDISPATCHER_CONTEXT *param_4,_s_FuncInfo *param_5,_s_HandlerType *param_6,
          _s_CatchableType *param_7,_s_TryBlockMapEntry *param_8,int param_9,__uint64 *param_10,
          uchar param_11,uchar param_12)

{
  int32_t uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_res10;
  _CONTEXT *local_res18;
  int32_t in_stack_ffffffffffffffa4;
  
  local_res18 = param_3;
  plVar3 = FUN_180126a68((longlong *)param_2,(ulonglong *)param_4,(longlong)param_5,&local_res10);
  if (param_7 != (_s_CatchableType *)0x0) {
    BuildCatchObjectInternal<class___FrameHandler3>(param_1,plVar3,param_6,param_7);
  }
  uVar1 = *(int32_t *)(param_8 + 8);
  iVar2 = *(int *)param_8;
  lVar4 = _GetImageBase();
  FUN_180126dfc(param_2,(ULONG_PTR)param_1,(ULONG_PTR)local_res18,(ULONG_PTR)plVar3,
                lVar4 + *(int *)(param_6 + 0xc),(ULONG_PTR)param_5,iVar2,
                CONCAT44(in_stack_ffffffffffffffa4,uVar1),param_6,(int32_t *)param_4,param_12);
  return;
}

// ---- Function: CatchIt_class___FrameHandler4_ ----
/* Library Function - Single Match
    void __cdecl CatchIt<class __FrameHandler4>(struct EHExceptionRecord * __ptr64,unsigned __int64
   * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct FH4::FuncInfo4 *
   __ptr64,struct FH4::HandlerType4 * __ptr64,struct _s_CatchableType const * __ptr64,struct
   FH4::TryBlockMapEntry4 * __ptr64,int,unsigned __int64 * __ptr64,unsigned char,unsigned char)
   
   Library: Visual Studio 2019 Release */

void __cdecl
CatchIt<class___FrameHandler4>
          (EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
          _xDISPATCHER_CONTEXT *param_4,FuncInfo4 *param_5,HandlerType4 *param_6,
          _s_CatchableType *param_7,TryBlockMapEntry4 *param_8,int param_9,__uint64 *param_10,
          uchar param_11,uchar param_12)

{
  int iVar1;
  int iVar2;
  __uint64 *p_Var3;
  longlong lVar4;
  __uint64 local_res10;
  _CONTEXT *local_res18;
  
  local_res18 = param_3;
  p_Var3 = __FrameHandler4::GetEstablisherFrame(param_2,param_4,param_5,&local_res10);
  if (param_7 != (_s_CatchableType *)0x0) {
    BuildCatchObjectInternal<class___FrameHandler4>(param_1,p_Var3,param_6,param_7);
  }
  iVar1 = *(int *)(param_8 + 8);
  iVar2 = *(int *)param_8;
  lVar4 = _GetImageBase();
  FUN_180126f00(param_2,(ULONG_PTR)param_1,(ULONG_PTR)local_res18,(ULONG_PTR)p_Var3,
                lVar4 + *(int *)(param_6 + 0x10),param_5,iVar2,iVar1,(longlong)param_6,
                (int32_t *)param_4,param_12);
  return;
}

// ---- Function: FUN_18012866c ----
void FUN_18012866c(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
                  _xDISPATCHER_CONTEXT *param_4,_s_FuncInfo *param_5,byte param_6,int param_7,
                  __uint64 *param_8)

{
  int32_t *puVar1;
  _s_ESTypeList *p_Var2;
  code *pcVar3;
  char cVar4;
  uchar uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int *piVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  int32_t auStackY_168 [32];
  _s_TryBlockMapEntry *in_stack_fffffffffffffed0;
  int32_t uVar17;
  uchar local_108;
  _CONTEXT *local_100;
  int *local_f8;
  _s_CatchableType *local_e8;
  longlong *local_e0;
  uint local_d8;
  ulonglong local_d0;
  __uint64 *local_c8;
  int32_t local_c0;
  int iStack_b8;
  uint uStack_b4;
  int local_b0;
  _s_FuncInfo *local_a8;
  int32_t local_a0;
  longlong *local_98;
  int32_t uStack_90;
  longlong *local_88;
  int32_t uStack_80;
  uint local_70;
  int32_t local_68;
  int32_t uStack_60;
  int32_t local_58;
  ulonglong local_50;
  
  local_50 = DAT_1801eb080 ^ (ulonglong)auStackY_168;
  local_c8 = param_8;
  local_108 = '\0';
  iVar7 = __FrameHandler3::GetHandlerSearchState(param_2,param_4,param_5);
  if ((-2 < iVar7) && (iVar7 < param_5->maxState)) {
    local_100 = param_3;
    if ((*(int *)param_1 == -0x1f928c9d) &&
       (((*(int *)(param_1 + 0x18) == 4 && (*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3)) &&
        (*(longlong *)(param_1 + 0x30) == 0)))) {
      lVar10 = __vcrt_getptd();
      if (*(longlong *)(lVar10 + 0x20) == 0) goto LAB_180128ace;
      lVar10 = __vcrt_getptd();
      param_1 = *(EHExceptionRecord **)(lVar10 + 0x20);
      lVar10 = __vcrt_getptd();
      local_108 = '\x01';
      local_100 = *(_CONTEXT **)(lVar10 + 0x28);
      FUN_1801272b4(*(int32_t *)(param_1 + 0x38));
      if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x18) == 4)) &&
         ((*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0x30) == 0))))
      goto LAB_180128b35;
      lVar10 = __vcrt_getptd();
      if (*(longlong *)(lVar10 + 0x38) != 0) {
        lVar10 = __vcrt_getptd();
        p_Var2 = *(_s_ESTypeList **)(lVar10 + 0x38);
        lVar10 = __vcrt_getptd();
        *(int32_t *)(lVar10 + 0x38) = 0;
        cVar4 = FUN_18012aac4((longlong)param_1,(int *)p_Var2);
        if (cVar4 == '\0') {
          uVar5 = Is_bad_exception_allowed(p_Var2);
          if (uVar5 == '\0') {
            FUN_180136dec();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          __DestructExceptionObject((int *)param_1);
          FUN_180129ef4(&local_c0);
          FUN_1801279a8(&local_c0,&DAT_1801e8d58);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    uVar17 = (int32_t)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
    local_a0 = *(int32_t *)(param_4 + 8);
    local_a8 = param_5;
    if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x18) == 4)) &&
       (*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3)) {
      if (param_5->nTryBlocks != 0) {
        FUN_180126b5c(&local_88,&local_a8,iVar7,(ulonglong *)param_4,(longlong)param_5);
        uVar17 = (int32_t)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
        uVar8 = (uint)uStack_80;
        local_98 = local_88;
        uStack_90 = uStack_80;
        if (uVar8 < local_70) {
          local_e0 = local_88;
          do {
            lVar10 = (longlong)*(int *)(*local_98 + 0x10) + (ulonglong)uVar8 * 0x14;
            piVar13 = (int *)(lVar10 + local_88[1]);
            local_c0._0_4_ = *piVar13;
            local_c0._4_4_ = piVar13[1];
            iStack_b8 = piVar13[2];
            uStack_b4 = piVar13[3];
            local_b0 = *(int *)(lVar10 + 0x10 + local_88[1]);
            if (((int)local_c0 <= iVar7) && (iVar7 <= local_c0._4_4_)) {
              uVar15 = 0;
              local_d0 = (ulonglong)uStack_b4;
              uVar12 = (longlong)local_b0 + *(longlong *)(param_4 + 8);
              if (uStack_b4 != 0) {
                do {
                  puVar1 = (int32_t *)(uVar12 + uVar15 * 0x14);
                  local_68 = *puVar1;
                  uStack_60 = puVar1[1];
                  local_58 = *(int32_t *)(uVar12 + 0x10 + uVar15 * 0x14);
                  lVar10 = _GetThrowImageBase();
                  local_f8 = (int *)(lVar10 + 4 +
                                    (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
                  lVar10 = _GetThrowImageBase();
                  for (iVar16 = *(int *)(lVar10 + *(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
                      0 < iVar16; iVar16 = iVar16 + -1) {
                    lVar10 = _GetThrowImageBase();
                    local_e8 = (_s_CatchableType *)(lVar10 + *local_f8);
                    iVar9 = TypeMatchHelper<class___FrameHandler3>
                                      ((_s_HandlerType *)&local_68,local_e8,
                                       *(_s_ThrowInfo **)(param_1 + 0x30));
                    if (iVar9 != 0) {
                      in_stack_fffffffffffffed0 = (_s_TryBlockMapEntry *)&local_c0;
                      CatchIt<class___FrameHandler3>
                                (param_1,param_2,local_100,param_4,param_5,
                                 (_s_HandlerType *)&local_68,local_e8,in_stack_fffffffffffffed0,
                                 param_7,local_c8,local_108,param_6);
                      local_88 = local_e0;
                      goto LAB_1801289a8;
                    }
                    local_f8 = local_f8 + 1;
                  }
                  uVar14 = (int)uVar15 + 1;
                  uVar15 = (ulonglong)uVar14;
                  uVar12 = local_d0;
                  local_88 = local_e0;
                } while (uVar14 != local_d8);
              }
            }
LAB_1801289a8:
            uVar17 = (int32_t)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_70);
        }
      }
      if ((0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
         (((param_5->dispESTypeList != 0 &&
           (lVar10 = _GetImageBase(), lVar10 + (int)param_5->dispESTypeList != 0)) ||
          ((((uint)param_5->EHFlags >> 2 & 1) != 0 &&
           (bVar6 = FUN_18012699c((ulonglong *)param_4,(longlong)param_5), !bVar6)))))) {
        if (((uint)param_5->EHFlags >> 2 & 1) != 0) {
          lVar10 = __vcrt_getptd();
          *(EHExceptionRecord **)(lVar10 + 0x20) = param_1;
          lVar10 = __vcrt_getptd();
          *(_CONTEXT **)(lVar10 + 0x28) = local_100;
          FUN_180136dec();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (param_5->dispESTypeList == 0) {
          piVar13 = (int *)0x0;
        }
        else {
          lVar10 = _GetImageBase();
          piVar13 = (int *)(lVar10 + (int)param_5->dispESTypeList);
        }
        cVar4 = FUN_18012aac4((longlong)param_1,piVar13);
        if (cVar4 == '\0') {
          plVar11 = FUN_180126a68((longlong *)param_2,(ulonglong *)param_4,(longlong)param_5,
                                  (longlong *)&local_e8);
          FUN_180126dfc(param_2,(ULONG_PTR)param_1,(ULONG_PTR)local_100,(ULONG_PTR)plVar11,0,
                        (ULONG_PTR)param_5,-1,CONCAT44(uVar17,0xffffffff),0,(int32_t *)param_4,
                        param_6);
        }
      }
    }
    else if (param_5->nTryBlocks != 0) {
      if (param_6 != 0) goto LAB_180128b35;
      FUN_180129040(param_1,param_2,local_100,param_4,param_5,iVar7,param_7,param_8);
    }
    lVar10 = __vcrt_getptd();
    if (*(longlong *)(lVar10 + 0x38) == 0) {
LAB_180128ace:
      FUN_1801252c0(local_50 ^ (ulonglong)auStackY_168);
      return;
    }
  }
LAB_180128b35:
                    
  abort();
}

// ---- Function: FUN_180128b3c ----
void FUN_180128b3c(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
                  _xDISPATCHER_CONTEXT *param_4,FuncInfo4 *param_5,uchar param_6,int param_7,
                  __uint64 *param_8)

{
  int iVar1;
  int32_t uVar2;
  _s_ESTypeList *p_Var3;
  code *pcVar4;
  char cVar5;
  uchar uVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  int32_t uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  int32_t auStackY_1c8 [32];
  uchar local_168;
  uint local_164;
  uint local_160;
  longlong local_140;
  int32_t uStack_138;
  __uint64 *local_128;
  longlong local_120;
  int32_t uStack_118;
  uint local_108;
  int32_t local_100;
  int32_t uStack_f8;
  int32_t local_f0;
  int32_t uStack_e8;
  int32_t local_e0;
  uint local_d8 [12];
  uint local_a8 [6];
  int32_t local_90;
  int32_t uStack_88;
  int32_t local_80;
  int32_t uStack_78;
  int32_t local_70;
  ulonglong local_58;
  
  local_58 = DAT_1801eb080 ^ (ulonglong)auStackY_1c8;
  local_128 = param_8;
  local_168 = '\0';
  iVar8 = FUN_180127ddc((longlong)param_5,(ulonglong *)param_4);
  if (*(int *)(param_4 + 0x48) == 0) {
    lVar9 = __vcrt_getptd();
    if (*(int *)(lVar9 + 0x78) != -2) {
      lVar9 = __vcrt_getptd();
      iVar8 = *(int *)(lVar9 + 0x78);
      lVar9 = __vcrt_getptd();
      *(int32_t *)(lVar9 + 0x78) = 0xfffffffe;
    }
  }
  else {
    lVar9 = __vcrt_getptd();
    if (*(int *)(lVar9 + 0x78) != -2) goto LAB_180129037;
    iVar8 = *(int *)(param_4 + 0x48) + -2;
  }
  if (-2 < iVar8) {
    if (*(int *)(param_5 + 8) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(byte *)((longlong)*(int *)(param_5 + 8) + *(longlong *)(param_4 + 8)) & 0xf;
      uVar12 = *(uint *)((byte *)((longlong)*(int *)(param_5 + 8) + *(longlong *)(param_4 + 8)) +
                        (-4 - (longlong)(char)(&DAT_1801784a0)[uVar12])) >>
               ((&DAT_1801784b0)[uVar12] & 0x1f);
    }
    if ((int)uVar12 <= iVar8) goto LAB_180129037;
    if ((((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x18) == 4)) &&
        (*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3)) && (*(longlong *)(param_1 + 0x30) == 0)) {
      lVar9 = __vcrt_getptd();
      if (*(longlong *)(lVar9 + 0x20) == 0) goto LAB_180128fd5;
      lVar9 = __vcrt_getptd();
      param_1 = *(EHExceptionRecord **)(lVar9 + 0x20);
      lVar9 = __vcrt_getptd();
      local_168 = '\x01';
      param_3 = *(_CONTEXT **)(lVar9 + 0x28);
      FUN_1801272b4(*(int32_t *)(param_1 + 0x38));
      if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x18) == 4)) &&
         ((*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0x30) == 0))))
      goto LAB_180129037;
      lVar9 = __vcrt_getptd();
      if (*(longlong *)(lVar9 + 0x38) != 0) {
        lVar9 = __vcrt_getptd();
        p_Var3 = *(_s_ESTypeList **)(lVar9 + 0x38);
        lVar9 = __vcrt_getptd();
        *(int32_t *)(lVar9 + 0x38) = 0;
        cVar5 = FUN_18012aac4((longlong)param_1,(int *)p_Var3);
        if (cVar5 == '\0') {
          uVar6 = Is_bad_exception_allowed(p_Var3);
          if (uVar6 != '\0') {
            __DestructExceptionObject((int *)param_1);
            FUN_180129ef4(&local_140);
            FUN_1801279a8(&local_140,&DAT_1801e8d58);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FUN_180136dec();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    FUN_180129dd4(local_d8,(longlong)param_5,*(longlong *)(param_4 + 8));
    if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x18) == 4)) &&
       (*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3)) {
      if (local_d8[0] != 0) {
        FUN_180126c90((int32_t *)&local_120,(int *)local_d8,iVar8);
        local_160 = (uint)uStack_118;
        local_140 = local_120;
        uStack_138 = uStack_118;
        if (local_160 < local_108) {
          do {
            local_140 = *(longlong *)(local_120 + 0x18);
            uStack_138 = *(int32_t *)(local_120 + 0x20);
            if ((*(int *)(local_120 + 0x18) <= iVar8) && (iVar8 <= *(int *)(local_120 + 0x1c))) {
              FUN_180129d50(local_a8,(longlong)&local_140,*(longlong *)(param_4 + 8),
                            **(uint **)(param_4 + 0x10));
              uVar12 = local_a8[0];
              local_164 = 0;
              if (local_a8[0] != 0) {
                do {
                  local_100 = local_90;
                  uStack_f8 = uStack_88;
                  local_e0 = local_70;
                  local_f0 = local_80;
                  uStack_e8 = uStack_78;
                  lVar9 = _GetThrowImageBase();
                  piVar10 = (int *)(lVar9 + 4 +
                                   (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
                  lVar9 = _GetThrowImageBase();
                  for (iVar15 = *(int *)(lVar9 + *(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
                      0 < iVar15; iVar15 = iVar15 + -1) {
                    lVar9 = _GetThrowImageBase();
                    iVar1 = *piVar10;
                    uVar11 = FUN_1801296e4((longlong)&local_100,(byte *)(lVar9 + iVar1),
                                           *(byte **)(param_1 + 0x30));
                    if ((int)uVar11 != 0) {
                      CatchIt<class___FrameHandler4>
                                (param_1,param_2,param_3,param_4,param_5,(HandlerType4 *)&local_100,
                                 (_s_CatchableType *)(lVar9 + iVar1),(TryBlockMapEntry4 *)&local_140
                                 ,param_7,local_128,local_168,param_6);
                      goto LAB_180128ecd;
                    }
                    piVar10 = piVar10 + 1;
                  }
                  FUN_18012a350((longlong)local_a8);
                  local_164 = local_164 + 1;
                } while (local_164 != uVar12);
              }
            }
LAB_180128ecd:
            uVar12 = **(byte **)(local_120 + 8) & 0xf;
            bVar7 = (&DAT_1801784b0)[uVar12];
            pbVar13 = *(byte **)(local_120 + 8) + -(longlong)(char)(&DAT_1801784a0)[uVar12];
            uVar12 = *(uint *)(pbVar13 + -4);
            *(byte **)(local_120 + 8) = pbVar13;
            *(uint *)(local_120 + 0x18) = uVar12 >> (bVar7 & 0x1f);
            bVar7 = (&DAT_1801784b0)[*pbVar13 & 0xf];
            pbVar13 = pbVar13 + -(longlong)(char)(&DAT_1801784a0)[*pbVar13 & 0xf];
            uVar12 = *(uint *)(pbVar13 + -4);
            *(byte **)(local_120 + 8) = pbVar13;
            *(uint *)(local_120 + 0x1c) = uVar12 >> (bVar7 & 0x1f);
            pbVar14 = pbVar13 + -(longlong)(char)(&DAT_1801784a0)[*pbVar13 & 0xf];
            *(uint *)(local_120 + 0x20) =
                 *(uint *)(pbVar14 + -4) >> ((&DAT_1801784b0)[*pbVar13 & 0xf] & 0x1f);
            local_160 = local_160 + 1;
            *(byte **)(local_120 + 8) = pbVar14;
            uVar2 = *(int32_t *)pbVar14;
            *(byte **)(local_120 + 8) = pbVar14 + 4;
            *(int32_t *)(local_120 + 0x24) = uVar2;
          } while (local_160 < local_108);
        }
      }
      if ((((byte)*param_5 & 0x40) != 0) &&
         (bVar7 = FUN_1801269c8(param_4,(byte *)param_5), bVar7 == 0)) {
        lVar9 = __vcrt_getptd();
        *(EHExceptionRecord **)(lVar9 + 0x20) = param_1;
        lVar9 = __vcrt_getptd();
        *(_CONTEXT **)(lVar9 + 0x28) = param_3;
        FUN_180136dec();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (local_d8[0] != 0) {
      if (param_6 != '\0') goto LAB_180129037;
      FUN_1801292b0(param_1,param_2,param_3,param_4,param_5,iVar8,param_7,param_8);
    }
    lVar9 = __vcrt_getptd();
    if (*(longlong *)(lVar9 + 0x38) == 0) {
LAB_180128fd5:
      FUN_1801252c0(local_58 ^ (ulonglong)auStackY_1c8);
      return;
    }
  }
LAB_180129037:
                    
  abort();
}

// ---- Function: FUN_180129040 ----
void FUN_180129040(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
                  _xDISPATCHER_CONTEXT *param_4,_s_FuncInfo *param_5,int param_6,int param_7,
                  __uint64 *param_8)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  PVOID pvVar4;
  _s_HandlerType *p_Var5;
  _s_FuncInfo *local_98;
  int32_t local_90;
  longlong *local_88;
  int32_t uStack_80;
  _s_TryBlockMapEntry local_78 [16];
  int local_68;
  longlong *local_60;
  int32_t uStack_58;
  uint local_48;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    lVar3 = __vcrt_getptd();
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      pvVar4 = EncodePointer((PVOID)0x0);
      lVar3 = __vcrt_getptd();
      if ((((*(PVOID *)(lVar3 + 0x10) != pvVar4) && (*(int *)param_1 != -0x1fbcb0b3)) &&
          (*(int *)param_1 != -0x1fbcbcae)) &&
         (iVar1 = _CallSETranslator<>((int32_t *)param_1,param_2,param_3), iVar1 != 0)) {
        return;
      }
    }
    local_90 = *(int32_t *)(param_4 + 8);
    local_98 = param_5;
    if (param_5->nTryBlocks == 0) {
                    
      abort();
    }
    FUN_180126b5c(&local_60,&local_98,param_6,(ulonglong *)param_4,(longlong)param_5);
    uVar2 = (uint)uStack_58;
    local_88 = local_60;
    uStack_80 = uStack_58;
    if (uVar2 < local_48) {
      do {
        lVar3 = (longlong)*(int *)(*local_88 + 0x10) + (ulonglong)uVar2 * 0x14;
        local_78 = *(_s_TryBlockMapEntry (*) [16])(lVar3 + local_60[1]);
        local_68 = *(int *)(lVar3 + 0x10 + local_60[1]);
        if ((local_78._0_4_ <= param_6) && (param_6 <= local_78._4_4_)) {
          p_Var5 = (_s_HandlerType *)
                   (*(longlong *)(param_4 + 8) + -0x14 +
                   (longlong)local_68 + (local_78._8_8_ >> 0x20) * 0x14);
          if (*(int *)(p_Var5 + 4) != 0) {
            iVar1 = *(int *)(p_Var5 + 4);
            lVar3 = _GetImageBase();
            if (lVar3 + iVar1 != 0) {
              if (iVar1 == 0) {
                lVar3 = 0;
              }
              else {
                lVar3 = _GetImageBase();
                lVar3 = lVar3 + *(int *)(p_Var5 + 4);
              }
              if (*(char *)(lVar3 + 0x10) != '\0') goto LAB_18012926b;
            }
          }
          if (((byte)*p_Var5 & 0x40) == 0) {
            CatchIt<class___FrameHandler3>
                      (param_1,param_2,param_3,param_4,param_5,p_Var5,(_s_CatchableType *)0x0,
                       local_78,param_7,param_8,'\x01','\0');
          }
        }
LAB_18012926b:
        uVar2 = uVar2 + 1;
      } while (uVar2 < local_48);
    }
  }
  return;
}

// ---- Function: FUN_1801292b0 ----
void FUN_1801292b0(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
                  _xDISPATCHER_CONTEXT *param_4,FuncInfo4 *param_5,int param_6,int param_7,
                  __uint64 *param_8)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  PVOID pvVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  int32_t auStackY_178 [32];
  uint local_118;
  longlong local_f8;
  int32_t uStack_f0;
  longlong local_e8;
  int32_t uStack_e0;
  uint local_d0;
  uint local_c8 [2];
  int32_t local_c0;
  int32_t local_b8;
  HandlerType4 local_b0 [4];
  byte local_ac;
  int local_a8;
  uint local_78 [10];
  ulonglong local_50;
  
  local_50 = DAT_1801eb080 ^ (ulonglong)auStackY_178;
  if (*(int *)param_1 != -0x7ffffffd) {
    lVar3 = __vcrt_getptd();
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      pvVar4 = EncodePointer((PVOID)0x0);
      lVar3 = __vcrt_getptd();
      if ((((*(PVOID *)(lVar3 + 0x10) != pvVar4) && (*(int *)param_1 != -0x1fbcb0b3)) &&
          (*(int *)param_1 != -0x1fbcbcae)) &&
         (iVar2 = _CallSETranslator<>((int32_t *)param_1,param_2,param_3), iVar2 != 0))
      goto LAB_18012957e;
    }
    FUN_180129dd4(local_78,(longlong)param_5,*(longlong *)(param_4 + 8));
    if (local_78[0] == 0) {
                    
      abort();
    }
    FUN_180126c90((int32_t *)&local_e8,(int *)local_78,param_6);
    local_118 = (uint)uStack_e0;
    local_f8 = local_e8;
    uStack_f0 = uStack_e0;
    if (local_118 < local_d0) {
      do {
        local_f8 = *(longlong *)(local_e8 + 0x18);
        uStack_f0 = *(int32_t *)(local_e8 + 0x20);
        if ((*(int *)(local_e8 + 0x18) <= param_6) && (param_6 <= *(int *)(local_e8 + 0x1c))) {
          FUN_180129d50(local_c8,(longlong)&local_f8,*(longlong *)(param_4 + 8),
                        **(uint **)(param_4 + 0x10));
          local_c0 = local_b8;
          FUN_18012a350((longlong)local_c8);
          uVar5 = local_c8[0];
          local_c0 = local_b8;
          FUN_18012a350((longlong)local_c8);
          uVar8 = (ulonglong)(uVar5 - 1);
          if (uVar5 - 1 != 0) {
            do {
              FUN_18012a350((longlong)local_c8);
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          if ((local_a8 != 0) && (lVar3 = _GetImageBase(), lVar3 + local_a8 != 0)) {
            if (local_a8 == 0) {
              lVar3 = 0;
            }
            else {
              lVar3 = _GetImageBase();
              lVar3 = lVar3 + local_a8;
            }
            if (*(char *)(lVar3 + 0x10) != '\0') goto LAB_1801294e4;
          }
          if ((local_ac & 0x40) == 0) {
            CatchIt<class___FrameHandler4>
                      (param_1,param_2,param_3,param_4,param_5,local_b0,(_s_CatchableType *)0x0,
                       (TryBlockMapEntry4 *)&local_f8,param_7,param_8,'\x01','\0');
          }
        }
LAB_1801294e4:
        uVar5 = **(byte **)(local_e8 + 8) & 0xf;
        bVar1 = (&DAT_1801784b0)[uVar5];
        pbVar6 = *(byte **)(local_e8 + 8) + -(longlong)(char)(&DAT_1801784a0)[uVar5];
        uVar5 = *(uint *)(pbVar6 + -4);
        *(byte **)(local_e8 + 8) = pbVar6;
        *(uint *)(local_e8 + 0x18) = uVar5 >> (bVar1 & 0x1f);
        bVar1 = (&DAT_1801784b0)[*pbVar6 & 0xf];
        pbVar6 = pbVar6 + -(longlong)(char)(&DAT_1801784a0)[*pbVar6 & 0xf];
        uVar5 = *(uint *)(pbVar6 + -4);
        *(byte **)(local_e8 + 8) = pbVar6;
        *(uint *)(local_e8 + 0x1c) = uVar5 >> (bVar1 & 0x1f);
        pbVar7 = pbVar6 + -(longlong)(char)(&DAT_1801784a0)[*pbVar6 & 0xf];
        *(uint *)(local_e8 + 0x20) =
             *(uint *)(pbVar7 + -4) >> ((&DAT_1801784b0)[*pbVar6 & 0xf] & 0x1f);
        *(byte **)(local_e8 + 8) = pbVar7;
        *(int32_t *)(local_e8 + 0x24) = *(int32_t *)pbVar7;
        local_118 = local_118 + 1;
        *(byte **)(local_e8 + 8) = pbVar7 + 4;
      } while (local_118 < local_d0);
    }
  }
LAB_18012957e:
  FUN_1801252c0(local_50 ^ (ulonglong)auStackY_178);
  return;
}

// ---- Function: TypeMatchHelper_class___FrameHandler3_ ----
/* Library Function - Single Match
    int __cdecl TypeMatchHelper<class __FrameHandler3>(struct _s_HandlerType const * __ptr64,struct
   _s_CatchableType const * __ptr64,struct _s_ThrowInfo const * __ptr64)
   
   Library: Visual Studio 2019 Release */

int __cdecl
TypeMatchHelper<class___FrameHandler3>
          (_s_HandlerType *param_1,_s_CatchableType *param_2,_s_ThrowInfo *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  
  lVar8 = 0;
  iVar7 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar3 = *(int *)(param_1 + 4);
    lVar4 = _GetImageBase();
    if (lVar4 + iVar3 != 0) {
      lVar4 = lVar8;
      if (iVar3 != 0) {
        iVar7 = *(int *)(param_1 + 4);
        lVar4 = _GetImageBase();
        lVar4 = iVar7 + lVar4;
      }
      if ((*(char *)(lVar4 + 0x10) != '\0') &&
         ((((byte)*param_1 & 0x80) == 0 || (((byte)*param_2 & 0x10) == 0)))) {
        lVar4 = lVar8;
        if (iVar7 != 0) {
          lVar4 = _GetImageBase();
          lVar4 = lVar4 + *(int *)(param_1 + 4);
        }
        lVar5 = _GetThrowImageBase();
        if (lVar4 != lVar5 + *(int *)(param_2 + 4)) {
          lVar4 = lVar8;
          if (*(int *)(param_1 + 4) != 0) {
            lVar4 = _GetImageBase();
            lVar4 = lVar4 + *(int *)(param_1 + 4);
          }
          lVar5 = _GetThrowImageBase();
          pcVar6 = (char *)(lVar4 + 0x10);
          lVar4 = ((longlong)*(int *)(param_2 + 4) + 0x10 + lVar5) - (longlong)pcVar6;
          do {
            cVar1 = *pcVar6;
            cVar2 = pcVar6[lVar4];
            if (cVar1 != cVar2) break;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          if (cVar1 != cVar2) {
            return 0;
          }
        }
        if (((((((byte)*param_2 & 2) == 0) || (((byte)*param_1 & 8) != 0)) &&
             ((((byte)*param_3 & 1) == 0 || (((byte)*param_1 & 1) != 0)))) &&
            ((((byte)*param_3 & 4) == 0 || (((byte)*param_1 & 4) != 0)))) &&
           ((((byte)*param_3 & 2) == 0 || (lVar8 = 0, ((byte)*param_1 & 2) != 0)))) {
          lVar8 = 1;
        }
        return (int)lVar8;
      }
    }
  }
  return 1;
}

// ---- Function: FUN_1801296e4 ----
int32_t FUN_1801296e4(longlong param_1,byte *param_2,byte *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  int iVar8;
  byte *pbVar9;
  
  lVar6 = 0;
  iVar8 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = *(int *)(param_1 + 8);
    lVar4 = _GetImageBase();
    if (lVar4 + iVar3 != 0) {
      lVar4 = lVar6;
      if (iVar3 != 0) {
        iVar8 = *(int *)(param_1 + 8);
        lVar4 = _GetImageBase();
        lVar4 = lVar4 + iVar8;
      }
      if ((*(char *)(lVar4 + 0x10) != '\0') &&
         (((*(byte *)(param_1 + 4) & 0x80) == 0 || ((*param_2 & 0x10) == 0)))) {
        lVar4 = lVar6;
        if (iVar8 != 0) {
          lVar4 = _GetImageBase();
          lVar4 = lVar4 + *(int *)(param_1 + 8);
        }
        lVar5 = _GetThrowImageBase();
        if (lVar4 != lVar5 + *(int *)(param_2 + 4)) {
          if (*(int *)(param_1 + 8) != 0) {
            lVar6 = _GetImageBase();
            lVar6 = lVar6 + *(int *)(param_1 + 8);
          }
          lVar4 = _GetThrowImageBase();
          pcVar7 = (char *)(lVar6 + 0x10);
          lVar6 = ((longlong)*(int *)(param_2 + 4) + 0x10 + lVar4) - (longlong)pcVar7;
          do {
            cVar1 = *pcVar7;
            cVar2 = pcVar7[lVar6];
            if (cVar1 != cVar2) break;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          if (cVar1 != cVar2) {
            return 0;
          }
        }
        pbVar9 = (byte *)(param_1 + 4);
        if (((*param_2 & 2) != 0) && ((*pbVar9 & 8) == 0)) {
          return 0;
        }
        if (((*param_3 & 1) != 0) && ((*pbVar9 & 1) == 0)) {
          return 0;
        }
        if (((*param_3 & 4) != 0) && ((*pbVar9 & 4) == 0)) {
          return 0;
        }
        if (((*param_3 & 2) != 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
          return 0;
        }
        return 1;
      }
    }
  }
  return 1;
}

// ---- Function: FUN_180129830 ----
int32_t
FUN_180129830(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
             _xDISPATCHER_CONTEXT *param_4,_s_FuncInfo *param_5,int param_6,__uint64 *param_7,
             byte param_8)

{
  int iVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t in_stack_ffffffffffffffd0;
  int32_t uVar4;
  
  uVar4 = (int32_t)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  __except_validate_context_record((longlong)param_3);
  lVar2 = __vcrt_getptd();
  if ((*(int *)(lVar2 + 0x40) == 0) && (*(int *)param_1 != -0x1f928c9d)) {
    if (*(int *)param_1 == -0x7fffffd7) {
      if (*(int *)(param_1 + 0x18) == 0xf) {
        if (*(longlong *)(param_1 + 0x60) == 0x19930520) goto LAB_1801298b2;
        goto LAB_180129896;
      }
    }
    else {
LAB_180129896:
      if (*(int *)param_1 == -0x7fffffda) goto LAB_1801298b2;
    }
    if ((0x19930521 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
       ((param_5->EHFlags & 1) != 0)) {
      return 1;
    }
  }
LAB_1801298b2:
  if (((byte)param_1[4] & 0x66) == 0) {
    if ((param_5->nTryBlocks == 0) &&
       ((((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521 ||
         (param_5->dispESTypeList == 0)) ||
        (lVar2 = _GetImageBase(), lVar2 + (int)param_5->dispESTypeList == 0)))) {
      if ((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522) {
        return 1;
      }
      if (((uint)param_5->EHFlags >> 2 & 1) == 0) {
        return 1;
      }
    }
    if (((*(int *)param_1 == -0x1f928c9d) && (2 < *(uint *)(param_1 + 0x18))) &&
       ((0x19930522 < *(uint *)(param_1 + 0x20) &&
        ((*(int *)(*(longlong *)(param_1 + 0x30) + 8) != 0 &&
         (lVar2 = _GetThrowImageBase(), lVar2 + *(int *)(*(longlong *)(param_1 + 0x30) + 8) != 0))))
       )) {
      uVar3 = (*(code *)PTR__guard_dispatch_icall_180157468)
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                         CONCAT44(uVar4,(uint)param_8));
      return uVar3;
    }
    FUN_18012866c(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
    return 1;
  }
  if (param_5->maxState == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if (((byte)param_1[4] & 0x20) == 0) {
LAB_180129937:
    __FrameHandler3::FrameUnwindToEmptyState(param_2,param_4,param_5);
  }
  else {
    if (*(int *)param_1 == -0x7fffffda) {
      iVar1 = FUN_180127de4((longlong)param_5,(longlong)param_4,*(ulonglong *)(param_4 + 0x20));
      if ((iVar1 < -1) || (param_5->maxState <= iVar1)) {
LAB_180129a61:
                    
        abort();
      }
    }
    else {
      if (*(int *)param_1 != -0x7fffffd7) goto LAB_180129937;
      iVar1 = *(int *)(param_1 + 0x38);
      if ((iVar1 < -1) || (param_5->maxState <= iVar1)) goto LAB_180129a61;
      param_2 = *(__uint64 **)(param_1 + 0x28);
    }
    FUN_18012a598(param_2,(ulonglong *)param_4,param_5,iVar1);
  }
  return 1;
}

// ---- Function: FUN_180129a68 ----
int32_t
FUN_180129a68(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
             _xDISPATCHER_CONTEXT *param_4,FuncInfo4 *param_5,int param_6,__uint64 *param_7,
             byte param_8)

{
  int iVar1;
  longlong lVar2;
  int32_t uVar3;
  uint uVar4;
  uint uVar5;
  int32_t in_stack_ffffffffffffffa0;
  int32_t uVar6;
  uint local_48 [12];
  
  uVar6 = (int32_t)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  __except_validate_context_record((longlong)param_3);
  lVar2 = __vcrt_getptd();
  uVar5 = 0;
  if ((*(int *)(lVar2 + 0x40) == 0) && (*(int *)param_1 != -0x1f928c9d)) {
    if (*(int *)param_1 == -0x7fffffd7) {
      if (*(int *)(param_1 + 0x18) == 0xf) {
        if (*(longlong *)(param_1 + 0x60) == 0x19930520) goto LAB_180129ae2;
        goto LAB_180129ad4;
      }
    }
    else {
LAB_180129ad4:
      if (*(int *)param_1 == -0x7fffffda) goto LAB_180129ae2;
    }
    if (((byte)*param_5 & 0x20) != 0) {
      return 1;
    }
  }
LAB_180129ae2:
  if (((byte)param_1[4] & 0x66) == 0) {
    FUN_180129dd4(local_48,(longlong)param_5,*(longlong *)(param_4 + 8));
    if ((local_48[0] == 0) && (((byte)*param_5 & 0x40) == 0)) {
      return 1;
    }
    if (((*(int *)param_1 == -0x1f928c9d) &&
        (((2 < *(uint *)(param_1 + 0x18) && (0x19930522 < *(uint *)(param_1 + 0x20))) &&
         (*(int *)(*(longlong *)(param_1 + 0x30) + 8) != 0)))) &&
       (lVar2 = _GetThrowImageBase(), lVar2 + *(int *)(*(longlong *)(param_1 + 0x30) + 8) != 0)) {
      uVar3 = (*(code *)PTR__guard_dispatch_icall_180157468)
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                         CONCAT44(uVar6,(uint)param_8));
      return uVar3;
    }
    FUN_180128b3c(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
    return 1;
  }
  if (*(int *)(param_5 + 8) == 0) {
    return 1;
  }
  uVar4 = *(byte *)((longlong)*(int *)(param_5 + 8) + *(longlong *)(param_4 + 8)) & 0xf;
  if (*(uint *)((byte *)((longlong)*(int *)(param_5 + 8) + *(longlong *)(param_4 + 8)) +
               (-4 - (longlong)(char)(&DAT_1801784a0)[uVar4])) >> ((&DAT_1801784b0)[uVar4] & 0x1f)
      == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if (((byte)param_1[4] & 0x20) == 0) {
LAB_180129bf3:
    __FrameHandler4::FrameUnwindToEmptyState(param_2,param_4,param_5);
  }
  else {
    if (*(int *)param_1 == -0x7fffffda) {
      iVar1 = FUN_180127e4c((longlong)param_5,(longlong)param_4,*(ulonglong *)(param_4 + 0x20));
      if (iVar1 < -1) {
LAB_180129cf6:
                    
        abort();
      }
      if (*(int *)(param_5 + 8) != 0) {
        uVar5 = *(byte *)((longlong)*(int *)(param_5 + 8) + *(longlong *)(param_4 + 8)) & 0xf;
        uVar5 = *(uint *)((byte *)((longlong)*(int *)(param_5 + 8) + *(longlong *)(param_4 + 8)) +
                         (-4 - (longlong)(char)(&DAT_1801784a0)[uVar5])) >>
                ((&DAT_1801784b0)[uVar5] & 0x1f);
      }
      if ((int)uVar5 <= iVar1) goto LAB_180129cf6;
    }
    else {
      if (*(int *)param_1 != -0x7fffffd7) goto LAB_180129bf3;
      iVar1 = *(int *)(param_1 + 0x38);
      if ((iVar1 < -1) ||
         (uVar5 = *(byte *)((longlong)*(int *)(param_5 + 8) + *(longlong *)(param_4 + 8)) & 0xf,
         (int)(*(uint *)((byte *)((longlong)*(int *)(param_5 + 8) + *(longlong *)(param_4 + 8)) +
                        (-4 - (longlong)(char)(&DAT_1801784a0)[uVar5])) >>
              ((&DAT_1801784b0)[uVar5] & 0x1f)) <= iVar1)) goto LAB_180129cf6;
      param_2 = *(__uint64 **)(param_1 + 0x28);
    }
    FUN_18012a724((longlong *)param_2,(ulonglong *)param_4,(longlong)param_5,iVar1);
  }
  return 1;
}

// ---- Function: thunk_FUN_180129830 ----
int32_t
thunk_FUN_180129830(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
                   _xDISPATCHER_CONTEXT *param_4,_s_FuncInfo *param_5,int param_6,__uint64 *param_7,
                   byte param_8)

{
  int iVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t in_stack_ffffffffffffffd0;
  
  uVar4 = (int32_t)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  __except_validate_context_record((longlong)param_3);
  lVar2 = __vcrt_getptd();
  if ((*(int *)(lVar2 + 0x40) == 0) && (*(int *)param_1 != -0x1f928c9d)) {
    if (*(int *)param_1 == -0x7fffffd7) {
      if (*(int *)(param_1 + 0x18) == 0xf) {
        if (*(longlong *)(param_1 + 0x60) == 0x19930520) goto LAB_1801298b2;
        goto LAB_180129896;
      }
    }
    else {
LAB_180129896:
      if (*(int *)param_1 == -0x7fffffda) goto LAB_1801298b2;
    }
    if ((0x19930521 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
       ((param_5->EHFlags & 1) != 0)) {
      return 1;
    }
  }
LAB_1801298b2:
  if (((byte)param_1[4] & 0x66) == 0) {
    if ((param_5->nTryBlocks == 0) &&
       ((((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521 ||
         (param_5->dispESTypeList == 0)) ||
        (lVar2 = _GetImageBase(), lVar2 + (int)param_5->dispESTypeList == 0)))) {
      if ((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522) {
        return 1;
      }
      if (((uint)param_5->EHFlags >> 2 & 1) == 0) {
        return 1;
      }
    }
    if (((*(int *)param_1 == -0x1f928c9d) && (2 < *(uint *)(param_1 + 0x18))) &&
       ((0x19930522 < *(uint *)(param_1 + 0x20) &&
        ((*(int *)(*(longlong *)(param_1 + 0x30) + 8) != 0 &&
         (lVar2 = _GetThrowImageBase(), lVar2 + *(int *)(*(longlong *)(param_1 + 0x30) + 8) != 0))))
       )) {
      uVar3 = (*(code *)PTR__guard_dispatch_icall_180157468)
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                         CONCAT44(uVar4,(uint)param_8));
      return uVar3;
    }
    FUN_18012866c(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
    return 1;
  }
  if (param_5->maxState == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if (((byte)param_1[4] & 0x20) == 0) {
LAB_180129937:
    __FrameHandler3::FrameUnwindToEmptyState(param_2,param_4,param_5);
  }
  else {
    if (*(int *)param_1 == -0x7fffffda) {
      iVar1 = FUN_180127de4((longlong)param_5,(longlong)param_4,*(ulonglong *)(param_4 + 0x20));
      if ((iVar1 < -1) || (param_5->maxState <= iVar1)) {
LAB_180129a61:
                    
        abort();
      }
    }
    else {
      if (*(int *)param_1 != -0x7fffffd7) goto LAB_180129937;
      iVar1 = *(int *)(param_1 + 0x38);
      if ((iVar1 < -1) || (param_5->maxState <= iVar1)) goto LAB_180129a61;
      param_2 = *(__uint64 **)(param_1 + 0x28);
    }
    FUN_18012a598(param_2,(ulonglong *)param_4,param_5,iVar1);
  }
  return 1;
}

