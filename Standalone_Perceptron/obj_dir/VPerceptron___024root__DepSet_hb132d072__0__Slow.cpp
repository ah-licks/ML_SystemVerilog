// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron___024root.h"

VL_ATTR_COLD void VPerceptron___024root___eval_static__TOP(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_static__TOP\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 1U;
}

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
    VL_READMEM_N(true, 64, 16, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data)
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x696e666fU;
    __Vtemp_2[2U] = 0x7075745fU;
    __Vtemp_2[3U] = 0x6f7574U;
    VL_READMEM_N(true, 64, 8, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_2)
                 ,  &(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data)
                 , 0, ~0ULL);
    vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data[0U][0U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data
        [0U];
    vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data[0U][1U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data
        [1U];
    vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data[1U][0U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data
        [2U];
    vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data[1U][1U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data
        [3U];
    vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data[2U][0U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data
        [4U];
    vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data[2U][1U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data
        [5U];
    vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data[3U][0U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data
        [6U];
    vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data[3U][1U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data
        [7U];
    vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data[4U][0U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data
        [8U];
    vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data[4U][1U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data
        [9U];
    vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data[5U][0U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data
        [0xaU];
    vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data[5U][1U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data
        [0xbU];
    vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data[6U][0U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data
        [0xcU];
    vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data[6U][1U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data
        [0xdU];
    vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data[7U][0U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data
        [0xeU];
    vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data[7U][1U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data
        [0xfU];
    vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__unnamedblk1__DOT__i = 8U;
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

void VPerceptron___024root___act_sequent__TOP__0(VPerceptron___024root* vlSelf);
VL_ATTR_COLD void VPerceptron___024root____Vm_traceActivitySetAll(VPerceptron___024root* vlSelf);

VL_ATTR_COLD void VPerceptron___024root___eval_stl(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_stl\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPerceptron___024root___act_sequent__TOP__0(vlSelf);
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge BenchPerceptronIntroduction.clk)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge BenchPerceptronIntroduction.clk)\n");
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
    vlSelf->BenchPerceptronIntroduction__DOT__clk = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__rst = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchPerceptronIntroduction__DOT__values[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchPerceptronIntroduction__DOT__training = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__learning_rate = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptronIntroduction__DOT__prediction = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptronIntroduction__DOT__expected = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptronIntroduction__DOT__example = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__correct = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__epoch = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__unnamedblk4__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->BenchPerceptronIntroduction__DOT__data__DOT__input_data[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->BenchPerceptronIntroduction__DOT__data__DOT__output_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchPerceptronIntroduction__DOT__data__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__data__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->__Vtrigprevexpr___TOP__BenchPerceptronIntroduction__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
