#include "FUN_1800ceb80.h"
#include <stdint.h>
#include <stddef.h>

longlong FUN_1800ceb80(longlong param_1,wchar_t *param_2) {
int32_t *puVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  longlong *plVar6;
  char cVar7;
  _iobuf *p_Var8;
  int32_t *puVar9;
  longlong *local_res8;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  
  if ((*(longlong *)(param_1 + 0x80) == 0) &&
     (p_Var8 = FUN_180124b04(param_2,0x21,0x40), p_Var8 != (_iobuf *)0x0)) {
    *(int32_t *)(param_1 + 0x7c) = 1;
    *(int32_t *)(param_1 + 0x71) = 0;
    puVar9 = (int32_t *)(param_1 + 8);
    *(int32_t **)(param_1 + 0x18) = puVar9;
    puVar1 = (int32_t *)(param_1 + 0x10);
    *(int32_t **)(param_1 + 0x20) = puVar1;
    puVar2 = (int32_t *)(param_1 + 0x28);
    *(int32_t **)(param_1 + 0x38) = puVar2;
    puVar3 = (int32_t *)(param_1 + 0x30);
    *(int32_t **)(param_1 + 0x40) = puVar3;
    puVar4 = (int32_t *)(param_1 + 0x48);
    *(int32_t **)(param_1 + 0x50) = puVar4;
    puVar5 = (int32_t *)(param_1 + 0x4c);
    *(int32_t **)(param_1 + 0x58) = puVar5;
    *puVar1 = 0;
    *puVar3 = 0;
    *puVar5 = 0;
    *puVar9 = 0;
    *puVar2 = 0;
    *puVar4 = 0;
    local_res8 = (longlong *)0x0;
    local_48 = 0;
    local_40 = 0;
    _get_stream_buffer_pointers((longlong)p_Var8,(longlong *)&local_res8,&local_48,&local_40);
    *(longlong **)(param_1 + 0x18) = local_res8;
    *(longlong **)(param_1 + 0x20) = local_res8;
    *(longlong *)(param_1 + 0x38) = local_48;
    *(longlong *)(param_1 + 0x40) = local_48;
    *(longlong *)(param_1 + 0x50) = local_40;
    *(longlong *)(param_1 + 0x58) = local_40;
    *(_iobuf **)(param_1 + 0x80) = p_Var8;
    *(int32_t *)(param_1 + 0x74) = DAT_1801fc930;
    *(int32_t *)(param_1 + 0x68) = 0;
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8);
    local_38 = plVar6;
    (**(code **)(*plVar6 + 8))(plVar6);
    local_res8 = FUN_1800ce6c0((longlong)&local_40);
    cVar7 = (**(code **)(*local_res8 + 0x18))(local_res8);
    if (cVar7 == '\0') {
      *(longlong **)(param_1 + 0x68) = local_res8;
      *(int32_t **)(param_1 + 0x18) = puVar9;
      *(int32_t **)(param_1 + 0x20) = puVar1;
      *(int32_t **)(param_1 + 0x38) = puVar2;
      *(int32_t **)(param_1 + 0x40) = puVar3;
      *(int32_t **)(param_1 + 0x50) = puVar4;
      *(int32_t **)(param_1 + 0x58) = puVar5;
      *puVar1 = 0;
      *puVar3 = 0;
      *puVar5 = 0;
      *puVar9 = 0;
      *puVar2 = 0;
      *puVar4 = 0;
    }
    else {
      *(int32_t *)(param_1 + 0x68) = 0;
    }
    puVar9 = (int32_t *)(**(code **)(*plVar6 + 0x10))(plVar6);
    if (puVar9 != (int32_t *)0x0) {
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}
}

