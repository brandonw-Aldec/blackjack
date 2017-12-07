// (c) Aldec, Inc.
// All rights reserved.
//
// Last modified: $Date: 2013-10-24 13:25:21 +0200 (Thu, 24 Oct 2013) $
// $Revision: 294826 $

#include <systemc.h>
#include "bcd2led_v_foreign.hpp"

SC_MODULE(BCD2LED)
{
    sc_in < sc_lv < 2 > > DIGIT_H;
    sc_in < sc_lv < 4 > > DIGIT_L;
    sc_out < sc_lv < 7 > > LED_H;
    sc_out < sc_lv < 7 > > LED_L;
    sc_in < sc_logic > OFF;

    sc_signal < sc_lv < 7 > > H_TMP;
    sc_signal < sc_lv < 7 > > L_TMP;

    BCD2LED_V *BCD2LED_V_INST;

    void prc_BCD2LED();

    SC_CTOR(BCD2LED) :
        DIGIT_H("DIGIT_H"), DIGIT_L("DIGIT_L"), LED_H("LED_H"), LED_L("LED_L"), OFF("OFF"),
                H_TMP("H_TMP"), L_TMP("L_TMP")
    {
        BCD2LED_V_INST = new BCD2LED_V("BCD2LED_V_INST");

        BCD2LED_V_INST->DIGIT_H(DIGIT_H);
        BCD2LED_V_INST->DIGIT_L(DIGIT_L);
        BCD2LED_V_INST->H_TMP(H_TMP);
        BCD2LED_V_INST->L_TMP(L_TMP);

        SC_METHOD(prc_BCD2LED);
        sensitive << H_TMP;
        sensitive << L_TMP;
        sensitive << OFF;
    }
}
;
