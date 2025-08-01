#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_180129d04 ----
ulonglong FUN_180129d04(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
                       _xDISPATCHER_CONTEXT *param_4,FuncInfo4 *param_5,int param_6,
                       __uint64 *param_7,byte param_8)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180129a68(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar2 = __vcrt_getptd();
  *(int32_t *)(lVar2 + 0x78) = 0xfffffffe;
  return uVar1 & 0xffffffff;
}

// ---- Function: FUN_180129d50 ----
uint * FUN_180129d50(uint *param_1,longlong param_2,longlong param_3,uint param_4)

{
  byte *pbVar1;
  longlong lVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(longlong *)(param_1 + 0x10) = param_3;
  param_1[0x12] = param_4;
  if (*(int *)(param_2 + 0xc) == 0) {
    *param_1 = 0;
  }
  else {
    pbVar1 = (byte *)(*(int *)(param_2 + 0xc) + param_3);
    *(byte **)(param_1 + 2) = pbVar1;
    lVar2 = (longlong)pbVar1 - (longlong)(char)(&DAT_1801784a0)[*pbVar1 & 0xf];
    *param_1 = *(uint *)(lVar2 + -4) >> ((&DAT_1801784b0)[*pbVar1 & 0xf] & 0x1f);
    *(longlong *)(param_1 + 2) = lVar2;
    *(longlong *)(param_1 + 4) = lVar2;
    FUN_18012a350((longlong)param_1);
  }
  return param_1;
}

// ---- Function: FUN_180129dd4 ----
uint * FUN_180129dd4(uint *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint *puVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (*(int *)(param_2 + 0xc) == 0) {
    *param_1 = 0;
  }
  else {
    pbVar3 = (byte *)(*(int *)(param_2 + 0xc) + param_3);
    *(byte **)(param_1 + 2) = pbVar3;
    bVar1 = (&DAT_1801784b0)[*pbVar3 & 0xf];
    pbVar3 = pbVar3 + -(longlong)(char)(&DAT_1801784a0)[*pbVar3 & 0xf];
    uVar2 = *(uint *)(pbVar3 + -4);
    *(byte **)(param_1 + 2) = pbVar3;
    *param_1 = uVar2 >> (bVar1 & 0x1f);
    *(byte **)(param_1 + 4) = pbVar3;
    bVar1 = (&DAT_1801784b0)[*pbVar3 & 0xf];
    pbVar3 = pbVar3 + -(longlong)(char)(&DAT_1801784a0)[*pbVar3 & 0xf];
    uVar2 = *(uint *)(pbVar3 + -4);
    *(byte **)(param_1 + 2) = pbVar3;
    param_1[6] = uVar2 >> (bVar1 & 0x1f);
    bVar1 = (&DAT_1801784b0)[*pbVar3 & 0xf];
    pbVar3 = pbVar3 + -(longlong)(char)(&DAT_1801784a0)[*pbVar3 & 0xf];
    uVar2 = *(uint *)(pbVar3 + -4);
    *(byte **)(param_1 + 2) = pbVar3;
    param_1[7] = uVar2 >> (bVar1 & 0x1f);
    puVar4 = (uint *)(pbVar3 + -(longlong)(char)(&DAT_1801784a0)[*pbVar3 & 0xf]);
    param_1[8] = puVar4[-1] >> ((&DAT_1801784b0)[*pbVar3 & 0xf] & 0x1f);
    *(uint **)(param_1 + 2) = puVar4;
    uVar2 = *puVar4;
    *(uint **)(param_1 + 2) = puVar4 + 1;
    param_1[9] = uVar2;
  }
  return param_1;
}

// ---- Function: FUN_180129ef4 ----
int32_t * FUN_180129ef4(int32_t *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}

