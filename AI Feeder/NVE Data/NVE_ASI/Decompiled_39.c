#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800f9710 ----
void FUN_1800f9710(int32_t *param_1)

{
  int32_t *puVar1;
  int32_t *puVar2;
  
  puVar1 = (int32_t *)param_1[1];
  for (puVar2 = (int32_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0x10) {
    FUN_1800f9ec0(puVar2);
  }
  return;
}

// ---- Function: FUN_1800f9750 ----
void FUN_1800f9750(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int32_t *puVar1;
  LPVOID pvVar2;
  code *pcVar3;
  LPVOID pvVar4;
  int32_t *puVar5;
  
  puVar5 = (int32_t *)*param_1;
  if (puVar5 != (int32_t *)0x0) {
    puVar1 = (int32_t *)param_1[1];
    for (; puVar5 != puVar1; puVar5 = puVar5 + 0x10) {
      FUN_1800f9ec0(puVar5);
    }
    pvVar2 = (LPVOID)*param_1;
    pvVar4 = pvVar2;
    if ((0xfff < (param_1[2] - (longlong)pvVar2 & 0xfffffffffffffff0U)) &&
       (pvVar4 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar4);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x10 + param_2;
  param_1[2] = param_4 * 0x10 + param_2;
  return;
}

// ---- Function: FUN_1800f9810 ----
int32_t * FUN_1800f9810(longlong *param_1,int32_t *param_2,int32_t *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int32_t *puVar3;
  code *pcVar4;
  int32_t *puVar5;
  longlong lVar6;
  void *pvVar7;
  int32_t *puVar8;
  ulonglong uVar9;
  __uint64 _Var10;
  int32_t *puVar11;
  ulonglong uVar12;
  int32_t *puVar13;
  
  lVar2 = *param_1;
  lVar6 = param_1[1] - lVar2 >> 4;
  if (lVar6 == 0xfffffffffffffff) {
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
LAB_1800f99d9:
  FUN_1800ba8a0();
  pcVar4 = (code *)swi(3);
  puVar13 = (int32_t *)(*pcVar4)();
  return puVar13;
}

// ---- Function: FUN_1800f99f0 ----
void FUN_1800f99f0(longlong *param_1)

{
  int32_t *puVar1;
  LPVOID pvVar2;
  code *pcVar3;
  LPVOID pvVar4;
  int32_t *puVar5;
  
  puVar5 = (int32_t *)*param_1;
  if (puVar5 != (int32_t *)0x0) {
    puVar1 = (int32_t *)param_1[1];
    for (; puVar5 != puVar1; puVar5 = puVar5 + 0x10) {
      FUN_1800f9ec0(puVar5);
    }
    pvVar2 = (LPVOID)*param_1;
    pvVar4 = pvVar2;
    if ((0xfff < (param_1[2] - (longlong)pvVar2 & 0xfffffffffffffff0U)) &&
       (pvVar4 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

// ---- Function: FUN_1800f9a90 ----
void FUN_1800f9a90(longlong *param_1,char param_2)

{
  char cVar1;
  ulonglong uVar2;
  int32_t *puVar3;
  longlong *plVar4;
  longlong lVar5;
  LPVOID pvVar6;
  code *pcVar7;
  longlong *plVar8;
  LPVOID pvVar9;
  int32_t *puVar10;
  longlong *plVar11;
  char local_48 [8];
  longlong *local_40;
  int32_t *local_38;
  int32_t *puStack_30;
  int32_t *local_28;
  
  if ((byte)(param_2 - 1U) < 2) {
    local_38 = (int32_t *)0x0;
    puStack_30 = (int32_t *)0x0;
    local_28 = (int32_t *)0x0;
    uVar2 = ((longlong *)*param_1)[1];
    if (param_2 == '\x02') {
      FUN_1800f9570((longlong *)&local_38,(longlong)(uVar2 - *(longlong *)*param_1) >> 4);
      puVar3 = (int32_t *)((int32_t *)*param_1)[1];
      for (puVar10 = *(int32_t **)*param_1; puVar10 != puVar3; puVar10 = puVar10 + 0x10) {
        if (puStack_30 == local_28) {
          FUN_1800f9810((longlong *)&local_38,puStack_30,puVar10);
        }
        else {
          *puStack_30 = *puVar10;
          *(int32_t *)(puStack_30 + 8) = *(int32_t *)(puVar10 + 8);
          *puVar10 = 0;
          *(int32_t *)(puVar10 + 8) = 0;
          puStack_30 = puStack_30 + 0x10;
        }
      }
    }
    else {
      FUN_1800f9570((longlong *)&local_38,uVar2);
      plVar11 = (longlong *)**(longlong **)*param_1;
      cVar1 = *(char *)((longlong)plVar11 + 0x19);
      while (cVar1 == '\0') {
        plVar4 = plVar11 + 8;
        if (puStack_30 == local_28) {
          FUN_1800f9810((longlong *)&local_38,puStack_30,(int32_t *)plVar4);
        }
        else {
          *puStack_30 = (char)*plVar4;
          *(longlong *)(puStack_30 + 8) = plVar11[9];
          *(int32_t *)plVar4 = 0;
          plVar11[9] = 0;
          puStack_30 = puStack_30 + 0x10;
        }
        plVar4 = (longlong *)plVar11[2];
        if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x19);
          plVar11 = plVar4;
          plVar4 = (longlong *)*plVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x19);
            plVar11 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar1 = *(char *)(plVar11[1] + 0x19);
          plVar8 = (longlong *)plVar11[1];
          plVar4 = plVar11;
          while ((plVar11 = plVar8, cVar1 == '\0' && (plVar4 == (longlong *)plVar11[2]))) {
            cVar1 = *(char *)(plVar11[1] + 0x19);
            plVar8 = (longlong *)plVar11[1];
            plVar4 = plVar11;
          }
        }
        cVar1 = *(char *)((longlong)plVar11 + 0x19);
      }
    }
    if (local_38 != puStack_30) {
      do {
        local_48[0] = puStack_30[-0x10];
        local_40 = *(longlong **)(puStack_30 + -8);
        puStack_30[-0x10] = 0;
        *(int32_t *)(puStack_30 + -8) = 0;
        FUN_1800f9ec0(puStack_30 + -0x10);
        puStack_30 = puStack_30 + -0x10;
        if (local_48[0] == '\x02') {
          puVar3 = (int32_t *)local_40[1];
          plVar11 = local_40;
          for (puVar10 = (int32_t *)*local_40; local_40 = plVar11, puVar10 != puVar3;
              puVar10 = puVar10 + 0x10) {
            if (puStack_30 == local_28) {
              FUN_1800f9810((longlong *)&local_38,puStack_30,puVar10);
            }
            else {
              *puStack_30 = *puVar10;
              *(int32_t *)(puStack_30 + 8) = *(int32_t *)(puVar10 + 8);
              *puVar10 = 0;
              *(int32_t *)(puVar10 + 8) = 0;
              puStack_30 = puStack_30 + 0x10;
            }
            plVar11 = local_40;
          }
          puVar3 = (int32_t *)plVar11[1];
          puVar10 = (int32_t *)*plVar11;
          if (puVar10 != puVar3) {
            do {
              FUN_1800f9ec0(puVar10);
              puVar10 = puVar10 + 0x10;
            } while (puVar10 != puVar3);
            plVar11[1] = *plVar11;
          }
        }
        else if (local_48[0] == '\x01') {
          plVar11 = *(longlong **)*local_40;
          cVar1 = *(char *)((longlong)plVar11 + 0x19);
          plVar4 = local_40;
          while (local_40 = plVar4, cVar1 == '\0') {
            plVar4 = plVar11 + 8;
            if (puStack_30 == local_28) {
              FUN_1800f9810((longlong *)&local_38,puStack_30,(int32_t *)plVar4);
            }
            else {
              *puStack_30 = (char)*plVar4;
              *(longlong *)(puStack_30 + 8) = plVar11[9];
              *(int32_t *)plVar4 = 0;
              plVar11[9] = 0;
              puStack_30 = puStack_30 + 0x10;
            }
            plVar4 = (longlong *)plVar11[2];
            if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
              cVar1 = *(char *)(*plVar4 + 0x19);
              plVar11 = plVar4;
              plVar4 = (longlong *)*plVar4;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar4 + 0x19);
                plVar11 = plVar4;
                plVar4 = (longlong *)*plVar4;
              }
            }
            else {
              cVar1 = *(char *)(plVar11[1] + 0x19);
              plVar8 = (longlong *)plVar11[1];
              plVar4 = plVar11;
              while ((plVar11 = plVar8, cVar1 == '\0' && (plVar4 == (longlong *)plVar11[2]))) {
                cVar1 = *(char *)(plVar11[1] + 0x19);
                plVar8 = (longlong *)plVar11[1];
                plVar4 = plVar11;
              }
            }
            plVar4 = local_40;
            cVar1 = *(char *)((longlong)plVar11 + 0x19);
          }
          lVar5 = *plVar4;
          FUN_1800f5550(plVar4,plVar4,*(longlong **)(lVar5 + 8));
          *(longlong *)(lVar5 + 8) = lVar5;
          *(longlong *)lVar5 = lVar5;
          *(longlong *)(lVar5 + 0x10) = lVar5;
          plVar4[1] = 0;
        }
        FUN_1800f9ec0(local_48);
      } while (local_38 != puStack_30);
    }
    FUN_1800f99f0((longlong *)&local_38);
  }
  if (param_2 == '\x01') {
    plVar11 = (longlong *)*param_1;
    FUN_1800f5550(plVar11,plVar11,*(longlong **)(*plVar11 + 8));
    thunk_FUN_18012d5e8((LPVOID)*plVar11);
  }
  else if (param_2 == '\x02') {
    FUN_1800f99f0((longlong *)*param_1);
  }
  else if (param_2 == '\x03') {
    FUN_1800a6800((longlong *)*param_1);
  }
  else {
    if (param_2 != '\b') {
      return;
    }
    plVar11 = (longlong *)*param_1;
    pvVar6 = (LPVOID)*plVar11;
    if (pvVar6 != (LPVOID)0x0) {
      pvVar9 = pvVar6;
      if ((0xfff < (ulonglong)(plVar11[2] - (longlong)pvVar6)) &&
         (pvVar9 = *(LPVOID *)((longlong)pvVar6 + -8),
         0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar9)))) {
        FUN_18012b7b4();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      thunk_FUN_18012d5e8(pvVar9);
      *plVar11 = 0;
      plVar11[1] = 0;
      plVar11[2] = 0;
    }
  }
  thunk_FUN_18012d5e8((LPVOID)*param_1);
  return;
}

// ---- Function: FUN_1800f9ec0 ----
void FUN_1800f9ec0(int32_t *param_1)

{
  FUN_1800f9a90((longlong *)(param_1 + 8),*param_1);
  return;
}

// ---- Function: FUN_1800f9ee0 ----
void FUN_1800f9ee0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}

