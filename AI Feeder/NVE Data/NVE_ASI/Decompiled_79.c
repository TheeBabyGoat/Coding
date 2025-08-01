#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_18013d884 ----
void FUN_18013d884(longlong *param_1,LARGE_INTEGER param_2,longlong *param_3)

{
  uint uVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte *pbVar6;
  longlong lVar7;
  int32_t auStackY_1088 [32];
  uint local_1058 [3];
  byte abStack_1049 [4097];
  ulonglong local_48;
  int32_t uStack_40;
  
  uStack_40 = 0x18013d89e;
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_1088;
  uVar1 = FUN_18013c524((longlong)param_1);
  lVar7 = 0;
  if ((int)param_1[2] != 0) {
    uVar5 = (ulonglong)(uVar1 & 0x3f);
    lVar3 = (*param_1 - param_1[1]) / 2;
    lVar4 = thunk_FUN_18013d258(uVar1,*(LARGE_INTEGER *)
                                       ((&DAT_1801ee410)[(longlong)(int)uVar1 >> 6] + 0x30 +
                                       uVar5 * 0x48),0,param_3);
    if ((((lVar4 == *(longlong *)((&DAT_1801ee410)[(longlong)(int)uVar1 >> 6] + 0x30 + uVar5 * 0x48)
          ) && (BVar2 = ReadFile(*(HANDLE *)
                                  ((&DAT_1801ee410)[(longlong)(int)uVar1 >> 6] + 0x28 + uVar5 * 0x48
                                  ),abStack_1049 + 1,0x1000,local_1058,(LPOVERLAPPED)0x0),
               BVar2 != 0)) && (lVar4 = thunk_FUN_18013d258(uVar1,param_2,0,param_3), -1 < lVar4))
       && (uVar5 = (ulonglong)local_1058[0], lVar3 <= (longlong)uVar5)) {
      pbVar6 = abStack_1049;
      if (lVar3 != 0) {
        do {
          pbVar6 = pbVar6 + 1;
          if (abStack_1049 + uVar5 + 1 <= pbVar6) break;
          if (*pbVar6 == 0xd) {
            if ((pbVar6 < abStack_1049 + uVar5) && (pbVar6[1] == 10)) {
              pbVar6 = pbVar6 + 1;
            }
          }
          else {
            pbVar6 = pbVar6 + (char)(&DAT_1801eb670)[*pbVar6];
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != lVar3);
      }
    }
  }
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_1088);
  return;
}

// ---- Function: FUN_18013da08 ----
longlong FUN_18013da08(short *param_1,short *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((byte)(param_3 - 1U) < 2) {
    lVar1 = 0;
    lVar2 = lVar1;
    if (param_1 != param_2) {
      do {
        lVar1 = lVar2 + 1;
        if (*param_1 != 10) {
          lVar1 = lVar2;
        }
        param_1 = param_1 + 1;
        lVar2 = lVar1;
      } while (param_1 != param_2);
    }
    return lVar1 * 2;
  }
  lVar1 = 0;
  lVar2 = lVar1;
  if (param_1 != param_2) {
    do {
      lVar1 = lVar2 + 1;
      if ((char)*param_1 != '\n') {
        lVar1 = lVar2;
      }
      param_1 = (short *)((longlong)param_1 + 1);
      lVar2 = lVar1;
    } while (param_1 != param_2);
  }
  return lVar1;
}

// ---- Function: FUN_18013da60 ----
LARGE_INTEGER FUN_18013da60(longlong *param_1)

{
  LARGE_INTEGER LVar1;
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
  LVar1 = FUN_18013d56c(param_1,local_48);
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
  return (LARGE_INTEGER)LVar1.QuadPart;
}

// ---- Function: thunk_FUN_18013d5d8 ----
LARGE_INTEGER thunk_FUN_18013d5d8(longlong *param_1,longlong *param_2)

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

