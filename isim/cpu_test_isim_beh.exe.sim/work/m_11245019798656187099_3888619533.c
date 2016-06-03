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
static const char *ng0 = "/home/james/code/FPGA-mips/exp8-r-instruction/experiment.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};



static void Always_40_0(char *t0)
{
    char t3[8];
    char t17[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    int t28;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    xsi_set_current_line(40, ng0);

LAB2:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1368U);
    t2 = *((char **)t1);
    memset(t3, 0, 8);
    t1 = (t3 + 4);
    t4 = (t2 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (t5 >> 0);
    t7 = (t6 & 1);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t1) = t10;
    t11 = (t3 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB3;

LAB4:    xsi_set_current_line(48, ng0);

LAB17:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1848U);
    t2 = *((char **)t1);
    t1 = (t0 + 2248);
    t4 = (t0 + 2248);
    t11 = (t4 + 72U);
    t18 = *((char **)t11);
    t19 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t3, t18, 2, t19, 32, 1);
    t20 = (t3 + 4);
    t5 = *((unsigned int *)t20);
    t28 = (!(t5));
    if (t28 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1688U);
    t2 = *((char **)t1);
    t1 = (t0 + 2248);
    t4 = (t0 + 2248);
    t11 = (t4 + 72U);
    t18 = *((char **)t11);
    t19 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t3, t18, 2, t19, 32, 1);
    t20 = (t3 + 4);
    t5 = *((unsigned int *)t20);
    t28 = (!(t5));
    if (t28 == 1)
        goto LAB20;

LAB21:
LAB5:    goto LAB5;

LAB3:    xsi_set_current_line(41, ng0);

LAB6:    xsi_set_current_line(42, ng0);
    t18 = (t0 + 1368U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 1);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 1);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 3U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 3U);

LAB7:    t27 = ((char*)((ng1)));
    t28 = xsi_vlog_unsigned_case_compare(t17, 32, t27, 32);
    if (t28 == 1)
        goto LAB8;

LAB9:    t1 = ((char*)((ng2)));
    t28 = xsi_vlog_unsigned_case_compare(t17, 32, t1, 32);
    if (t28 == 1)
        goto LAB10;

LAB11:    t1 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t17, 32, t1, 32);
    if (t28 == 1)
        goto LAB12;

LAB13:    t1 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t17, 32, t1, 32);
    if (t28 == 1)
        goto LAB14;

LAB15:
LAB16:    goto LAB5;

LAB8:    xsi_set_current_line(43, ng0);
    t30 = (t0 + 1528U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t30 = (t29 + 4);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (t33 >> 0);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 0);
    *((unsigned int *)t30) = t36;
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 255U);
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t39, t29, 0, 0, 8, 0LL);
    goto LAB16;

LAB10:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t11 = (t4 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (t5 >> 8);
    *((unsigned int *)t3) = t6;
    t7 = *((unsigned int *)t11);
    t8 = (t7 >> 8);
    *((unsigned int *)t2) = t8;
    t9 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t9 & 255U);
    t10 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t10 & 255U);
    t18 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t18, t3, 0, 0, 8, 0LL);
    goto LAB16;

LAB12:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t11 = (t4 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (t5 >> 16);
    *((unsigned int *)t3) = t6;
    t7 = *((unsigned int *)t11);
    t8 = (t7 >> 16);
    *((unsigned int *)t2) = t8;
    t9 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t9 & 255U);
    t10 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t10 & 255U);
    t18 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t18, t3, 0, 0, 8, 0LL);
    goto LAB16;

LAB14:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t11 = (t4 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (t5 >> 24);
    *((unsigned int *)t3) = t6;
    t7 = *((unsigned int *)t11);
    t8 = (t7 >> 24);
    *((unsigned int *)t2) = t8;
    t9 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t9 & 255U);
    t10 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t10 & 255U);
    t18 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t18, t3, 0, 0, 8, 0LL);
    goto LAB16;

LAB18:    xsi_vlogvar_wait_assign_value(t1, t2, 0, *((unsigned int *)t3), 1, 0LL);
    goto LAB19;

LAB20:    xsi_vlogvar_wait_assign_value(t1, t2, 0, *((unsigned int *)t3), 1, 0LL);
    goto LAB21;

LAB1:    return;
}


extern void work_m_11245019798656187099_3888619533_init()
{
	static char *pe[] = {(void *)Always_40_0};
	xsi_register_didat("work_m_11245019798656187099_3888619533", "isim/cpu_test_isim_beh.exe.sim/work/m_11245019798656187099_3888619533.didat");
	xsi_register_executes(pe);
}
