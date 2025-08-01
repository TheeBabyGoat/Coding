#include "FUN_1800cb820.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800cb820(void) {
__uint64 _Var1;
  int32_t uVar2;
  __uint64 _Var3;
  __uint64 _Var4;
  float fVar5;
  FARPROC pFVar6;
  int32_t *puVar7;
  __uint64 *p_Var8;
  float *pfVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_108;
  float local_f8;
  int32_t local_e8;
  int32_t local_d8;
  int32_t uStack_d0;
  float local_b8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x10) < DAT_1801fc900) && (FUN_180125398(&DAT_1801fc900), DAT_1801fc900 == -1)) {
    bVar11 = DAT_1801f3af0 == (HMODULE)0x0;
    if (bVar11) {
      DAT_1801f3af0 = LoadLibraryA("IgcsConnector.addon64");
      bVar11 = DAT_1801f3af0 == (HMODULE)0x0;
    }
    DAT_1801fc904 = !bVar11;
    _Init_thread_footer(&DAT_1801fc900);
  }
  if (DAT_1801fc904 != '\0') {
    if (DAT_1801f3af0 == (HMODULE)0x0) {
      DAT_1801f3af0 = LoadLibraryA("IgcsConnector.addon64");
    }
    pFVar6 = GetProcAddress(DAT_1801f3af0,"getDataFromCameraToolsBuffer");
    puVar7 = (int32_t *)(*pFVar6)();
    *puVar7 = DAT_1801f3aec;
    puVar7[1] = 0;
    nativeInit(0xa200eb1ee790f448);
    p_Var8 = nativeCall();
    _Var3 = *p_Var8;
    _Var4 = p_Var8[1];
    _Var1 = p_Var8[2];
    nativeInit(0x5b4e4c817fcc2dfb);
    nativePush64(2);
    pfVar9 = (float *)nativeCall();
    fVar5 = DAT_1801d8f10;
    fVar20 = pfVar9[2];
    fVar21 = *pfVar9;
    for (fVar14 = fVar21; DAT_1801d8f10 < fVar14; fVar14 = fVar14 + DAT_1801d8f48) {
    }
    for (; fVar16 = fVar20, fVar14 < 0.0; fVar14 = fVar14 + DAT_1801d8f10) {
    }
    for (; DAT_1801d8f10 < fVar16; fVar16 = fVar16 + DAT_1801d8f48) {
    }
    for (; fVar16 < 0.0; fVar16 = fVar16 + DAT_1801d8f10) {
    }
    local_b8 = (float)*(int32_t *)(pfVar9 + 4);
    for (fVar14 = local_b8; DAT_1801d8f10 < fVar14; fVar14 = fVar14 + DAT_1801d8f48) {
    }
    for (; fVar14 < 0.0; fVar14 = fVar14 + DAT_1801d8f10) {
    }
    uVar2 = FUN_18014df60();
    fVar14 = (float)uVar2;
    uVar2 = FUN_18014fb00();
    fVar16 = (float)uVar2;
    uVar2 = FUN_18014df60();
    fVar15 = (float)uVar2;
    uVar2 = FUN_18014fb00();
    fVar17 = (float)uVar2;
    uVar2 = FUN_18014df60();
    fVar12 = (float)uVar2;
    uVar2 = FUN_18014fb00();
    fVar18 = (float)uVar2;
    nativeInit(0x5b4e4c817fcc2dfb);
    nativePush64(0);
    nativeCall();
    local_d8 = (int32_t)_Var3;
    uStack_d0 = (int32_t)_Var4;
    *(int32_t *)(puVar7 + 8) = local_d8;
    *(int32_t *)(puVar7 + 0xc) = uStack_d0;
    local_e8 = (int32_t)_Var1;
    *(int32_t *)(puVar7 + 0x10) = local_e8;
    *(float *)(puVar7 + 0x14) = fVar18 * fVar14 * fVar15 - fVar12 * fVar16 * fVar17;
    *(float *)(puVar7 + 0x18) = fVar18 * fVar16 * fVar15 + fVar12 * fVar14 * fVar17;
    *(float *)(puVar7 + 0x1c) = fVar15 * fVar16 * fVar12 - fVar17 * fVar14 * fVar18;
    *(float *)(puVar7 + 0x20) = fVar17 * fVar16 * fVar18 + fVar15 * fVar14 * fVar12;
    nativeInit(0x80ec114669daeff4);
    p_Var8 = nativeCall();
    *(int *)(puVar7 + 4) = (int)*p_Var8;
    lVar10 = FUN_1800a6750();
    local_108 = *(float *)(lVar10 + 0x30);
    local_f8 = *(float *)(lVar10 + 0x34);
    fVar14 = *(float *)(lVar10 + 0x38);
    fVar16 = local_f8 * local_f8 + local_108 * local_108 + fVar14 * fVar14;
    if (fVar16 < 0.0) {
      fVar16 = FUN_1801501f8(fVar16);
    }
    else {
      fVar16 = SQRT(fVar16);
    }
    if (0.0 < fVar16) {
      local_108 = local_108 / fVar16;
      local_f8 = local_f8 / fVar16;
    }
    lVar10 = FUN_1800a6750();
    fVar16 = *(float *)(lVar10 + 0x20);
    fVar15 = *(float *)(lVar10 + 0x24);
    fVar17 = *(float *)(lVar10 + 0x28);
    fVar12 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
    if (fVar12 < 0.0) {
      fVar12 = FUN_1801501f8(fVar12);
    }
    else {
      fVar12 = SQRT(fVar12);
    }
    if (0.0 < fVar12) {
      fVar16 = fVar16 / fVar12;
      fVar15 = fVar15 / fVar12;
      fVar17 = fVar17 / fVar12;
    }
    lVar10 = FUN_1800a6750();
    fVar12 = *(float *)(lVar10 + 0x10);
    fVar18 = *(float *)(lVar10 + 0x14);
    fVar19 = *(float *)(lVar10 + 0x18);
    fVar13 = fVar18 * fVar18 + fVar12 * fVar12 + fVar19 * fVar19;
    if (fVar13 < 0.0) {
      fVar13 = FUN_1801501f8(fVar13);
    }
    else {
      fVar13 = SQRT(fVar13);
    }
    if (0.0 < fVar13) {
      fVar12 = fVar12 / fVar13;
      fVar18 = fVar18 / fVar13;
      fVar19 = fVar19 / fVar13;
    }
    *(float *)(puVar7 + 0x24) = local_108;
    *(float *)(puVar7 + 0x3c) = fVar16;
    *(float *)(puVar7 + 0x40) = fVar15;
    *(float *)(puVar7 + 0x44) = fVar17;
    *(float *)(puVar7 + 0x28) = local_f8;
    fVar15 = DAT_1801d8f48;
    *(float *)(puVar7 + 0x30) = fVar12;
    *(float *)(puVar7 + 0x34) = fVar18;
    *(float *)(puVar7 + 0x38) = fVar19;
    *(float *)(puVar7 + 0x2c) = fVar14;
    fVar16 = DAT_1801d8efc;
    fVar14 = DAT_1801d8e78;
    for (; fVar5 < local_b8; local_b8 = local_b8 + fVar15) {
    }
    for (; local_b8 < 0.0; local_b8 = local_b8 + fVar5) {
    }
    *(float *)(puVar7 + 0x4c) = (local_b8 / DAT_1801d8efc) * DAT_1801d8e78;
    for (; fVar5 < fVar21; fVar21 = fVar21 + fVar15) {
    }
    for (; fVar21 < 0.0; fVar21 = fVar21 + fVar5) {
    }
    *(float *)(puVar7 + 0x48) = (fVar21 / fVar16) * fVar14;
    for (; fVar5 < fVar20; fVar20 = fVar20 + fVar15) {
    }
    for (; fVar20 < 0.0; fVar20 = fVar20 + fVar5) {
    }
    *(float *)(puVar7 + 0x50) = (fVar20 / fVar16) * fVar14;
  }
  return;
}
}

