/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/OneDrive - Universitatea Politehnica Bucuresti/ANUL III/SEMSTRUL I/AC/TEME/TEMA 2/tema2_register_tester/build/bin/tests/complex_register_access/test.v";
static int ng1[] = {0, 0};
static int ng2[] = {24, 0};
static int ng3[] = {1, 0};
static int ng4[] = {25, 0};
static int ng5[] = {20, 0};
static const char *ng6 = "[TIMEOUT]Access %0d timeout after 20cc";
static unsigned int ng7[] = {57005U, 0U};
static int ng8[] = {2, 0};
static const char *ng9 = "Access %0d was with ERROR, but RTL did not send error. ";
static const char *ng10 = "Access was for address: 0x%x\n";
static const char *ng11 = "Register MISMATCH for address 0x%x: expected 0x%x, but found 0x%x\n";
static const char *ng12 = "[Access PASSED] Access %0d was checked correctly \n";
static const char *ng13 = "Access %0d Reading address: 0x%x\n";
static const char *ng14 = "Access %0d Writting address: 0x%x with value 0x%x\n";
static const char *ng15 = "test.data";
static const char *ng16 = "r";
static const char *ng17 = "error opening data file\n";
static const char *ng18 = "nof_accesses = %d\n";
static const char *ng19 = "error reading nof_accesses\n";
static const char *ng20 = "%x\n";
static const char *ng21 = "error reading input_data_%d\n";
static int ng22[] = {5, 0};
static int ng23[] = {10, 0};
static const char *ng24 = "test ok\n";
static const char *ng25 = "result.tester";
static const char *ng26 = "%6.2f: %0d correct out of %0d (%6.2f%% completed)\n";
static const char *ng27 = "[ERROR] Mismatch for SELECT signal: expected %0x, but found %0x\n";
static const char *ng28 = "[ERROR] Mismatch for CAESAR_KEY signal: expected %0x, but found %0x\n";
static const char *ng29 = "[ERROR] Mismatch for SCYTALE_KEY signal: expected %0x, but found %0x\n";
static const char *ng30 = "[ERROR] Mismatch for ZIGZAG_KEY signal: expected %0x, but found %0x\n";



static int sp_drive_instruction(char *t1, char *t2)
{
    char t7[8];
    char t8[8];
    char t33[8];
    char t43[8];
    char t51[8];
    char t57[8];
    char t69[8];
    char t79[8];
    char t87[8];
    char t99[8];
    char t130[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    unsigned int t129;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(157, ng0);

LAB5:    xsi_set_current_line(158, ng0);
    xsi_set_current_line(158, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8360);
    t9 = (t1 + 8360);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8360);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t11, t14, 1, 1, t15, 32, 1);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t8 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB6;

LAB7:
LAB8:    t4 = (t1 + 8360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8360);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8360);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = (t1 + 9160);
    t19 = (t16 + 56U);
    t27 = *((char **)t19);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t7, 32, t27, 32);
    t28 = (t8 + 4);
    t17 = *((unsigned int *)t28);
    t20 = (~(t17));
    t23 = *((unsigned int *)t8);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB9;

LAB10:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t8), t26);
    goto LAB7;

LAB9:    xsi_set_current_line(158, ng0);

LAB11:    xsi_set_current_line(159, ng0);
    t30 = (t1 + 9320);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t34 = (t1 + 9320);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t1 + 9320);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t40 = (t1 + 8360);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t44 = (t1 + 8360);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = (t1 + 8360);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t43, 32, t42, t46, t49, 1, 1, t50, 32, 1);
    xsi_vlog_generic_get_array_select_value(t33, 32, t32, t36, t39, 2, 1, t43, 32, 1);
    t52 = (t1 + 9320);
    t53 = (t52 + 72U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t51, 32, t33, t54, 2, t55, 32, 1);
    t56 = ((char*)((ng3)));
    memset(t57, 0, 8);
    if (*((unsigned int *)t51) != *((unsigned int *)t56))
        goto LAB14;

LAB12:    t58 = (t51 + 4);
    t59 = (t56 + 4);
    if (*((unsigned int *)t58) != *((unsigned int *)t59))
        goto LAB14;

LAB13:    *((unsigned int *)t57) = 1;

LAB14:    t60 = (t57 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t57);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(161, ng0);
    t4 = (t1 + 9320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 9320);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 9320);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t1 + 8360);
    t16 = (t15 + 56U);
    t19 = *((char **)t16);
    t27 = (t1 + 8360);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t1 + 8360);
    t32 = (t31 + 64U);
    t34 = *((char **)t32);
    t35 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t19, t30, t34, 1, 1, t35, 32, 1);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 2, 1, t8, 32, 1);
    t36 = (t1 + 9320);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t33, 32, t7, t38, 2, t39, 32, 1);
    t40 = ((char*)((ng3)));
    memset(t43, 0, 8);
    if (*((unsigned int *)t33) != *((unsigned int *)t40))
        goto LAB26;

LAB24:    t41 = (t33 + 4);
    t42 = (t40 + 4);
    if (*((unsigned int *)t41) != *((unsigned int *)t42))
        goto LAB26;

LAB25:    *((unsigned int *)t43) = 1;

LAB26:    t44 = (t43 + 4);
    t17 = *((unsigned int *)t44);
    t20 = (~(t17));
    t23 = *((unsigned int *)t43);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB27;

LAB28:
LAB29:
LAB17:    xsi_set_current_line(158, ng0);
    t4 = (t1 + 8360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8360);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8360);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t7, 32, t16, 32);
    t19 = (t1 + 8360);
    t27 = (t1 + 8360);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t1 + 8360);
    t32 = (t31 + 64U);
    t34 = *((char **)t32);
    t35 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t33, t43, t30, t34, 1, 1, t35, 32, 1);
    t36 = (t33 + 4);
    t17 = *((unsigned int *)t36);
    t18 = (!(t17));
    t37 = (t43 + 4);
    t20 = *((unsigned int *)t37);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB36;

LAB37:    goto LAB8;

LAB15:    xsi_set_current_line(160, ng0);
    t66 = (t1 + 9320);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t70 = (t1 + 9320);
    t71 = (t70 + 72U);
    t72 = *((char **)t71);
    t73 = (t1 + 9320);
    t74 = (t73 + 64U);
    t75 = *((char **)t74);
    t76 = (t1 + 8360);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t80 = (t1 + 8360);
    t81 = (t80 + 72U);
    t82 = *((char **)t81);
    t83 = (t1 + 8360);
    t84 = (t83 + 64U);
    t85 = *((char **)t84);
    t86 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t79, 32, t78, t82, t85, 1, 1, t86, 32, 1);
    xsi_vlog_generic_get_array_select_value(t69, 32, t68, t72, t75, 2, 1, t79, 32, 1);
    memset(t87, 0, 8);
    t88 = (t87 + 4);
    t89 = (t69 + 4);
    t90 = *((unsigned int *)t69);
    t91 = (t90 >> 0);
    *((unsigned int *)t87) = t91;
    t92 = *((unsigned int *)t89);
    t93 = (t92 >> 0);
    *((unsigned int *)t88) = t93;
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t94 & 255U);
    t95 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t95 & 255U);
    t96 = (t1 + 8360);
    t97 = (t96 + 56U);
    t98 = *((char **)t97);
    t100 = (t1 + 8360);
    t101 = (t100 + 72U);
    t102 = *((char **)t101);
    t103 = (t1 + 8360);
    t104 = (t103 + 64U);
    t105 = *((char **)t104);
    t106 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t99, 32, t98, t102, t105, 1, 1, t106, 32, 1);
    t107 = (t2 + 56U);
    t108 = *((char **)t107);
    t109 = (t2 + 56U);
    t110 = *((char **)t109);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t110, &&LAB18);
    t111 = (t2 + 56U);
    t112 = *((char **)t111);
    t113 = (t1 + 2576);
    t114 = xsi_create_subprogram_invocation(t112, 0, t1, t113, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t113, t114);
    t115 = (t1 + 10920);
    xsi_vlogvar_assign_value(t115, t87, 0, 0, 8);
    t116 = (t1 + 11080);
    xsi_vlogvar_assign_value(t116, t99, 0, 0, 32);

LAB20:    t117 = (t2 + 64U);
    t118 = *((char **)t117);
    t119 = (t118 + 80U);
    t120 = *((char **)t119);
    t121 = (t120 + 272U);
    t122 = *((char **)t121);
    t123 = (t122 + 0U);
    t124 = *((char **)t123);
    t18 = ((int  (*)(char *, char *))t124)(t1, t118);
    if (t18 == -1)
        goto LAB21;

