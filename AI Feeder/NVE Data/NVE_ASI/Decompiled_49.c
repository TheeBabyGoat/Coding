#include <stdint.h>
#include <stddef.h>

// ---- Function: _Lockit ----
/* Library Function - Single Match
    public: __cdecl std::_Lockit::_Lockit(int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_Lockit * __thiscall std::_Lockit::_Lockit(_Lockit *this,int param_1)

{
  *(int *)this = param_1;
  if (param_1 == 0) {
    _lock_locales();
  }
  else if (param_1 < 8) {
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_1801ed2a0 + (longlong)param_1 * 0x28));
  }
  return this;
}

// ---- Function: FUN_180124894 ----
void FUN_180124894(void)

{
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  LOCK();
  iVar2 = DAT_1801eb000 + -1;
  UNLOCK();
  iVar1 = DAT_1801eb000 + -1;
  DAT_1801eb000 = iVar2;
  if (iVar1 < 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_1801ed2a0;
    do {
      DeleteCriticalSection(lpCriticalSection);
      lpCriticalSection = lpCriticalSection + 1;
    } while (lpCriticalSection != (LPCRITICAL_SECTION)&DAT_1801ed3e0);
  }
  return;
}

// ---- Function: __Lockit ----
/* Library Function - Single Match
    public: __cdecl std::_Lockit::~_Lockit(void) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall std::_Lockit::~_Lockit(_Lockit *this)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 == 0) {
    FUN_180136810();
    return;
  }
  if (iVar1 < 8) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1801ed2a0 + (longlong)iVar1 * 0x28));
  }
  return;
}

// ---- Function: FUN_180124904 ----
UINT * FUN_180124904(UINT *param_1)

{
  UINT UVar1;
  longlong lVar2;
  short *psVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  UVar1 = ___lc_codepage_func();
  *param_1 = UVar1;
  UVar1 = FUN_180135d20();
  param_1[1] = UVar1;
  lVar2 = FUN_180135cec();
  uVar4 = 0;
  lVar2 = *(longlong *)(lVar2 + 0x10);
  param_1[2] = (uint)(lVar2 == 0);
  if (lVar2 != 0) {
    psVar3 = (short *)FUN_180136820();
    uVar6 = uVar4;
    do {
      if (*psVar3 < 0) {
        *(byte *)(((longlong)uVar6 >> 3) + 0xc + (longlong)param_1) =
             *(byte *)(((longlong)uVar6 >> 3) + 0xc + (longlong)param_1) |
             (byte)(1 << ((uint)uVar4 & 7));
      }
      uVar5 = (uint)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
      uVar6 = uVar6 + 1;
      psVar3 = psVar3 + 1;
    } while ((int)uVar5 < 0x100);
  }
  return param_1;
}

// ---- Function: FUN_18012499c ----
LARGE_INTEGER FUN_18012499c(void)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  return (LARGE_INTEGER)local_res8[0].QuadPart;
}

// ---- Function: FUN_1801249b8 ----
void FUN_1801249b8(void)

{
  LARGE_INTEGER local_res8 [4];
  
  if (DAT_1801ed3e0.QuadPart == 0) {
    QueryPerformanceFrequency(local_res8);
    DAT_1801ed3e0 = local_res8[0];
  }
  return;
}

// ---- Function: AcquireSRWLockExclusive ----
void __stdcall AcquireSRWLockExclusive(PSRWLOCK SRWLock)

{
                    
                    
  AcquireSRWLockExclusive(SRWLock);
  return;
}

// ---- Function: AcquireSRWLockShared ----
void __stdcall AcquireSRWLockShared(PSRWLOCK SRWLock)

{
                    
                    
  AcquireSRWLockShared(SRWLock);
  return;
}

// ---- Function: ReleaseSRWLockExclusive ----
void __stdcall ReleaseSRWLockExclusive(PSRWLOCK SRWLock)

{
                    
                    
  ReleaseSRWLockExclusive(SRWLock);
  return;
}

// ---- Function: ReleaseSRWLockShared ----
void __stdcall ReleaseSRWLockShared(PSRWLOCK SRWLock)

{
                    
                    
  ReleaseSRWLockShared(SRWLock);
  return;
}

// ---- Function: _Ios_base_dtor ----
/* Library Function - Single Match
    private: static void __cdecl std::ios_base::_Ios_base_dtor(class std::ios_base * __ptr64)
   
   Library: Visual Studio 2019 Release */

