#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_18014d9e0 ----
double FUN_18014d9e0(void)

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
  int32_t auVar13 [16];
  int32_t auVar14 [16];
  int32_t auVar15 [16];
  int32_t auVar16 [16];
  int32_t auVar17 [16];
  int32_t auVar18 [16];
  int32_t auVar19 [16];
  int32_t auVar20 [16];
  int32_t auVar21 [16];
  ulonglong uVar22;
  ulonglong uVar23;
  double dVar24;
  uint uVar25;
  int32_t auVar26 [16];
  int32_t auVar27 [16];
  int32_t in_ZMM0 [64];
  double dVar28;
  int32_t auVar29 [16];
  int32_t auVar30 [16];
  int32_t in_ZMM1 [64];
  double dVar31;
  int32_t auVar32 [16];
  int32_t auVar33 [16];
  int32_t auVar34 [16];
  int32_t auVar35 [16];
  int32_t auVar36 [16];
  int32_t auVar37 [16];
  int32_t auVar38 [16];
  int32_t auVar39 [16];
  double dVar40;
  double dVar41;
  int32_t auVar42 [16];
  
  auVar42 = in_ZMM1._0_16_;
  dVar28 = in_ZMM1._0_8_;
  dVar41 = in_ZMM0._0_8_;
  if (DAT_1801ee8e8 != 0) {
    uVar23 = (ulonglong)dVar41 & _DAT_1801da650;
    if ((longlong)DAT_1801da638 < (longlong)uVar23) {
      if ((double)((ulonglong)dVar41 & (ulonglong)DAT_1801da658) != DAT_1801da658) {
        auVar26._8_8_ = 0;
        auVar26._0_8_ = uVar23;
        auVar27._8_8_ = 0;
        auVar27._0_8_ = uVar23;
        if (uVar23 < DAT_1801da648) {
          auVar27 = auVar26;
          uVar25 = FUN_180150860();
          uVar23 = (ulonglong)uVar25;
        }
        else {
          uVar23 = FUN_180150670(uVar23);
        }
        dVar41 = auVar27._0_8_;
        if ((uVar23 & 1) == 0) {
          dVar41 = dVar41 * dVar41;
          dVar28 = DAT_1801da5d0 - dVar41 * DAT_1801da618;
          auVar19._8_8_ = _UNK_1801dbcc8;
          auVar19._0_8_ = DAT_1801dbcc0;
          auVar32._8_8_ = 0;
          auVar32._0_8_ = (DAT_1801da5d0 - dVar28) - dVar41 * DAT_1801da618;
          auVar27 = vfnmadd231sd_fma(auVar32,auVar27,auVar42);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = DAT_1801dbcd0;
          auVar37._8_8_ = 0;
          auVar37._0_8_ = dVar41;
          auVar42 = vfmadd231sd_fma(auVar19,auVar37,auVar9);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = DAT_1801dbcb0;
          auVar42 = vfmadd213sd_fma(auVar42,auVar37,auVar10);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = DAT_1801dbca0;
          auVar42 = vfmadd213sd_fma(auVar42,auVar37,auVar11);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = DAT_1801dbc90;
          auVar42 = vfmadd213sd_fma(auVar42,auVar37,auVar12);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = DAT_1801dbc80;
          auVar42 = vfmadd213sd_fma(auVar42,auVar37,auVar13);
          auVar30._8_8_ = 0;
          auVar30._0_8_ = dVar41 * dVar41;
          auVar42 = vfmadd213sd_fma(auVar42,auVar30,auVar27);
          dVar28 = auVar42._0_8_ + dVar28;
        }
        else {
          auVar21._8_8_ = _UNK_1801dbd28;
          auVar21._0_8_ = _DAT_1801dbd20;
          dVar28 = dVar41 * dVar41;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = DAT_1801dbd30;
          auVar38._8_8_ = 0;
          auVar38._0_8_ = dVar28;
          auVar27 = vfmadd231sd_fma(auVar21,auVar38,auVar14);
          auVar15._8_8_ = 0;
          auVar15._0_8_ = DAT_1801dbd10;
          auVar27 = vfmadd213sd_fma(auVar27,auVar38,auVar15);
          auVar16._8_8_ = 0;
          auVar16._0_8_ = DAT_1801dbd00;
          auVar39._8_8_ = 0;
          auVar39._0_8_ = dVar28;
          auVar27 = vfmadd213sd_fma(auVar27,auVar39,auVar16);
          auVar17._8_8_ = 0;
          auVar17._0_8_ = DAT_1801dbcf0;
          auVar27 = vfmadd213sd_fma(auVar27,auVar39,auVar17);
          auVar18._8_8_ = 0;
          auVar18._0_8_ = DAT_1801dbce0;
          auVar33._8_8_ = 0;
          auVar33._0_8_ =
               dVar28 * (auVar42._0_8_ * DAT_1801da618 - dVar41 * dVar28 * auVar27._0_8_) -
               auVar42._0_8_;
          auVar42._8_8_ = 0;
          auVar42._0_8_ = dVar41 * dVar28;
          auVar42 = vfnmadd231sd_fma(auVar33,auVar42,auVar18);
          dVar28 = dVar41 - auVar42._0_8_;
        }
        uVar22 = 0;
        if (((int)uVar23 + 1U & 2) != 0) {
          uVar22 = DAT_1801da5e0;
        }
        return (double)((ulonglong)dVar28 ^ uVar22);
      }
      dVar41 = (double)FUN_1801508d8((ulonglong)dVar41);
      return dVar41;
    }
    if ((longlong)uVar23 < (longlong)DAT_1801da630) {
      if ((longlong)uVar23 < (longlong)DAT_1801da628) {
        return DAT_1801da5d0;
      }
      auVar1._8_8_ = 0;
      auVar1._0_8_ = DAT_1801da5d0;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = dVar41 * DAT_1801da618;
      auVar42 = vfnmadd213sd_fma(in_ZMM0._0_16_,auVar29,auVar1);
      return auVar42._0_8_;
    }
    dVar41 = dVar41 * dVar41;
    auVar20._8_8_ = _UNK_1801dbcd8;
    auVar20._0_8_ = DAT_1801dbcd0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = DAT_1801dbcc0;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = dVar41;
    auVar42 = vfmadd213sd_fma(auVar20,auVar34,auVar2);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = DAT_1801dbcb0;
    auVar42 = vfmadd213sd_fma(auVar42,auVar34,auVar3);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = DAT_1801dbca0;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = dVar41;
    auVar42 = vfmadd213sd_fma(auVar42,auVar35,auVar4);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = DAT_1801dbc90;
    auVar42 = vfmadd213sd_fma(auVar42,auVar35,auVar5);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = DAT_1801dbc80;
    auVar42 = vfmadd213sd_fma(auVar42,auVar35,auVar6);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = DAT_1801da618;
    auVar42 = vfmsub213sd_fma(auVar42,auVar35,auVar7);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = DAT_1801da5d0;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = dVar41;
    auVar42 = vfmadd213sd_fma(auVar42,auVar36,auVar8);
    return auVar42._0_8_;
  }
  dVar24 = ABS(dVar41);
  if ((ulonglong)DAT_1801da638 <= (ulonglong)dVar24) {
    if ((ulonglong)dVar24 < (ulonglong)DAT_1801da640) {
      uVar23 = (ulonglong)dVar24 >> 0x34;
      uVar25 = (uint)(dVar24 * _DAT_1801da610 + DAT_1801da618);
      dVar31 = (double)(int)uVar25;
      dVar40 = dVar24 - DAT_1801da590 * dVar31;
      dVar28 = DAT_1801da5a0 * dVar31;
      dVar24 = dVar40 - dVar28;
      dVar41 = dVar40;
      if (0xf < (longlong)(uVar23 - ((ulonglong)((longlong)dVar24 << 1) >> 0x35))) {
        dVar41 = dVar40 - DAT_1801da5b0 * dVar31;
        dVar28 = DAT_1801da5c0 * dVar31 - ((dVar40 - dVar41) - DAT_1801da5b0 * dVar31);
        dVar24 = dVar41 - dVar28;
      }
      dVar28 = (dVar41 - dVar24) - dVar28;
    }
    else {
      if ((ulonglong)DAT_1801da658 <= (ulonglong)dVar24) {
        dVar41 = (double)FUN_1801508d8((ulonglong)dVar41);
        return dVar41;
      }
      uVar23 = FUN_180150320((ulonglong)dVar24);
      uVar25 = (uint)uVar23;
    }
    dVar41 = dVar24 * dVar24;
    if ((uVar25 & 1) == 0) {
      dVar24 = (((DAT_1801dbca0 * dVar41 + DAT_1801dbc90) * dVar41 + DAT_1801dbc80 +
                ((DAT_1801dbcd0 * dVar41 + DAT_1801dbcc0) * dVar41 + DAT_1801dbcb0) *
                dVar41 * dVar41 * dVar41) * dVar41 * dVar41 +
               ((((DAT_1801da618 * dVar41 - DAT_1801da5d0) + DAT_1801da5d0) - dVar41 * DAT_1801da618
                ) - dVar28 * dVar24)) - (dVar41 * DAT_1801da618 - DAT_1801da5d0);
    }
    else {
      dVar24 = dVar28 + (dVar24 * dVar41 *
                         (((DAT_1801dbd30 * dVar41 + _DAT_1801dbd20) * dVar41 + DAT_1801dbd10) *
                          dVar41 * dVar41 * dVar41 +
                         (DAT_1801dbd00 * dVar41 + DAT_1801dbcf0) * dVar41 + DAT_1801dbce0) -
                        dVar41 * DAT_1801da618 * dVar28) + dVar24;
    }
    if ((uVar25 + 1 & 2) != 0) {
      dVar24 = 0.0 - dVar24;
    }
    return dVar24;
  }
  if ((ulonglong)DAT_1801da630 <= (ulonglong)dVar24) {
    dVar41 = dVar41 * dVar41;
    dVar24 = dVar41 * dVar41;
    dVar28 = dVar41 * _DAT_1801da620 + DAT_1801da5d0;
    return (DAT_1801da5d0 - dVar28) + dVar41 * _DAT_1801da620 +
           (DAT_1801dbc90 * dVar41 + DAT_1801dbc80) * dVar24 +
           (DAT_1801dbcb0 * dVar41 + DAT_1801dbca0) * dVar24 * dVar24 +
           dVar24 * dVar24 * dVar24 * (DAT_1801dbcd0 * dVar41 + DAT_1801dbcc0) + dVar28;
  }
  if ((ulonglong)DAT_1801da628 <= (ulonglong)dVar24) {
    return DAT_1801da5d0 - dVar41 * dVar41 * DAT_1801da618;
  }
  return DAT_1801da5d0;
}

