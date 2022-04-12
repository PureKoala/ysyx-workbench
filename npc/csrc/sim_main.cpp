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
#include "Vtop__Dpi.h"
using namespace std;

bool flag = false;


static const uint32_t img [] = {
  0x00000297,  // auipc t0,0
  0x0002b823,  // sd  zero,16(t0)
  0x0102b503,  // ld  a0,16(t0)
  0x00100073,  // ebreak (used as nemu_trap)
  0xdeadbeef,  // some data
};

void finish(){
	flag = true;
}

int main(int argc, char** argv, char** env) {
    // See a similar example walkthrough in the verilator manpa
    // This is intended to be a minimal example.  Before copying this to start a
    // real project, it i better to start with a more complete example,
    // e.g. examples/c_tracing.

    // Prevent unused variable warnings
/* if (false && argc && argv && env) {}
//    Verilated::commandArgs(argc,argv);
    // Construct the Verilated model, from Vtop.h generated from Verilating "top.v"
    Verilated::mkdir("logs");
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
	contextp->debug(0);
	contextp->randReset(2);
	contextp->traceEverOn(true);
	contextp->commandArgs(argc, argv);
	const std::unique_ptr<Vtop> top{new Vtop{contextp.get(), "TOP"}};*/
	
	//Vtop* top = new Vtop;

    //Verilated::traceEverOn(true);
    //VerilatedVcdC* tfp = new VerilatedVcdC;

    //top->trace(tfp,99);
    //tfp->open("test.vcd");
    //////////////////////////////////
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

    // Construct the Verilated model, from Vtop.h generated from Verilating "top.v".
    // Using unique_ptr is similar to "Vtop* top = new Vtop" then deleting at end.
    // "TOP" will be the hierarchical name of the module.
    const std::unique_ptr<Vtop> top{new Vtop{contextp.get(), "TOP"}};


    // Verilated::traceEverOn(true);
    // Verilator must compute traced signals
    contextp->traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;  // trace file pointer
    top->trace(tfp, 99);  // Trace 99 levels of hierarchy
    tfp->open("waveform.vcd");
    
    int i = 0;
    top->clock = 0;
    for(int j=0;j<5;j++){
    	contextp->timeInc(1);
    	top->reset = 1;
    	top->clock = !top->clock;
    	top->eval();
        tfp->dump(contextp->time());
    }
   

    	

    // Simulate until $finish
 while (!contextp->gotFinish() && !flag ) {
    
	contextp->timeInc(1);
	
	top->clock = !top->clock;
	top -> reset = 0;
	top->io_inst = img[i];
	i++;
    top->eval();
    tfp->dump(contextp->time());
    
    contextp->timeInc(1);
	
	top->clock = !top->clock;
    top->eval();
    tfp->dump(contextp->time());
    
	
	//assert(top->f == a^b);
	//main_time++;
    }  
    tfp->close();

    // Final model cleanup
    top->final();

    // Destroy model
    //delete top;
    //delete tfp;
    // Return good completion status
    return 0;
}

