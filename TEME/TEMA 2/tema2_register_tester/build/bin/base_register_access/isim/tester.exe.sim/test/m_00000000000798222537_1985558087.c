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
static const char *ng0 = "D:/OneDrive - Universitatea Politehnica Bucuresti/ANUL III/SEMSTRUL I/AC/TEME/TEMA 2/tema2_register_tester/build/bin/tests/base_register_access/test.v";
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {8, 0};
static int ng4[] = {1, 0};
static int ng5[] = {20, 0};
static const char *ng6 = "[TIMEOUT]Access %0d timeout after 20cc";
static unsigned int ng7[] = {57005U, 0U};
static const char *ng8 = "Access %0d was with ERROR, but RTL did not send error. ";
static const char *ng9 = "Access was for address: 0x%x\n";
static const char *ng10 = "Register MISMATCH for address 0x%x: expected 0x%x, but found 0x%x\n";
static const char *ng11 = "[Access PASSED] Access %0d was checked correctly \n";
static const char *ng12 = "Access %0d Reading address: 0x%x\n";
static const char *ng13 = "Access %0d Writting address: 0x%x with value 0x%x\n";
static int ng14[] = {3, 0};
static int ng15[] = {5, 0};
static int ng16[] = {10, 0};
static const char *ng17 = "test ok\n";
static const char *ng18 = "result.tester";
static const char *ng19 = "%6.2f: %0d correct out of %0d (%6.2f%% completed)\n";
static const char *ng20 = "[ERROR] Mismatch for SELECT signal: expected %0x, but found %0x\n";
static const char *ng21 = "[ERROR] Mismatch for CAESAR_KEY signal: expected %0x, but found %0x\n";
static const char *ng22 = "[ERROR] Mismatch for SCYTALE_KEY signal: expected %0x, but found %0x\n";
static const char *ng23 = "[ERROR] Mismatch for ZIGZAG_KEY signal: expected %0x, but found %0x\n";



static int sp_drive_instruction(char *t1, char *t2)
{
    char t9[8];
    char t10[8];
    char t46[8];
    char t47[8];
    char t54[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
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
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(125, ng0);

LAB5:    xsi_set_current_line(126, ng0);
    xsi_set_current_line(126, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8040);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB6:    t4 = (t1 + 8040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    t8 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_power(t9, 32, t7, 32, t8, 32, 1);
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

LAB8:    xsi_set_current_line(130, ng0);
    xsi_set_current_line(130, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8040);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB16:    t4 = (t1 + 8040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    t8 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_power(t9, 32, t7, 32, t8, 32, 1);
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t6, 32, t9, 32);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(134, ng0);
    xsi_set_current_line(134, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8040);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB26:    t4 = (t1 + 8040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    t8 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_power(t9, 32, t7, 32, t8, 32, 1);
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t6, 32, t9, 32);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB27;

LAB28:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(126, ng0);

LAB9:    xsi_set_current_line(127, ng0);
    t17 = (t1 + 8040);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t1 + 8040);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t2 + 56U);
    t24 = *((char **)t23);
    t25 = (t2 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t26, &&LAB10);
    t27 = (t2 + 56U);
    t28 = *((char **)t27);
    t29 = (t1 + 2576);
    t30 = xsi_create_subprogram_invocation(t28, 0, t1, t29, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t29, t30);
    t31 = (t1 + 10600);
    xsi_vlogvar_assign_value(t31, t19, 0, 0, 8);
    t32 = (t1 + 10760);
    xsi_vlogvar_assign_value(t32, t22, 0, 0, 32);

LAB12:    t33 = (t2 + 64U);
    t34 = *((char **)t33);
    t35 = (t34 + 80U);
    t36 = *((char **)t35);
    t37 = (t36 + 272U);
    t38 = *((char **)t37);
    t39 = (t38 + 0U);
    t40 = *((char **)t39);
    t41 = ((int  (*)(char *, char *))t40)(t1, t34);
    if (t41 == -1)
        goto LAB13;

LAB14:    if (t41 != 0)
        goto LAB15;

LAB10:    t34 = (t1 + 2576);
    xsi_vlog_subprogram_popinvocation(t34);

LAB11:    t42 = (t2 + 64U);
    t43 = *((char **)t42);
    t42 = (t1 + 2576);
    t44 = (t2 + 56U);
    t45 = *((char **)t44);
    xsi_delete_subprogram_invocation(t42, t43, t1, t45, t2);
    xsi_set_current_line(126, ng0);
    t4 = (t1 + 8040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 8040);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB6;

LAB13:    t0 = -1;
    goto LAB1;

LAB15:    t33 = (t2 + 48U);
    *((char **)t33) = &&LAB12;
    goto LAB1;

LAB17:    xsi_set_current_line(130, ng0);

LAB19:    xsi_set_current_line(131, ng0);
    t17 = (t1 + 8040);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t1 + 8040);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng2)));
    t24 = ((char*)((ng3)));
    memset(t46, 0, 8);
    xsi_vlog_signed_power(t46, 32, t23, 32, t24, 32, 1);
    t25 = (t1 + 8040);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t47, 0, 8);
    xsi_vlog_signed_add(t47, 32, t46, 32, t27, 32);
    t28 = (t2 + 56U);
    t29 = *((char **)t28);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t31, &&LAB20);
    t32 = (t2 + 56U);
    t33 = *((char **)t32);
    t34 = (t1 + 3008);
    t35 = xsi_create_subprogram_invocation(t33, 0, t1, t34, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t34, t35);
    t36 = (t1 + 10920);
    xsi_vlogvar_assign_value(t36, t19, 0, 0, 8);
    t37 = (t1 + 11080);
    xsi_vlogvar_assign_value(t37, t22, 0, 0, 16);
    t38 = (t1 + 11240);
    xsi_vlogvar_assign_value(t38, t47, 0, 0, 32);