// ---- Function: FUN_18014df60 ----
int32_t FUN_18014df60(void)

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
  int32_t auVar13 [16];
  ulonglong uVar14;
  double dVar15;
  float fVar16;
  uint uVar17;
  int32_t auVar19 [16];
  int32_t auVar20 [16];
  int32_t auVar21 [16];
  int32_t auVar22 [16];
  int32_t auVar23 [16];
  int32_t auVar24 [16];
  int32_t auVar25 [16];
  int32_t uVar18;
  int32_t in_ZMM0 [64];
  int32_t auVar26 [64];
  int32_t auVar27 [64];
  int32_t auVar28 [64];
  int32_t auVar29 [64];
  int32_t auVar30 [64];
  int32_t auVar31 [64];
  int32_t auVar32 [64];
  int32_t auVar33 [64];
  int32_t auVar34 [16];
  int32_t auVar35 [16];
  int32_t auVar36 [16];
  double dVar37;
  int32_t auVar38 [16];
  int32_t auVar39 [16];
  int32_t auVar40 [16];
  int32_t auVar41 [16];
  int32_t auVar42 [16];
  int32_t auVar43 [16];
  int32_t auVar44 [16];
  int32_t auVar45 [16];
  int32_t auVar46 [16];
  int32_t auVar47 [16];
  double dVar48;
  int32_t auVar49 [16];
  
  fVar16 = in_ZMM0._0_4_;
  auVar26._8_56_ = in_ZMM0._8_56_;
  auVar27._16_48_ = in_ZMM0._16_48_;
  if (DAT_1801ee8e8 != 0) {
    if (((uint)fVar16 & DAT_1801da780) == DAT_1801da780) {
      uVar18 = FUN_1801508ec(fVar16);
      return uVar18;
    }
    auVar49._0_8_ = (double)fVar16;
    auVar49._8_8_ = in_ZMM0._8_8_;
    dVar15 = ABS(auVar49._0_8_);
    if (DAT_1801da6b0 < (longlong)dVar15) {
      if ((longlong)dVar15 < DAT_1801da710) {
        auVar22._8_8_ = 0;
        auVar22._0_8_ = dVar15;
        auVar49 = vandpd_avx(auVar22,_DAT_1801da720);
        auVar13._8_8_ = _UNK_1801da698;
        auVar13._0_8_ = DAT_1801da690;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = DAT_1801da680;
        auVar49 = vfmadd213sd_fma(auVar13,auVar49,auVar5);
        auVar39._0_4_ = (int)auVar49._0_8_;
        auVar39._4_4_ = (int)auVar49._8_8_;
        auVar39._8_8_ = 0;
        auVar23 = vpmovsxdq_avx(auVar39);
        auVar49 = vandpd_avx(auVar23,_DAT_1801da730);
        auVar23 = vshufps_avx(auVar23,auVar23,8);
        auVar5 = vcvtdq2pd_avx(auVar23);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = DAT_1801da6c0;
        auVar6 = vfnmadd231sd_fma(auVar22,auVar5,auVar6);
        auVar23._8_8_ = 0;
        auVar23._0_8_ = auVar6._0_8_ - auVar5._0_8_ * DAT_1801da6d0;
        uVar14 = auVar49._0_8_;
      }
      else {
        auVar23._8_8_ = 0;
        auVar23._0_8_ = dVar15;
        if ((longlong)dVar15 < DAT_1801da710) {
          uVar17 = FUN_180150860();
          uVar14 = (ulonglong)uVar17;
        }
        else {
          uVar14 = FUN_180150670((ulonglong)dVar15);
        }
      }
      dVar15 = auVar23._0_8_;
      if ((uVar14 & 1) == 0) {
        dVar15 = dVar15 * dVar15;
        auVar36._8_8_ = 0;
        auVar36._0_8_ = DAT_1801dc098;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = DAT_1801dc0a0;
        auVar46._8_8_ = 0;
        auVar46._0_8_ = dVar15;
        auVar49 = vfmadd231sd_fma(auVar36,auVar46,auVar10);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = DAT_1801dc090;
        auVar49 = vfmadd213sd_fma(auVar49,auVar46,auVar11);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = DAT_1801dc088;
        auVar49 = vfmadd213sd_fma(auVar49,auVar46,auVar12);
        auVar40._8_8_ = 0;
        auVar40._0_8_ = DAT_1801da670 - dVar15 * DAT_1801da680;
        auVar47._8_8_ = 0;
        auVar47._0_8_ = dVar15 * dVar15;
        auVar49 = vfmadd231sd_fma(auVar40,auVar49,auVar47);
      }
      else {
        auVar35._8_8_ = 0;
        auVar35._0_8_ = DAT_1801dc0c0;
        dVar37 = dVar15 * dVar15;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = DAT_1801dc0c8;
        auVar43._8_8_ = 0;
        auVar43._0_8_ = dVar37;
        auVar49 = vfmadd231sd_fma(auVar35,auVar43,auVar7);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = DAT_1801dc0b8;
        auVar49 = vfmadd213sd_fma(auVar49,auVar43,auVar8);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = DAT_1801dc0b0;
        auVar44._8_8_ = 0;
        auVar44._0_8_ = dVar37;
        auVar49 = vfmadd213sd_fma(auVar49,auVar44,auVar9);
        auVar45._8_8_ = 0;
        auVar45._0_8_ = dVar15 * dVar37;
        auVar49 = vfmadd231sd_fma(auVar23,auVar49,auVar45);
      }
      auVar24._0_8_ = (double)(auVar49._0_8_ ^ (uVar14 + 1 >> 1) << 0x3f);
      auVar24._8_8_ = auVar49._8_8_;
      auVar25._0_4_ = (float)auVar24._0_8_;
      auVar25._4_12_ = auVar24._4_12_;
      return auVar25._0_8_;
    }
    if (DAT_1801da750 <= (longlong)dVar15) {
      dVar15 = auVar49._0_8_ * auVar49._0_8_;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = DAT_1801dc098;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = DAT_1801dc0a0;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = dVar15;
      auVar49 = vfmadd231sd_fma(auVar34,auVar41,auVar2);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = DAT_1801dc090;
      auVar49 = vfmadd213sd_fma(auVar49,auVar41,auVar3);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = DAT_1801dc088;
      auVar49 = vfmadd213sd_fma(auVar49,auVar41,auVar4);
      auVar38._8_8_ = 0;
      auVar38._0_8_ = DAT_1801da670 - dVar15 * DAT_1801da680;
      auVar42._8_8_ = 0;
      auVar42._0_8_ = dVar15 * dVar15;
      auVar49 = vfmadd231sd_fma(auVar38,auVar49,auVar42);
      auVar21._0_4_ = (float)auVar49._0_8_;
      auVar21._4_12_ = auVar49._4_12_;
      return auVar21._0_8_;
    }
    if ((longlong)dVar15 < DAT_1801da760) {
      return (ulonglong)DAT_1801da778;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = DAT_1801da670;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = auVar49._0_8_ * DAT_1801da680;
    auVar49 = vfnmadd213sd_fma(auVar19,auVar49,auVar1);
    auVar20._0_4_ = (float)auVar49._0_8_;
    auVar20._4_12_ = auVar49._4_12_;
    return auVar20._0_8_;
  }
  if (((uint)fVar16 & 0x7f800000) == 0x7f800000) {
    uVar18 = FUN_1801508ec(fVar16);
    return uVar18;
  }
  auVar26._0_8_ = (double)fVar16;
  dVar15 = ABS(auVar26._0_8_);
  if ((longlong)dVar15 < 0x3fe921fb54442d19) {
    uVar17 = 0;
    auVar27 = auVar26;
  }
  else {
    auVar27._8_8_ = 0;
    auVar27._0_8_ = dVar15;
    if ((ulonglong)dVar15 < (ulonglong)DAT_1801da700) {
      uVar17 = (uint)(dVar15 * DAT_1801da690 + DAT_1801da680);
      dVar37 = (double)(int)uVar17;
      dVar48 = dVar15 - DAT_1801da6c0 * dVar37;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = dVar48;
      auVar28._16_48_ = auVar27._16_48_;
      auVar29._8_56_ = auVar28._8_56_;
      auVar29._0_8_ = dVar48 - DAT_1801da6d0 * dVar37;
      uVar14 = (ulonglong)((longlong)auVar29._0_8_ << 1) >> 0x35;
      if (0xf < (longlong)(((ulonglong)dVar15 >> 0x34) - uVar14)) {
        dVar15 = dVar48 - DAT_1801da6e0 * dVar37;
        auVar30._8_8_ = 0;
        auVar30._0_8_ = dVar15;
        auVar30._16_48_ = auVar27._16_48_;
        auVar29._8_56_ = auVar30._8_56_;
        auVar29._0_8_ =
             dVar15 - (DAT_1801da6f0 * dVar37 - ((dVar48 - dVar15) - DAT_1801da6e0 * dVar37));
      }
      auVar27 = auVar29;
      if (uVar14 < 0x3f2) {
        auVar31._16_48_ = auVar29._16_48_;
        if (uVar14 < 0x3df) {
          if ((uVar17 & 1) == 0) {
            auVar29._8_8_ = 0;
            auVar29._0_8_ = DAT_1801da670;
            auVar29._16_48_ = auVar31._16_48_;
          }
        }
        else {
          dVar15 = auVar29._0_8_;
          if ((uVar17 & 1) == 0) {
            auVar31._8_8_ = 0;
            auVar31._0_8_ = DAT_1801da670;
            auVar29._8_56_ = auVar31._8_56_;
            auVar29._0_8_ = DAT_1801da670 - dVar15 * dVar15 * DAT_1801da680;
          }
          else {
            auVar29._0_8_ = dVar15 - DAT_1801da6a0 * dVar15 * dVar15 * dVar15;
          }
        }
        goto LAB_18014e204;
      }
    }
    else {
      uVar14 = FUN_180150a50((ulonglong)dVar15);
      uVar17 = (uint)uVar14;
    }
  }
  dVar15 = auVar27._0_8_;
  dVar37 = dVar15 * dVar15;
  auVar29._8_56_ = auVar27._8_56_;
  if ((uVar17 & 1) == 0) {
    auVar32._16_48_ = auVar27._16_48_;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = DAT_1801dc080;
    auVar29._8_56_ = auVar32._8_56_;
    auVar29._0_8_ =
         DAT_1801dc080 * dVar37 + DAT_1801da670 +
         ((DAT_1801dc0a0 * dVar37 + DAT_1801dc098) * dVar37 * dVar37 +
         DAT_1801dc090 * dVar37 + DAT_1801dc088) * dVar37 * dVar37;
  }
  else {
    auVar29._0_8_ =
         dVar15 + ((DAT_1801dc0c8 * dVar37 + DAT_1801dc0c0) * dVar37 * dVar37 +
                  DAT_1801dc0b8 * dVar37 + DAT_1801dc0b0) * dVar15 * dVar37;
  }
LAB_18014e204:
  if ((uVar17 + 1 & 2) != 0) {
    dVar15 = auVar29._0_8_;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = 0.0 - dVar15;
  }
  auVar33._4_60_ = auVar29._4_60_;
  auVar33._0_4_ = (float)auVar29._0_8_;
  return auVar33._0_8_;
}