LAB22:    if (t18 != 0)
        goto LAB23;

LAB18:    t118 = (t1 + 2576);
    xsi_vlog_subprogram_popinvocation(t118);

LAB19:    t125 = (t2 + 64U);
    t126 = *((char **)t125);
    t125 = (t1 + 2576);
    t127 = (t2 + 56U);
    t128 = *((char **)t127);
    xsi_delete_subprogram_invocation(t125, t126, t1, t128, t2);
    goto LAB17;

LAB21:    t0 = -1;
    goto LAB1;

LAB23:    t117 = (t2 + 48U);
    *((char **)t117) = &&LAB20;
    goto LAB1;

LAB27:    xsi_set_current_line(162, ng0);
    t45 = (t1 + 9320);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = (t1 + 9320);
    t49 = (t48 + 72U);
    t50 = *((char **)t49);
    t52 = (t1 + 9320);
    t53 = (t52 + 64U);
    t54 = *((char **)t53);
    t55 = (t1 + 8360);
    t56 = (t55 + 56U);
    t58 = *((char **)t56);
    t59 = (t1 + 8360);
    t60 = (t59 + 72U);
    t66 = *((char **)t60);
    t67 = (t1 + 8360);
    t68 = (t67 + 64U);
    t70 = *((char **)t68);
    t71 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t57, 32, t58, t66, t70, 1, 1, t71, 32, 1);
    xsi_vlog_generic_get_array_select_value(t51, 32, t47, t50, t54, 2, 1, t57, 32, 1);
    memset(t69, 0, 8);
    t72 = (t69 + 4);
    t73 = (t51 + 4);
    t61 = *((unsigned int *)t51);
    t62 = (t61 >> 0);
    *((unsigned int *)t69) = t62;
    t63 = *((unsigned int *)t73);
    t64 = (t63 >> 0);
    *((unsigned int *)t72) = t64;
    t65 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t65 & 255U);
    t90 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t90 & 255U);
    t74 = (t1 + 9320);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t77 = (t1 + 9320);
    t78 = (t77 + 72U);
    t80 = *((char **)t78);
    t81 = (t1 + 9320);
    t82 = (t81 + 64U);
    t83 = *((char **)t82);
    t84 = (t1 + 8360);
    t85 = (t84 + 56U);
    t86 = *((char **)t85);
    t88 = (t1 + 8360);
    t89 = (t88 + 72U);
    t96 = *((char **)t89);
    t97 = (t1 + 8360);
    t98 = (t97 + 64U);
    t100 = *((char **)t98);
    t101 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t87, 32, t86, t96, t100, 1, 1, t101, 32, 1);
    xsi_vlog_generic_get_array_select_value(t79, 32, t76, t80, t83, 2, 1, t87, 32, 1);
    memset(t99, 0, 8);
    t102 = (t99 + 4);
    t103 = (t79 + 4);
    t91 = *((unsigned int *)t79);
    t92 = (t91 >> 8);
    *((unsigned int *)t99) = t92;
    t93 = *((unsigned int *)t103);
    t94 = (t93 >> 8);
    *((unsigned int *)t102) = t94;
    t95 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t95 & 65535U);
    t129 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t129 & 65535U);
    t104 = (t1 + 8360);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    t107 = (t1 + 8360);
    t108 = (t107 + 72U);
    t109 = *((char **)t108);
    t110 = (t1 + 8360);
    t111 = (t110 + 64U);
    t112 = *((char **)t111);
    t113 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t130, 32, t106, t109, t112, 1, 1, t113, 32, 1);
    t114 = (t2 + 56U);
    t115 = *((char **)t114);
    t116 = (t2 + 56U);
    t117 = *((char **)t116);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t117, &&LAB30);
    t118 = (t2 + 56U);
    t119 = *((char **)t118);
    t120 = (t1 + 3008);
    t121 = xsi_create_subprogram_invocation(t119, 0, t1, t120, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t120, t121);
    t122 = (t1 + 11240);
    xsi_vlogvar_assign_value(t122, t69, 0, 0, 8);
    t123 = (t1 + 11400);
    xsi_vlogvar_assign_value(t123, t99, 0, 0, 16);
    t124 = (t1 + 11560);
    xsi_vlogvar_assign_value(t124, t130, 0, 0, 32);

LAB32:    t125 = (t2 + 64U);
    t126 = *((char **)t125);
    t127 = (t126 + 80U);
    t128 = *((char **)t127);
    t131 = (t128 + 272U);
    t132 = *((char **)t131);
    t133 = (t132 + 0U);
    t134 = *((char **)t133);
    t18 = ((int  (*)(char *, char *))t134)(t1, t126);
    if (t18 == -1)
        goto LAB33;

LAB34:    if (t18 != 0)
        goto LAB35;

LAB30:    t126 = (t1 + 3008);
    xsi_vlog_subprogram_popinvocation(t126);

LAB31:    t135 = (t2 + 64U);
    t136 = *((char **)t135);
    t135 = (t1 + 3008);
    t137 = (t2 + 56U);
    t138 = *((char **)t137);
    xsi_delete_subprogram_invocation(t135, t136, t1, t138, t2);
    goto LAB29;

LAB33:    t0 = -1;
    goto LAB1;

LAB35:    t125 = (t2 + 48U);
    *((char **)t125) = &&LAB32;
    goto LAB1;

LAB36:    t23 = *((unsigned int *)t33);
    t24 = *((unsigned int *)t43);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t19, t8, 0, *((unsigned int *)t43), t26);
    goto LAB37;

}

static int sp_monitor_reg_if_ref(char *t1, char *t2)
{
    char t7[8];
    char t8[8];
    char t32[8];
    char t33[8];
    char t47[8];
    char t51[8];
    char t61[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t48;
    unsigned int t49;
    char *t50;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(168, ng0);

LAB5:    xsi_set_current_line(169, ng0);
    xsi_set_current_line(169, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8360);
    t9 = (t1 + 8360);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8360);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t11, t14, 1, 1, t15, 32, 1);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t8 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB6;

LAB7:
LAB8:    t4 = (t1 + 8360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8360);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8360);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = (t1 + 9160);
    t19 = (t16 + 56U);
    t27 = *((char **)t19);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t7, 32, t27, 32);
    t28 = (t8 + 4);
    t17 = *((unsigned int *)t28);
    t20 = (~(t17));
    t23 = *((unsigned int *)t8);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB9;

LAB10:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t8), t26);
    goto LAB7;

LAB9:    xsi_set_current_line(169, ng0);

LAB11:    xsi_set_current_line(170, ng0);
    t30 = ((char*)((ng5)));
    t31 = (t1 + 8520);
    t34 = (t1 + 8520);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t1 + 8520);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t32, t33, t36, t39, 1, 1, t40, 32, 1);
    t41 = (t32 + 4);
    t42 = *((unsigned int *)t41);
    t18 = (!(t42));
    t43 = (t33 + 4);
    t44 = *((unsigned int *)t43);
    t21 = (!(t44));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(172, ng0);

LAB14:    t4 = (t1 + 5880U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t4))
        goto LAB17;

LAB15:    t6 = (t5 + 4);
    t9 = (t4 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t9))
        goto LAB17;

LAB16:    *((unsigned int *)t7) = 1;

LAB17:    t10 = (t7 + 4);
    t17 = *((unsigned int *)t10);
    t20 = (~(t17));
    t23 = *((unsigned int *)t7);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(183, ng0);
    t4 = (t1 + 9800);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 9800);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8360);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 8360);
    t16 = (t15 + 72U);
    t19 = *((char **)t16);
    t27 = (t1 + 8360);
    t28 = (t27 + 64U);
    t30 = *((char **)t28);
    t31 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t14, t19, t30, 1, 1, t31, 32, 1);
    xsi_vlog_generic_get_index_select_value(t7, 32, t6, t11, 2, t8, 32, 1);
    t34 = ((char*)((ng3)));
    memset(t32, 0, 8);
    if (*((unsigned int *)t7) != *((unsigned int *)t34))
        goto LAB30;

LAB28:    t35 = (t7 + 4);
    t36 = (t34 + 4);
    if (*((unsigned int *)t35) != *((unsigned int *)t36))
        goto LAB30;

LAB29:    *((unsigned int *)t32) = 1;

LAB30:    t37 = (t32 + 4);
    t17 = *((unsigned int *)t37);
    t20 = (~(t17));
    t23 = *((unsigned int *)t32);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(192, ng0);
    t4 = (t1 + 6200U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t4))
        goto LAB48;

