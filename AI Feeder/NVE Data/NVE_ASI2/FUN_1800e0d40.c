#include "FUN_1800e0d40.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800e0d40(char *param_1,int32_t param_2,int32_t param_3,int32_t param_4) {
char cVar1;
  code *pcVar2;
  char *pcVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  code *pcVar8;
  int32_t *puVar9;
  float fVar10;
  float fVar11;
  int32_t local_res8;
  float local_res10 [6];
  
  if (DAT_1801f3a3a == '\0') {
    lVar6 = 5;
    do {
      (**(code **)(DAT_1801f3ae0 + 0x2a8))();
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    FUN_1800e09f0("Editing these settings can result in game bugs");
    FUN_1800e09f0("such as shadow flickering and causing the game world to go black.");
    (**(code **)(DAT_1801f3ae0 + 0x2a8))();
    FUN_1800e09f0("By clicking \"I accept\" you agree to acknowledging this message.");
    (**(code **)(DAT_1801f3ae0 + 0x2a8))();
    (**(code **)(DAT_1801f3ae0 + 0x2a8))();
    lVar6 = (**(code **)(DAT_1801f3ae0 + 8))();
    (**(code **)(DAT_1801f3ae0 + 0x9a0))(&local_res8,"I Accept",0,0,DAT_1801d8f38);
    fVar11 = *(float *)(lVar6 + 0x3c);
    (**(code **)(DAT_1801f3ae0 + 0x118))(local_res10);
    fVar11 = (local_res10[0] - (fVar11 + fVar11 + (float)local_res8)) * DAT_1801d8e18;
    if (0.0 < fVar11) {
      fVar10 = (float)(**(code **)(DAT_1801f3ae0 + 0x268))();
      (**(code **)(DAT_1801f3ae0 + 0x280))(fVar10 + fVar11);
    }
    local_res8 = 0;
    cVar1 = (**(code **)(DAT_1801f3ae0 + 0x388))("I Accept",&local_res8);
    if (cVar1 != '\0') {
      DAT_1801f3a3a = 1;
      return;
    }
    return;
  }
  if (DAT_1801f3b21 != '\0') {
    param_1 = "You must restart your game to apply the changes below.";
    FUN_1800e0910("You must restart your game to apply the changes below.");
  }
  FUN_1800e13d0(param_1,param_2,param_3,param_4);
  (**(code **)(DAT_1801f3ae0 + 0x2a8))();
  FUN_1800e10c0();
  (**(code **)(DAT_1801f3ae0 + 0x2a8))();
  if (DAT_1801f3a15 != '\0') {
    FUN_1800e0910(
                 "There were some issues collecting the required data for shadows, so they were disabled."
                 );
    return;
  }
  cVar1 = (**(code **)(DAT_1801f3ae0 + 0x3a8))("Shadow Patches##extendedrefl",&DAT_1801f3a14);
  if (cVar1 != '\0') {
    DAT_1801f3b21 = '\x01';
  }
  (**(code **)(DAT_1801f3ae0 + 0x2c0))(DAT_1801d8ec0);
  (**(code **)(DAT_1801f3ae0 + 0x880))(DAT_1801f3a14 == '\0');
  pcVar3 = s_Medium__1024__1801ec7b0;
  puVar9 = &DAT_1801fca68;
  if (0xf < DAT_1801ec7c8) {
    pcVar3 = (char *)s_Medium__1024__1801ec7b0._0_8_;
  }
  FUN_1800e0440(0x1801d5b88,pcVar3,&DAT_1801ebe18,&DAT_1801fca68);
  if ((ulonglong)(DAT_1801fca70 - DAT_1801fca68 >> 5) <= (ulonglong)(longlong)DAT_1801ebe18) {
    FUN_1800ddc20();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puVar4 = (int32_t *)(DAT_1801fca68 + (longlong)DAT_1801ebe18 * 0x20);
  if (0xf < (ulonglong)puVar4[3]) {
    puVar4 = (int32_t *)*puVar4;
  }
  uVar7 = 0xffffffffffffffff;
  do {
    uVar7 = uVar7 + 1;
  } while (*(char *)((longlong)puVar4 + uVar7) != '\0');
  FUN_1800de6e0((longlong *)s_Medium__1024__1801ec7b0,puVar4,uVar7);
  puVar5 = &DAT_1801f3a13;
  pcVar8 = *(code **)(DAT_1801f3ae0 + 0x3a8);
  cVar1 = (*pcVar8)("Unclamp shadow size");
  if (cVar1 != '\0') {
    DAT_1801f3b21 = '\x01';
  }
  pcVar2 = *(code **)(DAT_1801f3ae0 + 0x2a0);
  (*pcVar2)(0,DAT_1801d8f38);
  FUN_1800e03a0(pcVar2,puVar5,pcVar8,puVar9);
  (**(code **)(DAT_1801f3ae0 + 0x888))();
  (**(code **)(DAT_1801f3ae0 + 0x2c8))(DAT_1801d8ec0);
  if (DAT_1801ec1b4 == DAT_1801ebe18) {
    return;
  }
  if (DAT_1801ebe18 != 0) {
    if (DAT_1801ebe18 == 1) {
      DAT_1801ec198 = 0x200;
      DAT_1801ec1b4 = DAT_1801ebe18;
      DAT_1801f3b21 = 1;
      return;
    }
    if (DAT_1801ebe18 == 2) {
      DAT_1801ec198 = 0x400;
      DAT_1801ec1b4 = DAT_1801ebe18;
      DAT_1801f3b21 = 1;
      return;
    }
    if (DAT_1801ebe18 == 3) {
      DAT_1801ec198 = 0x800;
      DAT_1801ec1b4 = DAT_1801ebe18;
      DAT_1801f3b21 = 1;
      return;
    }
    if (DAT_1801ebe18 == 4) {
      DAT_1801ec198 = 0x1000;
      DAT_1801ec1b4 = DAT_1801ebe18;
      DAT_1801f3b21 = 1;
      return;
    }
  }
  DAT_1801f3b21 = 1;
  DAT_1801ec1b4 = DAT_1801ebe18;
  DAT_1801ec198 = 0x100;
  return;
}
}

