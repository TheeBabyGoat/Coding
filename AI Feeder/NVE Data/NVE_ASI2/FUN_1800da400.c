#include "FUN_1800da400.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800da400(longlong param_1,int32_t param_2,int param_3,float *param_4,int param_5,
                  int param_6) {
char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  longlong *plVar7;
  float fVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  float fVar14;
  longlong local_res8;
  longlong *local_78;
  int32_t uStack_70;
  longlong *local_68;
  uint uStack_60;
  int32_t uStack_5c;
  
  FUN_1800c73e0(&local_res8);
  iVar2 = *(int *)(param_1 + 0x2c8);
  if (iVar2 == -0x42c809c2) {
    if (param_3 == DAT_1801fc9b8) {
      _DAT_1801ec490 = *(int32_t *)param_4;
      _DAT_1801ec498 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9bc) {
      _DAT_1801ec4a0 = *(int32_t *)param_4;
      _DAT_1801ec4a8 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9c0) {
      _DAT_1801ec4b0 = *(int32_t *)param_4;
      _DAT_1801ec4b8 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9c4) {
      _DAT_1801ec4c0 = *(int32_t *)param_4;
      _DAT_1801ec4c8 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9c8) {
      _DAT_1801ec4d0 = *(int32_t *)param_4;
      _DAT_1801ec4d8 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9cc) {
      _DAT_1801fb108 = *(int32_t *)param_4;
      uRam00000001801fb110 = *(int32_t *)(param_4 + 2);
    }
    else if (param_3 == DAT_1801fc9d0) {
      _DAT_1801ec4e0 = *(int32_t *)param_4;
      _DAT_1801ec4e8 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9d4) {
      _DAT_1801ec4f0 = *(int32_t *)param_4;
      _DAT_1801ec4f8 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9d8) {
      _DAT_1801ec500 = *(int32_t *)param_4;
      _DAT_1801ec508 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9dc) {
      _DAT_1801ec510 = *(int32_t *)param_4;
      _DAT_1801ec518 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9e0) {
      _DAT_1801ec520 = *(int32_t *)param_4;
      _DAT_1801ec528 = param_4[2];
    }
  }
  if ((DAT_1801f3ab8 == 0) && ((iVar2 == 0x6e413d11 || (iVar2 == 0x4cc2d981)))) {
    if ((param_3 < 0) || ((short)*(int32_t *)(param_1 + 0x18) <= param_3)) {
      lVar13 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_1 + 0x10) + (longlong)param_3 * 0x48;
    }
    lVar13 = *(longlong *)(lVar13 + 0x40);
    if ((lVar13 != 0) && (iVar10 = strcmp(*(char **)(lVar13 + 0x18),"postfx_cbuffer"), iVar10 == 0))
    {
      DAT_1801f3ab8 = *(longlong *)(lVar13 + 0x28) + 0x10;
    }
  }
  fVar8 = DAT_1801d8e38;
  if (((((iVar2 == -0x7f8a4649) || (iVar2 == 0x5a69cac1)) || (iVar2 == -0x454693b7)) ||
      ((iVar2 == -0x6470dca2 || (iVar2 == 0x443ef0a1)))) && ((param_5 == 0x10 && (param_6 == 0xe))))
  {
    if (((DAT_1801d8df8 < (float)((uint)(param_4[0xc] - _DAT_1801d8e14) & _DAT_1801d9d30)) ||
        (DAT_1801d8df8 < (float)((uint)(param_4[0xd] - DAT_1801d8e38) & _DAT_1801d9d30))) ||
       (DAT_1801d8df8 < (float)((uint)(param_4[0xe] - _DAT_1801d8e34) & _DAT_1801d9d30))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    fVar14 = param_4[0x11];
    if (((DAT_1801d8df8 < (float)((uint)(fVar14 - _DAT_1801d8eb8) & _DAT_1801d9d30)) ||
        (param_4[0x13] <= _DAT_1801d8e0c)) || (DAT_1801d8e20 <= param_4[0x13])) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((DAT_1801d8df8 < (float)((uint)(fVar14 - _DAT_1801d8ed0) & _DAT_1801d9d30)) ||
       (DAT_1801d8df8 < (float)((uint)(param_4[0x13] - _DAT_1801d8e48) & _DAT_1801d9d30))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (((DAT_1801d8df8 < (float)((uint)(param_4[0x10] - DAT_1801d8e60) & _DAT_1801d9d30)) ||
        (fVar14 <= DAT_1801d8ea8)) || (DAT_1801d8ed4 <= fVar14)) {
      if (!bVar3) goto LAB_1800da8d0;
    }
    else if ((!bVar3) && ((bVar4 || (bVar6)))) goto LAB_1800da8d0;
    if (DAT_1801d8df0 < param_4[0xf] || DAT_1801d8df0 == param_4[0xf]) {
      fVar14 = (param_4[1] - _DAT_1801ec464) * (param_4[1] - _DAT_1801ec464) +
               (*param_4 - _DAT_1801ec460) * (*param_4 - _DAT_1801ec460) +
               (param_4[2] - _DAT_1801ec468) * (param_4[2] - _DAT_1801ec468);
      if (fVar14 < 0.0) {
        fVar14 = FUN_1801501f8(fVar14);
      }
      else {
        fVar14 = SQRT(fVar14);
      }
      plVar9 = DAT_1801fb118;
      if (fVar14 <= DAT_1801f3a00) {
        plVar11 = (longlong *)DAT_1801fb118[1];
        uStack_60 = 0;
        cVar1 = *(char *)((longlong)plVar11 + 0x19);
        local_68 = plVar11;
        plVar12 = DAT_1801fb118;
        while (plVar7 = plVar11, cVar1 == '\0') {
          bVar3 = fVar14 != *(float *)((longlong)plVar7 + 0x1c);
          bVar4 = *(float *)((longlong)plVar7 + 0x1c) <= fVar14;
          uStack_60 = (bVar4 && bVar3) ^ 1;
          if (!bVar4 || !bVar3) {
            plVar12 = plVar7;
          }
          plVar11 = plVar7 + 2;
          if (!bVar4 || !bVar3) {
            plVar11 = plVar7;
          }
          cVar1 = *(char *)(*plVar11 + 0x19);
          plVar11 = (longlong *)*plVar11;
          local_68 = plVar7;
        }
        if ((*(char *)((longlong)plVar12 + 0x19) != '\0') ||
           (fVar14 < *(float *)((longlong)plVar12 + 0x1c))) {
          if (DAT_1801fb120 == 0x555555555555555) {
            FUN_1800d8950();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_78 = (longlong *)&DAT_1801fb118;
          uStack_70 = 0;
          plVar11 = (longlong *)operator_new(0x30);
          *(float *)((longlong)plVar11 + 0x1c) = fVar14;
          lVar13 = *(longlong *)(param_4 + 0xe);
          plVar11[4] = *(longlong *)(param_4 + 0xc);
          plVar11[5] = lVar13;
          *plVar11 = (longlong)plVar9;
          plVar11[1] = (longlong)plVar9;
          plVar11[2] = (longlong)plVar9;
          *(int32_t *)(plVar11 + 3) = 0;
          uStack_70 = CONCAT44(uStack_5c,uStack_60);
          local_78 = local_68;
          FUN_1800d86d0((longlong *)&DAT_1801fb118,(longlong *)&local_78,plVar11);
        }
      }
    }
  }
LAB_1800da8d0:
  if ((iVar2 == 0x6e413d11) || (iVar2 == 0x4cc2d981)) {
    if (param_3 == DAT_1801fc9e4) {
      fVar14 = fVar8;
      if ((DAT_1801f3a0d == '\0') &&
         (fVar14 = DAT_1801d8e24, DAT_1801d8e24 <= DAT_1801ebd08 * *param_4)) {
        fVar14 = DAT_1801ebd08 * *param_4;
      }
      if (((DAT_1801f3a11 != '\0') || (DAT_1801f3a10 != '\0')) || (DAT_1801f3a0f != '\0')) {
        fVar14 = 0.0;
      }
      *param_4 = fVar14;
      param_4[1] = DAT_1801ebd00;
    }
    fVar14 = DAT_1801ebd04;
    if (param_3 == DAT_1801fc9e8) {
      *param_4 = DAT_1801ebd04;
      param_4[1] = fVar8 / fVar14;
    }
  }
                    
                    
  (*_DAT_1801fc9f0)(param_1,param_2,param_3,param_4);
  return;
}
}

