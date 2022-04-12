// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;
class Vtop___024unit;


//----------

VL_MODULE(Vtop___024root) {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_aluop,3,0);
    VL_OUT(io_inst_addr,31,0);
    VL_IN(io_inst,31,0);

    // LOCAL SIGNALS
    CData/*3:0*/ top__DOT__idio_io_toEx_alu_op;
    CData/*0:0*/ top__DOT__idio_io_toEx_mem_wr;
    CData/*0:0*/ top__DOT__idio_io_toEx_mem_rd;
    CData/*2:0*/ top__DOT__idio_io_toEx_mask_type;
    CData/*2:0*/ top__DOT__idio_io_toEx_cmp_op;
    CData/*3:0*/ top__DOT__idio__DOT___T_156;
    CData/*0:0*/ top__DOT__idio__DOT___T_189;
    CData/*0:0*/ top__DOT__idio__DOT___T_251;
    CData/*2:0*/ top__DOT__idio__DOT___T_295;
    CData/*0:0*/ top__DOT__idio__DOT___T_348;
    CData/*0:0*/ top__DOT__idio__DOT___T_688;
    CData/*0:0*/ top__DOT__exio__DOT__branchEna;
    CData/*3:0*/ top__DOT__bb__DOT__call;
    IData/*31:0*/ top__DOT__ifio__DOT__pc;
    VlWide<5>/*159:0*/ top__DOT__idio__DOT__hi_lo_2;
    VlWide<29>/*900:0*/ top__DOT__idio__DOT___T_470;
    VlWide<29>/*900:0*/ top__DOT__idio__DOT__decodeValue_7;
    VlWide<4>/*126:0*/ top__DOT__exio__DOT___T_49;
    QData/*63:0*/ top__DOT__idio_io_toEx_cmp_op1;
    QData/*63:0*/ top__DOT__idio_io_toEx_cmp_op2;
    QData/*63:0*/ top__DOT__idio_io_toEx_op1;
    QData/*63:0*/ top__DOT__exio_io_toMem_calRes;
    QData/*63:0*/ top__DOT__memio_io_toWb_memRes;
    QData/*63:0*/ top__DOT__regio_io_reg_read_rs1_data;
    QData/*63:0*/ top__DOT__regio_io_reg_read_rs2_data;
    QData/*63:0*/ top__DOT__ifio__DOT___T_2;
    QData/*63:0*/ top__DOT__idio__DOT__imm_utype_sext;
    QData/*39:0*/ top__DOT__idio__DOT__hi_4;
    QData/*63:0*/ top__DOT__idio__DOT__imm_itype_sext;
    QData/*63:0*/ top__DOT__idio__DOT__imm_btype_sext;
    QData/*63:0*/ top__DOT__idio__DOT__imm_stype_sext;
    QData/*63:0*/ top__DOT__idio__DOT___T_393;
    QData/*63:0*/ top__DOT__exio__DOT___T_1;
    QData/*63:0*/ top__DOT__exio__DOT___T_86;
    VlUnpacked<QData/*63:0*/, 1024> top__DOT__memio__DOT__regMem;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__regio__DOT__regFile;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
