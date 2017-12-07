// (c) Aldec, Inc.
// All rights reserved.
//
// Last modified: $Date: 2013-10-24 13:25:21 +0200 (Thu, 24 Oct 2013) $
// $Revision: 294826 $

#include <systemc.h>
#include "or2_vhd_foreign.hpp"

SC_MODULE(or2)
{
    sc_in < sc_logic > I0;
    sc_in < sc_logic > I1;
    sc_out < sc_logic > O;

    or2_vhd *or2_vhd_INST;

    void prc_or2();

    SC_CTOR(or2) :
        I0("I0"), I1("I1"), O("O")
    {
        or2_vhd_INST = new or2_vhd("or2_vhd_INST");

        or2_vhd_INST->I0(I0);
        or2_vhd_INST->I1(I1);
        or2_vhd_INST->O(O);
    }
}
;
