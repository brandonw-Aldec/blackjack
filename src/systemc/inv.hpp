// (c) Aldec, Inc.
// All rights reserved.
//
// Last modified: $Date: 2013-10-24 13:25:21 +0200 (Thu, 24 Oct 2013) $
// $Revision: 294826 $

#include <systemc.h>
#include "inv_vhd_foreign.hpp"

SC_MODULE(inv)
{
    sc_in < sc_logic > I;
    sc_out < sc_logic > O;

    inv_vhd *inv_vhd_INST;

    void prc_inv();

    SC_CTOR(inv) :
        I("I"), O("O")
    {
        inv_vhd_INST = new inv_vhd("inv_vhd_INST");

        inv_vhd_INST->I(I);
        inv_vhd_INST->O(O);
    }
}
;