LAB22:    t39 = (t2 + 64U);
    t40 = *((char **)t39);
    t42 = (t40 + 80U);
    t43 = *((char **)t42);
    t44 = (t43 + 272U);
    t45 = *((char **)t44);
    t48 = (t45 + 0U);
    t49 = *((char **)t48);
    t41 = ((int  (*)(char *, char *))t49)(t1, t40);
    if (t41 == -1)
        goto LAB23;

LAB24:    if (t41 != 0)
        goto LAB25;

LAB20:    t40 = (t1 + 3008);
    xsi_vlog_subprogram_popinvocation(t40);

LAB21:    t50 = (t2 + 64U);
    t51 = *((char **)t50);
    t50 = (t1 + 3008);
    t52 = (t2 + 56U);
    t53 = *((char **)t52);
    xsi_delete_subprogram_invocation(t50, t51, t1, t53, t2);
    xsi_set_current_line(130, ng0);
    t4 = (t1 + 8040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 8040);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB16;

LAB23:    t0 = -1;
    goto LAB1;

LAB25:    t39 = (t2 + 48U);
    *((char **)t39) = &&LAB22;
    goto LAB1;

LAB27:    xsi_set_current_line(134, ng0);

LAB29:    xsi_set_current_line(135, ng0);
    t17 = (t1 + 8040);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng2)));
    t21 = ((char*)((ng2)));
    t22 = ((char*)((ng3)));
    memset(t46, 0, 8);
    xsi_vlog_signed_power(t46, 32, t21, 32, t22, 32, 1);
    memset(t47, 0, 8);
    xsi_vlog_signed_multiply(t47, 32, t20, 32, t46, 32);
    t23 = (t1 + 8040);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t54, 0, 8);
    xsi_vlog_signed_add(t54, 32, t47, 32, t25, 32);
    t26 = (t2 + 56U);
    t27 = *((char **)t26);
    t28 = (t2 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t29, &&LAB30);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    t32 = (t1 + 2576);
    t33 = xsi_create_subprogram_invocation(t31, 0, t1, t32, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t32, t33);
    t34 = (t1 + 10600);
    xsi_vlogvar_assign_value(t34, t19, 0, 0, 8);
    t35 = (t1 + 10760);
    xsi_vlogvar_assign_value(t35, t54, 0, 0, 32);

LAB32:    t36 = (t2 + 64U);
    t37 = *((char **)t36);
    t38 = (t37 + 80U);
    t39 = *((char **)t38);
    t40 = (t39 + 272U);
    t42 = *((char **)t40);
    t43 = (t42 + 0U);
    t44 = *((char **)t43);
    t41 = ((int  (*)(char *, char *))t44)(t1, t37);
    if (t41 == -1)
        goto LAB33;

