#include "FUN_1800b1a00.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b1a00(&local_e8,(int32_t (*) [32])local_d8,(int32_t (*) [32])local_63,
                  (ulonglong)(double)param_4,uVar4);
    pauVar12 = (int32_t (*) [32])0x0;
    pauVar6 = (int32_t (*) [32])*extraout_RAX;
    pauVar11 = (int32_t (*) [32])0x0;
  }
  else {
    bVar2 = false;
    uVar9 = param_5 - 1;
    if (0x6f < (int)uVar9) {
uVar9 = 0x6f;
    }
}

 FUN_1800b1a00(param_1,param_2,param_3,param_6,0);
            return param_1;
          }
          lVar2 = 0;
          if (uVar8 != 0) {
for (; (uVar8 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
            }
          }
}

 FUN_1800b1a00(param_1,param_2,param_3,param_4,0);
    }
    else {
      local_18 = param_4 & 0xfffffffffffff | 0x10000000000000;
      if ((uVar1 - 0x3ff < 0x35) &&
         (bVar5 = -(char)iVar6, (local_18 & (1L << (bVar5 & 0x3f)) - 1U) == 0)) {
local_18 = local_18 >> (bVar5 & 0x3f);
        iVar6 = 0;
        iStack_10 = 0;
        uVar3 = local_18 / 10;
        if ((int)local_18 == (int)(local_18 / 10) * 10) {
          do {
            local_18 = uVar3;
            iVar6 = iVar6 + 1;
            uVar3 = local_18 / 10;
            iStack_10 = iVar6;
          } while ((int)local_18 == (int)(local_18 / 10) * 10);
        }
      }
}

