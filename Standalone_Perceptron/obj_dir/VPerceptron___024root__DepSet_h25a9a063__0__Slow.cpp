// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron__Syms.h"
#include "VPerceptron___024root.h"

VL_ATTR_COLD void VPerceptron___024root___eval_static__TOP(VPerceptron___024root* vlSelf);
VL_ATTR_COLD void VPerceptron___024root____Vm_traceActivitySetAll(VPerceptron___024root* vlSelf);
VL_ATTR_COLD void VPerceptron_FixedPoint___eval_static__TOP__FixedPoint(VPerceptron_FixedPoint* vlSelf);

VL_ATTR_COLD void VPerceptron___024root___eval_static(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_static\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VPerceptron___024root___eval_static__TOP(vlSelf);
    VPerceptron___024root____Vm_traceActivitySetAll(vlSelf);
    VPerceptron_FixedPoint___eval_static__TOP__FixedPoint((&vlSymsp->TOP__FixedPoint));
    vlSelfRef.__Vtrigprevexpr___TOP__BenchPerceptronIntroduction__DOT__clk__0 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__clk;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPerceptron___024root___dump_triggers__stl(VPerceptron___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VPerceptron___024root___eval_triggers__stl(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_triggers__stl\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPerceptron___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
