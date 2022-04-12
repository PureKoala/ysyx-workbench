// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+155,"clock", false,-1);
        tracep->declBit(c+156,"reset", false,-1);
        tracep->declBus(c+157,"io_inst_addr", false,-1, 31,0);
        tracep->declBus(c+158,"io_inst", false,-1, 31,0);
        tracep->declBus(c+159,"io_aluop", false,-1, 3,0);
        tracep->declBit(c+155,"top clock", false,-1);
        tracep->declBit(c+156,"top reset", false,-1);
        tracep->declBus(c+157,"top io_inst_addr", false,-1, 31,0);
        tracep->declBus(c+158,"top io_inst", false,-1, 31,0);
        tracep->declBus(c+159,"top io_aluop", false,-1, 3,0);
        tracep->declBit(c+155,"top ifio_clock", false,-1);
        tracep->declBit(c+156,"top ifio_reset", false,-1);
        tracep->declBus(c+89,"top ifio_io_InstAddr", false,-1, 31,0);
        tracep->declBit(c+1,"top ifio_io_ExtoIf_jumpSym", false,-1);
        tracep->declQuad(c+160,"top ifio_io_ExtoIf_jumpAddr", false,-1, 63,0);
        tracep->declBus(c+158,"top idio_io_inst", false,-1, 31,0);
        tracep->declBus(c+89,"top idio_io_inst_addr", false,-1, 31,0);
        tracep->declBus(c+162,"top idio_io_reg_read_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+2,"top idio_io_reg_read_rs1_data", false,-1, 63,0);
        tracep->declBus(c+163,"top idio_io_reg_read_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+4,"top idio_io_reg_read_rs2_data", false,-1, 63,0);
        tracep->declBus(c+6,"top idio_io_toEx_alu_op", false,-1, 3,0);
        tracep->declBit(c+164,"top idio_io_toEx_withW", false,-1);
        tracep->declBit(c+7,"top idio_io_toEx_mem_wr", false,-1);
        tracep->declBit(c+8,"top idio_io_toEx_mem_rd", false,-1);
        tracep->declBit(c+165,"top idio_io_toEx_reg_wr", false,-1);
        tracep->declBus(c+9,"top idio_io_toEx_mask_type", false,-1, 2,0);
        tracep->declQuad(c+166,"top idio_io_toEx_mem_data", false,-1, 63,0);
        tracep->declBus(c+168,"top idio_io_toEx_rd_o", false,-1, 4,0);
        tracep->declBus(c+10,"top idio_io_toEx_cmp_op", false,-1, 2,0);
        tracep->declQuad(c+11,"top idio_io_toEx_cmp_op1", false,-1, 63,0);
        tracep->declQuad(c+13,"top idio_io_toEx_cmp_op2", false,-1, 63,0);
        tracep->declQuad(c+15,"top idio_io_toEx_op1", false,-1, 63,0);
        tracep->declQuad(c+17,"top idio_io_toEx_op2", false,-1, 63,0);
        tracep->declBus(c+89,"top idio_io_toEx_inst_addr", false,-1, 31,0);
        tracep->declBus(c+6,"top idio_io_aluop", false,-1, 3,0);
        tracep->declBus(c+6,"top exio_io_toEx_alu_op", false,-1, 3,0);
        tracep->declBit(c+164,"top exio_io_toEx_withW", false,-1);
        tracep->declBit(c+7,"top exio_io_toEx_mem_wr", false,-1);
        tracep->declBit(c+8,"top exio_io_toEx_mem_rd", false,-1);
        tracep->declBit(c+165,"top exio_io_toEx_reg_wr", false,-1);
        tracep->declBus(c+9,"top exio_io_toEx_mask_type", false,-1, 2,0);
        tracep->declQuad(c+166,"top exio_io_toEx_mem_data", false,-1, 63,0);
        tracep->declBus(c+168,"top exio_io_toEx_rd_o", false,-1, 4,0);
        tracep->declBus(c+10,"top exio_io_toEx_cmp_op", false,-1, 2,0);
        tracep->declQuad(c+11,"top exio_io_toEx_cmp_op1", false,-1, 63,0);
        tracep->declQuad(c+13,"top exio_io_toEx_cmp_op2", false,-1, 63,0);
        tracep->declQuad(c+15,"top exio_io_toEx_op1", false,-1, 63,0);
        tracep->declQuad(c+17,"top exio_io_toEx_op2", false,-1, 63,0);
        tracep->declBus(c+89,"top exio_io_toEx_inst_addr", false,-1, 31,0);
        tracep->declBit(c+7,"top exio_io_toMem_mem_wr", false,-1);
        tracep->declBit(c+8,"top exio_io_toMem_mem_rd", false,-1);
        tracep->declBit(c+165,"top exio_io_toMem_reg_wr", false,-1);
        tracep->declBus(c+9,"top exio_io_toMem_mask_type", false,-1, 2,0);
        tracep->declQuad(c+19,"top exio_io_toMem_mem_mask", false,-1, 63,0);
        tracep->declQuad(c+166,"top exio_io_toMem_mem_data", false,-1, 63,0);
        tracep->declBus(c+168,"top exio_io_toMem_rd_o", false,-1, 4,0);
        tracep->declQuad(c+21,"top exio_io_toMem_calRes", false,-1, 63,0);
        tracep->declBit(c+1,"top exio_io_toIf_jumpSym", false,-1);
        tracep->declQuad(c+160,"top exio_io_toIf_jumpAddr", false,-1, 63,0);
        tracep->declBit(c+155,"top memio_clock", false,-1);
        tracep->declBit(c+7,"top memio_io_toMem_mem_wr", false,-1);
        tracep->declBit(c+8,"top memio_io_toMem_mem_rd", false,-1);
        tracep->declBit(c+165,"top memio_io_toMem_reg_wr", false,-1);
        tracep->declBus(c+9,"top memio_io_toMem_mask_type", false,-1, 2,0);
        tracep->declQuad(c+19,"top memio_io_toMem_mem_mask", false,-1, 63,0);
        tracep->declQuad(c+166,"top memio_io_toMem_mem_data", false,-1, 63,0);
        tracep->declBus(c+168,"top memio_io_toMem_rd_o", false,-1, 4,0);
        tracep->declQuad(c+21,"top memio_io_toMem_calRes", false,-1, 63,0);
        tracep->declQuad(c+21,"top memio_io_toWb_exRes", false,-1, 63,0);
        tracep->declQuad(c+23,"top memio_io_toWb_memRes", false,-1, 63,0);
        tracep->declBus(c+9,"top memio_io_toWb_mask_type", false,-1, 2,0);
        tracep->declBit(c+165,"top memio_io_toWb_reg_wr", false,-1);
        tracep->declBit(c+8,"top memio_io_toWb_mem_rd", false,-1);
        tracep->declBus(c+168,"top memio_io_toWb_rd_o", false,-1, 4,0);
        tracep->declQuad(c+21,"top wbio_io_toWb_exRes", false,-1, 63,0);
        tracep->declQuad(c+23,"top wbio_io_toWb_memRes", false,-1, 63,0);
        tracep->declBus(c+9,"top wbio_io_toWb_mask_type", false,-1, 2,0);
        tracep->declBit(c+165,"top wbio_io_toWb_reg_wr", false,-1);
        tracep->declBit(c+8,"top wbio_io_toWb_mem_rd", false,-1);
        tracep->declBus(c+168,"top wbio_io_toWb_rd_o", false,-1, 4,0);
        tracep->declBus(c+168,"top wbio_io_regwrite_rd_addr", false,-1, 4,0);
        tracep->declBit(c+165,"top wbio_io_regwrite_reg_wr", false,-1);
        tracep->declQuad(c+25,"top wbio_io_regwrite_rd_data", false,-1, 63,0);
        tracep->declBit(c+155,"top regio_clock", false,-1);
        tracep->declBus(c+162,"top regio_io_reg_read_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+2,"top regio_io_reg_read_rs1_data", false,-1, 63,0);
        tracep->declBus(c+163,"top regio_io_reg_read_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+4,"top regio_io_reg_read_rs2_data", false,-1, 63,0);
        tracep->declBus(c+168,"top regio_io_reg_write_rd_addr", false,-1, 4,0);
        tracep->declBit(c+165,"top regio_io_reg_write_reg_wr", false,-1);
        tracep->declQuad(c+25,"top regio_io_reg_write_rd_data", false,-1, 63,0);
        tracep->declBit(c+155,"top bb_clk", false,-1);
        tracep->declBit(c+156,"top bb_rst", false,-1);
        tracep->declBus(c+6,"top bb_call_Finish", false,-1, 3,0);
        tracep->declBit(c+155,"top ifio clock", false,-1);
        tracep->declBit(c+156,"top ifio reset", false,-1);
        tracep->declBus(c+89,"top ifio io_InstAddr", false,-1, 31,0);
        tracep->declBit(c+1,"top ifio io_ExtoIf_jumpSym", false,-1);
        tracep->declQuad(c+160,"top ifio io_ExtoIf_jumpAddr", false,-1, 63,0);
        tracep->declBus(c+89,"top ifio pc", false,-1, 31,0);
        tracep->declBus(c+158,"top idio io_inst", false,-1, 31,0);
        tracep->declBus(c+89,"top idio io_inst_addr", false,-1, 31,0);
        tracep->declBus(c+162,"top idio io_reg_read_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+2,"top idio io_reg_read_rs1_data", false,-1, 63,0);
        tracep->declBus(c+163,"top idio io_reg_read_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+4,"top idio io_reg_read_rs2_data", false,-1, 63,0);
        tracep->declBus(c+6,"top idio io_toEx_alu_op", false,-1, 3,0);
        tracep->declBit(c+164,"top idio io_toEx_withW", false,-1);
        tracep->declBit(c+7,"top idio io_toEx_mem_wr", false,-1);
        tracep->declBit(c+8,"top idio io_toEx_mem_rd", false,-1);
        tracep->declBit(c+165,"top idio io_toEx_reg_wr", false,-1);
        tracep->declBus(c+9,"top idio io_toEx_mask_type", false,-1, 2,0);
        tracep->declQuad(c+166,"top idio io_toEx_mem_data", false,-1, 63,0);
        tracep->declBus(c+168,"top idio io_toEx_rd_o", false,-1, 4,0);
        tracep->declBus(c+10,"top idio io_toEx_cmp_op", false,-1, 2,0);
        tracep->declQuad(c+11,"top idio io_toEx_cmp_op1", false,-1, 63,0);
        tracep->declQuad(c+13,"top idio io_toEx_cmp_op2", false,-1, 63,0);
        tracep->declQuad(c+15,"top idio io_toEx_op1", false,-1, 63,0);
        tracep->declQuad(c+17,"top idio io_toEx_op2", false,-1, 63,0);
        tracep->declBus(c+89,"top idio io_toEx_inst_addr", false,-1, 31,0);
        tracep->declBus(c+6,"top idio io_aluop", false,-1, 3,0);
        tracep->declBus(c+168,"top idio rd", false,-1, 4,0);
        tracep->declBus(c+169,"top idio imm_itype", false,-1, 11,0);
        tracep->declBus(c+170,"top idio imm_utype", false,-1, 19,0);
        tracep->declBit(c+171,"top idio hi_hi", false,-1);
        tracep->declBit(c+172,"top idio hi_lo", false,-1);
        tracep->declBus(c+173,"top idio lo_hi", false,-1, 5,0);
        tracep->declBus(c+174,"top idio lo_lo", false,-1, 3,0);
        tracep->declBus(c+175,"top idio imm_btype", false,-1, 11,0);
        tracep->declBus(c+176,"top idio hi_1", false,-1, 6,0);
        tracep->declBus(c+177,"top idio imm_stype", false,-1, 11,0);
        tracep->declBus(c+178,"top idio hi_lo_1", false,-1, 7,0);
        tracep->declBit(c+179,"top idio lo_hi_1", false,-1);
        tracep->declBus(c+180,"top idio lo_lo_1", false,-1, 9,0);
        tracep->declBus(c+181,"top idio hi_hi_2", false,-1, 31,0);
        tracep->declQuad(c+27,"top idio imm_utype_sext", false,-1, 63,0);
        tracep->declQuad(c+29,"top idio hi_4", false,-1, 39,0);
        tracep->declArray(c+182,"top idio hi_hi_3", false,-1, 79,0);
        tracep->declArray(c+31,"top idio hi_lo_2", false,-1, 159,0);
        tracep->declArray(c+185,"top idio hi_6", false,-1, 239,0);
        tracep->declArray(c+193,"top idio imm_jtype_sext", false,-1, 900,0);
        tracep->declQuad(c+222,"top idio hi_8", false,-1, 51,0);
        tracep->declQuad(c+36,"top idio imm_itype_sext", false,-1, 63,0);
        tracep->declQuad(c+224,"top idio hi_hi_5", false,-1, 50,0);
        tracep->declQuad(c+38,"top idio imm_btype_sext", false,-1, 63,0);
        tracep->declQuad(c+222,"top idio hi_10", false,-1, 51,0);
        tracep->declQuad(c+40,"top idio imm_stype_sext", false,-1, 63,0);
        tracep->declArray(c+42,"top idio decodeValue_7", false,-1, 900,0);
        tracep->declBus(c+6,"top exio io_toEx_alu_op", false,-1, 3,0);
        tracep->declBit(c+164,"top exio io_toEx_withW", false,-1);
        tracep->declBit(c+7,"top exio io_toEx_mem_wr", false,-1);
        tracep->declBit(c+8,"top exio io_toEx_mem_rd", false,-1);
        tracep->declBit(c+165,"top exio io_toEx_reg_wr", false,-1);
        tracep->declBus(c+9,"top exio io_toEx_mask_type", false,-1, 2,0);
        tracep->declQuad(c+166,"top exio io_toEx_mem_data", false,-1, 63,0);
        tracep->declBus(c+168,"top exio io_toEx_rd_o", false,-1, 4,0);
        tracep->declBus(c+10,"top exio io_toEx_cmp_op", false,-1, 2,0);
        tracep->declQuad(c+11,"top exio io_toEx_cmp_op1", false,-1, 63,0);
        tracep->declQuad(c+13,"top exio io_toEx_cmp_op2", false,-1, 63,0);
        tracep->declQuad(c+15,"top exio io_toEx_op1", false,-1, 63,0);
        tracep->declQuad(c+17,"top exio io_toEx_op2", false,-1, 63,0);
        tracep->declBus(c+89,"top exio io_toEx_inst_addr", false,-1, 31,0);
        tracep->declBit(c+7,"top exio io_toMem_mem_wr", false,-1);
        tracep->declBit(c+8,"top exio io_toMem_mem_rd", false,-1);
        tracep->declBit(c+165,"top exio io_toMem_reg_wr", false,-1);
        tracep->declBus(c+9,"top exio io_toMem_mask_type", false,-1, 2,0);
        tracep->declQuad(c+19,"top exio io_toMem_mem_mask", false,-1, 63,0);
        tracep->declQuad(c+166,"top exio io_toMem_mem_data", false,-1, 63,0);
        tracep->declBus(c+168,"top exio io_toMem_rd_o", false,-1, 4,0);
        tracep->declQuad(c+21,"top exio io_toMem_calRes", false,-1, 63,0);
        tracep->declBit(c+1,"top exio io_toIf_jumpSym", false,-1);
        tracep->declQuad(c+160,"top exio io_toIf_jumpAddr", false,-1, 63,0);
        tracep->declBus(c+71,"top exio alu_shamt", false,-1, 5,0);
        tracep->declQuad(c+72,"top exio calRes", false,-1, 63,0);
        tracep->declBus(c+74,"top exio hi", false,-1, 31,0);
        tracep->declBus(c+75,"top exio lo", false,-1, 31,0);
        tracep->declBit(c+76,"top exio branchEna", false,-1);
        tracep->declBit(c+155,"top memio clock", false,-1);
        tracep->declBit(c+7,"top memio io_toMem_mem_wr", false,-1);
        tracep->declBit(c+8,"top memio io_toMem_mem_rd", false,-1);
        tracep->declBit(c+165,"top memio io_toMem_reg_wr", false,-1);
        tracep->declBus(c+9,"top memio io_toMem_mask_type", false,-1, 2,0);
        tracep->declQuad(c+19,"top memio io_toMem_mem_mask", false,-1, 63,0);
        tracep->declQuad(c+166,"top memio io_toMem_mem_data", false,-1, 63,0);
        tracep->declBus(c+168,"top memio io_toMem_rd_o", false,-1, 4,0);
        tracep->declQuad(c+21,"top memio io_toMem_calRes", false,-1, 63,0);
        tracep->declQuad(c+21,"top memio io_toWb_exRes", false,-1, 63,0);
        tracep->declQuad(c+23,"top memio io_toWb_memRes", false,-1, 63,0);
        tracep->declBus(c+9,"top memio io_toWb_mask_type", false,-1, 2,0);
        tracep->declBit(c+165,"top memio io_toWb_reg_wr", false,-1);
        tracep->declBit(c+8,"top memio io_toWb_mem_rd", false,-1);
        tracep->declBus(c+168,"top memio io_toWb_rd_o", false,-1, 4,0);
        tracep->declQuad(c+226,"top memio regMem_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+77,"top memio regMem_MPORT_addr", false,-1, 9,0);
        tracep->declQuad(c+226,"top memio regMem_MPORT_2_data", false,-1, 63,0);
        tracep->declBus(c+77,"top memio regMem_MPORT_2_addr", false,-1, 9,0);
        tracep->declQuad(c+228,"top memio regMem_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+77,"top memio regMem_MPORT_1_addr", false,-1, 9,0);
        tracep->declBit(c+236,"top memio regMem_MPORT_1_mask", false,-1);
        tracep->declBit(c+78,"top memio regMem_MPORT_1_en", false,-1);
        tracep->declQuad(c+21,"top wbio io_toWb_exRes", false,-1, 63,0);
        tracep->declQuad(c+23,"top wbio io_toWb_memRes", false,-1, 63,0);
        tracep->declBus(c+9,"top wbio io_toWb_mask_type", false,-1, 2,0);
        tracep->declBit(c+165,"top wbio io_toWb_reg_wr", false,-1);
        tracep->declBit(c+8,"top wbio io_toWb_mem_rd", false,-1);
        tracep->declBus(c+168,"top wbio io_toWb_rd_o", false,-1, 4,0);
        tracep->declBus(c+168,"top wbio io_regwrite_rd_addr", false,-1, 4,0);
        tracep->declBit(c+165,"top wbio io_regwrite_reg_wr", false,-1);
        tracep->declQuad(c+25,"top wbio io_regwrite_rd_data", false,-1, 63,0);
        tracep->declQuad(c+79,"top wbio hi", false,-1, 55,0);
        tracep->declBus(c+81,"top wbio lo", false,-1, 7,0);
        tracep->declQuad(c+82,"top wbio hi_2", false,-1, 47,0);
        tracep->declBus(c+84,"top wbio lo_2", false,-1, 15,0);
        tracep->declBus(c+85,"top wbio hi_4", false,-1, 31,0);
        tracep->declBus(c+86,"top wbio lo_4", false,-1, 31,0);
        tracep->declQuad(c+87,"top wbio mem_data_masked", false,-1, 63,0);
        tracep->declBit(c+155,"top regio clock", false,-1);
        tracep->declBus(c+162,"top regio io_reg_read_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+2,"top regio io_reg_read_rs1_data", false,-1, 63,0);
        tracep->declBus(c+163,"top regio io_reg_read_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+4,"top regio io_reg_read_rs2_data", false,-1, 63,0);
        tracep->declBus(c+168,"top regio io_reg_write_rd_addr", false,-1, 4,0);
        tracep->declBit(c+165,"top regio io_reg_write_reg_wr", false,-1);
        tracep->declQuad(c+25,"top regio io_reg_write_rd_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+90+i*2,"top regio regFile", true,(i+0), 63,0);}}
        tracep->declQuad(c+230,"top regio regFile_MPORT_data", false,-1, 63,0);
        tracep->declBus(c+162,"top regio regFile_MPORT_addr", false,-1, 4,0);
        tracep->declQuad(c+232,"top regio regFile_MPORT_1_data", false,-1, 63,0);
        tracep->declBus(c+163,"top regio regFile_MPORT_1_addr", false,-1, 4,0);
        tracep->declQuad(c+234,"top regio regFile_MPORT_2_data", false,-1, 63,0);
        tracep->declBus(c+168,"top regio regFile_MPORT_2_addr", false,-1, 4,0);
        tracep->declBit(c+236,"top regio regFile_MPORT_2_mask", false,-1);
        tracep->declBit(c+165,"top regio regFile_MPORT_2_en", false,-1);
        tracep->declBit(c+155,"top bb clk", false,-1);
        tracep->declBit(c+156,"top bb rst", false,-1);
        tracep->declBus(c+6,"top bb call_Finish", false,-1, 3,0);
        tracep->declBus(c+154,"top bb call", false,-1, 3,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp380;
    VlWide<8>/*255:0*/ __Vtemp389;
    VlWide<29>/*927:0*/ __Vtemp401;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((((0xcU == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op)) 
                                  | (0xdU == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))) 
                                 | (IData)(vlSelf->top__DOT__exio__DOT__branchEna))));
        tracep->fullQData(oldp+2,(vlSelf->top__DOT__regio_io_reg_read_rs1_data),64);
        tracep->fullQData(oldp+4,(vlSelf->top__DOT__regio_io_reg_read_rs2_data),64);
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__idio_io_toEx_alu_op),4);
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__idio_io_toEx_mem_wr));
        tracep->fullBit(oldp+8,(vlSelf->top__DOT__idio_io_toEx_mem_rd));
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__idio_io_toEx_mask_type),3);
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__idio_io_toEx_cmp_op),3);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__idio_io_toEx_cmp_op1),64);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__idio_io_toEx_cmp_op2),64);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__idio_io_toEx_op1),64);
        tracep->fullQData(oldp+17,((((QData)((IData)(
                                                     vlSelf->top__DOT__idio__DOT__decodeValue_7[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__idio__DOT__decodeValue_7[0U])))),64);
        tracep->fullQData(oldp+19,(((IData)(vlSelf->top__DOT__idio_io_toEx_mem_wr)
                                     ? ((7U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                         ? 0xffffffffffffffffULL
                                         : ((5U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                             ? ((4U 
                                                 == 
                                                 (7U 
                                                  & vlSelf->top__DOT__exio__DOT___T_49[0U]))
                                                 ? 0xffffffff00000000ULL
                                                 : 
                                                ((0U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->top__DOT__exio__DOT___T_49[0U]))
                                                  ? 0xffffffffULL
                                                  : 0ULL))
                                             : vlSelf->top__DOT__exio__DOT___T_86))
                                     : 0ULL)),64);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__exio_io_toMem_calRes),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__memio_io_toWb_memRes),64);
        tracep->fullQData(oldp+25,(((IData)(vlSelf->top__DOT__idio_io_toEx_mem_rd)
                                     ? ((6U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                         ? (QData)((IData)(vlSelf->top__DOT__memio_io_toWb_memRes))
                                         : ((5U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                             ? (((QData)((IData)(
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__memio_io_toWb_memRes 
                                                                              >> 0x1fU)))
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__memio_io_toWb_memRes)))
                                             : ((4U 
                                                 == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__memio_io_toWb_memRes))))
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                                  ? 
                                                 ((((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__memio_io_toWb_memRes 
                                                                >> 0xfU)))
                                                     ? 0xffffffffffffULL
                                                     : 0ULL) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->top__DOT__memio_io_toWb_memRes)))))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__memio_io_toWb_memRes))))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                                    ? 
                                                   ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__memio_io_toWb_memRes 
                                                                  >> 7U)))
                                                       ? 0xffffffffffffffULL
                                                       : 0ULL) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->top__DOT__memio_io_toWb_memRes)))))
                                                    : vlSelf->top__DOT__memio_io_toWb_memRes))))))
                                     : vlSelf->top__DOT__exio_io_toMem_calRes)),64);
        tracep->fullQData(oldp+27,(vlSelf->top__DOT__idio__DOT__imm_utype_sext),64);
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__idio__DOT__hi_4),40);
        tracep->fullWData(oldp+31,(vlSelf->top__DOT__idio__DOT__hi_lo_2),160);
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__idio__DOT__imm_itype_sext),64);
        tracep->fullQData(oldp+38,(vlSelf->top__DOT__idio__DOT__imm_btype_sext),64);
        tracep->fullQData(oldp+40,(vlSelf->top__DOT__idio__DOT__imm_stype_sext),64);
        tracep->fullWData(oldp+42,(vlSelf->top__DOT__idio__DOT__decodeValue_7),901);
        tracep->fullCData(oldp+71,((0x3fU & vlSelf->top__DOT__idio__DOT__decodeValue_7[0U])),6);
        tracep->fullQData(oldp+72,((((QData)((IData)(
                                                     vlSelf->top__DOT__exio__DOT___T_49[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__exio__DOT___T_49[0U])))),64);
        tracep->fullIData(oldp+74,(((vlSelf->top__DOT__exio__DOT___T_49[0U] 
                                     >> 0x1fU) ? 0xffffffffU
                                     : 0U)),32);
        tracep->fullIData(oldp+75,(vlSelf->top__DOT__exio__DOT___T_49[0U]),32);
        tracep->fullBit(oldp+76,(vlSelf->top__DOT__exio__DOT__branchEna));
        tracep->fullSData(oldp+77,((0x3ffU & (IData)(vlSelf->top__DOT__exio_io_toMem_calRes))),10);
        tracep->fullBit(oldp+78,(((~ (IData)(vlSelf->top__DOT__idio_io_toEx_mem_rd)) 
                                  & (IData)(vlSelf->top__DOT__idio_io_toEx_mem_wr))));
        tracep->fullQData(oldp+79,(((1U & (IData)((vlSelf->top__DOT__memio_io_toWb_memRes 
                                                   >> 7U)))
                                     ? 0xffffffffffffffULL
                                     : 0ULL)),56);
        tracep->fullCData(oldp+81,((0xffU & (IData)(vlSelf->top__DOT__memio_io_toWb_memRes))),8);
        tracep->fullQData(oldp+82,(((1U & (IData)((vlSelf->top__DOT__memio_io_toWb_memRes 
                                                   >> 0xfU)))
                                     ? 0xffffffffffffULL
                                     : 0ULL)),48);
        tracep->fullSData(oldp+84,((0xffffU & (IData)(vlSelf->top__DOT__memio_io_toWb_memRes))),16);
        tracep->fullIData(oldp+85,(((1U & (IData)((vlSelf->top__DOT__memio_io_toWb_memRes 
                                                   >> 0x1fU)))
                                     ? 0xffffffffU : 0U)),32);
        tracep->fullIData(oldp+86,((IData)(vlSelf->top__DOT__memio_io_toWb_memRes)),32);
        tracep->fullQData(oldp+87,(((6U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                     ? (QData)((IData)(vlSelf->top__DOT__memio_io_toWb_memRes))
                                     : ((5U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                         ? (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__memio_io_toWb_memRes 
                                                                          >> 0x1fU)))
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__memio_io_toWb_memRes)))
                                         : ((4U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                             ? (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->top__DOT__memio_io_toWb_memRes))))
                                             : ((3U 
                                                 == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                                 ? 
                                                ((((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__memio_io_toWb_memRes 
                                                               >> 0xfU)))
                                                    ? 0xffffffffffffULL
                                                    : 0ULL) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__memio_io_toWb_memRes)))))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->top__DOT__memio_io_toWb_memRes))))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                                   ? 
                                                  ((((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__memio_io_toWb_memRes 
                                                                 >> 7U)))
                                                      ? 0xffffffffffffffULL
                                                      : 0ULL) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__memio_io_toWb_memRes)))))
                                                   : vlSelf->top__DOT__memio_io_toWb_memRes))))))),64);
        tracep->fullIData(oldp+89,(vlSelf->top__DOT__ifio__DOT__pc),32);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__regio__DOT__regFile[0]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__regio__DOT__regFile[1]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__regio__DOT__regFile[2]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__regio__DOT__regFile[3]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__regio__DOT__regFile[4]),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__regio__DOT__regFile[5]),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__regio__DOT__regFile[6]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__regio__DOT__regFile[7]),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__regio__DOT__regFile[8]),64);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__regio__DOT__regFile[9]),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__regio__DOT__regFile[10]),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__regio__DOT__regFile[11]),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__regio__DOT__regFile[12]),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__regio__DOT__regFile[13]),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__regio__DOT__regFile[14]),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__regio__DOT__regFile[15]),64);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__regio__DOT__regFile[16]),64);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__regio__DOT__regFile[17]),64);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__regio__DOT__regFile[18]),64);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__regio__DOT__regFile[19]),64);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__regio__DOT__regFile[20]),64);
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__regio__DOT__regFile[21]),64);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__regio__DOT__regFile[22]),64);
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__regio__DOT__regFile[23]),64);
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__regio__DOT__regFile[24]),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__regio__DOT__regFile[25]),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__regio__DOT__regFile[26]),64);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__regio__DOT__regFile[27]),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__regio__DOT__regFile[28]),64);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__regio__DOT__regFile[29]),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__regio__DOT__regFile[30]),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__regio__DOT__regFile[31]),64);
        tracep->fullCData(oldp+154,(vlSelf->top__DOT__bb__DOT__call),4);
        tracep->fullBit(oldp+155,(vlSelf->clock));
        tracep->fullBit(oldp+156,(vlSelf->reset));
        tracep->fullIData(oldp+157,(vlSelf->io_inst_addr),32);
        tracep->fullIData(oldp+158,(vlSelf->io_inst),32);
        tracep->fullCData(oldp+159,(vlSelf->io_aluop),4);
        tracep->fullQData(oldp+160,(((0xcU == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                      ? ((((QData)((IData)(
                                                           vlSelf->top__DOT__idio__DOT__decodeValue_7[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->top__DOT__idio__DOT__decodeValue_7[0U]))) 
                                         + (QData)((IData)(vlSelf->top__DOT__ifio__DOT__pc)))
                                      : ((0xdU == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                          ? (0xfffffffffffffffeULL 
                                             & vlSelf->top__DOT__exio__DOT___T_1)
                                          : ((IData)(vlSelf->top__DOT__exio__DOT__branchEna)
                                              ? (((QData)((IData)(
                                                                  vlSelf->top__DOT__exio__DOT___T_49[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__exio__DOT___T_49[0U])))
                                              : 0x1bf52ULL)))),64);
        tracep->fullCData(oldp+162,((0x1fU & (vlSelf->io_inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+163,((0x1fU & (vlSelf->io_inst 
                                              >> 0x14U))),5);
        tracep->fullBit(oldp+164,(((0x13U != (0x707fU 
                                              & vlSelf->io_inst)) 
                                   & ((0x7013U != (0x707fU 
                                                   & vlSelf->io_inst)) 
                                      & ((0x6013U != 
                                          (0x707fU 
                                           & vlSelf->io_inst)) 
                                         & ((0x4013U 
                                             != (0x707fU 
                                                 & vlSelf->io_inst)) 
                                            & ((0x2013U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->io_inst)) 
                                               & ((0x3013U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->io_inst)) 
                                                  & ((0x1013U 
                                                      != 
                                                      (0xfc00707fU 
                                                       & vlSelf->io_inst)) 
                                                     & ((0x5013U 
                                                         != 
                                                         (0xfc00707fU 
                                                          & vlSelf->io_inst)) 
                                                        & (IData)(vlSelf->top__DOT__idio__DOT___T_688)))))))))));
        tracep->fullBit(oldp+165,(((0x13U == (0x707fU 
                                              & vlSelf->io_inst)) 
                                   | ((0x7013U == (0x707fU 
                                                   & vlSelf->io_inst)) 
                                      | ((0x6013U == 
                                          (0x707fU 
                                           & vlSelf->io_inst)) 
                                         | ((0x4013U 
                                             == (0x707fU 
                                                 & vlSelf->io_inst)) 
                                            | ((0x2013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst)) 
                                               | (IData)(vlSelf->top__DOT__idio__DOT___T_348))))))));
        tracep->fullQData(oldp+166,(((0x13U == (0x707fU 
                                                & vlSelf->io_inst))
                                      ? 0x1bf52ULL : 
                                     ((0x7013U == (0x707fU 
                                                   & vlSelf->io_inst))
                                       ? 0x1bf52ULL
                                       : ((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->io_inst))
                                           ? 0x1bf52ULL
                                           : ((0x4013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? 0x1bf52ULL
                                               : ((0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 0x1bf52ULL
                                                   : 
                                                  ((0x3013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0x1bf52ULL
                                                    : 
                                                   ((0x1013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0x1bf52ULL
                                                     : 
                                                    ((0x5013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0x1bf52ULL
                                                      : 
                                                     ((0x40005013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0x1bf52ULL
                                                       : vlSelf->top__DOT__idio__DOT___T_393)))))))))),64);
        tracep->fullCData(oldp+168,((0x1fU & (vlSelf->io_inst 
                                              >> 7U))),5);
        tracep->fullSData(oldp+169,((vlSelf->io_inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+170,((vlSelf->io_inst 
                                     >> 0xcU)),20);
        tracep->fullBit(oldp+171,((vlSelf->io_inst 
                                   >> 0x1fU)));
        tracep->fullBit(oldp+172,((1U & (vlSelf->io_inst 
                                         >> 7U))));
        tracep->fullCData(oldp+173,((0x3fU & (vlSelf->io_inst 
                                              >> 0x19U))),6);
        tracep->fullCData(oldp+174,((0xfU & (vlSelf->io_inst 
                                             >> 8U))),4);
        tracep->fullSData(oldp+175,(((0x800U & (vlSelf->io_inst 
                                                >> 0x14U)) 
                                     | ((0x400U & (vlSelf->io_inst 
                                                   << 3U)) 
                                        | ((0x3f0U 
                                            & (vlSelf->io_inst 
                                               >> 0x15U)) 
                                           | (0xfU 
                                              & (vlSelf->io_inst 
                                                 >> 8U)))))),12);
        tracep->fullCData(oldp+176,((vlSelf->io_inst 
                                     >> 0x19U)),7);
        tracep->fullSData(oldp+177,(((0xfe0U & (vlSelf->io_inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->io_inst 
                                                 >> 7U)))),12);
        tracep->fullCData(oldp+178,((0xffU & (vlSelf->io_inst 
                                              >> 0xcU))),8);
        tracep->fullBit(oldp+179,((1U & (vlSelf->io_inst 
                                         >> 0x14U))));
        tracep->fullSData(oldp+180,((0x3ffU & (vlSelf->io_inst 
                                               >> 0x15U))),10);
        tracep->fullIData(oldp+181,(((0x800000U & vlSelf->io_inst)
                                      ? 0xffffffffU
                                      : 0U)),32);
        __Vtemp380[0U] = (IData)((((QData)((IData)(
                                                   (vlSelf->io_inst 
                                                    >> 0x1fU))) 
                                   << 0x3bU) | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & (vlSelf->io_inst 
                                                                     >> 0xcU)))) 
                                                 << 0x33U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->io_inst 
                                                                        >> 0x14U)))) 
                                                    << 0x32U) 
                                                   | (((QData)((IData)(
                                                                       (0x3ffU 
                                                                        & (vlSelf->io_inst 
                                                                           >> 0x15U)))) 
                                                       << 0x28U) 
                                                      | vlSelf->top__DOT__idio__DOT__hi_4)))));
        __Vtemp380[1U] = ((0xf0000000U & (vlSelf->io_inst 
                                          << 7U)) | (IData)(
                                                            ((((QData)((IData)(
                                                                               (vlSelf->io_inst 
                                                                                >> 0x1fU))) 
                                                               << 0x3bU) 
                                                              | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (vlSelf->io_inst 
                                                                                >> 0xcU)))) 
                                                                  << 0x33U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->io_inst 
                                                                                >> 0x14U)))) 
                                                                     << 0x32U) 
                                                                    | (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (vlSelf->io_inst 
                                                                                >> 0x15U)))) 
                                                                        << 0x28U) 
                                                                       | vlSelf->top__DOT__idio__DOT__hi_4)))) 
                                                             >> 0x20U)));
        __Vtemp380[2U] = ((0x8000U & (vlSelf->io_inst 
                                      >> 0x10U)) | 
                          ((0x7f80U & (vlSelf->io_inst 
                                       >> 5U)) | ((0x40U 
                                                   & (vlSelf->io_inst 
                                                      >> 0xeU)) 
                                                  | (0x3fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0x19U)))));
        tracep->fullWData(oldp+182,(__Vtemp380),80);
        __Vtemp389[0U] = vlSelf->top__DOT__idio__DOT__hi_lo_2[0U];
        __Vtemp389[1U] = vlSelf->top__DOT__idio__DOT__hi_lo_2[1U];
        __Vtemp389[2U] = vlSelf->top__DOT__idio__DOT__hi_lo_2[2U];
        __Vtemp389[3U] = vlSelf->top__DOT__idio__DOT__hi_lo_2[3U];
        __Vtemp389[4U] = vlSelf->top__DOT__idio__DOT__hi_lo_2[4U];
        __Vtemp389[5U] = (IData)(vlSelf->top__DOT__idio__DOT__hi_4);
        __Vtemp389[6U] = ((0xf0000000U & (vlSelf->io_inst 
                                          << 7U)) | 
                          ((0x8000000U & (vlSelf->io_inst 
                                          >> 4U)) | 
                           ((0x7f80000U & (vlSelf->io_inst 
                                           << 7U)) 
                            | ((0x40000U & (vlSelf->io_inst 
                                            >> 2U)) 
                               | ((0x3ff00U & (vlSelf->io_inst 
                                               >> 0xdU)) 
                                  | (IData)((vlSelf->top__DOT__idio__DOT__hi_4 
                                             >> 0x20U)))))));
        __Vtemp389[7U] = ((0x8000U & (vlSelf->io_inst 
                                      >> 0x10U)) | 
                          ((0x7f80U & (vlSelf->io_inst 
                                       >> 5U)) | ((0x40U 
                                                   & (vlSelf->io_inst 
                                                      >> 0xeU)) 
                                                  | (0x3fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0x19U)))));
        tracep->fullWData(oldp+185,(__Vtemp389),240);
        __Vtemp401[0U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                           << 0x15U) | ((0x100000U 
                                         & (vlSelf->io_inst 
                                            >> 0xbU)) 
                                        | ((0xff000U 
                                            & vlSelf->io_inst) 
                                           | ((0x800U 
                                               & (vlSelf->io_inst 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->io_inst 
                                                    >> 0x14U))))));
        __Vtemp401[1U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                           >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                       << 0x15U));
        __Vtemp401[2U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                           >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                       << 0x15U));
        __Vtemp401[3U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                           >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                       << 0x15U));
        __Vtemp401[4U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                           >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                       << 0x15U));
        __Vtemp401[5U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                           >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                                       << 0x15U));
        __Vtemp401[6U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                           >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                       << 0x15U));
        __Vtemp401[7U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                           >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                       << 0x15U));
        __Vtemp401[8U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                           >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                       << 0x15U));
        __Vtemp401[9U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                           >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                       << 0x15U));
        __Vtemp401[0xaU] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                             >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                                         << 0x15U));
        __Vtemp401[0xbU] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                             >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                         << 0x15U));
        __Vtemp401[0xcU] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                             >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                         << 0x15U));
        __Vtemp401[0xdU] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                             >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                         << 0x15U));
        __Vtemp401[0xeU] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                             >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                         << 0x15U));
        __Vtemp401[0xfU] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                             >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                                         << 0x15U));
        __Vtemp401[0x10U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                              >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                          << 0x15U));
        __Vtemp401[0x11U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                              >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                          << 0x15U));
        __Vtemp401[0x12U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                              >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                          << 0x15U));
        __Vtemp401[0x13U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                              >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                          << 0x15U));
        __Vtemp401[0x14U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                              << 0x15U) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                           >> 0xbU));
        __Vtemp401[0x15U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                              >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                          << 0x15U));
        __Vtemp401[0x16U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                              >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                          << 0x15U));
        __Vtemp401[0x17U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                              >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                          << 0x15U));
        __Vtemp401[0x18U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                              >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                          << 0x15U));
        __Vtemp401[0x19U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                              >> 0xbU) | ((IData)(vlSelf->top__DOT__idio__DOT__hi_4) 
                                          << 0x15U));
        __Vtemp401[0x1aU] = (((IData)(vlSelf->top__DOT__idio__DOT__hi_4) 
                              >> 0xbU) | ((0xe0000000U 
                                           & (vlSelf->io_inst 
                                              << 8U)) 
                                          | ((IData)(
                                                     (vlSelf->top__DOT__idio__DOT__hi_4 
                                                      >> 0x20U)) 
                                             << 0x15U)));
        __Vtemp401[0x1bU] = (((0x1e0000U & (vlSelf->io_inst 
                                            >> 4U)) 
                              | ((0x10000U & (vlSelf->io_inst 
                                              >> 0xfU)) 
                                 | ((0xff00U & (vlSelf->io_inst 
                                                >> 4U)) 
                                    | ((0x80U & (vlSelf->io_inst 
                                                 >> 0xdU)) 
                                       | ((0x7fU & 
                                           (vlSelf->io_inst 
                                            >> 0x18U)) 
                                          | ((IData)(
                                                     (vlSelf->top__DOT__idio__DOT__hi_4 
                                                      >> 0x20U)) 
                                             >> 0xbU)))))) 
                             | ((0xf0000000U & (vlSelf->io_inst 
                                                << 0x10U)) 
                                | ((0x8000000U & (vlSelf->io_inst 
                                                  << 7U)) 
                                   | (0x7e00000U & 
                                      (vlSelf->io_inst 
                                       >> 4U)))));
        __Vtemp401[0x1cU] = ((0x10U & (vlSelf->io_inst 
                                       >> 0x1bU)) | 
                             (0xfU & (vlSelf->io_inst 
                                      >> 0x10U)));
        tracep->fullWData(oldp+193,(__Vtemp401),901);
        tracep->fullQData(oldp+222,(((vlSelf->io_inst 
                                      >> 0x1fU) ? 0xfffffffffffffULL
                                      : 0ULL)),52);
        tracep->fullQData(oldp+224,(((vlSelf->io_inst 
                                      >> 0x1fU) ? 0x7ffffffffffffULL
                                      : 0ULL)),51);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__memio__DOT__regMem
                                    [(0x3ffU & (IData)(vlSelf->top__DOT__exio_io_toMem_calRes))]),64);
        tracep->fullQData(oldp+228,((((0x13U == (0x707fU 
                                                 & vlSelf->io_inst))
                                       ? 0x1bf52ULL
                                       : ((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->io_inst))
                                           ? 0x1bf52ULL
                                           : ((0x6013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? 0x1bf52ULL
                                               : ((0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 0x1bf52ULL
                                                   : 
                                                  ((0x2013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0x1bf52ULL
                                                    : 
                                                   ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0x1bf52ULL
                                                     : 
                                                    ((0x1013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0x1bf52ULL
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0x1bf52ULL
                                                       : 
                                                      ((0x40005013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0x1bf52ULL
                                                        : vlSelf->top__DOT__idio__DOT___T_393))))))))) 
                                     & ((IData)(vlSelf->top__DOT__idio_io_toEx_mem_wr)
                                         ? ((7U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                             ? 0xffffffffffffffffULL
                                             : ((5U 
                                                 == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                                 ? 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->top__DOT__exio__DOT___T_49[0U]))
                                                  ? 0xffffffff00000000ULL
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->top__DOT__exio__DOT___T_49[0U]))
                                                   ? 0xffffffffULL
                                                   : 0ULL))
                                                 : vlSelf->top__DOT__exio__DOT___T_86))
                                         : 0ULL))),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__regio__DOT__regFile
                                    [(0x1fU & (vlSelf->io_inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__regio__DOT__regFile
                                    [(0x1fU & (vlSelf->io_inst 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+234,(((0U != (0x1fU 
                                             & (vlSelf->io_inst 
                                                >> 7U)))
                                      ? ((IData)(vlSelf->top__DOT__idio_io_toEx_mem_rd)
                                          ? ((6U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                              ? (QData)((IData)(vlSelf->top__DOT__memio_io_toWb_memRes))
                                              : ((5U 
                                                  == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__memio_io_toWb_memRes 
                                                                                >> 0x1fU)))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__memio_io_toWb_memRes)))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                                   ? (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->top__DOT__memio_io_toWb_memRes))))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                                    ? 
                                                   ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__memio_io_toWb_memRes 
                                                                  >> 0xfU)))
                                                       ? 0xffffffffffffULL
                                                       : 0ULL) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->top__DOT__memio_io_toWb_memRes)))))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                                     ? (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->top__DOT__memio_io_toWb_memRes))))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                                      ? 
                                                     ((((1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__memio_io_toWb_memRes 
                                                                    >> 7U)))
                                                         ? 0xffffffffffffffULL
                                                         : 0ULL) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->top__DOT__memio_io_toWb_memRes)))))
                                                      : vlSelf->top__DOT__memio_io_toWb_memRes))))))
                                          : vlSelf->top__DOT__exio_io_toMem_calRes)
                                      : 0ULL)),64);
        tracep->fullBit(oldp+236,(1U));
    }
}
