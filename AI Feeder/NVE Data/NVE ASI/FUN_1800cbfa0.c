#include "FUN_1800cbfa0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800cbfa0(void) {
uint *puVar1;
  short sVar2;
  code *pcVar3;
  HMODULE hModule;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  char **ppcVar9;
  int32_t auStack_2a8 [32];
  uint local_288;
  int32_t *local_280;
  char *local_278;
  int32_t uStack_270;
  int32_t local_268;
  int32_t uStack_260;
  WCHAR local_258 [16];
  WCHAR local_238;
  int32_t local_236 [526];
  ulonglong local_28;
  
  local_28 = DAT_1801eb080 ^ (ulonglong)auStack_2a8;
  local_288 = 0;
  local_280 = &DAT_1801fc910;
  hModule = GetModuleHandleA("CitizenGame.dll");
  local_238 = L'\0';
  FUN_180151670((int32_t (*) [32])local_236,0,0x206);
  GetModuleFileNameW(hModule,&local_238,0x104);
  uVar8 = 0xffffffffffffffff;
  do {
    uVar8 = uVar8 + 1;
  } while (*(short *)(local_236 + uVar8 * 2 + -2) != 0);
  DAT_1801fc910 = (uint *)0x0;
  uRam00000001801fc918 = 0;
  DAT_1801fc920 = 0;
  DAT_1801fc928 = 0;
  FUN_1800b86e0(&DAT_1801fc910,(int32_t *)&local_238,uVar8);
  local_288 = 7;
  puVar5 = (uint *)&DAT_1801fc910;
  if (7 < DAT_1801fc928) {
    puVar5 = DAT_1801fc910;
  }
  puVar7 = (uint *)((longlong)puVar5 + DAT_1801fc920 * 2);
  puVar4 = FUN_1800b7dd0(puVar5,puVar7);
  if (puVar4 != puVar7) {
    do {
      if (((short)*puVar4 != 0x5c) && ((short)*puVar4 != 0x2f)) break;
      puVar4 = (uint *)((longlong)puVar4 + 2);
    } while (puVar4 != puVar7);
    do {
      if (puVar4 == puVar7) goto LAB_1800cc10b;
      sVar2 = *(short *)((longlong)puVar7 + -2);
      puVar1 = puVar7;
    } while ((sVar2 != 0x5c) && (puVar7 = (uint *)((longlong)puVar7 + -2), sVar2 != 0x2f));
    do {
      puVar7 = puVar1;
      if (puVar4 == puVar7) break;
      puVar1 = (uint *)((longlong)puVar7 + -2);
    } while ((*(short *)puVar1 == 0x5c) || (*(short *)puVar1 == 0x2f));
  }
LAB_1800cc10b:
  local_278 = (char *)0x0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  FUN_1800b86e0(&local_278,(int32_t *)puVar5,(longlong)puVar7 - (longlong)puVar5 >> 1);
  uVar6 = 0x3f;
  local_288 = 0x3f;
  if (7 < DAT_1801fc928) {
    puVar5 = DAT_1801fc910;
    if ((0xfff < DAT_1801fc928 * 2 + 2) &&
       (puVar5 = *(uint **)(DAT_1801fc910 + -2),
       0x1f < (ulonglong)((longlong)DAT_1801fc910 + (-8 - (longlong)puVar5)))) {
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    thunk_FUN_18012d5e8(puVar5);
  }
  DAT_1801fc910 = (uint *)local_278;
  uRam00000001801fc918 = uStack_270;
  DAT_1801fc920 = local_268;
  DAT_1801fc928 = uStack_260;
  local_268 = _DAT_1801d8f60;
  uStack_260 = _UNK_1801d8f68;
  local_278 = (char *)((ulonglong)local_278 & 0xffffffffffff0000);
  FUN_1800ba040((longlong *)&local_278);
  if (hModule != (HMODULE)0x0) {
    uVar8 = __std_fs_code_page();
    local_278 = "plugins";
    uStack_270 = 7;
    ppcVar9 = &local_278;
    FUN_1800aab10(local_258,(UINT)uVar8,ppcVar9);
    uVar6 = 0xff;
    local_288 = 0xff;
    FUN_1800b84a0((uint *)&DAT_1801fc910,(uint *)local_258,ppcVar9);
    FUN_1800ba040((longlong *)local_258);
  }
  uVar8 = __std_fs_code_page();
  local_278 = "nve-shaders";
  uStack_270 = 0xb;
  ppcVar9 = &local_278;
  FUN_1800aab10(local_258,(UINT)uVar8,ppcVar9);
  local_288 = uVar6 | 0x300;
  FUN_1800b84a0((uint *)&DAT_1801fc910,(uint *)local_258,ppcVar9);
  FUN_1800ba040((longlong *)local_258);
  FUN_1801252c0(local_28 ^ (ulonglong)auStack_2a8);
  return;
}
}

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
}