// ---- Function: initialize_inherited_file_handles_nolock ----
/* Library Function - Single Match
    void __cdecl initialize_inherited_file_handles_nolock(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl initialize_inherited_file_handles_nolock(void)

{
  longlong lVar1;
  DWORD DVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  _STARTUPINFOW local_78;
  
  GetStartupInfoW(&local_78);
  lVar5 = 0;
  if ((local_78.cbReserved2 != 0) && ((uint *)local_78.lpReserved2 != (uint *)0x0)) {
    puVar6 = (uint *)((longlong)local_78.lpReserved2 + 4);
    pbVar4 = (byte *)((longlong)(int)*(uint *)local_78.lpReserved2 + (longlong)puVar6);
    uVar7 = 0x2000;
    if ((int)*(uint *)local_78.lpReserved2 < 0x2000) {
      uVar7 = *(uint *)local_78.lpReserved2;
    }
    __acrt_lowio_ensure_fh_exists(uVar7);
    if ((int)DAT_1801ee810 < (int)uVar7) {
      uVar7 = DAT_1801ee810;
    }
    uVar8 = (ulonglong)uVar7;
    if (uVar7 != 0) {
      do {
        if ((((*(longlong *)pbVar4 != -1) && (*(longlong *)pbVar4 != -2)) && ((*puVar6 & 1) != 0))
           && (((*puVar6 & 8) != 0 || (DVar2 = GetFileType(*(HANDLE *)pbVar4), DVar2 != 0)))) {
          uVar3 = (ulonglong)((uint)lVar5 & 0x3f);
          lVar1 = (&DAT_1801ee410)[lVar5 >> 6];
          *(int32_t *)(lVar1 + 0x28 + uVar3 * 0x48) = *(int32_t *)pbVar4;
          *(byte *)(lVar1 + 0x38 + uVar3 * 0x48) = (byte)*puVar6;
        }
        lVar5 = lVar5 + 1;
        puVar6 = (uint *)((longlong)puVar6 + 1);
        pbVar4 = pbVar4 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}

// ---- Function: FUN_18013dbf4 ----
void FUN_18013dbf4(void)

{
  byte *pbVar1;
  longlong lVar2;
  DWORD DVar3;
  HANDLE hFile;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  lVar6 = 0;
  do {
    uVar4 = (ulonglong)(uVar5 & 0x3f);
    lVar2 = (&DAT_1801ee410)[(longlong)(int)uVar5 >> 6];
    if (*(longlong *)(lVar2 + 0x28 + uVar4 * 0x48) + 2U < 2) {
      *(int32_t *)(lVar2 + 0x38 + uVar4 * 0x48) = 0x81;
      if (uVar5 == 0) {
        DVar3 = 0xfffffff6;
      }
      else if (uVar5 == 1) {
        DVar3 = 0xfffffff5;
      }
      else {
        DVar3 = 0xfffffff4;
      }
      hFile = GetStdHandle(DVar3);
      if (1 < (longlong)hFile + 1U) {
        DVar3 = GetFileType(hFile);
        if (DVar3 != 0) {
          *(HANDLE *)(lVar2 + 0x28 + uVar4 * 0x48) = hFile;
          if ((DVar3 & 0xff) == 2) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 8;
          }
          goto LAB_18013dcd2;
        }
      }
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x40;
      *(int32_t *)(lVar2 + 0x28 + uVar4 * 0x48) = 0xfffffffffffffffe;
      if (DAT_1801edd90 != 0) {
        *(int32_t *)(*(longlong *)(lVar6 + DAT_1801edd90) + 0x18) = 0xfffffffe;
      }
    }
    else {
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x80;
    }
LAB_18013dcd2:
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 8;
    if (uVar5 == 3) {
      return;
    }
  } while( true );
}

// ---- Function: FUN_18013dd78 ----
bool FUN_18013dd78(int32_t param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int32_t *puVar5;
  uint uVar6;
  bool bVar7;
  int32_t local_res8 [8];
  
  local_res8[0] = param_1;
  uVar1 = FUN_18013c524((longlong)param_2);
  if ((*(uint *)((longlong)param_2 + 0x14) & 0xc0) == 0) {
    iVar3 = FUN_18013cdec(uVar1,(wchar_t *)local_res8,1,param_3);
    bVar7 = iVar3 == 1;
  }
  else {
    uVar2 = 0;
    uVar6 = (int)*param_2 - (int)param_2[1];
    *param_2 = param_2[1] + 1;
    *(int *)(param_2 + 2) = (int)param_2[4] + -1;
    if ((int)uVar6 < 1) {
      if (uVar1 + 2 < 2) {
        puVar5 = &DAT_1801eb620;
      }
      else {
        puVar5 = (int32_t *)
                 ((&DAT_1801ee410)[(longlong)(int)uVar1 >> 6] + (ulonglong)(uVar1 & 0x3f) * 0x48);
      }
      if (((puVar5[0x38] & 0x20) != 0) &&
         (lVar4 = FUN_18013d424(uVar1,(LARGE_INTEGER)0x0,2), lVar4 == -1)) {
        LOCK();
        *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 0x10;
        UNLOCK();
        return true;
      }
    }
    else {
      uVar2 = FUN_18013cdec(uVar1,(wchar_t *)param_2[1],uVar6,param_3);
    }
    bVar7 = uVar2 == uVar6;
    *(int32_t *)param_2[1] = local_res8[0];
  }
  return bVar7;
}

// ---- Function: stream_is_at_end_of_file_nolock ----
/* Library Function - Single Match
    bool __cdecl stream_is_at_end_of_file_nolock(class __crt_stdio_stream)
   
   Library: Visual Studio 2019 Release */

bool __cdecl stream_is_at_end_of_file_nolock(longlong *param_1)

