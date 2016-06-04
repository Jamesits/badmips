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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    xilinxcorelib_ver_m_04284627112054182733_1420689212_init();
    xilinxcorelib_ver_m_18166792875774041790_1862936372_init();
    xilinxcorelib_ver_m_01834407678936685707_4016559029_init();
    xilinxcorelib_ver_m_10066368518302646626_2370557917_init();
    work_m_14056882636803624207_3200543613_init();
    work_m_01991216189746075477_3913188552_init();
    work_m_03762049217188799938_0966459031_init();
    work_m_07945290671537855694_0886308060_init();
    work_m_16905234459144229562_3508565487_init();
    work_m_16896399165294836036_3888619533_init();
    work_m_17436825720421334103_2038303166_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_17436825720421334103_2038303166");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
