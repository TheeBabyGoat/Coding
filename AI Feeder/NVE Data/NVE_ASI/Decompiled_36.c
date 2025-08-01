#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800f5550 ----
void FUN_1800f5550(int32_t param_1,int32_t param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800f5550(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_1800f9ec0((int32_t *)(param_3 + 8));
    FUN_1800a6800(param_3 + 4);
    thunk_FUN_18012d5e8(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

// ---- Function: FUN_1800f5600 ----
int32_t *
FUN_1800f5600(int32_t *param_1,int32_t *param_2,int32_t param_3,int32_t param_4)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  
  puVar2 = (int32_t *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    uVar3 = param_3;
    puVar1 = (int32_t *)operator_new(0x50);
    FUN_1800ba630(puVar1 + 4,param_2 + 4);
    FUN_1800f57a0((int32_t *)(puVar1 + 8),(int32_t *)(param_2 + 8),uVar3,param_4);
    *puVar1 = puVar2;
    puVar1[2] = puVar2;
    *(int32_t *)(puVar1 + 3) = 0;
    puVar1[1] = param_3;
    *(int32_t *)(puVar1 + 3) = *(int32_t *)(param_2 + 3);
    puVar2 = FUN_1800f5600(param_1,(int32_t *)*param_2,puVar1,param_4);
    *puVar1 = puVar2;
    puVar2 = FUN_1800f5600(param_1,(int32_t *)param_2[2],puVar1,param_4);
    puVar1[2] = puVar2;
    puVar2 = puVar1;
  }
  return puVar2;
}

// ---- Function: FUN_1800f56e0 ----
void FUN_1800f56e0(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  if (0xfffffffffffffff < param_2) {
    FUN_1800aa480();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar4 = param_2 * 0x10;
  if (uVar4 == 0) {
    pvVar3 = (void *)0x0;
  }
  else if (uVar4 < 0x1000) {
    pvVar3 = operator_new(uVar4);
  }
  else {
    if (uVar4 + 0x27 <= uVar4) {
      FUN_1800ba8a0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar2 = operator_new(uVar4 + 0x27);
    if (pvVar2 == (void *)0x0) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)pvVar3 - 8) = pvVar2;
  }
  *param_1 = (ulonglong)pvVar3;
  param_1[1] = (ulonglong)pvVar3;
  param_1[2] = (ulonglong)((longlong)pvVar3 + uVar4);
  return;
}

// ---- Function: FUN_1800f57a0 ----
int32_t *
FUN_1800f57a0(int32_t *param_1,int32_t *param_2,int32_t param_3,int32_t param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int32_t *puVar5;
  longlong *plVar6;
  code *pcVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  void *pvVar11;
  int32_t *puVar12;
  ulonglong uVar13;
  int32_t *puVar14;
  int32_t uVar15;
  int32_t *puVar16;
  int32_t local_res8;
  
  *param_1 = *param_2;
  *(int32_t *)(param_1 + 8) = 0;
  uVar15 = 0x180000000;
  switch(*param_1) {
  case 1:
    plVar6 = *(longlong **)(param_2 + 8);
    plVar10 = (longlong *)operator_new(0x10);
    *plVar10 = 0;
    plVar10[1] = 0;
    pvVar11 = operator_new(0x50);
    *(void **)pvVar11 = pvVar11;
    *(void **)((longlong)pvVar11 + 8) = pvVar11;
    *(void **)((longlong)pvVar11 + 0x10) = pvVar11;
    *(int32_t *)((longlong)pvVar11 + 0x18) = 0x101;
    *plVar10 = (longlong)pvVar11;
    puVar16 = FUN_1800f5600(plVar10,*(int32_t **)(*plVar6 + 8),pvVar11,param_4);
    *(int32_t **)(*plVar10 + 8) = puVar16;
    plVar10[1] = plVar6[1];
    plVar6 = (longlong *)*plVar10;
    plVar2 = (longlong *)plVar6[1];
    if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar8 = (longlong *)*plVar2;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar2 = plVar8;
        plVar8 = (longlong *)*plVar8;
      }
      *plVar6 = (longlong)plVar2;
      lVar3 = *(longlong *)(*plVar10 + 8);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      cVar1 = *(char *)(lVar4 + 0x19);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(longlong *)(lVar4 + 0x10) + 0x19);
        lVar3 = lVar4;
        lVar4 = *(longlong *)(lVar4 + 0x10);
      }
      *(longlong *)(*plVar10 + 0x10) = lVar3;
    }
    else {
      *plVar6 = (longlong)plVar6;
      *(longlong *)(*plVar10 + 0x10) = *plVar10;
    }
    goto LAB_1800f5a8a;
  case 2:
    plVar6 = *(longlong **)(param_2 + 8);
    puVar9 = (ulonglong *)operator_new(0x18);
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    uVar13 = plVar6[1] - *plVar6 >> 4;
    if (uVar13 != 0) {
      FUN_1800f56e0(puVar9,uVar13);
      puVar12 = (int32_t *)*puVar9;
      puVar5 = (int32_t *)plVar6[1];
      for (puVar14 = (int32_t *)*plVar6; puVar14 != puVar5; puVar14 = puVar14 + 0x10) {
        FUN_1800f57a0(puVar12,puVar14,uVar15,param_4);
        puVar12 = puVar12 + 0x10;
      }
      puVar9[1] = (ulonglong)puVar12;
    }
    *(ulonglong **)(param_1 + 8) = puVar9;
    break;
  case 3:
    puVar16 = *(int32_t **)(param_2 + 8);
    plVar10 = (longlong *)operator_new(0x20);
    FUN_1800ba630(plVar10,puVar16);
    goto LAB_1800f5a8a;
  case 4:
    local_res8 = CONCAT71(local_res8._1_7_,param_2[8]);
    *(int32_t *)(param_1 + 8) = local_res8;
    break;
  case 5:
  case 6:
    *(int32_t *)(param_1 + 8) = *(int32_t *)(param_2 + 8);
    break;
  case 7:
    *(int32_t *)(param_1 + 8) = *(int32_t *)(param_2 + 8);
    break;
  case 8:
    plVar6 = *(longlong **)(param_2 + 8);
    plVar10 = (longlong *)operator_new(0x28);
    *plVar10 = 0;
    plVar10[1] = 0;
    plVar10[2] = 0;
    uVar13 = plVar6[1] - *plVar6;
    if (uVar13 != 0) {
      if (0x7fffffffffffffff < uVar13) {
LAB_1800f5aab:
        FUN_1800aa480();
        pcVar7 = (code *)swi(3);
        puVar12 = (int32_t *)(*pcVar7)();
        return puVar12;
      }
      if (uVar13 < 0x1000) {
        puVar16 = (int32_t *)operator_new(uVar13);
      }
      else {
        if (uVar13 + 0x27 <= uVar13) {
          FUN_1800ba8a0();
          pcVar7 = (code *)swi(3);
          puVar12 = (int32_t *)(*pcVar7)();
          return puVar12;
        }
        pvVar11 = operator_new(uVar13 + 0x27);
        if (pvVar11 == (void *)0x0) {
          FUN_18012b7b4();
          goto LAB_1800f5aab;
        }
        puVar16 = (int32_t *)((longlong)pvVar11 + 0x27U & 0xffffffffffffffe0);
        puVar16[-1] = pvVar11;
      }
      *plVar10 = (longlong)puVar16;
      plVar10[1] = (longlong)puVar16;
      plVar10[2] = (longlong)puVar16 + uVar13;
      uVar13 = plVar6[1] - *plVar6;
      FUN_180150fd0(puVar16,(int32_t *)*plVar6,uVar13);
      plVar10[1] = (longlong)puVar16 + uVar13;
    }
    plVar10[3] = plVar6[3];
    *(char *)(plVar10 + 4) = (char)plVar6[4];