LAB34:    if (t41 != 0)
        goto LAB35;

LAB30:    t37 = (t1 + 2576);
    xsi_vlog_subprogram_popinvocation(t37);

LAB31:    t45 = (t2 + 64U);
    t48 = *((char **)t45);
    t45 = (t1 + 2576);
    t49 = (t2 + 56U);
    t50 = *((char **)t49);
    xsi_delete_subprogram_invocation(t45, t48, t1, t50, t2);
    xsi_set_current_line(134, ng0);
    t4 = (t1 + 8040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 8040);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB26;

LAB33:    t0 = -1;
    goto LAB1;

LAB35:    t36 = (t2 + 48U);
    *((char **)t36) = &&LAB32;
    goto LAB1;

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
    xsi_set_current_line(141, ng0);

LAB5:    xsi_set_current_line(142, ng0);
    xsi_set_current_line(142, ng0);
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
    t16 = (t1 + 9000);
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

LAB9:    xsi_set_current_line(142, ng0);

LAB11:    xsi_set_current_line(143, ng0);
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

LAB13:    xsi_set_current_line(145, ng0);

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

LAB19:    xsi_set_current_line(156, ng0);
    t4 = (t1 + 9480);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 9480);
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
    t31 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t14, t19, t30, 1, 1, t31, 32, 1);
    xsi_vlog_generic_get_index_select_value(t7, 32, t6, t11, 2, t8, 32, 1);
    t34 = ((char*)((ng4)));
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

LAB32:    xsi_set_current_line(165, ng0);
    t4 = (t1 + 6200U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
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

LAB50:    xsi_set_current_line(168, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9160);
    t6 = (t1 + 9160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 9160);
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
    t35 = ((char*)((ng1)));
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
LAB33:    xsi_set_current_line(170, ng0);
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

LAB18:    xsi_set_current_line(146, ng0);

LAB20:    xsi_set_current_line(147, ng0);
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
    t31 = ((char*)((ng4)));
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

LAB22:    xsi_set_current_line(148, ng0);
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
LAB25:    xsi_set_current_line(153, ng0);
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

LAB23:    xsi_set_current_line(149, ng0);

LAB26:    xsi_set_current_line(150, ng0);
    t27 = (t1 + 8360);
    t28 = (t27 + 56U);
    t30 = *((char **)t28);
    t31 = (t1 + 8360);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = (t1 + 8360);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t32, 32, t30, t35, t38, 1, 1, t39, 32, 1);
    t40 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t40, (char)119, t32, 32);
    xsi_set_current_line(151, ng0);
    xsi_vlog_finish(1);
    goto LAB25;

LAB27:    goto LAB14;

LAB31:    xsi_set_current_line(156, ng0);

LAB34:    xsi_set_current_line(157, ng0);
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

LAB39:    xsi_set_current_line(162, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t1 + 9160);
    t6 = (t1 + 9160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 9160);
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
    t35 = ((char*)((ng1)));
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

LAB38:    xsi_set_current_line(157, ng0);

LAB41:    xsi_set_current_line(158, ng0);
    t48 = (t1 + 3960U);
    t50 = *((char **)t48);
    t48 = (t1 + 9160);
    t52 = (t1 + 9160);
    t53 = (t52 + 72U);
    t54 = *((char **)t53);
    t55 = (t1 + 9160);
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
    t68 = ((char*)((ng1)));
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

LAB49:    xsi_set_current_line(166, ng0);
    t11 = ((char*)((ng7)));
    t12 = (t1 + 9160);
    t13 = (t1 + 9160);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t16 = (t1 + 9160);
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
    t40 = ((char*)((ng1)));
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

LAB56:    xsi_set_current_line(142, ng0);
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
    t16 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t7, 32, t16, 32);
    t19 = (t1 + 8360);
    t27 = (t1 + 8360);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t1 + 8360);
    t34 = (t31 + 64U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng1)));
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
    xsi_set_current_line(176, ng0);

LAB5:    xsi_set_current_line(177, ng0);
    xsi_set_current_line(177, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8360);
    t9 = (t1 + 8360);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8360);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng4)));
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
    t15 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = (t1 + 9000);
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

LAB9:    xsi_set_current_line(177, ng0);

