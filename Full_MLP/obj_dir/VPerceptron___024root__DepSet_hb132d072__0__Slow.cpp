// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron___024root.h"

VL_ATTR_COLD void VPerceptron___024root___eval_initial__TOP(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_initial__TOP\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x696e666fU;
    __Vtemp_1[2U] = 0x7075745fU;
    __Vtemp_1[3U] = 0x696eU;
    VL_READMEM_N(true, 64, 200, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelfRef.BenchMLP__DOT__data__DOT__flat_input_data)
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x696e666fU;
    __Vtemp_2[2U] = 0x7075745fU;
    __Vtemp_2[3U] = 0x6f7574U;
    VL_READMEM_N(true, 64, 100, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_2)
                 ,  &(vlSelfRef.BenchMLP__DOT__data__DOT__flat_output_data)
                 , 0, ~0ULL);
    vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x64U, vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.BenchMLP__DOT__data__DOT____Vlvbound_h21c7e371__0 
            = ((0xc7U >= (0xffU & VL_MULS_III(32, (IData)(2U), vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk1__DOT__i)))
                ? vlSelfRef.BenchMLP__DOT__data__DOT__flat_input_data
               [(0xffU & VL_MULS_III(32, (IData)(2U), vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk1__DOT__i))]
                : 0ULL);
        if (VL_LIKELY(((0x63U >= (0x7fU & vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk1__DOT__i))))) {
            vlSelfRef.BenchMLP__DOT__data__DOT__input_data[(0x7fU 
                                                            & vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk1__DOT__i)][0U] 
                = vlSelfRef.BenchMLP__DOT__data__DOT____Vlvbound_h21c7e371__0;
        }
        vlSelfRef.BenchMLP__DOT__data__DOT____Vlvbound_h21c7e371__0 
            = ((0xc7U >= (0xffU & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk1__DOT__i))))
                ? vlSelfRef.BenchMLP__DOT__data__DOT__flat_input_data
               [(0xffU & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk1__DOT__i)))]
                : 0ULL);
        if (VL_LIKELY(((0x63U >= (0x7fU & vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk1__DOT__i))))) {
            vlSelfRef.BenchMLP__DOT__data__DOT__input_data[(0x7fU 
                                                            & vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk1__DOT__i)][1U] 
                = vlSelfRef.BenchMLP__DOT__data__DOT____Vlvbound_h21c7e371__0;
        }
        vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
        vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 0x64U, vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk3__DOT__i)) {
        if ((0x63U >= (0x7fU & vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk3__DOT__i))) {
            vlSelfRef.BenchMLP__DOT__data__DOT____Vlvbound_h2f36126e__0 
                = vlSelfRef.BenchMLP__DOT__data__DOT__flat_output_data
                [(0x7fU & vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk3__DOT__i)];
            vlSelfRef.BenchMLP__DOT__data__DOT__output_data[(0x7fU 
                                                             & vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk3__DOT__i)][0U] 
                = vlSelfRef.BenchMLP__DOT__data__DOT____Vlvbound_h2f36126e__0;
        } else {
            vlSelfRef.BenchMLP__DOT__data__DOT____Vlvbound_h2f36126e__0 = 0ULL;
        }
        vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 1U;
        vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk3__DOT__i 
            = ((IData)(1U) + vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk3__DOT__i);
    }
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
void VPerceptron___024root___act_sequent__TOP__2(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_sequent__TOP__3(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_sequent__TOP__4(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_sequent__TOP__5(VPerceptron___024root* vlSelf);
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
        VPerceptron___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPerceptron___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x10ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPerceptron___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x20ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPerceptron___024root___act_sequent__TOP__5(vlSelf);
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
    vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
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
    vlSelf->BenchMLP__DOT__example = 0;
    vlSelf->BenchMLP__DOT__threshold = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__correct = 0;
    vlSelf->BenchMLP__DOT__tmp_correct = 0;
    vlSelf->BenchMLP__DOT__unnamedblk1__DOT__epoch = 0;
    vlSelf->BenchMLP__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->BenchMLP__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->BenchMLP__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->BenchMLP__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 0;
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
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->BenchMLP__DOT__data__DOT__input_data[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 1; ++__Vi1) {
            vlSelf->BenchMLP__DOT__data__DOT__output_data[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->BenchMLP__DOT__data__DOT__flat_input_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->BenchMLP__DOT__data__DOT__flat_output_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchMLP__DOT__data__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->BenchMLP__DOT__data__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->BenchMLP__DOT__data__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->BenchMLP__DOT__data__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->BenchMLP__DOT__data__DOT____Vlvbound_h21c7e371__0 = VL_RAND_RESET_Q(64);
    vlSelf->BenchMLP__DOT__data__DOT____Vlvbound_h2f36126e__0 = VL_RAND_RESET_Q(64);
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
    vlSelf->__Vfunc_sfp_sigmoid__73__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sigmoid__73__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__74__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__74__n = 0;
    vlSelf->__Vfunc_int_to_sfp__75__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__75__n = 0;
    vlSelf->__Vfunc_sfp_div__76__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__76__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__76__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__76__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__76__b_ext);
    vlSelf->__Vfunc_sfp_div__76__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__76__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__76__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__76__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__77__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__77__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__77__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__78__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__78__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__78__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__78__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__78__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__79__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__79__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__79__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__79__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__79__b_ext);
    vlSelf->__Vfunc_sfp_div__79__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__79__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__79__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__79__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__80__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__80__n = 0;
    vlSelf->__Vfunc_sfp_mul__81__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__81__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__81__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__81__tmp);
    vlSelf->__Vfunc_sfp_add__82__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__82__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__82__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__83__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__83__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__84__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__84__n = 0;
    vlSelf->__Vfunc_int_to_sfp__85__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__85__n = 0;
    vlSelf->__Vfunc_sfp_sub__86__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__86__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__86__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__87__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__87__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__87__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__87__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__87__b_ext);
    vlSelf->__Vfunc_sfp_div__87__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__87__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__87__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__87__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__88__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__88__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__88__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__89__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__89__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__89__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__89__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__89__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__90__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__90__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__90__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__90__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__90__b_ext);
    vlSelf->__Vfunc_sfp_div__90__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__90__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__90__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__90__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__91__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__91__n = 0;
    vlSelf->__Vfunc_sfp_mul__92__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__92__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__92__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__92__tmp);
    vlSelf->__Vfunc_sfp_add__93__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__93__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__93__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__94__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__94__n = 0;
    vlSelf->__Vfunc_sfp_add__97__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__97__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__97__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__98__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__98__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__98__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__98__tmp);
    vlSelf->__Vfunc_sfp_mul__99__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__99__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__99__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__99__tmp);
    vlSelf->__Vfunc_sfp_mul__100__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__100__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__100__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__100__tmp);
    vlSelf->__Vfunc_sfp_sub__101__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__101__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__101__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__102__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__102__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__102__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__103__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__103__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__103__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__103__tmp);
    vlSelf->__Vfunc_sfp_mul__104__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__104__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__104__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__104__tmp);
    vlSelf->__Vfunc_sfp_sub__105__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__105__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__105__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__106__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__106__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__106__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__106__tmp);
    vlSelf->__Vfunc_sfp_tanh__107__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__107__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__108__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__108__n = 0;
    vlSelf->__Vfunc_int_to_sfp__109__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__109__n = 0;
    vlSelf->__Vfunc_sfp_sub__110__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__110__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__110__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__111__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__111__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__111__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__111__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__111__b_ext);
    vlSelf->__Vfunc_sfp_div__111__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__111__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__111__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__111__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__112__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__112__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__112__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__113__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__113__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__113__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__113__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__113__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__114__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__114__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__114__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__114__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__114__b_ext);
    vlSelf->__Vfunc_sfp_div__114__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__114__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__114__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__114__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__115__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__115__n = 0;
    vlSelf->__Vfunc_sfp_mul__116__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__116__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__116__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__116__tmp);
    vlSelf->__Vfunc_sfp_add__117__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__117__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__117__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__118__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__118__n = 0;
    vlSelf->__Vfunc_sfp_tanh__119__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__119__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__120__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__120__n = 0;
    vlSelf->__Vfunc_int_to_sfp__121__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__121__n = 0;
    vlSelf->__Vfunc_sfp_sub__122__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__122__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__122__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__123__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__123__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__123__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__123__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__123__b_ext);
    vlSelf->__Vfunc_sfp_div__123__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__123__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__123__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__123__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__124__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__124__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__124__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__125__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__125__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__125__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__125__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__125__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__126__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__126__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__126__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__126__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__126__b_ext);
    vlSelf->__Vfunc_sfp_div__126__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__126__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__126__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__126__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__127__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__127__n = 0;
    vlSelf->__Vfunc_sfp_mul__128__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__128__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__128__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__128__tmp);
    vlSelf->__Vfunc_sfp_add__129__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__129__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__129__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__130__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__130__n = 0;
    vlSelf->__Vfunc_sfp_add__131__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__131__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__131__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__132__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__132__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__132__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__132__tmp);
    vlSelf->__Vfunc_sfp_sigmoid__161__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sigmoid__161__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__162__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__162__n = 0;
    vlSelf->__Vfunc_int_to_sfp__163__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__163__n = 0;
    vlSelf->__Vfunc_sfp_div__164__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__164__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__164__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__164__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__164__b_ext);
    vlSelf->__Vfunc_sfp_div__164__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__164__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__164__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__164__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__165__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__165__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__165__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__166__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__166__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__166__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__166__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__166__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__167__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__167__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__167__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__167__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__167__b_ext);
    vlSelf->__Vfunc_sfp_div__167__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__167__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__167__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__167__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__168__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__168__n = 0;
    vlSelf->__Vfunc_sfp_mul__169__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__169__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__169__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__169__tmp);
    vlSelf->__Vfunc_sfp_add__170__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__170__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__170__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__171__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__171__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__172__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__172__n = 0;
    vlSelf->__Vfunc_int_to_sfp__173__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__173__n = 0;
    vlSelf->__Vfunc_sfp_sub__174__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__174__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__174__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__175__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__175__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__175__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__175__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__175__b_ext);
    vlSelf->__Vfunc_sfp_div__175__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__175__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__175__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__175__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__176__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__176__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__176__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__177__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__177__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__177__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__177__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__177__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__178__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__178__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__178__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__178__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__178__b_ext);
    vlSelf->__Vfunc_sfp_div__178__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__178__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__178__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__178__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__179__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__179__n = 0;
    vlSelf->__Vfunc_sfp_mul__180__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__180__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__180__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__180__tmp);
    vlSelf->__Vfunc_sfp_add__181__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__181__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__181__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__182__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__182__n = 0;
    vlSelf->__Vfunc_sfp_add__185__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__185__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__185__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__186__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__186__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__186__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__186__tmp);
    vlSelf->__Vfunc_sfp_mul__187__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__187__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__187__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__187__tmp);
    vlSelf->__Vfunc_sfp_mul__188__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__188__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__188__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__188__tmp);
    vlSelf->__Vfunc_sfp_sub__189__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__189__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__189__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__190__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__190__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__190__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__191__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__191__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__191__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__191__tmp);
    vlSelf->__Vfunc_sfp_mul__192__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__192__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__192__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__192__tmp);
    vlSelf->__Vfunc_sfp_sub__193__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__193__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__193__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__194__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__194__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__194__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__194__tmp);
    vlSelf->__Vfunc_sfp_tanh__195__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__195__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__196__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__196__n = 0;
    vlSelf->__Vfunc_int_to_sfp__197__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__197__n = 0;
    vlSelf->__Vfunc_sfp_sub__198__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__198__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__198__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__199__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__199__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__199__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__199__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__199__b_ext);
    vlSelf->__Vfunc_sfp_div__199__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__199__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__199__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__199__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__200__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__200__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__200__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__201__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__201__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__201__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__201__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__201__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__202__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__202__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__202__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__202__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__202__b_ext);
    vlSelf->__Vfunc_sfp_div__202__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__202__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__202__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__202__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__203__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__203__n = 0;
    vlSelf->__Vfunc_sfp_mul__204__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__204__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__204__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__204__tmp);
    vlSelf->__Vfunc_sfp_add__205__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__205__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__205__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__206__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__206__n = 0;
    vlSelf->__Vfunc_sfp_tanh__207__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__207__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__208__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__208__n = 0;
    vlSelf->__Vfunc_int_to_sfp__209__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__209__n = 0;
    vlSelf->__Vfunc_sfp_sub__210__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__210__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__210__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__211__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__211__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__211__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__211__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__211__b_ext);
    vlSelf->__Vfunc_sfp_div__211__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__211__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__211__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__211__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__212__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__212__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__212__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__213__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__213__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__213__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__213__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__213__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__214__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__214__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__214__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__214__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__214__b_ext);
    vlSelf->__Vfunc_sfp_div__214__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__214__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__214__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__214__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__215__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__215__n = 0;
    vlSelf->__Vfunc_sfp_mul__216__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__216__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__216__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__216__tmp);
    vlSelf->__Vfunc_sfp_add__217__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__217__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__217__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__218__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__218__n = 0;
    vlSelf->__Vfunc_sfp_add__219__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__219__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__219__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__220__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__220__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__220__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__220__tmp);
    vlSelf->__Vfunc_sfp_sigmoid__249__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sigmoid__249__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__250__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__250__n = 0;
    vlSelf->__Vfunc_int_to_sfp__251__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__251__n = 0;
    vlSelf->__Vfunc_sfp_div__252__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__252__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__252__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__252__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__252__b_ext);
    vlSelf->__Vfunc_sfp_div__252__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__252__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__252__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__252__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__253__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__253__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__253__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__254__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__254__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__254__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__254__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__254__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__255__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__255__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__255__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__255__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__255__b_ext);
    vlSelf->__Vfunc_sfp_div__255__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__255__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__255__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__255__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__256__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__256__n = 0;
    vlSelf->__Vfunc_sfp_mul__257__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__257__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__257__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__257__tmp);
    vlSelf->__Vfunc_sfp_add__258__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__258__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__258__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__259__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__259__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__260__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__260__n = 0;
    vlSelf->__Vfunc_int_to_sfp__261__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__261__n = 0;
    vlSelf->__Vfunc_sfp_sub__262__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__262__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__262__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__263__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__263__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__263__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__263__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__263__b_ext);
    vlSelf->__Vfunc_sfp_div__263__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__263__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__263__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__263__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__264__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__264__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__264__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__265__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__265__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__265__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__265__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__265__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__266__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__266__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__266__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__266__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__266__b_ext);
    vlSelf->__Vfunc_sfp_div__266__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__266__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__266__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__266__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__267__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__267__n = 0;
    vlSelf->__Vfunc_sfp_mul__268__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__268__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__268__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__268__tmp);
    vlSelf->__Vfunc_sfp_add__269__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__269__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__269__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__270__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__270__n = 0;
    vlSelf->__Vfunc_sfp_add__273__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__273__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__273__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__274__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__274__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__274__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__274__tmp);
    vlSelf->__Vfunc_sfp_mul__275__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__275__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__275__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__275__tmp);
    vlSelf->__Vfunc_sfp_mul__276__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__276__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__276__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__276__tmp);
    vlSelf->__Vfunc_sfp_sub__277__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__277__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__277__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__278__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__278__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__278__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__279__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__279__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__279__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__279__tmp);
    vlSelf->__Vfunc_sfp_mul__280__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__280__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__280__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__280__tmp);
    vlSelf->__Vfunc_sfp_sub__281__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__281__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__281__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__282__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__282__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__282__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__282__tmp);
    vlSelf->__Vfunc_sfp_tanh__283__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__283__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__284__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__284__n = 0;
    vlSelf->__Vfunc_int_to_sfp__285__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__285__n = 0;
    vlSelf->__Vfunc_sfp_sub__286__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__286__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__286__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__287__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__287__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__287__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__287__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__287__b_ext);
    vlSelf->__Vfunc_sfp_div__287__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__287__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__287__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__287__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__288__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__288__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__288__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__289__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__289__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__289__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__289__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__289__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__290__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__290__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__290__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__290__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__290__b_ext);
    vlSelf->__Vfunc_sfp_div__290__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__290__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__290__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__290__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__291__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__291__n = 0;
    vlSelf->__Vfunc_sfp_mul__292__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__292__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__292__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__292__tmp);
    vlSelf->__Vfunc_sfp_add__293__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__293__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__293__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__294__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__294__n = 0;
    vlSelf->__Vfunc_sfp_tanh__295__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__295__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__296__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__296__n = 0;
    vlSelf->__Vfunc_int_to_sfp__297__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__297__n = 0;
    vlSelf->__Vfunc_sfp_sub__298__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__298__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__298__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__299__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__299__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__299__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__299__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__299__b_ext);
    vlSelf->__Vfunc_sfp_div__299__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__299__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__299__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__299__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__300__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__300__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__300__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__301__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__301__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__301__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__301__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__301__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__302__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__302__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__302__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__302__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__302__b_ext);
    vlSelf->__Vfunc_sfp_div__302__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__302__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__302__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__302__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__303__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__303__n = 0;
    vlSelf->__Vfunc_sfp_mul__304__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__304__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__304__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__304__tmp);
    vlSelf->__Vfunc_sfp_add__305__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__305__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__305__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__306__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__306__n = 0;
    vlSelf->__Vfunc_sfp_add__307__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__307__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__307__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__308__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__308__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__308__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__308__tmp);
    vlSelf->__Vfunc_sfp_sigmoid__337__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sigmoid__337__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__338__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__338__n = 0;
    vlSelf->__Vfunc_int_to_sfp__339__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__339__n = 0;
    vlSelf->__Vfunc_sfp_div__340__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__340__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__340__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__340__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__340__b_ext);
    vlSelf->__Vfunc_sfp_div__340__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__340__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__340__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__340__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__341__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__341__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__341__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__342__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__342__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__342__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__342__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__342__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__343__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__343__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__343__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__343__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__343__b_ext);
    vlSelf->__Vfunc_sfp_div__343__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__343__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__343__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__343__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__344__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__344__n = 0;
    vlSelf->__Vfunc_sfp_mul__345__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__345__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__345__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__345__tmp);
    vlSelf->__Vfunc_sfp_add__346__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__346__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__346__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__347__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__347__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__348__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__348__n = 0;
    vlSelf->__Vfunc_int_to_sfp__349__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__349__n = 0;
    vlSelf->__Vfunc_sfp_sub__350__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__350__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__350__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__351__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__351__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__351__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__351__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__351__b_ext);
    vlSelf->__Vfunc_sfp_div__351__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__351__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__351__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__351__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__352__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__352__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__352__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__353__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__353__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__353__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__353__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__353__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__354__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__354__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__354__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__354__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__354__b_ext);
    vlSelf->__Vfunc_sfp_div__354__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__354__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__354__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__354__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__355__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__355__n = 0;
    vlSelf->__Vfunc_sfp_mul__356__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__356__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__356__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__356__tmp);
    vlSelf->__Vfunc_sfp_add__357__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__357__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__357__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__358__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__358__n = 0;
    vlSelf->__Vfunc_sfp_add__361__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__361__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__361__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__362__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__362__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__362__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__362__tmp);
    vlSelf->__Vfunc_sfp_mul__363__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__363__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__363__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__363__tmp);
    vlSelf->__Vfunc_sfp_mul__364__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__364__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__364__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__364__tmp);
    vlSelf->__Vfunc_sfp_sub__365__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__365__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__365__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__366__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__366__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__366__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__367__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__367__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__367__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__367__tmp);
    vlSelf->__Vfunc_sfp_mul__368__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__368__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__368__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__368__tmp);
    vlSelf->__Vfunc_sfp_sub__369__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__369__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__369__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__370__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__370__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__370__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__370__tmp);
    vlSelf->__Vfunc_sfp_tanh__371__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__371__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__372__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__372__n = 0;
    vlSelf->__Vfunc_int_to_sfp__373__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__373__n = 0;
    vlSelf->__Vfunc_sfp_sub__374__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__374__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__374__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__375__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__375__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__375__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__375__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__375__b_ext);
    vlSelf->__Vfunc_sfp_div__375__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__375__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__375__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__375__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__376__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__376__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__376__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__377__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__377__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__377__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__377__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__377__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__378__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__378__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__378__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__378__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__378__b_ext);
    vlSelf->__Vfunc_sfp_div__378__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__378__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__378__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__378__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__379__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__379__n = 0;
    vlSelf->__Vfunc_sfp_mul__380__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__380__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__380__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__380__tmp);
    vlSelf->__Vfunc_sfp_add__381__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__381__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__381__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__382__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__382__n = 0;
    vlSelf->__Vfunc_sfp_tanh__383__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__383__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__384__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__384__n = 0;
    vlSelf->__Vfunc_int_to_sfp__385__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__385__n = 0;
    vlSelf->__Vfunc_sfp_sub__386__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__386__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__386__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__387__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__387__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__387__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__387__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__387__b_ext);
    vlSelf->__Vfunc_sfp_div__387__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__387__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__387__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__387__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__388__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__388__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__388__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__389__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__389__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__389__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__389__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__389__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__390__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__390__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__390__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__390__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__390__b_ext);
    vlSelf->__Vfunc_sfp_div__390__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__390__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__390__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__390__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__391__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__391__n = 0;
    vlSelf->__Vfunc_sfp_mul__392__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__392__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__392__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__392__tmp);
    vlSelf->__Vfunc_sfp_add__393__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__393__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__393__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__394__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__394__n = 0;
    vlSelf->__Vfunc_sfp_add__395__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__395__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__395__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__396__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__396__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__396__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__396__tmp);
    vlSelf->__Vfunc_sfp_sigmoid__425__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sigmoid__425__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__426__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__426__n = 0;
    vlSelf->__Vfunc_int_to_sfp__427__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__427__n = 0;
    vlSelf->__Vfunc_sfp_div__428__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__428__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__428__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__428__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__428__b_ext);
    vlSelf->__Vfunc_sfp_div__428__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__428__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__428__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__428__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__429__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__429__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__429__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__430__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__430__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__430__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__430__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__430__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__431__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__431__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__431__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__431__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__431__b_ext);
    vlSelf->__Vfunc_sfp_div__431__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__431__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__431__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__431__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__432__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__432__n = 0;
    vlSelf->__Vfunc_sfp_mul__433__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__433__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__433__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__433__tmp);
    vlSelf->__Vfunc_sfp_add__434__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__434__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__434__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__435__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_tanh__435__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__436__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__436__n = 0;
    vlSelf->__Vfunc_int_to_sfp__437__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__437__n = 0;
    vlSelf->__Vfunc_sfp_sub__438__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__438__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__438__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__439__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__439__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__439__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__439__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__439__b_ext);
    vlSelf->__Vfunc_sfp_div__439__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__439__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__439__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__439__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__440__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__440__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__440__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__441__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__441__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__441__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_sfp_exp__441__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_exp__441__term = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__442__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__442__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__442__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__442__remainder);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_div__442__b_ext);
    vlSelf->__Vfunc_sfp_div__442__result = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__442__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_sfp_div__442__abs_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_div__442__abs_b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__443__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__443__n = 0;
    vlSelf->__Vfunc_sfp_mul__444__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__444__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__444__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__444__tmp);
    vlSelf->__Vfunc_sfp_add__445__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__445__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__445__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__446__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__446__n = 0;
    vlSelf->__Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__bias = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__bias = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__bias = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__bias = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__bias = VL_RAND_RESET_Q(64);
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
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
