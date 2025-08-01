#include <stdint.h>
#include <stddef.h>

// ---- Function: _wsetlocale_get_all ----
/* Library Function - Single Match
    _wsetlocale_get_all
   
   Library: Visual Studio 2019 Release */

short * _wsetlocale_get_all(longlong param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  longlong lVar11;
  int32_t **ppuVar12;
  int32_t *puVar13;
  
  psVar8 = (short *)_malloc_base(0x6a6);
  psVar9 = psVar8;
  if (psVar8 != (short *)0x0) {
    psVar9 = psVar8 + 2;
    psVar8[0] = 1;
    psVar8[1] = 0;
    *psVar9 = 0;
    puVar13 = (int32_t *)(param_1 + 0x48);
    _wcscats(psVar9,0x351,3,PTR_u_LC_COLLATE_18017aeb8);
    ppuVar12 = &PTR_u_LC_COLLATE_18017aeb8;
    bVar6 = true;
    do {
      uVar7 = FUN_180145d94(psVar9,0x351,0x18017afb8);
      if (uVar7 != 0) {
                    
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      psVar10 = (short *)*puVar13;
      lVar11 = puVar13[4] - (longlong)psVar10;
      do {
        sVar2 = *psVar10;
        sVar3 = *(short *)((longlong)psVar10 + lVar11);
        if (sVar2 != sVar3) break;
        psVar10 = psVar10 + 1;
      } while (sVar3 != 0);
      bVar5 = false;
      if (sVar2 == sVar3) {
        bVar5 = bVar6;
      }
      ppuVar12 = ppuVar12 + 3;
      puVar13 = puVar13 + 4;
      _wcscats(psVar9,0x351,3,*ppuVar12);
      bVar6 = bVar5;
    } while ((longlong)ppuVar12 < 0x18017af18);
    if (bVar5) {
      FUN_18013bf3c(psVar8);
      piVar4 = *(int **)(param_1 + 0x38);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          FUN_18013bf3c(*(LPVOID *)(param_1 + 0x38));
        }
      }
      piVar4 = *(int **)(param_1 + 0x30);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          FUN_18013bf3c(*(LPVOID *)(param_1 + 0x30));
        }
      }
      psVar9 = *(short **)(param_1 + 0x68);
      *(int32_t *)(param_1 + 0x30) = 0;
      *(int32_t *)(param_1 + 0x20) = 0;
      *(int32_t *)(param_1 + 0x38) = 0;
      *(int32_t *)(param_1 + 0x28) = 0;
    }
    else {
      piVar4 = *(int **)(param_1 + 0x38);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          FUN_18013bf3c(*(LPVOID *)(param_1 + 0x38));
        }
      }
      piVar4 = *(int **)(param_1 + 0x30);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          FUN_18013bf3c(*(LPVOID *)(param_1 + 0x30));
        }
      }
      *(int32_t *)(param_1 + 0x30) = 0;
      *(int32_t *)(param_1 + 0x20) = 0;
      *(short **)(param_1 + 0x38) = psVar8;
      *(short **)(param_1 + 0x28) = psVar9;
    }
  }
  return psVar9;
}

// ---- Function: _wsetlocale_nolock ----
/* Library Function - Single Match
    _wsetlocale_nolock
   
   Library: Visual Studio 2019 Release */

