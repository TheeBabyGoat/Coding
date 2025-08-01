#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800b2270 ----
void FUN_1800b2270(uint param_1,uint param_2,char *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar1 = 0;
  uVar2 = uVar1;
  uVar4 = param_2;
  if (9999 < param_2) {
    do {
      param_2 = uVar4 / 10000;
      uVar1 = (ulonglong)((int)uVar2 + 4);
      lVar3 = param_1 - uVar2;
      *(int32_t *)(param_3 + lVar3 + -1) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + ((uVar4 % 10000) % 100) * 2);
      *(int32_t *)(param_3 + lVar3 + -3) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + ((uVar4 % 10000) / 100) * 2);
      uVar2 = uVar1;
      uVar4 = param_2;
    } while (9999 < param_2);
  }
  uVar4 = param_2;
  if (99 < param_2) {
    uVar4 = param_2 / 100;
    *(int32_t *)(param_3 + (param_1 - uVar1) + -1) =
         *(int32_t *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
          + (param_2 % 100) * 2);
  }
  if (uVar4 < 10) {
    param_3[1] = '.';
    *param_3 = (char)uVar4 + '0';
    return;
  }
  param_3[2] = "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
               [uVar4 * 2 + 1];
  param_3[1] = '.';
  *param_3 = "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
             [uVar4 * 2];
  return;
}

// ---- Function: FUN_1800b2380 ----
longlong *
FUN_1800b2380(longlong *param_1,int32_t (*param_2) [32],int32_t (*param_3) [32],
             ulonglong param_4,uint param_5)

{
  ushort uVar1;
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
  int32_t uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int32_t (*pauVar26) [32];
  byte bVar27;
  byte bVar28;
  int32_t *puVar29;
  int iVar30;
  ulonglong uVar31;
  int32_t *puVar32;
  int32_t (*pauVar33) [32];
  uint uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  uint uVar40;
  ulonglong uVar41;
  char cVar42;
  uint uVar43;
  uint uVar44;
  int local_res8;
  int local_res10;
  ulonglong local_res20;
  int local_68;
  ulonglong local_58;
  
  if (param_4 == 0) {
    if ((longlong)(int)((param_5 != 0) + 5 + param_5) <= (longlong)param_3 - (longlong)param_2) {
      puVar32 = (int32_t *)(*param_2 + 1);
      (*param_2)[0] = 0x30;
      if (param_5 != 0) {
        *(int32_t *)puVar32 = 0x2e;
        FUN_180151670((int32_t (*) [32])(*param_2 + 2),0x30,(ulonglong)param_5);
        puVar32 = (int32_t *)(*(int32_t (*) [32])(*param_2 + 2) + param_5);
      }
      *puVar32 = 0x30302b65;
      *param_1 = (longlong)(puVar32 + 1);
      *(int32_t *)(param_1 + 1) = 0;
      return param_1;
    }
    *param_1 = (longlong)param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
    return param_1;
  }
  local_58 = param_4 & 0xfffffffffffff;
  uVar44 = 0;
  uVar34 = 0;
  uVar24 = 0;
  uVar40 = (uint)(param_4 >> 0x34);
  pauVar33 = param_2;
  if (uVar40 == 0) {
    local_res10 = -0x432;
    local_res8 = 0;
LAB_1800b2798:
    iVar23 = (int)(local_res10 + (local_res10 >> 0x1f & 0xfU)) >> 4;
    lVar37 = (longlong)-iVar23;
    bVar27 = (&DAT_180183420)[lVar37];
    if (bVar27 < 200) {
      uVar1 = *(ushort *)(&DAT_180183472 + lVar37 * 2);
      iVar30 = (uint)bVar27 + (uint)bVar27 * 8;
      uVar39 = (ulonglong)*(ushort *)(&DAT_180183470 + lVar37 * 2);
      local_res20 = (ulonglong)*(ushort *)(&DAT_180183470 + lVar37 * 2);
      do {
        if ((uint)uVar39 < (uint)uVar1) {
          uVar41 = local_58 << 8;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = *(ulonglong *)(&UNK_180164750 + uVar39 * 0x18);
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar41;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = *(ulonglong *)(&UNK_180164758 + uVar39 * 0x18);
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar41;
          uVar38 = SUB168(auVar6 * auVar16,0);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = *(ulonglong *)(&UNK_180164760 + uVar39 * 0x18);
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar41;
          uVar39 = SUB168(auVar7 * auVar17,0);
          uVar38 = uVar39 + (SUB168(auVar5 * auVar15,8) + uVar38 < uVar38) +
                   SUB168(auVar6 * auVar16,8);
          uVar31 = SUB168(auVar7 * auVar17,8) + (ulonglong)(uVar38 < uVar39);
          bVar28 = (char)iVar23 * '\x10' - (char)local_res10;
          bVar27 = bVar28 & 0x3f;
          uVar36 = uVar38 >> bVar27 | uVar31 << 0x40 - bVar27;
          uVar31 = uVar31 >> (bVar28 & 0x3f);
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar36;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar36;
          uVar38 = SUB168(ZEXT816(0x89705f4136b4a597) * auVar19,0);
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar31;
          uVar41 = SUB168(ZEXT816(0x31680a88f8953031) * auVar20,0);
          uVar39 = uVar41 + SUB168(ZEXT816(0x31680a88f8953031) * auVar18,8);
          uVar34 = (int)uVar36 +
                   (int)(uVar31 * -0x768fa0bec94b5a69 + (ulonglong)(uVar38 + uVar39 < uVar38) +
                         SUB168(ZEXT816(0x31680a88f8953031) * auVar20,8) +
                         (ulonglong)(uVar39 < uVar41) +
                         SUB168(ZEXT816(0x89705f4136b4a597) * auVar19,8) >> 0x1d) * -1000000000;
          uVar39 = local_res20;
        }
        else {
          uVar34 = 0;
        }
        if (uVar44 == 0) {
          iVar25 = (int)uVar39;
          if (uVar34 != 0) {
            iVar25 = iVar30;
            uVar24 = FUN_1800b2160(uVar34);
            local_res8 = (uVar24 - iVar25) + -10;
            if (param_5 + 1 < uVar24) break;
            if (param_5 == 0) {
              if (pauVar33 == param_3) goto LAB_1800b2732;
              uVar39 = 1;
              (*pauVar33)[0] = (char)uVar34 + '0';
              iVar30 = iVar25;
            }
            else {
              uVar39 = (ulonglong)(uVar24 + 1);
              if ((longlong)param_3 - (longlong)pauVar33 < (longlong)uVar39) goto LAB_1800b2732;
              FUN_1800b2270(uVar24,uVar34,(char *)pauVar33);
            }
            pauVar33 = (int32_t (*) [32])(*pauVar33 + uVar39);
            uVar44 = uVar24;
            uVar24 = 0;
            iVar25 = (int)local_res20;
          }
        }
        else {
          if (param_5 + 1 < uVar44 + 9) {
            uVar24 = 9;
            break;
          }
          if ((longlong)param_3 - (longlong)pauVar33 < 9) goto LAB_1800b2732;
          FUN_1800b20c0(uVar34,(char *)pauVar33);
          pauVar33 = (int32_t (*) [32])(*pauVar33 + 9);
          uVar44 = uVar44 + 9;
          iVar25 = (int)local_res20;
        }
        uVar39 = (ulonglong)(iVar25 + 1U);
        iVar30 = iVar30 + 9;
        local_res20 = (ulonglong)(iVar25 + 1U);
      } while (iVar30 < 0x708);
    }
  }
  else {
    local_res10 = uVar40 - 0x433;
    local_res8 = 0;
    local_58 = local_58 | 0x10000000000000;
    if (-0x35 < local_res10) {
      if (local_res10 < 0) {
        uVar39 = 0;
        local_res20._0_4_ = 1;
        cVar42 = 'x';
      }
      else {
        uVar34 = uVar40 - 0x424 >> 4;
        uVar39 = (ulonglong)uVar34;
        cVar42 = (char)uVar34 * '\x10' + 'x';
        local_res20._0_4_ = ((uVar34 * 0x134410 >> 0x12) + 0x19) / 9 - 1;
        uVar34 = 0;
        if ((int)local_res20 < 0) goto LAB_1800b275a;
      }
      bVar27 = (cVar42 - (char)local_res10) + 0x88;
      uVar38 = local_58 << 8;
      local_68 = (int)local_res20 * 9;
      iVar23 = (uint)(ushort)(&DAT_1801833a0)[uVar39] + (int)local_res20;
      do {
        lVar37 = (longlong)iVar23;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)(&DAT_18015d490 + lVar37 * 0x18);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar38;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulonglong *)(&DAT_18015d498 + lVar37 * 0x18);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar38;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = *(ulonglong *)(&DAT_18015d4a0 + lVar37 * 0x18);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar38;
        uVar39 = SUB168(auVar4 * auVar10,0);
        auVar21._8_8_ = uVar39;
        auVar21._0_8_ = SUB168(auVar2 * auVar8,8);
        uVar41 = SUB168(auVar3 * auVar9 + auVar21,8);
        uVar36 = SUB168(auVar4 * auVar10,8) + (ulonglong)(uVar41 < uVar39);
        bVar28 = bVar27 & 0x3f;
        uVar35 = uVar41 >> bVar28 | uVar36 << 0x40 - bVar28;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar35;
        uVar36 = uVar36 >> (bVar27 & 0x3f);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar35;
        uVar39 = SUB168(ZEXT816(0x89705f4136b4a597) * auVar12,0);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar36;
        uVar41 = SUB168(ZEXT816(0x31680a88f8953031) * auVar13,0);
        uVar31 = SUB168(ZEXT816(0x31680a88f8953031) * auVar11,8) + uVar41;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar36;
        uVar34 = (int)uVar35 +
                 (int)(SUB168(ZEXT816(0x89705f4136b4a597) * auVar14,0) +
                       (ulonglong)(uVar39 + uVar31 < uVar39) +
                       SUB168(ZEXT816(0x31680a88f8953031) * auVar13,8) +
                       (ulonglong)(uVar31 < uVar41) +
                       SUB168(ZEXT816(0x89705f4136b4a597) * auVar12,8) >> 0x1d) * -1000000000;
        if (uVar44 == 0) {
          if (uVar34 != 0) {
            uVar24 = FUN_1800b2160(uVar34);
            local_res8 = local_68 + -1 + uVar24;
            if (param_5 + 1 < uVar24) break;
            uVar44 = uVar24;
            if (param_5 == 0) {
              if (pauVar33 == param_3) goto LAB_1800b2732;
              (*pauVar33)[0] = (char)uVar34 + '0';
              pauVar33 = (int32_t (*) [32])(*pauVar33 + 1);
            }
            else {
              if ((longlong)param_3 - (longlong)pauVar33 < (longlong)(ulonglong)(uVar24 + 1))
              goto LAB_1800b2732;
              FUN_1800b2270(uVar24,uVar34,(char *)pauVar33);
              pauVar33 = (int32_t (*) [32])(*pauVar33 + (uVar24 + 1));
            }
          }
        }
        else {
          if (param_5 + 1 < uVar44 + 9) {
            uVar24 = 9;
            break;
          }
          if ((longlong)param_3 - (longlong)pauVar33 < 9) goto LAB_1800b2732;
          FUN_1800b20c0(uVar34,(char *)pauVar33);
          pauVar33 = (int32_t (*) [32])(*pauVar33 + 9);
          uVar44 = uVar44 + 9;
        }
        uVar24 = 0;
        local_res20._0_4_ = (int)local_res20 + -1;
        local_68 = local_68 + -9;
        iVar23 = iVar23 + -1;
      } while (-1 < (int)local_res20);
    }
