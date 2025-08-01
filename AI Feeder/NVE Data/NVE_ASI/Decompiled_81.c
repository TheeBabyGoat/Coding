#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_18013ffe0 ----
int32_t
FUN_18013ffe0(int32_t *param_1,int32_t param_2,int param_3,int *param_4,char param_5,
             longlong *param_6)

{
  int32_t (*pauVar1) [32];
  bool bVar2;
  int iVar3;
  int32_t *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_5 != '\0') && (param_4[1] + -1 == param_3)) {
    *(int32_t *)((longlong)param_1 + (longlong)param_4[1] + -1 + (ulonglong)(*param_4 == 0x2d)) =
         0x30;
  }
  if (*param_4 == 0x2d) {
    *(int32_t *)param_1 = 0x2d;
    param_1 = (int32_t *)((longlong)param_1 + 1);
  }
  iVar3 = param_4[1];
  if (iVar3 < 1) {
    if ((iVar3 == 0) && (**(char **)(param_4 + 2) == '0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((param_5 == '\0') || (!bVar2)) {
      lVar6 = -1;
      do {
        lVar5 = lVar6;
        lVar6 = lVar5 + 1;
      } while (*(char *)((longlong)param_1 + lVar6) != '\0');
      FUN_180150fd0((int32_t *)((longlong)param_1 + 1),param_1,lVar5 + 2);
    }
    puVar4 = (int32_t *)((longlong)param_1 + 1);
    *(int32_t *)param_1 = 0x30;
  }
  else {
    puVar4 = (int32_t *)((longlong)param_1 + (longlong)iVar3);
  }
  if (0 < param_3) {
    pauVar1 = (int32_t (*) [32])((longlong)puVar4 + 1);
    lVar6 = -1;
    do {
      lVar5 = lVar6;
      lVar6 = lVar5 + 1;
    } while (*(char *)((longlong)puVar4 + lVar6) != '\0');
    FUN_180150fd0((int32_t *)pauVar1,puVar4,lVar5 + 2);
    if ((char)param_6[5] == '\0') {
      FUN_180130ef0(param_6);
    }
    *(int32_t *)puVar4 = *(int32_t *)**(int32_t **)(param_6[3] + 0xf8);
    if (param_4[1] < 0) {
      iVar3 = -param_4[1];
      if ((param_5 != '\0') || (iVar3 < param_3)) {
        param_3 = iVar3;
      }
      lVar6 = -1;
      do {
        lVar5 = lVar6;
        lVar6 = lVar5 + 1;
      } while ((*pauVar1)[lVar6] != '\0');
      FUN_180150fd0((int32_t *)(*pauVar1 + param_3),(int32_t *)pauVar1,lVar5 + 2);
      FUN_180151670(pauVar1,0x30,(longlong)param_3);
    }
  }
  return 0;
}

// ---- Function: FUN_180140138 ----
void FUN_180140138(int32_t *param_1,int32_t *param_2,ulonglong param_3,char *param_4,
                  rsize_t param_5,int param_6,char param_7,int param_8,int param_9,
                  longlong *param_10)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  int iVar5;
  int local_18 [4];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  iVar2 = FUN_18014935c((uint *)*param_1,param_6,0,local_18,param_4,param_5);
  uVar3 = param_3 - (local_18[0] == 0x2d);
  iVar5 = local_18[1] + -1;
  pcVar1 = (char *)((ulonglong)(local_18[0] == 0x2d) + (longlong)param_2);
  if (param_3 == 0xffffffffffffffff) {
    uVar3 = 0xffffffffffffffff;
  }
  iVar2 = FUN_18014924c(pcVar1,uVar3,param_6,local_18,iVar2,param_9,param_10);
  if (iVar2 == 0) {
    iVar2 = local_18[1] + -1;
    if ((iVar2 < -4) || (param_6 <= iVar2)) {
      FUN_18013fd24((int32_t *)param_2,param_3,param_6,param_7,param_8,local_18,1,param_10);
    }
    else {
      if (iVar5 < iVar2) {
        do {
          pcVar4 = pcVar1;
          pcVar1 = pcVar4 + 1;
        } while (*pcVar4 != '\0');
        pcVar4[-1] = '\0';
      }
      FUN_18013ffe0(param_2,param_3,param_6,local_18,'\x01',param_10);
    }
  }
  else {
    *(int32_t *)param_2 = 0;
  }
  return;
}

