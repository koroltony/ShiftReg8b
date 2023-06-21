// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See FFregister.h for the primary calling header

#include "verilated.h"

#include "FFregister___024root.h"

VL_ATTR_COLD void FFregister___024root___eval_static__TOP(FFregister___024root* vlSelf);

VL_ATTR_COLD void FFregister___024root___eval_static(FFregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root___eval_static\n"); );
    // Body
    FFregister___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void FFregister___024root___eval_static__TOP(FFregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->FFregister__DOT__qin = 0U;
}

VL_ATTR_COLD void FFregister___024root___eval_initial(FFregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__res = vlSelf->res;
}

VL_ATTR_COLD void FFregister___024root___eval_final(FFregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root___eval_final\n"); );
}

VL_ATTR_COLD void FFregister___024root___eval_triggers__stl(FFregister___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void FFregister___024root___dump_triggers__stl(FFregister___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void FFregister___024root___eval_stl(FFregister___024root* vlSelf);

VL_ATTR_COLD void FFregister___024root___eval_settle(FFregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        FFregister___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                FFregister___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("FFregister.sv", 13, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            FFregister___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void FFregister___024root___dump_triggers__stl(FFregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void FFregister___024root___stl_sequent__TOP__0(FFregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->outbit = vlSelf->FFregister__DOT__qin;
}

VL_ATTR_COLD void FFregister___024root___eval_stl(FFregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        FFregister___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void FFregister___024root___dump_triggers__act(FFregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge res)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void FFregister___024root___dump_triggers__nba(FFregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge res)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void FFregister___024root___ctor_var_reset(FFregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->res = VL_RAND_RESET_I(1);
    vlSelf->dir = VL_RAND_RESET_I(1);
    vlSelf->qout = VL_RAND_RESET_I(1);
    vlSelf->outbit = VL_RAND_RESET_I(8);
    vlSelf->FFregister__DOT__qin = VL_RAND_RESET_I(8);
    vlSelf->__VstlIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__res = VL_RAND_RESET_I(1);
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
}