LAB_1800b275a:
    if ((local_res10 < 0) && (uVar24 == 0)) goto LAB_1800b2798;
  }
  uVar43 = (param_5 + 1) - uVar44;
  uVar40 = 0;
  if (uVar24 != 0) {
    uVar40 = uVar34;
  }
  uVar34 = 0;
  if ((uVar43 < uVar24) && (uVar24 - uVar43 != 0)) {
    uVar38 = (ulonglong)(uVar24 - uVar43);
    uVar39 = (ulonglong)uVar40;
    do {
      uVar40 = (uint)(uVar39 / 10);
      uVar34 = (int)uVar39 + uVar40 * -10;
      uVar38 = uVar38 - 1;
      uVar39 = uVar39 / 10;
    } while (uVar38 != 0);
    if (uVar34 != 5) goto LAB_1800b2ab2;
    iVar30 = (param_5 + 1) - local_res8;
    iVar23 = -(local_res10 + iVar30);
    if (iVar23 < 1) {
LAB_1800b2a46:
      cVar42 = '\x01';
    }
    else if (iVar23 < 0x3c) {
      if ((local_58 & (1L << ((byte)iVar23 & 0x3f)) - 1U) == 0) goto LAB_1800b2a46;
      cVar42 = '\0';
    }
    else {
      cVar42 = '\0';
    }
    if (iVar30 < 0) {
      if (cVar42 == '\0') {
LAB_1800b2aa9:
        cVar42 = '\0';
        goto LAB_1800b2aab;
      }
      uVar34 = 0;
      uVar39 = local_58 / 5;
      if ((int)local_58 == (int)uVar39 * 5) {
        do {
          uVar34 = uVar34 + 1;
          uVar38 = uVar39 / 5;
          iVar23 = (int)uVar39;
          uVar39 = uVar38;
        } while (iVar23 == (int)uVar38 * 5);
      }
      if (uVar34 < (uint)-iVar30) goto LAB_1800b2aa9;
      cVar42 = '\x02';
    }
    else {
LAB_1800b2aab:
      cVar42 = cVar42 + '\x01';
    }
  }
  else {
LAB_1800b2ab2:
    cVar42 = 5 < uVar34;
  }
  if (uVar44 == 0) {
    if (param_5 == 0) {
      if (pauVar33 == param_3) goto LAB_1800b2732;
      uVar39 = 1;
      (*pauVar33)[0] = (char)uVar40 + '0';
    }
    else {
      uVar39 = (ulonglong)(uVar43 + 1);
      if ((longlong)param_3 - (longlong)pauVar33 < (longlong)uVar39) goto LAB_1800b2732;
      FUN_1800b2270(uVar43,uVar40,(char *)pauVar33);
    }
  }
  else {
    uVar39 = (ulonglong)uVar43;
    if ((longlong)param_3 - (longlong)pauVar33 < (longlong)uVar39) goto LAB_1800b2732;
    if (uVar40 == 0) {
      FUN_180151670(pauVar33,0x30,uVar39);
    }
    else {
      FUN_1800b21d0(uVar43,uVar40,(longlong)pauVar33);
    }
  }
  pauVar33 = (int32_t (*) [32])(*pauVar33 + uVar39);
  pauVar26 = pauVar33;
  if (cVar42 != '\0') {
    while (pauVar26 != param_2) {
      bVar27 = pauVar26[-1][0x1f];
      pauVar26 = (int32_t (*) [32])(pauVar26[-1] + 0x1f);
      if (bVar27 != 0x2e) {
        if (bVar27 != 0x39) {
          if ((cVar42 == '\x01') || ((bVar27 & 1) != 0)) {
            (*pauVar26)[0] = bVar27 + 1;
          }
          goto LAB_1800b2b77;
        }
        (*pauVar26)[0] = 0x30;
        cVar42 = '\x01';
      }
    }
    (*pauVar26)[0] = 0x31;
    local_res8 = local_res8 + 1;
  }
LAB_1800b2b77:
  iVar23 = -local_res8;
  if (0 < local_res8) {
    iVar23 = local_res8;
  }
  if ((longlong)((ulonglong)(99 < iVar23) + 4) <= (longlong)param_3 - (longlong)pauVar33) {
    (*pauVar33)[0] = 0x65;
    uVar22 = 0x2d;
    if (-1 < local_res8) {
      uVar22 = 0x2b;
    }
    (*pauVar33)[1] = uVar22;
    if (iVar23 < 100) {
      *(int32_t *)(*pauVar33 + 2) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + iVar23 * 2);
      puVar29 = *pauVar33 + 4;
    }
    else {
      *(int32_t *)(*pauVar33 + 2) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (iVar23 / 10) * 2);
      (*pauVar33)[4] = (char)iVar23 + (char)(iVar23 / 10) * -10 + '0';
      puVar29 = *pauVar33 + 5;
    }
    *param_1 = (longlong)puVar29;
    *(int32_t *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_1800b2732:
  *param_1 = (longlong)param_3;
  *(int32_t *)(param_1 + 1) = 0x84;
  return param_1;
}

// ---- Function: FUN_1800b2c60 ----
void FUN_1800b2c60(longlong *param_1,int32_t *param_2,int32_t *param_3,ulonglong param_4,
                  int param_5)

