#include <stdint.h>
#include <stddef.h>

// ---- Function: thunk_FUN_180123e90 ----
int32_t (*) [32]
thunk_FUN_180123e90(int32_t (*param_1) [32],int32_t (*param_2) [32],uint param_3)

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

// ---- Function: thunk_FUN_180123f80 ----
int32_t (*) [32]
thunk_FUN_180123f80(int32_t (*param_1) [32],int32_t (*param_2) [32],ulonglong param_3)

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

// ---- Function: FUN_180124290 ----
int32_t (*) [32]
FUN_180124290(int32_t (*param_1) [32],int32_t (*param_2) [32],ulonglong param_3)

{
  int32_t auVar1 [16];
  int32_t *puVar2;
  uint uVar3;
  ulonglong uVar4;
  int32_t (*pauVar5) [32];
  ulonglong uVar6;
  int32_t auVar7 [16];
  int32_t auVar8 [32];
  int32_t auVar9 [16];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  pauVar5 = param_1;
  if (((DAT_1801eb0d4 >> 5 & 1) == 0) || (uVar6 < 0x20)) {
    uVar4 = (ulonglong)(DAT_1801eb0d4 >> 2);
    if (((DAT_1801eb0d4 >> 2 & 1) != 0) && (0xf < uVar6)) {
      puVar2 = *param_1;
      do {
        auVar9 = *(int32_t (*) [16])*param_1;
        param_1 = (int32_t (*) [32])(*param_1 + 0x10);
        auVar7._0_8_ = -(ulonglong)(auVar9._0_8_ == param_3);
        auVar7._8_8_ = -(ulonglong)(auVar9._8_8_ == param_3);
        uVar3 = movmskpd((int)uVar4,auVar7);
        uVar4 = (ulonglong)uVar3;
        auVar9 = pshufb(auVar9,*(int32_t (*) [16])(&DAT_18015ac70 + uVar4 * 0x10));
        *(int32_t (*) [16])*pauVar5 = auVar9;
        pauVar5 = (int32_t (*) [32])(*pauVar5 + (byte)(&DAT_18015acb0)[uVar4]);
      } while (param_1 != (int32_t (*) [32])(puVar2 + (uVar6 & 0xfffffffffffffff0)));
    }
  }
  else {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_3;
    auVar9 = vpunpcklqdq_avx(auVar9,auVar9);
    puVar2 = *param_1;
    do {
      auVar8._0_8_ = -(ulonglong)(auVar9._0_8_ == *(longlong *)*param_1);
      auVar8._8_8_ = -(ulonglong)(auVar9._8_8_ == *(longlong *)(*param_1 + 8));
      auVar8._16_8_ = -(ulonglong)(auVar9._0_8_ == SUB248(*(int32_t (*) [24])*param_1,0x10));
      auVar8._24_8_ = -(ulonglong)(auVar9._8_8_ == *(longlong *)(*param_1 + 0x18));
      uVar3 = vmovmskpd_avx(auVar8);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *(ulonglong *)(&DAT_18015acc0 + (ulonglong)uVar3 * 8);
      auVar8 = vpmovzxbd_avx2(auVar1);
      auVar8 = vpermd_avx2(auVar8,*param_1);
      *pauVar5 = auVar8;
      param_1 = param_1 + 1;
      pauVar5 = (int32_t (*) [32])(*pauVar5 + (byte)(&DAT_18015ad40)[uVar3]);
    } while (param_1 != (int32_t (*) [32])(puVar2 + (uVar6 & 0xffffffffffffffe0)));
  }
  for (; param_1 != param_2; param_1 = (int32_t (*) [32])(*param_1 + 8)) {
    if (*(ulonglong *)*param_1 != param_3) {
      *(ulonglong *)*pauVar5 = *(ulonglong *)*param_1;
      pauVar5 = (int32_t (*) [32])(*pauVar5 + 8);
    }
  }
  return pauVar5;
}

// ---- Function: thunk_FUN_180124070 ----
void thunk_FUN_180124070(int32_t (*param_1) [32],int32_t (*param_2) [32],
                        int32_t (*param_3) [16],ulonglong param_4)

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
  int32_t auStack_58 [16];
  ulonglong uStack_48;
  
  uStack_48 = DAT_1801eb080 ^ (ulonglong)auStack_78;
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
          FUN_180150fd0((int32_t *)auStack_58,(int32_t *)param_3,param_4);
          auVar1 = auStack_58;
          do {
            iVar2 = pcmpestri(auStack_58,*(int32_t (*) [16])*param_1,0xc);
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
            FUN_180150fd0((int32_t *)auStack_58,(int32_t *)param_1,
                          (longlong)param_2 - (longlong)param_1);
            pcmpestri(auVar1,auStack_58,0xc);
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
  FUN_1801252c0(uStack_48 ^ (ulonglong)auStack_78);
  return;
}

