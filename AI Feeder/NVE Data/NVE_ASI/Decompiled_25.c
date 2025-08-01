#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800cf210 ----
void FUN_1800cf210(longlong param_1,byte param_2)

{
  FUN_180124db4((uint)param_2,(UINT *)(param_1 + 0x10));
  return;
}

// ---- Function: FUN_1800cf220 ----
longlong FUN_1800cf220(int32_t param_1,int32_t *param_2,longlong param_3,int32_t *param_4)

{
  FUN_180150fd0(param_4,param_2,param_3 - (longlong)param_2);
  return param_3;
}

// ---- Function: FUN_1800cf240 ----
int32_t FUN_1800cf240(int32_t param_1,int32_t param_2)

{
  return param_2;
}

// ---- Function: FUN_1800cf250 ----
longlong FUN_1800cf250(int32_t param_1,int32_t *param_2,longlong param_3,int32_t param_4,
                      int32_t *param_5)

{
  FUN_180150fd0(param_5,param_2,param_3 - (longlong)param_2);
  return param_3;
}

// ---- Function: FUN_1800cf270 ----
int32_t FUN_1800cf270(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  int32_t *puVar3;
  UINT *pUVar4;
  int32_t uVar5;
  char *pcVar6;
  _Lockit local_a8 [8];
  LPVOID local_a0;
  int32_t local_98;
  LPVOID local_90;
  int32_t local_88;
  LPVOID local_80;
  int32_t local_78;
  LPVOID local_70;
  int32_t local_68;
  LPVOID local_60;
  int32_t local_58;
  LPVOID local_50;
  int32_t local_48;
  UINT local_40 [10];
  
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    puVar3 = (int32_t *)operator_new(0x30);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 == 0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = *(char **)(lVar1 + 0x28);
      if (pcVar6 == (char *)0x0) {
        pcVar6 = (char *)(lVar1 + 0x30);
      }
    }
    std::_Lockit::_Lockit(local_a8,0);
    local_a0 = (LPVOID)0x0;
    local_98 = 0;
    local_90 = (LPVOID)0x0;
    local_88 = 0;
    local_80 = (LPVOID)0x0;
    local_78 = 0;
    local_70 = (LPVOID)0x0;
    local_68 = 0;
    local_60 = (LPVOID)0x0;
    local_58 = 0;
    local_50 = (LPVOID)0x0;
    local_48 = 0;
    if (pcVar6 == (char *)0x0) {
      FUN_180123380(0x1801874f0);
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    std::_Locinfo::_Locinfo_ctor((_Locinfo *)local_a8,pcVar6);
    *(int32_t *)(puVar3 + 1) = 0;
    *puVar3 = std::ctype<char>::vftable;
    pUVar4 = FUN_180124bbc(local_40);
    uVar5 = *(int32_t *)(pUVar4 + 2);
    puVar3[2] = *(int32_t *)pUVar4;
    puVar3[3] = uVar5;
    uVar5 = *(int32_t *)(pUVar4 + 6);
    puVar3[4] = *(int32_t *)(pUVar4 + 4);
    puVar3[5] = uVar5;
    *param_1 = (longlong)puVar3;
    std::_Locinfo::_Locinfo_dtor((_Locinfo *)local_a8);
    if (local_50 != (LPVOID)0x0) {
      FUN_18012d5e8(local_50);
    }
    local_50 = (LPVOID)0x0;
    if (local_60 != (LPVOID)0x0) {
      FUN_18012d5e8(local_60);
    }
    local_60 = (LPVOID)0x0;
    if (local_70 != (LPVOID)0x0) {
      FUN_18012d5e8(local_70);
    }
    local_70 = (LPVOID)0x0;
    if (local_80 != (LPVOID)0x0) {
      FUN_18012d5e8(local_80);
    }
    local_80 = (LPVOID)0x0;
    if (local_90 != (LPVOID)0x0) {
      FUN_18012d5e8(local_90);
    }
    local_90 = (LPVOID)0x0;
    if (local_a0 != (LPVOID)0x0) {
      FUN_18012d5e8(local_a0);
    }
    local_a0 = (LPVOID)0x0;
    std::_Lockit::~_Lockit(local_a8);
  }
  return 2;
}

