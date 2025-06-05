// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron__Syms.h"
#include "VPerceptron___024root.h"

VL_INLINE_OPT VlCoroutine VPerceptron___024root___eval_initial__TOP__Vtiming__0(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_initial__TOP__Vtiming__0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"sim.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelfRef.BenchPerceptronIntroduction__DOT__ONE = 0x100000000ULL;
    vlSelfRef.BenchPerceptronIntroduction__DOT__activation = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__learning_rate = 0x100000000ULL;
    vlSelfRef.BenchPerceptronIntroduction__DOT__train_values[3U][1U] = 0ULL;
    vlSelfRef.BenchPerceptronIntroduction__DOT__train_values[3U][0U] = 0ULL;
    vlSelfRef.BenchPerceptronIntroduction__DOT__train_values[2U][1U] = 0ULL;
    vlSelfRef.BenchPerceptronIntroduction__DOT__train_values[2U][0U] = 0x100000000ULL;
    vlSelfRef.BenchPerceptronIntroduction__DOT__train_values[1U][1U] = 0x100000000ULL;
    vlSelfRef.BenchPerceptronIntroduction__DOT__train_values[1U][0U] = 0ULL;
    vlSelfRef.BenchPerceptronIntroduction__DOT__train_values[0U][1U] = 0x100000000ULL;
    vlSelfRef.BenchPerceptronIntroduction__DOT__train_values[0U][0U] = 0x100000000ULL;
    vlSelfRef.BenchPerceptronIntroduction__DOT__expected[3U] = 0ULL;
    vlSelfRef.BenchPerceptronIntroduction__DOT__expected[2U] = 0ULL;
    vlSelfRef.BenchPerceptronIntroduction__DOT__expected[1U] = 0ULL;
    vlSelfRef.BenchPerceptronIntroduction__DOT__expected[0U] = 0x100000000ULL;
    vlSelfRef.BenchPerceptronIntroduction__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "src/Benches/BenchPerceptronIntroduction.sv", 
                                             56);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.BenchPerceptronIntroduction__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.BenchPerceptronIntroduction__DOT__clk)));
    }
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPerceptron___024root___dump_triggers__act(VPerceptron___024root* vlSelf);
#endif  // VL_DEBUG

void VPerceptron___024root___eval_triggers__act(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_triggers__act\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.BenchPerceptronIntroduction__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__BenchPerceptronIntroduction__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.BenchPerceptronIntroduction__DOT__done_training) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__BenchPerceptronIntroduction__DOT__done_training__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__BenchPerceptronIntroduction__DOT__clk__0 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__BenchPerceptronIntroduction__DOT__done_training__0 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__done_training;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPerceptron___024root___dump_triggers__act(vlSelf);
    }
#endif
}
