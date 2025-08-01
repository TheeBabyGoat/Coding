#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_18013c54c ----
void FUN_18013c54c(DWORD *param_1,uint param_2,byte *param_3,ulonglong param_4,longlong *param_5)

{
  char cVar1;
  byte bVar2;
  HANDLE hFile;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  ulonglong uVar6;
  char *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int32_t *puVar12;
  byte *pbVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int32_t auStackY_108 [32];
  int32_t local_c8 [2];
  WCHAR local_c4 [2];
  uint local_c0 [2];
  byte *local_b8;
  longlong *local_b0;
  uint local_a8 [2];
  UINT local_a0;
  int local_9c;
  byte *local_98;
  longlong local_90;
  uint local_88 [2];
  int32_t *local_80;
  byte *local_78;
  HANDLE local_70;
  longlong local_68;
  int32_t local_60;
  int32_t local_58;
  byte local_50;
  byte local_4f;
  CHAR local_48 [8];
  ulonglong local_40;
  
  local_60 = 0xfffffffffffffffe;
  local_40 = DAT_1801eb080 ^ (ulonglong)auStackY_108;
  local_b0 = param_5;
  lVar16 = (longlong)(int)param_2 >> 6;
  uVar6 = (ulonglong)(param_2 & 0x3f);
  local_70 = *(HANDLE *)((&DAT_1801ee410)[lVar16] + 0x28 + uVar6 * 0x48);
  local_b8 = param_3 + (param_4 & 0xffffffff);
  local_98 = param_3;
  local_90 = lVar16;
  local_a0 = GetConsoleOutputCP();
  uVar14 = 0;
  if ((char)local_b0[5] == '\0') {
    FUN_180130ef0(local_b0);
  }
  local_9c = *(int *)(local_b0[3] + 0xc);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar15 = uVar14;
  lVar11 = lVar16;
  if (local_98 < param_3 + (param_4 & 0xffffffff)) {
    do {
      local_68 = lVar11;
      local_c8[0] = CONCAT11(local_c8[0]._1_1_,*param_3);
      local_c4[0] = L'\0';
      local_c4[1] = L'\0';
      uVar9 = 1;
      if (local_9c == 0xfde9) {
        pcVar7 = (char *)(uVar6 * 0x48 + 0x3e + (&DAT_1801ee410)[local_68]);
        uVar15 = uVar14;
        uVar17 = uVar14;
        do {
          uVar9 = (uint)uVar15;
          if (*pcVar7 == '\0') break;
          uVar9 = uVar9 + 1;
          uVar15 = (ulonglong)uVar9;
          uVar17 = uVar17 + 1;
          pcVar7 = pcVar7 + 1;
        } while ((longlong)uVar17 < 5);
        if ((longlong)uVar17 < 1) {
          cVar1 = (&DAT_1801eb670)[*param_3];
          iVar3 = cVar1 + 1;
          lVar16 = (longlong)local_b8 - (longlong)param_3;
          if (lVar16 < iVar3) {
            uVar15 = uVar14;
            if (0 < lVar16) {
              do {
                *(byte *)((&DAT_1801ee410)[local_90] + uVar14 + 0x3e + uVar6 * 0x48) =
                     param_3[uVar14];
                uVar9 = (int)uVar15 + 1;
                uVar14 = uVar14 + 1;
                uVar15 = (ulonglong)uVar9;
              } while ((int)uVar9 < lVar16);
            }
            param_1[1] = param_1[1] + (int)lVar16;
            break;
          }
          local_a8[0] = 0;
          local_a8[1] = 0;
          uVar9 = (iVar3 == 4) + 1;
          local_78 = param_3;
          lVar16 = FUN_180148020((ushort *)local_c4,&local_78,(ulonglong)uVar9,local_a8,
                                 (longlong)local_b0);
          if (lVar16 == -1) break;
          pbVar13 = param_3 + cVar1;
          lVar16 = local_90;
        }
        else {
          cVar1 = (&DAT_1801eb670)[*(byte *)((&DAT_1801ee410)[lVar16] + 0x3e + uVar6 * 0x48)];
          iVar3 = (cVar1 + 1) - uVar9;
          local_a8[0] = iVar3;
          lVar11 = (longlong)local_b8 - (longlong)param_3;
          uVar15 = (ulonglong)iVar3;
          if (lVar11 < (longlong)uVar15) {
            if (0 < lVar11) {
              uVar15 = uVar17;
              do {
                *(byte *)((&DAT_1801ee410)[lVar16] + uVar15 + 0x3e + uVar6 * 0x48) =
                     param_3[uVar15 - uVar17];
                uVar9 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar9;
                uVar15 = uVar15 + 1;
              } while ((int)uVar9 < lVar11);
            }
            param_1[1] = param_1[1] + (int)lVar11;
            break;
          }
          puVar12 = (int32_t *)(uVar6 * 0x48 + 0x3e + (&DAT_1801ee410)[local_68]);
          uVar8 = uVar14;
          do {
            *(int32_t *)((longlong)&local_58 + uVar8) = *puVar12;
            uVar8 = uVar8 + 1;
            puVar12 = puVar12 + 1;
          } while ((longlong)uVar8 < (longlong)uVar17);
          uVar8 = uVar14;
          if (0 < (longlong)uVar15) {
            FUN_180150fd0((int32_t *)((longlong)&local_58 + uVar17),(int32_t *)param_3,uVar15)
            ;
          }
          do {
            *(int32_t *)((&DAT_1801ee410)[lVar16] + uVar8 + 0x3e + uVar6 * 0x48) = 0;
            uVar8 = uVar8 + 1;
          } while ((longlong)uVar8 < (longlong)uVar17);
          local_88[0] = 0;
          local_88[1] = 0;
          local_80 = &local_58;
          uVar9 = (cVar1 + 1 == 4) + 1;
          lVar11 = FUN_180148020((ushort *)local_c4,&local_80,(ulonglong)uVar9,local_88,
                                 (longlong)local_b0);
          if (lVar11 == -1) break;
          pbVar13 = param_3 + (int)(local_a8[0] - 1);
        }
      }
      else {
        lVar11 = (&DAT_1801ee410)[lVar16];
        bVar2 = *(byte *)(lVar11 + 0x3d + uVar6 * 0x48);
        if ((bVar2 & 4) == 0) {
          if (*(short *)(*(longlong *)local_b0[3] + (ulonglong)*param_3 * 2) < 0) {
            pbVar13 = param_3 + 1;
            if (pbVar13 < local_b8) {
              iVar3 = FUN_18014083c(local_c4,param_3,2,local_b0);
              if (iVar3 != -1) goto LAB_18013c842;
            }
            else {
              *(byte *)(lVar11 + 0x3e + uVar6 * 0x48) = *param_3;
              pbVar13 = (byte *)((&DAT_1801ee410)[lVar16] + 0x3d + uVar6 * 0x48);
              *pbVar13 = *pbVar13 | 4;
              param_1[1] = (int)uVar15 + 1;
            }
            break;
          }
          uVar15 = 1;
          pbVar13 = param_3;
        }
        else {
          local_50 = *(byte *)(lVar11 + 0x3e + uVar6 * 0x48);
          local_4f = *param_3;
          *(byte *)(lVar11 + 0x3d + uVar6 * 0x48) = bVar2 & 0xfb;
          uVar15 = 2;
          pbVar13 = &local_50;
        }
        iVar3 = FUN_18014083c(local_c4,pbVar13,uVar15,local_b0);
        pbVar13 = param_3;
        if (iVar3 == -1) break;
      }
LAB_18013c842:
      param_3 = pbVar13 + 1;
      uVar9 = FUN_180141208(local_a0,0,local_c4,uVar9,local_48,5,(LPBOOL)0x0,(LPBOOL)0x0);
      hFile = local_70;
      if (uVar9 == 0) break;
      BVar4 = WriteFile(local_70,local_48,uVar9,local_c0,(LPOVERLAPPED)0x0);
      if (BVar4 == 0) {
LAB_18013c98f:
        DVar5 = GetLastError();
        *param_1 = DVar5;
        break;
      }
      uVar10 = ((int)param_3 - (int)local_98) + param_1[2];
      param_1[1] = uVar10;
      if (local_c0[0] < uVar9) break;
      if ((char)local_c8[0] == '\n') {
        local_c8[0] = 0xd;
        BVar4 = WriteFile(hFile,local_c8,1,local_c0,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) goto LAB_18013c98f;
        if (local_c0[0] == 0) break;
        param_1[2] = param_1[2] + 1;
        param_1[1] = param_1[1] + 1;
        uVar10 = param_1[1];
      }
      uVar15 = (ulonglong)uVar10;
      lVar11 = local_68;
    } while (param_3 < local_b8);
  }
  FUN_1801252c0(local_40 ^ (ulonglong)auStackY_108);
  return;
}

