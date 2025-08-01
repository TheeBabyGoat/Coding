#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_180116710 ----
int32_t * FUN_180116710(int32_t *param_1,int32_t *param_2,int32_t *param_3)

{
  ulonglong *puVar1;
  int32_t *puVar2;
  code *pcVar3;
  int32_t uVar4;
  int32_t *puVar5;
  ulonglong uVar6;
  
  puVar1 = (ulonglong *)(param_1 + 0x22);
  *param_1 = *param_2;
  uVar4 = param_3[1];
  *(int32_t *)(param_1 + 2) = *param_3;
  *(int32_t *)(param_1 + 4) = uVar4;
  uVar4 = param_3[3];
  *(int32_t *)(param_1 + 6) = param_3[2];
  *(int32_t *)(param_1 + 8) = uVar4;
  uVar4 = param_3[5];
  *(int32_t *)(param_1 + 10) = param_3[4];
  *(int32_t *)(param_1 + 0xc) = uVar4;
  uVar4 = param_3[7];
  *(int32_t *)(param_1 + 0xe) = param_3[6];
  *(int32_t *)(param_1 + 0x10) = uVar4;
  uVar4 = param_3[9];
  *(int32_t *)(param_1 + 0x12) = param_3[8];
  *(int32_t *)(param_1 + 0x14) = uVar4;
  uVar4 = param_3[0xb];
  *(int32_t *)(param_1 + 0x16) = param_3[10];
  *(int32_t *)(param_1 + 0x18) = uVar4;
  uVar4 = param_3[0xd];
  *(int32_t *)(param_1 + 0x1a) = param_3[0xc];
  *(int32_t *)(param_1 + 0x1c) = uVar4;
  uVar4 = param_3[0xf];
  *(int32_t *)(param_1 + 0x1e) = param_3[0xe];
  *(int32_t *)(param_1 + 0x20) = uVar4;
  *puVar1 = 0;
  *(int32_t *)(param_1 + 0x24) = 0;
  *(int32_t *)(param_1 + 0x26) = 0;
  uVar6 = (longlong)(param_3[0x11] - param_3[0x10]) >> 2;
  if (uVar6 != 0) {
    if (0x3fffffffffffffff < uVar6) {
      FUN_1800aa480();
      pcVar3 = (code *)swi(3);
      puVar5 = (int32_t *)(*pcVar3)();
      return puVar5;
    }
    FUN_180103030(puVar1,uVar6);
    puVar2 = (int32_t *)*puVar1;
    uVar6 = param_3[0x11] - (longlong)param_3[0x10];
    FUN_180150fd0(puVar2,(int32_t *)param_3[0x10],uVar6);
    *(longlong *)(param_1 + 0x24) = (longlong)puVar2 + ((longlong)uVar6 >> 2) * 4;
  }
  uVar4 = param_3[0x14];
  *(int32_t *)(param_1 + 0x28) = param_3[0x13];
  *(int32_t *)(param_1 + 0x2a) = uVar4;
  uVar4 = param_3[0x16];
  *(int32_t *)(param_1 + 0x2c) = param_3[0x15];
  *(int32_t *)(param_1 + 0x2e) = uVar4;
  uVar4 = param_3[0x18];
  *(int32_t *)(param_1 + 0x30) = param_3[0x17];
  *(int32_t *)(param_1 + 0x32) = uVar4;
  *(int32_t *)(param_1 + 0x34) = param_3[0x19];
  param_1[0x36] = *(int32_t *)(param_3 + 0x1a);
  uVar4 = *(int32_t *)((longlong)param_3 + 0xdc);
  *(int32_t *)(param_1 + 0x37) = *(int32_t *)((longlong)param_3 + 0xd4);
  *(int32_t *)(param_1 + 0x39) = uVar4;
  uVar4 = *(int32_t *)((longlong)param_3 + 0xec);
  *(int32_t *)(param_1 + 0x3b) = *(int32_t *)((longlong)param_3 + 0xe4);
  *(int32_t *)(param_1 + 0x3d) = uVar4;
  uVar4 = *(int32_t *)((longlong)param_3 + 0xfc);
  *(int32_t *)(param_1 + 0x3f) = *(int32_t *)((longlong)param_3 + 0xf4);
  *(int32_t *)(param_1 + 0x41) = uVar4;
  uVar4 = *(int32_t *)((longlong)param_3 + 0x10c);
  *(int32_t *)(param_1 + 0x43) = *(int32_t *)((longlong)param_3 + 0x104);
  *(int32_t *)(param_1 + 0x45) = uVar4;
  param_1[0x47] = *(int32_t *)((longlong)param_3 + 0x114);
  uVar4 = param_3[0x24];
  *(int32_t *)(param_1 + 0x48) = param_3[0x23];
  *(int32_t *)(param_1 + 0x4a) = uVar4;
  uVar4 = param_3[0x26];
  *(int32_t *)(param_1 + 0x4c) = param_3[0x25];
  *(int32_t *)(param_1 + 0x4e) = uVar4;
  uVar4 = param_3[0x28];
  *(int32_t *)(param_1 + 0x50) = param_3[0x27];
  *(int32_t *)(param_1 + 0x52) = uVar4;
  uVar4 = param_3[0x2a];
  *(int32_t *)(param_1 + 0x54) = param_3[0x29];
  *(int32_t *)(param_1 + 0x56) = uVar4;
  uVar4 = param_3[0x2c];
  *(int32_t *)(param_1 + 0x58) = param_3[0x2b];
  *(int32_t *)(param_1 + 0x5a) = uVar4;
  *(int32_t *)(param_1 + 0x5c) = param_3[0x2d];
  param_1[0x5e] = *(int32_t *)(param_3 + 0x2e);
  uVar4 = *(int32_t *)((longlong)param_3 + 0x17c);
  *(int32_t *)(param_1 + 0x5f) = *(int32_t *)((longlong)param_3 + 0x174);
  *(int32_t *)(param_1 + 0x61) = uVar4;
  uVar4 = *(int32_t *)((longlong)param_3 + 0x18c);
  *(int32_t *)(param_1 + 99) = *(int32_t *)((longlong)param_3 + 0x184);
  *(int32_t *)(param_1 + 0x65) = uVar4;
  *(int32_t *)(param_1 + 0x67) = *(int32_t *)((longlong)param_3 + 0x194);
  param_1[0x69] = *(int32_t *)((longlong)param_3 + 0x19c);
  uVar4 = param_3[0x35];
  *(int32_t *)(param_1 + 0x6a) = param_3[0x34];
  *(int32_t *)(param_1 + 0x6c) = uVar4;
  uVar4 = param_3[0x37];
  *(int32_t *)(param_1 + 0x6e) = param_3[0x36];
  *(int32_t *)(param_1 + 0x70) = uVar4;
  uVar4 = param_3[0x39];
  *(int32_t *)(param_1 + 0x72) = param_3[0x38];
  *(int32_t *)(param_1 + 0x74) = uVar4;
  uVar4 = param_3[0x3b];
  *(int32_t *)(param_1 + 0x76) = param_3[0x3a];
  *(int32_t *)(param_1 + 0x78) = uVar4;
  uVar4 = param_3[0x3d];
  *(int32_t *)(param_1 + 0x7a) = param_3[0x3c];
  *(int32_t *)(param_1 + 0x7c) = uVar4;
  uVar4 = param_3[0x3f];
  *(int32_t *)(param_1 + 0x7e) = param_3[0x3e];
  *(int32_t *)(param_1 + 0x80) = uVar4;
  *(int32_t *)(param_1 + 0x82) = param_3[0x40];
  param_1[0x84] = *(int32_t *)(param_3 + 0x41);
  uVar4 = *(int32_t *)((longlong)param_3 + 0x214);
  *(int32_t *)(param_1 + 0x85) = *(int32_t *)((longlong)param_3 + 0x20c);
  *(int32_t *)(param_1 + 0x87) = uVar4;
  uVar4 = *(int32_t *)((longlong)param_3 + 0x224);
  *(int32_t *)(param_1 + 0x89) = *(int32_t *)((longlong)param_3 + 0x21c);
  *(int32_t *)(param_1 + 0x8b) = uVar4;
  *(int32_t *)(param_1 + 0x8d) = *(int32_t *)((longlong)param_3 + 0x22c);
  uVar4 = *(int32_t *)((longlong)param_3 + 0x23c);
  *(int32_t *)(param_1 + 0x8f) = *(int32_t *)((longlong)param_3 + 0x234);
  *(int32_t *)(param_1 + 0x91) = uVar4;
  param_1[0x93] = *(int32_t *)((longlong)param_3 + 0x244);
  uVar4 = param_3[0x4a];
  *(int32_t *)(param_1 + 0x94) = param_3[0x49];
  *(int32_t *)(param_1 + 0x96) = uVar4;
  uVar4 = param_3[0x4c];
  *(int32_t *)(param_1 + 0x98) = param_3[0x4b];
  *(int32_t *)(param_1 + 0x9a) = uVar4;
  uVar4 = param_3[0x4e];
  *(int32_t *)(param_1 + 0x9c) = param_3[0x4d];
  *(int32_t *)(param_1 + 0x9e) = uVar4;
  uVar4 = param_3[0x50];
  *(int32_t *)(param_1 + 0xa0) = param_3[0x4f];
  *(int32_t *)(param_1 + 0xa2) = uVar4;
  uVar4 = param_3[0x52];
  *(int32_t *)(param_1 + 0xa4) = param_3[0x51];
  *(int32_t *)(param_1 + 0xa6) = uVar4;
  *(int32_t *)(param_1 + 0xa8) = param_3[0x53];
  *(int32_t *)(param_1 + 0xaa) = param_3[0x54];
  uVar4 = param_3[0x56];
  *(int32_t *)(param_1 + 0xac) = param_3[0x55];
  *(int32_t *)(param_1 + 0xae) = uVar4;
  param_1[0xb0] = *(int32_t *)(param_3 + 0x57);
  FUN_180150fd0((int32_t *)(param_1 + 0xb1),(int32_t *)((longlong)param_3 + 700),0x1c20);
  return param_1;
}

