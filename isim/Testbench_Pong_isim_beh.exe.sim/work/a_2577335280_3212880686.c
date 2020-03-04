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
static const char *ng0 = "//HWNC2-STDHOME2/STDHOME2/USERS/1705407/HET6004/LAB2/Pong_2/State_Machine.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_2577335280_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(38, ng0);
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
LAB3:    t1 = (t0 + 3720);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 3788);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2064U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 3788);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

static void work_a_2577335280_3212880686_p_1(char *t0)
{
    char t14[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB6, &&LAB5, &&LAB7, &&LAB10, &&LAB8, &&LAB9};

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 3824);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 3860);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 3896);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 3932);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 3968);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 4004);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t6);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 3728);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 776U);
    t4 = *((char **)t3);
    t7 = *((unsigned char *)t4);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 4040);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB2;

LAB4:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 3824);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t6 = (unsigned char)0;

LAB19:    if (t6 != 0)
        goto LAB14;

LAB16:    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 == 1)
        goto LAB22;

LAB23:    t6 = (unsigned char)0;

LAB24:    if (t6 != 0)
        goto LAB20;

LAB21:    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 == 1)
        goto LAB27;

LAB28:    t6 = (unsigned char)0;

LAB29:    if (t6 != 0)
        goto LAB25;

LAB26:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 4040);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB2;

LAB5:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 3860);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 == 1)
        goto LAB33;

LAB34:    t6 = (unsigned char)0;

LAB35:    if (t6 != 0)
        goto LAB30;

LAB32:    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 == 1)
        goto LAB38;

LAB39:    t6 = (unsigned char)0;

LAB40:    if (t6 != 0)
        goto LAB36;

LAB37:    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 == 1)
        goto LAB43;

LAB44:    t6 = (unsigned char)0;

LAB45:    if (t6 != 0)
        goto LAB41;

LAB42:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 4040);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB31:    goto LAB2;

LAB6:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 3896);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 == 1)
        goto LAB49;

LAB50:    t6 = (unsigned char)0;

LAB51:    if (t6 != 0)
        goto LAB46;

LAB48:    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 == 1)
        goto LAB54;

LAB55:    t6 = (unsigned char)0;

LAB56:    if (t6 != 0)
        goto LAB52;

LAB53:    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 == 1)
        goto LAB59;

LAB60:    t6 = (unsigned char)0;

LAB61:    if (t6 != 0)
        goto LAB57;

LAB58:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 4040);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB47:    goto LAB2;

LAB7:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 3932);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 == 1)
        goto LAB65;

LAB66:    t6 = (unsigned char)0;

LAB67:    if (t6 != 0)
        goto LAB62;

LAB64:    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 == 1)
        goto LAB70;

LAB71:    t6 = (unsigned char)0;

LAB72:    if (t6 != 0)
        goto LAB68;

LAB69:    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 == 1)
        goto LAB75;

LAB76:    t6 = (unsigned char)0;

LAB77:    if (t6 != 0)
        goto LAB73;

LAB74:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 4040);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB63:    goto LAB2;

LAB8:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 3968);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t1 = (t0 + 7688U);
    t3 = (t0 + 7750);
    t5 = (t14 + 0U);
    t9 = (t5 + 0U);
    *((int *)t9) = 0;
    t9 = (t5 + 4U);
    *((int *)t9) = 3;
    t9 = (t5 + 8U);
    *((int *)t9) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t9 = (t5 + 12U);
    *((unsigned int *)t9) = t16;
    t6 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t14);
    if (t6 != 0)
        goto LAB78;

LAB80:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 4040);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB79:    goto LAB2;

LAB9:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 4004);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t1 = (t0 + 7704U);
    t3 = (t0 + 7754);
    t5 = (t14 + 0U);
    t9 = (t5 + 0U);
    *((int *)t9) = 0;
    t9 = (t5 + 4U);
    *((int *)t9) = 3;
    t9 = (t5 + 8U);
    *((int *)t9) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t9 = (t5 + 12U);
    *((unsigned int *)t9) = t16;
    t6 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t14);
    if (t6 != 0)
        goto LAB81;

LAB83:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 4040);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB82:    goto LAB2;

LAB10:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB84;

LAB86:    xsi_set_current_line(139, ng0);
    t1 = (t0 + 4040);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);

LAB85:    goto LAB2;

