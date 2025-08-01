#include "_Init.h"
#include <stdint.h>
#include <stddef.h>

 _Init_thread_footer(&DAT_1801fb370);
    }
  }
  if (DAT_1801fb374 == '\0') {
FUN_1800bacc0();
  }
}

 _Init_thread_footer(&DAT_1801fb550);
    }
    puVar3 = DAT_1801fb570;
    plVar5 = DAT_1801f3ad8;
    if (DAT_1801fb120 != 0) {
plVar7 = (longlong *)*DAT_1801fb118;
      plVar8 = plVar7;
      if (plVar7 != DAT_1801fb118) {
        while( true ) {
          plVar2 = (longlong *)plVar7[2];
          if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar2 + 0x19);
            plVar7 = plVar2;
            plVar2 = (longlong *)*plVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar2 + 0x19);
              plVar7 = plVar2;
              plVar2 = (longlong *)*plVar2;
            }
          }
          else {
            cVar1 = *(char *)(plVar7[1] + 0x19);
            plVar6 = (longlong *)plVar7[1];
            plVar2 = plVar7;
            while ((plVar7 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
              cVar1 = *(char *)(plVar7[1] + 0x19);
              plVar6 = (longlong *)plVar7[1];
              plVar2 = plVar7;
            }
          }
          if (plVar7 == DAT_1801fb118) break;
          if (*(float *)((longlong)plVar7 + 0x1c) <= *(float *)((longlong)plVar8 + 0x1c) &&
              *(float *)((longlong)plVar8 + 0x1c) != *(float *)((longlong)plVar7 + 0x1c)) {
            plVar8 = plVar7;
          }
        }
      }
      fVar11 = *(float *)((longlong)plVar8 + 0x1c) - _DAT_1801f3a04;
      local_44 = *(int32_t *)((longlong)plVar8 + 0x24);
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar11 = DAT_1801d8e38 - fVar11 / DAT_1801f3a00;
      local_48 = (int32_t)plVar8[4];
      local_40 = (int32_t)plVar8[5];
      puVar4 = DAT_1801fb568;
      if (DAT_1801f3ad8 != (longlong *)0x0) {
        for (; puVar4 != puVar3; puVar4 = puVar4 + 4) {
          puVar9 = puVar4;
          if (0xf < (ulonglong)puVar4[3]) {
            puVar9 = (int32_t *)*puVar4;
          }
          (**(code **)(*plVar5 + 0xa0))(plVar5,&local_res10,puVar9,DAT_1801fb560);
          if (local_res10 != 0) {
            (**(code **)(*plVar5 + 0x108))(plVar5,local_res10,&local_48,3,0);
          }
        }
      }
    }
}

 _Init_thread_footer(&DAT_1801fbc0c);
    }
  }
  local_e8 = (int32_t *)&LAB_1800be0e0;
  if (DAT_1801ec6e0 == DAT_1801ec6e8) {
FUN_1800c69d0(puVar4,DAT_1801ec6e0,&local_e8);
  }
}

 _Init_thread_footer(&DAT_1801f3a84);
    }
    if (DAT_1801f3a88 != (FARPROC)0x0) {
(*DAT_1801f3a88)(&DAT_180182d14,FUN_1800e2480);
    }
}

 _Init_thread_footer(&DAT_1801fc740);
    }
    if (DAT_1801fc748 != (FARPROC)0x0) {
(*DAT_1801fc748)(0x4b,FUN_1800bb2e0);
    }
}

 _Init_thread_footer(&DAT_1801fc750);
    }
    if (DAT_1801fc758 != (FARPROC)0x0) {
(*DAT_1801fc758)(0x1b,&LAB_1800cbee0);
    }
}

 _Init_thread_footer(&DAT_1801fc760);
    }
    if (DAT_1801fc768 != (FARPROC)0x0) {
(*DAT_1801fc768)(0x1a,FUN_1800cbea0);
    }
}

 _Init_thread_footer(&DAT_1801fc770);
    }
    if (DAT_1801fc778 != (FARPROC)0x0) {
(*DAT_1801fc778)(0x51,&LAB_1800c2b50);
    }
}

 _Init_thread_footer(&DAT_1801f3a80);
    }
  }
  if (DAT_1801f3a78 != (FARPROC)0x0) {
(*DAT_1801f3a78)(0x4c,param_1);
    return;
  }
}

 _Init_thread_footer(&DAT_1801f3a70);
    }
  }
  if (DAT_1801f3a68 != (FARPROC)0x0) {
(*DAT_1801f3a68)(0x4e,param_1);
    return;
  }
}

 _Init_thread_footer(&DAT_1801f3aa0);
  }
  if (DAT_1801f3aa8 == 0) {
local_2028[0] = 0;
    pvVar2 = GetCurrentProcess();
    iVar1 = K32EnumProcessModules(pvVar2,local_2018,0x2000,local_2028);
    if (iVar1 != 0) {
      if (0x2000 < local_2028[0]) {
        local_2028[0] = 0x2000;
      }
      if ((local_2028[0] & 0xfffffff8) != 0) {
        do {
          pFVar3 = GetProcAddress((HMODULE)local_2018[uVar5],"ReShadeRegisterAddon");
          if ((pFVar3 != (FARPROC)0x0) &&
             (pFVar3 = GetProcAddress((HMODULE)local_2018[uVar5],"ReShadeUnregisterAddon"),
             pFVar3 != (FARPROC)0x0)) {
            DAT_1801f3aa8 = local_2018[uVar5];
            break;
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < local_2028[0] >> 3);
      }
    }
  }
}

 _Init_thread_footer(&DAT_1801fc780);
    }
  }
  if (DAT_1801fc788 != (FARPROC)0x0) {
(*DAT_1801fc788)(0,&LAB_1800c77b0);
  }
}

 _Init_thread_footer(&DAT_1801fc790);
    }
  }
  if (DAT_1801fc798 != (FARPROC)0x0) {
(*DAT_1801fc798)(2,FUN_1800c77c0);
  }
}

 _Init_thread_footer(&DAT_1801fc7a0);
    }
  }
  if (DAT_1801fc7a8 != (FARPROC)0x0) {
(*DAT_1801fc7a8)(4,&LAB_1800c7800);
  }
}

 _Init_thread_footer(&DAT_1801fc7b0);
    }
  }
  if (DAT_1801fc7b8 != (FARPROC)0x0) {
(*DAT_1801fc7b8)(9,FUN_1800c78a0);
  }
}

 _Init_thread_footer(&DAT_1801fc7c0);
    }
  }
  if (DAT_1801fc7c8 != (FARPROC)0x0) {
(*DAT_1801fc7c8)(1,FUN_1800c78f0);
  }
}

 _Init_thread_footer(&DAT_1801fc7d0);
    }
  }
  if (DAT_1801fc7d8 != (FARPROC)0x0) {
(*DAT_1801fc7d8)(3,&LAB_1800c79b0);
  }
}

 _Init_thread_footer(&DAT_1801fc7e0);
    }
  }
  if (DAT_1801fc7e8 != (FARPROC)0x0) {
(*DAT_1801fc7e8)(5,FUN_1800c79c0);
  }
}

 _Init_thread_footer(&DAT_1801fc7f0);
    }
  }
  if (DAT_1801fc7f8 != (FARPROC)0x0) {
(*DAT_1801fc7f8)(10,&DAT_1800c7a70);
  }
}

 _Init_thread_footer(&DAT_1801fc800);
    }
  }
  if (DAT_1801fc808 != (FARPROC)0x0) {
(*DAT_1801fc808)(0xf,FUN_1800c7b50);
  }
}

 _Init_thread_footer(&DAT_1801fc810);
    }
  }
  if (DAT_1801fc818 != (FARPROC)0x0) {
(*DAT_1801fc818)(0x12,&LAB_1800c7fa0);
  }
}

 _Init_thread_footer(&DAT_1801fc820);
    }
  }
  if (DAT_1801fc828 != (FARPROC)0x0) {
(*DAT_1801fc828)(0x10,FUN_1800c8120);
  }
}

 _Init_thread_footer(&DAT_1801fc830);
    }
  }
  if (DAT_1801fc838 != (FARPROC)0x0) {
(*DAT_1801fc838)(0x34,FUN_1800c8240);
  }
}

 _Init_thread_footer(&DAT_1801fc840);
    }
  }
  if (DAT_1801fc848 != (FARPROC)0x0) {
(*DAT_1801fc848)(0x35,&LAB_1800c8320);
  }
}

 _Init_thread_footer(&DAT_1801fc850);
    }
  }
  if (DAT_1801fc858 != (FARPROC)0x0) {
(*DAT_1801fc858)(0x37,FUN_1800c8340);
  }
}

 _Init_thread_footer(&DAT_1801fc860);
    }
  }
  if (DAT_1801fc868 != (FARPROC)0x0) {
(*DAT_1801fc868)(0x2c,&LAB_1800c8400);
  }
}

 _Init_thread_footer(&DAT_1801fc870);
    }
  }
  if (DAT_1801fc878 != (FARPROC)0x0) {
(*DAT_1801fc878)(0x27,&LAB_1800c8590);
  }
}

 _Init_thread_footer(&DAT_1801fc880);
    }
  }
  if (DAT_1801fc888 != (FARPROC)0x0) {
(*DAT_1801fc888)(0x29,&LAB_1800c8440);
  }
}

 _Init_thread_footer(&DAT_1801fc890);
    }
  }
  if (DAT_1801fc898 != (FARPROC)0x0) {
(*DAT_1801fc898)(0x3e,FUN_1800c84c0);
  }
}

 _Init_thread_footer(&DAT_1801fc8a0);
    }
  }
  if (DAT_1801fc8a8 != (FARPROC)0x0) {
(*DAT_1801fc8a8)(0x46,FUN_1800c8680);
  }
}

 _Init_thread_footer(&DAT_1801fc8b0);
    }
  }
  if (DAT_1801fc8b8 != (FARPROC)0x0) {
(*DAT_1801fc8b8)(0x48,FUN_1800c86e0);
  }
}

 _Init_thread_footer(&DAT_1801fc8c0);
    }
  }
  if (DAT_1801fc8c8 != (FARPROC)0x0) {
(*DAT_1801fc8c8)(0x49,FUN_1800c8770);
  }
}

 _Init_thread_footer(&DAT_1801fc8d0);
    }
  }
  if (DAT_1801fc8d8 != (FARPROC)0x0) {
(*DAT_1801fc8d8)(0x4a,FUN_1800c88c0);
  }
}

 _Init_thread_footer(&DAT_1801fc8e0);
    }
  }
  if (DAT_1801fc8e8 != (FARPROC)0x0) {
(*DAT_1801fc8e8)(0x4d,FUN_1800c9040);
  }
}

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
}

 _Init_thread_footer(&DAT_1801fb378);
        }
      }
      if (DAT_1801fb37c == '\0') {
lVar4 = FUN_1800bacc0();
        DAT_1801f397c = *(float *)(lVar4 + 0x1af4);
      }
}

 _Init_thread_footer(&DAT_1801fcb68);
  }
  if (DAT_1801ec220 == -1) {
iVar1 = FUN_18011ccf0();
    if (iVar1 == 0x644) {
      DAT_1801ec220 = DAT_1801fcb6c - 0xfd;
    }
    else if (0x644 < iVar1) {
      if (iVar1 < 0xaf2) {
        DAT_1801ec220 = DAT_1801fcb6c - 0x105;
      }
      else {
        DAT_1801ec220 = DAT_1801fcb6c - 0xe5;
      }
    }
  }
}

 _Init_thread_footer(&DAT_1801fcb90);
  }
  iVar8 = DAT_1801fcb94;
  iVar7 = DAT_1801f3934;
  puVar3 = DAT_1801ec6f8;
  iVar4 = DAT_1801fcb94;
  puVar2 = DAT_1801ec6f0;
  if (DAT_1801fcb94 != DAT_1801f3934) {
for (; iVar4 = DAT_1801f3934, puVar2 != puVar3; puVar2 = puVar2 + 1) {
      (*(code *)*puVar2)(iVar8,iVar7);
    }
  }
}

 _Init_thread_footer(&DAT_1801fcb70);
  }
  *DAT_1801fcb78 = DAT_1801ebe38;
  if ((*(int *)(lVar1 + 0x10) < DAT_1801fcb80) &&
     (FUN_180125398(&DAT_1801fcb80), DAT_1801fcb80 == -1)) {
local_68 = "F3 0F ? ? ? ? ? ? F3 0F 11 4E 20";
    local_60 = 0x20;
    piVar10 = (int *)FUN_1800a68d0(&local_68);
    DAT_1801fcb88 = (longlong)piVar10 + (longlong)*piVar10 + 4;
    _Init_thread_footer(&DAT_1801fcb80);
  }
}

 _Init_thread_footer(&DAT_1801fcb80);
  }
  iVar7 = FUN_18011ccf0();
  if (iVar7 < 0x80c) {
FUN_1800e7080();
  }
}

 _Init_thread_footer(&DAT_1801fce44);
    }
    if ((*(int *)(lVar8 + 0x10) < DAT_1801fce4c) &&
       (FUN_180125398(&DAT_1801fce4c), DAT_1801fce4c == -1)) {
DAT_1801fce50 = FUN_18012b82c((longlong *)0x0);
      _Init_thread_footer(&DAT_1801fce4c);
    }
}

 _Init_thread_footer(&DAT_1801fce4c);
    }
    lVar8 = FUN_18012b82c((longlong *)0x0);
    dVar22 = _difftime64(lVar8,DAT_1801fce50);
    iVar16 = 0;
    _Var5 = DAT_1801fce50;
    if ((double)(int)DAT_1801fce48 < dVar22) {
bVar17 = DAT_1801f3b54 == '\0';
      DAT_1801f3b54 = bVar17;
      nativeInit(0x1268615ace24d504);
      local_res8 = (ulonglong)bVar17;
      nativePush64(local_res8);
      nativeCall();
      nativeInit(0xe2b187c0939b3d32);
      nativePush64(0);
      nativeCall();
      if (DAT_1801f3b54 == '\0') {
        uVar18 = 300;
      }
      else {
        uVar13 = 1;
      }
      DAT_1801fce48 = FUN_18011c6f0(uVar13,uVar18);
      nativeInit(0x338d2e3477711050);
      nativeCall();
      nativeInit(0xccc39339bef76cf5);
      nativeCall();
      puVar4 = PTR_DAT_1801ec1f0;
      nativeInit(0xed712ca327900c8a);
      nativePush64((__uint64)puVar4);
      nativeCall();
      _Var5 = lVar8;
      if (DAT_1801f3b28 == '\0') {
        nativeInit(0xccc39339bef76cf5);
        nativeCall();
      }
    }
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
}

 _Init_thread_footer(&DAT_1801fcfa8);
  }
  if ((((DAT_1801fcfa0 <= local_res10) && (local_res10 < DAT_1801fcfb0)) && (DAT_1801ee942 != '\0'))
     && (fopen_s(local_res18,DAT_1801f39b8,"ab"), local_res18[0] != (FILE *)0x0)) {
FUN_18012e4a0(&local_res8,1,8,(longlong)local_res18[0]);
    FUN_18012e4a0(&local_res10,1,8,(longlong)local_res18[0]);
    FUN_18012f050((int *)local_res18[0]);
  }
}

void _Init_thread_footer(int *param_1) {
ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1801ed680);
  uVar1 = (ulonglong)_tls_index;
  DAT_1801eb070 = DAT_1801eb070 + 1;
  *param_1 = DAT_1801eb070;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x10) = DAT_1801eb070;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1801ed680);
                    
                    
  WakeAllConditionVariable(&DAT_1801ed678);
  return;
}
}