// ---- Function: FUN_180116ab0 ----
int32_t * FUN_180116ab0(int32_t param_1,int32_t *param_2,byte *param_3)

{
  int iVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  code *pcVar4;
  longlong lVar5;
  void *pvVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  int32_t *puVar9;
  
  uVar8 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar7 = *(int32_t **)(DAT_1801ec418 + 8 + (uVar8 & DAT_1801ec430) * 0x10);
  puVar9 = DAT_1801ec408;
  if (puVar7 != DAT_1801ec408) {
    iVar1 = *(int *)(puVar7 + 2);
    puVar9 = puVar7;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar9;
        *(int32_t *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == *(int32_t **)(DAT_1801ec418 + (uVar8 & DAT_1801ec430) * 0x10)) break;
      puVar9 = (int32_t *)puVar9[1];
      iVar1 = *(int *)(puVar9 + 2);
    }
  }
  if (DAT_1801ec410 == 0x84432a1b61e7b) {
    FUN_180123338(0x1801cc0f0);
LAB_180116d10:
    FUN_18012b7b4();
    pcVar4 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar4)();
    return puVar7;
  }
  pvVar6 = operator_new(0x1f1f);
  if (pvVar6 == (void *)0x0) goto LAB_180116d10;
  puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
  puVar7[-1] = pvVar6;
  *(int32_t *)(puVar7 + 2) = *(int32_t *)param_3;
  FUN_180102b40(puVar7 + 3,(int32_t *)(param_3 + 8));
  if (_DAT_1801ec400 < (float)(DAT_1801ec410 + 1) / (float)DAT_1801ec438) {
    FUN_1800de120();
    puVar2 = *(int32_t **)(DAT_1801ec418 + 8 + (DAT_1801ec430 & uVar8) * 0x10);
    puVar9 = DAT_1801ec408;
    if (puVar2 != DAT_1801ec408) {
      iVar1 = *(int *)(puVar2 + 2);
      puVar9 = puVar2;
      while (*(int *)(puVar7 + 2) != iVar1) {
        if (puVar9 == *(int32_t **)(DAT_1801ec418 + (DAT_1801ec430 & uVar8) * 0x10))
        goto LAB_180116c98;
        puVar9 = (int32_t *)puVar9[1];
        iVar1 = *(int *)(puVar9 + 2);
      }
      puVar9 = (int32_t *)*puVar9;
    }
  }
LAB_180116c98:
  puVar2 = (int32_t *)puVar9[1];
  DAT_1801ec410 = DAT_1801ec410 + 1;
  *puVar7 = puVar9;
  puVar7[1] = puVar2;
  *puVar2 = puVar7;
  puVar9[1] = puVar7;
  lVar5 = DAT_1801ec418;
  uVar8 = DAT_1801ec430 & uVar8;
  puVar3 = *(int32_t **)(DAT_1801ec418 + uVar8 * 0x10);
  if (puVar3 == DAT_1801ec408) {
    *(int32_t **)(DAT_1801ec418 + uVar8 * 0x10) = puVar7;
  }
  else {
    if (puVar3 == puVar9) {
      *(int32_t **)(DAT_1801ec418 + uVar8 * 0x10) = puVar7;
      goto LAB_180116cf7;
    }
    if (*(int32_t **)(DAT_1801ec418 + 8 + uVar8 * 0x10) != puVar2) goto LAB_180116cf7;
  }
  *(int32_t **)(lVar5 + 8 + uVar8 * 0x10) = puVar7;
LAB_180116cf7:
  *param_2 = puVar7;
  *(int32_t *)(param_2 + 1) = 1;
  return param_2;
}

// ---- Function: FUN_180116d20 ----
int32_t * FUN_180116d20(int32_t param_1,int32_t *param_2,byte *param_3)

{
  int iVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  code *pcVar4;
  int32_t uVar5;
  longlong lVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  int32_t *puVar9;
  
  uVar8 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar7 = *(int32_t **)(DAT_1801f7318 + 8 + (uVar8 & DAT_1801f7330) * 0x10);
  puVar9 = DAT_1801f7308;
  if (puVar7 != DAT_1801f7308) {
    iVar1 = *(int *)(puVar7 + 2);
    puVar9 = puVar7;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar9;
        *(int32_t *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == *(int32_t **)(DAT_1801f7318 + (uVar8 & DAT_1801f7330) * 0x10)) break;
      puVar9 = (int32_t *)puVar9[1];
      iVar1 = *(int *)(puVar9 + 2);
    }
  }
  if (DAT_1801f7310 == 0x7ffffffffffffff) {
    FUN_180123338(0x1801cc0f0);
    pcVar4 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar4)();
    return puVar7;
  }
  puVar7 = (int32_t *)operator_new(0x20);
  uVar5 = *(int32_t *)(param_3 + 8);
  puVar7[2] = *(int32_t *)param_3;
  puVar7[3] = uVar5;
  if (_DAT_1801f7300 < (float)(DAT_1801f7310 + 1) / (float)DAT_1801f7338) {
    FUN_1800c65a0((float *)&DAT_1801f7300);
    puVar2 = *(int32_t **)(DAT_1801f7318 + 8 + (DAT_1801f7330 & uVar8) * 0x10);
    puVar9 = DAT_1801f7308;
    if (puVar2 != DAT_1801f7308) {
      iVar1 = *(int *)(puVar2 + 2);
      puVar9 = puVar2;
      while (*(int *)(puVar7 + 2) != iVar1) {
        if (puVar9 == *(int32_t **)(DAT_1801f7318 + (DAT_1801f7330 & uVar8) * 0x10))
        goto LAB_180116eec;
        puVar9 = (int32_t *)puVar9[1];
        iVar1 = *(int *)(puVar9 + 2);
      }
      puVar9 = (int32_t *)*puVar9;
    }
  }
LAB_180116eec:
  puVar2 = (int32_t *)puVar9[1];
  DAT_1801f7310 = DAT_1801f7310 + 1;
  *puVar7 = puVar9;
  puVar7[1] = puVar2;
  *puVar2 = puVar7;
  puVar9[1] = puVar7;
  lVar6 = DAT_1801f7318;
  uVar8 = DAT_1801f7330 & uVar8;
  puVar3 = *(int32_t **)(DAT_1801f7318 + uVar8 * 0x10);
  if (puVar3 == DAT_1801f7308) {
    *(int32_t **)(DAT_1801f7318 + uVar8 * 0x10) = puVar7;
  }
  else {
    if (puVar3 == puVar9) {
      *(int32_t **)(DAT_1801f7318 + uVar8 * 0x10) = puVar7;
      goto LAB_180116f4b;
    }
    if (*(int32_t **)(DAT_1801f7318 + 8 + uVar8 * 0x10) != puVar2) goto LAB_180116f4b;
  }
  *(int32_t **)(lVar6 + 8 + uVar8 * 0x10) = puVar7;
LAB_180116f4b:
  *param_2 = puVar7;
  *(int32_t *)(param_2 + 1) = 1;
  return param_2;
}

// ---- Function: FUN_180116f70 ----
void FUN_180116f70(int32_t param_1,HMODULE param_2)

