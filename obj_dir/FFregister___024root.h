// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See FFregister.h for the primary calling header

#ifndef VERILATED_FFREGISTER___024ROOT_H_
#define VERILATED_FFREGISTER___024ROOT_H_  // guard

#include "verilated.h"

class FFregister__Syms;

class FFregister___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(res,0,0);
    VL_IN8(a,0,0);
    VL_IN8(dir,0,0);
    VL_OUT8(qout,0,0);
    VL_OUT8(outbit,7,0);
    CData/*7:0*/ FFregister__DOT__qin;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__res;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    FFregister__Syms* const vlSymsp;

    // CONSTRUCTORS
    FFregister___024root(FFregister__Syms* symsp, const char* name);
    ~FFregister___024root();
    VL_UNCOPYABLE(FFregister___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
