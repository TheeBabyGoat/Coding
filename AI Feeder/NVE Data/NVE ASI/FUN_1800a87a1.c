#include "FUN_1800a87a1.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a87a1(void) {
char cVar1;
  int32_t *puVar2;
  int *piVar3;
  FARPROC pFVar4;
  HMODULE pHVar5;
  LPCSTR pCVar6;
  longlong *plVar7;
  longlong unaff_RBP;
  HINSTANCE__ *unaff_RSI;
  LPCSTR in_stack_00000030;
  ulonglong in_stack_00000048;
  char *pcStack0000000000000050;
  int32_t uStack0000000000000058;
  LPCSTR in_stack_00000070;
  
  puVar2 = (int32_t *)FUN_1800a68d0((int32_t *)&stack0x00000020);
  FUN_180121510(puVar2,&LAB_1800d1690,&DAT_1801fc970);
  puVar2 = (int32_t *)FUN_1800a68d0((int32_t *)&stack0x00000020);
  FUN_180121510(puVar2,&LAB_1800dcc20,(longlong *)&DAT_1801fca10);
  piVar3 = (int *)FUN_1800a68d0((int32_t *)&stack0x00000020);
  DAT_1801fca08 = (longlong)piVar3 + (longlong)*piVar3 + 4;
  FUN_1800c2e90();
  if (DAT_1801f3af0 == (HMODULE)0x0) {
    DAT_1801f3af0 = LoadLibraryA("IgcsConnector.addon64");
    if (DAT_1801f3af0 == (HMODULE)0x0) {
      pcStack0000000000000050 = "IGCS: no has..";
      uStack0000000000000058 = 0xe;
      FUN_1800b7670((longlong *)&stack0x00000030,(longlong *)&stack0x00000050,
                    (ulonglong *)&stack0x00000020);
      pCVar6 = (LPCSTR)&stack0x00000030;
      if (0xf < in_stack_00000048) {
        pCVar6 = in_stack_00000030;
      }
      OutputDebugStringA(pCVar6);
      plVar7 = (longlong *)&stack0x00000030;
      goto LAB_1800a8940;
    }
  }
  pFVar4 = GetProcAddress(DAT_1801f3af0,"connectFromCameraTools");
  (*pFVar4)();
  pcStack0000000000000050 = "IGCS: {}";
  uStack0000000000000058 = 8;
  FUN_1800b7670((longlong *)&stack0x00000070,(longlong *)&stack0x00000050,
                (ulonglong *)&stack0x00000030);
  pCVar6 = (LPCSTR)&stack0x00000070;
  if (0xf < *(ulonglong *)(unaff_RBP + -0x78)) {
    pCVar6 = in_stack_00000070;
  }
  OutputDebugStringA(pCVar6);
  plVar7 = (longlong *)&stack0x00000070;
LAB_1800a8940:
  FUN_1800a6800(plVar7);
  pHVar5 = LoadLibraryA("scripthookv.dll");
  if (pHVar5 != (HMODULE)0x0) {
    scriptRegister(unaff_RSI,FUN_1800fb410);
    scriptRegister(unaff_RSI,FUN_1800a6b10);
    DAT_1801f3a38 = 1;
  }
  FUN_1801217f0(0);
  Sleep(0x32);
  cVar1 = FUN_1800a7c80();
  if (cVar1 != '\0') {
    DAT_1801f3a3c = 1;
  }
  FUN_1801252c0(*(ulonglong *)(unaff_RBP + 0xe0) ^ (ulonglong)&stack0x00000000);
  return;
}
}

