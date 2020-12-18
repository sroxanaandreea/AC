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
static const char *ng0 = "D:/OneDrive - Universitatea Politehnica Bucuresti/ANUL III/SEMSTRUL I/AC/TEME/TEMA 2/tema2_task3_checker/build/bin/mux.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};



static void Always_49_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;

LAB0:    t1 = (t0 + 3944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 4264);
    *((int *)t2) = 1;
    t3 = (t0 + 3976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(57, ng0);

LAB14:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);

LAB15:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t30 == 1)
        goto LAB20;

LAB21:
LAB23:
LAB22:    xsi_set_current_line(95, ng0);

LAB55:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);

LAB24:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(52, ng0);

LAB13:    xsi_set_current_line(53, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(59, ng0);

LAB25:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 1824U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB29;

LAB26:    if (t18 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t6) = 1;

LAB29:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(66, ng0);

LAB34:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1824U);
    t4 = *((char **)t2);
    t2 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 1, 0LL);

LAB32:    goto LAB24;

LAB18:    xsi_set_current_line(71, ng0);

LAB35:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 2144U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB39;

LAB36:    if (t18 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t6) = 1;

LAB39:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(78, ng0);

LAB44:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2144U);
    t4 = *((char **)t2);
    t2 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 1, 0LL);

LAB42:    goto LAB24;

LAB20:    xsi_set_current_line(83, ng0);

LAB45:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 2464U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB49;

LAB46:    if (t18 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t6) = 1;

LAB49:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(90, ng0);

LAB54:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2464U);
    t4 = *((char **)t2);
    t2 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 1, 0LL);

LAB52:    goto LAB24;

LAB28:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(61, ng0);

LAB33:    xsi_set_current_line(62, ng0);
    t28 = (t0 + 1664U);
    t29 = *((char **)t28);
    t28 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 8, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1824U);
    t4 = *((char **)t2);
    t2 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 1, 0LL);
    goto LAB32;

LAB38:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(73, ng0);

LAB43:    xsi_set_current_line(74, ng0);
    t28 = (t0 + 1984U);
    t29 = *((char **)t28);
    t28 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 8, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2144U);
    t4 = *((char **)t2);
    t2 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 1, 0LL);
    goto LAB42;

LAB48:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(85, ng0);

LAB53:    xsi_set_current_line(86, ng0);
    t28 = (t0 + 2304U);
    t29 = *((char **)t28);
    t28 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 8, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2464U);
    t4 = *((char **)t2);
    t2 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 1, 0LL);
    goto LAB52;

}


extern void uut_m_00000000002944136536_1323274903_init()
{
	static char *pe[] = {(void *)Always_49_0};
	xsi_register_didat("uut_m_00000000002944136536_1323274903", "isim/tester.exe.sim/uut/m_00000000002944136536_1323274903.didat");
	xsi_register_executes(pe);
}