LAB11:    xsi_set_current_line(178, ng0);
    t30 = ((char*)((ng5)));
    t31 = (t1 + 8520);
    t34 = (t1 + 8520);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t1 + 8520);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng4)));
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

LAB13:    xsi_set_current_line(180, ng0);

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

LAB19:    xsi_set_current_line(192, ng0);
    t4 = (t1 + 9480);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 9480);
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
    t31 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t14, t19, t30, 1, 1, t31, 32, 1);
    xsi_vlog_generic_get_index_select_value(t7, 32, t6, t11, 2, t8, 32, 1);
    t34 = ((char*)((ng4)));
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

LAB32:    xsi_set_current_line(198, ng0);
    t4 = (t1 + 6360U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
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

LAB57:    xsi_set_current_line(201, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9320);
    t6 = (t1 + 9320);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 9320);
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
    t35 = ((char*)((ng4)));
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
LAB33:    xsi_set_current_line(203, ng0);
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

LAB18:    xsi_set_current_line(181, ng0);

LAB20:    xsi_set_current_line(183, ng0);
    t11 = (t1 + 8520);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 8520);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t19 = (t1 + 8520);
    t27 = (t19 + 64U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t13, t16, t28, 1, 1, t30, 32, 1);
    t31 = ((char*)((ng4)));
    memset(t32, 0, 8);
    xsi_vlog_signed_minus(t32, 32, t8, 32, t31, 32);
    t34 = (t1 + 8520);
    t35 = (t1 + 8520);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = (t1 + 8520);
    t39 = (t38 + 64U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng4)));
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

LAB22:    xsi_set_current_line(184, ng0);
    t4 = (t1 + 8520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8520);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8520);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng4)));
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
LAB25:    xsi_set_current_line(189, ng0);
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

LAB23:    xsi_set_current_line(185, ng0);

LAB26:    xsi_set_current_line(186, ng0);
    t27 = (t1 + 8360);
    t28 = (t27 + 56U);
    t30 = *((char **)t28);
    t31 = (t1 + 8360);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = (t1 + 8360);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t32, 32, t30, t35, t38, 1, 1, t39, 32, 1);
    t40 = (t1 + 1712);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t40, (char)119, t32, 32);
    xsi_set_current_line(187, ng0);
    xsi_vlog_finish(1);
    goto LAB25;

LAB27:    goto LAB14;

LAB31:    xsi_set_current_line(192, ng0);

LAB34:    xsi_set_current_line(193, ng0);
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

LAB50:    t61 = (t1 + 9320);
    t64 = (t1 + 9320);
    t65 = (t64 + 72U);
    t66 = *((char **)t65);
    t67 = (t1 + 9320);
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
    t80 = ((char*)((ng4)));
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

LAB56:    xsi_set_current_line(199, ng0);
    t11 = ((char*)((ng7)));
    t12 = (t1 + 9320);
    t13 = (t1 + 9320);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t16 = (t1 + 9320);
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
    t40 = ((char*)((ng4)));
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

LAB63:    xsi_set_current_line(177, ng0);
    t4 = (t1 + 8360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8360);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8360);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t7, 32, t16, 32);
    t19 = (t1 + 8360);
    t27 = (t1 + 8360);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t1 + 8360);
    t34 = (t31 + 64U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng4)));
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
    xsi_set_current_line(209, ng0);

LAB5:    xsi_set_current_line(210, ng0);
    xsi_set_current_line(210, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8040);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB6:    t4 = (t1 + 8040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9000);
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
LAB7:    xsi_set_current_line(211, ng0);

LAB9:    xsi_set_current_line(212, ng0);
    t17 = (t1 + 9160);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t21 = (t1 + 9160);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t1 + 9160);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = (t1 + 8040);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t20, 16, t19, t23, t26, 2, 1, t29, 32, 1);
    t30 = (t1 + 9320);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t34 = (t1 + 9320);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t1 + 9320);
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

LAB14:    xsi_set_current_line(225, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8680);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB15:    xsi_set_current_line(227, ng0);
    t4 = (t1 + 8680);
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
LAB32:    xsi_set_current_line(210, ng0);
    t4 = (t1 + 8040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 8040);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB6;

LAB11:    *((unsigned int *)t43) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(212, ng0);

