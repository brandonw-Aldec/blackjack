// (c) Aldec, Inc.
// All rights reserved.
//
// Last modified: $Date: 2013-10-24 13:25:21 +0200 (Thu, 24 Oct 2013) $
// $Revision: 294826 $

#include <systemc.h>
#include "johnson8_v_foreign.hpp"

SC_MODULE(JOHNSON8)
{
    sc_out < sc_lv < 8 > > Q;
    sc_in < sc_logic > CLK;
    sc_in < sc_logic > RESET;

    JOHNSON8_V *JOHNSON8_V_INST;

    void prc_JOHNSON8();

    SC_CTOR(JOHNSON8) :
        CLK("CLK"), RESET("RESET"), Q("Q")
    {
        JOHNSON8_V_INST = new JOHNSON8_V("JOHNSON8_V_INST");

        JOHNSON8_V_INST->CLK(CLK);
        JOHNSON8_V_INST->RESET(RESET);
        JOHNSON8_V_INST->Q(Q);
    }
}
;