// ---- Function: should_round_up ----
/* Library Function - Single Match
    bool __cdecl should_round_up(double const * __ptr64 const,unsigned __int64,short,enum
   __acrt_rounding_mode)
   
   Library: Visual Studio 2019 Release */

bool __cdecl
should_round_up(double *param_1,__uint64 param_2,short param_3,__acrt_rounding_mode param_4)

{
  double dVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  
  bVar4 = (byte)param_3;
  uVar2 = (ushort)(((ulonglong)*param_1 & param_2 & 0xfffffffffffff) >> (bVar4 & 0x3f));
  if (param_4 == 0) {
    return 7 < uVar2;
  }
  iVar3 = fegetround();
  if (iVar3 == 0) {
    dVar1 = *param_1;
    uVar2 = (ushort)(((ulonglong)dVar1 & param_2 & 0xfffffffffffff) >> (bVar4 & 0x3f));
    if (8 < uVar2) {
      return true;
    }
    if (7 < uVar2) {
      if (((1L << (bVar4 & 0x3f)) - 1U & (ulonglong)dVar1 & 0xfffffffffffff) == 0) {
        if (param_3 == 0x30) {
          bVar4 = ((ulonglong)dVar1 & 0x7ff0000000000000) != 0;
        }
        else {
          bVar4 = (byte)(((ulonglong)dVar1 >> 4 & param_2 & 0xffffffffffff) >> (bVar4 & 0x3f));
        }
        return (bool)(bVar4 & 1);
      }
      return true;
    }
  }
  else if (iVar3 == 0x200) {
    if ((uVar2 != 0) && (-1 < (longlong)*param_1)) {
      return true;
    }
  }
  else {
    if (iVar3 != 0x100) {
      return false;
    }
    if ((uVar2 != 0) && ((longlong)*param_1 < 0)) {
      return true;
    }
  }
  return false;
}

// ---- Function: FUN_1801403a4 ----
int32_t
FUN_1801403a4(double *param_1,int32_t (*param_2) [16],ulonglong param_3,char *param_4,
             rsize_t param_5,int param_6,uint param_7,ulonglong param_8,__acrt_rounding_mode param_9
             ,longlong *param_10)

{
  double dVar1;
  errno_t eVar2;
  int32_t uVar3;
  longlong lVar4;
  uint uVar5;
  __acrt_rounding_mode _Var6;
  byte bVar7;
  ulonglong uVar8;
  
  if (param_2 == (int32_t (*) [16])0x0) {
    *(int32_t *)(param_10 + 6) = 1;
    *(int32_t *)((longlong)param_10 + 0x2c) = 0x16;
  }
  else {
    if (((param_3 != 0) && (param_4 != (char *)0x0)) && (param_5 != 0)) {
      if ((param_6 == 0x41) || (param_6 - 0x45U < 3)) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      bVar7 = (byte)uVar5;
      if (((param_8 & 8) == 0) &&
         (dVar1 = *param_1, ((uint)((ulonglong)dVar1 >> 0x34) & 0x7ff) == 0x7ff)) {
        if (((ulonglong)dVar1 & 0xfffffffffffff) == 0) {
          lVar4 = 0;
        }
        else if (((longlong)dVar1 < 0) && (((ulonglong)dVar1 & 0xfffffffffffff) == 0x8000000000000))
        {
          lVar4 = 0xc;
        }
        else {
          lVar4 = (-(ulonglong)(((ulonglong)dVar1 & 0x8000000000000) != 0) & 0xfffffffffffffffc) + 8
          ;
        }
        if (param_3 < 4U - ((longlong)dVar1 >> 0x3f)) {
          (*param_2)[0] = 0;
          return 0xc;
        }
        uVar8 = 0xffffffffffffffff;
        if ((longlong)dVar1 < 0) {
          (*param_2)[0] = 0x2d;
          param_2 = (int32_t (*) [16])(*param_2 + 1);
          (*param_2)[0] = 0;
          if (param_3 != 0xffffffffffffffff) {
            param_3 = param_3 - 1;
          }
        }
        uVar5 = (uVar5 ^ 1) * 2;
        do {
          uVar8 = uVar8 + 1;
        } while ((&PTR_DAT_18017bdb0)[(ulonglong)uVar5 + lVar4][uVar8] != '\0');
        eVar2 = strcpy_s((char *)param_2,param_3,
                         (&PTR_DAT_18017bdb0)[(ulonglong)(uVar5 + (param_3 <= uVar8)) + lVar4]);
        if (eVar2 == 0) {
          return 0;
        }
                    
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = (uint)(param_8 >> 4);
      _Var6 = -(uint)((param_8 & 0x20) != 0) & param_9;
      if (param_6 != 0x41) {
        if (param_6 == 0x45) {
LAB_1801405f1:
          uVar3 = FUN_18013fc28(param_1,*param_2,param_3,param_4,param_5,param_7,bVar7,uVar5 & 1 | 2
                                ,_Var6,param_10);
          return uVar3;
        }
        if (param_6 == 0x46) {
LAB_1801405c0:
          uVar3 = FUN_18013ff08(param_1,(int32_t *)param_2,param_3,param_4,param_5,param_7,_Var6,
                                param_10);
          return uVar3;
        }
        if (param_6 != 0x47) {
          if (param_6 == 0x61) goto LAB_18014062b;
          if (param_6 == 0x65) goto LAB_1801405f1;
          if (param_6 == 0x66) goto LAB_1801405c0;
        }
        uVar3 = FUN_180140138(param_1,(int32_t *)param_2,param_3,param_4,param_5,param_7,bVar7,
                              uVar5 & 1 | 2,_Var6,param_10);
        return uVar3;
      }
LAB_18014062b:
      uVar3 = FUN_18013f890(param_1,param_2,param_3,param_4,param_5,param_7,bVar7,uVar5 & 1 | 2,
                            _Var6,param_10);
      return uVar3;
    }
    *(int32_t *)(param_10 + 6) = 1;
    *(int32_t *)((longlong)param_10 + 0x2c) = 0x16;
  }
  FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_10);
  return 0x16;
}

