// (c) Aldec, Inc.
// All rights reserved.
//
// Last modified: $Date: 2013-10-24 13:25:21 +0200 (Thu, 24 Oct 2013) $
// $Revision: 294826 $

#include "systemc.h"

class JOHNSON8_V : public sc_foreign_module
{
    public:
        sc_in < sc_logic > CLK;
        sc_in < sc_logic > RESET;
        sc_out < sc_lv < 8 > > Q;

        JOHNSON8_V(sc_module_name nm) :
            sc_foreign_module(nm, "JOHNSON8_V"), CLK("CLK"), RESET("RESET"), Q("Q")
        {
        }

        ~JOHNSON8_V()
        {
        }

};