{
  char cVar1;
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  int32_t *extraout_RAX;
  int32_t (*pauVar5) [32];
  int iVar6;
  ulonglong *puVar7;
  int32_t (*pauVar8) [32];
  int32_t *puVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  uint uVar12;
  int32_t (*pauVar13) [32];
  int32_t auStackY_3a8 [32];
  int32_t (*local_378) [32];
  int32_t uStack_370;
  int32_t local_368 [96];
  int32_t local_63 [11];
  ulonglong local_58;
  
  local_58 = DAT_1801eb080 ^ (ulonglong)auStackY_3a8;
  if (param_4 == 0) {
    if (param_2 == param_3) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
    }
    else {
      *(int32_t *)param_2 = 0x30;
      *param_1 = (longlong)param_2 + 1;
      *(int32_t *)(param_1 + 1) = 0;
    }
    goto LAB_1800b2f67;
  }
  if (param_5 < 0) {
    param_5 = 6;
LAB_1800b2cfa:
    puVar11 = (ulonglong *)(&DAT_180176d10 + (longlong)(((param_5 + 10) * (param_5 + -1)) / 2) * 8);
    iVar6 = param_5;
  }
  else {
    if (param_5 == 0) {
      param_5 = 1;
      goto LAB_1800b2cfa;
    }
    if ((param_5 < 1000000) && (param_5 < 0x10)) goto LAB_1800b2cfa;
    iVar6 = 1000000;
    if (param_5 < 1000000) {
      iVar6 = param_5;
    }
    param_5 = iVar6;
    puVar11 = (ulonglong *)&DAT_180177330;
    iVar6 = param_5;
    if (0x135 < param_5) {
      iVar6 = 0x135;
    }
  }
  puVar7 = puVar11;
  if (param_5 < 0x9c) {
    for (; (puVar7 != puVar11 + (longlong)iVar6 + 5 && (*puVar7 < param_4)); puVar7 = puVar7 + 1) {
    }
  }
  else {
    uVar10 = (longlong)(puVar11 + (longlong)iVar6 + 5) - (longlong)puVar11 >> 3;
    while (uVar3 = uVar10, 0 < (longlong)uVar3) {
      uVar10 = uVar3 >> 1;
      if (puVar7[uVar10] < param_4) {
        puVar7 = puVar7 + uVar10 + 1;
        uVar10 = uVar3 + (-1 - uVar10);
      }
    }
  }
  iVar6 = (int)((longlong)puVar7 - (longlong)puVar11 >> 3) + -5;
  if ((iVar6 < param_5) && (-5 < iVar6)) {
    bVar2 = true;
    uVar12 = (param_5 - iVar6) - 1;
    if (0x42 < (int)uVar12) {
      uVar12 = 0x42;
    }
    if ((int)uVar12 < 0) {
      uVar4 = 6;
    }
    else {
      uVar4 = uVar12;
      if (999999999 < (int)uVar12) {
        pauVar5 = (int32_t (*) [32])local_63;
        pauVar8 = (int32_t (*) [32])0x0;
        pauVar13 = (int32_t (*) [32])0x0;
        goto LAB_1800b2ebf;
      }
    }
    FUN_1800b1a00(&local_378,(int32_t (*) [32])local_368,(int32_t (*) [32])local_63,param_4,
                  uVar4);
    pauVar8 = (int32_t (*) [32])0x0;
    pauVar5 = (int32_t (*) [32])*extraout_RAX;
    pauVar13 = (int32_t (*) [32])0x0;
  }
  else {
    bVar2 = false;
    uVar12 = param_5 - 1;
    if (0x2fe < (int)uVar12) {
      uVar12 = 0x2fe;
    }
    if ((int)uVar12 < 0) {
      uVar4 = 6;
LAB_1800b2e63:
      FUN_1800b2380((longlong *)&local_378,(int32_t (*) [32])local_368,
                    (int32_t (*) [32])local_63,param_4,uVar4);
    }
    else {
      uVar4 = uVar12;
      if ((int)uVar12 < 1000000000) goto LAB_1800b2e63;
      local_378 = (int32_t (*) [32])local_63;
      uStack_370 = 0x84;
    }
    pauVar8 = local_378;
    pauVar5 = thunk_FUN_180123d80((int32_t (*) [32])local_368,local_378,0x65);
    pauVar13 = pauVar5;
  }
LAB_1800b2ebf:
  if (0 < (int)uVar12) {
    cVar1 = pauVar5[-1][0x1f];
    while (cVar1 == '0') {
      cVar1 = pauVar5[-1][0x1e];
      pauVar5 = (int32_t (*) [32])(pauVar5[-1] + 0x1f);
    }
    if (pauVar5[-1][0x1f] == '.') {
      pauVar5 = (int32_t (*) [32])(pauVar5[-1] + 0x1f);
    }
  }
  uVar10 = (longlong)pauVar5 - (longlong)local_368;
  if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar10) {
LAB_1800b2efa:
    *param_1 = (longlong)param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_180150fd0(param_2,local_368,uVar10);
    puVar9 = (int32_t *)((longlong)param_2 + uVar10);
    if (!bVar2) {
      uVar10 = (longlong)pauVar8 - (longlong)pauVar13;
      if ((longlong)param_3 - (longlong)puVar9 < (longlong)uVar10) goto LAB_1800b2efa;
      FUN_180150fd0(puVar9,(int32_t *)pauVar13,uVar10);
      puVar9 = (int32_t *)((longlong)puVar9 + uVar10);
    }
    *param_1 = (longlong)puVar9;
    *(int32_t *)(param_1 + 1) = 0;
  }
LAB_1800b2f67:
  FUN_1801252c0(local_58 ^ (ulonglong)auStackY_3a8);
  return;
}

