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
    if ((0x10ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] BenchMLP.mlp.__Vcellout__gen_hidden_layer[1].gen_hidden_neuron[0].hidden_perceptron__prediction)\n");
    }
    if ((0x20ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] BenchMLP.mlp.__Vcellout__gen_hidden_layer[1].gen_hidden_neuron[1].hidden_perceptron__prediction)\n");
    }
}
#endif  // VL_DEBUG

void VPerceptron___024root___act_sequent__TOP__0(VPerceptron___024root* vlSelf);
VL_ATTR_COLD void VPerceptron___024root____Vm_traceActivitySetAll(VPerceptron___024root* vlSelf);
VL_ATTR_COLD void VPerceptron___024root___stl_sequent__TOP__1(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_sequent__TOP__1(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_sequent__TOP__2(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_sequent__TOP__3(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_sequent__TOP__4(VPerceptron___024root* vlSelf);
VL_ATTR_COLD void VPerceptron___024root___stl_comb__TOP__0(VPerceptron___024root* vlSelf);
VL_ATTR_COLD void VPerceptron___024root___stl_comb__TOP__1(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_comb__TOP__2(VPerceptron___024root* vlSelf);
VL_ATTR_COLD void VPerceptron___024root___stl_comb__TOP__3(VPerceptron___024root* vlSelf);
VL_ATTR_COLD void VPerceptron___024root___stl_comb__TOP__4(VPerceptron___024root* vlSelf);

VL_ATTR_COLD void VPerceptron___024root___eval_stl(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_stl\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPerceptron___024root___act_sequent__TOP__0(vlSelf);
        VPerceptron___024root____Vm_traceActivitySetAll(vlSelf);
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
    if ((0x10ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPerceptron___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x20ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPerceptron___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x3dULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPerceptron___024root___stl_comb__TOP__0(vlSelf);
        VPerceptron___024root____Vm_traceActivitySetAll(vlSelf);
        VPerceptron___024root___stl_comb__TOP__1(vlSelf);
        VPerceptron___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x3fULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPerceptron___024root___stl_comb__TOP__3(vlSelf);
        VPerceptron___024root____Vm_traceActivitySetAll(vlSelf);
        VPerceptron___024root___stl_comb__TOP__4(vlSelf);
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
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] BenchMLP.mlp.__Vcellout__gen_hidden_layer[1].gen_hidden_neuron[0].hidden_perceptron__prediction)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] BenchMLP.mlp.__Vcellout__gen_hidden_layer[1].gen_hidden_neuron[1].hidden_perceptron__prediction)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge BenchMLP.clk)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] BenchMLP.mlp.__Vcellout__gen_hidden_layer[1].gen_hidden_neuron[0].hidden_perceptron__prediction)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] BenchMLP.mlp.__Vcellout__gen_hidden_layer[1].gen_hidden_neuron[1].hidden_perceptron__prediction)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge BenchMLP.clk)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
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
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
                vlSelf->BenchMLP__DOT__mlp__DOT__layer_weights[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_Q(64);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->BenchMLP__DOT__mlp__DOT__layer_outputs[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->BenchMLP__DOT__mlp__DOT__layer_error_gradients[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
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
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient_next_layer[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
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
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__values[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__current_weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient_next_layer[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__values[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__current_weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__values[__Vi0] = VL_RAND_RESET_Q(64);
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
        vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__bias = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__sum = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__bias_gradient = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__bias = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__sum = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__bias_gradient = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i = 0;
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
    vlSelf->__Vfunc_sfp_mul__18__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__18__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__18__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__18__tmp);
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
    vlSelf->__Vfunc_sfp_exp__25__unnamedblk2__DOT__i = 0;
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
    vlSelf->__Vfunc_sfp_tanh__31__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__31__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__32__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__32__n = 0;
    vlSelf->__Vfunc_int_to_sfp__33__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__33__n = 0;
    vlSelf->__Vfunc_sfp_sub__34__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__34__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__34__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__35__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__35__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__35__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__35__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__35__b_ext);
    vlSelf->__Vfunc_sfp_div__35__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__35__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__35__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__35__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__36__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__36__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__36__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__37__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__37__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__37__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__37__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__37__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__38__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__38__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__38__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__38__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__38__b_ext);
    vlSelf->__Vfunc_sfp_div__38__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__38__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__38__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__38__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__39__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__39__n = 0;
    vlSelf->__Vfunc_sfp_mul__40__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__40__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__40__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__40__tmp);
    vlSelf->__Vfunc_sfp_add__41__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__41__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__41__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__42__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__42__n = 0;
    vlSelf->__Vfunc_sfp_add__43__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__43__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__43__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__44__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__44__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__44__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__44__tmp);
    vlSelf->__Vfunc_sfp_sigmoid__56__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sigmoid__56__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__57__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__57__n = 0;
    vlSelf->__Vfunc_int_to_sfp__58__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__58__n = 0;
    vlSelf->__Vfunc_sfp_div__59__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__59__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__59__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__59__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__59__b_ext);
    vlSelf->__Vfunc_sfp_div__59__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__59__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__59__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__59__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__60__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__60__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__60__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__61__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__61__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__61__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__61__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__61__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__62__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__62__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__62__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__62__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__62__b_ext);
    vlSelf->__Vfunc_sfp_div__62__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__62__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__62__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__62__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__63__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__63__n = 0;
    vlSelf->__Vfunc_sfp_mul__64__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__64__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__64__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__64__tmp);
    vlSelf->__Vfunc_sfp_add__65__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__65__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__65__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__66__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__66__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__67__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__67__n = 0;
    vlSelf->__Vfunc_int_to_sfp__68__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__68__n = 0;
    vlSelf->__Vfunc_sfp_sub__69__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__69__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__69__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__70__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__70__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__70__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__70__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__70__b_ext);
    vlSelf->__Vfunc_sfp_div__70__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__70__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__70__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__70__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__71__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__71__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__71__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__72__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__72__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__72__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__72__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__72__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__73__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__73__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__73__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__73__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__73__b_ext);
    vlSelf->__Vfunc_sfp_div__73__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__73__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__73__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__73__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__74__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__74__n = 0;
    vlSelf->__Vfunc_sfp_mul__75__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__75__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__75__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__75__tmp);
    vlSelf->__Vfunc_sfp_add__76__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__76__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__76__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__77__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__77__n = 0;
    vlSelf->__Vfunc_sfp_add__80__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__80__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__80__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__81__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__81__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__81__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__81__tmp);
    vlSelf->__Vfunc_sfp_mul__82__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__82__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__82__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__82__tmp);
    vlSelf->__Vfunc_sfp_mul__83__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__83__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__83__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__83__tmp);
    vlSelf->__Vfunc_sfp_sub__84__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__84__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__84__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__85__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__85__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__85__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__86__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__86__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__86__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__86__tmp);
    vlSelf->__Vfunc_sfp_mul__87__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__87__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__87__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__87__tmp);
    vlSelf->__Vfunc_sfp_sub__88__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__88__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__88__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__89__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__89__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__89__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__89__tmp);
    vlSelf->__Vfunc_sfp_tanh__90__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__90__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__91__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__91__n = 0;
    vlSelf->__Vfunc_int_to_sfp__92__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__92__n = 0;
    vlSelf->__Vfunc_sfp_sub__93__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__93__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__93__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__94__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__94__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__94__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__94__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__94__b_ext);
    vlSelf->__Vfunc_sfp_div__94__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__94__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__94__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__94__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__95__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__95__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__95__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__96__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__96__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__96__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__96__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__96__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__97__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__97__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__97__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__97__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__97__b_ext);
    vlSelf->__Vfunc_sfp_div__97__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__97__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__97__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__97__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__98__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__98__n = 0;
    vlSelf->__Vfunc_sfp_mul__99__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__99__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__99__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__99__tmp);
    vlSelf->__Vfunc_sfp_add__100__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__100__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__100__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__101__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__101__n = 0;
    vlSelf->__Vfunc_sfp_tanh__102__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__102__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__103__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__103__n = 0;
    vlSelf->__Vfunc_int_to_sfp__104__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__104__n = 0;
    vlSelf->__Vfunc_sfp_sub__105__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__105__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__105__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__106__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__106__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__106__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__106__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__106__b_ext);
    vlSelf->__Vfunc_sfp_div__106__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__106__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__106__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__106__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__107__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__107__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__107__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__108__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__108__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__108__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__108__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__108__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__109__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__109__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__109__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__109__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__109__b_ext);
    vlSelf->__Vfunc_sfp_div__109__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__109__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__109__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__109__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__110__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__110__n = 0;
    vlSelf->__Vfunc_sfp_mul__111__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__111__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__111__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__111__tmp);
    vlSelf->__Vfunc_sfp_add__112__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__112__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__112__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__113__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__113__n = 0;
    vlSelf->__Vfunc_sfp_add__114__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__114__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__114__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__115__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__115__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__115__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__115__tmp);
    vlSelf->__Vfunc_sfp_sigmoid__127__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sigmoid__127__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__128__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__128__n = 0;
    vlSelf->__Vfunc_int_to_sfp__129__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__129__n = 0;
    vlSelf->__Vfunc_sfp_div__130__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__130__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__130__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__130__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__130__b_ext);
    vlSelf->__Vfunc_sfp_div__130__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__130__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__130__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__130__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__131__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__131__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__131__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__132__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__132__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__132__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__132__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__132__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__133__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__133__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__133__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__133__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__133__b_ext);
    vlSelf->__Vfunc_sfp_div__133__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__133__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__133__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__133__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__134__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__134__n = 0;
    vlSelf->__Vfunc_sfp_mul__135__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__135__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__135__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__135__tmp);
    vlSelf->__Vfunc_sfp_add__136__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__136__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__136__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__137__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__137__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__138__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__138__n = 0;
    vlSelf->__Vfunc_int_to_sfp__139__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__139__n = 0;
    vlSelf->__Vfunc_sfp_sub__140__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__140__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__140__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__141__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__141__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__141__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__141__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__141__b_ext);
    vlSelf->__Vfunc_sfp_div__141__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__141__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__141__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__141__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__142__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__142__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__142__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__143__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__143__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__143__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__143__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__143__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__144__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__144__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__144__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__144__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__144__b_ext);
    vlSelf->__Vfunc_sfp_div__144__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__144__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__144__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__144__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__145__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__145__n = 0;
    vlSelf->__Vfunc_sfp_mul__146__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__146__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__146__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__146__tmp);
    vlSelf->__Vfunc_sfp_add__147__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__147__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__147__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__148__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__148__n = 0;
    vlSelf->__Vfunc_sfp_add__151__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__151__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__151__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__152__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__152__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__152__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__152__tmp);
    vlSelf->__Vfunc_sfp_mul__153__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__153__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__153__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__153__tmp);
    vlSelf->__Vfunc_sfp_mul__154__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__154__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__154__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__154__tmp);
    vlSelf->__Vfunc_sfp_sub__155__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__155__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__155__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__156__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__156__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__156__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__157__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__157__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__157__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__157__tmp);
    vlSelf->__Vfunc_sfp_mul__158__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__158__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__158__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__158__tmp);
    vlSelf->__Vfunc_sfp_sub__159__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__159__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__159__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__160__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__160__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__160__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__160__tmp);
    vlSelf->__Vfunc_sfp_tanh__161__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__161__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__162__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__162__n = 0;
    vlSelf->__Vfunc_int_to_sfp__163__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__163__n = 0;
    vlSelf->__Vfunc_sfp_sub__164__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__164__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__164__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__165__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__165__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__165__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__165__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__165__b_ext);
    vlSelf->__Vfunc_sfp_div__165__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__165__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__165__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__165__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__166__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__166__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__166__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__167__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__167__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__167__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__167__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__167__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__168__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__168__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__168__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__168__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__168__b_ext);
    vlSelf->__Vfunc_sfp_div__168__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__168__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__168__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__168__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__169__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__169__n = 0;
    vlSelf->__Vfunc_sfp_mul__170__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__170__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__170__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__170__tmp);
    vlSelf->__Vfunc_sfp_add__171__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__171__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__171__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__172__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__172__n = 0;
    vlSelf->__Vfunc_sfp_tanh__173__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__173__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__174__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__174__n = 0;
    vlSelf->__Vfunc_int_to_sfp__175__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__175__n = 0;
    vlSelf->__Vfunc_sfp_sub__176__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__176__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__176__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__177__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__177__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__177__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__177__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__177__b_ext);
    vlSelf->__Vfunc_sfp_div__177__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__177__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__177__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__177__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__178__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__178__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__178__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__179__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__179__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__179__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__179__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__179__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__180__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__180__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__180__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__180__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__180__b_ext);
    vlSelf->__Vfunc_sfp_div__180__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__180__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__180__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__180__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__181__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__181__n = 0;
    vlSelf->__Vfunc_sfp_mul__182__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__182__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__182__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__182__tmp);
    vlSelf->__Vfunc_sfp_add__183__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__183__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__183__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__184__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__184__n = 0;
    vlSelf->__Vfunc_sfp_add__185__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__185__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__185__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__186__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__186__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__186__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__186__tmp);
    vlSelf->__Vfunc_sfp_sigmoid__198__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sigmoid__198__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__199__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__199__n = 0;
    vlSelf->__Vfunc_int_to_sfp__200__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__200__n = 0;
    vlSelf->__Vfunc_sfp_div__201__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__201__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__201__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__201__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__201__b_ext);
    vlSelf->__Vfunc_sfp_div__201__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__201__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__201__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__201__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__202__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__202__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__202__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__203__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__203__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__203__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__203__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__203__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__204__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__204__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__204__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__204__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__204__b_ext);
    vlSelf->__Vfunc_sfp_div__204__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__204__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__204__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__204__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__205__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__205__n = 0;
    vlSelf->__Vfunc_sfp_mul__206__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__206__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__206__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__206__tmp);
    vlSelf->__Vfunc_sfp_add__207__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__207__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__207__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__208__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__208__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__209__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__209__n = 0;
    vlSelf->__Vfunc_int_to_sfp__210__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__210__n = 0;
    vlSelf->__Vfunc_sfp_sub__211__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__211__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__211__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__212__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__212__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__212__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__212__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__212__b_ext);
    vlSelf->__Vfunc_sfp_div__212__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__212__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__212__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__212__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__213__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__213__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__213__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__214__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__214__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__214__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__214__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__214__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__215__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__215__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__215__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__215__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__215__b_ext);
    vlSelf->__Vfunc_sfp_div__215__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__215__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__215__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__215__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__216__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__216__n = 0;
    vlSelf->__Vfunc_sfp_mul__217__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__217__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__217__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__217__tmp);
    vlSelf->__Vfunc_sfp_add__218__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__218__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__218__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__219__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__219__n = 0;
    vlSelf->__Vfunc_sfp_add__222__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__222__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__222__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__223__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__223__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__223__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__223__tmp);
    vlSelf->__Vfunc_sfp_mul__224__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__224__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__224__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__224__tmp);
    vlSelf->__Vfunc_sfp_mul__225__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__225__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__225__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__225__tmp);
    vlSelf->__Vfunc_sfp_sub__226__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__226__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__226__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__227__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__227__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__227__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__228__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__228__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__228__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__228__tmp);
    vlSelf->__Vfunc_sfp_mul__229__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__229__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__229__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__229__tmp);
    vlSelf->__Vfunc_sfp_sub__230__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__230__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__230__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__231__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__231__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__231__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__231__tmp);
    vlSelf->__Vfunc_sfp_tanh__232__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__232__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__233__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__233__n = 0;
    vlSelf->__Vfunc_int_to_sfp__234__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__234__n = 0;
    vlSelf->__Vfunc_sfp_sub__235__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__235__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__235__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__236__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__236__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__236__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__236__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__236__b_ext);
    vlSelf->__Vfunc_sfp_div__236__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__236__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__236__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__236__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__237__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__237__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__237__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__238__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__238__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__238__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__238__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__238__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__239__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__239__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__239__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__239__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__239__b_ext);
    vlSelf->__Vfunc_sfp_div__239__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__239__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__239__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__239__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__240__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__240__n = 0;
    vlSelf->__Vfunc_sfp_mul__241__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__241__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__241__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__241__tmp);
    vlSelf->__Vfunc_sfp_add__242__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__242__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__242__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__243__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__243__n = 0;
    vlSelf->__Vfunc_sfp_tanh__244__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__244__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__245__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__245__n = 0;
    vlSelf->__Vfunc_int_to_sfp__246__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__246__n = 0;
    vlSelf->__Vfunc_sfp_sub__247__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__247__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__247__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__248__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__248__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__248__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__248__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__248__b_ext);
    vlSelf->__Vfunc_sfp_div__248__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__248__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__248__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__248__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__249__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__249__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__249__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__250__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__250__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__250__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__250__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__250__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__251__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__251__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__251__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__251__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__251__b_ext);
    vlSelf->__Vfunc_sfp_div__251__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__251__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__251__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__251__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__252__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__252__n = 0;
    vlSelf->__Vfunc_sfp_mul__253__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__253__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__253__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__253__tmp);
    vlSelf->__Vfunc_sfp_add__254__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__254__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__254__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__255__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__255__n = 0;
    vlSelf->__Vfunc_sfp_add__256__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__256__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__256__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__257__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__257__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__257__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__257__tmp);
    vlSelf->__Vfunc_sfp_sigmoid__269__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sigmoid__269__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__270__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__270__n = 0;
    vlSelf->__Vfunc_int_to_sfp__271__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__271__n = 0;
    vlSelf->__Vfunc_sfp_div__272__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__272__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__272__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__272__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__272__b_ext);
    vlSelf->__Vfunc_sfp_div__272__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__272__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__272__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__272__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__273__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__273__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__273__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__274__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__274__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__274__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__274__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__274__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__275__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__275__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__275__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__275__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__275__b_ext);
    vlSelf->__Vfunc_sfp_div__275__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__275__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__275__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__275__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__276__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__276__n = 0;
    vlSelf->__Vfunc_sfp_mul__277__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__277__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__277__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__277__tmp);
    vlSelf->__Vfunc_sfp_add__278__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__278__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__278__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__279__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__279__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__280__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__280__n = 0;
    vlSelf->__Vfunc_int_to_sfp__281__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__281__n = 0;
    vlSelf->__Vfunc_sfp_sub__282__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__282__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__282__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__283__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__283__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__283__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__283__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__283__b_ext);
    vlSelf->__Vfunc_sfp_div__283__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__283__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__283__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__283__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__284__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__284__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__284__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__285__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__285__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__285__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__285__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__285__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__286__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__286__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__286__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__286__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__286__b_ext);
    vlSelf->__Vfunc_sfp_div__286__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__286__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__286__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__286__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__287__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__287__n = 0;
    vlSelf->__Vfunc_sfp_mul__288__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__288__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__288__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__288__tmp);
    vlSelf->__Vfunc_sfp_add__289__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__289__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__289__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__290__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__290__n = 0;
    vlSelf->__Vfunc_sfp_add__293__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__293__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__293__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__294__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__294__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__294__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__294__tmp);
    vlSelf->__Vfunc_sfp_mul__295__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__295__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__295__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__295__tmp);
    vlSelf->__Vfunc_sfp_mul__296__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__296__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__296__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__296__tmp);
    vlSelf->__Vfunc_sfp_sub__297__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__297__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__297__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__298__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__298__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__298__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__299__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__299__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__299__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__299__tmp);
    vlSelf->__Vfunc_sfp_mul__300__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__300__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__300__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__300__tmp);
    vlSelf->__Vfunc_sfp_sub__301__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__301__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__301__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__302__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__302__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__302__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__302__tmp);
    vlSelf->__Vfunc_sfp_tanh__303__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__303__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__304__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__304__n = 0;
    vlSelf->__Vfunc_int_to_sfp__305__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__305__n = 0;
    vlSelf->__Vfunc_sfp_sub__306__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__306__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__306__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__307__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__307__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__307__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__307__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__307__b_ext);
    vlSelf->__Vfunc_sfp_div__307__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__307__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__307__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__307__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__308__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__308__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__308__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__309__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__309__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__309__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__309__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__309__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__310__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__310__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__310__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__310__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__310__b_ext);
    vlSelf->__Vfunc_sfp_div__310__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__310__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__310__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__310__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__311__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__311__n = 0;
    vlSelf->__Vfunc_sfp_mul__312__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__312__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__312__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__312__tmp);
    vlSelf->__Vfunc_sfp_add__313__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__313__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__313__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__314__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__314__n = 0;
    vlSelf->__Vfunc_sfp_tanh__315__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__315__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__316__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__316__n = 0;
    vlSelf->__Vfunc_int_to_sfp__317__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__317__n = 0;
    vlSelf->__Vfunc_sfp_sub__318__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__318__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__318__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__319__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__319__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__319__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__319__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__319__b_ext);
    vlSelf->__Vfunc_sfp_div__319__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__319__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__319__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__319__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__320__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__320__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__320__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__321__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__321__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__321__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__321__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__321__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__322__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__322__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__322__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__322__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__322__b_ext);
    vlSelf->__Vfunc_sfp_div__322__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__322__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__322__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__322__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__323__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__323__n = 0;
    vlSelf->__Vfunc_sfp_mul__324__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__324__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__324__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__324__tmp);
    vlSelf->__Vfunc_sfp_add__325__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__325__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__325__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__326__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__326__n = 0;
    vlSelf->__Vfunc_sfp_add__327__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__327__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__327__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__328__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__328__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__328__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__328__tmp);
    vlSelf->__Vfunc_sfp_sigmoid__340__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sigmoid__340__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__341__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__341__n = 0;
    vlSelf->__Vfunc_int_to_sfp__342__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__342__n = 0;
    vlSelf->__Vfunc_sfp_div__343__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__343__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__343__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__343__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__343__b_ext);
    vlSelf->__Vfunc_sfp_div__343__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__343__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__343__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__343__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__344__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__344__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__344__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__345__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__345__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__345__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__345__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__345__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__346__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__346__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__346__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__346__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__346__b_ext);
    vlSelf->__Vfunc_sfp_div__346__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__346__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__346__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__346__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__347__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__347__n = 0;
    vlSelf->__Vfunc_sfp_mul__348__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__348__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__348__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__348__tmp);
    vlSelf->__Vfunc_sfp_add__349__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__349__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__349__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__350__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__350__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__351__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__351__n = 0;
    vlSelf->__Vfunc_int_to_sfp__352__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__352__n = 0;
    vlSelf->__Vfunc_sfp_sub__353__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__353__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__353__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__354__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__354__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__354__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__354__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__354__b_ext);
    vlSelf->__Vfunc_sfp_div__354__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__354__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__354__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__354__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__355__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__355__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__355__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__356__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__356__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__356__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__356__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__356__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__357__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__357__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__357__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__357__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__357__b_ext);
    vlSelf->__Vfunc_sfp_div__357__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__357__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__357__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__357__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__358__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__358__n = 0;
    vlSelf->__Vfunc_sfp_mul__359__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__359__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__359__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__359__tmp);
    vlSelf->__Vfunc_sfp_add__360__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__360__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__360__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__361__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__361__n = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__BenchMLP__DOT__mlp__DOT__layer_error_gradients__0[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    vlSelf->__Vtrigprevexpr___TOP__BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction__0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction__0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction__0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction__0 = VL_RAND_RESET_Q(64);
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__BenchMLP__DOT__mlp__DOT__layer_error_gradients__1[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    vlSelf->__Vtrigprevexpr___TOP__BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction__1 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction__1 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction__1 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction__1 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__BenchMLP__DOT__clk__0 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
