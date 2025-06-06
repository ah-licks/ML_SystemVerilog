// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron___024root.h"

VL_ATTR_COLD void VPerceptron___024root___eval_static(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_static\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__BenchPerceptron__DOT__clk__0 
        = vlSelfRef.BenchPerceptron__DOT__clk;
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
            VL_FATAL_MT("src/Benches/BenchPerceptron.sv", 4, "", "Settle region did not converge.");
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
VL_ATTR_COLD void VPerceptron___024root____Vm_traceActivitySetAll(VPerceptron___024root* vlSelf);

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
    vlSelfRef.BenchPerceptron__DOT__current_weights[0U] 
        = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights
        [0U];
    vlSelfRef.BenchPerceptron__DOT__current_weights[1U] 
        = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights
        [1U];
    if ((1U != vlSelfRef.BenchPerceptron__DOT__activation)) {
        if ((2U == vlSelfRef.BenchPerceptron__DOT__activation)) {
            vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk4__DOT__i = 1U;
        }
        if ((2U != vlSelfRef.BenchPerceptron__DOT__activation)) {
            if ((3U == vlSelfRef.BenchPerceptron__DOT__activation)) {
                vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk5__DOT__i = 1U;
            }
        }
    }
    vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum 
        = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias;
    vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum 
        = (vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum 
           + (vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights
              [0U] * vlSelfRef.BenchPerceptron__DOT__values
              [0U]));
    vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum 
        = (vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum 
           + (vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights
              [1U] * vlSelfRef.BenchPerceptron__DOT__values
              [1U]));
    vlSelfRef.BenchPerceptron__DOT__prediction = ((0U 
                                                   == vlSelfRef.BenchPerceptron__DOT__activation)
                                                   ? 
                                                  VL_ITOR_D_I(1, 
                                                              (vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum 
                                                               > 0.0))
                                                   : 
                                                  ((1U 
                                                    == vlSelfRef.BenchPerceptron__DOT__activation)
                                                    ? 
                                                   (1.0 
                                                    / 
                                                    (1.0 
                                                     + 
                                                     pow(2.71828182799999984e+00,
                                                         (- vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum))))
                                                    : 
                                                   ((2U 
                                                     == vlSelfRef.BenchPerceptron__DOT__activation)
                                                     ? 
                                                    ((2.0 
                                                      / 
                                                      (1.0 
                                                       + 
                                                       pow(2.71828182799999984e+00,
                                                           (-2.0 
                                                            * vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum)))) 
                                                     - 1.0)
                                                     : 
                                                    ((3U 
                                                      == vlSelfRef.BenchPerceptron__DOT__activation)
                                                      ? 
                                                     ((vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum 
                                                       > 0.0)
                                                       ? vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum
                                                       : 0.0)
                                                      : vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum))));
    vlSelfRef.BenchPerceptron__DOT__cost = (-1.0 * 
                                            ((vlSelfRef.BenchPerceptron__DOT__expected 
                                              * log(
                                                    (1.00000000000000002e-08 
                                                     + vlSelfRef.BenchPerceptron__DOT__prediction))) 
                                             + ((1.0 
                                                 - vlSelfRef.BenchPerceptron__DOT__expected) 
                                                * log(
                                                      (1.00000000000000002e-08 
                                                       + 
                                                       (1.0 
                                                        - vlSelfRef.BenchPerceptron__DOT__prediction))))));
    vlSelfRef.BenchPerceptron__DOT__error_gradient_next_layer[0U] 
        = (- ((vlSelfRef.BenchPerceptron__DOT__expected 
               / (1.00000000000000002e-08 + vlSelfRef.BenchPerceptron__DOT__prediction)) 
              - ((1.0 - vlSelfRef.BenchPerceptron__DOT__expected) 
                 / (1.00000000000000002e-08 + (1.0 
                                               - vlSelfRef.BenchPerceptron__DOT__prediction)))));
    if ((1U == vlSelfRef.BenchPerceptron__DOT__activation)) {
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient 
            = (0.0 + (((vlSelfRef.BenchPerceptron__DOT__next_layer_weights
                        [0U] * vlSelfRef.BenchPerceptron__DOT__error_gradient_next_layer
                        [0U]) * vlSelfRef.BenchPerceptron__DOT__prediction) 
                      * (1.0 - vlSelfRef.BenchPerceptron__DOT__prediction)));
    } else {
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient 
            = ((2U == vlSelfRef.BenchPerceptron__DOT__activation)
                ? (0.0 + ((vlSelfRef.BenchPerceptron__DOT__next_layer_weights
                           [0U] * vlSelfRef.BenchPerceptron__DOT__error_gradient_next_layer
                           [0U]) * (1.0 - pow(vlSelfRef.BenchPerceptron__DOT__prediction,2.0))))
                : ((3U == vlSelfRef.BenchPerceptron__DOT__activation)
                    ? (0.0 + (vlSelfRef.BenchPerceptron__DOT__next_layer_weights
                              [0U] * ((vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum 
                                       >= 0.0) ? vlSelfRef.BenchPerceptron__DOT__error_gradient_next_layer
                                      [0U] : 0.0)))
                    : 0.0));
    }
    vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weight_gradient[0U] 
        = (vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchPerceptron__DOT__values
           [0U]);
    vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weight_gradient[1U] 
        = (vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchPerceptron__DOT__values
           [1U]);
    vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient;
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge BenchPerceptron.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge BenchPerceptron.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void VPerceptron___024root___ctor_var_reset(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___ctor_var_reset\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->BenchPerceptron__DOT__clk = 0;
    vlSelf->BenchPerceptron__DOT__rst = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchPerceptron__DOT__values[__Vi0] = 0;
    }
    vlSelf->BenchPerceptron__DOT__activation = 0;
    vlSelf->BenchPerceptron__DOT__training = 0;
    vlSelf->BenchPerceptron__DOT__learning_rate = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->BenchPerceptron__DOT__next_layer_weights[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->BenchPerceptron__DOT__error_gradient_next_layer[__Vi0] = 0;
    }
    vlSelf->BenchPerceptron__DOT__prediction = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchPerceptron__DOT__current_weights[__Vi0] = 0;
    }
    vlSelf->BenchPerceptron__DOT__expected = 0;
    vlSelf->BenchPerceptron__DOT__threshold = 0;
    vlSelf->BenchPerceptron__DOT__correct = 0;
    vlSelf->BenchPerceptron__DOT__cost = 0;
    vlSelf->BenchPerceptron__DOT__unnamedblk1__DOT__epoch = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchPerceptron__DOT__perceptron__DOT__weights[__Vi0] = 0;
    }
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__bias = 0;
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__sum = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchPerceptron__DOT__perceptron__DOT__weight_gradient[__Vi0] = 0;
    }
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__bias_gradient = 0;
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__local_error_gradient = 0;
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__BenchPerceptron__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
