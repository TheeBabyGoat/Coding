#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1801435a8 ----
void FUN_1801435a8(longlong param_1)

{
  byte bVar1;
  BOOL BVar2;
  uint uVar3;
  byte *pbVar4;
  CHAR *pCVar5;
  ulonglong uVar6;
  BYTE *pBVar7;
  WORD *pWVar8;
  longlong lVar9;
  int32_t auStackY_788 [32];
  _cpinfo local_738;
  CHAR local_718 [231];
  byte abStack_631 [25];
  int32_t local_618 [231];
  byte abStack_531 [25];
  int32_t local_518 [256];
  WORD local_418 [512];
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStackY_788;
  if ((*(UINT *)(param_1 + 4) == 0xfde9) ||
     (BVar2 = GetCPInfo(*(UINT *)(param_1 + 4),&local_738), BVar2 == 0)) {
    uVar3 = 0;
    pbVar4 = (byte *)(param_1 + 0x19);
    do {
      if (uVar3 - 0x41 < 0x1a) {
        *pbVar4 = *pbVar4 | 0x10;
        bVar1 = (char)uVar3 + 0x20;
      }
      else if (uVar3 - 0x61 < 0x1a) {
        *pbVar4 = *pbVar4 | 0x20;
        bVar1 = (char)uVar3 - 0x20;
      }
      else {
        bVar1 = 0;
      }
      pbVar4[0x100] = bVar1;
      uVar3 = uVar3 + 1;
      pbVar4 = pbVar4 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    pCVar5 = local_718;
    lVar9 = 0x100;
    do {
      *pCVar5 = (CHAR)uVar3;
      uVar3 = uVar3 + 1;
      pCVar5 = pCVar5 + 1;
    } while (uVar3 < 0x100);
    pBVar7 = local_738.LeadByte;
    local_718[0] = ' ';
    while (local_738.LeadByte[0] != 0) {
      bVar1 = pBVar7[1];
      uVar6 = (ulonglong)local_738.LeadByte[0];
      while ((uVar3 = (uint)uVar6, uVar3 <= bVar1 && (uVar3 < 0x100))) {
        local_718[uVar6] = ' ';
        uVar6 = (ulonglong)(uVar3 + 1);
      }
      pBVar7 = pBVar7 + 2;
      local_738.LeadByte[0] = *pBVar7;
    }
    FUN_180141a88((__crt_locale_pointers *)0x0,1,local_718,0x100,local_418,*(UINT *)(param_1 + 4),0)
    ;
    __acrt_LCMapStringA((__crt_locale_pointers *)0x0,*(ushort **)(param_1 + 0x220),0x100,local_718,
                        0x100,local_618,0x100,*(UINT *)(param_1 + 4),0);
    __acrt_LCMapStringA((__crt_locale_pointers *)0x0,*(ushort **)(param_1 + 0x220),0x200,local_718,
                        0x100,local_518,0x100,*(UINT *)(param_1 + 4),0);
    pWVar8 = local_418;
    pbVar4 = (byte *)(param_1 + 0x19);
    do {
      if ((*pWVar8 & 1) == 0) {
        if ((*pWVar8 & 2) == 0) {
          bVar1 = 0;
        }
        else {
          *pbVar4 = *pbVar4 | 0x20;
          bVar1 = pbVar4[(longlong)(abStack_531 + -param_1)];
        }
      }
      else {
        *pbVar4 = *pbVar4 | 0x10;
        bVar1 = pbVar4[(longlong)(abStack_631 + -param_1)];
      }
      pbVar4[0x100] = bVar1;
      pWVar8 = pWVar8 + 1;
      pbVar4 = pbVar4 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  FUN_1801252c0(local_18 ^ (ulonglong)auStackY_788);
  return;
}

// ---- Function: FUN_180143790 ----
int FUN_180143790(int param_1,char param_2,__acrt_ptd *param_3,__crt_multibyte_data **param_4)

{
  int iVar1;
  int32_t uVar2;
  int *piVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  int iVar9;
  int32_t *puVar10;
  int32_t *puVar11;
  ulong *puVar12;
  int32_t *puVar13;
  longlong lVar14;
  longlong lVar15;
  __acrt_ptd *local_res18;
  __crt_multibyte_data **local_res20;
  int32_t local_268 [4];
  int local_264 [3];
  __acrt_ptd **local_258;
  __crt_multibyte_data ***local_250;
  int32_t local_248 [70];
  
  local_res18 = param_3;
  local_res20 = param_4;
  update_thread_multibyte_data_internal(param_3,param_4);
  iVar9 = getSystemCP(param_1);
  if (iVar9 == *(int *)(*(longlong *)(local_res18 + 0x88) + 4)) {
    iVar9 = 0;
  }
  else {
    puVar10 = (int32_t *)_malloc_base(0x228);
    if (puVar10 == (int32_t *)0x0) {
      FUN_18013bf3c((LPVOID)0x0);
      iVar9 = -1;
    }
    else {
      lVar14 = 4;
      lVar15 = 4;
      puVar7 = *(int32_t **)(local_res18 + 0x88);
      puVar8 = local_248;
      do {
        puVar13 = puVar8;
        puVar11 = puVar7;
        uVar2 = puVar11[1];
        uVar4 = puVar11[2];
        uVar5 = puVar11[3];
        *puVar13 = *puVar11;
        puVar13[1] = uVar2;
        uVar2 = puVar11[4];
        uVar6 = puVar11[5];
        puVar13[2] = uVar4;
        puVar13[3] = uVar5;
        uVar4 = puVar11[6];
        uVar5 = puVar11[7];
        puVar13[4] = uVar2;
        puVar13[5] = uVar6;
        uVar2 = puVar11[8];
        uVar6 = puVar11[9];
        puVar13[6] = uVar4;
        puVar13[7] = uVar5;
        uVar4 = puVar11[10];
        uVar5 = puVar11[0xb];
        puVar13[8] = uVar2;
        puVar13[9] = uVar6;
        uVar2 = puVar11[0xc];
        uVar6 = puVar11[0xd];
        puVar13[10] = uVar4;
        puVar13[0xb] = uVar5;
        uVar4 = puVar11[0xe];
        uVar5 = puVar11[0xf];
        puVar13[0xc] = uVar2;
        puVar13[0xd] = uVar6;
        puVar13[0xe] = uVar4;
        puVar13[0xf] = uVar5;
        lVar15 = lVar15 + -1;
        puVar7 = puVar11 + 0x10;
        puVar8 = puVar13 + 0x10;
      } while (lVar15 != 0);
      uVar4 = puVar11[0x11];
      uVar5 = puVar11[0x12];
      uVar6 = puVar11[0x13];
      uVar2 = puVar11[0x14];
      puVar13[0x10] = puVar11[0x10];
      puVar13[0x11] = uVar4;
      puVar13[0x12] = uVar5;
      puVar13[0x13] = uVar6;
      puVar13[0x14] = uVar2;
      puVar7 = local_248;
      puVar8 = puVar10;
      do {
        puVar13 = puVar8;
        puVar11 = puVar7;
        uVar2 = puVar11[1];
        uVar4 = puVar11[2];
        uVar5 = puVar11[3];
        *puVar13 = *puVar11;
        puVar13[1] = uVar2;
        uVar2 = puVar11[4];
        uVar6 = puVar11[5];
        puVar13[2] = uVar4;
        puVar13[3] = uVar5;
        uVar4 = puVar11[6];
        uVar5 = puVar11[7];
        puVar13[4] = uVar2;
        puVar13[5] = uVar6;
        uVar2 = puVar11[8];
        uVar6 = puVar11[9];
        puVar13[6] = uVar4;
        puVar13[7] = uVar5;
        uVar4 = puVar11[10];
        uVar5 = puVar11[0xb];
        puVar13[8] = uVar2;
        puVar13[9] = uVar6;
        uVar2 = puVar11[0xc];
        uVar6 = puVar11[0xd];
        puVar13[10] = uVar4;
        puVar13[0xb] = uVar5;
        uVar4 = puVar11[0xe];
        uVar5 = puVar11[0xf];
        puVar13[0xc] = uVar2;
        puVar13[0xd] = uVar6;
        puVar13[0xe] = uVar4;
        puVar13[0xf] = uVar5;
        lVar14 = lVar14 + -1;
        puVar7 = puVar11 + 0x10;
        puVar8 = puVar13 + 0x10;
      } while (lVar14 != 0);
      uVar4 = puVar11[0x11];
      uVar5 = puVar11[0x12];
      uVar6 = puVar11[0x13];
      uVar2 = puVar11[0x14];
      puVar13[0x10] = puVar11[0x10];
      puVar13[0x11] = uVar4;
      puVar13[0x12] = uVar5;
      puVar13[0x13] = uVar6;
      puVar13[0x14] = uVar2;
      *(int32_t *)puVar10 = 0;
      iVar9 = FUN_180143b34(iVar9,(longlong)puVar10);
      if (iVar9 == -1) {
        puVar12 = __doserrno();
        *puVar12 = 0x16;
        FUN_18013bf3c(puVar10);
        iVar9 = -1;
      }
      else {
        if (param_2 == '\0') {
          FUN_180138e9c();
        }
        piVar3 = *(int **)(local_res18 + 0x88);
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (*(int32_t **)(local_res18 + 0x88) != &DAT_1801eb780)) {
          FUN_18013bf3c(*(int32_t **)(local_res18 + 0x88));
        }
        *(int32_t *)puVar10 = 1;
        *(int32_t **)(local_res18 + 0x88) = puVar10;
        if ((DAT_1801eb774 & *(uint *)(local_res18 + 0x3a8)) == 0) {
          local_258 = &local_res18;
          local_250 = &local_res20;
          local_264[0] = 5;
          local_264[1] = 5;
          FUN_1801432c0(local_268,local_264 + 1,&local_258,local_264);
          if (param_2 != '\0') {
            PTR_DAT_1801eb450 = *local_res20;
          }
        }
        FUN_18013bf3c((LPVOID)0x0);
      }
    }
  }
  return iVar9;
}

// ---- Function: update_thread_multibyte_data_internal ----
/* Library Function - Single Match
    struct __crt_multibyte_data * __ptr64 __cdecl update_thread_multibyte_data_internal(struct
   __acrt_ptd * __ptr64 const,struct __crt_multibyte_data * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

__crt_multibyte_data * __cdecl
update_thread_multibyte_data_internal(__acrt_ptd *param_1,__crt_multibyte_data **param_2)

{
  int iVar1;
  __crt_multibyte_data *p_Var2;
  
  if (((*(uint *)(param_1 + 0x3a8) & DAT_1801eb774) == 0) || (*(longlong *)(param_1 + 0x90) == 0)) {
    __acrt_lock(5);
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
    if (p_Var2 != *param_2) {
      if (p_Var2 != (__crt_multibyte_data *)0x0) {
        LOCK();
        iVar1 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (p_Var2 != (__crt_multibyte_data *)&DAT_1801eb780)) {
          FUN_18013bf3c(p_Var2);
        }
      }
      p_Var2 = *param_2;
      *(__crt_multibyte_data **)(param_1 + 0x88) = p_Var2;
      LOCK();
      *(int *)p_Var2 = *(int *)p_Var2 + 1;
      UNLOCK();
    }
    __acrt_unlock(5);
  }
  else {
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
  }
  if (p_Var2 != (__crt_multibyte_data *)0x0) {
    return p_Var2;
  }
                    
  abort();
}

// ---- Function: __acrt_initialize_multibyte ----
/* Library Function - Single Match
    __acrt_initialize_multibyte
   
   Library: Visual Studio 2019 Release */

int32_t __acrt_initialize_multibyte(void)

{
  int iVar1;
  int32_t in_RAX;
  __acrt_ptd *p_Var2;
  int32_t extraout_var;
  
  if (DAT_1801ee874 == '\0') {
    DAT_1801ee860 = &DAT_1801ebac0;
    DAT_1801ee868 = &DAT_1801eb780;
    DAT_1801ee858 = &DAT_1801eb9b0;
    p_Var2 = FUN_1801388ac();
    iVar1 = FUN_180143790(-3,'\x01',p_Var2,(__crt_multibyte_data **)&DAT_1801ee868);
    in_RAX = CONCAT44(extraout_var,iVar1);
    DAT_1801ee874 = '\x01';
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

// ---- Function: FUN_180143b18 ----
void FUN_180143b18(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_1801387d8();
  update_thread_multibyte_data_internal(p_Var1,(__crt_multibyte_data **)&DAT_1801ee868);
  return;
}

// ---- Function: FUN_180143b34 ----
void FUN_180143b34(int param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  int32_t uVar3;
  int iVar4;
  uint uVar5;
  BOOL BVar6;
  uint *puVar7;
  byte *pbVar8;
  int32_t *puVar9;
  longlong lVar10;
  BYTE *pBVar11;
  ulonglong uVar12;
  byte *pbVar13;
  int32_t *puVar14;
  int32_t *puVar15;
  int32_t *puVar16;
  int32_t uVar17;
  int32_t *puVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  int32_t auStack_68 [32];
  _cpinfo local_48;
  ulonglong local_30;
  
  local_30 = DAT_1801eb080 ^ (ulonglong)auStack_68;
  uVar5 = getSystemCP(param_1);
  puVar15 = (int32_t *)0x0;
  if (uVar5 != 0) {
    puVar7 = &DAT_1801ebbd0;
    uVar17 = 1;
    puVar9 = puVar15;
LAB_180143b7d:
    if (*puVar7 != uVar5) goto code_r0x000180143b85;
    FUN_180151670((int32_t (*) [32])(param_2 + 0x18),0,0x101);
    pbVar20 = &DAT_1801ebbc0;
    lVar10 = 4;
    pbVar8 = &DAT_1801ebbe0 + (longlong)puVar9 * 0x30;
    do {
      bVar2 = *pbVar8;
      pbVar13 = pbVar8;
      while ((bVar2 != 0 && (pbVar13[1] != 0))) {
        bVar2 = *pbVar13;
        uVar21 = (uint)bVar2;
        if (bVar2 <= pbVar13[1]) {
          uVar19 = (uint)bVar2;
          do {
            uVar19 = uVar19 + 1;
            if (0x100 < uVar19) break;
            uVar21 = uVar21 + 1;
            pbVar1 = (byte *)((ulonglong)uVar19 + 0x18 + param_2);
            *pbVar1 = *pbVar1 | *pbVar20;
          } while (uVar21 <= pbVar13[1]);
        }
        pbVar13 = pbVar13 + 2;
        bVar2 = *pbVar13;
      }
      pbVar8 = pbVar8 + 8;
      pbVar20 = pbVar20 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    *(uint *)(param_2 + 4) = uVar5;
    *(int32_t *)(param_2 + 8) = 1;
    puVar16 = PTR_u_ja_JP_18017be98;
    if (((uVar5 != 0x3a4) && (puVar16 = PTR_u_zh_CN_18017bea0, uVar5 != 0x3a8)) &&
       ((puVar16 = PTR_u_ko_KR_18017bea8, uVar5 != 0x3b5 && (puVar16 = puVar15, uVar5 == 0x3b6)))) {
      puVar16 = PTR_u_zh_TW_18017beb0;
    }
    *(int32_t **)(param_2 + 0x220) = puVar16;
    puVar18 = (int32_t *)(&DAT_1801ebbd4 + (longlong)puVar9 * 0x30);
    puVar14 = (int32_t *)(param_2 + 0xc);
    lVar10 = 6;
    do {
      uVar3 = *puVar18;
      puVar18 = puVar18 + 1;
      *puVar14 = uVar3;
      puVar14 = puVar14 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    goto LAB_180143db7;
  }
LAB_180143dc1:
  FUN_180143510(param_2);
LAB_180143dcb:
  FUN_1801252c0(local_30 ^ (ulonglong)auStack_68);
  return;
code_r0x000180143b85:
  uVar21 = (int)puVar9 + 1;
  puVar9 = (int32_t *)(ulonglong)uVar21;
  puVar7 = puVar7 + 0xc;
  if (4 < uVar21) goto code_r0x000180143b92;
  goto LAB_180143b7d;
code_r0x000180143b92:
  if ((uVar5 == 65000) || (BVar6 = IsValidCodePage(uVar5 & 0xffff), BVar6 == 0)) goto LAB_180143dcb;
  if (uVar5 == 0xfde9) {
    *(int32_t *)(param_2 + 4) = 0xfde9;
    *(int32_t *)(param_2 + 0x220) = 0;
    *(int32_t *)(param_2 + 0x18) = 0;
    *(int32_t *)(param_2 + 0x1c) = 0;
  }
  else {
    BVar6 = GetCPInfo(uVar5,&local_48);
    if (BVar6 == 0) {
      if (DAT_1801ee870 == 0) goto LAB_180143dcb;
      goto LAB_180143dc1;
    }
    FUN_180151670((int32_t (*) [32])(param_2 + 0x18),0,0x101);
    *(uint *)(param_2 + 4) = uVar5;
    *(int32_t *)(param_2 + 0x220) = 0;
    if (local_48.MaxCharSize == 2) {
      pBVar11 = local_48.LeadByte;
      while ((local_48.LeadByte[0] != 0 && (pBVar11[1] != 0))) {
        bVar2 = *pBVar11;
        if ((uint)bVar2 <= (uint)pBVar11[1]) {
          uVar5 = (uint)bVar2;
          uVar12 = (ulonglong)(((uint)pBVar11[1] - (uint)bVar2) + 1);
          do {
            uVar5 = uVar5 + 1;
            pbVar8 = (byte *)((ulonglong)uVar5 + 0x18 + param_2);
            *pbVar8 = *pbVar8 | 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        pBVar11 = pBVar11 + 2;
        local_48.LeadByte[0] = *pBVar11;
      }
      pbVar8 = (byte *)(param_2 + 0x1a);
      lVar10 = 0xfe;
      do {
        *pbVar8 = *pbVar8 | 8;
        pbVar8 = pbVar8 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      iVar4 = *(int *)(param_2 + 4);
      puVar9 = PTR_u_ja_JP_18017be98;
      if ((((iVar4 != 0x3a4) && (puVar9 = PTR_u_zh_CN_18017bea0, iVar4 != 0x3a8)) &&
          (puVar9 = PTR_u_ko_KR_18017bea8, iVar4 != 0x3b5)) &&
         (puVar9 = PTR_u_zh_TW_18017beb0, iVar4 != 0x3b6)) {
        puVar9 = puVar15;
      }
      *(int32_t **)(param_2 + 0x220) = puVar9;
    }
    else {
      uVar17 = 0;
    }
    *(int32_t *)(param_2 + 8) = uVar17;
  }
  puVar14 = (int32_t *)(param_2 + 0xc);
  for (lVar10 = 6; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
LAB_180143db7:
  FUN_1801435a8(param_2);
  goto LAB_180143dcb;
}

// ---- Function: FUN_180143df4 ----
int32_t FUN_180143df4(__crt_locale_pointers *param_1,uint param_2,uint param_3,byte param_4)

{
  int32_t uVar1;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  if (((*(byte *)((ulonglong)(param_2 & 0xff) + 0x19 + local_18) & param_4) == 0) &&
     ((param_3 == 0 || ((param_3 & *(ushort *)(*local_20 + (ulonglong)(param_2 & 0xff) * 2)) == 0)))
     ) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return uVar1;
}

// ---- Function: FUN_180143e68 ----
void FUN_180143e68(uint param_1)

{
  FUN_180143df4((__crt_locale_pointers *)0x0,param_1,0,4);
  return;
}

// ---- Function: FUN_180143ea4 ----
LPSTR FUN_180143ea4(void)

{
  WCHAR WVar1;
  int iVar2;
  LPWCH pWVar3;
  longlong lVar4;
  LPSTR pCVar6;
  int iVar7;
  WCHAR *pWVar8;
  longlong lVar5;
  
  pWVar3 = GetEnvironmentStringsW();
  if (pWVar3 != (LPWCH)0x0) {
    WVar1 = *pWVar3;
    pWVar8 = pWVar3;
    while (WVar1 != L'\0') {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (pWVar8[lVar4] != L'\0');
      pWVar8 = pWVar8 + lVar5 + 2;
      WVar1 = *pWVar8;
    }
    iVar7 = (int)((longlong)pWVar8 + (2 - (longlong)pWVar3) >> 1);
    iVar2 = FUN_180141208(0,0,pWVar3,iVar7,(LPSTR)0x0,0,(LPBOOL)0x0,(LPBOOL)0x0);
    if (iVar2 != 0) {
      pCVar6 = (LPSTR)_malloc_base((longlong)iVar2);
      if (pCVar6 != (LPSTR)0x0) {
        iVar2 = FUN_180141208(0,0,pWVar3,iVar7,pCVar6,iVar2,(LPBOOL)0x0,(LPBOOL)0x0);
        if (iVar2 == 0) {
          FUN_18013bf3c(pCVar6);
          pCVar6 = (LPSTR)0x0;
        }
        else {
          FUN_18013bf3c((LPVOID)0x0);
        }
        FreeEnvironmentStringsW(pWVar3);
        return pCVar6;
      }
      FUN_18013bf3c((LPVOID)0x0);
    }
    FreeEnvironmentStringsW(pWVar3);
  }
  return (LPSTR)0x0;
}

// ---- Function: FUN_180143fb4 ----
LPWCH FUN_180143fb4(void)

{
  WCHAR WVar1;
  ulonglong uVar2;
  LPWCH pWVar3;
  longlong lVar4;
  LPWCH pWVar6;
  LPWCH pWVar7;
  WCHAR *pWVar8;
  longlong lVar5;
  
  pWVar3 = GetEnvironmentStringsW();
  pWVar7 = pWVar3;
  if (pWVar3 != (LPWCH)0x0) {
    WVar1 = *pWVar3;
    pWVar8 = pWVar3;
    while (WVar1 != L'\0') {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (pWVar8[lVar4] != L'\0');
      pWVar8 = pWVar8 + lVar5 + 2;
      WVar1 = *pWVar8;
    }
    uVar2 = ((longlong)pWVar8 + (2 - (longlong)pWVar3) >> 1) * 2;
    pWVar6 = (LPWCH)_malloc_base(uVar2);
    pWVar7 = (LPWCH)0x0;
    if (pWVar6 != (LPWCH)0x0) {
      FUN_180150fd0((int32_t *)pWVar6,(int32_t *)pWVar3,uVar2);
      pWVar7 = pWVar6;
    }
    FUN_18013bf3c((LPVOID)0x0);
    FreeEnvironmentStringsW(pWVar3);
  }
  return pWVar7;
}

// ---- Function: FUN_180144050 ----
char * FUN_180144050(char *param_1,int param_2)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  errno_t eVar4;
  ulong *puVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  char **ppcVar9;
  char *_Dst;
  LPCWSTR pWVar10;
  char **ppcVar11;
  ulonglong uVar12;
  char *pcVar13;
  size_t _MaxCount;
  longlong lVar14;
  
  pcVar13 = (char *)0x0;
  if (param_1 == (char *)0x0) {
    puVar5 = __doserrno();
    *puVar5 = 0x16;
    return (char *)0xffffffffffffffff;
  }
  pcVar6 = FUN_18014d46c((ulonglong)param_1,'=');
  if ((pcVar6 == (char *)0x0) || (pcVar6 == param_1)) {
    puVar5 = __doserrno();
    *puVar5 = 0x16;
    FUN_18013bf3c(param_1);
    return (char *)0xffffffffffffffff;
  }
  cVar2 = pcVar6[1];
  if (DAT_1801ee108 == DAT_1801ee120) {
    DAT_1801ee108 = copy_environment<char>(DAT_1801ee108);
  }
  if (DAT_1801ee108 == (char **)0x0) {
    if ((param_2 == 0) || (DAT_1801ee110 == (LPVOID)0x0)) {
      if (cVar2 == '\0') goto LAB_180144106;
      DAT_1801ee108 = (char **)_calloc_base(1,8);
      FUN_18013bf3c((LPVOID)0x0);
      if (DAT_1801ee108 != (char **)0x0) {
        if (DAT_1801ee110 == (LPVOID)0x0) {
          DAT_1801ee110 = _calloc_base(1,8);
          FUN_18013bf3c((LPVOID)0x0);
          if (DAT_1801ee110 == (LPVOID)0x0) goto LAB_180144102;
        }
LAB_1801441a1:
        if (DAT_1801ee108 != (char **)0x0) goto LAB_1801441aa;
      }
    }
    else {
      lVar7 = __dcrt_get_or_create_narrow_environment_nolock();
      if (lVar7 != 0) {
        if (DAT_1801ee108 == DAT_1801ee120) {
          DAT_1801ee108 = copy_environment<char>(DAT_1801ee108);
        }
        goto LAB_1801441a1;
      }
      puVar5 = __doserrno();
      *puVar5 = 0x16;
    }
  }
  else {
LAB_1801441aa:
    ppcVar9 = DAT_1801ee108;
    _MaxCount = (longlong)pcVar6 - (longlong)param_1;
    pcVar8 = *DAT_1801ee108;
    ppcVar11 = DAT_1801ee108;
    while (pcVar8 != (char *)0x0) {
      iVar3 = _strnicoll(param_1,pcVar8,_MaxCount);
      if ((iVar3 == 0) && (((*ppcVar11)[_MaxCount] == '=' || ((*ppcVar11)[_MaxCount] == '\0')))) {
        uVar12 = (longlong)ppcVar11 - (longlong)ppcVar9 >> 3;
        goto LAB_1801441f9;
      }
      ppcVar11 = ppcVar11 + 1;
      pcVar8 = *ppcVar11;
    }
    uVar12 = -((longlong)ppcVar11 - (longlong)ppcVar9 >> 3);
LAB_1801441f9:
    pcVar8 = pcVar13;
    if ((-1 < (longlong)uVar12) && (*ppcVar9 != (char *)0x0)) {
      FUN_18013bf3c(ppcVar9[uVar12]);
      if (cVar2 == '\0') {
        for (; ppcVar9[uVar12] != (char *)0x0; uVar12 = uVar12 + 1) {
          ppcVar9[uVar12] = ppcVar9[uVar12 + 1];
        }
        ppcVar9 = (char **)_recalloc_base(ppcVar9,uVar12,8);
        FUN_18013bf3c((LPVOID)0x0);
        pcVar8 = param_1;
        if (ppcVar9 != (char **)0x0) {
          DAT_1801ee108 = ppcVar9;
        }
      }
      else {
        ppcVar9[uVar12] = param_1;
      }
LAB_1801442b8:
      if (param_2 == 0) {
LAB_180144358:
        FUN_18013bf3c(pcVar8);
        return (char *)0x0;
      }
      lVar7 = -1;
      do {
        lVar14 = lVar7;
        lVar7 = lVar14 + 1;
      } while (param_1[lVar14 + 1] != '\0');
      _Dst = (char *)_calloc_base(lVar14 + 3,1);
      if (_Dst == (char *)0x0) {
        FUN_18013bf3c((LPVOID)0x0);
      }
      else {
        eVar4 = strcpy_s(_Dst,lVar14 + 3,param_1);
        if (eVar4 != 0) {
                    
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        pcVar6[(longlong)_Dst - (longlong)param_1] = '\0';
        pWVar10 = FUN_18014b74c(_Dst,(LPCSTR)(-(ulonglong)(cVar2 != '\0') &
                                             (ulonglong)
                                             (pcVar6 + ((longlong)_Dst - (longlong)param_1) + 1)));
        if ((int)pWVar10 != 0) {
          FUN_18013bf3c(_Dst);
          goto LAB_180144358;
        }
        puVar5 = __doserrno();
        *puVar5 = 0x2a;
        FUN_18013bf3c(_Dst);
        pcVar13 = (char *)0xffffffff;
      }
      FUN_18013bf3c(pcVar8);
      return pcVar13;
    }
    if (cVar2 == '\0') goto LAB_180144106;
    uVar1 = -uVar12 + 2;
    if ((-uVar12 <= uVar1) && (uVar1 < 0x1fffffffffffffff)) {
      ppcVar9 = (char **)_recalloc_base(ppcVar9,uVar1,8);
      FUN_18013bf3c((LPVOID)0x0);
      if (ppcVar9 != (char **)0x0) {
        ppcVar9[-uVar12] = param_1;
        ppcVar9[1 - uVar12] = (char *)0x0;
        DAT_1801ee108 = ppcVar9;
        goto LAB_1801442b8;
      }
    }
  }
LAB_180144102:
  pcVar13 = (char *)0xffffffffffffffff;
LAB_180144106:
  FUN_18013bf3c(param_1);
  return (char *)((ulonglong)pcVar13 & 0xffffffff);
}

// ---- Function: FUN_1801443a8 ----
int32_t (*) [32] FUN_1801443a8(int32_t (*param_1) [32],int param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  int iVar3;
  errno_t eVar4;
  BOOL BVar5;
  ulong *puVar6;
  int32_t (*pauVar7) [32];
  longlong lVar8;
  wchar_t **ppwVar9;
  wchar_t *_Dst;
  wchar_t **ppwVar10;
  ulonglong uVar11;
  int32_t (*pauVar12) [32];
  ulonglong uVar13;
  longlong lVar14;
  
  pauVar12 = (int32_t (*) [32])0x0;
  if (param_1 == (int32_t (*) [32])0x0) {
    puVar6 = __doserrno();
    *puVar6 = 0x16;
    return (int32_t (*) [32])0xffffffffffffffff;
  }
  pauVar7 = (int32_t (*) [32])FUN_18014d4e8((ushort *)param_1,0x3d);
  if ((pauVar7 == (int32_t (*) [32])0x0) || (pauVar7 == param_1)) {
    puVar6 = __doserrno();
    *puVar6 = 0x16;
    FUN_18013bf3c(param_1);
    return (int32_t (*) [32])0xffffffffffffffff;
  }
  uVar2 = *(ushort *)((longlong)*pauVar7 + 2);
  if (DAT_1801ee110 == DAT_1801ee118) {
    DAT_1801ee110 = copy_environment<wchar_t>(DAT_1801ee110);
  }
  if (DAT_1801ee110 == (wchar_t **)0x0) {
    if ((param_2 == 0) || (DAT_1801ee108 == (LPVOID)0x0)) {
      if (uVar2 == 0) goto LAB_180144460;
      if (DAT_1801ee108 == (LPVOID)0x0) {
        DAT_1801ee108 = _calloc_base(1,8);
        FUN_18013bf3c((LPVOID)0x0);
        if (DAT_1801ee108 == (LPVOID)0x0) goto LAB_18014445c;
        if (DAT_1801ee110 != (wchar_t **)0x0) goto LAB_180144504;
      }
      DAT_1801ee110 = (wchar_t **)_calloc_base(1,8);
      FUN_18013bf3c((LPVOID)0x0);
      if (DAT_1801ee110 != (wchar_t **)0x0) goto LAB_1801444fb;
    }
    else {
      lVar8 = __dcrt_get_or_create_wide_environment_nolock();
      if (lVar8 == 0) {
        puVar6 = __doserrno();
        *puVar6 = 0x16;
      }
      else {
        if (DAT_1801ee110 == DAT_1801ee118) {
          DAT_1801ee110 = copy_environment<wchar_t>(DAT_1801ee110);
        }
LAB_1801444fb:
        if (DAT_1801ee110 != (wchar_t **)0x0) goto LAB_180144504;
      }
    }
  }
  else {
LAB_180144504:
    ppwVar9 = DAT_1801ee110;
    uVar13 = (longlong)pauVar7 - (longlong)param_1 >> 1;
    pauVar7 = (int32_t (*) [32])*DAT_1801ee110;
    ppwVar10 = DAT_1801ee110;
    while (pauVar7 != (int32_t (*) [32])0x0) {
      iVar3 = FUN_180140f20(param_1,pauVar7,uVar13);
      if ((iVar3 == 0) && (((*ppwVar10)[uVar13] == L'=' || ((*ppwVar10)[uVar13] == L'\0')))) {
        uVar11 = (longlong)ppwVar10 - (longlong)ppwVar9 >> 3;
        goto LAB_180144559;
      }
      ppwVar10 = ppwVar10 + 1;
      pauVar7 = (int32_t (*) [32])*ppwVar10;
    }
    uVar11 = -((longlong)ppwVar10 - (longlong)ppwVar9 >> 3);
LAB_180144559:
    pauVar7 = pauVar12;
    if ((-1 < (longlong)uVar11) && (*ppwVar9 != (wchar_t *)0x0)) {
      FUN_18013bf3c(ppwVar9[uVar11]);
      if (uVar2 == 0) {
        for (; ppwVar9[uVar11] != (wchar_t *)0x0; uVar11 = uVar11 + 1) {
          ppwVar9[uVar11] = ppwVar9[uVar11 + 1];
        }
        ppwVar9 = (wchar_t **)_recalloc_base(ppwVar9,uVar11,8);
        FUN_18013bf3c((LPVOID)0x0);
        pauVar7 = param_1;
        if (ppwVar9 != (wchar_t **)0x0) {
          DAT_1801ee110 = ppwVar9;
        }
      }
      else {
        ppwVar9[uVar11] = (wchar_t *)param_1;
      }
LAB_18014461a:
      if (param_2 == 0) {
LAB_1801446b7:
        FUN_18013bf3c(pauVar7);
        return (int32_t (*) [32])0x0;
      }
      lVar8 = -1;
      do {
        lVar14 = lVar8;
        lVar8 = lVar14 + 1;
      } while (*(short *)(*param_1 + lVar14 * 2 + 2) != 0);
      _Dst = (wchar_t *)_calloc_base(lVar14 + 3U,2);
      if (_Dst == (wchar_t *)0x0) {
        FUN_18013bf3c((LPVOID)0x0);
      }
      else {
        eVar4 = wcscpy_s(_Dst,lVar14 + 3U,(wchar_t *)param_1);
        if (eVar4 != 0) {
                    
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        _Dst[uVar13] = L'\0';
        BVar5 = SetEnvironmentVariableW
                          (_Dst,(LPCWSTR)(-(ulonglong)(uVar2 != 0) & (ulonglong)(_Dst + uVar13 + 1))
                          );
        if (BVar5 != 0) {
          FUN_18013bf3c(_Dst);
          goto LAB_1801446b7;
        }
        puVar6 = __doserrno();
        *puVar6 = 0x2a;
        FUN_18013bf3c(_Dst);
        pauVar12 = (int32_t (*) [32])0xffffffff;
      }
      FUN_18013bf3c(pauVar7);
      return pauVar12;
    }
    if (uVar2 == 0) goto LAB_180144460;
    uVar1 = -uVar11 + 2;
    if ((-uVar11 <= uVar1) && (uVar1 < 0x1fffffffffffffff)) {
      ppwVar9 = (wchar_t **)_recalloc_base(ppwVar9,uVar1,8);
      FUN_18013bf3c((LPVOID)0x0);
      if (ppwVar9 != (wchar_t **)0x0) {
        ppwVar9[-uVar11] = (wchar_t *)param_1;
        ppwVar9[1 - uVar11] = (wchar_t *)0x0;
        DAT_1801ee110 = ppwVar9;
        goto LAB_18014461a;
      }
    }
  }
LAB_18014445c:
  pauVar12 = (int32_t (*) [32])0xffffffffffffffff;
LAB_180144460:
  FUN_18013bf3c(param_1);
  return (int32_t (*) [32])((ulonglong)pauVar12 & 0xffffffff);
}

// ---- Function: copy_environment_char_ ----
/* Library Function - Single Match
    char * __ptr64 * __ptr64 __cdecl copy_environment<char>(char * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

char ** __cdecl copy_environment<char>(char **param_1)

{
  longlong lVar1;
  errno_t eVar2;
  char **ppcVar3;
  char *pcVar4;
  LPVOID pvVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_1 == (char **)0x0) {
    ppcVar3 = (char **)0x0;
  }
  else {
    lVar6 = 0;
    pcVar4 = *param_1;
    ppcVar3 = param_1;
    while (pcVar4 != (char *)0x0) {
      lVar6 = lVar6 + 1;
      ppcVar3 = ppcVar3 + 1;
      pcVar4 = *ppcVar3;
    }
    ppcVar3 = (char **)_calloc_base(lVar6 + 1,8);
    if (ppcVar3 == (char **)0x0) {
LAB_1801447eb:
                    
      abort();
    }
    pcVar4 = *param_1;
    if (pcVar4 != (char *)0x0) {
      lVar6 = (longlong)ppcVar3 - (longlong)param_1;
      do {
        lVar1 = -1;
        do {
          lVar7 = lVar1;
          lVar1 = lVar7 + 1;
        } while (pcVar4[lVar7 + 1] != '\0');
        pvVar5 = _calloc_base(lVar7 + 2,1);
        *(LPVOID *)(lVar6 + (longlong)param_1) = pvVar5;
        FUN_18013bf3c((LPVOID)0x0);
        pcVar4 = *(char **)(lVar6 + (longlong)param_1);
        if (pcVar4 == (char *)0x0) goto LAB_1801447eb;
        eVar2 = strcpy_s(pcVar4,lVar7 + 2,*param_1);
        if (eVar2 != 0) {
                    
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        param_1 = param_1 + 1;
        pcVar4 = *param_1;
      } while (pcVar4 != (char *)0x0);
    }
    FUN_18013bf3c((LPVOID)0x0);
  }
  return ppcVar3;
}

// ---- Function: copy_environment_wchar_t_ ----
/* Library Function - Single Match
    wchar_t * __ptr64 * __ptr64 __cdecl copy_environment<wchar_t>(wchar_t * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

wchar_t ** __cdecl copy_environment<wchar_t>(wchar_t **param_1)

{
  longlong lVar1;
  errno_t eVar2;
  wchar_t **ppwVar3;
  wchar_t *pwVar4;
  LPVOID pvVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = 0;
  if (param_1 == (wchar_t **)0x0) {
    ppwVar3 = (wchar_t **)0x0;
  }
  else {
    pwVar4 = *param_1;
    ppwVar3 = param_1;
    while (pwVar4 != (wchar_t *)0x0) {
      lVar6 = lVar6 + 1;
      ppwVar3 = ppwVar3 + 1;
      pwVar4 = *ppwVar3;
    }
    ppwVar3 = (wchar_t **)_calloc_base(lVar6 + 1,8);
    if (ppwVar3 == (wchar_t **)0x0) {
LAB_1801448dd:
                    
      abort();
    }
    pwVar4 = *param_1;
    if (pwVar4 != (wchar_t *)0x0) {
      lVar6 = (longlong)ppwVar3 - (longlong)param_1;
      do {
        lVar1 = -1;
        do {
          lVar7 = lVar1;
          lVar1 = lVar7 + 1;
        } while (pwVar4[lVar7 + 1] != L'\0');
        pvVar5 = _calloc_base(lVar7 + 2,2);
        *(LPVOID *)(lVar6 + (longlong)param_1) = pvVar5;
        FUN_18013bf3c((LPVOID)0x0);
        pwVar4 = *(wchar_t **)(lVar6 + (longlong)param_1);
        if (pwVar4 == (wchar_t *)0x0) goto LAB_1801448dd;
        eVar2 = wcscpy_s(pwVar4,lVar7 + 2,*param_1);
        if (eVar2 != 0) {
                    
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        param_1 = param_1 + 1;
        pwVar4 = *param_1;
      } while (pwVar4 != (wchar_t *)0x0);
    }
    FUN_18013bf3c((LPVOID)0x0);
  }
  return ppwVar3;
}

// ---- Function: thunk_FUN_180144050 ----
char * thunk_FUN_180144050(char *param_1,int param_2)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  errno_t eVar4;
  ulong *puVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  char **ppcVar9;
  char *_Dst;
  LPCWSTR pWVar10;
  char **ppcVar11;
  ulonglong uVar12;
  char *pcVar13;
  size_t _MaxCount;
  longlong lVar14;
  
  pcVar13 = (char *)0x0;
  if (param_1 == (char *)0x0) {
    puVar5 = __doserrno();
    *puVar5 = 0x16;
    return (char *)0xffffffffffffffff;
  }
  pcVar6 = FUN_18014d46c((ulonglong)param_1,'=');
  if ((pcVar6 == (char *)0x0) || (pcVar6 == param_1)) {
    puVar5 = __doserrno();
    *puVar5 = 0x16;
    FUN_18013bf3c(param_1);
    return (char *)0xffffffffffffffff;
  }
  cVar2 = pcVar6[1];
  if (DAT_1801ee108 == DAT_1801ee120) {
    DAT_1801ee108 = copy_environment<char>(DAT_1801ee108);
  }
  if (DAT_1801ee108 == (char **)0x0) {
    if ((param_2 == 0) || (DAT_1801ee110 == (LPVOID)0x0)) {
      if (cVar2 == '\0') goto LAB_180144106;
      DAT_1801ee108 = (char **)_calloc_base(1,8);
      FUN_18013bf3c((LPVOID)0x0);
      if (DAT_1801ee108 != (char **)0x0) {
        if (DAT_1801ee110 == (LPVOID)0x0) {
          DAT_1801ee110 = _calloc_base(1,8);
          FUN_18013bf3c((LPVOID)0x0);
          if (DAT_1801ee110 == (LPVOID)0x0) goto LAB_180144102;
        }
LAB_1801441a1:
        if (DAT_1801ee108 != (char **)0x0) goto LAB_1801441aa;
      }
    }
    else {
      lVar7 = __dcrt_get_or_create_narrow_environment_nolock();
      if (lVar7 != 0) {
        if (DAT_1801ee108 == DAT_1801ee120) {
          DAT_1801ee108 = copy_environment<char>(DAT_1801ee108);
        }
        goto LAB_1801441a1;
      }
      puVar5 = __doserrno();
      *puVar5 = 0x16;
    }
  }
  else {
LAB_1801441aa:
    ppcVar9 = DAT_1801ee108;
    _MaxCount = (longlong)pcVar6 - (longlong)param_1;
    pcVar8 = *DAT_1801ee108;
    ppcVar11 = DAT_1801ee108;
    while (pcVar8 != (char *)0x0) {
      iVar3 = _strnicoll(param_1,pcVar8,_MaxCount);
      if ((iVar3 == 0) && (((*ppcVar11)[_MaxCount] == '=' || ((*ppcVar11)[_MaxCount] == '\0')))) {
        uVar12 = (longlong)ppcVar11 - (longlong)ppcVar9 >> 3;
        goto LAB_1801441f9;
      }
      ppcVar11 = ppcVar11 + 1;
      pcVar8 = *ppcVar11;
    }
    uVar12 = -((longlong)ppcVar11 - (longlong)ppcVar9 >> 3);
LAB_1801441f9:
    pcVar8 = pcVar13;
    if ((-1 < (longlong)uVar12) && (*ppcVar9 != (char *)0x0)) {
      FUN_18013bf3c(ppcVar9[uVar12]);
      if (cVar2 == '\0') {
        for (; ppcVar9[uVar12] != (char *)0x0; uVar12 = uVar12 + 1) {
          ppcVar9[uVar12] = ppcVar9[uVar12 + 1];
        }
        ppcVar9 = (char **)_recalloc_base(ppcVar9,uVar12,8);
        FUN_18013bf3c((LPVOID)0x0);
        pcVar8 = param_1;
        if (ppcVar9 != (char **)0x0) {
          DAT_1801ee108 = ppcVar9;
        }
      }
      else {
        ppcVar9[uVar12] = param_1;
      }
LAB_1801442b8:
      if (param_2 == 0) {
LAB_180144358:
        FUN_18013bf3c(pcVar8);
        return (char *)0x0;
      }
      lVar7 = -1;
      do {
        lVar14 = lVar7;
        lVar7 = lVar14 + 1;
      } while (param_1[lVar14 + 1] != '\0');
      _Dst = (char *)_calloc_base(lVar14 + 3,1);
      if (_Dst == (char *)0x0) {
        FUN_18013bf3c((LPVOID)0x0);
      }
      else {
        eVar4 = strcpy_s(_Dst,lVar14 + 3,param_1);
        if (eVar4 != 0) {
                    
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        pcVar6[(longlong)_Dst - (longlong)param_1] = '\0';
        pWVar10 = FUN_18014b74c(_Dst,(LPCSTR)(-(ulonglong)(cVar2 != '\0') &
                                             (ulonglong)
                                             (pcVar6 + ((longlong)_Dst - (longlong)param_1) + 1)));
        if ((int)pWVar10 != 0) {
          FUN_18013bf3c(_Dst);
          goto LAB_180144358;
        }
        puVar5 = __doserrno();
        *puVar5 = 0x2a;
        FUN_18013bf3c(_Dst);
        pcVar13 = (char *)0xffffffff;
      }
      FUN_18013bf3c(pcVar8);
      return pcVar13;
    }
    if (cVar2 == '\0') goto LAB_180144106;
    uVar1 = -uVar12 + 2;
    if ((-uVar12 <= uVar1) && (uVar1 < 0x1fffffffffffffff)) {
      ppcVar9 = (char **)_recalloc_base(ppcVar9,uVar1,8);
      FUN_18013bf3c((LPVOID)0x0);
      if (ppcVar9 != (char **)0x0) {
        ppcVar9[-uVar12] = param_1;
        ppcVar9[1 - uVar12] = (char *)0x0;
        DAT_1801ee108 = ppcVar9;
        goto LAB_1801442b8;
      }
    }
  }
LAB_180144102:
  pcVar13 = (char *)0xffffffffffffffff;
LAB_180144106:
  FUN_18013bf3c(param_1);
  return (char *)((ulonglong)pcVar13 & 0xffffffff);
}

// ---- Function: thunk_FUN_1801443a8 ----
int32_t (*) [32] thunk_FUN_1801443a8(int32_t (*param_1) [32],int param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  int iVar3;
  errno_t eVar4;
  BOOL BVar5;
  ulong *puVar6;
  int32_t (*pauVar7) [32];
  longlong lVar8;
  wchar_t **ppwVar9;
  wchar_t *_Dst;
  wchar_t **ppwVar10;
  ulonglong uVar11;
  int32_t (*pauVar12) [32];
  ulonglong uVar13;
  longlong lVar14;
  
  pauVar12 = (int32_t (*) [32])0x0;
  if (param_1 == (int32_t (*) [32])0x0) {
    puVar6 = __doserrno();
    *puVar6 = 0x16;
    return (int32_t (*) [32])0xffffffffffffffff;
  }
  pauVar7 = (int32_t (*) [32])FUN_18014d4e8((ushort *)param_1,0x3d);
  if ((pauVar7 == (int32_t (*) [32])0x0) || (pauVar7 == param_1)) {
    puVar6 = __doserrno();
    *puVar6 = 0x16;
    FUN_18013bf3c(param_1);
    return (int32_t (*) [32])0xffffffffffffffff;
  }
  uVar2 = *(ushort *)((longlong)*pauVar7 + 2);
  if (DAT_1801ee110 == DAT_1801ee118) {
    DAT_1801ee110 = copy_environment<wchar_t>(DAT_1801ee110);
  }
  if (DAT_1801ee110 == (wchar_t **)0x0) {
    if ((param_2 == 0) || (DAT_1801ee108 == (LPVOID)0x0)) {
      if (uVar2 == 0) goto LAB_180144460;
      if (DAT_1801ee108 == (LPVOID)0x0) {
        DAT_1801ee108 = _calloc_base(1,8);
        FUN_18013bf3c((LPVOID)0x0);
        if (DAT_1801ee108 == (LPVOID)0x0) goto LAB_18014445c;
        if (DAT_1801ee110 != (wchar_t **)0x0) goto LAB_180144504;
      }
      DAT_1801ee110 = (wchar_t **)_calloc_base(1,8);
      FUN_18013bf3c((LPVOID)0x0);
      if (DAT_1801ee110 != (wchar_t **)0x0) goto LAB_1801444fb;
    }
    else {
      lVar8 = __dcrt_get_or_create_wide_environment_nolock();
      if (lVar8 == 0) {
        puVar6 = __doserrno();
        *puVar6 = 0x16;
      }
      else {
        if (DAT_1801ee110 == DAT_1801ee118) {
          DAT_1801ee110 = copy_environment<wchar_t>(DAT_1801ee110);
        }
LAB_1801444fb:
        if (DAT_1801ee110 != (wchar_t **)0x0) goto LAB_180144504;
      }
    }
  }
  else {
LAB_180144504:
    ppwVar9 = DAT_1801ee110;
    uVar13 = (longlong)pauVar7 - (longlong)param_1 >> 1;
    pauVar7 = (int32_t (*) [32])*DAT_1801ee110;
    ppwVar10 = DAT_1801ee110;
    while (pauVar7 != (int32_t (*) [32])0x0) {
      iVar3 = FUN_180140f20(param_1,pauVar7,uVar13);
      if ((iVar3 == 0) && (((*ppwVar10)[uVar13] == L'=' || ((*ppwVar10)[uVar13] == L'\0')))) {
        uVar11 = (longlong)ppwVar10 - (longlong)ppwVar9 >> 3;
        goto LAB_180144559;
      }
      ppwVar10 = ppwVar10 + 1;
      pauVar7 = (int32_t (*) [32])*ppwVar10;
    }
    uVar11 = -((longlong)ppwVar10 - (longlong)ppwVar9 >> 3);
LAB_180144559:
    pauVar7 = pauVar12;
    if ((-1 < (longlong)uVar11) && (*ppwVar9 != (wchar_t *)0x0)) {
      FUN_18013bf3c(ppwVar9[uVar11]);
      if (uVar2 == 0) {
        for (; ppwVar9[uVar11] != (wchar_t *)0x0; uVar11 = uVar11 + 1) {
          ppwVar9[uVar11] = ppwVar9[uVar11 + 1];
        }
        ppwVar9 = (wchar_t **)_recalloc_base(ppwVar9,uVar11,8);
        FUN_18013bf3c((LPVOID)0x0);
        pauVar7 = param_1;
        if (ppwVar9 != (wchar_t **)0x0) {
          DAT_1801ee110 = ppwVar9;
        }
      }
      else {
        ppwVar9[uVar11] = (wchar_t *)param_1;
      }
LAB_18014461a:
      if (param_2 == 0) {
LAB_1801446b7:
        FUN_18013bf3c(pauVar7);
        return (int32_t (*) [32])0x0;
      }
      lVar8 = -1;
      do {
        lVar14 = lVar8;
        lVar8 = lVar14 + 1;
      } while (*(short *)(*param_1 + lVar14 * 2 + 2) != 0);
      _Dst = (wchar_t *)_calloc_base(lVar14 + 3U,2);
      if (_Dst == (wchar_t *)0x0) {
        FUN_18013bf3c((LPVOID)0x0);
      }
      else {
        eVar4 = wcscpy_s(_Dst,lVar14 + 3U,(wchar_t *)param_1);
        if (eVar4 != 0) {
                    
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        _Dst[uVar13] = L'\0';
        BVar5 = SetEnvironmentVariableW
                          (_Dst,(LPCWSTR)(-(ulonglong)(uVar2 != 0) & (ulonglong)(_Dst + uVar13 + 1))
                          );
        if (BVar5 != 0) {
          FUN_18013bf3c(_Dst);
          goto LAB_1801446b7;
        }
        puVar6 = __doserrno();
        *puVar6 = 0x2a;
        FUN_18013bf3c(_Dst);
        pauVar12 = (int32_t (*) [32])0xffffffff;
      }
      FUN_18013bf3c(pauVar7);
      return pauVar12;
    }
    if (uVar2 == 0) goto LAB_180144460;
    uVar1 = -uVar11 + 2;
    if ((-uVar11 <= uVar1) && (uVar1 < 0x1fffffffffffffff)) {
      ppwVar9 = (wchar_t **)_recalloc_base(ppwVar9,uVar1,8);
      FUN_18013bf3c((LPVOID)0x0);
      if (ppwVar9 != (wchar_t **)0x0) {
        ppwVar9[-uVar11] = (wchar_t *)param_1;
        ppwVar9[1 - uVar11] = (wchar_t *)0x0;
        DAT_1801ee110 = ppwVar9;
        goto LAB_18014461a;
      }
    }
  }
LAB_18014445c:
  pauVar12 = (int32_t (*) [32])0xffffffffffffffff;
LAB_180144460:
  FUN_18013bf3c(param_1);
  return (int32_t (*) [32])((ulonglong)pauVar12 & 0xffffffff);
}

// ---- Function: _recalloc_base ----
/* Library Function - Single Match
    _recalloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _recalloc_base(LPVOID param_1,ulonglong param_2,ulonglong param_3)

{
  ulong *puVar1;
  ulonglong uVar2;
  LPVOID pvVar3;
  ulonglong uVar4;
  
  if ((param_2 == 0) || (param_3 <= 0xffffffffffffffe0 / param_2)) {
    if (param_1 == (LPVOID)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = _msize_base((longlong)param_1);
    }
    uVar4 = param_2 * param_3;
    pvVar3 = _realloc_base(param_1,uVar4);
    if ((pvVar3 != (LPVOID)0x0) && (uVar2 < uVar4)) {
      FUN_180151670((int32_t (*) [32])((longlong)pvVar3 + uVar2),0,uVar4 - uVar2);
    }
  }
  else {
    puVar1 = __doserrno();
    *puVar1 = 0xc;
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}

