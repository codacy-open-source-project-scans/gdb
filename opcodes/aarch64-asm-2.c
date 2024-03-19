/* This file is automatically generated by aarch64-gen.  Do not edit!  */
/* Copyright (C) 2012-2024 Free Software Foundation, Inc.
   Contributed by ARM Ltd.

   This file is part of the GNU opcodes library.

   This library is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING3. If not,
   see <http://www.gnu.org/licenses/>.  */

#include "sysdep.h"
#include "aarch64-asm.h"


const aarch64_opcode *
aarch64_find_real_opcode (const aarch64_opcode *opcode)
{
  /* Use the index as the key to locate the real opcode.  */
  int key = opcode - aarch64_opcode_table;
  int value;
  switch (key)
    {
    case 3:	/* ngc */
    case 2:	/* sbc */
      value = 2;	/* --> sbc.  */
      break;
    case 5:	/* ngcs */
    case 4:	/* sbcs */
      value = 4;	/* --> sbcs.  */
      break;
    case 8:	/* cmn */
    case 7:	/* adds */
      value = 7;	/* --> adds.  */
      break;
    case 11:	/* cmp */
    case 10:	/* subs */
      value = 10;	/* --> subs.  */
      break;
    case 13:	/* mov */
    case 12:	/* add */
      value = 12;	/* --> add.  */
      break;
    case 15:	/* cmn */
    case 14:	/* adds */
      value = 14;	/* --> adds.  */
      break;
    case 18:	/* cmp */
    case 17:	/* subs */
      value = 17;	/* --> subs.  */
      break;
    case 23:	/* cmn */
    case 22:	/* adds */
      value = 22;	/* --> adds.  */
      break;
    case 25:	/* neg */
    case 24:	/* sub */
      value = 24;	/* --> sub.  */
      break;
    case 27:	/* cmp */
    case 28:	/* negs */
    case 26:	/* subs */
      value = 26;	/* --> subs.  */
      break;
    case 153:	/* mov */
    case 152:	/* umov */
      value = 152;	/* --> umov.  */
      break;
    case 155:	/* mov */
    case 154:	/* ins */
      value = 154;	/* --> ins.  */
      break;
    case 157:	/* mov */
    case 156:	/* ins */
      value = 156;	/* --> ins.  */
      break;
    case 243:	/* mvn */
    case 242:	/* not */
      value = 242;	/* --> not.  */
      break;
    case 318:	/* mov */
    case 317:	/* orr */
      value = 317;	/* --> orr.  */
      break;
    case 389:	/* sxtl */
    case 388:	/* sshll */
      value = 388;	/* --> sshll.  */
      break;
    case 391:	/* sxtl2 */
    case 390:	/* sshll2 */
      value = 390;	/* --> sshll2.  */
      break;
    case 413:	/* uxtl */
    case 412:	/* ushll */
      value = 412;	/* --> ushll.  */
      break;
    case 415:	/* uxtl2 */
    case 414:	/* ushll2 */
      value = 414;	/* --> ushll2.  */
      break;
    case 536:	/* mov */
    case 535:	/* dup */
      value = 535;	/* --> dup.  */
      break;
    case 623:	/* sxtw */
    case 622:	/* sxth */
    case 621:	/* sxtb */
    case 624:	/* asr */
    case 620:	/* sbfx */
    case 619:	/* sbfiz */
    case 618:	/* sbfm */
      value = 618;	/* --> sbfm.  */
      break;
    case 627:	/* bfc */
    case 628:	/* bfxil */
    case 626:	/* bfi */
    case 625:	/* bfm */
      value = 625;	/* --> bfm.  */
      break;
    case 633:	/* uxth */
    case 632:	/* uxtb */
    case 635:	/* lsr */
    case 634:	/* lsl */
    case 631:	/* ubfx */
    case 630:	/* ubfiz */
    case 629:	/* ubfm */
      value = 629;	/* --> ubfm.  */
      break;
    case 665:	/* cset */
    case 664:	/* cinc */
    case 663:	/* csinc */
      value = 663;	/* --> csinc.  */
      break;
    case 668:	/* csetm */
    case 667:	/* cinv */
    case 666:	/* csinv */
      value = 666;	/* --> csinv.  */
      break;
    case 670:	/* cneg */
    case 669:	/* csneg */
      value = 669;	/* --> csneg.  */
      break;
    case 688:	/* rev */
    case 689:	/* rev64 */
      value = 688;	/* --> rev.  */
      break;
    case 714:	/* lsl */
    case 713:	/* lslv */
      value = 713;	/* --> lslv.  */
      break;
    case 716:	/* lsr */
    case 715:	/* lsrv */
      value = 715;	/* --> lsrv.  */
      break;
    case 718:	/* asr */
    case 717:	/* asrv */
      value = 717;	/* --> asrv.  */
      break;
    case 720:	/* ror */
    case 719:	/* rorv */
      value = 719;	/* --> rorv.  */
      break;
    case 723:	/* cmpp */
    case 722:	/* subps */
      value = 722;	/* --> subps.  */
      break;
    case 736:	/* mul */
    case 735:	/* madd */
      value = 735;	/* --> madd.  */
      break;
    case 738:	/* mneg */
    case 737:	/* msub */
      value = 737;	/* --> msub.  */
      break;
    case 740:	/* smull */
    case 739:	/* smaddl */
      value = 739;	/* --> smaddl.  */
      break;
    case 742:	/* smnegl */
    case 741:	/* smsubl */
      value = 741;	/* --> smsubl.  */
      break;
    case 745:	/* umull */
    case 744:	/* umaddl */
      value = 744;	/* --> umaddl.  */
      break;
    case 747:	/* umnegl */
    case 746:	/* umsubl */
      value = 746;	/* --> umsubl.  */
      break;
    case 759:	/* ror */
    case 758:	/* extr */
      value = 758;	/* --> extr.  */
      break;
    case 996:	/* bic */
    case 995:	/* and */
      value = 995;	/* --> and.  */
      break;
    case 998:	/* mov */
    case 997:	/* orr */
      value = 997;	/* --> orr.  */
      break;
    case 1001:	/* tst */
    case 1000:	/* ands */
      value = 1000;	/* --> ands.  */
      break;
    case 1006:	/* uxtw */
    case 1005:	/* mov */
    case 1004:	/* orr */
      value = 1004;	/* --> orr.  */
      break;
    case 1008:	/* mvn */
    case 1007:	/* orn */
      value = 1007;	/* --> orn.  */
      break;
    case 1012:	/* tst */
    case 1011:	/* ands */
      value = 1011;	/* --> ands.  */
      break;
    case 1138:	/* staddb */
    case 1042:	/* ldaddb */
      value = 1042;	/* --> ldaddb.  */
      break;
    case 1139:	/* staddh */
    case 1043:	/* ldaddh */
      value = 1043;	/* --> ldaddh.  */
      break;
    case 1140:	/* stadd */
    case 1044:	/* ldadd */
      value = 1044;	/* --> ldadd.  */
      break;
    case 1141:	/* staddlb */
    case 1046:	/* ldaddlb */
      value = 1046;	/* --> ldaddlb.  */
      break;
    case 1142:	/* staddlh */
    case 1049:	/* ldaddlh */
      value = 1049;	/* --> ldaddlh.  */
      break;
    case 1143:	/* staddl */
    case 1052:	/* ldaddl */
      value = 1052;	/* --> ldaddl.  */
      break;
    case 1144:	/* stclrb */
    case 1054:	/* ldclrb */
      value = 1054;	/* --> ldclrb.  */
      break;
    case 1145:	/* stclrh */
    case 1055:	/* ldclrh */
      value = 1055;	/* --> ldclrh.  */
      break;
    case 1146:	/* stclr */
    case 1056:	/* ldclr */
      value = 1056;	/* --> ldclr.  */
      break;
    case 1147:	/* stclrlb */
    case 1058:	/* ldclrlb */
      value = 1058;	/* --> ldclrlb.  */
      break;
    case 1148:	/* stclrlh */
    case 1061:	/* ldclrlh */
      value = 1061;	/* --> ldclrlh.  */
      break;
    case 1149:	/* stclrl */
    case 1064:	/* ldclrl */
      value = 1064;	/* --> ldclrl.  */
      break;
    case 1150:	/* steorb */
    case 1066:	/* ldeorb */
      value = 1066;	/* --> ldeorb.  */
      break;
    case 1151:	/* steorh */
    case 1067:	/* ldeorh */
      value = 1067;	/* --> ldeorh.  */
      break;
    case 1152:	/* steor */
    case 1068:	/* ldeor */
      value = 1068;	/* --> ldeor.  */
      break;
    case 1153:	/* steorlb */
    case 1070:	/* ldeorlb */
      value = 1070;	/* --> ldeorlb.  */
      break;
    case 1154:	/* steorlh */
    case 1073:	/* ldeorlh */
      value = 1073;	/* --> ldeorlh.  */
      break;
    case 1155:	/* steorl */
    case 1076:	/* ldeorl */
      value = 1076;	/* --> ldeorl.  */
      break;
    case 1156:	/* stsetb */
    case 1078:	/* ldsetb */
      value = 1078;	/* --> ldsetb.  */
      break;
    case 1157:	/* stseth */
    case 1079:	/* ldseth */
      value = 1079;	/* --> ldseth.  */
      break;
    case 1158:	/* stset */
    case 1080:	/* ldset */
      value = 1080;	/* --> ldset.  */
      break;
    case 1159:	/* stsetlb */
    case 1082:	/* ldsetlb */
      value = 1082;	/* --> ldsetlb.  */
      break;
    case 1160:	/* stsetlh */
    case 1085:	/* ldsetlh */
      value = 1085;	/* --> ldsetlh.  */
      break;
    case 1161:	/* stsetl */
    case 1088:	/* ldsetl */
      value = 1088;	/* --> ldsetl.  */
      break;
    case 1162:	/* stsmaxb */
    case 1090:	/* ldsmaxb */
      value = 1090;	/* --> ldsmaxb.  */
      break;
    case 1163:	/* stsmaxh */
    case 1091:	/* ldsmaxh */
      value = 1091;	/* --> ldsmaxh.  */
      break;
    case 1164:	/* stsmax */
    case 1092:	/* ldsmax */
      value = 1092;	/* --> ldsmax.  */
      break;
    case 1165:	/* stsmaxlb */
    case 1094:	/* ldsmaxlb */
      value = 1094;	/* --> ldsmaxlb.  */
      break;
    case 1166:	/* stsmaxlh */
    case 1097:	/* ldsmaxlh */
      value = 1097;	/* --> ldsmaxlh.  */
      break;
    case 1167:	/* stsmaxl */
    case 1100:	/* ldsmaxl */
      value = 1100;	/* --> ldsmaxl.  */
      break;
    case 1168:	/* stsminb */
    case 1102:	/* ldsminb */
      value = 1102;	/* --> ldsminb.  */
      break;
    case 1169:	/* stsminh */
    case 1103:	/* ldsminh */
      value = 1103;	/* --> ldsminh.  */
      break;
    case 1170:	/* stsmin */
    case 1104:	/* ldsmin */
      value = 1104;	/* --> ldsmin.  */
      break;
    case 1171:	/* stsminlb */
    case 1106:	/* ldsminlb */
      value = 1106;	/* --> ldsminlb.  */
      break;
    case 1172:	/* stsminlh */
    case 1109:	/* ldsminlh */
      value = 1109;	/* --> ldsminlh.  */
      break;
    case 1173:	/* stsminl */
    case 1112:	/* ldsminl */
      value = 1112;	/* --> ldsminl.  */
      break;
    case 1174:	/* stumaxb */
    case 1114:	/* ldumaxb */
      value = 1114;	/* --> ldumaxb.  */
      break;
    case 1175:	/* stumaxh */
    case 1115:	/* ldumaxh */
      value = 1115;	/* --> ldumaxh.  */
      break;
    case 1176:	/* stumax */
    case 1116:	/* ldumax */
      value = 1116;	/* --> ldumax.  */
      break;
    case 1177:	/* stumaxlb */
    case 1118:	/* ldumaxlb */
      value = 1118;	/* --> ldumaxlb.  */
      break;
    case 1178:	/* stumaxlh */
    case 1121:	/* ldumaxlh */
      value = 1121;	/* --> ldumaxlh.  */
      break;
    case 1179:	/* stumaxl */
    case 1124:	/* ldumaxl */
      value = 1124;	/* --> ldumaxl.  */
      break;
    case 1180:	/* stuminb */
    case 1126:	/* lduminb */
      value = 1126;	/* --> lduminb.  */
      break;
    case 1181:	/* stuminh */
    case 1127:	/* lduminh */
      value = 1127;	/* --> lduminh.  */
      break;
    case 1182:	/* stumin */
    case 1128:	/* ldumin */
      value = 1128;	/* --> ldumin.  */
      break;
    case 1183:	/* stuminlb */
    case 1130:	/* lduminlb */
      value = 1130;	/* --> lduminlb.  */
      break;
    case 1184:	/* stuminlh */
    case 1133:	/* lduminlh */
      value = 1133;	/* --> lduminlh.  */
      break;
    case 1185:	/* stuminl */
    case 1136:	/* lduminl */
      value = 1136;	/* --> lduminl.  */
      break;
    case 1207:	/* mov */
    case 1206:	/* movn */
      value = 1206;	/* --> movn.  */
      break;
    case 1209:	/* mov */
    case 1208:	/* movz */
      value = 1208;	/* --> movz.  */
      break;
    case 3205:	/* clrbhb */
    case 1288:	/* autibsp */
    case 1287:	/* autibz */
    case 1286:	/* autiasp */
    case 1285:	/* autiaz */
    case 1284:	/* pacibsp */
    case 1283:	/* pacibz */
    case 1282:	/* paciasp */
    case 1281:	/* paciaz */
    case 1261:	/* gcsb */
    case 1241:	/* clearbhb */
    case 1240:	/* tsb */
    case 1239:	/* psb */
    case 1238:	/* esb */
    case 1237:	/* autib1716 */
    case 1236:	/* autia1716 */
    case 1235:	/* pacib1716 */
    case 1234:	/* pacia1716 */
    case 1233:	/* xpaclri */
    case 1231:	/* sevl */
    case 1230:	/* sev */
    case 1229:	/* wfi */
    case 1228:	/* wfe */
    case 1227:	/* yield */
    case 1226:	/* bti */
    case 1225:	/* csdb */
    case 1224:	/* nop */
    case 1223:	/* hint */
      value = 1223;	/* --> hint.  */
      break;
    case 1247:	/* pssbb */
    case 1246:	/* ssbb */
    case 1245:	/* dfb */
    case 1243:	/* dsb */
      value = 1243;	/* --> dsb.  */
      break;
    case 1244:	/* dsb */
      value = 1244;	/* --> dsb.  */
      break;
    case 3206:	/* trcit */
    case 1274:	/* cosp */
    case 1273:	/* cpp */
    case 1272:	/* dvp */
    case 1271:	/* cfp */
    case 1267:	/* tlbi */
    case 1266:	/* ic */
    case 1265:	/* dc */
    case 1264:	/* at */
    case 1262:	/* sys */
      value = 1262;	/* --> sys.  */
      break;
    case 1268:	/* tlbip */
    case 1263:	/* sysp */
      value = 1263;	/* --> sysp.  */
      break;
    case 1269:	/* wfet */
      value = 1269;	/* --> wfet.  */
      break;
    case 1270:	/* wfit */
      value = 1270;	/* --> wfit.  */
      break;
    case 2090:	/* bic */
    case 1337:	/* and */
      value = 1337;	/* --> and.  */
      break;
    case 1320:	/* mov */
    case 1339:	/* and */
      value = 1339;	/* --> and.  */
      break;
    case 1324:	/* movs */
    case 1340:	/* ands */
      value = 1340;	/* --> ands.  */
      break;
    case 2091:	/* cmple */
    case 1375:	/* cmpge */
      value = 1375;	/* --> cmpge.  */
      break;
    case 2094:	/* cmplt */
    case 1378:	/* cmpgt */
      value = 1378;	/* --> cmpgt.  */
      break;
    case 2092:	/* cmplo */
    case 1380:	/* cmphi */
      value = 1380;	/* --> cmphi.  */
      break;
    case 2093:	/* cmpls */
    case 1383:	/* cmphs */
      value = 1383;	/* --> cmphs.  */
      break;
    case 1317:	/* mov */
    case 1405:	/* cpy */
      value = 1405;	/* --> cpy.  */
      break;
    case 1319:	/* mov */
    case 1406:	/* cpy */
      value = 1406;	/* --> cpy.  */
      break;
    case 2101:	/* fmov */
    case 1322:	/* mov */
    case 1407:	/* cpy */
      value = 1407;	/* --> cpy.  */
      break;
    case 1311:	/* mov */
    case 1419:	/* dup */
      value = 1419;	/* --> dup.  */
      break;
    case 1314:	/* mov */
    case 1310:	/* mov */
    case 1420:	/* dup */
      value = 1420;	/* --> dup.  */
      break;
    case 2100:	/* fmov */
    case 1316:	/* mov */
    case 1421:	/* dup */
      value = 1421;	/* --> dup.  */
      break;
    case 1315:	/* mov */
    case 1422:	/* dupm */
      value = 1422;	/* --> dupm.  */
      break;
    case 2095:	/* eon */
    case 1424:	/* eor */
      value = 1424;	/* --> eor.  */
      break;
    case 1325:	/* not */
    case 1426:	/* eor */
      value = 1426;	/* --> eor.  */
      break;
    case 1326:	/* nots */
    case 1427:	/* eors */
      value = 1427;	/* --> eors.  */
      break;
    case 2096:	/* facle */
    case 1432:	/* facge */
      value = 1432;	/* --> facge.  */
      break;
    case 2097:	/* faclt */
    case 1433:	/* facgt */
      value = 1433;	/* --> facgt.  */
      break;
    case 2098:	/* fcmle */
    case 1446:	/* fcmge */
      value = 1446;	/* --> fcmge.  */
      break;
    case 2099:	/* fcmlt */
    case 1448:	/* fcmgt */
      value = 1448;	/* --> fcmgt.  */
      break;
    case 1308:	/* fmov */
    case 1454:	/* fcpy */
      value = 1454;	/* --> fcpy.  */
      break;
    case 1307:	/* fmov */
    case 1477:	/* fdup */
      value = 1477;	/* --> fdup.  */
      break;
    case 1309:	/* mov */
    case 1809:	/* orr */
      value = 1809;	/* --> orr.  */
      break;
    case 2102:	/* orn */
    case 1810:	/* orr */
      value = 1810;	/* --> orr.  */
      break;
    case 1313:	/* mov */
    case 1312:	/* mov */
    case 1812:	/* orr */
      value = 1812;	/* --> orr.  */
      break;
    case 1323:	/* movs */
    case 1813:	/* orrs */
      value = 1813;	/* --> orrs.  */
      break;
    case 1318:	/* mov */
    case 1876:	/* sel */
      value = 1876;	/* --> sel.  */
      break;
    case 1321:	/* mov */
    case 1877:	/* sel */
      value = 1877;	/* --> sel.  */
      break;
    default: return NULL;
    }

  return aarch64_opcode_table + value;
}

