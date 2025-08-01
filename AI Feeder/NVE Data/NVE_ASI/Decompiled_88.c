#include <stdint.h>
#include <stddef.h>

// ---- Function: __acrt_lowio_lock_fh ----
/* Library Function - Single Match
    __acrt_lowio_lock_fh
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lowio_lock_fh(uint param_1)

{
                    
                    
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48));
  return;
}

// ---- Function: FUN_180147c20 ----
int32_t FUN_180147c20(uint param_1,HANDLE param_2)

{
  int iVar1;
  ulong *puVar2;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_1801ee810)) {
    if (*(longlong *)
         ((&DAT_1801ee410)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
         (ulonglong)(param_1 & 0x3f) * 0x48) == -1) {
      iVar1 = FUN_18014bb58();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_180147ca1;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_180147ca1:
      *(HANDLE *)
       ((&DAT_1801ee410)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
       (ulonglong)(param_1 & 0x3f) * 0x48) = param_2;
      return 0;
    }
  }
  puVar2 = __doserrno();
  *puVar2 = 9;
  puVar2 = __doserrno();
  *puVar2 = 0;
  return 0xffffffff;
}

// ---- Function: __acrt_lowio_unlock_fh ----
/* Library Function - Single Match
    __acrt_lowio_unlock_fh
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lowio_unlock_fh(uint param_1)

{
                    
                    
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48));
  return;
}

// ---- Function: _alloc_osfhnd ----
/* Library Function - Single Match
    _alloc_osfhnd
   
   Library: Visual Studio 2019 Release */

int __cdecl _alloc_osfhnd(void)

{
  LPCRITICAL_SECTION p_Var1;
  int32_t *puVar2;
  uint uVar3;
  int iVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  __acrt_lock(7);
  uVar3 = 0xffffffff;
  iVar4 = 0;
  do {
    if (0x7f < iVar4) {
LAB_180147e1f:
      __acrt_unlock(7);
      return uVar3;
    }
    p_Var1 = (LPCRITICAL_SECTION)(&DAT_1801ee410)[iVar4];
    if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
      puVar2 = __acrt_lowio_create_handle_array();
      (&DAT_1801ee410)[iVar4] = puVar2;
      if (puVar2 != (int32_t *)0x0) {
        DAT_1801ee810 = DAT_1801ee810 + 0x40;
        uVar3 = iVar4 << 6;
        __acrt_lowio_lock_fh(uVar3);
        *(int32_t *)((&DAT_1801ee410)[(longlong)(int)uVar3 >> 6] + 0x38) = 1;
      }
      goto LAB_180147e1f;
    }
    for (lpCriticalSection = p_Var1;
        lpCriticalSection != (LPCRITICAL_SECTION)&p_Var1[0x73].LockCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount) {
      if (((ulonglong)lpCriticalSection[1].OwningThread & 1) == 0) {
        EnterCriticalSection(lpCriticalSection);
        if (((ulonglong)lpCriticalSection[1].OwningThread & 1) == 0) {
          uVar3 = (int)(((longlong)lpCriticalSection - (longlong)p_Var1) / 0x48) + iVar4 * 0x40;
          *(int32_t *)
           ((&DAT_1801ee410)[(longlong)(int)uVar3 >> 6] + 0x38 + (ulonglong)(uVar3 & 0x3f) * 0x48) =
               1;
          *(int32_t *)
           ((&DAT_1801ee410)[(longlong)(int)uVar3 >> 6] + 0x28 + (ulonglong)(uVar3 & 0x3f) * 0x48) =
               0xffffffffffffffff;
          goto LAB_180147e1f;
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

// ---- Function: FUN_180147e48 ----
int32_t FUN_180147e48(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulong *puVar3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_1801ee810)) {
    uVar2 = (ulonglong)(param_1 & 0x3f);
    if (((*(byte *)((&DAT_1801ee410)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 + uVar2 * 0x48)
         & 1) != 0) &&
       (*(longlong *)
         ((&DAT_1801ee410)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) != -1)) {
      iVar1 = FUN_18014bb58();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_180147ec8;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_180147ec8:
      *(int32_t *)
       ((&DAT_1801ee410)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) =
           0xffffffffffffffff;
      return 0;
    }
  }
  puVar3 = __doserrno();
  *puVar3 = 9;
  puVar3 = __doserrno();
  *puVar3 = 0;
  return 0xffffffff;
}

// ---- Function: FUN_180147f04 ----
int32_t FUN_180147f04(uint param_1)

{
  ulong *puVar1;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = __doserrno();
    *puVar1 = 0;
    puVar1 = __doserrno();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1801ee810)) {
      if ((*(byte *)((&DAT_1801ee410)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(int32_t *)
                ((&DAT_1801ee410)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
                (ulonglong)(param_1 & 0x3f) * 0x48);
      }
    }
    puVar1 = __doserrno();
    *puVar1 = 0;
    puVar1 = __doserrno();
    *puVar1 = 9;
    FUN_18012b794();
  }
  return 0xffffffffffffffff;
}

// ---- Function: FUN_180147f7c ----
byte FUN_180147f7c(uint param_1)

{
  ulong *puVar1;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = __doserrno();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1801ee810)) {
      return *(byte *)((&DAT_1801ee410)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40;
    }
    puVar1 = __doserrno();
    *puVar1 = 9;
    FUN_18012b794();
  }
  return 0;
}

