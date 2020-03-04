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

/* This file is designed for use with ISim build 0xcb73ee62 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//HWNC2-STDHOME2/STDHOME2/USERS/1705407/HET6004/LAB2/Pong_2/Court_Display.vhd";
extern char *WORK_P_4233760377;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1442745145_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 660U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2696);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(31, ng0);
    t1 = ((WORK_P_4233760377) + 2508U);
    t5 = *((char **)t1);
    t1 = (t0 + 2748);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1328U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t10 = (t4 == (unsigned char)3);
    if (t10 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t12 = *((unsigned char *)t2);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB18;

LAB19:    t1 = (t0 + 1052U);
    t5 = *((char **)t1);
    t14 = *((unsigned char *)t5);
    t15 = (t14 == (unsigned char)3);
    t10 = t15;

LAB20:    if (t10 == 1)
        goto LAB15;

LAB16:    t1 = (t0 + 1144U);
    t6 = *((char **)t1);
    t16 = *((unsigned char *)t6);
    t17 = (t16 == (unsigned char)3);
    t4 = t17;

LAB17:    if (t4 == 1)
        goto LAB12;

LAB13:    t1 = (t0 + 1236U);
    t7 = *((char **)t1);
    t18 = *((unsigned char *)t7);
    t19 = (t18 == (unsigned char)3);
    t3 = t19;

LAB14:    if (t3 != 0)
        goto LAB10;

LAB11:    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB21;

LAB22:    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t10 = (t4 == (unsigned char)3);
    if (t10 == 1)
        goto LAB25;

LAB26:    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    t3 = t13;

LAB27:    if (t3 != 0)
        goto LAB23;

LAB24:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB28;

LAB29:    xsi_set_current_line(44, ng0);
    t1 = ((WORK_P_4233760377) + 2848U);
    t2 = *((char **)t1);
    t1 = (t0 + 2748);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t1);

LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(34, ng0);
    t2 = ((WORK_P_4233760377) + 2508U);
    t6 = *((char **)t2);
    t2 = (t0 + 2748);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t6, 3U);
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB10:    xsi_set_current_line(36, ng0);
    t1 = ((WORK_P_4233760377) + 2576U);
    t8 = *((char **)t1);
    t1 = (t0 + 2748);
    t9 = (t1 + 32U);
    t11 = *((char **)t9);
    t20 = (t11 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB12:    t3 = (unsigned char)1;
    goto LAB14;

LAB15:    t4 = (unsigned char)1;
    goto LAB17;

LAB18:    t10 = (unsigned char)1;
    goto LAB20;

LAB21:    xsi_set_current_line(38, ng0);
    t1 = ((WORK_P_4233760377) + 2780U);
    t5 = *((char **)t1);
    t1 = (t0 + 2748);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB23:    xsi_set_current_line(40, ng0);
    t1 = ((WORK_P_4233760377) + 2644U);
    t6 = *((char **)t1);
    t1 = (t0 + 2748);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t6, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB25:    t3 = (unsigned char)1;
    goto LAB27;

LAB28:    xsi_set_current_line(42, ng0);
    t1 = ((WORK_P_4233760377) + 2712U);
    t5 = *((char **)t1);
    t1 = (t0 + 2748);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

}

static void work_a_1442745145_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t1 = (t0 + 2784);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 3U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 2704);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1442745145_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1442745145_3212880686_p_0,(void *)work_a_1442745145_3212880686_p_1};
	xsi_register_didat("work_a_1442745145_3212880686", "isim/Testbench_Pong_isim_beh.exe.sim/work/a_1442745145_3212880686.didat");
	xsi_register_executes(pe);
}
