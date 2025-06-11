// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPerceptron__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPerceptron::VPerceptron(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPerceptron__Syms(contextp(), _vcname__, this)}
    , __PVT__FixedPoint{vlSymsp->TOP.__PVT__FixedPoint}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VPerceptron::VPerceptron(const char* _vcname__)
    : VPerceptron(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPerceptron::~VPerceptron() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VPerceptron___024root___eval_debug_assertions(VPerceptron___024root* vlSelf);
#endif  // VL_DEBUG
void VPerceptron___024root___eval_static(VPerceptron___024root* vlSelf);
void VPerceptron___024root___eval_initial(VPerceptron___024root* vlSelf);
void VPerceptron___024root___eval_settle(VPerceptron___024root* vlSelf);
void VPerceptron___024root___eval(VPerceptron___024root* vlSelf);

void VPerceptron::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPerceptron::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPerceptron___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VPerceptron___024root___eval_static(&(vlSymsp->TOP));
        VPerceptron___024root___eval_initial(&(vlSymsp->TOP));
        VPerceptron___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VPerceptron___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VPerceptron::eventsPending() { return false; }

uint64_t VPerceptron::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VPerceptron::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VPerceptron___024root___eval_final(VPerceptron___024root* vlSelf);

VL_ATTR_COLD void VPerceptron::final() {
    VPerceptron___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPerceptron::hierName() const { return vlSymsp->name(); }
const char* VPerceptron::modelName() const { return "VPerceptron"; }
unsigned VPerceptron::threads() const { return 1; }
void VPerceptron::prepareClone() const { contextp()->prepareClone(); }
void VPerceptron::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VPerceptron::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VPerceptron___024root__trace_decl_types(VerilatedVcd* tracep);

void VPerceptron___024root__trace_init_top(VPerceptron___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPerceptron___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPerceptron___024root*>(voidSelf);
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VPerceptron___024root__trace_decl_types(tracep);
    VPerceptron___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VPerceptron___024root__trace_register(VPerceptron___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPerceptron::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VPerceptron::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPerceptron___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