LAB46:    t6 = (t5 + 4);
    t9 = (t4 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t9))
        goto LAB48;

LAB47:    *((unsigned int *)t7) = 1;

LAB48:    t10 = (t7 + 4);
    t17 = *((unsigned int *)t10);
    t20 = (~(t17));
    t23 = *((unsigned int *)t7);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(195, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9480);
    t6 = (t1 + 9480);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 9480);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 8360);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t19 = (t1 + 8360);
    t27 = (t19 + 72U);
    t28 = *((char **)t27);
    t30 = (t1 + 8360);
    t31 = (t30 + 64U);
    t34 = *((char **)t31);
    t35 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t32, 32, t16, t28, t34, 1, 1, t35, 32, 1);
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t32, 32, 1);
    t36 = (t7 + 4);
    t17 = *((unsigned int *)t36);
    t18 = (!(t17));
    t37 = (t8 + 4);
    t20 = *((unsigned int *)t37);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB54;

LAB55:
LAB51:
LAB33:    xsi_set_current_line(197, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB56;
    goto LAB1;

LAB12:    t45 = *((unsigned int *)t32);
    t46 = *((unsigned int *)t33);
    t25 = (t45 - t46);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t31, t30, 0, *((unsigned int *)t33), t26);
    goto LAB13;

LAB18:    xsi_set_current_line(173, ng0);

LAB20:    xsi_set_current_line(174, ng0);
    t11 = (t1 + 8520);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 8520);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t19 = (t1 + 8520);
    t27 = (t19 + 64U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t13, t16, t28, 1, 1, t30, 32, 1);
    t31 = ((char*)((ng3)));
    memset(t32, 0, 8);
    xsi_vlog_signed_minus(t32, 32, t8, 32, t31, 32);
    t34 = (t1 + 8520);
    t35 = (t1 + 8520);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = (t1 + 8520);
    t39 = (t38 + 64U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t33, t47, t37, t40, 1, 1, t41, 32, 1);
    t43 = (t33 + 4);
    t42 = *((unsigned int *)t43);
    t18 = (!(t42));
    t48 = (t47 + 4);
    t44 = *((unsigned int *)t48);
    t21 = (!(t44));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(175, ng0);
    t4 = (t1 + 8520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8520);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8520);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t7, 32, t16, 32);
    t19 = (t8 + 4);
    t17 = *((unsigned int *)t19);
    t20 = (~(t17));
    t23 = *((unsigned int *)t8);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(180, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB27;
    goto LAB1;

LAB21:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t47);
    t25 = (t45 - t46);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t34, t32, 0, *((unsigned int *)t47), t26);
    goto LAB22;

LAB23:    xsi_set_current_line(176, ng0);

LAB26:    xsi_set_current_line(177, ng0);
    t27 = (t1 + 8360);
    t28 = (t27 + 56U);
    t30 = *((char **)t28);
    t31 = (t1 + 8360);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = (t1 + 8360);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t32, 32, t30, t35, t38, 1, 1, t39, 32, 1);
    t40 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t40, (char)119, t32, 32);
    xsi_set_current_line(178, ng0);
    xsi_vlog_finish(1);
    goto LAB25;

LAB27:    goto LAB14;

LAB31:    xsi_set_current_line(183, ng0);

LAB34:    xsi_set_current_line(184, ng0);
    t38 = (t1 + 6200U);
    t39 = *((char **)t38);
    t38 = ((char*)((ng1)));
    memset(t33, 0, 8);
    if (*((unsigned int *)t39) != *((unsigned int *)t38))
        goto LAB37;

LAB35:    t40 = (t39 + 4);
    t41 = (t38 + 4);
    if (*((unsigned int *)t40) != *((unsigned int *)t41))
        goto LAB37;

LAB36:    *((unsigned int *)t33) = 1;

LAB37:    t43 = (t33 + 4);
    t42 = *((unsigned int *)t43);
    t44 = (~(t42));
    t45 = *((unsigned int *)t33);
    t46 = (t45 & t44);
    t49 = (t46 != 0);
    if (t49 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(189, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t1 + 9480);
    t6 = (t1 + 9480);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 9480);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 8360);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t19 = (t1 + 8360);
    t27 = (t19 + 72U);
    t28 = *((char **)t27);
    t30 = (t1 + 8360);
    t31 = (t30 + 64U);
    t34 = *((char **)t31);
    t35 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t32, 32, t16, t28, t34, 1, 1, t35, 32, 1);
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t32, 32, 1);
    t36 = (t7 + 4);
    t17 = *((unsigned int *)t36);
    t18 = (!(t17));
    t37 = (t8 + 4);
    t20 = *((unsigned int *)t37);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB44;

LAB45:
LAB40:    goto LAB33;

LAB38:    xsi_set_current_line(184, ng0);

LAB41:    xsi_set_current_line(185, ng0);
    t48 = (t1 + 3960U);
    t50 = *((char **)t48);
    t48 = (t1 + 9480);
    t52 = (t1 + 9480);
    t53 = (t52 + 72U);
    t54 = *((char **)t53);
    t55 = (t1 + 9480);
    t56 = (t55 + 64U);
    t57 = *((char **)t56);
    t58 = (t1 + 8360);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t62 = (t1 + 8360);
    t63 = (t62 + 72U);
    t64 = *((char **)t63);
    t65 = (t1 + 8360);
    t66 = (t65 + 64U);
    t67 = *((char **)t66);
    t68 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t61, 32, t60, t64, t67, 1, 1, t68, 32, 1);
    xsi_vlog_generic_convert_array_indices(t47, t51, t54, t57, 2, 1, t61, 32, 1);
    t69 = (t47 + 4);
    t70 = *((unsigned int *)t69);
    t18 = (!(t70));
    t71 = (t51 + 4);
    t72 = *((unsigned int *)t71);
    t21 = (!(t72));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB42;

LAB43:    goto LAB40;

LAB42:    t73 = *((unsigned int *)t47);
    t74 = *((unsigned int *)t51);
    t25 = (t73 - t74);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t48, t50, 0, *((unsigned int *)t51), t26);
    goto LAB43;

LAB44:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t8), t26);
    goto LAB45;

LAB49:    xsi_set_current_line(193, ng0);
    t11 = ((char*)((ng7)));
    t12 = (t1 + 9480);
    t13 = (t1 + 9480);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t16 = (t1 + 9480);
    t19 = (t16 + 64U);
    t27 = *((char **)t19);
    t28 = (t1 + 8360);
    t30 = (t28 + 56U);
    t31 = *((char **)t30);
    t34 = (t1 + 8360);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t1 + 8360);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t33, 32, t31, t36, t39, 1, 1, t40, 32, 1);
    xsi_vlog_generic_convert_array_indices(t8, t32, t15, t27, 2, 1, t33, 32, 1);
    t41 = (t8 + 4);
    t42 = *((unsigned int *)t41);
    t18 = (!(t42));
    t43 = (t32 + 4);
    t44 = *((unsigned int *)t43);
    t21 = (!(t44));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB52;

LAB53:    goto LAB51;

LAB52:    t45 = *((unsigned int *)t8);
    t46 = *((unsigned int *)t32);
    t25 = (t45 - t46);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t12, t11, 0, *((unsigned int *)t32), t26);
    goto LAB53;

LAB54:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t8), t26);
    goto LAB55;

LAB56:    xsi_set_current_line(169, ng0);
    t4 = (t1 + 8360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8360);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8360);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t7, 32, t16, 32);
    t19 = (t1 + 8360);
    t27 = (t1 + 8360);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t1 + 8360);
    t34 = (t31 + 64U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t32, t33, t30, t35, 1, 1, t36, 32, 1);
    t37 = (t32 + 4);
    t17 = *((unsigned int *)t37);
    t18 = (!(t17));
    t38 = (t33 + 4);
    t20 = *((unsigned int *)t38);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB57;

LAB58:    goto LAB8;

LAB57:    t23 = *((unsigned int *)t32);
    t24 = *((unsigned int *)t33);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t19, t8, 0, *((unsigned int *)t33), t26);
    goto LAB58;

}

static int sp_monitor_reg_if_tst(char *t1, char *t2)
{
    char t7[8];
    char t8[8];
    char t32[8];
    char t33[8];
    char t47[8];
    char t49[8];
    char t62[8];
    char t63[8];
    char t73[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t48;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(203, ng0);

LAB5:    xsi_set_current_line(204, ng0);
    xsi_set_current_line(204, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8360);
    t9 = (t1 + 8360);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8360);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t11, t14, 1, 1, t15, 32, 1);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t8 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB6;