// ---- Function: FUN_18014068c ----
int32_t
FUN_18014068c(int *param_1,int32_t (*param_2) [32],ulonglong param_3,WCHAR param_4,
             longlong *param_5)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  int32_t uVar4;
  int32_t uVar5;
  ulonglong local_res10;
  WCHAR local_res20 [4];
  
  if ((param_2 == (int32_t (*) [32])0x0) && (param_3 != 0)) {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    *param_1 = 0;
    return 0;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = -1;
  }
  local_res20[0] = param_4;
  if (param_3 < 0x80000000) {
    if ((char)param_5[5] == '\0') {
      FUN_180130ef0(param_5);
    }
    uVar1 = *(uint *)(param_5[3] + 0xc);
    if (uVar1 == 0xfde9) {
      local_res10 = 0;
      uVar4 = FUN_18014a5ec((byte *)param_2,(uint)(ushort)local_res20[0],&local_res10,
                            (longlong)param_5);
      if (param_1 != (int *)0x0) {
        *param_1 = (int)uVar4;
      }
      if ((int)uVar4 < 5) {
        return 0;
      }
      if ((char)param_5[6] != '\0') {
        return *(int32_t *)((longlong)param_5 + 0x2c);
      }
      return 0;
    }
    if (*(longlong *)(param_5[3] + 0x138) == 0) {
      if (0xff < (ushort)local_res20[0]) {
        if ((param_2 != (int32_t (*) [32])0x0) && (param_3 != 0)) {
          FUN_180151670(param_2,0,param_3);
        }
        goto LAB_18014076e;
      }
      if (param_2 == (int32_t (*) [32])0x0) {
LAB_18014079a:
        if (param_1 != (int *)0x0) {
          *param_1 = 1;
        }
        return 0;
      }
      if (param_3 != 0) {
        (*param_2)[0] = (char)local_res20[0];
        goto LAB_18014079a;
      }
    }
    else {
      local_res10 = local_res10 & 0xffffffff00000000;
      iVar2 = FUN_180141208(uVar1,0,local_res20,1,(LPSTR)param_2,(int)param_3,(LPBOOL)0x0,
                            (LPBOOL)&local_res10);
      if (iVar2 != 0) {
        if ((int)local_res10 == 0) {
          if (param_1 == (int *)0x0) {
            return 0;
          }
          *param_1 = iVar2;
          return 0;
        }
LAB_18014076e:
        *(int32_t *)((longlong)param_5 + 0x2c) = 0x2a;
        *(int32_t *)(param_5 + 6) = 1;
        return 0x2a;
      }
      DVar3 = GetLastError();
      if (DVar3 != 0x7a) goto LAB_18014076e;
      if ((param_2 != (int32_t (*) [32])0x0) && (param_3 != 0)) {
        FUN_180151670(param_2,0,param_3);
      }
    }
    uVar5 = 0x22;
  }
  else {
    uVar5 = 0x16;
  }
  *(int32_t *)((longlong)param_5 + 0x2c) = uVar5;
  *(int32_t *)(param_5 + 6) = 1;
  FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_5);
  return uVar5;
}

