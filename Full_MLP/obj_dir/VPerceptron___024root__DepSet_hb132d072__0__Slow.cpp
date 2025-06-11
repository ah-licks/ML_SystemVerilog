// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron___024root.h"

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
        vlSelf->BenchPerceptron__DOT__values[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchPerceptron__DOT__activation = 0;
    vlSelf->BenchPerceptron__DOT__training = 0;
    vlSelf->BenchPerceptron__DOT__learning_rate = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->BenchPerceptron__DOT__next_layer_weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->BenchPerceptron__DOT__error_gradient_next_layer[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchPerceptron__DOT__prediction = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchPerceptron__DOT__current_weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchPerceptron__DOT__expected = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptron__DOT__threshold = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptron__DOT__correct = 0;
    vlSelf->BenchPerceptron__DOT__unnamedblk1__DOT__epoch = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchPerceptron__DOT__perceptron__DOT__weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__bias = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__sum = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchPerceptron__DOT__perceptron__DOT__weight_gradient[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__bias_gradient = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__local_error_gradient = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->__Vfunc_sfp_sub__0__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__0__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__0__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__1__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__1__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__1__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__1__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__1__b_ext);
    vlSelf->__Vfunc_sfp_div__1__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__1__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__1__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__1__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__2__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__2__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__2__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__3__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__3__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__4__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__4__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__4__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__5__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__5__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__5__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__5__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__5__b_ext);
    vlSelf->__Vfunc_sfp_div__5__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__5__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__5__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__5__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__6__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__6__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__9__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__9__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__9__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__10__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__10__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__10__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__10__tmp);
    vlSelf->__Vfunc_sfp_mul__11__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__11__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__11__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__11__tmp);
    vlSelf->__Vfunc_sfp_mul__12__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__12__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__12__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__12__tmp);
    vlSelf->__Vfunc_sfp_add__13__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__13__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__13__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__14__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__14__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__14__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__14__tmp);
    vlSelf->__Vfunc_sfp_mul__15__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__15__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__15__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__15__tmp);
    vlSelf->__Vfunc_sfp_sub__16__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__16__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__16__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_pow__17__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_pow__17__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_pow__17__b = 0;
    vlSelf->__Vfunc_sfp_pow__17__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_pow__17__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__18__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__18__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__19__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__19__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__19__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__20__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__20__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__20__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__20__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__20__b_ext);
    vlSelf->__Vfunc_sfp_div__20__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__20__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__20__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__20__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__21__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__21__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__21__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__22__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__22__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__22__unnamedblk3__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__22__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__22__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__22__max_terms = 0;
    vlSelf->__Vfunc_sfp_div__23__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__23__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__23__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__23__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__23__b_ext);
    vlSelf->__Vfunc_sfp_div__23__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__23__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__23__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__23__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__24__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__24__n = 0;
    vlSelf->__Vfunc_sfp_mul__25__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__25__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__25__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__25__tmp);
    vlSelf->__Vfunc_sfp_add__26__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__26__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__26__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__28__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__28__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__28__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__28__tmp);
    vlSelf->__Vfunc_sfp_add__29__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__29__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__29__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__30__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__30__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__30__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__30__tmp);
    vlSelf->__Vfunc_sfp_sigmoid__40__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sigmoid__40__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__41__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__41__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__41__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__41__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__41__b_ext);
    vlSelf->__Vfunc_sfp_div__41__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__41__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__41__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__41__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__42__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__42__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__42__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__43__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__43__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__43__unnamedblk3__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__43__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__43__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__43__max_terms = 0;
    vlSelf->__Vfunc_sfp_div__44__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__44__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__44__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__44__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__44__b_ext);
    vlSelf->__Vfunc_sfp_div__44__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__44__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__44__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__44__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__45__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__45__n = 0;
    vlSelf->__Vfunc_sfp_mul__46__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__46__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__46__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__46__tmp);
    vlSelf->__Vfunc_sfp_add__47__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__47__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__47__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__48__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__48__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__49__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__49__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__49__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__50__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__50__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__50__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__50__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__50__b_ext);
    vlSelf->__Vfunc_sfp_div__50__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__50__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__50__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__50__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__51__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__51__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__51__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__52__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__52__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__52__unnamedblk3__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__52__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__52__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__52__max_terms = 0;
    vlSelf->__Vfunc_sfp_div__53__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__53__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__53__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__53__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__53__b_ext);
    vlSelf->__Vfunc_sfp_div__53__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__53__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__53__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__53__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__54__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__54__n = 0;
    vlSelf->__Vfunc_sfp_mul__55__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__55__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__55__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__55__tmp);
    vlSelf->__Vfunc_sfp_add__56__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__56__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__56__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__BenchPerceptron__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