// ---- Function: FUN_180147fdc ----
void FUN_180147fdc(int32_t *param_1,byte *param_2,ulonglong param_3,uint *param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  uint local_18 [4];
  
  uVar1 = FUN_18014bb60((ulonglong)local_18,param_2,param_3,param_4,param_5);
  if (uVar1 < 5) {
    if (0xffff < local_18[0]) {
      local_18[0] = 0xfffd;
    }
    if (param_1 != (int32_t *)0x0) {
      *param_1 = (short)local_18[0];
    }
  }
  return;
}

// ---- Function: FUN_180148020 ----
longlong FUN_180148020(ushort *param_1,int32_t *param_2,ulonglong param_3,uint *param_4,
                      longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ushort *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulonglong uVar7;
  uint local_res8 [2];
  
  pbVar6 = (byte *)*param_2;
  lVar1 = 0;
  if (param_1 == (ushort *)0x0) {
    while( true ) {
      if (*pbVar6 == 0) {
        uVar7 = 1;
      }
      else if (pbVar6[1] == 0) {
        uVar7 = 2;
      }
      else {
        uVar7 = (ulonglong)(pbVar6[2] != 0) + 3;
      }
      lVar2 = FUN_18014bb60(0,pbVar6,uVar7,param_4,param_5);
      if (lVar2 == -1) {
        *(int32_t *)(param_5 + 0x30) = 1;
        *(int32_t *)(param_5 + 0x2c) = 0x2a;
        return -1;
      }
      if (lVar2 == 0) break;
      if (lVar2 == 4) {
        lVar1 = lVar1 + 1;
      }
      pbVar6 = pbVar6 + lVar2;
      lVar1 = lVar1 + 1;
    }
  }
  else {
    puVar4 = param_1;
    pbVar5 = pbVar6;
    if (param_3 != 0) {
      do {
        if (*pbVar6 == 0) {
          uVar7 = 1;
        }
        else if (pbVar6[1] == 0) {
          uVar7 = 2;
        }
        else {
          uVar7 = (ulonglong)(pbVar6[2] != 0) + 3;
        }
        lVar1 = FUN_18014bb60((ulonglong)local_res8,pbVar6,uVar7,param_4,param_5);
        if (lVar1 == -1) {
          *param_2 = pbVar6;
          *(int32_t *)(param_5 + 0x30) = 1;
          *(int32_t *)(param_5 + 0x2c) = 0x2a;
          return -1;
        }
        pbVar5 = (byte *)0x0;
        if (lVar1 == 0) {
          *puVar4 = 0;
          break;
        }
        uVar3 = local_res8[0];
        if (0xffff < local_res8[0]) {
          pbVar5 = pbVar6;
          if (param_3 < 2) break;
          local_res8[0] = local_res8[0] - 0x10000;
          param_3 = param_3 - 1;
          *puVar4 = (ushort)(local_res8[0] >> 10) | 0xd800;
          puVar4 = puVar4 + 1;
          uVar3 = (uint)((ushort)local_res8[0] & 0x3ff | 0xdc00);
        }
        *puVar4 = (ushort)uVar3;
        pbVar5 = pbVar6 + lVar1;
        puVar4 = puVar4 + 1;
        param_3 = param_3 - 1;
        pbVar6 = pbVar5;
      } while (param_3 != 0);
    }
    *param_2 = pbVar5;
    lVar1 = (longlong)puVar4 - (longlong)param_1 >> 1;
  }
  return lVar1;
}

// ---- Function: _putwch_nolock ----
/* Library Function - Single Match
    _putwch_nolock
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

wint_t __cdecl _putwch_nolock(wchar_t _WCh)

{
  bool bVar1;
  BOOL BVar2;
  int32_t extraout_var;
  wchar_t local_res8 [4];
  DWORD local_res10 [6];
  
  local_res8[0] = _WCh;
  bVar1 = __dcrt_lowio_ensure_console_output_initialized();
  if (((int)CONCAT71(extraout_var,bVar1) == 0) ||
     (BVar2 = __dcrt_write_console(local_res8,1,local_res10), BVar2 == 0)) {
    local_res8[0] = L'\xffff';
  }
  return local_res8[0];
}

// ---- Function: __ascii_wcsnicmp ----
/* Library Function - Single Match
    __ascii_wcsnicmp
   
   Library: Visual Studio 2019 Release */