void _wsetlocale_nolock(longlong param_1,int param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  wchar_t wVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  wchar_t *pwVar6;
  size_t sVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int32_t **ppuVar15;
  int32_t auStackY_248 [32];
  int32_t local_218 [4];
  wchar_t local_208 [136];
  short local_f8 [88];
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_248;
  iVar13 = 0;
  if (param_2 != 0) {
    if (param_3 != (wchar_t *)0x0) {
      FUN_180139bac(param_1,param_2,param_3);
    }
    goto LAB_180139ac4;
  }
  if (param_3 != (wchar_t *)0x0) {
    iVar12 = iVar13;
    if (((*param_3 == L'L') && (param_3[1] == L'C')) && (param_3[2] == L'_')) {
      do {
        pwVar6 = wcspbrk(param_3,L"=;");
        if (((pwVar6 == (wchar_t *)0x0) ||
            (sVar11 = (longlong)pwVar6 - (longlong)param_3 >> 1, sVar11 == 0)) || (*pwVar6 == L';'))
        goto LAB_180139ac4;
        iVar13 = 1;
        ppuVar15 = &PTR_u_LC_COLLATE_18017aeb8;
        do {
          iVar4 = wcsncmp((wchar_t *)*ppuVar15,param_3,sVar11);
          if (iVar4 == 0) {
            sVar7 = 0xffffffffffffffff;
            do {
              sVar7 = sVar7 + 1;
            } while (*(short *)(*ppuVar15 + sVar7 * 2) != 0);
            if (sVar11 == sVar7) break;
          }
          iVar13 = iVar13 + 1;
          ppuVar15 = ppuVar15 + 3;
        } while ((longlong)ppuVar15 < 0x18017af19);
        pwVar6 = pwVar6 + 1;
        sVar11 = wcscspn(pwVar6,L";");
        if ((sVar11 == 0) && (*pwVar6 != L';')) goto LAB_180139ac4;
        if (iVar13 < 6) {
          uVar5 = FUN_180145f04(local_208,0x83,(longlong)pwVar6,sVar11);
          if (uVar5 != 0) {
                    
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          if (0x105 < sVar11 * 2) {
            __report_rangecheckfailure();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_208[sVar11] = L'\0';
          lVar8 = FUN_180139bac(param_1,iVar13,local_208);
          if (lVar8 != 0) {
            iVar12 = iVar12 + 1;
          }
        }
      } while ((pwVar6[sVar11] != L'\0') && (param_3 = pwVar6 + sVar11 + 1, *param_3 != L'\0'));
    }
    else {
      lVar8 = _expandlocale(param_3,local_208,0x83,local_f8,0x55,local_218);
      if (lVar8 == 0) goto LAB_180139ac4;
      plVar14 = (longlong *)(param_1 + 0x28);
      iVar4 = iVar13;
      iVar9 = 1;
      do {
        iVar10 = iVar9;
        if (iVar4 != 0) {
          pwVar6 = local_208;
          lVar8 = *plVar14 - (longlong)pwVar6;
          do {
            wVar1 = *pwVar6;
            wVar2 = *(wchar_t *)((longlong)pwVar6 + lVar8);
            if (wVar1 != wVar2) break;
            pwVar6 = pwVar6 + 1;
          } while (wVar2 != L'\0');
          if ((wVar1 == wVar2) ||
             (lVar8 = FUN_180139bac(param_1,iVar4,local_208), iVar10 = iVar13, lVar8 != 0)) {
            iVar12 = iVar12 + 1;
            iVar10 = iVar9;
          }
        }
        iVar4 = iVar4 + 1;
        plVar14 = plVar14 + 4;
        iVar9 = iVar10;
      } while (iVar4 < 6);
      if (iVar10 != 0) goto LAB_180139abf;
    }
    if (iVar12 == 0) goto LAB_180139ac4;
  }
LAB_180139abf:
  _wsetlocale_get_all(param_1);
LAB_180139ac4:
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_248);
  return;
}

// ---- Function: FUN_180139bac ----
void FUN_180139bac(longlong param_1,int param_2,wchar_t *param_3)

{
  __acrt_ptd *p_Var1;
  wchar_t wVar2;
  wchar_t wVar3;
  int32_t uVar4;
  int *piVar5;
  errno_t eVar6;
  int iVar7;
  __acrt_ptd *p_Var8;
  longlong lVar9;
  int32_t *puVar10;
  ushort *puVar11;
  wchar_t *pwVar12;
  int32_t uVar13;
  short *psVar14;
  short *psVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar19;
  longlong lVar20;
  int32_t auStackY_368 [32];
  int32_t local_328;
  int32_t local_324;
  int32_t *local_320;
  int32_t local_318;
  wchar_t local_308;
  short local_306;
  short local_1f8 [88];
  WORD local_148 [128];
  ulonglong local_48;
  short *psVar18;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_368;
  lVar20 = (longlong)param_2;
  p_Var8 = FUN_1801387d8();
  p_Var1 = p_Var8 + 0x2c8;
  lVar9 = _expandlocale(param_3,&local_308,0x83,local_1f8,0x55,&local_328);
  if (lVar9 != 0) {
    pwVar12 = &local_308;
    lVar9 = lVar20 * 0x20;
    lVar19 = *(longlong *)(lVar9 + 0x28 + param_1) - (longlong)pwVar12;
    do {
      wVar2 = *pwVar12;
      wVar3 = *(wchar_t *)((longlong)pwVar12 + lVar19);
      if (wVar2 != wVar3) break;
      pwVar12 = pwVar12 + 1;
    } while (wVar3 != L'\0');
    if (wVar2 != wVar3) {
      lVar19 = -1;
      do {
        lVar16 = lVar19;
        lVar19 = lVar16 + 1;
      } while ((&local_308)[lVar19] != L'\0');
      puVar10 = (int32_t *)_malloc_base(lVar19 * 2 + 6);
      if (puVar10 != (int32_t *)0x0) {
        local_320 = *(int32_t **)(lVar9 + 0x28 + param_1);
        local_318 = *(int32_t *)(param_1 + 0x128 + lVar20 * 8);
        local_324 = *(int32_t *)(param_1 + 0xc);
        eVar6 = wcscpy_s((wchar_t *)(puVar10 + 1),lVar16 + 2,&local_308);
        psVar14 = (short *)0x0;
        if (eVar6 != 0) {
                    
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *(int32_t **)(lVar9 + 0x28 + param_1) = puVar10 + 1;
        if ((local_308 != L'C') || (psVar15 = psVar14, local_306 != 0)) {
          psVar15 = __acrt_copy_locale_name((int32_t (*) [32])local_1f8);
        }
        *(short **)(param_1 + 0x128 + lVar20 * 8) = psVar15;
        if (param_2 == 2) {
          *(int32_t *)(param_1 + 0xc) = local_328;
          uVar13 = *(int32_t *)(p_Var8 + 0x2e8);
          psVar15 = psVar14;
          psVar18 = psVar14;
          do {
            uVar17 = (uint)psVar18;
            if (*(int *)(param_1 + 0xc) == *(int *)(p_Var1 + (longlong)psVar15 * 8)) {
              if (uVar17 != 0) {
                *(int32_t *)p_Var1 = *(int32_t *)(p_Var1 + (longlong)(int)uVar17 * 8);
                *(int32_t *)(p_Var1 + (longlong)(int)uVar17 * 8) = uVar13;
              }
              break;
            }
            uVar4 = *(int32_t *)(p_Var1 + (longlong)psVar15 * 8);
            uVar17 = uVar17 + 1;
            psVar18 = (short *)(ulonglong)uVar17;
            *(int32_t *)(p_Var1 + (longlong)psVar15 * 8) = uVar13;
            psVar15 = (short *)((longlong)psVar15 + 1);
            uVar13 = uVar4;
          } while ((longlong)psVar15 < 5);
          if (uVar17 == 5) {
            iVar7 = FUN_180141a88((__crt_locale_pointers *)0x0,1,
                                  "\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f"
                                  ,0x7f,local_148,*(UINT *)(param_1 + 0xc),1);
            if (iVar7 == 0) {
              uVar17 = 0;
            }
            else {
              puVar11 = local_148;
              do {
                uVar17 = (int)psVar14 + 1;
                psVar14 = (short *)(ulonglong)uVar17;
                *puVar11 = *puVar11 & 0x1ff;
                puVar11 = puVar11 + 1;
              } while (uVar17 < 0x7f);
              iVar7 = memcmp(local_148,PTR_DAT_1801eb2e8,0xfe);
              uVar17 = (uint)(iVar7 == 0);
            }
            *(uint *)(p_Var8 + 0x2cc) = uVar17;
            *(int32_t *)p_Var1 = *(int32_t *)(param_1 + 0xc);
          }
          *(int32_t *)(param_1 + 0x1c) = *(int32_t *)(p_Var8 + 0x2cc);
        }
        else if (param_2 == 1) {
          *(int32_t *)(param_1 + 0x14) = local_328;
        }
        else if (param_2 == 5) {
          *(int32_t *)(param_1 + 0x18) = local_328;
        }
        iVar7 = (*(code *)PTR__guard_dispatch_icall_180157478)(param_1);
        if (iVar7 == 0) {
          if (local_320 != &DAT_1801eb458) {
            piVar5 = *(int **)(lVar9 + 0x38 + param_1);
            LOCK();
            iVar7 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              FUN_18013bf3c(*(LPVOID *)(lVar9 + 0x38 + param_1));
              FUN_18013bf3c(*(LPVOID *)(lVar9 + 0x30 + param_1));
              FUN_18013bf3c(*(LPVOID *)(param_1 + 0x128 + lVar20 * 8));
              *(int32_t *)(lVar9 + 0x28 + param_1) = 0;
              *(int32_t *)(param_1 + 0x128 + lVar20 * 8) = 0;
            }
          }
          *puVar10 = 1;
          *(int32_t **)(lVar9 + 0x38 + param_1) = puVar10;
        }
        else {
          *(int32_t **)(lVar9 + 0x28 + param_1) = local_320;
          FUN_18013bf3c(*(LPVOID *)(param_1 + 0x128 + lVar20 * 8));
          *(int32_t *)(param_1 + 0x128 + lVar20 * 8) = local_318;
          FUN_18013bf3c(puVar10);
          *(int32_t *)(param_1 + 0xc) = local_324;
        }
      }
    }
  }
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_368);
  return;
}

