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
static const char *ng0 = "C:/Users/jcala/Documents/Celt-Digital/refresco.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_2546418145_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_4259364603_0658132722_p_0(char *t0)
{
    char t14[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    unsigned char t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;

LAB0:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3648);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1672U);
    t8 = *((char **)t4);
    t4 = (t0 + 5864U);
    t9 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t8, t4, 100000);
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5864U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t4, t2, 1);
    t8 = (t14 + 12U);
    t18 = *((unsigned int *)t8);
    t26 = (1U * t18);
    t1 = (21U != t26);
    if (t1 == 1)
        goto LAB16;

LAB17:    t10 = (t0 + 3824);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 21U);
    xsi_driver_first_trans_fast(t10);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(51, ng0);
    t10 = (t0 + 1512U);
    t11 = *((char **)t10);
    t10 = (t0 + 5848U);
    t12 = (t0 + 5912);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 0;
    t16 = (t15 + 4U);
    *((int *)t16) = 1;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (1 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t19 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t11, t10, t12, t14);
    if (t19 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 5848U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t4, t2, 1);
    t8 = (t14 + 12U);
    t18 = *((unsigned int *)t8);
    t26 = (1U * t18);
    t1 = (2U != t26);
    if (t1 == 1)
        goto LAB14;

LAB15:    t10 = (t0 + 3760);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 2U);
    xsi_driver_first_trans_fast(t10);

LAB12:    xsi_set_current_line(56, ng0);
    t2 = xsi_get_transient_memory(21U);
    memset(t2, 0, 21U);
    t4 = t2;
    memset(t4, (unsigned char)2, 21U);
    t5 = (t0 + 3824);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 21U);
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

LAB11:    xsi_set_current_line(52, ng0);
    t16 = (t0 + 5914);
    t21 = (t0 + 3760);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t16, 2U);
    xsi_driver_first_trans_fast(t21);
    goto LAB12;

LAB14:    xsi_size_not_matching(2U, t26, 0);
    goto LAB15;

LAB16:    xsi_size_not_matching(21U, t26, 0);
    goto LAB17;

}

static void work_a_4259364603_0658132722_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(63, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3888);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 2U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3664);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4259364603_0658132722_p_2(char *t0)
{
    char t5[16];
    char t21[16];
    char t36[16];
    char t51[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t22;
    char *t23;
    int t24;
    unsigned char t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t37;
    char *t38;
    int t39;
    unsigned char t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t52;
    char *t53;
    int t54;
    unsigned char t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;

LAB0:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 5848U);
    t3 = (t0 + 5916);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (1 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:    t17 = (t0 + 1512U);
    t18 = *((char **)t17);
    t17 = (t0 + 5848U);
    t19 = (t0 + 5922);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 0;
    t23 = (t22 + 4U);
    *((int *)t23) = 1;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (1 - 0);
    t9 = (t24 * 1);
    t9 = (t9 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t9;
    t25 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t18, t17, t19, t21);
    if (t25 != 0)
        goto LAB5;

LAB6:    t32 = (t0 + 1512U);
    t33 = *((char **)t32);
    t32 = (t0 + 5848U);
    t34 = (t0 + 5928);
    t37 = (t36 + 0U);
    t38 = (t37 + 0U);
    *((int *)t38) = 0;
    t38 = (t37 + 4U);
    *((int *)t38) = 1;
    t38 = (t37 + 8U);
    *((int *)t38) = 1;
    t39 = (1 - 0);
    t9 = (t39 * 1);
    t9 = (t9 + 1);
    t38 = (t37 + 12U);
    *((unsigned int *)t38) = t9;
    t40 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t33, t32, t34, t36);
    if (t40 != 0)
        goto LAB7;

LAB8:    t47 = (t0 + 1512U);
    t48 = *((char **)t47);
    t47 = (t0 + 5848U);
    t49 = (t0 + 5934);
    t52 = (t51 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = 0;
    t53 = (t52 + 4U);
    *((int *)t53) = 1;
    t53 = (t52 + 8U);
    *((int *)t53) = 1;
    t54 = (1 - 0);
    t9 = (t54 * 1);
    t9 = (t9 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t9;
    t55 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t48, t47, t49, t51);
    if (t55 != 0)
        goto LAB9;

LAB10:
LAB2:    t62 = (t0 + 3680);
    *((int *)t62) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 5918);
    t12 = (t0 + 3952);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 4U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB2;

LAB5:    t23 = (t0 + 5924);
    t27 = (t0 + 3952);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t23, 4U);
    xsi_driver_first_trans_fast_port(t27);
    goto LAB2;

LAB7:    t38 = (t0 + 5930);
    t42 = (t0 + 3952);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memcpy(t46, t38, 4U);
    xsi_driver_first_trans_fast_port(t42);
    goto LAB2;

LAB9:    t53 = (t0 + 5936);
    t57 = (t0 + 3952);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memcpy(t61, t53, 4U);
    xsi_driver_first_trans_fast_port(t57);
    goto LAB2;

}


extern void work_a_4259364603_0658132722_init()
{
	static char *pe[] = {(void *)work_a_4259364603_0658132722_p_0,(void *)work_a_4259364603_0658132722_p_1,(void *)work_a_4259364603_0658132722_p_2};
	xsi_register_didat("work_a_4259364603_0658132722", "isim/testvisu_isim_beh.exe.sim/work/a_4259364603_0658132722.didat");
	xsi_register_executes(pe);
}
