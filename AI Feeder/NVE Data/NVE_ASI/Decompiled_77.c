#include <stdint.h>
#include <stddef.h>

// ---- Function: _isindst ----
/* Library Function - Single Match
    _isindst
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _isindst(tm *_Time)

{
  bool bVar1;
  int32_t extraout_var;
  
  __acrt_lock(6);
  bVar1 = FUN_18013b35c(&_Time->tm_sec);
  __acrt_unlock(6);
  return (int)CONCAT71(extraout_var,bVar1);
}

// ---- Function: FUN_18013bf3c ----
void FUN_18013bf3c(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_1801ee8a8,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = __acrt_errno_from_os_error(DVar2);
    puVar4 = __doserrno();
    *puVar4 = uVar3;
  }
  return;
}

// ---- Function: _malloc_base ----
/* Library Function - Single Match
    _malloc_base
   
   Library: Visual Studio 2019 Release */

LPVOID _malloc_base(ulonglong param_1)

{
  int iVar1;
  int32_t *puVar2;
  LPVOID pvVar3;
  ulong *puVar4;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_1801ee8a8,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar1 = FUN_180147668();
    } while ((iVar1 != 0) && (puVar2 = FUN_180136d74(param_1), (int)puVar2 != 0));
  }
  puVar4 = __doserrno();
  *puVar4 = 0xc;
  return (LPVOID)0x0;
}

// ---- Function: wcscpy_s ----
/* Library Function - Single Match
    wcscpy_s
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl wcscpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  ulong *puVar2;
  ulong uVar3;
  wchar_t *pwVar4;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    if (_Src != (wchar_t *)0x0) {
      pwVar4 = _Dst;
      do {
        wVar1 = *(wchar_t *)(((longlong)_Src - (longlong)_Dst) + (longlong)pwVar4);
        *pwVar4 = wVar1;
        pwVar4 = pwVar4 + 1;
        if (wVar1 == L'\0') {
          return 0;
        }
        _SizeInWords = _SizeInWords - 1;
      } while (_SizeInWords != 0);
      *_Dst = L'\0';
      puVar2 = __doserrno();
      uVar3 = 0x22;
      goto LAB_18013bffc;
    }
    *_Dst = L'\0';
  }
  puVar2 = __doserrno();
  uVar3 = 0x16;
LAB_18013bffc:
  *puVar2 = uVar3;
  FUN_18012b794();
  return uVar3;
}

// ---- Function: __ascii_wcsicmp ----
/* Library Function - Single Match
    __ascii_wcsicmp
   
   Library: Visual Studio 2019 Release */

void __ascii_wcsicmp(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
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
  } while ((uVar3 == uVar4) && (uVar3 != 0));
  return;
}

// ---- Function: FUN_18013c080 ----
ulonglong FUN_18013c080(WCHAR *param_1,WCHAR *param_2)

{
  WCHAR WVar1;
  ushort uVar2;
  ushort extraout_AX;
  ushort uVar3;
  ushort extraout_AX_00;
  uint uVar4;
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
      uVar6 = 0x7fffffff;
    }
    else {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_38,(__crt_locale_pointers *)0x0);
      lVar7 = local_30[0];
      if (*(longlong *)(local_30[0] + 0x138) == 0) {
        uVar4 = __ascii_wcsicmp((ushort *)param_1,(ushort *)param_2);
        uVar6 = (ulonglong)uVar4;
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
          uVar4 = (uint)uVar2 - (uint)uVar3;
          uVar6 = (ulonglong)uVar4;
        } while ((uVar4 == 0) && (uVar2 != 0));
      }
      if (local_20 != '\0') {
        *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) & 0xfffffffd;
      }
    }
    return uVar6;
  }
  if ((param_1 != (WCHAR *)0x0) && (param_2 != (WCHAR *)0x0)) {
    uVar6 = __ascii_wcsicmp((ushort *)param_1,(ushort *)param_2);
    return uVar6;
  }
  local_30[0] = 0x18013c097;
  puVar5 = __doserrno();
  *puVar5 = 0x16;
  local_30[0] = 0x18013c0a2;
  FUN_18012b794();
  return 0x7fffffff;
}

// ---- Function: FUN_18013c1fc ----
void FUN_18013c1fc(longlong param_1,longlong *param_2)