LAB11:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 4040);
    t5 = (t3 + 32U);
    t9 = *((char **)t5);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t3);
    goto LAB12;

LAB14:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 4040);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)3);
    t6 = t13;
    goto LAB19;

LAB20:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 4040);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB22:    t1 = (t0 + 960U);
    t3 = *((char **)t1);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)3);
    t6 = t13;
    goto LAB24;

LAB25:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 4040);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB27:    t1 = (t0 + 1236U);
    t3 = *((char **)t1);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)3);
    t6 = t13;
    goto LAB29;

LAB30:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 4040);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB33:    t1 = (t0 + 1420U);
    t3 = *((char **)t1);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)3);
    t6 = t13;
    goto LAB35;

LAB36:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 4040);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB38:    t1 = (t0 + 960U);
    t3 = *((char **)t1);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)3);
    t6 = t13;
    goto LAB40;

LAB41:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 4040);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB43:    t1 = (t0 + 1236U);
    t3 = *((char **)t1);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)3);
    t6 = t13;
    goto LAB45;

LAB46:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 4040);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB47;

LAB49:    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)3);
    t6 = t13;
    goto LAB51;

LAB52:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 4040);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB47;

LAB54:    t1 = (t0 + 1052U);
    t3 = *((char **)t1);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)3);
    t6 = t13;
    goto LAB56;

LAB57:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 4040);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB47;

LAB59:    t1 = (t0 + 1328U);
    t3 = *((char **)t1);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)3);
    t6 = t13;
    goto LAB61;

LAB62:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 4040);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB63;

LAB65:    t1 = (t0 + 1420U);
    t3 = *((char **)t1);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)3);
    t6 = t13;
    goto LAB67;

LAB68:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 4040);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB63;

LAB70:    t1 = (t0 + 1052U);
    t3 = *((char **)t1);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)3);
    t6 = t13;
    goto LAB72;

LAB73:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 4040);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB63;

LAB75:    t1 = (t0 + 1328U);
    t3 = *((char **)t1);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)3);
    t6 = t13;
    goto LAB77;

LAB78:    xsi_set_current_line(120, ng0);
    t9 = (t0 + 4040);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t17 = (t11 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)5;
    xsi_driver_first_trans_fast(t9);
    goto LAB79;

LAB81:    xsi_set_current_line(129, ng0);
    t9 = (t0 + 4040);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t17 = (t11 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)5;
    xsi_driver_first_trans_fast(t9);
    goto LAB82;

LAB84:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 4040);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB85;

}

static void work_a_2577335280_3212880686_p_2(char *t0)
{
    char t12[16];
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
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(149, ng0);
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
LAB3:    t1 = (t0 + 3736);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 7758);
    t6 = (t0 + 4076);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(151, ng0);
    t1 = (t0 + 7762);
    t5 = (t0 + 4112);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 2340U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 2432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB10;

LAB11:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t1 = (t0 + 4076);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(159, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t1 = (t0 + 4112);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t1);

LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 2156U);
    t6 = *((char **)t2);
    t2 = (t0 + 7688U);
    t7 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t12, t6, t2, (unsigned char)3);
    t8 = (t0 + 4076);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t7, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB8;

LAB10:    xsi_set_current_line(156, ng0);
    t1 = (t0 + 2248U);
    t5 = *((char **)t1);
    t1 = (t0 + 7704U);
    t6 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t12, t5, t1, (unsigned char)3);
    t7 = (t0 + 4112);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t13 = *((char **)t10);
    memcpy(t13, t6, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB8;

}

static void work_a_2577335280_3212880686_p_3(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(164, ng0);

LAB3:    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t1 = (t0 + 2248U);
    t3 = *((char **)t1);
    t5 = ((IEEE_P_2592010699) + 2332);
    t6 = (t0 + 7688U);
    t7 = (t0 + 7704U);
    t1 = xsi_base_array_concat(t1, t4, t5, (char)97, t2, t6, (char)97, t3, t7, (char)101);
    t8 = (t0 + 4148);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 3744);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2577335280_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2577335280_3212880686_p_0,(void *)work_a_2577335280_3212880686_p_1,(void *)work_a_2577335280_3212880686_p_2,(void *)work_a_2577335280_3212880686_p_3};
	xsi_register_didat("work_a_2577335280_3212880686", "isim/Testbench_Pong_isim_beh.exe.sim/work/a_2577335280_3212880686.didat");
	xsi_register_executes(pe);
}
