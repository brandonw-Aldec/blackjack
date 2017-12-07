// (c) Aldec, Inc.
// All rights reserved.
//
// Last modified: $Date: 2011-08-30 13:31:23 +0200 (Tue, 30 Aug 2011) $
// $Revision: 180634 $

`timescale 1ps / 1ps

// Verilog model for double BCD digits to 7-Segment Displays, with turn off Displays
module BCD2LED_V (DIGIT_H, DIGIT_L, H_TMP, L_TMP);
input  [1:0]DIGIT_H;
input  [3:0]DIGIT_L;
output [6:0]H_TMP;
output [6:0]L_TMP;

// auxiliary signals declaration
wire [6:0]L_TMP, H_TMP;

// segment encoding
//        0
//       ---
//    5 |   | 1
//       ---     <- 6
//    4 |   | 2
//       ---
//        3

assign L_TMP = (DIGIT_L == 4'b0001) ? 7'b1001111 :     // 1
               (DIGIT_L == 4'b0010) ? 7'b0010010 :     // 2
               (DIGIT_L == 4'b0011) ? 7'b0000110 :     // 3
               (DIGIT_L == 4'b0100) ? 7'b1001100 :     // 4
               (DIGIT_L == 4'b0101) ? 7'b0100100 :     // 5
               (DIGIT_L == 4'b0110) ? 7'b0100000 :     // 6
               (DIGIT_L == 4'b0111) ? 7'b0001111 :     // 7
               (DIGIT_L == 4'b1000) ? 7'b0000000 :     // 8
               (DIGIT_L == 4'b1001) ? 7'b0000100 :     // 9
               7'b0000001;                           // 0

assign H_TMP = (DIGIT_H == 2'b01) ? 7'b1001111 :  // 1
               (DIGIT_H == 2'b10) ? 7'b0010010 :  // 2
               (DIGIT_H == 2'b11) ? 7'b0000110 :  // 3
               7'b0000001;                        // 0


endmodule
