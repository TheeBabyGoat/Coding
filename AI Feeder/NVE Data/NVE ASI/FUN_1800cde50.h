#ifndef FUN_1800CDE50_H
#define FUN_1800CDE50_H

 FUN_1800cde50(param_1);
      FUN_18012f050((int *)param_1[0x10]);
    }
    *(int32_t *)((longlong)param_1 + 0x7c) = 0;
    *(int32_t *)((longlong)param_1 + 0x71) = 0;
    param_1[3] = (longlong)(param_1 + 1);
    param_1[4] = (longlong)(param_1 + 2);
    param_1[7] = (longlong)(param_1 + 5);
    param_1[8] = (longlong)(param_1 + 6);
    param_1[10] = (longlong)(param_1 + 9);
    param_1[0xb] = (longlong)param_1 + 0x4c;
    param_1[2] = 0;
    param_1[6] = 0;
    *(int32_t *)((longlong)param_1 + 0x4c) = 0;
    *(int32_t *)param_1[3] = 0;
    *(int32_t *)param_1[7] = 0;
    *(int32_t *)param_1[10] = 0;
    param_1[0x10] = 0;
    *(int32_t *)((longlong)param_1 + 0x74) = DAT_1801fc930;
    param_1[0xd] = 0;
  }
  *param_1 = (longlong)&PTR_FUN_1801cc3c0;
  pvVar3 = (LPVOID)param_1[0xc];
  if (pvVar3 != (LPVOID)0x0);
void FUN_1800cde50(longlong *param_1);

#endif