LAB7:
LAB8:    t4 = (t1 + 8360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8360);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8360);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = (t1 + 9160);
    t19 = (t16 + 56U);
    t27 = *((char **)t19);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t7, 32, t27, 32);
    t28 = (t8 + 4);
    t17 = *((unsigned int *)t28);
    t20 = (~(t17));
    t23 = *((unsigned int *)t8);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB9;

LAB10:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t8), t26);
    goto LAB7;

LAB9:    xsi_set_current_line(204, ng0);

LAB11:    xsi_set_current_line(205, ng0);
    t30 = ((char*)((ng5)));
    t31 = (t1 + 8520);
    t34 = (t1 + 8520);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t1 + 8520);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t32, t33, t36, t39, 1, 1, t40, 32, 1);
    t41 = (t32 + 4);
    t42 = *((unsigned int *)t41);
    t18 = (!(t42));
    t43 = (t33 + 4);
    t44 = *((unsigned int *)t43);
    t21 = (!(t44));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(207, ng0);

LAB14:    t4 = (t1 + 6040U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t4))
        goto LAB17;

LAB15:    t6 = (t5 + 4);
    t9 = (t4 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t9))
        goto LAB17;

LAB16:    *((unsigned int *)t7) = 1;

LAB17:    t10 = (t7 + 4);
    t17 = *((unsigned int *)t10);
    t20 = (~(t17));
    t23 = *((unsigned int *)t7);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(218, ng0);
    t4 = (t1 + 9800);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 9800);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8360);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 8360);
    t16 = (t15 + 72U);
    t19 = *((char **)t16);
    t27 = (t1 + 8360);
    t28 = (t27 + 64U);
    t30 = *((char **)t28);
    t31 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t14, t19, t30, 1, 1, t31, 32, 1);
    xsi_vlog_generic_get_index_select_value(t7, 32, t6, t11, 2, t8, 32, 1);
    t34 = ((char*)((ng3)));
    memset(t32, 0, 8);
    if (*((unsigned int *)t7) != *((unsigned int *)t34))
        goto LAB30;

LAB28:    t35 = (t7 + 4);
    t36 = (t34 + 4);
    if (*((unsigned int *)t35) != *((unsigned int *)t36))
        goto LAB30;

LAB29:    *((unsigned int *)t32) = 1;

LAB30:    t37 = (t32 + 4);
    t17 = *((unsigned int *)t37);
    t20 = (~(t17));
    t23 = *((unsigned int *)t32);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(224, ng0);
    t4 = (t1 + 6360U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t4))
        goto LAB55;

LAB53:    t6 = (t5 + 4);
    t9 = (t4 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t9))
        goto LAB55;

LAB54:    *((unsigned int *)t7) = 1;

LAB55:    t10 = (t7 + 4);
    t17 = *((unsigned int *)t10);
    t20 = (~(t17));
    t23 = *((unsigned int *)t7);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(227, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9640);
    t6 = (t1 + 9640);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 9640);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 8360);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t19 = (t1 + 8360);
    t27 = (t19 + 72U);
    t28 = *((char **)t27);
    t30 = (t1 + 8360);
    t31 = (t30 + 64U);
    t34 = *((char **)t31);
    t35 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t32, 32, t16, t28, t34, 1, 1, t35, 32, 1);
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t32, 32, 1);
    t36 = (t7 + 4);
    t17 = *((unsigned int *)t36);
    t18 = (!(t17));
    t37 = (t8 + 4);
    t20 = *((unsigned int *)t37);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB61;

LAB62:
LAB58:
LAB33:    xsi_set_current_line(229, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB63;
    goto LAB1;

LAB12:    t45 = *((unsigned int *)t32);
    t46 = *((unsigned int *)t33);
    t25 = (t45 - t46);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t31, t30, 0, *((unsigned int *)t33), t26);
    goto LAB13;

LAB18:    xsi_set_current_line(208, ng0);

LAB20:    xsi_set_current_line(209, ng0);
    t11 = (t1 + 8520);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 8520);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t19 = (t1 + 8520);
    t27 = (t19 + 64U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t13, t16, t28, 1, 1, t30, 32, 1);
    t31 = ((char*)((ng3)));
    memset(t32, 0, 8);
    xsi_vlog_signed_minus(t32, 32, t8, 32, t31, 32);
    t34 = (t1 + 8520);
    t35 = (t1 + 8520);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = (t1 + 8520);
    t39 = (t38 + 64U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t33, t47, t37, t40, 1, 1, t41, 32, 1);
    t43 = (t33 + 4);
    t42 = *((unsigned int *)t43);
    t18 = (!(t42));
    t48 = (t47 + 4);
    t44 = *((unsigned int *)t48);
    t21 = (!(t44));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(210, ng0);
    t4 = (t1 + 8520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8520);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8520);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t7, 32, t16, 32);
    t19 = (t8 + 4);
    t17 = *((unsigned int *)t19);
    t20 = (~(t17));
    t23 = *((unsigned int *)t8);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(215, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB27;
    goto LAB1;

LAB21:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t47);
    t25 = (t45 - t46);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t34, t32, 0, *((unsigned int *)t47), t26);
    goto LAB22;

LAB23:    xsi_set_current_line(211, ng0);

LAB26:    xsi_set_current_line(212, ng0);
    t27 = (t1 + 8360);
    t28 = (t27 + 56U);
    t30 = *((char **)t28);
    t31 = (t1 + 8360);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = (t1 + 8360);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t32, 32, t30, t35, t38, 1, 1, t39, 32, 1);
    t40 = (t1 + 1712);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t40, (char)119, t32, 32);
    xsi_set_current_line(213, ng0);
    xsi_vlog_finish(1);
    goto LAB25;

LAB27:    goto LAB14;

LAB31:    xsi_set_current_line(218, ng0);

LAB34:    xsi_set_current_line(219, ng0);
    t38 = (t1 + 6360U);
    t39 = *((char **)t38);
    t38 = ((char*)((ng1)));
    memset(t49, 0, 8);
    if (*((unsigned int *)t39) != *((unsigned int *)t38))
        goto LAB37;

LAB35:    t40 = (t39 + 4);
    t41 = (t38 + 4);
    if (*((unsigned int *)t40) != *((unsigned int *)t41))
        goto LAB37;

LAB36:    *((unsigned int *)t49) = 1;

LAB37:    memset(t47, 0, 8);
    t43 = (t49 + 4);
    t42 = *((unsigned int *)t43);
    t44 = (~(t42));
    t45 = *((unsigned int *)t49);
    t46 = (t45 & t44);
    t50 = (t46 & 1U);
    if (t50 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t43) != 0)
        goto LAB40;

LAB41:    t51 = (t47 + 4);
    t52 = *((unsigned int *)t47);
    t53 = *((unsigned int *)t51);
    t54 = (t52 || t53);
    if (t54 > 0)
        goto LAB42;

LAB43:    t57 = *((unsigned int *)t47);
    t58 = (~(t57));
    t59 = *((unsigned int *)t51);
    t60 = (t58 || t59);
    if (t60 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t51) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t47) > 0)
        goto LAB48;

LAB49:    memcpy(t33, t55, 8);

LAB50:    t61 = (t1 + 9640);
    t64 = (t1 + 9640);
    t65 = (t64 + 72U);
    t66 = *((char **)t65);
    t67 = (t1 + 9640);
    t68 = (t67 + 64U);
    t69 = *((char **)t68);
    t70 = (t1 + 8360);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t74 = (t1 + 8360);
    t75 = (t74 + 72U);
    t76 = *((char **)t75);
    t77 = (t1 + 8360);
    t78 = (t77 + 64U);
    t79 = *((char **)t78);
    t80 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t73, 32, t72, t76, t79, 1, 1, t80, 32, 1);
    xsi_vlog_generic_convert_array_indices(t62, t63, t66, t69, 2, 1, t73, 32, 1);
    t81 = (t62 + 4);
    t82 = *((unsigned int *)t81);
    t18 = (!(t82));
    t83 = (t63 + 4);
    t84 = *((unsigned int *)t83);
    t21 = (!(t84));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB51;

LAB52:    goto LAB33;

LAB38:    *((unsigned int *)t47) = 1;
    goto LAB41;

LAB40:    t48 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB41;

LAB42:    t55 = (t1 + 4120U);
    t56 = *((char **)t55);
    goto LAB43;

LAB44:    t55 = ((char*)((ng7)));
    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t33, 16, t56, 16, t55, 16);
    goto LAB50;

LAB48:    memcpy(t33, t56, 8);
    goto LAB50;

