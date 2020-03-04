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
static const char *ng0 = "//HWNC2-STDHOME2/STDHOME2/USERS/1705407/HET6004/LAB2/Pong_2/Ball_Display.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );


static void work_a_2945522801_3212880686_p_0(char *t0)
{
    char t11[16];
    char t15[16];
    char t22[16];
    char t29[16];
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
    unsigned char t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    xsi_set_current_line(23, ng0);
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
LAB3:    t1 = (t0 + 2000);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 2044);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 776U);
    t5 = *((char **)t2);
    t2 = (t0 + 3728U);
    t6 = (t0 + 960U);
    t7 = *((char **)t6);
    t6 = (t0 + 3760U);
    t8 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t11, t7, t6, 5);
    t12 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t5, t2, t8, t11);
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

LAB9:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 2044);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(28, ng0);
    t34 = (t0 + 2044);
    t35 = (t34 + 32U);
    t36 = *((char **)t35);
    t37 = (t36 + 40U);
    t38 = *((char **)t37);
    *((unsigned char *)t38) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t34);
    goto LAB8;

LAB10:    t27 = (t0 + 868U);
    t28 = *((char **)t27);
    t27 = (t0 + 3744U);
    t30 = (t0 + 1052U);
    t31 = *((char **)t30);
    t30 = (t0 + 3776U);
    t32 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t29, t31, t30, 5);
    t33 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t28, t27, t32, t29);
    t4 = t33;
    goto LAB12;

LAB13:    t20 = (t0 + 868U);
    t21 = *((char **)t20);
    t20 = (t0 + 3744U);
    t23 = (t0 + 1052U);
    t24 = *((char **)t23);
    t23 = (t0 + 3776U);
    t25 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t22, t24, t23, 5);
    t26 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t21, t20, t25, t22);
    t9 = t26;
    goto LAB15;

LAB16:    t13 = (t0 + 776U);
    t14 = *((char **)t13);
    t13 = (t0 + 3728U);
    t16 = (t0 + 960U);
    t17 = *((char **)t16);
    t16 = (t0 + 3760U);
    t18 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t15, t17, t16, 5);
    t19 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t14, t13, t18, t15);
    t10 = t19;
    goto LAB18;

}


extern void work_a_2945522801_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2945522801_3212880686_p_0};
	xsi_register_didat("work_a_2945522801_3212880686", "isim/Testbench_Pong_isim_beh.exe.sim/work/a_2945522801_3212880686.didat");
	xsi_register_executes(pe);
}