// ---- Function: FUN_1800f9f10 ----
void FUN_1800f9f10(uint param_1)

{
  ulonglong uVar1;
  __uint64 _Var2;
  __uint64 _Var3;
  __uint64 _Var4;
  __uint64 _Var5;
  __uint64 _Var6;
  uint uVar7;
  int iVar8;
  __uint64 *p_Var9;
  ulonglong local_res10;
  float local_30;
  
  if (((((DAT_1801f3b24 == 0x27ea2814) || (DAT_1801f3b24 == -0x5536376b)) ||
       (DAT_1801f3b24 == -0x1049100a)) || (DAT_1801f3b24 == 0x23fb812b)) &&
     ((DAT_1801f3a0e == '\0' && (DAT_1801f3a0d == '\0')))) {
    iVar8 = FUN_1800ba980();
    if (DAT_1801ec250 < (uint)(iVar8 - DAT_1801f53a4)) {
      FUN_1800fa290((uint *)&DAT_1801ec230,param_1);
      DAT_1801ec250 = FUN_18011c6f0(4000,10000);
      DAT_1801f53a4 = iVar8;
    }
    uVar7 = DAT_1801ec244;
    if (500 < (uint)(iVar8 - DAT_1801f53a4)) {
      nativeInit(0x8f75998877616996);
      local_res10 = (ulonglong)uVar7;
      nativePush64(local_res10);
      nativePush64(0);
      nativeCall();
    }
    nativeInit(0x3f428d08be5aae31);
    local_res10 = (ulonglong)param_1;
    nativePush64(local_res10);
    nativePush64(0x796e);
    p_Var9 = nativeCall();
    _Var2 = *p_Var9;
    nativeInit(0x44a8fcb8ed227738);
    local_res10 = (ulonglong)param_1;
    nativePush64(local_res10);
    local_res10 = (ulonglong)(uint)_Var2;
    nativePush64(local_res10);
    p_Var9 = nativeCall();
    uVar1 = p_Var9[2];
    _Var3 = *p_Var9;
    _Var4 = p_Var9[1];
    nativeInit(0xce6294a232d03786);
    local_res10 = (ulonglong)param_1;
    nativePush64(local_res10);
    local_res10 = (ulonglong)(uint)_Var2;
    nativePush64(local_res10);
    p_Var9 = nativeCall();
    uVar7 = DAT_1801ec244;
    _Var2 = p_Var9[2];
    _Var5 = *p_Var9;
    _Var6 = p_Var9[1];
    nativeInit(0x74afef0d2e1e409b);
    local_res10 = (ulonglong)uVar7;
    nativePush64(local_res10);
    p_Var9 = nativeCall();
    uVar7 = DAT_1801ec244;
    if ((int)*p_Var9 != 0) {
      nativeInit(0xf7ddebec43483c43);
      local_res10 = (ulonglong)uVar7;
      nativePush64(local_res10);
      local_res10 = (ulonglong)(uint)_Var3;
      nativePush64(local_res10);
      local_res10 = (ulonglong)(uint)_Var4;
      nativePush64(local_res10);
      local_res10 = uVar1 & 0xffffffff;
      nativePush64(local_res10);
      local_res10 = (ulonglong)(uint)_Var5;
      nativePush64(local_res10);
      local_res10 = (ulonglong)(uint)_Var6;
      nativePush64(local_res10);
      local_30 = (float)_Var2;
      local_res10 = (ulonglong)(uint)(local_30 - _DAT_1801d8ef0);
      nativePush64(local_res10);
      nativeCall();
    }
  }
  return;
}

// ---- Function: FUN_1800fa290 ----
void FUN_1800fa290(uint *param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  __uint64 _Var3;
  __uint64 _Var4;
  __uint64 _Var5;
  __uint64 *p_Var6;
  ulonglong local_res8;
  
  uVar2 = param_1[5];
  nativeInit(0x74afef0d2e1e409b);
  local_res8 = (ulonglong)uVar2;
  nativePush64(local_res8);
  p_Var6 = nativeCall();
  if ((int)*p_Var6 == 0) {
    uVar2 = *param_1;
    nativeInit(0x3f428d08be5aae31);
    local_res8 = (ulonglong)param_2;
    nativePush64(local_res8);
    local_res8 = (ulonglong)uVar2;
    nativePush64(local_res8);
    p_Var6 = nativeCall();
    if (0 < (int)(uint)*p_Var6) {
      param_1[4] = (uint)*p_Var6;
      nativeInit(0x3fef770d40960d5a);
      local_res8 = (ulonglong)param_2;
      nativePush64(local_res8);
      nativePush64(1);
      p_Var6 = nativeCall();
      _Var4 = *p_Var6;
      _Var5 = p_Var6[1];
      uVar1 = p_Var6[2];
      nativeInit(0x6c38af3693a69a91);
      nativePush64(0x1801d82c8);
      nativeCall();
      _Var3 = *(__uint64 *)(param_1 + 2);
      nativeInit(0xe184f4f0dc5910e7);
      nativePush64(_Var3);
      local_res8 = (ulonglong)(uint)_Var4;
      nativePush64(local_res8);
      local_res8 = (ulonglong)(uint)_Var5;
      nativePush64(local_res8);
      local_res8 = uVar1 & 0xffffffff;
      nativePush64(local_res8);
      nativePush64(0);
      nativePush64(0);
      nativePush64(0);
      nativePush64(0x3f800000);
      nativePush64(0);
      nativePush64(0);
      nativePush64(0);
      nativePush64(0);
      p_Var6 = nativeCall();
      param_1[5] = (uint)*p_Var6;
    }
  }
  return;
}

