#include <stdint.h>
#include <stddef.h>

// ---- Function: __acrt_stdio_allocate_buffer_nolock ----
/* Library Function - Single Match
    __acrt_stdio_allocate_buffer_nolock
   
   Library: Visual Studio 2019 Release */

void __acrt_stdio_allocate_buffer_nolock(int32_t *param_1)

{
  LPVOID pvVar1;
  int32_t uVar2;
  
  _DAT_1801edd98 = _DAT_1801edd98 + 1;
  uVar2 = 0x1000;
  pvVar1 = _calloc_base(0x1000,1);
  param_1[1] = pvVar1;
  FUN_18013bf3c((LPVOID)0x0);
  if (param_1[1] == 0) {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x400;
    UNLOCK();
    uVar2 = 2;
    param_1[1] = (longlong)param_1 + 0x1c;
  }
  else {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x40;
    UNLOCK();
  }
  *(int32_t *)(param_1 + 4) = uVar2;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = param_1[1];
  return;
}

// ---- Function: FUN_18013ecd8 ----
int FUN_18013ecd8(void)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int local_18;
  
  local_18 = 0;
  __acrt_lock(8);
  for (iVar3 = 3; iVar3 != DAT_1801edd88; iVar3 = iVar3 + 1) {
    lVar4 = (longlong)iVar3;
    lVar1 = *(longlong *)(DAT_1801edd90 + lVar4 * 8);
    if (lVar1 != 0) {
      if (((*(uint *)(lVar1 + 0x14) >> 0xd & 1) != 0) &&
         (uVar2 = FUN_18012f050(*(int **)(DAT_1801edd90 + lVar4 * 8)), (int)uVar2 != -1)) {
        local_18 = local_18 + 1;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_1801edd90 + lVar4 * 8) + 0x30));
      FUN_18013bf3c(*(LPVOID *)(DAT_1801edd90 + lVar4 * 8));
      *(int32_t *)(DAT_1801edd90 + lVar4 * 8) = 0;
    }
  }
  __acrt_unlock(8);
  return local_18;
}

// ---- Function: FUN_18013ed8c ----
ulonglong FUN_18013ed8c(int32_t param_1,uint *param_2,int32_t *param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  __acrt_lowio_lock_fh(*param_2);
  uVar1 = *(uint *)*param_3;
  lVar2 = param_3[1];
  if ((*(byte *)((&DAT_1801ee410)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) == 0) {
    *(int32_t *)(lVar2 + 0x30) = 1;
    *(int32_t *)(lVar2 + 0x2c) = 9;
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_18013ef60(uVar1,lVar2);
    uVar3 = uVar3 & 0xffffffff;
  }
  __acrt_lowio_unlock_fh(*param_4);
  return uVar3;
}

// ---- Function: FUN_18013ee04 ----
ulonglong FUN_18013ee04(uint param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint local_res8 [4];
  int32_t local_res18 [8];
  uint local_res20 [2];
  uint local_28 [2];
  uint *local_20;
  longlong *local_18;
  
  if (param_1 == 0xfffffffe) {
    *(int32_t *)(param_2 + 7) = 1;
    *(int32_t *)((longlong)param_2 + 0x34) = 0;
    *(int32_t *)(param_2 + 6) = 1;
    *(int32_t *)((longlong)param_2 + 0x2c) = 9;
  }
  else {
    local_res8[0] = param_1;
    if (((-1 < (int)param_1) && (param_1 < DAT_1801ee810)) &&
       ((*(byte *)((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + 0x38 +
                  (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0)) {
      local_20 = local_res8;
      local_res20[0] = param_1;
      local_28[0] = param_1;
      local_18 = param_2;
      uVar1 = FUN_18013ed8c(local_res18,local_28,&local_20,local_res20);
      return uVar1;
    }
    *(int32_t *)(param_2 + 7) = 1;
    *(int32_t *)((longlong)param_2 + 0x34) = 0;
    *(int32_t *)(param_2 + 6) = 1;
    *(int32_t *)((longlong)param_2 + 0x2c) = 9;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  return 0xffffffff;
}

// ---- Function: FUN_18013eec8 ----
ulonglong FUN_18013eec8(uint param_1)

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
  uVar1 = FUN_18013ef60(param_1,(longlong)local_48);
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

// ---- Function: FUN_18013ef60 ----
int32_t FUN_18013ef60(uint param_1,longlong param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  HANDLE hObject;
  int32_t uVar5;
  
  lVar3 = FUN_180147f04(param_1);
  if (lVar3 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_1801ee410 + 200) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_1801ee410 + 0x80) & 1) != 0)))) {
      lVar3 = FUN_180147f04(2);
      lVar4 = FUN_180147f04(1);
      if (lVar4 == lVar3) goto LAB_18013ef82;
    }
    hObject = (HANDLE)FUN_180147f04(param_1);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_18013efe0;
    }
  }