LAB16:    xsi_set_current_line(213, ng0);
    t52 = (t1 + 9160);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t56 = (t1 + 9160);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t59 = (t1 + 9160);
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

LAB22:    xsi_set_current_line(217, ng0);

LAB25:    xsi_set_current_line(218, ng0);
    t4 = (t1 + 8040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    t8 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_power(t10, 32, t7, 32, t8, 32, 1);
    memset(t20, 0, 8);
    xsi_vlog_signed_mod(t20, 32, t6, 32, t10, 32);
    t9 = (t1 + 9160);
    t11 = (t9 + 56U);
    t17 = *((char **)t11);
    t18 = (t1 + 9160);
    t19 = (t18 + 72U);
    t21 = *((char **)t19);
    t22 = (t1 + 9160);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t1 + 8040);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t33, 16, t17, t21, t24, 2, 1, t27, 32, 1);
    t28 = (t1 + 9320);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t1 + 9320);
    t32 = (t31 + 72U);
    t34 = *((char **)t32);
    t35 = (t1 + 9320);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t1 + 8040);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    xsi_vlog_generic_get_array_select_value(t43, 16, t30, t34, t37, 2, 1, t40, 32, 1);
    t41 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng10, 4, t41, (char)119, t20, 32, (char)118, t33, 16, (char)118, t43, 16);

LAB23:    xsi_set_current_line(222, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 8680);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB15;

LAB19:    t81 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(213, ng0);

LAB24:    xsi_set_current_line(214, ng0);
    t88 = (t1 + 8040);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    t91 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng8, 2, t91, (char)119, t90, 32);
    xsi_set_current_line(215, ng0);
    t4 = (t1 + 8040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    t8 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_power(t10, 32, t7, 32, t8, 32, 1);
    memset(t20, 0, 8);
    xsi_vlog_signed_mod(t20, 32, t6, 32, t10, 32);
    t9 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng9, 2, t9, (char)119, t20, 32);
    goto LAB23;

LAB28:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(227, ng0);

LAB33:    xsi_set_current_line(228, ng0);
    t18 = (t1 + 8040);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    t22 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng11, 2, t22, (char)119, t21, 32);
    xsi_set_current_line(229, ng0);
    t4 = (t1 + 7880);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
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
    xsi_set_current_line(258, ng0);

LAB5:    xsi_set_current_line(259, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t1 + 9480);
    t8 = (t1 + 9480);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 9640);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_generic_convert_bit_index(t7, t10, 2, t13, 32, 1);
    t14 = (t7 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    if (t16 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(260, ng0);
    t4 = (t1 + 9640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 9640);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    xsi_set_current_line(262, ng0);
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

LAB8:    xsi_set_current_line(263, ng0);
    t4 = (t1 + 10760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 10600);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 2576);
    xsi_vlogfile_write(0, 0, 1, ng12, 3, t11, (char)119, t6, 32, (char)118, t10, 8);
    xsi_set_current_line(264, ng0);
    t4 = (t1 + 10600);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 9800);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 8);
    xsi_set_current_line(265, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 10120);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(267, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(268, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9800);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(269, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 10120);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(271, ng0);

LAB10:    t4 = (t1 + 5880U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
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
    t13 = ((char*)((ng4)));
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
    xsi_set_current_line(276, ng0);

LAB5:    xsi_set_current_line(277, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 9480);
    t8 = (t1 + 9480);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 9640);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_generic_convert_bit_index(t7, t10, 2, t13, 32, 1);
    t14 = (t7 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    if (t16 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(278, ng0);
    t4 = (t1 + 9640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 9640);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    xsi_set_current_line(280, ng0);
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

LAB8:    xsi_set_current_line(281, ng0);
    t4 = (t1 + 11240);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 10920);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 11080);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 3008);
    xsi_vlogfile_write(0, 0, 1, ng13, 4, t14, (char)119, t6, 32, (char)118, t10, 8, (char)118, t13, 16);
    xsi_set_current_line(282, ng0);
    t4 = (t1 + 10920);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 9800);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 8);
    xsi_set_current_line(283, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 10280);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(284, ng0);
    t4 = (t1 + 11080);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 9960);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 16);
    xsi_set_current_line(286, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(287, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9800);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(288, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 10280);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(289, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9960);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(291, ng0);

LAB10:    t4 = (t1 + 5880U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
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
    t13 = ((char*)((ng4)));
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

static void Initial_24_0(char *t0)
{
    char t5[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    double t25;
    double t26;
    double t27;
    double t28;
    double t29;

LAB0:    t1 = (t0 + 12160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);

LAB4:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7080);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng2)));
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_power(t5, 32, t3, 32, t4, 32, 1);
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t2, 32, t5, 32);
    t7 = (t0 + 9000);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t11 = (t10 & t9);
    t4 = (t0 + 19648);
    *((int *)t4) = t11;

