#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_180142248 ----
int32_t
FUN_180142248(ulonglong *param_1,LPWSTR param_2,ulonglong param_3,byte *param_4,ulonglong param_5)

{
  int32_t uVar1;
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
  uVar1 = FUN_180141f2c(param_1,param_2,param_3,param_4,param_5,local_48);
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
  return uVar1;
}

// ---- Function: FUN_1801422f0 ----
int32_t
FUN_1801422f0(ulonglong *param_1,byte *param_2,ulonglong param_3,LPCWSTR param_4,ulonglong param_5,
             longlong *param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  int32_t uVar3;
  
  uVar3 = 0;
  if (param_2 == (byte *)0x0) {
    if (param_3 != 0) goto LAB_180142353;
  }
  else {
    if (param_3 == 0) {
LAB_180142353:
      uVar3 = 0x16;
      *(int32_t *)(param_6 + 6) = 1;
      *(int32_t *)((longlong)param_6 + 0x2c) = 0x16;
      goto LAB_180142369;
    }
    *param_2 = 0;
  }
  if (param_1 != (ulonglong *)0x0) {
    *param_1 = 0;
  }
  uVar2 = param_5;
  if (param_3 < param_5) {
    uVar2 = param_3;
  }
  if (0x7fffffff < uVar2) {
    uVar3 = 0x16;
LAB_1801423c4:
    *(int32_t *)((longlong)param_6 + 0x2c) = uVar3;
    *(int32_t *)(param_6 + 6) = 1;
LAB_180142369:
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_6);
    return uVar3;
  }
  lVar1 = FUN_180142404(param_2,param_4,uVar2,param_6);
  if (lVar1 == -1) {
    if (param_2 != (byte *)0x0) {
      *param_2 = 0;
    }
    if ((char)param_6[6] == '\0') {
      return 0;
    }
    return *(int32_t *)((longlong)param_6 + 0x2c);
  }
  uVar2 = lVar1 + 1;
  if (param_2 == (byte *)0x0) goto LAB_1801423df;
  uVar3 = 0;
  if (param_3 < uVar2) {
    if (param_5 != 0xffffffffffffffff) {
      *param_2 = 0;
      uVar3 = 0x22;
      goto LAB_1801423c4;
    }
    uVar3 = 0x50;
    uVar2 = param_3;
  }
  param_2[uVar2 - 1] = 0;
LAB_1801423df:
  if (param_1 == (ulonglong *)0x0) {
    return uVar3;
  }
  *param_1 = uVar2;
  return uVar3;
}

// ---- Function: FUN_180142404 ----
void FUN_180142404(byte *param_1,LPCWSTR param_2,ulonglong param_3,longlong *param_4)

