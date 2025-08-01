#include <stdint.h>
#include <stddef.h>

// ---- Function: initialize_lc_time ----
/* Library Function - Single Match
    bool __cdecl initialize_lc_time(struct __crt_lc_time_data * __ptr64 const,struct
   __crt_locale_data * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl initialize_lc_time(__crt_lc_time_data *param_1,__crt_locale_data *param_2)

{
  int32_t (*pauVar1) [32];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short *psVar17;
  uint uVar18;
  __crt_lc_time_data *p_Var19;
  longlong lVar20;
  LCTYPE LVar21;
  __crt_locale_data *local_38;
  int32_t local_30;
  
  pauVar1 = *(int32_t (**) [32])(param_2 + 0x150);
  uVar18 = 0;
  local_30 = 0;
  local_38 = param_2;
  psVar17 = __acrt_copy_locale_name(pauVar1);
  *(short **)(param_1 + 0x2b8) = psVar17;
  LVar21 = 0x31;
  lVar20 = 7;
  do {
    p_Var19 = param_1 + (ulonglong)((LVar21 - 0x30) % 7) * 8;
    uVar2 = __acrt_GetLocaleInfoA
                      ((__crt_locale_pointers *)&local_38,1,(ushort *)pauVar1,LVar21,
                       (longlong *)p_Var19);
    uVar3 = __acrt_GetLocaleInfoA
                      ((__crt_locale_pointers *)&local_38,1,(ushort *)pauVar1,LVar21 - 7,
                       (longlong *)(p_Var19 + 0x38));
    uVar4 = __acrt_GetLocaleInfoA
                      ((__crt_locale_pointers *)&local_38,2,(ushort *)pauVar1,LVar21,
                       (longlong *)(p_Var19 + 0x160));
    uVar5 = __acrt_GetLocaleInfoA
                      ((__crt_locale_pointers *)&local_38,2,(ushort *)pauVar1,LVar21 - 7,
                       (longlong *)(p_Var19 + 0x198));
    uVar18 = uVar18 | uVar2 | uVar3 | uVar4 | uVar5;
    LVar21 = LVar21 + 1;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  LVar21 = 0x38;
  lVar20 = 0xc;
  p_Var19 = param_1 + 0xd0;
  do {
    uVar2 = __acrt_GetLocaleInfoA
                      ((__crt_locale_pointers *)&local_38,1,(ushort *)pauVar1,LVar21 + 0xc,
                       (longlong *)(p_Var19 + -0x60));
    uVar3 = __acrt_GetLocaleInfoA
                      ((__crt_locale_pointers *)&local_38,1,(ushort *)pauVar1,LVar21,
                       (longlong *)p_Var19);
    uVar4 = __acrt_GetLocaleInfoA
                      ((__crt_locale_pointers *)&local_38,2,(ushort *)pauVar1,LVar21 + 0xc,
                       (longlong *)(p_Var19 + 0x100));
    uVar5 = __acrt_GetLocaleInfoA
                      ((__crt_locale_pointers *)&local_38,2,(ushort *)pauVar1,LVar21,
                       (longlong *)(p_Var19 + 0x160));
    uVar18 = uVar18 | uVar2 | uVar3 | uVar4 | uVar5;
    p_Var19 = p_Var19 + 8;
    LVar21 = LVar21 + 1;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  iVar6 = __acrt_GetLocaleInfoA
                    ((__crt_locale_pointers *)&local_38,1,(ushort *)pauVar1,0x28,
                     (longlong *)(param_1 + 0x130));
  iVar7 = __acrt_GetLocaleInfoA
                    ((__crt_locale_pointers *)&local_38,1,(ushort *)pauVar1,0x29,
                     (longlong *)(param_1 + 0x138));
  iVar8 = __acrt_GetLocaleInfoA
                    ((__crt_locale_pointers *)&local_38,2,(ushort *)pauVar1,0x28,
                     (longlong *)(param_1 + 0x290));
  iVar9 = __acrt_GetLocaleInfoA
                    ((__crt_locale_pointers *)&local_38,2,(ushort *)pauVar1,0x29,
                     (longlong *)(param_1 + 0x298));
  iVar10 = __acrt_GetLocaleInfoA
                     ((__crt_locale_pointers *)&local_38,1,(ushort *)pauVar1,0x1f,
                      (longlong *)(param_1 + 0x140));
  iVar11 = __acrt_GetLocaleInfoA
                     ((__crt_locale_pointers *)&local_38,1,(ushort *)pauVar1,0x20,
                      (longlong *)(param_1 + 0x148));
  iVar12 = __acrt_GetLocaleInfoA
                     ((__crt_locale_pointers *)&local_38,1,(ushort *)pauVar1,0x1003,
                      (longlong *)(param_1 + 0x150));
  iVar13 = __acrt_GetLocaleInfoA
                     ((__crt_locale_pointers *)&local_38,0,(ushort *)pauVar1,0x1009,
                      (longlong *)(param_1 + 0x158));
  iVar14 = __acrt_GetLocaleInfoA
                     ((__crt_locale_pointers *)&local_38,2,(ushort *)pauVar1,0x1f,
                      (longlong *)(param_1 + 0x2a0));
  iVar15 = __acrt_GetLocaleInfoA
                     ((__crt_locale_pointers *)&local_38,2,(ushort *)pauVar1,0x20,
                      (longlong *)(param_1 + 0x2a8));
  iVar16 = __acrt_GetLocaleInfoA
                     ((__crt_locale_pointers *)&local_38,2,(ushort *)pauVar1,0x1003,
                      (longlong *)(param_1 + 0x2b0));
  return iVar16 == 0 &&
         ((((((((((uVar18 == 0 && iVar6 == 0) && iVar7 == 0) && iVar8 == 0) && iVar9 == 0) &&
              iVar10 == 0) && iVar11 == 0) && iVar12 == 0) && iVar13 == 0) && iVar14 == 0) &&
         iVar15 == 0);
}

// ---- Function: __acrt_locale_free_time ----
/* Library Function - Single Match
    __acrt_locale_free_time
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_time(int32_t *param_1)

{
  if (param_1 != (int32_t *)0x0) {
    FUN_18014587c(param_1,7);
    FUN_18014587c(param_1 + 7,7);
    FUN_18014587c(param_1 + 0xe,0xc);
    FUN_18014587c(param_1 + 0x1a,0xc);
    FUN_18014587c(param_1 + 0x26,2);
    FUN_18013bf3c((LPVOID)param_1[0x28]);
    FUN_18013bf3c((LPVOID)param_1[0x29]);
    FUN_18013bf3c((LPVOID)param_1[0x2a]);
    FUN_18014587c(param_1 + 0x2c,7);
    FUN_18014587c(param_1 + 0x33,7);
    FUN_18014587c(param_1 + 0x3a,0xc);
    FUN_18014587c(param_1 + 0x46,0xc);
    FUN_18014587c(param_1 + 0x52,2);
    FUN_18013bf3c((LPVOID)param_1[0x54]);
    FUN_18013bf3c((LPVOID)param_1[0x55]);
    FUN_18013bf3c((LPVOID)param_1[0x56]);
    FUN_18013bf3c((LPVOID)param_1[0x57]);
  }
  return;
}

// ---- Function: FUN_180145d94 ----
ulong FUN_180145d94(short *param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  ulong *puVar2;
  short *psVar3;
  ulong uVar4;
  longlong lVar5;
  
  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    psVar3 = param_1;
    if (param_3 == 0) {
      *param_1 = 0;
    }
    else {
      do {
        if (*psVar3 == 0) {
          lVar5 = param_3 - (longlong)psVar3;
          do {
            sVar1 = *(short *)(lVar5 + (longlong)psVar3);
            *psVar3 = sVar1;
            psVar3 = psVar3 + 1;
            if (sVar1 == 0) {
              return 0;
            }
            param_2 = param_2 + -1;
          } while (param_2 != 0);
          *param_1 = 0;
          puVar2 = __doserrno();
          uVar4 = 0x22;
          goto LAB_180145dbb;
        }
        psVar3 = psVar3 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = 0;
    }
  }
  puVar2 = __doserrno();
  uVar4 = 0x16;
LAB_180145dbb:
  *puVar2 = uVar4;
  FUN_18012b794();
  return uVar4;
}

// ---- Function: FUN_180145e0c ----
ulong FUN_180145e0c(short *param_1,longlong param_2,short *param_3,longlong param_4)

{
  short sVar1;
  ulong *puVar2;
  short *psVar3;
  longlong lVar4;
  ulong uVar5;
  longlong lVar6;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_180145e55:
      if (param_2 != 0) {
        psVar3 = param_1;
        lVar4 = param_2;
        if ((param_4 == 0) || (param_3 != (short *)0x0)) {
          do {
            if (*psVar3 == 0) {
              if (param_4 != -1) {
                lVar6 = param_4;
                if (param_4 != 0) {
                  do {
                    sVar1 = *param_3;
                    param_3 = param_3 + 1;
                    *psVar3 = sVar1;
                    psVar3 = psVar3 + 1;
                    if (sVar1 == 0) {
                      return 0;
                    }
                    lVar4 = lVar4 + -1;
                  } while ((lVar4 != 0) && (lVar6 = lVar6 + -1, lVar6 != 0));
                }
                if (lVar6 == 0) {
                  *psVar3 = 0;
                }
                goto LAB_180145ed3;
              }
              lVar6 = (longlong)param_3 - (longlong)psVar3;
              goto LAB_180145e8c;
            }
            lVar4 = lVar4 + -1;
            psVar3 = psVar3 + 1;
          } while (lVar4 != 0);
          *param_1 = 0;
        }
        else {
          *param_1 = 0;
        }
      }
    }
  }
  else if (param_1 != (short *)0x0) goto LAB_180145e55;
  puVar2 = __doserrno();
  uVar5 = 0x16;
LAB_180145e38:
  *puVar2 = uVar5;
  FUN_18012b794();
  return uVar5;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
LAB_180145e8c:
    sVar1 = *(short *)(lVar6 + (longlong)psVar3);
    *psVar3 = sVar1;
    psVar3 = psVar3 + 1;
    if (sVar1 == 0) break;
  }
LAB_180145ed3:
  if (lVar4 != 0) {
    return 0;
  }
  if (param_4 == -1) {
    param_1[param_2 + -1] = 0;
    return 0x50;
  }
  *param_1 = 0;
  puVar2 = __doserrno();
  uVar5 = 0x22;
  goto LAB_180145e38;
}

// ---- Function: FUN_180145f04 ----
ulong FUN_180145f04(short *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  short sVar1;
  ulong *puVar2;
  longlong lVar3;
  short *psVar4;
  ulong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_180145f57:
      if (param_2 != 0) {
        if (param_4 == 0) {
          *param_1 = 0;
          return 0;
        }
        if (param_3 != 0) {
          psVar4 = param_1;
          lVar3 = param_4;
          lVar7 = param_2;
          if (param_4 == -1) {
            do {
              sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar4);
              *psVar4 = sVar1;
              psVar4 = psVar4 + 1;
              if (sVar1 == 0) {
                return 0;
              }
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
            lVar7 = 0;
          }
          else {
            do {
              lVar6 = lVar3;
              sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar4);
              *psVar4 = sVar1;
              psVar4 = psVar4 + 1;
              if (sVar1 == 0) {
                return 0;
              }
              lVar7 = lVar7 + -1;
            } while ((lVar7 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
            lVar3 = lVar6 + -1;
            if (lVar7 == 0) {
              lVar3 = lVar6;
            }
            if (lVar3 == 0) {
              *psVar4 = 0;
            }
          }
          if (lVar7 != 0) {
            return 0;
          }
          if (param_4 == -1) {
            param_1[param_2 + -1] = 0;
            return 0x50;
          }
          *param_1 = 0;
          puVar2 = __doserrno();
          uVar5 = 0x22;
          goto LAB_180145f35;
        }
        *param_1 = 0;
      }
    }
  }
  else if (param_1 != (short *)0x0) goto LAB_180145f57;
  puVar2 = __doserrno();
  uVar5 = 0x16;
LAB_180145f35:
  *puVar2 = uVar5;
  FUN_18012b794();
  return uVar5;
}

// ---- Function: wcscspn ----
/* Library Function - Single Match
    wcscspn
   
   Library: Visual Studio 2019 Release */