// ---- Function: _Locimp ----
/* Library Function - Single Match
    private: __cdecl std::locale::_Locimp::_Locimp(bool) __ptr64
   
   Library: Visual Studio 2019 Release */

_Locimp * __thiscall std::locale::_Locimp::_Locimp(_Locimp *this,bool param_1)

{
  char *pcVar1;
  int32_t *puVar2;
  char *pcVar3;
  
  *(int32_t *)(this + 0x10) = 0;
  *(int32_t *)(this + 0x18) = 0;
  *(int32_t *)(this + 0x20) = 0;
  *(int32_t ***)this = vftable;
  *(int32_t *)(this + 8) = 1;
  this[0x24] = (_Locimp)param_1;
  *(int32_t *)(this + 0x28) = 0;
  this[0x30] = (_Locimp)0x0;
  pcVar1 = "*";
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (pcVar3[1] != '\0');
  puVar2 = (int32_t *)_malloc_base((ulonglong)(pcVar3 + -0x1801d8db2));
  *(int32_t **)(this + 0x28) = puVar2;
  if (puVar2 != (int32_t *)0x0) {
    FUN_180150fd0(puVar2,(int32_t *)&DAT_1801d8db4,(ulonglong)(pcVar3 + -0x1801d8db2));
  }
  return this;
}

// ---- Function: operator_ ----
/* Library Function - Single Match
    public: class std::_Yarn<char> & __ptr64 __cdecl std::_Yarn<char>::operator=(char const *
   __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

_Yarn<char> * __thiscall std::_Yarn<char>::operator=(_Yarn<char> *this,char *param_1)

{
  char cVar1;
  int32_t *puVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)this;
  if (pcVar3 != param_1) {
    if (pcVar3 != (char *)0x0) {
      FUN_18012d5e8(pcVar3);
    }
    *(int32_t *)this = 0;
    if (param_1 != (char *)0x0) {
      cVar1 = *param_1;
      pcVar3 = param_1;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
      puVar2 = (int32_t *)_malloc_base((ulonglong)(pcVar3 + (1 - (longlong)param_1)));
      *(int32_t **)this = puVar2;
      if (puVar2 != (int32_t *)0x0) {
        FUN_180150fd0(puVar2,(int32_t *)param_1,(ulonglong)(pcVar3 + (1 - (longlong)param_1)));
      }
    }
  }
  return this;
}

// ---- Function: _scalar_deleting_destructor_ ----
/* Library Function - Single Match
    protected: virtual void * __ptr64 __cdecl std::locale::_Locimp::`scalar deleting
   destructor'(unsigned int) __ptr64
   
   Library: Visual Studio 2019 Release */

void * __thiscall std::locale::_Locimp::_scalar_deleting_destructor_(_Locimp *this,uint param_1)

{
  *(int32_t ***)this = vftable;
  FUN_18012463c((longlong)this);
  if (*(LPVOID *)(this + 0x28) != (LPVOID)0x0) {
    FUN_18012d5e8(*(LPVOID *)(this + 0x28));
  }
  *(int32_t *)(this + 0x28) = 0;
  *(int32_t ***)this = _Facet_base::vftable;
  if ((param_1 & 1) != 0) {
    thunk_FUN_18012d5e8(this);
  }
  return this;
}

// ---- Function: FUN_180124504 ----
void FUN_180124504(int32_t param_1)

