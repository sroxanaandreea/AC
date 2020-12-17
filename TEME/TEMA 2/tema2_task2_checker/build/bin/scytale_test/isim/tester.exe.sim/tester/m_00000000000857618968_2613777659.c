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
static const char *ng0 = "D:/OneDrive - Universitatea Politehnica Bucuresti/ANUL III/SEMSTRUL I/AC/TEME/TEMA 2/tema2_task2_checker/build/bin/tester/tester.v";
static int ng1[] = {0, 0};
static int ng2[] = {1000, 0};
static const char *ng3 = "Decryption %0d \n";
static const char *ng4 = "Testing key_N: %0d, key_M: %0d\n";
static const char *ng5 = "Testing key: %0d\n";
static const char *ng6 = "Testing data: ";
static int ng7[] = {1, 0};
static const char *ng8 = "%0s ";
static const char *ng9 = "\n";
static int ng10[] = {100, 0};
static const char *ng11 = "[TIMEOUT]Reference Valid OUT was not asserted during 100cc";
static int ng12[] = {2, 0};
static const char *ng13 = "[TIMEOUT]UUT Valid OUT was not asserted during 100cc";
static const char *ng14 = "[ERROR] MISMATCH for decryption %0d in position %0d.\n";
static const char *ng15 = "Expected Decryption: ";
static const char *ng16 = "Received Decryption: ";
static const char *ng17 = "[PASSED] Decryption %0d was done correctly \n";
static const char *ng18 = "[TIMEOUT]Decryption %0d timeout after %0dcc. Busy was kept high for more than %0dcc.\n";
static const char *ng19 = "test.data";
static const char *ng20 = "r";
static const char *ng21 = "error opening data file\n";
static const char *ng22 = "nof_decryptions = %d\n";
static const char *ng23 = "error reading nof_decryptions\n";
static const char *ng24 = "key = %d\n";
static const char *ng25 = "error reading key_data for decryption number %d\n";
static const char *ng26 = "nof_data = %d\n";
static const char *ng27 = "error reading nof_data for decryption number %0d\n";
static const char *ng28 = "%d\n";
static const char *ng29 = "error reading input_data for decryption number %d\n";
static int ng30[] = {5, 0};
static int ng31[] = {10, 0};
static const char *ng32 = "test ok\n";
static const char *ng33 = "result.tester";
static const char *ng34 = "%6.2f: %0d correct out of %0d (%6.2f%% completed)\n";
static int ng35[] = {2, 0, 0, 0};



static int sp_drive_instruction(char *t1, char *t2)
{
    char t7[8];
    char t8[8];
    char t72[8];
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
    unsigned int t16;
    int t17;
    char *t18;
    unsigned int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
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
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(176, ng0);

LAB5:    xsi_set_current_line(177, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 9208);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    xsi_set_current_line(178, ng0);
    xsi_set_current_line(178, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 7288);
    t6 = (t1 + 7288);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 7288);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 1, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t8 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB6;

LAB7:
LAB8:    t4 = (t1 + 7288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7288);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7288);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t18 = (t1 + 7928);
    t26 = (t18 + 56U);
    t27 = *((char **)t26);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t7, 32, t27, 32);
    t28 = (t8 + 4);
    t16 = *((unsigned int *)t28);
    t19 = (~(t16));
    t22 = *((unsigned int *)t8);
    t23 = (t22 & t19);
    t29 = (t23 != 0);
    if (t29 > 0)
        goto LAB9;

LAB10:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t8);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t8), t25);
    goto LAB7;

LAB9:    xsi_set_current_line(178, ng0);

LAB11:    xsi_set_current_line(179, ng0);
    t30 = (t2 + 88U);
    t31 = *((char **)t30);
    t32 = (t31 + 0U);
    xsi_wp_set_status(t32, 1);
    *((char **)t3) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(180, ng0);
    t4 = (t1 + 7448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7448);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7448);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t18 = ((char*)((ng2)));
    t26 = (t1 + 7288);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t30 = (t1 + 7288);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = (t1 + 7288);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t28, t32, t35, 1, 1, t36, 32, 1);
    t37 = (t2 + 56U);
    t38 = *((char **)t37);
    t39 = (t2 + 56U);
    t40 = *((char **)t39);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t40, &&LAB13);
    t41 = (t2 + 56U);
    t42 = *((char **)t41);
    t43 = (t1 + 2576);
    t44 = xsi_create_subprogram_invocation(t42, 0, t1, t43, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t43, t44);
    t45 = (t1 + 10168);
    xsi_vlogvar_assign_value(t45, t7, 0, 0, 32);
    t46 = (t1 + 10328);
    xsi_vlogvar_assign_value(t46, t18, 0, 0, 32);
    t47 = (t1 + 10488);
    xsi_vlogvar_assign_value(t47, t8, 0, 0, 32);

LAB15:    t48 = (t2 + 64U);
    t49 = *((char **)t48);
    t50 = (t49 + 80U);
    t51 = *((char **)t50);
    t52 = (t51 + 272U);
    t53 = *((char **)t52);
    t54 = (t53 + 0U);
    t55 = *((char **)t54);
    t17 = ((int  (*)(char *, char *))t55)(t1, t49);
    if (t17 == -1)
        goto LAB16;

LAB17:    if (t17 != 0)
        goto LAB18;

LAB13:    t49 = (t1 + 2576);
    xsi_vlog_subprogram_popinvocation(t49);