size_t __cdecl wcscspn(wchar_t *_Str,wchar_t *_Control)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  
  wVar2 = *_Str;
  pwVar1 = _Str;
  while (wVar2 != L'\0') {
    if (*_Control != L'\0') {
      wVar2 = *_Control;
      pwVar3 = _Control;
      do {
        if (*pwVar1 == wVar2) goto LAB_180146038;
        pwVar3 = pwVar3 + 1;
        wVar2 = *pwVar3;
      } while (wVar2 != L'\0');
    }
    pwVar1 = pwVar1 + 1;
    wVar2 = *pwVar1;
  }
LAB_180146038:
  return (longlong)pwVar1 - (longlong)_Str >> 1;
}

// ---- Function: wcspbrk ----
/* Library Function - Single Match
    wcspbrk
   
   Library: Visual Studio 2019 Release */

wchar_t * __cdecl wcspbrk(wchar_t *_Str,wchar_t *_Control)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  do {
    if (*_Str == L'\0') {
      return (wchar_t *)0x0;
    }
    if (*_Control != L'\0') {
      wVar1 = *_Control;
      pwVar2 = _Control;
      do {
        if (wVar1 == *_Str) {
          return _Str;
        }
        pwVar2 = pwVar2 + 1;
        wVar1 = *pwVar2;
      } while (wVar1 != L'\0');
    }
    _Str = _Str + 1;
  } while( true );
}

