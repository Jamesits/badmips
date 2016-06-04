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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/james/code/FPGA-mips/exp8-r-instruction/ALU.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};



static void Always_32_0(char *t0)
{
    char t12[8];
    char t39[8];
    char t46[16];
    char t47[8];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t48;
    char *t49;

LAB0:    xsi_set_current_line(32, ng0);

LAB2:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1528U);
    t2 = *((char **)t1);
    t1 = (t2 + 4);
    t3 = *((unsigned int *)t1);
    t4 = (~(t3));
    t5 = *((unsigned int *)t2);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB3;

LAB4:    xsi_set_current_line(37, ng0);

LAB7:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1368U);
    t2 = *((char **)t1);

LAB8:    t1 = ((char*)((ng1)));
    t10 = xsi_vlog_unsigned_case_compare(t2, 3, t1, 32);
    if (t10 == 1)
        goto LAB9;

LAB10:    t1 = ((char*)((ng2)));
    t10 = xsi_vlog_unsigned_case_compare(t2, 3, t1, 32);
    if (t10 == 1)
        goto LAB11;

LAB12:    t1 = ((char*)((ng3)));
    t10 = xsi_vlog_unsigned_case_compare(t2, 3, t1, 32);
    if (t10 == 1)
        goto LAB13;

LAB14:    t1 = ((char*)((ng4)));
    t10 = xsi_vlog_unsigned_case_compare(t2, 3, t1, 32);
    if (t10 == 1)
        goto LAB15;

LAB16:    t1 = ((char*)((ng5)));
    t10 = xsi_vlog_unsigned_case_compare(t2, 3, t1, 32);
    if (t10 == 1)
        goto LAB17;

LAB18:    t1 = ((char*)((ng6)));
    t10 = xsi_vlog_unsigned_case_compare(t2, 3, t1, 32);
    if (t10 == 1)
        goto LAB19;

LAB20:    t1 = ((char*)((ng7)));
    t10 = xsi_vlog_unsigned_case_compare(t2, 3, t1, 32);
    if (t10 == 1)
        goto LAB21;

LAB22:    t1 = ((char*)((ng8)));
    t10 = xsi_vlog_unsigned_case_compare(t2, 3, t1, 32);
    if (t10 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(56, ng0);

LAB55:    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng1)));
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t1, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng1)));
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t1, 0, 0, 1);

LAB27:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1928);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng1)));
    memset(t47, 0, 8);
    t13 = (t9 + 4);
    t14 = (t11 + 4);
    t3 = *((unsigned int *)t9);
    t4 = *((unsigned int *)t11);
    t5 = (t3 ^ t4);
    t6 = *((unsigned int *)t13);
    t7 = *((unsigned int *)t14);
    t15 = (t6 ^ t7);
    t16 = (t5 | t15);
    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t22 = (~(t19));
    t23 = (t16 & t22);
    if (t23 != 0)
        goto LAB59;

LAB56:    if (t19 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t47) = 1;

LAB59:    memset(t39, 0, 8);
    t21 = (t47 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (~(t24));
    t26 = *((unsigned int *)t47);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t21) != 0)
        goto LAB62;

LAB63:    t40 = (t39 + 4);
    t29 = *((unsigned int *)t39);
    t32 = *((unsigned int *)t40);
    t33 = (t29 || t32);
    if (t33 > 0)
        goto LAB64;

LAB65:    t34 = *((unsigned int *)t39);
    t35 = (~(t34));
    t36 = *((unsigned int *)t40);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t40) > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t39) > 0)
        goto LAB70;

LAB71:    memcpy(t12, t48, 8);

LAB72:    t49 = (t0 + 2088);
    xsi_vlogvar_assign_value(t49, t12, 0, 0, 1);

LAB5:    goto LAB5;

LAB3:    xsi_set_current_line(33, ng0);

LAB6:    xsi_set_current_line(34, ng0);
    t8 = ((char*)((ng1)));
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    goto LAB5;

LAB9:    xsi_set_current_line(40, ng0);

