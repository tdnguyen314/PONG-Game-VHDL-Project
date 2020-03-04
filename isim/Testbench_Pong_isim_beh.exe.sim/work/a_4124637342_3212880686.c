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
static const char *ng0 = "//HWNC2-STDHOME2/STDHOME2/USERS/1705407/HET6004/LAB2/Pong_2/Bat_Display.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;
extern char *WORK_P_4233760377;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_2546382208_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_2546454082_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_4124637342_3212880686_p_0(char *t0)
{
    char t26[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    int t17;
    int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(22, ng0);
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
LAB3:    t1 = (t0 + 2092);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 2136);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(24, ng0);
    t1 = (t0 + 2172);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 868U);
    t5 = *((char **)t2);
    t2 = (t0 + 3968U);
    t6 = ((WORK_P_4233760377) + 1828U);
    t7 = *((char **)t6);
    t11 = *((int *)t7);
    t12 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t5, t2, t11);
    if (t12 == 1)
        goto LAB16;

LAB17:    t10 = (unsigned char)0;

LAB18:    if (t10 == 1)
        goto LAB13;

LAB14:    t9 = (unsigned char)0;

LAB15:    if (t9 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 2136);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB8:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t1 = (t0 + 3968U);
    t5 = ((WORK_P_4233760377) + 1896U);
    t6 = *((char **)t5);
    t11 = *((int *)t6);
    t10 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t2, t1, t11);
    if (t10 == 1)
        goto LAB28;

LAB29:    t9 = (unsigned char)0;

LAB30:    if (t9 == 1)
        goto LAB25;

LAB26:    t4 = (unsigned char)0;

LAB27:    if (t4 == 1)
        goto LAB22;

LAB23:    t3 = (unsigned char)0;

LAB24:    if (t3 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2172);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB20:    goto LAB3;

LAB7:    xsi_set_current_line(32, ng0);
    t33 = (t0 + 2136);
    t34 = (t33 + 32U);
    t35 = *((char **)t34);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    *((unsigned char *)t37) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t33);
    goto LAB8;

LAB10:    t24 = (t0 + 776U);
    t25 = *((char **)t24);
    t24 = (t0 + 3952U);
    t27 = (t0 + 960U);
    t28 = *((char **)t27);
    t27 = (t0 + 3984U);
    t29 = ((WORK_P_4233760377) + 1760U);
    t30 = *((char **)t29);
    t31 = *((int *)t30);
    t29 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t26, t28, t27, t31);
    t32 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t25, t24, t29, t26);
    t4 = t32;
    goto LAB12;

LAB13:    t13 = (t0 + 776U);
    t20 = *((char **)t13);
    t13 = (t0 + 3952U);
    t21 = (t0 + 960U);
    t22 = *((char **)t21);
    t21 = (t0 + 3984U);
    t23 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t20, t13, t22, t21);
    t9 = t23;
    goto LAB15;

LAB16:    t6 = (t0 + 868U);
    t8 = *((char **)t6);
    t6 = (t0 + 3968U);
    t13 = ((WORK_P_4233760377) + 1828U);
    t14 = *((char **)t13);
    t15 = *((int *)t14);
    t13 = ((WORK_P_4233760377) + 1692U);
    t16 = *((char **)t13);
    t17 = *((int *)t16);
    t18 = (t15 + t17);
    t19 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t8, t6, t18);
    t10 = t19;
    goto LAB18;

LAB19:    xsi_set_current_line(40, ng0);
    t30 = (t0 + 2172);
    t33 = (t30 + 32U);
    t34 = *((char **)t33);
    t35 = (t34 + 40U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t30);
    goto LAB20;

LAB22:    t22 = (t0 + 776U);
    t24 = *((char **)t22);
    t22 = (t0 + 3952U);
    t25 = (t0 + 1052U);
    t27 = *((char **)t25);
    t25 = (t0 + 4000U);
    t28 = ((WORK_P_4233760377) + 1760U);
    t29 = *((char **)t28);
    t31 = *((int *)t29);
    t28 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t26, t27, t25, t31);
    t23 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t24, t22, t28, t26);
    t3 = t23;
    goto LAB24;

LAB25:    t8 = (t0 + 776U);
    t16 = *((char **)t8);
    t8 = (t0 + 3952U);
    t20 = (t0 + 1052U);
    t21 = *((char **)t20);
    t20 = (t0 + 4000U);
    t19 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t16, t8, t21, t20);
    t4 = t19;
    goto LAB27;

LAB28:    t5 = (t0 + 868U);
    t7 = *((char **)t5);
    t5 = (t0 + 3968U);
    t8 = ((WORK_P_4233760377) + 1896U);
    t13 = *((char **)t8);
    t15 = *((int *)t13);
    t8 = ((WORK_P_4233760377) + 1692U);
    t14 = *((char **)t8);
    t17 = *((int *)t14);
    t18 = (t15 + t17);
    t12 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t7, t5, t18);
    t9 = t12;
    goto LAB30;

}


extern void work_a_4124637342_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4124637342_3212880686_p_0};
	xsi_register_didat("work_a_4124637342_3212880686", "isim/Testbench_Pong_isim_beh.exe.sim/work/a_4124637342_3212880686.didat");
	xsi_register_executes(pe);
}
