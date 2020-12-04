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
static const char *ng0 = "D:/OneDrive - Universitatea Politehnica Bucuresti/ANUL III/SEMSTRUL I/AC/TEME/TEMA 2/decryption_skel/decryption_regfile.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {16U, 0U};
static unsigned int ng5[] = {18U, 0U};
static unsigned int ng6[] = {20U, 0U};
static unsigned int ng7[] = {65535U, 0U};
static unsigned int ng8[] = {2U, 0U};



static void Always_71_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

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
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(149, ng0);

LAB86:    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2840);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB17:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 1480U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB90;

LAB87:    if (t19 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t7) = 1;

LAB90:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB91;

LAB92:
LAB93:    goto LAB2;

LAB7:    xsi_set_current_line(75, ng0);

LAB18:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB22;

LAB19:    if (t19 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t7) = 1;

LAB22:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1960U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB30;

LAB27:    if (t19 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t7) = 1;

LAB30:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2840);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB17;

LAB9:    xsi_set_current_line(94, ng0);

LAB35:    xsi_set_current_line(95, ng0);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB39;

LAB36:    if (t19 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t7) = 1;

LAB39:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB40;

LAB41:
LAB42:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1960U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB47;

LAB44:    if (t19 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t7) = 1;

LAB47:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB48;

LAB49:
LAB50:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2840);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB17;

LAB11:    xsi_set_current_line(113, ng0);

LAB52:    xsi_set_current_line(114, ng0);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB56;

LAB53:    if (t19 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t7) = 1;

LAB56:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB57;

LAB58:
LAB59:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 1960U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB64;

LAB61:    if (t19 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t7) = 1;

LAB64:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB65;

LAB66:
LAB67:    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2840);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB17;

LAB13:    xsi_set_current_line(131, ng0);

LAB69:    xsi_set_current_line(132, ng0);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB73;

LAB70:    if (t19 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t7) = 1;

LAB73:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB74;

LAB75:
LAB76:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 1960U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB81;

LAB78:    if (t19 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t7) = 1;

LAB81:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB82;

LAB83:
LAB84:    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2840);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB17;

LAB21:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(77, ng0);

LAB26:    xsi_set_current_line(78, ng0);
    t29 = (t0 + 3000);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 2520);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 16);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2680);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB25;

LAB29:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(85, ng0);

LAB34:    xsi_set_current_line(86, ng0);
    t23 = (t0 + 2120U);
    t29 = *((char **)t23);
    t23 = (t0 + 3000);
    xsi_vlogvar_assign_value(t23, t29, 0, 0, 16);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2680);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB38:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(96, ng0);

LAB43:    xsi_set_current_line(97, ng0);
    t29 = (t0 + 3160);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 2520);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 16);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2680);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB42;

LAB46:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(104, ng0);

LAB51:    xsi_set_current_line(105, ng0);
    t23 = (t0 + 2120U);
    t29 = *((char **)t23);
    t23 = (t0 + 3160);
    xsi_vlogvar_assign_value(t23, t29, 0, 0, 16);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2680);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB50;

LAB55:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(114, ng0);

LAB60:    xsi_set_current_line(115, ng0);
    t29 = (t0 + 3320);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 2520);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 16);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2680);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB59;

LAB63:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(122, ng0);

LAB68:    xsi_set_current_line(123, ng0);
    t23 = (t0 + 2120U);
    t29 = *((char **)t23);
    t23 = (t0 + 3320);
    xsi_vlogvar_assign_value(t23, t29, 0, 0, 16);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2680);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB67;

LAB72:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(132, ng0);

LAB77:    xsi_set_current_line(133, ng0);
    t29 = (t0 + 3480);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 2520);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 16);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2680);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB76;

LAB80:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(140, ng0);

LAB85:    xsi_set_current_line(141, ng0);
    t23 = (t0 + 2120U);
    t29 = *((char **)t23);
    t23 = (t0 + 3480);
    xsi_vlogvar_assign_value(t23, t29, 0, 0, 16);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2680);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB84;

LAB89:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB90;

LAB91:    xsi_set_current_line(160, ng0);

LAB94:    xsi_set_current_line(161, ng0);
    t23 = ((char*)((ng2)));
    t29 = (t0 + 3000);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 16);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3160);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 16);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 3320);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 16);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 3480);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 16);
    goto LAB93;

}


extern void work_m_00000000002148569598_2438470315_init()
{
	static char *pe[] = {(void *)Always_71_0};
	xsi_register_didat("work_m_00000000002148569598_2438470315", "isim/decryption_regfile_test_isim_beh.exe.sim/work/m_00000000002148569598_2438470315.didat");
	xsi_register_executes(pe);
}