{
  int iVar1;
  longlong lVar2;
  HMODULE pHVar3;
  int *piVar4;
  uint uVar5;
  HMODULE pHVar6;
  int32_t local_res8;
  HMODULE local_res10;
  FILE *local_res18 [2];
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x10);
  local_res8 = param_1;
  local_res10 = param_2;
  if ((*piVar4 < DAT_1801fcf80) && (FUN_180125398(&DAT_1801fcf80), DAT_1801fcf80 == -1)) {
    DAT_1801fcf88 = GetModuleHandleW((LPCWSTR)0x0);
    pHVar3 = (HMODULE)0x0;
    DAT_1801fcf90 = (HMODULE)0x0;
    iVar1 = DAT_1801fcf88[0xf].unused;
    pHVar6 = pHVar3;
    if (*(short *)((longlong)&DAT_1801fcf88[1].unused + (longlong)iVar1 + 2) != 0) {
      do {
        lVar2 = (longlong)pHVar6 * 5 +
                (ulonglong)*(uint *)((longlong)&DAT_1801fcf88[0x21].unused + (longlong)iVar1);
        uVar5 = *(uint *)((longlong)&DAT_1801fcf88[lVar2 * 2 + 0x26].unused + (longlong)iVar1);
        if (uVar5 == 0) {
          uVar5 = *(uint *)((longlong)&DAT_1801fcf88[lVar2 * 2 + 0x24].unused + (longlong)iVar1);
        }
        if ((*(uint *)((longlong)&DAT_1801fcf88[lVar2 * 2 + 0x2b].unused + (longlong)iVar1) &
            0x20000000) != 0) {
          pHVar3 = (HMODULE)((longlong)&DAT_1801fcf88->unused +
                            (ulonglong)
                            *(uint *)((longlong)&DAT_1801fcf88[lVar2 * 2 + 0x25].unused +
                                     (longlong)iVar1) + (ulonglong)uVar5);
          DAT_1801fcf90 = pHVar3;
        }
        if (((int)pHVar6 ==
             *(ushort *)((longlong)&DAT_1801fcf88[1].unused + (longlong)iVar1 + 2) - 1) &&
           (pHVar3 == (HMODULE)0x0)) {
          pHVar3 = (HMODULE)((longlong)&DAT_1801fcf88->unused +
                            (ulonglong)
                            *(uint *)((longlong)&DAT_1801fcf88[lVar2 * 2 + 0x27].unused +
                                     (longlong)iVar1) + (ulonglong)uVar5);
          DAT_1801fcf90 = pHVar3;
        }
        uVar5 = (int)pHVar6 + 1;
        pHVar6 = (HMODULE)(ulonglong)uVar5;
      } while ((int)uVar5 <
               (int)(uint)*(ushort *)((longlong)&DAT_1801fcf88[1].unused + (longlong)iVar1 + 2));
    }
    _Init_thread_footer(&DAT_1801fcf80);
  }
  if ((*piVar4 < DAT_1801fcf98) && (FUN_180125398(&DAT_1801fcf98), DAT_1801fcf98 == -1)) {
    DAT_1801fcfa0 = DAT_1801fcf88;
    if (((HMODULE)(DAT_1801ee910 + 0x140000000U) <= DAT_1801fcf88) &&
       (DAT_1801fcf88 <= (HMODULE)(DAT_1801ee910 + 0x146000000U))) {
      DAT_1801fcfa0 = (HMODULE)((longlong)DAT_1801fcf88 - DAT_1801ee910);
    }
    _Init_thread_footer(&DAT_1801fcf98);
  }
  if ((*piVar4 < DAT_1801fcfa8) && (FUN_180125398(&DAT_1801fcfa8), DAT_1801fcfa8 == -1)) {
    DAT_1801fcfb0 = DAT_1801fcf90;
    if (((HMODULE)(DAT_1801ee910 + 0x140000000U) <= DAT_1801fcf90) &&
       (DAT_1801fcf90 <= (HMODULE)(DAT_1801ee910 + 0x146000000U))) {
      DAT_1801fcfb0 = (HMODULE)((longlong)DAT_1801fcf90 - DAT_1801ee910);
    }
    _Init_thread_footer(&DAT_1801fcfa8);
  }
  if ((((DAT_1801fcfa0 <= local_res10) && (local_res10 < DAT_1801fcfb0)) && (DAT_1801ee942 != '\0'))
     && (fopen_s(local_res18,DAT_1801f39b8,"ab"), local_res18[0] != (FILE *)0x0)) {
    FUN_18012e4a0(&local_res8,1,8,(longlong)local_res18[0]);
    FUN_18012e4a0(&local_res10,1,8,(longlong)local_res18[0]);
    FUN_18012f050((int *)local_res18[0]);
  }
  return;
}

// ---- Function: FUN_1801171d0 ----
int32_t * FUN_1801171d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801fcfb8) {
    FUN_180125398(&DAT_1801fcfb8);
    if (DAT_1801fcfb8 == -1) {
      _DAT_1801fcfc0 = (void *)0x0;
      uRam00000001801fcfc8 = 0;
      _DAT_1801fcfc0 = operator_new(0x30);
      *(void **)_DAT_1801fcfc0 = _DAT_1801fcfc0;
      *(void **)((longlong)_DAT_1801fcfc0 + 8) = _DAT_1801fcfc0;
      *(void **)((longlong)_DAT_1801fcfc0 + 0x10) = _DAT_1801fcfc0;
      *(int32_t *)((longlong)_DAT_1801fcfc0 + 0x18) = 0x101;
      atexit((_func_5014 *)&LAB_180156900);
      _Init_thread_footer(&DAT_1801fcfb8);
    }
  }
  return &DAT_1801fcfc0;
}

// ---- Function: FUN_180117260 ----
void FUN_180117260(int32_t *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  ulonglong uVar2;
  bool bVar3;
  byte bVar4;
  longlong *plVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong *plVar8;
  int32_t uVar9;
  char *pcVar10;
  char *pcVar11;
  
  pcVar10 = (char *)*param_1;
  bVar7 = 0;
  bVar3 = false;
  pcVar11 = pcVar10 + param_1[1];
  plVar8 = param_3;
  do {
    if (pcVar10 == pcVar11) {
      return;
    }
    cVar1 = *pcVar10;
    if (cVar1 != ' ') {
      if (cVar1 == '?') {
        uVar6 = param_2[2];
        uVar2 = param_2[3];
        if (uVar6 < uVar2) {
          param_2[2] = uVar6 + 1;
          plVar5 = param_2;
          if (0xf < uVar2) {
            plVar5 = (longlong *)*param_2;
          }
          *(int32_t *)((longlong)plVar5 + uVar6) = 0;
        }
        else {
          FUN_180117b50(param_2,uVar2,plVar8,0);
        }
        uVar2 = param_3[2];
        uVar6 = param_3[3];
        if (uVar2 < uVar6) {
          param_3[2] = uVar2 + 1;
          plVar5 = param_3;
          if (0xf < uVar6) {
            plVar5 = (longlong *)*param_3;
          }
          *(int32_t *)((longlong)plVar5 + uVar2) = 0;
        }
        else {
          uVar9 = 0;
LAB_1801173c9:
          FUN_180117b50(param_3,uVar6,plVar8,uVar9);
        }
      }
      else if ((((byte)(cVar1 - 0x30U) < 10) || ((byte)(cVar1 + 0xbfU) < 6)) ||
              ((byte)(cVar1 + 0x9fU) < 6)) {
        if ((byte)(cVar1 + 0xbfU) < 6) {
          bVar4 = cVar1 - 0x37;
        }
        else if ((byte)(cVar1 + 0x9fU) < 6) {
          bVar4 = cVar1 + 0xa9;
        }
        else {
          bVar4 = cVar1 - 0x30;
        }
        if (bVar3) {
          uVar6 = param_2[2];
          bVar7 = bVar7 | bVar4;
          uVar2 = param_2[3];
          bVar3 = false;
          if (uVar6 < uVar2) {
            param_2[2] = uVar6 + 1;
            plVar5 = param_2;
            if (0xf < uVar2) {
              plVar5 = (longlong *)*param_2;
            }
            *(byte *)((longlong)plVar5 + uVar6) = bVar7;
            *(int32_t *)((longlong)plVar5 + uVar6 + 1) = 0;
          }
          else {
            FUN_180117b50(param_2,uVar2,plVar8,bVar7);
          }
          uVar2 = param_3[2];
          uVar6 = param_3[3];
          if (uVar6 <= uVar2) {
            uVar9 = 0xff;
            goto LAB_1801173c9;
          }
          param_3[2] = uVar2 + 1;
          plVar5 = param_3;
          if (0xf < uVar6) {
            plVar5 = (longlong *)*param_3;
          }
          *(int32_t *)((longlong)plVar5 + uVar2) = 0xff;
        }
        else {
          bVar3 = true;
          bVar7 = bVar4 << 4;
        }
      }
    }
    pcVar10 = pcVar10 + 1;
  } while( true );
}

// ---- Function: FUN_180117400 ----
void FUN_180117400(longlong *param_1,int32_t *param_2)

