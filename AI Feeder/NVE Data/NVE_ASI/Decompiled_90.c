#include <stdint.h>
#include <stddef.h>

// ---- Function: _fclrf ----
/* Library Function - Single Match
    _fclrf
   
   Library: Visual Studio */

void _fclrf(void)

{
  MXCSR = MXCSR & 0xffffffc0;
  return;
}

// ---- Function: FUN_18014abd0 ----
ulong FUN_18014abd0(char *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  ulong *puVar2;
  longlong lVar3;
  char *pcVar4;
  ulong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_18014ac23:
      if (param_2 != 0) {
        if (param_4 == 0) {
          *param_1 = '\0';
          return 0;
        }
        if (param_3 != 0) {
          pcVar4 = param_1;
          lVar3 = param_4;
          lVar7 = param_2;
          if (param_4 == -1) {
            do {
              cVar1 = pcVar4[param_3 - (longlong)param_1];
              *pcVar4 = cVar1;
              pcVar4 = pcVar4 + 1;
              if (cVar1 == '\0') {
                return 0;
              }
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
            lVar7 = 0;
          }
          else {
            do {
              lVar6 = lVar3;
              cVar1 = pcVar4[param_3 - (longlong)param_1];
              *pcVar4 = cVar1;
              pcVar4 = pcVar4 + 1;
              if (cVar1 == '\0') {
                return 0;
              }
              lVar7 = lVar7 + -1;
            } while ((lVar7 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
            lVar3 = lVar6 + -1;
            if (lVar7 == 0) {
              lVar3 = lVar6;
            }
            if (lVar3 == 0) {
              *pcVar4 = '\0';
            }
          }
          if (lVar7 != 0) {
            return 0;
          }
          if (param_4 == -1) {
            param_1[param_2 + -1] = '\0';
            return 0x50;
          }
          *param_1 = '\0';
          puVar2 = __doserrno();
          uVar5 = 0x22;
          goto LAB_18014ac01;
        }
        *param_1 = '\0';
      }
    }
  }
  else if (param_1 != (char *)0x0) goto LAB_18014ac23;
  puVar2 = __doserrno();
  uVar5 = 0x16;
LAB_18014ac01:
  *puVar2 = uVar5;
  FUN_18012b794();
  return uVar5;
}

// ---- Function: FUN_18014acc0 ----
void FUN_18014acc0(byte *param_1,int32_t *param_2,ulonglong param_3,int *param_4,longlong param_5
                  )

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ushort *puVar4;
  ushort *puVar5;
  byte *pbVar6;
  int32_t auStack_78 [32];
  longlong local_58;
  int32_t local_50;
  byte local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_1801eb080 ^ (ulonglong)auStack_78;
  puVar4 = (ushort *)*param_2;
  local_58 = param_5;
  puVar5 = puVar4;
  local_50 = param_4;
  if (param_1 == (byte *)0x0) {
    lVar3 = FUN_18014c968(local_48,(uint)*puVar4,param_4,param_5);
    lVar1 = local_58;
    while ((lVar3 != -1 && ((lVar3 == 0 || (local_48[lVar3 + -1] != 0))))) {
      puVar4 = puVar4 + 1;
      lVar3 = FUN_18014c968(local_48,(uint)*puVar4,param_4,lVar1);
    }
  }
  else {
    while( true ) {
      pbVar6 = local_48;
      if (3 < param_3) {
        pbVar6 = param_1;
      }
      uVar2 = FUN_18014c968(pbVar6,(uint)*puVar4,local_50,local_58);
      if (uVar2 == 0xffffffffffffffff) {
        *param_2 = puVar5;
        goto LAB_18014adef;
      }
      if (pbVar6 != param_1) {
        if (param_3 < uVar2) goto LAB_18014ad6a;
        FUN_180150fd0((int32_t *)param_1,(int32_t *)pbVar6,uVar2);
      }
      if ((uVar2 != 0) && (param_1[uVar2 - 1] == 0)) break;
      param_1 = param_1 + uVar2;
      puVar4 = puVar4 + 1;
      if (uVar2 != 0) {
        puVar5 = puVar4;
      }
      param_3 = param_3 - uVar2;
    }
    puVar5 = (ushort *)0x0;
LAB_18014ad6a:
    *param_2 = puVar5;
  }
LAB_18014adef:
  FUN_1801252c0(local_40 ^ (ulonglong)auStack_78);
  return;
}

// ---- Function: FUN_18014ae20 ----
void FUN_18014ae20(int32_t *param_1,ulonglong param_2,ulonglong param_3,int32_t *param_4)

