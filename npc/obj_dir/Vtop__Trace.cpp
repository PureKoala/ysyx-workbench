// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp405;
    VlWide<8>/*255:0*/ __Vtemp414;
    VlWide<29>/*927:0*/ __Vtemp426;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((((0xcU == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op)) 
                                     | (0xdU == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))) 
                                    | (IData)(vlSelf->top__DOT__exio__DOT__branchEna))));
            tracep->chgQData(oldp+1,(vlSelf->top__DOT__regio_io_reg_read_rs1_data),64);
            tracep->chgQData(oldp+3,(vlSelf->top__DOT__regio_io_reg_read_rs2_data),64);
            tracep->chgCData(oldp+5,(vlSelf->top__DOT__idio_io_toEx_alu_op),4);
            tracep->chgBit(oldp+6,(vlSelf->top__DOT__idio_io_toEx_mem_wr));
            tracep->chgBit(oldp+7,(vlSelf->top__DOT__idio_io_toEx_mem_rd));
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__idio_io_toEx_mask_type),3);
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__idio_io_toEx_cmp_op),3);
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__idio_io_toEx_cmp_op1),64);
            tracep->chgQData(oldp+12,(vlSelf->top__DOT__idio_io_toEx_cmp_op2),64);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__idio_io_toEx_op1),64);
            tracep->chgQData(oldp+16,((((QData)((IData)(
                                                        vlSelf->top__DOT__idio__DOT__decodeValue_7[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__idio__DOT__decodeValue_7[0U])))),64);
            tracep->chgQData(oldp+18,(((IData)(vlSelf->top__DOT__idio_io_toEx_mem_wr)
                                        ? ((7U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                            ? 0xffffffffffffffffULL
                                            : ((5U 
                                                == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                                ? (
                                                   (4U 
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
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__exio_io_toMem_calRes),64);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__memio_io_toWb_memRes),64);
            tracep->chgQData(oldp+24,(((IData)(vlSelf->top__DOT__idio_io_toEx_mem_rd)
                                        ? ((6U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                            ? (QData)((IData)(vlSelf->top__DOT__memio_io_toWb_memRes))
                                            : ((5U 
                                                == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                                ? (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__memio_io_toWb_memRes 
                                                                                >> 0x1fU)))
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__memio_io_toWb_memRes)))
                                                : (
                                                   (4U 
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
            tracep->chgQData(oldp+26,(vlSelf->top__DOT__idio__DOT__imm_utype_sext),64);
            tracep->chgQData(oldp+28,(vlSelf->top__DOT__idio__DOT__hi_4),40);
            tracep->chgWData(oldp+30,(vlSelf->top__DOT__idio__DOT__hi_lo_2),160);
            tracep->chgQData(oldp+35,(vlSelf->top__DOT__idio__DOT__imm_itype_sext),64);
            tracep->chgQData(oldp+37,(vlSelf->top__DOT__idio__DOT__imm_btype_sext),64);
            tracep->chgQData(oldp+39,(vlSelf->top__DOT__idio__DOT__imm_stype_sext),64);
            tracep->chgWData(oldp+41,(vlSelf->top__DOT__idio__DOT__decodeValue_7),901);
            tracep->chgCData(oldp+70,((0x3fU & vlSelf->top__DOT__idio__DOT__decodeValue_7[0U])),6);
            tracep->chgQData(oldp+71,((((QData)((IData)(
                                                        vlSelf->top__DOT__exio__DOT___T_49[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__exio__DOT___T_49[0U])))),64);
            tracep->chgIData(oldp+73,(((vlSelf->top__DOT__exio__DOT___T_49[0U] 
                                        >> 0x1fU) ? 0xffffffffU
                                        : 0U)),32);
            tracep->chgIData(oldp+74,(vlSelf->top__DOT__exio__DOT___T_49[0U]),32);
            tracep->chgBit(oldp+75,(vlSelf->top__DOT__exio__DOT__branchEna));
            tracep->chgSData(oldp+76,((0x3ffU & (IData)(vlSelf->top__DOT__exio_io_toMem_calRes))),10);
            tracep->chgBit(oldp+77,(((~ (IData)(vlSelf->top__DOT__idio_io_toEx_mem_rd)) 
                                     & (IData)(vlSelf->top__DOT__idio_io_toEx_mem_wr))));
            tracep->chgQData(oldp+78,(((1U & (IData)(
                                                     (vlSelf->top__DOT__memio_io_toWb_memRes 
                                                      >> 7U)))
                                        ? 0xffffffffffffffULL
                                        : 0ULL)),56);
            tracep->chgCData(oldp+80,((0xffU & (IData)(vlSelf->top__DOT__memio_io_toWb_memRes))),8);
            tracep->chgQData(oldp+81,(((1U & (IData)(
                                                     (vlSelf->top__DOT__memio_io_toWb_memRes 
                                                      >> 0xfU)))
                                        ? 0xffffffffffffULL
                                        : 0ULL)),48);
            tracep->chgSData(oldp+83,((0xffffU & (IData)(vlSelf->top__DOT__memio_io_toWb_memRes))),16);
            tracep->chgIData(oldp+84,(((1U & (IData)(
                                                     (vlSelf->top__DOT__memio_io_toWb_memRes 
                                                      >> 0x1fU)))
                                        ? 0xffffffffU
                                        : 0U)),32);
            tracep->chgIData(oldp+85,((IData)(vlSelf->top__DOT__memio_io_toWb_memRes)),32);
            tracep->chgQData(oldp+86,(((6U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
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
                                                : (
                                                   (3U 
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
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+88,(vlSelf->top__DOT__ifio__DOT__pc),32);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__regio__DOT__regFile[0]),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__regio__DOT__regFile[1]),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__regio__DOT__regFile[2]),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__regio__DOT__regFile[3]),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__regio__DOT__regFile[4]),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__regio__DOT__regFile[5]),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__regio__DOT__regFile[6]),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__regio__DOT__regFile[7]),64);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__regio__DOT__regFile[8]),64);
            tracep->chgQData(oldp+107,(vlSelf->top__DOT__regio__DOT__regFile[9]),64);
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__regio__DOT__regFile[10]),64);
            tracep->chgQData(oldp+111,(vlSelf->top__DOT__regio__DOT__regFile[11]),64);
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__regio__DOT__regFile[12]),64);
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__regio__DOT__regFile[13]),64);
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__regio__DOT__regFile[14]),64);
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__regio__DOT__regFile[15]),64);
            tracep->chgQData(oldp+121,(vlSelf->top__DOT__regio__DOT__regFile[16]),64);
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__regio__DOT__regFile[17]),64);
            tracep->chgQData(oldp+125,(vlSelf->top__DOT__regio__DOT__regFile[18]),64);
            tracep->chgQData(oldp+127,(vlSelf->top__DOT__regio__DOT__regFile[19]),64);
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__regio__DOT__regFile[20]),64);
            tracep->chgQData(oldp+131,(vlSelf->top__DOT__regio__DOT__regFile[21]),64);
            tracep->chgQData(oldp+133,(vlSelf->top__DOT__regio__DOT__regFile[22]),64);
            tracep->chgQData(oldp+135,(vlSelf->top__DOT__regio__DOT__regFile[23]),64);
            tracep->chgQData(oldp+137,(vlSelf->top__DOT__regio__DOT__regFile[24]),64);
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__regio__DOT__regFile[25]),64);
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__regio__DOT__regFile[26]),64);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__regio__DOT__regFile[27]),64);
            tracep->chgQData(oldp+145,(vlSelf->top__DOT__regio__DOT__regFile[28]),64);
            tracep->chgQData(oldp+147,(vlSelf->top__DOT__regio__DOT__regFile[29]),64);
            tracep->chgQData(oldp+149,(vlSelf->top__DOT__regio__DOT__regFile[30]),64);
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__regio__DOT__regFile[31]),64);
            tracep->chgCData(oldp+153,(vlSelf->top__DOT__bb__DOT__call),4);
        }
        tracep->chgBit(oldp+154,(vlSelf->clock));
        tracep->chgBit(oldp+155,(vlSelf->reset));
        tracep->chgIData(oldp+156,(vlSelf->io_inst_addr),32);
        tracep->chgIData(oldp+157,(vlSelf->io_inst),32);
        tracep->chgCData(oldp+158,(vlSelf->io_aluop),4);
        tracep->chgQData(oldp+159,(((0xcU == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
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
        tracep->chgCData(oldp+161,((0x1fU & (vlSelf->io_inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+162,((0x1fU & (vlSelf->io_inst 
                                             >> 0x14U))),5);
        tracep->chgBit(oldp+163,(((0x13U != (0x707fU 
                                             & vlSelf->io_inst)) 
                                  & ((0x7013U != (0x707fU 
                                                  & vlSelf->io_inst)) 
                                     & ((0x6013U != 
                                         (0x707fU & vlSelf->io_inst)) 
                                        & ((0x4013U 
                                            != (0x707fU 
                                                & vlSelf->io_inst)) 
                                           & ((0x2013U 
                                               != (0x707fU 
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
        tracep->chgBit(oldp+164,(((0x13U == (0x707fU 
                                             & vlSelf->io_inst)) 
                                  | ((0x7013U == (0x707fU 
                                                  & vlSelf->io_inst)) 
                                     | ((0x6013U == 
                                         (0x707fU & vlSelf->io_inst)) 
                                        | ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst)) 
                                           | ((0x2013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst)) 
                                              | (IData)(vlSelf->top__DOT__idio__DOT___T_348))))))));
        tracep->chgQData(oldp+165,(((0x13U == (0x707fU 
                                               & vlSelf->io_inst))
                                     ? 0x1bf52ULL : 
                                    ((0x7013U == (0x707fU 
                                                  & vlSelf->io_inst))
                                      ? 0x1bf52ULL : 
                                     ((0x6013U == (0x707fU 
                                                   & vlSelf->io_inst))
                                       ? 0x1bf52ULL
                                       : ((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->io_inst))
                                           ? 0x1bf52ULL
                                           : ((0x2013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? 0x1bf52ULL
                                               : ((0x3013U 
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
        tracep->chgCData(oldp+167,((0x1fU & (vlSelf->io_inst 
                                             >> 7U))),5);
        tracep->chgSData(oldp+168,((vlSelf->io_inst 
                                    >> 0x14U)),12);
        tracep->chgIData(oldp+169,((vlSelf->io_inst 
                                    >> 0xcU)),20);
        tracep->chgBit(oldp+170,((vlSelf->io_inst >> 0x1fU)));
        tracep->chgBit(oldp+171,((1U & (vlSelf->io_inst 
                                        >> 7U))));
        tracep->chgCData(oldp+172,((0x3fU & (vlSelf->io_inst 
                                             >> 0x19U))),6);
        tracep->chgCData(oldp+173,((0xfU & (vlSelf->io_inst 
                                            >> 8U))),4);
        tracep->chgSData(oldp+174,(((0x800U & (vlSelf->io_inst 
                                               >> 0x14U)) 
                                    | ((0x400U & (vlSelf->io_inst 
                                                  << 3U)) 
                                       | ((0x3f0U & 
                                           (vlSelf->io_inst 
                                            >> 0x15U)) 
                                          | (0xfU & 
                                             (vlSelf->io_inst 
                                              >> 8U)))))),12);
        tracep->chgCData(oldp+175,((vlSelf->io_inst 
                                    >> 0x19U)),7);
        tracep->chgSData(oldp+176,(((0xfe0U & (vlSelf->io_inst 
                                               >> 0x14U)) 
                                    | (0x1fU & (vlSelf->io_inst 
                                                >> 7U)))),12);
        tracep->chgCData(oldp+177,((0xffU & (vlSelf->io_inst 
                                             >> 0xcU))),8);
        tracep->chgBit(oldp+178,((1U & (vlSelf->io_inst 
                                        >> 0x14U))));
        tracep->chgSData(oldp+179,((0x3ffU & (vlSelf->io_inst 
                                              >> 0x15U))),10);
        tracep->chgIData(oldp+180,(((0x800000U & vlSelf->io_inst)
                                     ? 0xffffffffU : 0U)),32);
        __Vtemp405[0U] = (IData)((((QData)((IData)(
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
        __Vtemp405[1U] = ((0xf0000000U & (vlSelf->io_inst 
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
        __Vtemp405[2U] = ((0x8000U & (vlSelf->io_inst 
                                      >> 0x10U)) | 
                          ((0x7f80U & (vlSelf->io_inst 
                                       >> 5U)) | ((0x40U 
                                                   & (vlSelf->io_inst 
                                                      >> 0xeU)) 
                                                  | (0x3fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0x19U)))));
        tracep->chgWData(oldp+181,(__Vtemp405),80);
        __Vtemp414[0U] = vlSelf->top__DOT__idio__DOT__hi_lo_2[0U];
        __Vtemp414[1U] = vlSelf->top__DOT__idio__DOT__hi_lo_2[1U];
        __Vtemp414[2U] = vlSelf->top__DOT__idio__DOT__hi_lo_2[2U];
        __Vtemp414[3U] = vlSelf->top__DOT__idio__DOT__hi_lo_2[3U];
        __Vtemp414[4U] = vlSelf->top__DOT__idio__DOT__hi_lo_2[4U];
        __Vtemp414[5U] = (IData)(vlSelf->top__DOT__idio__DOT__hi_4);
        __Vtemp414[6U] = ((0xf0000000U & (vlSelf->io_inst 
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
        __Vtemp414[7U] = ((0x8000U & (vlSelf->io_inst 
                                      >> 0x10U)) | 
                          ((0x7f80U & (vlSelf->io_inst 
                                       >> 5U)) | ((0x40U 
                                                   & (vlSelf->io_inst 
                                                      >> 0xeU)) 
                                                  | (0x3fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0x19U)))));
        tracep->chgWData(oldp+184,(__Vtemp414),240);
        __Vtemp426[0U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
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
        __Vtemp426[1U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                           >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                       << 0x15U));
        __Vtemp426[2U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                           >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                       << 0x15U));
        __Vtemp426[3U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                           >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                       << 0x15U));
        __Vtemp426[4U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                           >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                       << 0x15U));
        __Vtemp426[5U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                           >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                                       << 0x15U));
        __Vtemp426[6U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                           >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                       << 0x15U));
        __Vtemp426[7U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                           >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                       << 0x15U));
        __Vtemp426[8U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                           >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                       << 0x15U));
        __Vtemp426[9U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                           >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                       << 0x15U));
        __Vtemp426[0xaU] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                             >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                                         << 0x15U));
        __Vtemp426[0xbU] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                             >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                         << 0x15U));
        __Vtemp426[0xcU] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                             >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                         << 0x15U));
        __Vtemp426[0xdU] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                             >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                         << 0x15U));
        __Vtemp426[0xeU] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                             >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                         << 0x15U));
        __Vtemp426[0xfU] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                             >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                                         << 0x15U));
        __Vtemp426[0x10U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                              >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                          << 0x15U));
        __Vtemp426[0x11U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                              >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                          << 0x15U));
        __Vtemp426[0x12U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                              >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                          << 0x15U));
        __Vtemp426[0x13U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                              >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                          << 0x15U));
        __Vtemp426[0x14U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                              << 0x15U) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                           >> 0xbU));
        __Vtemp426[0x15U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                              >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                          << 0x15U));
        __Vtemp426[0x16U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                              >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                          << 0x15U));
        __Vtemp426[0x17U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                              >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                          << 0x15U));
        __Vtemp426[0x18U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                              >> 0xbU) | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                          << 0x15U));
        __Vtemp426[0x19U] = ((vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                              >> 0xbU) | ((IData)(vlSelf->top__DOT__idio__DOT__hi_4) 
                                          << 0x15U));
        __Vtemp426[0x1aU] = (((IData)(vlSelf->top__DOT__idio__DOT__hi_4) 
                              >> 0xbU) | ((0xe0000000U 
                                           & (vlSelf->io_inst 
                                              << 8U)) 
                                          | ((IData)(
                                                     (vlSelf->top__DOT__idio__DOT__hi_4 
                                                      >> 0x20U)) 
                                             << 0x15U)));
        __Vtemp426[0x1bU] = (((0x1e0000U & (vlSelf->io_inst 
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
        __Vtemp426[0x1cU] = ((0x10U & (vlSelf->io_inst 
                                       >> 0x1bU)) | 
                             (0xfU & (vlSelf->io_inst 
                                      >> 0x10U)));
        tracep->chgWData(oldp+192,(__Vtemp426),901);
        tracep->chgQData(oldp+221,(((vlSelf->io_inst 
                                     >> 0x1fU) ? 0xfffffffffffffULL
                                     : 0ULL)),52);
        tracep->chgQData(oldp+223,(((vlSelf->io_inst 
                                     >> 0x1fU) ? 0x7ffffffffffffULL
                                     : 0ULL)),51);
        tracep->chgQData(oldp+225,(vlSelf->top__DOT__memio__DOT__regMem
                                   [(0x3ffU & (IData)(vlSelf->top__DOT__exio_io_toMem_calRes))]),64);
        tracep->chgQData(oldp+227,((((0x13U == (0x707fU 
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
                                                       : vlSelf->top__DOT__idio__DOT___T_393))))))))) 
                                    & ((IData)(vlSelf->top__DOT__idio_io_toEx_mem_wr)
                                        ? ((7U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                            ? 0xffffffffffffffffULL
                                            : ((5U 
                                                == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                                ? (
                                                   (4U 
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
        tracep->chgQData(oldp+229,(vlSelf->top__DOT__regio__DOT__regFile
                                   [(0x1fU & (vlSelf->io_inst 
                                              >> 0xfU))]),64);
        tracep->chgQData(oldp+231,(vlSelf->top__DOT__regio__DOT__regFile
                                   [(0x1fU & (vlSelf->io_inst 
                                              >> 0x14U))]),64);
        tracep->chgQData(oldp+233,(((0U != (0x1fU & 
                                            (vlSelf->io_inst 
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
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