{
  char cVar1;
  HMODULE pHVar2;
  HMODULE pHVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  char *pcVar9;
  char *pcVar10;
  longlong local_res8;
  int32_t local_28;
  int32_t uStack_20;
  
  pcVar9 = (char *)*param_2;
  uVar8 = 0xcbf29ce484222325;
  pcVar10 = pcVar9 + param_2[1];
  for (; pcVar9 != pcVar10; pcVar9 = pcVar9 + 1) {
    uVar8 = uVar8 * 0x100000001b3 ^ (longlong)*pcVar9;
  }
  local_28 = *param_2;
  uStack_20 = param_2[1];
  param_1[8] = uVar8;
  FUN_180117260(&local_28,param_1,param_1 + 4);
  pHVar2 = (HMODULE)param_1[0xd];
  pHVar3 = GetModuleHandleW((LPCWSTR)0x0);
  if (pHVar2 == pHVar3) {
    plVar4 = (longlong *)FUN_1801171d0();
    plVar4 = (longlong *)*plVar4;
    plVar5 = (longlong *)plVar4[1];
    plVar7 = plVar4;
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      plVar6 = plVar5;
      do {
        if ((ulonglong)plVar6[4] < (ulonglong)param_1[8]) {
          plVar6 = plVar6 + 2;
        }
        else {
          plVar4 = plVar6;
          if ((*(char *)((longlong)plVar7 + 0x19) != '\0') &&
             ((ulonglong)param_1[8] < (ulonglong)plVar6[4])) {
            plVar7 = plVar6;
          }
        }
        plVar6 = (longlong *)*plVar6;
      } while (*(char *)((longlong)plVar6 + 0x19) == '\0');
    }
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar5 = (longlong *)*plVar7;
    }
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      plVar6 = plVar7;
      do {
        plVar7 = plVar5;
        if ((ulonglong)plVar5[4] <= (ulonglong)param_1[8]) {
          plVar5 = plVar5 + 2;
          plVar7 = plVar6;
        }
        plVar5 = (longlong *)*plVar5;
        plVar6 = plVar7;
      } while (*(char *)((longlong)plVar5 + 0x19) == '\0');
    }
    if (plVar4 != plVar7) {
      do {
        local_res8 = plVar4[5];
        if (local_res8 - 0x140000000U < 0x6000001) {
          local_res8 = local_res8 + DAT_1801ee910;
        }
        plVar5 = (longlong *)param_1[10];
        if (plVar5 == (longlong *)param_1[0xb]) {
          FUN_1800cac80(param_1 + 9,plVar5,&local_res8);
        }
        else {
          *plVar5 = local_res8;
          param_1[10] = param_1[10] + 8;
        }
        plVar5 = (longlong *)plVar4[2];
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x19);
          plVar4 = plVar5;
          plVar5 = (longlong *)*plVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar5 + 0x19);
            plVar4 = plVar5;
            plVar5 = (longlong *)*plVar5;
          }
        }
        else {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar6 = (longlong *)plVar4[1];
          plVar5 = plVar4;
          while ((plVar4 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar4[2]))) {
            cVar1 = *(char *)(plVar4[1] + 0x19);
            plVar6 = (longlong *)plVar4[1];
            plVar5 = plVar4;
          }
        }
      } while (plVar4 != plVar7);
      if (param_1[9] != param_1[10]) {
        *(int32_t *)(param_1 + 0xc) = 1;
      }
    }
  }
  return;
}

// ---- Function: FUN_1801175d0 ----
void FUN_1801175d0(int32_t *param_1,uint param_2)

