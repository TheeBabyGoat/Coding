#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1801412e8 ----
void FUN_1801412e8(uint *param_1,ulonglong *param_2,ulonglong param_3,uint param_4,uint *param_5,
                  uint *param_6)

{
  FUN_180141310(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}

// ---- Function: FUN_180141310 ----
void FUN_180141310(uint *param_1,ulonglong *param_2,ulonglong param_3,uint param_4,uint *param_5,
                  uint *param_6,int param_7)

{
  uint uVar1;
  DWORD dwExceptionCode;
  uint *local_res8;
  
  dwExceptionCode = 0xc000000d;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    dwExceptionCode = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((param_3 & 2) != 0) {
    dwExceptionCode = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((param_3 & 1) != 0) {
    dwExceptionCode = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((param_3 & 4) != 0) {
    dwExceptionCode = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((param_3 & 8) != 0) {
    dwExceptionCode = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 7) << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 9) << 3) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 10) << 2) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 0xb) * 2) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~((uint)*param_2 >> 0xc) ^ param_1[2]) & 1;
  local_res8 = param_1;
  uVar1 = FUN_180141730();
  if ((uVar1 & 1) != 0) {
    local_res8[3] = local_res8[3] | 0x10;
  }
  if ((uVar1 & 4) != 0) {
    local_res8[3] = local_res8[3] | 8;
  }
  if ((uVar1 & 8) != 0) {
    local_res8[3] = local_res8[3] | 4;
  }
  if ((uVar1 & 0x10) != 0) {
    local_res8[3] = local_res8[3] | 2;
  }
  if ((uVar1 & 0x20) != 0) {
    local_res8[3] = local_res8[3] | 1;
  }
  uVar1 = (uint)*param_2 & 0x6000;
  if (((uint)*param_2 & 0x6000) == 0) {
    *local_res8 = *local_res8 & 0xfffffffc;
  }
  else if (uVar1 == 0x2000) {
    *local_res8 = *local_res8 & 0xfffffffd;
    *local_res8 = *local_res8 | 1;
  }
  else if (uVar1 == 0x4000) {
    *local_res8 = *local_res8 & 0xfffffffe;
    *local_res8 = *local_res8 | 2;
  }
  else if (uVar1 == 0x6000) {
    *local_res8 = *local_res8 | 3;
  }
  *local_res8 = *local_res8 & 0xfffe001f;
  *local_res8 = *local_res8 | (param_4 & 0xfff) << 5;
  local_res8[8] = local_res8[8] | 1;
  if (param_7 == 0) {
    local_res8[8] = local_res8[8] & 0xffffffe3 | 2;
    *(int32_t *)(local_res8 + 4) = *(int32_t *)param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe3 | 2;
    *(int32_t *)(local_res8 + 0x14) = *(int32_t *)param_6;
  }
  else {
    local_res8[8] = local_res8[8] & 0xffffffe1;
    local_res8[4] = *param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe1;
    local_res8[0x14] = *param_6;
  }
  _clrfp();
  RaiseException(dwExceptionCode,0,1,(ULONG_PTR *)&local_res8);
  if ((local_res8[2] & 0x10) != 0) {
    *param_2 = *param_2 & 0xffffffffffffff7f;
  }
  if ((local_res8[2] & 8) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffdff;
  }
  if ((local_res8[2] & 4) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffbff;
  }
  if ((local_res8[2] & 2) != 0) {
    *param_2 = *param_2 & 0xfffffffffffff7ff;
  }
  if ((local_res8[2] & 1) != 0) {
    *param_2 = *param_2 & 0xffffffffffffefff;
  }
  uVar1 = *local_res8 & 3;
  if (uVar1 == 0) {
    *param_2 = *param_2 & 0xffffffffffff9fff;
  }
  else if (uVar1 == 1) {
    *param_2 = *param_2 & 0xffffffffffffbfff;
    *param_2 = *param_2 | 0x2000;
  }
  else if (uVar1 == 2) {
    *param_2 = *param_2 & 0xffffffffffffdfff;
    *param_2 = *param_2 | 0x4000;
  }
  else if (uVar1 == 3) {
    *param_2 = *param_2 | 0x6000;
  }
  if (param_7 == 0) {
    *(int32_t *)param_6 = *(int32_t *)(local_res8 + 0x14);
  }
  else {
    *param_6 = local_res8[0x14];
  }
  return;
}

