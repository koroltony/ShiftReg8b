// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "FFregister.h"
#include "FFregister__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

FFregister::FFregister(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new FFregister__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , res{vlSymsp->TOP.res}
    , a{vlSymsp->TOP.a}
    , dir{vlSymsp->TOP.dir}
    , qout{vlSymsp->TOP.qout}
    , outbit{vlSymsp->TOP.outbit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

FFregister::FFregister(const char* _vcname__)
    : FFregister(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

FFregister::~FFregister() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void FFregister___024root___eval_debug_assertions(FFregister___024root* vlSelf);
#endif  // VL_DEBUG
void FFregister___024root___eval_static(FFregister___024root* vlSelf);
void FFregister___024root___eval_initial(FFregister___024root* vlSelf);
void FFregister___024root___eval_settle(FFregister___024root* vlSelf);
void FFregister___024root___eval(FFregister___024root* vlSelf);

void FFregister::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate FFregister::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    FFregister___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        FFregister___024root___eval_static(&(vlSymsp->TOP));
        FFregister___024root___eval_initial(&(vlSymsp->TOP));
        FFregister___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    FFregister___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool FFregister::eventsPending() { return false; }

uint64_t FFregister::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* FFregister::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void FFregister___024root___eval_final(FFregister___024root* vlSelf);

VL_ATTR_COLD void FFregister::final() {
    FFregister___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* FFregister::hierName() const { return vlSymsp->name(); }
const char* FFregister::modelName() const { return "FFregister"; }
unsigned FFregister::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> FFregister::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void FFregister___024root__trace_init_top(FFregister___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    FFregister___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<FFregister___024root*>(voidSelf);
    FFregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    FFregister___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void FFregister___024root__trace_register(FFregister___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void FFregister::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'FFregister::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    FFregister___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
