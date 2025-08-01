#include "_wsetlocale.h"
#include <stdint.h>
#include <stddef.h>

wchar_t * __cdecl _wsetlocale(int _Category,wchar_t *_Locale) {
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
}

short * _wsetlocale_get_all(longlong param_1) {
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
}

void _wsetlocale_nolock(longlong param_1,int param_2,wchar_t *param_3) {
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
}