// ---- Function: FUN_180141618 ----
void FUN_180141618(uint *param_1,ulonglong *param_2,ulonglong param_3,uint param_4,uint *param_5,
                  uint *param_6)

{
  FUN_180141310(param_1,param_2,param_3,param_4,param_5,param_6,1);
  return;
}

// ---- Function: FUN_180141644 ----
void FUN_180141644(int param_1)

{
  ulong *puVar1;
  
  if (param_1 == 1) {
    puVar1 = __doserrno();
    *puVar1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    puVar1 = __doserrno();
    *puVar1 = 0x22;
  }
  return;
}

// ---- Function: _clrfp ----
/* Library Function - Single Match
    _clrfp
   
   Library: Visual Studio */

uint _clrfp(void)

{
  uint uVar1;
  
  uVar1 = _get_fpsr();
  _fclrf();
  return uVar1 & 0x3f;
}

// ---- Function: _ctrlfp ----
/* Library Function - Single Match
    _ctrlfp
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint _ctrlfp(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = _get_fpsr();
  uVar2 = (~param_2 | 0xffff807f) & uVar1 | param_1 & param_2;
  if ((DAT_1801eb770 == '\0') || ((uVar2 & 0x40) == 0)) {
    FUN_18014ab90(uVar2 & 0xffffffbf);
  }
  else {
    FUN_18014ab90(uVar2);
  }
  return uVar1;
}

// ---- Function: _set_statfp ----
/* Library Function - Single Match
    _set_statfp
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _set_statfp(uint param_1)

{
  uint uVar1;
  
  uVar1 = _get_fpsr();
  FUN_18014ab90(uVar1 | param_1 & 0x3f);
  return;
}

// ---- Function: FUN_180141730 ----
uint FUN_180141730(void)

{
  uint uVar1;
  
  uVar1 = _get_fpsr();
  return uVar1 & 0x3f;
}

// ---- Function: FUN_180141744 ----
void FUN_180141744(__crt_locale_pointers *param_1,ushort *param_2,LCTYPE param_3,ulonglong param_4,
                  int param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  LPWSTR pWVar5;
  ulonglong uVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  int32_t auStack_88 [64];
  WCHAR local_48 [4];
  longlong local_40;
  longlong local_38;
  char local_28;
  ulonglong local_20;
  
  puVar7 = auStack_88;
  puVar9 = auStack_88;
  puVar8 = auStack_88;
  local_20 = DAT_1801eb080 ^ (ulonglong)local_48;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,param_1);
  uVar1 = *(uint *)(local_38 + 0xc);
  iVar3 = FUN_18013a930(param_2,param_3,(LPWSTR)0x0,0);
  if (iVar3 == 0) goto LAB_180141886;
  uVar6 = (longlong)iVar3 * 2 + 0x10;
  uVar6 = -(ulonglong)((ulonglong)((longlong)iVar3 * 2) < uVar6) & uVar6;
  if (uVar6 == 0) {
    pWVar5 = (LPWSTR)0x0;
LAB_18014186e:
    puVar9 = puVar8;
    if (pWVar5 == (LPWSTR)0x0) goto LAB_180141886;
  }
  else {
    if (uVar6 < 0x401) {
      uVar4 = uVar6 + 0xf;
      if (uVar4 <= uVar6) {
        uVar4 = 0xffffffffffffff0;
      }
      lVar2 = -(uVar4 & 0xfffffffffffffff0);
      puVar8 = auStack_88 + lVar2;
      puVar7 = auStack_88 + lVar2;
      pWVar5 = (LPWSTR)((longlong)local_48 + lVar2);
      if (pWVar5 == (LPWSTR)0x0) goto LAB_18014186e;
      pWVar5[0] = L'쳌';
      pWVar5[1] = L'\0';
LAB_180141815:
      pWVar5 = pWVar5 + 8;
      puVar8 = puVar7;
    }
    else {
      pWVar5 = (LPWSTR)_malloc_base(uVar6);
      puVar8 = auStack_88;
      if (pWVar5 != (LPWSTR)0x0) {
        pWVar5[0] = L'\xdddd';
        pWVar5[1] = L'\0';
        goto LAB_180141815;
      }
    }
    if (pWVar5 == (LPWSTR)0x0) goto LAB_18014186e;
    *(int32_t *)(puVar8 + -8) = 0x18014182e;
    iVar3 = FUN_18013a930(param_2,param_3,pWVar5,iVar3);
    if (iVar3 == 0) goto LAB_18014186e;
    *(int32_t *)(puVar8 + 0x38) = 0;
    *(int32_t *)(puVar8 + 0x30) = 0;
    *(int *)(puVar8 + 0x28) = param_5;
    *(ulonglong *)(puVar8 + 0x20) = -(ulonglong)(param_5 != 0) & param_4;
    *(int32_t *)(puVar8 + -8) = 0x180141868;
    FUN_180141208(uVar1,0,pWVar5,-1,*(LPSTR *)(puVar8 + 0x20),*(int *)(puVar8 + 0x28),
                  *(LPBOOL *)(puVar8 + 0x30),*(LPBOOL *)(puVar8 + 0x38));
  }
  puVar9 = puVar8;
  if (*(int *)(pWVar5 + -8) == 0xdddd) {
    *(int32_t *)(puVar8 + -8) = 0x180141886;
    FUN_18013bf3c(pWVar5 + -8);
  }
LAB_180141886:
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
  uVar6 = local_20 ^ (ulonglong)local_48;
  *(int32_t *)(puVar9 + -8) = 0x1801418a5;
  FUN_1801252c0(uVar6);
  return;
}

// ---- Function: __acrt_GetLocaleInfoA ----
/* Library Function - Single Match
    __acrt_GetLocaleInfoA
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_GetLocaleInfoA
               (__crt_locale_pointers *param_1,int param_2,ushort *param_3,LCTYPE param_4,
               longlong *param_5)

{
  int iVar1;
  ulong uVar2;
  DWORD DVar3;
  LPVOID pvVar4;
  LPWSTR pWVar5;
  int32_t auStackY_108 [32];
  int32_t local_d8 [4];
  int32_t local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_108;
  *param_5 = 0;
  if (param_2 == 1) {
    iVar1 = FUN_180141744(param_1,param_3,param_4,(ulonglong)local_c8,0x80);
    if (iVar1 != 0) {
      pvVar4 = _calloc_base((longlong)iVar1,1);
      *param_5 = (longlong)pvVar4;
      FUN_18013bf3c((LPVOID)0x0);
      if ((*param_5 != 0) &&
         (uVar2 = FUN_18014abd0((char *)*param_5,(longlong)iVar1,(longlong)local_c8,
                                (longlong)(iVar1 + -1)), uVar2 != 0)) {
                    
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_180141a51;
    }
    DVar3 = GetLastError();
    if (DVar3 != 0x7a) goto LAB_180141a51;
    iVar1 = FUN_180141744(param_1,param_3,param_4,0,0);
    if (iVar1 == 0) goto LAB_180141a51;
    pWVar5 = (LPWSTR)_calloc_base((longlong)iVar1,1);
    if (pWVar5 != (LPWSTR)0x0) {
      iVar1 = FUN_180141744(param_1,param_3,param_4,(ulonglong)pWVar5,iVar1);
      goto LAB_1801419bf;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 0) {
        local_d8[0] = 0;
        iVar1 = FUN_18013a930(param_3,param_4 | 0x20000000,(LPWSTR)local_d8,2);
        if (iVar1 != 0) {
          *(int32_t *)param_5 = (int32_t)local_d8[0];
        }
      }
      goto LAB_180141a51;
    }
    iVar1 = FUN_18013a930(param_3,param_4,(LPWSTR)0x0,0);
    if (iVar1 == 0) goto LAB_180141a51;
    pWVar5 = (LPWSTR)_calloc_base((longlong)iVar1,2);
    if (pWVar5 != (LPWSTR)0x0) {
      iVar1 = FUN_18013a930(param_3,param_4,pWVar5,iVar1);
LAB_1801419bf:
      if (iVar1 != 0) {
        *param_5 = (longlong)pWVar5;
        pWVar5 = (LPWSTR)0x0;
      }
    }
  }
  FUN_18013bf3c(pWVar5);
LAB_180141a51:
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_108);
  return;
}

// ---- Function: FUN_180141a88 ----
void FUN_180141a88(__crt_locale_pointers *param_1,DWORD param_2,LPCSTR param_3,int param_4,
                  LPWORD param_5,UINT param_6,int param_7)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  int32_t (*lpSrcStr) [32];
  ulonglong uVar4;
  ulonglong uVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  int32_t auStackY_88 [32];
  int32_t local_58 [8];
  longlong local_50;
  longlong local_48;
  char local_38;
  ulonglong local_30;
  
  puVar6 = auStackY_88;
  puVar8 = auStackY_88;
  puVar7 = auStackY_88;
  local_30 = DAT_1801eb080 ^ (ulonglong)local_58;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_1);
  if (param_6 == 0) {
    param_6 = *(UINT *)(local_48 + 0xc);
  }
  iVar2 = FUN_180141178(param_6,(-(uint)(param_7 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,0);
  if (iVar2 == 0) goto LAB_180141bde;
  uVar5 = (longlong)iVar2 * 2;
  uVar4 = -(ulonglong)(uVar5 < uVar5 + 0x10) & uVar5 + 0x10;
  if (uVar4 == 0) {
    lpSrcStr = (int32_t (*) [32])0x0;
LAB_180141bc6:
    puVar8 = puVar7;
    if (lpSrcStr == (int32_t (*) [32])0x0) goto LAB_180141bde;
  }
  else {
    if (uVar4 < 0x401) {
      uVar3 = uVar4 + 0xf;
      if (uVar3 <= uVar4) {
        uVar3 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar3 & 0xfffffffffffffff0);
      puVar7 = auStackY_88 + lVar1;
      puVar6 = auStackY_88 + lVar1;
      lpSrcStr = (int32_t (*) [32])(local_58 + lVar1);
      if (lpSrcStr == (int32_t (*) [32])0x0) goto LAB_180141bc6;
      *(int32_t *)*lpSrcStr = 0xcccc;
LAB_180141b74:
      lpSrcStr = (int32_t (*) [32])((longlong)*lpSrcStr + 0x10);
      puVar7 = puVar6;
    }
    else {
      lpSrcStr = (int32_t (*) [32])_malloc_base(uVar4);
      puVar7 = auStackY_88;
      if (lpSrcStr != (int32_t (*) [32])0x0) {
        *(int32_t *)*lpSrcStr = 0xdddd;
        goto LAB_180141b74;
      }
    }
    if (lpSrcStr == (int32_t (*) [32])0x0) goto LAB_180141bc6;
    *(int32_t *)(puVar7 + -8) = 0x180141b8a;
    FUN_180151670(lpSrcStr,0,uVar5);
    *(int *)(puVar7 + 0x28) = iVar2;
    *(int32_t (**) [32])(puVar7 + 0x20) = lpSrcStr;
    *(int32_t *)(puVar7 + -8) = 0x180141ba6;
    iVar2 = FUN_180141178(param_6,1,param_3,param_4,*(LPWSTR *)(puVar7 + 0x20),
                          *(int *)(puVar7 + 0x28));
    if (iVar2 == 0) goto LAB_180141bc6;
    *(int32_t *)(puVar7 + -8) = 0x180141bc0;
    GetStringTypeW(param_2,(LPCWSTR)lpSrcStr,iVar2,param_5);
  }
  puVar8 = puVar7;
  if (*(int *)(lpSrcStr[-1] + 0x10) == 0xdddd) {
    *(int32_t *)(puVar7 + -8) = 0x180141bde;
    FUN_18013bf3c(lpSrcStr[-1] + 0x10);
  }
LAB_180141bde:
  if (local_38 != '\0') {
    *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
  }
  uVar5 = local_30 ^ (ulonglong)local_58;
  *(int32_t *)(puVar8 + -8) = 0x180141bfd;
  FUN_1801252c0(uVar5);
  return;
}

// ---- Function: FUN_180141c18 ----
ulonglong FUN_180141c18(int32_t param_1,int *param_2,int32_t param_3,int *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(*param_2);
  bVar1 = (byte)DAT_1801eb080 & 0x3f;
  uVar2 = DAT_1801ee848 ^ DAT_1801eb080;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}

// ---- Function: __acrt_get_sigabrt_handler ----
/* Library Function - Single Match
    __acrt_get_sigabrt_handler
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_get_sigabrt_handler(void)

{
  int32_t local_res8 [8];
  int local_res10 [2];
  int local_res18 [4];
  
  local_res10[0] = 3;
  local_res18[0] = 3;
  FUN_180141c18(local_res8,local_res18,local_res8,local_res10);
  return;
}

// ---- Function: FUN_180141c90 ----
void FUN_180141c90(int32_t param_1)

{
  _DAT_1801ee838 = param_1;
  _DAT_1801ee840 = param_1;
  DAT_1801ee848 = param_1;
  _DAT_1801ee850 = param_1;
  return;
}

// ---- Function: FUN_180141cb0 ----
int32_t FUN_180141cb0(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulong *puVar4;
  __acrt_ptd *p_Var5;
  longlong lVar6;
  int32_t uVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  __acrt_ptd *p_Var12;
  int32_t local_res10;
  
  p_Var5 = (__acrt_ptd *)0x0;
  p_Var12 = (__acrt_ptd *)0x0;
  local_res10 = 0;
  bVar2 = true;
  if (param_1 == 2) {
LAB_180141d07:
    if (param_1 == 2) {
      puVar11 = (ulonglong *)&DAT_1801ee838;
    }
    else if (param_1 == 6) {
LAB_180141da9:
      puVar11 = &DAT_1801ee848;
      p_Var12 = p_Var5;
    }
    else if (param_1 == 0xf) {
      puVar11 = (ulonglong *)&DAT_1801ee850;
    }
    else if (param_1 == 0x15) {
      puVar11 = (ulonglong *)&DAT_1801ee840;
      p_Var12 = p_Var5;
    }
    else {
      if (param_1 == 0x16) goto LAB_180141da9;
      puVar11 = (ulonglong *)0x0;
      p_Var12 = p_Var5;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_180141d37;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_180141d89;
      }
      goto LAB_180141d07;
    }
LAB_180141d37:
    p_Var12 = FUN_180138950();
    if (p_Var12 == (__acrt_ptd *)0x0) {
      return 0xffffffff;
    }
    lVar3 = *(longlong *)p_Var12;
    lVar6 = DAT_18017ac40 * 0x10 + lVar3;
    for (; lVar3 != lVar6; lVar3 = lVar3 + 0x10) {
      if (*(uint *)(lVar3 + 4) == param_1) goto LAB_180141d84;
    }
    lVar3 = 0;
LAB_180141d84:
    if (lVar3 == 0) {
LAB_180141d89:
      puVar4 = __doserrno();
      *puVar4 = 0x16;
      FUN_18012b794();
      return 0xffffffff;
    }
    puVar11 = (ulonglong *)(lVar3 + 8);
    bVar2 = false;
  }
  lVar3 = 0;
  if (bVar2) {
    __acrt_lock(3);
  }
  uVar10 = *puVar11;
  if (bVar2) {
    bVar8 = (byte)DAT_1801eb080 & 0x3f;
    uVar10 = (uVar10 ^ DAT_1801eb080) >> bVar8 | (uVar10 ^ DAT_1801eb080) << 0x40 - bVar8;
  }
  if (uVar10 == 1) goto LAB_180141e92;
  if (uVar10 == 0) {
    if (bVar2) {
      __acrt_unlock(3);
    }
    FUN_18013725c(3);
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return uVar7;
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar3 = *(longlong *)(p_Var12 + 8);
    *(longlong *)(p_Var12 + 8) = 0;
    if (param_1 == 8) {
      p_Var5 = FUN_1801387d8();
      local_res10 = *(int32_t *)(p_Var5 + 0x10);
      p_Var5 = FUN_1801387d8();
      *(int32_t *)(p_Var5 + 0x10) = 0x8c;
      goto LAB_180141e4a;
    }
  }
  else {
LAB_180141e4a:
    if (param_1 == 8) {
      lVar6 = DAT_18017ac48 * 0x10 + *(longlong *)p_Var12;
      lVar9 = DAT_18017ac50 * 0x10 + lVar6;
      for (; lVar6 != lVar9; lVar6 = lVar6 + 0x10) {
        *(int32_t *)(lVar6 + 8) = 0;
      }
      goto LAB_180141e92;
    }
  }
  *puVar11 = DAT_1801eb080;
LAB_180141e92:
  if (bVar2) {
    __acrt_unlock(3);
  }
  if (uVar10 != 1) {
    if (param_1 == 8) {
      p_Var5 = FUN_1801387d8();
      (*(code *)PTR__guard_dispatch_icall_180157478)(8,*(int32_t *)(p_Var5 + 0x10));
    }
    else {
      (*(code *)PTR__guard_dispatch_icall_180157478)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (*(longlong *)(p_Var12 + 8) = lVar3, param_1 == 8)) {
      p_Var12 = FUN_1801387d8();
      *(int32_t *)(p_Var12 + 0x10) = local_res10;
    }
  }
  return 0;
}

// ---- Function: FUN_180141f2c ----
int32_t
FUN_180141f2c(ulonglong *param_1,LPWSTR param_2,ulonglong param_3,byte *param_4,ulonglong param_5,
             longlong *param_6)

{
  ulonglong uVar1;
  int32_t uVar2;
  
  uVar2 = 0;
  if (param_2 == (LPWSTR)0x0) {
    if (param_3 == 0) {
LAB_180141f9a:
      if (param_1 != (ulonglong *)0x0) {
        *param_1 = 0;
      }
      uVar1 = param_5;
      if (param_3 < param_5) {
        uVar1 = param_3;
      }
      if (uVar1 < 0x80000000) {
        uVar1 = FUN_18014204c(param_2,param_4,uVar1,param_6);
        if (uVar1 == 0xffffffffffffffff) {
          if (param_2 != (LPWSTR)0x0) {
            *param_2 = L'\0';
          }
          if ((char)param_6[6] == '\0') {
            return 0;
          }
          return *(int32_t *)((longlong)param_6 + 0x2c);
        }
        uVar1 = uVar1 + 1;
        if (param_2 == (LPWSTR)0x0) goto LAB_180142027;
        uVar2 = 0;
        if (param_3 < uVar1) {
          if (param_5 != 0xffffffffffffffff) {
            *param_2 = L'\0';
            uVar2 = 0x22;
            goto LAB_180142008;
          }
          uVar2 = 0x50;
          uVar1 = param_3;
        }
        param_2[uVar1 - 1] = L'\0';
LAB_180142027:
        if (param_1 == (ulonglong *)0x0) {
          return uVar2;
        }
        *param_1 = uVar1;
        return uVar2;
      }
      uVar2 = 0x16;
LAB_180142008:
      *(int32_t *)((longlong)param_6 + 0x2c) = uVar2;
      *(int32_t *)(param_6 + 6) = 1;
      goto LAB_180141f7c;
    }
  }
  else if (param_3 != 0) {
    *param_2 = L'\0';
    goto LAB_180141f9a;
  }
  uVar2 = 0x16;
  *(int32_t *)(param_6 + 6) = 1;
  *(int32_t *)((longlong)param_6 + 0x2c) = 0x16;
LAB_180141f7c:
  FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_6);
  return uVar2;
}

// ---- Function: FUN_18014204c ----
ulonglong FUN_18014204c(LPWSTR param_1,byte *param_2,ulonglong param_3,longlong *param_4)

{
  UINT UVar1;
  int iVar2;
  DWORD DVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint local_res8 [2];
  byte *local_res10;
  
  uVar4 = 0;
  if (param_1 != (LPWSTR)0x0) {
    if (param_3 == 0) {
      return 0;
    }
    *param_1 = L'\0';
  }
  local_res10 = param_2;
  if (param_2 == (byte *)0x0) {
    *(int32_t *)(param_4 + 6) = 1;
    *(int32_t *)((longlong)param_4 + 0x2c) = 0x16;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    uVar4 = 0xffffffffffffffff;
  }
  else {
    if ((char)param_4[5] == '\0') {
      FUN_180130ef0(param_4);
    }
    UVar1 = *(UINT *)(param_4[3] + 0xc);
    if (UVar1 == 0xfde9) {
      local_res8[0] = 0;
      local_res8[1] = 0;
      uVar4 = FUN_180148020((ushort *)param_1,&local_res10,param_3,local_res8,(longlong)param_4);
    }
    else {
      lVar5 = *(longlong *)(param_4[3] + 0x138);
      if (param_1 == (LPWSTR)0x0) {
        uVar4 = 0xffffffffffffffff;
        if (lVar5 == 0) {
          do {
            uVar4 = uVar4 + 1;
          } while (local_res10[uVar4] != 0);
          return uVar4;
        }
        iVar2 = FUN_180141178(UVar1,9,(LPCSTR)local_res10,-1,(LPWSTR)0x0,0);
        lVar5 = (longlong)iVar2;
        if (lVar5 == 0) {
          *(int32_t *)(param_4 + 6) = 1;
          *(int32_t *)((longlong)param_4 + 0x2c) = 0x2a;
          return 0xffffffffffffffff;
        }
      }
      else {
        if (lVar5 == 0) {
          if (param_3 == 0) {
            return 0;
          }
          do {
            *param_1 = (ushort)local_res10[uVar4];
            if (local_res10[uVar4] == 0) {
              return uVar4;
            }
            uVar4 = uVar4 + 1;
            param_1 = param_1 + 1;
          } while (uVar4 < param_3);
          return uVar4;
        }
        uVar6 = (uint)param_3;
        iVar2 = FUN_180141178(UVar1,9,(LPCSTR)local_res10,-1,param_1,uVar6);
        lVar5 = (longlong)iVar2;
        if (lVar5 == 0) {
          DVar3 = GetLastError();
          if (DVar3 == 0x7a) {
            uVar4 = param_3 & 0xffffffff;
            pbVar7 = local_res10;
            uVar8 = uVar6;
            while (uVar8 != 0) {
              uVar8 = (int)uVar4 - 1;
              uVar4 = (ulonglong)uVar8;
              if (*pbVar7 == 0) break;
              if ((*(short *)(*(longlong *)param_4[3] + (ulonglong)*pbVar7 * 2) < 0) &&
                 (pbVar7 = pbVar7 + 1, *pbVar7 == 0)) goto LAB_180142173;
              pbVar7 = pbVar7 + 1;
            }
            iVar2 = FUN_180141178(*(UINT *)(param_4[3] + 0xc),1,(LPCSTR)local_res10,
                                  (int)pbVar7 - (int)local_res10,param_1,uVar6);
            if ((longlong)iVar2 != 0) {
              return (longlong)iVar2;
            }
          }
LAB_180142173:
          *(int32_t *)(param_4 + 6) = 1;
          *(int32_t *)((longlong)param_4 + 0x2c) = 0x2a;
          *param_1 = L'\0';
          return 0xffffffffffffffff;
        }
      }
      uVar4 = lVar5 - 1;
    }
  }
  return uVar4;
}

