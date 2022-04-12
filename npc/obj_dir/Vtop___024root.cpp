// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Variables
    CData/*3:0*/ top__DOT__idio__DOT___T_122;
    CData/*3:0*/ top__DOT__idio__DOT___T_137;
    CData/*3:0*/ top__DOT__idio__DOT___T_152;
    CData/*0:0*/ top__DOT__idio__DOT___T_234;
    CData/*2:0*/ top__DOT__idio__DOT___T_280;
    CData/*2:0*/ top__DOT__idio__DOT___T_519;
    CData/*2:0*/ top__DOT__idio__DOT___T_534;
    VlWide<29>/*900:0*/ top__DOT__idio__DOT___T_457;
    VlWide<29>/*927:0*/ __Vtemp14;
    VlWide<29>/*927:0*/ __Vtemp15;
    VlWide<29>/*927:0*/ __Vtemp27;
    VlWide<29>/*927:0*/ __Vtemp28;
    VlWide<29>/*927:0*/ __Vtemp35;
    VlWide<29>/*927:0*/ __Vtemp36;
    VlWide<29>/*927:0*/ __Vtemp37;
    VlWide<29>/*927:0*/ __Vtemp38;
    VlWide<29>/*927:0*/ __Vtemp39;
    VlWide<29>/*927:0*/ __Vtemp40;
    VlWide<29>/*927:0*/ __Vtemp41;
    VlWide<29>/*927:0*/ __Vtemp42;
    VlWide<29>/*927:0*/ __Vtemp43;
    VlWide<29>/*927:0*/ __Vtemp44;
    VlWide<29>/*927:0*/ __Vtemp45;
    VlWide<29>/*927:0*/ __Vtemp46;
    VlWide<29>/*927:0*/ __Vtemp47;
    VlWide<29>/*927:0*/ __Vtemp69;
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
    vlSelf->top__DOT__idio_io_toEx_cmp_op = ((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? 0U : 
                                             ((0x7013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? 0U
                                               : ((0x6013U 
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
                                                               : (IData)(top__DOT__idio__DOT___T_534))))))))))))))));
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
    VL_EXTEND_WQ(901,64, __Vtemp14, vlSelf->top__DOT__idio__DOT__imm_btype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp15, vlSelf->top__DOT__idio__DOT__imm_btype_sext);
    __Vtemp27[0x1bU] = (((0x1e0000U & (vlSelf->io_inst 
                                       >> 4U)) | ((0x10000U 
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
    VL_EXTEND_WQ(901,64, __Vtemp28, ((0x67U == (0x707fU 
                                                & vlSelf->io_inst))
                                      ? vlSelf->top__DOT__idio__DOT__imm_itype_sext
                                      : ((0x17U == 
                                          (0x7fU & vlSelf->io_inst))
                                          ? vlSelf->top__DOT__idio__DOT__imm_utype_sext
                                          : 0x1bf52ULL)));
    if ((0x4063U == (0x707fU & vlSelf->io_inst))) {
        top__DOT__idio__DOT___T_457[0U] = __Vtemp14[0U];
        top__DOT__idio__DOT___T_457[1U] = __Vtemp14[1U];
        top__DOT__idio__DOT___T_457[2U] = __Vtemp14[2U];
        top__DOT__idio__DOT___T_457[3U] = __Vtemp14[3U];
        top__DOT__idio__DOT___T_457[4U] = __Vtemp14[4U];
        top__DOT__idio__DOT___T_457[5U] = __Vtemp14[5U];
        top__DOT__idio__DOT___T_457[6U] = __Vtemp14[6U];
        top__DOT__idio__DOT___T_457[7U] = __Vtemp14[7U];
        top__DOT__idio__DOT___T_457[8U] = __Vtemp14[8U];
        top__DOT__idio__DOT___T_457[9U] = __Vtemp14[9U];
        top__DOT__idio__DOT___T_457[0xaU] = __Vtemp14[0xaU];
        top__DOT__idio__DOT___T_457[0xbU] = __Vtemp14[0xbU];
        top__DOT__idio__DOT___T_457[0xcU] = __Vtemp14[0xcU];
        top__DOT__idio__DOT___T_457[0xdU] = __Vtemp14[0xdU];
        top__DOT__idio__DOT___T_457[0xeU] = __Vtemp14[0xeU];
        top__DOT__idio__DOT___T_457[0xfU] = __Vtemp14[0xfU];
        top__DOT__idio__DOT___T_457[0x10U] = __Vtemp14[0x10U];
        top__DOT__idio__DOT___T_457[0x11U] = __Vtemp14[0x11U];
        top__DOT__idio__DOT___T_457[0x12U] = __Vtemp14[0x12U];
        top__DOT__idio__DOT___T_457[0x13U] = __Vtemp14[0x13U];
        top__DOT__idio__DOT___T_457[0x14U] = __Vtemp14[0x14U];
        top__DOT__idio__DOT___T_457[0x15U] = __Vtemp14[0x15U];
        top__DOT__idio__DOT___T_457[0x16U] = __Vtemp14[0x16U];
        top__DOT__idio__DOT___T_457[0x17U] = __Vtemp14[0x17U];
        top__DOT__idio__DOT___T_457[0x18U] = __Vtemp14[0x18U];
        top__DOT__idio__DOT___T_457[0x19U] = __Vtemp14[0x19U];
        top__DOT__idio__DOT___T_457[0x1aU] = __Vtemp14[0x1aU];
        top__DOT__idio__DOT___T_457[0x1bU] = __Vtemp14[0x1bU];
        top__DOT__idio__DOT___T_457[0x1cU] = __Vtemp14[0x1cU];
    } else {
        top__DOT__idio__DOT___T_457[0U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp15[0U]
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
                                                : __Vtemp28[0U]));
        top__DOT__idio__DOT___T_457[1U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp15[1U]
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_inst))
                                                ? (
                                                   (vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                                      << 0x15U))
                                                : __Vtemp28[1U]));
        top__DOT__idio__DOT___T_457[2U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp15[2U]
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_inst))
                                                ? (
                                                   (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                                      << 0x15U))
                                                : __Vtemp28[2U]));
        top__DOT__idio__DOT___T_457[3U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp15[3U]
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_inst))
                                                ? (
                                                   (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                                      << 0x15U))
                                                : __Vtemp28[3U]));
        top__DOT__idio__DOT___T_457[4U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp15[4U]
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_inst))
                                                ? (
                                                   (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                                      << 0x15U))
                                                : __Vtemp28[4U]));
        top__DOT__idio__DOT___T_457[5U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp15[5U]
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_inst))
                                                ? (
                                                   (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                                                      << 0x15U))
                                                : __Vtemp28[5U]));
        top__DOT__idio__DOT___T_457[6U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp15[6U]
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_inst))
                                                ? (
                                                   (vlSelf->top__DOT__idio__DOT__hi_lo_2[0U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                                      << 0x15U))
                                                : __Vtemp28[6U]));
        top__DOT__idio__DOT___T_457[7U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp15[7U]
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_inst))
                                                ? (
                                                   (vlSelf->top__DOT__idio__DOT__hi_lo_2[1U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                                      << 0x15U))
                                                : __Vtemp28[7U]));
        top__DOT__idio__DOT___T_457[8U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp15[8U]
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_inst))
                                                ? (
                                                   (vlSelf->top__DOT__idio__DOT__hi_lo_2[2U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                                      << 0x15U))
                                                : __Vtemp28[8U]));
        top__DOT__idio__DOT___T_457[9U] = ((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp15[9U]
                                            : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_inst))
                                                ? (
                                                   (vlSelf->top__DOT__idio__DOT__hi_lo_2[3U] 
                                                    >> 0xbU) 
                                                   | (vlSelf->top__DOT__idio__DOT__hi_lo_2[4U] 
                                                      << 0x15U))
                                                : __Vtemp28[9U]));
        top__DOT__idio__DOT___T_457[0xaU] = ((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp15[0xaU]
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
                                                 __Vtemp28[0xaU]));
        top__DOT__idio__DOT___T_457[0xbU] = ((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp15[0xbU]
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
                                                 __Vtemp28[0xbU]));
        top__DOT__idio__DOT___T_457[0xcU] = ((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp15[0xcU]
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
                                                 __Vtemp28[0xcU]));
        top__DOT__idio__DOT___T_457[0xdU] = ((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp15[0xdU]
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
                                                 __Vtemp28[0xdU]));
        top__DOT__idio__DOT___T_457[0xeU] = ((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp15[0xeU]
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
                                                 __Vtemp28[0xeU]));
        top__DOT__idio__DOT___T_457[0xfU] = ((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp15[0xfU]
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
                                                 __Vtemp28[0xfU]));
        top__DOT__idio__DOT___T_457[0x10U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp15[0x10U]
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
                                                  __Vtemp28[0x10U]));
        top__DOT__idio__DOT___T_457[0x11U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp15[0x11U]
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
                                                  __Vtemp28[0x11U]));
        top__DOT__idio__DOT___T_457[0x12U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp15[0x12U]
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
                                                  __Vtemp28[0x12U]));
        top__DOT__idio__DOT___T_457[0x13U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp15[0x13U]
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
                                                  __Vtemp28[0x13U]));
        top__DOT__idio__DOT___T_457[0x14U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp15[0x14U]
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
                                                  __Vtemp28[0x14U]));
        top__DOT__idio__DOT___T_457[0x15U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp15[0x15U]
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
                                                  __Vtemp28[0x15U]));
        top__DOT__idio__DOT___T_457[0x16U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp15[0x16U]
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
                                                  __Vtemp28[0x16U]));
        top__DOT__idio__DOT___T_457[0x17U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp15[0x17U]
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
                                                  __Vtemp28[0x17U]));
        top__DOT__idio__DOT___T_457[0x18U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp15[0x18U]
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
                                                  __Vtemp28[0x18U]));
        top__DOT__idio__DOT___T_457[0x19U] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp15[0x19U]
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
                                                  __Vtemp28[0x19U]));
        top__DOT__idio__DOT___T_457[0x1aU] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp15[0x1aU]
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
                                                  __Vtemp28[0x1aU]));
        top__DOT__idio__DOT___T_457[0x1bU] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp15[0x1bU]
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  __Vtemp27[0x1bU]
                                                   : 
                                                  __Vtemp28[0x1bU]));
        top__DOT__idio__DOT___T_457[0x1cU] = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp15[0x1cU]
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
                                                  __Vtemp28[0x1cU]));
    }
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
    VL_EXTEND_WQ(901,64, __Vtemp35, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp36, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp37, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp38, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp39, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp40, vlSelf->top__DOT__idio__DOT__imm_stype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp41, vlSelf->top__DOT__idio__DOT__imm_stype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp42, vlSelf->top__DOT__idio__DOT__imm_stype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp43, vlSelf->top__DOT__idio__DOT__imm_stype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp44, vlSelf->top__DOT__idio__DOT__imm_btype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp45, vlSelf->top__DOT__idio__DOT__imm_btype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp46, vlSelf->top__DOT__idio__DOT__imm_btype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp47, vlSelf->top__DOT__idio__DOT__imm_btype_sext);
    if ((0x4003U == (0x707fU & vlSelf->io_inst))) {
        __Vtemp69[0U] = __Vtemp37[0U];
        __Vtemp69[1U] = __Vtemp37[1U];
        __Vtemp69[2U] = __Vtemp37[2U];
        __Vtemp69[3U] = __Vtemp37[3U];
        __Vtemp69[4U] = __Vtemp37[4U];
        __Vtemp69[5U] = __Vtemp37[5U];
        __Vtemp69[6U] = __Vtemp37[6U];
        __Vtemp69[7U] = __Vtemp37[7U];
        __Vtemp69[8U] = __Vtemp37[8U];
        __Vtemp69[9U] = __Vtemp37[9U];
        __Vtemp69[0xaU] = __Vtemp37[0xaU];
        __Vtemp69[0xbU] = __Vtemp37[0xbU];
        __Vtemp69[0xcU] = __Vtemp37[0xcU];
        __Vtemp69[0xdU] = __Vtemp37[0xdU];
        __Vtemp69[0xeU] = __Vtemp37[0xeU];
        __Vtemp69[0xfU] = __Vtemp37[0xfU];
        __Vtemp69[0x10U] = __Vtemp37[0x10U];
        __Vtemp69[0x11U] = __Vtemp37[0x11U];
        __Vtemp69[0x12U] = __Vtemp37[0x12U];
        __Vtemp69[0x13U] = __Vtemp37[0x13U];
        __Vtemp69[0x14U] = __Vtemp37[0x14U];
        __Vtemp69[0x15U] = __Vtemp37[0x15U];
        __Vtemp69[0x16U] = __Vtemp37[0x16U];
        __Vtemp69[0x17U] = __Vtemp37[0x17U];
        __Vtemp69[0x18U] = __Vtemp37[0x18U];
        __Vtemp69[0x19U] = __Vtemp37[0x19U];
        __Vtemp69[0x1aU] = __Vtemp37[0x1aU];
        __Vtemp69[0x1bU] = __Vtemp37[0x1bU];
        __Vtemp69[0x1cU] = __Vtemp37[0x1cU];
    } else {
        __Vtemp69[0U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                          ? __Vtemp38[0U] : ((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp39[0U]
                                              : ((0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 __Vtemp40[0U]
                                                  : 
                                                 ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  __Vtemp41[0U]
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp42[0U]
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp43[0U]
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp44[0U]
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp45[0U]
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp46[0U]
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp47[0U]
                                                         : 
                                                        top__DOT__idio__DOT___T_457[0U]))))))))));
        __Vtemp69[1U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                          ? __Vtemp38[1U] : ((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp39[1U]
                                              : ((0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 __Vtemp40[1U]
                                                  : 
                                                 ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  __Vtemp41[1U]
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp42[1U]
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp43[1U]
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp44[1U]
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp45[1U]
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp46[1U]
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp47[1U]
                                                         : 
                                                        top__DOT__idio__DOT___T_457[1U]))))))))));
        __Vtemp69[2U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                          ? __Vtemp38[2U] : ((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp39[2U]
                                              : ((0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 __Vtemp40[2U]
                                                  : 
                                                 ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  __Vtemp41[2U]
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp42[2U]
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp43[2U]
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp44[2U]
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp45[2U]
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp46[2U]
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp47[2U]
                                                         : 
                                                        top__DOT__idio__DOT___T_457[2U]))))))))));
        __Vtemp69[3U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                          ? __Vtemp38[3U] : ((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp39[3U]
                                              : ((0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 __Vtemp40[3U]
                                                  : 
                                                 ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  __Vtemp41[3U]
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp42[3U]
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp43[3U]
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp44[3U]
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp45[3U]
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp46[3U]
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp47[3U]
                                                         : 
                                                        top__DOT__idio__DOT___T_457[3U]))))))))));
        __Vtemp69[4U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                          ? __Vtemp38[4U] : ((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp39[4U]
                                              : ((0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 __Vtemp40[4U]
                                                  : 
                                                 ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  __Vtemp41[4U]
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp42[4U]
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp43[4U]
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp44[4U]
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp45[4U]
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp46[4U]
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp47[4U]
                                                         : 
                                                        top__DOT__idio__DOT___T_457[4U]))))))))));
        __Vtemp69[5U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                          ? __Vtemp38[5U] : ((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp39[5U]
                                              : ((0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 __Vtemp40[5U]
                                                  : 
                                                 ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  __Vtemp41[5U]
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp42[5U]
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp43[5U]
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp44[5U]
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp45[5U]
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp46[5U]
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp47[5U]
                                                         : 
                                                        top__DOT__idio__DOT___T_457[5U]))))))))));
        __Vtemp69[6U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                          ? __Vtemp38[6U] : ((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp39[6U]
                                              : ((0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 __Vtemp40[6U]
                                                  : 
                                                 ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  __Vtemp41[6U]
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp42[6U]
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp43[6U]
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp44[6U]
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp45[6U]
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp46[6U]
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp47[6U]
                                                         : 
                                                        top__DOT__idio__DOT___T_457[6U]))))))))));
        __Vtemp69[7U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                          ? __Vtemp38[7U] : ((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp39[7U]
                                              : ((0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 __Vtemp40[7U]
                                                  : 
                                                 ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  __Vtemp41[7U]
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp42[7U]
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp43[7U]
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp44[7U]
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp45[7U]
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp46[7U]
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp47[7U]
                                                         : 
                                                        top__DOT__idio__DOT___T_457[7U]))))))))));
        __Vtemp69[8U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                          ? __Vtemp38[8U] : ((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp39[8U]
                                              : ((0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 __Vtemp40[8U]
                                                  : 
                                                 ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  __Vtemp41[8U]
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp42[8U]
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp43[8U]
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp44[8U]
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp45[8U]
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp46[8U]
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp47[8U]
                                                         : 
                                                        top__DOT__idio__DOT___T_457[8U]))))))))));
        __Vtemp69[9U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                          ? __Vtemp38[9U] : ((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp39[9U]
                                              : ((0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 __Vtemp40[9U]
                                                  : 
                                                 ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  __Vtemp41[9U]
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp42[9U]
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp43[9U]
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp44[9U]
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp45[9U]
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp46[9U]
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp47[9U]
                                                         : 
                                                        top__DOT__idio__DOT___T_457[9U]))))))))));
        __Vtemp69[0xaU] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                            ? __Vtemp38[0xaU] : ((0x6003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 __Vtemp39[0xaU]
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  __Vtemp40[0xaU]
                                                   : 
                                                  ((0x1023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp41[0xaU]
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp42[0xaU]
                                                     : 
                                                    ((0x3023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp43[0xaU]
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp44[0xaU]
                                                       : 
                                                      ((0x1063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp45[0xaU]
                                                        : 
                                                       ((0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp46[0xaU]
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp47[0xaU]
                                                          : 
                                                         top__DOT__idio__DOT___T_457[0xaU]))))))))));
        __Vtemp69[0xbU] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                            ? __Vtemp38[0xbU] : ((0x6003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 __Vtemp39[0xbU]
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  __Vtemp40[0xbU]
                                                   : 
                                                  ((0x1023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp41[0xbU]
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp42[0xbU]
                                                     : 
                                                    ((0x3023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp43[0xbU]
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp44[0xbU]
                                                       : 
                                                      ((0x1063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp45[0xbU]
                                                        : 
                                                       ((0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp46[0xbU]
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp47[0xbU]
                                                          : 
                                                         top__DOT__idio__DOT___T_457[0xbU]))))))))));
        __Vtemp69[0xcU] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                            ? __Vtemp38[0xcU] : ((0x6003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 __Vtemp39[0xcU]
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  __Vtemp40[0xcU]
                                                   : 
                                                  ((0x1023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp41[0xcU]
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp42[0xcU]
                                                     : 
                                                    ((0x3023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp43[0xcU]
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp44[0xcU]
                                                       : 
                                                      ((0x1063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp45[0xcU]
                                                        : 
                                                       ((0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp46[0xcU]
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp47[0xcU]
                                                          : 
                                                         top__DOT__idio__DOT___T_457[0xcU]))))))))));
        __Vtemp69[0xdU] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                            ? __Vtemp38[0xdU] : ((0x6003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 __Vtemp39[0xdU]
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  __Vtemp40[0xdU]
                                                   : 
                                                  ((0x1023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp41[0xdU]
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp42[0xdU]
                                                     : 
                                                    ((0x3023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp43[0xdU]
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp44[0xdU]
                                                       : 
                                                      ((0x1063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp45[0xdU]
                                                        : 
                                                       ((0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp46[0xdU]
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp47[0xdU]
                                                          : 
                                                         top__DOT__idio__DOT___T_457[0xdU]))))))))));
        __Vtemp69[0xeU] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                            ? __Vtemp38[0xeU] : ((0x6003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 __Vtemp39[0xeU]
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  __Vtemp40[0xeU]
                                                   : 
                                                  ((0x1023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp41[0xeU]
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp42[0xeU]
                                                     : 
                                                    ((0x3023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp43[0xeU]
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp44[0xeU]
                                                       : 
                                                      ((0x1063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp45[0xeU]
                                                        : 
                                                       ((0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp46[0xeU]
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp47[0xeU]
                                                          : 
                                                         top__DOT__idio__DOT___T_457[0xeU]))))))))));
        __Vtemp69[0xfU] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                            ? __Vtemp38[0xfU] : ((0x6003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst))
                                                  ? 
                                                 __Vtemp39[0xfU]
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst))
                                                   ? 
                                                  __Vtemp40[0xfU]
                                                   : 
                                                  ((0x1023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp41[0xfU]
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp42[0xfU]
                                                     : 
                                                    ((0x3023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp43[0xfU]
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp44[0xfU]
                                                       : 
                                                      ((0x1063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp45[0xfU]
                                                        : 
                                                       ((0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp46[0xfU]
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp47[0xfU]
                                                          : 
                                                         top__DOT__idio__DOT___T_457[0xfU]))))))))));
        __Vtemp69[0x10U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                             ? __Vtemp38[0x10U] : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp39[0x10U]
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp40[0x10U]
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp41[0x10U]
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp42[0x10U]
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp43[0x10U]
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp44[0x10U]
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp45[0x10U]
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp46[0x10U]
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp47[0x10U]
                                                            : 
                                                           top__DOT__idio__DOT___T_457[0x10U]))))))))));
        __Vtemp69[0x11U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                             ? __Vtemp38[0x11U] : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp39[0x11U]
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp40[0x11U]
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp41[0x11U]
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp42[0x11U]
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp43[0x11U]
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp44[0x11U]
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp45[0x11U]
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp46[0x11U]
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp47[0x11U]
                                                            : 
                                                           top__DOT__idio__DOT___T_457[0x11U]))))))))));
        __Vtemp69[0x12U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                             ? __Vtemp38[0x12U] : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp39[0x12U]
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp40[0x12U]
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp41[0x12U]
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp42[0x12U]
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp43[0x12U]
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp44[0x12U]
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp45[0x12U]
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp46[0x12U]
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp47[0x12U]
                                                            : 
                                                           top__DOT__idio__DOT___T_457[0x12U]))))))))));
        __Vtemp69[0x13U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                             ? __Vtemp38[0x13U] : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp39[0x13U]
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp40[0x13U]
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp41[0x13U]
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp42[0x13U]
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp43[0x13U]
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp44[0x13U]
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp45[0x13U]
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp46[0x13U]
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp47[0x13U]
                                                            : 
                                                           top__DOT__idio__DOT___T_457[0x13U]))))))))));
        __Vtemp69[0x14U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                             ? __Vtemp38[0x14U] : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp39[0x14U]
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp40[0x14U]
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp41[0x14U]
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp42[0x14U]
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp43[0x14U]
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp44[0x14U]
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp45[0x14U]
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp46[0x14U]
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp47[0x14U]
                                                            : 
                                                           top__DOT__idio__DOT___T_457[0x14U]))))))))));
        __Vtemp69[0x15U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                             ? __Vtemp38[0x15U] : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp39[0x15U]
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp40[0x15U]
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp41[0x15U]
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp42[0x15U]
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp43[0x15U]
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp44[0x15U]
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp45[0x15U]
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp46[0x15U]
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp47[0x15U]
                                                            : 
                                                           top__DOT__idio__DOT___T_457[0x15U]))))))))));
        __Vtemp69[0x16U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                             ? __Vtemp38[0x16U] : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp39[0x16U]
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp40[0x16U]
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp41[0x16U]
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp42[0x16U]
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp43[0x16U]
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp44[0x16U]
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp45[0x16U]
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp46[0x16U]
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp47[0x16U]
                                                            : 
                                                           top__DOT__idio__DOT___T_457[0x16U]))))))))));
        __Vtemp69[0x17U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                             ? __Vtemp38[0x17U] : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp39[0x17U]
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp40[0x17U]
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp41[0x17U]
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp42[0x17U]
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp43[0x17U]
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp44[0x17U]
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp45[0x17U]
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp46[0x17U]
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp47[0x17U]
                                                            : 
                                                           top__DOT__idio__DOT___T_457[0x17U]))))))))));
        __Vtemp69[0x18U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                             ? __Vtemp38[0x18U] : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp39[0x18U]
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp40[0x18U]
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp41[0x18U]
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp42[0x18U]
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp43[0x18U]
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp44[0x18U]
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp45[0x18U]
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp46[0x18U]
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp47[0x18U]
                                                            : 
                                                           top__DOT__idio__DOT___T_457[0x18U]))))))))));
        __Vtemp69[0x19U] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                             ? __Vtemp38[0x19U] : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp39[0x19U]
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp40[0x19U]
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp41[0x19U]
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp42[0x19U]
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp43[0x19U]
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp44[0x19U]
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp45[0x19U]
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp46[0x19U]
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp47[0x19U]
                                                            : 
                                                           top__DOT__idio__DOT___T_457[0x19U]))))))))));
        __Vtemp69[0x1aU] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                             ? __Vtemp38[0x1aU] : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp39[0x1aU]
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp40[0x1aU]
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp41[0x1aU]
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp42[0x1aU]
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp43[0x1aU]
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp44[0x1aU]
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp45[0x1aU]
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp46[0x1aU]
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp47[0x1aU]
                                                            : 
                                                           top__DOT__idio__DOT___T_457[0x1aU]))))))))));
        __Vtemp69[0x1bU] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                             ? __Vtemp38[0x1bU] : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp39[0x1bU]
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp40[0x1bU]
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp41[0x1bU]
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp42[0x1bU]
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp43[0x1bU]
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp44[0x1bU]
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp45[0x1bU]
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp46[0x1bU]
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp47[0x1bU]
                                                            : 
                                                           top__DOT__idio__DOT___T_457[0x1bU]))))))))));
        __Vtemp69[0x1cU] = ((0x5003U == (0x707fU & vlSelf->io_inst))
                             ? __Vtemp38[0x1cU] : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp39[0x1cU]
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp40[0x1cU]
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp41[0x1cU]
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp42[0x1cU]
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp43[0x1cU]
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp44[0x1cU]
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp45[0x1cU]
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp46[0x1cU]
                                                           : 
                                                          ((0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp47[0x1cU]
                                                            : 
                                                           top__DOT__idio__DOT___T_457[0x1cU]))))))))));
    }
    if ((0x2003U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->top__DOT__idio__DOT___T_470[0U] = __Vtemp35[0U];
        vlSelf->top__DOT__idio__DOT___T_470[1U] = __Vtemp35[1U];
        vlSelf->top__DOT__idio__DOT___T_470[2U] = __Vtemp35[2U];
        vlSelf->top__DOT__idio__DOT___T_470[3U] = __Vtemp35[3U];
        vlSelf->top__DOT__idio__DOT___T_470[4U] = __Vtemp35[4U];
        vlSelf->top__DOT__idio__DOT___T_470[5U] = __Vtemp35[5U];
        vlSelf->top__DOT__idio__DOT___T_470[6U] = __Vtemp35[6U];
        vlSelf->top__DOT__idio__DOT___T_470[7U] = __Vtemp35[7U];
        vlSelf->top__DOT__idio__DOT___T_470[8U] = __Vtemp35[8U];
        vlSelf->top__DOT__idio__DOT___T_470[9U] = __Vtemp35[9U];
        vlSelf->top__DOT__idio__DOT___T_470[0xaU] = 
            __Vtemp35[0xaU];
        vlSelf->top__DOT__idio__DOT___T_470[0xbU] = 
            __Vtemp35[0xbU];
        vlSelf->top__DOT__idio__DOT___T_470[0xcU] = 
            __Vtemp35[0xcU];
        vlSelf->top__DOT__idio__DOT___T_470[0xdU] = 
            __Vtemp35[0xdU];
        vlSelf->top__DOT__idio__DOT___T_470[0xeU] = 
            __Vtemp35[0xeU];
        vlSelf->top__DOT__idio__DOT___T_470[0xfU] = 
            __Vtemp35[0xfU];
        vlSelf->top__DOT__idio__DOT___T_470[0x10U] 
            = __Vtemp35[0x10U];
        vlSelf->top__DOT__idio__DOT___T_470[0x11U] 
            = __Vtemp35[0x11U];
        vlSelf->top__DOT__idio__DOT___T_470[0x12U] 
            = __Vtemp35[0x12U];
        vlSelf->top__DOT__idio__DOT___T_470[0x13U] 
            = __Vtemp35[0x13U];
        vlSelf->top__DOT__idio__DOT___T_470[0x14U] 
            = __Vtemp35[0x14U];
        vlSelf->top__DOT__idio__DOT___T_470[0x15U] 
            = __Vtemp35[0x15U];
        vlSelf->top__DOT__idio__DOT___T_470[0x16U] 
            = __Vtemp35[0x16U];
        vlSelf->top__DOT__idio__DOT___T_470[0x17U] 
            = __Vtemp35[0x17U];
        vlSelf->top__DOT__idio__DOT___T_470[0x18U] 
            = __Vtemp35[0x18U];
        vlSelf->top__DOT__idio__DOT___T_470[0x19U] 
            = __Vtemp35[0x19U];
        vlSelf->top__DOT__idio__DOT___T_470[0x1aU] 
            = __Vtemp35[0x1aU];
        vlSelf->top__DOT__idio__DOT___T_470[0x1bU] 
            = __Vtemp35[0x1bU];
        vlSelf->top__DOT__idio__DOT___T_470[0x1cU] 
            = __Vtemp35[0x1cU];
    } else {
        vlSelf->top__DOT__idio__DOT___T_470[0U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp36[0U]
                                                    : 
                                                   __Vtemp69[0U]);
        vlSelf->top__DOT__idio__DOT___T_470[1U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp36[1U]
                                                    : 
                                                   __Vtemp69[1U]);
        vlSelf->top__DOT__idio__DOT___T_470[2U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp36[2U]
                                                    : 
                                                   __Vtemp69[2U]);
        vlSelf->top__DOT__idio__DOT___T_470[3U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp36[3U]
                                                    : 
                                                   __Vtemp69[3U]);
        vlSelf->top__DOT__idio__DOT___T_470[4U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp36[4U]
                                                    : 
                                                   __Vtemp69[4U]);
        vlSelf->top__DOT__idio__DOT___T_470[5U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp36[5U]
                                                    : 
                                                   __Vtemp69[5U]);
        vlSelf->top__DOT__idio__DOT___T_470[6U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp36[6U]
                                                    : 
                                                   __Vtemp69[6U]);
        vlSelf->top__DOT__idio__DOT___T_470[7U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp36[7U]
                                                    : 
                                                   __Vtemp69[7U]);
        vlSelf->top__DOT__idio__DOT___T_470[8U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp36[8U]
                                                    : 
                                                   __Vtemp69[8U]);
        vlSelf->top__DOT__idio__DOT___T_470[9U] = (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp36[9U]
                                                    : 
                                                   __Vtemp69[9U]);
        vlSelf->top__DOT__idio__DOT___T_470[0xaU] = 
            ((0x3003U == (0x707fU & vlSelf->io_inst))
              ? __Vtemp36[0xaU] : __Vtemp69[0xaU]);
        vlSelf->top__DOT__idio__DOT___T_470[0xbU] = 
            ((0x3003U == (0x707fU & vlSelf->io_inst))
              ? __Vtemp36[0xbU] : __Vtemp69[0xbU]);
        vlSelf->top__DOT__idio__DOT___T_470[0xcU] = 
            ((0x3003U == (0x707fU & vlSelf->io_inst))
              ? __Vtemp36[0xcU] : __Vtemp69[0xcU]);
        vlSelf->top__DOT__idio__DOT___T_470[0xdU] = 
            ((0x3003U == (0x707fU & vlSelf->io_inst))
              ? __Vtemp36[0xdU] : __Vtemp69[0xdU]);
        vlSelf->top__DOT__idio__DOT___T_470[0xeU] = 
            ((0x3003U == (0x707fU & vlSelf->io_inst))
              ? __Vtemp36[0xeU] : __Vtemp69[0xeU]);
        vlSelf->top__DOT__idio__DOT___T_470[0xfU] = 
            ((0x3003U == (0x707fU & vlSelf->io_inst))
              ? __Vtemp36[0xfU] : __Vtemp69[0xfU]);
        vlSelf->top__DOT__idio__DOT___T_470[0x10U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp36[0x10U] : __Vtemp69[0x10U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x11U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp36[0x11U] : __Vtemp69[0x11U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x12U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp36[0x12U] : __Vtemp69[0x12U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x13U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp36[0x13U] : __Vtemp69[0x13U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x14U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp36[0x14U] : __Vtemp69[0x14U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x15U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp36[0x15U] : __Vtemp69[0x15U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x16U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp36[0x16U] : __Vtemp69[0x16U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x17U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp36[0x17U] : __Vtemp69[0x17U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x18U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp36[0x18U] : __Vtemp69[0x18U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x19U] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp36[0x19U] : __Vtemp69[0x19U]);
        vlSelf->top__DOT__idio__DOT___T_470[0x1aU] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp36[0x1aU] : __Vtemp69[0x1aU]);
        vlSelf->top__DOT__idio__DOT___T_470[0x1bU] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp36[0x1bU] : __Vtemp69[0x1bU]);
        vlSelf->top__DOT__idio__DOT___T_470[0x1cU] 
            = ((0x3003U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp36[0x1cU] : __Vtemp69[0x1cU]);
    }
}

void Vtop___024unit____Vdpiimwrap_finish_TOP____024unit();

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__top__DOT__memio__DOT__regMem__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__regio__DOT__regFile__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__regio__DOT__regFile__v0;
    SData/*9:0*/ __Vdlyvdim0__top__DOT__memio__DOT__regMem__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__memio__DOT__regMem__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__regio__DOT__regFile__v0;
    // Body
    __Vdlyvset__top__DOT__memio__DOT__regMem__v0 = 0U;
    __Vdlyvset__top__DOT__regio__DOT__regFile__v0 = 0U;
    if (((~ (IData)(vlSelf->top__DOT__idio_io_toEx_mem_rd)) 
         & (IData)(vlSelf->top__DOT__idio_io_toEx_mem_wr))) {
        __Vdlyvval__top__DOT__memio__DOT__regMem__v0 
            = (((0x13U == (0x707fU & vlSelf->io_inst))
                 ? 0x1bf52ULL : ((0x7013U == (0x707fU 
                                              & vlSelf->io_inst))
                                  ? 0x1bf52ULL : ((0x6013U 
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
                                                         : vlSelf->top__DOT__idio__DOT___T_393))))))))) 
               & ((IData)(vlSelf->top__DOT__idio_io_toEx_mem_wr)
                   ? ((7U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                       ? 0xffffffffffffffffULL : ((5U 
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
                   : 0ULL));
        __Vdlyvset__top__DOT__memio__DOT__regMem__v0 = 1U;
        __Vdlyvdim0__top__DOT__memio__DOT__regMem__v0 
            = (0x3ffU & (IData)(vlSelf->top__DOT__exio_io_toMem_calRes));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__bb__DOT__call = vlSelf->top__DOT__idio_io_toEx_alu_op;
    } else if ((0xeU == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))) {
        Vtop___024unit____Vdpiimwrap_finish_TOP____024unit();
    }
    vlSelf->top__DOT__ifio__DOT__pc = ((IData)(vlSelf->reset)
                                        ? 0x80000000U
                                        : (IData)(vlSelf->top__DOT__ifio__DOT___T_2));
    if (((0x13U == (0x707fU & vlSelf->io_inst)) | (
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst)) 
                                                   | ((0x6013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst)) 
                                                      | ((0x4013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst)) 
                                                         | ((0x2013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst)) 
                                                            | (IData)(vlSelf->top__DOT__idio__DOT___T_348))))))) {
        __Vdlyvval__top__DOT__regio__DOT__regFile__v0 
            = ((0U != (0x1fU & (vlSelf->io_inst >> 7U)))
                ? ((IData)(vlSelf->top__DOT__idio_io_toEx_mem_rd)
                    ? ((6U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                        ? (QData)((IData)(vlSelf->top__DOT__memio_io_toWb_memRes))
                        : ((5U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                            ? (((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__memio_io_toWb_memRes 
                                                             >> 0x1fU)))
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__memio_io_toWb_memRes)))
                            : ((4U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                ? (QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->top__DOT__memio_io_toWb_memRes))))
                                : ((3U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                    ? ((((1U & (IData)(
                                                       (vlSelf->top__DOT__memio_io_toWb_memRes 
                                                        >> 0xfU)))
                                          ? 0xffffffffffffULL
                                          : 0ULL) << 0x10U) 
                                       | (QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(vlSelf->top__DOT__memio_io_toWb_memRes)))))
                                    : ((2U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                        ? (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->top__DOT__memio_io_toWb_memRes))))
                                        : ((1U == (IData)(vlSelf->top__DOT__idio_io_toEx_mask_type))
                                            ? ((((1U 
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
                : 0ULL);
        __Vdlyvset__top__DOT__regio__DOT__regFile__v0 = 1U;
        __Vdlyvdim0__top__DOT__regio__DOT__regFile__v0 
            = (0x1fU & (vlSelf->io_inst >> 7U));
    }
    if (__Vdlyvset__top__DOT__memio__DOT__regMem__v0) {
        vlSelf->top__DOT__memio__DOT__regMem[__Vdlyvdim0__top__DOT__memio__DOT__regMem__v0] 
            = __Vdlyvval__top__DOT__memio__DOT__regMem__v0;
    }
    if (__Vdlyvset__top__DOT__regio__DOT__regFile__v0) {
        vlSelf->top__DOT__regio__DOT__regFile[__Vdlyvdim0__top__DOT__regio__DOT__regFile__v0] 
            = __Vdlyvval__top__DOT__regio__DOT__regFile__v0;
    }
    vlSelf->io_inst_addr = vlSelf->top__DOT__ifio__DOT__pc;
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__4\n"); );
    // Variables
    VlWide<29>/*900:0*/ top__DOT__idio__DOT___T_483;
    VlWide<29>/*900:0*/ top__DOT__idio__DOT___T_496;
    VlWide<4>/*126:0*/ top__DOT__exio__DOT___T_43;
    VlWide<29>/*927:0*/ __Vtemp262;
    VlWide<29>/*927:0*/ __Vtemp263;
    VlWide<29>/*927:0*/ __Vtemp264;
    VlWide<29>/*927:0*/ __Vtemp265;
    VlWide<29>/*927:0*/ __Vtemp266;
    VlWide<29>/*927:0*/ __Vtemp267;
    VlWide<29>/*927:0*/ __Vtemp268;
    VlWide<29>/*927:0*/ __Vtemp269;
    VlWide<29>/*927:0*/ __Vtemp270;
    VlWide<29>/*927:0*/ __Vtemp271;
    VlWide<29>/*927:0*/ __Vtemp272;
    VlWide<29>/*927:0*/ __Vtemp273;
    VlWide<29>/*927:0*/ __Vtemp274;
    VlWide<29>/*927:0*/ __Vtemp296;
    VlWide<29>/*927:0*/ __Vtemp301;
    VlWide<29>/*927:0*/ __Vtemp302;
    VlWide<29>/*927:0*/ __Vtemp303;
    VlWide<29>/*927:0*/ __Vtemp304;
    VlWide<29>/*927:0*/ __Vtemp305;
    VlWide<29>/*927:0*/ __Vtemp306;
    VlWide<29>/*927:0*/ __Vtemp307;
    VlWide<29>/*927:0*/ __Vtemp308;
    VlWide<29>/*927:0*/ __Vtemp309;
    VlWide<29>/*927:0*/ __Vtemp310;
    VlWide<29>/*927:0*/ __Vtemp311;
    VlWide<29>/*927:0*/ __Vtemp312;
    VlWide<29>/*927:0*/ __Vtemp313;
    VlWide<29>/*927:0*/ __Vtemp335;
    VlWide<29>/*927:0*/ __Vtemp340;
    VlWide<29>/*927:0*/ __Vtemp341;
    VlWide<29>/*927:0*/ __Vtemp342;
    VlWide<29>/*927:0*/ __Vtemp343;
    VlWide<4>/*127:0*/ __Vtemp353;
    VlWide<4>/*127:0*/ __Vtemp354;
    VlWide<4>/*127:0*/ __Vtemp355;
    VlWide<4>/*127:0*/ __Vtemp356;
    VlWide<4>/*127:0*/ __Vtemp357;
    VlWide<4>/*127:0*/ __Vtemp358;
    VlWide<4>/*127:0*/ __Vtemp368;
    VlWide<4>/*127:0*/ __Vtemp369;
    VlWide<4>/*127:0*/ __Vtemp370;
    QData/*63:0*/ top__DOT__idio__DOT___T_378;
    QData/*63:0*/ top__DOT__idio__DOT___T_416;
    QData/*63:0*/ top__DOT__idio__DOT___T_431;
    QData/*63:0*/ top__DOT__idio__DOT___T_446;
    QData/*63:0*/ top__DOT__idio__DOT___T_568;
    QData/*63:0*/ top__DOT__idio__DOT___T_583;
    QData/*63:0*/ top__DOT__idio__DOT___T_617;
    QData/*63:0*/ top__DOT__idio__DOT___T_632;
    // Body
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
    vlSelf->top__DOT__idio_io_toEx_alu_op = ((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? 0U : (IData)(vlSelf->top__DOT__idio__DOT___T_156));
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
    vlSelf->top__DOT__idio_io_toEx_mask_type = ((0x13U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->io_inst))
                                                 ? 0U
                                                 : 
                                                ((0x7013U 
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
                                                         : (IData)(vlSelf->top__DOT__idio__DOT___T_295))))))))));
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
    vlSelf->io_aluop = vlSelf->top__DOT__idio_io_toEx_alu_op;
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
    top__DOT__idio__DOT___T_617 = ((0x2003U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? 0x1bf52ULL : 
                                   ((0x3003U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? 0x1bf52ULL : 
                                    ((0x4003U == (0x707fU 
                                                  & vlSelf->io_inst))
                                      ? 0x1bf52ULL : 
                                     ((0x5003U == (0x707fU 
                                                   & vlSelf->io_inst))
                                       ? 0x1bf52ULL
                                       : ((0x6003U 
                                           == (0x707fU 
                                               & vlSelf->io_inst))
                                           ? 0x1bf52ULL
                                           : ((0x23U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? 0x1bf52ULL
                                               : ((0x1023U 
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
                                                           : 0x1bf52ULL)))))))))))))));
    VL_EXTEND_WQ(901,64, __Vtemp262, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp263, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp264, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp265, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp266, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp267, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp268, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp269, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp270, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp271, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp272, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp273, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp274, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    if ((0x3033U == (0xfe00707fU & vlSelf->io_inst))) {
        __Vtemp296[0U] = __Vtemp264[0U];
        __Vtemp296[1U] = __Vtemp264[1U];
        __Vtemp296[2U] = __Vtemp264[2U];
        __Vtemp296[3U] = __Vtemp264[3U];
        __Vtemp296[4U] = __Vtemp264[4U];
        __Vtemp296[5U] = __Vtemp264[5U];
        __Vtemp296[6U] = __Vtemp264[6U];
        __Vtemp296[7U] = __Vtemp264[7U];
        __Vtemp296[8U] = __Vtemp264[8U];
        __Vtemp296[9U] = __Vtemp264[9U];
        __Vtemp296[0xaU] = __Vtemp264[0xaU];
        __Vtemp296[0xbU] = __Vtemp264[0xbU];
        __Vtemp296[0xcU] = __Vtemp264[0xcU];
        __Vtemp296[0xdU] = __Vtemp264[0xdU];
        __Vtemp296[0xeU] = __Vtemp264[0xeU];
        __Vtemp296[0xfU] = __Vtemp264[0xfU];
        __Vtemp296[0x10U] = __Vtemp264[0x10U];
        __Vtemp296[0x11U] = __Vtemp264[0x11U];
        __Vtemp296[0x12U] = __Vtemp264[0x12U];
        __Vtemp296[0x13U] = __Vtemp264[0x13U];
        __Vtemp296[0x14U] = __Vtemp264[0x14U];
        __Vtemp296[0x15U] = __Vtemp264[0x15U];
        __Vtemp296[0x16U] = __Vtemp264[0x16U];
        __Vtemp296[0x17U] = __Vtemp264[0x17U];
        __Vtemp296[0x18U] = __Vtemp264[0x18U];
        __Vtemp296[0x19U] = __Vtemp264[0x19U];
        __Vtemp296[0x1aU] = __Vtemp264[0x1aU];
        __Vtemp296[0x1bU] = __Vtemp264[0x1bU];
        __Vtemp296[0x1cU] = __Vtemp264[0x1cU];
    } else {
        __Vtemp296[0U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp265[0U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp266[0U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp267[0U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp268[0U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp269[0U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp270[0U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp271[0U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp272[0U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp273[0U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp274[0U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[0U]))))))))));
        __Vtemp296[1U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp265[1U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp266[1U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp267[1U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp268[1U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp269[1U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp270[1U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp271[1U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp272[1U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp273[1U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp274[1U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[1U]))))))))));
        __Vtemp296[2U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp265[2U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp266[2U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp267[2U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp268[2U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp269[2U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp270[2U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp271[2U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp272[2U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp273[2U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp274[2U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[2U]))))))))));
        __Vtemp296[3U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp265[3U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp266[3U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp267[3U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp268[3U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp269[3U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp270[3U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp271[3U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp272[3U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp273[3U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp274[3U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[3U]))))))))));
        __Vtemp296[4U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp265[4U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp266[4U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp267[4U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp268[4U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp269[4U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp270[4U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp271[4U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp272[4U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp273[4U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp274[4U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[4U]))))))))));
        __Vtemp296[5U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp265[5U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp266[5U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp267[5U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp268[5U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp269[5U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp270[5U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp271[5U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp272[5U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp273[5U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp274[5U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[5U]))))))))));
        __Vtemp296[6U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp265[6U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp266[6U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp267[6U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp268[6U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp269[6U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp270[6U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp271[6U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp272[6U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp273[6U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp274[6U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[6U]))))))))));
        __Vtemp296[7U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp265[7U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp266[7U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp267[7U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp268[7U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp269[7U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp270[7U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp271[7U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp272[7U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp273[7U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp274[7U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[7U]))))))))));
        __Vtemp296[8U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp265[8U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp266[8U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp267[8U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp268[8U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp269[8U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp270[8U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp271[8U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp272[8U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp273[8U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp274[8U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[8U]))))))))));
        __Vtemp296[9U] = ((0x1033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp265[9U] : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp266[9U]
                                                : (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp267[9U]
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp268[9U]
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp269[9U]
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp270[9U]
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp271[9U]
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp272[9U]
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp273[9U]
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp274[9U]
                                                           : 
                                                          vlSelf->top__DOT__idio__DOT___T_470[9U]))))))))));
        __Vtemp296[0xaU] = ((0x1033U == (0xfe00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp265[0xaU] : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp266[0xaU]
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp267[0xaU]
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp268[0xaU]
                                                      : 
                                                     ((0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp269[0xaU]
                                                       : 
                                                      ((0x103bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp270[0xaU]
                                                        : 
                                                       ((0x503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp271[0xaU]
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp272[0xaU]
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp273[0xaU]
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp274[0xaU]
                                                            : 
                                                           vlSelf->top__DOT__idio__DOT___T_470[0xaU]))))))))));
        __Vtemp296[0xbU] = ((0x1033U == (0xfe00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp265[0xbU] : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp266[0xbU]
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp267[0xbU]
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp268[0xbU]
                                                      : 
                                                     ((0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp269[0xbU]
                                                       : 
                                                      ((0x103bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp270[0xbU]
                                                        : 
                                                       ((0x503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp271[0xbU]
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp272[0xbU]
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp273[0xbU]
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp274[0xbU]
                                                            : 
                                                           vlSelf->top__DOT__idio__DOT___T_470[0xbU]))))))))));
        __Vtemp296[0xcU] = ((0x1033U == (0xfe00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp265[0xcU] : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp266[0xcU]
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp267[0xcU]
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp268[0xcU]
                                                      : 
                                                     ((0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp269[0xcU]
                                                       : 
                                                      ((0x103bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp270[0xcU]
                                                        : 
                                                       ((0x503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp271[0xcU]
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp272[0xcU]
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp273[0xcU]
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp274[0xcU]
                                                            : 
                                                           vlSelf->top__DOT__idio__DOT___T_470[0xcU]))))))))));
        __Vtemp296[0xdU] = ((0x1033U == (0xfe00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp265[0xdU] : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp266[0xdU]
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp267[0xdU]
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp268[0xdU]
                                                      : 
                                                     ((0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp269[0xdU]
                                                       : 
                                                      ((0x103bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp270[0xdU]
                                                        : 
                                                       ((0x503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp271[0xdU]
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp272[0xdU]
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp273[0xdU]
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp274[0xdU]
                                                            : 
                                                           vlSelf->top__DOT__idio__DOT___T_470[0xdU]))))))))));
        __Vtemp296[0xeU] = ((0x1033U == (0xfe00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp265[0xeU] : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp266[0xeU]
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp267[0xeU]
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp268[0xeU]
                                                      : 
                                                     ((0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp269[0xeU]
                                                       : 
                                                      ((0x103bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp270[0xeU]
                                                        : 
                                                       ((0x503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp271[0xeU]
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp272[0xeU]
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp273[0xeU]
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp274[0xeU]
                                                            : 
                                                           vlSelf->top__DOT__idio__DOT___T_470[0xeU]))))))))));
        __Vtemp296[0xfU] = ((0x1033U == (0xfe00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp265[0xfU] : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp266[0xfU]
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp267[0xfU]
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp268[0xfU]
                                                      : 
                                                     ((0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp269[0xfU]
                                                       : 
                                                      ((0x103bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp270[0xfU]
                                                        : 
                                                       ((0x503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp271[0xfU]
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp272[0xfU]
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp273[0xfU]
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp274[0xfU]
                                                            : 
                                                           vlSelf->top__DOT__idio__DOT___T_470[0xfU]))))))))));
        __Vtemp296[0x10U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp265[0x10U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp266[0x10U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp267[0x10U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp268[0x10U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp269[0x10U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp270[0x10U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp271[0x10U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp272[0x10U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp273[0x10U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp274[0x10U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x10U]))))))))));
        __Vtemp296[0x11U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp265[0x11U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp266[0x11U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp267[0x11U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp268[0x11U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp269[0x11U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp270[0x11U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp271[0x11U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp272[0x11U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp273[0x11U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp274[0x11U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x11U]))))))))));
        __Vtemp296[0x12U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp265[0x12U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp266[0x12U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp267[0x12U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp268[0x12U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp269[0x12U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp270[0x12U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp271[0x12U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp272[0x12U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp273[0x12U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp274[0x12U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x12U]))))))))));
        __Vtemp296[0x13U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp265[0x13U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp266[0x13U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp267[0x13U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp268[0x13U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp269[0x13U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp270[0x13U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp271[0x13U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp272[0x13U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp273[0x13U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp274[0x13U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x13U]))))))))));
        __Vtemp296[0x14U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp265[0x14U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp266[0x14U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp267[0x14U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp268[0x14U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp269[0x14U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp270[0x14U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp271[0x14U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp272[0x14U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp273[0x14U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp274[0x14U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x14U]))))))))));
        __Vtemp296[0x15U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp265[0x15U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp266[0x15U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp267[0x15U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp268[0x15U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp269[0x15U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp270[0x15U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp271[0x15U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp272[0x15U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp273[0x15U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp274[0x15U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x15U]))))))))));
        __Vtemp296[0x16U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp265[0x16U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp266[0x16U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp267[0x16U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp268[0x16U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp269[0x16U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp270[0x16U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp271[0x16U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp272[0x16U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp273[0x16U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp274[0x16U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x16U]))))))))));
        __Vtemp296[0x17U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp265[0x17U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp266[0x17U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp267[0x17U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp268[0x17U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp269[0x17U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp270[0x17U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp271[0x17U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp272[0x17U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp273[0x17U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp274[0x17U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x17U]))))))))));
        __Vtemp296[0x18U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp265[0x18U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp266[0x18U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp267[0x18U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp268[0x18U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp269[0x18U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp270[0x18U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp271[0x18U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp272[0x18U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp273[0x18U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp274[0x18U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x18U]))))))))));
        __Vtemp296[0x19U] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp265[0x19U] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp266[0x19U] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp267[0x19U]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp268[0x19U]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp269[0x19U]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp270[0x19U]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp271[0x19U]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp272[0x19U]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp273[0x19U]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp274[0x19U]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x19U]))))))))));
        __Vtemp296[0x1aU] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp265[0x1aU] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp266[0x1aU] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp267[0x1aU]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp268[0x1aU]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp269[0x1aU]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp270[0x1aU]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp271[0x1aU]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp272[0x1aU]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp273[0x1aU]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp274[0x1aU]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x1aU]))))))))));
        __Vtemp296[0x1bU] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp265[0x1bU] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp266[0x1bU] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp267[0x1bU]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp268[0x1bU]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp269[0x1bU]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp270[0x1bU]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp271[0x1bU]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp272[0x1bU]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp273[0x1bU]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp274[0x1bU]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x1bU]))))))))));
        __Vtemp296[0x1cU] = ((0x1033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp265[0x1cU] : 
                             ((0x5033U == (0xfe00707fU 
                                           & vlSelf->io_inst))
                               ? __Vtemp266[0x1cU] : 
                              ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                ? __Vtemp267[0x1cU]
                                : ((0x3bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                    ? __Vtemp268[0x1cU]
                                    : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? __Vtemp269[0x1cU]
                                        : ((0x103bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp270[0x1cU]
                                            : ((0x503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp271[0x1cU]
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp272[0x1cU]
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp273[0x1cU]
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp274[0x1cU]
                                                      : 
                                                     vlSelf->top__DOT__idio__DOT___T_470[0x1cU]))))))))));
    }
    if ((0x4033U == (0xfe00707fU & vlSelf->io_inst))) {
        top__DOT__idio__DOT___T_483[0U] = __Vtemp262[0U];
        top__DOT__idio__DOT___T_483[1U] = __Vtemp262[1U];
        top__DOT__idio__DOT___T_483[2U] = __Vtemp262[2U];
        top__DOT__idio__DOT___T_483[3U] = __Vtemp262[3U];
        top__DOT__idio__DOT___T_483[4U] = __Vtemp262[4U];
        top__DOT__idio__DOT___T_483[5U] = __Vtemp262[5U];
        top__DOT__idio__DOT___T_483[6U] = __Vtemp262[6U];
        top__DOT__idio__DOT___T_483[7U] = __Vtemp262[7U];
        top__DOT__idio__DOT___T_483[8U] = __Vtemp262[8U];
        top__DOT__idio__DOT___T_483[9U] = __Vtemp262[9U];
        top__DOT__idio__DOT___T_483[0xaU] = __Vtemp262[0xaU];
        top__DOT__idio__DOT___T_483[0xbU] = __Vtemp262[0xbU];
        top__DOT__idio__DOT___T_483[0xcU] = __Vtemp262[0xcU];
        top__DOT__idio__DOT___T_483[0xdU] = __Vtemp262[0xdU];
        top__DOT__idio__DOT___T_483[0xeU] = __Vtemp262[0xeU];
        top__DOT__idio__DOT___T_483[0xfU] = __Vtemp262[0xfU];
        top__DOT__idio__DOT___T_483[0x10U] = __Vtemp262[0x10U];
        top__DOT__idio__DOT___T_483[0x11U] = __Vtemp262[0x11U];
        top__DOT__idio__DOT___T_483[0x12U] = __Vtemp262[0x12U];
        top__DOT__idio__DOT___T_483[0x13U] = __Vtemp262[0x13U];
        top__DOT__idio__DOT___T_483[0x14U] = __Vtemp262[0x14U];
        top__DOT__idio__DOT___T_483[0x15U] = __Vtemp262[0x15U];
        top__DOT__idio__DOT___T_483[0x16U] = __Vtemp262[0x16U];
        top__DOT__idio__DOT___T_483[0x17U] = __Vtemp262[0x17U];
        top__DOT__idio__DOT___T_483[0x18U] = __Vtemp262[0x18U];
        top__DOT__idio__DOT___T_483[0x19U] = __Vtemp262[0x19U];
        top__DOT__idio__DOT___T_483[0x1aU] = __Vtemp262[0x1aU];
        top__DOT__idio__DOT___T_483[0x1bU] = __Vtemp262[0x1bU];
        top__DOT__idio__DOT___T_483[0x1cU] = __Vtemp262[0x1cU];
    } else {
        top__DOT__idio__DOT___T_483[0U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp263[0U]
                                            : __Vtemp296[0U]);
        top__DOT__idio__DOT___T_483[1U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp263[1U]
                                            : __Vtemp296[1U]);
        top__DOT__idio__DOT___T_483[2U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp263[2U]
                                            : __Vtemp296[2U]);
        top__DOT__idio__DOT___T_483[3U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp263[3U]
                                            : __Vtemp296[3U]);
        top__DOT__idio__DOT___T_483[4U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp263[4U]
                                            : __Vtemp296[4U]);
        top__DOT__idio__DOT___T_483[5U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp263[5U]
                                            : __Vtemp296[5U]);
        top__DOT__idio__DOT___T_483[6U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp263[6U]
                                            : __Vtemp296[6U]);
        top__DOT__idio__DOT___T_483[7U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp263[7U]
                                            : __Vtemp296[7U]);
        top__DOT__idio__DOT___T_483[8U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp263[8U]
                                            : __Vtemp296[8U]);
        top__DOT__idio__DOT___T_483[9U] = ((0x2033U 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp263[9U]
                                            : __Vtemp296[9U]);
        top__DOT__idio__DOT___T_483[0xaU] = ((0x2033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp263[0xaU]
                                              : __Vtemp296[0xaU]);
        top__DOT__idio__DOT___T_483[0xbU] = ((0x2033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp263[0xbU]
                                              : __Vtemp296[0xbU]);
        top__DOT__idio__DOT___T_483[0xcU] = ((0x2033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp263[0xcU]
                                              : __Vtemp296[0xcU]);
        top__DOT__idio__DOT___T_483[0xdU] = ((0x2033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp263[0xdU]
                                              : __Vtemp296[0xdU]);
        top__DOT__idio__DOT___T_483[0xeU] = ((0x2033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp263[0xeU]
                                              : __Vtemp296[0xeU]);
        top__DOT__idio__DOT___T_483[0xfU] = ((0x2033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp263[0xfU]
                                              : __Vtemp296[0xfU]);
        top__DOT__idio__DOT___T_483[0x10U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp263[0x10U]
                                               : __Vtemp296[0x10U]);
        top__DOT__idio__DOT___T_483[0x11U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp263[0x11U]
                                               : __Vtemp296[0x11U]);
        top__DOT__idio__DOT___T_483[0x12U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp263[0x12U]
                                               : __Vtemp296[0x12U]);
        top__DOT__idio__DOT___T_483[0x13U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp263[0x13U]
                                               : __Vtemp296[0x13U]);
        top__DOT__idio__DOT___T_483[0x14U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp263[0x14U]
                                               : __Vtemp296[0x14U]);
        top__DOT__idio__DOT___T_483[0x15U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp263[0x15U]
                                               : __Vtemp296[0x15U]);
        top__DOT__idio__DOT___T_483[0x16U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp263[0x16U]
                                               : __Vtemp296[0x16U]);
        top__DOT__idio__DOT___T_483[0x17U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp263[0x17U]
                                               : __Vtemp296[0x17U]);
        top__DOT__idio__DOT___T_483[0x18U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp263[0x18U]
                                               : __Vtemp296[0x18U]);
        top__DOT__idio__DOT___T_483[0x19U] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp263[0x19U]
                                               : __Vtemp296[0x19U]);
        top__DOT__idio__DOT___T_483[0x1aU] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp263[0x1aU]
                                               : __Vtemp296[0x1aU]);
        top__DOT__idio__DOT___T_483[0x1bU] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp263[0x1bU]
                                               : __Vtemp296[0x1bU]);
        top__DOT__idio__DOT___T_483[0x1cU] = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp263[0x1cU]
                                               : __Vtemp296[0x1cU]);
    }
    top__DOT__idio__DOT___T_568 = ((0x2003U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? 0x1bf52ULL : 
                                   ((0x3003U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? 0x1bf52ULL : 
                                    ((0x4003U == (0x707fU 
                                                  & vlSelf->io_inst))
                                      ? 0x1bf52ULL : 
                                     ((0x5003U == (0x707fU 
                                                   & vlSelf->io_inst))
                                       ? 0x1bf52ULL
                                       : ((0x6003U 
                                           == (0x707fU 
                                               & vlSelf->io_inst))
                                           ? 0x1bf52ULL
                                           : ((0x23U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? 0x1bf52ULL
                                               : ((0x1023U 
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
                                                           : 0x1bf52ULL)))))))))))))));
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
    top__DOT__idio__DOT___T_632 = ((0x7033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? 0x1bf52ULL : 
                                   ((0x6033U == (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                     ? 0x1bf52ULL : 
                                    ((0x4033U == (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                      ? 0x1bf52ULL : 
                                     ((0x2033U == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                       ? 0x1bf52ULL
                                       : ((0x3033U 
                                           == (0xfe00707fU 
                                               & vlSelf->io_inst))
                                           ? 0x1bf52ULL
                                           : ((0x1033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? 0x1bf52ULL
                                               : ((0x5033U 
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
                                                           : top__DOT__idio__DOT___T_617)))))))))))))));
    VL_EXTEND_WQ(901,64, __Vtemp301, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp302, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp303, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp304, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp305, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp306, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp307, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp308, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp309, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp310, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp311, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp312, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    VL_EXTEND_WQ(901,64, __Vtemp313, vlSelf->top__DOT__regio_io_reg_read_rs2_data);
    if ((0x1013U == (0xfc00707fU & vlSelf->io_inst))) {
        __Vtemp335[0U] = __Vtemp303[0U];
        __Vtemp335[1U] = __Vtemp303[1U];
        __Vtemp335[2U] = __Vtemp303[2U];
        __Vtemp335[3U] = __Vtemp303[3U];
        __Vtemp335[4U] = __Vtemp303[4U];
        __Vtemp335[5U] = __Vtemp303[5U];
        __Vtemp335[6U] = __Vtemp303[6U];
        __Vtemp335[7U] = __Vtemp303[7U];
        __Vtemp335[8U] = __Vtemp303[8U];
        __Vtemp335[9U] = __Vtemp303[9U];
        __Vtemp335[0xaU] = __Vtemp303[0xaU];
        __Vtemp335[0xbU] = __Vtemp303[0xbU];
        __Vtemp335[0xcU] = __Vtemp303[0xcU];
        __Vtemp335[0xdU] = __Vtemp303[0xdU];
        __Vtemp335[0xeU] = __Vtemp303[0xeU];
        __Vtemp335[0xfU] = __Vtemp303[0xfU];
        __Vtemp335[0x10U] = __Vtemp303[0x10U];
        __Vtemp335[0x11U] = __Vtemp303[0x11U];
        __Vtemp335[0x12U] = __Vtemp303[0x12U];
        __Vtemp335[0x13U] = __Vtemp303[0x13U];
        __Vtemp335[0x14U] = __Vtemp303[0x14U];
        __Vtemp335[0x15U] = __Vtemp303[0x15U];
        __Vtemp335[0x16U] = __Vtemp303[0x16U];
        __Vtemp335[0x17U] = __Vtemp303[0x17U];
        __Vtemp335[0x18U] = __Vtemp303[0x18U];
        __Vtemp335[0x19U] = __Vtemp303[0x19U];
        __Vtemp335[0x1aU] = __Vtemp303[0x1aU];
        __Vtemp335[0x1bU] = __Vtemp303[0x1bU];
        __Vtemp335[0x1cU] = __Vtemp303[0x1cU];
    } else {
        __Vtemp335[0U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp304[0U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp305[0U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp306[0U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp307[0U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp308[0U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp309[0U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp310[0U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp311[0U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp312[0U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp313[0U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[0U]))))))))));
        __Vtemp335[1U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp304[1U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp305[1U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp306[1U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp307[1U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp308[1U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp309[1U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp310[1U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp311[1U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp312[1U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp313[1U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[1U]))))))))));
        __Vtemp335[2U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp304[2U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp305[2U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp306[2U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp307[2U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp308[2U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp309[2U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp310[2U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp311[2U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp312[2U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp313[2U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[2U]))))))))));
        __Vtemp335[3U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp304[3U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp305[3U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp306[3U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp307[3U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp308[3U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp309[3U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp310[3U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp311[3U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp312[3U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp313[3U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[3U]))))))))));
        __Vtemp335[4U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp304[4U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp305[4U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp306[4U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp307[4U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp308[4U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp309[4U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp310[4U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp311[4U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp312[4U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp313[4U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[4U]))))))))));
        __Vtemp335[5U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp304[5U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp305[5U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp306[5U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp307[5U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp308[5U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp309[5U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp310[5U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp311[5U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp312[5U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp313[5U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[5U]))))))))));
        __Vtemp335[6U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp304[6U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp305[6U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp306[6U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp307[6U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp308[6U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp309[6U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp310[6U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp311[6U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp312[6U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp313[6U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[6U]))))))))));
        __Vtemp335[7U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp304[7U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp305[7U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp306[7U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp307[7U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp308[7U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp309[7U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp310[7U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp311[7U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp312[7U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp313[7U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[7U]))))))))));
        __Vtemp335[8U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp304[8U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp305[8U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp306[8U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp307[8U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp308[8U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp309[8U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp310[8U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp311[8U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp312[8U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp313[8U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[8U]))))))))));
        __Vtemp335[9U] = ((0x5013U == (0xfc00707fU 
                                       & vlSelf->io_inst))
                           ? __Vtemp304[9U] : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp305[9U]
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp306[9U]
                                                    : 
                                                   ((0x101bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp307[9U]
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp308[9U]
                                                      : 
                                                     ((0x4000501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp309[9U]
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp310[9U]
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp311[9U]
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp312[9U]
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp313[9U]
                                                           : 
                                                          top__DOT__idio__DOT___T_483[9U]))))))))));
        __Vtemp335[0xaU] = ((0x5013U == (0xfc00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp304[0xaU] : (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp305[0xaU]
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp306[0xaU]
                                                     : 
                                                    ((0x101bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp307[0xaU]
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp308[0xaU]
                                                       : 
                                                      ((0x4000501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp309[0xaU]
                                                        : 
                                                       ((0x33U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp310[0xaU]
                                                         : 
                                                        ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp311[0xaU]
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp312[0xaU]
                                                           : 
                                                          ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp313[0xaU]
                                                            : 
                                                           top__DOT__idio__DOT___T_483[0xaU]))))))))));
        __Vtemp335[0xbU] = ((0x5013U == (0xfc00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp304[0xbU] : (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp305[0xbU]
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp306[0xbU]
                                                     : 
                                                    ((0x101bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp307[0xbU]
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp308[0xbU]
                                                       : 
                                                      ((0x4000501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp309[0xbU]
                                                        : 
                                                       ((0x33U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp310[0xbU]
                                                         : 
                                                        ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp311[0xbU]
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp312[0xbU]
                                                           : 
                                                          ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp313[0xbU]
                                                            : 
                                                           top__DOT__idio__DOT___T_483[0xbU]))))))))));
        __Vtemp335[0xcU] = ((0x5013U == (0xfc00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp304[0xcU] : (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp305[0xcU]
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp306[0xcU]
                                                     : 
                                                    ((0x101bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp307[0xcU]
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp308[0xcU]
                                                       : 
                                                      ((0x4000501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp309[0xcU]
                                                        : 
                                                       ((0x33U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp310[0xcU]
                                                         : 
                                                        ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp311[0xcU]
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp312[0xcU]
                                                           : 
                                                          ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp313[0xcU]
                                                            : 
                                                           top__DOT__idio__DOT___T_483[0xcU]))))))))));
        __Vtemp335[0xdU] = ((0x5013U == (0xfc00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp304[0xdU] : (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp305[0xdU]
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp306[0xdU]
                                                     : 
                                                    ((0x101bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp307[0xdU]
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp308[0xdU]
                                                       : 
                                                      ((0x4000501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp309[0xdU]
                                                        : 
                                                       ((0x33U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp310[0xdU]
                                                         : 
                                                        ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp311[0xdU]
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp312[0xdU]
                                                           : 
                                                          ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp313[0xdU]
                                                            : 
                                                           top__DOT__idio__DOT___T_483[0xdU]))))))))));
        __Vtemp335[0xeU] = ((0x5013U == (0xfc00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp304[0xeU] : (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp305[0xeU]
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp306[0xeU]
                                                     : 
                                                    ((0x101bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp307[0xeU]
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp308[0xeU]
                                                       : 
                                                      ((0x4000501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp309[0xeU]
                                                        : 
                                                       ((0x33U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp310[0xeU]
                                                         : 
                                                        ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp311[0xeU]
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp312[0xeU]
                                                           : 
                                                          ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp313[0xeU]
                                                            : 
                                                           top__DOT__idio__DOT___T_483[0xeU]))))))))));
        __Vtemp335[0xfU] = ((0x5013U == (0xfc00707fU 
                                         & vlSelf->io_inst))
                             ? __Vtemp304[0xfU] : (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp305[0xfU]
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp306[0xfU]
                                                     : 
                                                    ((0x101bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp307[0xfU]
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 
                                                      __Vtemp308[0xfU]
                                                       : 
                                                      ((0x4000501bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 
                                                       __Vtemp309[0xfU]
                                                        : 
                                                       ((0x33U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 
                                                        __Vtemp310[0xfU]
                                                         : 
                                                        ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 
                                                         __Vtemp311[0xfU]
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 
                                                          __Vtemp312[0xfU]
                                                           : 
                                                          ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 
                                                           __Vtemp313[0xfU]
                                                            : 
                                                           top__DOT__idio__DOT___T_483[0xfU]))))))))));
        __Vtemp335[0x10U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp304[0x10U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp305[0x10U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp306[0x10U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp307[0x10U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp308[0x10U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp309[0x10U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp310[0x10U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp311[0x10U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp312[0x10U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp313[0x10U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x10U]))))))))));
        __Vtemp335[0x11U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp304[0x11U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp305[0x11U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp306[0x11U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp307[0x11U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp308[0x11U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp309[0x11U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp310[0x11U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp311[0x11U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp312[0x11U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp313[0x11U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x11U]))))))))));
        __Vtemp335[0x12U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp304[0x12U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp305[0x12U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp306[0x12U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp307[0x12U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp308[0x12U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp309[0x12U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp310[0x12U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp311[0x12U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp312[0x12U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp313[0x12U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x12U]))))))))));
        __Vtemp335[0x13U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp304[0x13U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp305[0x13U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp306[0x13U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp307[0x13U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp308[0x13U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp309[0x13U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp310[0x13U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp311[0x13U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp312[0x13U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp313[0x13U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x13U]))))))))));
        __Vtemp335[0x14U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp304[0x14U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp305[0x14U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp306[0x14U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp307[0x14U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp308[0x14U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp309[0x14U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp310[0x14U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp311[0x14U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp312[0x14U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp313[0x14U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x14U]))))))))));
        __Vtemp335[0x15U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp304[0x15U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp305[0x15U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp306[0x15U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp307[0x15U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp308[0x15U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp309[0x15U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp310[0x15U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp311[0x15U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp312[0x15U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp313[0x15U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x15U]))))))))));
        __Vtemp335[0x16U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp304[0x16U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp305[0x16U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp306[0x16U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp307[0x16U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp308[0x16U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp309[0x16U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp310[0x16U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp311[0x16U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp312[0x16U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp313[0x16U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x16U]))))))))));
        __Vtemp335[0x17U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp304[0x17U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp305[0x17U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp306[0x17U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp307[0x17U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp308[0x17U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp309[0x17U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp310[0x17U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp311[0x17U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp312[0x17U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp313[0x17U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x17U]))))))))));
        __Vtemp335[0x18U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp304[0x18U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp305[0x18U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp306[0x18U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp307[0x18U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp308[0x18U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp309[0x18U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp310[0x18U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp311[0x18U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp312[0x18U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp313[0x18U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x18U]))))))))));
        __Vtemp335[0x19U] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp304[0x19U] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp305[0x19U] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp306[0x19U]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp307[0x19U]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp308[0x19U]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp309[0x19U]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp310[0x19U]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp311[0x19U]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp312[0x19U]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp313[0x19U]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x19U]))))))))));
        __Vtemp335[0x1aU] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp304[0x1aU] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp305[0x1aU] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp306[0x1aU]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp307[0x1aU]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp308[0x1aU]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp309[0x1aU]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp310[0x1aU]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp311[0x1aU]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp312[0x1aU]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp313[0x1aU]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x1aU]))))))))));
        __Vtemp335[0x1bU] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp304[0x1bU] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp305[0x1bU] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp306[0x1bU]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp307[0x1bU]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp308[0x1bU]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp309[0x1bU]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp310[0x1bU]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp311[0x1bU]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp312[0x1bU]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp313[0x1bU]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x1bU]))))))))));
        __Vtemp335[0x1cU] = ((0x5013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? __Vtemp304[0x1cU] : 
                             ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->io_inst))
                               ? __Vtemp305[0x1cU] : 
                              ((0x1bU == (0x707fU & vlSelf->io_inst))
                                ? __Vtemp306[0x1cU]
                                : ((0x101bU == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? __Vtemp307[0x1cU]
                                    : ((0x501bU == 
                                        (0xfe00707fU 
                                         & vlSelf->io_inst))
                                        ? __Vtemp308[0x1cU]
                                        : ((0x4000501bU 
                                            == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp309[0x1cU]
                                            : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? __Vtemp310[0x1cU]
                                                : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 
                                                   __Vtemp311[0x1cU]
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 
                                                    __Vtemp312[0x1cU]
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 
                                                     __Vtemp313[0x1cU]
                                                      : 
                                                     top__DOT__idio__DOT___T_483[0x1cU]))))))))));
    }
    if ((0x2013U == (0x707fU & vlSelf->io_inst))) {
        top__DOT__idio__DOT___T_496[0U] = __Vtemp301[0U];
        top__DOT__idio__DOT___T_496[1U] = __Vtemp301[1U];
        top__DOT__idio__DOT___T_496[2U] = __Vtemp301[2U];
        top__DOT__idio__DOT___T_496[3U] = __Vtemp301[3U];
        top__DOT__idio__DOT___T_496[4U] = __Vtemp301[4U];
        top__DOT__idio__DOT___T_496[5U] = __Vtemp301[5U];
        top__DOT__idio__DOT___T_496[6U] = __Vtemp301[6U];
        top__DOT__idio__DOT___T_496[7U] = __Vtemp301[7U];
        top__DOT__idio__DOT___T_496[8U] = __Vtemp301[8U];
        top__DOT__idio__DOT___T_496[9U] = __Vtemp301[9U];
        top__DOT__idio__DOT___T_496[0xaU] = __Vtemp301[0xaU];
        top__DOT__idio__DOT___T_496[0xbU] = __Vtemp301[0xbU];
        top__DOT__idio__DOT___T_496[0xcU] = __Vtemp301[0xcU];
        top__DOT__idio__DOT___T_496[0xdU] = __Vtemp301[0xdU];
        top__DOT__idio__DOT___T_496[0xeU] = __Vtemp301[0xeU];
        top__DOT__idio__DOT___T_496[0xfU] = __Vtemp301[0xfU];
        top__DOT__idio__DOT___T_496[0x10U] = __Vtemp301[0x10U];
        top__DOT__idio__DOT___T_496[0x11U] = __Vtemp301[0x11U];
        top__DOT__idio__DOT___T_496[0x12U] = __Vtemp301[0x12U];
        top__DOT__idio__DOT___T_496[0x13U] = __Vtemp301[0x13U];
        top__DOT__idio__DOT___T_496[0x14U] = __Vtemp301[0x14U];
        top__DOT__idio__DOT___T_496[0x15U] = __Vtemp301[0x15U];
        top__DOT__idio__DOT___T_496[0x16U] = __Vtemp301[0x16U];
        top__DOT__idio__DOT___T_496[0x17U] = __Vtemp301[0x17U];
        top__DOT__idio__DOT___T_496[0x18U] = __Vtemp301[0x18U];
        top__DOT__idio__DOT___T_496[0x19U] = __Vtemp301[0x19U];
        top__DOT__idio__DOT___T_496[0x1aU] = __Vtemp301[0x1aU];
        top__DOT__idio__DOT___T_496[0x1bU] = __Vtemp301[0x1bU];
        top__DOT__idio__DOT___T_496[0x1cU] = __Vtemp301[0x1cU];
    } else {
        top__DOT__idio__DOT___T_496[0U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp302[0U]
                                            : __Vtemp335[0U]);
        top__DOT__idio__DOT___T_496[1U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp302[1U]
                                            : __Vtemp335[1U]);
        top__DOT__idio__DOT___T_496[2U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp302[2U]
                                            : __Vtemp335[2U]);
        top__DOT__idio__DOT___T_496[3U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp302[3U]
                                            : __Vtemp335[3U]);
        top__DOT__idio__DOT___T_496[4U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp302[4U]
                                            : __Vtemp335[4U]);
        top__DOT__idio__DOT___T_496[5U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp302[5U]
                                            : __Vtemp335[5U]);
        top__DOT__idio__DOT___T_496[6U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp302[6U]
                                            : __Vtemp335[6U]);
        top__DOT__idio__DOT___T_496[7U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp302[7U]
                                            : __Vtemp335[7U]);
        top__DOT__idio__DOT___T_496[8U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp302[8U]
                                            : __Vtemp335[8U]);
        top__DOT__idio__DOT___T_496[9U] = ((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp302[9U]
                                            : __Vtemp335[9U]);
        top__DOT__idio__DOT___T_496[0xaU] = ((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp302[0xaU]
                                              : __Vtemp335[0xaU]);
        top__DOT__idio__DOT___T_496[0xbU] = ((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp302[0xbU]
                                              : __Vtemp335[0xbU]);
        top__DOT__idio__DOT___T_496[0xcU] = ((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp302[0xcU]
                                              : __Vtemp335[0xcU]);
        top__DOT__idio__DOT___T_496[0xdU] = ((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp302[0xdU]
                                              : __Vtemp335[0xdU]);
        top__DOT__idio__DOT___T_496[0xeU] = ((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp302[0xeU]
                                              : __Vtemp335[0xeU]);
        top__DOT__idio__DOT___T_496[0xfU] = ((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->io_inst))
                                              ? __Vtemp302[0xfU]
                                              : __Vtemp335[0xfU]);
        top__DOT__idio__DOT___T_496[0x10U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp302[0x10U]
                                               : __Vtemp335[0x10U]);
        top__DOT__idio__DOT___T_496[0x11U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp302[0x11U]
                                               : __Vtemp335[0x11U]);
        top__DOT__idio__DOT___T_496[0x12U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp302[0x12U]
                                               : __Vtemp335[0x12U]);
        top__DOT__idio__DOT___T_496[0x13U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp302[0x13U]
                                               : __Vtemp335[0x13U]);
        top__DOT__idio__DOT___T_496[0x14U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp302[0x14U]
                                               : __Vtemp335[0x14U]);
        top__DOT__idio__DOT___T_496[0x15U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp302[0x15U]
                                               : __Vtemp335[0x15U]);
        top__DOT__idio__DOT___T_496[0x16U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp302[0x16U]
                                               : __Vtemp335[0x16U]);
        top__DOT__idio__DOT___T_496[0x17U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp302[0x17U]
                                               : __Vtemp335[0x17U]);
        top__DOT__idio__DOT___T_496[0x18U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp302[0x18U]
                                               : __Vtemp335[0x18U]);
        top__DOT__idio__DOT___T_496[0x19U] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp302[0x19U]
                                               : __Vtemp335[0x19U]);
        top__DOT__idio__DOT___T_496[0x1aU] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp302[0x1aU]
                                               : __Vtemp335[0x1aU]);
        top__DOT__idio__DOT___T_496[0x1bU] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp302[0x1bU]
                                               : __Vtemp335[0x1bU]);
        top__DOT__idio__DOT___T_496[0x1cU] = ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? __Vtemp302[0x1cU]
                                               : __Vtemp335[0x1cU]);
    }
    top__DOT__idio__DOT___T_583 = ((0x7033U == (0xfe00707fU 
                                                & vlSelf->io_inst))
                                    ? 0x1bf52ULL : 
                                   ((0x6033U == (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                     ? 0x1bf52ULL : 
                                    ((0x4033U == (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                      ? 0x1bf52ULL : 
                                     ((0x2033U == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                       ? 0x1bf52ULL
                                       : ((0x3033U 
                                           == (0xfe00707fU 
                                               & vlSelf->io_inst))
                                           ? 0x1bf52ULL
                                           : ((0x1033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                               ? 0x1bf52ULL
                                               : ((0x5033U 
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
                                                           : top__DOT__idio__DOT___T_568)))))))))))))));
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
    vlSelf->top__DOT__idio_io_toEx_cmp_op2 = ((0x13U 
                                               == (0x707fU 
                                                   & vlSelf->io_inst))
                                               ? 0x1bf52ULL
                                               : ((0x7013U 
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
                                                                : top__DOT__idio__DOT___T_632)))))))))))))));
    VL_EXTEND_WQ(901,64, __Vtemp340, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp341, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp342, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    VL_EXTEND_WQ(901,64, __Vtemp343, vlSelf->top__DOT__idio__DOT__imm_itype_sext);
    if ((0x13U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0U] 
            = __Vtemp340[0U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[1U] 
            = __Vtemp340[1U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[2U] 
            = __Vtemp340[2U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[3U] 
            = __Vtemp340[3U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[4U] 
            = __Vtemp340[4U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[5U] 
            = __Vtemp340[5U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[6U] 
            = __Vtemp340[6U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[7U] 
            = __Vtemp340[7U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[8U] 
            = __Vtemp340[8U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[9U] 
            = __Vtemp340[9U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xaU] 
            = __Vtemp340[0xaU];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xbU] 
            = __Vtemp340[0xbU];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xcU] 
            = __Vtemp340[0xcU];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xdU] 
            = __Vtemp340[0xdU];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xeU] 
            = __Vtemp340[0xeU];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xfU] 
            = __Vtemp340[0xfU];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x10U] 
            = __Vtemp340[0x10U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x11U] 
            = __Vtemp340[0x11U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x12U] 
            = __Vtemp340[0x12U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x13U] 
            = __Vtemp340[0x13U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x14U] 
            = __Vtemp340[0x14U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x15U] 
            = __Vtemp340[0x15U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x16U] 
            = __Vtemp340[0x16U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x17U] 
            = __Vtemp340[0x17U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x18U] 
            = __Vtemp340[0x18U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x19U] 
            = __Vtemp340[0x19U];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x1aU] 
            = __Vtemp340[0x1aU];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x1bU] 
            = __Vtemp340[0x1bU];
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x1cU] 
            = __Vtemp340[0x1cU];
        vlSelf->top__DOT__idio_io_toEx_cmp_op1 = 0x1bf52ULL;
    } else {
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp342[0U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp343[0U]
                                         : top__DOT__idio__DOT___T_496[0U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[1U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[1U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp342[1U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp343[1U]
                                         : top__DOT__idio__DOT___T_496[1U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[2U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[2U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp342[2U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp343[2U]
                                         : top__DOT__idio__DOT___T_496[2U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[3U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[3U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp342[3U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp343[3U]
                                         : top__DOT__idio__DOT___T_496[3U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[4U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[4U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp342[4U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp343[4U]
                                         : top__DOT__idio__DOT___T_496[4U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[5U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[5U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp342[5U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp343[5U]
                                         : top__DOT__idio__DOT___T_496[5U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[6U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[6U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp342[6U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp343[6U]
                                         : top__DOT__idio__DOT___T_496[6U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[7U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[7U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp342[7U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp343[7U]
                                         : top__DOT__idio__DOT___T_496[7U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[8U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[8U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp342[8U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp343[8U]
                                         : top__DOT__idio__DOT___T_496[8U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[9U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[9U] : ((0x6013U == (0x707fU 
                                                 & vlSelf->io_inst))
                                     ? __Vtemp342[9U]
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst))
                                         ? __Vtemp343[9U]
                                         : top__DOT__idio__DOT___T_496[9U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xaU] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0xaU] : ((0x6013U == (0x707fU 
                                                   & vlSelf->io_inst))
                                       ? __Vtemp342[0xaU]
                                       : ((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->io_inst))
                                           ? __Vtemp343[0xaU]
                                           : top__DOT__idio__DOT___T_496[0xaU])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xbU] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0xbU] : ((0x6013U == (0x707fU 
                                                   & vlSelf->io_inst))
                                       ? __Vtemp342[0xbU]
                                       : ((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->io_inst))
                                           ? __Vtemp343[0xbU]
                                           : top__DOT__idio__DOT___T_496[0xbU])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xcU] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0xcU] : ((0x6013U == (0x707fU 
                                                   & vlSelf->io_inst))
                                       ? __Vtemp342[0xcU]
                                       : ((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->io_inst))
                                           ? __Vtemp343[0xcU]
                                           : top__DOT__idio__DOT___T_496[0xcU])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xdU] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0xdU] : ((0x6013U == (0x707fU 
                                                   & vlSelf->io_inst))
                                       ? __Vtemp342[0xdU]
                                       : ((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->io_inst))
                                           ? __Vtemp343[0xdU]
                                           : top__DOT__idio__DOT___T_496[0xdU])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xeU] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0xeU] : ((0x6013U == (0x707fU 
                                                   & vlSelf->io_inst))
                                       ? __Vtemp342[0xeU]
                                       : ((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->io_inst))
                                           ? __Vtemp343[0xeU]
                                           : top__DOT__idio__DOT___T_496[0xeU])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0xfU] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0xfU] : ((0x6013U == (0x707fU 
                                                   & vlSelf->io_inst))
                                       ? __Vtemp342[0xfU]
                                       : ((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->io_inst))
                                           ? __Vtemp343[0xfU]
                                           : top__DOT__idio__DOT___T_496[0xfU])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x10U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0x10U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp342[0x10U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp343[0x10U]
                                            : top__DOT__idio__DOT___T_496[0x10U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x11U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0x11U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp342[0x11U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp343[0x11U]
                                            : top__DOT__idio__DOT___T_496[0x11U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x12U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0x12U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp342[0x12U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp343[0x12U]
                                            : top__DOT__idio__DOT___T_496[0x12U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x13U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0x13U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp342[0x13U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp343[0x13U]
                                            : top__DOT__idio__DOT___T_496[0x13U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x14U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0x14U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp342[0x14U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp343[0x14U]
                                            : top__DOT__idio__DOT___T_496[0x14U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x15U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0x15U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp342[0x15U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp343[0x15U]
                                            : top__DOT__idio__DOT___T_496[0x15U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x16U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0x16U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp342[0x16U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp343[0x16U]
                                            : top__DOT__idio__DOT___T_496[0x16U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x17U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0x17U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp342[0x17U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp343[0x17U]
                                            : top__DOT__idio__DOT___T_496[0x17U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x18U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0x18U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp342[0x18U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp343[0x18U]
                                            : top__DOT__idio__DOT___T_496[0x18U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x19U] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0x19U] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp342[0x19U]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp343[0x19U]
                                            : top__DOT__idio__DOT___T_496[0x19U])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x1aU] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0x1aU] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp342[0x1aU]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp343[0x1aU]
                                            : top__DOT__idio__DOT___T_496[0x1aU])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x1bU] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0x1bU] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp342[0x1bU]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp343[0x1bU]
                                            : top__DOT__idio__DOT___T_496[0x1bU])));
        vlSelf->top__DOT__idio__DOT__decodeValue_7[0x1cU] 
            = ((0x7013U == (0x707fU & vlSelf->io_inst))
                ? __Vtemp341[0x1cU] : ((0x6013U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? __Vtemp342[0x1cU]
                                        : ((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? __Vtemp343[0x1cU]
                                            : top__DOT__idio__DOT___T_496[0x1cU])));
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
    vlSelf->top__DOT__exio__DOT___T_1 = (vlSelf->top__DOT__idio_io_toEx_op1 
                                         + (((QData)((IData)(
                                                             vlSelf->top__DOT__idio__DOT__decodeValue_7[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__idio__DOT__decodeValue_7[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp353, vlSelf->top__DOT__idio_io_toEx_op1);
    VL_EXTEND_WQ(127,64, __Vtemp354, VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__idio_io_toEx_op1, 
                                                    (0x3fU 
                                                     & vlSelf->top__DOT__idio__DOT__decodeValue_7[0U])));
    VL_EXTEND_WQ(127,64, __Vtemp355, (vlSelf->top__DOT__idio_io_toEx_op1 
                                      >> (0x3fU & vlSelf->top__DOT__idio__DOT__decodeValue_7[0U])));
    VL_EXTEND_WQ(127,64, __Vtemp356, vlSelf->top__DOT__idio_io_toEx_op1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp357, __Vtemp356, 
                  (0x3fU & vlSelf->top__DOT__idio__DOT__decodeValue_7[0U]));
    VL_EXTEND_WQ(127,64, __Vtemp358, ((9U == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
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
        top__DOT__exio__DOT___T_43[0U] = __Vtemp353[0U];
        top__DOT__exio__DOT___T_43[1U] = __Vtemp353[1U];
        top__DOT__exio__DOT___T_43[2U] = __Vtemp353[2U];
        top__DOT__exio__DOT___T_43[3U] = (0x7fffffffU 
                                          & __Vtemp353[3U]);
    } else {
        top__DOT__exio__DOT___T_43[0U] = ((4U == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                           ? __Vtemp354[0U]
                                           : ((3U == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                               ? __Vtemp355[0U]
                                               : ((2U 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                   ? 
                                                  __Vtemp357[0U]
                                                   : 
                                                  __Vtemp358[0U])));
        top__DOT__exio__DOT___T_43[1U] = ((4U == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                           ? __Vtemp354[1U]
                                           : ((3U == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                               ? __Vtemp355[1U]
                                               : ((2U 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                   ? 
                                                  __Vtemp357[1U]
                                                   : 
                                                  __Vtemp358[1U])));
        top__DOT__exio__DOT___T_43[2U] = ((4U == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                           ? __Vtemp354[2U]
                                           : ((3U == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                               ? __Vtemp355[2U]
                                               : ((2U 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                   ? 
                                                  __Vtemp357[2U]
                                                   : 
                                                  __Vtemp358[2U])));
        top__DOT__exio__DOT___T_43[3U] = (0x7fffffffU 
                                          & ((4U == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                              ? __Vtemp354[3U]
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                  ? 
                                                 __Vtemp355[3U]
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                   ? 
                                                  __Vtemp357[3U]
                                                   : 
                                                  __Vtemp358[3U]))));
    }
    VL_EXTEND_WQ(127,64, __Vtemp368, (4ULL + (QData)((IData)(vlSelf->top__DOT__ifio__DOT__pc))));
    VL_EXTEND_WQ(127,64, __Vtemp369, (vlSelf->top__DOT__idio_io_toEx_op1 
                                      + (QData)((IData)(vlSelf->top__DOT__ifio__DOT__pc))));
    VL_EXTEND_WQ(127,64, __Vtemp370, (((QData)((IData)(
                                                       vlSelf->top__DOT__idio__DOT__decodeValue_7[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__idio__DOT__decodeValue_7[0U]))));
    if ((0xdU == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))) {
        vlSelf->top__DOT__exio__DOT___T_49[0U] = __Vtemp368[0U];
        vlSelf->top__DOT__exio__DOT___T_49[1U] = __Vtemp368[1U];
        vlSelf->top__DOT__exio__DOT___T_49[2U] = __Vtemp368[2U];
        vlSelf->top__DOT__exio__DOT___T_49[3U] = __Vtemp368[3U];
    } else {
        vlSelf->top__DOT__exio__DOT___T_49[0U] = ((0xcU 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                   ? 
                                                  __Vtemp369[0U]
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                    ? 
                                                   __Vtemp370[0U]
                                                    : 
                                                   top__DOT__exio__DOT___T_43[0U]));
        vlSelf->top__DOT__exio__DOT___T_49[1U] = ((0xcU 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                   ? 
                                                  __Vtemp369[1U]
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                    ? 
                                                   __Vtemp370[1U]
                                                    : 
                                                   top__DOT__exio__DOT___T_43[1U]));
        vlSelf->top__DOT__exio__DOT___T_49[2U] = ((0xcU 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                   ? 
                                                  __Vtemp369[2U]
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                    ? 
                                                   __Vtemp370[2U]
                                                    : 
                                                   top__DOT__exio__DOT___T_43[2U]));
        vlSelf->top__DOT__exio__DOT___T_49[3U] = ((0xcU 
                                                   == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                   ? 
                                                  __Vtemp369[3U]
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelf->top__DOT__idio_io_toEx_alu_op))
                                                    ? 
                                                   __Vtemp370[3U]
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtop___024root___combo__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