LAB5:    t7 = (t0 + 19648);
    if (*((int *)t7) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t11 = (t10 & t9);
    t4 = (t0 + 19652);
    *((int *)t4) = t11;

LAB9:    t7 = (t0 + 19652);
    if (*((int *)t7) > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 15240);
    *((int *)t2) = 1;
    t3 = (t0 + 12192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB13;

LAB1:    return;
LAB6:    xsi_set_current_line(36, ng0);
    t12 = (t0 + 15208);
    *((int *)t12) = 1;
    t13 = (t0 + 12192);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    t2 = (t0 + 19648);
    t11 = *((int *)t2);
    *((int *)t2) = (t11 - 1);
    goto LAB5;

LAB10:    xsi_set_current_line(39, ng0);
    t12 = (t0 + 15224);
    *((int *)t12) = 1;
    t13 = (t0 + 12192);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    t2 = (t0 + 19652);
    t11 = *((int *)t2);
    *((int *)t2) = (t11 - 1);
    goto LAB9;

LAB13:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 8840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t11 = (t10 & t9);
    t4 = (t0 + 19656);
    *((int *)t4) = t11;

LAB14:    t7 = (t0 + 19656);
    if (*((int *)t7) > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 14200);
    t3 = (t0 + 11968);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 14448);
    t7 = (t0 + 11968);
    xsi_add_process_toexecute(0, t4, t7);
    t12 = (t0 + 14696);
    t13 = (t0 + 11968);
    xsi_add_process_toexecute(0, t12, t13);
    t14 = (t0 + 10440);
    memset(t5, 0, 8);
    *((unsigned int *)t5) = 3;
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 32);
    t15 = (t0 + 15272);
    *((int *)t15) = 1;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB15:    xsi_set_current_line(46, ng0);
    t12 = (t0 + 15256);
    *((int *)t12) = 1;
    t13 = (t0 + 12192);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    t2 = (t0 + 19656);
    t11 = *((int *)t2);
    *((int *)t2) = (t11 - 1);
    goto LAB14;

LAB18:    t16 = (t0 + 10440);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    if (*((int *)t18) > 0)
        goto LAB19;

LAB20:    t20 = (t0 + 11968);
    xsi_clean_active_fork_process_list(t20);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t11 = (t10 & t9);
    t4 = (t0 + 19660);
    *((int *)t4) = t11;

LAB21:    t7 = (t0 + 19660);
    if (*((int *)t7) > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 11968);
    t3 = (t0 + 2144);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB27:    t7 = (t0 + 12064);
    t12 = *((char **)t7);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t11 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB29:    if (t11 != 0)
        goto LAB30;

LAB25:    t12 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t12);