// ---- Function: FUN_1800b2f90 ----
longlong *
FUN_1800b2f90(longlong *param_1,char *param_2,longlong param_3,ulonglong param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int32_t (*pauVar5) [32];
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char cVar9;
  
  iVar6 = 0xd;
  if (-1 < param_5) {
    iVar6 = param_5;
  }
  uVar7 = param_4 & 0xfffffffffffff;
  uVar1 = (uint)(param_4 >> 0x20);
  uVar4 = uVar1 >> 0x14;
  if (uVar4 == 0) {
    uVar1 = -(uint)(uVar7 != 0) & 0xfffffc02;
  }
  else {
    uVar1 = (uVar1 >> 0x14) - 0x3ff;
  }
  if (uVar4 != 0) {
    uVar7 = uVar7 | 0x10000000000000;
  }
  uVar4 = -uVar1;
  if (0 < (int)uVar1) {
    uVar4 = uVar1;
  }
  cVar9 = '-';
  if (-1 < (int)uVar1) {
    cVar9 = '+';
  }
  if (uVar4 < 10) {
    lVar3 = 4;
  }
  else if (uVar4 < 100) {
    lVar3 = 5;
  }
  else {
    lVar3 = 7 - (ulonglong)(uVar4 < 1000);
  }
  if ((param_3 - (longlong)param_2 < (longlong)iVar6) ||
     ((param_3 - (longlong)param_2) - (longlong)iVar6 < (longlong)((ulonglong)(0 < iVar6) + lVar3)))
  {
    *param_1 = param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    if (iVar6 < 0xd) {
      uVar7 = uVar7 + (1L << (('\r' - (char)iVar6) * '\x04' & 0x3fU) & (uVar7 * 2 - 1 | uVar7) &
                      uVar7 * 2);
    }
    uVar8 = uVar7 & 0xfffffffffffff;
    *param_2 = (char)(uVar7 >> 0x34) + '0';
    pauVar5 = (int32_t (*) [32])(param_2 + 1);
    if (0 < iVar6) {
      (*pauVar5)[0] = '.';
      iVar6 = iVar6 + -1;
      iVar2 = 0x30;
      param_2[2] = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar8 >> 0x30];
      pauVar5 = (int32_t (*) [32])(param_2 + 3);
      if (iVar6 != 0) {
        uVar7 = 0x1000000000000;
        do {
          if (iVar2 == 0) {
            FUN_180151670(pauVar5,0x30,(longlong)iVar6);
            pauVar5 = (int32_t (*) [32])(*pauVar5 + iVar6);
            break;
          }
          iVar2 = iVar2 + -4;
          uVar8 = uVar8 & uVar7 - 1;
          uVar7 = uVar7 >> 4 | uVar7 << 0x3c;
          (*pauVar5)[0] =
               "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar8 >> ((byte)iVar2 & 0x3f) & 0xffffffff];
          pauVar5 = (int32_t (*) [32])(*pauVar5 + 1);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    (*pauVar5)[0] = 'p';
    (*pauVar5)[1] = cVar9;
    FUN_1800b4050(param_1,(int32_t *)(*pauVar5 + 2),param_3,(ulonglong)uVar4,10);
  }
  return param_1;
}

// ---- Function: FUN_1800b3170 ----
longlong *
FUN_1800b3170(longlong *param_1,int32_t (*param_2) [32],int32_t (*param_3) [32],
             int32_t param_4,int param_5,uint param_6)

{
  uint uVar1;
  longlong *extraout_RAX;
  ulonglong uVar2;
  char *pcVar3;
  int32_t in_XMM3 [16];
  int32_t local_18 [2];
  
  uVar2 = in_XMM3._0_8_;
  if (in_XMM3[7] < '\0') {
    if (param_2 == param_3) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
      return param_1;
    }
    (*param_2)[0] = 0x2d;
    param_2 = (int32_t (*) [32])(*param_2 + 1);
    uVar2 = uVar2 & 0x7fffffffffffffff;
  }
  if ((uVar2 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if ((uVar2 & 0xfffffffffffff) == 0) {
      pcVar3 = "inf";
      uVar2 = 3;
    }
    else if ((in_XMM3[7] < '\0') && ((uVar2 & 0xfffffffffffff) == 0x8000000000000)) {
      pcVar3 = "nan(ind)";
      uVar2 = 8;
    }
    else if ((uVar2 & 0x8000000000000) == 0) {
      pcVar3 = "nan(snan)";
      uVar2 = 9;
    }
    else {
      pcVar3 = "nan";
      uVar2 = 3;
    }
    if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar2) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
      return param_1;
    }
    FUN_180150fd0((int32_t *)param_2,(int32_t *)pcVar3,uVar2);
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)(*param_2 + uVar2);
    return param_1;
  }
  if (param_5 == 1) {
    if ((int)param_6 < 1000000000) {
      uVar1 = 6;
      if (-1 < (int)param_6) {
        uVar1 = param_6;
      }
      FUN_1800b2380(param_1,param_2,param_3,uVar2,uVar1);
      return param_1;
    }
  }
  else {
    if (param_5 != 2) {
      if (param_5 != 3) {
        FUN_1800b2f90(param_1,(char *)param_2,(longlong)param_3,uVar2,param_6);
        return param_1;
      }
      FUN_1800b2c60(param_1,(int32_t *)param_2,(int32_t *)param_3,uVar2,param_6);
      return param_1;
    }
    if ((int)param_6 < 1000000000) {
      uVar1 = 6;
      if (-1 < (int)param_6) {
        uVar1 = param_6;
      }
      FUN_1800b1a00(local_18,param_2,param_3,uVar2,uVar1);
      *param_1 = *extraout_RAX;
      *(int *)(param_1 + 1) = (int)extraout_RAX[1];
      return param_1;
    }
  }
  *(int32_t *)(param_1 + 1) = 0x84;
  *param_1 = (longlong)param_3;
  return param_1;
}

// ---- Function: FUN_1800b3370 ----
void FUN_1800b3370(longlong *param_1,int32_t *param_2,longlong param_3,ulonglong param_4,
                  int param_5)

{
  uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  int32_t auStack_78 [95];
  int32_t local_19;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1801eb080 ^ (ulonglong)auStack_78;
  uVar5 = (ulonglong)param_5;
  puVar4 = local_18;
  switch(param_5) {
  case 2:
    do {
      bVar3 = (byte)param_4;
      puVar4 = (ulonglong *)((longlong)puVar4 + -1);
      param_4 = param_4 >> 1;
      *(byte *)puVar4 = (bVar3 & 1) + 0x30;
    } while (param_4 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar2 = param_4 / uVar5;
      puVar4 = (ulonglong *)((longlong)puVar4 + -1);
      *(char *)puVar4 = (char)(param_4 % uVar5) + '0';
      param_4 = uVar2;
    } while (uVar2 != 0);
    break;
  case 4:
    do {
      bVar3 = (byte)param_4;
      puVar4 = (ulonglong *)((longlong)puVar4 + -1);
      param_4 = param_4 >> 2;
      *(byte *)puVar4 = (bVar3 & 3) + 0x30;
    } while (param_4 != 0);
    break;
  case 8:
    do {
      bVar3 = (byte)param_4;
      puVar4 = (ulonglong *)((longlong)puVar4 + -1);
      param_4 = param_4 >> 3;
      *(byte *)puVar4 = (bVar3 & 7) + 0x30;
    } while (param_4 != 0);
    break;
  case 10:
    do {
      puVar4 = (ulonglong *)((longlong)puVar4 + -1);
      uVar5 = param_4 / 10;
      *(char *)puVar4 = (char)param_4 + (char)uVar5 * -10 + '0';
      param_4 = uVar5;
    } while (uVar5 != 0);
    break;
  default:
    do {
      uVar2 = param_4 / uVar5;
      puVar4 = (ulonglong *)((longlong)puVar4 + -1);
      *(char *)puVar4 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[param_4 % uVar5];
      param_4 = uVar2;
    } while (uVar2 != 0);
    break;
  case 0x10:
    do {
      puVar4 = (ulonglong *)((longlong)puVar4 + -1);
      uVar1 = (uint)param_4;
      param_4 = param_4 >> 4;
      *(char *)puVar4 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar1 & 0xf];
    } while (param_4 != 0);
    break;
  case 0x20:
    do {
      puVar4 = (ulonglong *)((longlong)puVar4 + -1);
      uVar1 = (uint)param_4;
      param_4 = param_4 >> 5;
      *(char *)puVar4 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar1 & 0x1f];
    } while (param_4 != 0);
  }
  uVar5 = (longlong)local_18 - (longlong)puVar4;
  if (param_3 - (longlong)param_2 < (longlong)uVar5) {
    *param_1 = param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_180150fd0(param_2,puVar4,uVar5);
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)param_2 + uVar5;
  }
  FUN_1801252c0(local_18[0] ^ (ulonglong)auStack_78);
  return;
}

// ---- Function: FUN_1800b3590 ----
void FUN_1800b3590(int32_t *param_1,int32_t *param_2,int param_3,int *param_4,
                  int32_t param_5,int32_t *param_6)

{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t *puVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int32_t *puVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int32_t *puVar11;
  
  iVar5 = *param_4;
  cVar6 = *(char *)((longlong)param_4 + 9);
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar6 = '\x02';
  }
  iVar9 = 0;
  iVar4 = 0;
  if (param_3 < iVar5) {
    if (cVar6 == '\x01') {
      uVar10 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
      iVar9 = iVar5 - param_3;
      goto LAB_1800b3656;
    }
    if (cVar6 == '\x02') {
      iVar4 = iVar5 - param_3;
    }
    else {
      iVar4 = 0;
      if (cVar6 == '\x03') {
        iVar4 = (iVar5 - param_3) / 2;
        iVar9 = (iVar5 - iVar4) - param_3;
      }
    }
  }
  uVar10 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
  puVar1 = (int32_t *)((longlong)param_4 + 0xf);
  if (0 < iVar4) {
    puVar7 = puVar1;
    do {
      for (; puVar7 != puVar1 + uVar10; puVar7 = puVar7 + 1) {
        uVar2 = *puVar7;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
        param_2[2] = param_2[2] + 1;
      }
      iVar4 = iVar4 + -1;
      puVar7 = puVar1;
    } while (0 < iVar4);
  }
LAB_1800b3656:
  puVar3 = param_6;
  puVar11 = (int32_t *)((longlong)param_4 + 0xf);
  puVar7 = (int32_t *)*param_6;
  puVar1 = puVar7 + 2;
  for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    uVar2 = *puVar7;
    if ((ulonglong)param_2[3] < param_2[2] + 1) {
      (**(code **)*param_2)(param_2);
    }
    *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
    param_2[2] = param_2[2] + 1;
  }
  if (*(char *)puVar3[1] != '\0') {
    if ((*(int *)puVar3[2] < *(int *)puVar3[3]) &&
       (iVar5 = *(int *)puVar3[3] - *(int *)puVar3[2], lVar8 = (longlong)iVar5, 0 < iVar5)) {
      do {
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        lVar8 = lVar8 + -1;
        *(int32_t *)(param_2[1] + param_2[2]) = 0x30;
        param_2[2] = param_2[2] + 1;
      } while (0 < lVar8);
    }
  }
  FUN_1800b6180(&param_6,(int32_t *)puVar3[4],*(int32_t **)puVar3[5],param_2);
  puVar3 = param_6;
  if (0 < iVar9) {
    puVar1 = puVar11;
    do {
      for (; puVar1 != puVar11 + uVar10; puVar1 = puVar1 + 1) {
        uVar2 = *puVar1;
        if ((ulonglong)puVar3[3] < puVar3[2] + 1) {
          (**(code **)*puVar3)(puVar3);
        }
        *(int32_t *)(puVar3[1] + puVar3[2]) = uVar2;
        puVar3[2] = puVar3[2] + 1;
      }
      iVar9 = iVar9 + -1;
      puVar1 = puVar11;
    } while (0 < iVar9);
  }
  *param_1 = puVar3;
  return;
}