{
  ushort uVar1;
  longlong lVar2;
  int32_t *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint *puVar8;
  longlong lVar9;
  HMODULE pHVar10;
  char *pcVar11;
  HMODULE pHVar12;
  char *pcVar13;
  ulonglong uVar14;
  int32_t *puVar15;
  longlong lVar16;
  int32_t auStack_8c8 [32];
  uint local_8a8;
  longlong local_8a0;
  HMODULE local_898;
  HMODULE local_890;
  HMODULE local_888;
  longlong local_880;
  int32_t *local_878;
  longlong local_870;
  int32_t local_868;
  longlong local_860;
  int32_t local_858;
  longlong local_850;
  int32_t local_848;
  longlong local_838 [256];
  ulonglong local_38;
  
  local_38 = DAT_1801eb080 ^ (ulonglong)auStack_8c8;
  local_8a8 = param_2;
  local_878 = param_1;
  if (*(char *)(param_1 + 0xc) != '\0') goto LAB_180117939;
  pHVar10 = (HMODULE)param_1[0xd];
  if (pHVar10 == (HMODULE)0x0) {
    if (param_1[0xe] == 0) goto LAB_180117939;
LAB_180117638:
    pcVar13 = (char *)0x0;
    iVar5 = pHVar10[0xf].unused;
    uVar1 = *(ushort *)((longlong)&pHVar10[1].unused + (longlong)iVar5 + 2);
    uVar14 = (ulonglong)uVar1;
    pcVar11 = pcVar13;
    if (uVar14 != 0) {
      puVar8 = (uint *)((longlong)
                        &pHVar10[(ulonglong)
                                 *(uint *)((longlong)&pHVar10[0x21].unused + (longlong)iVar5) * 2 +
                                 0x24].unused + (longlong)iVar5);
      do {
        uVar4 = puVar8[2];
        if (uVar4 == 0) {
          uVar4 = *puVar8;
        }
        if ((puVar8[7] & 0x20000000) != 0) {
          pcVar11 = (char *)((longlong)&pHVar10->unused + (ulonglong)puVar8[1] + (ulonglong)uVar4);
        }
        if (((int)pcVar13 == uVar1 - 1) && (pcVar11 == (char *)0x0)) {
          pcVar11 = (char *)((longlong)&pHVar10->unused + (ulonglong)puVar8[3] + (ulonglong)uVar4);
        }
        pcVar13 = (char *)(ulonglong)((int)pcVar13 + 1);
        puVar8 = puVar8 + 10;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  else {
    pcVar11 = (char *)param_1[0xe];
    if (pcVar11 == (char *)0x0) goto LAB_180117638;
  }
  lVar16 = 0;
  puVar15 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar15 = (int32_t *)*param_1;
  }
  plVar7 = param_1 + 4;
  local_8a0 = (longlong)plVar7;
  if (0xf < (ulonglong)param_1[7]) {
    local_8a0 = *plVar7;
  }
  lVar2 = param_1[6];
  if (0xf < (ulonglong)param_1[7]) {
    plVar7 = (longlong *)*plVar7;
  }
  pHVar12 = (HMODULE)0xffffffffffffffff;
  if (lVar2 != 0) {
    if ((HMODULE)(lVar2 + -1) != (HMODULE)0xffffffffffffffff) {
      pHVar12 = (HMODULE)(lVar2 + -1);
    }
    for (pcVar13 = (char *)((longlong)plVar7 + (longlong)&pHVar12->unused); *pcVar13 == -1;
        pcVar13 = pcVar13 + -1) {
      if ((longlong *)pcVar13 == plVar7) {
        pHVar12 = (HMODULE)0xffffffffffffffff;
        goto LAB_180117706;
      }
    }
    pHVar12 = (HMODULE)(pcVar13 + -(longlong)plVar7);
  }
LAB_180117706:
  if (pHVar12 == (HMODULE)0xffffffffffffffff) {
    pHVar12 = (HMODULE)0xffffffffffffffff;
  }
  local_898 = (HMODULE)0x0;
  local_890 = pHVar12;
  iVar5 = memcmp(&local_890,&local_898,8);
  if (iVar5 == 0) {
    FUN_180151670((int32_t (*) [32])local_838,0,0x800);
  }
  else {
    lVar9 = 0x20;
    plVar7 = local_838;
    do {
      *plVar7 = (longlong)pHVar12;
      plVar7[1] = (longlong)pHVar12;
      plVar7[2] = (longlong)pHVar12;
      plVar7[3] = (longlong)pHVar12;
      plVar7[4] = (longlong)pHVar12;
      plVar7[5] = (longlong)pHVar12;
      plVar7[6] = (longlong)pHVar12;
      plVar7[7] = (longlong)pHVar12;
      lVar9 = lVar9 + -1;
      plVar7 = plVar7 + 8;
    } while (lVar9 != 0);
  }
  lVar9 = local_8a0;
  if (0 < lVar2) {
    do {
      plVar7 = local_838 + *(byte *)((longlong)puVar15 + lVar16);
      lVar6 = lVar16;
      if (lVar16 <= *plVar7) {
        lVar6 = *plVar7;
      }
      *plVar7 = lVar6;
      lVar16 = lVar16 + 1;
    } while (lVar16 < lVar2);
  }
  while (local_888 = pHVar10, lVar16 = lVar2, pHVar10 <= (HMODULE)(pcVar11 + -lVar2)) {
    do {
      local_880 = lVar16 + -1;
      local_890 = pHVar10;
      if (local_880 < 0) goto LAB_18011780d;
      lVar16 = local_880;
    } while (*(byte *)(local_880 + (longlong)puVar15) ==
             (*(byte *)(local_880 + (longlong)pHVar10) & *(byte *)(local_880 + lVar9)));
    if (local_880 < 0) {
LAB_18011780d:
      puVar3 = (int32_t *)param_1[10];
      if (puVar3 == (int32_t *)param_1[0xb]) {
        FUN_1800cac80(param_1 + 9,puVar3,&local_890);
      }
      else {
        *puVar3 = pHVar10;
        param_1[10] = param_1[10] + 8;
      }
      plVar7 = (longlong *)FUN_1801171d0();
      local_898 = pHVar10;
      if (((HMODULE)(DAT_1801ee910 + 0x140000000) <= pHVar10) &&
         (pHVar10 <= (HMODULE)(DAT_1801ee910 + 0x146000000U))) {
        local_898 = (HMODULE)((longlong)pHVar10 - DAT_1801ee910);
      }
      FUN_180117cc0(plVar7,&local_870,param_1 + 8,(longlong *)&local_898);
      local_8a0 = local_870;
      local_850 = local_870;
      local_848 = local_868;
      pHVar12 = pHVar10;
      if (((HMODULE)(DAT_1801ee910 + 0x140000000) <= pHVar10) &&
         (pHVar10 <= (HMODULE)(DAT_1801ee910 + 0x146000000))) {
        pHVar12 = (HMODULE)((longlong)pHVar10 - DAT_1801ee910);
      }
      FUN_180116f70(param_1[8],pHVar12);
      if ((longlong)(param_1[10] - param_1[9]) >> 3 == (ulonglong)local_8a8) break;
      pHVar10 = (HMODULE)((longlong)&pHVar10->unused + 1);
    }
    else {
      local_860 = local_880 - local_838[*(byte *)(local_880 + (longlong)pHVar10)];
      local_858 = 1;
      lVar16 = 1;
      if (1 < local_860) {
        lVar16 = local_860;
      }
      pHVar10 = (HMODULE)((longlong)&pHVar10->unused + lVar16);
    }
  }
  *(int32_t *)(param_1 + 0xc) = 1;
LAB_180117939:
  FUN_1801252c0(local_38 ^ (ulonglong)auStack_8c8);
  return;
}

// ---- Function: FUN_180117970 ----
void FUN_180117970(ulonglong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  uint uStack_20;
  int32_t uStack_1c;
  
  plVar4 = (longlong *)FUN_1801171d0();
  plVar4 = (longlong *)*plVar4;
  plVar6 = (longlong *)plVar4[1];
  cVar1 = *(char *)((longlong)plVar6 + 0x19);
  plVar7 = plVar4;
  plVar5 = plVar6;
  while (cVar1 == '\0') {
    if ((ulonglong)plVar5[4] < param_1) {
      plVar9 = plVar5 + 2;
      plVar5 = plVar7;
    }
    else {
      plVar9 = plVar5;
      if ((*(char *)((longlong)plVar4 + 0x19) != '\0') && (param_1 < (ulonglong)plVar5[4])) {
        plVar4 = plVar5;
      }
    }
    plVar7 = plVar5;
    plVar5 = (longlong *)*plVar9;
    cVar1 = *(char *)(*plVar9 + 0x19);
  }
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    plVar6 = (longlong *)*plVar4;
  }
  cVar1 = *(char *)((longlong)plVar6 + 0x19);
  while (cVar1 == '\0') {
    plVar5 = plVar6;
    if ((ulonglong)plVar6[4] <= param_1) {
      plVar6 = plVar6 + 2;
      plVar5 = plVar4;
    }
    plVar6 = (longlong *)*plVar6;
    plVar4 = plVar5;
    cVar1 = *(char *)((longlong)plVar6 + 0x19);
  }
  while (plVar7 != plVar4) {
    if (plVar7[5] == param_2) {
      return;
    }
    plVar6 = (longlong *)plVar7[2];
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar6 + 0x19);
      plVar7 = plVar6;
      plVar6 = (longlong *)*plVar6;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x19);
        plVar7 = plVar6;
        plVar6 = (longlong *)*plVar6;
      }
    }
    else {
      cVar1 = *(char *)(plVar7[1] + 0x19);
      plVar5 = (longlong *)plVar7[1];
      plVar6 = plVar7;
      while ((plVar7 = plVar5, cVar1 == '\0' && (plVar6 == (longlong *)plVar7[2]))) {
        cVar1 = *(char *)(plVar7[1] + 0x19);
        plVar5 = (longlong *)plVar7[1];
        plVar6 = plVar7;
      }
    }
  }
  plVar6 = (longlong *)FUN_1801171d0();
  lVar2 = *plVar6;
  uVar8 = 0;
  plStack_30 = (longlong *)0x0;
  local_38 = plVar6;
  plStack_30 = (longlong *)operator_new(0x30);
  plStack_30[4] = param_1;
  plStack_30[5] = param_2;
  *plStack_30 = lVar2;
  plStack_30[1] = lVar2;
  plStack_30[2] = lVar2;
  *(int32_t *)(plStack_30 + 3) = 0;
  local_28 = *(longlong **)(*plVar6 + 8);
  plVar4 = local_28;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    do {
      local_28 = plVar4;
      plVar7 = local_28;
      if ((ulonglong)local_28[4] <= param_1) {
        plVar7 = local_28 + 2;
      }
      plVar4 = (longlong *)*plVar7;
    } while (*(char *)(*plVar7 + 0x19) == '\0');
    uVar8 = (uint)(param_1 < (ulonglong)local_28[4]);
  }
  uStack_20 = uVar8;
  if (plVar6[1] != 0x555555555555555) {
    local_38 = local_28;
    plVar4 = plStack_30;
    plStack_30 = (longlong *)CONCAT44(uStack_1c,uVar8);
    FUN_1800d86d0(plVar6,(longlong *)&local_38,plVar4);
    return;
  }
  FUN_1800d8950();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// ---- Function: FUN_180117b50 ----
