#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1801388ac ----
__acrt_ptd * FUN_1801388ac(void)

{
  BOOL BVar1;
  __acrt_ptd *p_Var2;
  
  if ((DAT_1801eb2e0 == 0xffffffff) ||
     (p_Var2 = (__acrt_ptd *)FlsGetValue(DAT_1801eb2e0), p_Var2 == (__acrt_ptd *)0x0)) {
    BVar1 = FlsSetValue(DAT_1801eb2e0,(PVOID)0xffffffffffffffff);
    if (BVar1 != 0) {
      p_Var2 = (__acrt_ptd *)_calloc_base(1,0x3c8);
      if (p_Var2 == (__acrt_ptd *)0x0) {
        FlsSetValue(DAT_1801eb2e0,(PVOID)0x0);
        p_Var2 = (__acrt_ptd *)0x0;
      }
      else {
        BVar1 = FlsSetValue(DAT_1801eb2e0,p_Var2);
        if (BVar1 != 0) {
          construct_ptd_array(p_Var2);
          FUN_18013bf3c((LPVOID)0x0);
          return p_Var2;
        }
        FlsSetValue(DAT_1801eb2e0,(PVOID)0x0);
      }
      FUN_18013bf3c(p_Var2);
    }
  }
  else if (p_Var2 != (__acrt_ptd *)0xffffffffffffffff) {
    return p_Var2;
  }
                    
  abort();
}

// ---- Function: FUN_180138950 ----
__acrt_ptd * FUN_180138950(void)

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
          goto LAB_1801389fd;
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
LAB_1801389fd:
  SetLastError(dwErrCode);
  return lpFlsData;
}

// ---- Function: FUN_180138a18 ----
__acrt_ptd * FUN_180138a18(int32_t param_1,longlong param_2)

{
  BOOL BVar1;
  __acrt_ptd *lpFlsData;
  __acrt_ptd *p_Var2;
  
  p_Var2 = (__acrt_ptd *)0x0;
  if ((DAT_1801eb2e0 == 0xffffffff) ||
     (lpFlsData = (__acrt_ptd *)FlsGetValue(DAT_1801eb2e0), lpFlsData == (__acrt_ptd *)0x0)) {
    BVar1 = FlsSetValue(DAT_1801eb2e0,(PVOID)0xffffffffffffffff);
    if (BVar1 == 0) {
      return (__acrt_ptd *)0x0;
    }
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
        goto LAB_180138ab9;
      }
      FlsSetValue(DAT_1801eb2e0,(PVOID)0x0);
    }
    FUN_18013bf3c(lpFlsData);
  }
  else {
    if (lpFlsData == (__acrt_ptd *)0xffffffffffffffff) {
      return (__acrt_ptd *)0x0;
    }
LAB_180138ab9:
    p_Var2 = lpFlsData + param_2 * 0x3c8;
  }
  return p_Var2;
}

// ---- Function: FUN_180138b14 ----
int32_t FUN_180138b14(void)

