#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_18012d964 ----
int FUN_18012d964(int *param_1)

{
  int iVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong local_48 [2];
  int32_t local_38;
  int32_t *local_30;
  int32_t *puStack_28;
  char local_20;
  int32_t local_1c;
  char local_18;
  int32_t local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1801ee158 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1801eb448;
    puStack_28 = PTR_DAT_1801eb450;
  }
  if (param_1 == (int *)0x0) {
    iVar1 = common_flush_all(false);
    goto LAB_18012d9e9;
  }
  uVar2 = FUN_18012d8d8(param_1,local_48);
  if ((int)uVar2 == 0) {
    if (((uint)param_1[5] >> 0xb & 1) != 0) {
      iVar1 = FUN_18013c524((longlong)param_1);
      iVar1 = _commit(iVar1);
      if (iVar1 != 0) goto LAB_18012d9c4;
    }
    iVar1 = 0;
  }
  else {
LAB_18012d9c4:
    iVar1 = -1;
  }
LAB_18012d9e9:
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar3 = FUN_18012b3a8(local_48);
    *(int32_t *)(lVar3 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar3 = FUN_18012b3a8(local_48);
    *(int32_t *)(lVar3 + 0x24) = local_14;
  }
  return iVar1;
}

// ---- Function: common_flush_all ----
int __cdecl common_flush_all(bool param_1)

{
  int iVar1;
  
  iVar1 = common_flush_all(true);
  return iVar1;
}

