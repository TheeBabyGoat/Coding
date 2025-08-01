#include "FUN_1800da290.h"
#include <stdint.h>
#include <stddef.h>

int32_t FUN_1800da290(int32_t param_1,char *param_2) {
int32_t uVar1;
  int iVar2;
  
  uVar1 = (*DAT_1801fc9b0)();
  iVar2 = strcmp(param_2,"azimuthEastColor");
  if (iVar2 == 0) {
    DAT_1801fc9b8 = uVar1;
  }
  iVar2 = strcmp(param_2,"azimuthWestColor");
  if (iVar2 == 0) {
    DAT_1801fc9bc = uVar1;
  }
  iVar2 = strcmp(param_2,"azimuthTransitionColor");
  if (iVar2 == 0) {
    DAT_1801fc9c0 = uVar1;
  }
  iVar2 = strcmp(param_2,"zenithColor");
  if (iVar2 == 0) {
    DAT_1801fc9c4 = uVar1;
  }
  iVar2 = strcmp(param_2,"zenithTransitionColor");
  if (iVar2 == 0) {
    DAT_1801fc9c8 = uVar1;
  }
  iVar2 = strcmp(param_2,"skyPlaneColor");
  if (iVar2 == 0) {
    DAT_1801fc9cc = uVar1;
  }
  iVar2 = strcmp(param_2,"sunColor");
  if (iVar2 == 0) {
    DAT_1801fc9d0 = uVar1;
  }
  iVar2 = strcmp(param_2,"sunColorHdr");
  if (iVar2 == 0) {
    DAT_1801fc9d4 = uVar1;
  }
  iVar2 = strcmp(param_2,"sunDiscColorHdr");
  if (iVar2 == 0) {
    DAT_1801fc9d8 = uVar1;
  }
  iVar2 = strcmp(param_2,"smallCloudColorHdr");
  if (iVar2 == 0) {
    DAT_1801fc9dc = uVar1;
  }
  iVar2 = strcmp(param_2,"moonColor");
  if (iVar2 == 0) {
    DAT_1801fc9e0 = uVar1;
  }
  iVar2 = strcmp(param_2,"DirectionalMotionBlurParams");
  if (iVar2 == 0) {
    DAT_1801fc9e4 = uVar1;
  }
  iVar2 = strcmp(param_2,"DirectionalMotionBlurIterParams");
  if (iVar2 == 0) {
    DAT_1801fc9e8 = uVar1;
  }
  return uVar1;
}
}

