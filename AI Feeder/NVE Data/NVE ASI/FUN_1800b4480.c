#include "FUN_1800b4480.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b4480(int32_t *param_1,int32_t *param_2,int32_t *param_3,byte param_4) {
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
}

 FUN_1800b4480(param_1,param_2,&local_1a8,param_5);
  }
  else {
    uStack_188 = 0;
    local_180 = 0;
    local_178 = 0xf;
    local_190 = (int32_t ****)0x0;
    local_160 = local_140;
    local_158 = 0;
    local_150 = 0x100;
    local_168 = &PTR_FUN_1801835f0;
    local_148 = &local_190;
    local_1a8 = (int32_t ***)*param_3;
    pbStack_1a0 = (byte *)param_3[1];
    FUN_1800b4480((int32_t *)local_198,&local_168,&local_1a8,param_5);
    uVar2 = local_158;
    local_168 = &PTR_FUN_1801835f0;
    if (local_158 != 0) {
local_158 = 0;
      if (local_148[3] < (int32_t ***)0x10) {
        lVar4 = (longlong)local_148[2] + (longlong)local_148;
        ppppuVar3 = (int32_t ****)local_148;
      }
      else {
        lVar4 = (longlong)*local_148 + (longlong)local_148[2];
        ppppuVar3 = (int32_t ****)*local_148;
      }
      FUN_1800b7500(local_148,lVar4 - (longlong)ppppuVar3,local_140,uVar2);
    }
}