LAB_18013ef82:
  DVar2 = 0;
LAB_18013efe0:
  FUN_180147e48(param_1);
  *(int32_t *)
   ((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = 0;
  if (DVar2 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1801312f0(DVar2,param_2);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

// ---- Function: FUN_18013f030 ----
int32_t * FUN_18013f030(int32_t *param_1)

{
  int32_t *puVar1;
  longlong *plVar2;
  longlong local_res8 [4];
  
  *param_1 = 0;
  __acrt_lock(8);
  plVar2 = FUN_18013f0a4(local_res8);
  puVar1 = (int32_t *)*plVar2;
  *param_1 = puVar1;
  if (puVar1 != (int32_t *)0x0) {
    *(int32_t *)(puVar1 + 2) = 0;
    puVar1[5] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(int32_t *)(puVar1 + 3) = 0xffffffff;
  }
  __acrt_unlock(8);
  return param_1;
}

// ---- Function: __acrt_stdio_free_stream ----
/* Library Function - Single Match
    void __cdecl __acrt_stdio_free_stream(class __crt_stdio_stream)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __acrt_stdio_free_stream(int32_t *param_1)

{
  *(int32_t *)(param_1 + 3) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *(int32_t *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  LOCK();
  *(int32_t *)((longlong)param_1 + 0x14) = 0;
  UNLOCK();
  return;
}

// ---- Function: FUN_18013f0a4 ----
longlong * FUN_18013f0a4(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  LPVOID pvVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar6 = (longlong *)(DAT_1801edd90 + 0x18);
  plVar1 = plVar6 + (longlong)DAT_1801edd88 + -3;
  do {
    if (plVar6 == plVar1) {
LAB_18013f173:
      *param_1 = 0;
      return param_1;
    }
    lVar5 = *plVar6;
    if (lVar5 == 0) {
      pvVar4 = _calloc_base(1,0x58);
      *plVar6 = (longlong)pvVar4;
      FUN_18013bf3c((LPVOID)0x0);
      if (*plVar6 != 0) {
        *(int32_t *)(*plVar6 + 0x18) = 0xffffffff;
        FUN_18013aae0((LPCRITICAL_SECTION)(*plVar6 + 0x30),4000,0);
        lVar5 = *plVar6;
        LOCK();
        *(uint *)(lVar5 + 0x14) = *(uint *)(lVar5 + 0x14) | 0x2000;
        UNLOCK();
        FUN_18012ef14(lVar5);
LAB_18013f16e:
        *param_1 = lVar5;
        return param_1;
      }
      goto LAB_18013f173;
    }
    if ((*(uint *)(lVar5 + 0x14) >> 0xd & 1) == 0) {
      FUN_18012ef14(lVar5);
      uVar3 = *(uint *)(lVar5 + 0x14);
      do {
        LOCK();
        uVar2 = *(uint *)(lVar5 + 0x14);
        bVar7 = uVar3 == uVar2;
        if (bVar7) {
          *(uint *)(lVar5 + 0x14) = uVar3 | 0x2000;
          uVar2 = uVar3;
        }
        uVar3 = uVar2;
        UNLOCK();
      } while (!bVar7);
      if ((~(byte)(uVar3 >> 0xd) & 1) != 0) goto LAB_18013f16e;
      FUN_18012ef20(lVar5);
    }
    plVar6 = plVar6 + 1;
  } while( true );
}

// ---- Function: __acrt_stdio_parse_mode_char_ ----
/* Library Function - Single Match
    struct __acrt_stdio_stream_mode __cdecl __acrt_stdio_parse_mode<char>(char const * __ptr64
   const)
   
   Library: Visual Studio 2019 Release */

char * __cdecl __acrt_stdio_parse_mode<char>(char *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  ulong *puVar9;
  char *in_RDX;
  longlong lVar10;
  char *pcVar11;
  char *pcVar12;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  *(int32_t *)(param_1 + 4) = DAT_1801ee8bc;
  cVar6 = *in_RDX;
  while (cVar6 == ' ') {
    in_RDX = in_RDX + 1;
    cVar6 = *in_RDX;
  }
  if (cVar6 == 'a') {
    param_1[0] = '\t';
    param_1[1] = '\x01';
    param_1[2] = '\0';
    param_1[3] = '\0';
LAB_18013f1f0:
    param_1[4] = '\x02';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  else {
    if (cVar6 != 'r') {
      if (cVar6 != 'w') goto LAB_18013f42e;
      param_1[0] = '\x01';
      param_1[1] = '\x03';
      param_1[2] = '\0';
      param_1[3] = '\0';
      goto LAB_18013f1f0;
    }
    param_1[4] = '\x01';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  pcVar12 = in_RDX + 1;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  bVar5 = false;
  bVar4 = true;
LAB_18013f204:
  if (*pcVar12 == '\0') goto LAB_18013f353;
  cVar6 = *pcVar12;
  if (cVar6 < 'T') {
    if (cVar6 == 'S') {
      if (bVar1) goto LAB_18013f335;
      *(uint *)param_1 = *(uint *)param_1 | 0x20;
LAB_18013f2b6:
      bVar1 = true;
      bVar4 = true;
      goto LAB_18013f341;
    }
    if (cVar6 == ' ') goto LAB_18013f341;
    if (cVar6 == '+') {
      if (!bVar2) {
        bVar2 = true;
        if ((*(uint *)param_1 & 2) == 0) {
          bVar4 = true;
          *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe | 2;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffc | 4;
          goto LAB_18013f341;
        }
      }
    }
    else if (cVar6 == ',') {
      bVar5 = true;
    }
    else {
      if (cVar6 != 'D') {
        if (cVar6 == 'N') {
          *(uint *)param_1 = *(uint *)param_1 | 0x80;
LAB_18013f33f:
          bVar4 = true;
          goto LAB_18013f341;
        }
        if (cVar6 == 'R') {
          if (!bVar1) {
            *(uint *)param_1 = *(uint *)param_1 | 0x10;
            goto LAB_18013f2b6;
          }
          goto LAB_18013f335;
        }
        goto LAB_18013f42e;
      }
      if ((*(uint *)param_1 & 0x40) == 0) {
        uVar7 = *(uint *)param_1 | 0x40;
        goto LAB_18013f33d;
      }
    }
  }
  else if (cVar6 == 'T') {
    if ((*(uint *)param_1 >> 0xc & 1) == 0) {
      uVar7 = *(uint *)param_1 | 0x1000;
      goto LAB_18013f33d;
    }
  }
  else if (cVar6 == 'b') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar7 = *(uint *)param_1 | 0x8000;
      goto LAB_18013f33d;
    }
  }
  else if (cVar6 == 'c') {
    if (!bVar3) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800;
LAB_18013f316:
      bVar3 = true;
      bVar4 = true;
      goto LAB_18013f341;
    }
  }
  else if (cVar6 == 'n') {
    if (!bVar3) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffff7ff;
      goto LAB_18013f316;
    }
  }
  else if (cVar6 == 't') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar7 = *(uint *)param_1 | 0x4000;
      goto LAB_18013f33d;
    }
  }
  else {
    if (cVar6 != 'x') goto LAB_18013f42e;
    if ((*(uint *)param_1 >> 9 & 1) != 0) {
      uVar7 = *(uint *)param_1 | 0x400;
LAB_18013f33d:
      *(uint *)param_1 = uVar7;
      goto LAB_18013f33f;
    }
  }
