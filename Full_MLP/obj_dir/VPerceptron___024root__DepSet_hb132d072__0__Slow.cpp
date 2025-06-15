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
            VL_FATAL_MT("src/Benches/BenchMLP.sv", 4, "", "Settle region did not converge.");
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
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] BenchMLP.mlp.layer_error_gradients)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] BenchMLP.mlp.__Vcellout__gen_hidden_layer[0].gen_hidden_neuron[0].hidden_perceptron__prediction)\n");
    }
    if ((8ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] BenchMLP.mlp.__Vcellout__gen_hidden_layer[0].gen_hidden_neuron[1].hidden_perceptron__prediction)\n");
    }
}
#endif  // VL_DEBUG

void VPerceptron___024root___act_sequent__TOP__0(VPerceptron___024root* vlSelf);
VL_ATTR_COLD void VPerceptron___024root___stl_sequent__TOP__1(VPerceptron___024root* vlSelf);
VL_ATTR_COLD void VPerceptron___024root____Vm_traceActivitySetAll(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_sequent__TOP__1(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_sequent__TOP__2(VPerceptron___024root* vlSelf);
VL_ATTR_COLD void VPerceptron___024root___stl_comb__TOP__0(VPerceptron___024root* vlSelf);
VL_ATTR_COLD void VPerceptron___024root___stl_comb__TOP__1(VPerceptron___024root* vlSelf);
VL_ATTR_COLD void VPerceptron___024root___stl_comb__TOP__2(VPerceptron___024root* vlSelf);

VL_ATTR_COLD void VPerceptron___024root___eval_stl(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_stl\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPerceptron___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPerceptron___024root___stl_sequent__TOP__1(vlSelf);
        VPerceptron___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPerceptron___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPerceptron___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0xdULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPerceptron___024root___stl_comb__TOP__0(vlSelf);
        VPerceptron___024root____Vm_traceActivitySetAll(vlSelf);
        VPerceptron___024root___stl_comb__TOP__1(vlSelf);
    }
    if ((0xfULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPerceptron___024root___stl_comb__TOP__2(vlSelf);
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] BenchMLP.mlp.layer_error_gradients)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] BenchMLP.mlp.__Vcellout__gen_hidden_layer[0].gen_hidden_neuron[0].hidden_perceptron__prediction)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] BenchMLP.mlp.__Vcellout__gen_hidden_layer[0].gen_hidden_neuron[1].hidden_perceptron__prediction)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge BenchMLP.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] BenchMLP.mlp.layer_error_gradients)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] BenchMLP.mlp.__Vcellout__gen_hidden_layer[0].gen_hidden_neuron[0].hidden_perceptron__prediction)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] BenchMLP.mlp.__Vcellout__gen_hidden_layer[0].gen_hidden_neuron[1].hidden_perceptron__prediction)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge BenchMLP.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
}