// ---- Function: FUN_180139ef8 ----
void FUN_180139ef8(int32_t (*param_1) [32],wchar_t *param_2)

{
  wchar_t wVar1;
  int32_t uVar2;
  size_t sVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  size_t *psVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int32_t auStack_c8 [32];
  longlong local_a8;
  size_t local_a0 [2];
  longlong local_90 [3];
  longlong local_78 [3];
  longlong local_60 [3];
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStack_c8;
  FUN_180151670(param_1,0,0x1ca);
  uVar8 = 0;
  psVar7 = local_a0;
  uVar6 = uVar8;
  uVar9 = uVar8;
  do {
    while( true ) {
      do {
        uVar5 = uVar6;
        if (3 < uVar5) goto LAB_18013a0cc;
        if ((int)uVar9 == 2) {
          sVar3 = 0xffffffffffffffff;
          do {
            sVar3 = sVar3 + 1;
          } while (param_2[sVar3] != L'\0');
        }
        else {
          sVar3 = wcscspn(param_2,L"-_.");
        }
        psVar7[-1] = (size_t)param_2;
        uVar6 = uVar5 + 1;
        *psVar7 = sVar3;
        wVar1 = param_2[sVar3];
        param_2 = param_2 + sVar3 + 1;
        *(int *)(psVar7 + 1) = (int)uVar9;
        psVar7 = psVar7 + 3;
        if (wVar1 == L'\0') goto LAB_180139faa;
        uVar9 = uVar8;
      } while (wVar1 == L'-');
      if (wVar1 != L'.') break;
      uVar9 = 2;
    }
  } while (wVar1 == L'_');
LAB_180139faa:
  if (uVar5 == 0) {
    parse_bcp47_language((short *)param_1,&local_a8);
  }
  else {
    if (uVar5 == 1) {
      uVar6 = parse_bcp47_language((short *)param_1,&local_a8);
      if ((((char)uVar6 == '\0') ||
          (uVar6 = parse_bcp47_script((longlong)param_1,local_90), (char)uVar6 != '\0')) ||
         (uVar6 = FUN_18013a1c8((longlong)param_1,local_90), (char)uVar6 != '\0'))
      goto LAB_18013a0cc;
      plVar4 = local_90;
    }
    else if (uVar5 == 2) {
      uVar6 = parse_bcp47_language((short *)param_1,&local_a8);
      if (((char)uVar6 == '\0') ||
         (((uVar6 = parse_bcp47_script((longlong)param_1,local_90), (char)uVar6 != '\0' &&
           ((uVar6 = FUN_18013a1c8((longlong)param_1,local_78), (char)uVar6 != '\0' ||
            (uVar2 = parse_bcp47_code_page((longlong)param_1,local_78), (char)uVar2 != '\0')))) ||
          (uVar6 = FUN_18013a1c8((longlong)param_1,local_90), (char)uVar6 == '\0'))))
      goto LAB_18013a0cc;
      plVar4 = local_78;
    }
    else {
      if (((uVar5 != 3) ||
          (uVar6 = parse_bcp47_language((short *)param_1,&local_a8), (char)uVar6 == '\0')) ||
         ((uVar6 = parse_bcp47_script((longlong)param_1,local_90), (char)uVar6 == '\0' ||
          (uVar6 = FUN_18013a1c8((longlong)param_1,local_78), (char)uVar6 == '\0'))))
      goto LAB_18013a0cc;
      plVar4 = local_60;
    }
    parse_bcp47_code_page((longlong)param_1,plVar4);
  }
LAB_18013a0cc:
  FUN_1801252c0(local_48 ^ (ulonglong)auStack_c8);
  return;
}

