#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_180147028 ----
int FUN_180147028(ushort *param_1)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  int iVar5;
  
  uVar3 = *param_1;
  puVar4 = param_1 + 1;
  iVar5 = 0;
  do {
    if (uVar3 == 0) {
      return iVar5;
    }
    if ((ushort)(uVar3 - 0x61) < 6) {
      sVar1 = -0x27;
LAB_180147055:
      uVar2 = uVar3 + sVar1;
    }
    else {
      uVar2 = uVar3;
      if ((ushort)(uVar3 - 0x41) < 6) {
        sVar1 = -7;
        goto LAB_180147055;
      }
    }
    uVar3 = *puVar4;
    iVar5 = iVar5 * 0x10 + -0x30 + (uint)uVar2;
    puVar4 = puVar4 + 1;
  } while( true );
}

// ---- Function: ProcessCodePage ----
/* Library Function - Single Match
    ProcessCodePage
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

UINT ProcessCodePage(wchar_t *param_1,longlong param_2,int32_t param_3,int32_t param_4)

{
  int iVar1;
  uint uVar2;
  UINT UVar3;
  int32_t *puVar4;
  UINT local_res8 [2];
  
  if (((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) ||
     (iVar1 = wcscmp(param_1,L"ACP"), iVar1 == 0)) {
    iVar1 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x20001004,(LPWSTR)local_res8,2);
    if (iVar1 != 0) {
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      UVar3 = GetACP();
      return UVar3;
    }
  }
  else {
    puVar4 = &DAT_18017ced0;
    iVar1 = wcscmp(param_1,L"OCP");
    if (iVar1 != 0) {
      uVar2 = FUN_1801382b0((longlong)param_1,puVar4,param_3,param_4);
      return uVar2;
    }
    iVar1 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x2000000b,(LPWSTR)local_res8,2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  return 0;
}

// ---- Function: FUN_180147128 ----
bool FUN_180147128(uint param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  __acrt_ptd *p_Var4;
  longlong lVar5;
  short *psVar6;
  bool bVar7;
  uint local_res8 [2];
  
  p_Var4 = FUN_1801387d8();
  iVar3 = GetLocaleInfoW(param_1 & 0x3ff | 0x400,0x20000001,(LPWSTR)local_res8,2);
  if (iVar3 == 0) {
    bVar7 = false;
  }
  else if ((param_1 == local_res8[0]) || (param_2 == 0)) {
    bVar7 = true;
  }
  else {
    psVar2 = *(short **)(p_Var4 + 0x98);
    iVar3 = 0;
    sVar1 = *psVar2;
    psVar6 = psVar2;
    while ((psVar6 = psVar6 + 1, (ushort)(sVar1 - 0x41U) < 0x1a || ((ushort)(sVar1 - 0x61U) < 0x1a))
          ) {
      iVar3 = iVar3 + 1;
      sVar1 = *psVar6;
    }
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (psVar2[lVar5] != 0);
    bVar7 = iVar3 != (int)lVar5;
  }
  return bVar7;
}

// ---- Function: TranslateName ----
/* Library Function - Single Match
    TranslateName
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong TranslateName(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (-1 < param_2) {
    do {
      iVar1 = (iVar3 + param_2) / 2;
      in_RAX = FUN_18013c080((WCHAR *)*param_3,*(WCHAR **)((longlong)iVar1 * 0x10 + param_1));
      if ((int)in_RAX == 0) {
        lVar2 = param_1 + 8 + (longlong)iVar1 * 0x10;
        *param_3 = lVar2;
        return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      }
      if ((int)in_RAX < 0) {
        param_2 = iVar1 + -1;
      }
      else {
        iVar3 = iVar1 + 1;
      }
    } while (iVar3 <= param_2);
  }
  return in_RAX & 0xffffffffffffff00;
}

// ---- Function: __acrt_get_qualified_locale_downlevel ----
/* Library Function - Single Match
    __acrt_get_qualified_locale_downlevel
   
   Library: Visual Studio 2019 Release */

void __acrt_get_qualified_locale_downlevel
               (longlong param_1,UINT *param_2,__acrt_ptd *param_3,int32_t param_4)