VL_ATTR_COLD void VPerceptron___024root___ctor_var_reset(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___ctor_var_reset\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->BenchMLP__DOT__clk = 0;
    vlSelf->BenchMLP__DOT__rst = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__values[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->BenchMLP__DOT__expected[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchMLP__DOT__hidden_activation = 0;
    vlSelf->BenchMLP__DOT__output_activation = 0;
    vlSelf->BenchMLP__DOT__training = 0;
    vlSelf->BenchMLP__DOT__learning_rate = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->BenchMLP__DOT__prediction[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchMLP__DOT__threshold = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__correct = 0;
    vlSelf->BenchMLP__DOT__unnamedblk1__DOT__epoch = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
                vlSelf->BenchMLP__DOT__mlp__DOT__layer_weights[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_Q(64);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->BenchMLP__DOT__mlp__DOT__layer_outputs[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->BenchMLP__DOT__mlp__DOT__layer_error_gradients[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
                vlSelf->BenchMLP__DOT__mlp__DOT__next_layer_weights[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_Q(64);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT__cost_gradients[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__current_weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient_next_layer[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__values[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__current_weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__values[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__current_weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__error_gradient = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__prediction = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__next_layer_weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__values[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchMLP__DOT__mlp__DOT__unnamedblk5__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__bias = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__sum = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__bias_gradient = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__bias = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__sum = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__bias_gradient = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__bias = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__sum = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__bias_gradient = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk8__DOT__i = 0;
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
    vlSelf->__Vfunc_sfp_sub__13__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__13__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__13__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__14__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__14__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__14__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__15__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__15__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__15__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__15__tmp);
    vlSelf->__Vfunc_sfp_mul__16__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__16__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__16__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__16__tmp);
    vlSelf->__Vfunc_sfp_sub__17__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__17__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__17__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_pow__18__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_pow__18__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_pow__18__b = 0;
    vlSelf->__Vfunc_sfp_pow__18__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_pow__18__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__19__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__19__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__20__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__20__n = 0;
    vlSelf->__Vfunc_int_to_sfp__21__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__21__n = 0;
    vlSelf->__Vfunc_sfp_sub__22__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__22__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__22__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__23__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__23__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__23__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__23__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__23__b_ext);
    vlSelf->__Vfunc_sfp_div__23__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__23__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__23__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__23__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__24__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__24__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__24__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__25__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__25__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__25__unnamedblk3__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__25__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__25__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__26__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__26__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__26__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__26__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__26__b_ext);
    vlSelf->__Vfunc_sfp_div__26__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__26__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__26__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__26__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__27__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__27__n = 0;
    vlSelf->__Vfunc_sfp_mul__28__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__28__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__28__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__28__tmp);
    vlSelf->__Vfunc_sfp_add__29__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__29__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__29__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__30__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__30__n = 0;
    vlSelf->__Vfunc_sfp_mul__31__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__31__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__31__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__31__tmp);
    vlSelf->__Vfunc_sfp_add__32__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__32__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__32__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__33__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__33__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__33__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__33__tmp);
    vlSelf->__Vfunc_sfp_sigmoid__43__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sigmoid__43__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__44__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__44__n = 0;
    vlSelf->__Vfunc_int_to_sfp__45__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__45__n = 0;
    vlSelf->__Vfunc_sfp_div__46__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__46__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__46__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__46__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__46__b_ext);
    vlSelf->__Vfunc_sfp_div__46__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__46__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__46__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__46__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__47__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__47__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__47__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__48__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__48__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__48__unnamedblk3__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__48__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__48__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__49__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__49__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__49__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__49__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__49__b_ext);
    vlSelf->__Vfunc_sfp_div__49__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__49__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__49__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__49__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__50__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__50__n = 0;
    vlSelf->__Vfunc_sfp_mul__51__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__51__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__51__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__51__tmp);
    vlSelf->__Vfunc_sfp_add__52__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__52__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__52__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__53__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__53__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__54__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__54__n = 0;
    vlSelf->__Vfunc_int_to_sfp__55__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__55__n = 0;
    vlSelf->__Vfunc_sfp_sub__56__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__56__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__56__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__57__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__57__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__57__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__57__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__57__b_ext);
    vlSelf->__Vfunc_sfp_div__57__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__57__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__57__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__57__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__58__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__58__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__58__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__59__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__59__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__59__unnamedblk3__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__59__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__59__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__60__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__60__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__60__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__60__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__60__b_ext);
    vlSelf->__Vfunc_sfp_div__60__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__60__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__60__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__60__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__61__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__61__n = 0;
    vlSelf->__Vfunc_sfp_mul__62__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__62__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__62__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__62__tmp);
    vlSelf->__Vfunc_sfp_add__63__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__63__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__63__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__64__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__64__n = 0;
    vlSelf->__Vfunc_sfp_add__67__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__67__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__67__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__68__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__68__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__68__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__68__tmp);
    vlSelf->__Vfunc_sfp_mul__69__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__69__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__69__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__69__tmp);
    vlSelf->__Vfunc_sfp_mul__70__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__70__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__70__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__70__tmp);
    vlSelf->__Vfunc_sfp_sub__71__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__71__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__71__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__72__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__72__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__72__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__73__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__73__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__73__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__73__tmp);
    vlSelf->__Vfunc_sfp_mul__74__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__74__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__74__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__74__tmp);
    vlSelf->__Vfunc_sfp_sub__75__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__75__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__75__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_pow__76__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_pow__76__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_pow__76__b = 0;
    vlSelf->__Vfunc_sfp_pow__76__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_pow__76__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__77__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__77__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__78__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__78__n = 0;
    vlSelf->__Vfunc_int_to_sfp__79__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__79__n = 0;
    vlSelf->__Vfunc_sfp_sub__80__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__80__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__80__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__81__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__81__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__81__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__81__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__81__b_ext);
    vlSelf->__Vfunc_sfp_div__81__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__81__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__81__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__81__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__82__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__82__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__82__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__83__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__83__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__83__unnamedblk3__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__83__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__83__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__84__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__84__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__84__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__84__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__84__b_ext);
    vlSelf->__Vfunc_sfp_div__84__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__84__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__84__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__84__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__85__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__85__n = 0;
    vlSelf->__Vfunc_sfp_mul__86__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__86__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__86__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__86__tmp);
    vlSelf->__Vfunc_sfp_add__87__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__87__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__87__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__88__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__88__n = 0;
    vlSelf->__Vfunc_sfp_mul__89__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__89__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__89__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__89__tmp);
    vlSelf->__Vfunc_sfp_add__90__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__90__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__90__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__91__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__91__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__91__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__91__tmp);
    vlSelf->__Vfunc_sfp_sigmoid__101__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sigmoid__101__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__102__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__102__n = 0;
    vlSelf->__Vfunc_int_to_sfp__103__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__103__n = 0;
    vlSelf->__Vfunc_sfp_div__104__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__104__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__104__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__104__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__104__b_ext);
    vlSelf->__Vfunc_sfp_div__104__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__104__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__104__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__104__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__105__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__105__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__105__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__106__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__106__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__106__unnamedblk3__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__106__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__106__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__107__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__107__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__107__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__107__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__107__b_ext);
    vlSelf->__Vfunc_sfp_div__107__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__107__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__107__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__107__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__108__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__108__n = 0;
    vlSelf->__Vfunc_sfp_mul__109__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__109__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__109__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__109__tmp);
    vlSelf->__Vfunc_sfp_add__110__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__110__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__110__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__111__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__111__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__112__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__112__n = 0;
    vlSelf->__Vfunc_int_to_sfp__113__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__113__n = 0;
    vlSelf->__Vfunc_sfp_sub__114__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__114__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__114__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__115__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__115__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__115__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__115__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__115__b_ext);
    vlSelf->__Vfunc_sfp_div__115__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__115__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__115__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__115__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__116__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__116__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__116__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__117__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__117__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__117__unnamedblk3__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__117__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__117__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__118__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__118__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__118__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__118__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__118__b_ext);
    vlSelf->__Vfunc_sfp_div__118__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__118__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__118__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__118__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__119__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__119__n = 0;
    vlSelf->__Vfunc_sfp_mul__120__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__120__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__120__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__120__tmp);
    vlSelf->__Vfunc_sfp_add__121__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__121__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__121__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__122__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__122__n = 0;
    vlSelf->__Vfunc_sfp_add__125__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__125__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__125__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__126__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__126__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__126__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__126__tmp);
    vlSelf->__Vfunc_sfp_mul__127__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__127__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__127__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__127__tmp);
    vlSelf->__Vfunc_sfp_mul__128__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__128__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__128__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__128__tmp);
    vlSelf->__Vfunc_sfp_sub__129__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__129__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__129__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__130__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__130__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__130__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__131__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__131__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__131__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__131__tmp);
    vlSelf->__Vfunc_sfp_mul__132__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__132__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__132__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__132__tmp);
    vlSelf->__Vfunc_sfp_sub__133__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__133__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__133__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_pow__134__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_pow__134__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_pow__134__b = 0;
    vlSelf->__Vfunc_sfp_pow__134__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_pow__134__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__135__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__135__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__136__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__136__n = 0;
    vlSelf->__Vfunc_int_to_sfp__137__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__137__n = 0;
    vlSelf->__Vfunc_sfp_sub__138__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__138__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__138__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__139__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__139__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__139__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__139__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__139__b_ext);
    vlSelf->__Vfunc_sfp_div__139__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__139__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__139__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__139__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__140__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__140__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__140__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__141__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__141__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__141__unnamedblk3__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__141__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__141__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__142__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__142__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__142__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__142__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__142__b_ext);
    vlSelf->__Vfunc_sfp_div__142__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__142__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__142__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__142__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__143__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__143__n = 0;
    vlSelf->__Vfunc_sfp_mul__144__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__144__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__144__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__144__tmp);
    vlSelf->__Vfunc_sfp_add__145__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__145__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__145__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__146__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__146__n = 0;
    vlSelf->__Vfunc_sfp_mul__147__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__147__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__147__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__147__tmp);
    vlSelf->__Vfunc_sfp_add__148__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__148__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__148__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__149__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__149__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__149__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__149__tmp);
    vlSelf->__Vfunc_sfp_sigmoid__159__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sigmoid__159__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__160__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__160__n = 0;
    vlSelf->__Vfunc_int_to_sfp__161__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__161__n = 0;
    vlSelf->__Vfunc_sfp_div__162__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__162__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__162__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__162__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__162__b_ext);
    vlSelf->__Vfunc_sfp_div__162__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__162__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__162__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__162__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__163__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__163__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__163__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__164__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__164__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__164__unnamedblk3__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__164__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__164__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__165__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__165__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__165__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__165__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__165__b_ext);
    vlSelf->__Vfunc_sfp_div__165__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__165__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__165__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__165__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__166__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__166__n = 0;
    vlSelf->__Vfunc_sfp_mul__167__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__167__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__167__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__167__tmp);
    vlSelf->__Vfunc_sfp_add__168__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__168__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__168__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__169__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__169__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__170__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__170__n = 0;
    vlSelf->__Vfunc_int_to_sfp__171__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__171__n = 0;
    vlSelf->__Vfunc_sfp_sub__172__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__172__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__172__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__173__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__173__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__173__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__173__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__173__b_ext);
    vlSelf->__Vfunc_sfp_div__173__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__173__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__173__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__173__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__174__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__174__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__174__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__175__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__175__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__175__unnamedblk3__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__175__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__175__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__176__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__176__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__176__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__176__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__176__b_ext);
    vlSelf->__Vfunc_sfp_div__176__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__176__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__176__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__176__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__177__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__177__n = 0;
    vlSelf->__Vfunc_sfp_mul__178__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__178__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__178__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__178__tmp);
    vlSelf->__Vfunc_sfp_add__179__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__179__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__179__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__180__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__180__n = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__BenchMLP__DOT__mlp__DOT__layer_error_gradients__0[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    vlSelf->__Vtrigprevexpr___TOP__BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction__0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction__0 = VL_RAND_RESET_Q(64);
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__BenchMLP__DOT__mlp__DOT__layer_error_gradients__1[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    vlSelf->__Vtrigprevexpr___TOP__BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction__1 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction__1 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__BenchMLP__DOT__clk__0 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