{
  code *pcVar1;
  int32_t *puVar2;
  
  puVar2 = (int32_t *)_malloc_base(0x10);
  if (puVar2 != (int32_t *)0x0) {
    *puVar2 = DAT_1801ed270;
    puVar2[1] = param_1;
    DAT_1801ed270 = puVar2;
    return;
  }
  FUN_1801232f8();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_180124540 ----
int32_t FUN_180124540(void)

{
  return DAT_1801ed280;
}

// ---- Function: FUN_180124548 ----
_Locimp * FUN_180124548(char param_1)

{
  int32_t *puVar1;
  _Locimp *p_Var2;
  int32_t *puVar3;
  char *pcVar4;
  char *pcVar5;
  _Lockit local_res8 [8];
  
  std::_Lockit::_Lockit(local_res8,0);
  p_Var2 = DAT_1801ed280;
  if (DAT_1801ed280 == (_Locimp *)0x0) {
    p_Var2 = std::locale::_Locimp::_New_Locimp(false);
    std::locale::_Setgloballocale(p_Var2);
    *(int32_t *)(p_Var2 + 0x20) = 0x3f;
    puVar1 = *(int32_t **)(p_Var2 + 0x28);
    if (puVar1 != &DAT_18015ade0) {
      if (puVar1 != (int32_t *)0x0) {
        FUN_18012d5e8(puVar1);
      }
      *(int32_t *)(p_Var2 + 0x28) = 0;
      pcVar4 = "C";
      do {
        pcVar5 = pcVar4;
        pcVar4 = pcVar5 + 1;
      } while (*pcVar4 != '\0');
      pcVar5 = pcVar5 + -0x18015adde;
      puVar3 = (int32_t *)_malloc_base((ulonglong)pcVar5);
      *(int32_t **)(p_Var2 + 0x28) = puVar3;
      if (puVar3 != (int32_t *)0x0) {
        FUN_180150fd0(puVar3,(int32_t *)&DAT_18015ade0,(ulonglong)pcVar5);
      }
    }
    (*(code *)PTR__guard_dispatch_icall_180157468)(p_Var2);
    _DAT_1801ed230 = p_Var2;
    DAT_1801ed260 = p_Var2;
  }
  if (param_1 != '\0') {
    (*(code *)PTR__guard_dispatch_icall_180157468)(p_Var2);
  }
  std::_Lockit::~_Lockit(local_res8);
  return p_Var2;
}

// ---- Function: FUN_18012463c ----
void FUN_18012463c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  _Lockit local_res8 [8];
  
  std::_Lockit::_Lockit(local_res8,0);
  lVar2 = *(longlong *)(param_1 + 0x18);
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    if (*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar2 * 8) != 0) {
      lVar1 = (*(code *)PTR__guard_dispatch_icall_180157468)();
      if (lVar1 != 0) {
        (*(code *)PTR__guard_dispatch_icall_180157468)(lVar1,1);
      }
    }
  }
  FUN_18012d5e8(*(LPVOID *)(param_1 + 0x10));
  std::_Lockit::~_Lockit(local_res8);
  return;
}

// ---- Function: _Locinfo_ctor ----
/* Library Function - Single Match
    public: static void __cdecl std::_Locinfo::_Locinfo_ctor(class std::_Locinfo * __ptr64,char
   const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl std::_Locinfo::_Locinfo_ctor(_Locinfo *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = setlocale(0,(char *)0x0);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  _Yarn<char>::operator=((_Yarn<char> *)(param_1 + 0x48),pcVar1);
  if (param_2 != (char *)0x0) {
    param_2 = setlocale(0,param_2);
  }
  if (param_2 == (char *)0x0) {
    param_2 = "*";
  }
  _Yarn<char>::operator=((_Yarn<char> *)(param_1 + 0x58),param_2);
  return;
}

// ---- Function: _Locinfo_dtor ----
/* Library Function - Single Match
    public: static void __cdecl std::_Locinfo::_Locinfo_dtor(class std::_Locinfo * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl std::_Locinfo::_Locinfo_dtor(_Locinfo *param_1)

{
  if (*(char **)(param_1 + 0x48) != (char *)0x0) {
    setlocale(0,*(char **)(param_1 + 0x48));
  }
  return;
}

// ---- Function: _New_Locimp ----
/* Library Function - Single Match
    private: static class std::locale::_Locimp * __ptr64 __cdecl
   std::locale::_Locimp::_New_Locimp(bool)
   
   Library: Visual Studio 2019 Release */

_Locimp * __cdecl std::locale::_Locimp::_New_Locimp(bool param_1)

{
  _Locimp *this;
  _Locimp *p_Var1;
  
  this = (_Locimp *)operator_new(0x38);
  p_Var1 = (_Locimp *)0x0;
  if (this != (_Locimp *)0x0) {
    p_Var1 = (_Locimp *)_Locimp(this,param_1);
  }
  return p_Var1;
}

// ---- Function: _Setgloballocale ----
/* Library Function - Single Match
    private: static void __cdecl std::locale::_Setgloballocale(void * __ptr64)
   
   Library: Visual Studio 2019 Release */

void __cdecl std::locale::_Setgloballocale(void *param_1)

{
  if (DAT_1801ed288 == '\0') {
    DAT_1801ed288 = '\x01';
    _Atexit((_func_void *)&LAB_1801247e0);
  }
  DAT_1801ed280 = param_1;
  return;
}

// ---- Function: _Deletegloballocale ----
/* Library Function - Single Match
    _Deletegloballocale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _Deletegloballocale(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_180157468)();
    if (lVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_180157468)(lVar1,1);
    }
  }
  return;
}

// ---- Function: _Init_locks ----
/* Library Function - Single Match
    public: __cdecl std::_Init_locks::_Init_locks(void) __ptr64
   
   Library: Visual Studio 2019 Release */

_Init_locks * __thiscall std::_Init_locks::_Init_locks(_Init_locks *this)

{
  int32_t *puVar1;
  
  LOCK();
  DAT_1801eb000 = DAT_1801eb000 + 1;
  UNLOCK();
  if (DAT_1801eb000 == 0) {
    puVar1 = (int32_t *)&DAT_1801ed2a0;
    do {
      FUN_180124f40(puVar1);
      puVar1 = puVar1 + 5;
    } while (puVar1 != &DAT_1801ed3e0);
  }
  return this;
}