int32_t *
FUN_180117b50(int32_t *param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  code *pcVar5;
  void *pvVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int32_t *puVar10;
  
  uVar2 = param_1[2];
  uVar9 = 0x7fffffffffffffff;
  if (uVar2 == 0x7fffffffffffffff) {
    FUN_1800ba540();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar3 = param_1[3];
  uVar8 = uVar2 + 1 | 0xf;
  if ((uVar8 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar1 = uVar3 + (uVar3 >> 1);
    uVar9 = uVar8;
    if (uVar8 < uVar1) {
      uVar9 = uVar1;
    }
    uVar1 = uVar9 + 1;
    if (uVar1 == 0) {
      puVar7 = (int32_t *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar8 = uVar9 + 0x28;
        if (uVar8 <= uVar1) {
          FUN_1800ba8a0();
          pcVar5 = (code *)swi(3);
          puVar7 = (int32_t *)(*pcVar5)();
          return puVar7;
        }
        goto LAB_180117bf7;
      }
      puVar7 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar8 = 0x8000000000000027;
LAB_180117bf7:
    pvVar6 = operator_new(uVar8);
    if (pvVar6 == (void *)0x0) goto LAB_180117cab;
    puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = pvVar6;
  }
  param_1[2] = uVar2 + 1;
  param_1[3] = uVar9;
  if (uVar3 < 0x10) {
    FUN_180150fd0(puVar7,param_1,uVar2);
    *(int32_t *)(uVar2 + (longlong)puVar7) = param_4;
    *(int32_t *)(uVar2 + 1 + (longlong)puVar7) = 0;
  }
  else {
    puVar4 = (int32_t *)*param_1;
    FUN_180150fd0(puVar7,puVar4,uVar2);
    *(int32_t *)(uVar2 + (longlong)puVar7) = param_4;
    *(int32_t *)(uVar2 + 1 + (longlong)puVar7) = 0;
    puVar10 = puVar4;
    if ((0xfff < uVar3 + 1) &&
       (puVar10 = (int32_t *)puVar4[-1],
       0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar10)))) {
LAB_180117cab:
      FUN_18012b7b4();
      pcVar5 = (code *)swi(3);
      puVar7 = (int32_t *)(*pcVar5)();
      return puVar7;
    }
    thunk_FUN_18012d5e8(puVar10);
  }
  *param_1 = puVar7;
  return param_1;
}

// ---- Function: FUN_180117cc0 ----
int32_t *
FUN_180117cc0(longlong *param_1,int32_t *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  int32_t *puVar5;
  uint uVar6;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  uint uStack_30;
  int32_t uStack_2c;
  
  lVar1 = *param_1;
  uVar6 = 0;
  plStack_40 = (longlong *)0x0;
  local_48 = param_1;
  plStack_40 = (longlong *)operator_new(0x30);
  plStack_40[4] = *param_3;
  plStack_40[5] = *param_4;
  *plStack_40 = lVar1;
  plStack_40[1] = lVar1;
  plStack_40[2] = lVar1;
  *(int32_t *)(plStack_40 + 3) = 0;
  local_38 = *(longlong **)(*param_1 + 8);
  if (*(char *)((longlong)local_38 + 0x19) == '\0') {
    plVar4 = local_38;
    do {
      local_38 = plVar4;
      plVar3 = local_38;
      if ((ulonglong)local_38[4] <= (ulonglong)plStack_40[4]) {
        plVar3 = local_38 + 2;
      }
      plVar4 = (longlong *)*plVar3;
    } while (*(char *)(*plVar3 + 0x19) == '\0');
    uVar6 = (uint)((ulonglong)plStack_40[4] < (ulonglong)local_38[4]);
  }
  uStack_30 = uVar6;
  if (param_1[1] != 0x555555555555555) {
    local_48 = local_38;
    plVar4 = plStack_40;
    plStack_40 = (longlong *)CONCAT44(uStack_2c,uVar6);
    plVar4 = FUN_1800d86d0(param_1,(longlong *)&local_48,plVar4);
    *param_2 = plVar4;
    *(int32_t *)(param_2 + 1) = 1;
    return param_2;
  }
  FUN_1800d8950();
  pcVar2 = (code *)swi(3);
  puVar5 = (int32_t *)(*pcVar2)();
  return puVar5;
}

// ---- Function: FUN_180117dd0 ----
LPCVOID FUN_180117dd0(ulonglong param_1,LPCVOID param_2,ulonglong param_3)

{
  SIZE_T SVar1;
  LPCVOID lpAddress;
  PVOID pvVar2;
  _MEMORY_BASIC_INFORMATION local_38;
  
  pvVar2 = (PVOID)(param_3 & 0xffffffff);
  lpAddress = (LPCVOID)((param_1 - param_1 % (ulonglong)pvVar2) - (longlong)pvVar2);
  if (param_2 <= lpAddress) {
    while (SVar1 = VirtualQuery(lpAddress,&local_38,0x30), SVar1 != 0) {
      if (local_38.State == 0x10000) {
        return lpAddress;
      }
      if (local_38.AllocationBase < pvVar2) {
        return (LPCVOID)0x0;
      }
      lpAddress = (LPCVOID)((longlong)local_38.AllocationBase - (longlong)pvVar2);
      if (lpAddress < param_2) {
        return (LPCVOID)0x0;
      }
    }
  }
  return (LPCVOID)0x0;
}

// ---- Function: FUN_180117e60 ----
void FUN_180117e60(char param_1,int32_t param_2,int32_t **param_3)

{
  code *pcVar1;
  char *****pppppcVar2;
  char *****pppppcVar3;
  LPVOID pvVar4;
  char *_Mode;
  int32_t auStack_98 [32];
  LPVOID local_78;
  int32_t uStack_70;
  int32_t local_68;
  ulonglong uStack_60;
  FILE *local_58;
  char ****local_50;
  char ***pppcStack_48;
  char ***local_40;
  char ***pppcStack_38;
  longlong local_30 [4];
  ulonglong local_10;
  
  local_10 = DAT_1801eb080 ^ (ulonglong)auStack_98;
  pppcStack_48 = (char ***)0x0;
  local_40 = (char ***)0x0;
  pppcStack_38 = (char ***)0xf;
  local_50 = (char ****)0x0;
  local_68 = _DAT_1801d9020;
  uStack_60 = _UNK_1801d9028;
  local_78 = (LPVOID)s_settings_json_1801d8628._0_8_;
  uStack_70 = (ulonglong)CONCAT14(s_settings_json_1801d8628[0xc],s_settings_json_1801d8628._8_4_);
  pppppcVar2 = (char *****)FUN_18011cb10(local_30,&local_78,param_3);
  if (&local_50 == pppppcVar2) {
LAB_180117f65:
    FUN_1800a6800(local_30);
    if (0xf < uStack_60) {
      pvVar4 = local_78;
      if ((0xfff < uStack_60 + 1) &&
         (pvVar4 = *(LPVOID *)((longlong)local_78 + -8),
         0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pvVar4)))) goto LAB_180118041;
      thunk_FUN_18012d5e8(pvVar4);
    }
    pppppcVar2 = &local_50;
    if ((char ****)0xf < pppcStack_38) {
      pppppcVar2 = (char *****)local_50;
    }
    _Mode = "w";
    if (param_1 != '\0') {
      _Mode = "r";
    }
    fopen_s(&local_58,(char *)pppppcVar2,_Mode);
    if (pppcStack_38 < (char ****)0x10) {
LAB_180118011:
      FUN_1801252c0(local_10 ^ (ulonglong)auStack_98);
      return;
    }
    pppppcVar2 = (char *****)local_50;
    if (((longlong)pppcStack_38 + 1U < 0x1000) ||
       (pppppcVar2 = (char *****)local_50[-1],
       (char *)((longlong)local_50 + (-8 - (longlong)pppppcVar2)) < (char *)0x20)) {
      thunk_FUN_18012d5e8(pppppcVar2);
      goto LAB_180118011;
    }
    FUN_18012b7b4();
  }
  else {
    if (pppcStack_38 < (char ****)0x10) {
LAB_180117f2f:
      local_50 = *pppppcVar2;
      pppcStack_48 = (char ***)pppppcVar2[1];
      local_40 = (char ***)pppppcVar2[2];
      pppcStack_38 = (char ***)pppppcVar2[3];
      pppppcVar2[2] = (char ****)0x0;
      pppppcVar2[3] = (char ****)0xf;
      *(int32_t *)pppppcVar2 = 0;
      goto LAB_180117f65;
    }
    pppppcVar3 = (char *****)local_50;
    if (((longlong)pppcStack_38 + 1U < 0x1000) ||
       (pppppcVar3 = (char *****)local_50[-1],
       (char *)((longlong)local_50 + (-8 - (longlong)pppppcVar3)) < (char *)0x20)) {
      thunk_FUN_18012d5e8(pppppcVar3);
      goto LAB_180117f2f;
    }
  }
  FUN_18012b7b4();
LAB_180118041:
  FUN_18012b7b4();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_180118050 ----
void FUN_180118050(void)

{
  float fVar1;
  
  fVar1 = (float)FUN_1800bac30();
  DAT_1801f53c8 = DAT_1801f53c8 + fVar1;
  if (DAT_1801d8e98 < DAT_1801f53c8) {
    FUN_18011a880();
    DAT_1801f53c8 = 0.0;
  }
  return;
}

// ---- Function: FUN_180118090 ----
int * FUN_180118090(int32_t param_1,int32_t param_2,int32_t **param_3,int32_t *param_4)

