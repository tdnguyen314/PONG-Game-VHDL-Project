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
static const char *ng0 = "//HWNC2-STDHOME2/STDHOME2/USERS/1705407/HET6004/LAB2/Pong_2/Wall_Display.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;
extern char *WORK_P_4233760377;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_2546382208_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_2546454082_3965413181(char *, char *, char *, int );


static void work_a_1692231499_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    int t10;
    int t11;
    int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    int t16;
    int t17;
    int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 568U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2328);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 2380);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 868U);
    t5 = *((char **)t2);
    t2 = (t0 + 4564U);
    t6 = ((WORK_P_4233760377) + 672U);
    t7 = *((char **)t6);
    t10 = *((int *)t7);
    t11 = (t10 / 2);
    t12 = (t11 - 1);
    t13 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t5, t2, t12);
    if (t13 == 1)
        goto LAB13;

LAB14:    t9 = (unsigned char)0;

LAB15:    if (t9 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 2380);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(33, ng0);
    t25 = (t0 + 2380);
    t29 = (t25 + 32U);
    t30 = *((char **)t29);
    t31 = (t30 + 40U);
    t32 = *((char **)t31);
    *((unsigned char *)t32) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t25);
    goto LAB8;

LAB10:    t14 = (t0 + 776U);
    t21 = *((char **)t14);
    t14 = (t0 + 4548U);
    t22 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t21, t14, 0);
    if (t22 == 1)
        goto LAB16;

LAB17:    t20 = (unsigned char)0;

LAB18:    t4 = t20;
    goto LAB12;

LAB13:    t6 = (t0 + 868U);
    t8 = *((char **)t6);
    t6 = (t0 + 4564U);
    t14 = ((WORK_P_4233760377) + 672U);
    t15 = *((char **)t14);
    t16 = *((int *)t15);
    t17 = (t16 / 2);
    t18 = (t17 + 2);
    t19 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t8, t6, t18);
    t9 = t19;
    goto LAB15;

LAB16:    t23 = (t0 + 776U);
    t24 = *((char **)t23);
    t23 = (t0 + 4548U);
    t25 = ((WORK_P_4233760377) + 1148U);
    t26 = *((char **)t25);
    t27 = *((int *)t26);
    t28 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t24, t23, t27);
    t20 = t28;
    goto LAB18;

}

static void work_a_1692231499_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 568U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2336);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2416);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2452);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2488);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2524);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 868U);
    t5 = *((char **)t2);
    t2 = (t0 + 4564U);
    t6 = ((WORK_P_4233760377) + 672U);
    t7 = *((char **)t6);
    t9 = *((int *)t7);
    t6 = ((WORK_P_4233760377) + 1624U);
    t8 = *((char **)t6);
    t10 = *((int *)t8);
    t11 = (t9 - t10);
    t12 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t5, t2, t11);
    if (t12 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2452);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB8:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t1 = (t0 + 4564U);
    t4 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t2, t1, 0);
    if (t4 == 1)
        goto LAB16;

LAB17:    t3 = (unsigned char)0;

LAB18:    if (t3 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2416);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB14:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 4548U);
    t4 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t2, t1, 0);
    if (t4 == 1)
        goto LAB22;

LAB23:    t3 = (unsigned char)0;

LAB24:    if (t3 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2488);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB20:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 4548U);
    t5 = ((WORK_P_4233760377) + 1148U);
    t6 = *((char **)t5);
    t9 = *((int *)t6);
    t5 = ((WORK_P_4233760377) + 1624U);
    t7 = *((char **)t5);
    t10 = *((int *)t7);
    t11 = (t9 - t10);
    t4 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t2, t1, t11);
    if (t4 == 1)
        goto LAB28;

LAB29:    t3 = (unsigned char)0;

LAB30:    if (t3 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2524);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB26:    goto LAB3;

LAB7:    xsi_set_current_line(54, ng0);
    t14 = (t0 + 2452);
    t19 = (t14 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t14);
    goto LAB8;

LAB10:    t6 = (t0 + 868U);
    t13 = *((char **)t6);
    t6 = (t0 + 4564U);
    t14 = ((WORK_P_4233760377) + 672U);
    t15 = *((char **)t14);
    t16 = *((int *)t15);
    t17 = (t16 + 1);
    t18 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t13, t6, t17);
    t4 = t18;
    goto LAB12;

LAB13:    xsi_set_current_line(61, ng0);
    t7 = (t0 + 2416);
    t13 = (t7 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t19 = *((char **)t15);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB14;

LAB16:    t5 = (t0 + 868U);
    t6 = *((char **)t5);
    t5 = (t0 + 4564U);
    t7 = ((WORK_P_4233760377) + 1624U);
    t8 = *((char **)t7);
    t9 = *((int *)t8);
    t10 = (t9 + 1);
    t12 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t6, t5, t10);
    t3 = t12;
    goto LAB18;

LAB19:    xsi_set_current_line(68, ng0);
    t7 = (t0 + 2488);
    t13 = (t7 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t19 = *((char **)t15);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB20;

LAB22:    t5 = (t0 + 776U);
    t6 = *((char **)t5);
    t5 = (t0 + 4548U);
    t7 = ((WORK_P_4233760377) + 1624U);
    t8 = *((char **)t7);
    t9 = *((int *)t8);
    t10 = (t9 + 1);
    t12 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t6, t5, t10);
    t3 = t12;
    goto LAB24;

LAB25:    xsi_set_current_line(75, ng0);
    t13 = (t0 + 2524);
    t15 = (t13 + 32U);
    t19 = *((char **)t15);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t13);
    goto LAB26;

LAB28:    t5 = (t0 + 776U);
    t8 = *((char **)t5);
    t5 = (t0 + 4548U);
    t13 = ((WORK_P_4233760377) + 1148U);
    t14 = *((char **)t13);
    t16 = *((int *)t14);
    t17 = (t16 + 1);
    t12 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t8, t5, t17);
    t3 = t12;
    goto LAB30;

}


extern void work_a_1692231499_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1692231499_3212880686_p_0,(void *)work_a_1692231499_3212880686_p_1};
	xsi_register_didat("work_a_1692231499_3212880686", "isim/Testbench_Pong_isim_beh.exe.sim/work/a_1692231499_3212880686.didat");
	xsi_register_executes(pe);
}