int __ascii_wcsnicmp(ushort *param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    uVar3 = uVar1 + 0x20;
    if (0x19 < uVar1 - 0x41) {
      uVar3 = (uint)uVar1;
    }
    uVar4 = uVar2 + 0x20;
    if (0x19 < uVar2 - 0x41) {
      uVar4 = (uint)uVar2;
    }
  } while (((uVar3 - uVar4 == 0) && (uVar3 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
  return uVar3 - uVar4;
}

// ---- Function: FUN_18014824c ----
int FUN_18014824c(WCHAR *param_1,WCHAR *param_2,longlong param_3)

{
  WCHAR WVar1;
  ushort uVar2;
  ushort extraout_AX;
  ushort uVar3;
  ushort extraout_AX_00;
  int iVar4;
  ulong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong local_38;
  longlong local_30 [2];
  char local_20;
  
  if (DAT_1801ee158 != 0) {
    if ((param_1 == (WCHAR *)0x0) || (param_2 == (WCHAR *)0x0)) {
      puVar5 = __doserrno();
      *puVar5 = 0x16;
      FUN_18012b794();
      iVar4 = 0x7fffffff;
    }
    else if (param_3 == 0) {
      iVar4 = 0;
    }
    else {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_38,(__crt_locale_pointers *)0x0);
      lVar7 = local_30[0];
      if (*(longlong *)(local_30[0] + 0x138) == 0) {
        iVar4 = __ascii_wcsnicmp((ushort *)param_1,(ushort *)param_2,param_3);
      }
      else {
        do {
          WVar1 = *param_1;
          param_1 = param_1 + 1;
          if ((ushort)WVar1 < 0x100) {
            uVar6 = (ulonglong)(byte)WVar1;
            if (((&DAT_18017a972)[uVar6 * 2] & 1) != 0) {
              uVar6 = (ulonglong)*(byte *)(uVar6 + *(longlong *)(lVar7 + 0x110));
            }
            uVar2 = (ushort)uVar6;
          }
          else {
            FUN_180147670(WVar1,(__crt_locale_pointers *)local_30);
            lVar7 = local_30[0];
            uVar2 = extraout_AX;
          }
          WVar1 = *param_2;
          param_2 = param_2 + 1;
          if ((ushort)WVar1 < 0x100) {
            uVar6 = (ulonglong)(byte)WVar1;
            if (((&DAT_18017a972)[uVar6 * 2] & 1) != 0) {
              uVar6 = (ulonglong)*(byte *)(uVar6 + *(longlong *)(lVar7 + 0x110));
            }
            uVar3 = (ushort)uVar6;
          }
          else {
            FUN_180147670(WVar1,(__crt_locale_pointers *)local_30);
            lVar7 = local_30[0];
            uVar3 = extraout_AX_00;
          }
          iVar4 = (uint)uVar2 - (uint)uVar3;
        } while (((iVar4 == 0) && (uVar2 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
      }
      if (local_20 != '\0') {
        *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) & 0xfffffffd;
      }
    }
    return iVar4;
  }
  if ((param_1 != (WCHAR *)0x0) && (param_2 != (WCHAR *)0x0)) {
    iVar4 = __ascii_wcsnicmp((ushort *)param_1,(ushort *)param_2,param_3);
    return iVar4;
  }
  local_30[0] = 0x180148263;
  puVar5 = __doserrno();
  *puVar5 = 0x16;
  local_30[0] = 0x18014826e;
  FUN_18012b794();
  return 0x7fffffff;
}

// ---- Function: FUN_1801483e8 ----
int FUN_1801483e8(byte *param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    bVar2 = *param_2;
    uVar3 = bVar1 + 0x20;
    if (0x19 < bVar1 - 0x41) {
      uVar3 = (uint)bVar1;
    }
    param_2 = param_2 + 1;
    uVar4 = bVar2 + 0x20;
    if (0x19 < bVar2 - 0x41) {
      uVar4 = (uint)bVar2;
    }
  } while (((uVar3 - uVar4 == 0) && (uVar3 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
  return uVar3 - uVar4;
}

// ---- Function: _strnicmp ----
/* Library Function - Single Match
    _strnicmp
   
   Library: Visual Studio 2019 Release */

int __cdecl _strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  ulong *puVar2;
  
  if (DAT_1801ee158 != 0) {
    iVar1 = _strnicmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
    return iVar1;
  }
  if (((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) && (_MaxCount < 0x80000000)) {
    iVar1 = FUN_1801483e8((byte *)_Str1,(byte *)_Str2,_MaxCount);
    return iVar1;
  }
  puVar2 = __doserrno();
  *puVar2 = 0x16;
  FUN_18012b794();
  return 0x7fffffff;
}

// ---- Function: _strnicmp_l ----
/* Library Function - Single Match
    _strnicmp_l
   
   Library: Visual Studio 2019 Release */

int __cdecl _strnicmp_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong *puVar4;
  longlong local_28;
  longlong local_20;
  char local_10;
  
  if (((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) || (0x7fffffff < _MaxCount)) {
    puVar4 = __doserrno();
    *puVar4 = 0x16;
    FUN_18012b794();
    iVar3 = 0x7fffffff;
  }
  else if (_MaxCount == 0) {
    iVar3 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)_Locale);
    do {
      bVar1 = *_Str1;
      _Str1 = (char *)((byte *)_Str1 + 1);
      bVar1 = *(byte *)((ulonglong)bVar1 + *(longlong *)(local_20 + 0x110));
      bVar2 = *_Str2;
      _Str2 = (char *)((byte *)_Str2 + 1);
      iVar3 = (uint)bVar1 - (uint)*(byte *)((ulonglong)bVar2 + *(longlong *)(local_20 + 0x110));
      if ((iVar3 != 0) || (bVar1 == 0)) break;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    if (local_10 != '\0') {
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
    }
  }
  return iVar3;
}

// ---- Function: common_sopen_dispatch__ ----
/* Library Function - Multiple Matches With Same Base Name
    int __cdecl common_sopen_dispatch<char>(char const * __ptr64 const,int,int,int,int * __ptr64
   const,int)
    int __cdecl common_sopen_dispatch<wchar_t>(wchar_t const * __ptr64 const,int,int,int,int *
   __ptr64 const,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulong common_sopen_dispatch<>
                (LPCSTR param_1,uint param_2,int param_3,ulonglong param_4,uint *param_5,int param_6
                )

{
  byte *pbVar1;
  ulong uVar2;
  ulong *puVar3;
  int local_18;
  ulong local_14;
  
  if (((param_5 == (uint *)0x0) || (*param_5 = 0xffffffff, param_1 == (LPCSTR)0x0)) ||
     ((param_6 != 0 && ((param_4 & 0xfffffe7f) != 0)))) {
    puVar3 = __doserrno();
    uVar2 = 0x16;
    *puVar3 = 0x16;
    FUN_18012b794();
  }
  else {
    local_18 = 0;
    local_14 = 0;
    uVar2 = FUN_180148c08(&local_18,param_5,param_1,param_2,param_3,(byte)param_4);
    if (local_18 != 0) {
      if (uVar2 != 0) {
        pbVar1 = (byte *)((&DAT_1801ee410)[(longlong)(int)*param_5 >> 6] + 0x38 +
                         (ulonglong)(*param_5 & 0x3f) * 0x48);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      local_14 = uVar2;
      __acrt_lowio_unlock_fh(*param_5);
    }
    if (uVar2 != 0) {
      *param_5 = 0xffffffff;
    }
  }
  return uVar2;
}

// ---- Function: common_sopen_dispatch__ ----
/* Library Function - Multiple Matches With Same Base Name
    int __cdecl common_sopen_dispatch<char>(char const * __ptr64 const,int,int,int,int * __ptr64
   const,int)
    int __cdecl common_sopen_dispatch<wchar_t>(wchar_t const * __ptr64 const,int,int,int,int *
   __ptr64 const,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulong common_sopen_dispatch<>
                (LPCWSTR param_1,uint param_2,int param_3,ulonglong param_4,uint *param_5,
                int param_6)

{
  byte *pbVar1;
  ulong uVar2;
  ulong *puVar3;
  int local_18;
  ulong local_14;
  
  if (((param_5 == (uint *)0x0) || (*param_5 = 0xffffffff, param_1 == (LPCWSTR)0x0)) ||
     ((param_6 != 0 && ((param_4 & 0xfffffe7f) != 0)))) {
    puVar3 = __doserrno();
    uVar2 = 0x16;
    *puVar3 = 0x16;
    FUN_18012b794();
  }
  else {
    local_18 = 0;
    local_14 = 0;
    uVar2 = FUN_180148d58(&local_18,param_5,param_1,param_2,param_3,(byte)param_4);
    if (local_18 != 0) {
      if (uVar2 != 0) {
        pbVar1 = (byte *)((&DAT_1801ee410)[(longlong)(int)*param_5 >> 6] + 0x38 +
                         (ulonglong)(*param_5 & 0x3f) * 0x48);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      local_14 = uVar2;
      __acrt_lowio_unlock_fh(*param_5);
    }
    if (uVar2 != 0) {
      *param_5 = 0xffffffff;
    }
  }
  return uVar2;
}

