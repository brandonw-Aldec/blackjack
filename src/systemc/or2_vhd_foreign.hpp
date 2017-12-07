// (c) Aldec, Inc.
// All rights reserved.
//
// Last modified: $Date: 2013-10-24 13:25:21 +0200 (Thu, 24 Oct 2013) $
// $Revision: 294826 $

#include "systemc.h"

class or2_vhd : public sc_foreign_module
{
    public:
        sc_in < sc_logic > I0;
        sc_in < sc_logic > I1;
        sc_out < sc_logic > O;

        or2_vhd(sc_module_name nm) :
            sc_foreign_module(nm, "or2_vhd"), I0("I0"), I1("I1"), O("O")
        {
        }

        ~or2_vhd()
        {
        }
};