// ---- Function: FUN_18012a350 ----
void FUN_18012a350(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  int32_t uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  *(int32_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x1c) = 0;
  *(int32_t *)(param_1 + 0x24) = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  bVar1 = **(byte **)(param_1 + 8);
  pbVar7 = *(byte **)(param_1 + 8) + 1;
  *(byte *)(param_1 + 0x18) = bVar1;
  *(byte **)(param_1 + 8) = pbVar7;
  if ((bVar1 & 1) != 0) {
    bVar2 = *pbVar7;
    pbVar7 = pbVar7 + -(longlong)(char)(&DAT_1801784a0)[bVar2 & 0xf];
    *(uint *)(param_1 + 0x1c) = *(uint *)(pbVar7 + -4) >> ((&DAT_1801784b0)[bVar2 & 0xf] & 0x1f);
    *(byte **)(param_1 + 8) = pbVar7;
  }
  if ((bVar1 & 2) != 0) {
    uVar3 = *(int32_t *)pbVar7;
    pbVar7 = pbVar7 + 4;
    *(byte **)(param_1 + 8) = pbVar7;
    *(int32_t *)(param_1 + 0x20) = uVar3;
  }
  if ((bVar1 & 4) != 0) {
    bVar2 = *pbVar7;
    pbVar7 = pbVar7 + -(longlong)(char)(&DAT_1801784a0)[bVar2 & 0xf];
    *(uint *)(param_1 + 0x24) = *(uint *)(pbVar7 + -4) >> ((&DAT_1801784b0)[bVar2 & 0xf] & 0x1f);
    *(byte **)(param_1 + 8) = pbVar7;
  }
  pbVar8 = pbVar7 + 4;
  *(int32_t *)(param_1 + 0x28) = *(int32_t *)pbVar7;
  *(byte **)(param_1 + 8) = pbVar8;
  if ((bVar1 & 8) == 0) {
    if ((bVar1 & 0x30) == 0x10) {
      bVar1 = (&DAT_1801784b0)[*pbVar8 & 0xf];
      uVar5 = *(uint *)(((longlong)pbVar8 - (longlong)(char)(&DAT_1801784a0)[*pbVar8 & 0xf]) + -4);
      *(longlong *)(param_1 + 8) =
           (longlong)pbVar8 - (longlong)(char)(&DAT_1801784a0)[*pbVar8 & 0xf];
      *(ulonglong *)(param_1 + 0x30) =
           (ulonglong)(*(int *)(param_1 + 0x48) + (uVar5 >> (bVar1 & 0x1f)));
      return;
    }
    if ((bVar1 & 0x30) != 0x20) {
      return;
    }
    bVar1 = (&DAT_1801784b0)[*pbVar8 & 0xf];
    pbVar8 = pbVar8 + -(longlong)(char)(&DAT_1801784a0)[*pbVar8 & 0xf];
    uVar5 = *(uint *)(pbVar8 + -4);
    *(byte **)(param_1 + 8) = pbVar8;
    *(ulonglong *)(param_1 + 0x30) =
         (ulonglong)(*(int *)(param_1 + 0x48) + (uVar5 >> (bVar1 & 0x1f)));
    bVar1 = (&DAT_1801784b0)[*pbVar8 & 0xf];
    uVar5 = *(uint *)(((longlong)pbVar8 - (longlong)(char)(&DAT_1801784a0)[*pbVar8 & 0xf]) + -4);
    *(longlong *)(param_1 + 8) = (longlong)pbVar8 - (longlong)(char)(&DAT_1801784a0)[*pbVar8 & 0xf];
    uVar6 = (ulonglong)(*(int *)(param_1 + 0x48) + (uVar5 >> (bVar1 & 0x1f)));
  }
  else {
    if ((bVar1 & 0x30) == 0x10) {
      iVar4 = *(int *)pbVar8;
      *(byte **)(param_1 + 8) = pbVar7 + 8;
      *(longlong *)(param_1 + 0x30) = (longlong)iVar4;
      return;
    }
    if ((bVar1 & 0x30) != 0x20) {
      return;
    }
    iVar4 = *(int *)pbVar8;
    *(byte **)(param_1 + 8) = pbVar7 + 8;
    *(longlong *)(param_1 + 0x30) = (longlong)iVar4;
    uVar6 = (ulonglong)*(int *)(pbVar7 + 8);
    *(byte **)(param_1 + 8) = pbVar7 + 0xc;
  }
  *(ulonglong *)(param_1 + 0x38) = uVar6;
  return;
}