LAB14:    t56 = (t2 + 64U);
    t57 = *((char **)t56);
    t56 = (t1 + 2576);
    t58 = (t2 + 56U);
    t59 = *((char **)t58);
    xsi_delete_subprogram_invocation(t56, t57, t1, t59, t2);
    xsi_set_current_line(182, ng0);
    t4 = (t1 + 8248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8248);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8248);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t1 + 7288);
    t18 = (t15 + 56U);
    t26 = *((char **)t18);
    t27 = (t1 + 7288);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t1 + 7288);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t26, t30, t33, 1, 1, t34, 32, 1);
    xsi_vlog_generic_get_array_select_value(t7, 16, t6, t11, t14, 2, 1, t8, 32, 1);
    t35 = (t1 + 9848);
    xsi_vlogvar_assign_value(t35, t7, 0, 0, 16);
    xsi_set_current_line(183, ng0);
    t4 = (t1 + 7288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7288);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7288);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t18 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 1, ng3, 2, t18, (char)119, t7, 32);
    xsi_set_current_line(184, ng0);
    t4 = (t1 + 3208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t16 = *((unsigned int *)t4);
    t19 = (~(t16));
    t22 = *((unsigned int *)t5);
    t23 = (t22 & t19);
    t29 = (t23 != 0);
    if (t29 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(187, ng0);
    t4 = (t1 + 9848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 1, ng5, 2, t9, (char)118, t6, 16);

LAB21:    xsi_set_current_line(188, ng0);
    t4 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 1, ng6, 1, t4);
    xsi_set_current_line(190, ng0);
    xsi_set_current_line(190, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 6808);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB22:    t4 = (t1 + 6808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8408);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t1 + 8408);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t1 + 8408);
    t18 = (t15 + 64U);
    t26 = *((char **)t18);
    t27 = (t1 + 7288);
    t28 = (t27 + 56U);
    t30 = *((char **)t28);
    t31 = (t1 + 7288);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = (t1 + 7288);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t30, t33, t36, 1, 1, t37, 32, 1);
    xsi_vlog_generic_get_array_select_value(t7, 32, t11, t14, t26, 2, 1, t8, 32, 1);
    memset(t72, 0, 8);
    t38 = (t6 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB24;

LAB23:    t39 = (t7 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB24;

LAB27:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB25;

LAB26:    t41 = (t72 + 4);
    t16 = *((unsigned int *)t41);
    t19 = (~(t16));
    t22 = *((unsigned int *)t72);
    t23 = (t22 & t19);
    t29 = (t23 != 0);
    if (t29 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(201, ng0);
    t4 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 1, ng9, 1, t4);
    xsi_set_current_line(203, ng0);
    t4 = (t1 + 9208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8408);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t1 + 8408);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t1 + 8408);
    t18 = (t15 + 64U);
    t26 = *((char **)t18);
    t27 = (t1 + 7288);
    t28 = (t27 + 56U);
    t30 = *((char **)t28);
    t31 = (t1 + 7288);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = (t1 + 7288);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t30, t33, t36, 1, 1, t37, 32, 1);
    xsi_vlog_generic_get_array_select_value(t7, 32, t11, t14, t26, 2, 1, t8, 32, 1);
    memset(t72, 0, 8);
    xsi_vlog_unsigned_add(t72, 32, t6, 32, t7, 32);
    t38 = (t1 + 9208);
    xsi_vlogvar_assign_value(t38, t72, 0, 0, 32);
    xsi_set_current_line(178, ng0);
    t4 = (t1 + 7288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7288);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7288);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t18 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t7, 32, t18, 32);
    t26 = (t1 + 7288);
    t27 = (t1 + 7288);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t1 + 7288);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t72, t73, t30, t33, 1, 1, t34, 32, 1);
    t35 = (t72 + 4);
    t16 = *((unsigned int *)t35);
    t17 = (!(t16));
    t36 = (t73 + 4);
    t19 = *((unsigned int *)t36);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB38;

LAB39:    goto LAB8;

LAB16:    t0 = -1;
    goto LAB1;

LAB18:    t48 = (t2 + 48U);
    *((char **)t48) = &&LAB15;
    goto LAB1;

LAB19:    xsi_set_current_line(185, ng0);
    t6 = (t1 + 9848);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memset(t7, 0, 8);
    t11 = (t7 + 4);
    t12 = (t10 + 4);
    t60 = *((unsigned int *)t10);
    t61 = (t60 >> 8);
    *((unsigned int *)t7) = t61;
    t62 = *((unsigned int *)t12);
    t63 = (t62 >> 8);
    *((unsigned int *)t11) = t63;
    t64 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t64 & 255U);
    t65 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t65 & 255U);
    t13 = (t1 + 9848);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t8, 0, 8);
    t18 = (t8 + 4);
    t26 = (t15 + 4);
    t66 = *((unsigned int *)t15);
    t67 = (t66 >> 0);
    *((unsigned int *)t8) = t67;
    t68 = *((unsigned int *)t26);
    t69 = (t68 >> 0);
    *((unsigned int *)t18) = t69;
    t70 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t70 & 255U);
    t71 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t71 & 255U);
    t27 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 1, ng4, 3, t27, (char)118, t7, 8, (char)118, t8, 8);
    goto LAB21;

LAB24:    t40 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB26;

LAB25:    *((unsigned int *)t72) = 1;
    goto LAB26;

LAB28:    xsi_set_current_line(190, ng0);

LAB30:    xsi_set_current_line(191, ng0);
    t42 = ((char*)((ng7)));
    t43 = (t1 + 9688);
    xsi_vlogvar_assign_value(t43, t42, 0, 0, 1);
    xsi_set_current_line(192, ng0);
    t4 = (t1 + 8088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8088);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8088);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t1 + 9208);
    t18 = (t15 + 56U);
    t26 = *((char **)t18);
    t27 = (t1 + 6808);
    t28 = (t27 + 56U);
    t30 = *((char **)t28);
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t26, 32, t30, 32);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 2, 1, t8, 32, 1);
    t31 = (t1 + 9528);
    xsi_vlogvar_assign_value(t31, t7, 0, 0, 32);
    xsi_set_current_line(193, ng0);
    t4 = (t1 + 9528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 1, ng8, 2, t9, (char)118, t6, 32);
    xsi_set_current_line(195, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(196, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9688);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(197, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9528);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(199, ng0);
    t4 = (t1 + 7448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7448);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7448);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t18 = ((char*)((ng2)));
    t26 = (t1 + 7288);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t30 = (t1 + 7288);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = (t1 + 7288);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t28, t32, t35, 1, 1, t36, 32, 1);
    t37 = (t2 + 56U);
    t38 = *((char **)t37);
    t39 = (t2 + 56U);
    t40 = *((char **)t39);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t40, &&LAB32);
    t41 = (t2 + 56U);
    t42 = *((char **)t41);
    t43 = (t1 + 2576);
    t44 = xsi_create_subprogram_invocation(t42, 0, t1, t43, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t43, t44);
    t45 = (t1 + 10168);
    xsi_vlogvar_assign_value(t45, t7, 0, 0, 32);
    t46 = (t1 + 10328);
    xsi_vlogvar_assign_value(t46, t18, 0, 0, 32);
    t47 = (t1 + 10488);
    xsi_vlogvar_assign_value(t47, t8, 0, 0, 32);

LAB34:    t48 = (t2 + 64U);
    t49 = *((char **)t48);
    t50 = (t49 + 80U);
    t51 = *((char **)t50);
    t52 = (t51 + 272U);
    t53 = *((char **)t52);
    t54 = (t53 + 0U);
    t55 = *((char **)t54);
    t17 = ((int  (*)(char *, char *))t55)(t1, t49);
    if (t17 == -1)
        goto LAB35;

LAB36:    if (t17 != 0)
        goto LAB37;

LAB32:    t49 = (t1 + 2576);
    xsi_vlog_subprogram_popinvocation(t49);

LAB33:    t56 = (t2 + 64U);
    t57 = *((char **)t56);
    t56 = (t1 + 2576);
    t58 = (t2 + 56U);
    t59 = *((char **)t58);
    xsi_delete_subprogram_invocation(t56, t57, t1, t59, t2);
    xsi_set_current_line(190, ng0);
    t4 = (t1 + 6808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = ((char*)((ng7)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t9, 32);
    t10 = (t1 + 6808);
    xsi_vlogvar_assign_value(t10, t7, 0, 0, 32);
    goto LAB22;

LAB35:    t0 = -1;
    goto LAB1;

LAB37:    t48 = (t2 + 48U);
    *((char **)t48) = &&LAB34;
    goto LAB1;

LAB38:    t22 = *((unsigned int *)t72);
    t23 = *((unsigned int *)t73);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t26, t8, 0, *((unsigned int *)t73), t25);
    goto LAB39;

}

static int sp_monitor_ref(char *t1, char *t2)
{
    char t7[8];
    char t8[8];
    char t32[8];
    char t33[8];
    char t47[8];
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

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(209, ng0);

LAB5:    xsi_set_current_line(210, ng0);
    xsi_set_current_line(210, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 7288);
    t9 = (t1 + 7288);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7288);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng7)));
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
LAB8:    t4 = (t1 + 7288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7288);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7288);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = (t1 + 9368);
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

