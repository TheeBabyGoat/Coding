#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_180123494 ----
int32_t FUN_180123494(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  int32_t local_18;
  int32_t uStack_14;
  
  local_18 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                 (LPBOOL)0x0);
  if (local_18 == 0) {
    uStack_14 = GetLastError();
  }
  else {
    uStack_14 = 0;
  }
  if (uStack_14 == 0x3ec) {
    local_18 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_18 == 0) {
      uStack_14 = GetLastError();
    }
    else {
      uStack_14 = 0;
    }
  }
  return CONCAT44(uStack_14,local_18);
}

// ---- Function: __std_fs_create_directory ----
/* Library Function - Single Match
    __std_fs_create_directory
   
   Library: Visual Studio 2019 Release */

int32_t __std_fs_create_directory(LPCWSTR param_1)

{
  BOOL BVar1;
  uint local_res10;
  DWORD DStackX_14;
  ulonglong local_28 [2];
  uint local_18;
  
  BVar1 = CreateDirectoryW(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 0) {
    DStackX_14 = GetLastError();
    if (DStackX_14 == 0xb7) {
      DStackX_14 = FUN_18012368c(param_1,local_28,3,0xffffffff);
      if ((DStackX_14 == 0) && ((local_18 >> 4 & 1) == 0)) {
        DStackX_14 = 0xb7;
      }
    }
    local_res10 = local_res10 & 0xffffff00;
  }
  else {
    DStackX_14 = 0;
    local_res10 = CONCAT31(local_res10._1_3_,1);
  }
  return CONCAT44(DStackX_14,local_res10);
}

// ---- Function: FUN_1801235d8 ----
DWORD FUN_1801235d8(HANDLE param_1,LPWIN32_FIND_DATAW param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = FindNextFileW(param_1,param_2);
  if (BVar1 != 0) {
    return 0;
  }
                    
                    
  DVar2 = GetLastError();
  return DVar2;
}

// ---- Function: FUN_1801235f8 ----
void FUN_1801235f8(HANDLE param_1)

{
  BOOL BVar1;
  
  if (param_1 != (HANDLE)0xffffffffffffffff) {
    BVar1 = FindClose(param_1);
    if (BVar1 == 0) {
                    
      abort();
    }
  }
  return;
}

