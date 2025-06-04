// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron___024root.h"

VL_ATTR_COLD void VPerceptron___024root___eval_static__TOP(VPerceptron___024root* vlSelf);
VL_ATTR_COLD void VPerceptron___024root____Vm_traceActivitySetAll(VPerceptron___024root* vlSelf);

VL_ATTR_COLD void VPerceptron___024root___eval_static(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_static\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VPerceptron___024root___eval_static__TOP(vlSelf);
    VPerceptron___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__BenchPerceptronIntroduction__DOT__clk__0 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__clk;
    vlSelfRef.__Vtrigprevexpr_h6a988f12__1 = 0U;
}

VL_ATTR_COLD void VPerceptron___024root___eval_static__TOP(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_static__TOP\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__train_values[3U][1U] = 0.0;
    vlSelfRef.BenchPerceptronIntroduction__DOT__train_values[3U][0U] = 0.0;
    vlSelfRef.BenchPerceptronIntroduction__DOT__train_values[2U][1U] = 0.0;
    vlSelfRef.BenchPerceptronIntroduction__DOT__train_values[2U][0U] = 1.0;
    vlSelfRef.BenchPerceptronIntroduction__DOT__train_values[1U][1U] = 1.0;
    vlSelfRef.BenchPerceptronIntroduction__DOT__train_values[1U][0U] = 0.0;
    vlSelfRef.BenchPerceptronIntroduction__DOT__train_values[0U][1U] = 1.0;
    vlSelfRef.BenchPerceptronIntroduction__DOT__train_values[0U][0U] = 1.0;
    vlSelfRef.BenchPerceptronIntroduction__DOT__expected[3U] = 0.0;
    vlSelfRef.BenchPerceptronIntroduction__DOT__expected[2U] = 0.0;
    vlSelfRef.BenchPerceptronIntroduction__DOT__expected[1U] = 0.0;
    vlSelfRef.BenchPerceptronIntroduction__DOT__expected[0U] = 1.0;
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state = 0U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__epoch_count = 0U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx = 0U;
}

VL_ATTR_COLD void VPerceptron___024root___eval_initial__TOP(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_initial__TOP\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[0U] = 0.0;
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[1U] = 0.0;
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias = 0.0;
}

VL_ATTR_COLD void VPerceptron___024root___eval_final(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_final\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPerceptron___024root___dump_triggers__stl(VPerceptron___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VPerceptron___024root___eval_phase__stl(VPerceptron___024root* vlSelf);

VL_ATTR_COLD void VPerceptron___024root___eval_settle(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_settle\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VPerceptron___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("src/Benches/BenchPerceptronIntroduction.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VPerceptron___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPerceptron___024root___dump_triggers__stl(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___dump_triggers__stl\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPerceptron___024root___stl_sequent__TOP__0(VPerceptron___024root* vlSelf);

VL_ATTR_COLD void VPerceptron___024root___eval_stl(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_stl\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPerceptron___024root___stl_sequent__TOP__0(vlSelf);
        VPerceptron___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VPerceptron___024root___stl_sequent__TOP__0(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___stl_sequent__TOP__0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias;
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum 
        = (vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum 
           + (vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights
              [0U] * vlSelfRef.BenchPerceptronIntroduction__DOT__values
              [0U]));
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum 
        = (vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum 
           + (vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights
              [1U] * vlSelfRef.BenchPerceptronIntroduction__DOT__values
              [1U]));
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias;
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum 
        = (vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum 
           + (vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights
              [0U] * vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
              [(3U & vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx)]
              [0U]));
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum 
        = (vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum 
           + (vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights
              [1U] * vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
              [(3U & vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx)]
              [1U]));
}

VL_ATTR_COLD void VPerceptron___024root___eval_triggers__stl(VPerceptron___024root* vlSelf);

VL_ATTR_COLD bool VPerceptron___024root___eval_phase__stl(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_phase__stl\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VPerceptron___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VPerceptron___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPerceptron___024root___dump_triggers__act(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___dump_triggers__act\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge BenchPerceptronIntroduction.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( (~ BenchPerceptronIntroduction.training))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPerceptron___024root___dump_triggers__nba(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___dump_triggers__nba\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge BenchPerceptronIntroduction.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( (~ BenchPerceptronIntroduction.training))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPerceptron___024root____Vm_traceActivitySetAll(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root____Vm_traceActivitySetAll\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void VPerceptron___024root___ctor_var_reset(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___ctor_var_reset\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->BenchPerceptronIntroduction__DOT__clk = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchPerceptronIntroduction__DOT__values[__Vi0] = 0;
    }
    vlSelf->BenchPerceptronIntroduction__DOT__training = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->BenchPerceptronIntroduction__DOT__train_values[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BenchPerceptronIntroduction__DOT__expected[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[__Vi0] = 0;
    }
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__epoch_count = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__BenchPerceptronIntroduction__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr_h6a988f12__1 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