// ---- Function: FUN_1800fa4b0 ----
void FUN_1800fa4b0(longlong param_1)

{
  uint uVar1;
  __uint64 *p_Var2;
  int32_t local_res8;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  nativeInit(0x74afef0d2e1e409b);
  local_res8 = (ulonglong)uVar1;
  nativePush64(local_res8);
  p_Var2 = nativeCall();
  if ((int)*p_Var2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x14);
    nativeInit(0x8f75998877616996);
    local_res8 = (ulonglong)uVar1;
    nativePush64(local_res8);
    nativePush64(0);
    nativeCall();
    uVar1 = *(uint *)(param_1 + 0x14);
    nativeInit(0xc401503dfe8d53cf);
    local_res8 = (ulonglong)uVar1;
    nativePush64(local_res8);
    nativePush64(0);
    nativeCall();
  }
  *(int32_t *)(param_1 + 0x14) = 0xffffffff;
  return;
}

// ---- Function: FUN_1800fa580 ----
void FUN_1800fa580(uint param_1)

{
  __uint64 _Var1;
  uint uVar2;
  float fVar3;
  uint *puVar4;
  uint *puVar5;
  __uint64 _Var6;
  __uint64 _Var7;
  float fVar8;
  float fVar9;
  uint *puVar10;
  float *pfVar11;
  __uint64 *p_Var12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong local_res10;
  
  fVar9 = DAT_1801d8e38;
  fVar8 = DAT_1801d8e18;
  uVar16 = 0;
  uVar13 = uVar16;
  uVar15 = uVar16;
  fVar3 = DAT_1801d8de4;
  puVar4 = DAT_1801fcf10;
  puVar5 = DAT_1801fcf18;
  if ((longlong)DAT_1801fcf18 - (longlong)DAT_1801fcf10 >> 5 != 0) {
    do {
      if (((((DAT_1801f3b24 == 0x54a69840) || (DAT_1801f3b24 == -0x49887d61)) ||
           (DAT_1801f3b24 == 0x6db1a50d)) || (DAT_1801f3b24 == 0x320d0951)) &&
         ((DAT_1801f3a0e == '\0' && (DAT_1801f3a0d == '\0')))) {
        nativeInit(0x15c40837039ffaf7);
        pfVar11 = (float *)nativeCall();
        *(float *)(uVar13 + 0x18 + (longlong)DAT_1801fcf10) =
             *pfVar11 * fVar8 + *(float *)(uVar13 + 0x18 + (longlong)DAT_1801fcf10);
        if (fVar9 < *(float *)(uVar13 + 0x18 + (longlong)DAT_1801fcf10)) {
          *(int32_t *)(uVar13 + 0x18 + (longlong)DAT_1801fcf10) = 0x3f800000;
        }
      }
      else {
        nativeInit(0x15c40837039ffaf7);
        pfVar11 = (float *)nativeCall();
        *(float *)(uVar13 + 0x18 + (longlong)DAT_1801fcf10) =
             *(float *)(uVar13 + 0x18 + (longlong)DAT_1801fcf10) - *pfVar11;
        pfVar11 = (float *)(uVar13 + 0x18 + (longlong)DAT_1801fcf10);
        if (*pfVar11 <= 0.0 && *pfVar11 != 0.0) {
          *(int32_t *)(uVar13 + 0x18 + (longlong)DAT_1801fcf10) = 0;
        }
      }
      uVar14 = (int)uVar15 + 1;
      uVar13 = uVar13 + 0x20;
      uVar15 = (ulonglong)uVar14;
      fVar3 = DAT_1801d8de4;
      puVar4 = DAT_1801fcf10;
      puVar5 = DAT_1801fcf18;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)((longlong)DAT_1801fcf18 - (longlong)DAT_1801fcf10 >> 5));
  }
  for (; puVar10 = DAT_1801fcf18, fVar8 = DAT_1801d8de4, puVar4 != DAT_1801fcf18;
      puVar4 = puVar4 + 8) {
    if (DAT_1801d8de4 < (float)puVar4[6] || DAT_1801d8de4 == (float)puVar4[6]) {
      DAT_1801d8de4 = fVar3;
      DAT_1801fcf18 = puVar5;
      FUN_1800fa290(puVar4,param_1);
    }
    else {
      DAT_1801d8de4 = fVar3;
      DAT_1801fcf18 = puVar5;
      FUN_1800fa4b0((longlong)puVar4);
    }
    fVar3 = DAT_1801d8de4;
    puVar5 = DAT_1801fcf18;
    DAT_1801fcf18 = puVar10;
    DAT_1801d8de4 = fVar8;
  }
  DAT_1801d8de4 = fVar3;
  DAT_1801fcf18 = puVar5;
  nativeInit(0x3fef770d40960d5a);
  local_res10 = (ulonglong)param_1;
  nativePush64(local_res10);
  nativePush64(1);
  nativeCall();
  fVar3 = DAT_1801d8dec;
  uVar13 = uVar16;
  if ((longlong)DAT_1801fcf18 - (longlong)DAT_1801fcf10 >> 5 != 0) {
    do {
      uVar14 = *(uint *)(uVar13 + 0x14 + (longlong)DAT_1801fcf10);
      nativeInit(0x74afef0d2e1e409b);
      local_res10 = (ulonglong)uVar14;
      nativePush64(local_res10);
      p_Var12 = nativeCall();
      if ((int)*p_Var12 != 0) {
        uVar14 = *(uint *)(uVar13 + 0x18 + (longlong)DAT_1801fcf10);
        uVar2 = *(uint *)(uVar13 + 0x14 + (longlong)DAT_1801fcf10);
        nativeInit(0x726845132380142e);
        local_res10 = (ulonglong)uVar2;
        nativePush64(local_res10);
        local_res10 = (ulonglong)uVar14;
        nativePush64(local_res10);
        nativeCall();
        uVar14 = *(uint *)(uVar13 + 0x18 + (longlong)DAT_1801fcf10);
        uVar2 = *(uint *)(uVar13 + 0x14 + (longlong)DAT_1801fcf10);
        nativeInit(0xb44250aaa456492d);
        local_res10 = (ulonglong)uVar2;
        nativePush64(local_res10);
        local_res10 = (ulonglong)uVar14;
        nativePush64(local_res10);
        nativeCall();
        nativeInit(0x11b499c1e0ff8559);
        local_res10 = (ulonglong)param_1;
        nativePush64(local_res10);
        p_Var12 = nativeCall();
        if ((int)*p_Var12 != 0) {
          uVar14 = *(uint *)(uVar13 + 0x10 + (longlong)DAT_1801fcf10);
          nativeInit(0x44a8fcb8ed227738);
          local_res10 = (ulonglong)param_1;
          nativePush64(local_res10);
          local_res10 = (ulonglong)uVar14;
          nativePush64(local_res10);
          p_Var12 = nativeCall();
          _Var6 = *p_Var12;
          _Var7 = p_Var12[1];
          _Var1 = p_Var12[2];
          uVar14 = *(uint *)(uVar13 + 0x14 + (longlong)DAT_1801fcf10);
          nativeInit(0xf7ddebec43483c43);
          local_res10 = (ulonglong)uVar14;
          nativePush64(local_res10);
          local_res10 = (ulonglong)(uint)_Var6;
          nativePush64(local_res10);
          local_res10 = (ulonglong)(uint)_Var7;
          nativePush64(local_res10);
          local_res10 = (ulonglong)(uint)((float)_Var1 - fVar3);
          nativePush64(local_res10);
          nativePush64(0);
          nativePush64(0);
          nativePush64(0);
          nativeCall();
        }
      }
      uVar14 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar14;
      uVar13 = uVar13 + 0x20;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)((longlong)DAT_1801fcf18 - (longlong)DAT_1801fcf10 >> 5));
  }
  return;
}

// ---- Function: FUN_1800faaa0 ----
void FUN_1800faaa0(longlong *param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  pvVar1 = (LPVOID)*param_1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar1) / 0x14) * 0x14)) &&
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

// ---- Function: FUN_1800fab20 ----
void FUN_1800fab20(void)

