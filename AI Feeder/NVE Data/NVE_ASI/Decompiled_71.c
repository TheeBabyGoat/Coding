#include <stdint.h>
#include <stddef.h>

// ---- Function: __dcrt_get_or_create_narrow_environment_nolock ----
/* Library Function - Single Match
    __dcrt_get_or_create_narrow_environment_nolock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong __dcrt_get_or_create_narrow_environment_nolock(void)

{
  int32_t uVar1;
  longlong lVar2;
  
  lVar2 = DAT_1801ee108;
  if ((DAT_1801ee108 == 0) &&
     ((DAT_1801ee110 == 0 ||
      ((uVar1 = FUN_180137620(), lVar2 = DAT_1801ee108, (int)uVar1 != 0 &&
       (uVar1 = FUN_180137974(), lVar2 = DAT_1801ee108, (int)uVar1 != 0)))))) {
    lVar2 = 0;
  }
  return lVar2;
}

// ---- Function: __dcrt_get_or_create_wide_environment_nolock ----
/* Library Function - Single Match
    __dcrt_get_or_create_wide_environment_nolock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong __dcrt_get_or_create_wide_environment_nolock(void)

{
  int32_t uVar1;
  longlong lVar2;
  
  lVar2 = DAT_1801ee110;
  if ((DAT_1801ee110 == 0) &&
     ((DAT_1801ee108 == 0 ||
      ((uVar1 = FUN_180137694(), lVar2 = DAT_1801ee110, (int)uVar1 != 0 &&
       (uVar1 = FUN_180137a54(), lVar2 = DAT_1801ee110, (int)uVar1 != 0)))))) {
    lVar2 = 0;
  }
  return lVar2;
}

// ---- Function: FUN_180137bc0 ----
void FUN_180137bc0(void)

{
  uninitialize_environment_internal<>(&DAT_1801ee108);
  uninitialize_environment_internal<>(&DAT_1801ee110);
  free_environment<>(DAT_1801ee120);
  free_environment<>(DAT_1801ee118);
  return;
}

// ---- Function: thunk_FUN_180137620 ----
int32_t thunk_FUN_180137620(void)

{
  int32_t *puVar1;
  LPSTR pCVar2;
  int32_t uVar3;
  int32_t *puVar4;
  
  uVar3 = 0;
  if (DAT_1801ee108 == (int32_t *)0x0) {
    __acrt_initialize_multibyte();
    pCVar2 = FUN_180143ea4();
    if (pCVar2 == (LPSTR)0x0) {
      FUN_18013bf3c((LPVOID)0x0);
      uVar3 = 0xffffffff;
    }
    else {
      puVar4 = FUN_180137704(pCVar2);
      puVar1 = puVar4;
      if (puVar4 == (int32_t *)0x0) {
        uVar3 = 0xffffffff;
        puVar4 = DAT_1801ee108;
        puVar1 = DAT_1801ee120;
      }
      DAT_1801ee120 = puVar1;
      DAT_1801ee108 = puVar4;
      FUN_18013bf3c((LPVOID)0x0);
      FUN_18013bf3c(pCVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// ---- Function: operator____ ----
/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &
   __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(class
   <lambda_638799b9deba96c50f710eeac98168cd> && __ptr64,class
   <lambda_22ebabd17bc4fa466a2aca6d8deb888d> & __ptr64,class
   <lambda_a6f7d7db0129f75315ebf26d50c089f1> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
   __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
   <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
   <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong operator()<>(int32_t param_1,int *param_2,int32_t *param_3,int *param_4)

{
  ulonglong uVar1;
  
  __acrt_lock(*param_2);
  uVar1 = FUN_180137c84(param_3);
  __acrt_unlock(*param_4);
  return uVar1 & 0xffffffff;
}

// ---- Function: operator____ ----
/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &
   __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(class
   <lambda_638799b9deba96c50f710eeac98168cd> && __ptr64,class
   <lambda_22ebabd17bc4fa466a2aca6d8deb888d> & __ptr64,class
   <lambda_a6f7d7db0129f75315ebf26d50c089f1> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_7777bce6b2f8c936911f934f8298dc43>,class <lambda_f03950bc5685219e0bcd2087efbe011e> &
   __ptr64,class <lambda_3883c3dff614d5e0c5f61bb1ac94921c> >(class
   <lambda_7777bce6b2f8c936911f934f8298dc43> && __ptr64,class
   <lambda_f03950bc5685219e0bcd2087efbe011e> & __ptr64,class
   <lambda_3883c3dff614d5e0c5f61bb1ac94921c> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_8b90c8310d35b3462fe809c44bbb350d>,class <lambda_c1ccdfe150d00dafd355d15f2a9edeaa> &
   __ptr64,class <lambda_e797892004ba4c0bb152531b9d8c3715> >(class
   <lambda_8b90c8310d35b3462fe809c44bbb350d> && __ptr64,class
   <lambda_c1ccdfe150d00dafd355d15f2a9edeaa> & __ptr64,class
   <lambda_e797892004ba4c0bb152531b9d8c3715> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
   __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
   <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
   <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
     5 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong operator()<>(int32_t param_1,int *param_2,int32_t *param_3,int *param_4)

{
  ulonglong uVar1;
  
  __acrt_lock(*param_2);
  uVar1 = FUN_180137e34(param_3);
  __acrt_unlock(*param_4);
  return uVar1 & 0xffffffff;
}

// ---- Function: FUN_180137c84 ----
int32_t FUN_180137c84(int32_t *param_1)

{
  LPVOID pvVar1;
  int32_t uVar2;
  byte bVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  LPVOID pvVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  
  puVar4 = *(ulonglong **)*param_1;
  if (puVar4 == (ulonglong *)0x0) {
LAB_180137e18:
    uVar2 = 0xffffffff;
  }
  else {
    bVar3 = (byte)DAT_1801eb080 & 0x3f;
    pvVar6 = (LPVOID)((DAT_1801eb080 ^ *puVar4) >> bVar3 | (DAT_1801eb080 ^ *puVar4) << 0x40 - bVar3
                     );
    puVar10 = (ulonglong *)
              ((DAT_1801eb080 ^ puVar4[1]) >> bVar3 | (DAT_1801eb080 ^ puVar4[1]) << 0x40 - bVar3);
    puVar4 = (ulonglong *)
             ((DAT_1801eb080 ^ puVar4[2]) >> bVar3 | (DAT_1801eb080 ^ puVar4[2]) << 0x40 - bVar3);
    if (puVar10 == puVar4) {
      uVar5 = (longlong)puVar4 - (longlong)pvVar6 >> 3;
      uVar7 = uVar5;
      if (0x200 < uVar5) {
        uVar7 = 0x200;
      }
      uVar8 = uVar7 + uVar5;
      if (uVar7 + uVar5 == 0) {
        uVar8 = 0x20;
      }
      if (uVar8 < uVar5) {
LAB_180137d26:
        uVar8 = uVar5 + 4;
        pvVar1 = _recalloc_base(pvVar6,uVar8,8);
        FUN_18013bf3c((LPVOID)0x0);
        if (pvVar1 == (LPVOID)0x0) goto LAB_180137e18;
      }
      else {
        pvVar1 = _recalloc_base(pvVar6,uVar8,8);
        FUN_18013bf3c((LPVOID)0x0);
        if (pvVar1 == (LPVOID)0x0) goto LAB_180137d26;
      }
      pvVar6 = pvVar1;
      uVar7 = DAT_1801eb080;
      puVar10 = (ulonglong *)((longlong)pvVar6 + uVar5 * 8);
      puVar4 = (ulonglong *)((longlong)pvVar6 + uVar8 * 8);
      uVar5 = (ulonglong)((longlong)puVar4 + (7 - (longlong)puVar10)) >> 3;
      if (puVar4 < puVar10) {
        uVar5 = 0;
      }
      puVar9 = puVar10;
      if (uVar5 != 0) {
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = uVar7;
          puVar9 = puVar9 + 1;
        }
      }
    }
    bVar3 = -((byte)DAT_1801eb080 & 0x3f) & 0x3f;
    *puVar10 = (*(ulonglong *)param_1[1] >> bVar3 | *(ulonglong *)param_1[1] << 0x40 - bVar3) ^
               DAT_1801eb080;
    bVar3 = -((byte)DAT_1801eb080 & 0x3f) & 0x3f;
    **(ulonglong **)*param_1 =
         ((ulonglong)pvVar6 >> bVar3 | (longlong)pvVar6 << 0x40 - bVar3) ^ DAT_1801eb080;
    bVar3 = -((byte)DAT_1801eb080 & 0x3f) & 0x3f;
    *(ulonglong *)(*(longlong *)*param_1 + 8) =
         ((ulonglong)(puVar10 + 1) >> bVar3 | (longlong)(puVar10 + 1) << 0x40 - bVar3) ^
         DAT_1801eb080;
    bVar3 = 0x40 - ((byte)DAT_1801eb080 & 0x3f) & 0x3f;
    uVar2 = 0;
    *(ulonglong *)(*(longlong *)*param_1 + 0x10) =
         ((ulonglong)puVar4 >> bVar3 | (longlong)puVar4 << 0x40 - bVar3) ^ DAT_1801eb080;
  }
  return uVar2;
}

// ---- Function: FUN_180137e34 ----
int32_t FUN_180137e34(int32_t *param_1)

{
  ulonglong uVar1;
  int32_t uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  byte bVar5;
  sbyte sVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  
  uVar1 = DAT_1801eb080;
  puVar8 = *(ulonglong **)*param_1;
  if (puVar8 == (ulonglong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    bVar5 = (byte)DAT_1801eb080 & 0x3f;
    puVar10 = (ulonglong *)
              ((DAT_1801eb080 ^ *puVar8) >> bVar5 | (DAT_1801eb080 ^ *puVar8) << 0x40 - bVar5);
    puVar8 = (ulonglong *)
             ((DAT_1801eb080 ^ puVar8[1]) >> bVar5 | (DAT_1801eb080 ^ puVar8[1]) << 0x40 - bVar5);
    if ((longlong)puVar10 - 1U < 0xfffffffffffffffe) {
      uVar7 = (uint)DAT_1801eb080 & 0x3f;
      puVar9 = puVar8;
      uVar3 = DAT_1801eb080;
      puVar13 = puVar10;
      while (puVar8 = puVar8 + -1, puVar10 <= puVar8) {
        if (*puVar8 != uVar1) {
          *puVar8 = uVar1;
          (*(code *)PTR__guard_dispatch_icall_180157478)(uVar7);
          uVar7 = (uint)DAT_1801eb080 & 0x3f;
          uVar11 = DAT_1801eb080 ^ **(ulonglong **)*param_1;
          uVar3 = DAT_1801eb080 ^ (*(ulonglong **)*param_1)[1];
          sVar6 = (sbyte)uVar7;
          puVar12 = (ulonglong *)(uVar11 >> sVar6 | uVar11 << 0x40 - sVar6);
          puVar4 = (ulonglong *)(uVar3 >> sVar6 | uVar3 << 0x40 - sVar6);
          uVar3 = DAT_1801eb080;
          if ((puVar12 != puVar13) || (puVar4 != puVar9)) {
            puVar8 = puVar4;
            puVar9 = puVar4;
            puVar10 = puVar12;
            puVar13 = puVar12;
          }
        }
      }
      if (puVar10 != (ulonglong *)0xffffffffffffffff) {
        FUN_18013bf3c(puVar10);
        uVar3 = DAT_1801eb080;
      }
      **(ulonglong **)*param_1 = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 8) = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 0x10) = uVar3;
    }
    uVar2 = 0;
  }
  return uVar2;
}

// ---- Function: FUN_180137f54 ----
void FUN_180137f54(int32_t param_1)

{
  _register_onexit_function(&DAT_1801ee128,param_1);
  return;
}

// ---- Function: FUN_180137f64 ----
void FUN_180137f64(int32_t param_1)

{
  int32_t local_res8;
  int32_t local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int32_t *local_18;
  int32_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = &local_res8;
  local_res18[0] = 2;
  local_res20[0] = 2;
  local_res8 = param_1;
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  return;
}

// ---- Function: _initialize_onexit_table ----
/* Library Function - Single Match
    _initialize_onexit_table
   
   Library: Visual Studio 2019 Release */

