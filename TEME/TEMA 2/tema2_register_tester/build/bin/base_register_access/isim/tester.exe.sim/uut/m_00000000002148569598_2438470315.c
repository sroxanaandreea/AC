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
static const char *ng0 = "D:/OneDrive - Universitatea Politehnica Bucuresti/ANUL III/SEMSTRUL I/AC/TEME/TEMA 2/tema2_register_tester/build/bin/decryption_regfile.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {65535U, 0U};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {16U, 0U};
static unsigned int ng7[] = {18U, 0U};
static unsigned int ng8[] = {20U, 0U};



static void Always_71_0(char *t0)
{
    char t6[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;

LAB0:    t1 = (t0 + 4400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4720);
    *((int *)t2) = 1;
    t3 = (t0 + 4432);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);

LAB5:    xsi_set_current_line(72, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);

LAB14:    t2 = ((char*)((ng2)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t28 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t28 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t28 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t28 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(152, ng0);

LAB94:    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);

LAB25:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(75, ng0);

LAB13:    xsi_set_current_line(76, ng0);
    t26 = ((char*)((ng2)));
    t27 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 16, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(82, ng0);

LAB26:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t19 = (t5 + 4);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t20);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t19);
    t15 = *((unsigned int *)t20);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB30;

LAB27:    if (t16 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t6) = 1;

LAB30:    t27 = (t6 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1960U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t19 = (t2 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t19);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t19);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB38;

LAB35:    if (t16 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t6) = 1;

LAB38:    t26 = (t6 + 4);
    t21 = *((unsigned int *)t26);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB39;

LAB40:
LAB41:    goto LAB25;

LAB17:    xsi_set_current_line(100, ng0);

LAB43:    xsi_set_current_line(101, ng0);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t19 = (t5 + 4);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t20);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t19);
    t15 = *((unsigned int *)t20);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB47;

LAB44:    if (t16 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t6) = 1;

LAB47:    t27 = (t6 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB48;

LAB49:
LAB50:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1960U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t19 = (t2 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t19);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t19);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB55;

LAB52:    if (t16 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t6) = 1;

LAB55:    t26 = (t6 + 4);
    t21 = *((unsigned int *)t26);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB56;

LAB57:
LAB58:    goto LAB25;

LAB19:    xsi_set_current_line(118, ng0);

LAB60:    xsi_set_current_line(119, ng0);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t19 = (t5 + 4);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t20);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t19);
    t15 = *((unsigned int *)t20);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB64;

LAB61:    if (t16 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t6) = 1;

LAB64:    t27 = (t6 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB65;

LAB66:
LAB67:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1960U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t19 = (t2 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t19);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t19);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB72;

LAB69:    if (t16 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t6) = 1;

LAB72:    t26 = (t6 + 4);
    t21 = *((unsigned int *)t26);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB73;

LAB74:
LAB75:    goto LAB25;

LAB21:    xsi_set_current_line(135, ng0);

LAB77:    xsi_set_current_line(136, ng0);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t19 = (t5 + 4);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t20);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t19);
    t15 = *((unsigned int *)t20);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB81;

LAB78:    if (t16 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t6) = 1;

LAB81:    t27 = (t6 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB82;

LAB83:
LAB84:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 1960U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t19 = (t2 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t19);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t19);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB89;

LAB86:    if (t16 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t6) = 1;

LAB89:    t26 = (t6 + 4);
    t21 = *((unsigned int *)t26);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB90;

LAB91:
LAB92:    goto LAB25;

LAB29:    t26 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(84, ng0);

LAB34:    xsi_set_current_line(85, ng0);
    t29 = (t0 + 3000);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 16, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB33;

LAB37:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(92, ng0);

LAB42:    xsi_set_current_line(93, ng0);
    t27 = (t0 + 2120U);
    t29 = *((char **)t27);
    memset(t33, 0, 8);
    t27 = (t33 + 4);
    t30 = (t29 + 4);
    t34 = *((unsigned int *)t29);
    t35 = (t34 >> 0);
    *((unsigned int *)t33) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 >> 0);
    *((unsigned int *)t27) = t37;
    t38 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t38 & 3U);
    t39 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t39 & 3U);
    t31 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t31, t33, 0, 0, 16, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB41;

LAB46:    t26 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(102, ng0);

LAB51:    xsi_set_current_line(103, ng0);
    t29 = (t0 + 3160);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 16, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB50;

LAB54:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(110, ng0);

LAB59:    xsi_set_current_line(111, ng0);
    t27 = (t0 + 2120U);
    t29 = *((char **)t27);
    t27 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t27, t29, 0, 0, 16, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB58;

LAB63:    t26 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(119, ng0);

LAB68:    xsi_set_current_line(120, ng0);
    t29 = (t0 + 3320);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 16, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB67;

LAB71:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB72;

LAB73:    xsi_set_current_line(127, ng0);

LAB76:    xsi_set_current_line(128, ng0);
    t27 = (t0 + 2120U);
    t29 = *((char **)t27);
    t27 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t27, t29, 0, 0, 16, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB75;

LAB80:    t26 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(136, ng0);

LAB85:    xsi_set_current_line(137, ng0);
    t29 = (t0 + 3480);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 16, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB84;

LAB88:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(144, ng0);

LAB93:    xsi_set_current_line(145, ng0);
    t27 = (t0 + 2120U);
    t29 = *((char **)t27);
    t27 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t27, t29, 0, 0, 16, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB92;

}


extern void uut_m_00000000002148569598_2438470315_init()
{
	static char *pe[] = {(void *)Always_71_0};
	xsi_register_didat("uut_m_00000000002148569598_2438470315", "isim/tester.exe.sim/uut/m_00000000002148569598_2438470315.didat");
	xsi_register_executes(pe);
}