// ---- Function: FUN_18014083c ----
int FUN_18014083c(LPWSTR param_1,byte *param_2,ulonglong param_3,longlong *param_4)

{
  UINT UVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    _DAT_1801ee828 = 0;
  }
  else {
    if (*param_2 != 0) {
      if ((char)param_4[5] == '\0') {
        FUN_180130ef0(param_4);
      }
      plVar2 = (longlong *)param_4[3];
      UVar1 = *(UINT *)((longlong)plVar2 + 0xc);
      if (UVar1 != 0xfde9) {
        if (plVar2[0x27] == 0) {
          if (param_1 != (LPWSTR)0x0) {
            *param_1 = (ushort)*param_2;
          }
          return 1;
        }
        if (*(short *)(*plVar2 + (ulonglong)*param_2 * 2) < 0) {
          iVar3 = (int)plVar2[1];
          if ((((1 < iVar3) && (iVar3 <= (int)param_3)) &&
              (iVar3 = FUN_180141178(UVar1,9,(LPCSTR)param_2,iVar3,param_1,
                                     (uint)(param_1 != (LPWSTR)0x0)), iVar3 != 0)) ||
             (((ulonglong)(longlong)*(int *)(param_4[3] + 8) <= param_3 && (param_2[1] != 0)))) {
            return *(int *)(param_4[3] + 8);
          }
        }
        else {
          iVar3 = FUN_180141178(UVar1,9,(LPCSTR)param_2,1,param_1,(uint)(param_1 != (LPWSTR)0x0));
          if (iVar3 != 0) {
            return 1;
          }
        }
        *(int32_t *)(param_4 + 6) = 1;
        *(int32_t *)((longlong)param_4 + 0x2c) = 0x2a;
        return -1;
      }
      iVar3 = FUN_180147fdc(param_1,param_2,param_3,(uint *)&DAT_1801ee828,(longlong)param_4);
      if (iVar3 < 0) {
        return -1;
      }
      return iVar3;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}

// ---- Function: FUN_1801409b4 ----
bool FUN_1801409b4(void)

{
  return DAT_1801ee830 == (DAT_1801eb080 | 1);
}

// ---- Function: iswctype ----
/* Library Function - Single Match
    iswctype
   
   Library: Visual Studio 2019 Release */

int __cdecl iswctype(wint_t _C,wctype_t _Type)

{
  uint uVar1;
  BOOL BVar2;
  WORD local_res8 [4];
  WCHAR local_res18 [8];
  
  if (_C == 0xffff) {
LAB_180140a2b:
    uVar1 = 0;
  }
  else {
    if (_C < 0x100) {
      local_res8[0] = *(WORD *)(PTR_DAT_1801eb2d0 + (ulonglong)_C * 2);
    }
    else {
      local_res8[0] = 0;
      local_res18[0] = _C;
      BVar2 = GetStringTypeW(1,local_res18,1,local_res8);
      if (BVar2 == 0) goto LAB_180140a2b;
    }
    uVar1 = (uint)(local_res8[0] & _Type);
  }
  return uVar1;
}

// ---- Function: _isctype_l ----
/* Library Function - Single Match
    _isctype_l
   
   Library: Visual Studio 2019 Release */

int __cdecl _isctype_l(int _C,int _Type,_locale_t _Locale)

{
  int iVar1;
  int32_t auStackY_88 [32];
  CHAR local_48;
  CHAR local_47;
  int32_t local_46;
  longlong local_40;
  longlong *local_38 [2];
  char local_28;
  WORD local_20 [4];
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStackY_88;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,(__crt_locale_pointers *)_Locale);
  if (0x100 < _C + 1U) {
    iVar1 = 1;
    if (*(short *)(*local_38[0] + (ulonglong)(_C >> 8 & 0xff) * 2) < 0) {
      iVar1 = 2;
      local_46 = 0;
      local_48 = (CHAR)((uint)_C >> 8);
      local_47 = (CHAR)_C;
    }
    else {
      local_47 = '\0';
      local_48 = (CHAR)_C;
    }
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    iVar1 = FUN_180141a88((__crt_locale_pointers *)local_38,1,&local_48,iVar1,local_20,
                          *(UINT *)((longlong)local_38[0] + 0xc),1);
    if (iVar1 == 0) {
      if (local_28 != '\0') {
        *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
      }
      goto LAB_180140b1b;
    }
  }
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
LAB_180140b1b:
  iVar1 = FUN_1801252c0(local_18 ^ (ulonglong)auStackY_88);
  return iVar1;
}