// ---- Function: GetLocaleNameFromDefault ----
/* Library Function - Single Match
    GetLocaleNameFromDefault
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void GetLocaleNameFromDefault(longlong param_1)

{
  int iVar1;
  ulong uVar2;
  longlong lVar3;
  int32_t auStackY_f8 [32];
  wchar_t local_c8 [88];
  ulonglong local_18;
  longlong lVar4;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStackY_f8;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x104;
  iVar1 = FUN_18013aa74(local_c8,0x55);
  if (1 < iVar1) {
    lVar3 = -1;
    do {
      lVar4 = lVar3;
      lVar3 = lVar4 + 1;
    } while (local_c8[lVar3] != L'\0');
    uVar2 = FUN_180145f04((short *)(param_1 + 600),0x55,(longlong)local_c8,lVar4 + 2);
    if (uVar2 != 0) {
                    
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  FUN_1801252c0(local_18 ^ (ulonglong)auStackY_f8);
  return;
}

// ---- Function: GetLocaleNameFromLangCountry ----
/* Library Function - Single Match
    GetLocaleNameFromLangCountry
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void GetLocaleNameFromLangCountry(int32_t *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  short *psVar5;
  int iVar6;
  longlong lVar7;
  
  psVar5 = (short *)*param_1;
  lVar7 = -1;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (psVar5[lVar4] != 0);
  iVar6 = 0;
  *(uint *)(param_1 + 3) = (uint)(lVar4 == 3);
  do {
    lVar7 = lVar7 + 1;
  } while (*(short *)(param_1[1] + lVar7 * 2) != 0);
  *(uint *)((longlong)param_1 + 0x1c) = (uint)(lVar7 == 3);
  if (lVar4 == 3) {
    iVar6 = 2;
  }
  else {
    iVar3 = 0;
    if (psVar5 != (short *)0x0) {
      while( true ) {
        iVar6 = iVar3;
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
        if ((0x19 < (ushort)(sVar1 - 0x41U)) && (0x19 < (ushort)(sVar1 - 0x61U))) break;
        iVar3 = iVar6 + 1;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x14) = iVar6;
  FUN_18013a7b0(&LAB_180146284,3,0,0);
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 >> 8 & 1) == 0 || ((uVar2 & 7) == 0 || (uVar2 >> 9 & 1) == 0)) {
    *(int32_t *)(param_1 + 2) = 0;
  }
  return;
}

// ---- Function: GetLocaleNameFromLanguage ----
/* Library Function - Single Match
    GetLocaleNameFromLanguage
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void GetLocaleNameFromLanguage(int32_t *param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  longlong lVar5;
  
  psVar3 = (short *)*param_1;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (psVar3[lVar5] != 0);
  iVar4 = 0;
  *(uint *)(param_1 + 3) = (uint)(lVar5 == 3);
  if (lVar5 == 3) {
    iVar4 = 2;
  }
  else {
    iVar2 = 0;
    if (psVar3 != (short *)0x0) {
      while( true ) {
        iVar4 = iVar2;
        sVar1 = *psVar3;
        psVar3 = psVar3 + 1;
        if ((0x19 < (ushort)(sVar1 - 0x41U)) && (0x19 < (ushort)(sVar1 - 0x61U))) break;
        iVar2 = iVar4 + 1;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x14) = iVar4;
  FUN_18013a7b0(&LAB_180146564,3,0,0);
  if ((*(byte *)(param_1 + 2) & 4) == 0) {
    *(int32_t *)(param_1 + 2) = 0;
  }
  return;
}

// ---- Function: FUN_180146650 ----
uint FUN_180146650(wchar_t *param_1,longlong param_2,int32_t param_3,int32_t param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  LCTYPE LVar4;
  int32_t *puVar5;
  uint local_res8 [2];
  
  if (((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) ||
     (iVar1 = wcscmp(param_1,L"ACP"), iVar1 == 0)) {
    LVar4 = 0x20001004;
  }
  else {
    uVar3 = FUN_18013c080(param_1,L"utf8");
    if ((int)uVar3 == 0) {
      return 0xfde9;
    }
    uVar3 = FUN_18013c080(param_1,L"utf-8");
    if ((int)uVar3 == 0) {
      return 0xfde9;
    }
    puVar5 = &DAT_18017ced0;
    iVar1 = wcscmp(param_1,L"OCP");
    if (iVar1 != 0) {
      uVar2 = FUN_1801382b0((longlong)param_1,puVar5,param_3,param_4);
      return uVar2;
    }
    LVar4 = 0x2000000b;
  }
  iVar1 = FUN_18013a930((ushort *)(param_2 + 600),LVar4,(LPWSTR)local_res8,2);
  if (iVar1 == 0) {
    return 0;
  }
  if ((int)local_res8[0] < 3) {
    return 0xfde9;
  }
  return local_res8[0];
}

// ---- Function: FUN_18014670c ----
void FUN_18014670c(wchar_t *param_1)

{
  int iVar1;
  int32_t auStack_48 [32];
  WCHAR local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_1801eb080 ^ (ulonglong)auStack_48;
  iVar1 = FUN_18013a930((ushort *)param_1,0x59,local_28,9);
  if (iVar1 != 0) {
    wcsncmp(local_28,param_1,9);
  }
  FUN_1801252c0(local_10 ^ (ulonglong)auStack_48);
  return;
}

// ---- Function: TranslateName ----
/* Library Function - Single Match
    TranslateName
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

bool TranslateName(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  bool bVar5;
  
  uVar3 = 1;
  iVar2 = 1;
  iVar4 = 0;
  if (-1 < param_2) {
    do {
      bVar5 = (int)uVar3 == 0;
      if (bVar5) {
        return bVar5;
      }
      iVar1 = (iVar4 + param_2) / 2;
      uVar3 = FUN_18013c080((WCHAR *)*param_3,*(WCHAR **)((longlong)iVar1 * 0x10 + param_1));
      iVar2 = (int)uVar3;
      if (iVar2 == 0) {
        *param_3 = param_1 + 8 + (longlong)iVar1 * 0x10;
      }
      else if (iVar2 < 0) {
        param_2 = iVar1 + -1;
      }
      else {
        iVar4 = iVar1 + 1;
      }
    } while (iVar4 <= param_2);
  }
  return iVar2 == 0;
}

// ---- Function: FUN_180146814 ----
int32_t FUN_180146814(short *param_1,uint *param_2,__acrt_ptd *param_3,int32_t param_4)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  __acrt_ptd *p_Var3;
  bool bVar4;
  uint _Val;
  BOOL BVar5;
  ulong uVar6;
  int iVar7;
  __acrt_ptd *p_Var8;
  int32_t extraout_var;
  ushort *puVar9;
  __acrt_ptd *p_Var10;
  longlong lVar11;
  longlong lVar12;
  
  p_Var10 = param_3;
  p_Var8 = FUN_1801387d8();
  p_Var2 = p_Var8 + 0x98;
  *(int32_t *)(p_Var8 + 0xa8) = 0;
  p_Var3 = p_Var8 + 0x2f0;
  *(short **)p_Var2 = param_1;
  p_Var1 = p_Var8 + 0xa0;
  *(int32_t *)p_Var3 = 0;
  *(short **)p_Var1 = param_1 + 0x40;
  if (param_1[0x40] != 0) {
    p_Var10 = p_Var1;
    TranslateName(0x18017c320,0x16,(longlong *)p_Var1);
  }
  if (**(short **)p_Var2 == 0) {
    GetLocaleNameFromDefault((longlong)p_Var2);
LAB_1801468e1:
    if (*(int *)(p_Var8 + 0xa8) == 0) {
      return 0;
    }
  }
  else {
    if (**(short **)p_Var1 == 0) {
      GetLocaleNameFromLanguage((int32_t *)p_Var2);
    }
    else {
      GetLocaleNameFromLangCountry((int32_t *)p_Var2);
    }
    if (*(int *)(p_Var8 + 0xa8) == 0) {
      p_Var10 = p_Var2;
      bVar4 = TranslateName(0x18017bf00,0x40,(longlong *)p_Var2);
      if ((int)CONCAT71(extraout_var,bVar4) != 0) {
        if (**(short **)p_Var1 == 0) {
          GetLocaleNameFromLanguage((int32_t *)p_Var2);
        }
        else {
          GetLocaleNameFromLangCountry((int32_t *)p_Var2);
        }
      }
      goto LAB_1801468e1;
    }
  }
  if (((param_1 == (short *)0x0) || (*param_1 != 0)) || (param_1[0x80] != 0)) {
    _Val = FUN_180146650((wchar_t *)
                         (-(ulonglong)(param_1 != (short *)0x0) & (ulonglong)(param_1 + 0x80)),
                         (longlong)p_Var2,p_Var10,param_4);
  }
  else {
    _Val = GetACP();
  }
  if (((_Val != 0) && (_Val != 65000)) && (BVar5 = IsValidCodePage(_Val & 0xffff), BVar5 != 0)) {
    if (param_2 != (uint *)0x0) {
      *param_2 = _Val;
    }
    if (param_3 == (__acrt_ptd *)0x0) {
      return 1;
    }
    p_Var1 = param_3 + 0x120;
    *(ushort *)p_Var1 = 0;
    lVar11 = -1;
    do {
      lVar12 = lVar11;
      lVar11 = lVar12 + 1;
    } while (*(short *)(p_Var3 + lVar11 * 2) != 0);
    uVar6 = FUN_180145f04((short *)p_Var1,0x55,(longlong)p_Var3,lVar12 + 2);
    if (uVar6 != 0) {
LAB_180146a71:
                    
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar7 = FUN_18013a930((ushort *)p_Var1,0x1001,(LPWSTR)param_3,0x40);
    if (iVar7 != 0) {
      p_Var2 = param_3 + 0x80;
      iVar7 = FUN_18013a930((ushort *)p_Var1,0x1002,(LPWSTR)p_Var2,0x40);
      if ((iVar7 != 0) &&
         (((puVar9 = FUN_18014d4e8((ushort *)p_Var2,0x5f), puVar9 == (ushort *)0x0 &&
           (puVar9 = FUN_18014d4e8((ushort *)p_Var2,0x2e), puVar9 == (ushort *)0x0)) ||
          (iVar7 = FUN_18013a930((ushort *)p_Var1,7,(LPWSTR)p_Var2,0x40), iVar7 != 0)))) {
        if (_Val != 0xfde9) {
          _itow_s(_Val,(wchar_t *)(param_3 + 0x100),0x10,10);
          return 1;
        }
        uVar6 = FUN_180145f04((short *)(param_3 + 0x100),0x10,0x18017cea8,5);
        if (uVar6 == 0) {
          return 1;
        }
        goto LAB_180146a71;
      }
    }
  }
  return 0;
}

// ---- Function: FUN_180146a88 ----
void FUN_180146a88(ushort *param_1)

{
  uint *puVar1;
  LCID Locale;
  int iVar2;
  __acrt_ptd *p_Var3;
  __acrt_ptd *p_Var4;
  ulonglong uVar5;
  short *psVar6;
  uint uVar7;
  int32_t auStack_128 [32];
  WCHAR local_108 [120];
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_128;
  p_Var3 = FUN_1801387d8();
  p_Var4 = FUN_1801387d8();
  puVar1 = *(uint **)(p_Var4 + 0x3a0);
  Locale = FUN_180147028(param_1);
  iVar2 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(p_Var3 + 0xb4) != 0) & 0xfffff005) + 0x1002,
                         local_108,0x78);
  uVar7 = 0;
  if (iVar2 == 0) {
    *puVar1 = 0;
  }
  else {
    uVar5 = FUN_18013c080(*(WCHAR **)(p_Var3 + 0xa0),local_108);
    if ((int)uVar5 == 0) {
      psVar6 = &DAT_18017ced8;
      do {
        if ((short)Locale == *psVar6) goto LAB_180146b47;
        uVar7 = uVar7 + 1;
        psVar6 = psVar6 + 1;
      } while (uVar7 < 10);
      *puVar1 = *puVar1 | 4;
      puVar1[2] = Locale;
      puVar1[1] = Locale;
    }
  }
LAB_180146b47:
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_128);
  return;
}

// ---- Function: GetLcidFromLangCountry ----
/* Library Function - Single Match
    GetLcidFromLangCountry
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void GetLcidFromLangCountry(uint *param_1)

{
  short sVar1;
  uint uVar2;
  __acrt_ptd *p_Var3;
  short *psVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  p_Var3 = FUN_1801387d8();
  lVar6 = -1;
  lVar7 = -1;
  iVar8 = 0;
  do {
    lVar7 = lVar7 + 1;
  } while (*(short *)(*(longlong *)(p_Var3 + 0x98) + lVar7 * 2) != 0);
  *(uint *)(p_Var3 + 0xb0) = (uint)(lVar7 == 3);
  do {
    lVar6 = lVar6 + 1;
  } while (*(short *)(*(longlong *)(p_Var3 + 0xa0) + lVar6 * 2) != 0);
  *(uint *)(p_Var3 + 0xb4) = (uint)(lVar6 == 3);
  param_1[1] = 0;
  iVar5 = 2;
  if (*(int *)(p_Var3 + 0xb0) == 0) {
    psVar4 = *(short **)(p_Var3 + 0x98);
    while( true ) {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
      if ((0x19 < (ushort)(sVar1 - 0x41U)) && (iVar5 = iVar8, 0x19 < (ushort)(sVar1 - 0x61U)))
      break;
      iVar8 = iVar8 + 1;
    }
  }
  *(int *)(p_Var3 + 0xac) = iVar5;
  EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_180146cd8,1);
  uVar2 = *param_1;
  if ((uVar2 >> 8 & 1) == 0 || ((uVar2 & 7) == 0 || (uVar2 >> 9 & 1) == 0)) {
    *param_1 = 0;
  }
  return;
}

// ---- Function: GetLcidFromLanguage ----
/* Library Function - Single Match
    GetLcidFromLanguage
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void GetLcidFromLanguage(byte *param_1)

{
  short sVar1;
  __acrt_ptd *p_Var2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  int iVar6;
  
  p_Var2 = FUN_1801387d8();
  lVar5 = -1;
  iVar6 = 0;
  psVar4 = *(short **)(p_Var2 + 0x98);
  do {
    lVar5 = lVar5 + 1;
  } while (psVar4[lVar5] != 0);
  *(uint *)(p_Var2 + 0xb0) = (uint)(lVar5 == 3);
  iVar3 = 2;
  if (lVar5 != 3) {
    while( true ) {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
      if ((0x19 < (ushort)(sVar1 - 0x41U)) && (iVar3 = iVar6, 0x19 < (ushort)(sVar1 - 0x61U)))
      break;
      iVar6 = iVar6 + 1;
    }
  }
  *(int *)(p_Var2 + 0xac) = iVar3;
  EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_180146f20,1);
  if ((*param_1 & 4) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

