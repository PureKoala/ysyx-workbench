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


static uint32_t img [50000] = {
0x00000413,
0x00009117,
0xffc10113,
0x00c000ef,

0x00000513,
0x00100073,

0xff010113,
0x00000517,
0x01450513,
0x00113423,
0xfe9ff0ef,
0x0000006f,
};





void finish(){
	flag = true;
}

int main(int argc, char** argv, char** env) {
    // See a similar example walkthrough in the verilator manpa
    // This is intended to be a minimal example.  Before copying this to start a
    // real project, it i better to start with a more complete example,

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
    
    top->clock = 0;
    
    for(int j=0;j<5;j++){
    	contextp->timeInc(1);
    	top->reset = 1;
    	top->clock = !top->clock;
    	top->eval();
        tfp->dump(contextp->time());
    }
    
	
	
    // Simulate until $finish
    int i=0;
 while (!contextp->gotFinish() && !flag && (i++<256)) {
    
	
	
	contextp->timeInc(1);
	top -> reset = 0;
	top->clock = !top->clock;
	if(top->io_inst_addr == 0){
		top->eval();
    	tfp->dump(contextp->time());
		continue;
	}
	
	//printf("0x%lx\n",top->io_inst_addr);
	top->io_inst = img[(top->io_inst_addr-0x80000000)/4];
	
	if(top->io_mem_rd){
		top->io_mem_data_i = *(img+(top->io_mem_addr-0x80000000)/4);
	}else
		top->io_mem_data_i = 0;
	
	if(top->io_mem_wr){
		*(img+(top->io_mem_addr-0x80000000)/4) = top->io_mem_data_o;
	}
	
    top->eval();
    
    tfp->dump(contextp->time());
    if(flag)
		break;    
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