LAB_18013f335:
  bVar4 = false;
LAB_18013f341:
  pcVar12 = pcVar12 + bVar4;
  if (!bVar4) goto LAB_18013f353;
  goto LAB_18013f204;
LAB_18013f353:
  pcVar11 = pcVar12 + 1;
  if (!bVar5) {
    pcVar11 = pcVar12;
  }
  for (; *pcVar11 == ' '; pcVar11 = pcVar11 + 1) {
  }
  if (bVar5) {
    iVar8 = strncmp(pcVar11,"ccs",3);
    if (iVar8 != 0) goto LAB_18013f42e;
    for (pcVar11 = pcVar11 + 3; *pcVar11 == ' '; pcVar11 = pcVar11 + 1) {
    }
    if (*pcVar11 != '=') goto LAB_18013f42e;
    do {
      pcVar11 = pcVar11 + 1;
    } while (*pcVar11 == ' ');
    lVar10 = 5;
    iVar8 = _strnicmp(pcVar11,"UTF-8",5);
    if (iVar8 == 0) {
      *(uint *)param_1 = *(uint *)param_1 | 0x40000;
    }
    else {
      lVar10 = 8;
      iVar8 = _strnicmp(pcVar11,"UTF-16LEUNICODE",8);
      if (iVar8 == 0) {
        *(uint *)param_1 = *(uint *)param_1 | 0x20000;
      }
      else {
        lVar10 = 7;
        iVar8 = _strnicmp(pcVar11,"UNICODE",7);
        if (iVar8 != 0) goto LAB_18013f42e;
        *(uint *)param_1 = *(uint *)param_1 | 0x10000;
      }
    }
    for (pcVar11 = pcVar11 + lVar10; cVar6 = *pcVar11, cVar6 == ' '; pcVar11 = pcVar11 + 1) {
    }
  }
  else {
    cVar6 = *pcVar11;
  }
  if (cVar6 == '\0') {
    param_1[8] = '\x01';
    return param_1;
  }