LAB51:    t85 = *((unsigned int *)t62);
    t86 = *((unsigned int *)t63);
    t25 = (t85 - t86);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t61, t33, 0, *((unsigned int *)t63), t26);
    goto LAB52;

LAB56:    xsi_set_current_line(225, ng0);
    t11 = ((char*)((ng7)));
    t12 = (t1 + 9640);
    t13 = (t1 + 9640);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t16 = (t1 + 9640);
    t19 = (t16 + 64U);
    t27 = *((char **)t19);
    t28 = (t1 + 8360);
    t30 = (t28 + 56U);
    t31 = *((char **)t30);
    t34 = (t1 + 8360);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t1 + 8360);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t33, 32, t31, t36, t39, 1, 1, t40, 32, 1);
    xsi_vlog_generic_convert_array_indices(t8, t32, t15, t27, 2, 1, t33, 32, 1);
    t41 = (t8 + 4);
    t42 = *((unsigned int *)t41);
    t18 = (!(t42));
    t43 = (t32 + 4);
    t44 = *((unsigned int *)t43);
    t21 = (!(t44));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB59;

LAB60:    goto LAB58;

LAB59:    t45 = *((unsigned int *)t8);
    t46 = *((unsigned int *)t32);
    t25 = (t45 - t46);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t12, t11, 0, *((unsigned int *)t32), t26);
    goto LAB60;

LAB61:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t8), t26);
    goto LAB62;

LAB63:    xsi_set_current_line(204, ng0);
    t4 = (t1 + 8360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8360);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8360);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t7, 32, t16, 32);
    t19 = (t1 + 8360);
    t27 = (t1 + 8360);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t1 + 8360);
    t34 = (t31 + 64U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t32, t33, t30, t35, 1, 1, t36, 32, 1);
    t37 = (t32 + 4);
    t17 = *((unsigned int *)t37);
    t18 = (!(t17));
    t38 = (t33 + 4);
    t20 = *((unsigned int *)t38);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB64;

LAB65:    goto LAB8;

LAB64:    t23 = *((unsigned int *)t32);
    t24 = *((unsigned int *)t33);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t19, t8, 0, *((unsigned int *)t33), t26);
    goto LAB65;

}

static int sp_end_of_test_checks(char *t1, char *t2)
{
    char t10[8];
    char t20[8];
    char t33[8];
    char t43[8];
    char t55[8];
    char t66[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(235, ng0);

LAB5:    xsi_set_current_line(236, ng0);
    xsi_set_current_line(236, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8040);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB6:    t4 = (t1 + 8040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9160);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t6, 32, t9, 32);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB7;

LAB8:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(237, ng0);

LAB9:    xsi_set_current_line(238, ng0);
    t17 = (t1 + 9480);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t21 = (t1 + 9480);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t1 + 9480);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = (t1 + 8040);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t20, 16, t19, t23, t26, 2, 1, t29, 32, 1);
    t30 = (t1 + 9640);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t34 = (t1 + 9640);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t1 + 9640);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t40 = (t1 + 8040);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    xsi_vlog_generic_get_array_select_value(t33, 16, t32, t36, t39, 2, 1, t42, 32, 1);
    memset(t43, 0, 8);
    if (*((unsigned int *)t20) != *((unsigned int *)t33))
        goto LAB11;

LAB10:    t44 = (t20 + 4);
    t45 = (t33 + 4);
    if (*((unsigned int *)t44) != *((unsigned int *)t45))
        goto LAB11;

LAB12:    t46 = (t43 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t43);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(251, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8840);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB15:    xsi_set_current_line(253, ng0);
    t4 = (t1 + 8840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t6 + 4);
    t9 = (t7 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t9);
    t47 = (t15 ^ t16);
    t48 = (t14 | t47);
    t49 = *((unsigned int *)t8);
    t50 = *((unsigned int *)t9);
    t51 = (t49 | t50);
    t69 = (~(t51));
    t70 = (t48 & t69);
    if (t70 != 0)
        goto LAB29;

LAB26:    if (t51 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t10) = 1;

LAB29:    t17 = (t10 + 4);
    t71 = *((unsigned int *)t17);
    t72 = (~(t71));
    t73 = *((unsigned int *)t10);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB30;

LAB31:
LAB32:    xsi_set_current_line(236, ng0);
    t4 = (t1 + 8040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 8040);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB6;

LAB11:    *((unsigned int *)t43) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(238, ng0);

LAB16:    xsi_set_current_line(239, ng0);
    t52 = (t1 + 9480);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t56 = (t1 + 9480);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t59 = (t1 + 9480);
    t60 = (t59 + 64U);
    t61 = *((char **)t60);
    t62 = (t1 + 8040);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    xsi_vlog_generic_get_array_select_value(t55, 16, t54, t58, t61, 2, 1, t64, 32, 1);
    t65 = ((char*)((ng7)));
    memset(t66, 0, 8);
    t67 = (t55 + 4);
    t68 = (t65 + 4);
    t69 = *((unsigned int *)t55);
    t70 = *((unsigned int *)t65);
    t71 = (t69 ^ t70);
    t72 = *((unsigned int *)t67);
    t73 = *((unsigned int *)t68);
    t74 = (t72 ^ t73);
    t75 = (t71 | t74);
    t76 = *((unsigned int *)t67);
    t77 = *((unsigned int *)t68);
    t78 = (t76 | t77);
    t79 = (~(t78));
    t80 = (t75 & t79);
    if (t80 != 0)
        goto LAB20;

LAB17:    if (t78 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t66) = 1;

LAB20:    t82 = (t66 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t66);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(243, ng0);

LAB25:    xsi_set_current_line(244, ng0);
    t4 = (t1 + 9320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9320);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = (t1 + 9320);
    t17 = (t11 + 64U);
    t18 = *((char **)t17);
    t19 = (t1 + 8040);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t10, 32, t6, t9, t18, 2, 1, t22, 32, 1);
    memset(t20, 0, 8);
    t23 = (t20 + 4);
    t24 = (t10 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 0);
    *((unsigned int *)t20) = t13;
    t14 = *((unsigned int *)t24);
    t15 = (t14 >> 0);
    *((unsigned int *)t23) = t15;
    t16 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t16 & 255U);
    t47 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t47 & 255U);
    t25 = (t1 + 9480);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t1 + 9480);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = (t1 + 9480);
    t32 = (t31 + 64U);
    t34 = *((char **)t32);
    t35 = (t1 + 8040);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    xsi_vlog_generic_get_array_select_value(t33, 16, t27, t30, t34, 2, 1, t37, 32, 1);
    t38 = (t1 + 9640);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t1 + 9640);
    t42 = (t41 + 72U);
    t44 = *((char **)t42);
    t45 = (t1 + 9640);
    t46 = (t45 + 64U);
    t52 = *((char **)t46);
    t53 = (t1 + 8040);
    t54 = (t53 + 56U);
    t56 = *((char **)t54);
    xsi_vlog_generic_get_array_select_value(t43, 16, t40, t44, t52, 2, 1, t56, 32, 1);
    t57 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng11, 4, t57, (char)118, t20, 8, (char)118, t33, 16, (char)118, t43, 16);

LAB23:    xsi_set_current_line(248, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 8840);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB15;

LAB19:    t81 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(239, ng0);

LAB24:    xsi_set_current_line(240, ng0);
    t88 = (t1 + 8040);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    t91 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng9, 2, t91, (char)119, t90, 32);
    xsi_set_current_line(241, ng0);
    t4 = (t1 + 9320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9320);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = (t1 + 9320);
    t17 = (t11 + 64U);
    t18 = *((char **)t17);
    t19 = (t1 + 8040);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t10, 32, t6, t9, t18, 2, 1, t22, 32, 1);
    memset(t20, 0, 8);
    t23 = (t20 + 4);
    t24 = (t10 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 0);
    *((unsigned int *)t20) = t13;
    t14 = *((unsigned int *)t24);
    t15 = (t14 >> 0);
    *((unsigned int *)t23) = t15;
    t16 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t16 & 255U);
    t47 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t47 & 255U);
    t25 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng10, 2, t25, (char)118, t20, 8);
    goto LAB23;

LAB28:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(253, ng0);

LAB33:    xsi_set_current_line(254, ng0);
    t18 = (t1 + 8040);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    t22 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng12, 2, t22, (char)119, t21, 32);
    xsi_set_current_line(255, ng0);
    t4 = (t1 + 7880);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 7880);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB32;

}