LAB9:    xsi_set_current_line(210, ng0);

LAB11:    xsi_set_current_line(211, ng0);
    t30 = ((char*)((ng10)));
    t31 = (t1 + 7448);
    t34 = (t1 + 7448);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t1 + 7448);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng7)));
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

LAB13:    xsi_set_current_line(213, ng0);

LAB14:    t4 = (t1 + 3848U);
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

LAB19:    xsi_set_current_line(223, ng0);
    t4 = (t1 + 3688U);
    t5 = *((char **)t4);
    memcpy(t7, t5, 8);
    t4 = (t1 + 8568);
    t6 = (t1 + 8568);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 8568);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 7288);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t19 = (t1 + 7288);
    t27 = (t19 + 72U);
    t28 = *((char **)t27);
    t30 = (t1 + 7288);
    t31 = (t30 + 64U);
    t34 = *((char **)t31);
    t35 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t33, 32, t16, t28, t34, 1, 1, t35, 32, 1);
    xsi_vlog_generic_convert_array_indices(t8, t32, t10, t13, 2, 1, t33, 32, 1);
    t36 = (t8 + 4);
    t17 = *((unsigned int *)t36);
    t18 = (!(t17));
    t37 = (t32 + 4);
    t20 = *((unsigned int *)t37);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(225, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB30;
    goto LAB1;

LAB12:    t45 = *((unsigned int *)t32);
    t46 = *((unsigned int *)t33);
    t25 = (t45 - t46);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t31, t30, 0, *((unsigned int *)t33), t26);
    goto LAB13;

LAB18:    xsi_set_current_line(214, ng0);

LAB20:    xsi_set_current_line(215, ng0);
    t11 = (t1 + 7448);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 7448);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t19 = (t1 + 7448);
    t27 = (t19 + 64U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t13, t16, t28, 1, 1, t30, 32, 1);
    t31 = ((char*)((ng7)));
    memset(t32, 0, 8);
    xsi_vlog_signed_minus(t32, 32, t8, 32, t31, 32);
    t34 = (t1 + 7448);
    t35 = (t1 + 7448);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = (t1 + 7448);
    t39 = (t38 + 64U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng7)));
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

LAB22:    xsi_set_current_line(216, ng0);
    t4 = (t1 + 7448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7448);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7448);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng7)));
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
LAB25:    xsi_set_current_line(221, ng0);
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

LAB23:    xsi_set_current_line(217, ng0);

LAB26:    xsi_set_current_line(218, ng0);
    t27 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t27);
    xsi_set_current_line(219, ng0);
    xsi_vlog_finish(1);
    goto LAB25;

LAB27:    goto LAB14;

LAB28:    t23 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t32);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t4, t7, 0, *((unsigned int *)t32), t26);
    goto LAB29;

LAB30:    xsi_set_current_line(210, ng0);
    t4 = (t1 + 7288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7288);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7288);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t7, 32, t16, 32);
    t19 = (t1 + 7288);
    t27 = (t1 + 7288);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t1 + 7288);
    t34 = (t31 + 64U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t32, t33, t30, t35, 1, 1, t36, 32, 1);
    t37 = (t32 + 4);
    t17 = *((unsigned int *)t37);
    t18 = (!(t17));
    t38 = (t33 + 4);
    t20 = *((unsigned int *)t38);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB31;

LAB32:    goto LAB8;

LAB31:    t23 = *((unsigned int *)t32);
    t24 = *((unsigned int *)t33);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t19, t8, 0, *((unsigned int *)t33), t26);
    goto LAB32;

}

static int sp_monitor_tst(char *t1, char *t2)
{
    char t7[8];
    char t8[8];
    char t32[8];
    char t33[8];
    char t47[8];
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

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(231, ng0);

LAB5:    xsi_set_current_line(232, ng0);
    xsi_set_current_line(232, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 7288);
    t9 = (t1 + 7288);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7288);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng12)));
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
LAB8:    t4 = (t1 + 7288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7288);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7288);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng12)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = (t1 + 9368);
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

LAB9:    xsi_set_current_line(232, ng0);

LAB11:    xsi_set_current_line(233, ng0);
    t30 = ((char*)((ng10)));
    t31 = (t1 + 7448);
    t34 = (t1 + 7448);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t1 + 7448);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng12)));
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

LAB13:    xsi_set_current_line(235, ng0);

LAB14:    t4 = (t1 + 4328U);
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

LAB19:    xsi_set_current_line(246, ng0);
    t4 = (t1 + 4168U);
    t5 = *((char **)t4);
    memcpy(t7, t5, 8);
    t4 = (t1 + 8728);
    t6 = (t1 + 8728);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 8728);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 7288);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t19 = (t1 + 7288);
    t27 = (t19 + 72U);
    t28 = *((char **)t27);
    t30 = (t1 + 7288);
    t31 = (t30 + 64U);
    t34 = *((char **)t31);
    t35 = ((char*)((ng12)));
    xsi_vlog_generic_get_array_select_value(t33, 32, t16, t28, t34, 1, 1, t35, 32, 1);
    xsi_vlog_generic_convert_array_indices(t8, t32, t10, t13, 2, 1, t33, 32, 1);
    t36 = (t8 + 4);
    t17 = *((unsigned int *)t36);
    t18 = (!(t17));
    t37 = (t32 + 4);
    t20 = *((unsigned int *)t37);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(248, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB30;
    goto LAB1;

LAB12:    t45 = *((unsigned int *)t32);
    t46 = *((unsigned int *)t33);
    t25 = (t45 - t46);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t31, t30, 0, *((unsigned int *)t33), t26);
    goto LAB13;

LAB18:    xsi_set_current_line(236, ng0);

LAB20:    xsi_set_current_line(237, ng0);
    t11 = (t1 + 7448);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 7448);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t19 = (t1 + 7448);
    t27 = (t19 + 64U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng12)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t13, t16, t28, 1, 1, t30, 32, 1);
    t31 = ((char*)((ng7)));
    memset(t32, 0, 8);
    xsi_vlog_signed_minus(t32, 32, t8, 32, t31, 32);
    t34 = (t1 + 7448);
    t35 = (t1 + 7448);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = (t1 + 7448);
    t39 = (t38 + 64U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng12)));
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

LAB22:    xsi_set_current_line(238, ng0);
    t4 = (t1 + 7448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7448);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7448);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng12)));
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
LAB25:    xsi_set_current_line(243, ng0);
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

LAB23:    xsi_set_current_line(239, ng0);

LAB26:    xsi_set_current_line(240, ng0);
    t27 = (t1 + 1712);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t27);
    xsi_set_current_line(241, ng0);
    xsi_vlog_finish(1);
    goto LAB25;

LAB27:    goto LAB14;

LAB28:    t23 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t32);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t4, t7, 0, *((unsigned int *)t32), t26);
    goto LAB29;

LAB30:    xsi_set_current_line(232, ng0);
    t4 = (t1 + 7288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7288);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7288);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng12)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t7, 32, t16, 32);
    t19 = (t1 + 7288);
    t27 = (t1 + 7288);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t1 + 7288);
    t34 = (t31 + 64U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t32, t33, t30, t35, 1, 1, t36, 32, 1);
    t37 = (t32 + 4);
    t17 = *((unsigned int *)t37);
    t18 = (!(t17));
    t38 = (t33 + 4);
    t20 = *((unsigned int *)t38);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB31;