LAB_1800f5a8a:
    *(longlong **)(param_1 + 8) = plVar10;
  }
  return param_1;
}

// ---- Function: FUN_1800f5ae0 ----
longlong * FUN_1800f5ae0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int32_t *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  plVar6 = (longlong *)param_2[2];
  plVar7 = param_2 + 2;
  if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar6 + 0x19);
    plVar5 = plVar6;
    plVar2 = (longlong *)*plVar6;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar5 = plVar2;
      plVar2 = (longlong *)*plVar2;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar8 = (longlong *)param_2[1];
    plVar2 = param_2;
    while ((plVar5 = plVar8, cVar1 == '\0' && (plVar2 == (longlong *)plVar5[2]))) {
      cVar1 = *(char *)(plVar5[1] + 0x19);
      plVar8 = (longlong *)plVar5[1];
      plVar2 = plVar5;
    }
  }
  plVar9 = param_2 + 1;
  plVar2 = (longlong *)*param_2;
  plVar8 = plVar6;
  if (((*(char *)((longlong)plVar2 + 0x19) == '\0') &&
      (plVar8 = plVar2, *(char *)((longlong)plVar6 + 0x19) == '\0')) &&
     (plVar8 = (longlong *)plVar5[2], plVar5 != param_2)) {
    plVar2[1] = (longlong)plVar5;
    *plVar5 = *param_2;
    plVar6 = plVar5;
    if (plVar5 != (longlong *)*plVar7) {
      plVar6 = (longlong *)plVar5[1];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        plVar8[1] = (longlong)plVar6;
      }
      *plVar6 = (longlong)plVar8;
      plVar5[2] = *plVar7;
      *(longlong **)(*plVar7 + 8) = plVar5;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar5;
    }
    else {
      plVar7 = (longlong *)*plVar9;
      if ((longlong *)*plVar7 == param_2) {
        *plVar7 = (longlong)plVar5;
      }
      else {
        plVar7[2] = (longlong)plVar5;
      }
    }
    lVar3 = plVar5[3];
    plVar5[1] = *plVar9;
    *(char *)(plVar5 + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = (char)lVar3;
  }
  else {
    plVar6 = (longlong *)*plVar9;
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      plVar8[1] = (longlong)plVar6;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar8;
    }
    else if ((longlong *)*plVar6 == param_2) {
      *plVar6 = (longlong)plVar8;
    }
    else {
      plVar6[2] = (longlong)plVar8;
    }
    if (*(longlong **)*param_1 == param_2) {
      plVar7 = plVar6;
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar5 = (longlong *)*plVar8;
        plVar7 = plVar8;
        while (plVar2 = plVar5, cVar1 == '\0') {
          plVar5 = (longlong *)*plVar2;
          cVar1 = *(char *)((longlong)plVar5 + 0x19);
          plVar7 = plVar2;
        }
      }
      *(longlong **)*param_1 = plVar7;
    }
    lVar3 = *param_1;
    if (*(longlong **)(lVar3 + 0x10) == param_2) {
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar8[2] + 0x19);
        plVar7 = (longlong *)plVar8[2];
        plVar5 = plVar8;
        while (plVar2 = plVar7, cVar1 == '\0') {
          plVar7 = (longlong *)plVar2[2];
          cVar1 = *(char *)((longlong)plVar7 + 0x19);
          plVar5 = plVar2;
        }
        *(longlong **)(lVar3 + 0x10) = plVar5;
      }
      else {
        *(longlong **)(lVar3 + 0x10) = plVar6;
      }
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (plVar8 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar7 = plVar6;
        if ((char)plVar8[3] != '\x01') break;
        plVar6 = (longlong *)*plVar7;
        if (plVar8 == plVar6) {
          plVar6 = (longlong *)plVar7[2];
          if ((char)plVar6[3] == '\0') {
            *(int32_t *)(plVar6 + 3) = 1;
            plVar6 = (longlong *)plVar7[2];
            *(int32_t *)(plVar7 + 3) = 0;
            plVar7[2] = *plVar6;
            if (*(char *)(*plVar6 + 0x19) == '\0') {
              *(longlong **)(*plVar6 + 8) = plVar7;
            }
            plVar6[1] = plVar7[1];
            if (plVar7 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar6;
            }
            else {
              puVar4 = (int32_t *)plVar7[1];
              if (plVar7 == (longlong *)*puVar4) {
                *puVar4 = plVar6;
              }
              else {
                puVar4[2] = plVar6;
              }
            }
            *plVar6 = (longlong)plVar7;
            plVar7[1] = (longlong)plVar6;
            plVar6 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
            if ((*(char *)(*plVar6 + 0x18) != '\x01') || (*(char *)(plVar6[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar6[2] + 0x18) == '\x01') {
                *(int32_t *)(*plVar6 + 0x18) = 1;
                lVar3 = *plVar6;
                *(int32_t *)(plVar6 + 3) = 0;
                *plVar6 = *(longlong *)(lVar3 + 0x10);
                if (*(char *)(*(longlong *)(lVar3 + 0x10) + 0x19) == '\0') {
                  *(longlong **)(*(longlong *)(lVar3 + 0x10) + 8) = plVar6;
                }
                *(longlong *)(lVar3 + 8) = plVar6[1];
                if (plVar6 == *(longlong **)(*param_1 + 8)) {
                  *(longlong *)(*param_1 + 8) = lVar3;
                }
                else {
                  plVar5 = (longlong *)plVar6[1];
                  if (plVar6 == (longlong *)plVar5[2]) {
                    plVar5[2] = lVar3;
                  }
                  else {
                    *plVar5 = lVar3;
                  }
                }
                *(longlong **)(lVar3 + 0x10) = plVar6;
                plVar6[1] = lVar3;
                plVar6 = (longlong *)plVar7[2];
              }
              *(char *)(plVar6 + 3) = (char)plVar7[3];
              *(int32_t *)(plVar7 + 3) = 1;
              *(int32_t *)(plVar6[2] + 0x18) = 1;
              plVar6 = (longlong *)plVar7[2];
              plVar7[2] = *plVar6;
              if (*(char *)(*plVar6 + 0x19) == '\0') {
                *(longlong **)(*plVar6 + 8) = plVar7;
              }
              plVar6[1] = plVar7[1];
              if (plVar7 == *(longlong **)(*param_1 + 8)) {
                *(longlong **)(*param_1 + 8) = plVar6;
                *plVar6 = (longlong)plVar7;
              }
              else {
                puVar4 = (int32_t *)plVar7[1];
                if (plVar7 == (longlong *)*puVar4) {
                  *puVar4 = plVar6;
                  *plVar6 = (longlong)plVar7;
                }
                else {
                  puVar4[2] = plVar6;
                  *plVar6 = (longlong)plVar7;
                }
              }
LAB_1800f5f61:
              plVar7[1] = (longlong)plVar6;
              break;
            }
LAB_1800f5e05:
            *(int32_t *)(plVar6 + 3) = 0;
          }
        }
        else {
          if ((char)plVar6[3] == '\0') {
            *(int32_t *)(plVar6 + 3) = 1;
            lVar3 = *plVar7;
            *(int32_t *)(plVar7 + 3) = 0;
            *plVar7 = *(longlong *)(lVar3 + 0x10);
            if (*(char *)(*(longlong *)(lVar3 + 0x10) + 0x19) == '\0') {
              *(longlong **)(*(longlong *)(lVar3 + 0x10) + 8) = plVar7;
            }
            *(longlong *)(lVar3 + 8) = plVar7[1];
            if (plVar7 == *(longlong **)(*param_1 + 8)) {
              *(longlong *)(*param_1 + 8) = lVar3;
            }
            else {
              plVar6 = (longlong *)plVar7[1];
              if (plVar7 == (longlong *)plVar6[2]) {
                plVar6[2] = lVar3;
              }
              else {
                *plVar6 = lVar3;
              }
            }
            *(longlong **)(lVar3 + 0x10) = plVar7;
            plVar7[1] = lVar3;
            plVar6 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
            if ((*(char *)(plVar6[2] + 0x18) != '\x01') || (*(char *)(*plVar6 + 0x18) != '\x01')) {
              if (*(char *)(*plVar6 + 0x18) == '\x01') {
                *(int32_t *)(plVar6[2] + 0x18) = 1;
                plVar5 = (longlong *)plVar6[2];
                *(int32_t *)(plVar6 + 3) = 0;
                plVar6[2] = *plVar5;
                if (*(char *)(*plVar5 + 0x19) == '\0') {
                  *(longlong **)(*plVar5 + 8) = plVar6;
                }
                plVar5[1] = plVar6[1];
                if (plVar6 == *(longlong **)(*param_1 + 8)) {
                  *(longlong **)(*param_1 + 8) = plVar5;
                }
                else {
                  puVar4 = (int32_t *)plVar6[1];
                  if (plVar6 == (longlong *)*puVar4) {
                    *puVar4 = plVar5;
                  }
                  else {
                    puVar4[2] = plVar5;
                  }
                }
                *plVar5 = (longlong)plVar6;
                plVar6[1] = (longlong)plVar5;
                plVar6 = (longlong *)*plVar7;
              }
              *(char *)(plVar6 + 3) = (char)plVar7[3];
              *(int32_t *)(plVar7 + 3) = 1;
              *(int32_t *)(*plVar6 + 0x18) = 1;
              plVar6 = (longlong *)*plVar7;
              *plVar7 = plVar6[2];
              if (*(char *)(plVar6[2] + 0x19) == '\0') {
                *(longlong **)(plVar6[2] + 8) = plVar7;
              }
              plVar6[1] = plVar7[1];
              if (plVar7 == *(longlong **)(*param_1 + 8)) {
                *(longlong **)(*param_1 + 8) = plVar6;
              }
              else {
                puVar4 = (int32_t *)plVar7[1];
                if (plVar7 == (longlong *)puVar4[2]) {
                  puVar4[2] = plVar6;
                }
                else {
                  *puVar4 = plVar6;
                }
              }
              plVar6[2] = (longlong)plVar7;
              goto LAB_1800f5f61;
            }
            goto LAB_1800f5e05;
          }
        }
        plVar6 = (longlong *)plVar7[1];
        plVar8 = plVar7;
      } while (plVar7 != *(longlong **)(*param_1 + 8));
    }
    *(int32_t *)(plVar8 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return param_2;
}

