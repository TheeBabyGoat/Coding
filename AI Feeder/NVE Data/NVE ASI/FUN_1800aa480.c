#include "FUN_1800aa480.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800aa480();
      pcVar1 = (code *)swi(3);
      puVar3 = (int32_t *)(*pcVar1)();
      return puVar3;
    }
    puVar2 = (int32_t *)FUN_1800ba8c0(param_1,uVar5);
    *param_1 = puVar2;
    param_1[1] = puVar2;
    param_1[2] = puVar2 + uVar5 * 4;
    for (; puVar4 != puVar3; puVar4 = puVar4 + 4) {
FUN_1800ba630(puVar2,puVar4);
      puVar2 = puVar2 + 4;
    }
}

 FUN_1800aa480();
    pcVar7 = (code *)swi(3);
    puVar12 = (int32_t *)(*pcVar7)();
    return puVar12;
  }
  uVar1 = lVar9 + 1;
  uVar13 = param_1[2] - lVar3 >> 5;
  if (uVar13 <= 0x7ffffffffffffff - (uVar13 >> 1)) {
uVar13 = (uVar13 >> 1) + uVar13;
    uVar16 = uVar1;
    if (uVar1 <= uVar13) {
      uVar16 = uVar13;
    }
    if (uVar16 < 0x800000000000000) {
      uVar13 = uVar16 * 0x20;
      if (uVar13 == 0) {
        puVar12 = (int32_t *)0x0;
      }
      else if (uVar13 < 0x1000) {
        puVar12 = (int32_t *)operator_new(uVar13);
      }
      else {
        if (uVar13 + 0x27 <= uVar13) goto LAB_1800aa3d7;
        pvVar10 = operator_new(uVar13 + 0x27);
        if (pvVar10 == (void *)0x0) {
          FUN_18012b7b4();
          pcVar7 = (code *)swi(3);
          puVar12 = (int32_t *)(*pcVar7)();
          return puVar12;
        }
        puVar12 = (int32_t *)((longlong)pvVar10 + 0x27U & 0xffffffffffffffe0);
        puVar12[-1] = pvVar10;
      }
      puVar2 = (int32_t *)(((longlong)param_2 - lVar3 & 0xffffffffffffffe0U) + (longlong)puVar12)
      ;
      FUN_1800b9f10(puVar2,param_3);
      puVar4 = (int32_t *)param_1[1];
      puVar11 = (int32_t *)*param_1;
      puVar17 = puVar12;
      if (param_2 == puVar4) {
        for (; puVar11 != puVar4; puVar11 = puVar11 + 4) {
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17[2] = 0;
          puVar17[3] = 0;
          uVar8 = puVar11[1];
          *puVar17 = *puVar11;
          puVar17[1] = uVar8;
          uVar8 = puVar11[3];
          puVar17[2] = puVar11[2];
          puVar17[3] = uVar8;
          *(int32_t *)puVar11 = 0;
          puVar11[2] = 0;
          puVar11[3] = 7;
          puVar17 = puVar17 + 4;
        }
      }
      else {
        for (; puVar11 != param_2; puVar11 = puVar11 + 4) {
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17[2] = 0;
          puVar17[3] = 0;
          uVar8 = puVar11[1];
          *puVar17 = *puVar11;
          puVar17[1] = uVar8;
          uVar8 = puVar11[3];
          puVar17[2] = puVar11[2];
          puVar17[3] = uVar8;
          *(int32_t *)puVar11 = 0;
          puVar11[2] = 0;
          puVar11[3] = 7;
          puVar17 = puVar17 + 4;
        }
        puVar4 = (int32_t *)param_1[1];
        puVar11 = puVar2;
        if (param_2 != puVar4) {
          do {
            puVar17 = puVar11 + 4;
            *puVar17 = 0;
            puVar11[5] = 0;
            puVar11[6] = 0;
            puVar11[7] = 0;
            uVar8 = param_2[1];
            *puVar17 = *param_2;
            puVar11[5] = uVar8;
            uVar8 = param_2[3];
            puVar11[6] = param_2[2];
            puVar11[7] = uVar8;
            *(int32_t *)param_2 = 0;
            param_2[2] = 0;
            param_2[3] = 7;
            param_2 = param_2 + 4;
            puVar11 = puVar17;
          } while (param_2 != puVar4);
        }
      }
      plVar15 = (longlong *)*param_1;
      if (plVar15 != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[1];
        for (; plVar15 != plVar5; plVar15 = plVar15 + 4) {
          FUN_1800ba040(plVar15);
        }
        pvVar6 = (LPVOID)*param_1;
        pvVar14 = pvVar6;
        if ((0xfff < (param_1[2] - (longlong)pvVar6 & 0xffffffffffffffe0U)) &&
           (pvVar14 = *(LPVOID *)((longlong)pvVar6 + -8),
           0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar14)))) {
          FUN_18012b7b4();
          goto LAB_1800aa3d7;
        }
        thunk_FUN_18012d5e8(pvVar14);
      }
      *param_1 = (longlong)puVar12;
      param_1[1] = (longlong)(puVar12 + uVar1 * 4);
      param_1[2] = (longlong)(puVar12 + uVar16 * 4);
      return puVar2;
    }
  }
}