LAB26:    t19 = (t0 + 12064);
    t20 = *((char **)t19);
    t19 = (t0 + 2144);
    t21 = (t0 + 11968);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 7880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 9000);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t4, 32, t13, 32);
    t14 = (t5 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t23 = (t10 & t9);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 7880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t25 = xsi_vlog_convert_to_real(t4, 32, 1);
    t26 = (t25 * 1.0000000000000000);
    t7 = (t0 + 9000);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t27 = xsi_vlog_convert_to_real(t13, 32, 1);
    t28 = (t26 / t27);
    t14 = (t0 + 7400);
    xsi_vlogvar_assign_value_double(t14, t28, 0);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 7880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t25 = xsi_vlog_convert_to_real(t4, 32, 1);
    t26 = (t25 * 1.0000000000000000);
    t7 = (t0 + 9000);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t27 = xsi_vlog_convert_to_real(t13, 32, 1);
    t28 = (t26 / t27);
    t14 = (t0 + 7560);
    xsi_vlogvar_assign_value_double(t14, t28, 0);
    xsi_set_current_line(73, ng0);
    *((int *)t5) = xsi_vlogfile_file_open_of_cname(ng18);
    t2 = (t5 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 7720);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 7720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 7560);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t25 = *((double *)t13);
    t26 = (t25 - 1.0000000000000000);
    t27 = (0.50000000000000000 * t26);
    *((double *)t5) = t27;
    t14 = (t0 + 7880);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t0 + 9000);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 7400);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t28 = *((double *)t22);
    t29 = (100.00000000000000 * t28);
    *((double *)t6) = t29;
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng19, 5, t0, (char)114, t5, 64, (char)119, t16, 32, (char)119, t19, 32, (char)114, t6, 64);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 7720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    xsi_set_current_line(77, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB19:    t19 = (t0 + 15272);
    *((int *)t19) = 1;
    goto LAB1;

LAB22:    xsi_set_current_line(63, ng0);
    t12 = (t0 + 15288);
    *((int *)t12) = 1;
    t13 = (t0 + 12192);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    t2 = (t0 + 19660);
    t11 = *((int *)t2);
    *((int *)t2) = (t11 - 1);
    goto LAB21;

LAB28:;
LAB30:    t7 = (t0 + 12160U);
    *((char **)t7) = &&LAB27;
    goto LAB1;

LAB31:    xsi_set_current_line(67, ng0);
    xsi_vlogfile_write(0, 0, 1, ng17, 1, t0);
    goto LAB33;

}

static void Always_236_1(char *t0)
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

LAB0:    t1 = (t0 + 12408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(236, ng0);
    t2 = (t0 + 15368);
    *((int *)t2) = 1;
    t3 = (t0 + 12440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(236, ng0);

LAB5:    xsi_set_current_line(237, ng0);
    t4 = (t0 + 8840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
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

LAB9:    xsi_set_current_line(237, ng0);

LAB12:    xsi_set_current_line(238, ng0);
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

LAB17:    xsi_set_current_line(242, ng0);
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

LAB24:    xsi_set_current_line(246, ng0);
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

LAB31:    xsi_set_current_line(250, ng0);
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

LAB16:    xsi_set_current_line(238, ng0);

LAB19:    xsi_set_current_line(239, ng0);
    t28 = (t0 + 4280U);
    t29 = *((char **)t28);
    t28 = (t0 + 4440U);
    t30 = *((char **)t28);
    xsi_vlogfile_write(0, 0, 1, ng20, 3, t0, (char)118, t29, 16, (char)118, t30, 16);
    xsi_set_current_line(240, ng0);
    xsi_vlog_finish(1);
    goto LAB18;

LAB21:    *((unsigned int *)t8) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(242, ng0);

LAB26:    xsi_set_current_line(243, ng0);
    t7 = (t0 + 4600U);
    t9 = *((char **)t7);
    t7 = (t0 + 4760U);
    t10 = *((char **)t7);
    xsi_vlogfile_write(0, 0, 1, ng21, 3, t0, (char)118, t9, 16, (char)118, t10, 16);
    xsi_set_current_line(244, ng0);
    xsi_vlog_finish(1);
    goto LAB25;

LAB28:    *((unsigned int *)t8) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(246, ng0);

LAB33:    xsi_set_current_line(247, ng0);
    t7 = (t0 + 4920U);
    t9 = *((char **)t7);
    t7 = (t0 + 5080U);
    t10 = *((char **)t7);
    xsi_vlogfile_write(0, 0, 1, ng22, 3, t0, (char)118, t9, 16, (char)118, t10, 16);
    xsi_set_current_line(248, ng0);
    xsi_vlog_finish(1);
    goto LAB32;

LAB35:    *((unsigned int *)t8) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(250, ng0);

LAB40:    xsi_set_current_line(251, ng0);
    t7 = (t0 + 5240U);
    t9 = *((char **)t7);
    t7 = (t0 + 5400U);
    t10 = *((char **)t7);
    xsi_vlogfile_write(0, 0, 1, ng23, 3, t0, (char)118, t9, 16, (char)118, t10, 16);
    xsi_set_current_line(252, ng0);
    xsi_vlog_finish(1);
    goto LAB39;

}

static void Always_297_2(char *t0)
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

LAB0:    t1 = (t0 + 12656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(297, ng0);
    t2 = (t0 + 12464);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(297, ng0);
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

static void Cont_299_3(char *t0)
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

LAB0:    t1 = (t0 + 12904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(299, ng0);
    t2 = (t0 + 7080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15656);
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
    t18 = (t0 + 15480);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_300_4(char *t0)
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

LAB0:    t1 = (t0 + 13152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(300, ng0);
    t2 = (t0 + 7240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15720);
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
    t18 = (t0 + 15496);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_301_5(char *t0)
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

LAB0:    t1 = (t0 + 13400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(301, ng0);
    t2 = (t0 + 9800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15784);
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
    t18 = (t0 + 15512);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_302_6(char *t0)
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

LAB0:    t1 = (t0 + 13648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(302, ng0);
    t2 = (t0 + 9960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15848);
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
    t18 = (t0 + 15528);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_303_7(char *t0)
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

LAB0:    t1 = (t0 + 13896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(303, ng0);
    t2 = (t0 + 10120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15912);
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
    t18 = (t0 + 15544);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_304_8(char *t0)
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

LAB0:    t1 = (t0 + 14144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(304, ng0);
    t2 = (t0 + 10280);
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
    t18 = (t0 + 15560);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Forked_49_9(char *t0)
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

LAB0:    t1 = (t0 + 14392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 14200);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(49, ng0);

LAB6:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 15576);
    *((int *)t3) = 1;
    t4 = (t0 + 14424);
    *((char **)t4) = t3;
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB5:    t2 = (t0 + 10440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t18, t4, 8);
    t19 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t19 - 1);
    xsi_vlogvar_assign_value(t2, t18, 0, 0, 32);
    goto LAB2;

LAB7:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 14200);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB10:    t5 = (t0 + 14296);
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

LAB9:    t14 = (t0 + 14296);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 14200);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    goto LAB5;

LAB11:;
LAB13:    t5 = (t0 + 14392U);
    *((char **)t5) = &&LAB10;
    goto LAB1;

}

static void Forked_54_10(char *t0)
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

LAB0:    t1 = (t0 + 14640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 14448);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(54, ng0);

LAB6:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 14448);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB9:    t6 = (t0 + 14544);
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

LAB8:    t15 = (t0 + 14544);
    t16 = *((char **)t15);
    t15 = (t0 + 1712);
    t17 = (t0 + 14448);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);

LAB5:    t2 = (t0 + 10440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t19, t4, 8);
    t20 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t20 - 1);
    xsi_vlogvar_assign_value(t2, t19, 0, 0, 32);
    goto LAB2;

LAB10:;
LAB12:    t6 = (t0 + 14640U);
    *((char **)t6) = &&LAB9;
    goto LAB1;

}