{
  short *psVar1;
  UINT _Val;
  BOOL BVar2;
  int iVar3;
  __acrt_ptd *p_Var4;
  __acrt_ptd *p_Var5;
  ulonglong uVar6;
  __acrt_ptd *p_Var7;
  longlong lVar8;
  __acrt_ptd *p_Var9;
  int32_t auStack_78 [32];
  int32_t local_58;
  LCID local_50;
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStack_78;
  p_Var9 = param_3;
  p_Var4 = FUN_1801387d8();
  local_58 = 0;
  local_50 = 0;
  p_Var5 = FUN_1801387d8();
  p_Var7 = p_Var4 + 0xa0;
  *(int32_t **)(p_Var5 + 0x3a0) = &local_58;
  psVar1 = (short *)(param_1 + 0x80);
  *(longlong *)(p_Var4 + 0x98) = param_1;
  *(short **)p_Var7 = psVar1;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    p_Var9 = p_Var7;
    TranslateName(0x18017c320,DAT_18017c490 + -1,(longlong *)p_Var7);
  }
  uVar6 = local_58;
  local_58 = local_58 & 0xffffffff00000000;
  if ((*(short **)(p_Var4 + 0x98) == (short *)0x0) || (**(short **)(p_Var4 + 0x98) == 0)) {
    if ((*(short **)p_Var7 == (short *)0x0) || (**(short **)p_Var7 == 0)) {
      local_58._4_4_ = SUB84(uVar6,4);
      local_58 = CONCAT44(local_58._4_4_,0x104);
      local_50 = GetUserDefaultLCID();
      local_58 = CONCAT44(local_50,(uint)local_58);
    }
    else {
      p_Var7 = FUN_1801387d8();
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (*(short *)(*(longlong *)(p_Var7 + 0xa0) + lVar8 * 2) != 0);
      *(uint *)(p_Var7 + 0xb4) = (uint)(lVar8 == 3);
      EnumSystemLocalesW(FUN_180146a88,1);
      if ((local_58 & 4) == 0) {
        local_58 = local_58 & 0xffffffff00000000;
      }
    }
LAB_1801473d8:
    if ((uint)local_58 == 0) goto LAB_1801474bf;
  }
  else {
    if ((*(short **)p_Var7 == (short *)0x0) || (**(short **)p_Var7 == 0)) {
      GetLcidFromLanguage((byte *)&local_58);
    }
    else {
      GetLcidFromLangCountry((uint *)&local_58);
    }
    if ((uint)local_58 == 0) {
      p_Var9 = p_Var4 + 0x98;
      uVar6 = TranslateName(0x18017bf00,DAT_18017c310 + -1,(longlong *)p_Var9);
      if ((char)uVar6 != '\0') {
        if ((*(short **)p_Var7 == (short *)0x0) || (**(short **)p_Var7 == 0)) {
          GetLcidFromLanguage((byte *)&local_58);
        }
        else {
          GetLcidFromLangCountry((uint *)&local_58);
        }
      }
      goto LAB_1801473d8;
    }
  }
  _Val = ProcessCodePage((wchar_t *)(-(ulonglong)(param_1 != 0) & param_1 + 0x100U),
                         (longlong)&local_58,p_Var9,param_4);
  if ((_Val != 0) && (BVar2 = IsValidCodePage(_Val & 0xffff), BVar2 != 0)) {
    BVar2 = IsValidLocale(local_58._4_4_,1);
    if (BVar2 != 0) {
      if (param_2 != (UINT *)0x0) {
        *param_2 = _Val;
      }
      FUN_18013abb4(local_58._4_4_,(wchar_t *)(p_Var4 + 0x2f0),0x55,0);
      if (param_3 != (__acrt_ptd *)0x0) {
        FUN_18013abb4(local_58._4_4_,(wchar_t *)(param_3 + 0x120),0x55,0);
        iVar3 = GetLocaleInfoW(local_58._4_4_,0x1001,(LPWSTR)param_3,0x40);
        if ((iVar3 != 0) &&
           (iVar3 = GetLocaleInfoW(local_50,0x1002,(LPWSTR)(param_3 + 0x80),0x40), iVar3 != 0)) {
          _itow_s(_Val,(wchar_t *)(param_3 + 0x100),0x10,10);
        }
      }
    }
  }