// ---- Function: __std_fs_directory_iterator_open ----
/* Library Function - Single Match
    __std_fs_directory_iterator_open
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

DWORD __std_fs_directory_iterator_open(LPCWSTR param_1,longlong *param_2,LPVOID param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  
  if (*param_2 != -1) {
    BVar1 = FindClose((HANDLE)*param_2);
    if (BVar1 == 0) {
                    
      abort();
    }
  }
  pvVar3 = FindFirstFileExW(param_1,FindExInfoBasic,param_3,FindExSearchNameMatch,(LPVOID)0x0,0);
  *param_2 = (longlong)pvVar3;
  if (pvVar3 == (HANDLE)0xffffffffffffffff) {
    DVar2 = GetLastError();
  }
  else {
    DVar2 = 0;
  }
  return DVar2;
}

// ---- Function: FUN_18012368c ----
void FUN_18012368c(LPCWSTR param_1,ulonglong *param_2,uint param_3,ulonglong param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  HANDLE pvVar4;
  uint uVar5;
  uint uVar6;
  int32_t auStack_2c8 [32];
  int32_t local_2a8;
  int32_t uStack_2a4;
  uint local_2a0 [2];
  ulonglong local_298;
  int32_t local_290;
  uint local_28c;
  DWORD DStack_288;
  DWORD local_284;
  uint local_280;
  _WIN32_FIND_DATAW local_278;
  ulonglong local_28;
  
  local_28 = DAT_1801eb080 ^ (ulonglong)auStack_2c8;
  uVar5 = param_3 & 0xfffffffe;
  if (((param_3 & 1) == 0) || ((param_3 >> 2 & 1) == 0)) {
    uVar6 = (uint)param_4;
    if ((((param_3 >> 1 & 1) != 0) && (uVar6 != 0xffffffff)) &&
       (((param_4 >> 10 & 1) == 0 || ((param_3 & 1) == 0)))) {
      uVar5 = param_3 & 0xfffffffc;
      *(uint *)(param_2 + 2) = uVar6;
    }
    if (uVar5 == 0) goto LAB_180123976;
    if (((uVar5 & 0x2a) != 0) &&
       (((uVar6 == 0xffffffff || ((uVar6 >> 10 & 1) == 0)) || ((param_3 & 1) == 0)))) {
      BVar1 = GetFileAttributesExW(param_1,GetFileExInfoStandard,local_2a0);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        if (DVar2 != 0x20) goto LAB_180123976;
        pvVar4 = FindFirstFileW(param_1,&local_278);
        if (pvVar4 == (HANDLE)0xffffffffffffffff) {
          GetLastError();
          goto LAB_180123976;
        }
        FindClose(pvVar4);
        local_28c = local_278.ftLastWriteTime.dwLowDateTime;
        DStack_288 = local_278.ftLastWriteTime.dwHighDateTime;
      }
      else {
        local_278.ftLastWriteTime.dwHighDateTime = DStack_288;
        local_278.ftLastWriteTime.dwLowDateTime = local_28c;
        local_278.dwFileAttributes = local_2a0[0];
        local_278.nFileSizeLow = local_280;
        local_278.nFileSizeHigh = local_284;
      }
      if (((param_3 & 1) == 0) || (uVar6 = uVar5, (local_278.dwFileAttributes >> 10 & 1) == 0)) {
        *(DWORD *)(param_2 + 2) = local_278.dwFileAttributes;
        uVar6 = uVar5 & 0xffffffd5;
        param_2[1] = CONCAT44(local_278.nFileSizeHigh,local_278.nFileSizeLow);
        *param_2 = (ulonglong)local_278.ftLastWriteTime & 0xffffffff00000000 | (ulonglong)local_28c;
        if (((local_278.dwFileAttributes >> 10 & 1) == 0) && ((uVar6 >> 2 & 1) != 0)) {
          *(int32_t *)((longlong)param_2 + 0x14) = 0;
          uVar6 = uVar5 & 0xffffffd1;
        }
      }
      uVar5 = uVar6;
      if (uVar5 == 0) goto LAB_180123976;
    }
    DVar2 = __std_fs_open_handle
                      ((int32_t *)&local_2a8,param_1,0x80,
                       (((byte)param_3 & 1 ^ 1) + 0x10) * 0x200000);
    if (DVar2 == 0) {
      pvVar4 = (HANDLE)CONCAT44(uStack_2a4,local_2a8);
      uVar6 = uVar5;
      if ((uVar5 & 0x26) != 0) {
        BVar1 = GetFileInformationByHandleEx(pvVar4,FileBasicInfo,local_2a0,0x28);
        if (BVar1 == 0) {
          GetLastError();
          if ((pvVar4 != (HANDLE)0xffffffffffffffff) && (BVar1 = CloseHandle(pvVar4), BVar1 == 0)) {
                    
            abort();
          }
          goto LAB_180123976;
        }
        uVar6 = uVar5 & 0xffffffdd;
        *param_2 = CONCAT44(local_28c,local_290);
        *(uint *)(param_2 + 2) = local_280;
        if ((uVar6 >> 2 & 1) != 0) {
          if ((local_280 >> 10 & 1) == 0) {
            *(int32_t *)((longlong)param_2 + 0x14) = 0;
          }
          else {
            BVar1 = GetFileInformationByHandleEx(pvVar4,FileAttributeTagInfo,&local_2a8,8);
            if (BVar1 == 0) {
              GetLastError();
              if ((pvVar4 != (HANDLE)0xffffffffffffffff) &&
                 (BVar1 = CloseHandle(pvVar4), BVar1 == 0)) {
                    
                abort();
              }
              goto LAB_180123976;
            }
            *(int32_t *)((longlong)param_2 + 0x14) = uStack_2a4;
          }
          uVar6 = uVar5 & 0xffffffd9;
        }
      }
      if ((uVar6 & 0x18) != 0) {
        BVar1 = GetFileInformationByHandleEx(pvVar4,FileStandardInfo,local_2a0,0x18);
        if (BVar1 == 0) {
          GetLastError();
          if ((pvVar4 != (HANDLE)0xffffffffffffffff) && (BVar1 = CloseHandle(pvVar4), BVar1 == 0)) {
                    
            abort();
          }
          goto LAB_180123976;
        }
        uVar6 = uVar6 & 0xffffffe7;
        param_2[1] = local_298;
        *(int32_t *)(param_2 + 3) = local_290;
      }
      if (uVar6 != 0) {
        if ((pvVar4 == (HANDLE)0xffffffffffffffff) || (BVar1 = CloseHandle(pvVar4), BVar1 != 0))
        goto LAB_180123976;
        goto LAB_1801239b7;
      }
      if (pvVar4 == (HANDLE)0xffffffffffffffff) goto LAB_180123976;
      iVar3 = CloseHandle(pvVar4);
    }
    else {
      if ((HANDLE)CONCAT44(uStack_2a4,local_2a8) == (HANDLE)0xffffffffffffffff) goto LAB_180123976;
      iVar3 = CloseHandle((HANDLE)CONCAT44(uStack_2a4,local_2a8));
    }
    if (iVar3 == 0) {
LAB_1801239b7:
                    
      abort();
    }
  }
LAB_180123976:
  FUN_1801252c0(local_28 ^ (ulonglong)auStack_2c8);
  return;
}

// ---- Function: __std_fs_open_handle ----
/* Library Function - Single Match
    __std_fs_open_handle
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

DWORD __std_fs_open_handle(int32_t *param_1,LPCWSTR param_2,DWORD param_3,DWORD param_4)

{
  DWORD DVar1;
  HANDLE pvVar2;
  
  DVar1 = 0;
  pvVar2 = CreateFileW(param_2,param_3,7,(LPSECURITY_ATTRIBUTES)0x0,3,param_4,(HANDLE)0x0);
  *param_1 = pvVar2;
  if (pvVar2 == (HANDLE)0xffffffffffffffff) {
    DVar1 = GetLastError();
  }
  return DVar1;
}

// ---- Function: FUN_180123a28 ----
void FUN_180123a28(LPCWSTR param_1)

{
  bool bVar1;
  BOOL BVar2;
  DWORD DVar3;
  int32_t auStack_78 [32];
  int32_t local_58;
  DWORD DStack_54;
  HANDLE local_50;
  int32_t local_48 [2];
  int32_t local_40 [32];
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_78;
  bVar1 = false;
  DStack_54 = __std_fs_open_handle(&local_50,param_1,0x10180,0x2200000);
  if (DStack_54 == 0) {
    bVar1 = true;
LAB_180123a76:
    local_48[0] = 0x13;
    BVar2 = SetFileInformationByHandle(local_50,0x15,local_48,4);
    if (BVar2 == 0) {
      DStack_54 = GetLastError();
      if (((DStack_54 == 1) || (DStack_54 == 0x32)) || (DStack_54 == 0x57)) {
        DStack_54 = FUN_1801233ac(local_50);
        if (DStack_54 == 0) goto LAB_180123a9c;
        if ((DStack_54 != 5) || (!bVar1)) goto LAB_180123b2f;
        BVar2 = GetFileInformationByHandleEx(local_50,FileBasicInfo,local_40,0x28);
        if (BVar2 == 0) {
LAB_180123b72:
          local_58 = 0;
          DStack_54 = GetLastError();
        }
        else {
          if ((local_20 & 1) != 0) {
            local_20 = local_20 ^ 1;
            BVar2 = SetFileInformationByHandle(local_50,FileBasicInfo,local_40,0x28);
            if (BVar2 != 0) {
              DVar3 = FUN_1801233ac(local_50);
              if (DVar3 == 0) {
                local_58 = 1;
                DStack_54 = 0;
                goto LAB_180123b7b;
              }
              if (DVar3 != 5) {
                local_58 = 0;
                DStack_54 = GetLastError();
                goto joined_r0x000180123ae2;
              }
              local_20 = local_20 | 1;
              BVar2 = SetFileInformationByHandle(local_50,FileBasicInfo,local_40,0x28);
              if (BVar2 != 0) goto LAB_180123bfa;
            }
            goto LAB_180123b72;
          }
LAB_180123bfa:
          local_58 = 0;
          DStack_54 = 5;
        }
LAB_180123b7b:
        if ((local_50 != (HANDLE)0xffffffffffffffff) && (BVar2 = CloseHandle(local_50), BVar2 == 0))
        {
                    
          abort();
        }
        goto LAB_180123af2;
      }
LAB_180123b2f:
      local_58 = 0;
    }
    else {
LAB_180123a9c:
      local_58 = 1;
      DStack_54 = 0;
    }
  }
  else {
    if (DStack_54 == 5) {
      DStack_54 = __std_fs_open_handle(&local_50,param_1,0x10000,0x2200000);
      if (DStack_54 == 0) goto LAB_180123a76;
    }
    else if (((((DStack_54 == 2) || (DStack_54 == 3)) || (DStack_54 == 0x35)) ||
             ((DStack_54 == 0x40 || (DStack_54 == 0x7b)))) || (DStack_54 == 0x10b)) {
      DStack_54 = 0;
    }
    local_58 = 0;
  }
joined_r0x000180123ae2:
  if ((local_50 != (HANDLE)0xffffffffffffffff) && (BVar2 = CloseHandle(local_50), BVar2 == 0)) {
                    
    abort();
  }
LAB_180123af2:
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_78);
  return;
}

// ---- Function: FUN_180123c58 ----
char * FUN_180123c58(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_180157b70;
  do {
    if (*piVar1 == param_1) {
      return *(char **)(piVar1 + 2);
    }
    piVar1 = piVar1 + 4;
  } while (piVar1 != (int *)"success");
  return "unknown error";
}

// ---- Function: FUN_180123c80 ----
int FUN_180123c80(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_1801578d0;
  do {
    if (*piVar1 == param_1) {
      return piVar1[1];
    }
    piVar1 = piVar1 + 2;
  } while (piVar1 != &DAT_180157b70);
  return 0;
}

// ---- Function: FUN_180123ca4 ----
ulonglong FUN_180123ca4(DWORD param_1,longlong *param_2)

{
  int iVar1;
  DWORD DVar2;
  ulonglong uVar3;
  int iVar4;
  byte *pbVar5;
  DWORD local_res18 [2];
  
  local_res18[0] = 0;
  DVar2 = 0;
  iVar4 = 0;
  do {
    if (DVar2 != 0) break;
    if (iVar4 == 0) {
      local_res18[0] = 0x409;
LAB_180123d08:
      DVar2 = FormatMessageA(0x1300,(LPCVOID)0x0,param_1,local_res18[0],(LPSTR)param_2,0,
                             (va_list *)0x0);
    }
    else {
      if (iVar4 != 1) {
        local_res18[0] = 0;
        goto LAB_180123d08;
      }
      iVar1 = GetLocaleInfoEx(L"!x-sys-default-locale",0x20000001,(LPWSTR)local_res18,2);
      if (iVar1 != 0) goto LAB_180123d08;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  uVar3 = (ulonglong)DVar2;
  if (DVar2 != 0) {
    pbVar5 = (byte *)(*param_2 + -1 + uVar3);
    do {
      if ((&DAT_180158730)[*pbVar5] == '\0') {
        return uVar3;
      }
      pbVar5 = pbVar5 + -1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar3;
}

// ---- Function: LocalFree ----
HLOCAL __stdcall LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    
                    
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}

// ---- Function: FUN_180123d80 ----
int32_t (*) [32]
FUN_180123d80(int32_t (*param_1) [32],int32_t (*param_2) [32],byte param_3)

{
  ushort uVar1;
  int32_t auVar2 [32];
  int32_t *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int32_t auVar7 [16];
  int32_t auVar8 [16];
  int32_t auVar9 [32];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (((uVar6 & 0xffffffffffffffe0) == 0) || ((DAT_1801eb0d4 >> 5 & 1) == 0)) {
    if (((uVar6 & 0xfffffffffffffff0) != 0) && ((DAT_1801eb0d4 >> 2 & 1) != 0)) {
      puVar3 = *param_1;
      auVar8 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        auVar7[0] = -((*param_1)[0] == auVar8[0]);
        auVar7[1] = -((*param_1)[1] == auVar8[1]);
        auVar7[2] = -((*param_1)[2] == auVar8[2]);
        auVar7[3] = -((*param_1)[3] == auVar8[3]);
        auVar7[4] = -((*param_1)[4] == auVar8[4]);
        auVar7[5] = -((*param_1)[5] == auVar8[5]);
        auVar7[6] = -((*param_1)[6] == auVar8[6]);
        auVar7[7] = -((*param_1)[7] == auVar8[7]);
        auVar7[8] = -((*param_1)[8] == auVar8[8]);
        auVar7[9] = -((*param_1)[9] == auVar8[9]);
        auVar7[10] = -((*param_1)[10] == auVar8[10]);
        auVar7[0xb] = -((*param_1)[0xb] == auVar8[0xb]);
        auVar7[0xc] = -((*param_1)[0xc] == auVar8[0xc]);
        auVar7[0xd] = -((*param_1)[0xd] == auVar8[0xd]);
        auVar7[0xe] = -((*param_1)[0xe] == auVar8[0xe]);
        auVar7[0xf] = -((*param_1)[0xf] == auVar8[0xf]);
        uVar1 = (ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(auVar7[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          uVar4 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
            }
          }
          return (int32_t (*) [32])(*param_1 + uVar4);
        }
        param_1 = (int32_t (*) [32])(*param_1 + 0x10);
      } while (param_1 != (int32_t (*) [32])(puVar3 + (uVar6 & 0xfffffffffffffff0)));
    }
  }
  else {
    puVar3 = *param_1;
    auVar8 = vpshufb_avx(ZEXT416((uint)(int)(char)param_3),(int32_t  [16])0x0);
    auVar9._16_16_ = auVar8;
    auVar9._0_16_ = auVar8;
    do {
      auVar2 = vpcmpeqb_avx2(auVar9,*param_1);
      uVar4 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar4 != 0) goto LAB_180123e25;
      param_1 = param_1 + 1;
    } while (param_1 != (int32_t (*) [32])(puVar3 + (uVar6 & 0xffffffffffffffe0)));
    uVar5 = (uint)uVar6 & 0x1c;
    if ((uVar6 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(int32_t (*) [32])(&DAT_18015ad70 + -(ulonglong)uVar5),*param_1);
      auVar9 = vpcmpeqb_avx2(auVar2,auVar9);
      auVar9 = vpand_avx2(auVar9,*(int32_t (*) [32])(&DAT_18015ad70 + -(ulonglong)uVar5));
      uVar4 = (uint)(SUB321(auVar9 >> 7,0) & 1) | (uint)(SUB321(auVar9 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar9 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar9 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar9 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar9 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar9 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar9 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar9 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar9 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar9 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar9 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar9 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar9 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar9 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar9 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar9 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar9 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar9 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar9 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar9 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar9 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar9 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar9 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar9 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar9 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar9 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar9 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar9 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar9 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar9 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar9[0x1f] >> 7) << 0x1f
      ;
      if (uVar4 != 0) {
LAB_180123e25:
        uVar5 = 0;
        for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        return (int32_t (*) [32])(*param_1 + uVar5);
      }
      param_1 = (int32_t (*) [32])(*param_1 + uVar5);
    }
  }
  for (; (param_1 != param_2 && ((*param_1)[0] != param_3));
      param_1 = (int32_t (*) [32])(*param_1 + 1)) {
  }
  return param_1;
}

// ---- Function: FUN_180123e90 ----
int32_t (*) [32]
FUN_180123e90(int32_t (*param_1) [32],int32_t (*param_2) [32],uint param_3)

{
  ushort uVar1;
  int32_t auVar2 [32];
  int32_t *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int32_t auVar7 [16];
  int32_t auVar8 [32];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (((uVar6 & 0xffffffffffffffe0) == 0) || ((DAT_1801eb0d4 >> 5 & 1) == 0)) {
    if (((uVar6 & 0xfffffffffffffff0) != 0) && ((DAT_1801eb0d4 >> 2 & 1) != 0)) {
      puVar3 = *param_1;
      do {
        auVar7._0_4_ = -(uint)(*(uint *)*param_1 == param_3);
        auVar7._4_4_ = -(uint)(*(uint *)(*param_1 + 4) == param_3);
        auVar7._8_4_ = -(uint)(*(uint *)(*param_1 + 8) == param_3);
        auVar7._12_4_ = -(uint)(*(uint *)(*param_1 + 0xc) == param_3);
        uVar1 = (ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                (ushort)((byte)(auVar7._12_4_ >> 7) & 1) << 0xc |
                (ushort)((byte)(auVar7._12_4_ >> 0xf) & 1) << 0xd |
                (ushort)((byte)(auVar7._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar7._12_4_ >> 0x1f) << 0xf;
        if (uVar1 != 0) {
          uVar4 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
            }
          }
          return (int32_t (*) [32])(*param_1 + uVar4);
        }
        param_1 = (int32_t (*) [32])(*param_1 + 0x10);
      } while (param_1 != (int32_t (*) [32])(puVar3 + (uVar6 & 0xfffffffffffffff0)));
    }
    for (; (param_1 != param_2 && (*(uint *)*param_1 != param_3));
        param_1 = (int32_t (*) [32])(*param_1 + 4)) {
    }
    return param_1;
  }
  auVar7 = vpshufd_avx(ZEXT416(param_3),0);
  auVar8._16_16_ = auVar7;
  auVar8._0_16_ = auVar7;
  puVar3 = *param_1;
  do {
    auVar2 = vpcmpeqd_avx2(auVar8,*param_1);
    uVar4 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
    if (uVar4 != 0) goto LAB_180123f13;
    param_1 = param_1 + 1;
  } while (param_1 != (int32_t (*) [32])(puVar3 + (uVar6 & 0xffffffffffffffe0)));
  uVar5 = (uint)uVar6 & 0x1c;
  if ((uVar6 & 0x1c) != 0) {
    auVar2 = vpmaskmovd_avx2(*(int32_t (*) [32])(&DAT_18015ad70 + -(ulonglong)uVar5),*param_1);
    auVar8 = vpcmpeqd_avx2(auVar2,auVar8);
    auVar8 = vpand_avx2(auVar8,*(int32_t (*) [32])(&DAT_18015ad70 + -(ulonglong)uVar5));
    uVar4 = (uint)(SUB321(auVar8 >> 7,0) & 1) | (uint)(SUB321(auVar8 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar8 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar8 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar8 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar8 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar8 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar8 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar8 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar8 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar8 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar8 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar8 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar8 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar8 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar8 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar8 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar8 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar8 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar8 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar8 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar8 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar8 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar8 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar8 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar8 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar8 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar8 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar8 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar8 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar8 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar8[0x1f] >> 7) << 0x1f;
    if (uVar4 != 0) {
LAB_180123f13:
      uVar5 = 0;
      for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      return (int32_t (*) [32])(*param_1 + uVar5);
    }
    param_1 = (int32_t (*) [32])(*param_1 + uVar5);
  }
  return param_1;
}

// ---- Function: FUN_180123f80 ----
int32_t (*) [32]
FUN_180123f80(int32_t (*param_1) [32],int32_t (*param_2) [32],ulonglong param_3)

{
  ushort uVar1;
  int32_t *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int32_t auVar6 [16];
  int32_t auVar7 [32];
  int32_t auVar8 [32];
  longlong lVar9;
  int32_t auVar10 [16];
  longlong lVar11;
  
  uVar5 = (longlong)param_2 - (longlong)param_1;
  if (((uVar5 & 0xffffffffffffffe0) == 0) || ((DAT_1801eb0d4 >> 5 & 1) == 0)) {
    if (((uVar5 & 0xfffffffffffffff0) != 0) && ((DAT_1801eb0d4 >> 2 & 1) != 0)) {
      puVar2 = *param_1;
      do {
        auVar6._0_8_ = -(ulonglong)(*(ulonglong *)*param_1 == param_3);
        auVar6._8_8_ = -(ulonglong)(*(ulonglong *)(*param_1 + 8) == param_3);
        uVar1 = (ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                (ushort)((byte)(auVar6._8_8_ >> 7) & 1) << 8 |
                (ushort)((byte)(auVar6._8_8_ >> 0xf) & 1) << 9 |
                (ushort)((byte)(auVar6._8_8_ >> 0x17) & 1) << 10 |
                (ushort)((byte)(auVar6._8_8_ >> 0x1f) & 1) << 0xb |
                (ushort)((byte)(auVar6._8_8_ >> 0x27) & 1) << 0xc |
                (ushort)((byte)(auVar6._8_8_ >> 0x2f) & 1) << 0xd |
                (ushort)((byte)(auVar6._8_8_ >> 0x37) & 1) << 0xe |
                (ushort)(byte)(auVar6._8_8_ >> 0x3f) << 0xf;
        if (uVar1 != 0) {
          uVar3 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          return (int32_t (*) [32])(*param_1 + uVar3);
        }
        param_1 = (int32_t (*) [32])(*param_1 + 0x10);
      } while (param_1 != (int32_t (*) [32])(puVar2 + (uVar5 & 0xfffffffffffffff0)));
    }
    for (; (param_1 != param_2 && (*(ulonglong *)*param_1 != param_3));
        param_1 = (int32_t (*) [32])(*param_1 + 8)) {
    }
    return param_1;
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_3;
  auVar6 = vpunpcklqdq_avx(auVar10,auVar10);
  puVar2 = *param_1;
  do {
    lVar9 = auVar6._0_8_;
    auVar7._0_8_ = -(ulonglong)(lVar9 == *(longlong *)*param_1);
    lVar11 = auVar6._8_8_;
    auVar7._8_8_ = -(ulonglong)(lVar11 == *(longlong *)(*param_1 + 8));
    auVar7._16_8_ = -(ulonglong)(lVar9 == SUB248(*(int32_t (*) [24])*param_1,0x10));
    auVar7._24_8_ = -(ulonglong)(lVar11 == *(longlong *)(*param_1 + 0x18));
    uVar3 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar7 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar7 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar7 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar7 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar7 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar7 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar7 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar7 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar7 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar7 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar7 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar7 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar7 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar7 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar7 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar7 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar7 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar7 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar7 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar7 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar7 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar7 >> 0xbf,0) << 0x17 |
            (uint)((byte)(auVar7._24_8_ >> 7) & 1) << 0x18 |
            (uint)((byte)(auVar7._24_8_ >> 0xf) & 1) << 0x19 |
            (uint)((byte)(auVar7._24_8_ >> 0x17) & 1) << 0x1a |
            (uint)((byte)(auVar7._24_8_ >> 0x1f) & 1) << 0x1b |
            (uint)((byte)(auVar7._24_8_ >> 0x27) & 1) << 0x1c |
            (uint)((byte)(auVar7._24_8_ >> 0x2f) & 1) << 0x1d |
            (uint)((byte)(auVar7._24_8_ >> 0x37) & 1) << 0x1e |
            (uint)(byte)(auVar7._24_8_ >> 0x3f) << 0x1f;
    if (uVar3 != 0) goto LAB_180124004;
    param_1 = param_1 + 1;
  } while (param_1 != (int32_t (*) [32])(puVar2 + (uVar5 & 0xffffffffffffffe0)));
  uVar4 = (uint)uVar5 & 0x1c;
  if ((uVar5 & 0x1c) != 0) {
    auVar7 = vpmaskmovd_avx2(*(int32_t (*) [32])(&DAT_18015ad70 + -(ulonglong)uVar4),*param_1);
    auVar8._0_8_ = -(ulonglong)(auVar7._0_8_ == lVar9);
    auVar8._8_8_ = -(ulonglong)(auVar7._8_8_ == lVar11);
    auVar8._16_8_ = -(ulonglong)(auVar7._16_8_ == lVar9);
    auVar8._24_8_ = -(ulonglong)(auVar7._24_8_ == lVar11);
    auVar7 = vpand_avx2(auVar8,*(int32_t (*) [32])(&DAT_18015ad70 + -(ulonglong)uVar4));
    uVar3 = (uint)(SUB321(auVar7 >> 7,0) & 1) | (uint)(SUB321(auVar7 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar7 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar7 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar7 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar7 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar7 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar7 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar7 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar7 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar7 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar7 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar7 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar7 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar7 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar7 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar7 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar7 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar7 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar7 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar7 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar7 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar7 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar7 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar7 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar7 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar7 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar7 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar7 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar7 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar7 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar7[0x1f] >> 7) << 0x1f;
    if (uVar3 != 0) {
LAB_180124004:
      uVar4 = 0;
      for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      return (int32_t (*) [32])(*param_1 + uVar4);
    }
    param_1 = (int32_t (*) [32])(*param_1 + uVar4);
  }
  return param_1;
}

// ---- Function: FUN_180124070 ----
void FUN_180124070(int32_t (*param_1) [32],int32_t (*param_2) [32],int32_t (*param_3) [16],
                  ulonglong param_4)

{
  int32_t auVar1 [16];
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  int32_t (*pauVar5) [32];
  longlong lVar6;
  int32_t uVar7;
  bool bVar8;
  int32_t auVar9 [16];
  int32_t auStack_78 [32];
  int32_t local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStack_78;
  if (param_4 != 0) {
    if (param_4 == 1) {
      FUN_180123d80(param_1,param_2,(*param_3)[0]);
    }
    else {
      uVar3 = (longlong)param_2 - (longlong)param_1;
      if (param_4 <= uVar3) {
        if (((DAT_1801eb0d4 >> 2 & 1) == 0) || (uVar3 < 0x10)) {
          pauVar5 = (int32_t (*) [32])((longlong)param_1 + uVar3 + (1 - param_4));
          if (param_1 != pauVar5) {
            lVar6 = (longlong)param_3 - (longlong)param_1;
            do {
              if ((*param_1)[0] == (*param_3)[0]) {
                pcVar4 = *param_1 + 1;
                while (*pcVar4 == pcVar4[lVar6]) {
                  pcVar4 = pcVar4 + 1;
                  if ((longlong)pcVar4 - (longlong)param_1 == param_4) goto LAB_1801241f6;
                }
              }
              param_1 = (int32_t (*) [32])(*param_1 + 1);
              lVar6 = lVar6 + -1;
            } while (param_1 != pauVar5);
          }
        }
        else if (param_4 < 0x11) {
          uVar7 = 0x10 < (uint)param_4;
          FUN_180150fd0((int32_t *)local_58,(int32_t *)param_3,param_4);
          auVar1 = local_58;
          do {
            iVar2 = pcmpestri(local_58,*(int32_t (*) [16])*param_1,0xc);
            if ((bool)uVar7) {
              param_1 = (int32_t (*) [32])(*param_1 + iVar2);
              if (iVar2 <= (int)(0x10 - (uint)param_4)) goto LAB_1801241f6;
            }
            else {
              param_1 = (int32_t (*) [32])(*param_1 + 0x10);
            }
            uVar7 = param_1 < (int32_t (*) [32])(param_2[-1] + 0x10);
          } while (param_1 <= (int32_t (*) [32])(param_2[-1] + 0x10));
          if ((longlong)param_2 - (longlong)param_1 != 0) {
            FUN_180150fd0((int32_t *)local_58,(int32_t *)param_1,
                          (longlong)param_2 - (longlong)param_1);
            pcmpestri(auVar1,local_58,0xc);
          }
        }
        else {
          auVar1 = *param_3;
          bVar8 = CARRY8((longlong)param_1 - param_4,uVar3);
          pauVar5 = (int32_t (*) [32])(((longlong)param_1 - param_4) + uVar3);
          do {
            iVar2 = pcmpestri(auVar1,*(int32_t (*) [16])*param_1,0xc);
            if (bVar8) {
              if (iVar2 == 0) {
LAB_1801241c8:
                iVar2 = memcmp(*param_1 + 0x10,param_3 + 1,param_4 - 0x10);
                if (iVar2 == 0) break;
              }
              else {
                param_1 = (int32_t (*) [32])(*param_1 + iVar2);
                if (pauVar5 < param_1) break;
                auVar9._0_4_ = *(uint *)*param_1 ^ auVar1._0_4_;
                auVar9._4_4_ = *(uint *)(*param_1 + 4) ^ auVar1._4_4_;
                auVar9._8_4_ = *(uint *)(*param_1 + 8) ^ auVar1._8_4_;
                auVar9._12_4_ = *(uint *)(*param_1 + 0xc) ^ auVar1._12_4_;
                if (auVar9 == (int32_t  [16])0x0) goto LAB_1801241c8;
              }
              param_1 = (int32_t (*) [32])(*param_1 + 1);
            }
            else {
              param_1 = (int32_t (*) [32])(*param_1 + 0x10);
            }
            bVar8 = param_1 < pauVar5;
          } while (param_1 <= pauVar5);
        }
      }
    }
  }
LAB_1801241f6:
  FUN_1801252c0(local_48 ^ (ulonglong)auStack_78);
  return;
}

// ---- Function: thunk_FUN_180123d80 ----
int32_t (*) [32]
thunk_FUN_180123d80(int32_t (*param_1) [32],int32_t (*param_2) [32],byte param_3)

{
  ushort uVar1;
  int32_t auVar2 [32];
  int32_t *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int32_t auVar7 [16];
  int32_t auVar8 [16];
  int32_t auVar9 [32];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (((uVar6 & 0xffffffffffffffe0) == 0) || ((DAT_1801eb0d4 >> 5 & 1) == 0)) {
    if (((uVar6 & 0xfffffffffffffff0) != 0) && ((DAT_1801eb0d4 >> 2 & 1) != 0)) {
      puVar3 = *param_1;
      auVar8 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        auVar7[0] = -((*param_1)[0] == auVar8[0]);
        auVar7[1] = -((*param_1)[1] == auVar8[1]);
        auVar7[2] = -((*param_1)[2] == auVar8[2]);
        auVar7[3] = -((*param_1)[3] == auVar8[3]);
        auVar7[4] = -((*param_1)[4] == auVar8[4]);
        auVar7[5] = -((*param_1)[5] == auVar8[5]);
        auVar7[6] = -((*param_1)[6] == auVar8[6]);
        auVar7[7] = -((*param_1)[7] == auVar8[7]);
        auVar7[8] = -((*param_1)[8] == auVar8[8]);
        auVar7[9] = -((*param_1)[9] == auVar8[9]);
        auVar7[10] = -((*param_1)[10] == auVar8[10]);
        auVar7[0xb] = -((*param_1)[0xb] == auVar8[0xb]);
        auVar7[0xc] = -((*param_1)[0xc] == auVar8[0xc]);
        auVar7[0xd] = -((*param_1)[0xd] == auVar8[0xd]);
        auVar7[0xe] = -((*param_1)[0xe] == auVar8[0xe]);
        auVar7[0xf] = -((*param_1)[0xf] == auVar8[0xf]);
        uVar1 = (ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(auVar7[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          uVar4 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
            }
          }
          return (int32_t (*) [32])(*param_1 + uVar4);
        }
        param_1 = (int32_t (*) [32])(*param_1 + 0x10);
      } while (param_1 != (int32_t (*) [32])(puVar3 + (uVar6 & 0xfffffffffffffff0)));
    }
  }
  else {
    puVar3 = *param_1;
    auVar8 = vpshufb_avx(ZEXT416((uint)(int)(char)param_3),(int32_t  [16])0x0);
    auVar9._16_16_ = auVar8;
    auVar9._0_16_ = auVar8;
    do {
      auVar2 = vpcmpeqb_avx2(auVar9,*param_1);
      uVar4 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar4 != 0) goto LAB_180123e25;
      param_1 = param_1 + 1;
    } while (param_1 != (int32_t (*) [32])(puVar3 + (uVar6 & 0xffffffffffffffe0)));
    uVar5 = (uint)uVar6 & 0x1c;
    if ((uVar6 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(int32_t (*) [32])(&DAT_18015ad70 + -(ulonglong)uVar5),*param_1);
      auVar9 = vpcmpeqb_avx2(auVar2,auVar9);
      auVar9 = vpand_avx2(auVar9,*(int32_t (*) [32])(&DAT_18015ad70 + -(ulonglong)uVar5));
      uVar4 = (uint)(SUB321(auVar9 >> 7,0) & 1) | (uint)(SUB321(auVar9 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar9 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar9 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar9 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar9 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar9 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar9 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar9 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar9 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar9 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar9 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar9 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar9 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar9 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar9 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar9 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar9 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar9 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar9 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar9 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar9 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar9 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar9 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar9 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar9 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar9 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar9 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar9 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar9 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar9 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar9[0x1f] >> 7) << 0x1f
      ;
      if (uVar4 != 0) {
LAB_180123e25:
        uVar5 = 0;
        for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        return (int32_t (*) [32])(*param_1 + uVar5);
      }
      param_1 = (int32_t (*) [32])(*param_1 + uVar5);
    }
  }
  for (; (param_1 != param_2 && ((*param_1)[0] != param_3));
      param_1 = (int32_t (*) [32])(*param_1 + 1)) {
  }
  return param_1;
}