// ---- Function: FUN_1800b37b0 ----
void FUN_1800b37b0(int32_t *param_1,int32_t *param_2,ulonglong param_3,int *param_4)

{
  char cVar1;
  int32_t uVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  int32_t *puVar6;
  longlong lVar7;
  int32_t auStackY_d8 [32];
  int32_t uVar8;
  int32_t in_stack_ffffffffffffff4c;
  char local_a8 [4];
  int32_t local_a4;
  int32_t local_a2;
  int local_a0 [2];
  char *local_98;
  int32_t uStack_90;
  int32_t *local_88;
  char *local_80;
  int *local_78;
  int *local_70;
  char *local_68;
  char **local_60;
  char *local_58;
  int32_t uStack_50;
  char local_48 [16];
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1801eb080 ^ (ulonglong)auStackY_d8;
  uVar8 = 0x10;
  FUN_1800b3370((longlong *)&local_58,(int32_t *)local_48,(longlong)local_38,param_3,0x10);
  local_98 = local_58;
  uStack_90 = uStack_50;
  local_a4 = 0x7830;
  local_a0[0] = ((int)local_58 - (int)local_48) + 2;
  if ((char)param_4[2] == 'P') {
    local_a4 = 0x5830;
    for (pcVar5 = local_48; pcVar5 != local_58; pcVar5 = pcVar5 + 1) {
      cVar1 = *pcVar5;
      if (('`' < cVar1) && (cVar1 < '{')) {
        *pcVar5 = cVar1 + -0x20;
      }
    }
  }
  if ((*(char *)((longlong)param_4 + 0xd) == '\0') || (*(char *)((longlong)param_4 + 9) != '\0')) {
    local_88 = &local_a4;
    local_a8[0] = '\0';
    local_80 = local_a8;
    local_78 = local_a0;
    local_68 = local_48;
    local_60 = &local_98;
    local_70 = param_4;
    FUN_1800b3590(param_1,param_2,local_a0[0],param_4,CONCAT44(in_stack_ffffffffffffff4c,uVar8),
                  &local_88);
  }
  else {
    puVar6 = &local_a4;
    local_a8[0] = '\x01';
    do {
      uVar2 = *(int32_t *)puVar6;
      if ((ulonglong)param_2[3] < param_2[2] + 1) {
        (**(code **)*param_2)(param_2);
      }
      puVar6 = (int32_t *)((longlong)puVar6 + 1);
      *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
      lVar3 = param_2[2] + 1;
      param_2[2] = lVar3;
    } while (puVar6 != &local_a2);
    if (((local_a8[0] != '\0') && (local_a0[0] < *param_4)) &&
       (iVar4 = *param_4 - local_a0[0], lVar7 = (longlong)iVar4, 0 < iVar4)) {
      do {
        if ((ulonglong)param_2[3] < lVar3 + 1U) {
          (**(code **)*param_2)(param_2);
        }
        lVar7 = lVar7 + -1;
        *(int32_t *)(param_2[1] + param_2[2]) = 0x30;
        param_2[2] = param_2[2] + 1;
        lVar3 = param_2[2];
      } while (0 < lVar7);
    }
    FUN_1800b6180(param_1,local_48,local_98,param_2);
  }
  FUN_1801252c0(local_38[0] ^ (ulonglong)auStackY_d8);
  return;
}

// ---- Function: FUN_1800b3990 ----
void FUN_1800b3990(void)

{
  code *pcVar1;
  
  FUN_18012b7b4();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_1800b39a0 ----
longlong *
FUN_1800b39a0(longlong *param_1,int32_t *param_2,int param_3,int *param_4,int32_t param_5,
             longlong *param_6)

{
  int32_t *puVar1;
  int32_t uVar2;
  int iVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  char cVar9;
  int32_t *puVar10;
  int iVar11;
  int32_t local_res8;
  
  iVar3 = *param_4;
  iVar11 = 0;
  cVar9 = *(char *)((longlong)param_4 + 9);
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar9 = '\x02';
  }
  iVar6 = 0;
  if (param_3 < iVar3) {
    if (cVar9 != '\x01') {
      if (cVar9 == '\x02') {
        iVar6 = iVar3 - param_3;
      }
      else {
        iVar6 = 0;
        if (cVar9 == '\x03') {
          iVar6 = (iVar3 - param_3) / 2;
          iVar11 = (iVar3 - iVar6) - param_3;
        }
      }
      goto LAB_1800b3a0d;
    }
    uVar7 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
    iVar11 = iVar3 - param_3;
  }
  else {
LAB_1800b3a0d:
    uVar7 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
    puVar1 = (int32_t *)((longlong)param_4 + 0xf);
    if (0 < iVar6) {
      puVar10 = puVar1 + uVar7;
      puVar5 = puVar1;
      do {
        for (; puVar5 != puVar10; puVar5 = puVar5 + 1) {
          uVar2 = *puVar5;
          if ((ulonglong)param_2[3] < param_2[2] + 1) {
            (**(code **)*param_2)(param_2);
          }
          *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
          param_2[2] = param_2[2] + 1;
        }
        iVar6 = iVar6 + -1;
        puVar5 = puVar1;
      } while (0 < iVar6);
      goto LAB_1800b3a88;
    }
  }
  puVar10 = (int32_t *)((longlong)param_4 + uVar7 + 0xf);
LAB_1800b3a88:
  plVar8 = FUN_1800ac210(param_6,&local_res8,param_2);
  puVar4 = (int32_t *)*plVar8;
  for (; puVar1 = (int32_t *)((longlong)param_4 + 0xf), 0 < iVar11; iVar11 = iVar11 + -1) {
    for (; puVar1 != puVar10; puVar1 = puVar1 + 1) {
      uVar2 = *puVar1;
      if ((ulonglong)puVar4[3] < puVar4[2] + 1) {
        (**(code **)*puVar4)(puVar4);
      }
      *(int32_t *)(puVar4[1] + puVar4[2]) = uVar2;
      puVar4[2] = puVar4[2] + 1;
    }
  }
  *param_1 = (longlong)puVar4;
  return param_1;
}

// ---- Function: FUN_1800b3b10 ----
void FUN_1800b3b10(longlong *param_1,int32_t *param_2,ulonglong param_3,int *param_4,
                  longlong param_5)