bool
aarch64_insert_operand (const aarch64_operand *self,
			   const aarch64_opnd_info *info,
			   aarch64_insn *code, const aarch64_inst *inst,
			   aarch64_operand_error *errors)
{
  /* Use the index as the key.  */
  int key = self - aarch64_operands;
  switch (key)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 20:
    case 21:
    case 22:
    case 23:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 117:
    case 118:
    case 176:
    case 177:
    case 178:
    case 179:
    case 180:
    case 181:
    case 182:
    case 183:
    case 184:
    case 185:
    case 186:
    case 187:
    case 188:
    case 189:
    case 204:
    case 205:
    case 206:
    case 207:
    case 216:
    case 217:
    case 218:
    case 219:
    case 220:
    case 228:
    case 232:
    case 236:
    case 243:
    case 244:
    case 251:
    case 252:
    case 253:
    case 254:
      return aarch64_ins_regno (self, info, code, inst, errors);
    case 6:
    case 114:
    case 115:
    case 286:
    case 288:
      return aarch64_ins_none (self, info, code, inst, errors);
    case 17:
      return aarch64_ins_reg_extended (self, info, code, inst, errors);
    case 18:
      return aarch64_ins_reg_shifted (self, info, code, inst, errors);
    case 19:
      return aarch64_ins_reg_lsl_shifted (self, info, code, inst, errors);
    case 24:
      return aarch64_ins_ft (self, info, code, inst, errors);
    case 35:
    case 36:
    case 37:
    case 38:
    case 290:
      return aarch64_ins_reglane (self, info, code, inst, errors);
    case 39:
      return aarch64_ins_reglist (self, info, code, inst, errors);
    case 40:
      return aarch64_ins_ldst_reglist (self, info, code, inst, errors);
    case 41:
      return aarch64_ins_ldst_reglist_r (self, info, code, inst, errors);
    case 42:
      return aarch64_ins_ldst_elemlist (self, info, code, inst, errors);
    case 43:
    case 44:
    case 45:
    case 46:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 84:
    case 85:
    case 86:
    case 87:
    case 113:
    case 173:
    case 175:
    case 196:
    case 197:
    case 198:
    case 199:
    case 200:
    case 201:
    case 202:
    case 203:
    case 257:
    case 284:
    case 285:
    case 287:
    case 289:
    case 294:
    case 295:
      return aarch64_ins_imm (self, info, code, inst, errors);
    case 47:
    case 48:
      return aarch64_ins_advsimd_imm_shift (self, info, code, inst, errors);
    case 49:
    case 50:
    case 51:
      return aarch64_ins_advsimd_imm_modified (self, info, code, inst, errors);
    case 55:
    case 163:
      return aarch64_ins_fpimm (self, info, code, inst, errors);
    case 73:
    case 171:
      return aarch64_ins_limm (self, info, code, inst, errors);
    case 74:
      return aarch64_ins_aimm (self, info, code, inst, errors);
    case 75:
      return aarch64_ins_imm_half (self, info, code, inst, errors);
    case 76:
      return aarch64_ins_fbits (self, info, code, inst, errors);
    case 78:
    case 79:
    case 168:
      return aarch64_ins_imm_rotate2 (self, info, code, inst, errors);
    case 80:
    case 167:
    case 169:
      return aarch64_ins_imm_rotate1 (self, info, code, inst, errors);
    case 81:
    case 82:
      return aarch64_ins_cond (self, info, code, inst, errors);
    case 88:
    case 97:
      return aarch64_ins_addr_simple (self, info, code, inst, errors);
    case 89:
      return aarch64_ins_addr_regoff (self, info, code, inst, errors);
    case 90:
    case 91:
    case 92:
    case 94:
    case 96:
      return aarch64_ins_addr_simm (self, info, code, inst, errors);
    case 93:
      return aarch64_ins_addr_simm10 (self, info, code, inst, errors);
    case 95:
      return aarch64_ins_addr_uimm12 (self, info, code, inst, errors);
    case 98:
      return aarch64_ins_addr_offset (self, info, code, inst, errors);
    case 99:
      return aarch64_ins_simd_addr_post (self, info, code, inst, errors);
    case 100:
    case 101:
      return aarch64_ins_sysreg (self, info, code, inst, errors);
    case 102:
      return aarch64_ins_pstatefield (self, info, code, inst, errors);
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
      return aarch64_ins_sysins_op (self, info, code, inst, errors);
    case 109:
    case 111:
      return aarch64_ins_barrier (self, info, code, inst, errors);
    case 110:
      return aarch64_ins_barrier_dsb_nxs (self, info, code, inst, errors);
    case 112:
      return aarch64_ins_prfop (self, info, code, inst, errors);
    case 116:
      return aarch64_ins_hint (self, info, code, inst, errors);
    case 119:
    case 120:
      return aarch64_ins_sve_addr_ri_s4 (self, info, code, inst, errors);
    case 121:
    case 122:
    case 123:
    case 124:
      return aarch64_ins_sve_addr_ri_s4xvl (self, info, code, inst, errors);
    case 125:
      return aarch64_ins_sve_addr_ri_s6xvl (self, info, code, inst, errors);
    case 126:
      return aarch64_ins_sve_addr_ri_s9xvl (self, info, code, inst, errors);
    case 127:
    case 128:
    case 129:
    case 130:
      return aarch64_ins_sve_addr_ri_u6 (self, info, code, inst, errors);
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 137:
    case 138:
    case 139:
    case 140:
    case 141:
    case 142:
    case 143:
    case 144:
    case 145:
      return aarch64_ins_sve_addr_rr_lsl (self, info, code, inst, errors);
    case 146:
    case 147:
    case 148:
    case 149:
    case 150:
    case 151:
    case 152:
    case 153:
      return aarch64_ins_sve_addr_rz_xtw (self, info, code, inst, errors);
    case 154:
    case 155:
    case 156:
    case 157:
      return aarch64_ins_sve_addr_zi_u5 (self, info, code, inst, errors);
    case 158:
      return aarch64_ins_sve_addr_zz_lsl (self, info, code, inst, errors);
    case 159:
      return aarch64_ins_sve_addr_zz_sxtw (self, info, code, inst, errors);
    case 160:
      return aarch64_ins_sve_addr_zz_uxtw (self, info, code, inst, errors);
    case 161:
      return aarch64_ins_sve_aimm (self, info, code, inst, errors);
    case 162:
      return aarch64_ins_sve_asimm (self, info, code, inst, errors);
    case 164:
      return aarch64_ins_sve_float_half_one (self, info, code, inst, errors);
    case 165:
      return aarch64_ins_sve_float_half_two (self, info, code, inst, errors);
    case 166:
      return aarch64_ins_sve_float_zero_one (self, info, code, inst, errors);
    case 170:
      return aarch64_ins_inv_limm (self, info, code, inst, errors);
    case 172:
      return aarch64_ins_sve_limm_mov (self, info, code, inst, errors);
    case 174:
      return aarch64_ins_sve_scale (self, info, code, inst, errors);
    case 190:
    case 191:
    case 192:
      return aarch64_ins_sve_shlimm (self, info, code, inst, errors);
    case 193:
    case 194:
    case 195:
    case 270:
      return aarch64_ins_sve_shrimm (self, info, code, inst, errors);
    case 208:
    case 209:
    case 210:
    case 211:
      return aarch64_ins_sme_za_vrs1 (self, info, code, inst, errors);
    case 212:
    case 213:
    case 214:
    case 215:
      return aarch64_ins_sme_za_vrs2 (self, info, code, inst, errors);
    case 221:
    case 222:
    case 223:
    case 224:
    case 225:
    case 226:
    case 227:
      return aarch64_ins_sve_quad_index (self, info, code, inst, errors);
    case 229:
      return aarch64_ins_sve_index_imm (self, info, code, inst, errors);
    case 230:
      return aarch64_ins_sve_index (self, info, code, inst, errors);
    case 231:
    case 233:
    case 250:
    case 296:
    case 297:
    case 298:
      return aarch64_ins_sve_reglist (self, info, code, inst, errors);
    case 234:
    case 235:
    case 237:
    case 238:
    case 239:
    case 240:
    case 249:
      return aarch64_ins_sve_aligned_reglist (self, info, code, inst, errors);
    case 241:
    case 242:
      return aarch64_ins_sve_strided_reglist (self, info, code, inst, errors);
    case 245:
    case 247:
    case 258:
      return aarch64_ins_sme_za_hv_tiles (self, info, code, inst, errors);
    case 246:
    case 248:
      return aarch64_ins_sme_za_hv_tiles_range (self, info, code, inst, errors);
    case 255:
    case 256:
    case 271:
    case 272:
    case 273:
    case 274:
    case 275:
    case 276:
    case 277:
    case 278:
    case 279:
    case 280:
    case 281:
    case 282:
    case 283:
      return aarch64_ins_simple_index (self, info, code, inst, errors);
    case 259:
    case 260:
    case 261:
    case 262:
    case 263:
    case 264:
    case 265:
      return aarch64_ins_sme_za_array (self, info, code, inst, errors);
    case 266:
      return aarch64_ins_sme_addr_ri_u4xvl (self, info, code, inst, errors);
    case 267:
      return aarch64_ins_sme_sm_za (self, info, code, inst, errors);
    case 268:
      return aarch64_ins_sme_pred_reg_with_index (self, info, code, inst, errors);
    case 269:
      return aarch64_ins_plain_shrimm (self, info, code, inst, errors);
    case 291:
    case 292:
    case 293:
      return aarch64_ins_x0_to_x30 (self, info, code, inst, errors);
    case 299:
    case 300:
    case 301:
    case 302:
      return aarch64_ins_rcpc3_addr_opt_offset (self, info, code, inst, errors);
    case 303:
      return aarch64_ins_rcpc3_addr_offset (self, info, code, inst, errors);
    default: assert (0); abort ();
    }
}
