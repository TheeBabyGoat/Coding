#include "FUN_1800b5be0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b5be0(_Locinfo *param_1) {
std::_Locinfo::_Locinfo_dtor(param_1);
  if (*(LPVOID *)(param_1 + 0x58) != (LPVOID)0x0) {
    FUN_18012d5e8(*(LPVOID *)(param_1 + 0x58));
  }
  *(int32_t *)(param_1 + 0x58) = 0;
  if (*(LPVOID *)(param_1 + 0x48) != (LPVOID)0x0) {
    FUN_18012d5e8(*(LPVOID *)(param_1 + 0x48));
  }
  *(int32_t *)(param_1 + 0x48) = 0;
  if (*(LPVOID *)(param_1 + 0x38) != (LPVOID)0x0) {
    FUN_18012d5e8(*(LPVOID *)(param_1 + 0x38));
  }
  *(int32_t *)(param_1 + 0x38) = 0;
  if (*(LPVOID *)(param_1 + 0x28) != (LPVOID)0x0) {
    FUN_18012d5e8(*(LPVOID *)(param_1 + 0x28));
  }
  *(int32_t *)(param_1 + 0x28) = 0;
  if (*(LPVOID *)(param_1 + 0x18) != (LPVOID)0x0) {
    FUN_18012d5e8(*(LPVOID *)(param_1 + 0x18));
  }
  *(int32_t *)(param_1 + 0x18) = 0;
  if (*(LPVOID *)(param_1 + 8) != (LPVOID)0x0) {
    FUN_18012d5e8(*(LPVOID *)(param_1 + 8));
  }
  *(int32_t *)(param_1 + 8) = 0;
  std::_Lockit::~_Lockit((_Lockit *)param_1);
  return;
}
}