LAB_18013f42e:
  puVar9 = __doserrno();
  *puVar9 = 0x16;
  FUN_18012b794();
  return param_1;
}

// ---- Function: __acrt_stdio_parse_mode_wchar_t_ ----
/* Library Function - Single Match
    struct __acrt_stdio_stream_mode __cdecl __acrt_stdio_parse_mode<wchar_t>(wchar_t const * __ptr64
   const)
   
   Library: Visual Studio 2019 Release */

wchar_t * __cdecl __acrt_stdio_parse_mode<wchar_t>(wchar_t *param_1)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  ulong *puVar10;
  wchar_t *pwVar11;
  short *in_RDX;
  longlong lVar12;
  wchar_t *pwVar13;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  param_1[4] = L'\0';
  param_1[5] = L'\0';
  *(int32_t *)(param_1 + 2) = DAT_1801ee8bc;
  sVar7 = *in_RDX;
  while (sVar7 == 0x20) {
    in_RDX = in_RDX + 1;
    sVar7 = *in_RDX;
  }
  if (sVar7 == 0x61) {
    param_1[0] = L'ĉ';
    param_1[1] = L'\0';
LAB_18013f4ca:
    param_1[2] = L'\x02';
    param_1[3] = L'\0';
  }
  else {
    if (sVar7 != 0x72) {
      if (sVar7 != 0x77) goto LAB_18013f728;
      param_1[0] = L'́';
      param_1[1] = L'\0';
      goto LAB_18013f4ca;
    }
    param_1[2] = L'\x01';
    param_1[3] = L'\0';
  }
  pwVar13 = in_RDX + 1;
  bVar6 = true;
  bVar2 = false;
  bVar5 = false;
  lVar12 = 10;
  bVar3 = bVar2;
  bVar4 = bVar2;
LAB_18013f4e8:
  if (*pwVar13 == L'\0') goto LAB_18013f63a;
  wVar1 = *pwVar13;
  if ((ushort)wVar1 < 0x54) {
    if (wVar1 == L'S') {
      if (bVar2) goto LAB_18013f618;
      *(uint *)param_1 = *(uint *)param_1 | 0x20;
LAB_18013f599:
      bVar2 = true;
      bVar6 = true;
      goto LAB_18013f625;
    }
    if (wVar1 == L' ') goto LAB_18013f625;
    if (wVar1 == L'+') {
      if (!bVar5) {
        bVar5 = true;
        if ((*(uint *)param_1 & 2) == 0) {
          bVar6 = true;
          *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe | 2;
          *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffffffc | 4;
          goto LAB_18013f625;
        }
      }
    }
    else if (wVar1 == L',') {
      bVar4 = true;
    }
    else {
      if (wVar1 != L'D') {
        if (wVar1 == L'N') {
          *(uint *)param_1 = *(uint *)param_1 | 0x80;
LAB_18013f623:
          bVar6 = true;
          goto LAB_18013f625;
        }
        if (wVar1 == L'R') {
          if (!bVar2) {
            *(uint *)param_1 = *(uint *)param_1 | 0x10;
            goto LAB_18013f599;
          }
          goto LAB_18013f618;
        }
        goto LAB_18013f728;
      }
      if ((*(uint *)param_1 & 0x40) == 0) {
        uVar8 = *(uint *)param_1 | 0x40;
        goto LAB_18013f621;
      }
    }
  }
  else if (wVar1 == L'T') {
    if ((*(uint *)param_1 >> 0xc & 1) == 0) {
      uVar8 = *(uint *)param_1 | 0x1000;
      goto LAB_18013f621;
    }
  }
  else if (wVar1 == L'b') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar8 = *(uint *)param_1 | 0x8000;
      goto LAB_18013f621;
    }
  }
  else if (wVar1 == L'c') {
    if (!bVar3) {
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x800;
LAB_18013f5f9:
      bVar3 = true;
      bVar6 = true;
      goto LAB_18013f625;
    }
  }
  else if (wVar1 == L'n') {
    if (!bVar3) {
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffff7ff;
      goto LAB_18013f5f9;
    }
  }
  else if (wVar1 == L't') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar8 = *(uint *)param_1 | 0x4000;
      goto LAB_18013f621;
    }
  }
  else {
    if (wVar1 != L'x') goto LAB_18013f728;
    if ((*(uint *)param_1 >> 9 & 1) != 0) {
      uVar8 = *(uint *)param_1 | 0x400;
LAB_18013f621:
      *(uint *)param_1 = uVar8;
      goto LAB_18013f623;
    }
  }
