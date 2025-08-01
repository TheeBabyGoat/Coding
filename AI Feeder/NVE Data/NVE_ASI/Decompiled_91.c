#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_18014be6c ----
int32_t FUN_18014be6c(int32_t *param_1)

{
  ulong *puVar1;
  int32_t uVar2;
  
  if (param_1 == (int32_t *)0x0) {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_18012b794();
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_1801ee8e0;
    uVar2 = 0;
  }
  return uVar2;
}

// ---- Function: FUN_18014be9c ----
int32_t FUN_18014be9c(uint param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  int32_t uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_1 >> 6;
  uVar4 = (ulonglong)(param_1 & 0x3f);
  lVar3 = (&DAT_1801ee410)[lVar6];
  bVar1 = *(byte *)(lVar3 + 0x38 + uVar4 * 0x48);
  cVar2 = *(char *)(lVar3 + 0x39 + uVar4 * 0x48);
  if (param_2 == 0x4000) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar1 | 0x80;
    *(int32_t *)((&DAT_1801ee410)[lVar6] + 0x39 + uVar4 * 0x48) = 0;
  }
  else if (param_2 == 0x8000) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar1 & 0x7f;
  }
  else if ((param_2 - 0x10000U & 0xfffeffff) == 0) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar1 | 0x80;
    *(int32_t *)((&DAT_1801ee410)[lVar6] + 0x39 + uVar4 * 0x48) = 2;
  }
  else if (param_2 == 0x40000) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar1 | 0x80;
    *(int32_t *)((&DAT_1801ee410)[lVar6] + 0x39 + uVar4 * 0x48) = 1;
  }
  if ((bVar1 & 0x80) == 0) {
    uVar5 = 0x8000;
  }
  else if (cVar2 == '\0') {
    uVar5 = 0x4000;
  }
  else {
    uVar5 = 0x10000;
    if (cVar2 == '\x01') {
      uVar5 = 0x40000;
    }
  }
  return uVar5;
}

// ---- Function: FUN_18014bf80 ----
int32_t FUN_18014bf80(uint param_1,LARGE_INTEGER param_2)

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
  uVar1 = FUN_18014c018(param_1,param_2,local_48);
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

// ---- Function: FUN_18014c018 ----
int32_t FUN_18014c018(uint param_1,LARGE_INTEGER param_2,longlong *param_3)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  LARGE_INTEGER LVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  int32_t uVar7;
  HANDLE hFile;
  longlong lVar8;
  int32_t uVar9;
  int32_t uVar10;
  uint uVar11;
  
  LVar4.QuadPart = FUN_18013d4c8(param_1,(LARGE_INTEGER)0x0,1);
  lVar5 = FUN_18013d4c8(param_1,(LARGE_INTEGER)0x0,2);
  lVar8 = param_2.QuadPart - lVar5;
  if ((LVar4.QuadPart == -1) || (lVar5 == -1)) {
    if ((char)param_3[6] == '\0') {
      uVar10 = 0x16;
    }
    else {
      uVar10 = *(int32_t *)((longlong)param_3 + 0x2c);
    }
  }
  else {
    uVar9 = 0;
    if (lVar8 < 1) {
      uVar10 = 0;
      if (lVar8 < 0) {
        lVar5 = FUN_18013d4c8(param_1,param_2,0);
        uVar10 = uVar9;
        if (lVar5 == -1) {
          if ((char)param_3[6] != '\0') {
            uVar10 = *(int32_t *)((longlong)param_3 + 0x2c);
          }
        }
        else {
          hFile = (HANDLE)FUN_180147f04(param_1);
          BVar2 = SetEndOfFile(hFile);
          if (BVar2 == 0) {
            DVar3 = GetLastError();
            *(int32_t *)(param_3 + 7) = 1;
            uVar10 = 0xd;
            *(DWORD *)((longlong)param_3 + 0x34) = DVar3;
            *(int32_t *)(param_3 + 6) = 1;
            *(int32_t *)((longlong)param_3 + 0x2c) = 0xd;
          }
        }
      }
    }
    else {
      pwVar6 = (wchar_t *)_calloc_base(0x1000,1);
      if (pwVar6 == (wchar_t *)0x0) {
        uVar9 = 0xc;
        *(int32_t *)(param_3 + 6) = 1;
        *(int32_t *)((longlong)param_3 + 0x2c) = 0xc;
      }
      else {
        uVar7 = FUN_18014be9c(param_1,0x8000);
        do {
          uVar11 = (uint)lVar8;
          if (0xfff < lVar8) {
            uVar11 = 0x1000;
          }
          iVar1 = FUN_18013cf0c(param_1,pwVar6,uVar11,param_3);
          if (iVar1 == -1) {
            if (((char)param_3[7] != '\0') && (*(int *)((longlong)param_3 + 0x34) == 5)) {
              *(int32_t *)(param_3 + 6) = 1;
              *(int32_t *)((longlong)param_3 + 0x2c) = 0xd;
            }
            if ((char)param_3[6] != '\0') {
              uVar9 = *(int32_t *)((longlong)param_3 + 0x2c);
            }
            goto LAB_18014c109;
          }
          lVar8 = lVar8 - iVar1;
        } while (0 < lVar8);
        FUN_18014be9c(param_1,(int)uVar7);
      }
LAB_18014c109:
      FUN_18013bf3c(pwVar6);
      uVar10 = uVar9;
    }
  }
  FUN_18013d4c8(param_1,LVar4,0);
  return uVar10;
}