LAB_1801474bf:
  FUN_1801252c0(local_48 ^ (ulonglong)auStack_78);
  return;
}

// ---- Function: FUN_1801474dc ----
int FUN_1801474dc(uint param_1,wchar_t *param_2,int param_3)

{
  int32_t (*_Src) [32];
  int iVar1;
  int iVar2;
  errno_t eVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (((((param_1 & 0xfffff3ff) != 0) || (param_1 == 0xc00)) &&
      ((param_2 != (wchar_t *)0x0 || (param_3 < 1)))) && (-1 < param_3)) {
    iVar6 = 0;
    iVar7 = 0xe3;
    do {
      iVar2 = (iVar7 + iVar6) / 2;
      iVar5 = param_1 - *(uint *)(&DAT_18017cef0 + (longlong)iVar2 * 0x10);
      if (param_1 == *(uint *)(&DAT_18017cef0 + (longlong)iVar2 * 0x10)) {
        if (iVar2 < 0) {
          return 0;
        }
        _Src = (int32_t (*) [32])(&PTR_DAT_18017cef8)[(longlong)iVar2 * 2];
        uVar4 = FUN_180136b94(_Src,0x55);
        if (0 < param_3) {
          if (param_3 <= (int)uVar4) {
            return 0;
          }
          eVar3 = wcscpy_s(param_2,(longlong)param_3,(wchar_t *)_Src);
          if (eVar3 != 0) {
                    
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        return (int)uVar4 + 1;
      }
      iVar1 = iVar2 + -1;
      if (-1 < iVar5) {
        iVar1 = iVar7;
      }
      iVar7 = iVar1;
      if (-1 < iVar5) {
        iVar6 = iVar2 + 1;
      }
    } while (iVar6 <= iVar7);
  }
  return 0;
}

// ---- Function: FUN_1801475c4 ----
int32_t FUN_1801475c4(ushort *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != (ushort *)0x0) {
    iVar3 = 0;
    iVar4 = 0xe3;
    do {
      iVar1 = (iVar4 + iVar3) / 2;
      iVar2 = __ascii_wcsnicmp(param_1,(ushort *)(&PTR_DAT_18017e940)[(longlong)iVar1 * 2],0x55);
      if (iVar2 == 0) {
        iVar3 = *(int *)(&DAT_18017e948 + (longlong)iVar1 * 0x10);
        if (iVar3 < 0) {
          return 0;
        }
        if (0xe3 < (ulonglong)(longlong)iVar3) {
          return 0;
        }
        return *(int32_t *)(&DAT_18017cef0 + (longlong)iVar3 * 0x10);
      }
      if (iVar2 < 0) {
        iVar4 = iVar1 + -1;
      }
      else {
        iVar3 = iVar1 + 1;
      }
    } while (iVar3 <= iVar4);
  }
  return 0;
}

// ---- Function: FUN_180147668 ----
int32_t FUN_180147668(void)

{
  return DAT_1801ee8b8;
}

// ---- Function: FUN_180147670 ----
WCHAR FUN_180147670(WCHAR param_1,__crt_locale_pointers *param_2)

{
  int iVar1;
  byte bVar2;
  WCHAR local_res8 [8];
  WCHAR local_res18 [8];
  longlong local_28;
  longlong local_20;
  char local_10;
  
  if (param_1 == L'\xffff') goto LAB_18014775c;
  local_res8[0] = param_1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_2);
  bVar2 = (byte)local_res8[0];
  if (*(int *)(local_20 + 0xc) == 0xfde9) {
    if ((ushort)local_res8[0] < 0x80) {
      if (((&DAT_18017a972)[(ulonglong)bVar2 * 2] & 1) == 0) {
        param_2 = (__crt_locale_pointers *)(ulonglong)bVar2;
      }
      else {
LAB_1801476f0:
        param_2 = (__crt_locale_pointers *)
                  (ulonglong)*(byte *)(*(longlong *)(local_20 + 0x110) + (ulonglong)bVar2);
      }
    }
    else {
LAB_18014770c:
      iVar1 = __acrt_LCMapStringW(*(ushort **)(local_20 + 0x138),0x100,
                                  (int32_t (*) [32])local_res8,1,local_res18,1);
      param_2 = (__crt_locale_pointers *)(ulonglong)(ushort)local_res8[0];
      if (iVar1 != 0) {
        param_2 = (__crt_locale_pointers *)(ulonglong)(ushort)local_res18[0];
      }
    }
  }
  else {
    param_2 = (__crt_locale_pointers *)(ulonglong)(ushort)local_res8[0];
    if ((ushort)local_res8[0] < 0x100) {
      if (((&DAT_18017a972)[((ulonglong)param_2 & 0xff) * 2] & 1) != 0) goto LAB_1801476f0;
      param_2 = (__crt_locale_pointers *)(ulonglong)bVar2;
    }
    else if (*(longlong *)(local_20 + 0x138) != 0) goto LAB_18014770c;
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
LAB_18014775c:
  return (WCHAR)param_2;
}

// ---- Function: FUN_180147764 ----
uint FUN_180147764(uint param_1)

{
  return param_1 & 0x300;
}

// ---- Function: FUN_180147770 ----
uint FUN_180147770(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (ushort)MXCSR & 0x8040;
  if (uVar1 == 0x8000) {
    uVar4 = 0xc00;
  }
  else if (uVar1 == 0x40) {
    uVar4 = 0x800;
  }
  else {
    uVar4 = 0;
    if (uVar1 == 0x8040) {
      uVar4 = 0x400;
    }
  }
  uVar2 = MXCSR & 0x6000;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else if (uVar2 == 0x2000) {
    uVar3 = 0x100;
  }
  else if (uVar2 == 0x4000) {
    uVar3 = 0x200;
  }
  else {
    uVar3 = 0x300;
    if (uVar2 != 0x6000) {
      uVar3 = 0;
    }
  }
  uVar4 = ((((MXCSR >> 2 & 0x400 | MXCSR & 0x800) >> 2 | MXCSR & 0x400) >> 2 | MXCSR & 0x200) >> 3 |
          MXCSR & 0x180) >> 3 | uVar4 | uVar3;
  return (uVar3 | uVar4 * 4) << 0x16 | uVar4;
}

// ---- Function: FUN_180147854 ----
uint FUN_180147854(void)

{
  uint uVar1;
  
  uVar1 = (((MXCSR & 0x3f) >> 2 & 8 | MXCSR & 0x10) >> 2 | MXCSR & 8) >> 1 |
          ((MXCSR & 2) << 3 | MXCSR & 4) * 2 | (MXCSR & 1) << 4;
  return uVar1 << 0x18 | uVar1;
}

// ---- Function: FUN_1801478ac ----
void FUN_1801478ac(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  
  uVar5 = param_1 >> 0x18;
  uVar2 = param_1 >> 0x16 & 0x300;
  uVar9 = 0;
  uVar7 = 0x400;
  uVar11 = 0x800;
  uVar4 = param_1 & 0xc00;
  if (uVar4 == 0x400) {
    uVar9 = 0x8040;
  }
  else if (uVar4 == 0x800) {
    uVar9 = 0x40;
  }
  else if (uVar4 == 0xc00) {
    uVar9 = 0x8000;
  }
  uVar6 = 0x100;
  uVar10 = 0x200;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar8 = 0x2000;
      goto LAB_18014794c;
    }
    if (uVar2 == 0x200) {
      uVar8 = 0x4000;
      goto LAB_18014794c;
    }
    if (uVar2 == 0x300) {
      uVar8 = 0x6000;
      goto LAB_18014794c;
    }
  }
  uVar8 = 0;