LAB32:    goto LAB8;

LAB31:    t23 = *((unsigned int *)t32);
    t24 = *((unsigned int *)t33);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t19, t8, 0, *((unsigned int *)t33), t26);
    goto LAB32;

}

static int sp_end_of_test_checks(char *t1, char *t2)
{
    char t10[8];
    char t17[8];
    char t35[8];
    char t46[8];
    char t48[8];
    char t49[8];
    char t83[8];
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
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t47;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    int t61;
    char *t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(254, ng0);

LAB5:    xsi_set_current_line(255, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 9048);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    xsi_set_current_line(256, ng0);
    xsi_set_current_line(256, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 6808);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t4 = (t1 + 6808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 7928);
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
LAB7:    xsi_set_current_line(256, ng0);

LAB9:    xsi_set_current_line(257, ng0);
    t18 = (t1 + 3368U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t19 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t18) == 0)
        goto LAB10;

LAB12:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;

LAB13:    t26 = (t17 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t17);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(260, ng0);
    xsi_set_current_line(260, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 6968);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB19:    t4 = (t1 + 6968);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8408);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t1 + 8408);
    t18 = (t11 + 72U);
    t19 = *((char **)t18);
    t25 = (t1 + 8408);
    t26 = (t25 + 64U);
    t32 = *((char **)t26);
    t33 = (t1 + 6808);
    t34 = (t33 + 56U);
    t36 = *((char **)t34);
    xsi_vlog_generic_get_array_select_value(t10, 32, t9, t19, t32, 2, 1, t36, 32, 1);
    memset(t17, 0, 8);
    t37 = (t6 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB21;

LAB20:    t38 = (t10 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB21;

LAB24:    if (*((unsigned int *)t6) < *((unsigned int *)t10))
        goto LAB22;

LAB23:    t40 = (t17 + 4);
    t12 = *((unsigned int *)t40);
    t13 = (~(t12));
    t14 = *((unsigned int *)t17);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(281, ng0);
    t4 = (t1 + 9048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8408);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t1 + 8408);
    t18 = (t11 + 72U);
    t19 = *((char **)t18);
    t25 = (t1 + 8408);
    t26 = (t25 + 64U);
    t32 = *((char **)t26);
    t33 = (t1 + 6808);
    t34 = (t33 + 56U);
    t36 = *((char **)t34);
    xsi_vlog_generic_get_array_select_value(t10, 32, t9, t19, t32, 2, 1, t36, 32, 1);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t6, 32, t10, 32);
    t37 = (t1 + 9048);
    xsi_vlogvar_assign_value(t37, t17, 0, 0, 32);
    xsi_set_current_line(283, ng0);
    t4 = (t1 + 7768);
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
    t20 = (t15 ^ t16);
    t21 = (t14 | t20);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t9);
    t24 = (t22 | t23);
    t27 = (~(t24));
    t28 = (t21 & t27);
    if (t28 != 0)
        goto LAB56;

LAB53:    if (t24 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t10) = 1;

LAB56:    t18 = (t10 + 4);
    t29 = *((unsigned int *)t18);
    t30 = (~(t29));
    t31 = *((unsigned int *)t10);
    t60 = (t31 & t30);
    t63 = (t60 != 0);
    if (t63 > 0)
        goto LAB57;

LAB58:
LAB59:    xsi_set_current_line(256, ng0);
    t4 = (t1 + 6808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 6808);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB6;

LAB10:    *((unsigned int *)t17) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(258, ng0);
    t32 = (t1 + 8408);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t36 = (t1 + 8408);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t39 = (t1 + 8408);
    t40 = (t39 + 64U);
    t41 = *((char **)t40);
    t42 = (t1 + 6808);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    xsi_vlog_generic_get_array_select_value(t35, 32, t34, t38, t41, 2, 1, t44, 32, 1);
    t45 = ((char*)((ng7)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_minus(t46, 32, t35, 32, t45, 32);
    t47 = (t1 + 8408);
    t50 = (t1 + 8408);
    t51 = (t50 + 72U);
    t52 = *((char **)t51);
    t53 = (t1 + 8408);
    t54 = (t53 + 64U);
    t55 = *((char **)t54);
    t56 = (t1 + 6808);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    xsi_vlog_generic_convert_array_indices(t48, t49, t52, t55, 2, 1, t58, 32, 1);
    t59 = (t48 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (!(t60));
    t62 = (t49 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (!(t63));
    t65 = (t61 && t64);
    if (t65 == 1)
        goto LAB17;

LAB18:    goto LAB16;

LAB17:    t66 = *((unsigned int *)t48);
    t67 = *((unsigned int *)t49);
    t68 = (t66 - t67);
    t69 = (t68 + 1);
    xsi_vlogvar_assign_value(t47, t46, 0, *((unsigned int *)t49), t69);
    goto LAB18;

LAB21:    t39 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB23;

LAB22:    *((unsigned int *)t17) = 1;
    goto LAB23;

LAB25:    xsi_set_current_line(260, ng0);

LAB27:    xsi_set_current_line(261, ng0);
    t41 = (t1 + 8568);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t1 + 8568);
    t45 = (t44 + 72U);
    t47 = *((char **)t45);
    t50 = (t1 + 8568);
    t51 = (t50 + 64U);
    t52 = *((char **)t51);
    t53 = (t1 + 9048);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = (t1 + 6968);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t46, 0, 8);
    xsi_vlog_signed_add(t46, 32, t55, 32, t58, 32);
    xsi_vlog_generic_get_array_select_value(t35, 16, t43, t47, t52, 2, 1, t46, 32, 1);
    t59 = (t1 + 8728);
    t62 = (t59 + 56U);
    t70 = *((char **)t62);
    t71 = (t1 + 8728);
    t72 = (t71 + 72U);
    t73 = *((char **)t72);
    t74 = (t1 + 8728);
    t75 = (t74 + 64U);
    t76 = *((char **)t75);
    t77 = (t1 + 9048);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    t80 = (t1 + 6968);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    memset(t49, 0, 8);
    xsi_vlog_signed_add(t49, 32, t79, 32, t82, 32);
    xsi_vlog_generic_get_array_select_value(t48, 16, t70, t73, t76, 2, 1, t49, 32, 1);
    memset(t83, 0, 8);
    if (*((unsigned int *)t35) != *((unsigned int *)t48))
        goto LAB29;

LAB28:    t84 = (t35 + 4);
    t85 = (t48 + 4);
    if (*((unsigned int *)t84) != *((unsigned int *)t85))
        goto LAB29;

LAB30:    t86 = (t83 + 4);
    t20 = *((unsigned int *)t86);
    t21 = (~(t20));
    t22 = *((unsigned int *)t83);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(279, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 7768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB33:    xsi_set_current_line(260, ng0);
    t4 = (t1 + 6968);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 6968);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB19;

LAB29:    *((unsigned int *)t83) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(261, ng0);

LAB34:    xsi_set_current_line(262, ng0);
    t87 = (t1 + 6808);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    t90 = (t1 + 6968);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    t93 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng14, 3, t93, (char)119, t89, 32, (char)119, t92, 32);
    xsi_set_current_line(263, ng0);
    t4 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng15, 1, t4);
    xsi_set_current_line(264, ng0);
    xsi_set_current_line(264, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 7128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB35:    t4 = (t1 + 7128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8408);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t1 + 8408);
    t18 = (t11 + 72U);
    t19 = *((char **)t18);
    t25 = (t1 + 8408);
    t26 = (t25 + 64U);
    t32 = *((char **)t26);
    t33 = (t1 + 6808);
    t34 = (t33 + 56U);
    t36 = *((char **)t34);
    xsi_vlog_generic_get_array_select_value(t10, 32, t9, t19, t32, 2, 1, t36, 32, 1);
    memset(t17, 0, 8);
    t37 = (t6 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB37;

LAB36:    t38 = (t10 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t6) < *((unsigned int *)t10))
        goto LAB38;

