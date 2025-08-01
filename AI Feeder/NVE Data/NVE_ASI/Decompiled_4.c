#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800a8c80 ----
void FUN_1800a8c80(longlong *param_1)

{
  int32_t *puVar1;
  int32_t *puVar2;
  
  puVar1 = (int32_t *)*param_1;
  *(int32_t *)puVar1[1] = 0;
  puVar1 = (int32_t *)*puVar1;
  while (puVar1 != (int32_t *)0x0) {
    puVar2 = (int32_t *)*puVar1;
    thunk_FUN_18012d5e8(puVar1);
    puVar1 = puVar2;
  }
  thunk_FUN_18012d5e8((LPVOID)*param_1);
  return;
}

// ---- Function: FUN_1800a8ce0 ----
void FUN_1800a8ce0(longlong *param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  pvVar1 = (LPVOID)*param_1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar1) / 0xc) * 0xc)) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

// ---- Function: FUN_1800a8d60 ----
char * FUN_1800a8d60(char *param_1)

{
  int iVar1;
  
  iVar1 = ((*(int *)(param_1 + 8) + -0x47) * 7) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0xc) + -0x47) * 7) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x10) + -0x47) * 7) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x14) + -0x47) * 7) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x18) + -0x47) * 7) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[5] = '\0';
  return param_1;
}

