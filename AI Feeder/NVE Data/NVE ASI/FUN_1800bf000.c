#include "FUN_1800bf000.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800bf000(longlong param_1) {
longlong *plVar1;
  longlong *plVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  puVar4 = DAT_1801fbd08;
  plVar1 = DAT_1801f3ad8;
  if ((DAT_1801f3ad8 != (longlong *)0x0) && (DAT_1801f3ad8 != (longlong *)0x0)) {
    puVar3 = DAT_1801fbd00;
    local_res8 = param_1;
    if (DAT_1801fbd00 != DAT_1801fbd08) {
      do {
        puVar5 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar5 = (int32_t *)*puVar3;
        }
        (**(code **)(*plVar1 + 0xa0))(plVar1,&local_res8,puVar5,DAT_1801fbcf8);
        if (local_res8 != 0) {
          (**(code **)(*plVar1 + 0x108))(plVar1,local_res8,&DAT_1801ec490,3,0);
        }
        puVar3 = puVar3 + 4;
      } while (puVar3 != puVar4);
    }
    puVar5 = DAT_1801fbd30;
    plVar2 = DAT_1801f3ad8;
    plVar1 = DAT_1801f3ad8;
    puVar4 = DAT_1801fbd28;
    puVar3 = DAT_1801fbd58;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; DAT_1801f3ad8 = plVar1, DAT_1801fbd58 = puVar3, puVar4 != puVar5; puVar4 = puVar4 + 4)
      {
        puVar3 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar3 = (int32_t *)*puVar4;
        }
        (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res10,puVar3,DAT_1801fbd20);
        if (local_res10 != 0) {
          (**(code **)(*plVar2 + 0x108))(plVar2,local_res10,&DAT_1801ec4a0,3,0);
        }
        plVar1 = DAT_1801f3ad8;
        puVar3 = DAT_1801fbd58;
      }
      plVar2 = plVar1;
      puVar4 = DAT_1801fbd80;
      puVar5 = DAT_1801fbd50;
      if (plVar1 != (longlong *)0x0) {
        for (; DAT_1801f3ad8 = plVar2, DAT_1801fbd80 = puVar4, puVar5 != puVar3; puVar5 = puVar5 + 4
            ) {
          puVar4 = puVar5;
          if (0xf < (ulonglong)puVar5[3]) {
            puVar4 = (int32_t *)*puVar5;
          }
          (**(code **)(*plVar1 + 0xa0))(plVar1,&local_res18,puVar4,DAT_1801fbd48);
          if (local_res18 != 0) {
            (**(code **)(*plVar1 + 0x108))(plVar1,local_res18,&DAT_1801ec4b0,3,0);
          }
          plVar2 = DAT_1801f3ad8;
          puVar4 = DAT_1801fbd80;
        }
        plVar1 = plVar2;
        puVar3 = DAT_1801fbda8;
        puVar5 = DAT_1801fbd78;
        if (plVar2 != (longlong *)0x0) {
          for (; DAT_1801f3ad8 = plVar1, DAT_1801fbda8 = puVar3, puVar5 != puVar4;
              puVar5 = puVar5 + 4) {
            puVar3 = puVar5;
            if (0xf < (ulonglong)puVar5[3]) {
              puVar3 = (int32_t *)*puVar5;
            }
            (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res20,puVar3,DAT_1801fbd70);
            if (local_res20 != 0) {
              (**(code **)(*plVar2 + 0x108))(plVar2,local_res20,&DAT_1801ec4c0,3,0);
            }
            plVar1 = DAT_1801f3ad8;
            puVar3 = DAT_1801fbda8;
          }
          plVar2 = plVar1;
          puVar4 = DAT_1801fbdd0;
          puVar5 = DAT_1801fbda0;
          if (plVar1 != (longlong *)0x0) {
            for (; DAT_1801f3ad8 = plVar2, DAT_1801fbdd0 = puVar4, puVar5 != puVar3;
                puVar5 = puVar5 + 4) {
              puVar4 = puVar5;
              if (0xf < (ulonglong)puVar5[3]) {
                puVar4 = (int32_t *)*puVar5;
              }
              (**(code **)(*plVar1 + 0xa0))(plVar1,&local_78,puVar4,DAT_1801fbd98);
              if (local_78 != 0) {
                (**(code **)(*plVar1 + 0x108))(plVar1,local_78,&DAT_1801ec4d0,3,0);
              }
              plVar2 = DAT_1801f3ad8;
              puVar4 = DAT_1801fbdd0;
            }
            plVar1 = plVar2;
            puVar3 = DAT_1801fbdf8;
            puVar5 = DAT_1801fbdc8;
            if (plVar2 != (longlong *)0x0) {
              for (; DAT_1801f3ad8 = plVar1, DAT_1801fbdf8 = puVar3, puVar5 != puVar4;
                  puVar5 = puVar5 + 4) {
                puVar3 = puVar5;
                if (0xf < (ulonglong)puVar5[3]) {
                  puVar3 = (int32_t *)*puVar5;
                }
                (**(code **)(*plVar2 + 0xa0))(plVar2,&local_70,puVar3,DAT_1801fbdc0);
                if (local_70 != 0) {
                  (**(code **)(*plVar2 + 0x108))(plVar2,local_70,&DAT_1801fb108,4,0);
                }
                plVar1 = DAT_1801f3ad8;
                puVar3 = DAT_1801fbdf8;
              }
              plVar2 = plVar1;
              puVar4 = DAT_1801fbe20;
              puVar5 = DAT_1801fbdf0;
              if (plVar1 != (longlong *)0x0) {
                for (; DAT_1801f3ad8 = plVar2, DAT_1801fbe20 = puVar4, puVar5 != puVar3;
                    puVar5 = puVar5 + 4) {
                  puVar4 = puVar5;
                  if (0xf < (ulonglong)puVar5[3]) {
                    puVar4 = (int32_t *)*puVar5;
                  }
                  (**(code **)(*plVar1 + 0xa0))(plVar1,&local_68,puVar4,DAT_1801fbde8);
                  if (local_68 != 0) {
                    (**(code **)(*plVar1 + 0x108))(plVar1,local_68,&DAT_1801ec4e0,3,0);
                  }
                  plVar2 = DAT_1801f3ad8;
                  puVar4 = DAT_1801fbe20;
                }
                plVar1 = plVar2;
                puVar3 = DAT_1801fbe48;
                puVar5 = DAT_1801fbe18;
                if (plVar2 != (longlong *)0x0) {
                  for (; DAT_1801f3ad8 = plVar1, DAT_1801fbe48 = puVar3, puVar5 != puVar4;
                      puVar5 = puVar5 + 4) {
                    puVar3 = puVar5;
                    if (0xf < (ulonglong)puVar5[3]) {
                      puVar3 = (int32_t *)*puVar5;
                    }
                    (**(code **)(*plVar2 + 0xa0))(plVar2,&local_60,puVar3,DAT_1801fbe10);
                    if (local_60 != 0) {
                      (**(code **)(*plVar2 + 0x108))(plVar2,local_60,&DAT_1801ec4f0,3,0);
                    }
                    plVar1 = DAT_1801f3ad8;
                    puVar3 = DAT_1801fbe48;
                  }
                  plVar2 = plVar1;
                  puVar4 = DAT_1801fbe70;
                  puVar5 = DAT_1801fbe40;
                  if (plVar1 != (longlong *)0x0) {
                    for (; DAT_1801f3ad8 = plVar2, DAT_1801fbe70 = puVar4, puVar5 != puVar3;
                        puVar5 = puVar5 + 4) {
                      puVar4 = puVar5;
                      if (0xf < (ulonglong)puVar5[3]) {
                        puVar4 = (int32_t *)*puVar5;
                      }
                      (**(code **)(*plVar1 + 0xa0))(plVar1,&local_58,puVar4,DAT_1801fbe38);
                      if (local_58 != 0) {
                        (**(code **)(*plVar1 + 0x108))(plVar1,local_58,&DAT_1801ec500,3,0);
                      }
                      plVar2 = DAT_1801f3ad8;
                      puVar4 = DAT_1801fbe70;
                    }
                    plVar1 = plVar2;
                    puVar3 = DAT_1801fbe98;
                    puVar5 = DAT_1801fbe68;
                    if (plVar2 != (longlong *)0x0) {
                      for (; DAT_1801f3ad8 = plVar1, DAT_1801fbe98 = puVar3, puVar5 != puVar4;
                          puVar5 = puVar5 + 4) {
                        puVar3 = puVar5;
                        if (0xf < (ulonglong)puVar5[3]) {
                          puVar3 = (int32_t *)*puVar5;
                        }
                        (**(code **)(*plVar2 + 0xa0))(plVar2,&local_50,puVar3,DAT_1801fbe60);
                        if (local_50 != 0) {
                          (**(code **)(*plVar2 + 0x108))(plVar2,local_50,&DAT_1801ec510,3,0);
                        }
                        plVar1 = DAT_1801f3ad8;
                        puVar3 = DAT_1801fbe98;
                      }
                      plVar2 = plVar1;
                      puVar4 = DAT_1801fbec0;
                      puVar5 = DAT_1801fbe90;
                      if (plVar1 != (longlong *)0x0) {
                        for (; DAT_1801f3ad8 = plVar2, DAT_1801fbec0 = puVar4, puVar5 != puVar3;
                            puVar5 = puVar5 + 4) {
                          puVar4 = puVar5;
                          if (0xf < (ulonglong)puVar5[3]) {
                            puVar4 = (int32_t *)*puVar5;
                          }
                          (**(code **)(*plVar1 + 0xa0))(plVar1,&local_48,puVar4,DAT_1801fbe88);
                          if (local_48 != 0) {
                            (**(code **)(*plVar1 + 0x108))(plVar1,local_48,&DAT_1801ec520,3,0);
                          }
                          plVar2 = DAT_1801f3ad8;
                          puVar4 = DAT_1801fbec0;
                        }
                        plVar1 = plVar2;
                        puVar3 = DAT_1801fbee8;
                        puVar5 = DAT_1801fbeb8;
                        if (plVar2 != (longlong *)0x0) {
                          for (; DAT_1801f3ad8 = plVar1, DAT_1801fbee8 = puVar3, puVar5 != puVar4;
                              puVar5 = puVar5 + 4) {
                            puVar3 = puVar5;
                            if (0xf < (ulonglong)puVar5[3]) {
                              puVar3 = (int32_t *)*puVar5;
                            }
                            (**(code **)(*plVar2 + 0xa0))(plVar2,&local_40,puVar3,DAT_1801fbeb0);
                            if (local_40 != 0) {
                              (**(code **)(*plVar2 + 0x108))(plVar2,local_40,&DAT_1801ec530,3,0);
                            }
                            plVar1 = DAT_1801f3ad8;
                            puVar3 = DAT_1801fbee8;
                          }
                          plVar2 = plVar1;
                          puVar4 = DAT_1801fbf10;
                          puVar5 = DAT_1801fbee0;
                          if (plVar1 != (longlong *)0x0) {
                            for (; DAT_1801f3ad8 = plVar2, DAT_1801fbf10 = puVar4, puVar5 != puVar3;
                                puVar5 = puVar5 + 4) {
                              puVar4 = puVar5;
                              if (0xf < (ulonglong)puVar5[3]) {
                                puVar4 = (int32_t *)*puVar5;
                              }
                              (**(code **)(*plVar1 + 0xa0))(plVar1,&local_38,puVar4,DAT_1801fbed8);
                              if (local_38 != 0) {
                                (**(code **)(*plVar1 + 0x108))(plVar1,local_38,&DAT_1801ec540,3,0);
                              }
                              plVar2 = DAT_1801f3ad8;
                              puVar4 = DAT_1801fbf10;
                            }
                            puVar3 = DAT_1801fbf08;
                            if (plVar2 != (longlong *)0x0) {
                              for (; puVar3 != puVar4; puVar3 = puVar3 + 4) {
                                puVar5 = puVar3;
                                if (0xf < (ulonglong)puVar3[3]) {
                                  puVar5 = (int32_t *)*puVar3;
                                }
                                (**(code **)(*plVar2 + 0xa0))(plVar2,&local_30,puVar5,DAT_1801fbf00)
                                ;
                                if (local_30 != 0) {
                                  (**(code **)(*plVar2 + 0x108))(plVar2,local_30,&DAT_1801ec550,3,0)
                                  ;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}
}

