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
    reference_m_00000000002092188398_3232292778_init();
    uut_m_00000000000246204008_2908162333_init();
    tester_m_00000000000857618968_2613777659_init();
    test_m_00000000002884193296_1985558087_init();


    xsi_register_tops("test_m_00000000002884193296_1985558087");


    return xsi_run_simulation(argc, argv);

}
