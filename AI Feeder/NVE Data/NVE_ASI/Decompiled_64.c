#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_18012f050 ----
ulonglong FUN_18012f050(int *param_1)

{
  ulonglong uVar1;
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
  uVar1 = FUN_18012ef2c(param_1,local_48);
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
  return uVar1 & 0xffffffff;
}

// ---- Function: FUN_18012f0e8 ----
uint FUN_18012f0e8(void)

{
  __acrt_ptd *p_Var1;
  uint uVar2;
  
  p_Var1 = FUN_1801387d8();
  uVar2 = *(int *)(p_Var1 + 0x28) * 0x343fd + 0x269ec3;
  *(uint *)(p_Var1 + 0x28) = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}

// ---- Function: FUN_18012f114 ----
void FUN_18012f114(int32_t param_1)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_1801387d8();
  *(int32_t *)(p_Var1 + 0x28) = param_1;
  return;
}

// ---- Function: _difftime64 ----
/* Library Function - Single Match
    _difftime64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

double __cdecl _difftime64(__time64_t _Time1,__time64_t _Time2)

{
  ulong *puVar1;
  double dVar2;
  
  if ((_Time2 < 0) || (_Time1 < 0)) {
    puVar1 = __doserrno();
    dVar2 = 0.0;
    *puVar1 = 0x16;
  }
  else {
    dVar2 = (double)(_Time1 - _Time2);
  }
  return dVar2;
}

// ---- Function: common_fsopen_char_ ----
/* Library Function - Single Match
    struct _iobuf * __ptr64 __cdecl common_fsopen<char>(char const * __ptr64 const,char const *
   __ptr64 const,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_iobuf * __cdecl common_fsopen<char>(char *param_1,char *param_2,int param_3)

{
  ulong *puVar1;
  FILE *pFVar2;
  FILE *local_res8;
  
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_18012b794();
  }
  else if (*param_1 == '\0') {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
  }
  else {
    FUN_18013f030(&local_res8);
    if (local_res8 != (FILE *)0x0) {
      pFVar2 = _openfile(param_1,param_2,param_3,local_res8);
      if (pFVar2 == (FILE *)0x0) {
        __acrt_stdio_free_stream(local_res8);
      }
      FUN_18012ef20((longlong)local_res8);
      return pFVar2;
    }
    puVar1 = __doserrno();
    *puVar1 = 0x18;
  }
  return (_iobuf *)0x0;
}

// ---- Function: common_fsopen_wchar_t_ ----
/* Library Function - Single Match
    struct _iobuf * __ptr64 __cdecl common_fsopen<wchar_t>(wchar_t const * __ptr64 const,wchar_t
   const * __ptr64 const,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_iobuf * __cdecl common_fsopen<wchar_t>(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  ulong *puVar1;
  FILE *pFVar2;
  FILE *local_res8;
  
  if (((param_1 == (wchar_t *)0x0) || (param_2 == (wchar_t *)0x0)) || (*param_2 == L'\0')) {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_18012b794();
  }
  else if (*param_1 == L'\0') {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
  }
  else {
    FUN_18013f030(&local_res8);
    if (local_res8 != (FILE *)0x0) {
      pFVar2 = _wopenfile(param_1,param_2,param_3,local_res8);
      if (pFVar2 == (FILE *)0x0) {
        __acrt_stdio_free_stream(local_res8);
      }
      FUN_18012ef20((longlong)local_res8);
      return pFVar2;
    }
    puVar1 = __doserrno();
    *puVar1 = 0x18;
  }
  return (_iobuf *)0x0;
}

// ---- Function: common_fsopen_wchar_t_ ----
_iobuf * __cdecl common_fsopen<wchar_t>(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  ulong *puVar1;
  FILE *pFVar2;
  FILE *pFStackX_8;
  
  if (((param_1 == (wchar_t *)0x0) || (param_2 == (wchar_t *)0x0)) || (*param_2 == L'\0')) {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_18012b794();
  }
  else if (*param_1 == L'\0') {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
  }
  else {
    FUN_18013f030(&pFStackX_8);
    if (pFStackX_8 != (FILE *)0x0) {
      pFVar2 = _wopenfile(param_1,param_2,param_3,pFStackX_8);
      if (pFVar2 == (FILE *)0x0) {
        __acrt_stdio_free_stream(pFStackX_8);
      }
      FUN_18012ef20((longlong)pFStackX_8);
      return pFVar2;
    }
    puVar1 = __doserrno();
    *puVar1 = 0x18;
  }
  return (_iobuf *)0x0;
}

// ---- Function: fopen_s ----
/* Library Function - Single Match
    fopen_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl fopen_s(FILE **_File,char *_Filename,char *_Mode)

{
  ulong *puVar1;
  _iobuf *p_Var2;
  ulong uVar3;
  
  uVar3 = 0;
  if (_File == (FILE **)0x0) {
    puVar1 = __doserrno();
    uVar3 = 0x16;
    *puVar1 = 0x16;
    FUN_18012b794();
  }
  else {
    p_Var2 = common_fsopen<char>(_Filename,_Mode,0x80);
    *_File = p_Var2;
    if (p_Var2 == (_iobuf *)0x0) {
      puVar1 = __doserrno();
      uVar3 = *puVar1;
    }
  }
  return uVar3;
}

// ---- Function: FUN_18012f344 ----
bool FUN_18012f344(longlong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  bool bVar3;
  
  if (param_2 < 0x8000000000000000) {
    uVar1 = param_2 * 2;
    if (((*(longlong *)(param_1 + 0x408) == 0) && (uVar1 < 0x401)) ||
       (uVar1 <= *(ulonglong *)(param_1 + 0x400))) {
      bVar3 = true;
    }
    else {
      pvVar2 = _malloc_base(uVar1);
      bVar3 = pvVar2 != (LPVOID)0x0;
      if (bVar3) {
        FUN_18013bf3c(*(LPVOID *)(param_1 + 0x408));
        *(LPVOID *)(param_1 + 0x408) = pvVar2;
        *(ulonglong *)(param_1 + 0x400) = uVar1;
      }
      FUN_18013bf3c((LPVOID)0x0);
    }
  }
  else {
    *(int32_t *)(param_3 + 0x30) = 1;
    bVar3 = false;
    *(int32_t *)(param_3 + 0x2c) = 0xc;
  }
  return bVar3;
}

// ---- Function: FUN_18012f3ec ----
uint FUN_18012f3ec(longlong *param_1,longlong *param_2,uint param_3,uint param_4)

{
  char cVar1;
  char *pcVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  ulonglong uVar8;
  uint uVar9;
  char *pcVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  
  pcVar2 = (char *)*param_2;
  uVar4 = (ulonglong)param_3;
  if (pcVar2 == (char *)0x0) {
    puVar7 = __doserrno();
    *puVar7 = 0x16;
    FUN_18012b794();
LAB_18012f45d:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(int32_t *)(param_1 + 6) = 1;
    *(int32_t *)((longlong)param_1 + 0x2c) = 0x16;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_18012f45d;
  }
  cVar11 = *pcVar2;
  pcVar10 = pcVar2 + 1;
  uVar12 = param_4 & 0xff;
  *param_2 = (longlong)pcVar10;
  uVar13 = uVar12 | 2;
  if ((cVar11 == '-') || (uVar13 = uVar12, cVar11 == '+')) {
    uVar12 = uVar13;
    cVar11 = *pcVar10;
    pcVar10 = pcVar2 + 2;
    *param_2 = (longlong)pcVar10;
  }
  uVar8 = uVar4;
  if ((param_3 & 0xffffffef) == 0) {
    if ((byte)(cVar11 - 0x30U) < 10) {
      iVar5 = cVar11 + -0x30;
LAB_18012f4e3:
      if (iVar5 != 0) goto LAB_18012f531;
      cVar1 = *pcVar10;
      *param_2 = (longlong)(pcVar10 + 1);
      if ((cVar1 + 0xa8U & 0xdf) != 0) {
        *param_2 = (longlong)pcVar10;
        uVar8 = 8;
        if (param_3 != 0) {
          uVar8 = uVar4;
        }
        if ((cVar1 != '\0') && (*pcVar10 != cVar1)) {
          puVar7 = __doserrno();
          *puVar7 = 0x16;
          FUN_18012b794();
        }
        goto LAB_18012f53d;
      }
      cVar11 = pcVar10[1];
      *param_2 = (longlong)(pcVar10 + 2);
      uVar8 = 0x10;
    }
    else {
      if ((byte)(cVar11 + 0x9fU) < 0x1a) {
        iVar5 = cVar11 + -0x57;
        goto LAB_18012f4e3;
      }
      if ((byte)(cVar11 + 0xbfU) < 0x1a) {
        iVar5 = cVar11 + -0x37;
        goto LAB_18012f4e3;
      }
LAB_18012f531:
      uVar8 = 10;
    }
    if (param_3 != 0) {
      uVar8 = uVar4;
    }
  }
LAB_18012f53d:
  pcVar10 = (char *)*param_2;
  uVar13 = 0;
  while( true ) {
    if ((byte)(cVar11 - 0x30U) < 10) {
      uVar9 = (int)cVar11 - 0x30;
    }
    else if ((byte)(cVar11 + 0x9fU) < 0x1a) {
      uVar9 = (int)cVar11 - 0x57;
    }
    else if ((byte)(cVar11 + 0xbfU) < 0x1a) {
      uVar9 = (int)cVar11 - 0x37;
    }
    else {
      uVar9 = 0xffffffff;
    }
    if ((uint)uVar8 <= uVar9) break;
    cVar11 = *pcVar10;
    uVar6 = uVar13 * (uint)uVar8;
    uVar9 = uVar6 + uVar9;
    uVar12 = uVar12 | (uint)(uVar9 < uVar6 || (uint)(0xffffffff / uVar8) < uVar13) << 2 | 8;
    pcVar10 = pcVar10 + 1;
    *param_2 = (longlong)pcVar10;
    uVar13 = uVar9;
  }
  *param_2 = (longlong)(pcVar10 + -1);
  if ((cVar11 != '\0') && (pcVar10[-1] != cVar11)) {
    puVar7 = __doserrno();
    *puVar7 = 0x16;
    FUN_18012b794();
  }
  if ((uVar12 & 8) == 0) {
    *param_2 = (longlong)pcVar2;
    if ((int32_t *)param_2[1] == (int32_t *)0x0) {
      return 0;
    }
    *(int32_t *)param_2[1] = pcVar2;
    return 0;
  }
  if ((uVar12 & 4) == 0) {
    if ((uVar12 & 1) == 0) {
      if ((uVar12 & 2) == 0) goto LAB_18012f670;
LAB_18012f66d:
      uVar13 = -uVar13;
      goto LAB_18012f670;
    }
    if ((uVar12 & 2) == 0) {
      if (uVar13 < 0x80000000) goto LAB_18012f670;
    }
    else if (uVar13 < 0x80000001) goto LAB_18012f66d;
    uVar9 = 1;
    uVar13 = uVar12;
  }
  else {
    uVar13 = 1;
    uVar9 = uVar12;
  }
  *(int32_t *)(param_1 + 6) = 1;
  *(int32_t *)((longlong)param_1 + 0x2c) = 0x22;
  if ((uVar13 & uVar9) != 0) {
    plVar3 = (longlong *)param_2[1];
    if ((uVar12 & 2) != 0) {
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = *param_2;
      }
      return 0x80000000;
    }
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = *param_2;
      return 0x7fffffff;
    }
    return 0x7fffffff;
  }
  uVar13 = 0xffffffff;
LAB_18012f670:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
    return uVar13;
  }
  return uVar13;
}

// ---- Function: FUN_18012f6a0 ----
ulonglong FUN_18012f6a0(longlong param_1)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_18012f71e;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_18012f71e;
        }
        goto LAB_18012f6ee;
      }
LAB_18012f7f3:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_18012f71e;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_18012f6ee:
    if (iVar9 == 1) goto LAB_18012f7f3;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(int32_t *)(lVar8 + 0x30) = 1;
      *(int32_t *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                            *(longlong **)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_18012f71e:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(int32_t *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_18012f344(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(longlong *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(int32_t *)(param_1 + 0x4c) = 0;
  if (lVar8 == 8) {
    FUN_18012fe4c(param_1,uVar7);
  }
  else {
    FUN_18012fcac(param_1,(uint)uVar7);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  pcVar5 = (char *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (pcVar5 = *(char **)(param_1 + 0x40), *pcVar5 != '0')))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    **(int32_t **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}

// ---- Function: FUN_18012f8a4 ----
ulonglong FUN_18012f8a4(longlong param_1,byte param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_18012f922;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_18012f922;
        }
        goto LAB_18012f8f2;
      }
LAB_18012f9f7:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_18012f922;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_18012f8f2:
    if (iVar9 == 1) goto LAB_18012f9f7;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(int32_t *)(lVar8 + 0x30) = 1;
      *(int32_t *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                            *(longlong **)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_18012f922:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(int32_t *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_18012f344(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(longlong *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(int32_t *)(param_1 + 0x4c) = 0;
  if (lVar8 == 8) {
    FUN_18012febc(param_1,uVar7,param_2);
  }
  else {
    FUN_18012fd1c(param_1,(uint)uVar7,param_2);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  pcVar5 = (char *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (pcVar5 = *(char **)(param_1 + 0x40), *pcVar5 != '0')))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    **(int32_t **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}

// ---- Function: FUN_18012faa8 ----
ulonglong FUN_18012faa8(longlong param_1,byte param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_18012fb26;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_18012fb26;
        }
        goto LAB_18012faf6;
      }
LAB_18012fbfb:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_18012fb26;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_18012faf6:
    if (iVar9 == 1) goto LAB_18012fbfb;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(int32_t *)(lVar8 + 0x30) = 1;
      *(int32_t *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                            *(longlong **)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_18012fb26:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(int32_t *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_18012f344(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(longlong *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(int32_t *)(param_1 + 0x4c) = 0;
  if (lVar8 == 8) {
    FUN_18012ff6c(param_1,uVar7,param_2);
  }
  else {
    FUN_18012fdc8(param_1,(uint)uVar7,param_2);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  pcVar5 = (char *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (pcVar5 = *(char **)(param_1 + 0x40), *pcVar5 != '0')))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    **(int32_t **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}

// ---- Function: FUN_18012fcac ----
void FUN_18012fcac(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x458);
  if (lVar3 == 0) {
    uVar1 = 0x200;
    lVar3 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar2 = (char *)(lVar3 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar2;
  pcVar4 = pcVar2;
  for (; (0 < *(int *)(param_1 + 0x30) || (param_2 != 0)); param_2 = param_2 >> 3) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *pcVar4 = ((byte)param_2 & 7) + 0x30;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pcVar2 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}

// ---- Function: FUN_18012fd1c ----
void FUN_18012fd1c(longlong param_1,uint param_2,byte param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 == 0) {
    uVar1 = 0x200;
    lVar2 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar3 = (char *)(lVar2 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar3;
  pcVar4 = pcVar3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    cVar5 = (char)param_2 + (char)((ulonglong)param_2 / 10) * -10 + '0';
    param_2 = (uint)((ulonglong)param_2 / 10);
    if ('9' < cVar5) {
      cVar5 = (param_3 ^ 1) * ' ' + '\a' + cVar5;
    }
    *pcVar4 = cVar5;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pcVar3 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}

// ---- Function: FUN_18012fdc8 ----
void FUN_18012fdc8(longlong param_1,uint param_2,byte param_3)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x458);
  if (lVar5 == 0) {
    uVar2 = 0x200;
    lVar5 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pbVar3 = (byte *)(lVar5 + -1 + uVar2);
  *(byte **)(param_1 + 0x40) = pbVar3;
  pbVar4 = pbVar3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 4;
    bVar1 = (bVar1 & 0xf) + 0x30;
    if (0x39 < bVar1) {
      bVar1 = (param_3 ^ 1) * ' ' + '\a' + bVar1;
    }
    *pbVar4 = bVar1;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pbVar4 = *(byte **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pbVar3 - *(int *)(param_1 + 0x40);
  *(byte **)(param_1 + 0x40) = pbVar4 + 1;
  return;
}

// ---- Function: FUN_18012fe4c ----
void FUN_18012fe4c(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x458);
  if (lVar3 == 0) {
    uVar1 = 0x200;
    lVar3 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar2 = (char *)(lVar3 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar2;
  pcVar4 = pcVar2;
  for (; (0 < *(int *)(param_1 + 0x30) || (param_2 != 0)); param_2 = param_2 >> 3) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *pcVar4 = ((byte)param_2 & 7) + 0x30;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pcVar2 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}