static int sp_read_register(char *t1, char *t2)
{
    char t7[8];
    char t28[8];
    char t37[8];
    char t53[8];
    char t61[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2576);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(263, ng0);

LAB5:    xsi_set_current_line(264, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t1 + 9800);
    t8 = (t1 + 9800);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 9960);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_generic_convert_bit_index(t7, t10, 2, t13, 32, 1);
    t14 = (t7 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    if (t16 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(265, ng0);
    t4 = (t1 + 9960);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 9960);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    xsi_set_current_line(267, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB8;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t7), 1);
    goto LAB7;

LAB8:    xsi_set_current_line(268, ng0);
    t4 = (t1 + 11080);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 10920);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 2576);
    xsi_vlogfile_write(0, 0, 1, ng13, 3, t11, (char)119, t6, 32, (char)118, t10, 8);
    xsi_set_current_line(269, ng0);
    t4 = (t1 + 10920);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 10120);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 8);
    xsi_set_current_line(270, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 10440);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(272, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(273, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 10120);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(274, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 10440);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(276, ng0);

LAB10:    t4 = (t1 + 5880U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t6 = (t5 + 4);
    t8 = (t4 + 4);
    t15 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t4);
    t18 = (t15 ^ t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t8);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t8);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB14;

LAB11:    if (t25 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t7) = 1;

LAB14:    memset(t28, 0, 8);
    t10 = (t7 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t7);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t10) != 0)
        goto LAB17;

LAB18:    t12 = (t28 + 4);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t12);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB19;

LAB20:    memcpy(t61, t28, 8);

LAB21:    t92 = (t61 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t61);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB34;

LAB33:    t98 = (t2 + 88U);
    t99 = *((char **)t98);
    t100 = (t99 + 32U);
    xsi_wp_set_status(t100, 1);
    t101 = (t2 + 48U);
    *((char **)t101) = &&LAB10;
    goto LAB1;

LAB13:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t28) = 1;
    goto LAB18;

LAB17:    t11 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB19:    t13 = (t1 + 6040U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng3)));
    memset(t37, 0, 8);
    t38 = (t14 + 4);
    t39 = (t13 + 4);
    t40 = *((unsigned int *)t14);
    t41 = *((unsigned int *)t13);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB25;

LAB22:    if (t49 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t37) = 1;

LAB25:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t54) != 0)
        goto LAB28;

LAB29:    t62 = *((unsigned int *)t28);
    t63 = *((unsigned int *)t53);
    t64 = (t62 & t63);
    *((unsigned int *)t61) = t64;
    t65 = (t28 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB24:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t53) = 1;
    goto LAB29;

LAB28:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB29;

LAB30:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t28 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t28);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (~(t79));
    t81 = *((unsigned int *)t53);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (~(t83));
    t16 = (t78 & t80);
    t85 = (t82 & t84);
    t86 = (~(t16));
    t87 = (~(t85));
    t88 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t88 & t86);
    t89 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t89 & t87);
    t90 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t90 & t86);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t87);
    goto LAB32;

LAB34:    t102 = (t2 + 88U);
    t103 = *((char **)t102);
    t104 = (t103 + 32U);
    xsi_wp_set_status(t104, 0);
    goto LAB4;

}

static int sp_write_register(char *t1, char *t2)
{
    char t7[8];
    char t28[8];
    char t37[8];
    char t53[8];
    char t61[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3008);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(281, ng0);

LAB5:    xsi_set_current_line(282, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 9800);
    t8 = (t1 + 9800);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 9960);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_generic_convert_bit_index(t7, t10, 2, t13, 32, 1);
    t14 = (t7 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    if (t16 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(283, ng0);
    t4 = (t1 + 9960);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 9960);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    xsi_set_current_line(285, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB8;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t7), 1);
    goto LAB7;

LAB8:    xsi_set_current_line(286, ng0);
    t4 = (t1 + 11560);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 11240);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 11400);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 3008);
    xsi_vlogfile_write(0, 0, 1, ng14, 4, t14, (char)119, t6, 32, (char)118, t10, 8, (char)118, t13, 16);
    xsi_set_current_line(287, ng0);
    t4 = (t1 + 11240);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 10120);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 8);
    xsi_set_current_line(288, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 10600);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(289, ng0);
    t4 = (t1 + 11400);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 10280);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 16);
    xsi_set_current_line(291, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(292, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 10120);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(293, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 10600);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(294, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 10280);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(296, ng0);

LAB10:    t4 = (t1 + 5880U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t6 = (t5 + 4);
    t8 = (t4 + 4);
    t15 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t4);
    t18 = (t15 ^ t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t8);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t8);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB14;

LAB11:    if (t25 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t7) = 1;

LAB14:    memset(t28, 0, 8);
    t10 = (t7 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t7);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t10) != 0)
        goto LAB17;

LAB18:    t12 = (t28 + 4);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t12);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB19;

LAB20:    memcpy(t61, t28, 8);

LAB21:    t92 = (t61 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t61);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB34;

LAB33:    t98 = (t2 + 88U);
    t99 = *((char **)t98);
    t100 = (t99 + 32U);
    xsi_wp_set_status(t100, 1);
    t101 = (t2 + 48U);
    *((char **)t101) = &&LAB10;
    goto LAB1;

LAB13:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t28) = 1;
    goto LAB18;

LAB17:    t11 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB19:    t13 = (t1 + 6040U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng3)));
    memset(t37, 0, 8);
    t38 = (t14 + 4);
    t39 = (t13 + 4);
    t40 = *((unsigned int *)t14);
    t41 = *((unsigned int *)t13);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB25;

LAB22:    if (t49 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t37) = 1;

LAB25:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t54) != 0)
        goto LAB28;

LAB29:    t62 = *((unsigned int *)t28);
    t63 = *((unsigned int *)t53);
    t64 = (t62 & t63);
    *((unsigned int *)t61) = t64;
    t65 = (t28 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB24:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t53) = 1;
    goto LAB29;

LAB28:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB29;

LAB30:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t28 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t28);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (~(t79));
    t81 = *((unsigned int *)t53);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (~(t83));
    t16 = (t78 & t80);
    t85 = (t82 & t84);
    t86 = (~(t16));
    t87 = (~(t85));
    t88 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t88 & t86);
    t89 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t89 & t87);
    t90 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t90 & t86);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t87);
    goto LAB32;

LAB34:    t102 = (t2 + 88U);
    t103 = *((char **)t102);
    t104 = (t103 + 32U);
    xsi_wp_set_status(t104, 0);
    goto LAB4;

}

static void Initial_27_0(char *t0)
{
    char t3[8];
    char t19[8];
    char t23[8];
    char t37[8];
    char t40[8];
    char t41[8];
    char t59[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    int t52;
    char *t53;
    int t54;
    int t55;
    int t56;
    int t57;
    char *t58;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    double t68;
    double t69;
    double t70;
    double t71;
    double t72;

LAB0:    t1 = (t0 + 12480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);

LAB4:    xsi_set_current_line(28, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng15, ng16);
    t2 = (t3 + 4);
    *((int *)t2) = 0;
    t4 = (t0 + 8680);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 8680);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t6) == 0)
        goto LAB5;

