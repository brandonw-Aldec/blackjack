// (c) Aldec, Inc.
// All rights reserved.
//
// Last modified: $Date: 2012-10-11 14:02:27 +0200 (Thu, 11 Oct 2012) $
// $Revision: 213792 $

#include "bcd2led.hpp"

void BCD2LED::prc_BCD2LED()
{
    if (OFF == 'x')
        LED_L = "xxxxxxx";
    else if (OFF == '0')
        LED_L = L_TMP.read();
    else
        LED_L = "1111111";

    if (OFF == 'x')
        LED_H = "xxxxxxx";
    else if (OFF == '0')
        LED_H = H_TMP.read();
    else
        LED_H = "1111111";

}

SC_MODULE_EXPORT(BCD2LED);
