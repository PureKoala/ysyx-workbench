// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Variables
    CData/*3:0*/ top__DOT__idio__DOT___T_122;
    CData/*3:0*/ top__DOT__idio__DOT___T_137;
    CData/*3:0*/ top__DOT__idio__DOT___T_152;
    CData/*0:0*/ top__DOT__idio__DOT___T_234;
    CData/*2:0*/ top__DOT__idio__DOT___T_280;
    CData/*2:0*/ top__DOT__idio__DOT___T_519;
    CData/*2:0*/ top__DOT__idio__DOT___T_534;
    VlWide<29>/*900:0*/ top__DOT__idio__DOT___T_457;
    VlWide<29>/*900:0*/ top__DOT__idio__DOT___T_483;
    VlWide<29>/*900:0*/ top__DOT__idio__DOT___T_496;
    VlWide<4>/*126:0*/ top__DOT__exio__DOT___T_43;
    VlWide<29>/*927:0*/ __Vtemp87;
    VlWide<29>/*927:0*/ __Vtemp88;
    VlWide<29>/*927:0*/ __Vtemp100;
    VlWide<29>/*927:0*/ __Vtemp101;
    VlWide<29>/*927:0*/ __Vtemp108;
    VlWide<29>/*927:0*/ __Vtemp109;
    VlWide<29>/*927:0*/ __Vtemp110;
    VlWide<29>/*927:0*/ __Vtemp111;
    VlWide<29>/*927:0*/ __Vtemp112;
    VlWide<29>/*927:0*/ __Vtemp113;
    VlWide<29>/*927:0*/ __Vtemp114;
    VlWide<29>/*927:0*/ __Vtemp115;
    VlWide<29>/*927:0*/ __Vtemp116;
    VlWide<29>/*927:0*/ __Vtemp117;
    VlWide<29>/*927:0*/ __Vtemp118;
    VlWide<29>/*927:0*/ __Vtemp119;
    VlWide<29>/*927:0*/ __Vtemp120;
    VlWide<29>/*927:0*/ __Vtemp142;
    VlWide<29>/*927:0*/ __Vtemp147;
    VlWide<29>/*927:0*/ __Vtemp148;
    VlWide<29>/*927:0*/ __Vtemp149;
    VlWide<29>/*927:0*/ __Vtemp150;
    VlWide<29>/*927:0*/ __Vtemp151;
    VlWide<29>/*927:0*/ __Vtemp152;
    VlWide<29>/*927:0*/ __Vtemp153;
    VlWide<29>/*927:0*/ __Vtemp154;
    VlWide<29>/*927:0*/ __Vtemp155;
    VlWide<29>/*927:0*/ __Vtemp156;
    VlWide<29>/*927:0*/ __Vtemp157;
    VlWide<29>/*927:0*/ __Vtemp158;
    VlWide<29>/*927:0*/ __Vtemp159;
    VlWide<29>/*927:0*/ __Vtemp181;
    VlWide<29>/*927:0*/ __Vtemp186;
    VlWide<29>/*927:0*/ __Vtemp187;
    VlWide<29>/*927:0*/ __Vtemp188;
    VlWide<29>/*927:0*/ __Vtemp189;
    VlWide<29>/*927:0*/ __Vtemp190;
    VlWide<29>/*927:0*/ __Vtemp191;
    VlWide<29>/*927:0*/ __Vtemp192;
    VlWide<29>/*927:0*/ __Vtemp193;
    VlWide<29>/*927:0*/ __Vtemp194;
    VlWide<29>/*927:0*/ __Vtemp195;
    VlWide<29>/*927:0*/ __Vtemp196;
    VlWide<29>/*927:0*/ __Vtemp197;
    VlWide<29>/*927:0*/ __Vtemp198;
    VlWide<29>/*927:0*/ __Vtemp220;
    VlWide<29>/*927:0*/ __Vtemp225;
    VlWide<29>/*927:0*/ __Vtemp226;
    VlWide<29>/*927:0*/ __Vtemp227;
    VlWide<29>/*927:0*/ __Vtemp228;
    VlWide<4>/*127:0*/ __Vtemp238;
    VlWide<4>/*127:0*/ __Vtemp239;
    VlWide<4>/*127:0*/ __Vtemp240;
    VlWide<4>/*127:0*/ __Vtemp241;
    VlWide<4>/*127:0*/ __Vtemp242;
    VlWide<4>/*127:0*/ __Vtemp243;
    VlWide<4>/*127:0*/ __Vtemp253;
    VlWide<4>/*127:0*/ __Vtemp254;
    VlWide<4>/*127:0*/ __Vtemp255;
    QData/*63:0*/ top__DOT__idio__DOT___T_378;
    QData/*63:0*/ top__DOT__idio__DOT___T_416;
    QData/*63:0*/ top__DOT__idio__DOT___T_431;
    QData/*63:0*/ top__DOT__idio__DOT___T_446;
    QData/*63:0*/ top__DOT__idio__DOT___T_568;
    QData/*63:0*/ top__DOT__idio__DOT___T_583;
    QData/*63:0*/ top__DOT__idio__DOT___T_617;
    QData/*63:0*/ top__DOT__idio__DOT___T_632;
    // Body
    top__DOT__idio__DOT___T_234 = ((0x5033U != (0xfe00707fU 
                                                & vlSelf->io_inst)) 
                                   & ((0x40005033U 
                                       != (0xfe00707fU 
                                           & vlSelf->io_inst)) 
                                      & ((0x3bU != 
                                          (0xfe00707fU 
                                           & vlSelf->io_inst)) 
                                         & ((0x4000003bU 
                                             != (0xfe00707fU 
                                                 & vlSelf->io_inst)) 
                                            & ((0x103bU 
                                                != 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst)) 
                                               & ((0x503bU 
                                                   != 
                                                   (0xfe00707fU 
                                                    & vlSelf->io_inst)) 
                                                  & ((0x4000503bU 
                                                      != 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst)) 
                                                     & ((3U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->io_inst)) 
                                                        & ((0x1003U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->io_inst)) 
                                                           & ((0x2003U 
                                                               != 
                                                               (0x707fU 
                                                                & vlSelf->io_inst)) 
                                                              & ((0x3003U 
                                                                  != 
                                                                  (0x707fU 
                                                                   & vlSelf->io_inst)) 
                                                                 & ((0x4003U 
                                                                     != 
                                                                     (0x707fU 
                                                                      & vlSelf->io_inst)) 
                                                                    & ((0x5003U 
                                                                        != 
                                                                        (0x707fU 
                                                                         & vlSelf->io_inst)) 
                                                                       & ((0x6003U 
                                                                           != 
                                                                           (0x707fU 
                                                                            & vlSelf->io_inst)) 
                                                                          & ((0x23U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelf->io_inst)) 
                                                                             | ((0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | (0x3023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)))))))))))))))))));
    vlSelf->top__DOT__idio__DOT___T_189 = ((0x4033U 
                                            != (0xfe00707fU 
                                                & vlSelf->io_inst)) 
                                           & ((0x2033U 
                                               != (0xfe00707fU 
                                                   & vlSelf->io_inst)) 
                                              & ((0x3033U 
                                                  != 
                                                  (0xfe00707fU 
                                                   & vlSelf->io_inst)) 
                                                 & ((0x1033U 
                                                     != 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst)) 
                                                    & ((0x5033U 
                                                        != 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst)) 
                                                       & ((0x40005033U 
                                                           != 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst)) 
                                                          & ((0x3bU 
                                                              != 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_inst)) 
                                                             & ((0x4000003bU 
                                                                 != 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->io_inst)) 
                                                                & ((0x103bU 
                                                                    != 
                                                                    (0xfe00707fU 
                                                                     & vlSelf->io_inst)) 
                                                                   & ((0x503bU 
                                                                       != 
                                                                       (0xfe00707fU 
                                                                        & vlSelf->io_inst)) 
                                                                      & ((0x4000503bU 
                                                                          != 
                                                                          (0xfe00707fU 
                                                                           & vlSelf->io_inst)) 
                                                                         & ((3U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->io_inst)) 
                                                                            | ((0x1003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                               | ((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x3003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | (0x6003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)))))))))))))))))));
    vlSelf->top__DOT__idio__DOT___T_688 = ((0x40005013U 
                                            != (0xfc00707fU 
                                                & vlSelf->io_inst)) 
                                           & ((0x1bU 
                                               == (0x707fU 
                                                   & vlSelf->io_inst)) 
                                              | ((0x101bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->io_inst)) 
                                                 | ((0x501bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst)) 
                                                    | ((0x4000501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst)) 
                                                       | ((0x33U 
                                                           != 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst)) 
                                                          & ((0x40000033U 
                                                              != 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_inst)) 
                                                             & ((0x7033U 
                                                                 != 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->io_inst)) 
                                                                & ((0x6033U 
                                                                    != 
                                                                    (0xfe00707fU 
                                                                     & vlSelf->io_inst)) 
                                                                   & ((0x4033U 
                                                                       != 
                                                                       (0xfe00707fU 
                                                                        & vlSelf->io_inst)) 
                                                                      & ((0x2033U 
                                                                          != 
                                                                          (0xfe00707fU 
                                                                           & vlSelf->io_inst)) 
                                                                         & ((0x3033U 
                                                                             != 
                                                                             (0xfe00707fU 
                                                                              & vlSelf->io_inst)) 
                                                                            & ((0x1033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                               & ((0x5033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x40005033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x3bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x4000003bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x103bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | (0x4000503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)))))))))))))))))))));
    top__DOT__idio__DOT___T_280 = ((0x4000003bU == 
                                    (0xfe00707fU & vlSelf->io_inst))
                                    ? 0U : ((0x103bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                             ? 0U : 
                                            ((0x503bU 
                                              == (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                              ? 0U : 
                                             ((0x4000503bU 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? 0U
                                               : ((3U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 1U
                                                   : 
                                                  ((0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 3U
                                                    : 
                                                   ((0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 5U
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 7U
                                                      : 
                                                     ((0x4003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 2U
                                                       : 
                                                      ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 4U
                                                        : 
                                                       ((0x6003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 6U
                                                         : 
                                                        ((0x23U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 1U
                                                          : 
                                                         ((0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 3U
                                                           : 
                                                          ((0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 5U
                                                            : 
                                                           ((0x3023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst))
                                                             ? 7U
                                                             : 0U)))))))))))))));
    top__DOT__idio__DOT___T_519 = ((0x2003U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? 0U : ((0x3003U 
                                             == (0x707fU 
                                                 & vlSelf->io_inst))
                                             ? 0U : 
                                            ((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? 0U : 
                                             ((0x5003U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? 0U
                                               : ((0x6003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x2023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 6U
                                                         : 
                                                        ((0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 2U
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 3U
                                                           : 
                                                          ((0x4063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 4U
                                                            : 
                                                           ((0x6063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst))
                                                             ? 5U
                                                             : 0U)))))))))))))));
    top__DOT__idio__DOT___T_122 = ((0x23U == (0x707fU 
                                              & vlSelf->io_inst))
                                    ? 0U : ((0x1023U 
                                             == (0x707fU 
                                                 & vlSelf->io_inst))
                                             ? 0U : 
                                            ((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? 0U : 
                                             ((0x3023U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? 0U
                                               : ((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x6063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->io_inst))
                                                         ? 0xcU
                                                         : 
                                                        ((0x67U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 0xdU
                                                          : 
                                                         ((0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->io_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x37U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->io_inst))
                                                            ? 0xaU
                                                            : 
                                                           ((0x100073U 
                                                             == vlSelf->io_inst)
                                                             ? 0xeU
                                                             : 0U)))))))))))))));
    vlSelf->top__DOT__idio__DOT__imm_stype_sext = (
                                                   (((vlSelf->io_inst 
                                                      >> 0x1fU)
                                                      ? 0xfffffffffffffULL
                                                      : 0ULL) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0xfe0U 
                                                                       & (vlSelf->io_inst 
                                                                          >> 0x14U)) 
                                                                      | (0x1fU 
                                                                         & (vlSelf->io_inst 
                                                                            >> 7U))))));
    vlSelf->top__DOT__idio__DOT__imm_utype_sext = (
                                                   ((QData)((IData)(
                                                                    ((0x800000U 
                                                                      & vlSelf->io_inst)
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->io_inst))));
    vlSelf->top__DOT__idio__DOT__imm_btype_sext = (
                                                   (((vlSelf->io_inst 
                                                      >> 0x1fU)
                                                      ? 0x7ffffffffffffULL
                                                      : 0ULL) 
                                                    << 0xdU) 
                                                   | (QData)((IData)(
                                                                     ((0x1000U 
                                                                       & (vlSelf->io_inst 
                                                                          >> 0x13U)) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->io_inst 
                                                                             << 4U)) 
                                                                         | ((0x7e0U 
                                                                             & (vlSelf->io_inst 
                                                                                >> 0x14U)) 
                                                                            | (0x1eU 
                                                                               & (vlSelf->io_inst 
                                                                                >> 7U))))))));
    vlSelf->top__DOT__idio__DOT__imm_itype_sext = (
                                                   (((vlSelf->io_inst 
                                                      >> 0x1fU)
                                                      ? 0xfffffffffffffULL
                                                      : 0ULL) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->io_inst 
                                                                      >> 0x14U))));
    vlSelf->top__DOT__idio__DOT__hi_4 = (((QData)((IData)(
                                                          (vlSelf->io_inst 
                                                           >> 0x1fU))) 
                                          << 0x27U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & (vlSelf->io_inst 
                                                                 >> 0xcU)))) 
                                             << 0x1fU) 
                                            | (QData)((IData)(
                                                              ((0x40000000U 
                                                                & (vlSelf->io_inst 
                                                                   << 0xaU)) 
                                                               | ((0x3ff00000U 
                                                                   & (vlSelf->io_inst 
                                                                      >> 1U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->io_inst 
                                                                         >> 0xcU)) 
                                                                     | ((0x7f800U 
                                                                         & (vlSelf->io_inst 
                                                                            >> 1U)) 
                                                                        | ((0x400U 
                                                                            & (vlSelf->io_inst 
                                                                               >> 0xaU)) 
                                                                           | (0x3ffU 
                                                                              & (vlSelf->io_inst 
                                                                                >> 0x15U)))))))))));
    vlSelf->top__DOT__idio__DOT___T_348 = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst)) 
                                           | ((0x1013U 
                                               == (0xfc00707fU 
                                                   & vlSelf->io_inst)) 
                                              | ((0x5013U 
                                                  == 
                                                  (0xfc00707fU 
                                                   & vlSelf->io_inst)) 
                                                 | ((0x40005013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->io_inst)) 
                                                    | ((0x1bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst)) 
                                                       | ((0x101bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst)) 
                                                          | ((0x501bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_inst)) 
                                                             | ((0x4000501bU 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->io_inst)) 
                                                                | ((0x33U 
                                                                    == 
                                                                    (0xfe00707fU 
                                                                     & vlSelf->io_inst)) 
                                                                   | ((0x40000033U 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & vlSelf->io_inst)) 
                                                                      | ((0x7033U 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & vlSelf->io_inst)) 
                                                                         | ((0x6033U 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & vlSelf->io_inst)) 
                                                                            | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                               | ((0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x3bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x4000003bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x103bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x4000503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((3U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x1003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x3003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x6003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x1023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x2023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x3023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x63U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x5063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x7063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->io_inst)))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->io_inst_addr = vlSelf->top__DOT__ifio__DOT__pc;
    vlSelf->top__DOT__regio_io_reg_read_rs2_data = 
        ((0U != (0x1fU & (vlSelf->io_inst >> 0x14U)))
          ? vlSelf->top__DOT__regio__DOT__regFile[(0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0x14U))]
          : 0ULL);
    vlSelf->top__DOT__regio_io_reg_read_rs1_data = 
        ((0U != (0x1fU & (vlSelf->io_inst >> 0xfU)))
          ? vlSelf->top__DOT__regio__DOT__regFile[(0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0xfU))]
          : 0ULL);
    vlSelf->top__DOT__idio__DOT___T_251 = ((0x2013U 
                                            != (0x707fU 
                                                & vlSelf->io_inst)) 
                                           & ((0x3013U 
                                               != (0x707fU 
                                                   & vlSelf->io_inst)) 
                                              & ((0x1013U 
                                                  != 
                                                  (0xfc00707fU 
                                                   & vlSelf->io_inst)) 
                                                 & ((0x5013U 
                                                     != 
                                                     (0xfc00707fU 
                                                      & vlSelf->io_inst)) 
                                                    & ((0x40005013U 
                                                        != 
                                                        (0xfc00707fU 
                                                         & vlSelf->io_inst)) 
                                                       & ((0x1bU 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->io_inst)) 
                                                          & ((0x101bU 
                                                              != 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_inst)) 
                                                             & ((0x501bU 
                                                                 != 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->io_inst)) 
                                                                & ((0x4000501bU 
                                                                    != 
                                                                    (0xfe00707fU 
                                                                     & vlSelf->io_inst)) 
                                                                   & ((0x33U 
                                                                       != 
                                                                       (0xfe00707fU 
                                                                        & vlSelf->io_inst)) 
                                                                      & ((0x40000033U 
                                                                          != 
                                                                          (0xfe00707fU 
                                                                           & vlSelf->io_inst)) 
                                                                         & ((0x7033U 
                                                                             != 
                                                                             (0xfe00707fU 
                                                                              & vlSelf->io_inst)) 
                                                                            & ((0x6033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                               & ((0x4033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x2033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x3033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x1033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & (IData)(top__DOT__idio__DOT___T_234))))))))))))))))));
    vlSelf->top__DOT__idio_io_toEx_mem_rd = ((0x13U 
                                              != (0x707fU 
                                                  & vlSelf->io_inst)) 
                                             & ((0x7013U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->io_inst)) 
                                                & ((0x6013U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->io_inst)) 
                                                   & ((0x4013U 
                                                       != 
                                                       (0x707fU 
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
                                                                  & ((0x40005013U 
                                                                      != 
                                                                      (0xfc00707fU 
                                                                       & vlSelf->io_inst)) 
                                                                     & ((0x1bU 
                                                                         != 
                                                                         (0x707fU 
                                                                          & vlSelf->io_inst)) 
                                                                        & ((0x101bU 
                                                                            != 
                                                                            (0xfe00707fU 
                                                                             & vlSelf->io_inst)) 
                                                                           & ((0x501bU 
                                                                               != 
                                                                               (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                              & ((0x4000501bU 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x33U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x40000033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x7033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x6033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & (IData)(vlSelf->top__DOT__idio__DOT___T_189))))))))))))))))));
    vlSelf->top__DOT__idio__DOT___T_295 = ((0x1bU == 
                                            (0x707fU 
                                             & vlSelf->io_inst))
                                            ? 0U : 
                                           ((0x101bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                             ? 0U : 
                                            ((0x501bU 
                                              == (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                              ? 0U : 
                                             ((0x4000501bU 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? 0U
                                               : ((0x33U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->io_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x2033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x1033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x5033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x40005033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x3bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->io_inst))
                                                             ? 0U
                                                             : (IData)(top__DOT__idio__DOT___T_280))))))))))))))));
    top__DOT__idio__DOT___T_534 = ((0x7033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? 0U : ((0x6033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                             ? 0U : 
                                            ((0x4033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                              ? 0U : 
                                             ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? 0U
                                               : ((0x3033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->io_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x40005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x3bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x4000003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 0U
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x1003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst))
                                                             ? 0U
                                                             : (IData)(top__DOT__idio__DOT___T_519))))))))))))))));
    top__DOT__idio__DOT___T_137 = ((0x1033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? 2U : ((0x5033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                             ? 3U : 
                                            ((0x40005033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                              ? 4U : 
                                             ((0x3bU 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? 0U
                                               : ((0x4000003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->io_inst))
                                                   ? 1U
                                                   : 
                                                  ((0x103bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 3U
                                                     : 
                                                    ((0x4000503bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 4U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x1003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x3003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x4003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x5003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x6003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst))
                                                             ? 0U
                                                             : (IData)(top__DOT__idio__DOT___T_122))))))))))))))));
    vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] = (IData)(
                                                       (((QData)((IData)(
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
                                                                 | vlSelf->top__DOT__idio__DOT__hi_4)))));
    vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] = ((0xf0000000U 
                                                 & (vlSelf->io_inst 
                                                    << 7U)) 
                                                | (IData)(
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
    vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] = (((IData)(vlSelf->top__DOT__idio__DOT__hi_4) 
                                                 << 0x10U) 
                                                | ((0x8000U 
                                                    & (vlSelf->io_inst 
                                                       >> 0x10U)) 
                                                   | ((0x7f80U 
                                                       & (vlSelf->io_inst 
                                                          >> 5U)) 
                                                      | ((0x40U 
                                                          & (vlSelf->io_inst 
                                                             >> 0xeU)) 
                                                         | (0x3fU 
                                                            & (vlSelf->io_inst 
                                                               >> 0x19U))))));
    vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] = ((0xff000000U 
                                                 & (vlSelf->io_inst 
                                                    << 3U)) 
                                                | (((IData)(vlSelf->top__DOT__idio__DOT__hi_4) 
                                                    >> 0x10U) 
                                                   | ((IData)(
                                                              (vlSelf->top__DOT__idio__DOT__hi_4 
                                                               >> 0x20U)) 
                                                      << 0x10U)));
    vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] = ((0x80000000U 
                                                 & vlSelf->io_inst) 
                                                | ((0x7f800000U 
                                                    & (vlSelf->io_inst 
                                                       << 0xbU)) 
                                                   | ((0x400000U 
                                                       & (vlSelf->io_inst 
                                                          << 2U)) 
                                                      | ((0x3ff000U 
                                                          & (vlSelf->io_inst 
                                                             >> 9U)) 
                                                         | ((0x800U 
                                                             & (vlSelf->io_inst 
                                                                >> 0x14U)) 
                                                            | ((0x7f8U 
                                                                & (vlSelf->io_inst 
                                                                   >> 9U)) 
                                                               | ((4U 
                                                                   & (vlSelf->io_inst 
                                                                      >> 0x12U)) 
                                                                  | (3U 
                                                                     & (vlSelf->io_inst 
                                                                        >> 0x1dU)))))))));
    top__DOT__idio__DOT___T_378 = ((0x4000003bU == 
                                    (0xfe00707fU & vlSelf->io_inst))
                                    ? 0x1bf52ULL : 
                                   ((0x103bU == (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                     ? 0x1bf52ULL : 
                                    ((0x503bU == (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                      ? 0x1bf52ULL : 
                                     ((0x4000503bU 
                                       == (0xfe00707fU 
                                           & vlSelf->io_inst))
                                       ? 0x1bf52ULL
                                       : ((3U == (0x707fU 
                                                  & vlSelf->io_inst))
                                           ? 0x1bf52ULL
                                           : ((0x1003U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? 0x1bf52ULL
                                               : ((0x2003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 0x1bf52ULL
                                                   : 
                                                  ((0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0x1bf52ULL
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0x1bf52ULL
                                                     : 
                                                    ((0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0x1bf52ULL
                                                      : 
                                                     ((0x6003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0x1bf52ULL
                                                       : 
                                                      ((0x23U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? vlSelf->top__DOT__regio_io_reg_read_rs2_data
                                                        : 
                                                       ((0x1023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? vlSelf->top__DOT__regio_io_reg_read_rs2_data
                                                         : 
                                                        ((0x2023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? vlSelf->top__DOT__regio_io_reg_read_rs2_data
                                                          : 
                                                         ((0x3023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? vlSelf->top__DOT__regio_io_reg_read_rs2_data
                                                           : 0x1bf52ULL)))))))))))))));
    if ((0x2003U == (0x707fU & vlSelf->io_inst))) {
        top__DOT__idio__DOT___T_617 = 0x1bf52ULL;
        top__DOT__idio__DOT___T_568 = 0x1bf52ULL;
    } else {
        top__DOT__idio__DOT___T_617 = ((0x3003U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? 0x1bf52ULL
                                        : ((0x4003U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? 0x1bf52ULL
                                            : ((0x5003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? 0x1bf52ULL
                                                : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0x1bf52ULL
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0x1bf52ULL
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0x1bf52ULL
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0x1bf52ULL
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0x1bf52ULL
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? vlSelf->top__DOT__regio_io_reg_read_rs2_data
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? vlSelf->top__DOT__regio_io_reg_read_rs2_data
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? vlSelf->top__DOT__regio_io_reg_read_rs2_data
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? vlSelf->top__DOT__regio_io_reg_read_rs2_data
                                                            : 
                                                           ((0x4063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst))
                                                             ? vlSelf->top__DOT__regio_io_reg_read_rs2_data
                                                             : 
                                                            ((0x6063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_inst))
                                                              ? vlSelf->top__DOT__regio_io_reg_read_rs2_data
                                                              : 0x1bf52ULL))))))))))))));
        top__DOT__idio__DOT___T_568 = ((0x3003U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? 0x1bf52ULL
                                        : ((0x4003U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? 0x1bf52ULL
                                            : ((0x5003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? 0x1bf52ULL
                                                : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0x1bf52ULL
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0x1bf52ULL
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0x1bf52ULL
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0x1bf52ULL
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0x1bf52ULL
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                            : 
                                                           ((0x4063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst))
                                                             ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                             : 
                                                            ((0x6063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_inst))
                                                              ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                              : 0x1bf52ULL))))))))))))));
    }
    top__DOT__idio__DOT___T_416 = ((0x23U == (0x707fU 
                                              & vlSelf->io_inst))
                                    ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                    : ((0x1023U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                        : ((0x2023U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                            : ((0x3023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                : (
                                                   (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? (QData)((IData)(vlSelf->top__DOT__ifio__DOT__pc))
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? (QData)((IData)(vlSelf->top__DOT__ifio__DOT__pc))
                                                     : 
                                                    ((0x5063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? (QData)((IData)(vlSelf->top__DOT__ifio__DOT__pc))
                                                      : 
                                                     ((0x7063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? (QData)((IData)(vlSelf->top__DOT__ifio__DOT__pc))
                                                       : 
                                                      ((0x4063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? (QData)((IData)(vlSelf->top__DOT__ifio__DOT__pc))
                                                        : 
                                                       ((0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? (QData)((IData)(vlSelf->top__DOT__ifio__DOT__pc))
                                                         : 
                                                        ((0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->io_inst))
                                                          ? 4ULL
                                                          : 
                                                         ((0x67U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                           : 
                                                          ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->io_inst))
                                                            ? (QData)((IData)(vlSelf->top__DOT__ifio__DOT__pc))
                                                            : 
                                                           ((0x37U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->io_inst))
                                                             ? vlSelf->top__DOT__idio__DOT__imm_utype_sext
                                                             : 0x1bf52ULL))))))))))))));
    vlSelf->top__DOT__idio_io_toEx_mem_wr = ((0x13U 
                                              != (0x707fU 
                                                  & vlSelf->io_inst)) 
                                             & ((0x7013U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->io_inst)) 
                                                & ((0x6013U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->io_inst)) 
                                                   & ((0x4013U 
                                                       != 
                                                       (0x707fU 
                                                        & vlSelf->io_inst)) 
                                                      & (IData)(vlSelf->top__DOT__idio__DOT___T_251)))));
    if ((0x13U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->top__DOT__idio_io_toEx_mask_type = 0U;
        vlSelf->top__DOT__idio_io_toEx_cmp_op = 0U;
    } else {
        vlSelf->top__DOT__idio_io_toEx_mask_type = 
            ((0x7013U == (0x707fU & vlSelf->io_inst))
              ? 0U : ((0x6013U == (0x707fU & vlSelf->io_inst))
                       ? 0U : ((0x4013U == (0x707fU 
                                            & vlSelf->io_inst))
                                ? 0U : ((0x2013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? 0U : ((0x3013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst))
                                                  ? 0U
                                                  : 
                                                 ((0x1013U 
                                                   == 
                                                   (0xfc00707fU 
                                                    & vlSelf->io_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x5013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0U
                                                     : (IData)(vlSelf->top__DOT__idio__DOT___T_295)))))))));
        vlSelf->top__DOT__idio_io_toEx_cmp_op = ((0x7013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst))
                                                  ? 0U
                                                  : 
                                                 ((0x6013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x2013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x1013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x5013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x40005013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x1bU 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x101bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x501bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x4000501bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->io_inst))
                                                             ? 0U
                                                             : 
                                                            ((0x33U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_inst))
                                                              ? 0U
                                                              : 
                                                             ((0x40000033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->io_inst))
                                                               ? 0U
                                                               : (IData)(top__DOT__idio__DOT___T_534)))))))))))))));
    }
    top__DOT__idio__DOT___T_152 = ((0x3013U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? 9U : ((0x1013U 
                                             == (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                             ? 2U : 
                                            ((0x5013U 
                                              == (0xfc00707fU 
                                                  & vlSelf->io_inst))
                                              ? 3U : 
                                             ((0x40005013U 
                                               == (0xfc00707fU 
                                                   & vlSelf->io_inst))
                                               ? 4U
                                               : ((0x1bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x101bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x501bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 3U
                                                     : 
                                                    ((0x4000501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 4U
                                                      : 
                                                     ((0x33U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x40000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x7033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 5U
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 6U
                                                          : 
                                                         ((0x4033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 7U
                                                           : 
                                                          ((0x2033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 8U
                                                            : 
                                                           ((0x3033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->io_inst))
                                                             ? 9U
                                                             : (IData)(top__DOT__idio__DOT___T_137))))))))))))))));
    VL_EXTEND_WQ(901,64, __Vtemp87, vlSelf->top__DOT__idio__DOT__imm_btype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp88, vlSelf->top__DOT__idio__DOT__imm_btype_sext);
    __Vtemp100[0x1bU] = (((0x1e0000U & (vlSelf->io_inst 
                                        >> 4U)) | (
                                                   (0x10000U 
                                                    & (vlSelf->io_inst 
                                                       >> 0xfU)) 
                                                   | ((0xff00U 
                                                       & (vlSelf->io_inst 
                                                          >> 4U)) 
                                                      | ((0x80U 
                                                          & (vlSelf->io_inst 
                                                             >> 0xdU)) 
                                                         | ((0x7fU 
                                                             & (vlSelf->io_inst 
                                                                >> 0x18U)) 
                                                            | ((IData)(
                                                                       (vlSelf->top__DOT__idio__DOT__hi_4 
                                                                        >> 0x20U)) 
                                                               >> 0xbU)))))) 
                         | ((0xf0000000U & (vlSelf->io_inst 
                                            << 0x10U)) 
                            | ((0x8000000U & (vlSelf->io_inst 
                                              << 7U)) 
                               | (0x7e00000U & (vlSelf->io_inst 
                                                >> 4U)))));
    VL_EXTEND_WQ(901,64, __Vtemp101, ((0x67U == (0x707fU 
                                                 & vlSelf->io_inst))
                                       ? vlSelf->top__DOT__idio__DOT__imm_itype_sext
                                       : ((0x17U == 
                                           (0x7fU & vlSelf->io_inst))
                                           ? vlSelf->top__DOT__idio__DOT__imm_utype_sext
                                           : 0x1bf52ULL)));
    if ((0x4063U == (0x707fU & vlSelf->io_inst))) {
        top__DOT__idio__DOT___T_457[0U] = __Vtemp87[0U];
        top__DOT__idio__DOT___T_457[1U] = __Vtemp87[1U];
        top__DOT__idio__DOT___T_457[2U] = __Vtemp87[2U];
        top__DOT__idio__DOT___T_457[3U] = __Vtemp87[3U];
        top__DOT__idio__DOT___T_457[4U] = __Vtemp87[4U];
        top__DOT__idio__DOT___T_457[5U] = __Vtemp87[5U];
        top__DOT__idio__DOT___T_457[6U] = __Vtemp87[6U];
        top__DOT__idio__DOT___T_457[7U] = __Vtemp87[7U];
        top__DOT__idio__DOT___T_457[8U] = __Vtemp87[8U];
        top__DOT__idio__DOT___T_457[9U] = __Vtemp87[9U];
        top__DOT__idio__DOT___T_457[0xaU] = __Vtemp87[0xaU];
        top__DOT__idio__DOT___T_457[0xbU] = __Vtemp87[0xbU];
        top__DOT__idio__DOT___T_457[0xcU] = __Vtemp87[0xcU];
        top__DOT__idio__DOT___T_457[0xdU] = __Vtemp87[0xdU];
        top__DOT__idio__DOT___T_457[0xeU] = __Vtemp87[0xeU];
        top__DOT__idio__DOT___T_457[0xfU] = __Vtemp87[0xfU];
        top__DOT__idio__DOT___T_457[0x10U] = __Vtemp87[0x10U];
        top__DOT__idio__DOT___T_457[0x11U] = __Vtemp87[0x11U];
        top__DOT__idio__DOT___T_457[0x12U] = __Vtemp87[0x12U];
        top__DOT__idio__DOT___T_457[0x13U] = __Vtemp87[0x13U];
        top__DOT__idio__DOT___T_457[0x14U] = __Vtemp87[0x14U];
        top__DOT__idio__DOT___T_457[0x15U] = __Vtemp87[0x15U];
        top__DOT__idio__DOT___T_457[0x16U] = __Vtemp87[0x16U];
        top__DOT__idio__DOT___T_457[0x17U] = __Vtemp87[0x17U];
        top__DOT__idio__DOT___T_457[0x18U] = __Vtemp87[0x18U];
        top__DOT__idio__DOT___T_457[0x19U] = __Vtemp87[0x19U];
        top__DOT__idio__DOT___T_457[0x1aU] = __Vtemp87[0x1aU];
        top__DOT__idio__DOT___T_457[0x1bU] = __Vtemp87[0x1bU];
        top__DOT__idio__DOT___T_457[0x1cU] = __Vtemp87[0x1cU];
    } else {
        top__DOT__idio__DOT___T_457[0U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp88[0U]
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_inst))
                                                ? (
                                                   (vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                                                    << 0x15U) 
                                                   | ((0x100000U 
                                                       & (vlSelf->io_inst 
                                                          >> 0xbU)) 
                                                      | ((0xff000U 
                                                          & vlSelf->io_inst) 
                                                         | ((0x800U 
                                                             & (vlSelf->io_inst 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (vlSelf->io_inst 
                                                                  >> 0x14U))))))
                                                : __Vtemp101[0U]));
        top__DOT__idio__DOT___T_457[1U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp88[1U]
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_inst))
                                                ? (
                                                   (vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                                      << 0x15U))
                                                : __Vtemp101[1U]));
        top__DOT__idio__DOT___T_457[2U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp88[2U]
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_inst))
                                                ? (
                                                   (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                                      << 0x15U))
                                                : __Vtemp101[2U]));
        top__DOT__idio__DOT___T_457[3U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp88[3U]
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_inst))
                                                ? (
                                                   (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                                      << 0x15U))
                                                : __Vtemp101[3U]));
        top__DOT__idio__DOT___T_457[4U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp88[4U]
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_inst))
                                                ? (
                                                   (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                                      << 0x15U))
                                                : __Vtemp101[4U]));
        top__DOT__idio__DOT___T_457[5U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp88[5U]
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_inst))
                                                ? (
                                                   (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                                                      << 0x15U))
                                                : __Vtemp101[5U]));
        top__DOT__idio__DOT___T_457[6U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp88[6U]
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_inst))
                                                ? (
                                                   (vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                                      << 0x15U))
                                                : __Vtemp101[6U]));
        top__DOT__idio__DOT___T_457[7U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp88[7U]
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_inst))
                                                ? (
                                                   (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                                      << 0x15U))
                                                : __Vtemp101[7U]));
        top__DOT__idio__DOT___T_457[8U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp88[8U]
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_inst))
                                                ? (
                                                   (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                                      << 0x15U))
                                                : __Vtemp101[8U]));
        top__DOT__idio__DOT___T_457[9U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp88[9U]
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_inst))
                                                ? (
                                                   (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                                      << 0x15U))
                                                : __Vtemp101[9U]));
        top__DOT__idio__DOT___T_457[0xaU] = ((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp88[0xaU]
                                              : ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 ((vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                                   >> 0xbU) 
                                                  | (vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                                                     << 0x15U))
                                                  : 
                                                 __Vtemp101[0xaU]));
        top__DOT__idio__DOT___T_457[0xbU] = ((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp88[0xbU]
                                              : ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 ((vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                                                   >> 0xbU) 
                                                  | (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                                     << 0x15U))
                                                  : 
                                                 __Vtemp101[0xbU]));
        top__DOT__idio__DOT___T_457[0xcU] = ((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp88[0xcU]
                                              : ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 ((vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                                   >> 0xbU) 
                                                  | (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                                     << 0x15U))
                                                  : 
                                                 __Vtemp101[0xcU]));
        top__DOT__idio__DOT___T_457[0xdU] = ((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp88[0xdU]
                                              : ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 ((vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                                   >> 0xbU) 
                                                  | (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                                     << 0x15U))
                                                  : 
                                                 __Vtemp101[0xdU]));
        top__DOT__idio__DOT___T_457[0xeU] = ((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp88[0xeU]
                                              : ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 ((vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                                   >> 0xbU) 
                                                  | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                                     << 0x15U))
                                                  : 
                                                 __Vtemp101[0xeU]));
        top__DOT__idio__DOT___T_457[0xfU] = ((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp88[0xfU]
                                              : ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 ((vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                                   >> 0xbU) 
                                                  | (vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                                                     << 0x15U))
                                                  : 
                                                 __Vtemp101[0xfU]));
        top__DOT__idio__DOT___T_457[0x10U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp88[0x10U]
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  ((vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                                      << 0x15U))
                                                   : 
                                                  __Vtemp101[0x10U]));
        top__DOT__idio__DOT___T_457[0x11U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp88[0x11U]
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  ((vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                                      << 0x15U))
                                                   : 
                                                  __Vtemp101[0x11U]));
        top__DOT__idio__DOT___T_457[0x12U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp88[0x12U]
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  ((vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                                      << 0x15U))
                                                   : 
                                                  __Vtemp101[0x12U]));
        top__DOT__idio__DOT___T_457[0x13U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp88[0x13U]
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  ((vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                                      << 0x15U))
                                                   : 
                                                  __Vtemp101[0x13U]));
        top__DOT__idio__DOT___T_457[0x14U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp88[0x14U]
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  ((vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                                                    << 0x15U) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                                      >> 0xbU))
                                                   : 
                                                  __Vtemp101[0x14U]));
        top__DOT__idio__DOT___T_457[0x15U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp88[0x15U]
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  ((vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                                      << 0x15U))
                                                   : 
                                                  __Vtemp101[0x15U]));
        top__DOT__idio__DOT___T_457[0x16U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp88[0x16U]
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  ((vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                                      << 0x15U))
                                                   : 
                                                  __Vtemp101[0x16U]));
        top__DOT__idio__DOT___T_457[0x17U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp88[0x17U]
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  ((vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                                      << 0x15U))
                                                   : 
                                                  __Vtemp101[0x17U]));
        top__DOT__idio__DOT___T_457[0x18U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp88[0x18U]
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  ((vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                                      << 0x15U))
                                                   : 
                                                  __Vtemp101[0x18U]));
        top__DOT__idio__DOT___T_457[0x19U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp88[0x19U]
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  ((vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                                    >> 0xbU) 
                                                   | ((IData)(vlSelf->top__DOT__idio__DOT__hi_4) 
                                                      << 0x15U))
                                                   : 
                                                  __Vtemp101[0x19U]));
        top__DOT__idio__DOT___T_457[0x1aU] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp88[0x1aU]
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  (((IData)(vlSelf->top__DOT__idio__DOT__hi_4) 
                                                    >> 0xbU) 
                                                   | ((0xe0000000U 
                                                       & (vlSelf->io_inst 
                                                          << 8U)) 
                                                      | ((IData)(
                                                                 (vlSelf->top__DOT__idio__DOT__hi_4 
                                                                  >> 0x20U)) 
                                                         << 0x15U)))
                                                   : 
                                                  __Vtemp101[0x1aU]));
        top__DOT__idio__DOT___T_457[0x1bU] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp88[0x1bU]
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  __Vtemp100[0x1bU]
                                                   : 
                                                  __Vtemp101[0x1bU]));
        top__DOT__idio__DOT___T_457[0x1cU] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp88[0x1cU]
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  ((0x10U 
                                                    & (vlSelf->io_inst 
                                                       >> 0x1bU)) 
                                                   | (0xfU 
                                                      & (vlSelf->io_inst 
                                                         >> 0x10U)))
                                                   : 
                                                  __Vtemp101[0x1cU]));
    }
    vlSelf->top__DOT__idio__DOT___T_393 = ((0x1bU == 
                                            (0x707fU 
                                             & vlSelf->io_inst))
                                            ? 0x1bf52ULL
                                            : ((0x101bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? 0x1bf52ULL
                                                : (
                                                   (0x501bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0x1bf52ULL
                                                    : 
                                                   ((0x4000501bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0x1bf52ULL
                                                     : 
                                                    ((0x33U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0x1bf52ULL
                                                      : 
                                                     ((0x40000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0x1bf52ULL
                                                       : 
                                                      ((0x7033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0x1bf52ULL
                                                        : 
                                                       ((0x6033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 0x1bf52ULL
                                                         : 
                                                        ((0x4033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 0x1bf52ULL
                                                          : 
                                                         ((0x2033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 0x1bf52ULL
                                                           : 
                                                          ((0x3033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 0x1bf52ULL
                                                            : 
                                                           ((0x1033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->io_inst))
                                                             ? 0x1bf52ULL
                                                             : 
                                                            ((0x5033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_inst))
                                                              ? 0x1bf52ULL
                                                              : 
                                                             ((0x40005033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->io_inst))
                                                               ? 0x1bf52ULL
                                                               : 
                                                              ((0x3bU 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->io_inst))
                                                                ? 0x1bf52ULL
                                                                : top__DOT__idio__DOT___T_378)))))))))))))));
    if ((0x7033U == (0xfe00707fU & vlSelf->io_inst))) {
        top__DOT__idio__DOT___T_632 = 0x1bf52ULL;
        top__DOT__idio__DOT___T_583 = 0x1bf52ULL;
    } else {
        top__DOT__idio__DOT___T_632 = ((0x6033U == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? 0x1bf52ULL
                                        : ((0x4033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? 0x1bf52ULL
                                            : ((0x2033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? 0x1bf52ULL
                                                : (
                                                   (0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0x1bf52ULL
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0x1bf52ULL
                                                     : 
                                                    ((0x5033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0x1bf52ULL
                                                      : 
                                                     ((0x40005033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0x1bf52ULL
                                                       : 
                                                      ((0x3bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0x1bf52ULL
                                                        : 
                                                       ((0x4000003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 0x1bf52ULL
                                                         : 
                                                        ((0x103bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 0x1bf52ULL
                                                          : 
                                                         ((0x503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 0x1bf52ULL
                                                           : 
                                                          ((0x4000503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 0x1bf52ULL
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst))
                                                             ? 0x1bf52ULL
                                                             : 
                                                            ((0x1003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_inst))
                                                              ? 0x1bf52ULL
                                                              : top__DOT__idio__DOT___T_617))))))))))))));
        top__DOT__idio__DOT___T_583 = ((0x6033U == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? 0x1bf52ULL
                                        : ((0x4033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? 0x1bf52ULL
                                            : ((0x2033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? 0x1bf52ULL
                                                : (
                                                   (0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0x1bf52ULL
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0x1bf52ULL
                                                     : 
                                                    ((0x5033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0x1bf52ULL
                                                      : 
                                                     ((0x40005033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0x1bf52ULL
                                                       : 
                                                      ((0x3bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0x1bf52ULL
                                                        : 
                                                       ((0x4000003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 0x1bf52ULL
                                                         : 
                                                        ((0x103bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 0x1bf52ULL
                                                          : 
                                                         ((0x503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 0x1bf52ULL
                                                           : 
                                                          ((0x4000503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 0x1bf52ULL
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst))
                                                             ? 0x1bf52ULL
                                                             : 
                                                            ((0x1003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_inst))
                                                              ? 0x1bf52ULL
                                                              : top__DOT__idio__DOT___T_568))))))))))))));
    }
    top__DOT__idio__DOT___T_431 = ((0x1033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                    : ((0x5033U == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                        : ((0x40005033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                            : ((0x3bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                : (
                                                   (0x4000003bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                    : 
                                                   ((0x103bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                     : 
                                                    ((0x503bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                      : 
                                                     ((0x4000503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                        : 
                                                       ((0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                         : 
                                                        ((0x2003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                          : 
                                                         ((0x3003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                           : 
                                                          ((0x4003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                            : 
                                                           ((0x5003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst))
                                                             ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                             : 
                                                            ((0x6003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_inst))
                                                              ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                              : top__DOT__idio__DOT___T_416)))))))))))))));
    vlSelf->top__DOT__idio__DOT___T_156 = ((0x7013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? 5U : 
                                           ((0x6013U 
                                             == (0x707fU 
                                                 & vlSelf->io_inst))
                                             ? 6U : 
                                            ((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? 7U : 
                                             ((0x2013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? 8U
                                               : (IData)(top__DOT__idio__DOT___T_152)))));
    VL_EXTEND_WQ(901,64, __Vtemp108, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp109, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp110, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp111, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp112, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp113, vlSelf->top__DOT__idio__DOT__imm_stype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp114, vlSelf->top__DOT__idio__DOT__imm_stype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp115, vlSelf->top__DOT__idio__DOT__imm_stype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp116, vlSelf->top__DOT__idio__DOT__imm_stype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp117, vlSelf->top__DOT__idio__DOT__imm_btype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp118, vlSelf->top__DOT__idio__DOT__imm_btype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp119, vlSelf->top__DOT__idio__DOT__imm_btype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp120, vlSelf->top__DOT__idio__DOT__imm_btype_sext);
    if ((0x4003U == (0x707fU & vlSelf->io_inst))) {
        __Vtemp142[0U] = __Vtemp110[0U];
        __Vtemp142[1U] = __Vtemp110[1U];
        __Vtemp142[2U] = __Vtemp110[2U];
        __Vtemp142[3U] = __Vtemp110[3U];
        __Vtemp142[4U] = __Vtemp110[4U];
        __Vtemp142[5U] = __Vtemp110[5U];
        __Vtemp142[6U] = __Vtemp110[6U];
        __Vtemp142[7U] = __Vtemp110[7U];
        __Vtemp142[8U] = __Vtemp110[8U];
        __Vtemp142[9U] = __Vtemp110[9U];
        __Vtemp142[0xaU] = __Vtemp110[0xaU];
        __Vtemp142[0xbU] = __Vtemp110[0xbU];
        __Vtemp142[0xcU] = __Vtemp110[0xcU];
        __Vtemp142[0xdU] = __Vtemp110[0xdU];
        __Vtemp142[0xeU] = __Vtemp110[0xeU];
        __Vtemp142[0xfU] = __Vtemp110[0xfU];
        __Vtemp142[0x10U] = __Vtemp110[0x10U];
        __Vtemp142[0x11U] = __Vtemp110[0x11U];
        __Vtemp142[0x12U] = __Vtemp110[0x12U];
        __Vtemp142[0x13U] = __Vtemp110[0x13U];
        __Vtemp142[0x14U] = __Vtemp110[0x14U];
        __Vtemp142[0x15U] = __Vtemp110[0x15U];
        __Vtemp142[0x16U] = __Vtemp110[0x16U];
        __Vtemp142[0x17U] = __Vtemp110[0x17U];
        __Vtemp142[0x18U] = __Vtemp110[0x18U];
        __Vtemp142[0x19U] = __Vtemp110[0x19U];
        __Vtemp142[0x1aU] = __Vtemp110[0x1aU];
        __Vtemp142[0x1bU] = __Vtemp110[0x1bU];
        __Vtemp142[0x1cU] = __Vtemp110[0x1cU];
    } else {
        __Vtemp142[0U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                           ? __Vtemp111[0U] : ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp112[0U]
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp113[0U]
                                                    : 
                                                   ((0x1023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp114[0U]
                                                     : 
                                                    ((0x2023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp115[0U]
                                                      : 
                                                     ((0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp116[0U]
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp117[0U]
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp118[0U]
                                                         : 
                                                        ((0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp119[0U]
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp120[0U]
                                                           : 
                                                          top__DOT__idio__DOT___T_457[0U]))))))))));
        __Vtemp142[1U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                           ? __Vtemp111[1U] : ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp112[1U]
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp113[1U]
                                                    : 
                                                   ((0x1023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp114[1U]
                                                     : 
                                                    ((0x2023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp115[1U]
                                                      : 
                                                     ((0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp116[1U]
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp117[1U]
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp118[1U]
                                                         : 
                                                        ((0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp119[1U]
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp120[1U]
                                                           : 
                                                          top__DOT__idio__DOT___T_457[1U]))))))))));
        __Vtemp142[2U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                           ? __Vtemp111[2U] : ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp112[2U]
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp113[2U]
                                                    : 
                                                   ((0x1023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp114[2U]
                                                     : 
                                                    ((0x2023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp115[2U]
                                                      : 
                                                     ((0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp116[2U]
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp117[2U]
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp118[2U]
                                                         : 
                                                        ((0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp119[2U]
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp120[2U]
                                                           : 
                                                          top__DOT__idio__DOT___T_457[2U]))))))))));
        __Vtemp142[3U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                           ? __Vtemp111[3U] : ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp112[3U]
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp113[3U]
                                                    : 
                                                   ((0x1023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp114[3U]
                                                     : 
                                                    ((0x2023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp115[3U]
                                                      : 
                                                     ((0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp116[3U]
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp117[3U]
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp118[3U]
                                                         : 
                                                        ((0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp119[3U]
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp120[3U]
                                                           : 
                                                          top__DOT__idio__DOT___T_457[3U]))))))))));
        __Vtemp142[4U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                           ? __Vtemp111[4U] : ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp112[4U]
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp113[4U]
                                                    : 
                                                   ((0x1023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp114[4U]
                                                     : 
                                                    ((0x2023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp115[4U]
                                                      : 
                                                     ((0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp116[4U]
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp117[4U]
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp118[4U]
                                                         : 
                                                        ((0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp119[4U]
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp120[4U]
                                                           : 
                                                          top__DOT__idio__DOT___T_457[4U]))))))))));
        __Vtemp142[5U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                           ? __Vtemp111[5U] : ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp112[5U]
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp113[5U]
                                                    : 
                                                   ((0x1023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp114[5U]
                                                     : 
                                                    ((0x2023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp115[5U]
                                                      : 
                                                     ((0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp116[5U]
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp117[5U]
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp118[5U]
                                                         : 
                                                        ((0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp119[5U]
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp120[5U]
                                                           : 
                                                          top__DOT__idio__DOT___T_457[5U]))))))))));
        __Vtemp142[6U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                           ? __Vtemp111[6U] : ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp112[6U]
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp113[6U]
                                                    : 
                                                   ((0x1023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp114[6U]
                                                     : 
                                                    ((0x2023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp115[6U]
                                                      : 
                                                     ((0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp116[6U]
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp117[6U]
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp118[6U]
                                                         : 
                                                        ((0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp119[6U]
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp120[6U]
                                                           : 
                                                          top__DOT__idio__DOT___T_457[6U]))))))))));
        __Vtemp142[7U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                           ? __Vtemp111[7U] : ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp112[7U]
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp113[7U]
                                                    : 
                                                   ((0x1023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp114[7U]
                                                     : 
                                                    ((0x2023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp115[7U]
                                                      : 
                                                     ((0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp116[7U]
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp117[7U]
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp118[7U]
                                                         : 
                                                        ((0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp119[7U]
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp120[7U]
                                                           : 
                                                          top__DOT__idio__DOT___T_457[7U]))))))))));
        __Vtemp142[8U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                           ? __Vtemp111[8U] : ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp112[8U]
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp113[8U]
                                                    : 
                                                   ((0x1023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp114[8U]
                                                     : 
                                                    ((0x2023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp115[8U]
                                                      : 
                                                     ((0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp116[8U]
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp117[8U]
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp118[8U]
                                                         : 
                                                        ((0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp119[8U]
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp120[8U]
                                                           : 
                                                          top__DOT__idio__DOT___T_457[8U]))))))))));
        __Vtemp142[9U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                           ? __Vtemp111[9U] : ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp112[9U]
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp113[9U]
                                                    : 
                                                   ((0x1023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp114[9U]
                                                     : 
                                                    ((0x2023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp115[9U]
                                                      : 
                                                     ((0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp116[9U]
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp117[9U]
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp118[9U]
                                                         : 
                                                        ((0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp119[9U]
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp120[9U]
                                                           : 
                                                          top__DOT__idio__DOT___T_457[9U]))))))))));
        __Vtemp142[0xaU] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                             ? __Vtemp111[0xaU] : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp112[0xaU]
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp113[0xaU]
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp114[0xaU]
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp115[0xaU]
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp116[0xaU]
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp117[0xaU]
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp118[0xaU]
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp119[0xaU]
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp120[0xaU]
                                                            : 
                                                           top__DOT__idio__DOT___T_457[0xaU]))))))))));
        __Vtemp142[0xbU] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                             ? __Vtemp111[0xbU] : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp112[0xbU]
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp113[0xbU]
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp114[0xbU]
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp115[0xbU]
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp116[0xbU]
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp117[0xbU]
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp118[0xbU]
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp119[0xbU]
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp120[0xbU]
                                                            : 
                                                           top__DOT__idio__DOT___T_457[0xbU]))))))))));
        __Vtemp142[0xcU] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                             ? __Vtemp111[0xcU] : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp112[0xcU]
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp113[0xcU]
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp114[0xcU]
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp115[0xcU]
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp116[0xcU]
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp117[0xcU]
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp118[0xcU]
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp119[0xcU]
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp120[0xcU]
                                                            : 
                                                           top__DOT__idio__DOT___T_457[0xcU]))))))))));
        __Vtemp142[0xdU] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                             ? __Vtemp111[0xdU] : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp112[0xdU]
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp113[0xdU]
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp114[0xdU]
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp115[0xdU]
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp116[0xdU]
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp117[0xdU]
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp118[0xdU]
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp119[0xdU]
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp120[0xdU]
                                                            : 
                                                           top__DOT__idio__DOT___T_457[0xdU]))))))))));
        __Vtemp142[0xeU] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                             ? __Vtemp111[0xeU] : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp112[0xeU]
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp113[0xeU]
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp114[0xeU]
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp115[0xeU]
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp116[0xeU]
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp117[0xeU]
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp118[0xeU]
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp119[0xeU]
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp120[0xeU]
                                                            : 
                                                           top__DOT__idio__DOT___T_457[0xeU]))))))))));
        __Vtemp142[0xfU] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                             ? __Vtemp111[0xfU] : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp112[0xfU]
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp113[0xfU]
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp114[0xfU]
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp115[0xfU]
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp116[0xfU]
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp117[0xfU]
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp118[0xfU]
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp119[0xfU]
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp120[0xfU]
                                                            : 
                                                           top__DOT__idio__DOT___T_457[0xfU]))))))))));
        __Vtemp142[0x10U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                              ? __Vtemp111[0x10U] : 
                             ((0x6003U == (0x707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp112[0x10U] : 
                              ((0x23U == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp113[0x10U]
                                : ((0x1023U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp114[0x10U]
                                    : ((0x2023U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp115[0x10U]
                                        : ((0x3023U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp116[0x10U]
                                            : ((0x63U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp117[0x10U]
                                                : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp118[0x10U]
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp119[0x10U]
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp120[0x10U]
                                                      : 
                                                     top__DOT__idio__DOT___T_457[0x10U]))))))))));
        __Vtemp142[0x11U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                              ? __Vtemp111[0x11U] : 
                             ((0x6003U == (0x707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp112[0x11U] : 
                              ((0x23U == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp113[0x11U]
                                : ((0x1023U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp114[0x11U]
                                    : ((0x2023U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp115[0x11U]
                                        : ((0x3023U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp116[0x11U]
                                            : ((0x63U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp117[0x11U]
                                                : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp118[0x11U]
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp119[0x11U]
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp120[0x11U]
                                                      : 
                                                     top__DOT__idio__DOT___T_457[0x11U]))))))))));
        __Vtemp142[0x12U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                              ? __Vtemp111[0x12U] : 
                             ((0x6003U == (0x707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp112[0x12U] : 
                              ((0x23U == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp113[0x12U]
                                : ((0x1023U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp114[0x12U]
                                    : ((0x2023U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp115[0x12U]
                                        : ((0x3023U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp116[0x12U]
                                            : ((0x63U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp117[0x12U]
                                                : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp118[0x12U]
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp119[0x12U]
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp120[0x12U]
                                                      : 
                                                     top__DOT__idio__DOT___T_457[0x12U]))))))))));
        __Vtemp142[0x13U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                              ? __Vtemp111[0x13U] : 
                             ((0x6003U == (0x707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp112[0x13U] : 
                              ((0x23U == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp113[0x13U]
                                : ((0x1023U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp114[0x13U]
                                    : ((0x2023U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp115[0x13U]
                                        : ((0x3023U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp116[0x13U]
                                            : ((0x63U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp117[0x13U]
                                                : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp118[0x13U]
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp119[0x13U]
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp120[0x13U]
                                                      : 
                                                     top__DOT__idio__DOT___T_457[0x13U]))))))))));
        __Vtemp142[0x14U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                              ? __Vtemp111[0x14U] : 
                             ((0x6003U == (0x707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp112[0x14U] : 
                              ((0x23U == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp113[0x14U]
                                : ((0x1023U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp114[0x14U]
                                    : ((0x2023U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp115[0x14U]
                                        : ((0x3023U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp116[0x14U]
                                            : ((0x63U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp117[0x14U]
                                                : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp118[0x14U]
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp119[0x14U]
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp120[0x14U]
                                                      : 
                                                     top__DOT__idio__DOT___T_457[0x14U]))))))))));
        __Vtemp142[0x15U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                              ? __Vtemp111[0x15U] : 
                             ((0x6003U == (0x707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp112[0x15U] : 
                              ((0x23U == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp113[0x15U]
                                : ((0x1023U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp114[0x15U]
                                    : ((0x2023U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp115[0x15U]
                                        : ((0x3023U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp116[0x15U]
                                            : ((0x63U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp117[0x15U]
                                                : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp118[0x15U]
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp119[0x15U]
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp120[0x15U]
                                                      : 
                                                     top__DOT__idio__DOT___T_457[0x15U]))))))))));
        __Vtemp142[0x16U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                              ? __Vtemp111[0x16U] : 
                             ((0x6003U == (0x707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp112[0x16U] : 
                              ((0x23U == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp113[0x16U]
                                : ((0x1023U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp114[0x16U]
                                    : ((0x2023U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp115[0x16U]
                                        : ((0x3023U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp116[0x16U]
                                            : ((0x63U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp117[0x16U]
                                                : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp118[0x16U]
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp119[0x16U]
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp120[0x16U]
                                                      : 
                                                     top__DOT__idio__DOT___T_457[0x16U]))))))))));
        __Vtemp142[0x17U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                              ? __Vtemp111[0x17U] : 
                             ((0x6003U == (0x707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp112[0x17U] : 
                              ((0x23U == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp113[0x17U]
                                : ((0x1023U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp114[0x17U]
                                    : ((0x2023U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp115[0x17U]
                                        : ((0x3023U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp116[0x17U]
                                            : ((0x63U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp117[0x17U]
                                                : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp118[0x17U]
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp119[0x17U]
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp120[0x17U]
                                                      : 
                                                     top__DOT__idio__DOT___T_457[0x17U]))))))))));
        __Vtemp142[0x18U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                              ? __Vtemp111[0x18U] : 
                             ((0x6003U == (0x707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp112[0x18U] : 
                              ((0x23U == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp113[0x18U]
                                : ((0x1023U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp114[0x18U]
                                    : ((0x2023U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp115[0x18U]
                                        : ((0x3023U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp116[0x18U]
                                            : ((0x63U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp117[0x18U]
                                                : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp118[0x18U]
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp119[0x18U]
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp120[0x18U]
                                                      : 
                                                     top__DOT__idio__DOT___T_457[0x18U]))))))))));
        __Vtemp142[0x19U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                              ? __Vtemp111[0x19U] : 
                             ((0x6003U == (0x707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp112[0x19U] : 
                              ((0x23U == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp113[0x19U]
                                : ((0x1023U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp114[0x19U]
                                    : ((0x2023U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp115[0x19U]
                                        : ((0x3023U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp116[0x19U]
                                            : ((0x63U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp117[0x19U]
                                                : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp118[0x19U]
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp119[0x19U]
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp120[0x19U]
                                                      : 
                                                     top__DOT__idio__DOT___T_457[0x19U]))))))))));
        __Vtemp142[0x1aU] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                              ? __Vtemp111[0x1aU] : 
                             ((0x6003U == (0x707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp112[0x1aU] : 
                              ((0x23U == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp113[0x1aU]
                                : ((0x1023U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp114[0x1aU]
                                    : ((0x2023U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp115[0x1aU]
                                        : ((0x3023U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp116[0x1aU]
                                            : ((0x63U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp117[0x1aU]
                                                : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp118[0x1aU]
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp119[0x1aU]
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp120[0x1aU]
                                                      : 
                                                     top__DOT__idio__DOT___T_457[0x1aU]))))))))));
        __Vtemp142[0x1bU] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                              ? __Vtemp111[0x1bU] : 
                             ((0x6003U == (0x707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp112[0x1bU] : 
                              ((0x23U == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp113[0x1bU]
                                : ((0x1023U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp114[0x1bU]
                                    : ((0x2023U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp115[0x1bU]
                                        : ((0x3023U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp116[0x1bU]
                                            : ((0x63U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp117[0x1bU]
                                                : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp118[0x1bU]
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp119[0x1bU]
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp120[0x1bU]
                                                      : 
                                                     top__DOT__idio__DOT___T_457[0x1bU]))))))))));
        __Vtemp142[0x1cU] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                              ? __Vtemp111[0x1cU] : 
                             ((0x6003U == (0x707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp112[0x1cU] : 
                              ((0x23U == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp113[0x1cU]
                                : ((0x1023U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp114[0x1cU]
                                    : ((0x2023U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp115[0x1cU]
                                        : ((0x3023U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp116[0x1cU]
                                            : ((0x63U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp117[0x1cU]
                                                : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp118[0x1cU]
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp119[0x1cU]
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp120[0x1cU]
                                                      : 
                                                     top__DOT__idio__DOT___T_457[0x1cU]))))))))));
    }
    if ((0x2003U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->top__DOT__idio__DOT___T_470[0U] = __Vtemp108[0U];
        vlSelf->top__DOT__idio__DOT___T_470[1U] = __Vtemp108[1U];
        vlSelf->top__DOT__idio__DOT___T_470[2U] = __Vtemp108[2U];
        vlSelf->top__DOT__idio__DOT___T_470[3U] = __Vtemp108[3U];
        vlSelf->top__DOT__idio__DOT___T_470[4U] = __Vtemp108[4U];
        vlSelf->top__DOT__idio__DOT___T_470[5U] = __Vtemp108[5U];
        vlSelf->top__DOT__idio__DOT___T_470[6U] = __Vtemp108[6U];
        vlSelf->top__DOT__idio__DOT___T_470[7U] = __Vtemp108[7U];
        vlSelf->top__DOT__idio__DOT___T_470[8U] = __Vtemp108[8U];
        vlSelf->top__DOT__idio__DOT___T_470[9U] = __Vtemp108[9U];
        vlSelf->top__DOT__idio__DOT___T_470[0xaU] = 
            __Vtemp108[0xaU];
        vlSelf->top__DOT__idio__DOT___T_470[0xbU] = 
            __Vtemp108[0xbU];
        vlSelf->top__DOT__idio__DOT___T_470[0xcU] = 
            __Vtemp108[0xcU];
        vlSelf->top__DOT__idio__DOT___T_470[0xdU] = 
            __Vtemp108[0xdU];
        vlSelf->top__DOT__idio__DOT___T_470[0xeU] = 
            __Vtemp108[0xeU];
        vlSelf->top__DOT__idio__DOT___T_470[0xfU] = 
            __Vtemp108[0xfU];
        vlSelf->top__DOT__idio__DOT___T_470[0x10U] 
            = __Vtemp108[0x10U];
        vlSelf->top__DOT__idio__DOT___T_470[0x11U] 
            = __Vtemp108[0x11U];
        vlSelf->top__DOT__idio__DOT___T_470[0x12U] 
            = __Vtemp108[0x12U];
        vlSelf->top__DOT__idio__DOT___T_470[0x13U] 
            = __Vtemp108[0x13U];
        vlSelf->top__DOT__idio__DOT___T_470[0x14U] 
            = __Vtemp108[0x14U];
        vlSelf->top__DOT__idio__DOT___T_470[0x15U] 
            = __Vtemp108[0x15U];
        vlSelf->top__DOT__idio__DOT___T_470[0x16U] 
            = __Vtemp108[0x16U];
        vlSelf->top__DOT__idio__DOT___T_470[0x17U] 
            = __Vtemp108[0x17U];
        vlSelf->top__DOT__idio__DOT___T_470[0x18U] 
            = __Vtemp108[0x18U];
        vlSelf->top__DOT__idio__DOT___T_470[0x19U] 
            = __Vtemp108[0x19U];
        vlSelf->top__DOT__idio__DOT___T_470[0x1aU] 
            = __Vtemp108[0x1aU];
        vlSelf->top__DOT__idio__DOT___T_470[0x1bU] 
            = __Vtemp108[0x1bU];
        vlSelf->top__DOT__idio__DOT___T_470[0x1cU] 
            = __Vtemp108[0x1cU];
    } else {
        vlSelf->top__DOT__idio__DOT___T_470[0U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp109[0U]
                                                    : 
                                                   __Vtemp142[0U]);
        vlSelf->top__DOT__idio__DOT___T_470[1U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp109[1U]
                                                    : 
                                                   __Vtemp142[1U]);
        vlSelf->top__DOT__idio__DOT___T_470[2U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp109[2U]
                                                    : 
                                                   __Vtemp142[2U]);
        vlSelf->top__DOT__idio__DOT___T_470[3U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp109[3U]
                                                    : 
                                                   __Vtemp142[3U]);
        vlSelf->top__DOT__idio__DOT___T_470[4U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp109[4U]
                                                    : 
                                                   __Vtemp142[4U]);
        vlSelf->top__DOT__idio__DOT___T_470[5U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp109[5U]
                                                    : 
                                                   __Vtemp142[5U]);
        vlSelf->top__DOT__idio__DOT___T_470[6U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp109[6U]
                                                    : 
                                                   __Vtemp142[6U]);
        vlSelf->top__DOT__idio__DOT___T_470[7U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp109[7U]
                                                    : 
                                                   __Vtemp142[7U]);
        vlSelf->top__DOT__idio__DOT___T_470[8U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp109[8U]
                                                    : 
                                                   __Vtemp142[8U]);
        vlSelf->top__DOT__idio__DOT___T_470[9U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp109[9U]
                                                    : 
                                                   __Vtemp142[9U]);
        vlSelf->top__DOT__idio__DOT___T_470[0xaU] = 
            ((0x3003U == (0x707fU & vlSelf->io_inst))
              ? __Vtemp109[0xaU] : __Vtemp142[0xaU]);
        vlSelf->top__DOT__idio__DOT___T_470[0xbU] = 
            ((0x3003U == (0x707fU & vlSelf->io_inst))
              ? __Vtemp109[0xbU] : __Vtemp142[0xbU]);
        vlSelf->top__DOT__idio__DOT___T_470[0xcU] = 
            ((0x3003U == (0x707fU & vlSelf->io_inst))
              ? __Vtemp109[0xcU] : __Vtemp142[0xcU]);
        vlSelf->top__DOT__idio__DOT___T_470[0xdU] = 
            ((0x3003U == (0x707fU & vlSelf->io_inst))
              ? __Vtemp109[0xdU] : __Vtemp142[0xdU]);
        vlSelf->top__DOT__idio__DOT___T_470[0xeU] = 
            ((0x3003U == (0x707fU & vlSelf->io_inst))
              ? __Vtemp109[0xeU] : __Vtemp142[0xeU]);
        vlSelf->top__DOT__idio__DOT___T_470[0xfU] = 
            ((0x3003U == (0x707fU & vlSelf->io_inst))
              ? __Vtemp109[0xfU] : __Vtemp142[0xfU]);
        vlSelf->top__DOT__idio__DOT___T_470[0x10U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp109[0x10U] : __Vtemp142[0x10U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x11U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp109[0x11U] : __Vtemp142[0x11U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x12U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp109[0x12U] : __Vtemp142[0x12U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x13U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp109[0x13U] : __Vtemp142[0x13U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x14U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp109[0x14U] : __Vtemp142[0x14U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x15U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp109[0x15U] : __Vtemp142[0x15U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x16U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp109[0x16U] : __Vtemp142[0x16U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x17U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp109[0x17U] : __Vtemp142[0x17U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x18U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp109[0x18U] : __Vtemp142[0x18U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x19U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp109[0x19U] : __Vtemp142[0x19U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x1aU] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp109[0x1aU] : __Vtemp142[0x1aU]);
        vlSelf->top__DOT__idio__DOT___T_470[0x1bU] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp109[0x1bU] : __Vtemp142[0x1bU]);
        vlSelf->top__DOT__idio__DOT___T_470[0x1cU] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp109[0x1cU] : __Vtemp142[0x1cU]);
    }
    if ((0x13U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->top__DOT__idio_io_toEx_cmp_op2 = 0x1bf52ULL;
        vlSelf->top__DOT__idio_io_toEx_cmp_op1 = 0x1bf52ULL;
    } else {
        vlSelf->top__DOT__idio_io_toEx_cmp_op2 = ((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 0x1bf52ULL
                                                   : 
                                                  ((0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0x1bf52ULL
                                                    : 
                                                   ((0x4013U 
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
                                                          : 
                                                         ((0x1bU 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 0x1bf52ULL
                                                           : 
                                                          ((0x101bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 0x1bf52ULL
                                                            : 
                                                           ((0x501bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->io_inst))
                                                             ? 0x1bf52ULL
                                                             : 
                                                            ((0x4000501bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_inst))
                                                              ? 0x1bf52ULL
                                                              : 
                                                             ((0x33U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->io_inst))
                                                               ? 0x1bf52ULL
                                                               : 
                                                              ((0x40000033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->io_inst))
                                                                ? 0x1bf52ULL
                                                                : top__DOT__idio__DOT___T_632))))))))))))));
        vlSelf->top__DOT__idio_io_toEx_cmp_op1 = ((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 0x1bf52ULL
                                                   : 
                                                  ((0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0x1bf52ULL
                                                    : 
                                                   ((0x4013U 
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
                                                          : 
                                                         ((0x1bU 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 0x1bf52ULL
                                                           : 
                                                          ((0x101bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 0x1bf52ULL
                                                            : 
                                                           ((0x501bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->io_inst))
                                                             ? 0x1bf52ULL
                                                             : 
                                                            ((0x4000501bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_inst))
                                                              ? 0x1bf52ULL
                                                              : 
                                                             ((0x33U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->io_inst))
                                                               ? 0x1bf52ULL
                                                               : 
                                                              ((0x40000033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->io_inst))
                                                                ? 0x1bf52ULL
                                                                : top__DOT__idio__DOT___T_583))))))))))))));
    }
    top__DOT__idio__DOT___T_446 = ((0x3013U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                    : ((0x1013U == 
                                        (0xfc00707fU 
                                         & vlSelf->io_inst))
                                        ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                        : ((0x5013U 
                                            == (0xfc00707fU 
                                                & vlSelf->io_inst))
                                            ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                            : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                           : 
                                                          ((0x4033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                            : 
                                                           ((0x2033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->io_inst))
                                                             ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                             : 
                                                            ((0x3033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_inst))
                                                              ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                              : top__DOT__idio__DOT___T_431)))))))))))))));
    vlSelf->top__DOT__idio_io_toEx_alu_op = ((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? 0U : (IData)(vlSelf->top__DOT__idio__DOT___T_156));
    VL_EXTEND_WQ(901,64, __Vtemp147, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp148, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp149, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp150, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp151, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp152, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp153, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp154, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp155, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp156, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp157, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp158, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp159, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    if ((0x3033U == (0xfe00707fU & vlSelf->io_inst))) {
        __Vtemp181[0U] = __Vtemp149[0U];
        __Vtemp181[1U] = __Vtemp149[1U];
        __Vtemp181[2U] = __Vtemp149[2U];
        __Vtemp181[3U] = __Vtemp149[3U];
        __Vtemp181[4U] = __Vtemp149[4U];
        __Vtemp181[5U] = __Vtemp149[5U];
        __Vtemp181[6U] = __Vtemp149[6U];
        __Vtemp181[7U] = __Vtemp149[7U];
        __Vtemp181[8U] = __Vtemp149[8U];
        __Vtemp181[9U] = __Vtemp149[9U];
        __Vtemp181[0xaU] = __Vtemp149[0xaU];
        __Vtemp181[0xbU] = __Vtemp149[0xbU];
        __Vtemp181[0xcU] = __Vtemp149[0xcU];
        __Vtemp181[0xdU] = __Vtemp149[0xdU];
        __Vtemp181[0xeU] = __Vtemp149[0xeU];
        __Vtemp181[0xfU] = __Vtemp149[0xfU];
        __Vtemp181[0x10U] = __Vtemp149[0x10U];
        __Vtemp181[0x11U] = __Vtemp149[0x11U];
        __Vtemp181[0x12U] = __Vtemp149[0x12U];
        __Vtemp181[0x13U] = __Vtemp149[0x13U];
        __Vtemp181[0x14U] = __Vtemp149[0x14U];
        __Vtemp181[0x15U] = __Vtemp149[0x15U];
        __Vtemp181[0x16U] = __Vtemp149[0x16U];
        __Vtemp181[0x17U] = __Vtemp149[0x17U];
        __Vtemp181[0x18U] = __Vtemp149[0x18U];
        __Vtemp181[0x19U] = __Vtemp149[0x19U];
        __Vtemp181[0x1aU] = __Vtemp149[0x1aU];
        __Vtemp181[0x1bU] = __Vtemp149[0x1bU];
        __Vtemp181[0x1cU] = __Vtemp149[0x1cU];
    } else {
        __Vtemp181[0U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp150[0U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp151[0U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp152[0U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp153[0U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp154[0U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp155[0U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp156[0U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp157[0U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp158[0U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp159[0U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[0U]))))))))));
        __Vtemp181[1U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp150[1U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp151[1U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp152[1U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp153[1U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp154[1U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp155[1U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp156[1U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp157[1U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp158[1U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp159[1U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[1U]))))))))));
        __Vtemp181[2U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp150[2U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp151[2U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp152[2U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp153[2U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp154[2U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp155[2U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp156[2U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp157[2U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp158[2U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp159[2U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[2U]))))))))));
        __Vtemp181[3U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp150[3U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp151[3U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp152[3U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp153[3U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp154[3U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp155[3U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp156[3U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp157[3U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp158[3U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp159[3U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[3U]))))))))));
        __Vtemp181[4U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp150[4U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp151[4U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp152[4U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp153[4U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp154[4U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp155[4U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp156[4U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp157[4U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp158[4U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp159[4U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[4U]))))))))));
        __Vtemp181[5U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp150[5U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp151[5U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp152[5U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp153[5U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp154[5U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp155[5U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp156[5U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp157[5U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp158[5U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp159[5U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[5U]))))))))));
        __Vtemp181[6U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp150[6U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp151[6U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp152[6U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp153[6U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp154[6U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp155[6U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp156[6U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp157[6U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp158[6U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp159[6U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[6U]))))))))));
        __Vtemp181[7U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp150[7U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp151[7U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp152[7U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp153[7U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp154[7U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp155[7U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp156[7U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp157[7U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp158[7U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp159[7U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[7U]))))))))));
        __Vtemp181[8U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp150[8U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp151[8U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp152[8U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp153[8U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp154[8U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp155[8U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp156[8U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp157[8U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp158[8U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp159[8U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[8U]))))))))));
        __Vtemp181[9U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp150[9U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp151[9U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp152[9U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp153[9U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp154[9U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp155[9U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp156[9U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp157[9U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp158[9U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp159[9U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[9U]))))))))));
        __Vtemp181[0xaU] = ((0x1033U == (0xfe00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp150[0xaU] : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp151[0xaU]
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp152[0xaU]
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp153[0xaU]
                                                      : 
                                                     ((0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp154[0xaU]
                                                       : 
                                                      ((0x103bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp155[0xaU]
                                                        : 
                                                       ((0x503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp156[0xaU]
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp157[0xaU]
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp158[0xaU]
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp159[0xaU]
                                                            : 
                                                           vlSelf->top__DOT__idio__DOT___T_470[0xaU]))))))))));
        __Vtemp181[0xbU] = ((0x1033U == (0xfe00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp150[0xbU] : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp151[0xbU]
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp152[0xbU]
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp153[0xbU]
                                                      : 
                                                     ((0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp154[0xbU]
                                                       : 
                                                      ((0x103bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp155[0xbU]
                                                        : 
                                                       ((0x503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp156[0xbU]
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp157[0xbU]
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp158[0xbU]
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp159[0xbU]
                                                            : 
                                                           vlSelf->top__DOT__idio__DOT___T_470[0xbU]))))))))));
        __Vtemp181[0xcU] = ((0x1033U == (0xfe00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp150[0xcU] : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp151[0xcU]
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp152[0xcU]
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp153[0xcU]
                                                      : 
                                                     ((0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp154[0xcU]
                                                       : 
                                                      ((0x103bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp155[0xcU]
                                                        : 
                                                       ((0x503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp156[0xcU]
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp157[0xcU]
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp158[0xcU]
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp159[0xcU]
                                                            : 
                                                           vlSelf->top__DOT__idio__DOT___T_470[0xcU]))))))))));
        __Vtemp181[0xdU] = ((0x1033U == (0xfe00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp150[0xdU] : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp151[0xdU]
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp152[0xdU]
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp153[0xdU]
                                                      : 
                                                     ((0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp154[0xdU]
                                                       : 
                                                      ((0x103bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp155[0xdU]
                                                        : 
                                                       ((0x503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp156[0xdU]
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp157[0xdU]
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp158[0xdU]
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp159[0xdU]
                                                            : 
                                                           vlSelf->top__DOT__idio__DOT___T_470[0xdU]))))))))));
        __Vtemp181[0xeU] = ((0x1033U == (0xfe00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp150[0xeU] : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp151[0xeU]
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp152[0xeU]
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp153[0xeU]
                                                      : 
                                                     ((0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp154[0xeU]
                                                       : 
                                                      ((0x103bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp155[0xeU]
                                                        : 
                                                       ((0x503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp156[0xeU]
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp157[0xeU]
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp158[0xeU]
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp159[0xeU]
                                                            : 
                                                           vlSelf->top__DOT__idio__DOT___T_470[0xeU]))))))))));
        __Vtemp181[0xfU] = ((0x1033U == (0xfe00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp150[0xfU] : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp151[0xfU]
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp152[0xfU]
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp153[0xfU]
                                                      : 
                                                     ((0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp154[0xfU]
                                                       : 
                                                      ((0x103bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp155[0xfU]
                                                        : 
                                                       ((0x503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp156[0xfU]
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp157[0xfU]
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp158[0xfU]
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp159[0xfU]
                                                            : 
                                                           vlSelf->top__DOT__idio__DOT___T_470[0xfU]))))))))));
        __Vtemp181[0x10U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp150[0x10U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp151[0x10U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp152[0x10U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp153[0x10U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp154[0x10U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp155[0x10U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp156[0x10U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp157[0x10U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp158[0x10U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp159[0x10U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x10U]))))))))));
        __Vtemp181[0x11U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp150[0x11U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp151[0x11U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp152[0x11U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp153[0x11U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp154[0x11U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp155[0x11U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp156[0x11U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp157[0x11U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp158[0x11U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp159[0x11U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x11U]))))))))));
        __Vtemp181[0x12U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp150[0x12U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp151[0x12U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp152[0x12U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp153[0x12U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp154[0x12U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp155[0x12U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp156[0x12U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp157[0x12U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp158[0x12U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp159[0x12U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x12U]))))))))));
        __Vtemp181[0x13U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp150[0x13U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp151[0x13U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp152[0x13U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp153[0x13U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp154[0x13U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp155[0x13U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp156[0x13U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp157[0x13U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp158[0x13U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp159[0x13U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x13U]))))))))));
        __Vtemp181[0x14U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp150[0x14U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp151[0x14U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp152[0x14U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp153[0x14U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp154[0x14U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp155[0x14U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp156[0x14U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp157[0x14U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp158[0x14U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp159[0x14U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x14U]))))))))));
        __Vtemp181[0x15U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp150[0x15U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp151[0x15U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp152[0x15U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp153[0x15U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp154[0x15U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp155[0x15U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp156[0x15U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp157[0x15U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp158[0x15U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp159[0x15U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x15U]))))))))));
        __Vtemp181[0x16U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp150[0x16U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp151[0x16U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp152[0x16U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp153[0x16U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp154[0x16U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp155[0x16U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp156[0x16U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp157[0x16U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp158[0x16U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp159[0x16U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x16U]))))))))));
        __Vtemp181[0x17U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp150[0x17U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp151[0x17U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp152[0x17U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp153[0x17U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp154[0x17U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp155[0x17U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp156[0x17U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp157[0x17U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp158[0x17U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp159[0x17U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x17U]))))))))));
        __Vtemp181[0x18U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp150[0x18U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp151[0x18U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp152[0x18U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp153[0x18U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp154[0x18U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp155[0x18U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp156[0x18U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp157[0x18U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp158[0x18U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp159[0x18U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x18U]))))))))));
        __Vtemp181[0x19U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp150[0x19U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp151[0x19U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp152[0x19U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp153[0x19U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp154[0x19U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp155[0x19U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp156[0x19U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp157[0x19U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp158[0x19U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp159[0x19U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x19U]))))))))));
        __Vtemp181[0x1aU] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp150[0x1aU] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp151[0x1aU] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp152[0x1aU]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp153[0x1aU]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp154[0x1aU]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp155[0x1aU]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp156[0x1aU]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp157[0x1aU]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp158[0x1aU]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp159[0x1aU]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x1aU]))))))))));
        __Vtemp181[0x1bU] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp150[0x1bU] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp151[0x1bU] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp152[0x1bU]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp153[0x1bU]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp154[0x1bU]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp155[0x1bU]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp156[0x1bU]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp157[0x1bU]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp158[0x1bU]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp159[0x1bU]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x1bU]))))))))));
        __Vtemp181[0x1cU] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp150[0x1cU] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp151[0x1cU] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp152[0x1cU]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp153[0x1cU]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp154[0x1cU]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp155[0x1cU]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp156[0x1cU]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp157[0x1cU]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp158[0x1cU]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp159[0x1cU]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x1cU]))))))))));
    }
    if ((0x4033U == (0xfe00707fU & vlSelf->io_inst))) {
        top__DOT__idio__DOT___T_483[0U] = __Vtemp147[0U];
        top__DOT__idio__DOT___T_483[1U] = __Vtemp147[1U];
        top__DOT__idio__DOT___T_483[2U] = __Vtemp147[2U];
        top__DOT__idio__DOT___T_483[3U] = __Vtemp147[3U];
        top__DOT__idio__DOT___T_483[4U] = __Vtemp147[4U];
        top__DOT__idio__DOT___T_483[5U] = __Vtemp147[5U];
        top__DOT__idio__DOT___T_483[6U] = __Vtemp147[6U];
        top__DOT__idio__DOT___T_483[7U] = __Vtemp147[7U];
        top__DOT__idio__DOT___T_483[8U] = __Vtemp147[8U];
        top__DOT__idio__DOT___T_483[9U] = __Vtemp147[9U];
        top__DOT__idio__DOT___T_483[0xaU] = __Vtemp147[0xaU];
        top__DOT__idio__DOT___T_483[0xbU] = __Vtemp147[0xbU];
        top__DOT__idio__DOT___T_483[0xcU] = __Vtemp147[0xcU];
        top__DOT__idio__DOT___T_483[0xdU] = __Vtemp147[0xdU];
        top__DOT__idio__DOT___T_483[0xeU] = __Vtemp147[0xeU];
        top__DOT__idio__DOT___T_483[0xfU] = __Vtemp147[0xfU];
        top__DOT__idio__DOT___T_483[0x10U] = __Vtemp147[0x10U];
        top__DOT__idio__DOT___T_483[0x11U] = __Vtemp147[0x11U];
        top__DOT__idio__DOT___T_483[0x12U] = __Vtemp147[0x12U];
        top__DOT__idio__DOT___T_483[0x13U] = __Vtemp147[0x13U];
        top__DOT__idio__DOT___T_483[0x14U] = __Vtemp147[0x14U];
        top__DOT__idio__DOT___T_483[0x15U] = __Vtemp147[0x15U];
        top__DOT__idio__DOT___T_483[0x16U] = __Vtemp147[0x16U];
        top__DOT__idio__DOT___T_483[0x17U] = __Vtemp147[0x17U];
        top__DOT__idio__DOT___T_483[0x18U] = __Vtemp147[0x18U];
        top__DOT__idio__DOT___T_483[0x19U] = __Vtemp147[0x19U];
        top__DOT__idio__DOT___T_483[0x1aU] = __Vtemp147[0x1aU];
        top__DOT__idio__DOT___T_483[0x1bU] = __Vtemp147[0x1bU];
        top__DOT__idio__DOT___T_483[0x1cU] = __Vtemp147[0x1cU];
    } else {
        top__DOT__idio__DOT___T_483[0U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp148[0U]
                                            : __Vtemp181[0U]);
        top__DOT__idio__DOT___T_483[1U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp148[1U]
                                            : __Vtemp181[1U]);
        top__DOT__idio__DOT___T_483[2U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp148[2U]
                                            : __Vtemp181[2U]);
        top__DOT__idio__DOT___T_483[3U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp148[3U]
                                            : __Vtemp181[3U]);
        top__DOT__idio__DOT___T_483[4U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp148[4U]
                                            : __Vtemp181[4U]);
        top__DOT__idio__DOT___T_483[5U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp148[5U]
                                            : __Vtemp181[5U]);
        top__DOT__idio__DOT___T_483[6U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp148[6U]
                                            : __Vtemp181[6U]);
        top__DOT__idio__DOT___T_483[7U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp148[7U]
                                            : __Vtemp181[7U]);
        top__DOT__idio__DOT___T_483[8U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp148[8U]
                                            : __Vtemp181[8U]);
        top__DOT__idio__DOT___T_483[9U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp148[9U]
                                            : __Vtemp181[9U]);
        top__DOT__idio__DOT___T_483[0xaU] = ((0x2033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp148[0xaU]
                                              : __Vtemp181[0xaU]);
        top__DOT__idio__DOT___T_483[0xbU] = ((0x2033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp148[0xbU]
                                              : __Vtemp181[0xbU]);
        top__DOT__idio__DOT___T_483[0xcU] = ((0x2033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp148[0xcU]
                                              : __Vtemp181[0xcU]);
        top__DOT__idio__DOT___T_483[0xdU] = ((0x2033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp148[0xdU]
                                              : __Vtemp181[0xdU]);
        top__DOT__idio__DOT___T_483[0xeU] = ((0x2033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp148[0xeU]
                                              : __Vtemp181[0xeU]);
        top__DOT__idio__DOT___T_483[0xfU] = ((0x2033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp148[0xfU]
                                              : __Vtemp181[0xfU]);
        top__DOT__idio__DOT___T_483[0x10U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp148[0x10U]
                                               : __Vtemp181[0x10U]);
        top__DOT__idio__DOT___T_483[0x11U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp148[0x11U]
                                               : __Vtemp181[0x11U]);
        top__DOT__idio__DOT___T_483[0x12U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp148[0x12U]
                                               : __Vtemp181[0x12U]);
        top__DOT__idio__DOT___T_483[0x13U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp148[0x13U]
                                               : __Vtemp181[0x13U]);
        top__DOT__idio__DOT___T_483[0x14U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp148[0x14U]
                                               : __Vtemp181[0x14U]);
        top__DOT__idio__DOT___T_483[0x15U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp148[0x15U]
                                               : __Vtemp181[0x15U]);
        top__DOT__idio__DOT___T_483[0x16U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp148[0x16U]
                                               : __Vtemp181[0x16U]);
        top__DOT__idio__DOT___T_483[0x17U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp148[0x17U]
                                               : __Vtemp181[0x17U]);
        top__DOT__idio__DOT___T_483[0x18U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp148[0x18U]
                                               : __Vtemp181[0x18U]);
        top__DOT__idio__DOT___T_483[0x19U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp148[0x19U]
                                               : __Vtemp181[0x19U]);
        top__DOT__idio__DOT___T_483[0x1aU] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp148[0x1aU]
                                               : __Vtemp181[0x1aU]);
        top__DOT__idio__DOT___T_483[0x1bU] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp148[0x1bU]
                                               : __Vtemp181[0x1bU]);
        top__DOT__idio__DOT___T_483[0x1cU] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp148[0x1cU]
                                               : __Vtemp181[0x1cU]);
    }
    vlSelf->top__DOT__exio__DOT__branchEna = ((5U == (IData)(vlSelf->top__DOT__idio_io_toEx_cmp_op))
                                               ? (vlSelf->top__DOT__idio_io_toEx_cmp_op1 
                                                  < vlSelf->top__DOT__idio_io_toEx_cmp_op2)
                                               : ((4U 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_cmp_op))
                                                   ? 
                                                  VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__idio_io_toEx_cmp_op1, vlSelf->top__DOT__idio_io_toEx_cmp_op2)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__idio_io_toEx_cmp_op))
                                                    ? 
                                                   (vlSelf->top__DOT__idio_io_toEx_cmp_op1 
                                                    >= vlSelf->top__DOT__idio_io_toEx_cmp_op2)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__idio_io_toEx_cmp_op))
                                                     ? 
                                                    VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__idio_io_toEx_cmp_op1, vlSelf->top__DOT__idio_io_toEx_cmp_op2)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->top__DOT__idio_io_toEx_cmp_op))
                                                      ? 
                                                     (vlSelf->top__DOT__idio_io_toEx_cmp_op1 
                                                      != vlSelf->top__DOT__idio_io_toEx_cmp_op2)
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->top__DOT__idio_io_toEx_cmp_op)) 
                                                      & (vlSelf->top__DOT__idio_io_toEx_cmp_op1 
                                                         == vlSelf->top__DOT__idio_io_toEx_cmp_op2)))))));
    vlSelf->top__DOT__idio_io_toEx_op1 = ((0x13U == 
                                           (0x707fU 
                                            & vlSelf->io_inst))
                                           ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                           : ((0x7013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                               : ((0x6013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                   : 
                                                  ((0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                    : 
                                                   ((0x2013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? vlSelf->top__DOT__regio_io_reg_read_rs1_data
                                                     : top__DOT__idio__DOT___T_446)))));
    vlSelf->io_aluop = vlSelf->top__DOT__idio_io_toEx_alu_op;
    VL_EXTEND_WQ(901,64, __Vtemp186, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp187, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp188, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp189, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp190, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp191, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp192, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp193, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp194, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp195, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp196, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp197, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp198, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    if ((0x1013U == (0xfc00707fU & vlSelf->io_inst))) {
        __Vtemp220[0U] = __Vtemp188[0U];
        __Vtemp220[1U] = __Vtemp188[1U];
        __Vtemp220[2U] = __Vtemp188[2U];
        __Vtemp220[3U] = __Vtemp188[3U];
        __Vtemp220[4U] = __Vtemp188[4U];
        __Vtemp220[5U] = __Vtemp188[5U];
        __Vtemp220[6U] = __Vtemp188[6U];
        __Vtemp220[7U] = __Vtemp188[7U];
        __Vtemp220[8U] = __Vtemp188[8U];
        __Vtemp220[9U] = __Vtemp188[9U];
        __Vtemp220[0xaU] = __Vtemp188[0xaU];
        __Vtemp220[0xbU] = __Vtemp188[0xbU];
        __Vtemp220[0xcU] = __Vtemp188[0xcU];
        __Vtemp220[0xdU] = __Vtemp188[0xdU];
        __Vtemp220[0xeU] = __Vtemp188[0xeU];
        __Vtemp220[0xfU] = __Vtemp188[0xfU];
        __Vtemp220[0x10U] = __Vtemp188[0x10U];
        __Vtemp220[0x11U] = __Vtemp188[0x11U];
        __Vtemp220[0x12U] = __Vtemp188[0x12U];
        __Vtemp220[0x13U] = __Vtemp188[0x13U];
        __Vtemp220[0x14U] = __Vtemp188[0x14U];
        __Vtemp220[0x15U] = __Vtemp188[0x15U];
        __Vtemp220[0x16U] = __Vtemp188[0x16U];
        __Vtemp220[0x17U] = __Vtemp188[0x17U];
        __Vtemp220[0x18U] = __Vtemp188[0x18U];
        __Vtemp220[0x19U] = __Vtemp188[0x19U];
        __Vtemp220[0x1aU] = __Vtemp188[0x1aU];
        __Vtemp220[0x1bU] = __Vtemp188[0x1bU];
        __Vtemp220[0x1cU] = __Vtemp188[0x1cU];
    } else {
        __Vtemp220[0U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp189[0U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp190[0U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp191[0U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp192[0U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp193[0U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp194[0U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp195[0U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp196[0U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp197[0U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp198[0U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[0U]))))))))));
        __Vtemp220[1U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp189[1U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp190[1U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp191[1U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp192[1U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp193[1U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp194[1U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp195[1U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp196[1U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp197[1U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp198[1U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[1U]))))))))));
        __Vtemp220[2U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp189[2U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp190[2U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp191[2U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp192[2U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp193[2U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp194[2U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp195[2U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp196[2U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp197[2U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp198[2U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[2U]))))))))));
        __Vtemp220[3U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp189[3U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp190[3U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp191[3U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp192[3U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp193[3U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp194[3U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp195[3U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp196[3U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp197[3U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp198[3U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[3U]))))))))));
        __Vtemp220[4U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp189[4U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp190[4U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp191[4U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp192[4U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp193[4U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp194[4U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp195[4U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp196[4U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp197[4U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp198[4U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[4U]))))))))));
        __Vtemp220[5U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp189[5U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp190[5U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp191[5U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp192[5U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp193[5U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp194[5U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp195[5U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp196[5U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp197[5U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp198[5U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[5U]))))))))));
        __Vtemp220[6U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp189[6U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp190[6U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp191[6U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp192[6U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp193[6U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp194[6U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp195[6U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp196[6U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp197[6U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp198[6U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[6U]))))))))));
        __Vtemp220[7U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp189[7U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp190[7U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp191[7U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp192[7U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp193[7U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp194[7U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp195[7U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp196[7U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp197[7U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp198[7U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[7U]))))))))));
        __Vtemp220[8U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp189[8U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp190[8U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp191[8U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp192[8U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp193[8U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp194[8U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp195[8U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp196[8U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp197[8U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp198[8U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[8U]))))))))));
        __Vtemp220[9U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp189[9U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp190[9U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp191[9U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp192[9U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp193[9U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp194[9U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp195[9U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp196[9U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp197[9U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp198[9U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[9U]))))))))));
        __Vtemp220[0xaU] = ((0x5013U == (0xfc00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp189[0xaU] : (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp190[0xaU]
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp191[0xaU]
                                                     : 
                                                    ((0x101bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp192[0xaU]
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp193[0xaU]
                                                       : 
                                                      ((0x4000501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp194[0xaU]
                                                        : 
                                                       ((0x33U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp195[0xaU]
                                                         : 
                                                        ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp196[0xaU]
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp197[0xaU]
                                                           : 
                                                          ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp198[0xaU]
                                                            : 
                                                           top__DOT__idio__DOT___T_483[0xaU]))))))))));
        __Vtemp220[0xbU] = ((0x5013U == (0xfc00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp189[0xbU] : (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp190[0xbU]
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp191[0xbU]
                                                     : 
                                                    ((0x101bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp192[0xbU]
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp193[0xbU]
                                                       : 
                                                      ((0x4000501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp194[0xbU]
                                                        : 
                                                       ((0x33U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp195[0xbU]
                                                         : 
                                                        ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp196[0xbU]
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp197[0xbU]
                                                           : 
                                                          ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp198[0xbU]
                                                            : 
                                                           top__DOT__idio__DOT___T_483[0xbU]))))))))));
        __Vtemp220[0xcU] = ((0x5013U == (0xfc00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp189[0xcU] : (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp190[0xcU]
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp191[0xcU]
                                                     : 
                                                    ((0x101bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp192[0xcU]
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp193[0xcU]
                                                       : 
                                                      ((0x4000501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp194[0xcU]
                                                        : 
                                                       ((0x33U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp195[0xcU]
                                                         : 
                                                        ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp196[0xcU]
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp197[0xcU]
                                                           : 
                                                          ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp198[0xcU]
                                                            : 
                                                           top__DOT__idio__DOT___T_483[0xcU]))))))))));
        __Vtemp220[0xdU] = ((0x5013U == (0xfc00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp189[0xdU] : (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp190[0xdU]
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp191[0xdU]
                                                     : 
                                                    ((0x101bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp192[0xdU]
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp193[0xdU]
                                                       : 
                                                      ((0x4000501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp194[0xdU]
                                                        : 
                                                       ((0x33U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp195[0xdU]
                                                         : 
                                                        ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp196[0xdU]
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp197[0xdU]
                                                           : 
                                                          ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp198[0xdU]
                                                            : 
                                                           top__DOT__idio__DOT___T_483[0xdU]))))))))));
        __Vtemp220[0xeU] = ((0x5013U == (0xfc00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp189[0xeU] : (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp190[0xeU]
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp191[0xeU]
                                                     : 
                                                    ((0x101bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp192[0xeU]
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp193[0xeU]
                                                       : 
                                                      ((0x4000501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp194[0xeU]
                                                        : 
                                                       ((0x33U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp195[0xeU]
                                                         : 
                                                        ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp196[0xeU]
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp197[0xeU]
                                                           : 
                                                          ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp198[0xeU]
                                                            : 
                                                           top__DOT__idio__DOT___T_483[0xeU]))))))))));
        __Vtemp220[0xfU] = ((0x5013U == (0xfc00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp189[0xfU] : (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp190[0xfU]
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp191[0xfU]
                                                     : 
                                                    ((0x101bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp192[0xfU]
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp193[0xfU]
                                                       : 
                                                      ((0x4000501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp194[0xfU]
                                                        : 
                                                       ((0x33U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp195[0xfU]
                                                         : 
                                                        ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp196[0xfU]
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp197[0xfU]
                                                           : 
                                                          ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp198[0xfU]
                                                            : 
                                                           top__DOT__idio__DOT___T_483[0xfU]))))))))));
        __Vtemp220[0x10U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp189[0x10U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp190[0x10U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp191[0x10U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp192[0x10U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp193[0x10U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp194[0x10U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp195[0x10U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp196[0x10U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp197[0x10U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp198[0x10U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x10U]))))))))));
        __Vtemp220[0x11U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp189[0x11U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp190[0x11U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp191[0x11U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp192[0x11U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp193[0x11U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp194[0x11U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp195[0x11U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp196[0x11U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp197[0x11U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp198[0x11U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x11U]))))))))));
        __Vtemp220[0x12U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp189[0x12U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp190[0x12U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp191[0x12U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp192[0x12U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp193[0x12U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp194[0x12U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp195[0x12U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp196[0x12U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp197[0x12U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp198[0x12U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x12U]))))))))));
        __Vtemp220[0x13U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp189[0x13U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp190[0x13U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp191[0x13U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp192[0x13U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp193[0x13U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp194[0x13U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp195[0x13U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp196[0x13U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp197[0x13U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp198[0x13U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x13U]))))))))));
        __Vtemp220[0x14U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp189[0x14U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp190[0x14U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp191[0x14U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp192[0x14U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp193[0x14U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp194[0x14U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp195[0x14U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp196[0x14U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp197[0x14U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp198[0x14U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x14U]))))))))));
        __Vtemp220[0x15U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp189[0x15U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp190[0x15U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp191[0x15U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp192[0x15U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp193[0x15U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp194[0x15U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp195[0x15U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp196[0x15U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp197[0x15U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp198[0x15U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x15U]))))))))));
        __Vtemp220[0x16U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp189[0x16U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp190[0x16U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp191[0x16U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp192[0x16U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp193[0x16U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp194[0x16U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp195[0x16U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp196[0x16U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp197[0x16U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp198[0x16U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x16U]))))))))));
        __Vtemp220[0x17U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp189[0x17U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp190[0x17U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp191[0x17U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp192[0x17U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp193[0x17U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp194[0x17U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp195[0x17U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp196[0x17U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp197[0x17U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp198[0x17U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x17U]))))))))));
        __Vtemp220[0x18U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp189[0x18U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp190[0x18U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp191[0x18U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp192[0x18U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp193[0x18U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp194[0x18U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp195[0x18U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp196[0x18U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp197[0x18U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp198[0x18U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x18U]))))))))));
        __Vtemp220[0x19U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp189[0x19U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp190[0x19U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp191[0x19U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp192[0x19U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp193[0x19U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp194[0x19U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp195[0x19U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp196[0x19U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp197[0x19U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp198[0x19U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x19U]))))))))));
        __Vtemp220[0x1aU] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp189[0x1aU] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp190[0x1aU] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp191[0x1aU]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp192[0x1aU]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp193[0x1aU]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp194[0x1aU]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp195[0x1aU]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp196[0x1aU]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp197[0x1aU]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp198[0x1aU]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x1aU]))))))))));
        __Vtemp220[0x1bU] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp189[0x1bU] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp190[0x1bU] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp191[0x1bU]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp192[0x1bU]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp193[0x1bU]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp194[0x1bU]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp195[0x1bU]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp196[0x1bU]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp197[0x1bU]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp198[0x1bU]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x1bU]))))))))));
        __Vtemp220[0x1cU] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp189[0x1cU] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp190[0x1cU] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp191[0x1cU]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp192[0x1cU]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp193[0x1cU]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp194[0x1cU]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp195[0x1cU]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp196[0x1cU]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp197[0x1cU]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp198[0x1cU]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x1cU]))))))))));
    }
    if ((0x2013U == (0x707fU & vlSelf->io_inst))) {
        top__DOT__idio__DOT___T_496[0U] = __Vtemp186[0U];
        top__DOT__idio__DOT___T_496[1U] = __Vtemp186[1U];
        top__DOT__idio__DOT___T_496[2U] = __Vtemp186[2U];
        top__DOT__idio__DOT___T_496[3U] = __Vtemp186[3U];
        top__DOT__idio__DOT___T_496[4U] = __Vtemp186[4U];
        top__DOT__idio__DOT___T_496[5U] = __Vtemp186[5U];
        top__DOT__idio__DOT___T_496[6U] = __Vtemp186[6U];
        top__DOT__idio__DOT___T_496[7U] = __Vtemp186[7U];
        top__DOT__idio__DOT___T_496[8U] = __Vtemp186[8U];
        top__DOT__idio__DOT___T_496[9U] = __Vtemp186[9U];
        top__DOT__idio__DOT___T_496[0xaU] = __Vtemp186[0xaU];
        top__DOT__idio__DOT___T_496[0xbU] = __Vtemp186[0xbU];
        top__DOT__idio__DOT___T_496[0xcU] = __Vtemp186[0xcU];
        top__DOT__idio__DOT___T_496[0xdU] = __Vtemp186[0xdU];
        top__DOT__idio__DOT___T_496[0xeU] = __Vtemp186[0xeU];
        top__DOT__idio__DOT___T_496[0xfU] = __Vtemp186[0xfU];
        top__DOT__idio__DOT___T_496[0x10U] = __Vtemp186[0x10U];
        top__DOT__idio__DOT___T_496[0x11U] = __Vtemp186[0x11U];
        top__DOT__idio__DOT___T_496[0x12U] = __Vtemp186[0x12U];
        top__DOT__idio__DOT___T_496[0x13U] = __Vtemp186[0x13U];
        top__DOT__idio__DOT___T_496[0x14U] = __Vtemp186[0x14U];
        top__DOT__idio__DOT___T_496[0x15U] = __Vtemp186[0x15U];
        top__DOT__idio__DOT___T_496[0x16U] = __Vtemp186[0x16U];
        top__DOT__idio__DOT___T_496[0x17U] = __Vtemp186[0x17U];
        top__DOT__idio__DOT___T_496[0x18U] = __Vtemp186[0x18U];
        top__DOT__idio__DOT___T_496[0x19U] = __Vtemp186[0x19U];
        top__DOT__idio__DOT___T_496[0x1aU] = __Vtemp186[0x1aU];
        top__DOT__idio__DOT___T_496[0x1bU] = __Vtemp186[0x1bU];
        top__DOT__idio__DOT___T_496[0x1cU] = __Vtemp186[0x1cU];
    } else {
        top__DOT__idio__DOT___T_496[0U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp187[0U]
                                            : __Vtemp220[0U]);
        top__DOT__idio__DOT___T_496[1U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp187[1U]
                                            : __Vtemp220[1U]);
        top__DOT__idio__DOT___T_496[2U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp187[2U]
                                            : __Vtemp220[2U]);
        top__DOT__idio__DOT___T_496[3U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp187[3U]
                                            : __Vtemp220[3U]);
        top__DOT__idio__DOT___T_496[4U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp187[4U]
                                            : __Vtemp220[4U]);
        top__DOT__idio__DOT___T_496[5U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp187[5U]
                                            : __Vtemp220[5U]);
        top__DOT__idio__DOT___T_496[6U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp187[6U]
                                            : __Vtemp220[6U]);
        top__DOT__idio__DOT___T_496[7U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp187[7U]
                                            : __Vtemp220[7U]);
        top__DOT__idio__DOT___T_496[8U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp187[8U]
                                            : __Vtemp220[8U]);
        top__DOT__idio__DOT___T_496[9U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp187[9U]
                                            : __Vtemp220[9U]);
        top__DOT__idio__DOT___T_496[0xaU] = ((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp187[0xaU]
                                              : __Vtemp220[0xaU]);
        top__DOT__idio__DOT___T_496[0xbU] = ((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp187[0xbU]
                                              : __Vtemp220[0xbU]);
        top__DOT__idio__DOT___T_496[0xcU] = ((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp187[0xcU]
                                              : __Vtemp220[0xcU]);
        top__DOT__idio__DOT___T_496[0xdU] = ((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp187[0xdU]
                                              : __Vtemp220[0xdU]);
        top__DOT__idio__DOT___T_496[0xeU] = ((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp187[0xeU]
                                              : __Vtemp220[0xeU]);
        top__DOT__idio__DOT___T_496[0xfU] = ((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp187[0xfU]
                                              : __Vtemp220[0xfU]);
        top__DOT__idio__DOT___T_496[0x10U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp187[0x10U]
                                               : __Vtemp220[0x10U]);
        top__DOT__idio__DOT___T_496[0x11U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp187[0x11U]
                                               : __Vtemp220[0x11U]);
        top__DOT__idio__DOT___T_496[0x12U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp187[0x12U]
                                               : __Vtemp220[0x12U]);
        top__DOT__idio__DOT___T_496[0x13U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp187[0x13U]
                                               : __Vtemp220[0x13U]);
        top__DOT__idio__DOT___T_496[0x14U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp187[0x14U]
                                               : __Vtemp220[0x14U]);
        top__DOT__idio__DOT___T_496[0x15U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp187[0x15U]
                                               : __Vtemp220[0x15U]);
        top__DOT__idio__DOT___T_496[0x16U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp187[0x16U]
                                               : __Vtemp220[0x16U]);
        top__DOT__idio__DOT___T_496[0x17U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp187[0x17U]
                                               : __Vtemp220[0x17U]);
        top__DOT__idio__DOT___T_496[0x18U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp187[0x18U]
                                               : __Vtemp220[0x18U]);
        top__DOT__idio__DOT___T_496[0x19U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp187[0x19U]
                                               : __Vtemp220[0x19U]);
        top__DOT__idio__DOT___T_496[0x1aU] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp187[0x1aU]
                                               : __Vtemp220[0x1aU]);
        top__DOT__idio__DOT___T_496[0x1bU] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp187[0x1bU]
                                               : __Vtemp220[0x1bU]);
        top__DOT__idio__DOT___T_496[0x1cU] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp187[0x1cU]
                                               : __Vtemp220[0x1cU]);
    }
    VL_EXTEND_WQ(901,64, __Vtemp225, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp226, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp227, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp228, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    if ((0x13U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0U] 
            = __Vtemp225[0U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[1U] 
            = __Vtemp225[1U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[2U] 
            = __Vtemp225[2U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[3U] 
            = __Vtemp225[3U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[4U] 
            = __Vtemp225[4U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[5U] 
            = __Vtemp225[5U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[6U] 
            = __Vtemp225[6U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[7U] 
            = __Vtemp225[7U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[8U] 
            = __Vtemp225[8U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[9U] 
            = __Vtemp225[9U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xaU] 
            = __Vtemp225[0xaU];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xbU] 
            = __Vtemp225[0xbU];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xcU] 
            = __Vtemp225[0xcU];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xdU] 
            = __Vtemp225[0xdU];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xeU] 
            = __Vtemp225[0xeU];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xfU] 
            = __Vtemp225[0xfU];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x10U] 
            = __Vtemp225[0x10U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x11U] 
            = __Vtemp225[0x11U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x12U] 
            = __Vtemp225[0x12U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x13U] 
            = __Vtemp225[0x13U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x14U] 
            = __Vtemp225[0x14U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x15U] 
            = __Vtemp225[0x15U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x16U] 
            = __Vtemp225[0x16U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x17U] 
            = __Vtemp225[0x17U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x18U] 
            = __Vtemp225[0x18U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x19U] 
            = __Vtemp225[0x19U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x1aU] 
            = __Vtemp225[0x1aU];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x1bU] 
            = __Vtemp225[0x1bU];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x1cU] 
            = __Vtemp225[0x1cU];
    } else {
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp227[0U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp228[0U]
                                         : top__DOT__idio__DOT___T_496[0U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[1U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[1U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp227[1U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp228[1U]
                                         : top__DOT__idio__DOT___T_496[1U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[2U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[2U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp227[2U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp228[2U]
                                         : top__DOT__idio__DOT___T_496[2U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[3U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[3U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp227[3U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp228[3U]
                                         : top__DOT__idio__DOT___T_496[3U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[4U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[4U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp227[4U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp228[4U]
                                         : top__DOT__idio__DOT___T_496[4U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[5U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[5U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp227[5U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp228[5U]
                                         : top__DOT__idio__DOT___T_496[5U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[6U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[6U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp227[6U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp228[6U]
                                         : top__DOT__idio__DOT___T_496[6U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[7U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[7U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp227[7U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp228[7U]
                                         : top__DOT__idio__DOT___T_496[7U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[8U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[8U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp227[8U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp228[8U]
                                         : top__DOT__idio__DOT___T_496[8U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[9U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[9U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp227[9U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp228[9U]
                                         : top__DOT__idio__DOT___T_496[9U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xaU] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0xaU] : ((0x6013U == (0x707fU 
                                                   & vlSelf->io_inst))
                                       ? __Vtemp227[0xaU]
                                       : ((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->io_inst))
                                           ? __Vtemp228[0xaU]
                                           : top__DOT__idio__DOT___T_496[0xaU])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xbU] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0xbU] : ((0x6013U == (0x707fU 
                                                   & vlSelf->io_inst))
                                       ? __Vtemp227[0xbU]
                                       : ((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->io_inst))
                                           ? __Vtemp228[0xbU]
                                           : top__DOT__idio__DOT___T_496[0xbU])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xcU] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0xcU] : ((0x6013U == (0x707fU 
                                                   & vlSelf->io_inst))
                                       ? __Vtemp227[0xcU]
                                       : ((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->io_inst))
                                           ? __Vtemp228[0xcU]
                                           : top__DOT__idio__DOT___T_496[0xcU])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xdU] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0xdU] : ((0x6013U == (0x707fU 
                                                   & vlSelf->io_inst))
                                       ? __Vtemp227[0xdU]
                                       : ((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->io_inst))
                                           ? __Vtemp228[0xdU]
                                           : top__DOT__idio__DOT___T_496[0xdU])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xeU] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0xeU] : ((0x6013U == (0x707fU 
                                                   & vlSelf->io_inst))
                                       ? __Vtemp227[0xeU]
                                       : ((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->io_inst))
                                           ? __Vtemp228[0xeU]
                                           : top__DOT__idio__DOT___T_496[0xeU])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xfU] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0xfU] : ((0x6013U == (0x707fU 
                                                   & vlSelf->io_inst))
                                       ? __Vtemp227[0xfU]
                                       : ((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->io_inst))
                                           ? __Vtemp228[0xfU]
                                           : top__DOT__idio__DOT___T_496[0xfU])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x10U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0x10U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp227[0x10U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp228[0x10U]
                                            : top__DOT__idio__DOT___T_496[0x10U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x11U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0x11U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp227[0x11U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp228[0x11U]
                                            : top__DOT__idio__DOT___T_496[0x11U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x12U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0x12U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp227[0x12U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp228[0x12U]
                                            : top__DOT__idio__DOT___T_496[0x12U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x13U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0x13U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp227[0x13U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp228[0x13U]
                                            : top__DOT__idio__DOT___T_496[0x13U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x14U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0x14U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp227[0x14U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp228[0x14U]
                                            : top__DOT__idio__DOT___T_496[0x14U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x15U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0x15U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp227[0x15U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp228[0x15U]
                                            : top__DOT__idio__DOT___T_496[0x15U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x16U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0x16U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp227[0x16U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp228[0x16U]
                                            : top__DOT__idio__DOT___T_496[0x16U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x17U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0x17U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp227[0x17U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp228[0x17U]
                                            : top__DOT__idio__DOT___T_496[0x17U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x18U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0x18U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp227[0x18U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp228[0x18U]
                                            : top__DOT__idio__DOT___T_496[0x18U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x19U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0x19U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp227[0x19U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp228[0x19U]
                                            : top__DOT__idio__DOT___T_496[0x19U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x1aU] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0x1aU] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp227[0x1aU]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp228[0x1aU]
                                            : top__DOT__idio__DOT___T_496[0x1aU])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x1bU] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0x1bU] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp227[0x1bU]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp228[0x1bU]
                                            : top__DOT__idio__DOT___T_496[0x1bU])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x1cU] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp226[0x1cU] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp227[0x1cU]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp228[0x1cU]
                                            : top__DOT__idio__DOT___T_496[0x1cU])));
    }
    vlSelf->top__DOT__exio__DOT___T_1 = (vlSelf->top__DOT__idio_io_toEx_op1 
                                         + (((QData)((IData)(
                                                             vlSelf->top__DOT__idio__DOT__decodeValue_7[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__idio__DOT__decodeValue_7[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp238, vlSelf->top__DOT__idio_io_toEx_op1);
    VL_EXTEND_WQ(127,64, __Vtemp239, VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__idio_io_toEx_op1, 
                                                    (0x3fU 
                                                     & vlSelf->top__DOT__idio__DOT__decodeValue_7[0U])));
    VL_EXTEND_WQ(127,64, __Vtemp240, (vlSelf->top__DOT__idio_io_toEx_op1 
                                      >> (0x3fU & vlSelf->top__DOT__idio__DOT__decodeValue_7[0U])));
    VL_EXTEND_WQ(127,64, __Vtemp241, vlSelf->top__DOT__idio_io_toEx_op1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp242, __Vtemp241, 
                  (0x3fU & vlSelf->top__DOT__idio__DOT__decodeValue_7[0U]));
    VL_EXTEND_WQ(127,64, __Vtemp243, ((9U == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                       ? (QData)((IData)(
                                                         (vlSelf->top__DOT__idio_io_toEx_op1 
                                                          < 
                                                          (((QData)((IData)(
                                                                            vlSelf->top__DOT__idio__DOT__decodeValue_7[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->top__DOT__idio__DOT__decodeValue_7[0U]))))))
                                       : ((8U == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                           ? (QData)((IData)(
                                                             VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__idio_io_toEx_op1, 
                                                                        (((QData)((IData)(
                                                                                vlSelf->top__DOT__idio__DOT__decodeValue_7[1U])) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(
                                                                                vlSelf->top__DOT__idio__DOT__decodeValue_7[0U]))))))
                                           : ((7U == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                               ? (vlSelf->top__DOT__idio_io_toEx_op1 
                                                  ^ 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__idio__DOT__decodeValue_7[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__idio__DOT__decodeValue_7[0U]))))
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                   ? 
                                                  (vlSelf->top__DOT__idio_io_toEx_op1 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__idio__DOT__decodeValue_7[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__idio__DOT__decodeValue_7[0U]))))
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                    ? 
                                                   (vlSelf->top__DOT__idio_io_toEx_op1 
                                                    & (((QData)((IData)(
                                                                        vlSelf->top__DOT__idio__DOT__decodeValue_7[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->top__DOT__idio__DOT__decodeValue_7[0U]))))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__idio_io_toEx_op1 
                                                     - 
                                                     (((QData)((IData)(
                                                                       vlSelf->top__DOT__idio__DOT__decodeValue_7[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__idio__DOT__decodeValue_7[0U]))))
                                                     : vlSelf->top__DOT__exio__DOT___T_1)))))));
    if ((0xaU == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))) {
        top__DOT__exio__DOT___T_43[0U] = __Vtemp238[0U];
        top__DOT__exio__DOT___T_43[1U] = __Vtemp238[1U];
        top__DOT__exio__DOT___T_43[2U] = __Vtemp238[2U];
        top__DOT__exio__DOT___T_43[3U] = (0x7fffffffU 
                                          & __Vtemp238[3U]);
    } else {
        top__DOT__exio__DOT___T_43[0U] = ((4U == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                           ? __Vtemp239[0U]
                                           : ((3U == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                               ? __Vtemp240[0U]
                                               : ((2U 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                   ? 
                                                  __Vtemp242[0U]
                                                   : 
                                                  __Vtemp243[0U])));
        top__DOT__exio__DOT___T_43[1U] = ((4U == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                           ? __Vtemp239[1U]
                                           : ((3U == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                               ? __Vtemp240[1U]
                                               : ((2U 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                   ? 
                                                  __Vtemp242[1U]
                                                   : 
                                                  __Vtemp243[1U])));
        top__DOT__exio__DOT___T_43[2U] = ((4U == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                           ? __Vtemp239[2U]
                                           : ((3U == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                               ? __Vtemp240[2U]
                                               : ((2U 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                   ? 
                                                  __Vtemp242[2U]
                                                   : 
                                                  __Vtemp243[2U])));
        top__DOT__exio__DOT___T_43[3U] = (0x7fffffffU 
                                          & ((4U == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                              ? __Vtemp239[3U]
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                  ? 
                                                 __Vtemp240[3U]
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                   ? 
                                                  __Vtemp242[3U]
                                                   : 
                                                  __Vtemp243[3U]))));
    }
    VL_EXTEND_WQ(127,64, __Vtemp253, (4ULL + (QData)((IData)(vlSelf->top__DOT__ifio__DOT__pc))));
    VL_EXTEND_WQ(127,64, __Vtemp254, (vlSelf->top__DOT__idio_io_toEx_op1 
                                      + (QData)((IData)(vlSelf->top__DOT__ifio__DOT__pc))));
    VL_EXTEND_WQ(127,64, __Vtemp255, (((QData)((IData)(
                                                       vlSelf->top__DOT__idio__DOT__decodeValue_7[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__idio__DOT__decodeValue_7[0U]))));
    if ((0xdU == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))) {
        vlSelf->top__DOT__exio__DOT___T_49[0U] = __Vtemp253[0U];
        vlSelf->top__DOT__exio__DOT___T_49[1U] = __Vtemp253[1U];
        vlSelf->top__DOT__exio__DOT___T_49[2U] = __Vtemp253[2U];
        vlSelf->top__DOT__exio__DOT___T_49[3U] = __Vtemp253[3U];
    } else {
        vlSelf->top__DOT__exio__DOT___T_49[0U] = ((0xcU 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                   ? 
                                                  __Vtemp254[0U]
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                    ? 
                                                   __Vtemp255[0U]
                                                    : 
                                                   top__DOT__exio__DOT___T_43[0U]));
        vlSelf->top__DOT__exio__DOT___T_49[1U] = ((0xcU 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                   ? 
                                                  __Vtemp254[1U]
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                    ? 
                                                   __Vtemp255[1U]
                                                    : 
                                                   top__DOT__exio__DOT___T_43[1U]));
        vlSelf->top__DOT__exio__DOT___T_49[2U] = ((0xcU 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                   ? 
                                                  __Vtemp254[2U]
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                    ? 
                                                   __Vtemp255[2U]
                                                    : 
                                                   top__DOT__exio__DOT___T_43[2U]));
        vlSelf->top__DOT__exio__DOT___T_49[3U] = ((0xcU 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                   ? 
                                                  __Vtemp254[3U]
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                    ? 
                                                   __Vtemp255[3U]
                                                    : 
                                                   top__DOT__exio__DOT___T_43[3U]));
    }
    vlSelf->top__DOT__exio__DOT___T_86 = ((3U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                           ? ((6U == 
                                               (7U 
                                                & vlSelf->top__DOT__exio__DOT___T_49[0U]))
                                               ? 0xffff000000000000ULL
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->top__DOT__exio__DOT___T_49[0U]))
                                                   ? 0xffff00000000ULL
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->top__DOT__exio__DOT___T_49[0U]))
                                                    ? 0xffffff00ULL
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->top__DOT__exio__DOT___T_49[0U]))
                                                     ? 0xffffULL
                                                     : 0ULL))))
                                           : ((1U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                               ? ((7U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->top__DOT__exio__DOT___T_49[0U]))
                                                   ? 0xff00000000000000ULL
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->top__DOT__exio__DOT___T_49[0U]))
                                                    ? 0xff000000000000ULL
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->top__DOT__exio__DOT___T_49[0U]))
                                                     ? 0xff0000000000ULL
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & vlSelf->top__DOT__exio__DOT___T_49[0U]))
                                                      ? 0xff00000000ULL
                                                      : (QData)((IData)(
                                                                        ((3U 
                                                                          == 
                                                                          (7U 
                                                                           & vlSelf->top__DOT__exio__DOT___T_49[0U]))
                                                                          ? 0xff000000U
                                                                          : 
                                                                         ((2U 
                                                                           == 
                                                                           (7U 
                                                                            & vlSelf->top__DOT__exio__DOT___T_49[0U]))
                                                                           ? 0xff0000U
                                                                           : 
                                                                          ((1U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->top__DOT__exio__DOT___T_49[0U]))
                                                                            ? 0xff00U
                                                                            : 0xffU)))))))))
                                               : 0ULL));
    vlSelf->top__DOT__ifio__DOT___T_2 = ((((0xcU == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op)) 
                                           | (0xdU 
                                              == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))) 
                                          | (IData)(vlSelf->top__DOT__exio__DOT__branchEna))
                                          ? ((0xcU 
                                              == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                              ? ((((QData)((IData)(
                                                                   vlSelf->top__DOT__idio__DOT__decodeValue_7[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__idio__DOT__decodeValue_7[0U]))) 
                                                 + (QData)((IData)(vlSelf->top__DOT__ifio__DOT__pc)))
                                              : ((0xdU 
                                                  == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                  ? 
                                                 (0xfffffffffffffffeULL 
                                                  & vlSelf->top__DOT__exio__DOT___T_1)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__exio__DOT__branchEna)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__exio__DOT___T_49[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__exio__DOT___T_49[0U])))
                                                   : 0x1bf52ULL)))
                                          : (QData)((IData)(
                                                            ((IData)(4U) 
                                                             + vlSelf->top__DOT__ifio__DOT__pc))));
    vlSelf->top__DOT__exio_io_toMem_calRes = (((0x13U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->io_inst)) 
                                               & ((0x7013U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->io_inst)) 
                                                  & ((0x6013U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->io_inst)) 
                                                     & ((0x4013U 
                                                         != 
                                                         (0x707fU 
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
                                                                    & (IData)(vlSelf->top__DOT__idio__DOT___T_688)))))))))
                                               ? (((QData)((IData)(
                                                                   ((vlSelf->top__DOT__exio__DOT___T_49[0U] 
                                                                     >> 0x1fU)
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__exio__DOT___T_49[0U])))
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__exio__DOT___T_49[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__exio__DOT___T_49[0U]))));
    vlSelf->top__DOT__memio_io_toWb_memRes = ((IData)(vlSelf->top__DOT__idio_io_toEx_mem_rd)
                                               ? vlSelf->top__DOT__memio__DOT__regMem
                                              [(0x3ffU 
                                                & (IData)(vlSelf->top__DOT__exio_io_toMem_calRes))]
                                               : 0ULL);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_inst_addr = VL_RAND_RESET_I(32);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    vlSelf->io_aluop = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__idio_io_toEx_alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__idio_io_toEx_mem_wr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__idio_io_toEx_mem_rd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__idio_io_toEx_mask_type = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__idio_io_toEx_cmp_op = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__idio_io_toEx_cmp_op1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__idio_io_toEx_cmp_op2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__idio_io_toEx_op1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exio_io_toMem_calRes = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__memio_io_toWb_memRes = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__regio_io_reg_read_rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__regio_io_reg_read_rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ifio__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ifio__DOT___T_2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__idio__DOT__imm_utype_sext = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__idio__DOT__hi_4 = VL_RAND_RESET_Q(40);
    VL_RAND_RESET_W(160, vlSelf->top__DOT__idio__DOT__hi_lo_2);
    vlSelf->top__DOT__idio__DOT__imm_itype_sext = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__idio__DOT__imm_btype_sext = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__idio__DOT__imm_stype_sext = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__idio__DOT___T_156 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__idio__DOT___T_189 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__idio__DOT___T_251 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__idio__DOT___T_295 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__idio__DOT___T_348 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__idio__DOT___T_393 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(901, vlSelf->top__DOT__idio__DOT___T_470);
    VL_RAND_RESET_W(901, vlSelf->top__DOT__idio__DOT__decodeValue_7);
    vlSelf->top__DOT__idio__DOT___T_688 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exio__DOT___T_1 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(127, vlSelf->top__DOT__exio__DOT___T_49);
    vlSelf->top__DOT__exio__DOT___T_86 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exio__DOT__branchEna = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->top__DOT__memio__DOT__regMem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__regio__DOT__regFile[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__bb__DOT__call = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