{
  char *****pppppcVar1;
  char *****pppppcVar2;
  char cVar3;
  code *pcVar4;
  _Locimp *p_Var5;
  longlong *plVar6;
  int32_t *puVar7;
  char *****pppppcVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int32_t auStackY_1b8 [32];
  int32_t in_stack_fffffffffffffe68;
  int32_t uVar15;
  byte local_188 [8];
  char local_180 [4];
  int local_17c;
  char *local_178;
  int32_t uStack_170;
  int local_168 [4];
  char *local_158;
  _Locimp *p_Stack_150;
  int local_148;
  char *local_138 [2];
  char *local_128;
  int *local_120;
  byte *local_118;
  char **local_110;
  char *local_108;
  int *local_100;
  int *local_f8;
  char **local_f0;
  char ****local_e8;
  longlong *local_e0;
  char ****local_d8;
  int32_t uStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  int32_t local_b8;
  int32_t uStack_b7;
  int32_t uStack_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  char local_98 [65];
  int32_t local_57 [15];
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_1b8;
  local_188[0] = (byte)param_3;
  iVar13 = 0;
  cVar3 = (char)param_4[2];
  if (cVar3 == 'c') {
    if (0x7f < local_188[0]) {
      FUN_1800b7ac0(0x1801835c8);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(int32_t *)((longlong)param_4 + 0xb) = 0;
    local_158 = *(char **)param_4;
    p_Stack_150 = *(_Locimp **)(param_4 + 2);
    local_148 = param_4[4];
    FUN_1800b5580(param_1,param_2,param_3,(longlong *)&local_158,param_5);
    goto LAB_1800b3ed6;
  }
  if (*(char *)((longlong)param_4 + 10) == '\0') {
    *(int32_t *)((longlong)param_4 + 10) = 2;
  }
  iVar10 = 10;
  iVar12 = 2;
  if (cVar3 == 'B') {
LAB_1800b3bc2:
    iVar10 = 2;
  }
  else if (cVar3 == 'X') {
LAB_1800b3bb4:
    iVar10 = 0x10;
  }
  else {
    if (cVar3 == 'b') goto LAB_1800b3bc2;
    if (cVar3 == 'o') {
      iVar10 = 8;
    }
    else if (cVar3 == 'x') goto LAB_1800b3bb4;
  }
  uVar15 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffe68 >> 0x20),iVar10);
  FUN_1800b4260((longlong *)&local_158,(int32_t *)local_98,(longlong)local_57,param_3 & 0xff,
                iVar10);
  pcVar9 = local_158;
  local_138[0] = local_98;
  local_17c = (int)local_158 - (int)local_138[0];
  if (*(char *)((longlong)param_4 + 10) != '\x02') {
    local_17c = local_17c + 1;
  }
  if ((char)param_4[2] == 'X') {
    for (pcVar11 = local_98; pcVar11 != local_158; pcVar11 = pcVar11 + 1) {
      cVar3 = *pcVar11;
      if (('`' < cVar3) && (cVar3 < '{')) {
        *pcVar11 = cVar3 + -0x20;
      }
    }
  }
  local_178 = (char *)0x0;
  uStack_170 = 0;
  if (*(char *)((longlong)param_4 + 0xb) != '\0') {
    cVar3 = (char)param_4[2];
    if (cVar3 == 'B') {
      local_178 = "0B";
LAB_1800b3caf:
      uStack_170 = 2;
    }
    else {
      if (cVar3 == 'X') {
        local_178 = "0X";
        goto LAB_1800b3caf;
      }
      if (cVar3 == 'b') {
        local_178 = "0b";
        goto LAB_1800b3caf;
      }
      if (cVar3 == 'o') {
        if (local_188[0] == 0) goto LAB_1800b3c61;
        local_178 = "0";
        uStack_170 = 1;
        iVar12 = 1;
      }
      else {
        if (cVar3 == 'x') {
          local_178 = "0x";
          goto LAB_1800b3caf;
        }
LAB_1800b3c61:
        local_178 = (char *)0x0;
        uStack_170 = 0;
        iVar12 = 0;
      }
    }
    local_17c = local_17c + iVar12;
  }
  local_168[0] = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0xf;
  local_d8 = (char ****)0x0;
  if ((char)param_4[3] != '\0') {
    if (param_5 == 0) {
      p_Var5 = FUN_180124548('\x01');
      p_Stack_150 = p_Var5;
    }
    else {
      p_Var5 = *(_Locimp **)(param_5 + 8);
      p_Stack_150 = p_Var5;
      (**(code **)(*(longlong *)p_Var5 + 8))(p_Var5);
    }
    plVar6 = FUN_1800b5fd0((longlong)&local_158);
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_b8);
    if (0xf < uStack_c0) {
      pppppcVar8 = (char *****)local_d8;
      if ((0xfff < uStack_c0 + 1) &&
         (pppppcVar8 = (char *****)local_d8[-1],
         (char *)0x1f < (char *)((longlong)local_d8 + (-8 - (longlong)pppppcVar8)))) {
        FUN_18012b7b4();
        goto LAB_1800b3f48;
      }
      thunk_FUN_18012d5e8(pppppcVar8);
    }
    local_d8 = (char ****)CONCAT71(uStack_b7,local_b8);
    uStack_d0 = uStack_b0;
    local_c8 = local_a8;
    uStack_c0 = uStack_a0;
    local_a8 = _DAT_1801d8f70;
    uStack_a0 = _UNK_1801d8f78;
    local_b8 = 0;
    FUN_1800a6800((longlong *)&local_b8);
    if ((p_Var5 != (_Locimp *)0x0) &&
       (puVar7 = (int32_t *)(**(code **)(*(longlong *)p_Var5 + 0x10))(),
       puVar7 != (int32_t *)0x0)) {
      (**(code **)*puVar7)(puVar7,1);
    }
    pppppcVar8 = &local_d8;
    if (0xf < uStack_c0) {
      pppppcVar8 = (char *****)local_d8;
    }
    uVar14 = (longlong)pcVar9 - (longlong)local_138[0];
    if ((local_c8 != 0) && ((ulonglong)(longlong)*(char *)pppppcVar8 < uVar14)) {
      pppppcVar2 = (char *****)((longlong)pppppcVar8 + local_c8);
      do {
        cVar3 = *(char *)pppppcVar8;
        uVar14 = uVar14 - (longlong)cVar3;
        iVar13 = iVar13 + 1;
        pppppcVar1 = (char *****)((longlong)pppppcVar8 + 1);
        if (pppppcVar1 != pppppcVar2) {
          cVar3 = *(char *)pppppcVar1;
          pppppcVar8 = pppppcVar1;
        }
      } while ((ulonglong)(longlong)cVar3 < uVar14);
    }
    local_17c = local_17c + iVar13;
    local_168[0] = iVar13;
  }
  if ((*(char *)((longlong)param_4 + 0xd) == '\0') || (*(char *)((longlong)param_4 + 9) != '\0')) {
    local_180[0] = '\0';
  }
  else {
    local_180[0] = '\x01';
  }
  local_128 = pcVar9;
  local_118 = local_188;
  local_110 = &local_178;
  local_108 = local_180;
  local_100 = &local_17c;
  local_f8 = local_168;
  local_f0 = local_138;
  local_e8 = (char ****)&local_d8;
  local_e0 = &param_5;
  local_120 = param_4;
  if (local_180[0] == '\0') {
    FUN_1800b39a0(param_1,param_2,local_17c,param_4,uVar15,(longlong *)&local_128);
    if (uStack_c0 < 0x10) goto LAB_1800b3ed6;
    pppppcVar8 = (char *****)local_d8;
    if (0xfff < uStack_c0 + 1) {
      pppppcVar8 = (char *****)local_d8[-1];
      pcVar9 = (char *)((longlong)local_d8 + (-8 - (longlong)pppppcVar8));
      goto joined_r0x0001800b3f3e;
    }
  }
  else {
    FUN_1800ac210((longlong *)&local_128,param_1,param_2);
    if (uStack_c0 < 0x10) goto LAB_1800b3ed6;
    pppppcVar8 = (char *****)local_d8;
    if (0xfff < uStack_c0 + 1) {
      pppppcVar8 = (char *****)local_d8[-1];
      pcVar9 = (char *)((longlong)local_d8 + (-8 - (longlong)pppppcVar8));
joined_r0x0001800b3f3e:
      if ((char *)0x1f < pcVar9) {
LAB_1800b3f48:
        FUN_18012b7b4();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  thunk_FUN_18012d5e8(pppppcVar8);
LAB_1800b3ed6:
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_1b8);
  return;
}

// ---- Function: FUN_1800b3f60 ----
void FUN_1800b3f60(longlong param_1)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  
  if (*(longlong *)(param_1 + 0x10) == 0x100) {
    *(int32_t *)(param_1 + 0x10) = 0;
    puVar1 = *(int32_t **)(param_1 + 0x20);
    puVar3 = puVar1;
    puVar2 = puVar1;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar3 = (int32_t *)*puVar1;
      puVar2 = (int32_t *)*puVar1;
    }
    FUN_1800b7500(puVar1,(longlong)puVar2 + (puVar1[2] - (longlong)puVar3),
                  (int32_t *)(param_1 + 0x28),0x100);
    *(int32_t **)(param_1 + 0x20) = puVar1;
  }
  return;
}

// ---- Function: FUN_1800b3fd0 ----
void FUN_1800b3fd0(int32_t *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_1801835f0;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    param_1[2] = 0;
    plVar2 = (longlong *)param_1[4];
    if ((ulonglong)plVar2[3] < 0x10) {
      lVar4 = plVar2[2] + (longlong)plVar2;
      plVar3 = plVar2;
    }
    else {
      lVar4 = *plVar2 + plVar2[2];
      plVar3 = (longlong *)*plVar2;
    }
    FUN_1800b7500(plVar2,lVar4 - (longlong)plVar3,param_1 + 5,
                  (longlong)param_1 + (lVar1 - (longlong)(param_1 + 5)) + 0x28);
    param_1[4] = plVar2;
  }
  return;
}