LAB_18013f618:
  bVar6 = false;
LAB_18013f625:
  pwVar13 = (wchar_t *)((longlong)pwVar13 + (ulonglong)(-(uint)bVar6 & 2));
  if (!bVar6) goto LAB_18013f63a;
  goto LAB_18013f4e8;
LAB_18013f63a:
  pwVar11 = pwVar13 + 1;
  if (!bVar4) {
    pwVar11 = pwVar13;
  }
  for (; *pwVar11 == L' '; pwVar11 = pwVar11 + 1) {
  }
  if (bVar4) {
    iVar9 = wcsncmp(pwVar11,L"ccs",3);
    if (iVar9 != 0) goto LAB_18013f728;
    for (pwVar11 = pwVar11 + 3; *pwVar11 == L' '; pwVar11 = pwVar11 + 1) {
    }
    if (*pwVar11 != L'=') goto LAB_18013f728;
    do {
      pwVar11 = pwVar11 + 1;
    } while (*pwVar11 == L' ');
    iVar9 = FUN_18014824c(pwVar11,L"UTF-8",5);
    if (iVar9 == 0) {
      *(uint *)param_1 = *(uint *)param_1 | 0x40000;
    }
    else {
      iVar9 = FUN_18014824c(pwVar11,L"UTF-16LEUNICODE",8);
      if (iVar9 == 0) {
        *(uint *)param_1 = *(uint *)param_1 | 0x20000;
        lVar12 = 0x10;
      }
      else {
        iVar9 = FUN_18014824c(pwVar11,L"UNICODE",7);
        if (iVar9 != 0) goto LAB_18013f728;
        *(uint *)param_1 = *(uint *)param_1 | 0x10000;
        lVar12 = 0xe;
      }
    }
    for (pwVar11 = (wchar_t *)((longlong)pwVar11 + lVar12); wVar1 = *pwVar11, wVar1 == L' ';
        pwVar11 = pwVar11 + 1) {
    }
  }
  else {
    wVar1 = *pwVar11;
  }
  if (wVar1 == L'\0') {
    *(int32_t *)(param_1 + 4) = 1;
    return param_1;
  }
LAB_18013f728:
  puVar10 = __doserrno();
  *puVar10 = 0x16;
  FUN_18012b794();
  return param_1;
}

// ---- Function: _openfile ----
/* Library Function - Single Match
    _openfile
   
   Library: Visual Studio 2019 Release */

FILE * __cdecl _openfile(char *_Filename,char *_Mode,int _ShFlag,FILE *_File)

{
  uint *puVar1;
  int32_t uVar2;
  errno_t eVar3;
  int32_t *puVar4;
  FILE *pFVar5;
  int local_res18 [2];
  int local_28;
  uint uStack_24;
  char local_18 [16];
  
  puVar4 = (int32_t *)__acrt_stdio_parse_mode<char>(local_18);
  uVar2 = *puVar4;
  pFVar5 = (FILE *)0x0;
  if ((char)*(int32_t *)(puVar4 + 1) != '\0') {
    local_28 = (int)uVar2;
    eVar3 = FID_conflict__sopen_s(local_res18,_Filename,local_28,_ShFlag,0x180);
    if (eVar3 == 0) {
      _DAT_1801edd98 = _DAT_1801edd98 + 1;
      uStack_24 = (uint)((ulonglong)uVar2 >> 0x20);
      LOCK();
      puVar1 = (uint *)((longlong)&_File->_base + 4);
      *puVar1 = *puVar1 | uStack_24;
      UNLOCK();
      *(int32_t *)&_File->_base = 0;
      _File->_tmpfname = (char *)0x0;
      *(int32_t *)&_File->_cnt = 0;
      _File->_ptr = (char *)0x0;
      _File->_flag = local_res18[0];
      pFVar5 = _File;
    }
  }
  return pFVar5;
}

