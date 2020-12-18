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
static const char *ng0 = "D:/OneDrive - Universitatea Politehnica Bucuresti/ANUL III/SEMSTRUL I/AC/TEME/TEMA 2/tema2_task3_checker/build/bin/demux.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {0, 0};



static void Always_56_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 5104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 5672);
    *((int *)t2) = 1;
    t3 = (t0 + 5136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(58, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB7;

}

static void Always_62_1(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
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
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    int t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 5688);
    *((int *)t2) = 1;
    t3 = (t0 + 5384);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 2344U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(65, ng0);

LAB14:    xsi_set_current_line(66, ng0);
    t7 = (t0 + 2664U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t10 = (t8 + 4);
    t11 = (t7 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB18;

LAB15:    if (t21 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t9) = 1;

LAB18:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(95, ng0);

LAB39:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB21:    goto LAB13;

LAB9:    xsi_set_current_line(100, ng0);

LAB40:    xsi_set_current_line(101, ng0);
    t3 = (t0 + 2664U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB44;

LAB41:    if (t21 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t9) = 1;

LAB44:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(131, ng0);

LAB65:    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB47:    goto LAB13;

LAB11:    xsi_set_current_line(135, ng0);

LAB66:    xsi_set_current_line(136, ng0);
    t3 = (t0 + 2664U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB70;

LAB67:    if (t21 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t9) = 1;

LAB70:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(166, ng0);

LAB91:    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB73:    goto LAB13;

LAB17:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(66, ng0);

LAB22:    xsi_set_current_line(67, ng0);
    t31 = (t0 + 4024);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);

LAB23:    t34 = ((char*)((ng1)));
    t35 = xsi_vlog_unsigned_case_compare(t33, 2, t34, 2);
    if (t35 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t33, 2, t2, 2);
    if (t6 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t33, 2, t2, 2);
    if (t6 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t33, 2, t2, 2);
    if (t6 == 1)
        goto LAB30;

LAB31:
LAB33:
LAB32:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB34:    goto LAB21;

LAB24:    xsi_set_current_line(69, ng0);

LAB35:    xsi_set_current_line(70, ng0);
    t36 = ((char*)((ng3)));
    t37 = (t0 + 4184);
    xsi_vlogvar_assign_value(t37, t36, 0, 0, 2);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 24);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 24);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 255U);
    t7 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t7, t9, 0, 0, 8, 0LL);
    goto LAB34;

LAB26:    xsi_set_current_line(75, ng0);

LAB36:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 16);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 16);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 255U);
    t7 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t7, t9, 0, 0, 8, 0LL);
    goto LAB34;

LAB28:    xsi_set_current_line(81, ng0);

LAB37:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 8);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 8);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 255U);
    t7 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t7, t9, 0, 0, 8, 0LL);
    goto LAB34;

LAB30:    xsi_set_current_line(87, ng0);

LAB38:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 0);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 0);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 255U);
    t7 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t7, t9, 0, 0, 8, 0LL);
    goto LAB34;

LAB43:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(101, ng0);

LAB48:    xsi_set_current_line(102, ng0);
    t24 = (t0 + 4024);
    t25 = (t24 + 56U);
    t31 = *((char **)t25);

LAB49:    t32 = ((char*)((ng1)));
    t35 = xsi_vlog_unsigned_case_compare(t31, 2, t32, 2);
    if (t35 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t31, 2, t2, 2);
    if (t6 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t31, 2, t2, 2);
    if (t6 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t31, 2, t2, 2);
    if (t6 == 1)
        goto LAB56;

LAB57:
LAB59:
LAB58:    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB60:    goto LAB47;

LAB50:    xsi_set_current_line(104, ng0);

LAB61:    xsi_set_current_line(105, ng0);
    t34 = ((char*)((ng3)));
    t36 = (t0 + 4184);
    xsi_vlogvar_assign_value(t36, t34, 0, 0, 2);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 24);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 24);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 255U);
    t7 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t7, t9, 0, 0, 8, 0LL);
    goto LAB60;

LAB52:    xsi_set_current_line(110, ng0);

LAB62:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 16);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 16);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 255U);
    t7 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t7, t9, 0, 0, 8, 0LL);
    goto LAB60;

LAB54:    xsi_set_current_line(116, ng0);

LAB63:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 8);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 8);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 255U);
    t7 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t7, t9, 0, 0, 8, 0LL);
    goto LAB60;

LAB56:    xsi_set_current_line(122, ng0);

LAB64:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 0);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 0);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 255U);
    t7 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t7, t9, 0, 0, 8, 0LL);
    goto LAB60;

LAB69:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(136, ng0);

LAB74:    xsi_set_current_line(137, ng0);
    t24 = (t0 + 4024);
    t25 = (t24 + 56U);
    t32 = *((char **)t25);

LAB75:    t34 = ((char*)((ng1)));
    t35 = xsi_vlog_unsigned_case_compare(t32, 2, t34, 2);
    if (t35 == 1)
        goto LAB76;

LAB77:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t32, 2, t2, 2);
    if (t6 == 1)
        goto LAB78;

LAB79:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t32, 2, t2, 2);
    if (t6 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t32, 2, t2, 2);
    if (t6 == 1)
        goto LAB82;

LAB83:
LAB85:
LAB84:    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB86:    goto LAB73;

LAB76:    xsi_set_current_line(139, ng0);

LAB87:    xsi_set_current_line(140, ng0);
    t36 = ((char*)((ng3)));
    t37 = (t0 + 4184);
    xsi_vlogvar_assign_value(t37, t36, 0, 0, 2);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 24);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 24);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 255U);
    t7 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t7, t9, 0, 0, 8, 0LL);
    goto LAB86;

LAB78:    xsi_set_current_line(145, ng0);

LAB88:    xsi_set_current_line(146, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 16);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 16);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 255U);
    t7 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t7, t9, 0, 0, 8, 0LL);
    goto LAB86;

LAB80:    xsi_set_current_line(151, ng0);

LAB89:    xsi_set_current_line(152, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 8);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 8);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 255U);
    t7 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t7, t9, 0, 0, 8, 0LL);
    goto LAB86;

LAB82:    xsi_set_current_line(157, ng0);

LAB90:    xsi_set_current_line(158, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 0);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 0);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 255U);
    t7 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t7, t9, 0, 0, 8, 0LL);
    goto LAB86;

}


extern void uut_m_00000000001248014510_3828577538_init()
{
	static char *pe[] = {(void *)Always_56_0,(void *)Always_62_1};
	xsi_register_didat("uut_m_00000000001248014510_3828577538", "isim/tester.exe.sim/uut/m_00000000001248014510_3828577538.didat");
	xsi_register_executes(pe);
}