LAB28:    xsi_set_current_line(40, ng0);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = (t0 + 1208U);
    t11 = *((char **)t8);
    t3 = *((unsigned int *)t9);
    t4 = *((unsigned int *)t11);
    t5 = (t3 & t4);
    *((unsigned int *)t12) = t5;
    t8 = (t9 + 4);
    t13 = (t11 + 4);
    t14 = (t12 + 4);
    t6 = *((unsigned int *)t8);
    t7 = *((unsigned int *)t13);
    t15 = (t6 | t7);
    *((unsigned int *)t14) = t15;
    t16 = *((unsigned int *)t14);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB29;

LAB30:
LAB31:    t38 = (t0 + 1928);
    xsi_vlogvar_assign_value(t38, t12, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t1, 0, 0, 1);
    goto LAB27;

LAB11:    xsi_set_current_line(42, ng0);

LAB32:    xsi_set_current_line(42, ng0);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = (t0 + 1208U);
    t11 = *((char **)t8);
    t3 = *((unsigned int *)t9);
    t4 = *((unsigned int *)t11);
    t5 = (t3 | t4);
    *((unsigned int *)t12) = t5;
    t8 = (t9 + 4);
    t13 = (t11 + 4);
    t14 = (t12 + 4);
    t6 = *((unsigned int *)t8);
    t7 = *((unsigned int *)t13);
    t15 = (t6 | t7);
    *((unsigned int *)t14) = t15;
    t16 = *((unsigned int *)t14);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB33;

LAB34:
LAB35:    t38 = (t0 + 1928);
    xsi_vlogvar_assign_value(t38, t12, 0, 0, 32);
    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t1, 0, 0, 1);
    goto LAB27;

LAB13:    xsi_set_current_line(44, ng0);

LAB36:    xsi_set_current_line(44, ng0);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = (t0 + 1208U);
    t11 = *((char **)t8);
    t3 = *((unsigned int *)t9);
    t4 = *((unsigned int *)t11);
    t5 = (t3 ^ t4);
    *((unsigned int *)t12) = t5;
    t8 = (t9 + 4);
    t13 = (t11 + 4);
    t14 = (t12 + 4);
    t6 = *((unsigned int *)t8);
    t7 = *((unsigned int *)t13);
    t15 = (t6 | t7);
    *((unsigned int *)t14) = t15;
    t16 = *((unsigned int *)t14);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB37;

LAB38:
LAB39:    t20 = (t0 + 1928);
    xsi_vlogvar_assign_value(t20, t12, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t1, 0, 0, 1);
    goto LAB27;

LAB15:    xsi_set_current_line(46, ng0);

LAB40:    xsi_set_current_line(46, ng0);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = (t0 + 1208U);
    t11 = *((char **)t8);
    t3 = *((unsigned int *)t9);
    t4 = *((unsigned int *)t11);
    t5 = (t3 | t4);
    *((unsigned int *)t39) = t5;
    t8 = (t9 + 4);
    t13 = (t11 + 4);
    t14 = (t39 + 4);
    t6 = *((unsigned int *)t8);
    t7 = *((unsigned int *)t13);
    t15 = (t6 | t7);
    *((unsigned int *)t14) = t15;
    t16 = *((unsigned int *)t14);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB41;

LAB42:
LAB43:    memset(t12, 0, 8);
    t38 = (t12 + 4);
    t40 = (t39 + 4);
    t34 = *((unsigned int *)t39);
    t35 = (~(t34));
    *((unsigned int *)t12) = t35;
    *((unsigned int *)t38) = 0;
    if (*((unsigned int *)t40) != 0)
        goto LAB45;

LAB44:    t43 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t43 & 4294967295U);
    t44 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t44 & 4294967295U);
    t45 = (t0 + 1928);
    xsi_vlogvar_assign_value(t45, t12, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t1, 0, 0, 1);
    goto LAB27;

LAB17:    xsi_set_current_line(48, ng0);