{
  int32_t **ppuVar1;
  
  if ((*param_2 != DAT_1801ee160) && ((DAT_1801eb774 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    ppuVar1 = FUN_180144e28();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}

// ---- Function: FUN_18013c230 ----
void FUN_18013c230(longlong param_1,longlong *param_2,longlong param_3)

{
  int32_t **ppuVar1;
  
  if ((*param_2 != (&DAT_1801ee160)[param_3]) && ((DAT_1801eb774 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    ppuVar1 = FUN_180144e28();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}

// ---- Function: FUN_18013c268 ----
void FUN_18013c268(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_2 != DAT_1801ee868) && ((DAT_1801eb774 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_180143b18();
    *param_2 = lVar1;
  }
  return;
}

// ---- Function: FUN_18013c29c ----
void FUN_18013c29c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((*param_2 != (&DAT_1801ee868)[param_3]) && ((DAT_1801eb774 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    lVar1 = FUN_180143b18();
    *param_2 = lVar1;
  }
  return;
}

// ---- Function: _calloc_base ----
/* Library Function - Single Match
    _calloc_base
   
   Library: Visual Studio 2019 Release */

LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  int32_t *puVar2;
  LPVOID pvVar3;
  ulong *puVar4;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_1801ee8a8,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar1 = FUN_180147668();
    } while ((iVar1 != 0) && (puVar2 = FUN_180136d74(dwBytes), (int)puVar2 != 0));
  }
  puVar4 = __doserrno();
  *puVar4 = 0xc;
  return (LPVOID)0x0;
}

// ---- Function: _dtest ----
/* Library Function - Single Match
    _dtest
   
   Library: Visual Studio 2019 Release */

short _dtest(short *param_1)

{
  short sVar1;
  
  if ((param_1[3] & 0x7ff0U) == 0x7ff0) {
    if ((((*(byte *)(param_1 + 3) & 0xf) != 0) || (param_1[2] != 0)) ||
       ((param_1[1] != 0 || (sVar1 = 1, *param_1 != 0)))) {
      return 2;
    }
  }
  else if (((((param_1[3] & 0x7fffU) != 0) || (sVar1 = 0, param_1[2] != 0)) || (param_1[1] != 0)) ||
          (*param_1 != 0)) {
    sVar1 = ((param_1[3] & 0x7ff0U) != 0) - 2;
  }
  return sVar1;
}

// ---- Function: _fdtest ----
/* Library Function - Single Match
    _fdtest
   
   Library: Visual Studio 2019 Release */

short _fdtest(short *param_1)

{
  short sVar1;
  
  if ((param_1[1] & 0x7f80U) == 0x7f80) {
    if (((*(byte *)(param_1 + 1) & 0x7f) != 0) || (sVar1 = 1, *param_1 != 0)) {
      return 2;
    }
  }
  else if (((param_1[1] & 0x7fffU) != 0) || (sVar1 = 0, *param_1 != 0)) {
    sVar1 = ((param_1[1] & 0x7f80U) != 0) - 2;
  }
  return sVar1;
}

// ---- Function: _dtest ----
short _dtest(short *param_1)

{
  short sVar1;
  
  if ((param_1[3] & 0x7ff0U) == 0x7ff0) {
    if ((((*(byte *)(param_1 + 3) & 0xf) != 0) || (param_1[2] != 0)) ||
       ((param_1[1] != 0 || (sVar1 = 1, *param_1 != 0)))) {
      return 2;
    }
  }
  else if (((((param_1[3] & 0x7fffU) != 0) || (sVar1 = 0, param_1[2] != 0)) || (param_1[1] != 0)) ||
          (*param_1 != 0)) {
    sVar1 = ((param_1[3] & 0x7ff0U) != 0) - 2;
  }
  return sVar1;
}

// ---- Function: FUN_18013c404 ----
int32_t FUN_18013c404(int32_t param_1,uint *param_2,int32_t *param_3,uint *param_4)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  ulong *puVar4;
  int32_t uVar5;
  
  __acrt_lowio_lock_fh(*param_2);
  uVar1 = *(uint *)*param_3;
  if ((*(byte *)((&DAT_1801ee410)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) != 0) {
    hFile = (HANDLE)FUN_180147f04(uVar1);
    BVar2 = FlushFileBuffers(hFile);
    uVar5 = 0;
    if (BVar2 != 0) goto LAB_18013c47b;
    DVar3 = GetLastError();
    puVar4 = __doserrno();
    *puVar4 = DVar3;
  }
  puVar4 = __doserrno();
  *puVar4 = 9;
  uVar5 = 0xffffffff;
LAB_18013c47b:
  __acrt_lowio_unlock_fh(*param_4);
  return uVar5;
}

// ---- Function: _commit ----
/* Library Function - Single Match
    _commit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _commit(int _FileHandle)

{
  ulong *puVar1;
  int32_t uVar2;
  int local_res8 [2];
  int32_t local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  int *local_18 [3];
  
  local_res8[0] = _FileHandle;
  if (_FileHandle == -2) {
    puVar1 = __doserrno();
    *puVar1 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1801ee810)) &&
       ((*(byte *)((&DAT_1801ee410)[(longlong)_FileHandle >> 6] + 0x38 +
                  (ulonglong)(_FileHandle & 0x3f) * 0x48) & 1) != 0)) {
      local_18[0] = local_res8;
      local_res18[0] = _FileHandle;
      local_res20[0] = _FileHandle;
      uVar2 = FUN_18013c404(local_res10,local_res20,local_18,local_res18);
      return (int)uVar2;
    }
    puVar1 = __doserrno();
    *puVar1 = 9;
    FUN_18012b794();
  }
  return -1;
}

// ---- Function: FUN_18013c524 ----
int32_t FUN_18013c524(longlong param_1)

{
  int32_t uVar1;
  ulong *puVar2;
  
  if (param_1 == 0) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_18012b794();
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(int32_t *)(param_1 + 0x18);
  }
  return uVar1;
}

