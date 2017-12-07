// (c) Aldec, Inc.
// All rights reserved.
//
// Last modified: $Date: 2013-10-24 13:25:21 +0200 (Thu, 24 Oct 2013) $
// $Revision: 294826 $

class BCD2LED_V : public sc_foreign_module
{
    public:
        sc_in < sc_lv < 2 > > DIGIT_H;
        sc_in < sc_lv < 4 > > DIGIT_L;
        sc_out < sc_lv < 7 > > H_TMP;
        sc_out < sc_lv < 7 > > L_TMP;

        BCD2LED_V(sc_module_name nm) :
            sc_foreign_module(nm, "BCD2LED_V"), DIGIT_H("DIGIT_H"), DIGIT_L("DIGIT_L"),
                    H_TMP("H_TMP"), L_TMP("L_TMP")
        {
        }

        ~BCD2LED_V()
        {
        }

};