int32_t * FUN_1800b1a00(int32_t *param_1,int32_t (*param_2) [32],int32_t (*param_3) [32],
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
  int32_t (*pauVar22) [32];
  int32_t (*pauVar23) [32];
  int iVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int32_t (*pauVar28) [32];
  byte bVar29;
  byte bVar30;
  uint uVar31;
  int32_t (*pauVar32) [32];
  uint uVar33;
  uint uVar34;
  ulonglong uVar35;
  int32_t *puVar36;
  int32_t (*pauVar37) [32];
  ulonglong uVar38;
  longlong lVar39;
  char cVar40;
  uint uVar41;
  bool bVar42;
  uint local_res20;
  ulonglong local_50;
  
  if (param_4 == 0) {
    pauVar32 = (int32_t (*) [32])(longlong)(int)((param_5 != 0) + 1 + param_5);
    if ((longlong)pauVar32 <= (longlong)param_3 - (longlong)param_2) {
      (*param_2)[0] = 0x30;
      puVar36 = *param_2 + 1;
      if (param_5 != 0) {
        *puVar36 = 0x2e;
        pauVar37 = (int32_t (*) [32])(*param_2 + 2);
        pauVar32 = pauVar37;
        FUN_180151670(pauVar37,0x30,(ulonglong)param_5);
        puVar36 = *pauVar37 + param_5;
      }
      *param_1 = puVar36;
      *(int32_t *)(param_1 + 1) = 0;
      return (int32_t *)pauVar32;
    }
LAB_1800b2087:
    *param_1 = param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    pauVar32 = (int32_t (*) [32])0xfffffffffffff;
    local_50 = param_4 & 0xfffffffffffff;
    uVar31 = (uint)(param_4 >> 0x34);
    pauVar37 = param_2;
    if (uVar31 == 0) {
      local_res20 = 0xfffffbce;
LAB_1800b1cd9:
      if (pauVar37 == param_3) goto LAB_1800b2087;
      (*pauVar37)[0] = 0x30;
      pauVar37 = (int32_t (*) [32])(*pauVar37 + 1);
    }
    else {
      local_res20 = uVar31 - 0x433;
      bVar42 = false;
      pauVar32 = (int32_t (*) [32])0x10000000000000;
      local_50 = local_50 | 0x10000000000000;
      if ((int)local_res20 < -0x34) goto LAB_1800b1cd9;
      if ((int)local_res20 < 0) {
        uVar27 = 0;
        cVar40 = 'x';
        iVar24 = 1;
      }
      else {
        uVar31 = uVar31 - 0x424 >> 4;
        uVar27 = (ulonglong)uVar31;
        cVar40 = (char)uVar31 * '\x10' + 'x';
        uVar31 = (uVar31 * 0x134410 >> 0x12) + 0x19;
        pauVar32 = (int32_t (*) [32])(ulonglong)uVar31;
        iVar24 = uVar31 / 9 - 1;
        if (iVar24 < 0) goto LAB_1800b1cd9;
      }
      uVar26 = local_50 << 8;
      bVar29 = (cVar40 - (char)local_res20) + 0x88;
      iVar25 = (uint)(ushort)(&DAT_1801833a0)[uVar27] + iVar24;
      do {
        lVar39 = (longlong)iVar25;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)(&DAT_18015d490 + lVar39 * 0x18);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar26;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulonglong *)(&DAT_18015d498 + lVar39 * 0x18);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar26;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = *(ulonglong *)(&DAT_18015d4a0 + lVar39 * 0x18);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar26;
        uVar27 = SUB168(auVar4 * auVar10,0);
        auVar21._8_8_ = uVar27;
        auVar21._0_8_ = SUB168(auVar2 * auVar8,8);
        uVar35 = SUB168(auVar3 * auVar9 + auVar21,8);
        uVar38 = SUB168(auVar4 * auVar10,8) + (ulonglong)(uVar35 < uVar27);
        bVar30 = bVar29 & 0x3f;
        uVar35 = uVar35 >> bVar30 | uVar38 << 0x40 - bVar30;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar35;
        uVar38 = uVar38 >> (bVar29 & 0x3f);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar35;
        uVar27 = SUB168(ZEXT816(0x89705f4136b4a597) * auVar12,0);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar38;
        pauVar28 = SUB168(ZEXT816(0x31680a88f8953031) * auVar13,0);
        pauVar32 = (int32_t (*) [32])
                   ((longlong)*pauVar28 + SUB168(ZEXT816(0x31680a88f8953031) * auVar11,8));
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar38;
        uVar31 = (int)uVar35 +
                 (int)(SUB168(ZEXT816(0x89705f4136b4a597) * auVar14,0) +
                       (ulonglong)((longlong)*pauVar32 + uVar27 < uVar27) +
                       SUB168(ZEXT816(0x31680a88f8953031) * auVar13,8) +
                       (ulonglong)(pauVar32 < pauVar28) +
                       SUB168(ZEXT816(0x89705f4136b4a597) * auVar12,8) >> 0x1d) * -1000000000;
        if (bVar42) {
          if ((longlong)param_3 - (longlong)pauVar37 < 9) goto LAB_1800b2087;
          pauVar32 = (int32_t (*) [32])(ulonglong)uVar31;
          FUN_1800b20c0(uVar31,(char *)pauVar37);
          pauVar37 = (int32_t (*) [32])(*pauVar37 + 9);
        }
        else if (uVar31 != 0) {
          pauVar32 = (int32_t (*) [32])(ulonglong)uVar31;
          uVar33 = FUN_1800b2160(uVar31);
          pauVar28 = (int32_t (*) [32])(ulonglong)uVar33;
          if ((longlong)param_3 - (longlong)pauVar37 < (longlong)pauVar28) goto LAB_1800b2087;
          pauVar32 = pauVar28;
          FUN_1800b18f0(uVar33,uVar31,(char *)pauVar37);
          bVar42 = true;
          pauVar37 = (int32_t (*) [32])((longlong)*pauVar28 + (longlong)*pauVar37);
        }
        iVar25 = iVar25 + -1;
        iVar24 = iVar24 + -1;
      } while (-1 < iVar24);
      if (!bVar42) goto LAB_1800b1cd9;
    }
    uVar27 = (ulonglong)param_5;
    if (param_5 != 0) {
      if (pauVar37 == param_3) goto LAB_1800b2087;
      (*pauVar37)[0] = 0x2e;
      pauVar37 = (int32_t (*) [32])(*pauVar37 + 1);
    }
    if ((int)local_res20 < 0) {
      iVar24 = (int)(local_res20 + ((int)local_res20 >> 0x1f & 0xfU)) >> 4;
      iVar25 = -iVar24;
      bVar29 = (&DAT_180183420)[iVar25];
      uVar31 = param_5 / 9 + 1;
      pauVar32 = (int32_t (*) [32])(ulonglong)uVar31;
      if (uVar31 <= bVar29) goto LAB_1800b204d;
      uVar33 = 0;
      if (bVar29 != 0) {
        uVar33 = (uint)bVar29 + (uint)bVar29 * 8;
        if ((longlong)param_3 - (longlong)pauVar37 < (longlong)(ulonglong)uVar33)
        goto LAB_1800b2087;
        if (uVar33 != 0) {
          FUN_180151670(pauVar37,0x30,(ulonglong)uVar33);
        }
        pauVar37 = (int32_t (*) [32])(*pauVar37 + uVar33);
        uVar33 = (uint)bVar29;
      }
      pauVar32 = (int32_t (*) [32])(ulonglong)uVar31;
      if (uVar33 < uVar31) {
        uVar41 = ((uint)*(ushort *)(&DAT_180183470 + (longlong)iVar25 * 2) - (uint)bVar29) + uVar33;
        lVar39 = (longlong)param_3 - (longlong)pauVar37;
        uVar1 = *(ushort *)(&DAT_180183472 + (longlong)iVar25 * 2);
LAB_1800b1dd0:
        uVar27 = (ulonglong)uVar41;
        if (uVar1 <= uVar41) {
          param_5 = param_5 + uVar33 * -9;
          uVar27 = (ulonglong)param_5;
          bVar42 = SBORROW8((longlong)param_3 - (longlong)pauVar37,uVar27);
          lVar39 = ((longlong)param_3 - (longlong)pauVar37) - uVar27;
          goto LAB_1800b2059;
        }
        uVar38 = local_50 << 8;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = *(ulonglong *)(&UNK_180164750 + uVar27 * 0x18);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar38;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = *(ulonglong *)(&UNK_180164758 + uVar27 * 0x18);
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar38;
        uVar26 = SUB168(auVar6 * auVar16,0);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)(&UNK_180164760 + uVar27 * 0x18);
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar38;
        uVar27 = SUB168(auVar7 * auVar17,0);
        uVar26 = uVar27 + (SUB168(auVar5 * auVar15,8) + uVar26 < uVar26) +
                 SUB168(auVar6 * auVar16,8);
        uVar38 = SUB168(auVar7 * auVar17,8) + (ulonglong)(uVar26 < uVar27);
        bVar30 = (char)iVar24 * '\x10' - (char)local_res20;
        bVar29 = bVar30 & 0x3f;
        uVar35 = uVar26 >> bVar29 | uVar38 << 0x40 - bVar29;
        uVar38 = uVar38 >> (bVar30 & 0x3f);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar35;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar35;
        pauVar28 = SUB168(ZEXT816(0x89705f4136b4a597) * auVar19,0);
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar38;
        uVar26 = SUB168(ZEXT816(0x31680a88f8953031) * auVar20,0);
        uVar27 = uVar26 + SUB168(ZEXT816(0x31680a88f8953031) * auVar18,8);
        pauVar32 = (int32_t (*) [32])((longlong)*pauVar28 + uVar27);
        uVar34 = (int)uVar35 +
                 (int)(uVar38 * -0x768fa0bec94b5a69 + (ulonglong)(pauVar32 < pauVar28) +
                       SUB168(ZEXT816(0x31680a88f8953031) * auVar20,8) +
                       (ulonglong)(uVar27 < uVar26) +
                       SUB168(ZEXT816(0x89705f4136b4a597) * auVar19,8) >> 0x1d) * -1000000000;
        if (uVar33 < param_5 / 9) {
          if (8 < lVar39) goto code_r0x0001800b1eba;
          goto LAB_1800b2087;
        }
        uVar31 = param_5 + uVar33 * -9;
        pauVar32 = (int32_t (*) [32])0x0;
        if (9 - uVar31 == 0) goto LAB_1800b1f77;
        uVar27 = (ulonglong)(9 - uVar31);
        uVar33 = uVar34;
        do {
          uVar34 = uVar33 / 10;
          uVar41 = uVar33 % 10;
          pauVar32 = (int32_t (*) [32])(ulonglong)uVar41;
          uVar27 = uVar27 - 1;
          uVar33 = uVar34;
        } while (uVar27 != 0);
        if (uVar41 == 5) {
          uVar33 = ~local_res20 - param_5;
          if (((int)uVar33 < 1) ||
             (((int)uVar33 < 0x3c &&
              (pauVar32 = (int32_t (*) [32])(ulonglong)uVar33,
              (local_50 & (1L << ((byte)uVar33 & 0x3f)) - 1U) == 0)))) {
            cVar40 = '\x02';
          }
          else {
            cVar40 = '\x01';
          }
        }
        else {
LAB_1800b1f77:
          cVar40 = 5 < (uint)pauVar32;
        }
        if (uVar31 == 0) {
LAB_1800b1fa6:
          pauVar23 = param_3;
          pauVar28 = pauVar37;
          if (cVar40 != '\0') {
            while( true ) {
              do {
                pauVar22 = pauVar23;
                if (pauVar28 == param_2) {
                  (*pauVar28)[0] = 0x31;
                  if (pauVar22 != param_3) {
                    *(int32_t *)*pauVar22 = 0x2e30;
                  }
                  if (pauVar37 != param_3) {
                    (*pauVar37)[0] = 0x30;
                    *param_1 = *pauVar37 + 1;
                    *(int32_t *)(param_1 + 1) = 0;
                    return (int32_t *)pauVar32;
                  }
                  goto LAB_1800b2087;
                }
                bVar29 = pauVar28[-1][0x1f];
                pauVar32 = (int32_t (*) [32])(ulonglong)bVar29;
                pauVar28 = (int32_t (*) [32])(pauVar28[-1] + 0x1f);
                pauVar23 = pauVar28;
              } while (bVar29 == 0x2e);
              if (bVar29 != 0x39) break;
              (*pauVar28)[0] = 0x30;
              cVar40 = '\x01';
              pauVar23 = pauVar22;
            }
            if ((cVar40 == '\x01') || ((bVar29 & 1) != 0)) {
              (*pauVar28)[0] = bVar29 + 1;
              *param_1 = pauVar37;
              *(int32_t *)(param_1 + 1) = 0;
              return (int32_t *)(ulonglong)(byte)(bVar29 + 1);
            }
          }
          goto LAB_1800b2073;
        }
        if ((longlong)(ulonglong)uVar31 <= (longlong)param_3 - (longlong)pauVar37) {
          pauVar32 = (int32_t (*) [32])(ulonglong)uVar31;
          FUN_1800b21d0(uVar31,uVar34,(longlong)pauVar37);
          pauVar37 = (int32_t (*) [32])(*pauVar37 + uVar31);
          goto LAB_1800b1fa6;
        }
        goto LAB_1800b2087;
      }
    }
    else {
LAB_1800b204d:
      bVar42 = SBORROW8((longlong)param_3 - (longlong)pauVar37,uVar27);
      lVar39 = ((longlong)param_3 - (longlong)pauVar37) - uVar27;
LAB_1800b2059:
      if (bVar42 != lVar39 < 0) goto LAB_1800b2087;
      if (param_5 != 0) {
        pauVar32 = pauVar37;
        FUN_180151670(pauVar37,0x30,uVar27);
      }
      pauVar37 = (int32_t (*) [32])(*pauVar37 + uVar27);
    }
LAB_1800b2073:
    *param_1 = pauVar37;
    *(int32_t *)(param_1 + 1) = 0;
  }
  return (int32_t *)pauVar32;
code_r0x0001800b1eba:
  pauVar32 = (int32_t (*) [32])(ulonglong)uVar34;
  FUN_1800b20c0(uVar34,(char *)pauVar37);
  pauVar37 = (int32_t (*) [32])(*pauVar37 + 9);
  lVar39 = lVar39 + -9;
  uVar33 = uVar33 + 1;
  uVar41 = uVar41 + 1;
  if (uVar31 <= uVar33) {
    *param_1 = pauVar37;
    *(int32_t *)(param_1 + 1) = 0;
    return (int32_t *)pauVar32;
  }
  goto LAB_1800b1dd0;
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
}

