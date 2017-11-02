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
static const char *ng0 = "C:/Users/Isabel/Desktop/Isabel/uni/tercero/CELT/digital/reg_desp40.vhd";



static void work_a_3899626844_3296720062_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3240);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1512U);
    t8 = *((char **)t4);
    t9 = (39 - 38);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t4 = (t8 + t11);
    t12 = (t0 + 3336);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 40U);
    xsi_driver_first_trans_delta(t12, 0U, 40U, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 3336);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_delta(t2, 39U, 1, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void work_a_3899626844_3296720062_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(51, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3400);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 40U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3256);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3899626844_3296720062_init()
{
	static char *pe[] = {(void *)work_a_3899626844_3296720062_p_0,(void *)work_a_3899626844_3296720062_p_1};
	xsi_register_didat("work_a_3899626844_3296720062", "isim/test_reg_desp40_isim_beh.exe.sim/work/a_3899626844_3296720062.didat");
	xsi_register_executes(pe);
}