// ---- Function: FUN_1800f5fa0 ----
longlong * FUN_1800f5fa0(longlong *param_1,int32_t param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  uVar4 = 0xffffffffffffffff;
  lVar1 = -1;
  do {
    lVar3 = lVar1;
    lVar1 = lVar3 + 1;
  } while (*(char *)(*param_3 + lVar1) != '\0');
  uVar2 = lVar3 + 0x19;
  if (0xf < uVar2) {
    FUN_1800b9630(param_1,uVar2);
    param_1[2] = 0;
  }
  FUN_1800b9910(param_1,(int32_t *)"cannot use erase() with ",0x18);
  do {
    uVar4 = uVar4 + 1;
  } while (*(char *)(*param_3 + uVar4) != '\0');
  FUN_1800b9910(param_1,(int32_t *)*param_3,uVar4);
  return param_1;
}

// ---- Function: FUN_1800f6060 ----
void FUN_1800f6060(byte *param_1,int32_t *param_2,int32_t *param_3)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  LPVOID pvVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  int32_t uVar9;
  code *pcVar10;
  char *pcVar11;
  longlong *plVar12;
  longlong *plVar13;
  LPVOID pvVar14;
  ulonglong uVar15;
  longlong *plVar16;
  int32_t auStack_f8 [32];
  longlong local_d8 [7];
  char *local_a0;
  longlong local_98 [3];
  longlong local_80 [7];
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStack_f8;
  if (param_1 != (byte *)*param_3) {
LAB_1800f62be:
    FUN_1800ba470(&local_a0,(int32_t *)"iterator does not fit current value");
    FUN_1800f8fa0(local_80,0xca,&local_a0);
    FUN_1801279a8(local_80,&DAT_1801e92f8);
LAB_1800f62f6:
    FUN_1800ba470(&local_a0,(int32_t *)"iterator out of range");
    FUN_1800f8fa0(local_80,0xcd,&local_a0);
    FUN_1801279a8(local_80,&DAT_1801e92f8);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FUN_1800f93b0(param_1,param_2);
  bVar2 = *param_1;
  uVar15 = (ulonglong)bVar2;
  switch(uVar15) {
  default:
    local_a0 = FUN_1800f7810(param_1);
    plVar13 = FUN_1800f5fa0(local_80,uVar15,(longlong *)&local_a0);
    FUN_1800ed150(local_d8,0x133,plVar13);
    FUN_1801279a8(local_d8,&DAT_1801e9200);
    goto LAB_1800f62be;
  case 1:
    plVar13 = (longlong *)param_3[1];
    plVar16 = (longlong *)plVar13[2];
    if (*(char *)((longlong)plVar16 + 0x19) == '\0') {
      cVar3 = *(char *)(*plVar16 + 0x19);
      plVar12 = (longlong *)*plVar16;
      while (cVar3 == '\0') {
        cVar3 = *(char *)(*plVar12 + 0x19);
        plVar16 = plVar12;
        plVar12 = (longlong *)*plVar12;
      }
    }
    else {
      cVar3 = *(char *)(plVar13[1] + 0x19);
      plVar12 = plVar13;
      plVar16 = (longlong *)plVar13[1];
      while ((cVar3 == '\0' && (plVar12 == (longlong *)plVar16[2]))) {
        cVar3 = *(char *)(plVar16[1] + 0x19);
        plVar12 = plVar16;
        plVar16 = (longlong *)plVar16[1];
      }
    }
    plVar13 = FUN_1800f5ae0(*(longlong **)(param_1 + 8),plVar13);
    FUN_1800f9ec0((int32_t *)(plVar13 + 8));
    FUN_1800a6800(plVar13 + 4);
    thunk_FUN_18012d5e8(plVar13);
    param_2[1] = plVar16;
    break;
  case 2:
    pcVar6 = (char *)param_3[2];
    lVar7 = *(longlong *)(param_1 + 8);
    pcVar8 = *(char **)(lVar7 + 8);
    pcVar1 = pcVar6;
    pcVar11 = pcVar6;
    while (pcVar11 = pcVar11 + 0x10, pcVar11 != pcVar8) {
      cVar3 = *pcVar11;
      uVar9 = *(int32_t *)(pcVar11 + 8);
      *pcVar11 = '\0';
      pcVar11[8] = '\0';
      pcVar11[9] = '\0';
      pcVar11[10] = '\0';
      pcVar11[0xb] = '\0';
      pcVar11[0xc] = '\0';
      pcVar11[0xd] = '\0';
      pcVar11[0xe] = '\0';
      pcVar11[0xf] = '\0';
      cVar4 = *pcVar1;
      *pcVar1 = cVar3;
      uVar15 = (ulonglong)local_a0 >> 8;
      local_a0 = (char *)CONCAT71((int7)uVar15,cVar4);
      local_98[0] = *(longlong *)(pcVar1 + 8);
      *(int32_t *)(pcVar1 + 8) = uVar9;
      FUN_1800f9a90(local_98,cVar4);
      pcVar1 = pcVar1 + 0x10;
    }
    FUN_1800f9ec0((int32_t *)(*(longlong *)(lVar7 + 8) + -0x10));
    *(longlong *)(lVar7 + 8) = *(longlong *)(lVar7 + 8) + -0x10;
    param_2[2] = pcVar6;
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    if (param_3[3] == 0) {
      if (bVar2 == 3) {
        FUN_1800a6800(*(longlong **)(param_1 + 8));
        thunk_FUN_18012d5e8(*(LPVOID *)(param_1 + 8));
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = 0;
      }
      else {
        if (bVar2 == 8) {
          plVar13 = *(longlong **)(param_1 + 8);
          pvVar5 = (LPVOID)*plVar13;
          if (pvVar5 != (LPVOID)0x0) {
            pvVar14 = pvVar5;
            if ((0xfff < (ulonglong)(plVar13[2] - (longlong)pvVar5)) &&
               (pvVar14 = *(LPVOID *)((longlong)pvVar5 + -8),
               0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar14)))) {
              FUN_18012b7b4();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            thunk_FUN_18012d5e8(pvVar14);
            *plVar13 = 0;
            plVar13[1] = 0;
            plVar13[2] = 0;
          }
          thunk_FUN_18012d5e8(*(LPVOID *)(param_1 + 8));
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          param_1[0xc] = 0;
          param_1[0xd] = 0;
          param_1[0xe] = 0;
          param_1[0xf] = 0;
        }
        *param_1 = 0;
      }
      break;
    }
    goto LAB_1800f62f6;
  }
  FUN_1801252c0(local_48 ^ (ulonglong)auStack_f8);
  return;
}