// ---- Function: write_text_ansi_nolock ----
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_ansi_nolock(int,char const *
   __ptr64 const,unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl write_text_ansi_nolock(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  int32_t in_register_0000000c;
  DWORD *pDVar4;
  uint nNumberOfBytesToWrite;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int32_t in_register_00000084;
  ulonglong in_R9;
  int32_t auStackY_1468 [32];
  uint local_1438 [4];
  char local_1428 [5120];
  ulonglong local_28;
  int32_t uStack_20;
  
  pcVar7 = (char *)CONCAT44(in_register_00000084,param_3);
  pDVar4 = (DWORD *)CONCAT44(in_register_0000000c,param_1);
  uStack_20 = 0x18013c9dc;
  local_28 = DAT_1801eb080 ^ (ulonglong)auStackY_1468;
  pcVar6 = pcVar7 + (in_R9 & 0xffffffff);
  hFile = *(HANDLE *)
           ((&DAT_1801ee410)[(longlong)(int)(uint)param_2 >> 6] + 0x28 +
           (ulonglong)((uint)param_2 & 0x3f) * 0x48);
  pDVar4[0] = 0;
  pDVar4[1] = 0;
  pDVar4[2] = 0;
  do {
    if (pcVar6 <= pcVar7) break;
    pcVar5 = local_1428;
    do {
      if (pcVar6 <= pcVar7) break;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      if (cVar1 == '\n') {
        pDVar4[2] = pDVar4[2] + 1;
        *pcVar5 = '\r';
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 < local_1428 + 0x13ff);
    nNumberOfBytesToWrite = (int)pcVar5 - (int)local_1428;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *pDVar4 = DVar3;
      break;
    }
    pDVar4[1] = pDVar4[1] + local_1438[0];
  } while (nNumberOfBytesToWrite <= local_1438[0]);
  FUN_1801252c0(local_28 ^ (ulonglong)auStackY_1468);
  return;
}

// ---- Function: write_text_utf16le_nolock ----
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_utf16le_nolock(int,char const *
   __ptr64 const,unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl write_text_utf16le_nolock(int param_1,char *param_2,uint param_3)

{
  short sVar1;
  HANDLE hFile;
  uint nNumberOfBytesToWrite;
  BOOL BVar2;
  DWORD DVar3;
  int32_t in_register_0000000c;
  DWORD *pDVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  int32_t in_register_00000084;
  ulonglong in_R9;
  int32_t auStackY_1468 [32];
  uint local_1438 [4];
  short local_1428 [2560];
  ulonglong local_28;
  int32_t uStack_20;
  
  psVar7 = (short *)CONCAT44(in_register_00000084,param_3);
  pDVar4 = (DWORD *)CONCAT44(in_register_0000000c,param_1);
  uStack_20 = 0x18013cae0;
  local_28 = DAT_1801eb080 ^ (ulonglong)auStackY_1468;
  psVar6 = (short *)((in_R9 & 0xffffffff) + (longlong)psVar7);
  hFile = *(HANDLE *)
           ((&DAT_1801ee410)[(longlong)(int)(uint)param_2 >> 6] + 0x28 +
           (ulonglong)((uint)param_2 & 0x3f) * 0x48);
  pDVar4[0] = 0;
  pDVar4[1] = 0;
  pDVar4[2] = 0;
  do {
    if (psVar6 <= psVar7) break;
    psVar5 = local_1428;
    do {
      if (psVar6 <= psVar7) break;
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
      if (sVar1 == 10) {
        pDVar4[2] = pDVar4[2] + 2;
        *psVar5 = 0xd;
        psVar5 = psVar5 + 1;
      }
      *psVar5 = sVar1;
      psVar5 = psVar5 + 1;
    } while (psVar5 < local_1428 + 0x9ff);
    nNumberOfBytesToWrite = (int)((longlong)psVar5 - (longlong)local_1428 >> 1) * 2;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *pDVar4 = DVar3;
      break;
    }
    pDVar4[1] = pDVar4[1] + local_1438[0];
  } while (nNumberOfBytesToWrite <= local_1438[0]);
  FUN_1801252c0(local_28 ^ (ulonglong)auStackY_1468);
  return;
}

// ---- Function: write_text_utf8_nolock ----
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_utf8_nolock(int,char const *
   __ptr64 const,unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl write_text_utf8_nolock(int param_1,char *param_2,uint param_3)

{
  WCHAR WVar1;
  HANDLE hFile;
  uint uVar2;
  BOOL BVar3;
  DWORD DVar4;
  WCHAR *pWVar5;
  int32_t in_register_0000000c;
  DWORD *pDVar6;
  uint uVar7;
  ulonglong uVar8;
  WCHAR *pWVar9;
  int32_t in_register_00000084;
  uint in_R9D;
  WCHAR *pWVar10;
  int32_t auStackY_1498 [32];
  DWORD local_1458 [4];
  WCHAR local_1448 [856];
  CHAR local_d98 [3424];
  ulonglong local_38;
  int32_t uStack_30;
  
  pWVar9 = (WCHAR *)CONCAT44(in_register_00000084,param_3);
  pDVar6 = (DWORD *)CONCAT44(in_register_0000000c,param_1);
  uStack_30 = 0x18013cc00;
  local_38 = DAT_1801eb080 ^ (ulonglong)auStackY_1498;
  pWVar10 = (WCHAR *)((ulonglong)in_R9D + (longlong)pWVar9);
  hFile = *(HANDLE *)
           ((&DAT_1801ee410)[(longlong)(int)(uint)param_2 >> 6] + 0x28 +
           (ulonglong)((uint)param_2 & 0x3f) * 0x48);
  pDVar6[0] = 0;
  pDVar6[1] = 0;
  pDVar6[2] = 0;
  do {
    if (pWVar10 <= pWVar9) {
LAB_18013cd25:
      FUN_1801252c0(local_38 ^ (ulonglong)auStackY_1498);
      return;
    }
    pWVar5 = local_1448;
    do {
      if (pWVar10 <= pWVar9) break;
      WVar1 = *pWVar9;
      pWVar9 = pWVar9 + 1;
      if (WVar1 == L'\n') {
        *pWVar5 = L'\r';
        pWVar5 = pWVar5 + 1;
      }
      *pWVar5 = WVar1;
      pWVar5 = pWVar5 + 1;
    } while (pWVar5 < local_1448 + 0x354);
    uVar2 = FUN_180141208(0xfde9,0,local_1448,(int)((longlong)pWVar5 - (longlong)local_1448 >> 1),
                          local_d98,0xd55,(LPBOOL)0x0,(LPBOOL)0x0);
    if (uVar2 == 0) {
LAB_18013cd1d:
      DVar4 = GetLastError();
      *pDVar6 = DVar4;
      goto LAB_18013cd25;
    }
    uVar8 = 0;
    if (uVar2 != 0) {
      do {
        BVar3 = WriteFile(hFile,local_d98 + uVar8,uVar2 - (int)uVar8,local_1458,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) goto LAB_18013cd1d;
        uVar7 = (int)uVar8 + local_1458[0];
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < uVar2);
    }
    pDVar6[1] = (int)pWVar9 - param_3;
  } while( true );
}

// ---- Function: FUN_18013cd54 ----
int FUN_18013cd54(uint param_1,wchar_t *param_2,uint param_3)

{
  int iVar1;
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
  iVar1 = FUN_18013cdec(param_1,param_2,param_3,local_48);
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
  return iVar1;
}

// ---- Function: FUN_18013cdec ----
int FUN_18013cdec(uint param_1,wchar_t *param_2,uint param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == 0xfffffffe) {
    *(int32_t *)(param_4 + 7) = 1;
    *(int32_t *)((longlong)param_4 + 0x34) = 0;
    *(int32_t *)(param_4 + 6) = 1;
    *(int32_t *)((longlong)param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_1801ee810 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        __acrt_lowio_lock_fh(param_1);
        iVar2 = -1;
        if ((*(byte *)((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(int32_t *)(param_4 + 6) = 1;
          *(int32_t *)((longlong)param_4 + 0x2c) = 9;
          *(int32_t *)(param_4 + 7) = 1;
          *(int32_t *)((longlong)param_4 + 0x34) = 0;
        }
        else {
          iVar2 = FUN_18013cf0c(param_1,param_2,param_3,param_4);
        }
        __acrt_lowio_unlock_fh(param_1);
        return iVar2;
      }
    }
    *(int32_t *)(param_4 + 7) = 1;
    *(int32_t *)((longlong)param_4 + 0x34) = 0;
    *(int32_t *)(param_4 + 6) = 1;
    *(int32_t *)((longlong)param_4 + 0x2c) = 9;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  return -1;
}

// ---- Function: FUN_18013cf0c ----
int FUN_18013cf0c(uint param_1,wchar_t *param_2,uint param_3,longlong *param_4)

{
  wchar_t *pwVar1;
  char cVar2;
  wchar_t _WCh;
  int iVar3;
  int32_t uVar4;
  byte bVar5;
  wchar_t wVar6;
  wint_t wVar7;
  BOOL BVar8;
  DWORD DVar9;
  int iVar10;
  ulonglong uVar11;
  int32_t extraout_var;
  int32_t *puVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  int32_t local_80;
  int local_78;
  int32_t local_70;
  DWORD local_60 [2];
  longlong local_58;
  
  iVar13 = 0;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (wchar_t *)0x0) {
LAB_18013cf3c:
    *(int32_t *)(param_4 + 7) = 1;
    *(int32_t *)((longlong)param_4 + 0x34) = 0;
    *(int32_t *)(param_4 + 6) = 1;
    *(int32_t *)((longlong)param_4 + 0x2c) = 0x16;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    return -1;
  }
  uVar11 = (ulonglong)(param_1 & 0x3f);
  lVar15 = (longlong)(int)param_1 >> 6;
  cVar2 = *(char *)((&DAT_1801ee410)[lVar15] + 0x39 + uVar11 * 0x48);
  local_58 = lVar15;
  if (((byte)(cVar2 - 1U) < 2) && ((~param_3 & 1) == 0)) goto LAB_18013cf3c;
  if ((*(byte *)((&DAT_1801ee410)[lVar15] + 0x38 + uVar11 * 0x48) & 0x20) != 0) {
    thunk_FUN_18013d378(param_1,(LARGE_INTEGER)0x0,2,(longlong)param_4);
  }
  local_70 = 0;
  bVar5 = FUN_180147f7c(param_1);
  if (((int)CONCAT71(extraout_var,bVar5) == 0) ||
     (-1 < *(char *)((&DAT_1801ee410)[lVar15] + 0x38 + uVar11 * 0x48))) {
LAB_18013d0ef:
    if (-1 < *(char *)((&DAT_1801ee410)[lVar15] + 0x38 + uVar11 * 0x48)) {
      local_80 = 0;
      local_78 = 0;
      BVar8 = WriteFile(*(HANDLE *)((&DAT_1801ee410)[lVar15] + 0x28 + uVar11 * 0x48),param_2,param_3
                        ,(LPDWORD)((longlong)&local_80 + 4),(LPOVERLAPPED)0x0);
      iVar13 = local_78;
      uVar4 = local_80;
      if (BVar8 == 0) {
        DVar9 = GetLastError();
        local_80 = CONCAT44(local_80._4_4_,DVar9);
        iVar13 = local_78;
        uVar4 = local_80;
      }
      goto LAB_18013d190;
    }
    uVar14 = (uint)param_2;
    if (cVar2 == '\0') {
      puVar12 = (int32_t *)
                write_text_ansi_nolock((int)&local_80,(char *)(ulonglong)param_1,uVar14);
    }
    else if (cVar2 == '\x01') {
      puVar12 = (int32_t *)
                write_text_utf8_nolock((int)&local_80,(char *)(ulonglong)param_1,uVar14);
    }
    else {
      iVar13 = 0;
      uVar4 = local_70;
      if (cVar2 != '\x02') goto LAB_18013d190;
      puVar12 = (int32_t *)
                write_text_utf16le_nolock((int)&local_80,(char *)(ulonglong)param_1,uVar14);
    }
  }
  else {
    if ((char)param_4[5] == '\0') {
      FUN_180130ef0(param_4);
    }
    if (((*(longlong *)(param_4[3] + 0x138) == 0) &&
        (*(char *)((&DAT_1801ee410)[lVar15] + 0x39 + uVar11 * 0x48) == '\0')) ||
       (BVar8 = GetConsoleMode(*(HANDLE *)((&DAT_1801ee410)[lVar15] + 0x28 + uVar11 * 0x48),local_60
                              ), BVar8 == 0)) goto LAB_18013d0ef;
    if (cVar2 != '\0') {
      if ((cVar2 == '\x01') || (uVar4 = local_70, cVar2 == '\x02')) {
        pwVar1 = (wchar_t *)((longlong)param_2 + (ulonglong)param_3);
        local_80 = 0;
        lVar15 = local_58;
        uVar4 = local_80;
        if (param_2 < pwVar1) {
          local_80._4_4_ = 0;
          pwVar16 = param_2;
          iVar10 = local_80._4_4_;
          do {
            _WCh = *pwVar16;
            wVar6 = _putwch_nolock(_WCh);
            if (wVar6 != _WCh) {
LAB_18013d0b3:
              DVar9 = GetLastError();
              local_80 = CONCAT44(local_80._4_4_,DVar9);
              lVar15 = local_58;
              uVar4 = local_80;
              break;
            }
            local_80 = CONCAT44(iVar10 + 2,(DWORD)local_80);
            iVar3 = iVar10 + 2;
            if (_WCh == L'\n') {
              wVar7 = _putwch_nolock(L'\r');
              if (wVar7 != 0xd) goto LAB_18013d0b3;
              local_80 = CONCAT44(iVar10 + 3,(DWORD)local_80);
              iVar13 = iVar13 + 1;
              iVar3 = iVar10 + 3;
            }
            iVar10 = iVar3;
            pwVar16 = pwVar16 + 1;
            lVar15 = local_58;
            uVar4 = local_80;
          } while (pwVar16 < pwVar1);
        }
      }
      goto LAB_18013d190;
    }
    puVar12 = (int32_t *)
              FUN_18013c54c((DWORD *)&local_80,param_1,(byte *)param_2,(ulonglong)param_3,param_4);
  }
  iVar13 = *(int *)(puVar12 + 1);
  uVar4 = *puVar12;
LAB_18013d190:
  local_70 = uVar4;
  iVar10 = (int)((ulonglong)local_70 >> 0x20);
  if (iVar10 != 0) {
    return iVar10 - iVar13;
  }
  if ((int)local_70 != 0) {
    if ((int)local_70 == 5) {
      *(int32_t *)(param_4 + 6) = 1;
      *(int32_t *)((longlong)param_4 + 0x2c) = 9;
      *(int32_t *)(param_4 + 7) = 1;
      *(int32_t *)((longlong)param_4 + 0x34) = 5;
      return -1;
    }
    FUN_1801312f0((int)local_70,(longlong)param_4);
    return -1;
  }
  if (((*(byte *)((&DAT_1801ee410)[lVar15] + 0x38 + uVar11 * 0x48) & 0x40) != 0) &&
     ((char)*param_2 == '\x1a')) {
    return 0;
  }
  *(int32_t *)((longlong)param_4 + 0x34) = 0;
  *(int32_t *)(param_4 + 6) = 1;
  *(int32_t *)((longlong)param_4 + 0x2c) = 0x1c;
  *(int32_t *)(param_4 + 7) = 1;
  return -1;
}

// ---- Function: __acrt_stdio_free_buffer_nolock ----
/* Library Function - Single Match
    __acrt_stdio_free_buffer_nolock
   
   Library: Visual Studio 2019 Release */

void __acrt_stdio_free_buffer_nolock(int32_t *param_1)

{
  if (((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) != 0) &&
     ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) != 0)) {
    FUN_18013bf3c((LPVOID)param_1[1]);
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    *(int32_t *)(param_1 + 2) = 0;
  }
  return;
}

// ---- Function: FUN_18013d258 ----
longlong FUN_18013d258(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong *param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 == 0xfffffffe) {
    *(int32_t *)(param_4 + 7) = 1;
    *(int32_t *)((longlong)param_4 + 0x34) = 0;
    *(int32_t *)(param_4 + 6) = 1;
    *(int32_t *)((longlong)param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_1801ee810 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        __acrt_lowio_lock_fh(param_1);
        lVar2 = -1;
        if ((*(byte *)((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(int32_t *)(param_4 + 6) = 1;
          *(int32_t *)((longlong)param_4 + 0x2c) = 9;
          *(int32_t *)(param_4 + 7) = 1;
          *(int32_t *)((longlong)param_4 + 0x34) = 0;
        }
        else {
          lVar2 = FUN_18013d378(param_1,param_2,param_3,(longlong)param_4);
        }
        __acrt_lowio_unlock_fh(param_1);
        return lVar2;
      }
    }
    *(int32_t *)(param_4 + 7) = 1;
    *(int32_t *)((longlong)param_4 + 0x34) = 0;
    *(int32_t *)(param_4 + 6) = 1;
    *(int32_t *)((longlong)param_4 + 0x2c) = 9;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  return -1;
}

// ---- Function: FUN_18013d378 ----
longlong FUN_18013d378(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER local_18 [2];
  
  hFile = (HANDLE)FUN_180147f04(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(int32_t *)(param_4 + 0x30) = 1;
    *(int32_t *)(param_4 + 0x2c) = 9;
  }
  else {
    BVar2 = SetFilePointerEx(hFile,param_2,local_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_1801312f0(DVar3,param_4);
    }
    else if (local_18[0].QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return (longlong)local_18[0].s;
    }
  }
  return -1;
}

// ---- Function: FUN_18013d424 ----
longlong FUN_18013d424(uint param_1,LARGE_INTEGER param_2,DWORD param_3)

{
  longlong lVar1;
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
  lVar1 = FUN_18013d258(param_1,param_2,param_3,local_48);
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
  return lVar1;
}

// ---- Function: thunk_FUN_18013d258 ----
longlong thunk_FUN_18013d258(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong *param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 == 0xfffffffe) {
    *(int32_t *)(param_4 + 7) = 1;
    *(int32_t *)((longlong)param_4 + 0x34) = 0;
    *(int32_t *)(param_4 + 6) = 1;
    *(int32_t *)((longlong)param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_1801ee810 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        __acrt_lowio_lock_fh(param_1);
        lVar2 = -1;
        if ((*(byte *)((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(int32_t *)(param_4 + 6) = 1;
          *(int32_t *)((longlong)param_4 + 0x2c) = 9;
          *(int32_t *)(param_4 + 7) = 1;
          *(int32_t *)((longlong)param_4 + 0x34) = 0;
        }
        else {
          lVar2 = FUN_18013d378(param_1,param_2,param_3,(longlong)param_4);
        }
        __acrt_lowio_unlock_fh(param_1);
        return lVar2;
      }
    }
    *(int32_t *)(param_4 + 7) = 1;
    *(int32_t *)((longlong)param_4 + 0x34) = 0;
    *(int32_t *)(param_4 + 6) = 1;
    *(int32_t *)((longlong)param_4 + 0x2c) = 9;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  return -1;
}

// ---- Function: FUN_18013d4c8 ----
longlong FUN_18013d4c8(uint param_1,LARGE_INTEGER param_2,DWORD param_3)

{
  longlong lVar1;
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
  lVar1 = FUN_18013d378(param_1,param_2,param_3,(longlong)local_48);
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
  return lVar1;
}

// ---- Function: thunk_FUN_18013d378 ----
longlong thunk_FUN_18013d378(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER aLStack_18 [2];
  
  hFile = (HANDLE)FUN_180147f04(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(int32_t *)(param_4 + 0x30) = 1;
    *(int32_t *)(param_4 + 0x2c) = 9;
  }
  else {
    BVar2 = SetFilePointerEx(hFile,param_2,aLStack_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_1801312f0(DVar3,param_4);
    }
    else if (aLStack_18[0].QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return (longlong)aLStack_18[0].s;
    }
  }
  return -1;
}

// ---- Function: FUN_18013d56c ----
LARGE_INTEGER FUN_18013d56c(longlong *param_1,longlong *param_2)

{
  LARGE_INTEGER LVar1;
  
  if (param_1 == (longlong *)0x0) {
    *(int32_t *)(param_2 + 6) = 1;
    *(int32_t *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
    LVar1.QuadPart = -1;
  }
  else {
    FUN_18012ef14((longlong)param_1);
    LVar1 = FUN_18013d5d8(param_1,param_2);
    FUN_18012ef20((longlong)param_1);
  }
  return (LARGE_INTEGER)LVar1.QuadPart;
}

// ---- Function: FUN_18013d5d8 ----
LARGE_INTEGER FUN_18013d5d8(longlong *param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  LARGE_INTEGER LVar3;
  ulonglong uVar4;
  LONGLONG LVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_1 == (longlong *)0x0) {
    *(int32_t *)(param_2 + 6) = 1;
    *(int32_t *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  else {
    uVar2 = FUN_18013c524((longlong)param_1);
    if ((int)param_1[2] < 0) {
      *(int32_t *)(param_1 + 2) = 0;
    }
    LVar3.QuadPart = thunk_FUN_18013d258(uVar2,(LARGE_INTEGER)0x0,1,param_2);
    if (-1 < LVar3.QuadPart) {
      if ((*(uint *)((longlong)param_1 + 0x14) & 0xc0) == 0) {
        return (LARGE_INTEGER)(LVar3.QuadPart - (int)param_1[2]);
      }
      uVar7 = *param_1 - param_1[1];
      uVar4 = (ulonglong)(uVar2 & 0x3f);
      lVar6 = (longlong)(int)uVar2 >> 6;
      cVar1 = *(char *)((&DAT_1801ee410)[lVar6] + 0x39 + uVar4 * 0x48);
      if ((*(uint *)((longlong)param_1 + 0x14) & 3) == 0) {
        if ((*(uint *)((longlong)param_1 + 0x14) >> 2 & 1) == 0) {
          *(int32_t *)(param_2 + 6) = 1;
          *(int32_t *)((longlong)param_2 + 0x2c) = 0x16;
          return (LARGE_INTEGER)-1;
        }
      }
      else {
        if ((cVar1 == '\x01') &&
           ((*(byte *)((&DAT_1801ee410)[lVar6] + 0x3d + uVar4 * 0x48) & 2) != 0)) {
          LVar5 = FUN_18013d884(param_1,LVar3,param_2);
          return (LARGE_INTEGER)LVar5;
        }
        if (*(char *)((&DAT_1801ee410)[lVar6] + 0x38 + uVar4 * 0x48) < '\0') {
          lVar6 = FUN_18013da08((short *)param_1[1],(short *)*param_1,cVar1);
          uVar7 = uVar7 + lVar6;
        }
      }
      if (LVar3.QuadPart == 0) {
        return (LARGE_INTEGER)uVar7;
      }
      if ((*(uint *)((longlong)param_1 + 0x14) & 1) == 0) {
        if (cVar1 == '\x01') {
          uVar7 = uVar7 >> 1;
        }
        return (LARGE_INTEGER)(uVar7 + LVar3.QuadPart);
      }
      LVar3 = FUN_18013d728(param_1,LVar3,uVar7,param_2);
      return (LARGE_INTEGER)LVar3.QuadPart;
    }
  }
  return (LARGE_INTEGER)((LARGE_INTEGER)0xffffffffffffffff).QuadPart;
}

// ---- Function: FUN_18013d728 ----
LARGE_INTEGER
FUN_18013d728(longlong *param_1,LARGE_INTEGER param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  uVar2 = FUN_18013c524((longlong)param_1);
  uVar4 = (ulonglong)(uVar2 & 0x3f);
  cVar1 = *(char *)((&DAT_1801ee410)[(longlong)(int)uVar2 >> 6] + 0x39 + uVar4 * 0x48);
  lVar6 = (ulonglong)(cVar1 == '\x01') + 1;
  if ((int)param_1[2] != 0) {
    lVar5 = ((longlong)(int)param_1[2] - param_1[1]) + *param_1;
    if (*(char *)((&DAT_1801ee410)[(longlong)(int)uVar2 >> 6] + 0x38 + uVar4 * 0x48) < '\0') {
      lVar3 = thunk_FUN_18013d258(uVar2,(LARGE_INTEGER)0x0,2,param_4);
      if (lVar3 == param_2.QuadPart) {
        lVar3 = FUN_18013da08((short *)param_1[1],(short *)(param_1[1] + lVar5),cVar1);
        bVar7 = (*(uint *)((longlong)param_1 + 0x14) >> 5 & 1) == 0;
        lVar5 = lVar3 + lVar5;
      }
      else {
        lVar3 = thunk_FUN_18013d258(uVar2,param_2,0,param_4);
        if (lVar3 == -1) {
          return (LARGE_INTEGER)-1;
        }
        lVar3 = 0x200;
        if (((0x200 < lVar5) || ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) == 0)) ||
           ((*(uint *)((longlong)param_1 + 0x14) >> 8 & 1) != 0)) {
          lVar3 = (longlong)(int)param_1[4];
        }
        bVar7 = (*(byte *)((&DAT_1801ee410)[(longlong)(int)uVar2 >> 6] + 0x38 + uVar4 * 0x48) & 4)
                == 0;
        lVar5 = lVar3;
      }
      if (!bVar7) {
        lVar5 = lVar5 + (ulonglong)((byte)(cVar1 - 1U) < 2) + 1;
      }
    }
    param_2.QuadPart = (param_3 / lVar6 - lVar5 / lVar6) + param_2.QuadPart;
  }
  return (LARGE_INTEGER)param_2.QuadPart;
}