LAB39:    t40 = (t17 + 4);
    t12 = *((unsigned int *)t40);
    t13 = (~(t12));
    t14 = *((unsigned int *)t17);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(267, ng0);
    t4 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng9, 1, t4);
    xsi_set_current_line(268, ng0);
    t4 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng16, 1, t4);
    xsi_set_current_line(269, ng0);
    xsi_set_current_line(269, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 7128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB44:    t4 = (t1 + 7128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8408);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t1 + 8408);
    t18 = (t11 + 72U);
    t19 = *((char **)t18);
    t25 = (t1 + 8408);
    t26 = (t25 + 64U);
    t32 = *((char **)t26);
    t33 = (t1 + 6808);
    t34 = (t33 + 56U);
    t36 = *((char **)t34);
    xsi_vlog_generic_get_array_select_value(t10, 32, t9, t19, t32, 2, 1, t36, 32, 1);
    memset(t17, 0, 8);
    t37 = (t6 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB46;

LAB45:    t38 = (t10 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB46;

LAB49:    if (*((unsigned int *)t6) < *((unsigned int *)t10))
        goto LAB47;

LAB48:    t40 = (t17 + 4);
    t12 = *((unsigned int *)t40);
    t13 = (~(t12));
    t14 = *((unsigned int *)t17);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(272, ng0);
    t4 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng9, 1, t4);
    xsi_set_current_line(273, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t1 + 7768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(276, ng0);
    t4 = (t1 + 8408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = (t1 + 8408);
    t18 = (t11 + 64U);
    t19 = *((char **)t18);
    t25 = (t1 + 6808);
    t26 = (t25 + 56U);
    t32 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t10, 32, t6, t9, t19, 2, 1, t32, 32, 1);
    t33 = (t1 + 6968);
    xsi_vlogvar_assign_value(t33, t10, 0, 0, 32);
    goto LAB33;

LAB37:    t39 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t17) = 1;
    goto LAB39;

LAB41:    xsi_set_current_line(264, ng0);

LAB43:    xsi_set_current_line(265, ng0);
    t41 = (t1 + 8568);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t1 + 8568);
    t45 = (t44 + 72U);
    t47 = *((char **)t45);
    t50 = (t1 + 8568);
    t51 = (t50 + 64U);
    t52 = *((char **)t51);
    t53 = (t1 + 9048);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = (t1 + 7128);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t46, 0, 8);
    xsi_vlog_signed_add(t46, 32, t55, 32, t58, 32);
    xsi_vlog_generic_get_array_select_value(t35, 16, t43, t47, t52, 2, 1, t46, 32, 1);
    t59 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng8, 2, t59, (char)118, t35, 16);
    xsi_set_current_line(264, ng0);
    t4 = (t1 + 7128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 7128);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB35;

LAB46:    t39 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB48;

LAB47:    *((unsigned int *)t17) = 1;
    goto LAB48;

LAB50:    xsi_set_current_line(269, ng0);

LAB52:    xsi_set_current_line(270, ng0);
    t41 = (t1 + 8728);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t1 + 8728);
    t45 = (t44 + 72U);
    t47 = *((char **)t45);
    t50 = (t1 + 8728);
    t51 = (t50 + 64U);
    t52 = *((char **)t51);
    t53 = (t1 + 9048);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = (t1 + 7128);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t46, 0, 8);
    xsi_vlog_signed_add(t46, 32, t55, 32, t58, 32);
    xsi_vlog_generic_get_array_select_value(t35, 16, t43, t47, t52, 2, 1, t46, 32, 1);
    t59 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng8, 2, t59, (char)118, t35, 16);
    xsi_set_current_line(269, ng0);
    t4 = (t1 + 7128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 7128);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB44;

LAB55:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(283, ng0);

LAB60:    xsi_set_current_line(284, ng0);
    t19 = (t1 + 6808);
    t25 = (t19 + 56U);
    t26 = *((char **)t25);
    t32 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng17, 2, t32, (char)119, t26, 32);
    xsi_set_current_line(285, ng0);
    t4 = (t1 + 6648);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 6648);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB59;

}

static int sp_wait_for_busy(char *t1, char *t2)
{
    char t9[8];
    char t10[8];
    char t24[8];
    char t27[8];
    char t35[8];
    char t73[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t74;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2576);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(294, ng0);

LAB5:    xsi_set_current_line(295, ng0);
    t5 = (t1 + 10328);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 10168);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    xsi_set_current_line(296, ng0);

LAB6:    t4 = (t1 + 3528U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t9, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t4))
        goto LAB9;

LAB7:    t6 = (t5 + 4);
    t7 = (t4 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB9;

LAB8:    *((unsigned int *)t9) = 1;

LAB9:    memset(t10, 0, 8);
    t8 = (t9 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t8) != 0)
        goto LAB12;

LAB13:    t17 = (t10 + 4);
    t18 = *((unsigned int *)t10);
    t19 = (!(t18));
    t20 = *((unsigned int *)t17);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB14;

LAB15:    memcpy(t35, t10, 8);

LAB16:    t63 = (t35 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t35);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB27;

LAB28:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB10:    *((unsigned int *)t10) = 1;
    goto LAB13;

LAB12:    t16 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB13;

LAB14:    t22 = (t1 + 4008U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng7)));
    memset(t24, 0, 8);
    if (*((unsigned int *)t23) != *((unsigned int *)t22))
        goto LAB19;

LAB17:    t25 = (t23 + 4);
    t26 = (t22 + 4);
    if (*((unsigned int *)t25) != *((unsigned int *)t26))
        goto LAB19;

LAB18:    *((unsigned int *)t24) = 1;

LAB19:    memset(t27, 0, 8);
    t28 = (t24 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t28) != 0)
        goto LAB22;

LAB23:    t36 = *((unsigned int *)t10);
    t37 = *((unsigned int *)t27);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = (t10 + 4);
    t40 = (t27 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB16;

LAB20:    *((unsigned int *)t27) = 1;
    goto LAB23;

LAB22:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB23;

LAB24:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t10 + 4);
    t50 = (t27 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (~(t51));
    t53 = *((unsigned int *)t10);
    t54 = (t53 & t52);
    t55 = *((unsigned int *)t50);
    t56 = (~(t55));
    t57 = *((unsigned int *)t27);
    t58 = (t57 & t56);
    t59 = (~(t54));
    t60 = (~(t58));
    t61 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t61 & t59);
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & t60);
    goto LAB26;

LAB27:    xsi_set_current_line(296, ng0);