// ---- Function: FUN_1800b4050 ----
void FUN_1800b4050(longlong *param_1,int32_t *param_2,longlong param_3,ulonglong param_4,
                  uint param_5)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong *puVar5;
  int32_t auStack_58 [63];
  int32_t local_19;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1801eb080 ^ (ulonglong)auStack_58;
  puVar5 = local_18;
  switch(param_5) {
  case 2:
    do {
      bVar2 = (byte)param_4;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      uVar3 = (uint)param_4 >> 1;
      param_4 = (ulonglong)uVar3;
      *(byte *)puVar5 = (bVar2 & 1) + 0x30;
    } while (uVar3 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar1 = param_4 & 0xffffffff;
      param_4 = uVar1 / param_5;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      *(char *)puVar5 = (char)(uVar1 % (ulonglong)param_5) + '0';
    } while ((int)param_4 != 0);
    break;
  case 4:
    do {
      bVar2 = (byte)param_4;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      param_4 = param_4 >> 2 & 0x3fffffff;
      *(byte *)puVar5 = (bVar2 & 3) + 0x30;
    } while ((int)param_4 != 0);
    break;
  case 8:
    do {
      bVar2 = (byte)param_4;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      param_4 = param_4 >> 3 & 0x1fffffff;
      *(byte *)puVar5 = (bVar2 & 7) + 0x30;
    } while ((int)param_4 != 0);
    break;
  case 10:
    do {
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      uVar1 = (param_4 & 0xffffffff) / 10;
      *(char *)puVar5 = (char)param_4 + (char)uVar1 * -10 + '0';
      param_4 = uVar1;
    } while ((int)uVar1 != 0);
    break;
  default:
    do {
      uVar1 = param_4 & 0xffffffff;
      param_4 = uVar1 / param_5;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      *(char *)puVar5 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar1 % (ulonglong)param_5];
    } while ((int)param_4 != 0);
    break;
  case 0x10:
    do {
      uVar3 = (uint)param_4;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      uVar4 = uVar3 >> 4;
      param_4 = (ulonglong)uVar4;
      *(char *)puVar5 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar3 & 0xf];
    } while (uVar4 != 0);
    break;
  case 0x20:
    do {
      uVar3 = (uint)param_4;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      uVar4 = uVar3 >> 5;
      param_4 = (ulonglong)uVar4;
      *(char *)puVar5 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar3 & 0x1f];
    } while (uVar4 != 0);
  }
  uVar1 = (longlong)local_18 - (longlong)puVar5;
  if (param_3 - (longlong)param_2 < (longlong)uVar1) {
    *param_1 = param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_180150fd0(param_2,puVar5,uVar1);
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)param_2 + uVar1;
  }
  FUN_1801252c0(local_18[0] ^ (ulonglong)auStack_58);
  return;
}

// ---- Function: FUN_1800b4260 ----
void FUN_1800b4260(longlong *param_1,int32_t *param_2,longlong param_3,ulonglong param_4,
                  int param_5)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong *puVar7;
  int32_t auStack_38 [39];
  int32_t local_11;
  ulonglong local_10;
  
  local_10 = DAT_1801eb080 ^ (ulonglong)auStack_38;
  uVar4 = param_4 & 0xff;
  puVar7 = &local_10;
  switch(param_5) {
  case 2:
    do {
      bVar2 = (byte)uVar4;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      bVar3 = bVar2 >> 1;
      uVar4 = (ulonglong)bVar3;
      *(byte *)puVar7 = (bVar2 & 1) + 0x30;
    } while (bVar3 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar5 = uVar4 & 0xff;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      uVar4 = (longlong)uVar5 / (longlong)param_5 & 0xffffffff;
      *(char *)puVar7 = (char)((longlong)uVar5 % (longlong)param_5) + '0';
    } while ((char)uVar4 != '\0');
    break;
  case 4:
    do {
      bVar2 = (byte)uVar4;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      bVar3 = bVar2 >> 2;
      uVar4 = (ulonglong)bVar3;
      *(byte *)puVar7 = (bVar2 & 3) + 0x30;
    } while (bVar3 != 0);
    break;
  case 8:
    do {
      bVar2 = (byte)uVar4;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      bVar3 = bVar2 >> 3;
      uVar4 = (ulonglong)bVar3;
      *(byte *)puVar7 = (bVar2 & 7) + 0x30;
    } while (bVar3 != 0);
    break;
  case 10:
    do {
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      cVar1 = (char)(uVar4 / 10);
      *(char *)puVar7 = (char)uVar4 + cVar1 * -10 + '0';
      uVar4 = uVar4 / 10;
    } while (cVar1 != '\0');
    break;
  default:
    do {
      uVar5 = uVar4 & 0xff;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      uVar4 = (longlong)uVar5 / (longlong)param_5 & 0xffffffff;
      *(char *)puVar7 =
           "0123456789abcdefghijklmnopqrstuvwxyz0b"[(int)((longlong)uVar5 % (longlong)param_5)];
    } while ((char)uVar4 != '\0');
    break;
  case 0x10:
    do {
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      uVar6 = (uint)uVar4;
      uVar4 = uVar4 >> 4;
      *(char *)puVar7 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar6 & 0xf];
    } while ((char)uVar4 != '\0');
    break;
  case 0x20:
    do {
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      uVar6 = (uint)uVar4;
      uVar4 = uVar4 >> 5;
      *(char *)puVar7 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar6 & 0x1f];
    } while ((char)uVar4 != '\0');
  }
  uVar4 = (longlong)&local_10 - (longlong)puVar7;
  if (param_3 - (longlong)param_2 < (longlong)uVar4) {
    *param_1 = param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_180150fd0(param_2,puVar7,uVar4);
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)param_2 + uVar4;
  }
  FUN_1801252c0(local_10 ^ (ulonglong)auStack_38);
  return;
}

