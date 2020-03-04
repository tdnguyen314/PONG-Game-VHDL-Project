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
static const char *ng0 = "//HWNC2-STDHOME2/STDHOME2/USERS/1705407/HET6004/LAB2/Pong_2/VGA_Timing.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;
extern char *WORK_P_4233760377;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_2546382208_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_2546454082_3965413181(char *, char *, char *, int );


static void work_a_3502108328_3212880686_p_0(char *t0)
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
    unsigned char t12;
    char *t13;
    char *t14;
    int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(30, ng0);
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
LAB3:    t1 = (t0 + 2996);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 3080);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 868U);
    t5 = *((char **)t2);
    t2 = (t0 + 5668U);
    t6 = ((WORK_P_4233760377) + 672U);
    t7 = *((char **)t6);
    t10 = *((int *)t7);
    t11 = (t10 - 1);
    t12 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t5, t2, t11);
    if (t12 == 1)
        goto LAB13;

LAB14:    t9 = (unsigned char)0;

LAB15:    if (t9 == 1)
        goto LAB10;

LAB11:    t13 = (t0 + 776U);
    t18 = *((char **)t13);
    t13 = (t0 + 5652U);
    t19 = ((WORK_P_4233760377) + 1148U);
    t20 = *((char **)t19);
    t21 = *((int *)t20);
    t22 = (t21 - 1);
    t23 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t18, t13, t22);
    if (t23 == 1)
        goto LAB16;

LAB17:    t17 = (unsigned char)0;

LAB18:    t4 = t17;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 3080);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(34, ng0);
    t25 = (t0 + 3080);
    t29 = (t25 + 32U);
    t30 = *((char **)t29);
    t31 = (t30 + 40U);
    t32 = *((char **)t31);
    *((unsigned char *)t32) = (unsigned char)3;
    xsi_driver_first_trans_fast(t25);
    goto LAB8;

LAB10:    t4 = (unsigned char)1;
    goto LAB12;

LAB13:    t6 = (t0 + 868U);
    t8 = *((char **)t6);
    t6 = (t0 + 5668U);
    t13 = ((WORK_P_4233760377) + 944U);
    t14 = *((char **)t13);
    t15 = *((int *)t14);
    t16 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t8, t6, t15);
    t9 = t16;
    goto LAB15;

LAB16:    t19 = (t0 + 776U);
    t24 = *((char **)t19);
    t19 = (t0 + 5652U);
    t25 = ((WORK_P_4233760377) + 1420U);
    t26 = *((char **)t25);
    t27 = *((int *)t26);
    t28 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t24, t19, t27);
    t17 = t28;
    goto LAB18;

}

static void work_a_3502108328_3212880686_p_1(char *t0)
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
    unsigned char t11;
    char *t12;
    char *t13;
    int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(44, ng0);
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
LAB3:    t1 = (t0 + 3004);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 3116);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 868U);
    t5 = *((char **)t2);
    t2 = (t0 + 5668U);
    t6 = ((WORK_P_4233760377) + 1012U);
    t7 = *((char **)t6);
    t9 = *((int *)t7);
    t10 = (t9 - 1);
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t5, t2, t10);
    if (t11 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 3116);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(48, ng0);
    t12 = (t0 + 3116);
    t16 = (t12 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t12);
    goto LAB8;

LAB10:    t6 = (t0 + 868U);
    t8 = *((char **)t6);
    t6 = (t0 + 5668U);
    t12 = ((WORK_P_4233760377) + 1080U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t15 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t8, t6, t14);
    t4 = t15;
    goto LAB12;

}

static void work_a_3502108328_3212880686_p_2(char *t0)
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
    unsigned char t11;
    char *t12;
    char *t13;
    int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(58, ng0);
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
LAB3:    t1 = (t0 + 3012);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 3152);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 776U);
    t5 = *((char **)t2);
    t2 = (t0 + 5652U);
    t6 = ((WORK_P_4233760377) + 1488U);
    t7 = *((char **)t6);
    t9 = *((int *)t7);
    t10 = (t9 - 1);
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t5, t2, t10);
    if (t11 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3152);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(62, ng0);
    t12 = (t0 + 3152);
    t16 = (t12 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t12);
    goto LAB8;

LAB10:    t6 = (t0 + 776U);
    t8 = *((char **)t6);
    t6 = (t0 + 5652U);
    t12 = ((WORK_P_4233760377) + 1556U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t15 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t8, t6, t14);
    t4 = t15;
    goto LAB12;

}

static void work_a_3502108328_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(69, ng0);

LAB3:    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3188);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 3020);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3502108328_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(70, ng0);

LAB3:    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3224);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 3028);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3502108328_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(71, ng0);

LAB3:    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3260);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 3036);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3502108328_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3502108328_3212880686_p_0,(void *)work_a_3502108328_3212880686_p_1,(void *)work_a_3502108328_3212880686_p_2,(void *)work_a_3502108328_3212880686_p_3,(void *)work_a_3502108328_3212880686_p_4,(void *)work_a_3502108328_3212880686_p_5};
	xsi_register_didat("work_a_3502108328_3212880686", "isim/Testbench_Pong_isim_beh.exe.sim/work/a_3502108328_3212880686.didat");
	xsi_register_executes(pe);
}
