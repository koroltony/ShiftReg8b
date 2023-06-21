// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "FFregister__Syms.h"


void FFregister___024root__trace_chg_sub_0(FFregister___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void FFregister___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root__trace_chg_top_0\n"); );
    // Init
    FFregister___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<FFregister___024root*>(voidSelf);
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    FFregister___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void FFregister___024root__trace_chg_sub_0(FFregister___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->a));
    bufp->chgBit(oldp+1,(vlSelf->clk));
    bufp->chgBit(oldp+2,(vlSelf->res));
    bufp->chgBit(oldp+3,(vlSelf->dir));
    bufp->chgBit(oldp+4,(vlSelf->qout));
    bufp->chgCData(oldp+5,(vlSelf->outbit),8);
    bufp->chgCData(oldp+6,(vlSelf->FFregister__DOT__qin),8);
}

void FFregister___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root__trace_cleanup\n"); );
    // Init
    FFregister___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<FFregister___024root*>(voidSelf);
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