void __cdecl std::ios_base::_Ios_base_dtor(ios_base *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if ((lVar2 == 0) ||
     ((&DAT_1801ed450)[lVar2] = (&DAT_1801ed450)[lVar2] + -1, (char)(&DAT_1801ed450)[lVar2] < '\x01'
     )) {
    _Tidy(param_1);
    pvVar1 = *(LPVOID *)(param_1 + 0x40);
    if (pvVar1 != (LPVOID)0x0) {
      if (*(longlong *)((longlong)pvVar1 + 8) != 0) {
        lVar2 = (*(code *)PTR__guard_dispatch_icall_180157468)();
        if (lVar2 != 0) {
          (*(code *)PTR__guard_dispatch_icall_180157468)(lVar2,1);
        }
      }
      thunk_FUN_18012d5e8(pvVar1);
    }
  }
  return;
}

// ---- Function: _Tidy ----
/* Library Function - Single Match
    private: void __cdecl std::ios_base::_Tidy(void) __ptr64
   
   Library: Visual Studio 2019 Release */

void __thiscall std::ios_base::_Tidy(ios_base *this)

{
  int32_t *puVar1;
  int32_t *puVar2;
  
  for (puVar2 = *(int32_t **)(this + 0x38); puVar2 != (int32_t *)0x0;
      puVar2 = (int32_t *)*puVar2) {
    (*(code *)PTR__guard_dispatch_icall_180157468)(0,this,*(int32_t *)(puVar2 + 1));
  }
  puVar2 = *(int32_t **)(this + 0x30);
  while (puVar2 != (int32_t *)0x0) {
    puVar1 = (int32_t *)*puVar2;
    thunk_FUN_18012d5e8(puVar2);
    puVar2 = puVar1;
  }
  *(int32_t *)(this + 0x30) = 0;
  puVar2 = *(int32_t **)(this + 0x38);
  while (puVar2 != (int32_t *)0x0) {
    puVar1 = (int32_t *)*puVar2;
    thunk_FUN_18012d5e8(puVar2);
    puVar2 = puVar1;
  }
  *(int32_t *)(this + 0x38) = 0;
  return;
}

// ---- Function: __uncaught_exceptions ----
int32_t __uncaught_exceptions(void)

{
  int32_t uVar1;
  longlong lVar2;
  
  lVar2 = __vcrt_getptd_noinit();
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(int32_t *)(lVar2 + 0x30);
  }
  return uVar1;
}

// ---- Function: FUN_180124b04 ----
_iobuf * FUN_180124b04(wchar_t *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  _iobuf *p_Var3;
  uint uVar4;
  uint uVar6;
  _iobuf *p_Var7;
  uint uVar8;
  _iobuf *p_Var5;
  
  p_Var7 = (_iobuf *)0x0;
  uVar4 = 0;
  uVar8 = param_2 | 1;
  if ((param_2 & 0x40) == 0) {
    uVar8 = param_2;
  }
  uVar6 = uVar8 | 2;
  if ((uVar8 & 8) == 0) {
    uVar6 = uVar8;
  }
  if (DAT_1801eb010 != (uVar6 & 0xffffffbb)) {
    puVar2 = &DAT_1801eb010;
    p_Var5 = p_Var7;
    do {
      uVar4 = (int)p_Var5 + 1;
      p_Var5 = (_iobuf *)(ulonglong)uVar4;
      puVar2 = puVar2 + 1;
      if (puVar2 == (uint *)&DAT_1801eb060) {
        return (_iobuf *)0x0;
      }
    } while (*puVar2 != (uVar6 & 0xffffffbb));
  }
  p_Var3 = common_fsopen<wchar_t>(param_1,(wchar_t *)(&PTR_DAT_180177ec0)[(int)uVar4],param_3);
  p_Var5 = p_Var7;
  if (((p_Var3 != (_iobuf *)0x0) && (p_Var5 = p_Var3, (param_2 >> 2 & 1) != 0)) &&
     (iVar1 = FUN_18012e048((longlong *)p_Var3,0,2), iVar1 != 0)) {
    FUN_18012f050((int *)p_Var3);
    p_Var5 = p_Var7;
  }
  return p_Var5;
}