void FUN_1800aa480(void) {
code *pcVar1;
  
  FUN_180123338(0x1801879f8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
}

 FUN_1800aa480();
    pcVar3 = (code *)swi(3);
    puVar8 = (int32_t *)(*pcVar3)();
    return puVar8;
  }
  uVar9 = param_1[2] - lVar2 >> 5;
  uVar1 = lVar5 + 1;
  uVar12 = 0x7ffffffffffffff;
  if ((uVar9 <= 0x7ffffffffffffff - (uVar9 >> 1)) && (uVar12 = (uVar9 >> 1) + uVar9, uVar12 < uVar1)) {
uVar12 = uVar1;
  }
}

 FUN_1800aa480();
    pcVar3 = (code *)swi(3);
    puVar6 = (int32_t *)(*pcVar3)();
    return puVar6;
  }
  uVar7 = (longlong)DAT_1801ec700 - (longlong)DAT_1801ec6f0 >> 3;
  uVar1 = lVar4 + 1;
  if (0x1fffffffffffffff - (uVar7 >> 1) < uVar7) {
LAB_1800c69c0:
    FUN_1800ba8a0();
    pcVar3 = (code *)swi(3);
    puVar6 = (int32_t *)(*pcVar3)();
    return puVar6;
  }
}

 FUN_1800aa480();
    pcVar3 = (code *)swi(3);
    puVar6 = (int32_t *)(*pcVar3)();
    return puVar6;
  }
  uVar7 = (longlong)DAT_1801ec6e8 - (longlong)DAT_1801ec6d8 >> 3;
  uVar1 = lVar4 + 1;
  if (0x1fffffffffffffff - (uVar7 >> 1) < uVar7) {
LAB_1800c6b70:
    FUN_1800ba8a0();
    pcVar3 = (code *)swi(3);
    puVar6 = (int32_t *)(*pcVar3)();
    return puVar6;
  }
}

 FUN_1800aa480();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = 0x666666666666666;
    if ((uVar2 <= 0x666666666666666 - (uVar2 >> 1)) &&
       (uVar3 = uVar2 + (uVar2 >> 1), uVar3 < param_3)) {
uVar3 = param_3;
    }
}

 FUN_1800aa480();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar10 = (longlong)uVar6 / 0x28 + param_4;
    uVar13 = (param_1[2] - (longlong)puVar9) / 0x28;
    if (0x666666666666666 - (uVar13 >> 1) < uVar13) {
LAB_1800cac68:
      FUN_1800ba8a0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
}

 FUN_1800aa480();
    pcVar6 = (code *)swi(3);
    puVar9 = (int32_t *)(*pcVar6)();
    return puVar9;
  }
  uVar10 = param_1[2] - lVar3 >> 3;
  uVar1 = lVar7 + 1;
  if (0x1fffffffffffffff - (uVar10 >> 1) < uVar10) {
LAB_1800cae13:
    FUN_1800ba8a0();
    pcVar6 = (code *)swi(3);
    puVar9 = (int32_t *)(*pcVar6)();
    return puVar9;
  }
}

 FUN_1800aa480();
      goto LAB_1800cb0e8;
    }
    FUN_1800ca8d0(puVar6 + 0xc,uVar7);
    puVar1 = (int32_t *)puVar6[0xc];
    uVar7 = param_3[0xb] - (longlong)param_3[10];
    FUN_180150fd0(puVar1,(int32_t *)param_3[10],uVar7);
    puVar6[0xd] = puVar1 + ((longlong)uVar7 / 0x28) * 5;
  }
  *(char *)(puVar6 + 0xf) = (char)param_3[0xd];
  *(int32_t *)((longlong)puVar6 + 0x79) = *(int32_t *)((longlong)param_3 + 0x69);
  puVar6[0x10] = param_3[0xe];
  puVar6[0x11] = param_3[0xf];
  fVar10 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar10 && fVar10 != *param_1) {
FUN_1800ca7d0(param_1);
    puVar1 = *(int32_t **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10);
    puVar9 = *(int32_t **)(param_1 + 2);
    if (puVar1 != puVar9) {
      lVar2 = puVar1[2];
      puVar9 = puVar1;
      while (puVar6[2] != lVar2) {
        if (puVar9 == *(int32_t **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10)
           ) goto LAB_1800cb086;
        puVar9 = (int32_t *)puVar9[1];
        lVar2 = puVar9[2];
      }
      puVar9 = (int32_t *)*puVar9;
    }
  }
}

 FUN_1800aa480();
    pcVar8 = (code *)swi(3);
    plVar10 = (longlong *)(*pcVar8)();
    return plVar10;
  }
  uVar1 = lVar5 + 1;
  uVar14 = (param_1[2] - lVar4) / 0x18;
  if (0xaaaaaaaaaaaaaaa - (uVar14 >> 1) < uVar14) {
LAB_1800cf03a:
    FUN_1800ba8a0();
    pcVar8 = (code *)swi(3);
    plVar10 = (longlong *)(*pcVar8)();
    return plVar10;
  }
}

 FUN_1800aa480();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_2 == 0) {
pvVar3 = (void *)0x0;
  }
}

 FUN_1800aa480();
    pcVar6 = (code *)swi(3);
    pcVar13 = (char *)(*pcVar6)();
    return pcVar13;
  }
  uVar1 = lVar8 + 1;
  uVar11 = param_1[2] - lVar3 >> 4;
  if (uVar11 <= 0xfffffffffffffff - (uVar11 >> 1)) {
uVar11 = (uVar11 >> 1) + uVar11;
    uVar14 = uVar1;
    if (uVar1 <= uVar11) {
      uVar14 = uVar11;
    }
    if (uVar14 < 0x1000000000000000) {
      _Var12 = uVar14 * 0x10;
      if (_Var12 == 0) {
        pcVar13 = (char *)0x0;
      }
      else if (_Var12 < 0x1000) {
        pcVar13 = (char *)operator_new(_Var12);
      }
      else {
        if (_Var12 + 0x27 <= _Var12) goto LAB_1800f2773;
        pvVar9 = operator_new(_Var12 + 0x27);
        if (pvVar9 == (void *)0x0) {
          FUN_18012b7b4();
          pcVar6 = (code *)swi(3);
          pcVar13 = (char *)(*pcVar6)();
          return pcVar13;
        }
        pcVar13 = (char *)((longlong)pvVar9 + 0x27U & 0xffffffffffffffe0);
        *(void **)(pcVar13 + -8) = pvVar9;
      }
      pcVar2 = pcVar13 + ((longlong)param_2 - lVar3 & 0xfffffffffffffff0);
      *pcVar2 = '\0';
      pcVar2[8] = '\0';
      pcVar2[9] = '\0';
      pcVar2[10] = '\0';
      pcVar2[0xb] = '\0';
      pcVar2[0xc] = '\0';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
      uVar4 = *param_3;
      FUN_1800f9a90((longlong *)(pcVar2 + 8),*pcVar2);
      *pcVar2 = '\x06';
      *(int32_t *)(pcVar2 + 8) = uVar4;
      pcVar5 = (char *)param_1[1];
      pcVar10 = (char *)*param_1;
      pcVar7 = pcVar13;
      if (param_2 == pcVar5) {
        for (; pcVar10 != pcVar5; pcVar10 = pcVar10 + 0x10) {
          *pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
      }
      else {
        for (; pcVar10 != param_2; pcVar10 = pcVar10 + 0x10) {
          *pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
        pcVar5 = (char *)param_1[1];
        pcVar10 = pcVar2;
        if (param_2 != pcVar5) {
          do {
            pcVar10[0x10] = *param_2;
            *(int32_t *)(pcVar10 + 0x18) = *(int32_t *)(param_2 + 8);
            *param_2 = '\0';
            param_2[8] = '\0';
            param_2[9] = '\0';
            param_2[10] = '\0';
            param_2[0xb] = '\0';
            param_2[0xc] = '\0';
            param_2[0xd] = '\0';
            param_2[0xe] = '\0';
            param_2[0xf] = '\0';
            param_2 = param_2 + 0x10;
            pcVar10 = pcVar10 + 0x10;
          } while (param_2 != pcVar5);
        }
      }
      FUN_1800f9750(param_1,(longlong)pcVar13,uVar1,uVar14);
      return pcVar2;
    }
  }
}

 FUN_1800aa480();
    pcVar5 = (code *)swi(3);
    pcVar14 = (char *)(*pcVar5)();
    return pcVar14;
  }
  uVar1 = lVar7 + 1;
  uVar11 = param_1[2] - lVar3 >> 4;
  if (uVar11 <= 0xfffffffffffffff - (uVar11 >> 1)) {
uVar11 = (uVar11 >> 1) + uVar11;
    uVar15 = uVar1;
    if (uVar1 <= uVar11) {
      uVar15 = uVar11;
    }
    if (uVar15 < 0x1000000000000000) {
      _Var12 = uVar15 * 0x10;
      if (_Var12 == 0) {
        pcVar14 = (char *)0x0;
      }
      else if (_Var12 < 0x1000) {
        pcVar14 = (char *)operator_new(_Var12);
      }
      else {
        if (_Var12 + 0x27 <= _Var12) goto LAB_1800f2ada;
        pvVar8 = operator_new(_Var12 + 0x27);
        if (pvVar8 == (void *)0x0) {
          FUN_18012b7b4();
          pcVar5 = (code *)swi(3);
          pcVar14 = (char *)(*pcVar5)();
          return pcVar14;
        }
        pcVar14 = (char *)((longlong)pvVar8 + 0x27U & 0xffffffffffffffe0);
        *(void **)(pcVar14 + -8) = pvVar8;
      }
      pcVar13 = pcVar14 + ((longlong)param_2 - lVar3 & 0xfffffffffffffff0);
      *pcVar13 = '\0';
      plVar2 = (longlong *)(pcVar13 + 8);
      *plVar2 = 0;
      FUN_1800f9a90(plVar2,*pcVar13);
      *pcVar13 = '\x03';
      puVar9 = (int32_t *)operator_new(0x20);
      FUN_1800ba630(puVar9,param_3);
      *plVar2 = (longlong)puVar9;
      pcVar4 = (char *)param_1[1];
      pcVar10 = (char *)*param_1;
      pcVar6 = pcVar14;
      if (param_2 == pcVar4) {
        for (; pcVar10 != pcVar4; pcVar10 = pcVar10 + 0x10) {
          *pcVar6 = *pcVar10;
          *(int32_t *)(pcVar6 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar6 = pcVar6 + 0x10;
        }
      }
      else {
        for (; pcVar10 != param_2; pcVar10 = pcVar10 + 0x10) {
          *pcVar6 = *pcVar10;
          *(int32_t *)(pcVar6 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar6 = pcVar6 + 0x10;
        }
        pcVar4 = (char *)param_1[1];
        pcVar10 = pcVar13;
        if (param_2 != pcVar4) {
          do {
            pcVar10[0x10] = *param_2;
            *(int32_t *)(pcVar10 + 0x18) = *(int32_t *)(param_2 + 8);
            *param_2 = '\0';
            param_2[8] = '\0';
            param_2[9] = '\0';
            param_2[10] = '\0';
            param_2[0xb] = '\0';
            param_2[0xc] = '\0';
            param_2[0xd] = '\0';
            param_2[0xe] = '\0';
            param_2[0xf] = '\0';
            param_2 = param_2 + 0x10;
            pcVar10 = pcVar10 + 0x10;
          } while (param_2 != pcVar4);
        }
      }
      FUN_1800f9750(param_1,(longlong)pcVar14,uVar1,uVar15);
      return pcVar13;
    }
  }
}

 FUN_1800aa480();
    pcVar6 = (code *)swi(3);
    pcVar13 = (char *)(*pcVar6)();
    return pcVar13;
  }
  uVar1 = lVar8 + 1;
  uVar11 = param_1[2] - lVar3 >> 4;
  if (uVar11 <= 0xfffffffffffffff - (uVar11 >> 1)) {
uVar11 = (uVar11 >> 1) + uVar11;
    uVar14 = uVar1;
    if (uVar1 <= uVar11) {
      uVar14 = uVar11;
    }
    if (uVar14 < 0x1000000000000000) {
      _Var12 = uVar14 * 0x10;
      if (_Var12 == 0) {
        pcVar13 = (char *)0x0;
      }
      else if (_Var12 < 0x1000) {
        pcVar13 = (char *)operator_new(_Var12);
      }
      else {
        if (_Var12 + 0x27 <= _Var12) goto LAB_1800f2e73;
        pvVar9 = operator_new(_Var12 + 0x27);
        if (pvVar9 == (void *)0x0) {
          FUN_18012b7b4();
          pcVar6 = (code *)swi(3);
          pcVar13 = (char *)(*pcVar6)();
          return pcVar13;
        }
        pcVar13 = (char *)((longlong)pvVar9 + 0x27U & 0xffffffffffffffe0);
        *(void **)(pcVar13 + -8) = pvVar9;
      }
      pcVar2 = pcVar13 + ((longlong)param_2 - lVar3 & 0xfffffffffffffff0);
      *pcVar2 = '\0';
      pcVar2[8] = '\0';
      pcVar2[9] = '\0';
      pcVar2[10] = '\0';
      pcVar2[0xb] = '\0';
      pcVar2[0xc] = '\0';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
      uVar4 = *param_3;
      FUN_1800f9a90((longlong *)(pcVar2 + 8),*pcVar2);
      *pcVar2 = '\x05';
      *(int32_t *)(pcVar2 + 8) = uVar4;
      pcVar5 = (char *)param_1[1];
      pcVar10 = (char *)*param_1;
      pcVar7 = pcVar13;
      if (param_2 == pcVar5) {
        for (; pcVar10 != pcVar5; pcVar10 = pcVar10 + 0x10) {
          *pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
      }
      else {
        for (; pcVar10 != param_2; pcVar10 = pcVar10 + 0x10) {
          *pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
        pcVar5 = (char *)param_1[1];
        pcVar10 = pcVar2;
        if (param_2 != pcVar5) {
          do {
            pcVar10[0x10] = *param_2;
            *(int32_t *)(pcVar10 + 0x18) = *(int32_t *)(param_2 + 8);
            *param_2 = '\0';
            param_2[8] = '\0';
            param_2[9] = '\0';
            param_2[10] = '\0';
            param_2[0xb] = '\0';
            param_2[0xc] = '\0';
            param_2[0xd] = '\0';
            param_2[0xe] = '\0';
            param_2[0xf] = '\0';
            param_2 = param_2 + 0x10;
            pcVar10 = pcVar10 + 0x10;
          } while (param_2 != pcVar5);
        }
      }
      FUN_1800f9750(param_1,(longlong)pcVar13,uVar1,uVar14);
      return pcVar2;
    }
  }
}

 FUN_1800aa480();
    pcVar5 = (code *)swi(3);
    puVar13 = (int32_t *)(*pcVar5)();
    return puVar13;
  }
  uVar1 = lVar7 + 1;
  uVar10 = param_1[2] - lVar3 >> 4;
  if (uVar10 <= 0xfffffffffffffff - (uVar10 >> 1)) {
uVar10 = (uVar10 >> 1) + uVar10;
    uVar12 = uVar1;
    if (uVar1 <= uVar10) {
      uVar12 = uVar10;
    }
    if (uVar12 < 0x1000000000000000) {
      _Var11 = uVar12 * 0x10;
      puVar13 = (int32_t *)0x0;
      if (_Var11 != 0) {
        if (_Var11 < 0x1000) {
          puVar13 = (int32_t *)operator_new(_Var11);
        }
        else {
          if (_Var11 + 0x27 <= _Var11) goto LAB_1800f3178;
          pvVar8 = operator_new(_Var11 + 0x27);
          if (pvVar8 == (void *)0x0) {
            FUN_18012b7b4();
            pcVar5 = (code *)swi(3);
            puVar13 = (int32_t *)(*pcVar5)();
            return puVar13;
          }
          puVar13 = (int32_t *)((longlong)pvVar8 + 0x27U & 0xffffffffffffffe0);
          *(void **)(puVar13 + -8) = pvVar8;
        }
      }
      puVar2 = puVar13 + ((longlong)param_2 - lVar3 & 0xfffffffffffffff0);
      *puVar2 = 0;
      FUN_1800f8a10((int32_t *)(puVar2 + 8),'\0');
      puVar4 = (int32_t *)param_1[1];
      puVar9 = (int32_t *)*param_1;
      puVar6 = puVar13;
      if (param_2 == puVar4) {
        for (; puVar9 != puVar4; puVar9 = puVar9 + 0x10) {
          *puVar6 = *puVar9;
          *(int32_t *)(puVar6 + 8) = *(int32_t *)(puVar9 + 8);
          *puVar9 = 0;
          *(int32_t *)(puVar9 + 8) = 0;
          puVar6 = puVar6 + 0x10;
        }
      }
      else {
        for (; puVar9 != param_2; puVar9 = puVar9 + 0x10) {
          *puVar6 = *puVar9;
          *(int32_t *)(puVar6 + 8) = *(int32_t *)(puVar9 + 8);
          *puVar9 = 0;
          *(int32_t *)(puVar9 + 8) = 0;
          puVar6 = puVar6 + 0x10;
        }
        puVar4 = (int32_t *)param_1[1];
        puVar9 = puVar2;
        if (param_2 != puVar4) {
          do {
            puVar9[0x10] = *param_2;
            *(int32_t *)(puVar9 + 0x18) = *(int32_t *)(param_2 + 8);
            *param_2 = 0;
            *(int32_t *)(param_2 + 8) = 0;
            param_2 = param_2 + 0x10;
            puVar9 = puVar9 + 0x10;
          } while (param_2 != puVar4);
        }
      }
      FUN_1800f9750(param_1,(longlong)puVar13,uVar1,uVar12);
      return puVar2;
    }
  }
}

 FUN_1800aa480();
    pcVar6 = (code *)swi(3);
    pcVar13 = (char *)(*pcVar6)();
    return pcVar13;
  }
  uVar1 = lVar8 + 1;
  uVar11 = param_1[2] - lVar4 >> 4;
  if (uVar11 <= 0xfffffffffffffff - (uVar11 >> 1)) {
uVar11 = (uVar11 >> 1) + uVar11;
    uVar14 = uVar1;
    if (uVar1 <= uVar11) {
      uVar14 = uVar11;
    }
    if (uVar14 < 0x1000000000000000) {
      _Var12 = uVar14 * 0x10;
      if (_Var12 == 0) {
        pcVar13 = (char *)0x0;
      }
      else if (_Var12 < 0x1000) {
        pcVar13 = (char *)operator_new(_Var12);
      }
      else {
        if (_Var12 + 0x27 <= _Var12) goto LAB_1800f3373;
        pvVar9 = operator_new(_Var12 + 0x27);
        if (pvVar9 == (void *)0x0) {
          FUN_18012b7b4();
          pcVar6 = (code *)swi(3);
          pcVar13 = (char *)(*pcVar6)();
          return pcVar13;
        }
        pcVar13 = (char *)((longlong)pvVar9 + 0x27U & 0xffffffffffffffe0);
        *(void **)(pcVar13 + -8) = pvVar9;
      }
      pcVar2 = pcVar13 + ((longlong)param_2 - lVar4 & 0xfffffffffffffff0);
      *pcVar2 = '\0';
      pcVar2[8] = '\0';
      pcVar2[9] = '\0';
      pcVar2[10] = '\0';
      pcVar2[0xb] = '\0';
      pcVar2[0xc] = '\0';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
      uVar3 = *param_3;
      FUN_1800f9a90((longlong *)(pcVar2 + 8),*pcVar2);
      *pcVar2 = '\x04';
      *(ulonglong *)(pcVar2 + 8) = CONCAT71(uStackX_9,uVar3);
      pcVar5 = (char *)param_1[1];
      pcVar10 = (char *)*param_1;
      pcVar7 = pcVar13;
      if (param_2 == pcVar5) {
        for (; pcVar10 != pcVar5; pcVar10 = pcVar10 + 0x10) {
          *pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
      }
      else {
        for (; pcVar10 != param_2; pcVar10 = pcVar10 + 0x10) {
          *pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
        pcVar5 = (char *)param_1[1];
        pcVar10 = pcVar2;
        if (param_2 != pcVar5) {
          do {
            pcVar10[0x10] = *param_2;
            *(int32_t *)(pcVar10 + 0x18) = *(int32_t *)(param_2 + 8);
            *param_2 = '\0';
            param_2[8] = '\0';
            param_2[9] = '\0';
            param_2[10] = '\0';
            param_2[0xb] = '\0';
            param_2[0xc] = '\0';
            param_2[0xd] = '\0';
            param_2[0xe] = '\0';
            param_2[0xf] = '\0';
            param_2 = param_2 + 0x10;
            pcVar10 = pcVar10 + 0x10;
          } while (param_2 != pcVar5);
        }
      }
      FUN_1800f9750(param_1,(longlong)pcVar13,uVar1,uVar14);
      return pcVar2;
    }
  }
}

 FUN_1800aa480();
    pcVar6 = (code *)swi(3);
    pcVar13 = (char *)(*pcVar6)();
    return pcVar13;
  }
  uVar1 = lVar8 + 1;
  uVar10 = param_1[2] - lVar4 >> 4;
  if (uVar10 <= 0xfffffffffffffff - (uVar10 >> 1)) {
uVar10 = (uVar10 >> 1) + uVar10;
    uVar14 = uVar1;
    if (uVar1 <= uVar10) {
      uVar14 = uVar10;
    }
    if (uVar14 < 0x1000000000000000) {
      _Var11 = uVar14 * 0x10;
      if (_Var11 == 0) {
        pcVar13 = (char *)0x0;
      }
      else if (_Var11 < 0x1000) {
        pcVar13 = (char *)operator_new(_Var11);
      }
      else {
        if (_Var11 + 0x27 <= _Var11) goto LAB_1800f36c5;
        pvVar9 = operator_new(_Var11 + 0x27);
        if (pvVar9 == (void *)0x0) {
          FUN_18012b7b4();
          pcVar6 = (code *)swi(3);
          pcVar13 = (char *)(*pcVar6)();
          return pcVar13;
        }
        pcVar13 = (char *)((longlong)pvVar9 + 0x27U & 0xffffffffffffffe0);
        *(void **)(pcVar13 + -8) = pvVar9;
      }
      pcVar2 = pcVar13 + ((longlong)param_2 - lVar4 & 0xfffffffffffffff0);
      *pcVar2 = '\0';
      pcVar2[8] = '\0';
      pcVar2[9] = '\0';
      pcVar2[10] = '\0';
      pcVar2[0xb] = '\0';
      pcVar2[0xc] = '\0';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
      uVar3 = *param_3;
      FUN_1800f9a90((longlong *)(pcVar2 + 8),*pcVar2);
      *pcVar2 = '\a';
      *(int32_t *)(pcVar2 + 8) = uVar3;
      pcVar5 = (char *)param_1[1];
      pcVar12 = (char *)*param_1;
      pcVar7 = pcVar13;
      if (param_2 == pcVar5) {
        for (; pcVar12 != pcVar5; pcVar12 = pcVar12 + 0x10) {
          *pcVar7 = *pcVar12;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar12 + 8);
          *pcVar12 = '\0';
          pcVar12[8] = '\0';
          pcVar12[9] = '\0';
          pcVar12[10] = '\0';
          pcVar12[0xb] = '\0';
          pcVar12[0xc] = '\0';
          pcVar12[0xd] = '\0';
          pcVar12[0xe] = '\0';
          pcVar12[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
      }
      else {
        for (; pcVar12 != param_2; pcVar12 = pcVar12 + 0x10) {
          *pcVar7 = *pcVar12;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar12 + 8);
          *pcVar12 = '\0';
          pcVar12[8] = '\0';
          pcVar12[9] = '\0';
          pcVar12[10] = '\0';
          pcVar12[0xb] = '\0';
          pcVar12[0xc] = '\0';
          pcVar12[0xd] = '\0';
          pcVar12[0xe] = '\0';
          pcVar12[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
        pcVar5 = (char *)param_1[1];
        pcVar12 = pcVar2;
        if (param_2 != pcVar5) {
          do {
            pcVar12[0x10] = *param_2;
            *(int32_t *)(pcVar12 + 0x18) = *(int32_t *)(param_2 + 8);
            *param_2 = '\0';
            param_2[8] = '\0';
            param_2[9] = '\0';
            param_2[10] = '\0';
            param_2[0xb] = '\0';
            param_2[0xc] = '\0';
            param_2[0xd] = '\0';
            param_2[0xe] = '\0';
            param_2[0xf] = '\0';
            param_2 = param_2 + 0x10;
            pcVar12 = pcVar12 + 0x10;
          } while (param_2 != pcVar5);
        }
      }
      FUN_1800f9750(param_1,(longlong)pcVar13,uVar1,uVar14);
      return pcVar2;
    }
  }
}

 FUN_1800aa480();
    pcVar6 = (code *)swi(3);
    pcVar14 = (char *)(*pcVar6)();
    return pcVar14;
  }
  uVar1 = lVar8 + 1;
  uVar11 = param_1[2] - lVar4 >> 4;
  if (uVar11 <= 0xfffffffffffffff - (uVar11 >> 1)) {
uVar11 = (uVar11 >> 1) + uVar11;
    uVar13 = uVar1;
    if (uVar1 <= uVar11) {
      uVar13 = uVar11;
    }
    if (uVar13 < 0x1000000000000000) {
      _Var12 = uVar13 * 0x10;
      if (_Var12 == 0) {
        pcVar14 = (char *)0x0;
      }
      else if (_Var12 < 0x1000) {
        pcVar14 = (char *)operator_new(_Var12);
      }
      else {
        if (_Var12 + 0x27 <= _Var12) goto LAB_1800f3a0a;
        pvVar9 = operator_new(_Var12 + 0x27);
        if (pvVar9 == (void *)0x0) {
          FUN_18012b7b4();
          pcVar6 = (code *)swi(3);
          pcVar14 = (char *)(*pcVar6)();
          return pcVar14;
        }
        pcVar14 = (char *)((longlong)pvVar9 + 0x27U & 0xffffffffffffffe0);
        *(void **)(pcVar14 + -8) = pvVar9;
      }
      pcVar2 = pcVar14 + ((longlong)param_2 - lVar4 & 0xfffffffffffffff0);
      cVar3 = *param_3;
      *pcVar2 = cVar3;
      FUN_1800f8a10((int32_t *)(pcVar2 + 8),cVar3);
      pcVar5 = (char *)param_1[1];
      pcVar10 = (char *)*param_1;
      pcVar7 = pcVar14;
      if (param_2 == pcVar5) {
        for (; pcVar10 != pcVar5; pcVar10 = pcVar10 + 0x10) {
          *pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
      }
      else {
        for (; pcVar10 != param_2; pcVar10 = pcVar10 + 0x10) {
          *pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
        pcVar5 = (char *)param_1[1];
        pcVar10 = pcVar2;
        if (param_2 != pcVar5) {
          do {
            pcVar10[0x10] = *param_2;
            *(int32_t *)(pcVar10 + 0x18) = *(int32_t *)(param_2 + 8);
            *param_2 = '\0';
            param_2[8] = '\0';
            param_2[9] = '\0';
            param_2[10] = '\0';
            param_2[0xb] = '\0';
            param_2[0xc] = '\0';
            param_2[0xd] = '\0';
            param_2[0xe] = '\0';
            param_2[0xf] = '\0';
            param_2 = param_2 + 0x10;
            pcVar10 = pcVar10 + 0x10;
          } while (param_2 != pcVar5);
        }
      }
      FUN_1800f9750(param_1,(longlong)pcVar14,uVar1,uVar13);
      return pcVar2;
    }
  }
}

 FUN_1800aa480();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar4 = param_2 * 0x10;
  if (uVar4 == 0) {
pvVar3 = (void *)0x0;
  }
}

 FUN_1800aa480();
        pcVar7 = (code *)swi(3);
        puVar12 = (int32_t *)(*pcVar7)();
        return puVar12;
      }
      if (uVar13 < 0x1000) {
puVar16 = (int32_t *)operator_new(uVar13);
      }
}

 FUN_1800aa480();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar8 = param_1[2] - lVar2;
  uVar1 = (param_1[1] - lVar2) + 1;
  if (0x7fffffffffffffff - (uVar8 >> 1) < uVar8) {
uVar8 = 0x8000000000000026;
LAB_1800f7609:
    pvVar6 = operator_new(uVar8);
    if (pvVar6 == (void *)0x0) goto LAB_1800f7718;
    puVar12 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
    puVar12[-1] = pvVar6;
  }
}

 FUN_1800aa480();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = param_1[2] - *param_1 >> 2;
  lVar9 = param_1[1] - *param_1 >> 2;
  if ((0x3fffffffffffffff - (uVar6 >> 1) < uVar6) ||
     ((uVar6 = (uVar6 >> 1) + uVar6, uVar4 = param_2, param_2 <= uVar6 &&
      (uVar4 = uVar6, 0x3fffffffffffffff < uVar6)))) {
LAB_1800f819b:
    FUN_1800ba8a0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}

 FUN_1800aa480();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar7 = (int32_t *)0x0;
    lVar2 = param_1[1];
    _Var8 = param_2 * 0x10;
    if (_Var8 != 0) {
if (_Var8 < 0x1000) {
        puVar7 = (int32_t *)operator_new(_Var8);
      }
      else {
        if (_Var8 + 0x27 <= _Var8) {
          FUN_1800ba8a0();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar6 = operator_new(_Var8 + 0x27);
        if (pvVar6 == (void *)0x0) {
          FUN_18012b7b4();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
        *(void **)(puVar7 + -8) = pvVar6;
      }
    }
}

 FUN_1800aa480();
    pcVar4 = (code *)swi(3);
    puVar13 = (int32_t *)(*pcVar4)();
    return puVar13;
  }
  uVar9 = param_1[2] - lVar2 >> 4;
  uVar1 = lVar6 + 1;
  if (uVar9 <= 0xfffffffffffffff - (uVar9 >> 1)) {
uVar9 = (uVar9 >> 1) + uVar9;
    uVar12 = uVar1;
    if (uVar1 <= uVar9) {
      uVar12 = uVar9;
    }
    if (uVar12 < 0x1000000000000000) {
      puVar13 = (int32_t *)0x0;
      _Var10 = uVar12 * 0x10;
      if (_Var10 != 0) {
        if (_Var10 < 0x1000) {
          puVar13 = (int32_t *)operator_new(_Var10);
        }
        else {
          if (_Var10 + 0x27 <= _Var10) goto LAB_1800f99d9;
          pvVar7 = operator_new(_Var10 + 0x27);
          if (pvVar7 == (void *)0x0) {
            FUN_18012b7b4();
            pcVar4 = (code *)swi(3);
            puVar13 = (int32_t *)(*pcVar4)();
            return puVar13;
          }
          puVar13 = (int32_t *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
          *(void **)(puVar13 + -8) = pvVar7;
        }
      }
      puVar11 = puVar13 + ((longlong)param_2 - lVar2 & 0xfffffffffffffff0);
      *puVar11 = *param_3;
      *(int32_t *)(puVar11 + 8) = *(int32_t *)(param_3 + 8);
      *param_3 = 0;
      *(int32_t *)(param_3 + 8) = 0;
      puVar3 = (int32_t *)param_1[1];
      puVar8 = (int32_t *)*param_1;
      puVar5 = puVar13;
      if (param_2 == puVar3) {
        for (; puVar8 != puVar3; puVar8 = puVar8 + 0x10) {
          *puVar5 = *puVar8;
          *(int32_t *)(puVar5 + 8) = *(int32_t *)(puVar8 + 8);
          *puVar8 = 0;
          *(int32_t *)(puVar8 + 8) = 0;
          puVar5 = puVar5 + 0x10;
        }
      }
      else {
        for (; puVar8 != param_2; puVar8 = puVar8 + 0x10) {
          *puVar5 = *puVar8;
          *(int32_t *)(puVar5 + 8) = *(int32_t *)(puVar8 + 8);
          *puVar8 = 0;
          *(int32_t *)(puVar8 + 8) = 0;
          puVar5 = puVar5 + 0x10;
        }
        puVar3 = (int32_t *)param_1[1];
        puVar8 = puVar11;
        if (param_2 != puVar3) {
          do {
            puVar8[0x10] = *param_2;
            *(int32_t *)(puVar8 + 0x18) = *(int32_t *)(param_2 + 8);
            *param_2 = 0;
            *(int32_t *)(param_2 + 8) = 0;
            param_2 = param_2 + 0x10;
            puVar8 = puVar8 + 0x10;
          } while (param_2 != puVar3);
        }
      }
      FUN_1800f9750(param_1,(longlong)puVar13,uVar1,uVar12);
      return puVar11;
    }
  }
}

 FUN_1800aa480();
    pcVar2 = (code *)swi(3);
    puVar5 = (int32_t *)(*pcVar2)();
    return puVar5;
  }
  uVar9 = lVar8 + 1;
  uVar6 = (longlong)DAT_1801ec830 - (longlong)DAT_1801ec820 >> 4;
  if (0xfffffffffffffff - (uVar6 >> 1) < uVar6) {
LAB_1800fbf1e:
    FUN_1800ba8a0();
    pcVar2 = (code *)swi(3);
    puVar5 = (int32_t *)(*pcVar2)();
    return puVar5;
  }
}

 FUN_1800aa480();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
uVar5 = 0x1fffffffffffffff;
    }
}

 FUN_1800aa480();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = (LPVOID)*param_1;
  uVar4 = (longlong)(param_1[2] - (longlong)pvVar1) >> 2;
  uVar5 = 0x3fffffffffffffff;
  if ((uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) &&
     (uVar5 = (uVar4 >> 1) + uVar4, uVar5 < param_2)) {
uVar5 = param_2;
  }
}