// ---- Function: fflush ----
/* Library Function - Single Match
    fflush
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl fflush(FILE *_File)

{
  uint uVar1;
  int iVar2;
  int32_t local_res8 [8];
  FILE *local_res10;
  FILE *local_res18;
  FILE **local_res20;
  FILE *local_18 [3];
  
  local_res10 = _File;
  if (_File == (FILE *)0x0) {
    iVar2 = common_flush_all(false);
  }
  else {
    uVar1 = *(uint *)((longlong)&_File->_base + 4);
    if (((((byte)uVar1 & 3) == 2) && ((uVar1 & 0xc0) != 0)) || ((uVar1 >> 0xb & 1) != 0)) {
      local_res20 = &local_res10;
      local_res18 = _File;
      local_18[0] = _File;
      iVar2 = FUN_18012d838(local_res8,(longlong *)local_18,&local_res20,(longlong *)&local_res18);
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}

// ---- Function: operator____ ----
/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_047e091329b3cc2dd92c1150cfbc4be8>,class <lambda_3126a0d026c48c72336a1719c85146ae> &
   __ptr64,class <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> >(class
   <lambda_047e091329b3cc2dd92c1150cfbc4be8> && __ptr64,class
   <lambda_3126a0d026c48c72336a1719c85146ae> & __ptr64,class
   <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_055ea3fc45cdc376d473b135b391c6de>,class <lambda_c695f53ca71df4e62c0528096d5d0bf6> &
   __ptr64,class <lambda_872dedf902327e54f4e2de7ca48e001f> >(class
   <lambda_055ea3fc45cdc376d473b135b391c6de> && __ptr64,class
   <lambda_c695f53ca71df4e62c0528096d5d0bf6> & __ptr64,class
   <lambda_872dedf902327e54f4e2de7ca48e001f> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583>,class <lambda_f3caf1ecae5fe01a9a1a6239afa44510> &
   __ptr64,class <lambda_c640b76c0755ae85b317b35c67c61e6b> >(class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583> && __ptr64,class
   <lambda_f3caf1ecae5fe01a9a1a6239afa44510> & __ptr64,class
   <lambda_c640b76c0755ae85b317b35c67c61e6b> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6>,class <lambda_a775ed57af18ba8e4d5dc780aa9068fe> &
   __ptr64,class <lambda_975a71a6baa488a08f4e15f6b0339b9e> >(class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6> && __ptr64,class
   <lambda_a775ed57af18ba8e4d5dc780aa9068fe> & __ptr64,class
   <lambda_975a71a6baa488a08f4e15f6b0339b9e> && __ptr64) __ptr64
     36 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong operator()<>(int32_t param_1,longlong *param_2,int32_t *param_3,longlong *param_4)

{
  ulonglong uVar1;
  
  FUN_18012ef14(*param_2);
  uVar1 = FUN_18012dae8(param_3);
  FUN_18012ef20(*param_4);
  return uVar1 & 0xffffffff;
}

// ---- Function: FUN_18012dae8 ----
int32_t FUN_18012dae8(int32_t *param_1)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  longlong *plVar3;
  longlong lVar4;
  int32_t uVar5;
  
  uVar1 = *(ulonglong *)*param_1;
  FUN_18012d8d8(*(int **)param_1[1],(longlong *)param_1[2]);
  __acrt_stdio_free_buffer_nolock(*(int32_t **)param_1[1]);
  LOCK();
  *(uint *)(*(longlong *)param_1[1] + 0x14) = *(uint *)(*(longlong *)param_1[1] + 0x14) & 0xfffff81f
  ;
  UNLOCK();
  if ((*(byte *)param_1[3] & 4) == 0) {
    lVar4 = *(longlong *)param_1[4];
    uVar5 = (int32_t)(uVar1 & 0xfffffffffffffffe);
    if (lVar4 == 0) {
      pvVar2 = _calloc_base(uVar1 & 0xfffffffffffffffe,1);
      FUN_18013bf3c((LPVOID)0x0);
      if (pvVar2 == (LPVOID)0x0) {
        _DAT_1801edd98 = _DAT_1801edd98 + 1;
        return 0xffffffff;
      }
      plVar3 = *(longlong **)param_1[1];
      LOCK();
      *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x140;
      UNLOCK();
      *(int32_t *)(plVar3 + 4) = uVar5;
      *plVar3 = (longlong)pvVar2;
      plVar3[1] = (longlong)pvVar2;
      goto LAB_18012dbb9;
    }
    plVar3 = *(longlong **)param_1[1];
    LOCK();
    *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x180;
    UNLOCK();
    *(int32_t *)(plVar3 + 4) = uVar5;
  }
  else {
    plVar3 = *(longlong **)param_1[1];
    lVar4 = (longlong)plVar3 + 0x1c;
    LOCK();
    *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x400;
    UNLOCK();
    *(int32_t *)(plVar3 + 4) = 2;
  }
  *plVar3 = lVar4;
  plVar3[1] = lVar4;
LAB_18012dbb9:
  *(int32_t *)(plVar3 + 2) = 0;
  return 0;
}

// ---- Function: FUN_18012dbd0 ----
ulonglong FUN_18012dbd0(longlong param_1,int32_t param_2,int param_3,longlong param_4)

{
  int32_t uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int local_res8 [2];
  longlong local_res10;
  int32_t local_res18 [8];
  longlong local_res20;
  longlong local_98 [2];
  int32_t local_88;
  int32_t *local_80;
  int32_t *puStack_78;
  char local_70;
  int32_t local_6c;
  char local_68;
  int32_t local_64;
  char local_60;
  int32_t local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  int *local_28;
  int32_t *local_20;
  
  local_98[0] = 0;
  local_70 = DAT_1801ee158 == 0;
  local_88 = 0;
  local_68 = '\0';
  local_60 = '\0';
  if ((bool)local_70) {
    local_80 = PTR_PTR_1801eb448;
    puStack_78 = PTR_DAT_1801eb450;
  }
  local_res8[0] = param_3;
  local_res10 = param_4;
  local_res20 = param_1;
  local_58 = param_2;
  if ((param_1 == 0) ||
     ((param_3 != 4 && (((param_3 != 0 && (param_3 != 0x40)) || (0x7ffffffd < param_4 - 2U)))))) {
    local_68 = '\x01';
    local_6c = 0x16;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,local_98);
    uVar2 = 0xffffffff;
  }
  else {
    local_40 = &local_res10;
    local_38 = &local_res20;
    local_30 = local_98;
    local_28 = local_res8;
    local_20 = &local_58;
    local_50 = param_1;
    local_48 = param_1;
    uVar2 = operator()<>(local_res18,&local_48,&local_40,&local_50);
    uVar2 = uVar2 & 0xffffffff;
  }
  uVar1 = local_6c;
  if (local_70 == '\x02') {
    *(uint *)(local_98[0] + 0x3a8) = *(uint *)(local_98[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_68 != '\0') {
    lVar3 = FUN_18012b3a8(local_98);
    *(int32_t *)(lVar3 + 0x20) = uVar1;
  }
  if (local_60 != '\0') {
    lVar3 = FUN_18012b3a8(local_98);
    *(int32_t *)(lVar3 + 0x24) = local_64;
  }
  return uVar2;
}

// ---- Function: fsetpos ----
/* Library Function - Single Match
    fsetpos
   
   Library: Visual Studio */

int __cdecl fsetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  ulong *puVar2;
  
  if ((_File != (FILE *)0x0) && (_Pos != (fpos_t *)0x0)) {
    iVar1 = FUN_18012dfb0((longlong *)_File,(LARGE_INTEGER)*_Pos,0);
    return iVar1;
  }
  puVar2 = __doserrno();
  *puVar2 = 0x16;
  FUN_18012b794();
  return -1;
}

