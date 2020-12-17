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
static const char *ng0 = "D:/OneDrive - Universitatea Politehnica Bucuresti/ANUL III/SEMSTRUL I/AC/TEME/TEMA 2/tema2_task2_checker/build/bin/scytale_decryption.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {250U, 0U};



static void Always_52_0(char *t0)
{
    char t6[8];
    char t28[8];
    char t29[8];
    char t30[8];
    char t51[8];
    char t78[8];
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
    unsigned int t41;
    int t42;
    char *t43;
    unsigned int t44;
    int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    int t50;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;

LAB0:    t1 = (t0 + 5152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 5472);
    *((int *)t2) = 1;
    t3 = (t0 + 5184);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2392U);
    t3 = *((char **)t2);
    t2 = (t0 + 2232U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 16, t3, 8, t4, 8);
    t2 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t2, t6, 0, 0, 16, 0LL);
    xsi_set_current_line(59, ng0);
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
    t2 = (t0 + 2072U);
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
    t2 = ((char*)((ng3)));
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
        goto LAB35;

LAB32:    if (t16 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t6) = 1;

LAB35:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    memset(t28, 0, 8);
    t19 = (t6 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t19) != 0)
        goto LAB42;

LAB43:    t26 = (t28 + 4);
    t12 = *((unsigned int *)t28);
    t13 = *((unsigned int *)t26);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB44;

LAB45:    memcpy(t51, t28, 8);

LAB46:    t69 = (t51 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t51);
    t73 = (t72 & t71);
    t74 = (t73 != 0);
    if (t74 > 0)
        goto LAB54;

LAB55:
LAB56:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(60, ng0);

LAB13:    xsi_set_current_line(61, ng0);
    t26 = ((char*)((ng1)));
    t27 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 8, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB16:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(68, ng0);

LAB21:    xsi_set_current_line(69, ng0);
    t26 = ((char*)((ng1)));
    t27 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 32, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
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
        goto LAB23;

LAB22:    if (t16 != 0)
        goto LAB24;

LAB25:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB20;

LAB23:    *((unsigned int *)t6) = 1;
    goto LAB25;

LAB24:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(71, ng0);

LAB29:    xsi_set_current_line(72, ng0);
    t26 = (t0 + 1912U);
    t27 = *((char **)t26);
    memcpy(t28, t27, 8);
    t26 = (t0 + 3272);
    t31 = (t0 + 3272);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 3272);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = (t0 + 3432);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    xsi_vlog_generic_convert_array_indices(t29, t30, t33, t36, 2, 1, t39, 32, 1);
    t40 = (t29 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (!(t41));
    t43 = (t30 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (!(t44));
    t46 = (t42 && t45);
    if (t46 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t19 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t19, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t19 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t19, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB28;

LAB30:    t47 = *((unsigned int *)t29);
    t48 = *((unsigned int *)t30);
    t49 = (t47 - t48);
    t50 = (t49 + 1);
    xsi_vlogvar_wait_assign_value(t26, t28, 0, *((unsigned int *)t30), t50, 0LL);
    goto LAB31;

LAB34:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(82, ng0);

LAB39:    xsi_set_current_line(83, ng0);
    t26 = ((char*)((ng2)));
    t27 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 32, 0LL);
    goto LAB38;

LAB40:    *((unsigned int *)t28) = 1;
    goto LAB43;

LAB42:    t20 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB43;

LAB44:    t27 = (t0 + 3752);
    t31 = (t27 + 56U);
    t32 = *((char **)t31);
    t33 = (t0 + 4072);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t29, 0, 8);
    xsi_vlog_signed_less(t29, 32, t32, 32, t35, 32);
    memset(t30, 0, 8);
    t36 = (t29 + 4);
    t15 = *((unsigned int *)t36);
    t16 = (~(t15));
    t17 = *((unsigned int *)t29);
    t18 = (t17 & t16);
    t21 = (t18 & 1U);
    if (t21 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t36) != 0)
        goto LAB49;

LAB50:    t22 = *((unsigned int *)t28);
    t23 = *((unsigned int *)t30);
    t24 = (t22 & t23);
    *((unsigned int *)t51) = t24;
    t38 = (t28 + 4);
    t39 = (t30 + 4);
    t40 = (t51 + 4);
    t25 = *((unsigned int *)t38);
    t41 = *((unsigned int *)t39);
    t44 = (t25 | t41);
    *((unsigned int *)t40) = t44;
    t47 = *((unsigned int *)t40);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB46;

LAB47:    *((unsigned int *)t30) = 1;
    goto LAB50;

LAB49:    t37 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB50;

LAB51:    t52 = *((unsigned int *)t51);
    t53 = *((unsigned int *)t40);
    *((unsigned int *)t51) = (t52 | t53);
    t43 = (t28 + 4);
    t54 = (t30 + 4);
    t55 = *((unsigned int *)t28);
    t56 = (~(t55));
    t57 = *((unsigned int *)t43);
    t58 = (~(t57));
    t59 = *((unsigned int *)t30);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t42 = (t56 & t58);
    t45 = (t60 & t62);
    t63 = (~(t42));
    t64 = (~(t45));
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t66 & t64);
    t67 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t67 & t63);
    t68 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t68 & t64);
    goto LAB53;

LAB54:    xsi_set_current_line(86, ng0);

LAB57:    xsi_set_current_line(87, ng0);
    t75 = (t0 + 3272);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    t79 = (t0 + 3272);
    t80 = (t79 + 72U);
    t81 = *((char **)t80);
    t82 = (t0 + 3272);
    t83 = (t82 + 64U);
    t84 = *((char **)t83);
    t85 = (t0 + 3752);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    xsi_vlog_generic_get_array_select_value(t78, 16, t77, t81, t84, 2, 1, t87, 32, 1);
    t88 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t88, t78, 0, 0, 8, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2232U);
    t19 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t19, 8);
    t5 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4232);
    t19 = (t5 + 56U);
    t20 = *((char **)t19);
    memset(t6, 0, 8);
    t26 = (t4 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB59;

LAB58:    t27 = (t20 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB59;

LAB62:    if (*((unsigned int *)t4) < *((unsigned int *)t20))
        goto LAB61;

LAB60:    *((unsigned int *)t6) = 1;

LAB61:    t32 = (t6 + 4);
    t7 = *((unsigned int *)t32);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB63;

LAB64:
LAB65:    goto LAB56;

LAB59:    t31 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB61;

LAB63:    xsi_set_current_line(91, ng0);

LAB66:    xsi_set_current_line(92, ng0);
    t33 = (t0 + 3592);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng2)));
    memset(t28, 0, 8);
    xsi_vlog_signed_add(t28, 32, t35, 32, t36, 32);
    t37 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t37, t28, 0, 0, 32, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    goto LAB65;

}


extern void uut_m_00000000000246204008_2908162333_init()
{
	static char *pe[] = {(void *)Always_52_0};
	xsi_register_didat("uut_m_00000000000246204008_2908162333", "isim/tester.exe.sim/uut/m_00000000000246204008_2908162333.didat");
	xsi_register_executes(pe);
}