// ---- Function: _controlfp_s ----
/* Library Function - Single Match
    _controlfp_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl _controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  ulong *puVar2;
  uint uVar3;
  
  uVar3 = _Mask & 0xfff7ffff;
  if ((_NewValue & uVar3 & 0xfcf0fce0) == 0) {
    if (_CurrentState == (uint *)0x0) {
      thunk_FUN_18014ca9c(_NewValue,uVar3);
    }
    else {
      uVar3 = thunk_FUN_18014ca9c(_NewValue,uVar3);
      *_CurrentState = uVar3;
    }
    eVar1 = 0;
  }
  else {
    if (_CurrentState != (uint *)0x0) {
      uVar3 = thunk_FUN_18014ca9c(0,0);
      *_CurrentState = uVar3;
    }
    puVar2 = __doserrno();
    eVar1 = 0x16;
    *puVar2 = 0x16;
    FUN_18012b794();
  }
  return eVar1;
}

// ---- Function: fegetenv ----
/* Library Function - Single Match
    fegetenv
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int32_t fegetenv(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_180147770();
  *param_1 = uVar1;
  uVar1 = FUN_180147854();
  param_1[1] = uVar1;
  return 0;
}

// ---- Function: FUN_18014c230 ----
bool FUN_18014c230(uint *param_1)

{
  int32_t uVar1;
  bool bVar2;
  uint local_res8 [2];
  
  FUN_1801478ac(*param_1);
  FUN_1801479e4(param_1[1]);
  local_res8[0] = 0;
  local_res8[1] = 0;
  uVar1 = fegetenv(local_res8);
  if (((int)uVar1 == 0) && (*param_1 == local_res8[0])) {
    bVar2 = param_1[1] != local_res8[1];
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

// ---- Function: feholdexcept ----
/* Library Function - Single Match
    feholdexcept
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int32_t feholdexcept(int32_t *param_1)

{
  bool bVar1;
  int32_t uVar2;
  int32_t extraout_var;
  uint local_res10;
  int32_t uStackX_14;
  
  local_res10 = 0;
  uStackX_14 = 0;
  uVar2 = fegetenv(&local_res10);
  if ((int)uVar2 == 0) {
    uVar2 = CONCAT44(uStackX_14,local_res10);
    local_res10 = local_res10 | 0x1f;
    *param_1 = uVar2;
    bVar1 = FUN_18014c230(&local_res10);
    if ((int)CONCAT71(extraout_var,bVar1) == 0) {
      FUN_18014ca28();
      return 0;
    }
  }
  return 1;
}

// ---- Function: ceil ----
/* Library Function - Single Match
    ceil
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

double __cdecl ceil(double _X)

{
  double dVar1;
  double dVar2;
  
  dVar1 = ABS(_X);
  dVar2 = _X;
  if ((ulonglong)dVar1 < 0x4340000000000000) {
    if ((ulonglong)dVar1 < 0x3ff0000000000000) {
      if ((dVar1 != 0.0) && (dVar2 = DAT_1801d8e58, _X != dVar1)) {
        dVar2 = -0.0;
      }
    }
    else {
      dVar2 = (double)(~((1L << (0x33U - (char)((ulonglong)_X >> 0x34) & 0x3f)) - 1U) &
                      (ulonglong)_X);
      if ((_X == dVar1) && (dVar2 != _X)) {
        dVar2 = dVar2 + DAT_1801d8e58;
      }
    }
  }
  else if (0x7ff0000000000000 < (ulonglong)dVar1) {
    dVar2 = (double)_handle_nan((ulonglong)_X);
    return dVar2;
  }
  return dVar2;
}

// ---- Function: FUN_18014c3a0 ----
double FUN_18014c3a0(void)

{
  int32_t auVar1 [16];
  int32_t auVar2 [16];
  int32_t auVar3 [16];
  int32_t auVar4 [16];
  int32_t auVar5 [16];
  int32_t auVar6 [16];
  int32_t auVar7 [16];
  int32_t auVar8 [16];
  int32_t auVar9 [16];
  int32_t auVar10 [16];
  int32_t auVar11 [16];
  int32_t auVar12 [16];
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  int32_t auVar16 [16];
  int32_t auVar17 [16];
  int32_t auVar18 [16];
  int32_t auVar19 [16];
  int32_t in_ZMM0 [64];
  double dVar20;
  int32_t auVar21 [16];
  int32_t auVar22 [16];
  double dVar23;
  double dVar24;
  int32_t auVar25 [16];
  double dVar26;
  int32_t auVar27 [16];
  int32_t auVar28 [16];
  int32_t auVar29 [16];
  int32_t auVar30 [16];
  int32_t auVar31 [16];
  int32_t auVar32 [16];
  int32_t auVar33 [16];
  int32_t auVar34 [16];
  int32_t auVar35 [16];
  int32_t auVar36 [16];
  double dVar37;
  
  dVar15 = in_ZMM0._0_8_;
  auVar16 = in_ZMM0._0_16_;
  if (DAT_1801ee8e8 == 0) {
    if ((double)((ulonglong)dVar15 & (ulonglong)DAT_1801802a0) == DAT_1801802a0) {
      if (dVar15 == DAT_1801802a0) {
        return dVar15;
      }
      if (dVar15 != DAT_180180290) {
        return (double)((ulonglong)dVar15 | _DAT_1801802c0);
      }
    }
    else {
      dVar37 = (double)(int)(((ulonglong)dVar15 >> 0x34) - _DAT_1801802d0);
      if (0.0 < dVar15) {
        dVar23 = (double)((ulonglong)dVar15 & (ulonglong)DAT_1801802f0);
        dVar20 = dVar15;
        if (dVar37 == DAT_180180410) {
          dVar37 = (double)((ulonglong)dVar23 | (ulonglong)DAT_180180380) - DAT_180180380;
          dVar20 = (double)((ulonglong)dVar37 & (ulonglong)DAT_1801802f0);
          dVar37 = (double)(int)((uint)((ulonglong)dVar37 >> 0x34) - _DAT_180180420);
          dVar23 = dVar20;
        }
        uVar13 = ((ulonglong)dVar20 & _DAT_180180300) + ((ulonglong)dVar20 & _DAT_180180310) * 2;
        if ((double)((ulonglong)(dVar15 - DAT_180180380) & _DAT_180180470) < DAT_180180430) {
          dVar15 = dVar15 - DAT_180180380;
          dVar37 = dVar15 / (DAT_180180370 + dVar15);
          dVar20 = dVar37 + dVar37;
          dVar23 = dVar20 * dVar20;
          dVar24 = dVar23 * dVar20;
          dVar26 = (double)((ulonglong)dVar15 & (ulonglong)DAT_1801804c0);
          dVar15 = (((DAT_180180490 * dVar23 + DAT_180180480) * dVar24 +
                    (DAT_1801804b0 * dVar23 + DAT_1801804a0) * dVar24 * dVar24 * dVar20) -
                   dVar15 * dVar37) + (dVar15 - dVar26);
          return dVar26 * DAT_180180340 + dVar15 * DAT_180180340 + dVar15 * DAT_180180330 +
                 dVar26 * DAT_180180330;
        }
        uVar14 = uVar13 >> 0x2c;
        dVar20 = ((double)(uVar13 | DAT_180180390) - (double)((ulonglong)dVar23 | DAT_180180390)) *
                 *(double *)(&DAT_180181500 + uVar14 * 8);
        dVar15 = dVar20 * dVar20;
        return *(double *)(&DAT_1801804e0 + uVar14 * 8) + DAT_180180350 * dVar37 +
               *(double *)(&DAT_180180cf0 + uVar14 * 8) +
               (DAT_180180360 * dVar37 -
               ((DAT_1801803d0 * dVar20 + _DAT_1801803c0) * dVar15 + dVar20 +
               ((DAT_180180400 * dVar20 + DAT_1801803f0) * dVar20 + DAT_1801803e0) * dVar15 * dVar15
               ) * DAT_180180320);
      }
      if (dVar15 == 0.0) {
        dVar15 = (double)FUN_18014d160(dVar15,DAT_180180290,DAT_1801804d0);
        return dVar15;
      }
    }
    dVar15 = (double)FUN_18014d160(dVar15,DAT_1801802b0,DAT_1801804d4);
    return dVar15;
  }
  auVar27 = vpsrlq_avx(auVar16,0x34);
  auVar36._8_8_ = _UNK_1801802d8;
  auVar36._0_8_ = _DAT_1801802d0;
  auVar36 = vpsubq_avx(auVar27,auVar36);
  auVar36 = vcvtdq2pd_avx(auVar36);
  auVar27._8_8_ = _UNK_1801802a8;
  auVar27._0_8_ = DAT_1801802a0;
  auVar27 = vpand_avx(auVar16,auVar27);
  if (auVar27._0_8_ == DAT_1801802a0) {
    if (dVar15 != DAT_1801802a0) {
      if (dVar15 == DAT_180180290) goto LAB_18014c8f0;
      dVar15 = (double)FUN_18014d160(dVar15,(ulonglong)dVar15 | _DAT_1801802c0,DAT_1801804d8);
    }
    return dVar15;
  }
  if (0.0 < dVar15) {
    auVar27 = vpand_avx(auVar16,_DAT_1801802f0);
    if (auVar36._0_8_ == DAT_180180410) {
      auVar16._8_8_ = _UNK_180180388;
      auVar16._0_8_ = DAT_180180380;
      auVar16 = vpor_avx(auVar27,auVar16);
      auVar28._8_8_ = 0;
      auVar28._0_8_ = auVar16._0_8_ - DAT_180180380;
      auVar36 = vpsrlq_avx(auVar28,0x34);
      auVar16 = vpand_avx(auVar28,_DAT_1801802f0);
      auVar7._4_12_ = _UNK_180180424;
      auVar7._0_4_ = _DAT_180180420;
      auVar36 = vpsubd_avx(auVar36,auVar7);
      auVar36 = vcvtdq2pd_avx(auVar36);
      auVar27 = auVar16;
    }
    auVar8._8_8_ = _UNK_180180308;
    auVar8._0_8_ = _DAT_180180300;
    auVar7 = vpand_avx(auVar16,auVar8);
    auVar9._8_8_ = _UNK_180180318;
    auVar9._0_8_ = _DAT_180180310;
    auVar28 = vpand_avx(auVar16,auVar9);
    auVar28 = vpsllq_avx(auVar28,1);
    auVar7 = vpaddq_avx(auVar28,auVar7);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = dVar15 - DAT_180180380;
    auVar12._8_8_ = _UNK_180180478;
    auVar12._0_8_ = _DAT_180180470;
    auVar28 = vpand_avx(auVar30,auVar12);
    if (auVar28._0_8_ < DAT_180180430) {
      dVar20 = auVar16._0_8_ - DAT_180180380;
      dVar23 = dVar20 / (DAT_180180370 + dVar20);
      auVar32._8_8_ = 0;
      auVar32._0_8_ = DAT_180180490;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = DAT_1801804b0;
      dVar15 = dVar23 + dVar23;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = DAT_180180480;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = dVar15 * dVar15;
      auVar36 = vfmadd213sd_fma(auVar32,auVar25,auVar5);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = DAT_1801804a0;
      auVar27 = vfmadd213sd_fma(auVar35,auVar25,auVar6);
      dVar37 = dVar15 * dVar15 * dVar15;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = dVar20;
      auVar16 = vpand_avx(auVar19,_DAT_1801804c0);
      dVar24 = auVar16._0_8_;
      dVar15 = ((auVar36._0_8_ * dVar37 + auVar27._0_8_ * dVar37 * dVar37 * dVar15) -
               dVar20 * dVar23) + (dVar20 - dVar24);
      return dVar24 * DAT_180180340 + dVar15 * DAT_180180340 + dVar15 * DAT_180180330 +
             dVar24 * DAT_180180330;
    }
    uVar13 = auVar7._0_8_ >> 0x2c;
    auVar10._8_8_ = _UNK_180180398;
    auVar10._0_8_ = DAT_180180390;
    auVar16 = vpor_avx(auVar27,auVar10);
    auVar11._8_8_ = _UNK_180180398;
    auVar11._0_8_ = DAT_180180390;
    auVar27 = vpor_avx(auVar7,auVar11);
    dVar15 = (auVar27._0_8_ - auVar16._0_8_) * *(double *)(&DAT_180181500 + uVar13 * 8);
    dVar37 = dVar15 * dVar15;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = DAT_180180400;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = DAT_1801803d0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = DAT_1801803f0;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = dVar15;
    auVar16 = vfmadd213sd_fma(auVar29,auVar21,auVar1);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = DAT_180180390;
    auVar27 = vfmadd213sd_fma(auVar33,auVar21,auVar2);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = DAT_1801803e0;
    auVar16 = vfmadd213sd_fma(auVar16,auVar21,auVar3);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = dVar37;
    auVar27 = vfmadd231sd_fma(auVar21,auVar27,auVar17);
    auVar31._8_8_ = 0;
    auVar31._0_8_ = dVar37 * dVar37;
    auVar16 = vfmadd231sd_fma(auVar27,auVar16,auVar31);
    auVar34._8_8_ = 0;
    auVar34._0_8_ = DAT_180180360;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = auVar16._0_8_ * DAT_180180320;
    auVar27 = vfmsub213sd_fma(auVar34,auVar36,auVar22);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = DAT_180180350;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = *(ulonglong *)(&DAT_1801804e0 + uVar13 * 8);
    auVar16 = vfmadd231sd_fma(auVar18,auVar36,auVar4);
    return auVar16._0_8_ + *(double *)(&DAT_180180cf0 + uVar13 * 8) + auVar27._0_8_;
  }
  if (dVar15 == 0.0) {
    dVar15 = (double)FUN_18014d160(dVar15,DAT_180180290,DAT_1801804d0);
    return dVar15;
  }
LAB_18014c8f0:
  dVar15 = (double)FUN_18014d160(dVar15,DAT_1801802b0,DAT_1801804d4);
  return dVar15;
}

// ---- Function: FUN_18014c94c ----
int32_t FUN_18014c94c(int32_t param_1,int32_t *param_2)

{
  *param_2 = 0;
  return param_1;
}

// ---- Function: FUN_18014c954 ----
int32_t FUN_18014c954(int32_t *param_1,longlong param_2)

{
  *param_1 = 0;
  *(int32_t *)(param_2 + 0x30) = 1;
  *(int32_t *)(param_2 + 0x2c) = 0x2a;
  return 0xffffffffffffffff;
}

// ---- Function: FUN_18014c968 ----
int32_t FUN_18014c968(byte *param_1,uint param_2,int *param_3,longlong param_4)

{
  ushort uVar1;
  int32_t uVar2;
  int *piVar3;
  int32_t local_res18 [2];
  
  piVar3 = &DAT_1801ee8d8;
  if (param_3 != (int *)0x0) {
    piVar3 = param_3;
  }
  uVar1 = (short)param_2 + 0x2400;
  if (*piVar3 == 0) {
    if (0x3ff < uVar1) {
      if ((ushort)((short)param_2 + 0x2800U) < 0x400) {
        *piVar3 = (param_2 & 0x27ff) * 0x400 + 0x10000;
        return 0;
      }
      uVar2 = FUN_18014a5ec(param_1,param_2 & 0xffff,(int32_t *)piVar3,param_4);
      return uVar2;
    }
  }
  else if (uVar1 < 0x400) {
    local_res18[0] = 0;
    uVar2 = FUN_18014a5ec(param_1,(param_2 & 0x23ff) + *piVar3,local_res18,param_4);
    uVar2 = FUN_18014c94c(uVar2,(int32_t *)piVar3);
    return uVar2;
  }
  uVar2 = FUN_18014c954((int32_t *)piVar3,param_4);
  return uVar2;
}

// ---- Function: FUN_18014ca28 ----
uint FUN_18014ca28(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = _get_fpsr();
  _fclrf();
  uVar4 = 0;
  if ((uVar1 & 0x3f) != 0) {
    uVar2 = (uVar1 & 1) << 4;
    uVar4 = uVar2 | 8;
    if ((uVar1 & 4) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 4;
    if ((uVar1 & 8) == 0) {
      uVar2 = uVar4;
    }
    uVar3 = uVar2 | 2;
    if ((uVar1 & 0x10) == 0) {
      uVar3 = uVar2;
    }
    uVar4 = uVar3 | 1;
    if ((uVar1 & 0x20) == 0) {
      uVar4 = uVar3;
    }
    if ((uVar1 & 2) != 0) {
      uVar4 = uVar4 | 0x80000;
    }
  }
  return uVar4;
}

// ---- Function: thunk_FUN_18014ca9c ----
uint thunk_FUN_18014ca9c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = _get_fpsr();
  uVar4 = uVar1 >> 3 & 0x10;
  uVar2 = uVar4 | 8;
  if ((uVar1 & 0x200) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 4;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 2;
  if ((uVar1 & 0x800) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 1;
  if ((uVar1 & 0x1000) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 0x80000;
  if ((uVar1 & 0x100) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar1 & 0x6000;
  if (uVar4 != 0) {
    if (uVar4 == 0x2000) {
      uVar2 = uVar2 | 0x100;
    }
    else if (uVar4 == 0x4000) {
      uVar2 = uVar2 | 0x200;
    }
    else if (uVar4 == 0x6000) {
      uVar2 = uVar2 | 0x300;
    }
  }
  uVar1 = uVar1 & 0x8040;
  if (uVar1 == 0x40) {
    uVar2 = uVar2 | 0x2000000;
  }
  else if (uVar1 == 0x8000) {
    uVar2 = uVar2 | 0x3000000;
  }
  else if (uVar1 == 0x8040) {
    uVar2 = uVar2 | 0x1000000;
  }
  uVar1 = ~(param_2 & 0x308031f) & uVar2 | param_1 & param_2 & 0x308031f;
  if (uVar1 != uVar2) {
    uVar4 = (uVar1 & 0x10) << 3;
    uVar2 = uVar4 | 0x200;
    if ((uVar1 & 8) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x400;
    if ((uVar1 & 4) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x800;
    if ((uVar1 & 2) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x1000;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x100;
    if ((uVar1 >> 0x13 & 1) == 0) {
      uVar2 = uVar4;
    }
    uVar3 = (ulonglong)uVar2;
    uVar4 = uVar1 & 0x300;
    if (uVar4 != 0) {
      if (uVar4 == 0x100) {
        uVar3 = (ulonglong)(uVar2 | 0x2000);
      }
      else if (uVar4 == 0x200) {
        uVar3 = (ulonglong)(uVar2 | 0x4000);
      }
      else if (uVar4 == 0x300) {
        uVar3 = (ulonglong)(uVar2 | 0x6000);
      }
    }
    uVar1 = uVar1 & 0x3000000;
    uVar2 = (uint)uVar3;
    if (uVar1 == 0x1000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8040);
    }
    else if (uVar1 == 0x2000000) {
      uVar3 = (ulonglong)(uVar2 | 0x40);
    }
    else if (uVar1 == 0x3000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8000);
    }
    if ((DAT_1801ebcd0 == '\0') || ((uVar3 & 0x40) == 0)) {
      uVar2 = (uint)uVar3 & 0xffffffbf;
      uVar3 = (ulonglong)uVar2;
      FUN_18014ab90(uVar2);
    }
    else {
      FUN_18014ab90((uint)uVar3);
    }
    uVar4 = (uint)uVar3;
    uVar1 = (uint)(uVar3 >> 3) & 0x10;
    uVar2 = uVar1 | 8;
    if ((uVar3 & 0x200) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 4;
    if ((uVar4 >> 10 & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 2;
    if ((uVar4 >> 0xb & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 1;
    if ((uVar4 >> 0xc & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 0x80000;
    if ((uVar3 & 0x100) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar4 & 0x6000;
    if ((uVar3 & 0x6000) != 0) {
      if (uVar1 == 0x2000) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar1 == 0x4000) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar1 == 0x6000) {
        uVar2 = uVar2 | 0x300;
      }
    }
    uVar4 = uVar4 & 0x8040;
    if (uVar4 == 0x40) {
      uVar2 = uVar2 | 0x2000000;
    }
    else if (uVar4 == 0x8000) {
      uVar2 = uVar2 | 0x3000000;
    }
    else if (uVar4 == 0x8040) {
      uVar2 = uVar2 | 0x1000000;
    }
  }
  return uVar2;
}

// ---- Function: FUN_18014ca9c ----
uint FUN_18014ca9c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = _get_fpsr();
  uVar4 = uVar1 >> 3 & 0x10;
  uVar2 = uVar4 | 8;
  if ((uVar1 & 0x200) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 4;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 2;
  if ((uVar1 & 0x800) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 1;
  if ((uVar1 & 0x1000) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 0x80000;
  if ((uVar1 & 0x100) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar1 & 0x6000;
  if (uVar4 != 0) {
    if (uVar4 == 0x2000) {
      uVar2 = uVar2 | 0x100;
    }
    else if (uVar4 == 0x4000) {
      uVar2 = uVar2 | 0x200;
    }
    else if (uVar4 == 0x6000) {
      uVar2 = uVar2 | 0x300;
    }
  }
  uVar1 = uVar1 & 0x8040;
  if (uVar1 == 0x40) {
    uVar2 = uVar2 | 0x2000000;
  }
  else if (uVar1 == 0x8000) {
    uVar2 = uVar2 | 0x3000000;
  }
  else if (uVar1 == 0x8040) {
    uVar2 = uVar2 | 0x1000000;
  }
  uVar1 = ~(param_2 & 0x308031f) & uVar2 | param_1 & param_2 & 0x308031f;
  if (uVar1 != uVar2) {
    uVar4 = (uVar1 & 0x10) << 3;
    uVar2 = uVar4 | 0x200;
    if ((uVar1 & 8) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x400;
    if ((uVar1 & 4) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x800;
    if ((uVar1 & 2) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x1000;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x100;
    if ((uVar1 >> 0x13 & 1) == 0) {
      uVar2 = uVar4;
    }
    uVar3 = (ulonglong)uVar2;
    uVar4 = uVar1 & 0x300;
    if (uVar4 != 0) {
      if (uVar4 == 0x100) {
        uVar3 = (ulonglong)(uVar2 | 0x2000);
      }
      else if (uVar4 == 0x200) {
        uVar3 = (ulonglong)(uVar2 | 0x4000);
      }
      else if (uVar4 == 0x300) {
        uVar3 = (ulonglong)(uVar2 | 0x6000);
      }
    }
    uVar1 = uVar1 & 0x3000000;
    uVar2 = (uint)uVar3;
    if (uVar1 == 0x1000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8040);
    }
    else if (uVar1 == 0x2000000) {
      uVar3 = (ulonglong)(uVar2 | 0x40);
    }
    else if (uVar1 == 0x3000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8000);
    }
    if ((DAT_1801ebcd0 == '\0') || ((uVar3 & 0x40) == 0)) {
      uVar2 = (uint)uVar3 & 0xffffffbf;
      uVar3 = (ulonglong)uVar2;
      FUN_18014ab90(uVar2);
    }
    else {
      FUN_18014ab90((uint)uVar3);
    }
    uVar4 = (uint)uVar3;
    uVar1 = (uint)(uVar3 >> 3) & 0x10;
    uVar2 = uVar1 | 8;
    if ((uVar3 & 0x200) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 4;
    if ((uVar4 >> 10 & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 2;
    if ((uVar4 >> 0xb & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 1;
    if ((uVar4 >> 0xc & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 0x80000;
    if ((uVar3 & 0x100) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar4 & 0x6000;
    if ((uVar3 & 0x6000) != 0) {
      if (uVar1 == 0x2000) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar1 == 0x4000) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar1 == 0x6000) {
        uVar2 = uVar2 | 0x300;
      }
    }
    uVar4 = uVar4 & 0x8040;
    if (uVar4 == 0x40) {
      uVar2 = uVar2 | 0x2000000;
    }
    else if (uVar4 == 0x8000) {
      uVar2 = uVar2 | 0x3000000;
    }
    else if (uVar4 == 0x8040) {
      uVar2 = uVar2 | 0x1000000;
    }
  }
  return uVar2;
}

// ---- Function: FUN_18014cd38 ----
int32_t
FUN_18014cd38(int param_1,int32_t param_2,int32_t param_3,int32_t param_4,
             int32_t param_5,int32_t param_6,uint param_7)

{
  int32_t uVar1;
  int local_38 [2];
  int32_t local_30;
  int32_t local_28;
  int32_t local_20;
  int32_t local_18;
  
  local_20 = param_5;
  local_18 = param_6;
  local_38[0] = param_1;
  local_30 = param_3;
  local_28 = param_4;
  _ctrlfp(param_7,0xffc0);
  uVar1 = FUN_180144ab8(local_38);
  if ((int)uVar1 == 0) {
    FUN_180141644(param_1);
  }
  return local_18;
}

