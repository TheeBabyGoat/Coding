#include "FUN_1800b7af0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b7af0(LPCWSTR param_1,int32_t param_2,longlong *param_3,LPWIN32_FIND_DATAW param_4) {
HANDLE pvVar1;
  DWORD DVar2;
  longlong lVar3;
  LPCWSTR pWVar4;
  int32_t uVar5;
  int32_t auStack_98 [32];
  ulonglong local_78;
  int32_t **ppuStack_70;
  int32_t local_68;
  int32_t local_60;
  WCHAR local_58 [16];
  ulonglong local_38;
  
  local_38 = DAT_1801eb080 ^ (ulonglong)auStack_98;
  pWVar4 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    pWVar4 = *(LPCWSTR *)param_1;
  }
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (pWVar4[lVar3] != L'\0');
  if ((lVar3 != 0) && (lVar3 == *(longlong *)(param_1 + 8))) {
    FUN_1800b9f10((int32_t *)local_58,(int32_t *)param_1);
    local_78 = 0;
    ppuStack_70 = (int32_t **)0x0;
    local_68 = 0;
    local_60 = 0;
    uVar5 = 1;
    FUN_1800b86e0(&local_78,(int32_t *)&DAT_1801878f0,1);
    FUN_1800b84a0((uint *)param_1,(uint *)&local_78,uVar5);
    FUN_1800ba040((longlong *)&local_78);
    if (7 < *(ulonglong *)(param_1 + 0xc)) {
      param_1 = *(LPCWSTR *)param_1;
    }
    DVar2 = __std_fs_directory_iterator_open(param_1,param_3,param_4);
    if (DVar2 == 0) {
      pvVar1 = (HANDLE)*param_3;
      while (param_4->cFileName[0] == L'.') {
        if (((param_4->cFileName[1] != L'\0') &&
            ((param_4->cFileName[1] != L'.' || (param_4->cFileName[2] != L'\0')))) ||
           (DVar2 = FUN_1801235d8(pvVar1,param_4), DVar2 != 0)) break;
      }
    }
    else if ((DVar2 != 5) && (DVar2 == 2)) {
      local_78 = local_78 & 0xffffffff00000000;
      ppuStack_70 = &PTR_vftable_1801ebd20;
      FUN_1800b8cb0(local_58,(longlong *)&local_78);
    }
    FUN_1800ba040((longlong *)local_58);
  }
  FUN_1801252c0(local_38 ^ (ulonglong)auStack_98);
  return;
}
}

