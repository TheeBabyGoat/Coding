#include "FUN_1800b2380.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b2380((longlong *)&local_e8,(int32_t (*) [32])local_d8,
                    (int32_t (*) [32])local_63,(ulonglong)(double)param_4,uVar4);
    }
    else {
      uVar4 = uVar9;
      if ((int)uVar9 < 1000000000) goto LAB_1800aefaf;
      local_e8 = (int32_t (*) [32])local_63;
      uStack_e0 = 0x84;
    }
    pauVar12 = local_e8;
    pauVar6 = thunk_FUN_180123d80((int32_t (*) [32])local_d8,local_e8,0x65);
    pauVar11 = pauVar6;
  }
LAB_1800af00f:
  if (0 < (int)uVar9) {
cVar1 = pauVar6[-1][0x1f];
    while (cVar1 == '0') {
      cVar1 = pauVar6[-1][0x1e];
      pauVar6 = (int32_t (*) [32])(pauVar6[-1] + 0x1f);
    }
    if (pauVar6[-1][0x1f] == '.') {
      pauVar6 = (int32_t (*) [32])(pauVar6[-1] + 0x1f);
    }
  }
}

 FUN_1800b2380(param_1,param_2,param_3,(ulonglong)(double)fVar1,uVar2);
      return param_1;
    }
  }
  else {
    if (param_5 != 2) {
if (param_5 != 3) {
        FUN_1800af0e0(param_1,(char *)param_2,(longlong)param_3,(uint)fVar1,param_6);
        return param_1;
      }
      FUN_1800aedf0(param_1,(int32_t *)param_2,(int32_t *)param_3,fVar1,param_6);
      return param_1;
    }
}

longlong * FUN_1800b2380(longlong *param_1,int32_t (*param_2) [32],int32_t (*param_3) [32],
             ulonglong param_4,uint param_5) {
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
}

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
}

