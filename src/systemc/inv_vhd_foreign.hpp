// (c) Aldec, Inc.
// All rights reserved.
//
// Last modified: $Date: 2013-10-24 13:25:21 +0200 (Thu, 24 Oct 2013) $
// $Revision: 294826 $

#include "systemc.h"

class inv_vhd : public sc_foreign_module
{
    public:
        sc_in < sc_logic > I;
        sc_out < sc_logic > O;

        inv_vhd(sc_module_name nm) :
            sc_foreign_module(nm, "inv_vhd"), I("I"), O("O")
        {
        }

        ~inv_vhd()
        {
        }
};
