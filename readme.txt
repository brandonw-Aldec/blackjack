DESCRIPTION:
    The 'blackjack' example design simulates a machine playing the blackjack game.

OPERATION:
    The game is started by applying the Low state to the START.
    Applying the Low state to the NEW_CARD input selects a new card.
    The 7-segment LED displays show the subsequent card.
    When the game is over, the displays show the current hand count.
    If the game is lost, the displayed count is flashing.

    CONTROLS (Inputs):
        START            - starts a new game
        NEW_CARD         - asks for an additional card
        GEN_RES          - resets the card sequence generator
        GEN_CLK, SYS_CLK - clock inputs

    OUTPUTS:
        HOLD               - signal 'enough cards'
        BUST               - signal 'bust of the hand'
        LEDS[7:0]          - the number of cards on hand (8 LEDs signal)
        L_L[6:0], L_H[6:0] - signals for 7-segment LED displays showing the
                             current hand count.
        D_L[3:0], D_H[1:0] - BCD signals showing the current hand count

SIMULATION:
    For functional simulation execute runme.do script.
    The simulation results are written to file 'results.txt'.

LANGUAGE:
    Verilog / VHDL / SystemC

___________________________
(c) Aldec, Inc.
All rights reserved.

Last modified: $Date: 2008-09-23 12:16:54 +0200 (Tue, 23 Sep 2008) $
$Revision: 92945 $

test 0