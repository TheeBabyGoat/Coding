#ifndef ACQUIRESRWLOCKEXCLUSIVE_H
#define ACQUIRESRWLOCKEXCLUSIVE_H

void __stdcall AcquireSRWLockExclusive(PSRWLOCK SRWLock);
 AcquireSRWLockExclusive((PSRWLOCK)&DAT_1801ee948);
    lVar1 = *(longlong *)(local_res8 + 0x38);
    plVar2 = *(longlong **)(local_res8 + 0x28);
    uVar4 = param_2 >> 4 & *(ulonglong *)(local_res8 + 0x50);
    plVar6 = *(longlong **)(lVar1 + 8 + uVar4 * 0x10);
    if (plVar6 == plVar2);
 AcquireSRWLockExclusive((PSRWLOCK)&DAT_1801ee948);
  local_c0 = 1;
  FUN_1800c74c0(local_b8,1);
  puVar1 = (int32_t *)local_res10[2];
  plVar6 = local_88;
  for (puVar12 = (int32_t *)local_res10[1]; local_88 = plVar6, puVar12 != puVar1;
      puVar12 = puVar12 + 1);
 AcquireSRWLockExclusive((PSRWLOCK)&DAT_1801ed680);
  do {
    if (*param_1 == 0);

#endif