LAB29:    xsi_set_current_line(297, ng0);
    t69 = (t1 + 10168);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t72 = ((char*)((ng7)));
    memset(t73, 0, 8);
    xsi_vlog_signed_minus(t73, 32, t71, 32, t72, 32);
    t74 = (t1 + 10168);
    xsi_vlogvar_assign_value(t74, t73, 0, 0, 32);
    xsi_set_current_line(298, ng0);
    t4 = (t1 + 10168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_signed_equal(t9, 32, t6, 32, t7, 32);
    t8 = (t9 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB30;

LAB31:
LAB32:    xsi_set_current_line(303, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB34;
    goto LAB1;

LAB30:    xsi_set_current_line(299, ng0);

LAB33:    xsi_set_current_line(300, ng0);
    t16 = (t1 + 10488);
    t17 = (t16 + 56U);
    t22 = *((char **)t17);
    t23 = (t1 + 10328);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t28 = (t1 + 10328);
    t34 = (t28 + 56U);
    t39 = *((char **)t34);
    t40 = (t1 + 2576);
    xsi_vlogfile_write(1, 0, 0, ng18, 4, t40, (char)119, t22, 32, (char)119, t26, 32, (char)119, t39, 32);
    xsi_set_current_line(301, ng0);
    xsi_vlog_finish(1);
    goto LAB32;

LAB34:    goto LAB6;

}

static void Initial_63_0(char *t0)
{
    char t4[8];
    char t19[8];
    char t23[8];
    char t37[8];
    char t40[8];
    char t41[8];
    char t59[8];
    char t68[8];
    char t80[8];
    char t84[8];
    char *t1;
    char *t2;
    char *t3;
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
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t81;
    char *t82;
    char *t83;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    double t89;
    double t90;
    double t91;
    double t92;
    double t93;
    double t94;

LAB0:    t1 = (t0 + 11408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);

LAB4:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng19, ng20);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 7608);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 7608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
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

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 7608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7928);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_bit_copy(t4, 0, t13, 0, 32);
    *((int *)t19) = xsi_vlogfile_fscanf(*((unsigned int *)t5), ng22, 2, t0, (char)119, t4, 32);
    t20 = (t19 + 4);
    *((int *)t20) = 0;
    t21 = (t0 + 7928);
    xsi_vlogvar_assign_value(t21, t4, 0, 0, 32);
    t22 = ((char*)((ng7)));
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
LAB15:    xsi_set_current_line(77, ng0);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB17:    t2 = (t0 + 6808);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7928);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t13, 32);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB50;

LAB48:    if (*((unsigned int *)t2) == 0)
        goto LAB47;

LAB49:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB50:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB51;

LAB52:
LAB53:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 7608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng30)));
    t3 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t52 = (t9 & t8);
    t5 = (t0 + 18316);
    *((int *)t5) = t52;

LAB54:    t6 = (t0 + 18316);
    if (*((int *)t6) > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t52 = (t9 & t8);
    t5 = (t0 + 18320);
    *((int *)t5) = t52;

LAB58:    t6 = (t0 + 18320);
    if (*((int *)t6) > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng30)));
    t3 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t52 = (t9 & t8);
    t5 = (t0 + 18324);
    *((int *)t5) = t52;

LAB62:    t6 = (t0 + 18324);
    if (*((int *)t6) > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 13448);
    t3 = (t0 + 11216);
    xsi_add_process_toexecute(0, t2, t3);
    t5 = (t0 + 13696);
    t6 = (t0 + 11216);
    xsi_add_process_toexecute(0, t5, t6);
    t12 = (t0 + 13944);
    t13 = (t0 + 11216);
    xsi_add_process_toexecute(0, t12, t13);
    t20 = (t0 + 10008);
    memset(t4, 0, 8);
    *((unsigned int *)t4) = 3;
    xsi_vlogvar_assign_value(t20, t4, 0, 0, 32);
    t21 = (t0 + 14504);
    *((int *)t21) = 1;
    *((char **)t1) = &&LAB66;

LAB1:    return;
LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(67, ng0);

LAB12:    xsi_set_current_line(68, ng0);
    xsi_vlogfile_write(0, 0, 1, ng21, 1, t0);
    xsi_set_current_line(69, ng0);
    xsi_vlog_finish(1);
    goto LAB11;

LAB13:    xsi_set_current_line(72, ng0);

LAB16:    xsi_set_current_line(73, ng0);
    xsi_vlogfile_write(0, 0, 1, ng23, 1, t0);
    xsi_set_current_line(74, ng0);
    xsi_vlog_finish(1);
    goto LAB15;

LAB18:    xsi_set_current_line(77, ng0);

LAB20:    xsi_set_current_line(78, ng0);
    t21 = (t0 + 7608);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t25 = (t0 + 8248);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 8248);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 8248);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t34 = (t0 + 6808);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_array_select_value(t23, 16, t27, t30, t33, 2, 1, t36, 32, 1);
    xsi_vlog_bit_copy(t19, 0, t23, 0, 16);
    *((int *)t37) = xsi_vlogfile_fscanf(*((unsigned int *)t24), ng24, 2, t0, (char)118, t19, 16);
    t38 = (t37 + 4);
    *((int *)t38) = 0;
    t39 = (t0 + 8248);
    t42 = (t0 + 8248);
    t43 = (t42 + 72U);
    t44 = *((char **)t43);
    t45 = (t0 + 8248);
    t46 = (t45 + 64U);
    t47 = *((char **)t46);
    t48 = (t0 + 6808);
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

LAB22:    t58 = ((char*)((ng7)));
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
LAB25:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 7608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 8408);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t20 = (t0 + 8408);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t24 = (t0 + 8408);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 6808);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t19, 32, t13, t22, t26, 2, 1, t29, 32, 1);
    xsi_vlog_bit_copy(t4, 0, t19, 0, 32);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t5), ng26, 2, t0, (char)118, t4, 32);
    t30 = (t23 + 4);
    *((int *)t30) = 0;
    t31 = (t0 + 8408);
    t32 = (t0 + 8408);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 8408);
    t36 = (t35 + 64U);
    t38 = *((char **)t36);
    t39 = (t0 + 6808);
    t42 = (t39 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_generic_convert_array_indices(t37, t40, t34, t38, 2, 1, t43, 32, 1);
    t44 = (t37 + 4);
    t7 = *((unsigned int *)t44);
    t52 = (!(t7));
    t45 = (t40 + 4);
    t8 = *((unsigned int *)t45);
    t54 = (!(t8));
    t55 = (t52 && t54);
    if (t55 == 1)
        goto LAB27;

LAB28:    t46 = ((char*)((ng7)));
    memset(t41, 0, 8);
    xsi_vlog_signed_not_equal(t41, 32, t23, 32, t46, 32);
    t47 = (t41 + 4);
    t11 = *((unsigned int *)t47);
    t14 = (~(t11));
    t15 = *((unsigned int *)t41);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 9368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 8408);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t20 = (t0 + 8408);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t24 = (t0 + 8408);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 6808);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t4, 32, t13, t22, t26, 2, 1, t29, 32, 1);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t5, 32, t4, 32);
    t30 = (t0 + 9368);
    xsi_vlogvar_assign_value(t30, t19, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB33:    t2 = (t0 + 6968);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 8408);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t20 = (t0 + 8408);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t24 = (t0 + 8408);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 6808);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t4, 32, t13, t22, t26, 2, 1, t29, 32, 1);
    memset(t19, 0, 8);
    t30 = (t5 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB35;

LAB34:    t31 = (t4 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB36;

LAB37:    t33 = (t19 + 4);
    t7 = *((unsigned int *)t33);
    t8 = (~(t7));
    t9 = *((unsigned int *)t19);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 9048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 8408);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t20 = (t0 + 8408);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t24 = (t0 + 8408);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 6808);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t4, 32, t13, t22, t26, 2, 1, t29, 32, 1);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t5, 32, t4, 32);
    t30 = (t0 + 9048);
    xsi_vlogvar_assign_value(t30, t19, 0, 0, 32);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 6808);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 6808);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB17;