// ---- Function: _wopenfile ----
/* Library Function - Single Match
    _wopenfile
   
   Library: Visual Studio 2019 Release */

FILE * __cdecl _wopenfile(wchar_t *_Filename,wchar_t *_Mode,int _ShFlag,FILE *_File)

{
  uint *puVar1;
  int32_t uVar2;
  errno_t eVar3;
  int32_t *puVar4;
  FILE *pFVar5;
  int local_res18 [2];
  int local_28;
  uint uStack_24;
  wchar_t local_18 [8];
  
  puVar4 = (int32_t *)__acrt_stdio_parse_mode<wchar_t>(local_18);
  uVar2 = *puVar4;
  pFVar5 = (FILE *)0x0;
  if ((char)*(int32_t *)(puVar4 + 1) != '\0') {
    local_28 = (int)uVar2;
    eVar3 = FID_conflict__sopen_s(local_res18,(char *)_Filename,local_28,_ShFlag,0x180);
    if (eVar3 == 0) {
      _DAT_1801edd98 = _DAT_1801edd98 + 1;
      uStack_24 = (uint)((ulonglong)uVar2 >> 0x20);
      LOCK();
      puVar1 = (uint *)((longlong)&_File->_base + 4);
      *puVar1 = *puVar1 | uStack_24;
      UNLOCK();
      *(int32_t *)&_File->_base = 0;
      _File->_tmpfname = (char *)0x0;
      *(int32_t *)&_File->_cnt = 0;
      _File->_ptr = (char *)0x0;
      _File->_flag = local_res18[0];
      pFVar5 = _File;
    }
  }
  return pFVar5;
}

// ---- Function: FUN_18013f890 ----
int32_t
FUN_18013f890(double *param_1,int32_t (*param_2) [16],ulonglong param_3,char *param_4,
             rsize_t param_5,uint param_6,byte param_7,int param_8,__acrt_rounding_mode param_9,
             longlong *param_10)

{
  int32_t (*pauVar1) [32];
  char *pcVar2;
  int32_t (*pauVar3) [32];
  int32_t uVar4;
  bool bVar5;
  ushort uVar6;
  int32_t uVar7;
  int32_t (*pauVar8) [16];
  int32_t (*pauVar9) [32];
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  short sVar13;
  short sVar14;
  int32_t (*pauVar15) [32];
  uint uVar16;
  char *pcVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  (*param_2)[0] = 0;
  uVar16 = 0;
  if (-1 < (int)param_6) {
    uVar16 = param_6;
  }
  if (param_3 <= (ulonglong)(longlong)(int)(uVar16 + 0xb)) {
    *(int32_t *)(param_10 + 6) = 1;
    *(int32_t *)((longlong)param_10 + 0x2c) = 0x22;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_10);
    return 0x22;
  }
  if (((ulonglong)*param_1 >> 0x34 & 0x7ff) == 0x7ff) {
    uVar7 = FUN_18013fc28(param_1,*param_2,param_3,param_4,param_5,uVar16,'\0',param_8,param_9,
                          param_10);
    if ((int)uVar7 != 0) {
      (*param_2)[0] = 0;
      return uVar7;
    }
    pauVar8 = FUN_180127870(param_2,0x65);
    if (pauVar8 == (int32_t (*) [16])0x0) {
      return 0;
    }
    (*pauVar8)[0] = (param_7 ^ 1) * ' ' + 'P';
    (*pauVar8)[3] = 0;
    return 0;
  }
  if ((longlong)*param_1 < 0) {
    (*param_2)[0] = 0x2d;
    param_2 = (int32_t (*) [16])(*param_2 + 1);
  }
  pauVar1 = (int32_t (*) [32])(*param_2 + 1);
  uVar19 = 0x3ff;
  sVar14 = (ushort)(param_7 ^ 1) * 0x20 + 7;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    (*param_2)[0] = 0x30;
    uVar19 = (ulonglong)(-(uint)(((ulonglong)*param_1 & 0xfffffffffffff) != 0) & 0x3fe);
  }
  else {
    (*param_2)[0] = 0x31;
  }
  pauVar15 = (int32_t (*) [32])(*param_2 + 2);
  if (uVar16 == 0) {
    uVar4 = 0;
  }
  else {
    if ((char)param_10[5] == '\0') {
      FUN_180130ef0(param_10);
    }
    uVar4 = *(int32_t *)**(int32_t **)(param_10[3] + 0xf8);
  }
  (*pauVar1)[0] = uVar4;
  if (((ulonglong)*param_1 & 0xfffffffffffff) != 0) {
    sVar13 = 0x30;
    uVar18 = 0xf000000000000;
    while (0 < (int)uVar16) {
      uVar6 = (short)(((ulonglong)*param_1 & uVar18) >> ((byte)sVar13 & 0x3f)) + 0x30;
      if (0x39 < uVar6) {
        uVar6 = uVar6 + sVar14;
      }
      (*pauVar15)[0] = (char)uVar6;
      uVar16 = uVar16 - 1;
      pauVar15 = (int32_t (*) [32])(*pauVar15 + 1);
      uVar18 = uVar18 >> 4;
      sVar13 = sVar13 + -4;
      if (sVar13 < 0) goto LAB_18013fae6;
    }
    bVar5 = should_round_up(param_1,uVar18,sVar13,param_9);
    pauVar3 = pauVar15;
    if (!bVar5) goto LAB_18013fb0c;
    while( true ) {
      pauVar9 = (int32_t (*) [32])(pauVar3[-1] + 0x1f);
      cVar12 = (*pauVar9)[0];
      if ((cVar12 + 0xbaU & 0xdf) != 0) break;
      (*pauVar9)[0] = 0x30;
      pauVar3 = pauVar9;
    }
    if (pauVar9 == pauVar1) {
      pauVar3[-1][0x1e] = pauVar3[-1][0x1e] + '\x01';
    }
    else {
      if (cVar12 == '9') {
        cVar12 = (char)sVar14 + '9';
      }
      (*pauVar9)[0] = cVar12 + '\x01';
    }
  }
