#include <stdint.h>
#include <stddef.h>

// ---- Function: __acrt_uninitialize ----
/* Library Function - Single Match
    __acrt_uninitialize
   
   Library: Visual Studio 2019 Release */

int32_t __acrt_uninitialize(bool param_1)

{
  int iVar1;
  int32_t in_RAX;
  int32_t extraout_var;
  int32_t uVar2;
  
  if (param_1) {
    if (DAT_1801edd90 != 0) {
      iVar1 = common_flush_all(param_1);
      in_RAX = CONCAT44(extraout_var,iVar1);
    }
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  uVar2 = FUN_180144a48(0x18017ad20,0x18017ae20);
  return uVar2;
}

// ---- Function: FUN_1801381b4 ----
int32_t FUN_1801381b4(void)

{
  int32_t uVar1;
  
  uVar1 = FUN_180138b14();
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

// ---- Function: FUN_1801381c4 ----
void FUN_1801381c4(int32_t *param_1,int32_t *param_2)

{
  if (param_1 != param_2) {
    do {
      if (*param_1 != 0) {
        (*(code *)PTR__guard_dispatch_icall_180157478)();
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}

// ---- Function: FUN_180138208 ----
int32_t FUN_180138208(int32_t *param_1,int32_t *param_2)

{
  int32_t uVar1;
  bool bVar2;
  
  bVar2 = param_1 == param_2;
  while( true ) {
    if (bVar2) {
      return 0;
    }
    if ((*param_1 != 0) &&
       (uVar1 = (*(code *)PTR__guard_dispatch_icall_180157478)(), (int)uVar1 != 0)) break;
    param_1 = param_1 + 1;
    bVar2 = param_1 == param_2;
  }
  return uVar1;
}

// ---- Function: strcpy_s ----
/* Library Function - Single Match
    strcpy_s
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  ulong *puVar2;
  ulong uVar3;
  char *pcVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    if (_Src != (char *)0x0) {
      pcVar4 = _Dst;
      do {
        cVar1 = pcVar4[(longlong)_Src - (longlong)_Dst];
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
        if (cVar1 == '\0') {
          return 0;
        }
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      *_Dst = '\0';
      puVar2 = __doserrno();
      uVar3 = 0x22;
      goto LAB_180138273;
    }
    *_Dst = '\0';
  }
  puVar2 = __doserrno();
  uVar3 = 0x16;
LAB_180138273:
  *puVar2 = uVar3;
  FUN_18012b794();
  return uVar3;
}

// ---- Function: FUN_1801382b0 ----
uint FUN_1801382b0(longlong param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong local_58 [4];
  int32_t local_38;
  int32_t *local_30;
  int32_t *puStack_28;
  char local_20;
  int32_t local_1c;
  char local_18;
  int32_t local_14;
  char local_10;
  
  local_58[2] = 0;
  local_20 = DAT_1801ee158 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1801eb448;
    puStack_28 = PTR_DAT_1801eb450;
  }
  local_58[1] = 0;
  local_58[0] = param_1;
  uVar1 = FUN_18013138c(local_58 + 2,local_58,10,CONCAT31((int3)((uint)param_4 >> 8),1));
  if (local_20 == '\x02') {
    *(uint *)(local_58[2] + 0x3a8) = *(uint *)(local_58[2] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18012b3a8(local_58 + 2);
    *(int32_t *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18012b3a8(local_58 + 2);
    *(int32_t *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}

// ---- Function: strncmp ----
/* Library Function - Single Match
    strncmp
   
   Library: Visual Studio 2019 Release */

int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = (longlong)_Str2 - (longlong)_Str1;
  if (_MaxCount != 0) {
    uVar2 = (ulonglong)_Str1 & 7;
    while( true ) {
      if (uVar2 == 0) {
        while ((((int)lVar3 + (int)_Str1 & 0xfffU) < 0xff9 &&
               (uVar2 = *(ulonglong *)_Str1, uVar2 == *(ulonglong *)(lVar3 + (longlong)_Str1)))) {
          _Str1 = (char *)((longlong)_Str1 + 8);
          bVar4 = _MaxCount < 8;
          _MaxCount = _MaxCount - 8;
          if (bVar4 || _MaxCount == 0) {
            return 0;
          }
          if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
            return 0;
          }
        }
      }
      bVar1 = (byte)*(ulonglong *)_Str1;
      if (bVar1 != *(byte *)(lVar3 + (longlong)_Str1)) {
        return -(uint)(bVar1 < *(byte *)(lVar3 + (longlong)_Str1)) | 1;
      }
      _Str1 = (char *)((longlong)_Str1 + 1);
      _MaxCount = _MaxCount - 1;
      if ((_MaxCount == 0) || (bVar1 == 0)) break;
      uVar2 = (ulonglong)_Str1 & 7;
    }
  }
  return 0;
}

// ---- Function: wcsncmp ----
/* Library Function - Single Match
    wcsncmp
   
   Library: Visual Studio 2019 Release */

int __cdecl wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  if (_MaxCount == 0) {
    return 0;
  }
  for (; ((_MaxCount = _MaxCount - 1, _MaxCount != 0 && (*_Str1 != L'\0')) && (*_Str1 == *_Str2));
      _Str1 = _Str1 + 1) {
    _Str2 = _Str2 + 1;
  }
  return (uint)(ushort)*_Str1 - (uint)(ushort)*_Str2;
}

// ---- Function: operator____ ----
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_0ae27a3a962d80f24befdcbee591983d>,class <lambda_8d0ee55de4b1038c4002e0adecdf1839> &
   __ptr64,class <lambda_dc504788e8f1664fe9b84e20bfb512f2> >(class
   <lambda_0ae27a3a962d80f24befdcbee591983d> && __ptr64,class
   <lambda_8d0ee55de4b1038c4002e0adecdf1839> & __ptr64,class
   <lambda_dc504788e8f1664fe9b84e20bfb512f2> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_72d1df2b273a38828b1ce30cbf4cdab5>,class <lambda_876a65b173b8412d3a47c70a915b0cf4> &
   __ptr64,class <lambda_41932305e351933ebe8f8be3ed8bb5dc> >(class
   <lambda_72d1df2b273a38828b1ce30cbf4cdab5> && __ptr64,class
   <lambda_876a65b173b8412d3a47c70a915b0cf4> & __ptr64,class
   <lambda_41932305e351933ebe8f8be3ed8bb5dc> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(int32_t param_1,int *param_2,int32_t *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}

// ---- Function: operator____ ----
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_2d41944a1d46af3157314b8a01080d33>,class <lambda_8f455de75cd7d7f24b4096f044d8b9e6> &
   __ptr64,class <lambda_aa500f224e6afead328df44964fe2772> >(class
   <lambda_2d41944a1d46af3157314b8a01080d33> && __ptr64,class
   <lambda_8f455de75cd7d7f24b4096f044d8b9e6> & __ptr64,class
   <lambda_aa500f224e6afead328df44964fe2772> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_fb3a7dec4e47f37f22dae91bb15c9095>,class <lambda_698284760c8add0bfb0756c19673e34b> &
   __ptr64,class <lambda_dfb8eca1e75fef3034a8fb18dd509707> >(class
   <lambda_fb3a7dec4e47f37f22dae91bb15c9095> && __ptr64,class
   <lambda_698284760c8add0bfb0756c19673e34b> & __ptr64,class
   <lambda_dfb8eca1e75fef3034a8fb18dd509707> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(int32_t param_1,int *param_2,int32_t *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock(*(__acrt_ptd **)*param_3,(__crt_locale_data *)0x0);
  __acrt_unlock(*param_4);
  return;
}

// ---- Function: operator____ ----
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_5e887d1dcbef67a5eb4283622ba103bf>,class <lambda_4466841279450cc726390878d4a41900> &
   __ptr64,class <lambda_341c25c0346d94847f1f3c463c57e077> >(class
   <lambda_5e887d1dcbef67a5eb4283622ba103bf> && __ptr64,class
   <lambda_4466841279450cc726390878d4a41900> & __ptr64,class
   <lambda_341c25c0346d94847f1f3c463c57e077> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_aa87e3671a710a21b5dc78c0bdf72e11>,class <lambda_92619d2358a28f41a33ba319515a20b9> &
   __ptr64,class <lambda_6992ecaafeb10aed2b74cb1fae11a551> >(class
   <lambda_aa87e3671a710a21b5dc78c0bdf72e11> && __ptr64,class
   <lambda_92619d2358a28f41a33ba319515a20b9> & __ptr64,class
   <lambda_6992ecaafeb10aed2b74cb1fae11a551> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(int32_t param_1,int *param_2,int32_t *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock
            (*(__acrt_ptd **)*param_3,(__crt_locale_data *)**(int32_t **)param_3[1]);
  __acrt_unlock(*param_4);
  return;
}

// ---- Function: operator____ ----
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_46352004c1216016012b18bd6f87e700>,class <lambda_3bd07e1a1191394380780325891bf33f> &
   __ptr64,class <lambda_334532d3f185bcaa59b5be82d7d22bff> >(class
   <lambda_46352004c1216016012b18bd6f87e700> && __ptr64,class
   <lambda_3bd07e1a1191394380780325891bf33f> & __ptr64,class
   <lambda_334532d3f185bcaa59b5be82d7d22bff> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_f2e299630e499de9f9a165e60fcd3db5>,class <lambda_2ae9d31cdba2644fcbeaf08da7c24588> &
   __ptr64,class <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> >(class
   <lambda_f2e299630e499de9f9a165e60fcd3db5> && __ptr64,class
   <lambda_2ae9d31cdba2644fcbeaf08da7c24588> & __ptr64,class
   <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(int32_t param_1,int *param_2,int32_t *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  
  __acrt_lock(*param_2);
  piVar2 = *(int **)(*(longlong *)*param_3 + 0x88);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piVar2 != (int *)&DAT_1801eb780)) {
      FUN_18013bf3c(piVar2);
    }
  }
  __acrt_unlock(*param_4);
  return;
}

// ---- Function: construct_ptd_array ----
/* Library Function - Single Match
    void __cdecl construct_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl construct_ptd_array(__acrt_ptd *param_1)

{
  int32_t local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_38 [2];
  __acrt_ptd *local_30;
  int32_t *local_28;
  __acrt_ptd **local_20;
  __acrt_ptd **local_18;
  int32_t **local_10;
  
  local_20 = &local_30;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_18 = &local_30;
  local_10 = &local_28;
  local_38[0] = 4;
  local_38[1] = 4;
  local_28 = &DAT_1801ee160;
  *(int32_t *)(param_1 + 0x28) = 1;
  *(int32_t **)param_1 = &DAT_18017ab80;
  *(int32_t *)(param_1 + 0x3a8) = 1;
  *(int32_t **)(param_1 + 0x88) = &DAT_1801eb780;
  *(int32_t *)(param_1 + 0xbc) = 0x43;
  *(int32_t *)(param_1 + 0x1c2) = 0x43;
  *(int32_t *)(param_1 + 0x3a0) = 0;
  local_30 = param_1;
  operator()<>(local_res10,local_res20,&local_20,local_res18);
  operator()<>(local_res10,local_38 + 1,&local_18,local_38);
  return;
}

// ---- Function: destroy_ptd_array ----
/* Library Function - Single Match
    void __cdecl destroy_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl destroy_ptd_array(__acrt_ptd *param_1)

{
  int32_t local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_28 [2];
  __acrt_ptd *local_20;
  __acrt_ptd **local_18;
  __acrt_ptd **local_10;
  
  local_18 = &local_20;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_10 = &local_20;
  local_28[0] = 4;
  local_28[1] = 4;
  local_20 = param_1;
  if (*(int32_t **)param_1 != &DAT_18017ab80) {
    FUN_18013bf3c(*(int32_t **)param_1);
  }
  FUN_18013bf3c(*(LPVOID *)(local_20 + 0x70));
  FUN_18013bf3c(*(LPVOID *)(local_20 + 0x58));
  FUN_18013bf3c(*(LPVOID *)(local_20 + 0x60));
  FUN_18013bf3c(*(LPVOID *)(local_20 + 0x68));
  FUN_18013bf3c(*(LPVOID *)(local_20 + 0x48));
  FUN_18013bf3c(*(LPVOID *)(local_20 + 0x50));
  FUN_18013bf3c(*(LPVOID *)(local_20 + 0x78));
  FUN_18013bf3c(*(LPVOID *)(local_20 + 0x80));
  FUN_18013bf3c(*(LPVOID *)(local_20 + 0x3c0));
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  operator()<>(local_res10,local_28 + 1,&local_10,local_28);
  return;
}

// ---- Function: replace_current_thread_locale_nolock ----
/* Library Function - Single Match
    void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * __ptr64 const,struct
   __crt_locale_data * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)

{
  int32_t **ppuVar1;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    __acrt_release_locale_ref(*(longlong *)(param_1 + 0x90));
    ppuVar1 = *(int32_t ***)(param_1 + 0x90);
    if (((ppuVar1 != DAT_1801ee160) && (ppuVar1 != &PTR_DAT_1801eb2f0)) &&
       (*(int *)(ppuVar1 + 2) == 0)) {
      __acrt_free_locale((longlong)ppuVar1);
    }
  }
  *(__crt_locale_data **)(param_1 + 0x90) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    __acrt_add_locale_ref((longlong)param_2);
  }
  return;
}

// ---- Function: __acrt_freeptd ----
/* Library Function - Single Match
    __acrt_freeptd
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_freeptd(void)

{
  __acrt_ptd *p_Var1;
  
  if (DAT_1801eb2e0 != 0xffffffff) {
    p_Var1 = (__acrt_ptd *)FlsGetValue(DAT_1801eb2e0);
    if (p_Var1 != (__acrt_ptd *)0x0) {
      FlsSetValue(DAT_1801eb2e0,(PVOID)0x0);
      destroy_ptd_array(p_Var1);
      FUN_18013bf3c(p_Var1);
    }
  }
  return;
}

// ---- Function: FUN_1801387d8 ----
__acrt_ptd * FUN_1801387d8(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  __acrt_ptd *lpFlsData;
  __acrt_ptd *p_Var2;
  
  dwErrCode = GetLastError();
  p_Var2 = (__acrt_ptd *)0x0;
  if ((DAT_1801eb2e0 == 0xffffffff) ||
     (lpFlsData = (__acrt_ptd *)FlsGetValue(DAT_1801eb2e0), lpFlsData == (__acrt_ptd *)0x0)) {
    BVar1 = FlsSetValue(DAT_1801eb2e0,(PVOID)0xffffffffffffffff);
    lpFlsData = p_Var2;
    if (BVar1 != 0) {
      lpFlsData = (__acrt_ptd *)_calloc_base(1,0x3c8);
      if (lpFlsData == (__acrt_ptd *)0x0) {
        FlsSetValue(DAT_1801eb2e0,(PVOID)0x0);
        lpFlsData = (__acrt_ptd *)0x0;
      }
      else {
        BVar1 = FlsSetValue(DAT_1801eb2e0,lpFlsData);
        if (BVar1 != 0) {
          construct_ptd_array(lpFlsData);
          FUN_18013bf3c((LPVOID)0x0);
          goto LAB_180138885;
        }
        FlsSetValue(DAT_1801eb2e0,(PVOID)0x0);
      }
      FUN_18013bf3c(lpFlsData);
      lpFlsData = p_Var2;
    }
  }
  else if (lpFlsData == (__acrt_ptd *)0xffffffffffffffff) {
    lpFlsData = p_Var2;
  }
LAB_180138885:
  SetLastError(dwErrCode);
  if (lpFlsData == (__acrt_ptd *)0x0) {
                    
    abort();
  }
  return lpFlsData;
}

