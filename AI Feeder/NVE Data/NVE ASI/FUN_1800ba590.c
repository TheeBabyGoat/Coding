#include "FUN_1800ba590.h"
#include <stdint.h>
#include <stddef.h>

void * FUN_1800ba590(int32_t param_1,__uint64 *param_2) {
__uint64 _Var1;
  code *pcVar2;
  void *pvVar3;
  void *pvVar4;
  __uint64 _Var5;
  
  _Var1 = *param_2;
  _Var5 = _Var1 + 1;
  *param_2 = _Var5;
  if (_Var5 == 0) {
    *param_2 = *param_2 - 1;
    return (void *)0x0;
  }
  if (_Var5 < 0x1000) {
    pvVar3 = operator_new(_Var5);
    *param_2 = *param_2 - 1;
    return pvVar3;
  }
  _Var1 = _Var1 + 0x28;
  if (_Var1 <= _Var5) {
    FUN_1800ba8a0();
    pcVar2 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar2)();
    return pvVar3;
  }
  pvVar3 = operator_new(_Var1);
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)pvVar4 + -8) = pvVar3;
    *param_2 = *param_2 - 1;
    return pvVar4;
  }
  FUN_18012b7b4();
  pcVar2 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar2)();
  return pvVar3;
}
}