// ---- Function: FUN_180124bbc ----
UINT * FUN_180124bbc(UINT *param_1)

{
  int32_t *puVar1;
  UINT UVar2;
  LPVOID pvVar3;
  int32_t *puVar4;
  int32_t uVar5;
  wchar_t *pwVar6;
  int32_t *puVar7;
  longlong lVar8;
  
  UVar2 = ___lc_codepage_func();
  *param_1 = UVar2;
  pvVar3 = _calloc_base(0x100,2);
  *(LPVOID *)(param_1 + 2) = pvVar3;
  if (pvVar3 == (LPVOID)0x0) {
    uVar5 = FUN_180136820();
    param_1[4] = 0;
    *(int32_t *)(param_1 + 2) = uVar5;
  }
  else {
    puVar4 = (int32_t *)FUN_180136820();
    lVar8 = 4;
    puVar7 = *(int32_t **)(param_1 + 2);
    do {
      uVar5 = puVar4[1];
      *puVar7 = *puVar4;
      puVar7[1] = uVar5;
      uVar5 = puVar4[3];
      puVar7[2] = puVar4[2];
      puVar7[3] = uVar5;
      uVar5 = puVar4[5];
      puVar7[4] = puVar4[4];
      puVar7[5] = uVar5;
      uVar5 = puVar4[7];
      puVar7[6] = puVar4[6];
      puVar7[7] = uVar5;
      uVar5 = puVar4[9];
      puVar7[8] = puVar4[8];
      puVar7[9] = uVar5;
      uVar5 = puVar4[0xb];
      puVar7[10] = puVar4[10];
      puVar7[0xb] = uVar5;
      uVar5 = puVar4[0xd];
      puVar7[0xc] = puVar4[0xc];
      puVar7[0xd] = uVar5;
      puVar1 = puVar4 + 0xe;
      uVar5 = puVar4[0xf];
      puVar4 = puVar4 + 0x10;
      puVar7[0xe] = *puVar1;
      puVar7[0xf] = uVar5;
      lVar8 = lVar8 + -1;
      puVar7 = puVar7 + 0x10;
    } while (lVar8 != 0);
    param_1[4] = 1;
  }
  lVar8 = FUN_180135cec();
  pwVar6 = *(wchar_t **)(lVar8 + 8);
  *(wchar_t **)(param_1 + 6) = pwVar6;
  if (pwVar6 != (wchar_t *)0x0) {
    pwVar6 = _wcsdup(pwVar6);
    *(wchar_t **)(param_1 + 6) = pwVar6;
  }
  return param_1;
}

// ---- Function: FUN_180124c7c ----
uint FUN_180124c7c(uint param_1,UINT *param_2)