{
  int32_t uVar1;
  int iVar2;
  ulong *puVar3;
  int32_t *puVar4;
  longlong lVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  ulonglong uVar9;
  int32_t *puVar10;
  int32_t auStack_468 [32];
  longlong local_448;
  int32_t auStack_438 [62];
  int32_t auStack_248 [62];
  ulonglong local_58;
  
  local_58 = DAT_1801eb080 ^ (ulonglong)auStack_468;
  if ((((param_1 == (int32_t *)0x0) && (param_2 != 0)) || (param_3 == 0)) ||
     (param_4 == (int32_t *)0x0)) {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_18012b794();
  }
  else if (1 < param_2) {
    local_448 = 0;
    puVar10 = param_1 + (param_2 - 1) * param_3;
LAB_18014aec0:
    while (uVar9 = (ulonglong)((longlong)puVar10 - (longlong)param_1) / param_3 + 1, 8 < uVar9) {
      lVar5 = (uVar9 >> 1) * param_3;
      puVar7 = param_1 + lVar5;
      iVar2 = (*(code *)PTR__guard_dispatch_icall_180157478)(param_1,puVar7);
      if ((0 < iVar2) && (puVar6 = puVar7, uVar9 = param_3, param_1 != puVar7)) {
        do {
          uVar1 = puVar6[-lVar5];
          puVar6[-lVar5] = *puVar6;
          *puVar6 = uVar1;
          uVar9 = uVar9 - 1;
          puVar6 = puVar6 + 1;
        } while (uVar9 != 0);
      }
      iVar2 = (*(code *)PTR__guard_dispatch_icall_180157478)(param_1,puVar10);
      if ((0 < iVar2) && (param_1 != puVar10)) {
        puVar6 = puVar10;
        uVar9 = param_3;
        do {
          uVar1 = puVar6[(longlong)param_1 - (longlong)puVar10];
          puVar6[(longlong)param_1 - (longlong)puVar10] = *puVar6;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      iVar2 = (*(code *)PTR__guard_dispatch_icall_180157478)(puVar7);
      puVar6 = param_1;
      puVar8 = puVar10;
      if ((0 < iVar2) && (puVar7 != puVar10)) {
        puVar4 = puVar10;
        uVar9 = param_3;
        do {
          uVar1 = puVar4[(longlong)puVar7 - (longlong)puVar10];
          puVar4[(longlong)puVar7 - (longlong)puVar10] = *puVar4;
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
LAB_18014b070:
      puVar4 = puVar7;
      if (puVar6 < puVar4) {
        do {
          puVar6 = puVar6 + param_3;
          if (puVar4 <= puVar6) goto LAB_18014b0a0;
          iVar2 = (*(code *)PTR__guard_dispatch_icall_180157478)(puVar6);
        } while (iVar2 < 1);
      }
      else {
LAB_18014b0a0:
        do {
          puVar6 = puVar6 + param_3;
          if (puVar10 < puVar6) break;
          iVar2 = (*(code *)PTR__guard_dispatch_icall_180157478)(puVar6);
        } while (iVar2 < 1);
      }
      do {
        puVar7 = puVar8;
        puVar8 = puVar7 + -param_3;
        if (puVar8 <= puVar4) break;
        iVar2 = (*(code *)PTR__guard_dispatch_icall_180157478)(puVar8);
      } while (0 < iVar2);
      if (puVar6 <= puVar8) {
        if (puVar8 != puVar6) {
          puVar7 = puVar8;
          uVar9 = param_3;
          do {
            uVar1 = puVar7[(longlong)puVar6 - (longlong)puVar8];
            puVar7[(longlong)puVar6 - (longlong)puVar8] = *puVar7;
            *puVar7 = uVar1;
            puVar7 = puVar7 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar7 = puVar6;
        if (puVar4 != puVar8) {
          puVar7 = puVar4;
        }
        goto LAB_18014b070;
      }
      if (puVar4 < puVar7) {
        do {
          puVar7 = puVar7 + -param_3;
          if (puVar7 <= puVar4) goto LAB_18014b157;
          iVar2 = (*(code *)PTR__guard_dispatch_icall_180157478)(puVar7);
        } while (iVar2 == 0);
      }
      else {
LAB_18014b157:
        do {
          puVar7 = puVar7 + -param_3;
          if (puVar7 <= param_1) break;
          iVar2 = (*(code *)PTR__guard_dispatch_icall_180157478)(puVar7);
        } while (iVar2 == 0);
      }
      if ((longlong)puVar7 - (longlong)param_1 < (longlong)puVar10 - (longlong)puVar6)
      goto LAB_18014b1bd;
      if (param_1 < puVar7) {
        auStack_438[local_448] = param_1;
        auStack_248[local_448] = puVar7;
        local_448 = local_448 + 1;
      }
      param_1 = puVar6;
      if (puVar10 <= puVar6) goto LAB_18014af53;
    }
    for (; puVar6 = param_1, puVar7 = param_1, param_1 < puVar10; puVar10 = puVar10 + -param_3) {
      while (puVar7 = puVar7 + param_3, puVar7 <= puVar10) {
        iVar2 = (*(code *)PTR__guard_dispatch_icall_180157478)(puVar7,puVar6);
        if (0 < iVar2) {
          puVar6 = puVar7;
        }
      }
      if (puVar6 != puVar10) {
        puVar7 = puVar10;
        uVar9 = param_3;
        do {
          uVar1 = puVar7[(longlong)puVar6 - (longlong)puVar10];
          puVar7[(longlong)puVar6 - (longlong)puVar10] = *puVar7;
          *puVar7 = uVar1;
          puVar7 = puVar7 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    goto LAB_18014af53;
  }
LAB_18014b210:
  FUN_1801252c0(local_58 ^ (ulonglong)auStack_468);
  return;
LAB_18014b1bd:
  if (puVar6 < puVar10) {
    auStack_438[local_448] = puVar6;
    auStack_248[local_448] = puVar10;
    local_448 = local_448 + 1;
  }
  puVar10 = puVar7;
  if (puVar7 <= param_1) {
LAB_18014af53:
    local_448 = local_448 + -1;
    if (-1 < local_448) {
      param_1 = (int32_t *)auStack_438[local_448];
      puVar10 = (int32_t *)auStack_248[local_448];
      goto LAB_18014aec0;
    }
    goto LAB_18014b210;
  }
  goto LAB_18014aec0;
}

// ---- Function: FUN_18014b2d0 ----
byte * FUN_18014b2d0(byte *param_1,byte *param_2)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
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
  byte bVar19;
  ulonglong uVar20;
  byte *pbVar21;
  int32_t (*pauVar22) [16];
  uint uVar23;
  int32_t auVar24 [16];
  int32_t auVar25 [16];
  int32_t auVar26 [16];
  int32_t auVar28 [16];
  int32_t auVar29 [16];
  int32_t auVar30 [16];
  int32_t auVar31 [16];
  int32_t auVar32 [16];
  int32_t auVar33 [16];
  int32_t auVar34 [16];
  int32_t auVar35 [16];
  int32_t auVar36 [16];
  int32_t auStack_58 [32];
  byte abStack_38 [32];
  ulonglong local_18;
  longlong lVar27;
  
  uVar23 = (uint)param_2 & 0xf;
  uVar20 = (ulonglong)uVar23;
  pauVar22 = (int32_t (*) [16])(param_2 + -uVar20);
  auVar35 = *pauVar22;
  switch(uVar20) {
  case 1:
    auVar35 = auVar35 >> 8;
    break;
  case 2:
    auVar35 = auVar35 >> 0x10;
    break;
  case 3:
    auVar35 = auVar35 >> 0x18;
    break;
  case 4:
    auVar35 = auVar35 >> 0x20;
    break;
  case 5:
    auVar35 = auVar35 >> 0x28;
    break;
  case 6:
    auVar35 = auVar35 >> 0x30;
    break;
  case 7:
    auVar35 = auVar35 >> 0x38;
    break;
  case 8:
    auVar35 = auVar35 >> 0x40;
    break;
  case 9:
    auVar35 = auVar35 >> 0x48;
    break;
  case 10:
    auVar35 = auVar35 >> 0x50;
    break;
  case 0xb:
    auVar35 = auVar35 >> 0x58;
    break;
  case 0xc:
    auVar35 = auVar35 >> 0x60;
    break;
  case 0xd:
    auVar35 = auVar35 >> 0x68;
    break;
  case 0xe:
    auVar35 = auVar35 >> 0x70;
    break;
  case 0xf:
    auVar35 = auVar35 >> 0x78;
  }
  auVar24[0] = -(auVar35[0] == '\0');
  auVar24[1] = -(auVar35[1] == '\0');
  auVar24[2] = -(auVar35[2] == '\0');
  auVar24[3] = -(auVar35[3] == '\0');
  auVar24[4] = -(auVar35[4] == '\0');
  auVar24[5] = -(auVar35[5] == '\0');
  auVar24[6] = -(auVar35[6] == '\0');
  auVar24[7] = -(auVar35[7] == '\0');
  auVar24[8] = -(auVar35[8] == '\0');
  auVar24[9] = -(auVar35[9] == '\0');
  auVar24[10] = -(auVar35[10] == '\0');
  auVar24[0xb] = -(auVar35[0xb] == '\0');
  auVar24[0xc] = -(auVar35[0xc] == '\0');
  auVar24[0xd] = -(auVar35[0xd] == '\0');
  auVar24[0xe] = -(auVar35[0xe] == '\0');
  auVar24[0xf] = -(auVar35[0xf] == '\0');
  uVar3 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
  if (uVar3 == 0) {
    if (uVar20 == 0) {
      if ((*pauVar22)[1] == (char)uVar23) goto LAB_18014b57c;
      goto LAB_18014b230;
    }
  }
  else {
    uVar23 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
      }
    }
    lVar27 = auVar35._8_8_;
    switch(-uVar23) {
    case 0:
      auVar35 = ZEXT816(0);
      break;
    case 0xfffffff1:
      auVar28._0_8_ = auVar35._0_8_ << 8;
      auVar28._8_8_ = lVar27 << 8 | auVar35._0_8_ >> 0x38;
      auVar35 = auVar28 >> 8;
      break;
    case 0xfffffff2:
      auVar29._0_8_ = auVar35._0_8_ << 0x10;
      auVar29._8_8_ = lVar27 << 0x10 | auVar35._0_8_ >> 0x30;
      auVar35 = auVar29 >> 0x10;
      break;
    case 0xfffffff3:
      auVar30._0_8_ = auVar35._0_8_ << 0x18;
      auVar30._8_8_ = lVar27 << 0x18 | auVar35._0_8_ >> 0x28;
      auVar35 = auVar30 >> 0x18;
      break;
    case 0xfffffff4:
      auVar31._0_8_ = auVar35._0_8_ << 0x20;
      auVar31._8_8_ = lVar27 << 0x20 | auVar35._0_8_ >> 0x20;
      auVar35 = auVar31 >> 0x20;
      break;
    case 0xfffffff5:
      auVar32._0_8_ = auVar35._0_8_ << 0x28;
      auVar32._8_8_ = lVar27 << 0x28 | auVar35._0_8_ >> 0x18;
      auVar35 = auVar32 >> 0x28;
      break;
    case 0xfffffff6:
      auVar33._0_8_ = auVar35._0_8_ << 0x30;
      auVar33._8_8_ = lVar27 << 0x30 | auVar35._0_8_ >> 0x10;
      auVar35 = auVar33 >> 0x30;
      break;
    case 0xfffffff7:
      auVar34._0_8_ = auVar35._0_8_ << 0x38;
      auVar34._8_8_ = lVar27 << 0x38 | auVar35._0_8_ >> 8;
      auVar35 = auVar34 >> 0x38;
      break;
    case 0xfffffff8:
      auVar35._8_8_ = 0;
      break;
    case 0xfffffff9:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar35._0_8_ << 8;
      auVar35 = (auVar4 << 0x40) >> 0x48;
      break;
    case 0xfffffffa:
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar35._0_8_ << 0x10;
      auVar35 = (auVar5 << 0x40) >> 0x50;
      break;
    case 0xfffffffb:
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar35._0_8_ << 0x18;
      auVar35 = (auVar6 << 0x40) >> 0x58;
      break;
    case 0xfffffffc:
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar35._0_8_ << 0x20;
      auVar35 = (auVar7 << 0x40) >> 0x60;
      break;
    case 0xfffffffd:
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar35._0_8_ << 0x28;
      auVar35 = (auVar8 << 0x40) >> 0x68;
      break;
    case 0xfffffffe:
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar35._0_8_ << 0x30;
      auVar35 = (auVar9 << 0x40) >> 0x70;
      break;
    case 0xffffffff:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auVar35._0_8_ << 0x38;
      auVar35 = (auVar10 << 0x40) >> 0x78;
    }
    if (uVar20 == 0 || (ulonglong)uVar23 < 0x10 - uVar20) goto LAB_18014b57c;
  }
  auVar36 = pauVar22[1];
  auVar25[0] = -(auVar36[0] == '\0');
  auVar25[1] = -(auVar36[1] == '\0');
  auVar25[2] = -(auVar36[2] == '\0');
  auVar25[3] = -(auVar36[3] == '\0');
  auVar25[4] = -(auVar36[4] == '\0');
  auVar25[5] = -(auVar36[5] == '\0');
  auVar25[6] = -(auVar36[6] == '\0');
  lVar27 = auVar36._8_8_;
  auVar25[7] = -(auVar36[7] == '\0');
  auVar25[8] = -(auVar36[8] == '\0');
  auVar25[9] = -(auVar36[9] == '\0');
  auVar25[10] = -(auVar36[10] == '\0');
  auVar25[0xb] = -(auVar36[0xb] == '\0');
  auVar25[0xc] = -(auVar36[0xc] == '\0');
  auVar25[0xd] = -(auVar36[0xd] == '\0');
  auVar25[0xe] = -(auVar36[0xe] == '\0');
  auVar25[0xf] = -(auVar36[0xf] == '\0');
  uVar3 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
  if (uVar3 != 0) {
    uVar23 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
      }
    }
    if ((uVar23 - uVar20) + 0x10 < 0x11) {
      uVar20 = auVar36._0_8_;
      switch(-uVar23) {
      case 0:
        auVar36 = ZEXT816(0);
        break;
      case 0xfffffff1:
        auVar36._0_8_ = uVar20 << 8;
        auVar36._8_8_ = lVar27 << 8 | uVar20 >> 0x38;
        break;
      case 0xfffffff2:
        auVar36._0_8_ = uVar20 << 0x10;
        auVar36._8_8_ = lVar27 << 0x10 | uVar20 >> 0x30;
        break;
      case 0xfffffff3:
        auVar36._0_8_ = uVar20 << 0x18;
        auVar36._8_8_ = lVar27 << 0x18 | uVar20 >> 0x28;
        break;
      case 0xfffffff4:
        auVar36._0_8_ = uVar20 << 0x20;
        auVar36._8_8_ = lVar27 << 0x20 | uVar20 >> 0x20;
        break;
      case 0xfffffff5:
        auVar36._0_8_ = uVar20 << 0x28;
        auVar36._8_8_ = lVar27 << 0x28 | uVar20 >> 0x18;
        break;
      case 0xfffffff6:
        auVar36._0_8_ = uVar20 << 0x30;
        auVar36._8_8_ = lVar27 << 0x30 | uVar20 >> 0x10;
        break;
      case 0xfffffff7:
        auVar36._0_8_ = uVar20 << 0x38;
        auVar36._8_8_ = lVar27 << 0x38 | uVar20 >> 8;
        break;
      case 0xfffffff8:
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar20;
        auVar36 = auVar18 << 0x40;
        break;
      case 0xfffffff9:
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar20 << 8;
        auVar36 = auVar11 << 0x40;
        break;
      case 0xfffffffa:
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar20 << 0x10;
        auVar36 = auVar12 << 0x40;
        break;
      case 0xfffffffb:
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar20 << 0x18;
        auVar36 = auVar13 << 0x40;
        break;
      case 0xfffffffc:
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar20 << 0x20;
        auVar36 = auVar14 << 0x40;
        break;
      case 0xfffffffd:
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar20 << 0x28;
        auVar36 = auVar15 << 0x40;
        break;
      case 0xfffffffe:
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar20 << 0x30;
        auVar36 = auVar16 << 0x40;
        break;
      case 0xffffffff:
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar20 << 0x38;
        auVar36 = auVar17 << 0x40;
      }
      auVar35 = auVar35 | auVar36;
LAB_18014b57c:
      bVar19 = *param_1;
      while( true ) {
        if (bVar19 == 0) {
          return (byte *)0x0;
        }
        auVar26[0] = -(bVar19 == auVar35[0]);
        auVar26[1] = -(bVar19 == auVar35[1]);
        auVar26[2] = -(bVar19 == auVar35[2]);
        auVar26[3] = -(bVar19 == auVar35[3]);
        auVar26[4] = -(bVar19 == auVar35[4]);
        auVar26[5] = -(bVar19 == auVar35[5]);
        auVar26[6] = -(bVar19 == auVar35[6]);
        auVar26[7] = -(bVar19 == auVar35[7]);
        auVar26[8] = -(bVar19 == auVar35[8]);
        auVar26[9] = -(bVar19 == auVar35[9]);
        auVar26[10] = -(bVar19 == auVar35[10]);
        auVar26[0xb] = -(bVar19 == auVar35[0xb]);
        auVar26[0xc] = -(bVar19 == auVar35[0xc]);
        auVar26[0xd] = -(bVar19 == auVar35[0xd]);
        auVar26[0xe] = -(bVar19 == auVar35[0xe]);
        bVar2 = bVar19 == auVar35[0xf];
        auVar26[0xf] = -bVar2;
        if ((((((((((((((((auVar26 >> 7 & (int32_t  [16])0x1) != (int32_t  [16])0x0 ||
                         (auVar26 >> 0xf & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                        (auVar26 >> 0x17 & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                       (auVar26 >> 0x1f & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                      (auVar26 >> 0x27 & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                     (auVar26 >> 0x2f & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                    (auVar26 >> 0x37 & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                   (auVar26 >> 0x3f & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                  (auVar26 >> 0x47 & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                 (auVar26 >> 0x4f & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                (auVar26 >> 0x57 & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
               (auVar26 >> 0x5f & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
              (auVar26 >> 0x67 & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
             (auVar26 >> 0x6f & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
            (auVar26 >> 0x77 & (int32_t  [16])0x1) != (int32_t  [16])0x0) || bVar2) break;
        bVar19 = param_1[1];
        param_1 = param_1 + 1;
      }
      return param_1;
    }
  }
LAB_18014b230:
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_58;
  uVar20 = 0;
  do {
    if (0x1f < uVar20) {
      __report_rangecheckfailure();
      pcVar1 = (code *)swi(3);
      pbVar21 = (byte *)(*pcVar1)();
      return pbVar21;
    }
    abStack_38[uVar20] = 0;
    uVar20 = uVar20 + 1;
  } while ((longlong)uVar20 < 0x20);
  bVar19 = *param_2;
  while (bVar19 != 0) {
    param_2 = param_2 + 1;
    abStack_38[bVar19 >> 3] = abStack_38[bVar19 >> 3] | (byte)(1 << (bVar19 & 7));
    bVar19 = *param_2;
  }
  while ((bVar19 = *param_1, bVar19 != 0 &&
         ((abStack_38[bVar19 >> 3] & (byte)(1 << (bVar19 & 7))) == 0))) {
    param_1 = param_1 + 1;
  }
  pbVar21 = (byte *)FUN_1801252c0(local_18 ^ (ulonglong)auStack_58);
  return pbVar21;
}

// ---- Function: FUN_18014b698 ----
byte * FUN_18014b698(byte *param_1,byte *param_2)

{
  ulong *puVar1;
  byte *pbVar2;
  longlong local_28 [2];
  longlong local_18;
  char local_10;
  
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_18012b794();
  }
  else if (param_1 < param_2) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(__crt_locale_pointers *)0x0);
    pbVar2 = param_2 + -1;
    if (*(int *)(local_18 + 8) != 0) {
      do {
        pbVar2 = pbVar2 + -1;
        if (pbVar2 < param_1) break;
      } while ((*(byte *)((ulonglong)*pbVar2 + 0x19 + local_18) & 4) != 0);
      pbVar2 = param_2 + (-1 - (ulonglong)((int)param_2 - (int)pbVar2 & 1));
    }
    if (local_10 == '\0') {
      return pbVar2;
    }
    *(uint *)(local_28[0] + 0x3a8) = *(uint *)(local_28[0] + 0x3a8) & 0xfffffffd;
    return pbVar2;
  }
  return (byte *)0x0;
}

// ---- Function: FUN_18014b74c ----
LPCWSTR FUN_18014b74c(LPCSTR param_1,LPCSTR param_2)

{
  uint uVar1;
  int32_t uVar2;
  UINT UVar3;
  LPCWSTR pWVar4;
  LPCWSTR pWVar5;
  UINT UVar6;
  int32_t local_res18 [8];
  longlong local_98;
  longlong local_90;
  char local_80;
  int32_t local_78;
  int32_t local_70;
  LPCWSTR local_68;
  int32_t local_60;
  int32_t local_58;
  char local_50;
  int32_t local_48;
  int32_t local_40;
  LPCWSTR local_38;
  int32_t local_30;
  int32_t local_28;
  char local_20;
  
  pWVar4 = (LPCWSTR)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (LPCWSTR)0x0;
  local_30 = 0;
  UVar6 = 0;
  local_28 = 0;
  local_20 = '\0';
  local_78 = 0;
  local_70 = 0;
  local_68 = (LPCWSTR)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = '\0';
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_98,(__crt_locale_pointers *)0x0);
  UVar3 = 0xfde9;
  if (*(int *)(local_90 + 0xc) == 0xfde9) {
    if (local_80 != '\0') {
      *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
    }
  }
  else {
    uVar2 = FUN_18013a680();
    if ((int)uVar2 == 0) {
      if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
      UVar3 = 1;
    }
    else {
      UVar3 = UVar6;
      if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
    }
  }
  uVar1 = FUN_180135a24(param_1,(longlong)&local_48,local_res18,UVar3);
  pWVar5 = pWVar4;
  if (uVar1 == 0) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_98,(__crt_locale_pointers *)0x0);
    if (*(int *)(local_90 + 0xc) == 0xfde9) {
      UVar6 = 0xfde9;
      if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      uVar2 = FUN_18013a680();
      if ((int)uVar2 == 0) {
        if (local_80 != '\0') {
          *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
        }
        UVar6 = 1;
      }
      else if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
    }
    uVar1 = FUN_180135a24(param_2,(longlong)&local_78,local_res18,UVar6);
    pWVar5 = local_68;
    if (uVar1 == 0) {
      uVar1 = SetEnvironmentVariableW(local_38,local_68);
      pWVar4 = (LPCWSTR)(ulonglong)uVar1;
    }
  }
  if (local_50 != '\0') {
    FUN_18013bf3c(pWVar5);
  }
  if (local_20 != '\0') {
    FUN_18013bf3c(local_38);
  }
  return pWVar4;
}

// ---- Function: _msize_base ----
/* Library Function - Single Match
    _msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int32_t _msize_base(longlong param_1)

{
  ulong *puVar1;
  int32_t uVar2;
  
  if (param_1 == 0) {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_18012b794();
    return 0xffffffffffffffff;
  }
                    
                    
  uVar2 = HeapSize(DAT_1801ee8a8,0,param_1);
  return uVar2;
}

// ---- Function: FUN_18014b928 ----
int32_t FUN_18014b928(uint param_1,short *param_2,ulonglong param_3,uint param_4,char param_5)

{
  short *psVar1;
  short sVar2;
  ulonglong uVar3;
  ulong *puVar4;
  int32_t uVar5;
  ulonglong uVar6;
  short *psVar7;
  short *psVar8;
  
  psVar7 = param_2;
  if (param_5 != '\0') {
    param_1 = -param_1;
    *param_2 = 0x2d;
    psVar7 = param_2 + 1;
  }
  uVar6 = (ulonglong)(param_5 != '\0');
  psVar1 = psVar7;
  do {
    psVar8 = psVar1;
    uVar3 = (ulonglong)param_1;
    param_1 = param_1 / param_4;
    sVar2 = 0x57;
    if ((uint)(uVar3 % (ulonglong)param_4) < 10) {
      sVar2 = 0x30;
    }
    uVar6 = uVar6 + 1;
    *psVar8 = sVar2 + (short)(uVar3 % (ulonglong)param_4);
  } while ((param_1 != 0) && (psVar1 = psVar8 + 1, uVar6 < param_3));
  if (uVar6 < param_3) {
    psVar8[1] = 0;
    do {
      sVar2 = *psVar8;
      *psVar8 = *psVar7;
      psVar8 = psVar8 + -1;
      *psVar7 = sVar2;
      psVar7 = psVar7 + 1;
    } while (psVar7 < psVar8);
    uVar5 = 0;
  }
  else {
    *param_2 = 0;
    puVar4 = __doserrno();
    *puVar4 = 0x22;
    FUN_18012b794();
    uVar5 = 0x22;
  }
  return uVar5;
}

// ---- Function: common_xtox_s_unsigned_long_wchar_t_ ----
/* Library Function - Single Match
    int __cdecl common_xtox_s<unsigned long,wchar_t>(unsigned long,wchar_t * __ptr64 const,unsigned
   __int64,unsigned int,bool)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
common_xtox_s<unsigned_long,wchar_t>
          (ulong param_1,wchar_t *param_2,__uint64 param_3,uint param_4,bool param_5)

{
  ulong *puVar1;
  int32_t uVar2;
  ulong uVar3;
  
  if ((param_2 != (wchar_t *)0x0) && (param_3 != 0)) {
    *param_2 = L'\0';
    if (param_3 <= (ulonglong)param_5 + 1) {
      puVar1 = __doserrno();
      uVar3 = 0x22;
      goto LAB_18014ba26;
    }
    if (param_4 - 2 < 0x23) {
      uVar2 = FUN_18014b928(param_1,param_2,param_3,param_4,param_5);
      return (int)uVar2;
    }
  }
  puVar1 = __doserrno();
  uVar3 = 0x16;
LAB_18014ba26:
  *puVar1 = uVar3;
  FUN_18012b794();
  return uVar3;
}

// ---- Function: _itow_s ----
/* Library Function - Single Match
    _itow_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl _itow_s(int _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if ((_Radix == 10) && (_Val < 0)) {
    bVar1 = true;
  }
  iVar2 = common_xtox_s<unsigned_long,wchar_t>(_Val,_DstBuf,_SizeInWords,_Radix,bVar1);
  return iVar2;
}

// ---- Function: wcscmp ----
/* Library Function - Single Match
    wcscmp
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl wcscmp(wchar_t *_Str1,wchar_t *_Str2)

{
  wchar_t wVar1;
  longlong lVar2;
  int iVar3;
  
  wVar1 = *_Str2;
  iVar3 = (uint)(ushort)*_Str1 - (uint)(ushort)wVar1;
  if (iVar3 == 0) {
    lVar2 = (longlong)_Str1 - (longlong)_Str2;
    do {
      if (wVar1 == L'\0') break;
      _Str2 = _Str2 + 1;
      wVar1 = *_Str2;
      iVar3 = (uint)*(ushort *)(lVar2 + (longlong)_Str2) - (uint)(ushort)wVar1;
    } while (iVar3 == 0);
  }
  return (iVar3 >> 0x1f) - (-iVar3 >> 0x1f);
}

// ---- Function: __acrt_LCMapStringW ----
/* Library Function - Single Match
    __acrt_LCMapStringW
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_LCMapStringW(ushort *param_1,DWORD param_2,int32_t (*param_3) [32],int param_4,
                        LPWSTR param_5,int param_6)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = param_4;
  if (0 < param_4) {
    uVar2 = FUN_180136b94(param_3,(longlong)param_4);
    iVar1 = (int)uVar2;
    iVar3 = iVar1 + 1;
    if (param_4 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  FUN_18013ac38(param_1,param_2,(LPCWSTR)param_3,iVar3,param_5,param_6,0,0,0);
  return;
}

// ---- Function: FUN_18014bb58 ----
int32_t FUN_18014bb58(void)

{
  return DAT_1801ee8c0;
}

// ---- Function: FUN_18014bb60 ----
void FUN_18014bb60(ulonglong param_1,byte *param_2,ulonglong param_3,uint *param_4,longlong param_5)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  byte bVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint *puVar9;
  ulonglong uVar10;
  int32_t auStack_78 [24];
  uint auStack_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStack_78;
  puVar8 = (uint *)&DAT_1801ee8c8;
  if (param_4 != (uint *)0x0) {
    puVar8 = param_4;
  }
  pbVar5 = &DAT_180187500;
  if (param_2 != (byte *)0x0) {
    pbVar5 = param_2;
  }
  uVar10 = 1;
  if (param_2 != (byte *)0x0) {
    uVar10 = param_3;
  }
  puVar9 = (uint *)(-(ulonglong)(param_2 != (byte *)0x0) & param_1);
  if (uVar10 == 0) goto LAB_18014bd1d;
  if (*(short *)((longlong)puVar8 + 6) == 0) {
    bVar3 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    if (-1 < (char)bVar3) {
      if (puVar9 != (uint *)0x0) {
        *puVar9 = (uint)bVar3;
      }
      goto LAB_18014bd1d;
    }
    if ((bVar3 & 0xe0) == 0xc0) {
      bVar6 = 2;
    }
    else if ((bVar3 & 0xf0) == 0xe0) {
      bVar6 = 3;
    }
    else {
      if ((bVar3 & 0xf8) != 0xf0) goto LAB_18014bd12;
      bVar6 = 4;
    }
    uVar2 = (1 << (7 - bVar6 & 0x1f)) - 1U & (uint)bVar3;
    bVar3 = bVar6;
LAB_18014bc68:
    uVar4 = (ulonglong)bVar3;
    uVar7 = (ulonglong)bVar3;
    if (uVar10 <= uVar4) {
      uVar7 = uVar10;
    }
    while ((ulonglong)((longlong)pbVar5 - (longlong)param_2) < uVar7) {
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      if ((bVar1 & 0xc0) != 0x80) goto LAB_18014bd12;
      uVar2 = bVar1 & 0x3f | uVar2 << 6;
    }
    if (uVar7 < uVar4) {
      *(ushort *)(puVar8 + 1) = (ushort)bVar6;
      *(ushort *)((longlong)puVar8 + 6) = (ushort)(byte)(bVar3 - (char)uVar7);
      *puVar8 = uVar2;
      goto LAB_18014bd1d;
    }
    if ((0x7ff < uVar2 - 0xd800) && (uVar2 < 0x110000)) {
      auStack_60[2] = 0x80;
      auStack_60[3] = 0x800;
      auStack_60[4] = 0x10000;
      if (auStack_60[bVar6] <= uVar2) {
        if (puVar9 != (uint *)0x0) {
          *puVar9 = uVar2;
        }
        FUN_18014c94c(-(ulonglong)(uVar2 != 0) & uVar4,(int32_t *)puVar8);
        goto LAB_18014bd1d;
      }
    }
  }
  else {
    bVar6 = (byte)puVar8[1];
    uVar2 = *puVar8;
    bVar3 = *(byte *)((longlong)puVar8 + 6);
    if ((((byte)(bVar6 - 2) < 3) && (bVar3 != 0)) && (bVar3 < bVar6)) goto LAB_18014bc68;
  }
LAB_18014bd12:
  FUN_18014c954((int32_t *)puVar8,param_5);
LAB_18014bd1d:
  FUN_1801252c0(local_48 ^ (ulonglong)auStack_78);
  return;
}

// ---- Function: __dcrt_lowio_ensure_console_output_initialized ----
/* Library Function - Single Match
    __dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bool __dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_1801ebcc0 == (HANDLE)0xfffffffffffffffe) {
    DAT_1801ebcc0 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  }
  return DAT_1801ebcc0 != (HANDLE)0xffffffffffffffff;
}

// ---- Function: __dcrt_write_console ----
/* Library Function - Single Match
    __dcrt_write_console
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

BOOL __dcrt_write_console(void *param_1,DWORD param_2,LPDWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = WriteConsoleW(DAT_1801ebcc0,param_1,param_2,param_3,(LPVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 6) {
      if (DAT_1801ebcc0 < (HANDLE)0xfffffffffffffffe) {
        CloseHandle(DAT_1801ebcc0);
      }
      DAT_1801ebcc0 =
           CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      BVar1 = WriteConsoleW(DAT_1801ebcc0,param_1,param_2,param_3,(LPVOID)0x0);
    }
  }
  return BVar1;
}

