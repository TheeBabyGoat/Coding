#include "FUN_1800dd7f0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800dd7f0(int32_t param_1,uint param_2,uint *param_3) {
uint uVar1;
  uint uVar2;
  int32_t uVar3;
  int32_t *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int32_t *puVar9;
  char cVar10;
  longlong *plVar11;
  int32_t (*pauVar12) [32];
  int32_t ****ppppuVar13;
  ulonglong uVar14;
  int32_t auStack_e8 [32];
  uint local_c8 [2];
  uint local_c0 [2];
  uint local_b8 [4];
  char *local_a8;
  int32_t uStack_a0;
  ulonglong local_98;
  int32_t *local_90;
  int32_t local_88 [2];
  int32_t local_78;
  int32_t local_70;
  int32_t ***local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStack_e8;
  local_c0[0] = param_2;
  plVar11 = FUN_1800ce7e0((float *)&DAT_1801fb390,&local_98,(byte *)local_c0);
  uVar3 = *(int32_t *)(*plVar11 + 0x18);
  local_78 = 0xb000000000000000;
  local_98 = 1;
  local_90 = &local_78;
  local_a8 = "Configuration [{}]##clouds_config";
  uStack_a0 = 0x21;
  local_70 = param_1;
  FUN_1800b7670((longlong *)local_68,(longlong *)&local_a8,&local_98);
  ppppuVar13 = local_68;
  if (0xf < local_50) {
    ppppuVar13 = (int32_t ****)local_68[0];
  }
  cVar10 = (**(code **)(DAT_1801f3ae0 + 0x3f0))(ppppuVar13,uVar3,0);
  FUN_1800a6800((longlong *)local_68);
  puVar9 = DAT_1801f7308;
  if (cVar10 != '\0') {
    uVar8 = local_c0[0];
    for (puVar4 = (int32_t *)*DAT_1801f7308; local_c0[0] = uVar8, puVar4 != puVar9;
        puVar4 = (int32_t *)*puVar4) {
      uVar2 = *(uint *)(puVar4 + 2);
      lVar5 = puVar4[3];
      local_c8[0] = uVar2;
      if (uVar2 == 0x13371337) {
LAB_1800dd9b9:
        plVar11 = FUN_1800ce7e0((float *)&DAT_1801fb390,&local_a8,(byte *)local_c0);
        lVar6 = *(longlong *)(*plVar11 + 0x18);
        local_78 = 0;
        cVar10 = (**(code **)(DAT_1801f3ae0 + 0x5f0))(lVar5,lVar5 == lVar6,0,&local_78);
        if (cVar10 != '\0') {
          *param_3 = uVar2;
          local_c8[0] = local_c0[0];
          local_b8[0] = uVar2;
          plVar11 = FUN_1800ce7e0((float *)&DAT_1801f7300,local_88,(byte *)local_b8);
          uVar3 = *(int32_t *)(*plVar11 + 0x18);
          plVar11 = FUN_1800ce7e0((float *)&DAT_1801fb390,local_68,(byte *)local_c8);
          *(int32_t *)(*plVar11 + 0x18) = uVar3;
          if (local_c8[0] < 0x97aa0a7a) {
            if (local_c8[0] == 0x97aa0a79) {
              DAT_1801f39d8 = local_b8[0];
            }
            else if (local_c8[0] == 0x30fdaf5c) {
              DAT_1801f39dc = local_b8[0];
            }
            else if (local_c8[0] == 0x54a69840) {
              DAT_1801f39cc = local_b8[0];
            }
            else if (local_c8[0] == 0x6db1a50d) {
              DAT_1801f39e0 = local_b8[0];
            }
          }
          else if (local_c8[0] == 0xae737644) {
            DAT_1801f39d4 = local_b8[0];
          }
          else if (local_c8[0] == 0xb677829f) {
            DAT_1801f39c8 = local_b8[0];
          }
          else if (local_c8[0] == 0xbb898d2d) {
            DAT_1801f39d0 = local_b8[0];
          }
          if (DAT_1801f3a34 == local_c8[0]) {
            FUN_180112a40(local_b8[0]);
          }
        }
        if (lVar5 == lVar6) {
          (**(code **)(DAT_1801f3ae0 + 0x8a0))();
        }
      }
      else {
        uVar14 = ((((ulonglong)(uVar2 >> 8 & 0xff) ^
                   ((ulonglong)(uVar2 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3
                  ^ (ulonglong)(uVar2 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar2 >> 0x18))
                 * 0x100000001b3 & DAT_1801ec430;
        lVar6 = *(longlong *)(DAT_1801ec418 + 8 + uVar14 * 0x10);
        if (lVar6 != DAT_1801ec408) {
          lVar7 = *(longlong *)(DAT_1801ec418 + uVar14 * 0x10);
          uVar1 = *(uint *)(lVar6 + 0x10);
          while (uVar2 != uVar1) {
            if (lVar6 == lVar7) goto LAB_1800ddae1;
            lVar6 = *(longlong *)(lVar6 + 8);
            uVar1 = *(uint *)(lVar6 + 0x10);
          }
          plVar11 = FUN_1800ddc40(lVar7,&local_98,(byte *)local_c8);
          lVar6 = *plVar11;
          pauVar12 = thunk_FUN_180123e90(*(int32_t (**) [32])(lVar6 + 0x98),
                                         *(int32_t (**) [32])(lVar6 + 0xa0),uVar8);
          if (pauVar12 != *(int32_t (**) [32])(lVar6 + 0xa0)) goto LAB_1800dd9b9;
        }
      }
LAB_1800ddae1:
      uVar8 = local_c0[0];
    }
    (**(code **)(DAT_1801f3ae0 + 0x3f8))();
  }
  FUN_1801252c0(local_48 ^ (ulonglong)auStack_e8);
  return;
}
}

