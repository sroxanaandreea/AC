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
static const char *ng0 = "D:/OneDrive - Universitatea Politehnica Bucuresti/ANUL III/SEMSTRUL I/AC/TEME/TEMA 2/decryption_skel/scytale_decryption.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {250U, 0U};
static int ng3[] = {1, 0};



static void Always_53_0(char *t0)
{
    char t6[8];
    char t29[8];
    char t57[8];
    char t58[8];
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
    char *t28;
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
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    int t65;
    char *t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;
    int t73;

LAB0:    t1 = (t0 + 4832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5152);
    *((int *)t2) = 1;
    t3 = (t0 + 4864);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2392U);
    t3 = *((char **)t2);
    t2 = (t0 + 2232U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 16, t3, 8, t4, 8);
    t2 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t2, t6, 0, 0, 16, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1752U);
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
LAB12:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
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
        goto LAB17;

LAB14:    if (t16 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
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
        goto LAB32;

LAB31:    if (t16 != 0)
        goto LAB33;

LAB34:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(62, ng0);

LAB13:    xsi_set_current_line(63, ng0);
    t26 = ((char*)((ng1)));
    t27 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 8, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB16:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(69, ng0);

LAB21:    xsi_set_current_line(71, ng0);
    t26 = (t0 + 3272);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t30 = (t0 + 3272);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = (t0 + 3272);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 3432);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t29, 8, t28, t32, t35, 2, 1, t38, 32, 1);
    t39 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t39, t29, 0, 0, 8, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2392U);
    t19 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t19, 8);
    t5 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3912);
    t19 = (t5 + 56U);
    t20 = *((char **)t19);
    memset(t6, 0, 8);
    t26 = (t4 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB23;

LAB22:    t27 = (t20 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t4) > *((unsigned int *)t20))
        goto LAB24;

LAB25:    t30 = (t6 + 4);
    t7 = *((unsigned int *)t30);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB27;

LAB28:
LAB29:    goto LAB20;

LAB23:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t6) = 1;
    goto LAB25;

LAB27:    xsi_set_current_line(75, ng0);

LAB30:    xsi_set_current_line(76, ng0);
    t31 = (t0 + 3752);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng3)));
    memset(t29, 0, 8);
    xsi_vlog_signed_add(t29, 32, t33, 32, t34, 32);
    t35 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t35, t29, 0, 0, 32, 0LL);
    goto LAB29;

LAB32:    *((unsigned int *)t6) = 1;
    goto LAB34;

LAB33:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(82, ng0);

LAB38:    xsi_set_current_line(83, ng0);
    t26 = (t0 + 2072U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng3)));
    memset(t29, 0, 8);
    t28 = (t27 + 4);
    t30 = (t26 + 4);
    t40 = *((unsigned int *)t27);
    t41 = *((unsigned int *)t26);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t28);
    t44 = *((unsigned int *)t30);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t28);
    t48 = *((unsigned int *)t30);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB42;

LAB39:    if (t49 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t29) = 1;

LAB42:    t32 = (t29 + 4);
    t52 = *((unsigned int *)t32);
    t53 = (~(t52));
    t54 = *((unsigned int *)t29);
    t55 = (t54 & t53);
    t56 = (t55 != 0);
    if (t56 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(93, ng0);

LAB49:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB45:    goto LAB37;

LAB41:    t31 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(83, ng0);

LAB46:    xsi_set_current_line(85, ng0);
    t33 = (t0 + 1912U);
    t34 = *((char **)t33);
    t33 = (t0 + 3272);
    t35 = (t0 + 3272);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = (t0 + 3272);
    t39 = (t38 + 64U);
    t59 = *((char **)t39);
    t60 = (t0 + 3432);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    xsi_vlog_generic_convert_array_indices(t57, t58, t37, t59, 2, 1, t62, 32, 1);
    t63 = (t57 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (!(t64));
    t66 = (t58 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (!(t67));
    t69 = (t65 && t68);
    if (t69 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t19 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t19, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB45;

LAB47:    t70 = *((unsigned int *)t57);
    t71 = *((unsigned int *)t58);
    t72 = (t70 - t71);
    t73 = (t72 + 1);
    xsi_vlogvar_wait_assign_value(t33, t34, 0, *((unsigned int *)t58), t73, 0LL);
    goto LAB48;

}


extern void work_m_00000000002963452185_2908162333_init()
{
	static char *pe[] = {(void *)Always_53_0};
	xsi_register_didat("work_m_00000000002963452185_2908162333", "isim/scytale_decryption_test_isim_beh.exe.sim/work/m_00000000002963452185_2908162333.didat");
	xsi_register_executes(pe);
}