// ---- Function: FUN_18014fb00 ----
int32_t FUN_18014fb00(void)

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
  int32_t auVar13 [16];
  bool bVar14;
  int32_t auVar15 [16];
  int32_t auVar16 [16];
  int32_t auVar17 [16];
  int32_t auVar18 [16];
  int32_t auVar19 [16];
  int32_t auVar20 [16];
  int32_t auVar21 [16];
  int32_t auVar22 [16];
  int32_t auVar23 [16];
  ulonglong uVar24;
  sbyte sVar25;
  byte bVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  double dVar32;
  longlong lVar33;
  ulonglong uVar34;
  uint uVar35;
  ulonglong uVar36;
  bool bVar37;
  float fVar38;
  int32_t uVar41;
  int32_t auVar42 [16];
  int32_t auVar43 [16];
  int32_t auVar44 [16];
  int32_t auVar45 [16];
  int32_t auVar46 [16];
  double dVar39;
  int32_t in_ZMM0 [64];
  int32_t auVar47 [64];
  double dVar40;
  int32_t auVar48 [64];
  int32_t auVar49 [64];
  int32_t extraout_var [56];
  int32_t auVar50 [64];
  int32_t auVar51 [64];
  int32_t auVar52 [64];
  int32_t auVar53 [16];
  int32_t auVar54 [16];
  int32_t auVar55 [16];
  double dVar56;
  int32_t auVar57 [16];
  int32_t auVar58 [16];
  int32_t auVar59 [16];
  int32_t auVar60 [16];
  int32_t auVar61 [16];
  int32_t auVar62 [16];
  int32_t auVar63 [16];
  int32_t auVar64 [16];
  int32_t auVar65 [16];
  int32_t auVar66 [16];
  int32_t auVar67 [16];
  int32_t auVar68 [16];
  int32_t auVar69 [16];
  int32_t auVar70 [16];
  uint local_38 [2];
  double local_30 [6];
  
  fVar38 = in_ZMM0._0_4_;
  if (DAT_1801ee8e8 != 0) {
    if (((uint)fVar38 & DAT_1801dbbf0) == DAT_1801dbbf0) {
      uVar41 = FUN_180150a30(fVar38);
      return uVar41;
    }
    auVar70._0_8_ = (double)fVar38;
    auVar70._8_8_ = in_ZMM0._8_8_;
    dVar39 = ABS(auVar70._0_8_);
    if (DAT_1801dbc20 < (longlong)dVar39) {
      if ((longlong)dVar39 < DAT_1801dbc50) {
        auVar43._8_8_ = 0;
        auVar43._0_8_ = dVar39;
        auVar69 = vandpd_avx(auVar43,_DAT_1801dbb50);
        auVar23._8_8_ = _UNK_1801dbb98;
        auVar23._0_8_ = DAT_1801dbb90;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = DAT_1801dbb80;
        auVar69 = vfmadd213sd_fma(auVar23,auVar69,auVar5);
        auVar57._0_4_ = (int)auVar69._0_8_;
        auVar57._4_4_ = (int)auVar69._8_8_;
        auVar57._8_8_ = 0;
        auVar18 = vpmovsxdq_avx(auVar57);
        auVar22._8_8_ = _UNK_1801dbb78;
        auVar22._0_8_ = _DAT_1801dbb70;
        auVar69 = vandpd_avx(auVar18,auVar22);
        auVar18 = vshufps_avx(auVar18,auVar18,8);
        auVar18 = vcvtdq2pd_avx(auVar18);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = DAT_1801dbba0;
        auVar19 = vfnmadd231sd_fma(auVar43,auVar18,auVar6);
        dVar39 = auVar19._0_8_ - auVar18._0_8_ * DAT_1801dbbc0;
      }
      else {
        uVar36 = ((ulonglong)dVar39 >> 0x34) - 0x3ff;
        lVar33 = -((uVar36 >> 3) - 0x86);
        uVar28 = (ulonglong)auVar70._0_8_ & 0xfffffffffffff | 0x10000000000000;
        auVar69._8_8_ = 0;
        auVar69._0_8_ = *(ulonglong *)(&DAT_1801dd4f0 + lVar33);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar28;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = SUB168(auVar69 * auVar15,8);
        uVar27 = SUB168(auVar69 * auVar15,0);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = *(ulonglong *)(&UNK_1801dd4f8 + lVar33);
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar28;
        uVar36 = uVar36 & 7;
        auVar20 = auVar18 * auVar16 + auVar20;
        uVar24 = auVar20._0_8_;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = *(ulonglong *)(&UNK_1801dd500 + lVar33);
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar28;
        uVar34 = auVar20._8_8_ + SUB168(auVar19 * auVar17,0);
        uVar31 = 0;
        bVar26 = (byte)(0x36 - uVar36) & 0x3f;
        uVar28 = uVar34 >> bVar26;
        bVar37 = (0x36 - uVar36 & 0x3f) != 0;
        bVar14 = (uVar34 >> bVar26 - 1 & 1) != 0;
        if (bVar37 && bVar14) {
          uVar34 = ~uVar34;
          uVar24 = ~uVar24;
          uVar27 = ~uVar27;
          uVar31 = 0x8000000000000000;
        }
        auVar69 = ZEXT416((int)uVar28 + (uint)(bVar37 && bVar14) & 3);
        sVar25 = (char)uVar36 + 10;
        uVar28 = (uVar34 << sVar25) >> sVar25;
        lVar29 = uVar36 - 0x36;
        lVar33 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar33 == 0; lVar33 = lVar33 + -1) {
          }
        }
        uVar34 = uVar24;
        if (uVar28 == 0) {
          lVar33 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar33 == 0; lVar33 = lVar33 + -1) {
            }
          }
          lVar29 = uVar36 - 0x76;
          uVar34 = uVar27;
          uVar28 = uVar24;
        }
        lVar30 = lVar33 + -0x34;
        if (lVar30 < 0) {
          bVar26 = -(byte)lVar30;
          uVar28 = uVar28 << (bVar26 & 0x3f) | uVar34 >> (-(bVar26 - 0x40) & 0x3f);
        }
        else if (lVar30 != 0) {
          uVar28 = uVar28 >> ((byte)lVar30 & 0x3f);
        }
        dVar39 = (double)(uVar28 & 0xffefffffffffffff | uVar31 | lVar29 + lVar33 + 0x3ff << 0x34) *
                 DAT_1801dbc10;
      }
      uVar27 = auVar69._0_8_;
      if ((uVar27 & 1) == 1) {
        auVar21._8_8_ = _UNK_1801dbb68;
        auVar21._0_8_ = DAT_1801dbb60;
        dVar39 = dVar39 * dVar39;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = DAT_1801dc080;
        auVar65._8_8_ = 0;
        auVar65._0_8_ = dVar39;
        auVar19 = vfmadd231sd_fma(auVar21,auVar65,auVar10);
        auVar55._8_8_ = 0;
        auVar55._0_8_ = DAT_1801dc098;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = DAT_1801dc0a0;
        auVar18 = vfmadd231sd_fma(auVar55,auVar65,auVar11);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = DAT_1801dc090;
        auVar66._8_8_ = 0;
        auVar66._0_8_ = dVar39;
        auVar18 = vfmadd213sd_fma(auVar18,auVar66,auVar12);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = DAT_1801dc088;
        auVar18 = vfmadd213sd_fma(auVar18,auVar66,auVar13);
        auVar67._8_8_ = 0;
        auVar67._0_8_ = dVar39 * dVar39;
        auVar18 = vfmadd231sd_fma(auVar19,auVar18,auVar67);
      }
      else {
        auVar54._8_8_ = 0;
        auVar54._0_8_ = DAT_1801dc0c0;
        dVar32 = dVar39 * dVar39;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = DAT_1801dc0c8;
        auVar62._8_8_ = 0;
        auVar62._0_8_ = dVar32;
        auVar18 = vfmadd231sd_fma(auVar54,auVar62,auVar7);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = DAT_1801dc0b8;
        auVar18 = vfmadd213sd_fma(auVar18,auVar62,auVar8);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = DAT_1801dc0b0;
        auVar63._8_8_ = 0;
        auVar63._0_8_ = dVar32;
        auVar18 = vfmadd213sd_fma(auVar18,auVar63,auVar9);
        auVar44._8_8_ = 0;
        auVar44._0_8_ = dVar39;
        auVar64._8_8_ = 0;
        auVar64._0_8_ = dVar39 * dVar32;
        auVar18 = vfmadd231sd_fma(auVar44,auVar18,auVar64);
      }
      auVar58._0_8_ = -(ulonglong)(uVar27 == _DAT_1801dbc00);
      auVar58._8_8_ = -(ulonglong)(auVar69._8_8_ == _UNK_1801dbc08);
      auVar68._0_8_ = -(ulonglong)(uVar27 == _DAT_1801dbb70);
      auVar68._8_8_ = -(ulonglong)(auVar69._8_8_ == _UNK_1801dbb78);
      auVar69 = vorpd_avx(auVar58,auVar68);
      auVar69 = vandnpd_avx(auVar69,_DAT_1801dbb40);
      auVar70 = vandnpd_avx(auVar70,_DAT_1801dbb40);
      auVar45._0_8_ = auVar70._0_8_ ^ auVar18._0_8_ ^ auVar69._0_8_;
      auVar45._8_8_ = auVar70._8_8_ ^ auVar18._8_8_ ^ auVar69._8_8_;
    }
    else if ((longlong)dVar39 < DAT_1801dbc40) {
      if ((longlong)dVar39 < DAT_1801dbc30) {
        return in_ZMM0._0_8_;
      }
      auVar1._8_8_ = 0;
      auVar1._0_8_ = DAT_1801dbbb0;
      auVar42._8_8_ = 0;
      auVar42._0_8_ = auVar70._0_8_ * auVar70._0_8_ * auVar70._0_8_;
      auVar45 = vfnmadd132sd_fma(auVar42,auVar70,auVar1);
    }
    else {
      auVar53._8_8_ = 0;
      auVar53._0_8_ = DAT_1801dc0c0;
      dVar39 = auVar70._0_8_ * auVar70._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = DAT_1801dc0c8;
      auVar59._8_8_ = 0;
      auVar59._0_8_ = dVar39;
      auVar69 = vfmadd231sd_fma(auVar53,auVar59,auVar2);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = DAT_1801dc0b8;
      auVar69 = vfmadd213sd_fma(auVar69,auVar59,auVar3);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = DAT_1801dc0b0;
      auVar60._8_8_ = 0;
      auVar60._0_8_ = dVar39;
      auVar69 = vfmadd213sd_fma(auVar69,auVar60,auVar4);
      auVar61._8_8_ = 0;
      auVar61._0_8_ = auVar70._0_8_ * dVar39;
      auVar45 = vfmadd231sd_fma(auVar70,auVar69,auVar61);
    }
    auVar46._0_4_ = (float)auVar45._0_8_;
    auVar46._4_12_ = auVar45._4_12_;
    return auVar46._0_8_;
  }
  if (((uint)fVar38 & 0x7f800000) == 0x7f800000) {
    uVar41 = FUN_180150a30(fVar38);
    return uVar41;
  }
  auVar47._8_56_ = in_ZMM0._8_56_;
  dVar39 = (double)fVar38;
  dVar32 = ABS(dVar39);
  if ((longlong)dVar32 < 0x3fe921fb54442d19) {
    if ((longlong)dVar32 < 0x3f80000000000000) {
      if ((longlong)dVar32 < 0x3f20000000000000) {
        return in_ZMM0._0_8_;
      }
      auVar47._0_8_ = dVar39 - dVar39 * dVar39 * dVar39 * DAT_1801dbbb0;
    }
    else {
      dVar32 = dVar39 * dVar39;
      auVar47._0_8_ =
           dVar39 + ((DAT_1801dc0c8 * dVar32 + DAT_1801dc0c0) * dVar32 * dVar32 +
                    DAT_1801dc0b8 * dVar32 + DAT_1801dc0b0) * dVar39 * dVar32;
    }
    goto LAB_18014fe86;
  }
  bVar37 = dVar39 != dVar32;
  if (bVar37) {
    dVar39 = 0.0 - dVar39;
  }
  if ((ulonglong)dVar32 < (ulonglong)DAT_1801dbc58) {
    local_38[0] = (uint)(dVar39 * DAT_1801dbb90 + DAT_1801dbb80);
    auVar48._16_48_ = in_ZMM0._16_48_;
    auVar48._0_16_ = ZEXT416(local_38[0]);
    dVar56 = (double)(int)local_38[0];
    dVar39 = dVar39 - DAT_1801dbba0 * dVar56;
    auVar47._8_56_ = auVar48._8_56_;
    dVar40 = dVar39 - DAT_1801dbbc0 * dVar56;
    uVar27 = (ulonglong)((longlong)dVar40 << 1) >> 0x35;
    if (0xf < (longlong)(((ulonglong)dVar32 >> 0x34) - uVar27)) {
      dVar40 = dVar39 - DAT_1801dbbd0 * dVar56;
      dVar40 = dVar40 - (DAT_1801dbbe0 * dVar56 - ((dVar39 - dVar40) - DAT_1801dbbd0 * dVar56));
    }
    auVar47._0_8_ = dVar40;
    if (0x3f1 < uVar27) goto LAB_18014fdae;
    if (uVar27 < 0x3df) {
      if ((local_38[0] & 1) != 0) {
        auVar47._8_8_ = 0;
        auVar47._0_8_ = DAT_1801dbb60;
        auVar47._16_48_ = auVar48._16_48_;
      }
    }
    else if ((local_38[0] & 1) == 0) {
      auVar47._0_8_ = dVar40 - DAT_1801dbbb0 * dVar40 * dVar40 * dVar40;
    }
    else {
      auVar49._8_8_ = 0;
      auVar49._0_8_ = DAT_1801dbb60;
      auVar49._16_48_ = auVar48._16_48_;
      auVar47._8_56_ = auVar49._8_56_;
      auVar47._0_8_ = DAT_1801dbb60 - dVar40 * dVar40 * DAT_1801dbb80;
    }
  }
  else {
    auVar47._0_8_ = (double)__remainder_piby2d2f_forC((ulonglong)dVar39,local_30,local_38);
    auVar47._8_56_ = extraout_var;
LAB_18014fdae:
    dVar39 = auVar47._0_8_;
    dVar32 = dVar39 * dVar39;
    if ((local_38[0] & 1) == 0) {
      auVar47._0_8_ =
           dVar39 + ((DAT_1801dc0c8 * dVar32 + DAT_1801dc0c0) * dVar32 * dVar32 +
                    DAT_1801dc0b8 * dVar32 + DAT_1801dc0b0) * dVar39 * dVar32;
    }
    else {
      auVar50._16_48_ = auVar47._16_48_;
      auVar50._8_8_ = 0;
      auVar50._0_8_ = DAT_1801dc080;
      auVar47._8_56_ = auVar50._8_56_;
      auVar47._0_8_ =
           DAT_1801dc080 * dVar32 + DAT_1801dbb60 +
           ((DAT_1801dc0a0 * dVar32 + DAT_1801dc098) * dVar32 * dVar32 +
           DAT_1801dc090 * dVar32 + DAT_1801dc088) * dVar32 * dVar32;
    }
  }
  uVar35 = (uint)bVar37;
  if ((local_38[0] >> 1 & uVar35) == 0 && (~(local_38[0] >> 1) & ~uVar35 & 1) == 0) {
    dVar39 = auVar47._0_8_;
    auVar51._16_48_ = auVar47._16_48_;
    auVar51._0_16_ = ZEXT816(0);
    auVar47._8_56_ = auVar51._8_56_;
    auVar47._0_8_ = 0.0 - dVar39;
  }
