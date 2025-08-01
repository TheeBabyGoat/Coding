#include "FUN_1800dcd20.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800dcd20(int32_t param_1,void *param_2) {
float fVar1;
  char cVar2;
  size_t _Size;
  longlong lVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  ulonglong uVar7;
  size_t sVar8;
  longlong *_Buf1;
  int32_t ****ppppuVar9;
  code *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  code *pcVar13;
  longlong lVar14;
  code *pcVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  int32_t auStack_d8 [32];
  char *local_b8;
  int32_t uStack_b0;
  char *local_a8;
  int32_t uStack_a0;
  ulonglong local_98;
  ulonglong *local_90;
  ulonglong local_88;
  ulonglong *local_80;
  int32_t ***local_78 [3];
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1801eb080 ^ (ulonglong)auStack_d8;
  pcVar5 = (char *)(**(code **)(DAT_1801f3ae0 + 8))();
  local_b8 = pcVar5;
  fVar20 = (float)(**(code **)(DAT_1801f3ae0 + 0x200))();
  fVar1 = *(float *)(pcVar5 + 0x54);
  fVar21 = (float)(**(code **)(DAT_1801f3ae0 + 0x2f8))();
  iVar16 = 0;
  uVar11 = DAT_1801fb3d8 - DAT_1801fb3d0 >> 5;
  iVar17 = DAT_1801f39ec;
  if (uVar11 != 0) {
    uVar7 = 0;
    lVar14 = 0;
    do {
      if ((ulonglong)(DAT_1801fb3d8 - DAT_1801fb3d0 >> 5) <= uVar7) goto LAB_1800dd214;
      pcVar6 = (char *)(uVar7 * 0x20 + DAT_1801fb3d0);
      if (0xf < *(ulonglong *)(lVar14 + 0x18 + DAT_1801fb3d0)) {
        pcVar6 = *(char **)(lVar14 + DAT_1801fb3d0);
      }
      lVar12 = (longlong)param_2 - (longlong)pcVar6;
      do {
        cVar4 = *pcVar6;
        cVar2 = pcVar6[lVar12];
        if (cVar4 != cVar2) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      iVar17 = iVar16;
      if (cVar4 == cVar2) break;
      iVar16 = iVar16 + 1;
      lVar14 = lVar14 + 0x20;
      uVar7 = (ulonglong)iVar16;
      iVar17 = DAT_1801f39ec;
    } while (uVar7 < uVar11);
  }
  DAT_1801f39ec = iVar17;
  (**(code **)(DAT_1801f3ae0 + 0x1e8))((fVar20 - (fVar1 + fVar1)) - (fVar21 + fVar21));
  local_90 = (ulonglong *)0x1801d52c0;
  local_98 = 0xb000000000000000;
  local_88 = 1;
  local_80 = &local_98;
  local_a8 = "##arrow_combo_{}";
  uStack_a0 = 0x10;
  FUN_1800b7670((longlong *)local_78,(longlong *)&local_a8,&local_88);
  ppppuVar9 = local_78;
  if (0xf < local_60) {
    ppppuVar9 = (int32_t ****)local_78[0];
  }
  pcVar15 = *(code **)(DAT_1801f3ae0 + 0x3f0);
  cVar4 = (*pcVar15)(ppppuVar9,param_2,0x20);
  FUN_1800a6800((longlong *)local_78);
  if (cVar4 != '\0') {
    iVar17 = 0;
    if (DAT_1801fb3d8 - DAT_1801fb3d0 >> 5 != 0) {
      local_a8 = (char *)0x0;
      lVar14 = 0;
      do {
        lVar3 = DAT_1801fb3d8;
        lVar12 = DAT_1801fb3d0;
        plVar18 = (longlong *)(DAT_1801fb3d0 + lVar14);
        sVar8 = 0xffffffffffffffff;
        do {
          sVar8 = sVar8 + 1;
        } while (*(char *)((longlong)param_2 + sVar8) != '\0');
        _Size = *(size_t *)(DAT_1801fb3d0 + 0x10 + lVar14);
        uVar11 = *(ulonglong *)(DAT_1801fb3d0 + 0x18 + lVar14);
        _Buf1 = plVar18;
        if (0xf < uVar11) {
          _Buf1 = (longlong *)*plVar18;
        }
        if (_Size == sVar8) {
          if (_Size == 0) {
            bVar19 = true;
          }
          else {
            iVar16 = memcmp(_Buf1,param_2,_Size);
            bVar19 = iVar16 == 0;
            uVar11 = *(ulonglong *)(lVar12 + 0x18 + lVar14);
          }
        }
        else {
          bVar19 = false;
        }
        local_98 = 0;
        if ((char *)(lVar3 - lVar12 >> 5) <= local_a8) {
          FUN_1800ddc20();
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        if (0xf < uVar11) {
          plVar18 = (longlong *)*plVar18;
        }
        pcVar15 = (code *)&local_98;
        cVar4 = (**(code **)(DAT_1801f3ae0 + 0x5f0))(plVar18,bVar19,0);
        if (cVar4 != '\0') {
          DAT_1801f39ec = iVar17;
          if ((ulonglong)(DAT_1801fb3d8 - DAT_1801fb3d0 >> 5) <= (ulonglong)(longlong)iVar17) {
LAB_1800dd214:
            FUN_1800ddc20();
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          param_2 = (void *)((longlong)iVar17 * 0x20 + DAT_1801fb3d0);
          if (0xf < *(ulonglong *)(DAT_1801fb3d0 + 0x18 + lVar14)) {
            param_2 = *(void **)(DAT_1801fb3d0 + lVar14);
          }
        }
        if (bVar19 != false) {
          (**(code **)(DAT_1801f3ae0 + 0x8a0))();
        }
        iVar17 = iVar17 + 1;
        local_a8 = local_a8 + 1;
        lVar14 = lVar14 + 0x20;
        pcVar5 = local_b8;
      } while ((ulonglong)(longlong)iVar17 < (ulonglong)(DAT_1801fb3d8 - DAT_1801fb3d0 >> 5));
    }
    (**(code **)(DAT_1801f3ae0 + 0x3f8))();
  }
  (**(code **)(DAT_1801f3ae0 + 0x1f0))();
  (**(code **)(DAT_1801f3ae0 + 0x2a0))(0,fVar1);
  local_80 = (ulonglong *)0x1801d52c0;
  local_88 = 0xb000000000000000;
  local_98 = 1;
  local_90 = &local_88;
  local_b8 = "##arrow_combo_l_{}";
  uStack_b0 = 0x12;
  FUN_1800b7670((longlong *)local_78,(longlong *)&local_b8,&local_98);
  ppppuVar9 = local_78;
  if (0xf < local_60) {
    ppppuVar9 = (int32_t ****)local_78[0];
  }
  cVar4 = (**(code **)(DAT_1801f3ae0 + 0x3a0))(ppppuVar9,0);
  FUN_1800a6800((longlong *)local_78);
  if ((cVar4 != '\0') && (DAT_1801f39ec = DAT_1801f39ec + -1, DAT_1801f39ec < 0)) {
    DAT_1801f39ec = (int)(DAT_1801fb3d8 - DAT_1801fb3d0 >> 5) + -1;
  }
  (**(code **)(DAT_1801f3ae0 + 0x2a0))(0,fVar1);
  local_80 = (ulonglong *)0x1801d52c0;
  local_88 = 0xb000000000000000;
  local_98 = 1;
  local_90 = &local_88;
  local_b8 = "##arrow_combo_r_{}";
  uStack_b0 = 0x12;
  FUN_1800b7670((longlong *)local_78,(longlong *)&local_b8,&local_98);
  ppppuVar9 = local_78;
  if (0xf < local_60) {
    ppppuVar9 = (int32_t ****)local_78[0];
  }
  pcVar13 = *(code **)(DAT_1801f3ae0 + 0x3a0);
  cVar4 = (*pcVar13)(ppppuVar9,1);
  FUN_1800a6800((longlong *)local_78);
  if ((cVar4 != '\0') &&
     (DAT_1801f39ec = DAT_1801f39ec + 1,
     (ulonglong)(DAT_1801fb3d8 - DAT_1801fb3d0 >> 5) <= (ulonglong)(longlong)DAT_1801f39ec)) {
    DAT_1801f39ec = 0;
  }
  pcVar10 = *(code **)(DAT_1801f3ae0 + 0x2a0);
  (*pcVar10)(0,*(int32_t *)(pcVar5 + 0x54));
  FUN_1800c70b0("Aurora Preset",pcVar10,pcVar13,pcVar15);
  FUN_1801252c0(local_58 ^ (ulonglong)auStack_d8);
  return;
}
}

 FUN_1800dcd20(pcVar1,pcVar4);
  if ((ulonglong)(longlong)DAT_1801f39ec < (ulonglong)(DAT_1801fb3d8 - DAT_1801fb3d0 >> 5)) {
puVar5 = (int32_t *)(DAT_1801fb3d0 + (longlong)DAT_1801f39ec * 0x20);
    if (0xf < (ulonglong)puVar5[3]) {
      puVar5 = (int32_t *)*puVar5;
    }
    uVar8 = 0xffffffffffffffff;
    do {
      uVar8 = uVar8 + 1;
    } while (*(char *)((longlong)puVar5 + uVar8) != '\0');
    FUN_1800de6e0((longlong *)s_Color_Preset_1_1801ec6a0,puVar5,uVar8);
    if (DAT_1801ec1a0 != DAT_1801f39ec) {
      DAT_1801ec1a0 = FUN_1800ddb30(DAT_1801f39ec);
    }
                    
                    
    (**(code **)(DAT_1801f3ae0 + 0x2c8))(*(code **)(DAT_1801f3ae0 + 0x2c8));
    return;
  }
}

