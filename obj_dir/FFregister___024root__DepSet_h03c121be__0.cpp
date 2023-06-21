// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See FFregister.h for the primary calling header

#include "verilated.h"

#include "FFregister__Syms.h"
#include "FFregister___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void FFregister___024root___dump_triggers__act(FFregister___024root* vlSelf);
#endif  // VL_DEBUG

void FFregister___024root___eval_triggers__act(FFregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->res) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__res))));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__res = vlSelf->res;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        FFregister___024root___dump_triggers__act(vlSelf);
    }
#endif
}