LAB_18014fe86:
  auVar52._4_60_ = auVar47._4_60_;
  auVar52._0_4_ = (float)auVar47._0_8_;
  return auVar52._0_8_;
}

// ---- Function: FUN_1801501f8 ----
float FUN_1801501f8(float param_1)

{
  float fVar1;
  
  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    if (((uint)param_1 & 0x7fffff) != 0) {
      fVar1 = (float)_handle_nanf((uint)param_1);
      return fVar1;
    }
    if ((int)param_1 < 0) goto LAB_180150230;
  }
  if (-1 < (int)param_1 || ABS(param_1) == 0.0) {
    return SQRT(param_1);
  }
LAB_180150230:
  fVar1 = (float)FUN_18014cf84("sqrtf",5,-NAN,1,8,0x21,param_1,0.0,1);
  return fVar1;
}

// ---- Function: strcmp ----
/* Library Function - Single Match
    strcmp
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

int __cdecl strcmp(char *_Str1,char *_Str2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)_Str2 - (longlong)_Str1;
  uVar2 = (ulonglong)_Str1 & 7;
  while( true ) {
    if (uVar2 == 0) {
      while ((((int)lVar3 + (int)_Str1 & 0xfffU) < 0xff9 &&
             (uVar2 = *(ulonglong *)_Str1, uVar2 == *(ulonglong *)(lVar3 + (longlong)_Str1)))) {
        _Str1 = (char *)((longlong)_Str1 + 8);
        if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
          return 0;
        }
      }
    }
    bVar1 = (byte)*(ulonglong *)_Str1;
    if (bVar1 != *(byte *)(lVar3 + (longlong)_Str1)) break;
    _Str1 = (char *)((longlong)_Str1 + 1);
    if (bVar1 == 0) {
      return 0;
    }
    uVar2 = (ulonglong)_Str1 & 7;
  }
  return -(uint)(bVar1 < *(byte *)(lVar3 + (longlong)_Str1)) | 1;
}

// ---- Function: FUN_180150320 ----
ulonglong FUN_180150320(ulonglong param_1)

{
  bool bVar1;
  bool bVar2;
  int32_t auVar3 [16];
  int32_t auVar4 [16];
  int32_t auVar5 [16];
  int32_t auVar6 [16];
  int32_t auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  sbyte sVar10;
  byte bVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  uVar16 = (param_1 >> 0x34) - 0x3ff;
  lVar14 = -((uVar16 >> 3) - 0x86);
  uVar12 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulonglong *)(&DAT_1801dbe60 + lVar14);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar12;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = SUB168(auVar3 * auVar5,8);
  uVar8 = SUB168(auVar3 * auVar5,0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(ulonglong *)(&UNK_1801dbe68 + lVar14);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  uVar16 = uVar16 & 7;
  auVar7 = auVar4 * auVar6 + auVar7;
  uVar9 = auVar7._0_8_;
  uVar15 = auVar7._8_8_ + *(longlong *)(&UNK_1801dbe70 + lVar14) * uVar12;
  uVar13 = 0x36 - uVar16;
  bVar11 = (byte)uVar13 & 0x3f;
  uVar12 = uVar15 >> bVar11;
  bVar1 = (uVar13 & 0x3f) != 0;
  bVar2 = (uVar15 >> bVar11 - 1 & 1) != 0;
  if (bVar1 && bVar2) {
    uVar15 = ~uVar15;
    uVar9 = ~uVar9;
    uVar8 = ~uVar8;
  }
  sVar10 = (char)uVar16 + 10;
  uVar13 = (uVar15 << sVar10) >> sVar10;
  lVar14 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  uVar15 = uVar8;
  uVar16 = uVar9;
  if (uVar13 == 0) {
    uVar15 = 0;
    lVar14 = 0x3f;
    uVar16 = uVar8;
    uVar13 = uVar9;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
  }
  lVar14 = lVar14 + -0x34;
  bVar11 = (byte)lVar14;
  if (lVar14 < 0) {
    uVar16 = uVar16 << (-bVar11 & 0x3f) | uVar15 >> (-(-bVar11 - 0x40) & 0x3f);
  }
  else if (lVar14 != 0) {
    uVar16 = uVar16 >> (bVar11 & 0x3f) | uVar13 << (-(bVar11 - 0x40) & 0x3f);
  }
  lVar14 = 0x3f;
  if (uVar16 != 0) {
    for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  return uVar12 + (bVar1 && bVar2) & 3;
}

// ---- Function: FUN_180150670 ----
ulonglong FUN_180150670(ulonglong param_1)

{
  int32_t auVar1 [16];
  int32_t auVar2 [16];
  int32_t auVar3 [16];
  int32_t auVar4 [16];
  bool bVar5;
  bool bVar6;
  int32_t auVar7 [16];
  int32_t auVar8 [16];
  int32_t auVar9 [16];
  int32_t auVar10 [16];
  int32_t auVar11 [16];
  int32_t auVar12 [16];
  ulonglong uVar13;
  ulonglong uVar14;
  sbyte sVar15;
  byte bVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  double dVar25;
  ulonglong uVar26;
  int32_t auVar27 [16];
  int32_t auVar28 [16];
  int32_t auVar29 [16];
  int32_t auVar30 [16];
  int32_t auVar31 [16];
  
  uVar26 = (param_1 >> 0x34) - 0x3ff;
  lVar23 = -((uVar26 >> 3) - 0x86);
  uVar17 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = *(ulonglong *)(&DAT_1801dd4f0 + lVar23);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar17;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = SUB168(auVar27 * auVar9,8);
  uVar13 = SUB168(auVar27 * auVar9,0);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = SUB168(*(int32_t (*) [16])(&UNK_1801dd4f8 + lVar23),0);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar17;
  uVar26 = uVar26 & 7;
  auVar27 = vpsrldq_avx(*(int32_t (*) [16])(&UNK_1801dd4f8 + lVar23),8);
  auVar12 = auVar7 * auVar10 + auVar12;
  uVar14 = auVar12._0_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = auVar27._0_8_;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar17;
  uVar24 = auVar12._8_8_ + SUB168(auVar8 * auVar11,0);
  uVar20 = 0;
  bVar16 = (byte)(0x36 - uVar26) & 0x3f;
  uVar17 = uVar24 >> bVar16;
  bVar5 = (0x36 - uVar26 & 0x3f) != 0;
  bVar6 = (uVar24 >> bVar16 - 1 & 1) != 0;
  if (bVar5 && bVar6) {
    uVar24 = ~uVar24;
    uVar14 = ~uVar14;
    uVar13 = ~uVar13;
    uVar20 = 0x8000000000000000;
  }
  sVar15 = (char)uVar26 + 10;
  uVar24 = (uVar24 << sVar15) >> sVar15;
  lVar18 = uVar26 - 0x36;
  lVar23 = 0x3f;
  if (uVar24 != 0) {
    for (; uVar24 >> lVar23 == 0; lVar23 = lVar23 + -1) {
    }
  }
  uVar21 = uVar13;
  uVar22 = uVar14;
  if (uVar24 == 0) {
    uVar21 = 0;
    lVar23 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    lVar18 = uVar26 - 0x76;
    uVar22 = uVar13;
    uVar24 = uVar14;
  }
  lVar19 = lVar23 + -0x34;
  bVar16 = (byte)lVar19;
  if (lVar19 < 0) {
    bVar16 = -bVar16;
    uVar13 = uVar24 << (bVar16 & 0x3f) | uVar22 >> (-(bVar16 - 0x40) & 0x3f);
    uVar22 = uVar22 << (bVar16 & 0x3f) | uVar21 >> (-(bVar16 - 0x40) & 0x3f);
  }
  else {
    uVar13 = uVar24;
    if (lVar19 != 0) {
      uVar13 = uVar24 >> (bVar16 & 0x3f);
      uVar22 = uVar22 >> (bVar16 & 0x3f) | uVar24 << (-(bVar16 - 0x40) & 0x3f);
    }
  }
  lVar18 = lVar18 + lVar23 + 0x3ff;
  dVar25 = (double)(uVar13 & 0xffefffffffffffff | uVar20 | lVar18 << 0x34);
  lVar23 = 0x3f;
  if (uVar22 != 0) {
    for (; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
    }
  }
  auVar29._8_8_ = 0;
  auVar29._0_8_ = dVar25;
  auVar27 = vandpd_avx(auVar29,_DAT_1801dbf10);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = DAT_1801dbf20;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = dVar25 - auVar27._0_8_;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = auVar27._0_8_ * DAT_1801dbf20 - dVar25 * DAT_1801dbf00;
  auVar7 = vfmadd231sd_fma(auVar30,auVar28,auVar1);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = DAT_1801dbf30;
  auVar27 = vfmadd231sd_fma(auVar7,auVar27,auVar2);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = DAT_1801dbf30;
  vfmadd231sd_fma(auVar27,auVar28,auVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = DAT_1801dbf40;
  auVar31._8_8_ = 0;
  auVar31._0_8_ =
       (double)((uVar22 << ((byte)-(lVar23 + -0x40) & 0x3f)) >> 0xc | uVar20 |
               lVar18 - (-(lVar23 + -0x40) + 0x34) << 0x34) * DAT_1801dbf00;
  vfmadd231sd_fma(auVar31,auVar29,auVar4);
  return uVar17 + (bVar5 && bVar6) & 3;
}

// ---- Function: FUN_180150860 ----
uint FUN_180150860(void)

{
  int32_t auVar1 [16];
  int32_t auVar2 [16];
  int32_t auVar3 [16];
  int32_t auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  int32_t auVar8 [16];
  int32_t in_ZMM0 [64];
  int32_t auVar9 [16];
  int32_t auVar10 [16];
  int32_t auVar11 [16];
  int32_t auVar12 [16];
  
  auVar8._8_8_ = _UNK_1801dc038;
  auVar8._0_8_ = DAT_1801dc030;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = DAT_1801dc010;
  auVar1 = vfmadd132sd_fma(in_ZMM0._0_16_,_DAT_1801dc050,auVar1);
  dVar6 = auVar1._0_8_ - (double)DAT_1801dc050;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = DAT_1801dc020;
  auVar2 = vfnmadd132sd_fma(auVar9,in_ZMM0._0_16_,auVar2);
  dVar5 = dVar6 * DAT_1801dc030;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar6;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar5;
  auVar1 = vfmsub213sd_fma(auVar10,auVar8,auVar11);
  dVar7 = auVar2._0_8_ - dVar5;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = DAT_1801dc030;
  auVar3 = vfnmadd231sd_fma(auVar2,auVar10,auVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = DAT_1801dc040;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = ((dVar7 - auVar3._0_8_) + ((auVar2._0_8_ - dVar7) - dVar5)) - auVar1._0_8_;
  vfnmadd132sd_fma(auVar10,auVar12,auVar4);
  return (int)dVar6 & 3;
}

// ---- Function: FUN_1801508d8 ----
void FUN_1801508d8(ulonglong param_1)

{
  FUN_180150900(param_1,&DAT_18017be68,0x12);
  return;
}

// ---- Function: FUN_1801508ec ----
void FUN_1801508ec(float param_1)

{
  FUN_1801509a4(param_1,&DAT_1801dc068,0x12);
  return;
}

// ---- Function: FUN_180150900 ----
ulonglong FUN_180150900(ulonglong param_1,int32_t param_2,uint param_3)

{
  int32_t local_res8;
  
  local_res8 = param_1;
  if ((param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if ((param_1 & 0xfffffffffffff) == 0) {
      local_res8 = 0xfff8000000000000;
      FUN_18014ce5c(param_2,param_3,0xfff8000000000000,1,8,0x21,param_1,0,1);
    }
    else {
      local_res8 = param_1 | 0x8000000000000;
    }
  }
  return local_res8;
}

// ---- Function: FUN_1801509a4 ----
float FUN_1801509a4(float param_1,int32_t param_2,uint param_3)

{
  int32_t local_res20;
  
  local_res20 = param_1;
  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    if (((uint)param_1 & 0x7fffff) == 0) {
      local_res20 = -NAN;
      FUN_18014cf84(param_2,param_3,-NAN,1,8,0x21,param_1,0.0,1);
    }
    else {
      local_res20 = (float)((uint)param_1 | 0x400000);
    }
  }
  return local_res20;
}

// ---- Function: FUN_180150a30 ----
void FUN_180150a30(float param_1)

{
  FUN_1801509a4(param_1,&DAT_1801dc060,0x1e);
  return;
}

// ---- Function: FUN_180150a50 ----
ulonglong FUN_180150a50(ulonglong param_1)

{
  bool bVar1;
  bool bVar2;
  int32_t auVar3 [16];
  int32_t auVar4 [16];
  int32_t auVar5 [16];
  int32_t auVar6 [16];
  byte bVar7;
  int32_t auVar8 [16];
  ulonglong uVar9;
  sbyte sVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar15 = (param_1 >> 0x34) - 0x3ff;
  lVar13 = -((uVar15 >> 3) - 0x86);
  uVar11 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulonglong *)(&DAT_1801dd4f0 + lVar13);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar11;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = SUB168(auVar3 * auVar5,8);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(ulonglong *)(&UNK_1801dd4f8 + lVar13);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar11;
  uVar15 = uVar15 & 7;
  auVar8 = auVar4 * auVar6 + auVar8;
  uVar9 = auVar8._0_8_;
  uVar14 = auVar8._8_8_ + *(longlong *)(&UNK_1801dd500 + lVar13) * uVar11;
  uVar12 = 0x36 - uVar15;
  bVar7 = (byte)uVar12 & 0x3f;
  uVar11 = uVar14 >> bVar7;
  bVar1 = (uVar12 & 0x3f) != 0;
  bVar2 = (uVar14 >> bVar7 - 1 & 1) != 0;
  if (bVar1 && bVar2) {
    uVar14 = ~uVar14;
    uVar9 = ~uVar9;
  }
  sVar10 = (char)uVar15 + 10;
  uVar12 = (uVar14 << sVar10) >> sVar10;
  lVar13 = 0x3f;
  if (uVar12 != 0) {
    for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  if ((uVar12 == 0) && (lVar13 = 0x3f, uVar9 != 0)) {
    for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  return uVar11 + (bVar1 && bVar2) & 3;
}

// ---- Function: FUN_180150ba0 ----
ulonglong FUN_180150ba0(int32_t param_1,int32_t param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_4 == 2) {
    iVar1 = 2;
    uVar4 = 0x22;
    uVar3 = 4;
  }
  else {
    if (((param_4 == 3) || (param_4 == 4)) || (param_4 == 5)) {
      uVar2 = _handle_nan(param_3);
      return uVar2;
    }
    if (param_4 == 6) {
      iVar1 = 1;
      uVar4 = 0x21;
      uVar3 = 8;
    }
    else if ((param_4 == 7) || (param_4 == 8)) {
      iVar1 = 4;
      uVar4 = 0x22;
      uVar3 = 0x12;
    }
    else {
      if (param_4 != 9) {
        return param_3;
      }
      iVar1 = 3;
      uVar4 = 0x22;
      uVar3 = 0x11;
    }
  }
  FUN_18014ce5c(&DAT_18017be5c,0x1d,param_3,iVar1,uVar3,uVar4,param_1,param_2,2);
  return param_3;
}

// ---- Function: __remainder_piby2d2f_forC ----
/* Library Function - Single Match
    __remainder_piby2d2f_forC
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __remainder_piby2d2f_forC(ulonglong param_1,double *param_2,uint *param_3)

{
  bool bVar1;
  bool bVar2;
  int32_t auVar3 [16];
  int32_t auVar4 [16];
  int32_t auVar5 [16];
  int32_t auVar6 [16];
  int32_t auVar7 [16];
  int32_t auVar8 [16];
  int32_t auVar9 [16];
  ulonglong uVar10;
  ulonglong uVar11;
  sbyte sVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  
  uVar20 = (param_1 >> 0x34) - 0x3ff;
  lVar18 = -((uVar20 >> 3) - 0x86);
  uVar14 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulonglong *)(&DAT_1801dd5a0 + lVar18);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar14;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = SUB168(auVar3 * auVar6,8);
  uVar10 = SUB168(auVar3 * auVar6,0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(ulonglong *)(&UNK_1801dd5a8 + lVar18);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar14;
  uVar20 = uVar20 & 7;
  auVar9 = auVar4 * auVar7 + auVar9;
  uVar11 = auVar9._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *(ulonglong *)(&UNK_1801dd5b0 + lVar18);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar14;
  uVar19 = auVar9._8_8_ + SUB168(auVar5 * auVar8,0);
  uVar17 = 0;
  bVar13 = (byte)(0x36 - uVar20) & 0x3f;
  uVar14 = uVar19 >> bVar13;
  bVar1 = (0x36 - uVar20 & 0x3f) != 0;
  bVar2 = (uVar19 >> bVar13 - 1 & 1) != 0;
  if (bVar1 && bVar2) {
    uVar19 = ~uVar19;
    uVar11 = ~uVar11;
    uVar10 = ~uVar10;
    uVar17 = 0x8000000000000000;
  }
  *param_3 = (int)uVar14 + (uint)(bVar1 && bVar2) & 3;
  sVar12 = (char)uVar20 + 10;
  uVar14 = (uVar19 << sVar12) >> sVar12;
  lVar15 = uVar20 - 0x36;
  lVar18 = 0x3f;
  if (uVar14 != 0) {
    for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  uVar19 = uVar11;
  if (uVar14 == 0) {
    lVar18 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    lVar15 = uVar20 - 0x76;
    uVar19 = uVar10;
    uVar14 = uVar11;
  }
  lVar16 = lVar18 + -0x34;
  if (lVar16 < 0) {
    bVar13 = -(byte)lVar16;
    uVar14 = uVar14 << (bVar13 & 0x3f) | uVar19 >> (-(bVar13 - 0x40) & 0x3f);
  }
  else if (lVar16 != 0) {
    uVar14 = uVar14 >> ((byte)lVar16 & 0x3f);
  }
  *param_2 = (double)(uVar14 & 0xffefffffffffffff | uVar17 | lVar15 + lVar18 + 0x3ff << 0x34) *
             _DAT_1801dd590;
  return;
}

