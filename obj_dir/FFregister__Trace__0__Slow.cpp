// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "FFregister__Syms.h"


VL_ATTR_COLD void FFregister___024root__trace_init_sub__TOP__0(FFregister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"res", false,-1);
    tracep->declBit(c+4,"dir", false,-1);
    tracep->declBit(c+5,"qout", false,-1);
    tracep->declBus(c+6,"outbit", false,-1, 7,0);
    tracep->pushNamePrefix("FFregister ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"res", false,-1);
    tracep->declBit(c+4,"dir", false,-1);
    tracep->declBit(c+5,"qout", false,-1);
    tracep->declBus(c+6,"outbit", false,-1, 7,0);
    tracep->declBus(c+7,"qin", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void FFregister___024root__trace_init_top(FFregister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root__trace_init_top\n"); );
    // Body
    FFregister___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void FFregister___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void FFregister___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void FFregister___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void FFregister___024root__trace_register(FFregister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&FFregister___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&FFregister___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&FFregister___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void FFregister___024root__trace_full_sub_0(FFregister___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void FFregister___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root__trace_full_top_0\n"); );
    // Init
    FFregister___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<FFregister___024root*>(voidSelf);
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    FFregister___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void FFregister___024root__trace_full_sub_0(FFregister___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    FFregister___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->a));
    bufp->fullBit(oldp+2,(vlSelf->clk));
    bufp->fullBit(oldp+3,(vlSelf->res));
    bufp->fullBit(oldp+4,(vlSelf->dir));
    bufp->fullBit(oldp+5,(vlSelf->qout));
    bufp->fullCData(oldp+6,(vlSelf->outbit),8);
    bufp->fullCData(oldp+7,(vlSelf->FFregister__DOT__qin),8);
}