{
  uint uVar1;
  int32_t *puVar2;
  longlong lVar3;
  __uint64 _Var4;
  float fVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  float *pfVar12;
  __uint64 *p_Var13;
  byte bVar14;
  char *pcVar15;
  ulonglong uVar16;
  float fVar17;
  float extraout_XMM0_Da;
  ulonglong local_res8;
  int32_t local_res10 [8];
  int32_t local_res18 [16];
  
  nativeInit(0xf3bbe884a14bb413);
  nativePush64(0x1801f3b24);
  nativePush64((__uint64)local_res10);
  nativePush64((__uint64)local_res18);
  nativeCall();
  fVar5 = DAT_1801d8e38;
  if (DAT_1801f53a9 == '\0') {
    nativeInit(0x15c40837039ffaf7);
    pfVar12 = (float *)nativeCall();
    fVar17 = DAT_1801fcf40 + *pfVar12;
    DAT_1801fcf40 = fVar17;
    if ((PTR_DAT_1801ec258 == &DAT_180187500) &&
       (local_res8 = *DAT_1801fc8f0, *(char *)(local_res8 + 0x19) == '\0')) {
      uVar16 = (ulonglong)DAT_1801f3b24;
      do {
        if ((*(int *)(local_res8 + 0x40) == (int)uVar16) &&
           (PTR_DAT_1801ec258 = (int32_t *)(local_res8 + 0x20),
           0xf < *(ulonglong *)(local_res8 + 0x38))) {
          PTR_DAT_1801ec258 = *(int32_t **)(local_res8 + 0x20);
        }
        FUN_1800e6060((longlong *)&local_res8);
        fVar17 = extraout_XMM0_Da;
      } while (*(char *)(local_res8 + 0x19) == '\0');
    }
    if (fVar5 <= fVar17) {
      nativeInit(0x338d2e3477711050);
      nativeCall();
      nativeInit(0xccc39339bef76cf5);
      nativeCall();
      puVar8 = PTR_DAT_1801ec258;
      nativeInit(0xed712ca327900c8a);
      nativePush64((__uint64)puVar8);
      nativeCall();
      nativeInit(0xccc39339bef76cf5);
      nativeCall();
      DAT_1801f53a9 = '\x01';
    }
    else {
      nativeInit(0x338d2e3477711050);
      nativeCall();
      nativeInit(0xccc39339bef76cf5);
      nativeCall();
      nativeInit(0xfb5045b7c42b75bf);
      nativePush64(0x1801d8348);
      local_res8 = 0;
      nativePush64(0);
      nativeCall();
    }
  }
  if (DAT_1801f3b23 != '\0') {
    nativeInit(0x338d2e3477711050);
    nativeCall();
    nativeInit(0xccc39339bef76cf5);
    nativeCall();
    puVar8 = PTR_DAT_1801ec1f0;
    nativeInit(0xed712ca327900c8a);
    nativePush64((__uint64)puVar8);
    nativeCall();
    if (DAT_1801f3b28 == '\0') {
      nativeInit(0xccc39339bef76cf5);
      nativeCall();
    }
    DAT_1801f3b23 = '\0';
  }
  nativeInit(0x14d6f5678d8f1b37);
  p_Var13 = nativeCall();
  DAT_1801ec760 = (int32_t)*p_Var13;
  DAT_1801ec764 = (int32_t)p_Var13[1];
  DAT_1801ec768 = (int32_t)p_Var13[2];
  DAT_1801f4360 = worldGetAllObjects(&DAT_1801f3b60,0x200);
  DAT_1801f5380 = worldGetAllVehicles(&DAT_1801f4b80,0x200);
  DAT_1801f4b70 = worldGetAllPeds(&DAT_1801f4370,0x200);
  nativeInit(0xd80958fc74e988a6);
  p_Var13 = nativeCall();
  _Var4 = *p_Var13;
  FUN_1800e7950((uint)_Var4);
  FUN_1800e8060((uint)_Var4);
  FUN_1800e84d0();
  FUN_18011e1a0();
  FUN_1800fd720();
  iVar11 = FUN_18011ccf0();
  if (0xc16 < iVar11) {
    if (DAT_1801ec261 == '\0') {
      if (DAT_1801f53ac == '\0') {
        nativeInit(0xb87a37eeb7faa67d);
        nativePush64(0x1801d832c);
        nativeCall();
        nativeInit(0x6c188be134e074aa);
        nativePush64(0x1801d84c0);
        nativeCall();
        nativeInit(0x9d77056a530643f6);
        local_res8 = 2000;
        nativePush64(2000);
        local_res8 = 1;
        nativePush64(1);
        nativeCall();
        DAT_1801f53ac = '\x01';
        if (DAT_1801ec261 != '\0') goto LAB_1800faee6;
      }
    }
    else {
LAB_1800faee6:
      if ((((DAT_1801f3b24 == 0xaac9c895) || (DAT_1801f3b24 == 0x23fb812b)) ||
          (DAT_1801f3b24 == 0xefb6eff6)) || (DAT_1801f3b24 == 0x27ea2814)) {
        if (DAT_1801f53ab != '\0') goto LAB_1800fb08a;
        DAT_1801f53aa = '\x01';
        DAT_1801f53ab = '\x01';
LAB_1800fb09f:
        FUN_1801175d0((int32_t *)&DAT_1801eca40,0xffffffff);
        puVar2 = (int32_t *)*DAT_1801eca88;
        VirtualProtect(puVar2,0x27,0x40,(PDWORD)&local_res8);
        uVar7 = _UNK_1801d9d78;
        uVar6 = _DAT_1801d9d70;
        *puVar2 = _DAT_1801d9d70;
        puVar2[1] = uVar7;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        *(int *)(puVar2 + 4) = (int)uVar6;
        *(short *)((longlong)puVar2 + 0x24) = (short)uVar6;
        *(char *)((longlong)puVar2 + 0x26) = (char)uVar6;
        VirtualProtect(puVar2,0x27,(DWORD)local_res8,(PDWORD)&local_res8);
        bVar14 = 1;
      }
      else {
        if (DAT_1801f53ab == '\0') {
LAB_1800fb08a:
          if (DAT_1801f53aa == '\0') goto LAB_1800faf9c;
          if (DAT_1801f53ab != '\0') goto LAB_1800fb09f;
        }
        else {
          DAT_1801f53aa = '\x01';
          DAT_1801f53ab = '\0';
        }
        FUN_1801175d0((int32_t *)&DAT_1801eca40,0xffffffff);
        uVar6 = uRam00000001801fcf50;
        puVar2 = (int32_t *)*DAT_1801eca88;
        *puVar2 = _DAT_1801fcf48;
        puVar2[1] = uVar6;
        uVar6 = uRam00000001801fcf60;
        puVar2[2] = _DAT_1801fcf58;
        puVar2[3] = uVar6;
        *(int32_t *)(puVar2 + 4) = DAT_1801fcf68;
        *(int32_t *)((longlong)puVar2 + 0x24) = DAT_1801fcf6c;
        *(int32_t *)((longlong)puVar2 + 0x26) = DAT_1801fcf6e;
        bVar14 = 0;
      }
      FUN_1800fc9c0(bVar14,bVar14,bVar14,bVar14);
      DAT_1801f53aa = '\0';
    }
  }
LAB_1800faf9c:
  nativeInit(0xd80958fc74e988a6);
  p_Var13 = nativeCall();
  _Var4 = *p_Var13;
  nativeInit(0x997abd671d25ca0b);
  local_res8 = (ulonglong)(uint)_Var4;
  nativePush64(local_res8);
  nativePush64(0);
  p_Var13 = nativeCall();
  if ((int)*p_Var13 != 0) {
    nativeInit(0xa4ff579ac0e3aaae);
    p_Var13 = nativeCall();
    if ((int)*p_Var13 == 4) {
      nativeInit(0xea1e2d93f6f75ed9);
      nativePush64(0x1801d82d0);
      nativePush64(0x1801d8300);
      nativeCall();
      nativeInit(0xea1e2d93f6f75ed9);
      nativePush64(0x1801d82e8);
      pcVar15 = "lens_test";
      goto LAB_1800fb145;
    }
  }
  nativeInit(0x89c8553dd3274aae);
  nativePush64(0x1801d82d0);
  nativeCall();
  nativeInit(0x89c8553dd3274aae);
  pcVar15 = "water_splash_bike_wade";
LAB_1800fb145:
  nativePush64((__uint64)pcVar15);
  nativeCall();
  if (DAT_1801f3b24 == 0xb17f6111) {
    nativeInit(0xea1e2d93f6f75ed9);
    nativePush64(0x1801d8320);
    pcVar15 = "env_sandstorm";
  }
  else {
    nativeInit(0x89c8553dd3274aae);
    pcVar15 = "lens_snow";
  }
  nativePush64((__uint64)pcVar15);
  nativeCall();
  nativeInit(0xd80958fc74e988a6);
  p_Var13 = nativeCall();
  uVar1 = (uint)*p_Var13;
  if (uVar1 != DAT_1801ec228) {
    DAT_1801ec228 = uVar1;
  }
  nativeInit(0x6ac7003fa6e5575e);
  local_res8 = (ulonglong)uVar1;
  nativePush64(local_res8);
  p_Var13 = nativeCall();
  lVar10 = DAT_1801fcf18;
  lVar3 = DAT_1801fcf10;
  if ((int)*p_Var13 == 0) {
    FUN_1800fa580(uVar1);
    FUN_1800f9f10(uVar1);
  }
  else {
    for (; lVar3 != lVar10; lVar3 = lVar3 + 0x20) {
      FUN_1800fa4b0(lVar3);
    }
  }
  FUN_1800ea9f0();
  FUN_1800cb820();
  if (DAT_1801f3b24 == 0x320d0951) {
    nativeInit(0x95e3d6257b166cf2);
    local_res8 = 0x3e800000;
    nativePush64(0x3e800000);
    nativeCall();
    nativeInit(0x7a556143a1c03898);
    local_res8 = 0x3f800000;
    nativePush64(0x3f800000);
    local_res8 = 0x3e800000;
    nativePush64(0x3e800000);
    nativeCall();
    nativeInit(0xeae6dcc7eee3db1d);
    local_res8 = 0x3e4ccccd;
    nativePush64(0x3e4ccccd);
    nativeCall();
    nativeInit(0xb3b3359379fe77d3);
    local_res8 = 0x3d8f5c29;
    nativePush64(0x3d8f5c29);
    nativeCall();
    nativeInit(0x245a6883d966d537);
    local_res8 = 0x3d8f5c29;
    nativePush64(0x3d8f5c29);
    nativeCall();
  }
  uVar9 = DAT_1801ec21c;
  uVar1 = DAT_1801ec218;
  if (DAT_1801f3b29 != '\0') {
    nativeInit(0x47c3b5848c3e45d8);
    local_res8 = (ulonglong)uVar1;
    nativePush64(local_res8);
    local_res8 = (ulonglong)uVar9;
    nativePush64(local_res8);
    nativePush64(0);
    nativeCall();
  }
  DAT_1801f3b20 = 1;
  if (DAT_1801f53a8 != '\0') {
    DAT_1801f3b29 = '\0';
    DAT_1801f53a8 = '\0';
  }
  return;
}

