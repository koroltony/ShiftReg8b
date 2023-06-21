// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See FFregister.h for the primary calling header

#include "verilated.h"

#include "FFregister__Syms.h"
#include "FFregister___024root.h"

void FFregister___024root___ctor_var_reset(FFregister___024root* vlSelf);

FFregister___024root::FFregister___024root(FFregister__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    FFregister___024root___ctor_var_reset(this);
}

void FFregister___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

FFregister___024root::~FFregister___024root() {
}