LAB21:    t16 = *((unsigned int *)t40);
    t17 = *((unsigned int *)t41);
    t56 = (t16 - t17);
    t57 = (t56 + 1);
    xsi_vlogvar_assign_value(t39, t19, 0, *((unsigned int *)t41), t57);
    goto LAB22;

LAB23:    xsi_set_current_line(78, ng0);

LAB26:    xsi_set_current_line(79, ng0);
    t65 = (t0 + 6808);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    xsi_vlogfile_write(0, 0, 1, ng25, 2, t0, (char)119, t67, 32);
    xsi_set_current_line(80, ng0);
    xsi_vlog_finish(1);
    goto LAB25;

LAB27:    t9 = *((unsigned int *)t37);
    t10 = *((unsigned int *)t40);
    t56 = (t9 - t10);
    t57 = (t56 + 1);
    xsi_vlogvar_assign_value(t31, t4, 0, *((unsigned int *)t40), t57);
    goto LAB28;

LAB29:    xsi_set_current_line(83, ng0);

LAB32:    xsi_set_current_line(84, ng0);
    t48 = (t0 + 6808);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    xsi_vlogfile_write(0, 0, 1, ng27, 2, t0, (char)119, t50, 32);
    xsi_set_current_line(85, ng0);
    xsi_vlog_finish(1);
    goto LAB31;

LAB35:    t32 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t19) = 1;
    goto LAB37;

LAB39:    xsi_set_current_line(90, ng0);
    t34 = (t0 + 7608);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t38 = (t0 + 8088);
    t39 = (t38 + 56U);
    t42 = *((char **)t39);
    t43 = (t0 + 8088);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = (t0 + 8088);
    t47 = (t46 + 64U);
    t48 = *((char **)t47);
    t49 = (t0 + 9048);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t53 = (t0 + 6968);
    t58 = (t53 + 56U);
    t60 = *((char **)t58);
    memset(t40, 0, 8);
    xsi_vlog_signed_add(t40, 32, t51, 32, t60, 32);
    xsi_vlog_generic_get_array_select_value(t37, 8, t42, t45, t48, 2, 1, t40, 32, 1);
    xsi_vlog_bit_copy(t23, 0, t37, 0, 8);
    *((int *)t41) = xsi_vlogfile_fscanf(*((unsigned int *)t36), ng28, 2, t0, (char)118, t23, 8);
    t65 = (t41 + 4);
    *((int *)t65) = 0;
    t66 = (t0 + 8088);
    t67 = (t0 + 8088);
    t69 = (t67 + 72U);
    t70 = *((char **)t69);
    t71 = (t0 + 8088);
    t72 = (t71 + 64U);
    t73 = *((char **)t72);
    t74 = (t0 + 9048);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t77 = (t0 + 6968);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    memset(t80, 0, 8);
    xsi_vlog_signed_add(t80, 32, t76, 32, t79, 32);
    xsi_vlog_generic_convert_array_indices(t59, t68, t70, t73, 2, 1, t80, 32, 1);
    t81 = (t59 + 4);
    t14 = *((unsigned int *)t81);
    t52 = (!(t14));
    t82 = (t68 + 4);
    t15 = *((unsigned int *)t82);
    t54 = (!(t15));
    t55 = (t52 && t54);
    if (t55 == 1)
        goto LAB41;

LAB42:    t83 = ((char*)((ng7)));
    memset(t84, 0, 8);
    xsi_vlog_signed_not_equal(t84, 32, t41, 32, t83, 32);
    t85 = (t84 + 4);
    t18 = *((unsigned int *)t85);
    t61 = (~(t18));
    t62 = *((unsigned int *)t84);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB43;

LAB44:
LAB45:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 6968);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 6968);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB33;

LAB41:    t16 = *((unsigned int *)t59);
    t17 = *((unsigned int *)t68);
    t56 = (t16 - t17);
    t57 = (t56 + 1);
    xsi_vlogvar_assign_value(t66, t23, 0, *((unsigned int *)t68), t57);
    goto LAB42;

LAB43:    xsi_set_current_line(90, ng0);

LAB46:    xsi_set_current_line(91, ng0);
    t86 = (t0 + 6808);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    xsi_vlogfile_write(0, 0, 1, ng29, 2, t0, (char)119, t88, 32);
    xsi_set_current_line(92, ng0);
    xsi_vlog_finish(1);
    goto LAB45;

LAB47:    *((unsigned int *)t4) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(98, ng0);
    t12 = (t0 + 9368);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    t21 = (t0 + 7928);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    memset(t19, 0, 8);
    xsi_vlog_signed_minus(t19, 32, t20, 32, t24, 32);
    t25 = (t0 + 9368);
    xsi_vlogvar_assign_value(t25, t19, 0, 0, 32);
    goto LAB53;

LAB55:    xsi_set_current_line(128, ng0);
    t12 = (t0 + 14456);
    *((int *)t12) = 1;
    t13 = (t0 + 11440);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB57:    t2 = (t0 + 18316);
    t52 = *((int *)t2);
    *((int *)t2) = (t52 - 1);
    goto LAB54;

LAB59:    xsi_set_current_line(131, ng0);
    t12 = (t0 + 14472);
    *((int *)t12) = 1;
    t13 = (t0 + 11440);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB61:    t2 = (t0 + 18320);
    t52 = *((int *)t2);
    *((int *)t2) = (t52 - 1);
    goto LAB58;

LAB63:    xsi_set_current_line(134, ng0);
    t12 = (t0 + 14488);
    *((int *)t12) = 1;
    t13 = (t0 + 11440);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB65:    t2 = (t0 + 18324);
    t52 = *((int *)t2);
    *((int *)t2) = (t52 - 1);
    goto LAB62;

LAB66:    t22 = (t0 + 10008);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    if (*((int *)t25) > 0)
        goto LAB67;

LAB68:    t27 = (t0 + 11216);
    xsi_clean_active_fork_process_list(t27);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng31)));
    t3 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t52 = (t9 & t8);
    t5 = (t0 + 18328);
    *((int *)t5) = t52;

LAB69:    t6 = (t0 + 18328);
    if (*((int *)t6) > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 11216);
    t3 = (t0 + 2144);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t5);

LAB75:    t6 = (t0 + 11312);
    t12 = *((char **)t6);
    t13 = (t12 + 80U);
    t20 = *((char **)t13);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t24 = (t22 + 0U);
    t25 = *((char **)t24);
    t52 = ((int  (*)(char *, char *))t25)(t0, t12);

LAB77:    if (t52 != 0)
        goto LAB78;

LAB73:    t12 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t12);

LAB74:    t26 = (t0 + 11312);
    t27 = *((char **)t26);
    t26 = (t0 + 2144);
    t28 = (t0 + 11216);
    t29 = 0;
    xsi_delete_subprogram_invocation(t26, t27, t0, t28, t29);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 6648);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7928);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t13, 32);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB79;

