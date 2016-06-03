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
static const char *ng0 = "/home/james/code/FPGA-mips/exp8-r-instruction/opt.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {32U, 0U};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {34U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {36U, 0U};
static unsigned int ng7[] = {0U, 0U};
static unsigned int ng8[] = {37U, 0U};
static unsigned int ng9[] = {1U, 0U};
static unsigned int ng10[] = {38U, 0U};
static unsigned int ng11[] = {2U, 0U};
static unsigned int ng12[] = {39U, 0U};
static unsigned int ng13[] = {3U, 0U};
static unsigned int ng14[] = {43U, 0U};
static unsigned int ng15[] = {6U, 0U};
static unsigned int ng16[] = {7U, 0U};



static void Always_28_0(char *t0)
{
    char t1[8];
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    int t18;

LAB0:    xsi_set_current_line(28, ng0);

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t1, 0, 8);
    t2 = (t3 + 4);
    t4 = *((unsigned int *)t2);
    t5 = (~(t4));
    t6 = *((unsigned int *)t3);
    t7 = (t6 & t5);
    t8 = (t7 & 63U);
    if (t8 != 0)
        goto LAB6;

LAB4:    if (*((unsigned int *)t2) == 0)
        goto LAB3;

LAB5:    t9 = (t1 + 4);
    *((unsigned int *)t1) = 1;
    *((unsigned int *)t9) = 1;

LAB6:    t10 = (t1 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t1);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB7;

LAB8:
LAB9:    goto LAB9;

LAB3:    *((unsigned int *)t1) = 1;
    goto LAB6;

LAB7:    xsi_set_current_line(29, ng0);

LAB10:    xsi_set_current_line(30, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 1, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB11:    t2 = ((char*)((ng2)));
    t18 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t18 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t18 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t18 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t18 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t18 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng8)));
    t18 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t18 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng10)));
    t18 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t18 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng12)));
    t18 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t18 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng14)));
    t18 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t18 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng3)));
    t18 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t18 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB9;

LAB12:    xsi_set_current_line(33, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 3, 0LL);
    goto LAB28;

LAB14:    xsi_set_current_line(34, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 3, 0LL);
    goto LAB28;

LAB16:    xsi_set_current_line(35, ng0);
    t9 = ((char*)((ng7)));
    t10 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 3, 0LL);
    goto LAB28;

LAB18:    xsi_set_current_line(36, ng0);
    t9 = ((char*)((ng9)));
    t10 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 3, 0LL);
    goto LAB28;

LAB20:    xsi_set_current_line(37, ng0);
    t9 = ((char*)((ng11)));
    t10 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 3, 0LL);
    goto LAB28;

LAB22:    xsi_set_current_line(38, ng0);
    t9 = ((char*)((ng13)));
    t10 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 3, 0LL);
    goto LAB28;

LAB24:    xsi_set_current_line(39, ng0);
    t9 = ((char*)((ng15)));
    t10 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 3, 0LL);
    goto LAB28;

LAB26:    xsi_set_current_line(40, ng0);
    t9 = ((char*)((ng16)));
    t10 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 3, 0LL);
    goto LAB28;

LAB1:    return;
}


extern void work_m_03143476953079570354_0966459031_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_03143476953079570354_0966459031", "isim/cpu_test_isim_beh.exe.sim/work/m_03143476953079570354_0966459031.didat");
	xsi_register_executes(pe);
}