// ---- Function: fegetround ----
/* Library Function - Single Match
    fegetround
   
   Library: Visual Studio 2019 Release */

void fegetround(void)

{
  uint uVar1;
  
  uVar1 = FUN_180147770();
  FUN_180147764(uVar1);
  return;
}

// ---- Function: FUN_180140b54 ----
void FUN_180140b54(longlong *param_1,ushort *param_2,uint param_3,char *param_4,int param_5,
                  int32_t param_6,int param_7,UINT param_8,int param_9)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  ulonglong uVar5;
  LPCWSTR pWVar6;
  LPCWSTR pWVar7;
  ulonglong uVar8;
  int32_t *puVar9;
  int32_t *puVar10;
  int32_t *puVar11;
  int32_t auStackY_88 [32];
  WCHAR local_38 [4];
  ulonglong local_30;
  
  puVar9 = auStackY_88;
  puVar10 = auStackY_88;
  puVar11 = auStackY_88;
  local_30 = DAT_1801eb080 ^ (ulonglong)local_38;
  iVar3 = param_5;
  if (0 < param_5) {
    sVar4 = __strncnt(param_4,(longlong)param_5);
    iVar2 = (int)sVar4;
    iVar3 = iVar2 + 1;
    if (param_5 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_8 == 0) {
    param_8 = *(UINT *)(*param_1 + 0xc);
  }
  iVar2 = FUN_180141178(param_8,(-(uint)(param_9 != 0) & 8) + 1,param_4,iVar3,(LPWSTR)0x0,0);
  pWVar6 = (LPCWSTR)0x0;
  if (iVar2 == 0) goto LAB_180140e5f;
  uVar5 = (longlong)iVar2 * 2 + 0x10;
  uVar5 = -(ulonglong)((ulonglong)((longlong)iVar2 * 2) < uVar5) & uVar5;
  puVar11 = auStackY_88;
  if (uVar5 == 0) {
LAB_180140e45:
    if (pWVar6 == (LPCWSTR)0x0) goto LAB_180140e5f;
  }
  else {
    if (uVar5 < 0x401) {
      uVar8 = uVar5 + 0xf;
      if (uVar8 <= uVar5) {
        uVar8 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar8 & 0xfffffffffffffff0);
      puVar9 = auStackY_88 + lVar1;
      pWVar6 = (LPCWSTR)((longlong)local_38 + lVar1);
      puVar11 = auStackY_88 + lVar1;
      if (pWVar6 == (LPCWSTR)0x0) goto LAB_180140e45;
      pWVar6[0] = L'쳌';
      pWVar6[1] = L'\0';
LAB_180140c60:
      pWVar6 = pWVar6 + 8;
      puVar10 = puVar9;
    }
    else {
      pWVar6 = (LPCWSTR)_malloc_base(uVar5);
      if (pWVar6 != (LPCWSTR)0x0) {
        pWVar6[0] = L'\xdddd';
        pWVar6[1] = L'\0';
        goto LAB_180140c60;
      }
    }
    puVar11 = puVar10;
    if (pWVar6 == (LPCWSTR)0x0) goto LAB_180140e45;
    *(int *)(puVar10 + 0x28) = iVar2;
    *(LPCWSTR *)(puVar10 + 0x20) = pWVar6;
    *(int32_t *)(puVar10 + -8) = 0x180140c8a;
    iVar3 = FUN_180141178(param_8,1,param_4,iVar3,*(LPWSTR *)(puVar10 + 0x20),
                          *(int *)(puVar10 + 0x28));
    if (iVar3 == 0) goto LAB_180140e45;
    *(int32_t *)(puVar10 + 0x40) = 0;
    *(int32_t *)(puVar10 + 0x38) = 0;
    *(int32_t *)(puVar10 + 0x30) = 0;
    *(int32_t *)(puVar10 + 0x28) = 0;
    *(int32_t *)(puVar10 + 0x20) = 0;
    *(int32_t *)(puVar10 + -8) = 0x180140cbd;
    iVar3 = FUN_18013ac38(param_2,param_3,pWVar6,iVar2,*(LPWSTR *)(puVar10 + 0x20),
                          *(int *)(puVar10 + 0x28),*(int32_t *)(puVar10 + 0x30),
                          *(int32_t *)(puVar10 + 0x38),*(int32_t *)(puVar10 + 0x40));
    pWVar7 = (LPCWSTR)0x0;
    if (iVar3 == 0) goto LAB_180140e45;
    if ((param_3 & 0x400) == 0) {
      uVar5 = (longlong)iVar3 * 2 + 0x10;
      uVar5 = -(ulonglong)((ulonglong)((longlong)iVar3 * 2) < uVar5) & uVar5;
      if (uVar5 == 0) {
LAB_180140e28:
        if (pWVar7 != (LPCWSTR)0x0) {
LAB_180140e2d:
          if (*(int *)(pWVar7 + -8) == 0xdddd) {
            *(int32_t *)(puVar11 + -8) = 0x180140e3e;
            FUN_18013bf3c(pWVar7 + -8);
          }
        }
      }
      else {
        if (uVar5 < 0x401) {
          uVar8 = uVar5 + 0xf;
          if (uVar8 <= uVar5) {
            uVar8 = 0xffffffffffffff0;
          }
          *(int32_t *)(puVar10 + -8) = 0x180140d60;
          lVar1 = -(uVar8 & 0xfffffffffffffff0);
          puVar11 = puVar10 + lVar1;
          pWVar7 = (LPCWSTR)(puVar10 + lVar1 + 0x50);
          if (pWVar7 == (LPCWSTR)0x0) goto LAB_180140e4c;
          pWVar7[0] = L'쳌';
          pWVar7[1] = L'\0';
          puVar10 = puVar10 + lVar1;
LAB_180140d8e:
          pWVar7 = pWVar7 + 8;
          puVar11 = puVar10;
        }
        else {
          *(int32_t *)(puVar10 + -8) = 0x180140d7e;
          pWVar7 = (LPCWSTR)_malloc_base(uVar5);
          if (pWVar7 != (LPCWSTR)0x0) {
            pWVar7[0] = L'\xdddd';
            pWVar7[1] = L'\0';
            goto LAB_180140d8e;
          }
        }
        if (pWVar7 != (LPCWSTR)0x0) {
          *(int32_t *)(puVar11 + 0x40) = 0;
          *(int32_t *)(puVar11 + 0x38) = 0;
          *(int32_t *)(puVar11 + 0x30) = 0;
          *(int *)(puVar11 + 0x28) = iVar3;
          *(LPCWSTR *)(puVar11 + 0x20) = pWVar7;
          *(int32_t *)(puVar11 + -8) = 0x180140dc4;
          iVar2 = FUN_18013ac38(param_2,param_3,pWVar6,iVar2,*(LPWSTR *)(puVar11 + 0x20),
                                *(int *)(puVar11 + 0x28),*(int32_t *)(puVar11 + 0x30),
                                *(int32_t *)(puVar11 + 0x38),*(int32_t *)(puVar11 + 0x40));
          if (iVar2 == 0) goto LAB_180140e28;
          *(int32_t *)(puVar11 + 0x38) = 0;
          *(int32_t *)(puVar11 + 0x30) = 0;
          if (param_7 == 0) {
            *(int32_t *)(puVar11 + 0x28) = 0;
            *(int32_t *)(puVar11 + 0x20) = 0;
            *(int32_t *)(puVar11 + -8) = 0x180140df2;
            iVar3 = FUN_180141208(param_8,0,pWVar7,iVar3,*(LPSTR *)(puVar11 + 0x20),
                                  *(int *)(puVar11 + 0x28),*(LPBOOL *)(puVar11 + 0x30),
                                  *(LPBOOL *)(puVar11 + 0x38));
            if (iVar3 == 0) goto LAB_180140e28;
          }
          else {
            *(int *)(puVar11 + 0x28) = param_7;
            *(int32_t *)(puVar11 + 0x20) = param_6;
            *(int32_t *)(puVar11 + -8) = 0x180140e0c;
            iVar3 = FUN_180141208(param_8,0,pWVar7,iVar3,*(LPSTR *)(puVar11 + 0x20),
                                  *(int *)(puVar11 + 0x28),*(LPBOOL *)(puVar11 + 0x30),
                                  *(LPBOOL *)(puVar11 + 0x38));
            if (iVar3 == 0) goto LAB_180140e2d;
          }
          if (*(int *)(pWVar7 + -8) == 0xdddd) {
            *(int32_t *)(puVar11 + -8) = 0x180140e23;
            FUN_18013bf3c(pWVar7 + -8);
          }
        }
      }
    }
    else if (param_7 != 0) {
      if (iVar3 <= param_7) {
        *(int32_t *)(puVar10 + 0x40) = 0;
        *(int32_t *)(puVar10 + 0x38) = 0;
        *(int32_t *)(puVar10 + 0x30) = 0;
        *(int *)(puVar10 + 0x28) = param_7;
        *(int32_t *)(puVar10 + 0x20) = param_6;
        *(int32_t *)(puVar10 + -8) = 0x180140d15;
        iVar3 = FUN_18013ac38(param_2,param_3,pWVar6,iVar2,*(LPWSTR *)(puVar10 + 0x20),
                              *(int *)(puVar10 + 0x28),*(int32_t *)(puVar10 + 0x30),
                              *(int32_t *)(puVar10 + 0x38),*(int32_t *)(puVar10 + 0x40));
        if (iVar3 != 0) goto LAB_180140e4c;
      }
      goto LAB_180140e45;
    }
  }
LAB_180140e4c:
  if (*(int *)(pWVar6 + -8) == 0xdddd) {
    *(int32_t *)(puVar11 + -8) = 0x180140e5d;
    FUN_18013bf3c(pWVar6 + -8);
  }
LAB_180140e5f:
  uVar5 = local_30 ^ (ulonglong)local_38;
  *(int32_t *)(puVar11 + -8) = 0x180140e6b;
  FUN_1801252c0(uVar5);
  return;
}