// ---- Function: FUN_1800f6360 ----
void FUN_1800f6360(longlong param_1)

{
  longlong *plVar1;
  char *pcVar2;
  code *pcVar3;
  char cVar4;
  char *pcVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  longlong lVar8;
  int32_t auStack_98 [32];
  int32_t local_78 [8];
  int32_t local_70;
  longlong local_68;
  char *pcStack_60;
  longlong local_58;
  char *local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_98;
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x10) + -8);
  if (lVar8 != 0) {
    local_70._0_4_ = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3) + -1;
    local_78[0] = 1;
    plVar1 = *(longlong **)(param_1 + 0xa8);
    if (plVar1 == (longlong *)0x0) {
      FUN_180123318();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar7 = local_78;
    cVar4 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_70);
    if (cVar4 == '\0') {
      pcVar5 = FUN_1800f57a0((int32_t *)&local_70,(int32_t *)(param_1 + 0xb8),puVar7,lVar8);
      pcVar2 = *(char **)(*(longlong *)(param_1 + 0x10) + -8);
      cVar4 = *pcVar2;
      *pcVar2 = *pcVar5;
      *pcVar5 = cVar4;
      plVar1 = (longlong *)(pcVar5 + 8);
      lVar8 = *(longlong *)(pcVar2 + 8);
      *(longlong *)(pcVar2 + 8) = *plVar1;
      *plVar1 = lVar8;
      FUN_1800f9a90(plVar1,*pcVar5);
    }
  }
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
  FUN_1800f6c50((longlong *)(param_1 + 0x20));
  if (((*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) &&
      (pcVar2 = *(char **)(*(longlong *)(param_1 + 0x10) + -8), pcVar2 != (char *)0x0)) &&
     ((*pcVar2 == '\x02' || (*pcVar2 == '\x01')))) {
    FUN_1800f9490(pcVar2,&local_70);
    puVar6 = FUN_1800f93b0(*(int32_t *)(*(longlong *)(param_1 + 0x10) + -8),local_38);
    cVar4 = FUN_1800f9210(&local_70,puVar6);
    pcVar2 = local_38[0];
    while (local_38[0] = pcVar2, cVar4 != '\0') {
      local_38[0] = (char *)CONCAT44(local_70._4_4_,(int)local_70);
      switch(*local_38[0]) {
      default:
        pcVar5 = local_38[0];
        if (local_58 != 0) {
          FUN_1800ba470(local_38,(int32_t *)"cannot get value");
          FUN_1800f8fa0(&local_70,0xd6,local_38);
          FUN_1801279a8(&local_70,&DAT_1801e92f8);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      case '\x01':
        pcVar5 = (char *)(local_68 + 0x40);
        break;
      case '\x02':
        pcVar5 = pcStack_60;
      }
      if (*pcVar5 == '\t') {
        FUN_1800f6060(*(byte **)(*(longlong *)(param_1 + 0x10) + -8),&local_70,local_38);
        break;
      }
      local_38[0] = pcVar2;
      FUN_1800f92f0(&local_70);
      puVar6 = FUN_1800f93b0(*(int32_t *)(*(longlong *)(param_1 + 0x10) + -8),local_38);
      cVar4 = FUN_1800f9210(&local_70,puVar6);
      pcVar2 = local_38[0];
    }
  }
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_98);
  return;
}