// ---- Function: FUN_1800fb410 ----
void FUN_1800fb410(void)

{
  longlong **pplVar1;
  longlong *plVar2;
  longlong **pplVar3;
  char cVar4;
  int32_t uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong **pplVar10;
  ulonglong uVar11;
  longlong **pplVar12;
  longlong *plVar13;
  longlong **pplVar14;
  int32_t *puVar15;
  int32_t **ppuVar16;
  code *pcVar17;
  int32_t auStack_428 [32];
  longlong **local_408;
  longlong *plStack_400;
  int32_t *local_3f8;
  int32_t **ppuStack_3f0;
  longlong *local_3d8;
  longlong local_3d0;
  longlong **local_3c8;
  uint uStack_3c0;
  int32_t uStack_3bc;
  longlong local_3b8;
  int32_t local_3b0 [5];
  longlong local_388;
  int32_t uStack_380;
  int32_t local_378;
  int32_t uStack_370;
  int32_t local_368;
  int32_t local_360;
  int32_t uStack_358;
  int32_t local_350;
  int32_t local_348;
  int32_t local_340;
  int32_t local_338;
  int32_t uStack_330;
  int32_t local_328;
  int32_t uStack_320;
  int32_t local_318;
  int32_t local_310;
  int32_t uStack_308;
  int32_t local_300;
  int32_t local_2f8;
  int32_t local_2f0;
  char local_2e8 [8];
  ulonglong uStack_2e0;
  int32_t local_2d8;
  int32_t uStack_2d0;
  int32_t local_2c8;
  int32_t local_2c0;
  int32_t uStack_2b8;
  int32_t local_2b0;
  int32_t local_2a8;
  int32_t local_2a0;
  char local_298 [8];
  ulonglong uStack_290;
  int32_t local_288;
  int32_t uStack_280;
  int32_t local_278;
  int32_t local_270;
  int32_t uStack_268;
  int32_t local_260;
  int32_t local_258;
  int32_t local_250;
  int32_t local_248;
  int32_t uStack_240;
  int32_t local_238;
  int32_t uStack_230;
  int32_t local_228;
  ulonglong local_220;
  int32_t uStack_218;
  int32_t local_210;
  int32_t local_208;
  int32_t local_200;
  char local_1f8 [8];
  ulonglong uStack_1f0;
  int32_t local_1e8;
  int32_t uStack_1e0;
  int32_t local_1d8;
  int32_t local_1d0;
  int32_t uStack_1c8;
  int32_t local_1c0;
  int32_t local_1b8;
  int32_t local_1b0;
  int32_t local_1a8;
  int32_t uStack_1a0;
  int32_t local_198;
  int32_t uStack_190;
  int32_t local_188;
  int32_t local_180 [5];
  int32_t local_158 [5];
  int32_t local_130 [5];
  char local_108 [8];
  ulonglong uStack_100;
  int32_t local_f8;
  int32_t uStack_f0;
  int32_t local_e8;
  int32_t local_e0 [5];
  char local_b8 [8];
  int32_t uStack_b0;
  int32_t local_a8;
  int32_t uStack_a0;
  int32_t local_98;
  char local_90 [8];
  int32_t uStack_88;
  int32_t local_80;
  int32_t local_78;
  int32_t local_70;
  longlong local_68 [4];
  int32_t local_48;
  ulonglong local_40;
  
  local_40 = DAT_1801eb080 ^ (ulonglong)auStack_428;
  lVar7 = FUN_18012b82c((longlong *)0x0);
  FUN_18012f114((int)lVar7);
  local_378 = _DAT_1801d8fd0;
  uStack_370 = _UNK_1801d8fd8;
  local_388 = 0x4452415a5a494c42;
  uStack_380 = 0;
  local_368 = 0x27ea2814;
  uStack_358 = 0;
  local_350 = 5;
  local_348 = 0xf;
  local_360 = (ulonglong)CONCAT14(s_CLEAR_1801d8354[4],s_CLEAR_1801d8354._0_4_);
  local_340 = 0x36a83d84;
  local_328 = _DAT_1801d8fd0;
  uStack_320 = _UNK_1801d8fd8;
  local_338 = 0x474e495241454c43;
  uStack_330 = 0;
  local_318 = 0x6db1a50d;
  uStack_308 = 0;
  local_300 = 6;
  local_2f8 = 0xf;
  local_310 = (ulonglong)CONCAT24(DAT_1801d8360,DAT_1801d835c);
  local_2f0 = 0x30fdaf5c;
  local_2d8 = _DAT_1801d8ff0;
  uStack_2d0 = _UNK_1801d8ff8;
  local_2e8[0] = s_EXTRASUNNY_1801d8348[0];
  local_2e8[1] = s_EXTRASUNNY_1801d8348[1];
  local_2e8[2] = s_EXTRASUNNY_1801d8348[2];
  local_2e8[3] = s_EXTRASUNNY_1801d8348[3];
  local_2e8[4] = s_EXTRASUNNY_1801d8348[4];
  local_2e8[5] = s_EXTRASUNNY_1801d8348[5];
  local_2e8[6] = s_EXTRASUNNY_1801d8348[6];
  local_2e8[7] = s_EXTRASUNNY_1801d8348[7];
  uStack_2e0 = (ulonglong)(ushort)s_EXTRASUNNY_1801d8348._8_2_;
  local_2c8 = 0x97aa0a79;
  uStack_2b8 = 0;
  local_2b0 = 5;
  local_2a8 = 0xf;
  local_2c0 = (ulonglong)CONCAT14(DAT_1801d8368,DAT_1801d8364);
  local_2a0 = 0xae737644;
  local_288 = _DAT_1801d8fe0;
  uStack_280 = _UNK_1801d8fe8;
  local_298[0] = s_HALLOWEEN_1801d8370[0];
  local_298[1] = s_HALLOWEEN_1801d8370[1];
  local_298[2] = s_HALLOWEEN_1801d8370[2];
  local_298[3] = s_HALLOWEEN_1801d8370[3];
  local_298[4] = s_HALLOWEEN_1801d8370[4];
  local_298[5] = s_HALLOWEEN_1801d8370[5];
  local_298[6] = s_HALLOWEEN_1801d8370[6];
  local_298[7] = s_HALLOWEEN_1801d8370[7];
  uStack_290 = (ulonglong)(byte)s_HALLOWEEN_1801d8370[8];
  local_278 = 0xc91a3202;
  uStack_268 = 0;
  local_260 = 7;
  local_258 = 0xf;
  local_270 = (ulonglong)
              CONCAT16(s_NEUTRAL_1801d8380[6],
                       CONCAT24(s_NEUTRAL_1801d8380._4_2_,s_NEUTRAL_1801d8380._0_4_));
  local_250 = 0xa4ca1326;
  local_238 = _DAT_1801d8fd0;
  uStack_230 = _UNK_1801d8fd8;
  local_248 = 0x545341435245564f;
  uStack_240 = 0;
  local_228 = 0xbb898d2d;
  uStack_218 = 0;
  local_210 = 4;
  local_208 = 0xf;
  local_220 = (ulonglong)DAT_1801d5ee0;
  local_200 = 0x54a69840;
  local_1e8 = _DAT_1801d8fe0;
  uStack_1e0 = _UNK_1801d8fe8;
  local_1f8[0] = s_SANDSTORM_1801d8338[0];
  local_1f8[1] = s_SANDSTORM_1801d8338[1];
  local_1f8[2] = s_SANDSTORM_1801d8338[2];
  local_1f8[3] = s_SANDSTORM_1801d8338[3];
  local_1f8[4] = s_SANDSTORM_1801d8338[4];
  local_1f8[5] = s_SANDSTORM_1801d8338[5];
  local_1f8[6] = s_SANDSTORM_1801d8338[6];
  local_1f8[7] = s_SANDSTORM_1801d8338[7];
  uStack_1f0 = (ulonglong)(byte)s_SANDSTORM_1801d8338[8];
  local_1d8 = 0xb17f6111;
  uStack_1c8 = 0;
  local_1c0 = 4;
  local_1b8 = 0xf;
  local_1d0 = 0x474f4d53;
  local_1b0 = 0x10dcf4b5;
  uStack_1a0 = 0;
  local_198 = _DAT_1801d8f90;
  uStack_190 = _UNK_1801d8f98;
  local_1a8 = 0x574f4e53;
  local_188 = 0xefb6eff6;
  local_408._0_4_ = 0x23fb812b;
  FUN_1800fbd00(local_180,(int32_t *)"SNOWLIGHT",(int32_t *)&local_408);
  local_408._0_4_ = 0xb677829f;
  FUN_1800fbd00(local_158,(int32_t *)"THUNDER",(int32_t *)&local_408);
  local_408._0_4_ = 0xaac9c895;
  FUN_1800fbd00(local_130,(int32_t *)&DAT_1801d83a0,(int32_t *)&local_408);
  local_f8 = _DAT_1801d8ff0;
  uStack_f0 = _UNK_1801d8ff8;
  local_108[0] = s_FOGGY_DEEP_1801d83a8[0];
  local_108[1] = s_FOGGY_DEEP_1801d83a8[1];
  local_108[2] = s_FOGGY_DEEP_1801d83a8[2];
  local_108[3] = s_FOGGY_DEEP_1801d83a8[3];
  local_108[4] = s_FOGGY_DEEP_1801d83a8[4];
  local_108[5] = s_FOGGY_DEEP_1801d83a8[5];
  local_108[6] = s_FOGGY_DEEP_1801d83a8[6];
  local_108[7] = s_FOGGY_DEEP_1801d83a8[7];
  uStack_100 = (ulonglong)(ushort)s_FOGGY_DEEP_1801d83a8._8_2_;
  local_e8 = 0x6ba6adfe;
  local_408 = (longlong **)CONCAT44(local_408._4_4_,0x320d0951);
  FUN_1800fbd00(local_e0,(int32_t *)"HURRICANE",(int32_t *)&local_408);
  local_a8 = _DAT_1801d9030;
  uStack_a0 = _UNK_1801d9038;
  local_b8[0] = s_SNOW_HALLOWEEN_1801d83c8[0];
  local_b8[1] = s_SNOW_HALLOWEEN_1801d83c8[1];
  local_b8[2] = s_SNOW_HALLOWEEN_1801d83c8[2];
  local_b8[3] = s_SNOW_HALLOWEEN_1801d83c8[3];
  local_b8[4] = s_SNOW_HALLOWEEN_1801d83c8[4];
  local_b8[5] = s_SNOW_HALLOWEEN_1801d83c8[5];
  local_b8[6] = s_SNOW_HALLOWEEN_1801d83c8[6];
  local_b8[7] = s_SNOW_HALLOWEEN_1801d83c8[7];
  uStack_b0 = (ulonglong)
              CONCAT24(s_SNOW_HALLOWEEN_1801d83c8._12_2_,s_SNOW_HALLOWEEN_1801d83c8._8_4_);
  local_98 = 0x7fccc459;
  local_80 = 0xe;
  local_78 = 0xf;
  local_90[0] = s_RAIN_HALLOWEEN_1801d83d8[0];
  local_90[1] = s_RAIN_HALLOWEEN_1801d83d8[1];
  local_90[2] = s_RAIN_HALLOWEEN_1801d83d8[2];
  local_90[3] = s_RAIN_HALLOWEEN_1801d83d8[3];
  local_90[4] = s_RAIN_HALLOWEEN_1801d83d8[4];
  local_90[5] = s_RAIN_HALLOWEEN_1801d83d8[5];
  local_90[6] = s_RAIN_HALLOWEEN_1801d83d8[6];
  local_90[7] = s_RAIN_HALLOWEEN_1801d83d8[7];
  uStack_88 = (ulonglong)
              CONCAT24(s_RAIN_HALLOWEEN_1801d83d8._12_2_,s_RAIN_HALLOWEEN_1801d83d8._8_4_);
  local_70 = 0x16fdb812;
  local_3d8 = (longlong *)0x0;
  local_3d0 = 0;
  plVar8 = (longlong *)operator_new(0x48);
  *plVar8 = (longlong)plVar8;
  plVar8[1] = (longlong)plVar8;
  plVar8[2] = (longlong)plVar8;
  *(int32_t *)(plVar8 + 3) = 0x101;
  plVar13 = &local_388;
  local_3d8 = plVar8;
  do {
    plVar9 = FUN_1800fbf30((longlong *)&local_3d8,(longlong *)&local_3f8,plVar8,plVar13);
    plVar2 = local_3d8;
    puVar15 = (int32_t *)*plVar9;
    lVar7 = plVar9[1];
    local_3b8 = plVar9[2];
    if ((char)local_3b8 == '\0') {
      if (local_3d0 == 0x38e38e38e38e38e) goto LAB_1800fbced;
      local_408 = &local_3d8;
      plStack_400 = (longlong *)0x0;
      plVar9 = (longlong *)operator_new(0x48);
      plStack_400 = plVar9;
      FUN_1800ba630(plVar9 + 4,plVar13);
      *(int *)(plVar9 + 8) = (int)plVar13[4];
      *plVar9 = (longlong)plVar2;
      plVar9[1] = (longlong)plVar2;
      plVar9[2] = (longlong)plVar2;
      *(int32_t *)(plVar9 + 3) = 0;
      plStack_400 = (longlong *)0x0;
      local_3f8 = puVar15;
      ppuStack_3f0 = (int32_t **)lVar7;
      FUN_1800d86d0((longlong *)&local_3d8,(longlong *)&local_3f8,plVar9);
    }
    plVar13 = plVar13 + 5;
  } while (plVar13 != local_68);
  pcVar17 = thunk_FUN_1800a6800;
  ppuVar16 = (int32_t **)0x14;
  plVar13 = &local_388;
  _eh_vector_destructor_iterator_(plVar13,0x28,0x14,thunk_FUN_1800a6800);
  plVar8 = (longlong *)*local_3d8;
  cVar4 = *(char *)((longlong)plVar8 + 0x19);
  puVar15 = DAT_1801ec828;
  do {
    DAT_1801ec828 = puVar15;
    if (cVar4 != '\0') {
      if (puVar15 == DAT_1801ec830) {
        ppuVar16 = &local_3f8;
        local_3f8 = _DAT_1801d9c00;
        ppuStack_3f0 = (int32_t **)_UNK_1801d9c08;
        FUN_1800fbd70(plVar13,puVar15,ppuVar16);
      }
      else {
        *(int32_t *)puVar15 = 0x453f3c42;
        *(int32_t *)((longlong)puVar15 + 4) = 0x4479bb9f;
        *(int32_t *)((longlong)puVar15 + 0xc) = 0x42c80000;
        DAT_1801ec828 = DAT_1801ec828 + 2;
      }
      puVar15 = DAT_1801ec828;
      local_3f8 = _DAT_1801d9c20;
      ppuStack_3f0 = (int32_t **)_UNK_1801d9c28;
      if (DAT_1801ec828 == DAT_1801ec830) {
        ppuVar16 = &local_3f8;
        FUN_1800fbd70(plVar13,DAT_1801ec828,ppuVar16);
      }
      else {
        *(int32_t *)DAT_1801ec828 = 0xc391069e;
        *(int32_t *)((longlong)puVar15 + 4) = 0x45eb76e9;
        *(int32_t *)((longlong)puVar15 + 0xc) = 0x42c80000;
        DAT_1801ec828 = DAT_1801ec828 + 2;
      }
      puVar15 = DAT_1801ec828;
      local_3f8 = _DAT_1801d9c30;
      ppuStack_3f0 = (int32_t **)_UNK_1801d9c38;
      if (DAT_1801ec828 == DAT_1801ec830) {
        ppuVar16 = &local_3f8;
        FUN_1800fbd70(plVar13,DAT_1801ec828,ppuVar16);
      }
      else {
        *(int32_t *)DAT_1801ec828 = 0xc5365737;
        *(int32_t *)((longlong)puVar15 + 4) = 0xc4d3c4f6;
        *(int32_t *)(puVar15 + 1) = 0;
        *(int32_t *)((longlong)puVar15 + 0xc) = 0x42c80000;
        DAT_1801ec828 = DAT_1801ec828 + 2;
      }
      puVar15 = DAT_1801ec828;
      local_3f8 = _DAT_1801d9c10;
      ppuStack_3f0 = (int32_t **)_UNK_1801d9c18;
      if (DAT_1801ec828 == DAT_1801ec830) {
        ppuVar16 = &local_3f8;
        FUN_1800fbd70(plVar13,DAT_1801ec828,ppuVar16);
      }
      else {
        *(int32_t *)DAT_1801ec828 = 0x4383e141;
        *(int32_t *)((longlong)puVar15 + 4) = 0x45789e6a;
        *(int32_t *)((longlong)puVar15 + 0xc) = 0x42c80000;
        DAT_1801ec828 = DAT_1801ec828 + 2;
      }
      iVar6 = FUN_18011ccf0();
      if (0xc16 < iVar6) {
        FUN_1800fc1d0();
      }
      FUN_1800e9b20(plVar13,puVar15,ppuVar16,(int32_t *)pcVar17);
      do {
        FUN_1800fab20();
        scriptWait(0);
      } while( true );
    }
    FUN_1800ba630(local_68,plVar8 + 4);
    local_48 = (int32_t)plVar8[8];
    pplVar10 = (longlong **)FUN_1800ba630(local_3b0,local_68);
    local_408 = pplVar10;
    uVar5 = FUN_18011c7e0((char *)pplVar10);
    pplVar3 = DAT_1801fc8f0;
    pplVar1 = (longlong **)DAT_1801fc8f0[1];
    uStack_3c0 = 0;
    cVar4 = *(char *)((longlong)pplVar1 + 0x19);
    local_3c8 = pplVar1;
    pplVar12 = DAT_1801fc8f0;
    while (cVar4 == '\0') {
      local_3c8 = pplVar1;
      uVar11 = FUN_1800f5180(pplVar1 + 4,pplVar10);
      cVar4 = (char)uVar11;
      uStack_3c0 = (uint)(-1 < cVar4);
      if (-1 < cVar4) {
        pplVar12 = pplVar1;
      }
      pplVar14 = pplVar1 + 2;
      if (-1 < cVar4) {
        pplVar14 = pplVar1;
      }
      pplVar1 = (longlong **)*pplVar14;
      cVar4 = *(char *)((longlong)pplVar1 + 0x19);
    }
    if ((*(char *)((longlong)pplVar12 + 0x19) != '\0') ||
       (uVar11 = FUN_1800f5180(pplVar10,pplVar12 + 4), (char)uVar11 < '\0')) {
      if (DAT_1801fc8f8 == 0x38e38e38e38e38e) {
        FUN_1800d8950();
LAB_1800fbced:
        FUN_1800d8950();
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      local_3f8 = &DAT_1801fc8f0;
      ppuStack_3f0 = (int32_t **)0x0;
      ppuVar16 = (int32_t **)operator_new(0x48);
      ppuStack_3f0 = ppuVar16;
      FUN_1800ba630(ppuVar16 + 4,pplVar10);
      *(int32_t *)(ppuVar16 + 8) = 0;
      *ppuVar16 = pplVar3;
      ppuVar16[1] = pplVar3;
      ppuVar16[2] = pplVar3;
      *(int32_t *)(ppuVar16 + 3) = 0;
      ppuStack_3f0 = (int32_t **)0x0;
      plStack_400 = (longlong *)CONCAT44(uStack_3bc,uStack_3c0);
      local_408 = local_3c8;
      pplVar12 = (longlong **)
                 FUN_1800d86d0((longlong *)&DAT_1801fc8f0,(longlong *)&local_408,
                               (longlong *)ppuVar16);
    }
    *(int32_t *)(pplVar12 + 8) = uVar5;
    FUN_1800a6800((longlong *)pplVar10);
    FUN_1800a6800(local_68);
    plVar13 = (longlong *)plVar8[2];
    if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
      cVar4 = *(char *)(*plVar13 + 0x19);
      plVar8 = plVar13;
      plVar13 = (longlong *)*plVar13;
      while (cVar4 == '\0') {
        cVar4 = *(char *)(*plVar13 + 0x19);
        plVar8 = plVar13;
        plVar13 = (longlong *)*plVar13;
      }
    }
    else {
      cVar4 = *(char *)(plVar8[1] + 0x19);
      plVar9 = (longlong *)plVar8[1];
      plVar2 = plVar8;
      while ((plVar8 = plVar9, cVar4 == '\0' && (plVar2 == (longlong *)plVar8[2]))) {
        cVar4 = *(char *)(plVar8[1] + 0x19);
        plVar9 = (longlong *)plVar8[1];
        plVar2 = plVar8;
      }
    }
    cVar4 = *(char *)((longlong)plVar8 + 0x19);
    puVar15 = DAT_1801ec828;
  } while( true );
}