{
  byte bVar1;
  WCHAR WVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  DWORD DVar6;
  LPCWSTR pWVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  WCHAR *pWVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int32_t auStackY_b8 [32];
  BOOL local_78 [2];
  LPCWSTR local_70;
  int local_68 [2];
  byte local_60 [8];
  ulonglong local_58;
  
  local_58 = DAT_1801eb080 ^ (ulonglong)auStackY_b8;
  uVar11 = 0;
  local_78[0] = 0;
  local_70 = param_2;
  if ((param_1 == (byte *)0x0) || (param_3 != 0)) {
    if (param_2 == (LPCWSTR)0x0) {
      *(int32_t *)(param_4 + 6) = 1;
      *(int32_t *)((longlong)param_4 + 0x2c) = 0x16;
      FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    }
    else {
      if ((char)param_4[5] == '\0') {
        FUN_180130ef0(param_4);
      }
      lVar4 = param_4[3];
      uVar3 = *(uint *)(lVar4 + 0xc);
      if (uVar3 == 0xfde9) {
        local_68[0] = 0;
        local_68[1] = 0;
        FUN_18014acc0(param_1,&local_70,param_3,local_68,(longlong)param_4);
      }
      else {
        if (param_1 == (byte *)0x0) {
          if (*(longlong *)(lVar4 + 0x138) == 0) {
            WVar2 = *local_70;
            pWVar10 = local_70;
            while (WVar2 != L'\0') {
              if (0xff < (ushort)WVar2) goto LAB_180142515;
              pWVar10 = pWVar10 + 1;
              WVar2 = *pWVar10;
            }
            goto LAB_180142726;
          }
          iVar5 = FUN_180141208(uVar3,0,local_70,-1,(LPSTR)0x0,0,(LPBOOL)0x0,local_78);
          if ((iVar5 != 0) && (local_78[0] == 0)) goto LAB_180142726;
        }
        else {
          if (*(longlong *)(lVar4 + 0x138) == 0) {
            if (param_3 != 0) {
              do {
                if (0xff < (ushort)*local_70) goto LAB_180142515;
                param_1[uVar11] = (byte)*local_70;
                WVar2 = *local_70;
                local_70 = local_70 + 1;
              } while ((WVar2 != L'\0') && (uVar11 = uVar11 + 1, uVar11 < param_3));
            }
            goto LAB_180142726;
          }
          if (*(int *)(lVar4 + 8) == 1) {
            pWVar7 = local_70;
            uVar11 = param_3;
            if (param_3 != 0) {
              do {
                if (*pWVar7 == L'\0') {
                  param_3 = ((longlong)pWVar7 - (longlong)local_70 >> 1) + 1;
                  break;
                }
                uVar11 = uVar11 - 1;
                pWVar7 = pWVar7 + 1;
              } while (uVar11 != 0);
            }
            iVar5 = FUN_180141208(uVar3,0,local_70,(int)param_3,(LPSTR)param_1,(int)param_3,
                                  (LPBOOL)0x0,local_78);
            if ((iVar5 == 0) || (local_78[0] != 0)) {
LAB_180142515:
              *(int32_t *)(param_4 + 6) = 1;
              *(int32_t *)((longlong)param_4 + 0x2c) = 0x2a;
            }
            goto LAB_180142726;
          }
          iVar5 = FUN_180141208(uVar3,0,local_70,-1,(LPSTR)param_1,(int)param_3,(LPBOOL)0x0,local_78
                               );
          uVar12 = (ulonglong)iVar5;
          if (local_78[0] == 0) {
            if (iVar5 != 0) goto LAB_180142726;
            DVar6 = GetLastError();
            if (DVar6 == 0x7a) {
              if (param_3 != 0) {
                do {
                  iVar5 = *(int *)(param_4[3] + 8);
                  if (5 < iVar5) {
                    iVar5 = 5;
                  }
                  iVar5 = FUN_180141208(*(uint *)(param_4[3] + 0xc),0,local_70,1,(LPSTR)local_60,
                                        iVar5,(LPBOOL)0x0,local_78);
                  if ((((iVar5 == 0) || (local_78[0] != 0)) || (iVar5 < 0)) ||
                     (uVar9 = (ulonglong)iVar5, 5 < uVar9)) goto LAB_180142718;
                  if (param_3 < uVar9 + uVar12) break;
                  uVar8 = uVar11;
                  if (0 < (longlong)uVar9) {
                    do {
                      bVar1 = local_60[uVar8];
                      param_1[uVar12] = bVar1;
                      if (bVar1 == 0) goto LAB_180142726;
                      uVar8 = uVar8 + 1;
                      uVar12 = uVar12 + 1;
                    } while ((longlong)uVar8 < (longlong)uVar9);
                  }
                  local_70 = local_70 + 1;
                } while (uVar12 < param_3);
              }
              goto LAB_180142726;
            }
          }
        }
LAB_180142718:
        *(int32_t *)((longlong)param_4 + 0x2c) = 0x2a;
        *(int32_t *)(param_4 + 6) = 1;
      }
    }
  }
LAB_180142726:
  FUN_1801252c0(local_58 ^ (ulonglong)auStackY_b8);
  return;
}

// ---- Function: FUN_180142744 ----
int32_t
FUN_180142744(ulonglong *param_1,byte *param_2,ulonglong param_3,LPCWSTR param_4,ulonglong param_5,
             int32_t *param_6)

{
  int32_t uVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  longlong local_48 [2];
  int32_t local_38;
  int32_t local_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  char local_20;
  int32_t local_1c;
  char local_18;
  int32_t local_14;
  char local_10;
  
  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (param_6 == (int32_t *)0x0) {
    uVar1 = PTR_PTR_1801eb448._0_4_;
    uVar3 = PTR_PTR_1801eb448._4_4_;
    uVar4 = PTR_DAT_1801eb450._0_4_;
    uVar5 = PTR_DAT_1801eb450._4_4_;
    if (DAT_1801ee158 != 0) goto LAB_180142792;
  }
  else {
    uVar1 = *param_6;
    uVar3 = param_6[1];
    uVar4 = param_6[2];
    uVar5 = param_6[3];
  }
  local_20 = '\x01';
  local_30 = uVar1;
  uStack_2c = uVar3;
  uStack_28 = uVar4;
  uStack_24 = uVar5;
LAB_180142792:
  uVar1 = FUN_1801422f0(param_1,param_2,param_3,param_4,param_5,local_48);
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
  return uVar1;
}