// ---- Function: FUN_1800f6590 ----
longlong *
FUN_1800f6590(longlong *param_1,int32_t *param_2,int32_t *param_3,longlong *param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  sbyte sVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  byte *pbVar15;
  char cVar16;
  byte *pbVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  longlong local_50;
  
  puVar2 = (uint *)*param_3;
  puVar3 = (uint *)*param_2;
  if ((puVar3 == puVar2) && (param_2[1] == param_3[1])) {
    lVar18 = param_4[1];
    *param_1 = *param_4;
    param_1[1] = lVar18;
    return param_1;
  }
  uVar13 = param_2[1];
  puVar1 = (ulonglong *)(param_1 + 1);
  lVar8 = param_4[1];
  lVar18 = param_3[1];
  puVar4 = (uint *)*param_4;
  lVar11 = (((longlong)puVar2 - (longlong)puVar3 >> 2) * 0x20 - uVar13) + lVar18;
  *param_1 = *param_4;
  param_1[1] = lVar8;
  if ((lVar11 < 0) && (*puVar1 < (ulonglong)-lVar11)) {
    uVar20 = *puVar1 + lVar11;
    *puVar1 = uVar20;
    *param_1 = *param_1 + (~uVar20 >> 5) * -4 + -4;
    local_50 = *param_1;
  }
  else {
    *puVar1 = *puVar1 + lVar11;
    uVar20 = *puVar1;
    *param_1 = *param_1 + (uVar20 >> 5) * 4;
    local_50 = *param_1;
  }
  uVar19 = (uint)uVar20 & 0x1f;
  uVar9 = (ulonglong)uVar19;
  *puVar1 = uVar9;
  uVar20 = param_4[1];
  bVar5 = (byte)uVar13;
  uVar14 = -1 << (bVar5 & 0x1f);
  cVar16 = (char)uVar20;
  if (uVar20 == 0) {
    uVar24 = 0;
  }
  else {
    uVar24 = 0xffffffff >> (-cVar16 & 0x1fU);
  }
  uVar10 = 0xffffffff >> (-(char)lVar18 & 0x1fU);
  sVar6 = (sbyte)uVar19;
  uVar19 = -1 << sVar6;
  lVar8 = 0;
  if (uVar9 == 0) {
    lVar8 = -4;
  }
  if (puVar3 == puVar2) {
    bVar7 = cVar16 - bVar5;
    if (uVar20 < uVar13) {
      bVar7 = bVar5 - cVar16;
    }
    uVar23 = uVar10 & uVar14 & *puVar3;
    uVar22 = uVar23 >> (bVar7 & 0x1f);
    if (uVar13 <= uVar20) {
      uVar22 = uVar23 << (bVar7 & 0x1f);
    }
    if (puVar4 != (uint *)(lVar8 + local_50)) {
      *puVar4 = *puVar4 & uVar24 | uVar22;
      puVar4[1] = (*puVar3 & uVar10 & uVar14) >> (*(char *)(param_3 + 1) - sVar6 & 0x1fU) |
                  puVar4[1] & uVar19;
      return param_1;
    }
    if (uVar9 == 0) {
      uVar19 = 0;
    }
    uVar22 = (uVar19 | uVar24) & *puVar4 | uVar22;
  }
  else {
    if (puVar4 == (uint *)(lVar8 + local_50)) {
      bVar7 = cVar16 - bVar5;
      if (uVar20 < uVar13) {
        bVar7 = bVar5 - cVar16;
      }
      uVar22 = (uVar14 & *puVar3) >> (bVar7 & 0x1f);
      if (uVar13 <= uVar20) {
        uVar22 = (uVar14 & *puVar3) << (bVar7 & 0x1f);
      }
      if (uVar9 == 0) {
        uVar19 = 0;
      }
      uVar14 = (uVar19 | uVar24) & *puVar4;
      if (param_3[1] != 0) {
        *puVar4 = (*puVar2 & uVar10) << (sVar6 - (char)param_3[1] & 0x1fU) | uVar14 | uVar22;
        return param_1;
      }
      *puVar4 = uVar14 | uVar22;
      return param_1;
    }
    uVar22 = (uint)uVar13 & 7;
    uVar12 = (ulonglong)uVar22;
    uVar9 = (ulonglong)((uint)uVar20 & 7);
    if (uVar12 == uVar9) {
      uVar14 = (uint)lVar18 & 7;
      pbVar15 = (byte *)((uVar13 - uVar12 >> 3) + (longlong)puVar3);
      pbVar17 = (byte *)((uVar20 - uVar9 >> 3) + (longlong)puVar4);
      pbVar25 = (byte *)((lVar18 - (ulonglong)uVar14 >> 3) + (longlong)puVar2);
      if (uVar12 != 0) {
        sVar6 = (sbyte)uVar22;
        bVar5 = *pbVar15;
        pbVar15 = pbVar15 + 1;
        *pbVar17 = (byte)(0xff >> (8U - sVar6 & 0x1f)) & *pbVar17 | -1 << sVar6 & bVar5;
        pbVar17 = pbVar17 + 1;
      }
      uVar13 = (longlong)pbVar25 - (longlong)pbVar15;
      FUN_180150fd0((int32_t *)pbVar17,(int32_t *)pbVar15,uVar13);
      if ((ulonglong)uVar14 == 0) {
        return param_1;
      }
      pbVar17[uVar13] =
           (byte)(0xff >> (8U - (sbyte)uVar14 & 0x1f)) & *pbVar25 |
           -1 << (sbyte)uVar14 & pbVar17[uVar13];
      return param_1;
    }
    puVar21 = puVar3 + 1;
    if (uVar20 < uVar13) {
      uVar20 = param_2[1] - uVar20;
      bVar5 = (byte)uVar20;
      uVar22 = 0xffffffff >> (bVar5 & 0x1f);
      uVar14 = (*puVar3 & uVar14) >> (bVar5 & 0x1f) | uVar24 & *puVar4;
      *puVar4 = uVar14;
      for (; puVar21 != puVar2; puVar21 = puVar21 + 1) {
        *puVar4 = uVar14 & uVar22 | *puVar21 << (0x20 - bVar5 & 0x1f);
        puVar4 = puVar4 + 1;
        uVar14 = *puVar4 & ~uVar22 | *puVar21 >> (bVar5 & 0x1f);
        *puVar4 = uVar14;
      }
      uVar13 = param_3[1];
      if (uVar13 == 0) {
        return param_1;
      }
      uVar14 = (*puVar21 & uVar10) << (0x20 - bVar5 & 0x1f);
      if (uVar13 < uVar20) {
        *puVar4 = (uVar22 | uVar19) & *puVar4 | uVar14;
        return param_1;
      }
      *puVar4 = *puVar4 & uVar22 | uVar14;
      if (uVar13 == uVar20) {
        return param_1;
      }
      puVar4[1] = (*puVar21 & uVar10) >> (bVar5 & 0x1f) | puVar4[1] & uVar19;
      return param_1;
    }
    lVar18 = uVar20 - param_2[1];
    uVar13 = 0x20 - lVar18;
    bVar5 = (byte)lVar18;
    *puVar4 = (*puVar3 & uVar14) << (bVar5 & 0x1f) | uVar24 & *puVar4;
    bVar7 = (byte)uVar13;
    uVar22 = *puVar3 >> (bVar7 & 0x1f);
    for (; puVar4 = puVar4 + 1, puVar21 != puVar2; puVar21 = puVar21 + 1) {
      *puVar4 = *puVar21 << (bVar5 & 0x1f) | uVar22;
      uVar22 = *puVar21 >> (bVar7 & 0x1f);
    }
    uVar20 = param_3[1];
    if (uVar13 <= uVar20) {
      *puVar4 = *puVar21 << (bVar5 & 0x1f) | uVar22;
      if (uVar20 == uVar13) {
        return param_1;
      }
      puVar4[1] = *puVar21 >> (bVar7 & 0x1f) & ~uVar19 | puVar4[1] & uVar19;
      return param_1;
    }
    if (uVar20 != 0) {
      *puVar4 = (*puVar21 & uVar10) << (bVar5 & 0x1f) | uVar19 & *puVar4 | uVar22;
      return param_1;
    }
    uVar22 = uVar19 & *puVar4 | uVar22;
  }
  *puVar4 = uVar22;
  return param_1;
}

