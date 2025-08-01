#include "FUN_1800aa740.h"
#include <stdint.h>
#include <stddef.h>

int FUN_1800aa740(uint *param_1,int32_t *param_2) {
uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  puVar9 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    puVar9 = *(uint **)param_1;
  }
  puVar1 = (uint *)((longlong)puVar9 + *(longlong *)(param_1 + 4) * 2);
  puVar6 = FUN_1800b7dd0(puVar9,puVar1);
  puVar11 = (uint *)*param_2;
  puVar2 = (uint *)((longlong)puVar11 + param_2[1] * 2);
  puVar7 = FUN_1800b7dd0(puVar11,puVar2);
  uVar12 = (longlong)puVar7 - (longlong)puVar11 >> 1;
  uVar13 = (longlong)puVar6 - (longlong)puVar9 >> 1;
  uVar8 = uVar13;
  if (uVar12 < uVar13) {
    uVar8 = uVar12;
  }
  if (uVar8 != 0) {
    lVar14 = (longlong)puVar9 - (longlong)puVar11;
    do {
      uVar3 = *(ushort *)((longlong)puVar11 + lVar14);
      if (uVar3 != (ushort)*puVar11) {
        if ((ushort)*puVar11 <= uVar3) {
          return 1;
        }
        return -1;
      }
      puVar11 = (uint *)((longlong)puVar11 + 2);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (uVar13 < uVar12) {
    iVar5 = -1;
  }
  else {
    puVar9 = puVar6;
    if (uVar12 < uVar13) {
      iVar5 = 1;
    }
    else {
      for (; (puVar11 = puVar7, puVar9 != puVar1 &&
             (((short)*puVar9 == 0x5c || ((short)*puVar9 == 0x2f))));
          puVar9 = (uint *)((longlong)puVar9 + 2)) {
      }
      for (; (puVar11 != puVar2 && (((short)*puVar11 == 0x5c || ((short)*puVar11 == 0x2f))));
          puVar11 = (uint *)((longlong)puVar11 + 2)) {
      }
      iVar5 = (uint)(puVar6 != puVar9) - (uint)(puVar7 != puVar11);
      if (iVar5 == 0) {
        iVar5 = (uint)(puVar11 == puVar2) - (uint)(puVar9 == puVar1);
        while ((puVar9 != puVar1 && (iVar5 == 0))) {
          uVar3 = (ushort)*puVar9;
          if ((uVar3 == 0x5c) || (uVar3 == 0x2f)) {
            iVar5 = 1;
          }
          else {
            iVar5 = 0;
          }
          uVar4 = (ushort)*puVar11;
          if ((uVar4 == 0x5c) || (uVar4 == 0x2f)) {
            iVar10 = 1;
          }
          else {
            iVar10 = 0;
          }
          if (iVar10 - iVar5 != 0) {
            return iVar10 - iVar5;
          }
          if ((char)iVar5 == '\0') {
            if ((uint)uVar3 - (uint)uVar4 != 0) {
              return (uint)uVar3 - (uint)uVar4;
            }
            puVar9 = (uint *)((longlong)puVar9 + 2);
            puVar11 = (uint *)((longlong)puVar11 + 2);
          }
          else {
            do {
              puVar9 = (uint *)((longlong)puVar9 + 2);
              if (puVar9 == puVar1) break;
            } while ((*(short *)puVar9 == 0x5c) || (*(short *)puVar9 == 0x2f));
            do {
              puVar11 = (uint *)((longlong)puVar11 + 2);
              if (puVar11 == puVar2) break;
            } while ((*(short *)puVar11 == 0x5c) || (*(short *)puVar11 == 0x2f));
          }
          iVar5 = (uint)(puVar11 == puVar2) - (uint)(puVar9 == puVar1);
        }
      }
    }
  }
  return iVar5;
}
}