LAB_18014794c:
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x1000;
  }
  if ((uVar5 & 2) == 0) {
    uVar11 = 0;
  }
  if ((uVar5 & 4) == 0) {
    uVar7 = 0;
  }
  if ((uVar5 & 8) == 0) {
    uVar10 = 0;
  }
  if ((uVar5 & 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80;
  }
  if ((uVar5 & 0x20) == 0) {
    uVar6 = 0;
  }
  MXCSR = MXCSR & 0xffff003f |
          (uint)(ushort)(uVar8 | uVar3 | uVar11 | uVar7 | uVar10 | uVar1 | uVar6 | uVar9);
  return;
}

// ---- Function: FUN_1801479e4 ----
void FUN_1801479e4(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_1 >> 0x18;
  bVar3 = ((uVar2 & 0x3f) >> 4 & 1) != 0;
  uVar1 = (uint)bVar3;
  MXCSR = MXCSR & 0xffffffc0 |
          -(uint)((uVar2 & 1) != 0) & 0x20 | -(uint)((uVar2 & 2) != 0) & 0x10 |
          -(uint)((uVar2 & 4) != 0) & 8 | -(uint)((uVar2 & 8) != 0) & 4 | uVar1 |
          (uVar1 - bVar3) - (uint)((uVar2 & 0x20) != 0) & 2;
  return;
}