// ---- Function: FUN_18012dd40 ----
int FUN_18012dd40(longlong *param_1,LARGE_INTEGER param_2,uint param_3,longlong *param_4)

{
  int iVar1;
  
  if ((param_1 == (longlong *)0x0) || (2 < param_3)) {
    *(int32_t *)(param_4 + 6) = 1;
    *(int32_t *)((longlong)param_4 + 0x2c) = 0x16;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    iVar1 = -1;
  }
  else {
    FUN_18012ef14((longlong)param_1);
    iVar1 = FUN_18012dec4(param_1,param_2,param_3,param_4);
    FUN_18012ef20((longlong)param_1);
  }
  return iVar1;
}

// ---- Function: FUN_18012dddc ----
ulonglong FUN_18012dddc(longlong *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if ((((param_3 != 2) &&
       (in_RAX = (ulonglong)*(uint *)((longlong)param_1 + 0x14),
       (*(uint *)((longlong)param_1 + 0x14) & 0x4c0) != 0)) &&
      (in_RAX = (ulonglong)*(uint *)((longlong)param_1 + 0x14),
      (*(uint *)((longlong)param_1 + 0x14) & 6) == 0)) && (0 < (int)param_1[2])) {
    uVar1 = *(uint *)(param_1 + 3);
    in_RAX = (longlong)(int)uVar1 >> 6;
    if ((-1 < *(char *)((&DAT_1801ee410)[in_RAX] + 0x38 + (ulonglong)(uVar1 & 0x3f) * 0x48)) &&
       (*(char *)((&DAT_1801ee410)[in_RAX] + 0x39 + (ulonglong)(uVar1 & 0x3f) * 0x48) == '\0')) {
      lVar3 = param_2;
      if (param_3 == 0) {
        in_RAX = FUN_18013d4c8(uVar1,(LARGE_INTEGER)0x0,1);
        if ((longlong)in_RAX < 0) goto LAB_18012deb6;
        lVar2 = in_RAX - (longlong)(int)param_1[2];
        lVar3 = param_2 - lVar2;
        iVar4 = -(int)(param_2 >> 0x3f);
        in_RAX = (longlong)(int)param_1[2];
        if ((iVar4 != -(int)(lVar2 >> 0x3f)) && (in_RAX = 0, iVar4 != -(int)(lVar3 >> 0x3f)))
        goto LAB_18012deb6;
      }
      if ((param_1[1] - *param_1 <= lVar3) && (lVar3 <= (int)param_1[2])) {
        *param_1 = *param_1 + lVar3;
        *(int *)(param_1 + 2) = (int)param_1[2] - (int)lVar3;
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
LAB_18012deb6:
  return in_RAX & 0xffffffffffffff00;
}

// ---- Function: FUN_18012dec4 ----
int FUN_18012dec4(longlong *param_1,LARGE_INTEGER param_2,DWORD param_3,longlong *param_4)

{
  int iVar1;
  ulonglong uVar2;
  LARGE_INTEGER LVar3;
  longlong lVar4;
  
  if ((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) == 0) {
    *(int32_t *)(param_4 + 6) = 1;
    iVar1 = -1;
    *(int32_t *)((longlong)param_4 + 0x2c) = 0x16;
  }
  else {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffff7;
    UNLOCK();
    uVar2 = FUN_18012dddc(param_1,param_2.QuadPart,param_3);
    if ((char)uVar2 == '\0') {
      if (param_3 == 1) {
        LVar3 = thunk_FUN_18013d5d8(param_1,param_4);
        param_2.QuadPart = param_2.QuadPart + LVar3.QuadPart;
        param_3 = 0;
      }
      FUN_18012d8d8((int *)param_1,param_4);
      *param_1 = param_1[1];
      *(int32_t *)(param_1 + 2) = 0;
      if ((*(uint *)((longlong)param_1 + 0x14) >> 2 & 1) == 0) {
        if ((((byte)*(int32_t *)((longlong)param_1 + 0x14) & 0x41) == 0x41) &&
           ((*(uint *)((longlong)param_1 + 0x14) >> 8 & 1) == 0)) {
          *(int32_t *)(param_1 + 4) = 0x200;
        }
      }
      else {
        LOCK();
        *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffffc;
        UNLOCK();
      }
      lVar4 = thunk_FUN_18013d378(*(uint *)(param_1 + 3),param_2,param_3,(longlong)param_4);
      iVar1 = (lVar4 != -1) - 1;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}

// ---- Function: FUN_18012dfb0 ----
int FUN_18012dfb0(longlong *param_1,LARGE_INTEGER param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong local_48 [2];
  int32_t local_38;
  int32_t *local_30;
  int32_t *puStack_28;
  char local_20;
  int32_t local_1c;
  char local_18;
  int32_t local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1801ee158 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1801eb448;
    puStack_28 = PTR_DAT_1801eb450;
  }
  iVar1 = FUN_18012dd40(param_1,param_2,param_3,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18012b3a8(local_48);
    *(int32_t *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18012b3a8(local_48);
    *(int32_t *)(lVar2 + 0x24) = local_14;
  }
  return iVar1;
}

// ---- Function: FUN_18012e048 ----
int FUN_18012e048(longlong *param_1,int param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong local_48 [2];
  int32_t local_38;
  int32_t *local_30;
  int32_t *puStack_28;
  char local_20;
  int32_t local_1c;
  char local_18;
  int32_t local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1801ee158 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1801eb448;
    puStack_28 = PTR_DAT_1801eb450;
  }
  iVar1 = FUN_18012dd40(param_1,(LARGE_INTEGER)(longlong)param_2,param_3,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18012b3a8(local_48);
    *(int32_t *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18012b3a8(local_48);
    *(int32_t *)(lVar2 + 0x24) = local_14;
  }
  return iVar1;
}

// ---- Function: fgetpos ----
/* Library Function - Single Match
    fgetpos
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl fgetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  ulong *puVar2;
  LARGE_INTEGER LVar3;
  
  if ((_File == (FILE *)0x0) || (_Pos == (fpos_t *)0x0)) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_18012b794();
    iVar1 = -1;
  }
  else {
    LVar3 = FUN_18013da60((longlong *)_File);
    *_Pos = (fpos_t)LVar3;
    iVar1 = (LVar3.QuadPart != -1) - 1;
  }
  return iVar1;
}

// ---- Function: operator____ ----
/* Library Function - Multiple Matches With Same Base Name
    public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
   <lambda_2831f20263db5b546e098b45503eb778>,class <lambda_5856287d7ecd2be6c9197bb4007c3f6e> &
   __ptr64,class <lambda_0838d7e100fbcbd261b69cfea6abb102> >(class
   <lambda_2831f20263db5b546e098b45503eb778> && __ptr64,class
   <lambda_5856287d7ecd2be6c9197bb4007c3f6e> & __ptr64,class
   <lambda_0838d7e100fbcbd261b69cfea6abb102> && __ptr64) __ptr64
    public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
   <lambda_5d4c3fee44080f75d5d9762853974fe0>,class <lambda_532e024f4337e6fc7ad266c2bef9f4ed> &
   __ptr64,class <lambda_c87bdc10097eb2402edb8ba9bdf0697b> >(class
   <lambda_5d4c3fee44080f75d5d9762853974fe0> && __ptr64,class
   <lambda_532e024f4337e6fc7ad266c2bef9f4ed> & __ptr64,class
   <lambda_c87bdc10097eb2402edb8ba9bdf0697b> && __ptr64) __ptr64
    public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
   <lambda_bdbcead8b570fa3d5ec6d9679862a6e5>,class <lambda_96f4279ff90247a4c5c5d9824f56f8c1> &
   __ptr64,class <lambda_4606be27f17b5e5579e09050fab91818> >(class
   <lambda_bdbcead8b570fa3d5ec6d9679862a6e5> && __ptr64,class
   <lambda_96f4279ff90247a4c5c5d9824f56f8c1> & __ptr64,class
   <lambda_4606be27f17b5e5579e09050fab91818> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong operator()<>(int32_t param_1,longlong *param_2,int32_t *param_3,longlong *param_4)

{
  ulonglong uVar1;
  
  FUN_18012ef14(*param_2);
  uVar1 = FUN_18012e170(param_3);
  FUN_18012ef20(*param_4);
  return uVar1;
}

// ---- Function: FUN_18012e170 ----
ulonglong FUN_18012e170(int32_t *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int32_t uVar3;
  ulonglong uVar4;
  
  plVar1 = (longlong *)param_1[1];
  plVar2 = *(longlong **)*param_1;
  uVar3 = FUN_18013e004(plVar2);
  uVar4 = FUN_18012e28c(*(wchar_t **)param_1[2],*(ulonglong *)param_1[3],*(ulonglong *)param_1[4],
                        *(longlong **)*param_1,(longlong *)param_1[1]);
  FUN_18013e0cc((char)uVar3,(int *)plVar2,plVar1);
  return uVar4;
}

// ---- Function: FUN_18012e1f0 ----
ulonglong FUN_18012e1f0(int32_t param_1,longlong param_2,longlong param_3,longlong param_4,
                       longlong *param_5)

{
  ulonglong uVar1;
  int32_t local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  int32_t local_48 [8];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  int32_t *local_20;
  longlong *local_18;
  longlong *local_10;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    local_res8 = param_1;
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    if (param_4 != 0) {
      local_30 = &local_res20;
      local_28 = param_5;
      local_20 = &local_res8;
      local_18 = &local_res10;
      local_10 = &local_res18;
      local_40 = param_4;
      local_38 = param_4;
      uVar1 = operator()<>(local_48,&local_38,&local_30,&local_40);
      return uVar1;
    }
    *(int32_t *)(param_5 + 6) = 1;
    *(int32_t *)((longlong)param_5 + 0x2c) = 0x16;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_5);
  }
  return 0;
}

// ---- Function: FUN_18012e28c ----
ulonglong FUN_18012e28c(wchar_t *param_1,ulonglong param_2,ulonglong param_3,longlong *param_4,
                       longlong *param_5)

{
  int32_t auVar1 [16];
  uint uVar2;
  int32_t uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((param_4 != (longlong *)0x0) &&
       ((param_1 != (wchar_t *)0x0 &&
        (auVar1._8_8_ = 0, auVar1._0_8_ = param_2,
        param_3 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0))))) {
      if ((*(uint *)((longlong)param_4 + 0x14) & 0x4c0) == 0) {
        uVar8 = 0x1000;
      }
      else {
        uVar8 = *(uint *)(param_4 + 4);
      }
      uVar6 = param_2 * param_3;
      do {
        if (uVar6 == 0) {
          return param_3;
        }
        if (((*(uint *)((longlong)param_4 + 0x14) & 0xc0) == 0) || ((int)param_4[2] == 0)) {
          if (uVar8 <= uVar6) {
            if (((*(uint *)((longlong)param_4 + 0x14) & 0xc0) != 0) &&
               (uVar3 = FUN_18012d8d8((int *)param_4,param_5), (int)uVar3 != 0)) goto LAB_18012e443;
            uVar4 = uVar6;
            if (uVar8 != 0) {
              uVar4 = uVar6 - uVar6 % (ulonglong)uVar8;
            }
            uVar7 = 0xfffffffe;
            if (uVar4 < 0xfffffffe) {
              uVar7 = (uint)uVar4;
            }
            uVar2 = FUN_18013c524((longlong)param_4);
            uVar2 = FUN_18013cdec(uVar2,param_1,uVar7,param_5);
            if (uVar2 != 0xffffffff) {
              uVar5 = uVar2;
              if (uVar7 < uVar2) {
                uVar5 = uVar7;
              }
              uVar4 = (ulonglong)uVar5;
              uVar6 = uVar6 - uVar4;
              if (uVar7 <= uVar2) goto LAB_18012e48a;
            }
LAB_18012e43e:
            LOCK();
            *(uint *)((longlong)param_4 + 0x14) = *(uint *)((longlong)param_4 + 0x14) | 0x10;
            UNLOCK();
LAB_18012e443:
            return (param_2 * param_3 - uVar6) / param_2;
          }
          uVar4 = FUN_18013deec((byte)*param_1,param_4,param_5);
          if ((int)uVar4 == -1) goto LAB_18012e443;
          uVar8 = *(uint *)(param_4 + 4);
          uVar6 = uVar6 - 1;
          if ((int)uVar8 < 1) {
            uVar8 = 1;
            uVar4 = 1;
          }
          else {
            uVar4 = 1;
          }
        }
        else {
          if ((int)param_4[2] < 0) goto LAB_18012e43e;
          if ((*(uint *)((longlong)param_4 + 0x14) & 1) != 0) goto LAB_18012e443;
          uVar4 = uVar6;
          if ((ulonglong)(longlong)(int)param_4[2] <= uVar6) {
            uVar4 = (longlong)(int)param_4[2];
          }
          FUN_180150fd0((int32_t *)*param_4,(int32_t *)param_1,uVar4);
          *(int *)(param_4 + 2) = (int)param_4[2] - (int)uVar4;
          uVar6 = uVar6 - uVar4;
          *param_4 = *param_4 + uVar4;
        }
LAB_18012e48a:
        param_1 = (wchar_t *)((longlong)param_1 + uVar4);
      } while( true );
    }
    *(int32_t *)(param_5 + 6) = 1;
    *(int32_t *)((longlong)param_5 + 0x2c) = 0x16;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_5);
  }
  return 0;
}