// ---- Function: parse_bcp47_code_page ----
/* Library Function - Single Match
    parse_bcp47_code_page
   
   Library: Visual Studio 2019 Release */

uint parse_bcp47_code_page(longlong param_1,longlong *param_2)

{
  uint in_EAX;
  uint uVar1;
  ulong uVar2;
  
  if ((int)param_2[2] == 2) {
    uVar2 = FUN_180145f04((short *)(param_1 + 0x100),0x10,*param_2,param_2[1]);
    if (uVar2 != 0) {
                    
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = in_EAX & 0xffffff00;
  }
  return uVar1;
}

// ---- Function: parse_bcp47_language ----
/* Library Function - Single Match
    parse_bcp47_language
   
   Library: Visual Studio 2019 Release */

ulonglong parse_bcp47_language(short *param_1,longlong *param_2)

{
  ulong uVar1;
  ulonglong in_RAX;
  int32_t extraout_var;
  
  if ((int)param_2[2] == 0) {
    in_RAX = param_2[1] - 2;
    if ((in_RAX < 2) && (in_RAX = FUN_18013a34c(*param_2,param_2[1]), (char)in_RAX != '\0')) {
      uVar1 = FUN_180145f04(param_1,0x40,*param_2,param_2[1]);
      if (uVar1 == 0) {
        uVar1 = FUN_180145f04(param_1 + 0x90,0x55,*param_2,param_2[1]);
        if (uVar1 == 0) {
          return CONCAT71((int7)(CONCAT44(extraout_var,uVar1) >> 8),1);
        }
      }
                    
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

// ---- Function: FUN_18013a1c8 ----
ulonglong FUN_18013a1c8(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulong uVar3;
  ulonglong in_RAX;
  int32_t extraout_var;
  ulonglong uVar4;
  
  if ((int)param_2[2] == 0) {
    if ((param_2[1] != 2) || (in_RAX = FUN_18013a34c(*param_2,2), (char)in_RAX == '\0')) {
      if (param_2[1] != 3) goto LAB_18013a291;
      lVar2 = *param_2;
      uVar4 = 0;
      do {
        uVar1 = *(ushort *)(lVar2 + uVar4 * 2);
        in_RAX = FUN_180136820();
        if ((0xff < uVar1) ||
           (uVar1 = *(ushort *)(in_RAX + (ulonglong)uVar1 * 2), in_RAX = (ulonglong)uVar1,
           (uVar1 >> 2 & 1) == 0)) goto LAB_18013a291;
        uVar4 = uVar4 + 1;
      } while (uVar4 < 3);
    }
    uVar3 = FUN_180145f04((short *)(param_1 + 0x80),0x40,*param_2,param_2[1]);
    if ((uVar3 == 0) &&
       (uVar3 = FUN_180145e0c((short *)(param_1 + 0x120),0x55,&DAT_180178284,1), uVar3 == 0)) {
      uVar3 = FUN_180145e0c((short *)(param_1 + 0x120),0x55,(short *)*param_2,param_2[1]);
      if (uVar3 == 0) {
        return CONCAT71((int7)(CONCAT44(extraout_var,uVar3) >> 8),1);
      }
    }
                    
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
LAB_18013a291:
  return in_RAX & 0xffffffffffffff00;
}

// ---- Function: parse_bcp47_script ----
/* Library Function - Single Match
    parse_bcp47_script
   
   Library: Visual Studio 2019 Release */

ulonglong parse_bcp47_script(longlong param_1,longlong *param_2)

{
  ulong uVar1;
  ulonglong in_RAX;
  int32_t extraout_var;
  
  if ((((int)param_2[2] == 0) && (param_2[1] == 4)) &&
     (in_RAX = FUN_18013a34c(*param_2,4), (char)in_RAX != '\0')) {
    uVar1 = FUN_180145e0c((short *)(param_1 + 0x120),0x55,&DAT_180178284,1);
    if (uVar1 == 0) {
      uVar1 = FUN_180145e0c((short *)(param_1 + 0x120),0x55,(short *)*param_2,param_2[1]);
      if (uVar1 == 0) {
        return CONCAT71((int7)(CONCAT44(extraout_var,uVar1) >> 8),1);
      }
    }
                    
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return in_RAX & 0xffffffffffffff00;
}

// ---- Function: FUN_18013a34c ----
int32_t FUN_18013a34c(longlong param_1,ulonglong param_2)

{
  ushort uVar1;
  int32_t in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = *(ushort *)(param_1 + uVar3 * 2);
      lVar2 = FUN_180136820();
      in_RAX = 0;
      if ((0xff < uVar1) || ((*(ushort *)(lVar2 + (ulonglong)uVar1 * 2) & 0x103) == 0)) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

// ---- Function: operator____ ----
/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_48fc4a32460bb0512d3b13f8499328be>,class <lambda_6c3dac0a4f3f9cefca9bb494422f9b77> &
   __ptr64,class <lambda_0a2f2c9f9a56eb2b08bfa6ff61d331c5> >(class
   <lambda_48fc4a32460bb0512d3b13f8499328be> && __ptr64,class
   <lambda_6c3dac0a4f3f9cefca9bb494422f9b77> & __ptr64,class
   <lambda_0a2f2c9f9a56eb2b08bfa6ff61d331c5> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_bd00b5aa228bd7e7e5b2b5db5fd2933b>,class <lambda_777d11615145f89ee95b9466d285deeb> &
   __ptr64,class <lambda_6e5e48fbd24f9f8f81b203eb3d877683> >(class
   <lambda_bd00b5aa228bd7e7e5b2b5db5fd2933b> && __ptr64,class
   <lambda_777d11615145f89ee95b9466d285deeb> & __ptr64,class
   <lambda_6e5e48fbd24f9f8f81b203eb3d877683> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

BOOL operator()<>(int32_t param_1,int *param_2,int32_t *param_3,int *param_4)

{
  byte bVar1;
  BOOL BVar2;
  
  __acrt_lock(*param_2);
  bVar1 = 0x40 - ((byte)DAT_1801eb080 & 0x3f) & 0x3f;
  DAT_1801ee318 =
       (*(ulonglong *)*param_3 >> bVar1 | *(ulonglong *)*param_3 << 0x40 - bVar1) ^ DAT_1801eb080;
  BVar2 = EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_18013a3b8,1);
  DAT_1801ee318 = DAT_1801eb080;
  __acrt_unlock(*param_4);
  return BVar2;
}

// ---- Function: FUN_18013a46c ----
FARPROC FUN_18013a46c(uint param_1,LPCSTR param_2,uint *param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  wchar_t *lpLibFileName;
  DWORD DVar3;
  int iVar4;
  HMODULE hLibModule;
  byte bVar5;
  FARPROC pFVar6;
  
  bVar5 = (byte)DAT_1801eb080 & 0x3f;
  pFVar6 = (FARPROC)(((&DAT_1801ee220)[param_1] ^ DAT_1801eb080) >> bVar5 |
                    ((&DAT_1801ee220)[param_1] ^ DAT_1801eb080) << 0x40 - bVar5);
  if (pFVar6 != (FARPROC)0xffffffffffffffff) {
    if (pFVar6 != (FARPROC)0x0) {
      return pFVar6;
    }
    if (param_3 != param_4) {
      do {
        uVar2 = *param_3;
        hLibModule = (HMODULE)(&DAT_1801ee170)[uVar2];
        if (hLibModule == (HMODULE)0x0) {
          lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_datetime_l1_1_1_18017b660)[uVar2];
          hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
          if ((hLibModule != (HMODULE)0x0) ||
             ((((DVar3 = GetLastError(), DVar3 == 0x57 &&
                (iVar4 = wcsncmp(lpLibFileName,L"api-ms-",7), iVar4 != 0)) &&
               (iVar4 = wcsncmp(lpLibFileName,L"ext-ms-",7), iVar4 != 0)) &&
              (hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0), hLibModule != (HMODULE)0x0)
              ))) {
            LOCK();
            lVar1 = (&DAT_1801ee170)[uVar2];
            (&DAT_1801ee170)[uVar2] = hLibModule;
            UNLOCK();
            if (lVar1 != 0) {
              FreeLibrary(hLibModule);
            }
            goto LAB_18013a5ee;
          }
          LOCK();
          (&DAT_1801ee170)[uVar2] = 0xffffffffffffffff;
          UNLOCK();
        }
        else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_18013a5ee:
          pFVar6 = GetProcAddress(hLibModule,param_2);
          if (pFVar6 != (FARPROC)0x0) {
            bVar5 = 0x40 - ((byte)DAT_1801eb080 & 0x3f) & 0x3f;
            LOCK();
            (&DAT_1801ee220)[param_1] =
                 ((ulonglong)pFVar6 >> bVar5 | (longlong)pFVar6 << 0x40 - bVar5) ^ DAT_1801eb080;
            UNLOCK();
            return pFVar6;
          }
          break;
        }
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
    }
    bVar5 = 0x40 - ((byte)DAT_1801eb080 & 0x3f) & 0x3f;
    LOCK();
    (&DAT_1801ee220)[param_1] = (0xffffffffffffffffU >> bVar5 | -1L << 0x40 - bVar5) ^ DAT_1801eb080
    ;
    UNLOCK();
  }
  return (FARPROC)0x0;
}

// ---- Function: FUN_18013a628 ----
int32_t FUN_18013a628(int32_t param_1)

{
  FARPROC pFVar1;
  int32_t uVar2;
  
  pFVar1 = FUN_18013a46c(0x19,"AppPolicyGetProcessTerminationMethod",(uint *)&DAT_18017bcf4,
                         (uint *)"AppPolicyGetProcessTerminationMethod");
  if (pFVar1 != (FARPROC)0x0) {
    uVar2 = (*(code *)PTR__guard_dispatch_icall_180157478)(0xfffffffffffffffa,param_1);
    return uVar2;
  }
  return 0xc0000225;
}

// ---- Function: FUN_18013a680 ----
int32_t FUN_18013a680(void)

{
  FARPROC pFVar1;
  int32_t uVar2;
  
  pFVar1 = FUN_18013a46c(0,"AreFileApisANSI",(uint *)&DAT_18017bbb8,(uint *)&DAT_18017bbbc);
  if (pFVar1 != (FARPROC)0x0) {
    uVar2 = (*(code *)PTR__guard_dispatch_icall_180157478)();
    return uVar2;
  }
  return 1;
}

// ---- Function: FUN_18013a6c4 ----
void FUN_18013a6c4(ushort *param_1,DWORD param_2,PCNZWCH param_3,int param_4,PCNZWCH param_5,
                  int param_6,int32_t param_7,int32_t param_8,int32_t param_9)

{
  LCID Locale;
  FARPROC pFVar1;
  
  pFVar1 = FUN_18013a46c(1,"CompareStringEx",(uint *)&DAT_18017bbd0,(uint *)"CompareStringEx");
  if (pFVar1 == (FARPROC)0x0) {
    Locale = FUN_18013ad24(param_1,0);
    CompareStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_180157478)
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}

// ---- Function: FUN_18013a7b0 ----
void FUN_18013a7b0(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  FARPROC pFVar1;
  int32_t local_res8;
  int32_t local_28 [4];
  int local_24 [3];
  int32_t *local_18 [2];
  
  local_res8 = param_1;
  pFVar1 = FUN_18013a46c(2,"EnumSystemLocalesEx",(uint *)&DAT_18017bbe8,
                         (uint *)"EnumSystemLocalesEx");
  if (pFVar1 == (FARPROC)0x0) {
    local_18[0] = &local_res8;
    local_24[0] = 4;
    local_24[1] = 4;
    operator()<>(local_28,local_24 + 1,local_18,local_24);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_180157478)(local_res8,param_2,param_3,param_4);
  }
  return;
}

// ---- Function: FlsAlloc ----
DWORD __stdcall FlsAlloc(PFLS_CALLBACK_FUNCTION lpCallback)

{
  DWORD DVar1;
  
                    
                    
  DVar1 = FlsAlloc(lpCallback);
  return DVar1;
}

// ---- Function: FlsFree ----
BOOL __stdcall FlsFree(DWORD dwFlsIndex)

{
  BOOL BVar1;
  
                    
                    
  BVar1 = FlsFree(dwFlsIndex);
  return BVar1;
}

