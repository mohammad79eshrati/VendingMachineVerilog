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
static const char *ng0 = "D:/verilog/VendingMachine/Vending_Machine.v";
static const char *ng1 = "Data.txt";
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};



static void Cont_39_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 4720);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 3U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 1);
    t16 = (t0 + 4624);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Initial_42_1(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(42, ng0);

LAB2:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2888);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_62_2(char *t0)
{
    char t7[8];
    char t16[8];
    char t25[8];
    char *t1;
    char *t2;
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
    char *t15;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 4640);
    *((int *)t2) = 1;
    t3 = (t0 + 4336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2888);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2888);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1688U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 8, t6, t10, t13, 2, 1, t15, 2, 2);
    memset(t16, 0, 8);
    t14 = (t16 + 4);
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 6);
    *((unsigned int *)t16) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 6);
    *((unsigned int *)t14) = t21;
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t22 & 3U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 3U);
    t24 = (t0 + 2408);
    xsi_vlogvar_assign_value(t24, t16, 0, 0, 2);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 2888);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1688U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t7, 8, t4, t8, t11, 2, 1, t13, 2, 2);
    memset(t16, 0, 8);
    t12 = (t16 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 3);
    *((unsigned int *)t16) = t19;
    t20 = *((unsigned int *)t14);
    t21 = (t20 >> 3);
    *((unsigned int *)t12) = t21;
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t22 & 7U);
    t23 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t23 & 7U);
    t15 = (t0 + 2568);
    xsi_vlogvar_assign_value(t15, t16, 0, 0, 3);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 2888);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1688U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t7, 8, t4, t8, t11, 2, 1, t13, 2, 2);
    memset(t16, 0, 8);
    t12 = (t16 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 0);
    *((unsigned int *)t16) = t19;
    t20 = *((unsigned int *)t14);
    t21 = (t20 >> 0);
    *((unsigned int *)t12) = t21;
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t22 & 7U);
    t23 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t23 & 7U);
    t15 = (t0 + 2728);
    xsi_vlogvar_assign_value(t15, t16, 0, 0, 3);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t6 = (t3 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB7;

LAB6:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t3) > *((unsigned int *)t5))
        goto LAB9;

LAB8:    *((unsigned int *)t7) = 1;

LAB9:    t10 = (t7 + 4);
    t18 = *((unsigned int *)t10);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(92, ng0);

LAB27:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB13:    goto LAB2;

LAB7:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(71, ng0);

LAB14:    xsi_set_current_line(73, ng0);
    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    t11 = (t0 + 1368U);
    t13 = *((char **)t11);
    t11 = (t0 + 2728);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_multiply(t16, 4, t13, 3, t15, 3);
    memset(t25, 0, 8);
    t17 = (t12 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB16;

LAB15:    t24 = (t16 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t12) < *((unsigned int *)t16))
        goto LAB18;

LAB17:    *((unsigned int *)t25) = 1;

LAB18:    t27 = (t25 + 4);
    t23 = *((unsigned int *)t27);
    t28 = (~(t23));
    t29 = *((unsigned int *)t25);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(83, ng0);

LAB26:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB22:    goto LAB13;

LAB16:    t26 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(73, ng0);

LAB23:    xsi_set_current_line(75, ng0);
    t32 = ((char*)((ng2)));
    t33 = (t0 + 2088);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2728);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 4, t4, 3, t6, 3);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 4, t3, 4, t7, 4);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t16, 0, 0, 4);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 3, t4, 3, t6, 3);
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 3);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t0 + 2408);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    xsi_vlogtype_concat(t7, 8, 8, 3U, t11, 2, t8, 3, t4, 3);
    t12 = (t0 + 2888);
    t13 = (t0 + 2888);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t17 = (t0 + 2888);
    t24 = (t17 + 64U);
    t26 = *((char **)t24);
    t27 = (t0 + 1688U);
    t32 = *((char **)t27);
    xsi_vlog_generic_convert_array_indices(t16, t25, t15, t26, 2, 1, t32, 2, 2);
    t27 = (t16 + 4);
    t18 = *((unsigned int *)t27);
    t34 = (!(t18));
    t33 = (t25 + 4);
    t19 = *((unsigned int *)t33);
    t35 = (!(t19));
    t36 = (t34 && t35);
    if (t36 == 1)
        goto LAB24;

LAB25:    goto LAB22;

LAB24:    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t25);
    t37 = (t20 - t21);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t12, t7, 0, *((unsigned int *)t25), t38);
    goto LAB25;

}


extern void work_m_00000000003534436443_0951270303_init()
{
	static char *pe[] = {(void *)Cont_39_0,(void *)Initial_42_1,(void *)Always_62_2};
	xsi_register_didat("work_m_00000000003534436443_0951270303", "isim/Vmtest_isim_beh.exe.sim/work/m_00000000003534436443_0951270303.didat");
	xsi_register_executes(pe);
}