{
  bool bVar1;
  BOOL BVar2;
  HANDLE hFile;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];
  
  if ((*(uint *)((longlong)param_1 + 0x14) >> 3 & 1) == 0) {
    if (((((*(uint *)((longlong)param_1 + 0x14) & 0xc0) == 0) || (*param_1 != param_1[1])) &&
        (hFile = (HANDLE)FUN_180147f04(*(uint *)(param_1 + 3)), hFile != (HANDLE)0xffffffffffffffff)
        ) && ((BVar2 = SetFilePointerEx(hFile,(LARGE_INTEGER)0x0,local_res10,1), BVar2 != 0 &&
              (BVar2 = GetFileSizeEx(hFile,&local_res8), BVar2 != 0)))) {
      return local_res10[0].QuadPart == local_res8.QuadPart;
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

// ---- Function: FUN_18013deec ----
ulonglong FUN_18013deec(byte param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  int32_t uVar2;
  
  FUN_18013c524((longlong)param_2);
  if ((*(uint *)((longlong)param_2 + 0x14) & 6) == 0) {
    *(int32_t *)((longlong)param_3 + 0x2c) = 9;
  }
  else {
    if ((*(uint *)((longlong)param_2 + 0x14) >> 0xc & 1) == 0) {
      if ((*(uint *)((longlong)param_2 + 0x14) & 1) != 0) {
        bVar1 = stream_is_at_end_of_file_nolock(param_2);
        *(int32_t *)(param_2 + 2) = 0;
        if (!bVar1) goto LAB_18013df1e;
        *param_2 = param_2[1];
        LOCK();
        *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 2;
      UNLOCK();
      LOCK();
      *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffff7;
      UNLOCK();
      *(int32_t *)(param_2 + 2) = 0;
      if (((*(uint *)((longlong)param_2 + 0x14) & 0x4c0) == 0) &&
         (uVar2 = FUN_18013dfb8((int32_t *)param_2), (char)uVar2 == '\0')) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      bVar1 = FUN_18013dd78(param_1,param_2,param_3);
      if (bVar1) {
        return (ulonglong)param_1;
      }
      goto LAB_18013df1e;
    }
    *(int32_t *)((longlong)param_3 + 0x2c) = 0x22;
  }
  *(int32_t *)(param_3 + 6) = 1;
LAB_18013df1e:
  LOCK();
  *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 0x10;
  UNLOCK();
  return 0xffffffff;
}

// ---- Function: FUN_18013dfb8 ----
ulonglong FUN_18013dfb8(int32_t *param_1)

{
  byte bVar1;
  uint uVar2;
  int32_t *puVar3;
  int32_t extraout_var;
  ulonglong uVar4;
  
  puVar3 = FUN_18012ee5c(2);
  if (param_1 == puVar3) {
    uVar4 = CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
  }
  else {
    puVar3 = FUN_18012ee5c(1);
    if (param_1 == puVar3) {
      uVar2 = FUN_18013c524((longlong)param_1);
      bVar1 = FUN_180147f7c(uVar2);
      uVar4 = CONCAT71(extraout_var,(int)CONCAT71(extraout_var,bVar1) != 0);
    }
    else {
      uVar4 = (ulonglong)puVar3 & 0xffffffffffffff00;
    }
  }
  return uVar4;
}

// ---- Function: FUN_18013e004 ----
ulonglong FUN_18013e004(longlong *param_1)

{
  longlong *plVar1;
  LPVOID pvVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)FUN_18013dfb8((int32_t *)param_1);
  if ((char)plVar1 != '\0') {
    plVar1 = (longlong *)FUN_18012ee5c(1);
    if (param_1 == plVar1) {
      plVar3 = &DAT_1801ee818;
    }
    else {
      plVar1 = (longlong *)FUN_18012ee5c(2);
      if (param_1 != plVar1) goto LAB_18013e0be;
      plVar3 = &DAT_1801ee820;
    }
    _DAT_1801edd98 = _DAT_1801edd98 + 1;
    plVar1 = (longlong *)(ulonglong)*(uint *)((longlong)param_1 + 0x14);
    if ((*(uint *)((longlong)param_1 + 0x14) & 0x4c0) == 0) {
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x282;
      UNLOCK();
      if (*plVar3 == 0) {
        pvVar2 = _malloc_base(0x1000);
        *plVar3 = (longlong)pvVar2;
        plVar1 = (longlong *)FUN_18013bf3c((LPVOID)0x0);
      }
      if (*plVar3 == 0) {
        *(int32_t *)(param_1 + 2) = 2;
        param_1[1] = (longlong)param_1 + 0x1c;
        *param_1 = (longlong)param_1 + 0x1c;
        *(int32_t *)(param_1 + 4) = 2;
      }
      else {
        param_1[1] = *plVar3;
        plVar1 = (longlong *)*plVar3;
        *param_1 = (longlong)plVar1;
        *(int32_t *)(param_1 + 2) = 0x1000;
        *(int32_t *)(param_1 + 4) = 0x1000;
      }
      return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    }
  }
LAB_18013e0be:
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}

// ---- Function: FUN_18013e0cc ----
void FUN_18013e0cc(char param_1,int *param_2,longlong *param_3)

{
  if ((param_1 != '\0') && (((uint)param_2[5] >> 9 & 1) != 0)) {
    FUN_18012d8d8(param_2,param_3);
    LOCK();
    param_2[5] = param_2[5] & 0xfffffd7f;
    UNLOCK();
    param_2[8] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
  }
  return;
}

// ---- Function: FUN_18013e10c ----
int FUN_18013e10c(uint param_1,short *param_2,longlong param_3)

{
  short *psVar1;
  short *psVar2;
  byte *pbVar3;
  byte bVar4;
  HANDLE hFile;
  BOOL BVar5;
  ulonglong uVar6;
  longlong lVar7;
  short sVar8;
  short *psVar9;
  short *psVar10;
  longlong lVar11;
  longlong lVar12;
  short local_res8 [4];
  short local_res10 [4];
  DWORD local_res18 [2];
  
  uVar6 = (ulonglong)(param_1 & 0x3f);
  lVar11 = (longlong)(int)param_1 >> 6;
  lVar12 = 0;
  lVar7 = (&DAT_1801ee410)[lVar11];
  hFile = *(HANDLE *)(lVar7 + 0x28 + uVar6 * 0x48);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar3 = (byte *)(lVar7 + 0x38 + uVar6 * 0x48);
    *pbVar3 = *pbVar3 & 0xfb;
  }
  else {
    pbVar3 = (byte *)(lVar7 + 0x38 + uVar6 * 0x48);
    *pbVar3 = *pbVar3 | 4;
  }
  psVar2 = param_2 + param_3;
  psVar10 = param_2;
  if (param_2 < psVar2) {
    psVar9 = param_2;
    do {
      sVar8 = *psVar9;
      if (sVar8 == 0x1a) {
        bVar4 = *(byte *)((&DAT_1801ee410)[lVar11] + 0x38 + uVar6 * 0x48);
        sVar8 = 0x1a;
        if ((bVar4 & 0x40) != 0) {
LAB_18013e287:
          *psVar10 = sVar8;
          goto LAB_18013e28a;
        }
        *(byte *)((&DAT_1801ee410)[lVar11] + 0x38 + uVar6 * 0x48) = bVar4 | 2;
        break;
      }
      psVar1 = psVar9 + 1;
      if (sVar8 == 0xd) {
        if (psVar2 <= psVar1) {
          BVar5 = ReadFile(hFile,local_res8,2,local_res18,(LPOVERLAPPED)0x0);
          if ((BVar5 == 0) || (local_res18[0] == 0)) {
LAB_18013e282:
            sVar8 = 0xd;
            goto LAB_18013e287;
          }
          if ((*(byte *)((&DAT_1801ee410)[lVar11] + 0x38 + uVar6 * 0x48) & 0x48) == 0) {
            if ((local_res8[0] != 10) || (psVar10 != param_2)) {
              FUN_18013d4c8(param_1,(LARGE_INTEGER)0xfffffffffffffffe,1);
              if (local_res8[0] != 10) goto LAB_18013e282;
              break;
            }
          }
          else if (local_res8[0] != 10) {
            local_res10[0] = local_res8[0];
            *psVar10 = 0xd;
            do {
              *(int32_t *)((&DAT_1801ee410)[lVar11] + uVar6 * 0x48 + 0x3a + lVar12) =
                   *(int32_t *)((longlong)local_res10 + lVar12);
              lVar12 = lVar12 + 1;
            } while (lVar12 < 2);
            *(int32_t *)((&DAT_1801ee410)[lVar11] + 0x3c + uVar6 * 0x48) = 10;
LAB_18013e28a:
            psVar10 = psVar10 + 1;
            break;
          }
          *psVar10 = 10;
          goto LAB_18013e28a;
        }
        lVar7 = 2;
        if (*psVar1 == 10) {
          lVar7 = 4;
        }
        psVar9 = (short *)((longlong)psVar9 + lVar7);
        sVar8 = 10;
        if (*psVar1 != 10) {
          sVar8 = 0xd;
        }
        *psVar10 = sVar8;
      }
      else {
        *psVar10 = sVar8;
        psVar9 = psVar1;
      }
      psVar10 = psVar10 + 1;
    } while (psVar9 < psVar2);
  }
  return (int)((longlong)psVar10 - (longlong)param_2 >> 1) * 2;
}

// ---- Function: FUN_18013e2cc ----
int FUN_18013e2cc(uint param_1,byte *param_2,longlong param_3,LPWSTR param_4,int param_5)

{
  byte bVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  ulonglong uVar4;
  byte *pbVar5;
  ulong *puVar6;
  longlong lVar7;
  byte *pbVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  longlong lVar15;
  char local_res8 [8];
  DWORD local_res10 [2];
  
  uVar4 = (ulonglong)(param_1 & 0x3f);
  lVar15 = (longlong)(int)param_1 >> 6;
  lVar7 = (&DAT_1801ee410)[lVar15];
  hFile = *(HANDLE *)(lVar7 + 0x28 + uVar4 * 0x48);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar8 = (byte *)(lVar7 + 0x38 + uVar4 * 0x48);
    *pbVar8 = *pbVar8 & 0xfb;
  }
  else {
    pbVar8 = (byte *)(lVar7 + 0x38 + uVar4 * 0x48);
    *pbVar8 = *pbVar8 | 4;
  }
  pbVar8 = param_2 + param_3;
  pbVar14 = param_2;
  pbVar13 = param_2;
  if (param_2 < pbVar8) {
    do {
      bVar1 = *pbVar14;
      if (bVar1 == 0x1a) {
        bVar1 = *(byte *)((&DAT_1801ee410)[lVar15] + 0x38 + uVar4 * 0x48);
        if ((bVar1 & 0x40) != 0) {
          *pbVar13 = 0x1a;
          goto LAB_18013e434;
        }
        *(byte *)((&DAT_1801ee410)[lVar15] + 0x38 + uVar4 * 0x48) = bVar1 | 2;
        break;
      }
      pbVar5 = pbVar14 + 1;
      if (bVar1 == 0xd) {
        if (pbVar8 <= pbVar5) {
          BVar2 = ReadFile(hFile,local_res8,1,local_res10,(LPOVERLAPPED)0x0);
          if ((BVar2 == 0) || (local_res10[0] == 0)) {
            *pbVar13 = 0xd;
          }
          else if ((*(byte *)((&DAT_1801ee410)[lVar15] + 0x38 + uVar4 * 0x48) & 0x48) == 0) {
            if ((local_res8[0] == '\n') && (pbVar13 == param_2)) goto LAB_18013e3ca;
            FUN_18013d4c8(param_1,(LARGE_INTEGER)0xffffffffffffffff,1);
            if (local_res8[0] == '\n') break;
            *pbVar13 = 0xd;
          }
          else if (local_res8[0] == '\n') {
LAB_18013e3ca:
            *pbVar13 = 10;
          }
          else {
            *pbVar13 = 0xd;
            *(char *)((&DAT_1801ee410)[lVar15] + 0x3a + uVar4 * 0x48) = local_res8[0];
          }
LAB_18013e434:
          pbVar13 = pbVar13 + 1;
          break;
        }
        if (*pbVar5 == 10) {
          *pbVar13 = 10;
          lVar7 = 2;
        }
        else {
          *pbVar13 = 0xd;
          lVar7 = 1;
        }
        pbVar5 = pbVar14 + lVar7;
      }
      else {
        *pbVar13 = bVar1;
      }
      pbVar13 = pbVar13 + 1;
      pbVar14 = pbVar5;
    } while (pbVar5 < pbVar8);
  }
  iVar11 = (int)pbVar13 - (int)param_2;
  if (iVar11 == 0) {
    return 0;
  }
  lVar7 = (&DAT_1801ee410)[lVar15];
  if (*(char *)(lVar7 + 0x39 + uVar4 * 0x48) != '\0') {
    pbVar8 = param_2 + iVar11;
    if ((char)pbVar8[-1] < '\0') {
      uVar10 = 1;
      for (pbVar8 = pbVar8 + -1;
          ((uVar9 = (uint)uVar10, (&DAT_1801eb670)[*pbVar8] == '\0' && (uVar9 < 5)) &&
          (param_2 <= pbVar8)); pbVar8 = pbVar8 + -1) {
        uVar10 = (ulonglong)(uVar9 + 1);
      }
      if ((&DAT_1801eb670)[*pbVar8] == '\0') {
        puVar6 = __doserrno();
        *puVar6 = 0x2a;
        return -1;
      }
      if ((int)(char)(&DAT_1801eb670)[*pbVar8] + 1U == uVar9) {
        pbVar8 = pbVar8 + uVar10;
      }
      else if ((*(byte *)(lVar7 + 0x38 + uVar4 * 0x48) & 0x48) == 0) {
        FUN_18013d4c8(param_1,(LARGE_INTEGER)(longlong)(int)-uVar9,1);
      }
      else {
        pbVar14 = pbVar8 + 1;
        *(byte *)(lVar7 + 0x3a + uVar4 * 0x48) = *pbVar8;
        if (1 < uVar9) {
          bVar1 = *pbVar14;
          pbVar14 = pbVar8 + 2;
          *(byte *)((&DAT_1801ee410)[lVar15] + 0x3b + uVar4 * 0x48) = bVar1;
        }
        if (uVar9 == 3) {
          bVar1 = *pbVar14;
          pbVar14 = pbVar14 + 1;
          *(byte *)((&DAT_1801ee410)[lVar15] + 0x3c + uVar4 * 0x48) = bVar1;
        }
        pbVar8 = pbVar14 + -uVar10;
      }
    }
    iVar12 = (int)pbVar8 - (int)param_2;
    iVar11 = FUN_180141178(0xfde9,0,(LPCSTR)param_2,iVar12,param_4,param_5);
    if (iVar11 == 0) {
      DVar3 = GetLastError();
      FUN_1801312a8(DVar3);
      return -1;
    }
    *(byte *)((&DAT_1801ee410)[lVar15] + 0x3d + uVar4 * 0x48) =
         -(iVar11 != iVar12) & 2U | *(byte *)((&DAT_1801ee410)[lVar15] + 0x3d + uVar4 * 0x48) & 0xfd
    ;
    return iVar11 * 2;
  }
  return iVar11;
}