LAB_18013fae6:
  if (0 < (int)uVar16) {
    FUN_180151670(pauVar15,0x30,(ulonglong)uVar16);
    pauVar15 = (int32_t (*) [32])(*pauVar15 + uVar16);
  }
LAB_18013fb0c:
  if ((*pauVar1)[0] == '\0') {
    pauVar15 = pauVar1;
  }
  (*pauVar15)[0] = (param_7 ^ 1) * ' ' + 'P';
  pcVar2 = *pauVar15 + 2;
  uVar16 = (uint)((ulonglong)*param_1 >> 0x34) & 0x7ff;
  lVar10 = uVar16 - uVar19;
  lVar11 = lVar10;
  if (lVar10 < 0) {
    lVar11 = uVar19 - uVar16;
  }
  uVar4 = 0x2b;
  if (lVar10 < 0) {
    uVar4 = 0x2d;
  }
  (*pauVar15)[1] = uVar4;
  *pcVar2 = '0';
  pcVar17 = pcVar2;
  if (lVar11 < 1000) {
LAB_18013fb93:
    if (99 < lVar11) goto LAB_18013fb99;
LAB_18013fbcc:
    if (lVar11 < 10) goto LAB_18013fbfd;
  }
  else {
    pcVar17 = *pauVar15 + 3;
    *pcVar2 = (char)(lVar11 / 1000) + '0';
    lVar11 = lVar11 % 1000;
    if (pcVar17 == pcVar2) goto LAB_18013fb93;
LAB_18013fb99:
    lVar10 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar11),8) + lVar11;
    lVar10 = (lVar10 >> 6) - (lVar10 >> 0x3f);
    *pcVar17 = (char)lVar10 + '0';
    pcVar17 = pcVar17 + 1;
    lVar11 = lVar11 + lVar10 * -100;
    if (pcVar17 == pcVar2) goto LAB_18013fbcc;
  }
  *pcVar17 = (char)(lVar11 / 10) + '0';
  pcVar17 = pcVar17 + 1;
  lVar11 = lVar11 % 10;
LAB_18013fbfd:
  *pcVar17 = (char)lVar11 + '0';
  pcVar17[1] = '\0';
  return 0;
}

// ---- Function: FUN_18013fc28 ----
void FUN_18013fc28(int32_t *param_1,int32_t *param_2,ulonglong param_3,char *param_4,
                  rsize_t param_5,int param_6,char param_7,int param_8,int param_9,
                  longlong *param_10)

