// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2017 by Wilson Snyder.
// SPDX-License-Identifier: CC0-1.0

// See also the EXAMPLE section in the verilator manpage/document.
module top(
    input clk,
    input rst,
    input a,
    input b,
    output f
);
   
   assign f = a^b;
endmodule