// ---- Function: FUN_1800f6a40 ----
void FUN_1800f6a40(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  ulonglong uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  longlong local_18 [2];
  
  local_38 = *param_1;
  uStack_20 = 0;
  uStack_30 = param_1[3];
  local_28 = local_38;
  if (uStack_30 != 0) {
    uVar7 = (*param_3 - local_38 >> 2) * 0x20 + param_3[1];
    if (((longlong)uVar7 < 0) && (uVar7 != 0)) {
      local_28 = -((~uVar7 >> 5) * 4 + 4);
    }
    else {
      local_28 = (uVar7 >> 5) * 4;
    }
    local_28 = local_38 + local_28;
    uStack_20 = (ulonglong)((uint)uVar7 & 0x1f);
  }
  uVar7 = (local_28 - local_38 >> 2) * 0x20 + uStack_20;
  if (((longlong)uStack_30 < 0) && (uStack_30 != 0)) {
    lVar3 = -((~uStack_30 >> 5) * 4 + 4);
  }
  else {
    lVar3 = (uStack_30 >> 5) * 4;
  }
  local_38 = local_38 + lVar3;
  uStack_30 = uStack_30 & 0x1f;
  if (uStack_20 < 0x1f) {
    lStack_40 = uStack_20 + 1;
    local_48 = local_28;
  }
  else {
    lStack_40 = 0;
    local_48 = local_28 + 4;
  }
  FUN_1800f6590(local_18,&local_48,&local_38,&local_28);
  uVar5 = param_1[3] - 1;
  if (uVar5 < 0x8000000000000000) {
    uVar6 = param_1[3] + 0x1eU >> 5;
    lVar3 = *param_1;
    if ((uVar6 < (ulonglong)(param_1[1] - lVar3 >> 2)) &&
       (lVar1 = lVar3 + uVar6 * 4, lVar1 != param_1[1])) {
      param_1[1] = lVar1;
    }
    param_1[3] = uVar5;
    if ((uVar5 & 0x1f) != 0) {
      puVar2 = (uint *)(lVar3 + -4 + uVar6 * 4);
      *puVar2 = *puVar2 & (1 << ((byte)uVar5 & 0x1f)) - 1U;
    }
    lVar3 = *param_1;
    if (((longlong)uVar7 < 0) && (uVar7 != 0)) {
      lVar1 = -((~uVar7 >> 5) * 4 + 4);
    }
    else {
      lVar1 = (uVar7 >> 5) * 4;
    }
    param_2[1] = uVar7;
    *param_2 = lVar3 + lVar1;
    param_2[1] = (ulonglong)((uint)uVar7 & 0x1f);
    return;
  }
  FUN_1800f8000();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// ---- Function: FUN_1800f6c50 ----
void FUN_1800f6c50(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong local_28;
  ulonglong local_20;
  longlong local_18 [3];
  
  uVar3 = param_1[3];
  if (((longlong)uVar3 < 0) && (uVar3 != 0)) {
    lVar2 = -((~uVar3 >> 5) * 4 + 4);
  }
  else {
    lVar2 = (uVar3 >> 5) * 4;
  }
  uVar1 = (uVar3 & 0x1f) - 1;
  local_20 = (ulonglong)((uint)uVar1 & 0x1f);
  if ((uVar3 & 0x1f) == 0) {
    local_28 = -((~uVar1 >> 5) * 4 + 4);
  }
  else {
    local_28 = (uVar1 >> 5) * 4;
  }
  local_28 = *param_1 + lVar2 + local_28;
  FUN_1800f6a40(param_1,local_18,&local_28);
  return;
}

// ---- Function: FUN_1800f6cf0 ----
int32_t * FUN_1800f6cf0(int32_t *param_1,int32_t *param_2,char *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong *plVar7;
  char cVar8;
  char local_28 [8];
  longlong local_20;
  char local_18;
  longlong local_10;
  
  uVar5 = param_1[7];
  if (((longlong)uVar5 < 0) && (uVar5 != 0)) {
    lVar2 = -((~uVar5 >> 5) * 4 + 4);
  }
  else {
    lVar2 = (uVar5 >> 5) * 4;
  }
  uVar1 = (uVar5 & 0x1f) - 1;
  if ((uVar5 & 0x1f) == 0) {
    lVar3 = -((~uVar1 >> 5) * 4 + 4);
  }
  else {
    lVar3 = (uVar1 >> 5) * 4;
  }
  if ((*(uint *)(param_1[4] + lVar2 + lVar3) >> ((byte)uVar1 & 0x1f) & 1) == 0) {
    *param_2 = 0;
    *(int32_t *)(param_2 + 8) = 0;
  }
  else {
    local_28[0] = *param_3;
    FUN_1800f8a10(&local_20,local_28[0]);
    lVar2 = local_20;
    cVar8 = local_28[0];
    if (param_1[1] == param_1[2]) {
      local_28[0] = '\0';
      local_20 = 0;
      pcVar6 = (char *)*param_1;
      local_18 = *pcVar6;
      *pcVar6 = cVar8;
      local_10 = *(longlong *)(pcVar6 + 8);
      *(longlong *)(pcVar6 + 8) = lVar2;
      FUN_1800f9a90(&local_10,local_18);
      *param_2 = 1;
      *(int32_t *)(param_2 + 8) = *param_1;
      FUN_1800f9a90(&local_20,local_28[0]);
    }
    else {
      pcVar6 = *(char **)(param_1[2] + -8);
      if (pcVar6 == (char *)0x0) {
        *param_2 = 0;
        *(int32_t *)(param_2 + 8) = 0;
        FUN_1800f9a90(&local_20,local_28[0]);
      }
      else if (*pcVar6 == '\x02') {
        plVar7 = *(longlong **)(pcVar6 + 8);
        pcVar6 = (char *)plVar7[1];
        if (pcVar6 == (char *)plVar7[2]) {
          FUN_1800f9810(plVar7,pcVar6,local_28);
        }
        else {
          *pcVar6 = local_28[0];
          *(longlong *)(pcVar6 + 8) = local_20;
          local_28[0] = '\0';
          local_20 = 0;
          plVar7[1] = plVar7[1] + 0x10;
        }
        *param_2 = 1;
        *(longlong *)(param_2 + 8) =
             *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
        FUN_1800f9a90(&local_20,local_28[0]);
      }
      else {
        uVar5 = param_1[0xb];
        if (((longlong)uVar5 < 0) && (uVar5 != 0)) {
          lVar2 = -((~uVar5 >> 5) * 4 + 4);
        }
        else {
          lVar2 = (uVar5 >> 5) * 4;
        }
        uVar1 = (uVar5 & 0x1f) - 1;
        if ((uVar5 & 0x1f) == 0) {
          lVar3 = -((~uVar1 >> 5) * 4 + 4);
        }
        else {
          lVar3 = (uVar1 >> 5) * 4;
        }
        uVar4 = *(uint *)(param_1[8] + lVar2 + lVar3);
        FUN_1800f6c50(param_1 + 8);
        lVar2 = local_20;
        cVar8 = local_28[0];
        if ((1 << ((byte)uVar1 & 0x1f) & uVar4) == 0) {
          *param_2 = 0;
          *(int32_t *)(param_2 + 8) = 0;
          FUN_1800f9a90(&local_20,local_28[0]);
        }
        else {
          local_28[0] = '\0';
          local_20 = 0;
          pcVar6 = (char *)param_1[0xc];
          local_18 = *pcVar6;
          *pcVar6 = cVar8;
          local_10 = *(longlong *)(pcVar6 + 8);
          *(longlong *)(pcVar6 + 8) = lVar2;
          FUN_1800f9a90(&local_10,local_18);
          *param_2 = 1;
          *(int32_t *)(param_2 + 8) = param_1[0xc];
          FUN_1800f9a90(&local_20,local_28[0]);
        }
      }
    }
  }
  return param_2;
}

// ---- Function: FUN_1800f6f90 ----
longlong FUN_1800f6f90(int32_t *param_1)

{
  switch(*param_1) {
  case 0:
    return 0;
  case 1:
    return *(longlong *)(*(longlong *)(param_1 + 8) + 8);
  case 2:
    return (*(longlong **)(param_1 + 8))[1] - **(longlong **)(param_1 + 8) >> 4;
  default:
    return 1;
  }
}

// ---- Function: FUN_1800f7000 ----
void FUN_1800f7000(int32_t *param_1)

{
  param_1[4] = std::exception::vftable;
  __std_exception_destroy(param_1 + 5);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}

// ---- Function: FUN_1800f7040 ----
int32_t * FUN_1800f7040(int32_t *param_1,uint param_2)

{
  param_1[4] = std::exception::vftable;
  __std_exception_destroy(param_1 + 5);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_18012d5e8(param_1);
  }
  return param_1;
}

