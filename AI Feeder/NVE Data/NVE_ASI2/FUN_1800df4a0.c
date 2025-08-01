#include "FUN_1800df4a0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800df4a0(void) {
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
  int32_t *_Buf2;
  longlong lVar11;
  code *pcVar12;
  int32_t *puVar13;
  code *pcVar14;
  int iVar15;
  ulonglong uVar16;
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
  
  _Buf2 = (int32_t *)PTR_DAT_1801ebdc0;
  local_58 = DAT_1801eb080 ^ (ulonglong)auStack_d8;
  pcVar5 = (char *)(**(code **)(DAT_1801f3ae0 + 8))();
  local_b8 = pcVar5;
  fVar20 = (float)(**(code **)(DAT_1801f3ae0 + 0x200))();
  fVar1 = *(float *)(pcVar5 + 0x54);
  fVar21 = (float)(**(code **)(DAT_1801f3ae0 + 0x2f8))();
  iVar15 = 0;
  uVar16 = DAT_1801fca28 - (longlong)DAT_1801fca20 >> 5;
  iVar17 = DAT_1801f3b1c;
  if (uVar16 != 0) {
    uVar7 = 0;
    puVar13 = DAT_1801fca20;
    if (uVar16 == 0) {
LAB_1800df990:
      FUN_1800ddc20();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    do {
      pcVar6 = (char *)(DAT_1801fca20 + uVar7 * 4);
      if (0xf < (ulonglong)puVar13[3]) {
        pcVar6 = (char *)*puVar13;
      }
      lVar11 = (longlong)_Buf2 - (longlong)pcVar6;
      do {
        cVar4 = *pcVar6;
        cVar2 = pcVar6[lVar11];
        if (cVar4 != cVar2) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      iVar17 = iVar15;
      if (cVar4 == cVar2) break;
      iVar15 = iVar15 + 1;
      puVar13 = puVar13 + 4;
      uVar7 = (ulonglong)iVar15;
      iVar17 = DAT_1801f3b1c;
    } while (uVar7 < uVar16);
  }
  DAT_1801f3b1c = iVar17;
  (**(code **)(DAT_1801f3ae0 + 0x1e8))((fVar20 - (fVar1 + fVar1)) - (fVar21 + fVar21));
  local_90 = (ulonglong *)0x1801d5840;
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
  pcVar14 = *(code **)(DAT_1801f3ae0 + 0x3f0);
  cVar4 = (*pcVar14)(ppppuVar9,_Buf2,0x20);
  FUN_1800a6800((longlong *)local_78);
  if (cVar4 != '\0') {
    iVar17 = 0;
    if (DAT_1801fca28 - (longlong)DAT_1801fca20 >> 5 != 0) {
      local_a8 = (char *)0x0;
      lVar11 = 0;
      do {
        lVar3 = DAT_1801fca28;
        puVar13 = DAT_1801fca20;
        plVar18 = (longlong *)((longlong)DAT_1801fca20 + lVar11);
        sVar8 = 0xffffffffffffffff;
        do {
          sVar8 = sVar8 + 1;
        } while (*(char *)((longlong)_Buf2 + sVar8) != '\0');
        _Size = plVar18[2];
        uVar16 = plVar18[3];
        _Buf1 = plVar18;
        if (0xf < uVar16) {
          _Buf1 = (longlong *)*plVar18;
        }
        if (_Size == sVar8) {
          if (_Size == 0) {
            bVar19 = true;
          }
          else {
            iVar15 = memcmp(_Buf1,_Buf2,_Size);
            bVar19 = iVar15 == 0;
            uVar16 = plVar18[3];
          }
        }
        else {
          bVar19 = false;
        }
        local_98 = 0;
        if ((char *)(lVar3 - (longlong)puVar13 >> 5) <= local_a8) {
          FUN_1800ddc20();
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if (0xf < uVar16) {
          plVar18 = (longlong *)*plVar18;
        }
        pcVar14 = (code *)&local_98;
        cVar4 = (**(code **)(DAT_1801f3ae0 + 0x5f0))(plVar18,bVar19,0);
        if (cVar4 != '\0') {
          DAT_1801f3b1c = iVar17;
          if ((ulonglong)(DAT_1801fca28 - (longlong)DAT_1801fca20 >> 5) <=
              (ulonglong)(longlong)iVar17) goto LAB_1800df990;
          _Buf2 = DAT_1801fca20 + (longlong)iVar17 * 4;
          if (0xf < *(ulonglong *)((longlong)DAT_1801fca20 + lVar11 + 0x18)) {
            _Buf2 = *(int32_t **)((longlong)DAT_1801fca20 + lVar11);
          }
        }
        if (bVar19 != false) {
          (**(code **)(DAT_1801f3ae0 + 0x8a0))();
        }
        iVar17 = iVar17 + 1;
        local_a8 = local_a8 + 1;
        lVar11 = lVar11 + 0x20;
      } while ((ulonglong)(longlong)iVar17 <
               (ulonglong)(DAT_1801fca28 - (longlong)DAT_1801fca20 >> 5));
    }
    (**(code **)(DAT_1801f3ae0 + 0x3f8))();
    pcVar5 = local_b8;
  }
  (**(code **)(DAT_1801f3ae0 + 0x1f0))();
  (**(code **)(DAT_1801f3ae0 + 0x2a0))(0,fVar1);
  local_80 = (ulonglong *)0x1801d5840;
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
  if ((cVar4 != '\0') && (DAT_1801f3b1c = DAT_1801f3b1c + -1, DAT_1801f3b1c < 0)) {
    DAT_1801f3b1c = (int)(DAT_1801fca28 - (longlong)DAT_1801fca20 >> 5) + -1;
  }
  (**(code **)(DAT_1801f3ae0 + 0x2a0))(0,fVar1);
  local_80 = (ulonglong *)0x1801d5840;
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
  pcVar12 = *(code **)(DAT_1801f3ae0 + 0x3a0);
  cVar4 = (*pcVar12)(ppppuVar9,1);
  FUN_1800a6800((longlong *)local_78);
  if ((cVar4 != '\0') &&
     (DAT_1801f3b1c = DAT_1801f3b1c + 1,
     (ulonglong)(DAT_1801fca28 - (longlong)DAT_1801fca20 >> 5) <= (ulonglong)(longlong)DAT_1801f3b1c
     )) {
    DAT_1801f3b1c = 0;
  }
  pcVar10 = *(code **)(DAT_1801f3ae0 + 0x2a0);
  (*pcVar10)(0,*(int32_t *)(pcVar5 + 0x54));
  FUN_1800c70b0("Timecycle Modifier",pcVar10,pcVar12,pcVar14);
  FUN_1801252c0(local_58 ^ (ulonglong)auStack_d8);
  return;
}
}

 FUN_1800df4a0();
    if ((ulonglong)((longlong)DAT_1801fca28 - (longlong)DAT_1801fca20 >> 5) <=
        (ulonglong)(longlong)DAT_1801f3b1c) {
FUN_1800ddc20();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
}