// ---- Function: _realloc_base ----
/* Library Function - Single Match
    _realloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _realloc_base(LPVOID param_1,ulonglong param_2)

{
  int iVar1;
  LPVOID pvVar2;
  ulong *puVar3;
  int32_t *puVar4;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar2 = _malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_18013bf3c(param_1);
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          pvVar2 = HeapReAlloc(DAT_1801ee8a8,0,param_1,param_2);
          if (pvVar2 != (LPVOID)0x0) {
            return pvVar2;
          }
          iVar1 = FUN_180147668();
        } while ((iVar1 != 0) && (puVar4 = FUN_180136d74(param_2), (int)puVar4 != 0));
      }
      puVar3 = __doserrno();
      *puVar3 = 0xc;
    }
    pvVar2 = (LPVOID)0x0;
  }
  return pvVar2;
}

// ---- Function: FUN_180142878 ----
uint FUN_180142878(void)

{
  return *(uint *)(*(longlong *)((longlong)Self + 0x60) + 0xbc) >> 8 & 0xffffff01;
}

// ---- Function: FUN_180142894 ----
uint FUN_180142894(void)

{
  return *(uint *)(*(longlong *)(*(longlong *)((longlong)Self + 0x60) + 0x20) + 8) >> 0x1f;
}

// ---- Function: FUN_1801428ac ----
bool FUN_1801428ac(void)

{
  uint uVar1;
  int local_res8 [8];
  
  local_res8[0] = 0;
  uVar1 = FUN_180142894();
  if ((char)uVar1 == '\0') {
    FUN_18013a628(local_res8);
  }
  return local_res8[0] != 1;
}

// ---- Function: FUN_1801428f0 ----
uint FUN_1801428f0(LPCWSTR param_1,longlong param_2,int32_t param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  LPVOID pvVar4;
  ulong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_1 == (LPCWSTR)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_18013bf3c(*(LPVOID *)(param_2 + 0x10));
      *(int32_t *)(param_2 + 0x28) = 0;
    }
    *(int32_t *)(param_2 + 0x10) = 0;
    *(int32_t *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != L'\0') {
      iVar2 = FUN_180141208(param_4,0,param_1,-1,(LPSTR)0x0,0,(LPBOOL)0x0,(LPBOOL)0x0);
      uVar7 = (ulonglong)iVar2;
      if (iVar2 != 0) {
        uVar6 = *(ulonglong *)(param_2 + 0x18);
        if (uVar6 < uVar7) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_18013bf3c(*(LPVOID *)(param_2 + 0x10));
            *(int32_t *)(param_2 + 0x28) = 0;
          }
          pvVar4 = _malloc_base(uVar7);
          *(LPVOID *)(param_2 + 0x10) = pvVar4;
          uVar1 = ~-(uint)(pvVar4 != (LPVOID)0x0) & 0xc;
          uVar6 = 0;
          if (uVar1 == 0) {
            uVar6 = uVar7;
          }
          *(bool *)(param_2 + 0x28) = uVar1 == 0;
          *(ulonglong *)(param_2 + 0x18) = uVar6;
          if (uVar1 != 0) {
            return uVar1;
          }
        }
        iVar2 = FUN_180141208(param_4,0,param_1,-1,*(LPSTR *)(param_2 + 0x10),(int)uVar6,(LPBOOL)0x0
                              ,(LPBOOL)0x0);
        if ((longlong)iVar2 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar2 + -1;
          return 0;
        }
      }
      DVar3 = GetLastError();
      FUN_1801312a8(DVar3);
      puVar5 = __doserrno();
      return *puVar5;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_18013bf3c(*(LPVOID *)(param_2 + 0x10));
        *(int32_t *)(param_2 + 0x28) = 0;
      }
      pvVar4 = _malloc_base(1);
      *(LPVOID *)(param_2 + 0x10) = pvVar4;
      uVar1 = ~-(uint)(pvVar4 != (LPVOID)0x0) & 0xc;
      *(bool *)(param_2 + 0x28) = uVar1 == 0;
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)(uVar1 == 0);
      if (uVar1 != 0) {
        return uVar1;
      }
    }
    **(int32_t **)(param_2 + 0x10) = 0;
  }
  *(int32_t *)(param_2 + 0x20) = 0;
  return 0;
}

// ---- Function: FUN_180142a7c ----
ulonglong FUN_180142a7c(int32_t *param_1,int32_t *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  byte *pbVar4;
  ulonglong uVar5;
  LPVOID pvVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  char *pcVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong local_res10;
  ulonglong local_res18;
  char *local_res20;
  longlong *local_58;
  longlong *plStack_50;
  int32_t local_48;
  
  if (param_2 == (int32_t *)0x0) {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_18012b794();
    uVar11 = 0x16;
  }
  else {
    *param_2 = 0;
    pbVar4 = (byte *)*param_1;
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    local_48 = 0;
    while (plVar8 = plStack_50, plVar9 = local_58, pbVar4 != (byte *)0x0) {
      local_res10 = CONCAT53(local_res10._3_5_,0x3f2a);
      pbVar4 = FUN_18014b2d0(pbVar4,(byte *)&local_res10);
      if (pbVar4 == (byte *)0x0) {
        uVar5 = FUN_180142cc0((longlong)*param_1,0,0,(longlong *)&local_58);
        plVar9 = local_58;
        uVar11 = uVar5 & 0xffffffff;
        if ((int)uVar5 != 0) {
          plVar8 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_18013bf3c((LPVOID)*plVar8);
              plVar8 = plVar8 + 1;
            } while (plVar8 != plStack_50);
          }
          goto LAB_180142bf3;
        }
      }
      else {
        uVar1 = FUN_180142e44((byte *)*param_1,pbVar4,(longlong *)&local_58);
        plVar9 = local_58;
        uVar11 = (ulonglong)uVar1;
        if (uVar1 != 0) {
          plVar8 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_18013bf3c((LPVOID)*plVar8);
              plVar8 = plVar8 + 1;
            } while (plVar8 != plStack_50);
          }
          goto LAB_180142bf3;
        }
      }
      param_1 = param_1 + 1;
      pbVar4 = (byte *)*param_1;
    }
    uVar11 = ((longlong)plStack_50 - (longlong)local_58 >> 3) + 1;
    local_res18 = 0;
    for (plVar12 = local_58; plVar12 != plStack_50; plVar12 = plVar12 + 1) {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (*(char *)(*plVar12 + lVar7) != '\0');
      local_res18 = local_res18 + 1 + lVar7;
    }
    pvVar6 = __acrt_allocate_buffer_for_argv(uVar11,local_res18,1);
    if (pvVar6 == (LPVOID)0x0) {
      FUN_18013bf3c((LPVOID)0x0);
      for (plVar12 = plVar9; plVar12 != plVar8; plVar12 = plVar12 + 1) {
        FUN_18013bf3c((LPVOID)*plVar12);
      }
      uVar11 = 0xffffffff;
LAB_180142bf3:
      FUN_18013bf3c(plVar9);
    }
    else {
      pcVar10 = (char *)((longlong)pvVar6 + uVar11 * 8);
      local_res20 = pcVar10;
      if (plVar9 != plVar8) {
        local_res10 = (longlong)pvVar6 - (longlong)plVar9;
        plVar12 = plVar9;
        do {
          lVar7 = -1;
          do {
            lVar13 = lVar7;
            lVar7 = lVar13 + 1;
          } while (*(char *)(*plVar12 + lVar7) != '\0');
          lVar13 = lVar13 + 2;
          uVar2 = FUN_18014abd0(pcVar10,(longlong)(local_res20 + (local_res18 - (longlong)pcVar10)),
                                *plVar12,lVar13);
          if (uVar2 != 0) {
                    
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(char **)(local_res10 + (longlong)plVar12) = pcVar10;
          pcVar10 = pcVar10 + lVar13;
          plVar12 = plVar12 + 1;
        } while (plVar12 != plVar8);
      }
      *param_2 = pvVar6;
      FUN_18013bf3c((LPVOID)0x0);
      for (plVar12 = plVar9; plVar12 != plVar8; plVar12 = plVar12 + 1) {
        FUN_18013bf3c((LPVOID)*plVar12);
      }
      FUN_18013bf3c(plVar9);
      uVar11 = 0;
    }
  }
  return uVar11;
}

// ---- Function: FUN_180142cc0 ----
int32_t FUN_180142cc0(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  ulong uVar1;
  char *pcVar2;
  LPVOID pvVar3;
  longlong lVar4;
  ulonglong uVar6;
  int32_t uVar7;
  ulonglong uVar8;
  longlong lVar5;
  
  uVar7 = 0;
  lVar4 = -1;
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (*(char *)(param_1 + lVar4) != '\0');
  uVar6 = lVar5 + 2;
  if (~param_3 < uVar6) {
    return 0xc;
  }
  uVar8 = param_3 + 1 + uVar6;
  pcVar2 = (char *)_calloc_base(uVar8,1);
  if (((param_3 != 0) && (uVar1 = FUN_18014abd0(pcVar2,uVar8,param_2,param_3), uVar1 != 0)) ||
     (uVar1 = FUN_18014abd0(pcVar2 + param_3,uVar8 - param_3,param_1,uVar6), uVar1 != 0)) {
                    
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_4[1] == param_4[2]) {
    if (*param_4 == 0) {
      pvVar3 = _calloc_base(4,8);
      *param_4 = (longlong)pvVar3;
      FUN_18013bf3c((LPVOID)0x0);
      lVar4 = *param_4;
      if (lVar4 != 0) {
        param_4[1] = lVar4;
        param_4[2] = lVar4 + 0x20;
        goto LAB_180142e16;
      }
    }
    else {
      uVar6 = param_4[2] - *param_4 >> 3;
      if (uVar6 < 0x8000000000000000) {
        pvVar3 = _recalloc_base((LPVOID)*param_4,uVar6 * 2,8);
        if (pvVar3 != (LPVOID)0x0) {
          *param_4 = (longlong)pvVar3;
          param_4[1] = (longlong)((longlong)pvVar3 + uVar6 * 8);
          param_4[2] = (longlong)((longlong)pvVar3 + uVar6 * 0x10);
          FUN_18013bf3c((LPVOID)0x0);
          goto LAB_180142e16;
        }
        FUN_18013bf3c((LPVOID)0x0);
      }
    }
    uVar7 = 0xc;
    FUN_18013bf3c(pcVar2);
  }
  else {
LAB_180142e16:
    *(char **)param_4[1] = pcVar2;
    param_4[1] = param_4[1] + 8;
  }
  FUN_18013bf3c((LPVOID)0x0);
  return uVar7;
}

// ---- Function: FUN_180142e44 ----
void FUN_180142e44(byte *param_1,byte *param_2,longlong *param_3)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  BOOL BVar4;
  HANDLE hFindFile;
  int32_t uVar5;
  LPCWSTR lpFileName;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  UINT UVar10;
  ulonglong uVar11;
  int32_t auStackY_378 [32];
  int32_t local_348 [8];
  ulonglong local_340;
  int32_t local_338;
  int32_t local_330;
  LPCWSTR local_328;
  int32_t local_320;
  int32_t local_318;
  char local_310;
  longlong local_308;
  longlong local_300;
  char local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  char local_2d0;
  int32_t local_2c8;
  int32_t local_2c0;
  char *local_2b8;
  int32_t local_2b0;
  int32_t local_2a8;
  char local_2a0;
  _WIN32_FIND_DATAW local_298;
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_378;
  if (param_2 != param_1) {
    do {
      if (((byte)(*param_2 - 0x2f) < 0x2e) &&
         ((0x200000000801U >> ((longlong)(char)(*param_2 - 0x2f) & 0x3fU) & 1) != 0)) break;
      param_2 = FUN_18014b698(param_1,param_2);
    } while (param_2 != param_1);
  }
  if ((*param_2 == 0x3a) && (param_2 != param_1 + 1)) {
    FUN_180142cc0((longlong)param_1,0,0,param_3);
  }
  else {
    bVar9 = *param_2 - 0x2f;
    UVar10 = 0;
    if ((0x2d < bVar9) || (bVar1 = 1, (0x200000000801U >> ((longlong)(char)bVar9 & 0x3fU) & 1) == 0)
       ) {
      bVar1 = 0;
    }
    local_338 = 0;
    local_330 = 0;
    local_328 = (LPCWSTR)0x0;
    local_320 = 0;
    local_318 = 0;
    uVar11 = -(ulonglong)bVar1 & (ulonglong)(param_2 + (1 - (longlong)param_1));
    local_310 = '\0';
    local_340 = uVar11;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_308,(__crt_locale_pointers *)0x0);
    if (*(int *)(local_300 + 0xc) == 0xfde9) {
      if (local_2f0 != '\0') {
        *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
      }
      UVar10 = 0xfde9;
    }
    else {
      uVar5 = FUN_18013a680();
      if ((int)uVar5 == 0) {
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
        UVar10 = 1;
      }
      else if (local_2f0 != '\0') {
        *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
      }
    }
    uVar3 = FUN_180135a24((LPCSTR)param_1,(longlong)&local_338,local_348,UVar10);
    lpFileName = local_328;
    if (uVar3 != 0) {
      lpFileName = (LPCWSTR)0x0;
    }
    hFindFile = FindFirstFileExW(lpFileName,FindExInfoStandard,&local_298,FindExSearchNameMatch,
                                 (LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffffffffffff) {
      FUN_180142cc0((longlong)param_1,0,0,param_3);
      if (local_310 != '\0') {
        FUN_18013bf3c(local_328);
      }
    }
    else {
      lVar8 = param_3[1] - *param_3 >> 3;
      do {
        local_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        local_2b0 = 0;
        local_2a8 = 0;
        local_2a0 = '\0';
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_2e8,(__crt_locale_pointers *)0x0);
        uVar3 = 0xfde9;
        if (*(int *)(local_2e0 + 0xc) == 0xfde9) {
          if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
        }
        else {
          uVar5 = FUN_18013a680();
          if ((int)uVar5 == 0) {
            if (local_2d0 != '\0') {
              *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
            }
            uVar3 = 1;
          }
          else {
            if (local_2d0 != '\0') {
              *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
            }
            uVar3 = 0;
          }
        }
        uVar3 = FUN_1801428f0(local_298.cFileName,(longlong)&local_2c8,local_348,uVar3);
        pcVar2 = local_2b8;
        pcVar6 = local_2b8;
        if (uVar3 != 0) {
          pcVar6 = (char *)0x0;
        }
        if ((*pcVar6 == '.') && ((pcVar6[1] == '\0' || ((pcVar6[1] == '.' && (pcVar6[2] == '\0')))))
           ) {
          if (local_2a0 != '\0') {
            FUN_18013bf3c(local_2b8);
          }
        }
        else {
          uVar5 = FUN_180142cc0((longlong)pcVar6,(longlong)param_1,uVar11,param_3);
          if ((int)uVar5 != 0) {
            if (local_2a0 != '\0') {
              FUN_18013bf3c(pcVar2);
            }
            FindClose(hFindFile);
            if (local_310 != '\0') {
              FUN_18013bf3c(local_328);
            }
            goto LAB_180143170;
          }
          uVar11 = local_340;
          if (local_2a0 != (char)uVar5) {
            FUN_18013bf3c(pcVar2);
            uVar11 = local_340;
          }
        }
        BVar4 = FindNextFileW(hFindFile,&local_298);
      } while (BVar4 != 0);
      lVar7 = param_3[1] - *param_3 >> 3;
      if (lVar8 != lVar7) {
        FUN_18014ae20((int32_t *)(*param_3 + lVar8 * 8),lVar7 - lVar8,8,&LAB_1801428dc);
      }
      FindClose(hFindFile);
      if (local_310 != '\0') {
        FUN_18013bf3c(local_328);
      }
    }
  }
LAB_180143170:
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_378);
  return;
}

// ---- Function: thunk_FUN_180142a7c ----
ulonglong thunk_FUN_180142a7c(int32_t *param_1,int32_t *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  byte *pbVar4;
  ulonglong uVar5;
  LPVOID pvVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  char *pcVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lStackX_10;
  ulonglong uStackX_18;
  char *pcStackX_20;
  longlong *plStack_58;
  longlong *plStack_50;
  int32_t uStack_48;
  
  if (param_2 == (int32_t *)0x0) {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_18012b794();
    uVar11 = 0x16;
  }
  else {
    *param_2 = 0;
    pbVar4 = (byte *)*param_1;
    plStack_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    uStack_48 = 0;
    while (plVar8 = plStack_50, plVar9 = plStack_58, pbVar4 != (byte *)0x0) {
      lStackX_10 = CONCAT53(lStackX_10._3_5_,0x3f2a);
      pbVar4 = FUN_18014b2d0(pbVar4,(byte *)&lStackX_10);
      if (pbVar4 == (byte *)0x0) {
        uVar5 = FUN_180142cc0((longlong)*param_1,0,0,(longlong *)&plStack_58);
        plVar9 = plStack_58;
        uVar11 = uVar5 & 0xffffffff;
        if ((int)uVar5 != 0) {
          plVar8 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_18013bf3c((LPVOID)*plVar8);
              plVar8 = plVar8 + 1;
            } while (plVar8 != plStack_50);
          }
          goto LAB_180142bf3;
        }
      }
      else {
        uVar1 = FUN_180142e44((byte *)*param_1,pbVar4,(longlong *)&plStack_58);
        plVar9 = plStack_58;
        uVar11 = (ulonglong)uVar1;
        if (uVar1 != 0) {
          plVar8 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_18013bf3c((LPVOID)*plVar8);
              plVar8 = plVar8 + 1;
            } while (plVar8 != plStack_50);
          }
          goto LAB_180142bf3;
        }
      }
      param_1 = param_1 + 1;
      pbVar4 = (byte *)*param_1;
    }
    uVar11 = ((longlong)plStack_50 - (longlong)plStack_58 >> 3) + 1;
    uStackX_18 = 0;
    for (plVar12 = plStack_58; plVar12 != plStack_50; plVar12 = plVar12 + 1) {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (*(char *)(*plVar12 + lVar7) != '\0');
      uStackX_18 = uStackX_18 + 1 + lVar7;
    }
    pvVar6 = __acrt_allocate_buffer_for_argv(uVar11,uStackX_18,1);
    if (pvVar6 == (LPVOID)0x0) {
      FUN_18013bf3c((LPVOID)0x0);
      for (plVar12 = plVar9; plVar12 != plVar8; plVar12 = plVar12 + 1) {
        FUN_18013bf3c((LPVOID)*plVar12);
      }
      uVar11 = 0xffffffff;
LAB_180142bf3:
      FUN_18013bf3c(plVar9);
    }
    else {
      pcVar10 = (char *)((longlong)pvVar6 + uVar11 * 8);
      pcStackX_20 = pcVar10;
      if (plVar9 != plVar8) {
        lStackX_10 = (longlong)pvVar6 - (longlong)plVar9;
        plVar12 = plVar9;
        do {
          lVar7 = -1;
          do {
            lVar13 = lVar7;
            lVar7 = lVar13 + 1;
          } while (*(char *)(*plVar12 + lVar7) != '\0');
          lVar13 = lVar13 + 2;
          uVar2 = FUN_18014abd0(pcVar10,(longlong)(pcStackX_20 + (uStackX_18 - (longlong)pcVar10)),
                                *plVar12,lVar13);
          if (uVar2 != 0) {
                    
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(char **)(lStackX_10 + (longlong)plVar12) = pcVar10;
          pcVar10 = pcVar10 + lVar13;
          plVar12 = plVar12 + 1;
        } while (plVar12 != plVar8);
      }
      *param_2 = pvVar6;
      FUN_18013bf3c((LPVOID)0x0);
      for (plVar12 = plVar9; plVar12 != plVar8; plVar12 = plVar12 + 1) {
        FUN_18013bf3c((LPVOID)*plVar12);
      }
      FUN_18013bf3c(plVar9);
      uVar11 = 0;
    }
  }
  return uVar11;
}

// ---- Function: FUN_18014319c ----
void FUN_18014319c(HMODULE param_1,int32_t param_2,ulonglong param_3)

{
  DWORD DVar1;
  int32_t uVar2;
  uint uVar3;
  int32_t auStack_2a8 [32];
  int32_t local_288 [8];
  longlong local_280;
  longlong local_278;
  char local_268;
  int32_t local_260;
  ulonglong local_258;
  int32_t local_250;
  ulonglong local_248;
  int32_t local_240;
  int32_t local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_2a8;
  DVar1 = GetModuleFileNameW(param_1,local_228,0x105);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    FUN_1801312a8(DVar1);
  }
  else {
    local_240 = 0;
    local_238 = 0;
    local_260 = param_2;
    local_258 = param_3 & 0xffffffff;
    local_250 = param_2;
    local_248 = param_3 & 0xffffffff;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_280,(__crt_locale_pointers *)0x0);
    uVar3 = 0xfde9;
    if (*(int *)(local_278 + 0xc) == 0xfde9) {
      if (local_268 != '\0') {
        *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      uVar2 = FUN_18013a680();
      if ((int)uVar2 == 0) {
        if (local_268 != (char)uVar2) {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 1;
      }
      else {
        if (local_268 != '\0') {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 0;
      }
    }
    FUN_180135ba0(local_228,(longlong)&local_260,local_288,uVar3);
  }
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_2a8);
  return;
}

// ---- Function: FUN_1801432c0 ----
void FUN_1801432c0(int32_t param_1,int *param_2,int32_t *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int32_t uVar3;
  int32_t *puVar4;
  ulong *puVar5;
  int32_t (*pauVar6) [32];
  int32_t (*pauVar7) [32];
  longlong lVar8;
  
  __acrt_lock(*param_2);
  puVar4 = (int32_t *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x18);
  if (DAT_1801ee858 == (int32_t (*) [32])0x0) {
LAB_180143373:
    puVar5 = __doserrno();
    *puVar5 = 0x16;
    FUN_18012b794();
  }
  else {
    if (puVar4 == (int32_t *)0x0) {
      FUN_180151670(DAT_1801ee858,0,0x101);
      goto LAB_180143373;
    }
    lVar8 = 2;
    pauVar7 = DAT_1801ee858;
    do {
      uVar3 = puVar4[1];
      *(int32_t *)*pauVar7 = *puVar4;
      *(int32_t *)(*pauVar7 + 8) = uVar3;
      uVar3 = puVar4[3];
      *(int32_t *)(*pauVar7 + 0x10) = puVar4[2];
      *(int32_t *)(*pauVar7 + 0x18) = uVar3;
      uVar3 = puVar4[5];
      *(int32_t *)pauVar7[1] = puVar4[4];
      *(int32_t *)(pauVar7[1] + 8) = uVar3;
      uVar3 = puVar4[7];
      *(int32_t *)(pauVar7[1] + 0x10) = puVar4[6];
      *(int32_t *)(pauVar7[1] + 0x18) = uVar3;
      uVar3 = puVar4[9];
      *(int32_t *)pauVar7[2] = puVar4[8];
      *(int32_t *)(pauVar7[2] + 8) = uVar3;
      uVar3 = puVar4[0xb];
      *(int32_t *)(pauVar7[2] + 0x10) = puVar4[10];
      *(int32_t *)(pauVar7[2] + 0x18) = uVar3;
      uVar3 = puVar4[0xd];
      *(int32_t *)pauVar7[3] = puVar4[0xc];
      *(int32_t *)(pauVar7[3] + 8) = uVar3;
      pauVar6 = pauVar7 + 4;
      uVar3 = puVar4[0xf];
      *(int32_t *)(pauVar7[3] + 0x10) = puVar4[0xe];
      *(int32_t *)(pauVar7[3] + 0x18) = uVar3;
      puVar4 = puVar4 + 0x10;
      lVar8 = lVar8 + -1;
      pauVar7 = pauVar6;
    } while (lVar8 != 0);
    (*pauVar6)[0] = *(int32_t *)puVar4;
  }
  lVar8 = 2;
  puVar4 = (int32_t *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x119);
  if (DAT_1801ee860 != (int32_t (*) [32])0x0) {
    pauVar7 = DAT_1801ee860;
    if (puVar4 != (int32_t *)0x0) {
      do {
        uVar3 = puVar4[1];
        *(int32_t *)*pauVar7 = *puVar4;
        *(int32_t *)(*pauVar7 + 8) = uVar3;
        uVar3 = puVar4[3];
        *(int32_t *)(*pauVar7 + 0x10) = puVar4[2];
        *(int32_t *)(*pauVar7 + 0x18) = uVar3;
        uVar3 = puVar4[5];
        *(int32_t *)pauVar7[1] = puVar4[4];
        *(int32_t *)(pauVar7[1] + 8) = uVar3;
        uVar3 = puVar4[7];
        *(int32_t *)(pauVar7[1] + 0x10) = puVar4[6];
        *(int32_t *)(pauVar7[1] + 0x18) = uVar3;
        uVar3 = puVar4[9];
        *(int32_t *)pauVar7[2] = puVar4[8];
        *(int32_t *)(pauVar7[2] + 8) = uVar3;
        uVar3 = puVar4[0xb];
        *(int32_t *)(pauVar7[2] + 0x10) = puVar4[10];
        *(int32_t *)(pauVar7[2] + 0x18) = uVar3;
        uVar3 = puVar4[0xd];
        *(int32_t *)pauVar7[3] = puVar4[0xc];
        *(int32_t *)(pauVar7[3] + 8) = uVar3;
        uVar3 = puVar4[0xf];
        *(int32_t *)(pauVar7[3] + 0x10) = puVar4[0xe];
        *(int32_t *)(pauVar7[3] + 0x18) = uVar3;
        puVar4 = puVar4 + 0x10;
        lVar8 = lVar8 + -1;
        pauVar7 = pauVar7 + 4;
      } while (lVar8 != 0);
      goto LAB_180143424;
    }
    FUN_180151670(DAT_1801ee860,0,0x100);
  }
  puVar5 = __doserrno();
  *puVar5 = 0x16;
  FUN_18012b794();
LAB_180143424:
  piVar2 = (int *)**(int32_t **)param_3[1];
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if ((iVar1 == 1) && ((int32_t *)**(int32_t **)param_3[1] != &DAT_1801eb780)) {
    FUN_18013bf3c((LPVOID)**(int32_t **)param_3[1]);
  }
  **(int32_t **)param_3[1] = *(int32_t *)(*(longlong *)*param_3 + 0x88);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}

// ---- Function: getSystemCP ----
/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl getSystemCP(int param_1)

{
  longlong local_28;
  longlong local_20;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
  DAT_1801ee870 = 0;
  if (param_1 == -2) {
    DAT_1801ee870 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == -3) {
    DAT_1801ee870 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == -4) {
    DAT_1801ee870 = 1;
    param_1 = *(UINT *)(local_20 + 0xc);
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return param_1;
}

// ---- Function: FUN_180143510 ----
void FUN_180143510(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int32_t *puVar3;
  longlong lVar4;
  
  FUN_180151670((int32_t (*) [32])(param_1 + 0x18),0,0x101);
  lVar2 = 0;
  *(int32_t *)(param_1 + 4) = 0;
  *(int32_t *)(param_1 + 0x220) = 0;
  puVar3 = (int32_t *)(param_1 + 0xc);
  for (lVar1 = 6; lVar4 = lVar2, lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  do {
    lVar1 = lVar4 + 1;
    *(int32_t *)(param_1 + lVar4 + 0x18) = (&DAT_1801eb798)[lVar4];
    lVar4 = lVar1;
  } while (lVar1 < 0x101);
  do {
    lVar1 = lVar2 + 1;
    *(int32_t *)(param_1 + lVar2 + 0x119) = (&DAT_1801eb899)[lVar2];
    lVar2 = lVar1;
  } while (lVar1 < 0x100);
  return;
}