static void Forked_58_11(char *t0)
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

LAB0:    t1 = (t0 + 14888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 14696);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(58, ng0);

LAB6:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 14696);
    t4 = (t0 + 1280);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB9:    t6 = (t0 + 14792);
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

LAB8:    t15 = (t0 + 14792);
    t16 = *((char **)t15);
    t15 = (t0 + 1280);
    t17 = (t0 + 14696);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);

LAB5:    t2 = (t0 + 10440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t19, t4, 8);
    t20 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t20 - 1);
    xsi_vlogvar_assign_value(t2, t19, 0, 0, 32);
    goto LAB2;

LAB10:;
LAB12:    t6 = (t0 + 14888U);
    *((char **)t6) = &&LAB9;
    goto LAB1;

}


extern void test_m_00000000000798222537_1985558087_init()
{
	static char *pe[] = {(void *)Initial_24_0,(void *)Always_236_1,(void *)Always_297_2,(void *)Cont_299_3,(void *)Cont_300_4,(void *)Cont_301_5,(void *)Cont_302_6,(void *)Cont_303_7,(void *)Cont_304_8,(void *)Forked_49_9,(void *)Forked_54_10,(void *)Forked_58_11};
	static char *se[] = {(void *)sp_drive_instruction,(void *)sp_monitor_reg_if_ref,(void *)sp_monitor_reg_if_tst,(void *)sp_end_of_test_checks,(void *)sp_read_register,(void *)sp_write_register};
	xsi_register_didat("test_m_00000000000798222537_1985558087", "isim/tester.exe.sim/test/m_00000000000798222537_1985558087.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
