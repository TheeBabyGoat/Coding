#include "FUN_1800cc4f0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800cc4f0(uint param_1,int32_t param_2,int32_t *param_3,longlong *param_4) {
code *pcVar1;
  int32_t **ppuVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  LPCWSTR pWVar6;
  int32_t (*pauVar7) [32];
  longlong lVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  int32_t (**ppauVar11) [32];
  int32_t (*pauVar12) [32];
  uint uVar13;
  int32_t (*pauVar14) [32];
  int32_t (*pauVar15) [32];
  byte *pbVar16;
  int32_t (*pauVar17) [32];
  int32_t *****pppppuVar18;
  int32_t auStackY_238 [32];
  int32_t (*local_1f8) [32];
  int32_t **ppuStack_1f0;
  int32_t (*local_1e8) [32];
  int iStack_1dc;
  longlong local_1d8 [22];
  int32_t **local_128 [12];
  int32_t (*local_c8 [3]) [32];
  ulonglong local_b0;
  int32_t ****local_a8 [2];
  LPCWSTR local_98;
  ulonglong local_90;
  WCHAR local_88 [16];
  WCHAR local_68 [16];
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_238;
  pauVar15 = (int32_t (*) [32])0x0;
  lVar8 = param_3[1];
  if (lVar8 == 0) goto LAB_1800cc8c6;
  pbVar16 = (byte *)*param_3;
  uVar13 = 0xffffffff;
  do {
    uVar13 = uVar13 >> 8 ^ *(uint *)(&DAT_1801cc4e0 + (ulonglong)((*pbVar16 ^ uVar13) & 0xff) * 4);
    pbVar16 = pbVar16 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x10) < DAT_1801fc908) && (FUN_180125398(&DAT_1801fc908), DAT_1801fc908 == -1)) {
    FUN_1800cbfa0();
    atexit((_func_5014 *)&LAB_1801563c0);
    _Init_thread_footer(&DAT_1801fc908);
  }
  uVar9 = (ulonglong)~uVar13;
  uVar4 = (ulonglong)param_1;
  FUN_1800cc290((longlong *)local_a8,param_1,~uVar13);
  pWVar6 = local_98;
  if (0x7fffffffffffffffU - (longlong)local_98 < 8) {
LAB_1800cc8f6:
    FUN_1800ba540();
LAB_1800cc8fc:
    FUN_1800ba290(pWVar6,&local_1f8,(int32_t *)local_88);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pppppuVar18 = local_a8;
  if (0xf < local_90) {
    pppppuVar18 = (int32_t *****)local_a8[0];
  }
  FUN_1800cfa40(local_c8,uVar4,uVar9,pppppuVar18,(ulonglong)local_98,(int32_t *)".nve_bin",8);
  local_1f8 = (int32_t (*) [32])local_c8;
  if (0xf < local_b0) {
    local_1f8 = local_c8[0];
  }
  uVar4 = __std_fs_code_page();
  ppuStack_1f0 = (int32_t **)local_c8[2];
  uVar9 = uVar4 & 0xffffffff;
  FUN_1800aab10(local_68,(UINT)uVar4,&local_1f8);
  FUN_1800cfce0((uint *)local_88,uVar9,(uint *)local_68);
  FUN_1800ba040((longlong *)local_68);
  FUN_1800a6800((longlong *)local_c8);
  local_1f8 = (int32_t (*) [32])((ulonglong)local_1f8 & 0xffffffff00000000);
  ppuStack_1f0 = &PTR_vftable_1801ebd20;
  pWVar6 = local_88;
  cVar3 = FUN_1800b8cb0(pWVar6,(longlong *)&local_1f8);
  if ((int)local_1f8 != 0) goto LAB_1800cc8fc;
  if (cVar3 != '\0') {
    pwVar10 = local_88;
    FUN_1800ce4f0(local_1d8,pwVar10);
    FUN_1800cd880(local_1d8,pwVar10,2);
    ppauVar11 = local_c8;
    plVar5 = FUN_1800cd7a0(local_1d8,ppauVar11);
    uVar4 = plVar5[1] + *plVar5;
    local_1f8 = (int32_t (*) [32])0x0;
    ppuStack_1f0 = (int32_t **)0x0;
    local_1e8 = (int32_t (*) [32])0x0;
    if (uVar4 == 0) {
      pauVar14 = (int32_t (*) [32])0x0;
    }
    else {
      FUN_1800cf060((ulonglong *)&local_1f8,uVar4);
      pauVar14 = local_1f8;
      ppauVar11 = (int32_t (**) [32])0x0;
      FUN_180151670(local_1f8,0,uVar4);
      ppuStack_1f0 = (int32_t **)(*pauVar14 + uVar4);
    }
    pauVar17 = local_1e8;
    ppuVar2 = ppuStack_1f0;
    plVar5 = FUN_1800cd880(local_1d8,ppauVar11,0);
    uVar4 = (longlong)ppuVar2 - (longlong)pauVar14;
    FUN_1800cda80(plVar5,pauVar14,uVar4);
    pauVar7 = pauVar14;
    pauVar12 = pauVar15;
    if (uVar4 != 0) {
      do {
        (*pauVar7)[0] = (*pauVar7)[0] ^ (&DAT_1801cc4c0)[(ulonglong)(~(uint)pauVar12 & 1) * 4];
        uVar13 = (uint)pauVar12 + 1;
        pauVar7 = (int32_t (*) [32])(*pauVar7 + 1);
        pauVar12 = (int32_t (*) [32])(ulonglong)uVar13;
      } while ((ulonglong)(longlong)(int)uVar13 < uVar4);
    }
    plVar5 = (longlong *)param_4[1];
    if (plVar5 == (longlong *)param_4[2]) {
      FUN_1800ced50(param_4,plVar5,(longlong *)&local_1f8);
      pauVar15 = local_1e8;
      pauVar14 = local_1f8;
    }
    else {
      *plVar5 = (longlong)pauVar14;
      plVar5[1] = (longlong)ppuVar2;
      plVar5[2] = (longlong)pauVar17;
      param_4[1] = param_4[1] + 0x18;
      pauVar14 = pauVar15;
    }
    *param_3 = *(int32_t *)(param_4[1] + -0x18);
    pWVar6 = (LPCWSTR)param_4[1];
    param_3[1] = *(longlong *)(pWVar6 + -8) - *(longlong *)(pWVar6 + -0xc);
    if (pauVar14 != (int32_t (*) [32])0x0) {
      pauVar17 = pauVar14;
      if ((0xfff < (ulonglong)((longlong)pauVar15 - (longlong)pauVar14)) &&
         (pauVar17 = *(int32_t (**) [32])(pauVar14[-1] + 0x18),
         0x1f < (ulonglong)((longlong)pauVar14 + (-8 - (longlong)pauVar17)))) {
        FUN_18012b7b4();
        goto LAB_1800cc8f6;
      }
      thunk_FUN_18012d5e8(pauVar17);
    }
    *(int32_t ***)((longlong)local_1d8 + (longlong)*(int *)(local_1d8[0] + 4)) =
         &PTR_LAB_1801cc4b8;
    *(int *)((longlong)&iStack_1dc + (longlong)*(int *)(local_1d8[0] + 4)) =
         *(int *)(local_1d8[0] + 4) + -0xb0;
    FUN_1800cd640(local_1d8 + 2);
    *(int32_t ***)((longlong)local_1d8 + (longlong)*(int *)(local_1d8[0] + 4)) =
         &PTR_LAB_1801cc4b0;
    *(int *)((longlong)&iStack_1dc + (longlong)*(int *)(local_1d8[0] + 4)) =
         *(int *)(local_1d8[0] + 4) + -0x18;
    local_128[0] = &PTR_LAB_1801cc4d0;
    std::ios_base::_Ios_base_dtor((ios_base *)local_128);
  }
  FUN_1800ba040((longlong *)local_88);
  FUN_1800a6800((longlong *)local_a8);
LAB_1800cc8c6:
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_238);
  return;
}
}