// ---- Function: FUN_18013e594 ----
int FUN_18013e594(uint param_1,LPWSTR param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  ulong *puVar3;
  
  if (param_1 == 0xfffffffe) {
    puVar3 = __doserrno();
    *puVar3 = 0;
    puVar3 = __doserrno();
    *puVar3 = 9;
    return -1;
  }
  if (((int)param_1 < 0) || (DAT_1801ee810 <= param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if ((*(byte *)((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + 0x38 +
                  (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
      if (param_3 < 0x80000000) {
        __acrt_lowio_lock_fh(param_1);
        iVar2 = -1;
        if ((*(byte *)((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          puVar3 = __doserrno();
          *puVar3 = 9;
          puVar3 = __doserrno();
          *puVar3 = 0;
        }
        else {
          iVar2 = FUN_18013e6b4(param_1,param_2,param_3);
        }
        __acrt_lowio_unlock_fh(param_1);
        return iVar2;
      }
      puVar3 = __doserrno();
      *puVar3 = 0;
      puVar3 = __doserrno();
      *puVar3 = 0x16;
      goto LAB_18013e61a;
    }
  }
  puVar3 = __doserrno();
  *puVar3 = 0;
  puVar3 = __doserrno();
  *puVar3 = 9;
LAB_18013e61a:
  FUN_18012b794();
  return -1;
}

// ---- Function: FUN_18013e6b4 ----
int FUN_18013e6b4(uint param_1,LPWSTR param_2,uint param_3)

{
  WCHAR *pWVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  BOOL BVar6;
  DWORD DVar7;
  ulong *puVar8;
  ulonglong uVar9;
  LPWSTR pWVar10;
  int32_t extraout_var;
  LPWSTR pWVar11;
  WCHAR WVar12;
  uint uVar13;
  uint nNumberOfBytesToRead;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  LPWSTR lpBuffer;
  uint local_res20 [2];
  DWORD local_68 [2];
  HANDLE local_60;
  ulonglong local_58;
  ulonglong local_50;
  LPWSTR local_48;
  
  if (param_1 == 0xfffffffe) {
    puVar8 = __doserrno();
    *puVar8 = 0;
    puVar8 = __doserrno();
    *puVar8 = 9;
    return -1;
  }
  pWVar10 = (LPWSTR)0x0;
  iVar14 = 0;
  if ((-1 < (int)param_1) && (param_1 < DAT_1801ee810)) {
    uVar9 = (ulonglong)(param_1 & 0x3f);
    local_50 = 1;
    local_58 = (ulonglong)(longlong)(int)param_1 >> 6;
    lVar16 = (&DAT_1801ee410)[local_58];
    if ((*(byte *)(lVar16 + 0x38 + uVar9 * 0x48) & 1) != 0) {
      if (param_3 < 0x80000000) {
        if ((param_3 == 0) || ((*(byte *)(lVar16 + 0x38 + uVar9 * 0x48) & 2) != 0)) {
          return 0;
        }
        if (param_2 != (LPWSTR)0x0) {
          local_60 = *(HANDLE *)(lVar16 + 0x28 + uVar9 * 0x48);
          cVar3 = *(char *)(lVar16 + 0x39 + uVar9 * 0x48);
          if (cVar3 == '\x01') {
            if ((~(byte)param_3 & 1) == 0) goto LAB_18013e7ae;
            uVar13 = param_3 >> 1;
            if (uVar13 < 4) {
              uVar13 = 4;
            }
            pWVar10 = (LPWSTR)_malloc_base((ulonglong)uVar13);
            FUN_18013bf3c((LPVOID)0x0);
            FUN_18013bf3c((LPVOID)0x0);
            if (pWVar10 != (LPWSTR)0x0) {
              lVar16 = FUN_18013d4c8(param_1,(LARGE_INTEGER)0x0,1);
              *(longlong *)((&DAT_1801ee410)[local_58] + 0x30 + uVar9 * 0x48) = lVar16;
              pWVar11 = pWVar10;
              goto LAB_18013e850;
            }
            puVar8 = __doserrno();
            *puVar8 = 0xc;
            puVar8 = __doserrno();
            *puVar8 = 8;
          }
          else {
            pWVar11 = param_2;
            uVar13 = param_3;
            if ((cVar3 == '\x02') && ((~(byte)param_3 & 1) == 0)) {
LAB_18013e7ae:
              puVar8 = __doserrno();
              *puVar8 = 0;
              puVar8 = __doserrno();
              *puVar8 = 0x16;
              FUN_18012b794();
            }
            else {
LAB_18013e850:
              lpBuffer = pWVar11;
              nNumberOfBytesToRead = uVar13;
              if (((*(byte *)((&DAT_1801ee410)[local_58] + 0x38 + uVar9 * 0x48) & 0x48) != 0) &&
                 ((cVar4 = *(char *)((&DAT_1801ee410)[local_58] + 0x3a + uVar9 * 0x48),
                  cVar4 != '\n' && (uVar13 != 0)))) {
                *(char *)pWVar11 = cVar4;
                nNumberOfBytesToRead = uVar13 - 1;
                lpBuffer = (LPWSTR)((longlong)pWVar11 + 1);
                iVar14 = 1;
                *(int32_t *)((&DAT_1801ee410)[local_58] + 0x3a + uVar9 * 0x48) = 10;
                if ((cVar3 != '\0') &&
                   ((cVar4 = *(char *)((&DAT_1801ee410)[local_58] + 0x3b + uVar9 * 0x48),
                    cVar4 != '\n' && (nNumberOfBytesToRead != 0)))) {
                  *(char *)lpBuffer = cVar4;
                  lpBuffer = pWVar11 + 1;
                  nNumberOfBytesToRead = uVar13 - 2;
                  *(int32_t *)((&DAT_1801ee410)[local_58] + 0x3b + uVar9 * 0x48) = 10;
                  iVar14 = 2;
                  if ((cVar3 == '\x01') &&
                     ((cVar4 = *(char *)((&DAT_1801ee410)[local_58] + 0x3c + uVar9 * 0x48),
                      cVar4 != '\n' && (iVar14 = 2, nNumberOfBytesToRead != 0)))) {
                    *(char *)lpBuffer = cVar4;
                    iVar14 = 3;
                    lpBuffer = (LPWSTR)((longlong)pWVar11 + 3);
                    nNumberOfBytesToRead = uVar13 - 3;
                    *(int32_t *)((&DAT_1801ee410)[local_58] + 0x3c + uVar9 * 0x48) = 10;
                  }
                }
              }
              local_48 = pWVar11;
              bVar5 = FUN_180147f7c(param_1);
              if ((((int)CONCAT71(extraout_var,bVar5) == 0) ||
                  (-1 < *(char *)((&DAT_1801ee410)[local_58] + 0x38 + uVar9 * 0x48))) ||
                 (BVar6 = GetConsoleMode(local_60,local_68), BVar6 == 0)) {
                local_50 = local_50 & 0xffffffffffffff00;
LAB_18013e97b:
                BVar6 = ReadFile(local_60,lpBuffer,nNumberOfBytesToRead,local_res20,
                                 (LPOVERLAPPED)0x0);
                if ((BVar6 != 0) && (local_res20[0] <= param_3)) {
LAB_18013e9b6:
                  iVar14 = iVar14 + local_res20[0];
                  if (*(char *)((&DAT_1801ee410)[local_58] + 0x38 + uVar9 * 0x48) < '\0') {
                    if (cVar3 == '\x02') {
                      uVar15 = (ulonglong)(longlong)iVar14 >> 1;
                      if ((char)local_50 == '\0') {
                        iVar14 = FUN_18013e10c(param_1,local_48,uVar15);
                      }
                      else {
                        pWVar1 = local_48;
                        for (pWVar11 = local_48; pWVar11 < local_48 + uVar15;
                            pWVar11 = (LPWSTR)((longlong)pWVar11 + lVar16)) {
                          WVar12 = *pWVar11;
                          if (WVar12 == L'\x1a') {
                            pbVar2 = (byte *)((&DAT_1801ee410)[local_58] + 0x38 + uVar9 * 0x48);
                            *pbVar2 = *pbVar2 | 2;
                            break;
                          }
                          if (((WVar12 == L'\r') && (pWVar11 + 1 < local_48 + uVar15)) &&
                             (pWVar11[1] == L'\n')) {
                            WVar12 = L'\n';
                            lVar16 = 4;
                          }
                          else {
                            lVar16 = 2;
                          }
                          *pWVar1 = WVar12;
                          pWVar1 = pWVar1 + 1;
                        }
                        iVar14 = (int)((longlong)pWVar1 - (longlong)local_48 >> 1) * 2;
                      }
                    }
                    else {
                      iVar14 = FUN_18013e2cc(param_1,(byte *)lpBuffer,(longlong)iVar14,param_2,
                                             param_3 >> 1);
                    }
                  }
                  goto LAB_18013e95b;
                }
                DVar7 = GetLastError();
                if (DVar7 != 5) {
                  if (DVar7 == 0x6d) {
                    iVar14 = 0;
                    goto LAB_18013e95b;
                  }
                  goto LAB_18013e951;
                }
                puVar8 = __doserrno();
                *puVar8 = 9;
                puVar8 = __doserrno();
                *puVar8 = 5;
              }
              else {
                if (cVar3 != '\x02') goto LAB_18013e97b;
                BVar6 = ReadConsoleW(local_60,lpBuffer,nNumberOfBytesToRead >> 1,local_res20,
                                     (PCONSOLE_READCONSOLE_CONTROL)0x0);
                if (BVar6 != 0) {
                  local_res20[0] = local_res20[0] * 2;
                  goto LAB_18013e9b6;
                }
                DVar7 = GetLastError();
LAB_18013e951:
                FUN_1801312a8(DVar7);
              }
            }
          }
          iVar14 = -1;
LAB_18013e95b:
          FUN_18013bf3c(pWVar10);
          return iVar14;
        }
      }
      puVar8 = __doserrno();
      *puVar8 = 0;
      puVar8 = __doserrno();
      *puVar8 = 0x16;
      goto LAB_18013eae1;
    }
  }
  puVar8 = __doserrno();
  *puVar8 = 0;
  puVar8 = __doserrno();
  *puVar8 = 9;
LAB_18013eae1:
  FUN_18012b794();
  return -1;
}

// ---- Function: FUN_18013eb04 ----
ulonglong FUN_18013eb04(int32_t *param_1)

{
  byte bVar1;
  LPWSTR pWVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  int32_t *puVar7;
  
  if (param_1 == (int32_t *)0x0) {
    puVar6 = __doserrno();
    *puVar6 = 0x16;
    FUN_18012b794();
  }
  else if (((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) != 0) &&
          ((*(uint *)((longlong)param_1 + 0x14) >> 0xc & 1) == 0)) {
    if ((*(uint *)((longlong)param_1 + 0x14) >> 1 & 1) == 0) {
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 1;
      UNLOCK();
      if ((*(uint *)((longlong)param_1 + 0x14) & 0x4c0) == 0) {
        __acrt_stdio_allocate_buffer_nolock(param_1);
      }
      pWVar2 = (LPWSTR)param_1[1];
      uVar5 = *(uint *)(param_1 + 4);
      *param_1 = pWVar2;
      uVar3 = FUN_18013c524((longlong)param_1);
      iVar4 = FUN_18013e594(uVar3,pWVar2,uVar5);
      *(int *)(param_1 + 2) = iVar4;
      if (1 < iVar4 + 1U) {
        if ((*(uint *)((longlong)param_1 + 0x14) & 6) == 0) {
          iVar4 = FUN_18013c524((longlong)param_1);
          if ((iVar4 == -1) || (iVar4 = FUN_18013c524((longlong)param_1), iVar4 == -2)) {
            puVar7 = &DAT_1801eb620;
          }
          else {
            iVar4 = FUN_18013c524((longlong)param_1);
            uVar5 = FUN_18013c524((longlong)param_1);
            puVar7 = (int32_t *)
                     ((ulonglong)(uVar5 & 0x3f) * 0x48 + (&DAT_1801ee410)[(longlong)iVar4 >> 6]);
          }
          if ((puVar7[0x38] & 0x82) == 0x82) {
            LOCK();
            *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x20;
            UNLOCK();
          }
        }
        if (((*(int *)(param_1 + 4) == 0x200) &&
            ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) != 0)) &&
           ((*(uint *)((longlong)param_1 + 0x14) >> 8 & 1) == 0)) {
          *(int32_t *)(param_1 + 4) = 0x1000;
        }
        *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
        bVar1 = *(byte *)*param_1;
        *param_1 = (byte *)*param_1 + 1;
        return (ulonglong)bVar1;
      }
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) =
           *(uint *)((longlong)param_1 + 0x14) | (-(uint)(iVar4 != 0) & 8) + 8;
      UNLOCK();
      *(int32_t *)(param_1 + 2) = 0;
    }
    else {
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x10;
      UNLOCK();
    }
  }
  return 0xffffffff;
}