LAB80:
LAB81:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 6648);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t89 = xsi_vlog_convert_to_real(t5, 32, 1);
    t90 = (t89 * 1.0000000000000000);
    t6 = (t0 + 7928);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t91 = xsi_vlog_convert_to_real(t13, 32, 1);
    t92 = (t90 / t91);
    t20 = (t0 + 6168);
    xsi_vlogvar_assign_value_double(t20, t92, 0);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 6648);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t89 = xsi_vlog_convert_to_real(t5, 32, 1);
    t90 = (t89 * 1.0000000000000000);
    t6 = (t0 + 7928);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t91 = xsi_vlog_convert_to_real(t13, 32, 1);
    t92 = (t90 / t91);
    t20 = (t0 + 6328);
    xsi_vlogvar_assign_value_double(t20, t92, 0);
    xsi_set_current_line(162, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname(ng33);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 6488);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 6488);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng35)));
    t89 = xsi_vlog_convert_to_real(t6, 32, 1);
    t12 = (t0 + 6328);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    t90 = *((double *)t20);
    t91 = (t90 - 1.0000000000000000);
    t92 = (t89 * t91);
    *((double *)t4) = t92;
    t21 = (t0 + 6648);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t25 = (t0 + 7928);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 6168);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t93 = *((double *)t30);
    t94 = (100.00000000000000 * t93);
    *((double *)t19) = t94;
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng34, 5, t0, (char)114, t4, 64, (char)119, t24, 32, (char)119, t27, 32, (char)114, t19, 64);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 6488);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(166, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB67:    t26 = (t0 + 14504);
    *((int *)t26) = 1;
    goto LAB1;

LAB70:    xsi_set_current_line(152, ng0);
    t12 = (t0 + 14520);
    *((int *)t12) = 1;
    t13 = (t0 + 11440);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB72;
    goto LAB1;

LAB72:    t2 = (t0 + 18328);
    t52 = *((int *)t2);
    *((int *)t2) = (t52 - 1);
    goto LAB69;

LAB76:;
LAB78:    t6 = (t0 + 11408U);
    *((char **)t6) = &&LAB75;
    goto LAB1;

LAB79:    xsi_set_current_line(156, ng0);
    xsi_vlogfile_write(0, 0, 1, ng32, 1, t0);
    goto LAB81;

}

static void Always_310_1(char *t0)
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

LAB0:    t1 = (t0 + 11656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(310, ng0);
    t2 = (t0 + 11464);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(310, ng0);
    t4 = (t0 + 5848);
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

LAB8:    t14 = (t0 + 5848);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

}

static void Always_311_2(char *t0)
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

LAB0:    t1 = (t0 + 11904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(311, ng0);
    t2 = (t0 + 11712);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(311, ng0);
    t4 = (t0 + 5688);
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

LAB8:    t14 = (t0 + 5688);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

}

static void Cont_313_3(char *t0)
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

LAB0:    t1 = (t0 + 12152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(313, ng0);
    t2 = (t0 + 5848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 14824);
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
    t18 = (t0 + 14648);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_314_4(char *t0)
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

LAB0:    t1 = (t0 + 12400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(314, ng0);
    t2 = (t0 + 5688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 14888);
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
    t18 = (t0 + 14664);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_315_5(char *t0)
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

LAB0:    t1 = (t0 + 12648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(315, ng0);
    t2 = (t0 + 6008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 14952);
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
    t18 = (t0 + 14680);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_316_6(char *t0)
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

LAB0:    t1 = (t0 + 12896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(316, ng0);
    t2 = (t0 + 9528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15016);
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
    t18 = (t0 + 14696);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_317_7(char *t0)
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

LAB0:    t1 = (t0 + 13144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(317, ng0);
    t2 = (t0 + 9688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15080);
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
    t18 = (t0 + 14712);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_318_8(char *t0)
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

LAB0:    t1 = (t0 + 13392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(318, ng0);
    t2 = (t0 + 9848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15144);
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
    t18 = (t0 + 14728);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Forked_137_9(char *t0)
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

LAB0:    t1 = (t0 + 13640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 13448);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(137, ng0);

LAB6:    xsi_set_current_line(138, ng0);
    t3 = (t0 + 14744);
    *((int *)t3) = 1;
    t4 = (t0 + 13672);
    *((char **)t4) = t3;
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB5:    t2 = (t0 + 10008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t18, t4, 8);
    t19 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t19 - 1);
    xsi_vlogvar_assign_value(t2, t18, 0, 0, 32);
    goto LAB2;

LAB7:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 13448);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB10:    t5 = (t0 + 13544);
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

LAB9:    t14 = (t0 + 13544);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 13448);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    goto LAB5;

LAB11:;
LAB13:    t5 = (t0 + 13640U);
    *((char **)t5) = &&LAB10;
    goto LAB1;

}

static void Forked_142_10(char *t0)
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

LAB0:    t1 = (t0 + 13888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 13696);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(142, ng0);

LAB6:    xsi_set_current_line(143, ng0);
    t3 = (t0 + 13696);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB9:    t6 = (t0 + 13792);
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

LAB8:    t15 = (t0 + 13792);
    t16 = *((char **)t15);
    t15 = (t0 + 1712);
    t17 = (t0 + 13696);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);

LAB5:    t2 = (t0 + 10008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t19, t4, 8);
    t20 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t20 - 1);
    xsi_vlogvar_assign_value(t2, t19, 0, 0, 32);
    goto LAB2;

LAB10:;
LAB12:    t6 = (t0 + 13888U);
    *((char **)t6) = &&LAB9;
    goto LAB1;

}

static void Forked_146_11(char *t0)
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

LAB0:    t1 = (t0 + 14136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 13944);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(146, ng0);

LAB6:    xsi_set_current_line(147, ng0);
    t3 = (t0 + 13944);
    t4 = (t0 + 1280);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB9:    t6 = (t0 + 14040);
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

LAB8:    t15 = (t0 + 14040);
    t16 = *((char **)t15);
    t15 = (t0 + 1280);
    t17 = (t0 + 13944);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);

LAB5:    t2 = (t0 + 10008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t19, t4, 8);
    t20 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t20 - 1);
    xsi_vlogvar_assign_value(t2, t19, 0, 0, 32);
    goto LAB2;

LAB10:;
LAB12:    t6 = (t0 + 14136U);
    *((char **)t6) = &&LAB9;
    goto LAB1;

}


extern void tester_m_00000000000857618968_2613777659_init()
{
	static char *pe[] = {(void *)Initial_63_0,(void *)Always_310_1,(void *)Always_311_2,(void *)Cont_313_3,(void *)Cont_314_4,(void *)Cont_315_5,(void *)Cont_316_6,(void *)Cont_317_7,(void *)Cont_318_8,(void *)Forked_137_9,(void *)Forked_142_10,(void *)Forked_146_11};
	static char *se[] = {(void *)sp_drive_instruction,(void *)sp_monitor_ref,(void *)sp_monitor_tst,(void *)sp_end_of_test_checks,(void *)sp_wait_for_busy};
	xsi_register_didat("tester_m_00000000000857618968_2613777659", "isim/tester.exe.sim/tester/m_00000000000857618968_2613777659.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