// ---- Function: FUN_18012a4e4 ----
int32_t FUN_18012a4e4(int32_t *param_1,longlong param_2,int32_t *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = (int *)*param_1;
  *param_3 = 0;
  if (*piVar1 == -0x1f928c9d) {
    if (((piVar1[6] == 4) && (piVar1[8] + 0xe66cfae0U < 3)) &&
       (*(longlong *)(piVar1 + 10) == *(longlong *)(param_2 + 0x28))) {
      *param_3 = 1;
    }
    if (((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) &&
       ((piVar1[8] + 0xe66cfae0U < 3 && (*(longlong *)(piVar1 + 0xc) == 0)))) {
      lVar2 = __vcrt_getptd();
      *(int32_t *)(lVar2 + 0x40) = 1;
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}

// ---- Function: ExFilterRethrowFH4 ----
/* Library Function - Single Match
    int __cdecl ExFilterRethrowFH4(struct _EXCEPTION_POINTERS * __ptr64,struct EHExceptionRecord *
   __ptr64,int,int * __ptr64)
   
   Library: Visual Studio 2019 Release */

int __cdecl
ExFilterRethrowFH4(_EXCEPTION_POINTERS *param_1,EHExceptionRecord *param_2,int param_3,int *param_4)

{
  int32_t uVar1;
  longlong lVar2;
  
  uVar1 = FUN_18012a4e4(&param_1->ExceptionRecord,(longlong)param_2,param_4);
  if ((int)uVar1 == 0) {
    lVar2 = __vcrt_getptd();
    *(int *)(lVar2 + 0x78) = param_3;
  }
  return (int)uVar1;
}

// ---- Function: FUN_18012a598 ----
void FUN_18012a598(__uint64 *param_1,ulonglong *param_2,_s_FuncInfo *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int32_t uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = _GetImageBase();
  iVar2 = FUN_180127d38((longlong *)param_1,param_2,(longlong)param_3);
  lVar4 = __vcrt_getptd();
  *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
  while ((iVar2 != -1 && (param_4 < iVar2))) {
    if ((iVar2 < 0) || (param_3->maxState <= iVar2)) {
                    
      abort();
    }
    lVar5 = (longlong)iVar2;
    lVar4 = _GetImageBase();
    iVar2 = *(int *)((longlong)(int)param_3->dispUnwindMap + lVar4 + lVar5 * 8);
    lVar4 = _GetImageBase();
    if (*(int *)((longlong)(int)param_3->dispUnwindMap + 4 + lVar4 + lVar5 * 8) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = _GetImageBase();
      iVar1 = *(int *)((longlong)(int)param_3->dispUnwindMap + 4 + lVar4 + lVar5 * 8);
      lVar4 = _GetImageBase();
      lVar4 = lVar4 + iVar1;
    }
    if (lVar4 != 0) {
      __FrameHandler3::SetState(param_1,param_3,iVar2);
      lVar4 = _GetImageBase();
      if (*(int *)((longlong)(int)param_3->dispUnwindMap + 4 + lVar4 + lVar5 * 8) != 0) {
        _GetImageBase();
        _GetImageBase();
      }
      _CallSettingFrame();
      FUN_18012729c(uVar3);
    }
  }
  lVar4 = __vcrt_getptd();
  if (0 < *(int *)(lVar4 + 0x30)) {
    lVar4 = __vcrt_getptd();
    *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
  }
  if ((iVar2 != -1) && (param_4 < iVar2)) {
                    
    abort();
  }
  __FrameHandler3::SetState(param_1,param_3,iVar2);
  return;
}

// ---- Function: FUN_18012a724 ----
void FUN_18012a724(longlong *param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  byte *pbVar9;
  ulonglong *puVar10;
  longlong lVar11;
  int32_t auStackY_138 [32];
  uint *local_108;
  ulonglong uStack_100;
  uint local_f8;
  int local_f4;
  int local_f0;
  uint *local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  int32_t local_d0;
  ulonglong *local_c8;
  ulonglong *local_c0;
  longlong *local_b8;
  uint *local_b0;
  ulonglong local_a8;
  uint *local_98;
  ulonglong uStack_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78 [2];
  ulonglong local_70;
  int32_t local_68;
  int32_t uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1801eb080 ^ (ulonglong)auStackY_138;
  local_f0 = param_4;
  local_d8 = param_1;
  local_b8 = param_1;
  local_d0 = _GetImageBase();
  iVar6 = FUN_180127ddc(param_3,param_2);
  puVar1 = param_2 + 9;
  local_c0 = puVar1;
  if ((int)*puVar1 == 0) {
    lVar7 = __vcrt_getptd();
    if (*(int *)(lVar7 + 0x78) != -2) {
      lVar7 = __vcrt_getptd();
      iVar6 = *(int *)(lVar7 + 0x78);
      lVar7 = __vcrt_getptd();
      *(int32_t *)(lVar7 + 0x78) = 0xfffffffe;
    }
  }
  else {
    lVar7 = __vcrt_getptd();
    if (*(int *)(lVar7 + 0x78) != -2) {
                    
      abort();
    }
    iVar6 = (int)*puVar1 + -2;
  }
  lVar7 = __vcrt_getptd();
  *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
  puVar10 = param_2 + 1;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if (*(int *)(param_3 + 8) == 0) {
    local_78[0] = 0;
  }
  else {
    pbVar9 = (byte *)((longlong)*(int *)(param_3 + 8) + *puVar10);
    uVar8 = *pbVar9 & 0xf;
    local_70 = (longlong)pbVar9 - (longlong)(char)(&DAT_1801784a0)[uVar8];
    local_78[0] = *(uint *)(local_70 - 4) >> ((&DAT_1801784b0)[uVar8] & 0x1f);
  }
  local_108 = local_78;
  local_e8 = local_78;
  uStack_100 = local_70;
  local_e0 = local_70;
  local_c8 = puVar10;
  FUN_18012acf4((int *)local_78,iVar6,param_4,(longlong *)&local_108,(longlong *)&local_e8);
  while( true ) {
    uVar5 = uStack_100;
    local_b0 = local_78;
    local_a8 = local_70;
    if ((uStack_100 < local_70) || (uStack_100 <= local_e0)) break;
    FUN_18012ac3c((longlong)local_108,(longlong *)&uStack_100);
    puVar4 = local_108;
    local_88 = local_108[4];
    uVar8 = local_108[5];
    uVar2 = local_108[6];
    uVar3 = local_108[7];
    local_98 = local_108;
    uStack_90 = uVar5;
    uStack_100 = uVar5;
    uStack_84 = uVar8;
    uStack_80 = uVar2;
    uStack_7c = uVar3;
    FUN_18012ac3c((longlong)local_108,(longlong *)&uStack_100);
    uStack_100 = uVar5 - puVar4[4];
    iVar6 = FUN_18012adc4((longlong *)&local_e8,param_4,(longlong)&local_98,iVar6,
                          (longlong *)&local_108);
    local_f8 = 0;
    if (uVar8 != 0) {
      local_f8 = uVar2;
    }
    local_f4 = iVar6;
    if (local_f8 != 0) {
      *(int *)puVar1 = iVar6 + 2;
      if (uVar8 - 1 < 2) {
        lVar7 = *local_d8;
        if (uVar8 == 2) {
          lVar11 = *(longlong *)((ulonglong)uVar3 + lVar7);
        }
        else {
          lVar11 = (ulonglong)uVar3 + lVar7;
        }
        _CallSettingFrameEncoded((longlong)(int)local_f8 + *puVar10,lVar7,lVar11);
      }
      else {
        _CallSettingFrame();
      }
      FUN_18012729c(local_d0);
    }
  }
  lVar7 = __vcrt_getptd();
  if (0 < *(int *)(lVar7 + 0x30)) {
    lVar7 = __vcrt_getptd();
    *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + -1;
  }
  FUN_1801252c0(local_58 ^ (ulonglong)auStackY_138);
  return;
}

// ---- Function: GetHandlerSearchState ----
/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::GetHandlerSearchState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
__FrameHandler3::GetHandlerSearchState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  int iVar1;
  int iVar2;
  __uint64 local_res20;
  
  iVar1 = FUN_180127dd4((longlong)param_3,(ulonglong *)param_2);
  FUN_180126a68((longlong *)param_1,(ulonglong *)param_2,(longlong)param_3,(longlong *)&local_res20)
  ;
  iVar2 = GetUnwindTryBlock(param_1,param_2,param_3);
  if (iVar2 < iVar1) {
    SetState(&local_res20,param_3,iVar1);
    SetUnwindTryBlock(param_1,param_2,param_3,iVar1);
  }
  else {
    iVar1 = GetUnwindTryBlock(param_1,param_2,param_3);
  }
  return iVar1;
}

// ---- Function: FUN_18012aac4 ----
int32_t FUN_18012aac4(longlong param_1,int *param_2)

{
  _s_ThrowInfo *p_Var1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int32_t uVar8;
  
  if (param_2 == (int *)0x0) {
                    
    abort();
  }
  uVar8 = 0;
  iVar5 = 0;
  if (0 < *param_2) {
    do {
      lVar3 = _GetThrowImageBase();
      piVar6 = (int *)((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0xc) + 4 + lVar3);
      lVar3 = _GetThrowImageBase();
      iVar7 = *(int *)(lVar3 + *(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
      if (0 < iVar7) {
        do {
          lVar3 = _GetThrowImageBase();
          p_Var1 = *(_s_ThrowInfo **)(param_1 + 0x30);
          iVar2 = *piVar6;
          lVar4 = _GetImageBase();
          iVar2 = TypeMatchHelper<class___FrameHandler3>
                            ((_s_HandlerType *)
                             ((longlong)param_2[1] + lVar4 + (longlong)iVar5 * 0x14),
                             (_s_CatchableType *)(lVar3 + iVar2),p_Var1);
          if (iVar2 != 0) {
            uVar8 = 1;
            break;
          }
          iVar7 = iVar7 + -1;
          piVar6 = piVar6 + 1;
        } while (0 < iVar7);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *param_2);
  }
  return uVar8;
}

// ---- Function: Is_bad_exception_allowed ----
/* Library Function - Single Match
    unsigned char __cdecl Is_bad_exception_allowed(struct _s_ESTypeList const * __ptr64)
   
   Library: Visual Studio 2019 Release */

uchar __cdecl Is_bad_exception_allowed(_s_ESTypeList *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  if (0 < *(int *)param_1) {
    lVar5 = 0;
    do {
      lVar3 = _GetImageBase();
      if (*(int *)((longlong)*(int *)(param_1 + 4) + 4 + lVar3 + lVar5) == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = _GetImageBase();
        iVar1 = *(int *)((longlong)*(int *)(param_1 + 4) + 4 + lVar3 + lVar5);
        lVar3 = _GetImageBase();
        lVar3 = lVar3 + iVar1;
      }
      uVar2 = __std_type_info_compare(lVar3 + 8,0x1801ecb70);
      if (uVar2 == 0) {
        return '\x01';
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x14;
    } while (iVar4 < *(int *)param_1);
  }
  return '\0';
}

// ---- Function: FUN_18012ac3c ----
void FUN_18012ac3c(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int32_t uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar3 = *(byte *)*param_2 & 0xf;
  lVar5 = *param_2 - (longlong)(char)(&DAT_1801784a0)[uVar3];
  uVar3 = *(uint *)(lVar5 + -4) >> ((&DAT_1801784b0)[uVar3] & 0x1f);
  *param_2 = lVar5;
  uVar4 = uVar3 & 3;
  *(uint *)(param_1 + 0x10) = uVar3 >> 2;
  *(uint *)(param_1 + 0x14) = uVar4;
  if (uVar4 - 1 < 2) {
    uVar2 = *(int32_t *)*param_2;
    *param_2 = (longlong)((int32_t *)*param_2 + 1);
    *(int32_t *)(param_1 + 0x18) = uVar2;
    uVar3 = *(byte *)*param_2 & 0xf;
    bVar1 = (&DAT_1801784b0)[uVar3];
    lVar5 = *param_2 - (longlong)(char)(&DAT_1801784a0)[uVar3];
    uVar3 = *(uint *)(lVar5 + -4);
    *param_2 = lVar5;
    *(uint *)(param_1 + 0x1c) = uVar3 >> (bVar1 & 0x1f);
  }
  else if (uVar4 == 3) {
    uVar2 = *(int32_t *)*param_2;
    *param_2 = (longlong)((int32_t *)*param_2 + 1);
    *(int32_t *)(param_1 + 0x18) = uVar2;
    return;
  }
  return;
}

// ---- Function: FUN_18012acd8 ----
void FUN_18012acd8(int32_t param_1,int32_t *UNRECOVERED_JUMPTABLE,int32_t param_3)

{
                    
                    
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,param_3);
  return;
}

// ---- Function: _CallMemberFunction2 ----
/* Library Function - Single Match
    void __cdecl _CallMemberFunction2(void * __ptr64 const,void * __ptr64 const,void * __ptr64
   const,int)
   
   Library: Visual Studio 2019 Release */

void __cdecl _CallMemberFunction2(void *param_1,void *param_2,void *param_3,int param_4)

{
                    
                    
  (*(code *)param_2)(param_1,param_3,param_4);
  return;
}

// ---- Function: FUN_18012acf4 ----
void FUN_18012acf4(int *param_1,int param_2,int param_3,longlong *param_4,longlong *param_5)

{
  int32_t *puVar1;
  int32_t uVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong local_res8;
  int local_res10;
  
  local_res8 = *(longlong *)(param_1 + 2);
  bVar3 = false;
  bVar4 = false;
  iVar6 = 0;
  lVar5 = local_res8 + -1;
  lVar7 = lVar5;
  local_res10 = param_2;
  if (0 < *param_1) {
    do {
      if (iVar6 == param_2) {
        bVar3 = true;
        lVar5 = local_res8;
      }
      if (iVar6 == param_3) {
        bVar4 = true;
        lVar7 = local_res8;
      }
      if ((bVar3) && (bVar4)) break;
      FUN_18012ac3c((longlong)param_1,&local_res8);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *param_1);
  }
  puVar1 = (int32_t *)*param_4;
  param_4[1] = lVar5;
  uVar2 = *(int32_t *)(param_1 + 2);
  *puVar1 = *(int32_t *)param_1;
  puVar1[1] = uVar2;
  uVar2 = *(int32_t *)(param_1 + 6);
  puVar1[2] = *(int32_t *)(param_1 + 4);
  puVar1[3] = uVar2;
  puVar1 = (int32_t *)*param_5;
  param_5[1] = lVar7;
  uVar2 = *(int32_t *)(param_1 + 2);
  *puVar1 = *(int32_t *)param_1;
  puVar1[1] = uVar2;
  uVar2 = *(int32_t *)(param_1 + 6);
  puVar1[2] = *(int32_t *)(param_1 + 4);
  puVar1[3] = uVar2;
  return;
}

// ---- Function: FUN_18012adc4 ----
int FUN_18012adc4(longlong *param_1,int param_2,longlong param_3,int param_4,longlong *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uStack_10;
  
  uVar1 = param_5[1];
  if ((*(ulonglong *)(param_3 + 8) < uVar1) || (uVar1 < (ulonglong)param_1[1])) {
    param_2 = -1;
  }
  else if ((longlong)(uVar1 - param_1[1]) < (longlong)(*(longlong *)(param_3 + 8) - uVar1)) {
    lVar2 = *param_1;
    uStack_10 = param_1[1];
    if ((ulonglong)param_1[1] < uVar1) {
      do {
        FUN_18012ac3c(lVar2,(longlong *)&uStack_10);
        param_2 = param_2 + 1;
      } while (uStack_10 < (ulonglong)param_5[1]);
    }
  }
  else {
    lVar2 = *param_5;
    uStack_10 = param_5[1];
    param_2 = param_4;
    if (uVar1 < *(ulonglong *)(param_3 + 8)) {
      do {
        FUN_18012ac3c(lVar2,(longlong *)&uStack_10);
        param_4 = param_4 + -1;
        param_2 = param_4;
      } while (uStack_10 < *(ulonglong *)(param_3 + 8));
    }
  }
  return param_2;
}