// ---- Function: FUN_1800a8f50 ----
void FUN_1800a8f50(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_1800a9420(param_1,param_1,(longlong *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    thunk_FUN_18012d5e8(plVar3);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  thunk_FUN_18012d5e8((LPVOID)*param_1);
  return;
}

// ---- Function: FUN_1800a8fb0 ----
void FUN_1800a8fb0(longlong *param_1)

{
  int32_t *puVar1;
  int32_t *puVar2;
  LPVOID pvVar3;
  code *pcVar4;
  
  puVar1 = (int32_t *)*param_1;
  *(int32_t *)puVar1[1] = 0;
  puVar1 = (int32_t *)*puVar1;
  while (puVar1 != (int32_t *)0x0) {
    puVar2 = (int32_t *)*puVar1;
    FUN_1800a6c20((longlong)(puVar1 + 3));
    if (0x1f < (ulonglong)((longlong)puVar1 + (-8 - (longlong)puVar1[-1]))) goto LAB_1800a903c;
    thunk_FUN_18012d5e8((LPVOID)puVar1[-1]);
    puVar1 = puVar2;
  }
  pvVar3 = *(LPVOID *)(*param_1 + -8);
  if ((*param_1 - (longlong)pvVar3) - 8U < 0x20) {
    thunk_FUN_18012d5e8(pvVar3);
    return;
  }
LAB_1800a903c:
  FUN_18012b7b4();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// ---- Function: FUN_1800a9050 ----
int32_t * FUN_1800a9050(int32_t *param_1,int32_t *param_2)

{
  void *pvVar1;
  
  *param_1 = *param_2;
  *(int32_t *)(param_1 + 2) = 0;
  *(int32_t *)(param_1 + 4) = 0;
  pvVar1 = operator_new(0x20);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)(param_1 + 2) = pvVar1;
  *(ulonglong *)(param_1 + 6) = 0;
  *(int32_t *)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 10) = 0;
  *(int32_t *)(param_1 + 0xc) = 7;
  *(int32_t *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  FUN_1800a9140((ulonglong *)(param_1 + 6),0x10,*(int32_t *)(param_1 + 2));
  return param_1;
}

// ---- Function: FUN_1800a90d0 ----
void FUN_1800a90d0(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = DAT_1801fb118;
  cVar1 = *(char *)((longlong)*(longlong **)(DAT_1801fb118 + 8) + 0x19);
  plVar3 = *(longlong **)(DAT_1801fb118 + 8);
  while (cVar1 == '\0') {
    FUN_1800a9420(&DAT_1801fb118,&DAT_1801fb118,(longlong *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    thunk_FUN_18012d5e8(plVar3);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 0x10) = lVar4;
  DAT_1801fb120 = 0;
  return;
}

// ---- Function: FUN_1800a9140 ----
void FUN_1800a9140(ulonglong *param_1,ulonglong param_2,int32_t param_3)

{
  int32_t *puVar1;
  LPVOID pvVar2;
  code *pcVar3;
  void *pvVar4;
  longlong lVar5;
  LPVOID pvVar6;
  ulonglong uVar7;
  int32_t *puVar8;
  
  puVar8 = (int32_t *)*param_1;
  lVar5 = (longlong)param_1[1] - (longlong)puVar8;
  if ((ulonglong)(lVar5 >> 3) < param_2) {
    if (0x1fffffffffffffff < param_2) {
LAB_1800a9282:
      FUN_1800ba8a0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar7 = param_2 * 8;
    if (uVar7 == 0) {
      puVar8 = (int32_t *)0x0;
    }
    else if (uVar7 < 0x1000) {
      puVar8 = (int32_t *)operator_new(uVar7);
    }
    else {
      if (uVar7 + 0x27 <= uVar7) goto LAB_1800a9282;
      pvVar4 = operator_new(uVar7 + 0x27);
      if (pvVar4 == (void *)0x0) goto LAB_1800a9288;
      puVar8 = (int32_t *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
      puVar8[-1] = pvVar4;
    }
    pvVar2 = (LPVOID)*param_1;
    lVar5 = (longlong)(param_1[2] - (longlong)pvVar2) >> 3;
    if (lVar5 != 0) {
      pvVar6 = pvVar2;
      if ((0xfff < (ulonglong)(lVar5 * 8)) &&
         (pvVar6 = *(LPVOID *)((longlong)pvVar2 - 8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6)))) {
LAB_1800a9288:
        FUN_18012b7b4();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      thunk_FUN_18012d5e8(pvVar6);
    }
    puVar1 = puVar8 + param_2;
    *param_1 = (ulonglong)puVar8;
    param_1[1] = (ulonglong)puVar1;
    param_1[2] = (ulonglong)puVar1;
    for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
      *puVar8 = param_3;
    }
  }
  else {
    uVar7 = lVar5 + 7U >> 3;
    if ((int32_t *)param_1[1] < puVar8) {
      uVar7 = 0;
    }
    if (uVar7 != 0) {
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar8 = param_3;
        puVar8 = puVar8 + 1;
      }
      return;
    }
  }
  return;
}

// ---- Function: FUN_1800a9290 ----
int32_t *
FUN_1800a9290(int32_t *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int32_t *puVar7;
  int32_t local_res20;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_68 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_78 = *param_3;
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plStack_70 = plVar5;
  plStack_60 = plVar4;
  local_58 = local_68;
  local_50 = plVar4;
  local_48 = local_78;
  local_40 = plVar5;
  puVar7 = (int32_t *)FUN_1800a9510(&local_res20,&local_68,&local_78,param_4);
  *param_1 = *puVar7;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return param_1;
}

// ---- Function: FUN_1800a9420 ----
void FUN_1800a9420(int32_t param_1,int32_t param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800a9420(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    thunk_FUN_18012d5e8(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

// ---- Function: FUN_1800a9480 ----
void FUN_1800a9480(int32_t *param_1,int32_t *param_2,int32_t *param_3)

{
  int32_t uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  
  uVar3 = (ulonglong)((longlong)param_2 + (7 - (longlong)param_1)) >> 3;
  if (param_2 < param_1) {
    uVar3 = 0;
  }
  if ((uVar3 != 0) && (1 < uVar3)) {
    uVar1 = *param_3;
    if ((param_3 < param_1) || (param_1 + (uVar3 - 1) < param_3)) {
      puVar4 = param_1;
      for (uVar2 = uVar3 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      param_1 = param_1 + (uVar3 & 0xfffffffffffffffe);
    }
  }
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// ---- Function: FUN_1800a9510 ----
void FUN_1800a9510(int32_t *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int32_t *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  int32_t *puVar5;
  longlong *plVar6;
  code *pcVar7;
  longlong lVar8;
  DWORD DVar9;
  HANDLE pvVar10;
  int32_t auStack_2c8 [32];
  longlong *local_2a8;
  longlong *local_2a0;
  _WIN32_FIND_DATAW local_298;
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStack_2c8;
  local_2a8 = param_2;
  local_2a0 = param_3;
LAB_1800a9552:
  do {
    if (*param_2 == *param_3) {
      *param_1 = param_4;
      plVar6 = (longlong *)param_2[1];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
        }
      }
      plVar6 = (longlong *)param_3[1];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
        }
      }
      FUN_1801252c0(local_48 ^ (ulonglong)auStack_2c8);
      return;
    }
    puVar1 = (int32_t *)(*param_2 + 0x20);
    puVar5 = (int32_t *)param_4[1];
    if (puVar5 == (int32_t *)param_4[2]) {
      FUN_1800aa140(param_4,puVar5,puVar1);
    }
    else {
      FUN_1800b9f10(puVar5,puVar1);
      param_4[1] = param_4[1] + 0x20;
    }
    puVar1 = (int32_t *)*param_2;
    do {
      pvVar10 = (HANDLE)puVar1[8];
      DVar9 = FUN_1801235d8(pvVar10,&local_298);
      if (DVar9 == 0x12) {
        *param_2 = 0;
        plVar6 = (longlong *)param_2[1];
        param_2[1] = 0;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar3 = (int *)((longlong)plVar6 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          }
        }
        goto LAB_1800a9552;
      }
      if (DVar9 != 0) {
        FUN_1800aad20(pvVar10,DVar9);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    } while ((local_298.cFileName[0] == L'.') &&
            ((local_298.cFileName[1] == L'\0' ||
             ((local_298.cFileName[1] == L'.' && (local_298.cFileName[2] == L'\0'))))));
    FUN_1800b8810(puVar1,&local_298.dwFileAttributes);
  } while( true );
}

// ---- Function: FUN_1800a96c0 ----
void FUN_1800a96c0(int32_t param_1,int32_t param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800a96c0(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    thunk_FUN_18012d5e8(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

// ---- Function: FUN_1800a9720 ----
void FUN_1800a9720(int32_t param_1,int32_t param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  LPVOID pvVar3;
  code *pcVar4;
  LPVOID pvVar5;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_1800a9720(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    pvVar3 = (LPVOID)param_3[5];
    if (pvVar3 != (LPVOID)0x0) {
      pvVar5 = pvVar3;
      if ((0xfff < (param_3[7] - (longlong)pvVar3 & 0xffffffffffffffe0U)) &&
         (pvVar5 = *(LPVOID *)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar5)))) {
        FUN_18012b7b4();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      thunk_FUN_18012d5e8(pvVar5);
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
    }
    thunk_FUN_18012d5e8(param_3);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_3 = plVar2;
  } while( true );
}

// ---- Function: FUN_1800a97e0 ----
void FUN_1800a97e0(int32_t param_1,int32_t param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  LPVOID pvVar3;
  code *pcVar4;
  LPVOID pvVar5;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_1800a97e0(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    pvVar3 = (LPVOID)param_3[5];
    if (pvVar3 != (LPVOID)0x0) {
      pvVar5 = pvVar3;
      if ((0xfff < (ulonglong)(((param_3[7] - (longlong)pvVar3) / 0x18) * 0x18)) &&
         (pvVar5 = *(LPVOID *)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar5)))) {
        FUN_18012b7b4();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      thunk_FUN_18012d5e8(pvVar5);
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
    }
    thunk_FUN_18012d5e8(param_3);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_3 = plVar2;
  } while( true );
}

// ---- Function: FUN_1800a98d0 ----
void FUN_1800a98d0(ulonglong *param_1,ulonglong *param_2,longlong param_3,int32_t param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int32_t auStack_98 [32];
  int32_t local_78;
  ulonglong *local_68;
  ulonglong *puStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStack_98;
  uVar2 = (longlong)param_2 - (longlong)param_1;
  do {
    if ((longlong)(uVar2 & 0xffffffffffffffe0) < 0x401) {
      FUN_1800a9ae0(param_1,param_2);
LAB_1800a9aad:
      FUN_1801252c0(local_48 ^ (ulonglong)auStack_98);
      return;
    }
    if (param_3 < 1) {
      uVar2 = (longlong)param_2 - (longlong)param_1 >> 5;
      lVar4 = (longlong)param_2 - (longlong)param_1 >> 6;
      if (0 < lVar4) {
        puVar3 = param_1 + lVar4 * 4;
        do {
          local_68 = (ulonglong *)puVar3[-4];
          puStack_60 = (ulonglong *)puVar3[-3];
          lVar4 = lVar4 + -1;
          local_58 = puVar3[-2];
          uStack_50 = puVar3[-1];
          *(int32_t *)(puVar3 + -4) = 0;
          puVar3[-2] = 0;
          puVar3[-1] = 7;
          local_78 = param_4;
          FUN_1800aa4a0((longlong)param_1,lVar4,uVar2,(uint *)&local_68);
          FUN_1800ba040((longlong *)&local_68);
          puVar3 = puVar3 + -4;
        } while (0 < lVar4);
      }
      if (1 < (longlong)uVar2) {
        puVar3 = param_2 + -4;
        do {
          local_68 = (ulonglong *)*puVar3;
          puStack_60 = (ulonglong *)puVar3[1];
          local_58 = puVar3[2];
          uStack_50 = puVar3[3];
          *(int32_t *)puVar3 = 0;
          puVar3[2] = 0;
          puVar3[3] = 7;
          FUN_1800b7d30((longlong *)puVar3,(longlong *)param_1);
          local_78 = param_4;
          FUN_1800aa4a0((longlong)param_1,0,(longlong)puVar3 - (longlong)param_1 >> 5,
                        (uint *)&local_68);
          FUN_1800ba040((longlong *)&local_68);
          puVar3 = puVar3 + -4;
        } while (0x3f < (longlong)
                        ((0x20 - (longlong)param_1) + (longlong)puVar3 & 0xffffffffffffffe0U));
      }
      goto LAB_1800a9aad;
    }
    FUN_1800a9d30(&local_68,(uint *)param_1,(uint *)param_2);
    puVar1 = puStack_60;
    puVar3 = local_68;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_68 - (longlong)param_1 & 0xffffffffffffffe0U) <
        (longlong)((longlong)param_2 - (longlong)puStack_60 & 0xffffffffffffffe0U)) {
      FUN_1800a98d0(param_1,local_68,param_3,param_4);
      puVar3 = param_2;
      param_1 = puVar1;
    }
    else {
      FUN_1800a98d0(puStack_60,param_2,param_3,param_4);
    }
    uVar2 = (longlong)puVar3 - (longlong)param_1;
    param_2 = puVar3;
  } while( true );
}

// ---- Function: FUN_1800a9ae0 ----
void FUN_1800a9ae0(ulonglong *param_1,ulonglong *param_2)

{
  LPVOID pvVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  LPVOID pvVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  int32_t auStack_98 [32];
  ulonglong *local_78;
  ulonglong local_70;
  ulonglong *local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar4 = _UNK_1801d8f68;
  uVar3 = _DAT_1801d8f60;
  local_38 = DAT_1801eb080 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    for (puVar9 = param_1 + 4; puVar9 != param_2; puVar9 = puVar9 + 4) {
      local_58 = *puVar9;
      uStack_50 = puVar9[1];
      local_48 = puVar9[2];
      uStack_40 = puVar9[3];
      *(int32_t *)puVar9 = 0;
      puVar9[2] = 0;
      puVar9[3] = 7;
      local_78 = param_1;
      if (7 < param_1[3]) {
        local_78 = (ulonglong *)*param_1;
      }
      local_70 = param_1[2];
      iVar5 = FUN_1800aa740((uint *)&local_58,&local_78);
      puVar7 = puVar9;
      if ((iVar5 == 0) || (-1 < iVar5)) {
        while( true ) {
          puVar8 = puVar7 + -4;
          local_68 = puVar8;
          if (7 < puVar7[-1]) {
            local_68 = (ulonglong *)puVar7[-4];
          }
          local_60 = puVar7[-2];
          iVar5 = FUN_1800aa740((uint *)&local_58,&local_68);
          if ((iVar5 == 0) || (-1 < iVar5)) break;
          FUN_1800b7d30((longlong *)puVar7,(longlong *)puVar8);
          puVar7 = puVar8;
        }
        if (puVar7 != &local_58) {
          if (7 < puVar7[3]) {
            pvVar1 = (LPVOID)*puVar7;
            pvVar6 = pvVar1;
            if ((0xfff < puVar7[3] * 2 + 2) &&
               (pvVar6 = *(LPVOID *)((longlong)pvVar1 - 8),
               0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6)))) goto LAB_1800a9d23;
            thunk_FUN_18012d5e8(pvVar6);
          }
          *puVar7 = local_58;
          puVar7[1] = uStack_50;
          puVar7[2] = local_48;
          puVar7[3] = uStack_40;
          goto LAB_1800a9cce;
        }
      }
      else {
        while (puVar7 != param_1) {
          FUN_1800b7d30((longlong *)puVar7,(longlong *)(puVar7 + -4));
          puVar7 = puVar7 + -4;
        }
        if (param_1 != &local_58) {
          if (7 < param_1[3]) {
            pvVar1 = (LPVOID)*param_1;
            pvVar6 = pvVar1;
            if ((0xfff < param_1[3] * 2 + 2) &&
               (pvVar6 = *(LPVOID *)((longlong)pvVar1 - 8),
               0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6)))) {
LAB_1800a9d23:
              FUN_18012b7b4();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            thunk_FUN_18012d5e8(pvVar6);
          }
          *param_1 = local_58;
          param_1[1] = uStack_50;
          param_1[2] = local_48;
          param_1[3] = uStack_40;
LAB_1800a9cce:
          local_58 = local_58 & 0xffffffffffff0000;
          local_48 = uVar3;
          uStack_40 = uVar4;
        }
      }
      FUN_1800ba040((longlong *)&local_58);
    }
  }
  FUN_1801252c0(local_38 ^ (ulonglong)auStack_98);
  return;
}