{
  int iVar1;
  ulonglong uVar2;
  int local_18 [4];
  
  iVar1 = FUN_18014935c((uint *)*param_1,param_6 + 1,1,local_18,param_4,param_5);
  uVar2 = (param_3 - (0 < param_6)) - (ulonglong)(local_18[0] == 0x2d);
  if (param_3 == 0xffffffffffffffff) {
    uVar2 = 0xffffffffffffffff;
  }
  iVar1 = FUN_18014924c(param_2 + (ulonglong)(0 < param_6) + (ulonglong)(local_18[0] == 0x2d),uVar2,
                        param_6 + 1,local_18,iVar1,param_9,param_10);
  if (iVar1 == 0) {
    FUN_18013fd24(param_2,param_3,param_6,param_7,param_8,local_18,0,param_10);
  }
  else {
    *param_2 = 0;
  }
  return;
}

// ---- Function: FUN_18013fd24 ----
int32_t
FUN_18013fd24(int32_t *param_1,ulonglong param_2,int param_3,char param_4,int param_5,
             int *param_6,byte param_7,longlong *param_8)

{
  errno_t eVar1;
  int32_t uVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  char *_Dst;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar5 = 0;
  if (0 < param_3) {
    iVar5 = param_3;
  }
  if ((ulonglong)(longlong)(iVar5 + 9) < param_2) {
    if ((param_7 != 0) && (puVar3 = (int32_t *)(param_1 + (*param_6 == 0x2d)), 0 < param_3)) {
      lVar6 = -1;
      do {
        lVar7 = lVar6;
        lVar6 = lVar7 + 1;
      } while (*(char *)((longlong)puVar3 + lVar6) != '\0');
      FUN_180150fd0((int32_t *)((longlong)puVar3 + 1),puVar3,lVar7 + 2);
    }
    puVar4 = param_1;
    if (*param_6 == 0x2d) {
      *param_1 = 0x2d;
      puVar4 = param_1 + 1;
    }
    if (0 < param_3) {
      *puVar4 = puVar4[1];
      puVar4 = puVar4 + 1;
      if ((char)param_8[5] == '\0') {
        FUN_180130ef0(param_8);
      }
      *puVar4 = *(int32_t *)**(int32_t **)(param_8[3] + 0xf8);
    }
    _Dst = puVar4 + ((ulonglong)param_7 ^ 1) + (longlong)param_3;
    puVar4 = param_1 + (param_2 - (longlong)_Dst);
    if (param_2 == 0xffffffffffffffff) {
      puVar4 = (int32_t *)0xffffffffffffffff;
    }
    eVar1 = strcpy_s(_Dst,(rsize_t)puVar4,"e+000");
    if (eVar1 != 0) {
                    
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (param_4 != '\0') {
      *_Dst = 'E';
    }
    if (**(char **)(param_6 + 2) != '0') {
      iVar5 = param_6[1] + -1;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
        _Dst[1] = '-';
      }
      if (99 < iVar5) {
        _Dst[2] = _Dst[2] + (char)(iVar5 / 100);
        iVar5 = iVar5 % 100;
      }
      if (9 < iVar5) {
        _Dst[3] = _Dst[3] + (char)(iVar5 / 10);
        iVar5 = iVar5 % 10;
      }
      _Dst[4] = _Dst[4] + (char)iVar5;
    }
    if ((param_5 == 2) && (_Dst[2] == '0')) {
      FUN_180150fd0((int32_t *)(_Dst + 2),(int32_t *)(_Dst + 3),3);
    }
    uVar2 = 0;
  }
  else {
    *(int32_t *)(param_8 + 6) = 1;
    *(int32_t *)((longlong)param_8 + 0x2c) = 0x22;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_8);
    uVar2 = 0x22;
  }
  return uVar2;
}

// ---- Function: FUN_18013ff08 ----
void FUN_18013ff08(int32_t *param_1,int32_t *param_2,longlong param_3,char *param_4,
                  rsize_t param_5,int param_6,int param_7,longlong *param_8)

{
  int iVar1;
  ulonglong uVar2;
  int local_18 [4];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  iVar1 = FUN_18014935c((uint *)*param_1,param_6,0,local_18,param_4,param_5);
  uVar2 = param_3 - (ulonglong)(local_18[0] == 0x2d);
  if (param_3 == -1) {
    uVar2 = 0xffffffffffffffff;
  }
  iVar1 = FUN_18014924c((char *)((ulonglong)(local_18[0] == 0x2d) + (longlong)param_2),uVar2,
                        local_18[1] + param_6,local_18,iVar1,param_7,param_8);
  if (iVar1 == 0) {
    FUN_18013ffe0(param_2,param_3,param_6,local_18,'\0',param_8);
  }
  else {
    *(int32_t *)param_2 = 0;
  }
  return;
}