{
  char cVar1;
  int *piVar2;
  longlong *plVar3;
  int32_t *puVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong *plVar7;
  char *pcVar8;
  int32_t *puVar9;
  int *local_res8;
  longlong *local_res10;
  char *local_res18;
  longlong local_res20;
  longlong local_d8;
  longlong lStack_d0;
  int32_t local_c8;
  int32_t local_c0;
  longlong local_b8 [4];
  char local_98 [8];
  longlong local_90;
  longlong local_88 [7];
  int32_t local_50;
  
  piVar2 = (int *)FUN_180117e60('\x01',param_2,param_3);
  if (piVar2 != (int *)0x0) {
    local_50 = 0;
    local_res8 = piVar2;
    FUN_1800ec930((int32_t **)local_98,&local_res8,local_88,param_4);
    FUN_18012f050(piVar2);
    if (local_98[0] == '\t') {
      piVar2 = (int *)0x0;
    }
    else {
      local_res10 = (longlong *)local_98;
      FUN_18011a0c0(&local_res10,(int32_t *)"checks","accepted_quant",&DAT_1801f3a3b);
      FUN_18011a0c0(&local_res10,(int32_t *)"checks","accepted_graphics_disclaimer",
                    &DAT_1801f3a3a);
      FUN_18011a290(&local_res10,(int32_t *)"clouds","clouds_technique",&DAT_1801ec1a4);
      plVar7 = local_res10;
      local_res18 = "clouds_speed";
      local_res8 = (int *)0x1801d8670;
      FUN_1800f93b0(local_res10,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_b8[0] = 0;
        local_b8[1] = 0;
        local_b8[2] = 0;
        local_b8[3] = 0;
        FUN_1800ba360(local_b8,(int32_t *)"clouds",6);
        pcVar5 = (char *)FUN_1800edd90(plVar7,local_b8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"clouds",6);
            plVar7 = (longlong *)FUN_1800edd90(plVar7,local_b8);
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"clouds_speed",0xc);
            pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ec1a8 = local_res8._0_4_;
          }
        }
      }
      FUN_18011a290(&local_res10,(int32_t *)"clouds","step_config",&DAT_1801ec180);
      FUN_18011a0c0(&local_res10,(int32_t *)"clouds","optimized_marching",&DAT_1801f39f6);
      FUN_18011a290(&local_res10,(int32_t *)"clouds_config","weather_extrasunny",&DAT_1801f39d8);
      FUN_18011a290(&local_res10,(int32_t *)"clouds_config","weather_clearing",&DAT_1801f39e0);
      FUN_18011a290(&local_res10,(int32_t *)"clouds_config","weather_clouds",&DAT_1801f39dc);
      FUN_18011a290(&local_res10,(int32_t *)"clouds_config","weather_overcast2",&DAT_1801f39d0);
      FUN_18011a290(&local_res10,(int32_t *)"clouds_config","weather_rain2",&DAT_1801f39cc);
      FUN_18011a290(&local_res10,(int32_t *)"clouds_config","weather_thunder",&DAT_1801f39c8);
      FUN_18011a0c0(&local_res10,(int32_t *)"shaders","override_shaders",&DAT_1801fb100);
      FUN_18011a290(&local_res10,(int32_t *)"shaders","current_rain_config",&DAT_1801f3a20);
      FUN_18011a0c0(&local_res10,(int32_t *)"reshade","msaa_acknowledged",&DAT_1801f3a39);
      FUN_18011a0c0(&local_res10,(int32_t *)"timecycle","brighten_nights",&DAT_1801f39f5);
      puVar9 = &DAT_1801f3a24;
      pcVar8 = "targeted_sparkles";
      pcVar5 = "shaders";
      FUN_18011a0c0(&local_res10,(int32_t *)"shaders","targeted_sparkles",&DAT_1801f3a24);
      FUN_18011a6a0(&local_res10,pcVar5,pcVar8,(longlong)puVar9);
      plVar7 = local_res10;
      local_res18 = "b958fbdd";
      local_res8 = (int *)0x1801d8750;
      FUN_1800f93b0(local_res10,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"shaders",7);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"shaders",7);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"b958fbdd",8);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebe38 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "global_multiplier";
      local_res8 = (int *)0x1801d8750;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"shaders",7);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"shaders",7);
            plVar7 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"global_multiplier",0x11);
            pcVar5 = (char *)FUN_1800edd90(plVar7,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd78 = local_res8._0_4_;
          }
        }
      }
      FUN_18011a290(&local_res10,(int32_t *)"shaders","aurora_preset_id",&DAT_1801f39ec);
      FUN_18011a0c0(&local_res10,(int32_t *)"shaders","aurora_enabled",&DAT_1801f39f4);
      FUN_18011a290(&local_res10,(int32_t *)"graphics","mb_config",&DAT_1801ebe34);
      plVar7 = local_res10;
      local_res18 = "mb_sample_size";
      local_res8 = (int *)0x1801d8868;
      FUN_1800f93b0(local_res10,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"graphics",8);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"graphics",8);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"mb_sample_size",0xe);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebe30 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "mb_ghosting";
      local_res8 = (int *)0x1801d8868;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"graphics",8);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"graphics",8);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"mb_ghosting",0xb);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebe28 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "mb_length_mult";
      local_res8 = (int *)0x1801d8868;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"graphics",8);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"graphics",8);
            plVar7 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"mb_length_mult",0xe);
            pcVar5 = (char *)FUN_1800edd90(plVar7,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebe2c = local_res8._0_4_;
          }
        }
      }
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","experimental_directional_shadows",
                    &DAT_1801ebe25);
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","headlights_dynamic_shadows",
                    &DAT_1801ebe24);
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","volumetrics",&DAT_1801ebe14);
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","dynamic_lighting",&DAT_1801f3a12);
      FUN_18011a290(&local_res10,(int32_t *)"graphics","reflection_quality_level",&DAT_1801ebe1c)
      ;
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","extended_shadows_enabled",&DAT_1801f3a14)
      ;
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","extended_reflections_enabled",
                    &DAT_1801f3a18);
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","enable_peds_in_reflections",
                    &DAT_1801f3a1c);
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","enable_vehicles_in_reflections",
                    &DAT_1801f3a1b);
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","enable_buildings_in_reflections",
                    &DAT_1801f3a1a);
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","hq_reflection_lods",&DAT_1801f3a17);
      FUN_18011a290(&local_res10,(int32_t *)"graphics","shadow_resolution",&DAT_1801ebe18);
      FUN_18011a290(&local_res10,(int32_t *)"graphics","reflection_resolution",&DAT_1801ebe20);
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","unclamp_shadow_size",&DAT_1801f3a13);
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","enable_map_objects",&DAT_1801f3a16);
      plVar7 = local_res10;
      local_res18 = "mouse_sensitivity";
      local_res8 = (int *)0x1801d8a68;
      FUN_1800f93b0(local_res10,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
            plVar7 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"mouse_sensitivity",0x11);
            pcVar5 = (char *)FUN_1800edd90(plVar7,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            _DAT_1801ebdcc = local_res8._0_4_;
          }
        }
      }
      FUN_18011a0c0(&local_res10,(int32_t *)"freecam","hide_player",&DAT_1801f39e9);
      FUN_18011a0c0(&local_res10,(int32_t *)"freecam","hide_player_and_vehicle",&DAT_1801f39e8);
      FUN_18011a0c0(&local_res10,(int32_t *)"freecam","keep_tcmod_active",&DAT_1801f39e7);
      plVar7 = local_res10;
      local_res18 = "camera_speed";
      local_res8 = (int *)0x1801d8a68;
      FUN_1800f93b0(local_res10,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
            plVar7 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"camera_speed",0xc);
            pcVar5 = (char *)FUN_1800edd90(plVar7,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebdd0 = local_res8._0_4_;
          }
        }
      }
      FUN_18011a0c0(&local_res10,(int32_t *)"freecam","dof_enabled",&DAT_1801f39e5);
      plVar7 = local_res10;
      local_res18 = "dof_strength";
      local_res8 = (int *)0x1801d8a68;
      FUN_1800f93b0(local_res10,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"dof_strength",0xc);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebdb4 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "dof_distance";
      local_res8 = (int *)0x1801d8a68;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
            plVar7 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"dof_distance",0xc);
            pcVar5 = (char *)FUN_1800edd90(plVar7,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebdb0 = local_res8._0_4_;
          }
        }
      }
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_toggle_key_2024",&DAT_1801ebdac);
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_slomo_key_2024",&DAT_1801ebda8);
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_forward_key_2024",&DAT_1801ebda4)
      ;
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_back_key_2024",&DAT_1801ebda0);
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_left_key_2024",&DAT_1801ebd9c);
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_right_key_2024",&DAT_1801ebd98);
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_up_key_2024",&DAT_1801ebd94);
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_down_key_2024",&DAT_1801ebd90);
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_double_speed_key_2024",
                    &DAT_1801ebd84);
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_fov_increase_2024",&DAT_1801ebd88
                   );
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_fov_decrease_2024",&DAT_1801ebd8c
                   );
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_rotate_left_2024",&DAT_1801ebd80)
      ;
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_rotate_right_2024",&DAT_1801ebd7c
                   );
      plVar7 = local_res10;
      local_res18 = "headlights";
      local_res8 = (int *)0x1801d8c58;
      FUN_1800f93b0(local_res10,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"headlights",10);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd74 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "taillights";
      local_res8 = (int *)0x1801d8c58;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"taillights",10);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd70 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "indicators";
      local_res8 = (int *)0x1801d8c58;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"indicators",10);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd6c = local_res8._0_4_;
          }
        }
      }
      local_res18 = "reversing_lights";
      local_res8 = (int *)0x1801d8c58;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"reversing_lights",0x10);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd68 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "default_lights";
      local_res8 = (int *)0x1801d8c58;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"default_lights",0xe);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd64 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "brake_lights";
      local_res8 = (int *)0x1801d8c58;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"brake_lights",0xc);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd60 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "middle_brake_lights";
      local_res8 = (int *)0x1801d8c58;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"middle_brake_lights",0x13);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd5c = local_res8._0_4_;
          }
        }
      }
      local_res18 = "extra_lights";
      local_res8 = (int *)0x1801d8c58;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"extra_lights",0xc);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd58 = local_res8._0_4_;
          }
        }
      }
      FUN_18011a500(&local_res10,(int32_t *)"emissive_lights_day",(int32_t *)"siren_lights",
                    (float *)&DAT_1801ebd54);
      local_res18 = "headlights";
      local_res8 = (int *)0x1801d8d30;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_night",0x15);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_night",0x15);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"headlights",10);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd50 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "taillights";
      local_res8 = (int *)0x1801d8d30;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_night",0x15);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_night",0x15);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"taillights",10);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd4c = local_res8._0_4_;
          }
        }
      }
      local_res18 = "indicators";
      local_res8 = (int *)0x1801d8d30;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_night",0x15);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_night",0x15);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"indicators",10);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd48 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "reversing_lights";
      local_res8 = (int *)0x1801d8d30;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01') {
        plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
      puVar4 = FUN_1800f93b0(plVar7,local_b8);
      cVar1 = FUN_1800f9210(&local_d8,puVar4);
      if (cVar1 != '\0') {
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_night",0x15);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
          plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            plVar3 = FUN_1800ba470(&local_d8,(int32_t *)"emissive_lights_night");
            plVar7 = (longlong *)FUN_1800edd90(plVar7,plVar3);
            pcVar5 = (char *)FUN_1800eca60(plVar7,(int32_t *)"reversing_lights");
            DAT_1801ebd44 = FUN_18011c530(pcVar5);
          }
        }
      }
      FUN_18011a500(&local_res10,(int32_t *)"emissive_lights_night",
                    (int32_t *)"default_lights",(float *)&DAT_1801ebd40);
      FUN_18011a500(&local_res10,(int32_t *)"emissive_lights_night",(int32_t *)"brake_lights",
                    (float *)&DAT_1801ebd3c);
      FUN_18011a500(&local_res10,(int32_t *)"emissive_lights_night",
                    (int32_t *)"middle_brake_lights",(float *)&DAT_1801ebd38);
      FUN_18011a500(&local_res10,(int32_t *)"emissive_lights_night",(int32_t *)"extra_lights",
                    (float *)&DAT_1801ebd34);
      FUN_18011a500(&local_res10,(int32_t *)"emissive_lights_night",(int32_t *)"siren_lights",
                    (float *)&DAT_1801ebd30);
      piVar2 = (int *)0x1;
    }
    FUN_1800f9a90(&local_90,local_98[0]);
  }
  return piVar2;
}

