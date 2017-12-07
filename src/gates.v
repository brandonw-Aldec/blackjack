// (c) Aldec, Inc.
// All rights reserved.
//
// Last modified: $Date: 2011-08-30 13:31:23 +0200 (Tue, 30 Aug 2011) $
// $Revision: 180634 $

`timescale 1ps / 1ps

// AND2 gate
module AND2 (I0, I1, O);
input  I0;
input  I1;
output O;
assign O = I0 & I1;
endmodule