int32_t _initialize_onexit_table(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_1801eb080;
  if (param_1 == (longlong *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_1801eb080;
    param_1[1] = lVar1;
    param_1[2] = lVar1;
  }
  return 0;
}

// ---- Function: _register_onexit_function ----
/* Library Function - Single Match
    _register_onexit_function
   
   Library: Visual Studio 2019 Release */

void _register_onexit_function(int32_t param_1,int32_t param_2)

{
  int32_t local_res8;
  int32_t local_res10;
  int32_t local_res18 [8];
  int local_res20 [2];
  int local_28 [2];
  int32_t *local_20;
  int32_t *local_18;
  
  local_20 = &local_res8;
  local_18 = &local_res10;
  local_res20[0] = 2;
  local_28[0] = 2;
  local_res8 = param_1;
  local_res10 = param_2;
  operator()<>(local_res18,local_28,&local_20,local_res20);
  return;
}

// ---- Function: FUN_18013802c ----
int32_t FUN_18013802c(void)

{
  int32_t uVar1;
  
  _initialize_onexit_table((longlong *)&DAT_1801ee128);
  uVar1 = _initialize_onexit_table((longlong *)&DAT_1801ee140);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}

// ---- Function: FUN_1801380a8 ----
int32_t FUN_1801380a8(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  LOCK();
  uVar1 = *DAT_1801ee868;
  uVar2 = (ulonglong)uVar1;
  *DAT_1801ee868 = *DAT_1801ee868 - 1;
  UNLOCK();
  if ((uVar1 == 1) && (DAT_1801ee868 != (uint *)&DAT_1801eb780)) {
    uVar2 = FUN_18013bf3c(DAT_1801ee868);
    DAT_1801ee868 = (uint *)&DAT_1801eb780;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}

// ---- Function: FUN_180138144 ----
void FUN_180138144(void)

{
  FUN_1801449b4(&PTR_LAB_18017ad20,(int32_t *)&DAT_18017ae20);
  return;
}

// ---- Function: FUN_180138158 ----
bool FUN_180138158(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_180138950();
  return p_Var1 != (__acrt_ptd *)0x0;
}

// ---- Function: __acrt_thread_detach ----
/* Library Function - Single Match
    __acrt_thread_detach
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int32_t __acrt_thread_detach(void)

{
  __acrt_freeptd();
  return 1;
}