{
  UINT UVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  LPCWSTR pWVar5;
  char local_res10;
  char local_res11;
  int32_t local_res12;
  byte local_res18;
  int32_t local_res19;
  
  if (param_2 == (UINT *)0x0) {
    lVar3 = FUN_180135cec();
    pWVar5 = *(LPCWSTR *)(lVar3 + 0x10);
    UVar1 = ___lc_codepage_func();
  }
  else {
    pWVar5 = *(LPCWSTR *)(param_2 + 6);
    UVar1 = *param_2;
  }
  if (pWVar5 == (LPCWSTR)0x0) {
    if (param_1 - 0x41 < 0x1a) {
      return param_1 + 0x20;
    }
    return param_1;
  }
  if (param_1 < 0x100) {
    if (param_2 == (UINT *)0x0) {
      iVar2 = isupper(param_1);
      if (iVar2 == 0) {
        return param_1;
      }
LAB_180124d32:
      lVar3 = FUN_180136820();
      uVar4 = *(ushort *)(lVar3 + (ulonglong)((int)param_1 >> 8 & 0xff) * 2) & 0x8000;
      goto LAB_180124d0c;
    }
    if ((*(byte *)(*(longlong *)(param_2 + 2) + (longlong)(int)param_1 * 2) & 1) == 0) {
      return param_1;
    }
  }
  else if (param_2 == (UINT *)0x0) goto LAB_180124d32;
  uVar4 = (uint)(int)*(short *)(*(longlong *)(param_2 + 2) +
                               ((longlong)(int)param_1 >> 8 & 0xffU) * 2) >> 0xf & 1;
LAB_180124d0c:
  if (uVar4 == 0) {
    iVar2 = 1;
    local_res11 = '\0';
    local_res10 = (char)param_1;
  }
  else {
    iVar2 = 2;
    local_res12 = 0;
    local_res10 = (char)(param_1 >> 8);
    local_res11 = (char)param_1;
  }
  iVar2 = FUN_180124fac(pWVar5,0x100,&local_res10,iVar2,&local_res18,3,UVar1,1);
  if ((iVar2 != 0) && (param_1 = (uint)local_res18, iVar2 != 1)) {
    param_1 = (uint)CONCAT11(local_res18,local_res19);
  }
  return param_1;
}

// ---- Function: FUN_180124db4 ----
uint FUN_180124db4(uint param_1,UINT *param_2)

{
  UINT UVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  LPCWSTR pWVar6;
  char local_res10;
  char local_res11;
  int32_t local_res12;
  byte local_res18;
  int32_t local_res19;
  
  if (param_2 == (UINT *)0x0) {
    lVar4 = FUN_180135cec();
    pWVar6 = *(LPCWSTR *)(lVar4 + 0x10);
    UVar1 = ___lc_codepage_func();
  }
  else {
    pWVar6 = *(LPCWSTR *)(param_2 + 6);
    UVar1 = *param_2;
  }
  if (pWVar6 == (LPCWSTR)0x0) {
    if (param_1 - 0x61 < 0x1a) {
      return param_1 - 0x20;
    }
    return param_1;
  }
  iVar3 = 2;
  if (param_1 < 0x100) {
    if (param_2 == (UINT *)0x0) {
      iVar2 = islower(param_1);
      if (iVar2 == 0) {
        return param_1;
      }
LAB_180124e71:
      lVar4 = FUN_180136820();
      uVar5 = *(ushort *)(lVar4 + (ulonglong)((int)param_1 >> 8 & 0xff) * 2) & 0x8000;
      goto LAB_180124e51;
    }
    if ((*(byte *)(*(longlong *)(param_2 + 2) + (longlong)(int)param_1 * 2) & 2) == 0) {
      return param_1;
    }
  }
  else if (param_2 == (UINT *)0x0) goto LAB_180124e71;
  uVar5 = (uint)(int)*(short *)(*(longlong *)(param_2 + 2) +
                               ((longlong)(int)param_1 >> 8 & 0xffU) * 2) >> 0xf & 1;
LAB_180124e51:
  if (uVar5 == 0) {
    iVar3 = 1;
    local_res11 = '\0';
    local_res10 = (char)param_1;
  }
  else {
    local_res12 = 0;
    local_res10 = (char)(param_1 >> 8);
    local_res11 = (char)param_1;
  }
  iVar3 = FUN_180124fac(pWVar6,0x200,&local_res10,iVar3,&local_res18,3,UVar1,1);
  if ((iVar3 != 0) && (param_1 = (uint)local_res18, iVar3 != 1)) {
    param_1 = (uint)CONCAT11(local_res18,local_res19);
  }
  return param_1;
}