// ---- Function: FUN_1800cf400 ----
longlong * FUN_1800cf400(longlong param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_res8;
  _Lockit local_res10 [8];
  longlong *local_res18 [2];
  
  std::_Lockit::_Lockit(local_res10,0);
  plVar5 = DAT_1801f3b08;
  local_res18[0] = DAT_1801f3b08;
  if (DAT_1801ed240 == 0) {
    std::_Lockit::_Lockit((_Lockit *)&local_res8,0);
    if (DAT_1801ed240 == 0) {
      DAT_1801ed228 = DAT_1801ed228 + 1;
      DAT_1801ed240 = (ulonglong)DAT_1801ed228;
    }
    std::_Lockit::~_Lockit((_Lockit *)&local_res8);
  }
  uVar2 = DAT_1801ed240;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = DAT_1801ed240 * 8;
  if (DAT_1801ed240 < *(ulonglong *)(lVar3 + 0x18)) {
    plVar6 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x10));
    if (plVar6 != (longlong *)0x0) goto LAB_1800cf4f3;
  }
  else {
    plVar6 = (longlong *)0x0;
  }
  if (*(char *)(lVar3 + 0x24) == '\0') {
LAB_1800cf4ac:
    if (plVar6 != (longlong *)0x0) goto LAB_1800cf4f3;
  }
  else {
    lVar3 = FUN_180124540();
    if (uVar2 < *(ulonglong *)(lVar3 + 0x18)) {
      plVar6 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x10));
      goto LAB_1800cf4ac;
    }
  }
  plVar6 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    lVar4 = FUN_1800cf270((longlong *)local_res18,param_1);
    plVar6 = local_res18[0];
    if (lVar4 == -1) {
      FUN_1800b5f90();
      pcVar1 = (code *)swi(3);
      plVar5 = (longlong *)(*pcVar1)();
      return plVar5;
    }
    local_res8 = local_res18[0];
    FUN_180124504(local_res18[0]);
    (**(code **)(*plVar6 + 8))(plVar6);
    DAT_1801f3b08 = plVar6;
  }
LAB_1800cf4f3:
  std::_Lockit::~_Lockit(local_res10);
  return plVar6;
}

// ---- Function: FUN_1800cf520 ----
void FUN_1800cf520(int32_t ***param_1,int32_t *param_2,int32_t *param_3)

{
  code *pcVar1;
  int32_t ***pppuVar2;
  int32_t uVar3;
  LPVOID pvVar4;
  ulonglong uVar5;
  int32_t auStack_78 [32];
  int32_t ***local_58;
  int32_t uStack_50;
  LPVOID local_48;
  int32_t uStack_40;
  int32_t local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1801eb080 ^ (ulonglong)auStack_78;
  pppuVar2 = (int32_t ***)*param_3;
  uVar3 = param_3[1];
  local_48 = (LPVOID)0x0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uVar5 = 0xffffffffffffffff;
  do {
    uVar5 = uVar5 + 1;
  } while (*(char *)((longlong)param_2 + uVar5) != '\0');
  local_58 = param_1;
  FUN_1800ba360(&local_48,param_2,uVar5);
  local_58 = pppuVar2;
  uStack_50 = uVar3;
  FUN_1800b8dc0(param_1,(ulonglong *)&local_58,&local_48);
  if (0xf < uStack_30) {
    pvVar4 = local_48;
    if ((0xfff < uStack_30 + 1) &&
       (pvVar4 = *(LPVOID *)((longlong)local_48 + -8),
       0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)pvVar4)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar4);
  }
  *param_1 = (int32_t **)std::ios_base::failure::vftable;
  FUN_1801252c0(local_28 ^ (ulonglong)auStack_78);
  return;
}

// ---- Function: FUN_1800cf600 ----
char * FUN_1800cf600(void)

{
  return "iostream";
}

// ---- Function: FUN_1800cf610 ----
int32_t * FUN_1800cf610(int32_t param_1,int32_t *param_2,int param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  
  if (param_3 == 1) {
    uVar2 = 0x15;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    pcVar1 = "iostream stream error";
  }
  else {
    pcVar1 = FUN_180123c58(param_3);
    uVar2 = 0xffffffffffffffff;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    do {
      uVar2 = uVar2 + 1;
    } while (pcVar1[uVar2] != '\0');
  }
  FUN_1800ba360(param_2,(int32_t *)pcVar1,uVar2);
  return param_2;
}

// ---- Function: FUN_1800cf690 ----
int32_t * FUN_1800cf690(int32_t *param_1,int32_t param_2)

{
  *param_1 = param_2;
  *(int32_t ***)(param_1 + 2) = &PTR_vftable_1801ec188;
  return param_1;
}

// ---- Function: FUN_1800cf6b0 ----
int32_t * FUN_1800cf6b0(int32_t *param_1,longlong param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(int32_t *)(param_2 + 0x18);
  uVar2 = *(int32_t *)(param_2 + 0x20);
  *param_1 = std::ios_base::failure::vftable;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}

