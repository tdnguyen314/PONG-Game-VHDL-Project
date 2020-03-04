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
static const char *ng0 = "//HWNC2-STDHOME2/STDHOME2/USERS/1705407/HET6004/LAB2/Pong_2/Bat_Logic.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;
extern char *WORK_P_4233760377;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_2546382208_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_2546454082_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );


static void work_a_1357968946_3212880686_p_0(char *t0)
{
    char t22[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    int t15;
    int t16;
    int t17;
    char *t18;
    int t19;
    int t20;
    unsigned char t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 660U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 2484);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 10U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t1 = (t0 + 2520);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 10U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 2368);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(30, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t5 = t1;
    memset(t5, (unsigned char)2, 10U);
    t6 = (t0 + 2412);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 10U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(31, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t2 = t1;
    memset(t2, (unsigned char)2, 10U);
    t5 = (t0 + 2448);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 10U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 960U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB16;

LAB18:
LAB17:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB22;

LAB24:
LAB23:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB28;

LAB30:
LAB29:    goto LAB3;

LAB7:    t2 = (t0 + 776U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1420U);
    t7 = *((char **)t2);
    t2 = (t0 + 4636U);
    t8 = ((WORK_P_4233760377) + 1148U);
    t9 = *((char **)t8);
    t15 = *((int *)t9);
    t8 = ((WORK_P_4233760377) + 1624U);
    t10 = *((char **)t8);
    t16 = *((int *)t10);
    t17 = (t15 - t16);
    t8 = ((WORK_P_4233760377) + 1760U);
    t18 = *((char **)t8);
    t19 = *((int *)t18);
    t20 = (t17 - t19);
    t21 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t7, t2, t20);
    if (t21 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(37, ng0);
    t8 = (t0 + 1420U);
    t23 = *((char **)t8);
    t8 = (t0 + 4636U);
    t24 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t22, t23, t8, 1);
    t25 = (t0 + 2412);
    t26 = (t25 + 32U);
    t27 = *((char **)t26);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    memcpy(t29, t24, 10U);
    xsi_driver_first_trans_fast(t25);
    goto LAB14;

LAB16:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1420U);
    t5 = *((char **)t1);
    t1 = (t0 + 4636U);
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t5, t1, 10);
    if (t11 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB17;

LAB19:    xsi_set_current_line(44, ng0);
    t6 = (t0 + 1420U);
    t7 = *((char **)t6);
    t6 = (t0 + 4636U);
    t8 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t22, t7, t6, 1);
    t9 = (t0 + 2412);
    t10 = (t9 + 32U);
    t18 = *((char **)t10);
    t23 = (t18 + 40U);
    t24 = *((char **)t23);
    memcpy(t24, t8, 10U);
    xsi_driver_first_trans_fast(t9);
    goto LAB20;

LAB22:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t1 = (t0 + 4652U);
    t11 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t5, t1, 430);
    if (t11 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 2448);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 10U);
    xsi_driver_first_trans_fast(t1);

LAB26:    goto LAB23;

LAB25:    xsi_set_current_line(51, ng0);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    t6 = (t0 + 4652U);
    t8 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t22, t7, t6, 1);
    t9 = (t0 + 2448);
    t10 = (t9 + 32U);
    t18 = *((char **)t10);
    t23 = (t18 + 40U);
    t24 = *((char **)t23);
    memcpy(t24, t8, 10U);
    xsi_driver_first_trans_fast(t9);
    goto LAB26;

LAB28:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t1 = (t0 + 4652U);
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t5, t1, 10);
    if (t11 != 0)
        goto LAB31;

LAB33:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 2448);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 10U);
    xsi_driver_first_trans_fast(t1);

LAB32:    goto LAB29;

LAB31:    xsi_set_current_line(60, ng0);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    t6 = (t0 + 4652U);
    t8 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t22, t7, t6, 1);
    t9 = (t0 + 2448);
    t10 = (t9 + 32U);
    t18 = *((char **)t10);
    t23 = (t18 + 40U);
    t24 = *((char **)t23);
    memcpy(t24, t8, 10U);
    xsi_driver_first_trans_fast(t9);
    goto LAB32;

}


extern void work_a_1357968946_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1357968946_3212880686_p_0};
	xsi_register_didat("work_a_1357968946_3212880686", "isim/Testbench_Pong_isim_beh.exe.sim/work/a_1357968946_3212880686.didat");
	xsi_register_executes(pe);
}