{
  BOOL in_EAX;
  
  if (DAT_1801eb2e0 != 0xffffffff) {
    in_EAX = FlsFree(DAT_1801eb2e0);
    DAT_1801eb2e0 = 0xffffffff;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

// ---- Function: operator___class__lambda_1d892b297fdedeee07ed8124eeb2f2fa__class__lambda_ffc046909424fd52df0ac47e64813305_____ptr64_class__lambda_01a7098693036236037e7cdb9bca3d73___ ----
/* Library Function - Single Match
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_1d892b297fdedeee07ed8124eeb2f2fa>,class <lambda_ffc046909424fd52df0ac47e64813305> &
   __ptr64,class <lambda_01a7098693036236037e7cdb9bca3d73> >(class
   <lambda_1d892b297fdedeee07ed8124eeb2f2fa> && __ptr64,class
   <lambda_ffc046909424fd52df0ac47e64813305> & __ptr64,class
   <lambda_01a7098693036236037e7cdb9bca3d73> && __ptr64) __ptr64
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<class_<lambda_1d892b297fdedeee07ed8124eeb2f2fa>,class_<lambda_ffc046909424fd52df0ac47e64813305>&___ptr64,class_<lambda_01a7098693036236037e7cdb9bca3d73>_>
          (__crt_seh_guarded_call<void> *this,<lambda_1d892b297fdedeee07ed8124eeb2f2fa> *param_1,
          <lambda_ffc046909424fd52df0ac47e64813305> *param_2,
          <lambda_01a7098693036236037e7cdb9bca3d73> *param_3)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  short *psVar4;
  
  __acrt_lock(*(int *)param_1);
  FUN_1801390e4((int32_t *)**(int32_t **)param_2,
                *(int32_t **)(**(longlong **)(param_2 + 8) + 0x90));
  lVar3 = _wsetlocale_nolock(**(longlong **)param_2,**(int **)(param_2 + 0x18),
                             (wchar_t *)**(int32_t **)(param_2 + 0x20));
  **(longlong **)(param_2 + 0x10) = lVar3;
  if (lVar3 == 0) {
    __acrt_release_locale_ref(**(longlong **)param_2);
    __acrt_free_locale(**(longlong **)param_2);
  }
  else {
    psVar4 = (short *)**(int32_t **)(param_2 + 0x20);
    if (psVar4 != (short *)0x0) {
      lVar3 = (longlong)&DAT_1801eb458 - (longlong)psVar4;
      do {
        sVar1 = *psVar4;
        sVar2 = *(short *)((longlong)psVar4 + lVar3);
        if (sVar1 != sVar2) break;
        psVar4 = psVar4 + 1;
      } while (sVar2 != 0);
      if (sVar1 != sVar2) {
        LOCK();
        DAT_1801ee158 = 1;
        UNLOCK();
      }
    }
    _updatetlocinfoEx_nolock
              ((longlong *)(**(longlong **)(param_2 + 8) + 0x90),
               (int32_t **)**(int32_t **)param_2);
    __acrt_release_locale_ref(**(longlong **)param_2);
    if (((*(byte *)(**(longlong **)(param_2 + 8) + 0x3a8) & 2) == 0) &&
       (((byte)DAT_1801eb774 & 1) == 0)) {
      _updatetlocinfoEx_nolock
                ((longlong *)&DAT_1801ee160,*(int32_t ***)(**(longlong **)(param_2 + 8) + 0x90));
      PTR_PTR_1801eb198 = (int32_t *)DAT_1801ee160[0x1f];
      PTR_DAT_1801eb2c8 = (int32_t *)*DAT_1801ee160;
      _DAT_1801eb45c = *(int32_t *)(DAT_1801ee160 + 1);
    }
  }
  __acrt_unlock(*(int *)param_3);
  return;
}

// ---- Function: operator___class__lambda_410d79af7f07d98d83a3f525b3859a53__class__lambda_3e16ef9562a7dcce91392c22ab16ea36_____ptr64_class__lambda_38119f0e861e05405d8a144b9b982f0a___ ----
/* Library Function - Single Match
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_410d79af7f07d98d83a3f525b3859a53>,class <lambda_3e16ef9562a7dcce91392c22ab16ea36> &
   __ptr64,class <lambda_38119f0e861e05405d8a144b9b982f0a> >(class
   <lambda_410d79af7f07d98d83a3f525b3859a53> && __ptr64,class
   <lambda_3e16ef9562a7dcce91392c22ab16ea36> & __ptr64,class
   <lambda_38119f0e861e05405d8a144b9b982f0a> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<class_<lambda_410d79af7f07d98d83a3f525b3859a53>,class_<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,class_<lambda_38119f0e861e05405d8a144b9b982f0a>_>
          (__crt_seh_guarded_call<void> *this,<lambda_410d79af7f07d98d83a3f525b3859a53> *param_1,
          <lambda_3e16ef9562a7dcce91392c22ab16ea36> *param_2,
          <lambda_38119f0e861e05405d8a144b9b982f0a> *param_3)

{
  int32_t **ppuVar1;
  longlong *plVar2;
  
  __acrt_lock(*(int *)param_1);
  for (plVar2 = &DAT_1801ee160; plVar2 != &DAT_1801ee168; plVar2 = plVar2 + 1) {
    if ((int32_t **)*plVar2 != &PTR_DAT_1801eb2f0) {
      ppuVar1 = _updatetlocinfoEx_nolock(plVar2,&PTR_DAT_1801eb2f0);
      *plVar2 = (longlong)ppuVar1;
    }
  }
  __acrt_unlock(*(int *)param_3);
  return;
}

// ---- Function: operator___class__lambda_7f2adfce497ff2baa965cd4f576ecfd1__class__lambda_2a444430fde8c29194d880d93eed5e8f_____ptr64_class__lambda_8dff2cf36a5417162780cd64fa2883ef_____ptr64_ ----
/* Library Function - Single Match
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_7f2adfce497ff2baa965cd4f576ecfd1>,class <lambda_2a444430fde8c29194d880d93eed5e8f> &
   __ptr64,class <lambda_8dff2cf36a5417162780cd64fa2883ef> & __ptr64>(class
   <lambda_7f2adfce497ff2baa965cd4f576ecfd1> && __ptr64,class
   <lambda_2a444430fde8c29194d880d93eed5e8f> & __ptr64,class
   <lambda_8dff2cf36a5417162780cd64fa2883ef> & __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<class_<lambda_7f2adfce497ff2baa965cd4f576ecfd1>,class_<lambda_2a444430fde8c29194d880d93eed5e8f>&___ptr64,class_<lambda_8dff2cf36a5417162780cd64fa2883ef>&___ptr64>
          (__crt_seh_guarded_call<void> *this,<lambda_7f2adfce497ff2baa965cd4f576ecfd1> *param_1,
          <lambda_2a444430fde8c29194d880d93eed5e8f> *param_2,
          <lambda_8dff2cf36a5417162780cd64fa2883ef> *param_3)

{
  <lambda_2a444430fde8c29194d880d93eed5e8f>::operator()(param_2);
  *(uint *)(**(longlong **)param_3 + 0x3a8) = *(uint *)(**(longlong **)param_3 + 0x3a8) & 0xffffffef
  ;
  return;
}

// ---- Function: operator__ ----
/* Library Function - Single Match
    public: __cdecl <lambda_2a444430fde8c29194d880d93eed5e8f>::operator()(void)const __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
<lambda_2a444430fde8c29194d880d93eed5e8f>::operator()
          (<lambda_2a444430fde8c29194d880d93eed5e8f> *this)

{
  LPVOID pvVar1;
  __crt_seh_guarded_call<void> local_res8 [8];
  int32_t local_res10 [2];
  int32_t local_res18 [2];
  int32_t local_38;
  int32_t local_30;
  int32_t local_28;
  int32_t local_20;
  int32_t local_18;
  
  pvVar1 = _calloc_base(1,0x158);
  **(int32_t **)this = pvVar1;
  FUN_18013bf3c((LPVOID)0x0);
  if (pvVar1 != (LPVOID)0x0) {
    local_38 = *(int32_t *)this;
    local_30 = *(int32_t *)(this + 8);
    local_28 = *(int32_t *)(this + 0x10);
    local_20 = *(int32_t *)(this + 0x18);
    local_18 = *(int32_t *)(this + 0x20);
    local_res10[0] = 4;
    local_res18[0] = 4;
    __crt_seh_guarded_call<void>::
    operator()<class_<lambda_1d892b297fdedeee07ed8124eeb2f2fa>,class_<lambda_ffc046909424fd52df0ac47e64813305>&___ptr64,class_<lambda_01a7098693036236037e7cdb9bca3d73>_>
              (local_res8,(<lambda_1d892b297fdedeee07ed8124eeb2f2fa> *)local_res18,
               (<lambda_ffc046909424fd52df0ac47e64813305> *)&local_38,
               (<lambda_01a7098693036236037e7cdb9bca3d73> *)local_res10);
  }
  return;
}

// ---- Function: commit_locale_name ----
/* Library Function - Single Match
    public: void __cdecl _expandlocale_locale_name_cache::commit_locale_name(wchar_t const * __ptr64
   const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void __thiscall
_expandlocale_locale_name_cache::commit_locale_name
          (_expandlocale_locale_name_cache *this,wchar_t *param_1,__uint64 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_180145f04((short *)(*(longlong *)(this + 0x10) + 600),0x55,(longlong)param_1,param_2);
  if (uVar1 == 0) {
    uVar1 = FUN_180145f04(*(short **)this,*(longlong *)(this + 8),(longlong)param_1,param_2);
    if (uVar1 == 0) {
      this[0x18] = (_expandlocale_locale_name_cache)0x1;
      return;
    }
  }
                    
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// ---- Function: __acrt_copy_locale_name ----
/* Library Function - Single Match
    __acrt_copy_locale_name
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

short * __acrt_copy_locale_name(int32_t (*param_1) [32])

{
  ulong uVar1;
  ulonglong uVar2;
  short *psVar3;
  
  if (((param_1 == (int32_t (*) [32])0x0) || (uVar2 = FUN_180136b94(param_1,0x55), 0x54 < uVar2))
     || (psVar3 = (short *)_malloc_base(uVar2 * 2 + 2), psVar3 == (short *)0x0)) {
    psVar3 = (short *)0x0;
  }
  else {
    uVar1 = FUN_180145f04(psVar3,uVar2 + 1,(longlong)param_1,uVar2 + 1);
    if (uVar1 != 0) {
                    
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return psVar3;
}

// ---- Function: FUN_180138e9c ----
int32_t FUN_180138e9c(void)

{
  int32_t uVar1;
  
  uVar1 = DAT_1801ee158;
  LOCK();
  DAT_1801ee158 = 1;
  UNLOCK();
  return uVar1;
}

// ---- Function: __lc_lctowcs ----
/* Library Function - Single Match
    __lc_lctowcs
   
   Library: Visual Studio 2019 Release */

void __lc_lctowcs(wchar_t *param_1,rsize_t param_2,wchar_t *param_3)

{
  errno_t eVar1;
  
  eVar1 = wcscpy_s(param_1,param_2,param_3);
  if (eVar1 == 0) {
    if (param_3[0x40] != L'\0') {
      _wcscats(param_1,param_2,2,&DAT_18017afd8);
    }
    if (param_3[0x80] != L'\0') {
      _wcscats(param_1,param_2,2,&DAT_18017afdc);
    }
    return;
  }
                    
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// ---- Function: FUN_180138f7c ----
int32_t FUN_180138f7c(int32_t (*param_1) [32],wchar_t *param_2)

{
  wchar_t wVar1;
  ulong uVar2;
  size_t sVar3;
  int32_t (*pauVar4) [32];
  longlong lVar5;
  uint uVar6;
  
  FUN_180151670(param_1,0,0x1ca);
  uVar6 = 0;
  if (*param_2 != L'\0') {
    if ((*param_2 != L'.') || (param_2[1] == L'\0')) {
      do {
        sVar3 = wcscspn(param_2,L"_.,");
        if (sVar3 == 0) {
          return 0xffffffff;
        }
        wVar1 = param_2[sVar3];
        if (uVar6 == 0) {
          if (0x3f < sVar3) {
            return 0xffffffff;
          }
          uVar2 = FUN_180145f04((short *)param_1,0x40,(longlong)param_2,sVar3);
          if (uVar2 != 0) goto LAB_1801390cd;
          uVar6 = (uint)(wVar1 == L'.');
        }
        else {
          if (uVar6 == 1) {
            if (0x3f < sVar3) {
              return 0xffffffff;
            }
            if (wVar1 == L'_') {
              return 0xffffffff;
            }
            pauVar4 = param_1 + 4;
            lVar5 = 0x40;
          }
          else {
            if (uVar6 != 2) {
              return 0xffffffff;
            }
            if (0xf < sVar3) {
              return 0xffffffff;
            }
            if ((wVar1 != L'\0') && (wVar1 != L',')) {
              return 0xffffffff;
            }
            pauVar4 = param_1 + 8;
            lVar5 = 0x10;
          }
          uVar2 = FUN_180145f04((short *)pauVar4,lVar5,(longlong)param_2,sVar3);
          if (uVar2 != 0) goto LAB_1801390cd;
        }
        if (wVar1 == L',') {
          return 0;
        }
        if (wVar1 == L'\0') {
          return 0;
        }
        param_2 = param_2 + sVar3 + 1;
        uVar6 = uVar6 + 1;
      } while( true );
    }
    uVar2 = FUN_180145f04((short *)(param_1 + 8),0x10,(longlong)(param_2 + 1),0xf);
    if (uVar2 != 0) {
LAB_1801390cd:
                    
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    *(int32_t *)(param_1[8] + 0x1e) = 0;
  }
  return 0;
}

// ---- Function: FUN_1801390e4 ----
void FUN_1801390e4(int32_t *param_1,int32_t *param_2)

{
  int32_t uVar1;
  int32_t *puVar2;
  longlong lVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  
  if (((param_2 != (int32_t *)0x0) && (param_1 != (int32_t *)0x0)) && (param_1 != param_2)) {
    lVar3 = 2;
    puVar2 = param_1;
    do {
      puVar5 = puVar2;
      puVar4 = param_2;
      uVar1 = puVar4[1];
      *puVar5 = *puVar4;
      puVar5[1] = uVar1;
      uVar1 = puVar4[3];
      puVar5[2] = puVar4[2];
      puVar5[3] = uVar1;
      uVar1 = puVar4[5];
      puVar5[4] = puVar4[4];
      puVar5[5] = uVar1;
      uVar1 = puVar4[7];
      puVar5[6] = puVar4[6];
      puVar5[7] = uVar1;
      uVar1 = puVar4[9];
      puVar5[8] = puVar4[8];
      puVar5[9] = uVar1;
      uVar1 = puVar4[0xb];
      puVar5[10] = puVar4[10];
      puVar5[0xb] = uVar1;
      uVar1 = puVar4[0xd];
      puVar5[0xc] = puVar4[0xc];
      puVar5[0xd] = uVar1;
      uVar1 = puVar4[0xf];
      puVar5[0xe] = puVar4[0xe];
      puVar5[0xf] = uVar1;
      lVar3 = lVar3 + -1;
      param_2 = puVar4 + 0x10;
      puVar2 = puVar5 + 0x10;
    } while (lVar3 != 0);
    uVar1 = puVar4[0x11];
    puVar5[0x10] = puVar4[0x10];
    puVar5[0x11] = uVar1;
    uVar1 = puVar4[0x13];
    puVar5[0x12] = puVar4[0x12];
    puVar5[0x13] = uVar1;
    uVar1 = puVar4[0x15];
    puVar5[0x14] = puVar4[0x14];
    puVar5[0x15] = uVar1;
    uVar1 = puVar4[0x17];
    puVar5[0x16] = puVar4[0x16];
    puVar5[0x17] = uVar1;
    uVar1 = puVar4[0x19];
    puVar5[0x18] = puVar4[0x18];
    puVar5[0x19] = uVar1;
    puVar5[0x1a] = puVar4[0x1a];
    *(int32_t *)(param_1 + 2) = 0;
    __acrt_add_locale_ref((longlong)param_1);
  }
  return;
}

// ---- Function: _expandlocale ----
/* Library Function - Single Match
    _expandlocale
   
   Library: Visual Studio 2019 Release */

void _expandlocale(wchar_t *param_1,wchar_t *param_2,rsize_t param_3,short *param_4,
                  ulonglong param_5,int32_t *param_6)

{
  __acrt_ptd *_Src;
  wchar_t wVar1;
  wchar_t wVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  errno_t eVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  __acrt_ptd *p_Var11;
  int32_t uVar12;
  uint uVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  longlong lVar16;
  __uint64 _Var17;
  int32_t uVar18;
  char cVar19;
  ulonglong uVar20;
  int32_t auStackY_2a8 [32];
  ulonglong local_278;
  __acrt_ptd *local_270;
  __acrt_ptd *local_268;
  short *local_260;
  ulonglong local_258;
  __acrt_ptd *local_250;
  char local_248;
  int32_t *local_240;
  rsize_t local_238;
  wchar_t *local_230;
  __acrt_ptd local_228 [256];
  ushort local_128;
  ushort local_126;
  ushort local_124;
  short local_122;
  short local_120;
  short sStack_11e;
  wchar_t local_108 [88];
  ulonglong local_58;
  ulonglong uVar21;
  
  local_58 = DAT_1801eb080 ^ (ulonglong)auStackY_2a8;
  local_278 = param_5;
  local_240 = param_6;
  local_238 = param_3;
  local_230 = param_2;
  if (param_1 == (wchar_t *)0x0) goto LAB_180139209;
  if ((*param_1 == L'C') && (param_1[1] == L'\0')) {
    eVar7 = wcscpy_s(param_2,param_3,L"C");
    if (eVar7 == 0) {
      *param_6 = 0;
      goto LAB_180139209;
    }
    goto LAB_1801395f7;
  }
  p_Var11 = FUN_1801387d8();
  local_250 = p_Var11 + 0x98;
  uVar18 = 0x55;
  local_258 = param_5;
  cVar19 = '\0';
  local_248 = '\0';
  local_270 = p_Var11 + 0xb8;
  local_268 = p_Var11 + 0xbc;
  _Src = p_Var11 + 0x1c2;
  local_260 = param_4;
  uVar8 = FUN_180145f04(param_4,param_5,(longlong)(p_Var11 + 0x2f0),0x55);
  if (uVar8 != 0) goto LAB_1801395f7;
  uVar20 = 0xffffffffffffffff;
  do {
    uVar21 = uVar20;
    uVar20 = uVar21 + 1;
  } while (param_1[uVar20] != L'\0');
  if (uVar20 < 0x83) {
    p_Var11 = _Src;
    do {
      wVar1 = *(wchar_t *)p_Var11;
      wVar2 = *(wchar_t *)(p_Var11 + ((longlong)param_1 - (longlong)_Src));
      if (wVar1 != wVar2) break;
      p_Var11 = p_Var11 + 2;
    } while (wVar2 != L'\0');
    cVar6 = '\0';
    if (wVar1 != wVar2) {
      p_Var11 = local_268;
      do {
        sVar3 = *(short *)p_Var11;
        sVar4 = *(short *)(p_Var11 + ((longlong)param_1 - (longlong)local_268));
        if (sVar3 != sVar4) break;
        p_Var11 = p_Var11 + 2;
      } while (sVar4 != 0);
      if (sVar3 != sVar4) goto LAB_180139321;
    }
LAB_1801395cb:
    cVar19 = cVar6;
    *local_240 = *(int32_t *)local_270;
    eVar7 = wcscpy_s(local_230,local_238,(wchar_t *)_Src);
    if (eVar7 != 0) goto LAB_1801395f7;
  }
  else {
LAB_180139321:
    bVar5 = __acrt_can_use_vista_locale_apis();
    uVar12 = FUN_180138f7c((int32_t (*) [32])local_228,param_1);
    p_Var11 = local_270;
    if ((int)uVar12 == 0) {
      if (bVar5) {
        uVar12 = FUN_180146814((short *)local_228,(uint *)local_270,local_228,uVar18);
        iVar9 = (int)uVar12;
      }
      else {
        iVar9 = __acrt_get_qualified_locale_downlevel
                          ((longlong)local_228,(UINT *)local_270,local_228,uVar18);
      }
      if (iVar9 == 0) goto LAB_1801393ba;
      __lc_lctowcs((wchar_t *)_Src,0x83,(wchar_t *)local_228);
      lVar15 = -1;
      do {
        lVar16 = lVar15;
        lVar15 = lVar16 + 1;
      } while (local_108[lVar15] != L'\0');
      cVar6 = '\x01';
      uVar8 = FUN_180145f04(param_4,local_278,(longlong)local_108,lVar16 + 2);
      if (uVar8 != 0) goto LAB_18013960c;
LAB_180139593:
      if ((*param_1 == L'\0') || (0x82 < uVar20)) {
        *(int32_t *)local_268 = 0;
      }
      else {
        uVar8 = FUN_180145f04((short *)local_268,0x83,(longlong)param_1,uVar21 + 2);
        if (uVar8 != 0) {
LAB_18013960c:
                    
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_1801395cb;
    }
LAB_1801393ba:
    iVar9 = FUN_18013ab50((ushort *)param_1);
    if (iVar9 != 0) {
      local_278 = local_278 & 0xffffffff00000000;
      iVar9 = FUN_18013a930((ushort *)param_1,0x20001004,(LPWSTR)&local_278,2);
      if ((iVar9 == 0) || (uVar13 = (uint)local_278, (uint)local_278 == 0)) {
        uVar13 = 0xfde9;
      }
      *(uint *)p_Var11 = uVar13 & 0xffff;
      _Var17 = uVar21 + 2;
      uVar8 = FUN_180145f04((short *)_Src,0x83,(longlong)param_1,_Var17);
      pwVar14 = param_1;
      if (uVar8 != 0) goto LAB_18013960c;
LAB_180139584:
      _expandlocale_locale_name_cache::commit_locale_name
                ((_expandlocale_locale_name_cache *)&local_260,pwVar14,_Var17);
      cVar6 = local_248;
      goto LAB_180139593;
    }
    cVar6 = FUN_180139ef8((int32_t (*) [32])local_228,param_1);
    if ((cVar6 != '\0') && (iVar9 = FUN_18013ab50((ushort *)local_108), iVar9 != 0)) {
      if (local_128 == 0) {
        local_278 = local_278 & 0xffffffff00000000;
        iVar9 = FUN_18013a930((ushort *)local_108,0x20001004,(LPWSTR)&local_278,2);
        if ((iVar9 == 0) || (uVar13 = (uint)local_278, (uint)local_278 == 0)) goto LAB_18013953a;
      }
      else {
        uVar10 = (uint)local_128;
        uVar13 = uVar10 + 0x20;
        if (0x19 < uVar10 - 0x41) {
          uVar13 = uVar10;
        }
        if (uVar13 == 0x75) {
          uVar13 = local_126 + 0x20;
          if (0x19 < local_126 - 0x41) {
            uVar13 = (uint)local_126;
          }
          if (uVar13 == 0x74) {
            uVar13 = local_124 + 0x20;
            if (0x19 < local_124 - 0x41) {
              uVar13 = (uint)local_124;
            }
            if (((uVar13 == 0x66) && (local_122 == 0x38)) && (local_120 == 0)) goto LAB_18013953a;
          }
        }
        if (((local_122 != 0x2d) || (local_120 != 0x38)) || (sStack_11e != 0)) goto LAB_1801394d8;
LAB_18013953a:
        uVar13 = 0xfde9;
      }
      *(uint *)p_Var11 = uVar13 & 0xffff;
      uVar8 = FUN_180145f04((short *)_Src,0x83,(longlong)param_1,uVar21 + 2);
      lVar15 = -1;
      if (uVar8 != 0) goto LAB_18013960c;
      do {
        lVar16 = lVar15;
        lVar15 = lVar16 + 1;
      } while (local_108[lVar15] != L'\0');
      _Var17 = lVar16 + 2;
      pwVar14 = local_108;
      goto LAB_180139584;
    }
  }
LAB_1801394d8:
  if ((cVar19 != '\0') ||
     (uVar8 = FUN_180145f04((short *)(local_250 + 600),0x55,(longlong)local_260,local_258),
     uVar8 == 0)) {
LAB_180139209:
    FUN_1801252c0(local_58 ^ (ulonglong)auStackY_2a8);
    return;
  }
LAB_1801395f7:
                    
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// ---- Function: _wcscats ----
/* Library Function - Single Match
    _wcscats
   
   Library: Visual Studio 2019 Release */

void _wcscats(short *param_1,longlong param_2,int param_3,int32_t param_4)

{
  ulong uVar1;
  int iVar2;
  longlong *plVar3;
  int local_res18 [2];
  longlong local_res20;
  
  if (0 < param_3) {
    local_res20 = param_4;
    iVar2 = 0;
    plVar3 = (longlong *)local_res18;
    local_res18[0] = param_3;
    do {
      plVar3 = plVar3 + 1;
      uVar1 = FUN_180145d94(param_1,param_2,*plVar3);
      if (uVar1 != 0) {
                    
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res18[0]);
  }
  return;
}

// ---- Function: _wsetlocale ----
/* Library Function - Single Match
    _wsetlocale
   
   Library: Visual Studio 2019 Release */

wchar_t * __cdecl _wsetlocale(int _Category,wchar_t *_Locale)

{
  ulong *puVar1;
  int local_res8 [2];
  wchar_t *local_res10;
  <lambda_7f2adfce497ff2baa965cd4f576ecfd1> local_res18 [8];
  __acrt_ptd *local_res20;
  wchar_t *local_48;
  int32_t local_40;
  __acrt_ptd **local_38;
  int32_t *local_30;
  __acrt_ptd **local_28;
  wchar_t **local_20;
  int *local_18;
  wchar_t **local_10;
  
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  local_res8[0] = _Category;
  local_res10 = _Locale;
  if ((uint)_Category < 6) {
    local_res20 = FUN_1801387d8();
    __acrt_eagerly_load_locale_apis();
    FUN_180144e28();
    *(uint *)(local_res20 + 0x3a8) = *(uint *)(local_res20 + 0x3a8) | 0x10;
    local_38 = &local_res20;
    local_30 = &local_40;
    local_28 = &local_res20;
    local_20 = &local_48;
    local_18 = local_res8;
    local_10 = &local_res10;
    __crt_seh_guarded_call<void>::
    operator()<class_<lambda_7f2adfce497ff2baa965cd4f576ecfd1>,class_<lambda_2a444430fde8c29194d880d93eed5e8f>&___ptr64,class_<lambda_8dff2cf36a5417162780cd64fa2883ef>&___ptr64>
              ((__crt_seh_guarded_call<void> *)local_res18,local_res18,
               (<lambda_2a444430fde8c29194d880d93eed5e8f> *)&local_30,
               (<lambda_8dff2cf36a5417162780cd64fa2883ef> *)&local_38);
  }
  else {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_18012b794();
    local_48 = (wchar_t *)0x0;
  }
  return local_48;
}