// ---- Function: FUN_1800cf710 ----
int32_t * FUN_1800cf710(int32_t *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  int32_t *puVar2;
  
  pvVar1 = (LPVOID)param_1[0xc];
  *param_1 = &PTR_FUN_1801cc3c0;
  if (pvVar1 != (LPVOID)0x0) {
    if (*(longlong **)((longlong)pvVar1 + 8) != (longlong *)0x0) {
      puVar2 = (int32_t *)(**(code **)(**(longlong **)((longlong)pvVar1 + 8) + 0x10))();
      if (puVar2 != (int32_t *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    thunk_FUN_18012d5e8(pvVar1);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_18012d5e8(param_1);
  }
  return param_1;
}

// ---- Function: FUN_1800cf7d0 ----
int32_t FUN_1800cf7d0(int32_t param_1)

{
  return param_1;
}

// ---- Function: FUN_1800cf7e0 ----
ulonglong FUN_1800cf7e0(longlong *param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x30))();
  if ((int)uVar2 == -1) {
    return uVar2;
  }
  *(int *)param_1[10] = *(int *)param_1[10] + -1;
  pbVar1 = *(byte **)param_1[7];
  *(byte **)param_1[7] = pbVar1 + 1;
  return (ulonglong)*pbVar1;
}

// ---- Function: FUN_1800cf820 ----
longlong FUN_1800cf820(longlong *param_1,int32_t *param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = param_3;
  if (0 < (longlong)param_3) {
    do {
      if ((*(int32_t **)param_1[7] == (int32_t *)0x0) ||
         (iVar3 = *(int *)param_1[10], iVar3 < 1)) {
        iVar3 = (**(code **)(*param_1 + 0x38))(param_1);
        if (iVar3 == -1) break;
        *(char *)param_2 = (char)iVar3;
        lVar2 = -1;
        uVar5 = 1;
      }
      else {
        uVar5 = uVar4;
        if ((longlong)iVar3 <= (longlong)uVar4) {
          uVar5 = (longlong)iVar3;
        }
        FUN_180150fd0(param_2,*(int32_t **)param_1[7],uVar5);
        piVar1 = (int *)param_1[10];
        lVar2 = -uVar5;
        *piVar1 = *piVar1 - (int)uVar5;
        *(longlong *)param_1[7] = *(longlong *)param_1[7] + (longlong)(int)uVar5;
      }
      uVar4 = uVar4 + lVar2;
      param_2 = (int32_t *)((longlong)param_2 + uVar5);
    } while (0 < (longlong)uVar4);
  }
  return param_3 - uVar4;
}

// ---- Function: FUN_1800cf8e0 ----
longlong FUN_1800cf8e0(longlong *param_1,int32_t *param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = param_3;
  if (0 < (longlong)param_3) {
    do {
      if ((*(int32_t **)param_1[8] == (int32_t *)0x0) ||
         (iVar3 = *(int *)param_1[0xb], iVar3 < 1)) {
        iVar3 = (**(code **)(*param_1 + 0x18))(param_1,*(int32_t *)param_2);
        if (iVar3 == -1) break;
        lVar2 = -1;
        uVar5 = 1;
      }
      else {
        uVar5 = uVar4;
        if ((longlong)iVar3 <= (longlong)uVar4) {
          uVar5 = (longlong)iVar3;
        }
        FUN_180150fd0(*(int32_t **)param_1[8],param_2,uVar5);
        piVar1 = (int *)param_1[0xb];
        lVar2 = -uVar5;
        *piVar1 = *piVar1 - (int)uVar5;
        *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)uVar5;
      }
      uVar4 = uVar4 + lVar2;
      param_2 = (int32_t *)((longlong)param_2 + uVar5);
    } while (0 < (longlong)uVar4);
  }
  return param_3 - uVar4;
}

// ---- Function: FID_conflict__scalar_deleting_destructor_ ----
/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __ptr64 __cdecl std::basic_istream<char,struct std::char_traits<char>
   >::`scalar deleting destructor'(unsigned int) __ptr64
    public: virtual void * __ptr64 __cdecl std::basic_istream<unsigned short,struct
   std::char_traits<unsigned short> >::`scalar deleting destructor'(unsigned int) __ptr64
    public: virtual void * __ptr64 __cdecl std::basic_istream<wchar_t,struct
   std::char_traits<wchar_t> >::`scalar deleting destructor'(unsigned int) __ptr64
   
   Library: Visual Studio 2019 Release */

ios_base * FID_conflict__scalar_deleting_destructor_(ios_base *param_1,uint param_2)

{
  ios_base *piVar1;
  
  piVar1 = param_1 + -0x18;
  *(int32_t ***)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0x18) =
       &PTR_LAB_1801cc4b0;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0x1c) =
       *(int *)(*(longlong *)piVar1 + 4) + -0x18;
  *(int32_t ***)param_1 = &PTR_LAB_1801cc4d0;
  std::ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_18012d5e8(piVar1);
  }
  return piVar1;
}