// ---- Function: FUN_1800b4480 ----
void FUN_1800b4480(int32_t *param_1,int32_t *param_2,int32_t *param_3,byte param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int32_t uVar4;
  longlong lVar5;
  byte *pbVar6;
  bool bVar7;
  int32_t *puVar8;
  int32_t uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char *pcVar13;
  int32_t *puVar14;
  int32_t *puVar15;
  longlong lVar16;
  byte *pbVar17;
  int32_t auStackY_a8 [32];
  WCHAR local_78 [4];
  int32_t *local_70;
  int32_t *local_68 [2];
  int32_t *local_58 [2];
  int32_t local_48;
  ulonglong local_40;
  
  local_40 = DAT_1801eb080 ^ (ulonglong)auStackY_a8;
  lVar5 = param_3[1];
  pbVar6 = (byte *)*param_3;
  local_70 = param_1;
  if ((ulonglong)param_2[3] < param_2[2] + 1) {
    (**(code **)*param_2)(param_2);
  }
  bVar7 = true;
  *(byte *)(param_2[2] + param_2[1]) = param_4;
  param_2[2] = param_2[2] + 1;
  pbVar17 = pbVar6;
  do {
    while( true ) {
      if (pbVar17 == pbVar6 + lVar5) {
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(byte *)(param_2[1] + param_2[2]) = param_4;
        param_2[2] = param_2[2] + 1;
        *param_1 = param_2;
        FUN_1801252c0(local_40 ^ (ulonglong)auStackY_a8);
        return;
      }
      bVar2 = *pbVar17;
      if (bVar2 != 9) break;
      pcVar13 = "\\t";
      do {
        cVar3 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(char *)(param_2[2] + param_2[1]) = cVar3;
        param_2[2] = param_2[2] + 1;
      } while (*pcVar13 != '\0');
      pbVar17 = pbVar17 + 1;
LAB_1800b49a1:
      bVar7 = true;
      param_1 = local_70;
    }
    if (bVar2 == 10) {
      pcVar13 = "\\n";
      do {
        cVar3 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(char *)(param_2[2] + param_2[1]) = cVar3;
        param_2[2] = param_2[2] + 1;
      } while (*pcVar13 != '\0');
      pbVar17 = pbVar17 + 1;
      goto LAB_1800b49a1;
    }
    if (bVar2 == 0xd) {
      pcVar13 = "\\r";
      do {
        cVar3 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(char *)(param_2[2] + param_2[1]) = cVar3;
        param_2[2] = param_2[2] + 1;
      } while (*pcVar13 != '\0');
      pbVar17 = pbVar17 + 1;
      goto LAB_1800b49a1;
    }
    if (bVar2 == param_4) {
      if ((ulonglong)param_2[3] < param_2[2] + 1) {
        (**(code **)*param_2)(param_2);
      }
      *(int32_t *)(param_2[2] + param_2[1]) = 0x5c;
      param_2[2] = param_2[2] + 1;
      if ((ulonglong)param_2[3] < param_2[2] + 1) {
        (**(code **)*param_2)(param_2);
      }
      *(byte *)(param_2[2] + param_2[1]) = param_4;
      param_2[2] = param_2[2] + 1;
      pbVar17 = pbVar17 + 1;
      goto LAB_1800b49a1;
    }
    if (bVar2 == 0x5c) {
      pcVar13 = "\\\\";
      do {
        cVar3 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(char *)(param_2[2] + param_2[1]) = cVar3;
        param_2[2] = param_2[2] + 1;
      } while (*pcVar13 != '\0');
      pbVar17 = pbVar17 + 1;
      goto LAB_1800b49a1;
    }
    uVar9 = __std_fs_convert_narrow_to_wide(0x4e4,(LPCSTR)pbVar17,1,local_78,1);
    uVar12 = (ulonglong)(ushort)local_78[0];
    pbVar1 = pbVar17 + 1;
    if ((int)uVar9 == 0) {
      for (; pbVar17 != pbVar1; pbVar17 = pbVar17 + 1) {
        pcVar13 = "\\x{";
        do {
          cVar3 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          if ((ulonglong)param_2[3] < param_2[2] + 1) {
            (**(code **)*param_2)(param_2);
          }
          *(char *)(param_2[2] + param_2[1]) = cVar3;
          param_2[2] = param_2[2] + 1;
        } while (*pcVar13 != '\0');
        FUN_1800b4260((longlong *)local_58,&local_48,(longlong)&local_40,(ulonglong)*pbVar17,0x10);
        puVar8 = local_58[0];
        for (puVar14 = &local_48; puVar14 != puVar8; puVar14 = (int32_t *)((longlong)puVar14 + 1)
            ) {
          uVar4 = *(int32_t *)puVar14;
          if ((ulonglong)param_2[3] < param_2[2] + 1) {
            (**(code **)*param_2)(param_2);
          }
          *(int32_t *)(param_2[2] + param_2[1]) = uVar4;
          param_2[2] = param_2[2] + 1;
        }
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(int32_t *)(param_2[2] + param_2[1]) = 0x7d;
        param_2[2] = param_2[2] + 1;
      }
      goto LAB_1800b49a1;
    }
    puVar15 = &DAT_180183610;
    uVar10 = 0x2c7;
    do {
      uVar11 = uVar10 >> 1;
      if (*(uint *)(puVar15 + uVar11 * 4) <= (uint)(ushort)local_78[0]) {
        puVar15 = puVar15 + uVar11 * 4 + 4;
        uVar11 = uVar10 + (-1 - uVar11);
      }
      uVar10 = uVar11;
    } while (0 < (longlong)uVar11);
    lVar16 = (longlong)(puVar15 + -0x180183610) >> 2;
    if ((lVar16 == 0) ||
       ((uint)*(ushort *)(&UNK_18018412a + lVar16 * 2) + *(int *)(&UNK_18018360c + lVar16 * 4) <=
        (uint)(ushort)local_78[0])) {
LAB_1800b47cc:
      pcVar13 = "\\u{";
      do {
        cVar3 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(char *)(param_2[2] + param_2[1]) = cVar3;
        param_2[2] = param_2[2] + 1;
      } while (*pcVar13 != '\0');
      FUN_1800b4050((longlong *)local_68,&local_48,(longlong)&local_40,uVar12,0x10);
      puVar8 = local_68[0];
      for (puVar14 = &local_48; puVar14 != puVar8; puVar14 = (int32_t *)((longlong)puVar14 + 1))
      {
        uVar4 = *(int32_t *)puVar14;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(int32_t *)(param_2[2] + param_2[1]) = uVar4;
        param_2[2] = param_2[2] + 1;
      }
      if ((ulonglong)param_2[3] < param_2[2] + 1) {
        (**(code **)*param_2)(param_2);
      }
      bVar7 = true;
      *(int32_t *)(param_2[2] + param_2[1]) = 0x7d;
      param_2[2] = param_2[2] + 1;
      pbVar17 = pbVar1;
      param_1 = local_70;
    }
    else {
      if (bVar7) {
        puVar15 = &DAT_1801846c0;
        uVar10 = 0x16b;
        do {
          uVar11 = uVar10 >> 1;
          if (*(uint *)(puVar15 + uVar11 * 4) <= (uint)(ushort)local_78[0]) {
            puVar15 = puVar15 + uVar11 * 4 + 4;
            uVar11 = uVar10 + (-1 - uVar11);
          }
          uVar10 = uVar11;
        } while (0 < (longlong)uVar11);
        lVar16 = (longlong)(puVar15 + -0x1801846c0) >> 2;
        if ((lVar16 != 0) &&
           ((uint)(ushort)local_78[0] <
            (uint)*(ushort *)(&UNK_180184c6a + lVar16 * 2) + *(int *)(&UNK_1801846bc + lVar16 * 4)))
        goto LAB_1800b47cc;
      }
      for (; pbVar17 != pbVar1; pbVar17 = pbVar17 + 1) {
        bVar2 = *pbVar17;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(byte *)(param_2[2] + param_2[1]) = bVar2;
        param_2[2] = param_2[2] + 1;
      }
      bVar7 = false;
      pbVar17 = pbVar1;
      param_1 = local_70;
    }
  } while( true );
}

// ---- Function: FUN_1800b4a30 ----
int32_t *
FUN_1800b4a30(int32_t *param_1,int32_t *param_2,int param_3,int *param_4,int32_t param_5,
             int32_t *param_6)

{
  int32_t uVar1;
  int iVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  int iVar5;
  char cVar6;
  int32_t *puVar7;
  int iVar8;
  ulonglong uVar9;
  int32_t *puVar10;
  
  iVar2 = *param_4;
  cVar6 = *(char *)((longlong)param_4 + 9);
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar6 = '\x01';
  }
  iVar8 = 0;
  iVar5 = 0;
  if (param_3 < iVar2) {
    if (cVar6 == '\x01') {
      uVar9 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
      iVar8 = iVar2 - param_3;
      goto LAB_1800b4afb;
    }
    if (cVar6 == '\x02') {
      iVar5 = iVar2 - param_3;
    }
    else {
      iVar5 = 0;
      if (cVar6 == '\x03') {
        iVar5 = (iVar2 - param_3) / 2;
        iVar8 = (iVar2 - iVar5) - param_3;
      }
    }
  }
  uVar9 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
  puVar10 = (int32_t *)((longlong)param_4 + 0xf);
  if (0 < iVar5) {
    puVar4 = puVar10;
    do {
      for (; puVar4 != puVar10 + uVar9; puVar4 = puVar4 + 1) {
        uVar1 = *puVar4;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(int32_t *)(param_2[2] + param_2[1]) = uVar1;
        param_2[2] = param_2[2] + 1;
      }
      iVar5 = iVar5 + -1;
      puVar4 = puVar10;
    } while (0 < iVar5);
  }
LAB_1800b4afb:
  puVar10 = (int32_t *)((longlong)param_4 + 0xf);
  puVar7 = (int32_t *)*param_6;
  if (0xf < (ulonglong)puVar7[3]) {
    puVar7 = (int32_t *)*puVar7;
  }
  puVar3 = (int32_t *)param_6[1];
  for (; puVar7 != puVar3; puVar7 = (int32_t *)((longlong)puVar7 + 1)) {
    uVar1 = *(int32_t *)puVar7;
    if ((ulonglong)param_2[3] < param_2[2] + 1) {
      (**(code **)*param_2)(param_2);
    }
    *(int32_t *)(param_2[2] + param_2[1]) = uVar1;
    param_2[2] = param_2[2] + 1;
  }
  if (0 < iVar8) {
    puVar4 = puVar10;
    do {
      for (; puVar4 != puVar10 + uVar9; puVar4 = puVar4 + 1) {
        uVar1 = *puVar4;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(int32_t *)(param_2[2] + param_2[1]) = uVar1;
        param_2[2] = param_2[2] + 1;
      }
      iVar8 = iVar8 + -1;
      puVar4 = puVar10;
    } while (0 < iVar8);
  }
  *param_1 = param_2;
  return param_1;
}