LAB46:    xsi_set_current_line(48, ng0);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = (t0 + 1208U);
    t11 = *((char **)t8);
    xsi_vlog_unsigned_add(t46, 33, t9, 32, t11, 32);
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t46, 0, 0, 32);
    t13 = (t0 + 2248);
    xsi_vlogvar_assign_value(t13, t46, 32, 0, 1);
    goto LAB27;

LAB19:    xsi_set_current_line(50, ng0);

LAB47:    xsi_set_current_line(50, ng0);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = (t0 + 1208U);
    t11 = *((char **)t8);
    xsi_vlog_unsigned_minus(t46, 33, t9, 32, t11, 32);
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t46, 0, 0, 32);
    t13 = (t0 + 2248);
    xsi_vlogvar_assign_value(t13, t46, 32, 0, 1);
    goto LAB27;

LAB21:    xsi_set_current_line(52, ng0);

LAB48:    xsi_set_current_line(52, ng0);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = (t0 + 1208U);
    t11 = *((char **)t8);
    memset(t12, 0, 8);
    t8 = (t9 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB50;

LAB49:    t13 = (t11 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB50;

LAB53:    if (*((unsigned int *)t9) < *((unsigned int *)t11))
        goto LAB51;

LAB52:    t20 = (t0 + 1928);
    xsi_vlogvar_assign_value(t20, t12, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng1)));
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t1, 0, 0, 1);
    goto LAB27;

LAB23:    xsi_set_current_line(54, ng0);

LAB54:    xsi_set_current_line(54, ng0);
    t8 = (t0 + 1208U);
    t9 = *((char **)t8);
    t8 = (t0 + 1048U);
    t11 = *((char **)t8);
    xsi_vlog_unsigned_lshift(t46, 33, t9, 32, t11, 32);
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t46, 0, 0, 32);
    t13 = (t0 + 2248);
    xsi_vlogvar_assign_value(t13, t46, 32, 0, 1);
    goto LAB27;

LAB29:    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t18 | t19);
    t20 = (t9 + 4);
    t21 = (t11 + 4);
    t22 = *((unsigned int *)t9);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t34 & t32);
    t35 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t35 & t33);
    t36 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t36 & t32);
    t37 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t37 & t33);
    goto LAB31;

LAB33:    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t18 | t19);
    t20 = (t9 + 4);
    t21 = (t11 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t9);
    t30 = (t24 & t23);
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t31 = (t27 & t26);
    t28 = (~(t30));
    t29 = (~(t31));
    t32 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t32 & t28);
    t33 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t33 & t29);
    goto LAB35;

LAB37:    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t18 | t19);
    goto LAB39;

LAB41:    t18 = *((unsigned int *)t39);
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t39) = (t18 | t19);
    t20 = (t9 + 4);
    t21 = (t11 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t9);
    t30 = (t24 & t23);
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t31 = (t27 & t26);
    t28 = (~(t30));
    t29 = (~(t31));
    t32 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t32 & t28);
    t33 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t33 & t29);
    goto LAB43;

LAB45:    t36 = *((unsigned int *)t12);
    t37 = *((unsigned int *)t40);
    *((unsigned int *)t12) = (t36 | t37);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t40);
    *((unsigned int *)t38) = (t41 | t42);
    goto LAB44;

LAB50:    t14 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB52;

LAB51:    *((unsigned int *)t12) = 1;
    goto LAB52;

LAB58:    t20 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t39) = 1;
    goto LAB63;

LAB62:    t38 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB63;

LAB64:    t45 = ((char*)((ng2)));
    goto LAB65;

LAB66:    t48 = ((char*)((ng1)));
    goto LAB67;

LAB68:    xsi_vlog_unsigned_bit_combine(t12, 32, t45, 32, t48, 32);
    goto LAB72;

LAB70:    memcpy(t12, t45, 8);
    goto LAB72;

LAB1:    return;
}


extern void work_m_07945290671537855694_0886308060_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_07945290671537855694_0886308060", "isim/cpu_test_isim_beh.exe.sim/work/m_07945290671537855694_0886308060.didat");
	xsi_register_executes(pe);
}
