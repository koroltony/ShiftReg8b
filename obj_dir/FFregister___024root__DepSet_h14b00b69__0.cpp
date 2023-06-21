// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See FFregister.h for the primary calling header

#include "verilated.h"

#include "FFregister___024root.h"

void FFregister___024root___eval_act(FFregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root___eval_act\n"); );
}

VL_INLINE_OPT void FFregister___024root___nba_sequent__TOP__0(FFregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__FFregister__DOT__qin;
    // Body
    __Vdly__FFregister__DOT__qin = vlSelf->FFregister__DOT__qin;
    if (vlSelf->res) {
        __Vdly__FFregister__DOT__qin = 0U;
    } else if (vlSelf->dir) {
        __Vdly__FFregister__DOT__qin = ((0xfeU & ((IData)(vlSelf->FFregister__DOT__qin) 
                                                  << 1U)) 
                                        | (IData)(vlSelf->a));
        vlSelf->qout = (1U & ((IData)(vlSelf->FFregister__DOT__qin) 
                              >> 7U));
    } else {
        __Vdly__FFregister__DOT__qin = (((IData)(vlSelf->a) 
                                         << 7U) | (0x7fU 
                                                   & ((IData)(vlSelf->FFregister__DOT__qin) 
                                                      >> 1U)));
        vlSelf->qout = (1U & (IData)(vlSelf->FFregister__DOT__qin));
    }
    vlSelf->FFregister__DOT__qin = __Vdly__FFregister__DOT__qin;
    vlSelf->outbit = vlSelf->FFregister__DOT__qin;
}

void FFregister___024root___eval_nba(FFregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        FFregister___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void FFregister___024root___eval_triggers__act(FFregister___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void FFregister___024root___dump_triggers__act(FFregister___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void FFregister___024root___dump_triggers__nba(FFregister___024root* vlSelf);
#endif  // VL_DEBUG

void FFregister___024root___eval(FFregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            FFregister___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    FFregister___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("FFregister.sv", 13, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                FFregister___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                FFregister___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("FFregister.sv", 13, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            FFregister___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void FFregister___024root___eval_debug_assertions(FFregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->res & 0xfeU))) {
        Verilated::overWidthError("res");}
    if (VL_UNLIKELY((vlSelf->dir & 0xfeU))) {
        Verilated::overWidthError("dir");}
}
#endif  // VL_DEBUG