// ---- Function: __acrt_lowio_create_handle_array ----
/* Library Function - Single Match
    __acrt_lowio_create_handle_array
   
   Library: Visual Studio 2019 Release */

int32_t * __acrt_lowio_create_handle_array(void)

{
  uint uVar1;
  int32_t *puVar2;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  int32_t *puVar3;
  
  puVar2 = (int32_t *)_calloc_base(0x40,0x48);
  puVar5 = (int32_t *)0x0;
  if ((puVar2 != (int32_t *)0x0) && (puVar5 = puVar2, puVar2 != puVar2 + 0x240)) {
    puVar6 = puVar2 + 6;
    do {
      FUN_18013aae0((LPCRITICAL_SECTION)(puVar6 + -6),4000,0);
      puVar6[-1] = 0xffffffffffffffff;
      puVar4 = (int32_t *)((longlong)puVar6 + 0xe);
      *(byte *)((longlong)puVar6 + 0xd) = *(byte *)((longlong)puVar6 + 0xd) & 0xf8;
      *puVar6 = 0;
      *(int32_t *)(puVar6 + 1) = 0xa0a0000;
      *(int32_t *)((longlong)puVar6 + 0xc) = 10;
      puVar3 = (int32_t *)0x0;
      do {
        *puVar4 = 0;
        uVar1 = (int)puVar3 + 1;
        puVar3 = (int32_t *)(ulonglong)uVar1;
        puVar4 = puVar4 + 1;
      } while (uVar1 < 5);
      puVar3 = puVar6 + 3;
      puVar6 = puVar6 + 9;
    } while (puVar3 != puVar2 + 0x240);
  }
  FUN_18013bf3c((LPVOID)0x0);
  return puVar5;
}

// ---- Function: __acrt_lowio_destroy_handle_array ----
/* Library Function - Single Match
    __acrt_lowio_destroy_handle_array
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    lpCriticalSection = param_1;
    if (param_1 != (LPCRITICAL_SECTION)&param_1[0x73].LockCount) {
      do {
        DeleteCriticalSection(lpCriticalSection);
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount;
      } while (lpCriticalSection != (LPCRITICAL_SECTION)&param_1[0x73].LockCount);
    }
    FUN_18013bf3c(param_1);
  }
  return;
}

// ---- Function: __acrt_lowio_ensure_fh_exists ----
/* Library Function - Single Match
    __acrt_lowio_ensure_fh_exists
   
   Library: Visual Studio 2019 Release */

longlong __acrt_lowio_ensure_fh_exists(uint param_1)

{
  int iVar1;
  ulong *puVar2;
  longlong lVar3;
  int32_t *puVar4;
  longlong lVar5;
  
  if (param_1 < 0x2000) {
    lVar3 = 0;
    __acrt_lock(7);
    lVar5 = lVar3;
    iVar1 = DAT_1801ee810;
    while (iVar1 <= (int)param_1) {
      if ((&DAT_1801ee410)[lVar5] == 0) {
        puVar4 = __acrt_lowio_create_handle_array();
        (&DAT_1801ee410)[lVar5] = puVar4;
        if (puVar4 == (int32_t *)0x0) {
          lVar3 = 0xc;
          break;
        }
        iVar1 = DAT_1801ee810 + 0x40;
        DAT_1801ee810 = iVar1;
      }
      lVar5 = lVar5 + 1;
    }
    __acrt_unlock(7);
  }
  else {
    puVar2 = __doserrno();
    *puVar2 = 9;
    FUN_18012b794();
    lVar3 = 9;
  }
  return lVar3;
}