// ---- Function: __acrt_LCMapStringA ----
/* Library Function - Single Match
    __acrt_LCMapStringA
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_LCMapStringA(__crt_locale_pointers *param_1,ushort *param_2,uint param_3,char *param_4,
                        int param_5,int32_t param_6,int param_7,UINT param_8,int param_9)

{
  longlong local_28;
  longlong local_20 [2];
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  FUN_180140b54(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}

// ---- Function: FUN_180140f20 ----
int FUN_180140f20(int32_t (*param_1) [32],int32_t (*param_2) [32],ulonglong param_3)

{
  int iVar1;
  ulong *puVar2;
  ulonglong uVar3;
  longlong local_28;
  longlong local_20;
  char local_10;
  
  if (DAT_1801ee158 != 0) {
    if (param_3 == 0) {
      iVar1 = 0;
    }
    else if ((param_1 == (int32_t (*) [32])0x0) || (param_2 == (int32_t (*) [32])0x0)) {
      puVar2 = __doserrno();
      *puVar2 = 0x16;
      FUN_18012b794();
      iVar1 = 0x7fffffff;
    }
    else {
      iVar1 = 0x7fffffff;
      if (param_3 < 0x80000000) {
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
        if (*(ushort **)(local_20 + 0x130) == (ushort *)0x0) {
          iVar1 = __ascii_wcsnicmp((ushort *)param_1,(ushort *)param_2,param_3);
        }
        else {
          uVar3 = __acrt_CompareStringW
                            (*(ushort **)(local_20 + 0x130),0x1001,param_1,(int)param_3,param_2,
                             (int)param_3);
          if ((int)uVar3 == 0) {
            puVar2 = __doserrno();
            *puVar2 = 0x16;
          }
          else {
            iVar1 = (int)uVar3 + -2;
          }
        }
        if (local_10 != '\0') {
          *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
        }
      }
      else {
        puVar2 = __doserrno();
        *puVar2 = 0x16;
        FUN_18012b794();
      }
    }
    return iVar1;
  }
  if (((param_1 != (int32_t (*) [32])0x0) && (param_2 != (int32_t (*) [32])0x0)) &&
     (param_3 < 0x80000000)) {
    iVar1 = __ascii_wcsnicmp((ushort *)param_1,(ushort *)param_2,param_3);
    return iVar1;
  }
  puVar2 = __doserrno();
  *puVar2 = 0x16;
  FUN_18012b794();
  return 0x7fffffff;
}

// ---- Function: _strnicoll ----
/* Library Function - Single Match
    _strnicoll
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _strnicoll(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  ulong *puVar2;
  
  if (DAT_1801ee158 != 0) {
    iVar1 = _strnicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
    return iVar1;
  }
  if (((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) && (_MaxCount < 0x80000000)) {
    iVar1 = FUN_1801483e8((byte *)_Str1,(byte *)_Str2,_MaxCount);
    return iVar1;
  }
  puVar2 = __doserrno();
  *puVar2 = 0x16;
  FUN_18012b794();
  return 0x7fffffff;
}

// ---- Function: _strnicoll_l ----
/* Library Function - Single Match
    _strnicoll_l
   
   Library: Visual Studio 2019 Release */

