#include "FUN_1800e9b20.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800e9b20(int32_t param_1,int32_t param_2,int32_t **param_3,int32_t *param_4) {
int32_t *******pppppppuVar1;
  char cVar2;
  code *pcVar3;
  int32_t uVar4;
  __uint64 *p_Var5;
  uint ******ppppppuVar6;
  uint ****ppppuVar7;
  char *pcVar8;
  longlong *plVar9;
  int32_t *******pppppppuVar10;
  uint *******pppppppuVar11;
  char *******pppppppcVar12;
  uint *****pppppuVar13;
  int32_t uVar14;
  char **ppcVar15;
  ulonglong uVar16;
  bool bVar17;
  int32_t auStack_5c8 [48];
  int32_t local_598;
  int32_t local_597 [7];
  int32_t local_590;
  FILE *local_588;
  char local_580 [8];
  uint *****local_578;
  char *local_570;
  char local_568 [8];
  longlong local_560;
  uint ******local_558;
  uint ***local_550;
  uint ******local_548;
  ulonglong local_540;
  int32_t *local_538;
  uint *****local_530;
  longlong local_528 [7];
  int32_t local_4f0;
  uint ****local_4e8;
  int32_t uStack_4e0;
  uint *****local_4d8;
  int32_t uStack_4d0;
  uint ******local_4b0;
  longlong local_4a8;
  uint ******local_4a0;
  ulonglong local_498;
  int32_t ******local_490;
  int32_t uStack_488;
  int32_t local_480;
  ulonglong uStack_478;
  char ******local_470 [3];
  ulonglong local_458;
  char *local_448 [130];
  char *local_38 [4];
  
  local_38[0] = (char *)(DAT_1801eb080 ^ (ulonglong)auStack_5c8);
  uVar14 = 0;
  local_590 = (uint ******)((ulonglong)local_590 & 0xffffffff00000000);
  local_4d8 = (uint *****)_DAT_1801d9020;
  uStack_4d0 = _UNK_1801d9028;
  local_4e8 = (uint ****)s_vehicles_json_1801d60c0._0_8_;
  uStack_4e0 = (uint *****)
               (ulonglong)CONCAT14(s_vehicles_json_1801d60c0[0xc],s_vehicles_json_1801d60c0._8_4_);
  FUN_18011cb10(local_470,&local_4e8,param_3);
  FUN_1800a6800((longlong *)&local_4e8);
  pppppppcVar12 = local_470;
  if (0xf < local_458) {
    pppppppcVar12 = (char *******)local_470[0];
  }
  fopen_s(&local_588,(char *)pppppppcVar12,"r");
  if (local_588 == (FILE *)0x0) {
    local_568[0] = '\0';
    FUN_1800f8a10(&local_560,'\0');
    local_448[0] = "adder";
    local_448[1] = "alpha";
    local_448[2] = "banshee";
    local_448[3] = "banshee2";
    local_448[4] = "bestiagts";
    local_448[5] = "blista";
    local_448[6] = "blista2";
    local_448[7] = "blista3";
    local_448[8] = "boxsters";
    local_448[9] = "boxterlb";
    local_448[10] = "brzrbv3";
    local_448[0xb] = "buffalo";
    local_448[0xc] = "buffalo2";
    local_448[0xd] = "buffalo3";
    local_448[0xe] = "bullet";
    local_448[0xf] = "carbonizzare";
    local_448[0x10] = "centenario";
    local_448[0x11] = "cheetah";
    local_448[0x12] = "comet2";
    local_448[0x13] = "comet3";
    local_448[0x14] = "coquette";
    local_448[0x15] = "demon";
    local_448[0x16] = "dominator";
    local_448[0x17] = "dominator2";
    local_448[0x18] = "dukes";
    local_448[0x19] = "dukes2";
    local_448[0x1a] = "elegy";
    local_448[0x1b] = "elegy2";
    local_448[0x1c] = "entity2";
    local_448[0x1d] = "entityxf";
    local_448[0x1e] = "essentia";
    local_448[0x1f] = "f250gto";
    local_448[0x20] = "f250gto64";
    local_448[0x21] = "f512tr";
    local_448[0x22] = "feltzer2";
    local_448[0x23] = "feltzer3";
    local_448[0x24] = "fmj";
    local_448[0x25] = "focusrs";
    local_448[0x26] = "furoregt";
    local_448[0x27] = "fusilade";
    local_448[0x28] = "futo";
    local_448[0x29] = "gauntlet";
    local_448[0x2a] = "gauntlet4";
    local_448[0x2b] = "gp1";
    local_448[0x2c] = "gt2rs";
    local_448[0x2d] = "hellcat";
    local_448[0x2e] = "ignus2";
    local_448[0x2f] = "infernus";
    local_448[0x30] = "infernus2";
    local_448[0x31] = "italigtb";
    local_448[0x32] = "italigtb2";
    local_448[0x33] = "jester";
    local_448[0x34] = "jester2";
    local_448[0x35] = "jugular";
    local_448[0x36] = "khamelion";
    local_448[0x37] = "krieger";
    local_448[0x38] = "kuruma";
    local_448[0x39] = "kuruma2";
    local_448[0x3a] = "laferrari";
    local_448[0x3b] = "locust";
    local_448[0x3c] = "lp770";
    local_448[0x3d] = "lynx";
    local_448[0x3e] = "massacro";
    local_448[0x3f] = "massacro2";
    local_448[0x40] = "mustangbkit";
    local_448[0x41] = "neo";
    local_448[0x42] = "nero";
    local_448[0x43] = "nero2";
    local_448[0x44] = "ninef";
    local_448[0x45] = "ninef2";
    local_448[0x46] = "nisgtr2k";
    local_448[0x47] = "omnis";
    local_448[0x48] = "osiris";
    local_448[0x49] = "p911gt2rs";
    local_448[0x4a] = "p918spyder";
    local_448[0x4b] = "penetrator";
    local_448[0x4c] = "penumbra";
    local_448[0x4d] = "pfister811";
    local_448[0x4e] = "prototipo";
    local_448[0x4f] = "quadravtech";
    local_448[0x50] = "rapidgt";
    local_448[0x51] = "rapidgt2";
    local_448[0x52] = "raptor";
    local_448[0x53] = "re7b";
    local_448[0x54] = "reaper";
    local_448[0x55] = "rrocket";
    local_448[0x56] = "ruston";
    local_448[0x57] = "sabregt";
    local_448[0x58] = "sabregt2";
    local_448[0x59] = "sagaris";
    local_448[0x5a] = "schafter2";
    local_448[0x5b] = "schafter3";
    local_448[0x5c] = "schafter4";
    local_448[0x5d] = "schafter5";
    local_448[0x5e] = "schafter6";
    local_448[0x5f] = "schwarzer";
    local_448[0x60] = "scramjet";
    local_448[0x61] = "seven70";
    local_448[0x62] = "sheava";
    local_448[99] = "specter";
    local_448[100] = "specter2";
    local_448[0x65] = "subzrb";
    local_448[0x66] = "sultan";
    local_448[0x67] = "sultanrs";
    local_448[0x68] = "superd";
    local_448[0x69] = "supragr21";
    local_448[0x6a] = "surano";
    local_448[0x6b] = "sv";
    local_448[0x6c] = "t20";
    local_448[0x6d] = "tampa2";
    local_448[0x6e] = "tempesta";
    local_448[0x6f] = "thrax";
    local_448[0x70] = "torero";
    local_448[0x71] = "tropos";
    local_448[0x72] = "turismo2";
    local_448[0x73] = "turismor";
    local_448[0x74] = "tyrus";
    local_448[0x75] = "vacca";
    local_448[0x76] = "vagner";
    local_448[0x77] = "verlierer2";
    local_448[0x78] = "vigilante";
    local_448[0x79] = "vipergtsacr";
    local_448[0x7a] = "voltic";
    local_448[0x7b] = "voltic2";
    local_448[0x7c] = "wmlykan";
    local_448[0x7d] = "xa21";
    local_448[0x7e] = "yaiba";
    local_448[0x7f] = "zeno";
    local_448[0x80] = "zentorno";
    local_448[0x81] = "zorrusso";
    local_570 = local_580;
    local_580[0] = '\0';
    local_578 = (uint *****)0x0;
    FUN_1800f9a90((longlong *)&local_578,'\0');
    local_580[0] = '\x02';
    ppppppuVar6 = (uint ******)operator_new(0x18);
    local_538 = &local_598;
    *ppppppuVar6 = (uint *****)0x0;
    ppppppuVar6[1] = (uint *****)0x0;
    ppppppuVar6[2] = (uint *****)0x0;
    local_530 = (uint *****)ppppppuVar6;
    FUN_1800f56e0((ulonglong *)ppppppuVar6,0x82);
    pppppuVar13 = *ppppppuVar6;
    ppcVar15 = local_448;
    local_558 = (uint ******)local_597;
    local_590 = ppppppuVar6;
    local_4e8 = (uint ****)pppppuVar13;
    local_4d8 = (uint *****)ppppppuVar6;
    do {
      *(char *)pppppuVar13 = '\0';
      pppppuVar13[1] = (uint ****)0x0;
      uStack_4e0 = pppppuVar13;
      FUN_1800f9a90((longlong *)(pppppuVar13 + 1),*(char *)pppppuVar13);
      *(char *)pppppuVar13 = '\x03';
      ppppuVar7 = (uint ****)operator_new(0x20);
      pcVar8 = *ppcVar15;
      *ppppuVar7 = (uint ***)0x0;
      ppppuVar7[1] = (uint ***)0x0;
      ppppuVar7[2] = (uint ***)0x0;
      ppppuVar7[3] = (uint ***)0x0;
      uVar16 = 0xffffffffffffffff;
      do {
        uVar16 = uVar16 + 1;
      } while (pcVar8[uVar16] != '\0');
      local_550 = (uint ***)ppppuVar7;
      FUN_1800ba360(ppppuVar7,(int32_t *)pcVar8,uVar16);
      local_550 = (uint ***)0x0;
      pppppuVar13[1] = ppppuVar7;
      pppppuVar13 = pppppuVar13 + 2;
      ppcVar15 = ppcVar15 + 1;
    } while (ppcVar15 != local_38);
    ppppppuVar6[1] = pppppuVar13;
    local_4e8 = (uint ****)0x0;
    uStack_4e0 = (uint *****)0x0;
    local_4d8 = (uint *****)0x0;
    uStack_4d0 = 0;
    local_578 = (uint *****)ppppppuVar6;
    local_4e8 = (uint ****)operator_new(0x20);
    uVar4 = s_VehiclesWithNitrous_1801d60d8._8_8_;
    local_4d8 = (uint *****)0x13;
    uStack_4d0 = 0x1f;
    *local_4e8 = (uint ***)s_VehiclesWithNitrous_1801d60d8._0_8_;
    local_4e8[1] = (uint ***)uVar4;
    *(int32_t *)(local_4e8 + 2) = s_VehiclesWithNitrous_1801d60d8._16_2_;
    *(char *)((longlong)local_4e8 + 0x12) = s_VehiclesWithNitrous_1801d60d8[0x12];
    *(char *)((longlong)local_4e8 + 0x13) = '\0';
    pcVar8 = (char *)FUN_1800edd90((longlong *)local_568,(longlong *)&local_4e8);
    cVar2 = *pcVar8;
    *pcVar8 = local_580[0];
    pppppuVar13 = *(uint ******)(pcVar8 + 8);
    *(uint ******)(pcVar8 + 8) = local_578;
    local_580[0] = cVar2;
    local_578 = pppppuVar13;
    FUN_1800f9a90((longlong *)&local_578,cVar2);
    ppcVar15 = local_448;
    do {
      pcVar8 = *ppcVar15;
      nativeInit(0xd24d37cc275948cc);
      nativePush64((__uint64)pcVar8);
      p_Var5 = nativeCall();
      local_590 = (uint ******)CONCAT44(local_590._4_4_,(uint)*p_Var5);
      FUN_1800ecab0((ulonglong)(uint)*p_Var5,&local_538,(uint *)&local_590);
      ppcVar15 = ppcVar15 + 1;
    } while (ppcVar15 != local_38);
    FUN_1800eb7a0(local_568,&local_4b0);
    pppppppcVar12 = local_470;
    if (0xf < local_458) {
      pppppppcVar12 = (char *******)local_470[0];
    }
    fopen_s(&local_588,(char *)pppppppcVar12,"w");
    pppppppuVar11 = &local_4b0;
    if (0xf < local_498) {
      pppppppuVar11 = (uint *******)local_4b0;
    }
    FUN_18012e4a0(pppppppuVar11,(longlong)local_4a0,1,(longlong)local_588);
    fflush(local_588);
    FUN_18012f050((int *)local_588);
    FUN_1800a6800((longlong *)&local_4b0);
    FUN_1800f9a90(&local_560,local_568[0]);
LAB_1800ea79c:
    FUN_1800a6800((longlong *)local_470);
    FUN_1801252c0((ulonglong)local_38[0] ^ (ulonglong)auStack_5c8);
    return;
  }
  local_4f0 = 0;
  FUN_1800ec930((int32_t **)local_568,&local_588,local_528,param_4);
  local_4e8 = (uint ****)0x0;
  uStack_4e0 = (uint *****)0x0;
  local_4d8 = (uint *****)0x0;
  uStack_4d0 = 0;
  local_4e8 = (uint ****)operator_new(0x20);
  uVar4 = s_VehiclesWithNitrous_1801d60d8._8_8_;
  local_4d8 = (uint *****)0x13;
  uStack_4d0 = 0x1f;
  *local_4e8 = (uint ***)s_VehiclesWithNitrous_1801d60d8._0_8_;
  local_4e8[1] = (uint ***)uVar4;
  *(int32_t *)(local_4e8 + 2) = s_VehiclesWithNitrous_1801d60d8._16_2_;
  *(char *)((longlong)local_4e8 + 0x12) = s_VehiclesWithNitrous_1801d60d8[0x12];
  *(char *)((longlong)local_4e8 + 0x13) = '\0';
  uVar4 = FUN_1800edd90((longlong *)local_568,(longlong *)&local_4e8);
  FUN_1800f9490(uVar4,&local_558);
  FUN_1800f93b0(uVar4,&local_4b0);
  uVar16 = _UNK_1801d8f78;
  uVar4 = _DAT_1801d8f70;
  do {
    if (local_558 != local_4b0) {
LAB_1800ea80e:
      FUN_1800ba470(&local_4b0,(int32_t *)"cannot compare iterators of different containers");
      FUN_1800f8fa0(&local_4e8,0xd4,&local_4b0);
      FUN_1801279a8((longlong *)&local_4e8,&DAT_1801e92f8);
switchD_1800e9cf0_caseD_0:
      FUN_1800ba470(&local_4b0,(int32_t *)"cannot get value");
      pppppppuVar11 = &local_4b0;
      FUN_1800f8fa0(&local_4e8,0xd6,pppppppuVar11);
      FUN_1801279a8((longlong *)&local_4e8,&DAT_1801e92f8);
LAB_1800ea876:
      FUN_18012b7b4();
LAB_1800ea87c:
      local_570 = FUN_1800f7810((int32_t *)pppppppuVar11);
      plVar9 = FUN_1800f24a0((longlong *)&local_4b0,(int32_t *)"type must be string, but is ",
                             (longlong *)&local_570);
      FUN_1800ed150(&local_4e8,0x12e,plVar9);
      FUN_1801279a8((longlong *)&local_4e8,&DAT_1801e9200);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    switch(*(int32_t *)local_558) {
    default:
      bVar17 = local_540 == local_498;
      break;
    case 1:
      bVar17 = local_550 == (uint ***)local_4a8;
      break;
    case 2:
      bVar17 = local_548 == local_4a0;
    }
    if (bVar17) {
      FUN_18012f050((int *)local_588);
      FUN_1800f9a90(&local_560,local_568[0]);
      goto LAB_1800ea79c;
    }
    pppppppuVar11 = (uint *******)local_548;
    switch(*(int32_t *)local_558) {
    case 0:
      goto switchD_1800e9cf0_caseD_0;
    case 1:
      pppppppuVar11 = (uint *******)((longlong)local_550 + 0x40);
      break;
    case 2:
      break;
    default:
      pppppppuVar11 = (uint *******)local_558;
      if (local_540 != 0) {
        FUN_1800ba470(&local_4b0,(int32_t *)"cannot get value");
        FUN_1800f8fa0(&local_4e8,0xd6,&local_4b0);
        FUN_1801279a8((longlong *)&local_4e8,&DAT_1801e92f8);
        goto LAB_1800ea80e;
      }
    }
    uStack_488 = 0;
    local_480 = uVar4;
    uStack_478 = uVar16;
    local_490 = (int32_t *******)0x0;
    local_590._4_4_ = (int32_t)((ulonglong)local_590 >> 0x20);
    local_590 = (uint ******)(CONCAT44(local_590._4_4_,uVar14) | 2);
    if (*(char *)pppppppuVar11 != '\x03') goto LAB_1800ea87c;
    pppppppuVar10 = (int32_t *******)pppppppuVar11[1];
    if (&local_490 != pppppppuVar10) {
      pppppppuVar1 = pppppppuVar10 + 2;
      if ((int32_t ******)0xf < pppppppuVar10[3]) {
        pppppppuVar10 = (int32_t *******)*pppppppuVar10;
      }
      FUN_1800de6e0((longlong *)&local_490,pppppppuVar10,(ulonglong)*pppppppuVar1);
    }
    uVar14 = 1;
    pppppppuVar10 = &local_490;
    if (0xf < uStack_478) {
      pppppppuVar10 = (int32_t *******)local_490;
    }
    nativeInit(0xd24d37cc275948cc);
    nativePush64((__uint64)pppppppuVar10);
    p_Var5 = nativeCall();
    local_590 = (uint ******)CONCAT44(local_590._4_4_,(uint)*p_Var5);
    pppppppuVar11 = (uint *******)&local_590;
    FUN_1800ecab0((ulonglong)(uint)*p_Var5,&local_538,(uint *)pppppppuVar11);
    if (0xf < uStack_478) {
      pppppppuVar10 = (int32_t *******)local_490;
      if ((0xfff < uStack_478 + 1) &&
         (pppppppuVar10 = (int32_t *******)local_490[-1],
         0x1f < (ulonglong)((longlong)local_490 + (-8 - (longlong)pppppppuVar10))))
      goto LAB_1800ea876;
      thunk_FUN_18012d5e8(pppppppuVar10);
    }
    FUN_1800f92f0(&local_558);
  } while( true );
}
}