LAB7:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 8680);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 9160);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_bit_copy(t3, 0, t13, 0, 32);
    *((int *)t19) = xsi_vlogfile_fscanf(*((unsigned int *)t5), ng18, 2, t0, (char)119, t3, 32);
    t20 = (t19 + 4);
    *((int *)t20) = 0;
    t21 = (t0 + 9160);
    xsi_vlogvar_assign_value(t21, t3, 0, 0, 32);
    t22 = ((char*)((ng3)));
    memset(t23, 0, 8);
    xsi_vlog_signed_not_equal(t23, 32, t19, 32, t22, 32);
    t24 = (t23 + 4);
    t7 = *((unsigned int *)t24);
    t8 = (~(t7));
    t9 = *((unsigned int *)t23);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(39, ng0);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 8040);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB17:    t2 = (t0 + 8040);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 9160);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t3, 0, 8);
    xsi_vlog_signed_less(t3, 32, t5, 32, t13, 32);
    t20 = (t3 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 8680);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 7080);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 7240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 10120);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 10280);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 16);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 10440);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 10600);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 9960);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 9000);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng22)));
    t4 = (t2 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t52 = (t9 & t8);
    t5 = (t0 + 20060);
    *((int *)t5) = t52;

LAB27:    t6 = (t0 + 20060);
    if (*((int *)t6) > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 7240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t2 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t52 = (t9 & t8);
    t5 = (t0 + 20064);
    *((int *)t5) = t52;

LAB31:    t6 = (t0 + 20064);
    if (*((int *)t6) > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 7240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 15560);
    *((int *)t2) = 1;
    t4 = (t0 + 12512);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB35;

LAB1:    return;
LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(29, ng0);

LAB12:    xsi_set_current_line(30, ng0);
    xsi_vlogfile_write(0, 0, 1, ng17, 1, t0);
    xsi_set_current_line(31, ng0);
    xsi_vlog_finish(1);
    goto LAB11;

LAB13:    xsi_set_current_line(34, ng0);

LAB16:    xsi_set_current_line(35, ng0);
    xsi_vlogfile_write(0, 0, 1, ng19, 1, t0);
    xsi_set_current_line(36, ng0);
    xsi_vlog_finish(1);
    goto LAB15;

LAB18:    xsi_set_current_line(39, ng0);

LAB20:    xsi_set_current_line(40, ng0);
    t21 = (t0 + 8680);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t25 = (t0 + 9320);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 9320);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 9320);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t34 = (t0 + 8040);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_array_select_value(t23, 32, t27, t30, t33, 2, 1, t36, 32, 1);
    xsi_vlog_bit_copy(t19, 0, t23, 0, 32);
    *((int *)t37) = xsi_vlogfile_fscanf(*((unsigned int *)t24), ng20, 2, t0, (char)118, t19, 32);
    t38 = (t37 + 4);
    *((int *)t38) = 0;
    t39 = (t0 + 9320);
    t42 = (t0 + 9320);
    t43 = (t42 + 72U);
    t44 = *((char **)t43);
    t45 = (t0 + 9320);
    t46 = (t45 + 64U);
    t47 = *((char **)t46);
    t48 = (t0 + 8040);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    xsi_vlog_generic_convert_array_indices(t40, t41, t44, t47, 2, 1, t50, 32, 1);
    t51 = (t40 + 4);
    t14 = *((unsigned int *)t51);
    t52 = (!(t14));
    t53 = (t41 + 4);
    t15 = *((unsigned int *)t53);
    t54 = (!(t15));
    t55 = (t52 && t54);
    if (t55 == 1)
        goto LAB21;

LAB22:    t58 = ((char*)((ng3)));
    memset(t59, 0, 8);
    xsi_vlog_signed_not_equal(t59, 32, t37, 32, t58, 32);
    t60 = (t59 + 4);
    t18 = *((unsigned int *)t60);
    t61 = (~(t18));
    t62 = *((unsigned int *)t59);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 8040);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t5, 32, t6, 32);
    t12 = (t0 + 8040);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 32);
    goto LAB17;

LAB21:    t16 = *((unsigned int *)t40);
    t17 = *((unsigned int *)t41);
    t56 = (t16 - t17);
    t57 = (t56 + 1);
    xsi_vlogvar_assign_value(t39, t19, 0, *((unsigned int *)t41), t57);
    goto LAB22;

LAB23:    xsi_set_current_line(40, ng0);

LAB26:    xsi_set_current_line(41, ng0);
    t65 = (t0 + 8040);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    xsi_vlogfile_write(0, 0, 1, ng21, 2, t0, (char)119, t67, 32);
    xsi_set_current_line(42, ng0);
    xsi_vlog_finish(1);
    goto LAB25;

LAB28:    xsi_set_current_line(68, ng0);
    t12 = (t0 + 15528);
    *((int *)t12) = 1;
    t13 = (t0 + 12512);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    t2 = (t0 + 20060);
    t52 = *((int *)t2);
    *((int *)t2) = (t52 - 1);
    goto LAB27;

LAB32:    xsi_set_current_line(71, ng0);
    t12 = (t0 + 15544);
    *((int *)t12) = 1;
    t13 = (t0 + 12512);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    t2 = (t0 + 20064);
    t52 = *((int *)t2);
    *((int *)t2) = (t52 - 1);
    goto LAB31;

LAB35:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 9000);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng22)));
    t4 = (t2 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t52 = (t9 & t8);
    t5 = (t0 + 20068);
    *((int *)t5) = t52;

LAB36:    t6 = (t0 + 20068);
    if (*((int *)t6) > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 14520);
    t4 = (t0 + 12288);
    xsi_add_process_toexecute(0, t2, t4);
    t5 = (t0 + 14768);
    t6 = (t0 + 12288);
    xsi_add_process_toexecute(0, t5, t6);
    t12 = (t0 + 15016);
    t13 = (t0 + 12288);
    xsi_add_process_toexecute(0, t12, t13);
    t20 = (t0 + 10760);
    memset(t3, 0, 8);
    *((unsigned int *)t3) = 3;
    xsi_vlogvar_assign_value(t20, t3, 0, 0, 32);
    t21 = (t0 + 15592);
    *((int *)t21) = 1;
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB37:    xsi_set_current_line(78, ng0);
    t12 = (t0 + 15576);
    *((int *)t12) = 1;
    t13 = (t0 + 12512);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    t2 = (t0 + 20068);
    t52 = *((int *)t2);
    *((int *)t2) = (t52 - 1);
    goto LAB36;

LAB40:    t22 = (t0 + 10760);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    if (*((int *)t25) > 0)
        goto LAB41;

LAB42:    t27 = (t0 + 12288);
    xsi_clean_active_fork_process_list(t27);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng23)));
    t4 = (t2 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t52 = (t9 & t8);
    t5 = (t0 + 20072);
    *((int *)t5) = t52;

LAB43:    t6 = (t0 + 20072);
    if (*((int *)t6) > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 12288);
    t4 = (t0 + 2144);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB49:    t6 = (t0 + 12384);
    t12 = *((char **)t6);
    t13 = (t12 + 80U);
    t20 = *((char **)t13);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t24 = (t22 + 0U);
    t25 = *((char **)t24);
    t52 = ((int  (*)(char *, char *))t25)(t0, t12);

LAB51:    if (t52 != 0)
        goto LAB52;

LAB47:    t12 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t12);

LAB48:    t26 = (t0 + 12384);
    t27 = *((char **)t26);
    t26 = (t0 + 2144);
    t28 = (t0 + 12288);
    t29 = 0;
    xsi_delete_subprogram_invocation(t26, t27, t0, t28, t29);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 7880);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 9160);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t3, 0, 8);
    xsi_vlog_signed_equal(t3, 32, t5, 32, t13, 32);
    t20 = (t3 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB53;

LAB54:
LAB55:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 7880);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t68 = xsi_vlog_convert_to_real(t5, 32, 1);
    t69 = (t68 * 1.0000000000000000);
    t6 = (t0 + 9160);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t70 = xsi_vlog_convert_to_real(t13, 32, 1);
    t71 = (t69 / t70);
    t20 = (t0 + 7400);
    xsi_vlogvar_assign_value_double(t20, t71, 0);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 7880);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t68 = xsi_vlog_convert_to_real(t5, 32, 1);
    t69 = (t68 * 1.0000000000000000);
    t6 = (t0 + 9160);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t70 = xsi_vlog_convert_to_real(t13, 32, 1);
    t71 = (t69 / t70);
    t20 = (t0 + 7560);
    xsi_vlogvar_assign_value_double(t20, t71, 0);
    xsi_set_current_line(105, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname(ng25);
    t2 = (t3 + 4);
    *((int *)t2) = 0;
    t4 = (t0 + 7720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 7720);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 7560);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t68 = *((double *)t13);
    t69 = (t68 - 1.0000000000000000);
    t70 = (1.5000000000000000 * t69);
    *((double *)t3) = t70;
    t20 = (t0 + 7880);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t24 = (t0 + 9160);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 7400);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t71 = *((double *)t29);
    t72 = (100.00000000000000 * t71);
    *((double *)t19) = t72;
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng26, 5, t0, (char)114, t3, 64, (char)119, t22, 32, (char)119, t26, 32, (char)114, t19, 64);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 7720);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(109, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB41:    t26 = (t0 + 15592);
    *((int *)t26) = 1;
    goto LAB1;

LAB44:    xsi_set_current_line(95, ng0);
    t12 = (t0 + 15608);
    *((int *)t12) = 1;
    t13 = (t0 + 12512);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB46:    t2 = (t0 + 20072);
    t52 = *((int *)t2);
    *((int *)t2) = (t52 - 1);
    goto LAB43;

LAB50:;
LAB52:    t6 = (t0 + 12480U);
    *((char **)t6) = &&LAB49;
    goto LAB1;

LAB53:    xsi_set_current_line(99, ng0);
    xsi_vlogfile_write(0, 0, 1, ng24, 1, t0);
    goto LAB55;

}