// ---- Function: FUN_18011a0c0 ----
void FUN_18011a0c0(int32_t *param_1,int32_t *param_2,char *param_3,char *param_4)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  int32_t *puVar4;
  char *pcVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int32_t auStack_e8 [32];
  longlong local_c8;
  char *local_c0;
  longlong local_b8 [7];
  int32_t *local_80;
  longlong local_78;
  longlong lStack_70;
  int32_t local_68;
  int32_t local_60;
  ulonglong local_58;
  
  local_58 = DAT_1801eb080 ^ (ulonglong)auStack_e8;
  pcVar5 = (char *)*param_1;
  local_c0 = param_3;
  local_80 = param_2;
  FUN_1800f93b0(pcVar5,&local_78);
  if (*pcVar5 == '\x01') {
    plVar3 = FUN_18011c560(*(longlong **)(pcVar5 + 8),&local_c8,&local_80);
    lStack_70 = *plVar3;
  }
  puVar4 = FUN_1800f93b0(*param_1,local_b8);
  cVar2 = FUN_1800f9210(&local_78,puVar4);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)*param_1;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_b8[2] = 0;
    local_b8[3] = 0;
    uVar7 = 0xffffffffffffffff;
    uVar8 = 0xffffffffffffffff;
    do {
      uVar8 = uVar8 + 1;
    } while (*(char *)((longlong)param_2 + uVar8) != '\0');
    FUN_1800ba360(local_b8,param_2,uVar8);
    pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
    if (*pcVar5 == '\x01') {
      plVar3 = *(longlong **)(pcVar5 + 8);
      plVar6 = FUN_18011c560(plVar3,&local_c8,&local_c0);
      if (*plVar6 != *plVar3) {
        plVar3 = (longlong *)*param_1;
        local_b8[0] = 0;
        local_b8[1] = 0;
        local_b8[2] = 0;
        local_b8[3] = 0;
        uVar8 = 0xffffffffffffffff;
        do {
          uVar8 = uVar8 + 1;
        } while (*(char *)((longlong)param_2 + uVar8) != '\0');
        FUN_1800ba360(local_b8,param_2,uVar8);
        plVar3 = (longlong *)FUN_1800edd90(plVar3,local_b8);
        local_78 = 0;
        lStack_70 = 0;
        local_68 = 0;
        local_60 = 0;
        do {
          uVar7 = uVar7 + 1;
        } while (param_3[uVar7] != '\0');
        FUN_1800ba360(&local_78,(int32_t *)param_3,uVar7);
        plVar6 = &local_78;
        pcVar5 = (char *)FUN_1800edd90(plVar3,plVar6);
        if (*pcVar5 != '\x04') {
          local_c0 = FUN_1800f7810(pcVar5);
          plVar3 = FUN_18011c630(&local_78,plVar6,(longlong *)&local_c0);
          FUN_1800ed150(local_b8,0x12e,plVar3);
          FUN_1801279a8(local_b8,&DAT_1801e9200);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *param_4 = pcVar5[8];
      }
    }
  }
  FUN_1801252c0(local_58 ^ (ulonglong)auStack_e8);
  return;
}

// ---- Function: FUN_18011a290 ----
void FUN_18011a290(int32_t *param_1,int32_t *param_2,char *param_3,uint *param_4)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  int32_t *puVar4;
  char *pcVar5;
  longlong *plVar6;
  double *pdVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double *pdVar11;
  int32_t auStack_e8 [32];
  longlong local_c8;
  char *local_c0;
  longlong local_b8 [7];
  int32_t *local_80;
  longlong local_78;
  longlong lStack_70;
  int32_t local_68;
  int32_t local_60;
  ulonglong local_58;
  
  local_58 = DAT_1801eb080 ^ (ulonglong)auStack_e8;
  pcVar5 = (char *)*param_1;
  local_c0 = param_3;
  local_80 = param_2;
  FUN_1800f93b0(pcVar5,&local_78);
  if (*pcVar5 == '\x01') {
    plVar3 = FUN_18011c560(*(longlong **)(pcVar5 + 8),&local_c8,&local_80);
    lStack_70 = *plVar3;
  }
  puVar4 = FUN_1800f93b0(*param_1,local_b8);
  cVar2 = FUN_1800f9210(&local_78,puVar4);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)*param_1;
    local_b8[0] = 0;
    local_b8[1] = 0;
    pdVar11 = (double *)0x0;
    local_b8[2] = 0;
    local_b8[3] = 0;
    uVar9 = 0xffffffffffffffff;
    uVar10 = 0xffffffffffffffff;
    do {
      uVar10 = uVar10 + 1;
    } while (*(char *)((longlong)param_2 + uVar10) != '\0');
    FUN_1800ba360(local_b8,param_2,uVar10);
    pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
    if ((*pcVar5 == '\x01') &&
       (plVar3 = *(longlong **)(pcVar5 + 8), plVar6 = FUN_18011c560(plVar3,&local_c8,&local_c0),
       *plVar6 != *plVar3)) {
      plVar3 = (longlong *)*param_1;
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_b8[2] = 0;
      local_b8[3] = 0;
      uVar10 = 0xffffffffffffffff;
      do {
        uVar10 = uVar10 + 1;
      } while (*(char *)((longlong)param_2 + uVar10) != '\0');
      FUN_1800ba360(local_b8,param_2,uVar10);
      plVar3 = (longlong *)FUN_1800edd90(plVar3,local_b8);
      local_78 = 0;
      lStack_70 = 0;
      local_68 = 0;
      local_60 = 0;
      do {
        uVar9 = uVar9 + 1;
      } while (param_3[uVar9] != '\0');
      FUN_1800ba360(&local_78,(int32_t *)param_3,uVar9);
      pcVar5 = (char *)FUN_1800edd90(plVar3,&local_78);
      cVar2 = *pcVar5;
      switch(cVar2) {
      default:
        local_c0 = FUN_1800f7810(pcVar5);
        plVar3 = FUN_1800f24a0(&local_78,(int32_t *)"type must be number, but is ",
                               (longlong *)&local_c0);
        FUN_1800ed150(local_b8,0x12e,plVar3);
        FUN_1801279a8(local_b8,&DAT_1801e9200);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      case '\x04':
        pdVar7 = (double *)(pcVar5 + 8);
        if (cVar2 != '\x04') {
          pdVar7 = pdVar11;
        }
        uVar8 = (uint)*(byte *)pdVar7;
        break;
      case '\x05':
        pdVar7 = (double *)(pcVar5 + 8);
        if (1 < (byte)(cVar2 - 5U)) {
          pdVar7 = pdVar11;
        }
        uVar8 = *(uint *)pdVar7;
        break;
      case '\x06':
        pdVar7 = (double *)(pcVar5 + 8);
        if (cVar2 != '\x06') {
          pdVar7 = pdVar11;
        }
        uVar8 = *(uint *)pdVar7;
        break;
      case '\a':
        pdVar7 = (double *)(pcVar5 + 8);
        if (cVar2 != '\a') {
          pdVar7 = pdVar11;
        }
        uVar8 = (uint)*pdVar7;
      }
      *param_4 = uVar8;
    }
  }
  FUN_1801252c0(local_58 ^ (ulonglong)auStack_e8);
  return;
}