// ---- Function: FUN_1800fbd00 ----
int32_t * FUN_1800fbd00(int32_t *param_1,int32_t *param_2,int32_t *param_3)

{
  ulonglong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (*(char *)((longlong)param_2 + uVar1) != '\0');
  FUN_1800ba360(param_1,param_2,uVar1);
  *(int32_t *)(param_1 + 4) = *param_3;
  return param_1;
}

// ---- Function: FUN_1800fbd70 ----
int32_t * FUN_1800fbd70(int32_t param_1,int32_t *param_2,int32_t *param_3)

{
  int32_t *puVar1;
  code *pcVar2;
  int32_t uVar3;
  void *pvVar4;
  int32_t *puVar5;
  ulonglong uVar6;
  int32_t *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar11 = (longlong)param_2 - (longlong)DAT_1801ec820;
  lVar8 = (longlong)DAT_1801ec828 - (longlong)DAT_1801ec820 >> 4;
  if (lVar8 == 0xfffffffffffffff) {
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
  uVar6 = (uVar6 >> 1) + uVar6;
  uVar10 = uVar9;
  if (uVar9 <= uVar6) {
    uVar10 = uVar6;
  }
  if (0xfffffffffffffff < uVar10) goto LAB_1800fbf1e;
  uVar6 = uVar10 * 0x10;
  if (uVar6 == 0) {
    puVar5 = (int32_t *)0x0;
  }
  else if (uVar6 < 0x1000) {
    puVar5 = (int32_t *)operator_new(uVar6);
  }
  else {
    if (uVar6 + 0x27 <= uVar6) goto LAB_1800fbf1e;
    pvVar4 = operator_new(uVar6 + 0x27);
    if (pvVar4 == (void *)0x0) goto LAB_1800fbf18;
    puVar5 = (int32_t *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
    puVar5[-1] = pvVar4;
  }
  uVar3 = param_3[1];
  puVar1 = (int32_t *)((uVar11 & 0xfffffffffffffff0) + (longlong)puVar5);
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  if (param_2 == DAT_1801ec828) {
    uVar11 = (longlong)DAT_1801ec828 - (longlong)DAT_1801ec820;
    puVar7 = puVar5;
    param_2 = DAT_1801ec820;
  }
  else {
    FUN_180150fd0(puVar5,DAT_1801ec820,(longlong)param_2 - (longlong)DAT_1801ec820);
    puVar7 = puVar1 + 2;
    uVar11 = (longlong)DAT_1801ec828 - (longlong)param_2;
  }
  FUN_180150fd0(puVar7,param_2,uVar11);
  if (DAT_1801ec820 != (int32_t *)0x0) {
    puVar7 = DAT_1801ec820;
    if ((0xfff < ((longlong)DAT_1801ec830 - (longlong)DAT_1801ec820 & 0xfffffffffffffff0U)) &&
       (puVar7 = (int32_t *)DAT_1801ec820[-1],
       0x1f < (ulonglong)((longlong)DAT_1801ec820 + (-8 - (longlong)puVar7)))) {
LAB_1800fbf18:
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      puVar5 = (int32_t *)(*pcVar2)();
      return puVar5;
    }
    thunk_FUN_18012d5e8(puVar7);
  }
  DAT_1801ec828 = puVar5 + uVar9 * 2;
  DAT_1801ec820 = puVar5;
  DAT_1801ec830 = puVar5 + uVar10 * 2;
  return puVar1;
}

// ---- Function: FUN_1800fbf30 ----
longlong * FUN_1800fbf30(longlong *param_1,longlong *param_2,longlong *param_3,int32_t *param_4)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uStack_20;
  int32_t uStack_1c;
  
  plVar6 = (longlong *)*param_1;
  if (*(char *)((longlong)param_3 + 0x19) == '\0') {
    if (param_3 == (longlong *)*plVar6) {
      uVar3 = FUN_1800f5180(param_4,param_3 + 4);
      if ((char)uVar3 < '\0') {
        *param_2 = (longlong)param_3;
        *(int32_t *)(param_2 + 1) = 1;
        *(int32_t *)(param_2 + 2) = 0;
        return param_2;
      }
      goto LAB_1800fc0ed;
    }
    uVar3 = FUN_1800f5180(param_4,param_3 + 4);
    if ((char)uVar3 < '\0') {
      plVar6 = (longlong *)*param_3;
      if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar6[2] + 0x19);
        plVar5 = (longlong *)plVar6[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x19);
          plVar6 = plVar5;
          plVar5 = (longlong *)plVar5[2];
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar4 = (longlong *)param_3[1];
        plVar5 = param_3;
        while ((plVar6 = plVar4, cVar1 == '\0' && (plVar5 == (longlong *)*plVar6))) {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar4 = (longlong *)plVar6[1];
          plVar5 = plVar6;
        }
        if (*(char *)((longlong)plVar5 + 0x19) != '\0') {
          plVar6 = plVar5;
        }
      }
      uVar3 = FUN_1800f5180(plVar6 + 4,param_4);
      if ((char)uVar3 < '\0') {
        cVar1 = *(char *)(plVar6[2] + 0x19);
        *(int32_t *)(param_2 + 2) = 0;
        if (cVar1 != '\0') {
          *param_2 = (longlong)plVar6;
          *(int32_t *)(param_2 + 1) = 0;
          return param_2;
        }
        *param_2 = (longlong)param_3;
        *(int32_t *)(param_2 + 1) = 1;
        return param_2;
      }
      goto LAB_1800fc0ed;
    }
    uVar3 = FUN_1800f5180(param_3 + 4,param_4);
    if (-1 < (char)uVar3) {
      *param_2 = (longlong)param_3;
      *(int32_t *)(param_2 + 2) = 1;
      goto LAB_1800fc1a9;
    }
    plVar6 = (longlong *)param_3[2];
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar6 + 0x19);
      plVar5 = (longlong *)*plVar6;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x19);
        plVar6 = plVar5;
        plVar5 = (longlong *)*plVar5;
      }
    }
    else {
      plVar5 = (longlong *)param_3[1];
      plVar4 = param_3;
      plVar6 = plVar5;
      if (*(char *)((longlong)plVar5 + 0x19) != '\0') goto LAB_1800fc177;
      do {
        plVar6 = plVar5;
        if (plVar4 != (longlong *)plVar5[2]) break;
        plVar6 = (longlong *)plVar5[1];
        plVar4 = plVar5;
        plVar5 = plVar6;
      } while (*(char *)((longlong)plVar6 + 0x19) == '\0');
    }
    if ((*(char *)((longlong)plVar6 + 0x19) != '\0') ||
       (uVar3 = FUN_1800f5180(param_4,plVar6 + 4), (char)uVar3 < '\0')) {
LAB_1800fc177:
      cVar1 = *(char *)(param_3[2] + 0x19);
      *(int32_t *)(param_2 + 2) = 0;
      if (cVar1 != '\0') {
        *param_2 = (longlong)param_3;
        *(int32_t *)(param_2 + 1) = 0;
        return param_2;
      }
      *param_2 = (longlong)plVar6;
      *(int32_t *)(param_2 + 1) = 1;
      return param_2;
    }
  }
  else if ((*(char *)(plVar6[1] + 0x19) != '\0') ||
          (uVar3 = FUN_1800f5180((int32_t *)(plVar6[2] + 0x20),param_4), (char)uVar3 < '\0')) {
    *param_2 = plVar6[2];
    *(int32_t *)(param_2 + 2) = 0;
LAB_1800fc1a9:
    *(int32_t *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_1800fc0ed:
  plVar6 = (longlong *)*param_1;
  uStack_20 = 0;
  plVar5 = (longlong *)plVar6[1];
  cVar1 = *(char *)((longlong)plVar5 + 0x19);
  plVar4 = plVar5;
  while (plVar2 = plVar5, cVar1 == '\0') {
    uVar3 = FUN_1800f5180(plVar2 + 4,param_4);
    uStack_20 = (uint)(-1 < (char)uVar3);
    plVar5 = plVar2 + 2;
    if (-1 < (char)uVar3) {
      plVar6 = plVar2;
      plVar5 = plVar2;
    }
    cVar1 = *(char *)(*plVar5 + 0x19);
    plVar5 = (longlong *)*plVar5;
    plVar4 = plVar2;
  }
  if ((*(char *)((longlong)plVar6 + 0x19) == '\0') &&
     (uVar3 = FUN_1800f5180(param_4,plVar6 + 4), -1 < (char)uVar3)) {
    *param_2 = (longlong)plVar6;
    *(int32_t *)(param_2 + 1) = 2;
    *(int32_t *)(param_2 + 2) = 1;
  }
  else {
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = (longlong)plVar4;
    param_2[1] = CONCAT44(uStack_1c,uStack_20);
  }
  return param_2;
}