static void Always_301_1(char *t0)
{
    char t8[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 12728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(301, ng0);
    t2 = (t0 + 15784);
    *((int *)t2) = 1;
    t3 = (t0 + 12760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(301, ng0);

LAB5:    xsi_set_current_line(302, ng0);
    t4 = (t0 + 9000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB8;

LAB6:    t9 = (t6 + 4);
    t10 = (t7 + 4);
    if (*((unsigned int *)t9) != *((unsigned int *)t10))
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB8:    t11 = (t8 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t8);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB9:    xsi_set_current_line(302, ng0);

LAB12:    xsi_set_current_line(303, ng0);
    t17 = (t0 + 4280U);
    t18 = *((char **)t17);
    t17 = (t0 + 4440U);
    t19 = *((char **)t17);
    memset(t20, 0, 8);
    if (*((unsigned int *)t18) != *((unsigned int *)t19))
        goto LAB14;

LAB13:    t17 = (t18 + 4);
    t21 = (t19 + 4);
    if (*((unsigned int *)t17) != *((unsigned int *)t21))
        goto LAB14;

LAB15:    t22 = (t20 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t20);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(307, ng0);
    t2 = (t0 + 4600U);
    t3 = *((char **)t2);
    t2 = (t0 + 4760U);
    t4 = *((char **)t2);
    memset(t8, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t4))
        goto LAB21;

LAB20:    t2 = (t3 + 4);
    t5 = (t4 + 4);
    if (*((unsigned int *)t2) != *((unsigned int *)t5))
        goto LAB21;

LAB22:    t6 = (t8 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t8);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(311, ng0);
    t2 = (t0 + 4920U);
    t3 = *((char **)t2);
    t2 = (t0 + 5080U);
    t4 = *((char **)t2);
    memset(t8, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t4))
        goto LAB28;

LAB27:    t2 = (t3 + 4);
    t5 = (t4 + 4);
    if (*((unsigned int *)t2) != *((unsigned int *)t5))
        goto LAB28;

LAB29:    t6 = (t8 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t8);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(315, ng0);
    t2 = (t0 + 5240U);
    t3 = *((char **)t2);
    t2 = (t0 + 5400U);
    t4 = *((char **)t2);
    memset(t8, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t4))
        goto LAB35;

LAB34:    t2 = (t3 + 4);
    t5 = (t4 + 4);
    if (*((unsigned int *)t2) != *((unsigned int *)t5))
        goto LAB35;

LAB36:    t6 = (t8 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t8);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB37;

LAB38:
LAB39:
LAB32:
LAB25:
LAB18:    goto LAB11;

LAB14:    *((unsigned int *)t20) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(303, ng0);

LAB19:    xsi_set_current_line(304, ng0);
    t28 = (t0 + 4280U);
    t29 = *((char **)t28);
    t28 = (t0 + 4440U);
    t30 = *((char **)t28);
    xsi_vlogfile_write(0, 0, 1, ng27, 3, t0, (char)118, t29, 16, (char)118, t30, 16);
    xsi_set_current_line(305, ng0);
    xsi_vlog_finish(1);
    goto LAB18;

LAB21:    *((unsigned int *)t8) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(307, ng0);

LAB26:    xsi_set_current_line(308, ng0);
    t7 = (t0 + 4600U);
    t9 = *((char **)t7);
    t7 = (t0 + 4760U);
    t10 = *((char **)t7);
    xsi_vlogfile_write(0, 0, 1, ng28, 3, t0, (char)118, t9, 16, (char)118, t10, 16);
    xsi_set_current_line(309, ng0);
    xsi_vlog_finish(1);
    goto LAB25;

LAB28:    *((unsigned int *)t8) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(311, ng0);

LAB33:    xsi_set_current_line(312, ng0);
    t7 = (t0 + 4920U);
    t9 = *((char **)t7);
    t7 = (t0 + 5080U);
    t10 = *((char **)t7);
    xsi_vlogfile_write(0, 0, 1, ng29, 3, t0, (char)118, t9, 16, (char)118, t10, 16);
    xsi_set_current_line(313, ng0);
    xsi_vlog_finish(1);
    goto LAB32;

LAB35:    *((unsigned int *)t8) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(315, ng0);

LAB40:    xsi_set_current_line(316, ng0);
    t7 = (t0 + 5240U);
    t9 = *((char **)t7);
    t7 = (t0 + 5400U);
    t10 = *((char **)t7);
    xsi_vlogfile_write(0, 0, 1, ng30, 3, t0, (char)118, t9, 16, (char)118, t10, 16);
    xsi_set_current_line(317, ng0);
    xsi_vlog_finish(1);
    goto LAB39;

}

static void Always_322_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 12976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(322, ng0);
    t2 = (t0 + 12784);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(322, ng0);
    t4 = (t0 + 7080);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t0 + 7080);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

}

static void Cont_324_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 13224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 7080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15976);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 15800);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_325_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 13472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(325, ng0);
    t2 = (t0 + 7240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 16040);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 15816);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_326_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 13720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(326, ng0);
    t2 = (t0 + 10120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 16104);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 15832);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_327_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 13968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(327, ng0);
    t2 = (t0 + 10280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 16168);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 15848);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_328_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 14216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(328, ng0);
    t2 = (t0 + 10440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 16232);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 15864);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_329_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 14464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(329, ng0);
    t2 = (t0 + 10600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 16296);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 15880);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Forked_81_9(char *t0)
{
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t19;

LAB0:    t1 = (t0 + 14712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 14520);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(81, ng0);

LAB6:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 15896);
    *((int *)t3) = 1;
    t4 = (t0 + 14744);
    *((char **)t4) = t3;
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB5:    t2 = (t0 + 10760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t18, t4, 8);
    t19 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t19 - 1);
    xsi_vlogvar_assign_value(t2, t18, 0, 0, 32);
    goto LAB2;

LAB7:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 14520);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB10:    t5 = (t0 + 14616);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB12:    if (t13 != 0)
        goto LAB13;

LAB8:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB9:    t14 = (t0 + 14616);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 14520);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    goto LAB5;

LAB11:;
LAB13:    t5 = (t0 + 14712U);
    *((char **)t5) = &&LAB10;
    goto LAB1;

}

static void Forked_86_10(char *t0)
{
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t20;

LAB0:    t1 = (t0 + 14960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 14768);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(86, ng0);

LAB6:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 14768);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB9:    t6 = (t0 + 14864);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB11:    if (t14 != 0)
        goto LAB12;

LAB7:    t7 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t7);

LAB8:    t15 = (t0 + 14864);
    t16 = *((char **)t15);
    t15 = (t0 + 1712);
    t17 = (t0 + 14768);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);

LAB5:    t2 = (t0 + 10760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t19, t4, 8);
    t20 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t20 - 1);
    xsi_vlogvar_assign_value(t2, t19, 0, 0, 32);
    goto LAB2;

LAB10:;
LAB12:    t6 = (t0 + 14960U);
    *((char **)t6) = &&LAB9;
    goto LAB1;

}

static void Forked_90_11(char *t0)
{
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t20;

LAB0:    t1 = (t0 + 15208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 15016);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(90, ng0);

LAB6:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 15016);
    t4 = (t0 + 1280);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB9:    t6 = (t0 + 15112);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB11:    if (t14 != 0)
        goto LAB12;

LAB7:    t7 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t7);

LAB8:    t15 = (t0 + 15112);
    t16 = *((char **)t15);
    t15 = (t0 + 1280);
    t17 = (t0 + 15016);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);

LAB5:    t2 = (t0 + 10760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t19, t4, 8);
    t20 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t20 - 1);
    xsi_vlogvar_assign_value(t2, t19, 0, 0, 32);
    goto LAB2;

LAB10:;
LAB12:    t6 = (t0 + 15208U);
    *((char **)t6) = &&LAB9;
    goto LAB1;

}


extern void test_m_00000000000053058232_1985558087_init()
{
	static char *pe[] = {(void *)Initial_27_0,(void *)Always_301_1,(void *)Always_322_2,(void *)Cont_324_3,(void *)Cont_325_4,(void *)Cont_326_5,(void *)Cont_327_6,(void *)Cont_328_7,(void *)Cont_329_8,(void *)Forked_81_9,(void *)Forked_86_10,(void *)Forked_90_11};
	static char *se[] = {(void *)sp_drive_instruction,(void *)sp_monitor_reg_if_ref,(void *)sp_monitor_reg_if_tst,(void *)sp_end_of_test_checks,(void *)sp_read_register,(void *)sp_write_register};
	xsi_register_didat("test_m_00000000000053058232_1985558087", "isim/tester.exe.sim/test/m_00000000000053058232_1985558087.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