// ---- Function: FUN_1800f70a0 ----
int32_t * FUN_1800f70a0(int32_t *param_1,longlong param_2)

{
  FUN_1800f9190(param_1,param_2);
  *param_1 = &PTR_FUN_1801d69e0;
  return param_1;
}

// ---- Function: FUN_1800f70d0 ----
void FUN_1800f70d0(longlong param_1,int *param_2,int *param_3,longlong *param_4,longlong *param_5,
                  ulonglong *param_6)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  iVar9 = 1;
  uVar10 = 1000000000;
  uVar5 = *param_6;
  uVar14 = uVar5 - *param_4;
  bVar3 = -(char)(int)param_6[1];
  uVar11 = uVar5 - *param_5;
  uVar13 = 1L << (bVar3 & 0x3f);
  uVar8 = uVar5 >> (bVar3 & 0x3f);
  uVar5 = uVar5 & uVar13 - 1;
  uVar7 = (uint)uVar8;
  if (uVar7 < 1000000000) {
    uVar10 = 100000000;
    if (uVar7 < 100000000) {
      uVar10 = 10000000;
      if (uVar7 < 10000000) {
        uVar10 = 1000000;
        if (uVar7 < 1000000) {
          uVar10 = 100000;
          if (uVar7 < 100000) {
            uVar10 = 10000;
            if (uVar7 < 10000) {
              uVar10 = 1000;
              if (uVar7 < 1000) {
                if (uVar7 < 100) {
                  if (uVar7 < 10) {
                    uVar10 = 1;
                    iVar12 = 1;
                  }
                  else {
                    uVar10 = 10;
                    iVar12 = 2;
                  }
                }
                else {
                  uVar10 = 100;
                  iVar12 = 3;
                }
              }
              else {
                iVar12 = 4;
              }
            }
            else {
              iVar12 = 5;
            }
          }
          else {
            iVar12 = 6;
          }
        }
        else {
          iVar12 = 7;
        }
      }
      else {
        iVar12 = 8;
      }
    }
    else {
      iVar12 = 9;
    }
  }
  else {
    iVar12 = 10;
  }
  do {
    iVar2 = *param_2;
    uVar6 = uVar8 & 0xffffffff;
    uVar8 = uVar6 % (ulonglong)uVar10;
    iVar12 = iVar12 + -1;
    *(char *)(iVar2 + param_1) = (char)(uVar6 / uVar10) + '0';
    uVar6 = (uVar8 << (bVar3 & 0x3f)) + uVar5;
    *param_2 = iVar2 + 1;
    if (uVar6 <= uVar14) {
      *param_3 = *param_3 + iVar12;
      uVar5 = (ulonglong)uVar10 << (bVar3 & 0x3f);
      while( true ) {
        if (uVar11 <= uVar6) {
          return;
        }
        if (uVar14 - uVar6 < uVar5) break;
        if ((uVar11 <= uVar6 + uVar5) && (uVar11 - uVar6 <= (uVar6 - uVar11) + uVar5)) {
          return;
        }
        pcVar1 = (char *)(param_1 + iVar2);
        *pcVar1 = *pcVar1 + -1;
        uVar6 = uVar6 + uVar5;
      }
      return;
    }
    uVar10 = uVar10 / 10;
  } while (0 < iVar12);
  uVar5 = uVar5 * 10;
  iVar12 = iVar2 + 2;
  *param_2 = iVar12;
  uVar8 = uVar5 & uVar13 - 1;
  uVar14 = uVar14 * 10;
  uVar11 = uVar11 * 10;
  *(char *)((iVar2 + 1) + param_1) = (char)(uVar5 >> (bVar3 & 0x3f)) + '0';
  if (uVar14 < uVar8) {
    do {
      uVar5 = uVar8 * 10;
      uVar8 = uVar5 & uVar13 - 1;
      lVar4 = (longlong)iVar12;
      iVar12 = iVar12 + 1;
      iVar9 = iVar9 + 1;
      uVar14 = uVar14 * 10;
      uVar11 = uVar11 * 10;
      *(char *)(lVar4 + param_1) = (char)(uVar5 >> (bVar3 & 0x3f)) + '0';
    } while (uVar14 < uVar8);
    *param_2 = iVar12;
  }
  *param_3 = *param_3 - iVar9;
  if (uVar8 < uVar11) {
    while (uVar13 <= uVar14 - uVar8) {
      uVar5 = uVar13 + uVar8;
      if ((uVar11 <= uVar5) && (uVar11 - uVar8 <= (uVar13 - uVar11) + uVar8)) {
        return;
      }
      pcVar1 = (char *)((longlong)iVar12 + -1 + param_1);
      *pcVar1 = *pcVar1 + -1;
      uVar8 = uVar5;
      if (uVar11 <= uVar5) {
        return;
      }
    }
  }
  return;
}

