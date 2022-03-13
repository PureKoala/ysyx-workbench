// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2017 by Wilson Snyder.
// SPDX-License-Identifier: CC0-1.0
//======================================================================

// Include common routines
#include <verilated.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
// Include model header, generated from Verilating "top.v"
#include "Vtop.h"
#include <verilated_vcd_c.h>
using namespace std;

int main(int argc, char** argv, char** env) {
    // See a similar example walkthrough in the verilator manpa
    // This is intended to be a minimal example.  Before copying this to start a
    // real project, it i better to start with a more complete example,
    // e.g. examples/c_tracing.

    // Prevent unused variable warnings
// if (false && argc && argv && env) {}
    Verilated::commandArgs(argc,argv);
    // Construct the Verilated model, from Vtop.h generated from Verilating "top.v"
    Vtop* top = new Vtop;

    vluint64_t main_time = 0;
    vluint64_t sim_time = 128;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp,99);
    tfp->open("test.vcd");

    // Simulate until $finish
// while (!Verilated::gotFinish()) {
    while(main_time < sim_time){
        int a = rand()&1;
	int b = rand()&1;
	top->a = a;
	top->b = b;
        // Evaluate mode
        top->eval();
	tfp->dump(main_time);
    	printf("a = %d, b = %d, f = %d\n",a,b,top->f);
	assert(top->f == a^b);
	main_time++;
    }  
    tfp->close();

    // Final model cleanup
    top->final();

    // Destroy model
    delete top;
    delete tfp;
    // Return good completion status
    return 0;
}