int __cdecl _strnicoll_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  longlong local_28;
  localeinfo_struct local_20;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)_Locale);
  if (_MaxCount == 0) {
    iVar1 = 0;
  }
  else if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_18012b794();
    iVar1 = 0x7fffffff;
  }
  else {
    iVar1 = 0x7fffffff;
    if (_MaxCount < 0x80000000) {
      if ((local_20.locinfo)->locale_name[1] == (wchar_t *)0x0) {
        iVar1 = _strnicmp_l(_Str1,_Str2,_MaxCount,&local_20);
      }
      else {
        iVar2 = __acrt_CompareStringA
                          ((__crt_locale_pointers *)&local_20,
                           (ushort *)(local_20.locinfo)->locale_name[1],0x1001,(byte *)_Str1,
                           (int)_MaxCount,(byte *)_Str2,(int)_MaxCount,
                           *(UINT *)((longlong)&(local_20.locinfo)->lc_category[0].locale + 4));
        if (iVar2 == 0) {
          puVar3 = __doserrno();
          *puVar3 = 0x16;
        }
        else {
          iVar1 = iVar2 + -2;
        }
      }
    }
    else {
      puVar3 = __doserrno();
      *puVar3 = 0x16;
      FUN_18012b794();
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return iVar1;
}

// ---- Function: FUN_180141178 ----
void FUN_180141178(UINT param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6)

{
  bool bVar1;
  
  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar1 = param_1 == 0xc431;
LAB_1801411c5:
          if (!bVar1) goto LAB_1801411c9;
        }
      }
      else if (param_1 != 0xc435) {
        if (param_1 == 0xd698) goto LAB_180141203;
        if (param_1 != 0xdeaa) {
          bVar1 = param_1 == 0xdeab;
          goto LAB_1801411c5;
        }
      }
    }
  }
  else if ((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
          (((param_1 != 0xdeb0 && (param_1 != 0xdeb1)) &&
           ((param_1 != 0xdeb2 && ((param_1 != 0xdeb3 && (param_1 != 65000)))))))) {
    if (param_1 != 0xfde9) goto LAB_1801411c9;
LAB_180141203:
    param_2 = param_2 & 8;
    goto LAB_1801411c9;
  }
  param_2 = 0;
LAB_1801411c9:
                    
                    
  MultiByteToWideChar(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// ---- Function: FUN_180141208 ----
void FUN_180141208(uint param_1,uint param_2,LPCWSTR param_3,int param_4,LPSTR param_5,int param_6,
                  LPBOOL param_7,LPBOOL param_8)

{
  LPBOOL lpUsedDefaultChar;
  int iVar1;
  DWORD dwFlags;
  LPBOOL pBVar2;
  bool bVar3;
  
  pBVar2 = (LPBOOL)0x0;
  dwFlags = 0;
  if (param_1 < 0xdead) {
    if (param_1 == 0xdeac) goto LAB_1801412a8;
    if (0xc433 < param_1) {
      if ((param_1 == 0xc435) || (param_1 == 0xd698)) goto LAB_1801412a8;
      iVar1 = param_1 - 0xdeaa;
      goto LAB_180141299;
    }
    if ((((param_1 == 0xc433) || (param_1 == 0x2a)) || (param_1 == 0xc42c)) ||
       ((param_1 == 0xc42d || (param_1 == 0xc42e)))) goto LAB_1801412a8;
    bVar3 = param_1 == 0xc431;
  }
  else {
    if (((((param_1 == 0xdead) || (param_1 == 0xdeae)) || (param_1 == 0xdeaf)) ||
        ((param_1 == 0xdeb0 || (param_1 == 0xdeb1)))) ||
       ((param_1 == 0xdeb2 || (param_1 == 0xdeb3)))) goto LAB_1801412a8;
    iVar1 = param_1 - 65000;
LAB_180141299:
    if (iVar1 == 0) goto LAB_1801412a8;
    bVar3 = iVar1 == 1;
  }
  if (!bVar3) {
    dwFlags = param_2 & 0xffffff7f;
  }
LAB_1801412a8:
  lpUsedDefaultChar = param_8;
  if ((param_1 - 65000 < 2) &&
     (lpUsedDefaultChar = pBVar2, param_7 = pBVar2, param_8 != (LPBOOL)0x0)) {
    *param_8 = 0;
  }
                    
                    
  WideCharToMultiByte(param_1,dwFlags,param_3,param_4,param_5,param_6,(LPCSTR)param_7,
                      lpUsedDefaultChar);
  return;
}

