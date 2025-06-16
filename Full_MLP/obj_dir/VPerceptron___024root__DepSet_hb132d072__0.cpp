// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron___024root.h"

VlCoroutine VPerceptron___024root___eval_initial__TOP__Vtiming__0(VPerceptron___024root* vlSelf);
VlCoroutine VPerceptron___024root___eval_initial__TOP__Vtiming__1(VPerceptron___024root* vlSelf);

void VPerceptron___024root___eval_initial(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_initial\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VPerceptron___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VPerceptron___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine VPerceptron___024root___eval_initial__TOP__Vtiming__0(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_initial__TOP__Vtiming__0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.BenchMLP__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "src/Benches/BenchMLP.sv", 
                                             44);
        vlSelfRef.BenchMLP__DOT__clk = (1U & (~ (IData)(vlSelfRef.BenchMLP__DOT__clk)));
    }
}

void VPerceptron___024root___act_sequent__TOP__0(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_sequent__TOP__1(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_sequent__TOP__2(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_sequent__TOP__3(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_sequent__TOP__4(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_sequent__TOP__5(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_comb__TOP__0(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_comb__TOP__1(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_comb__TOP__2(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_comb__TOP__3(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_comb__TOP__4(VPerceptron___024root* vlSelf);

void VPerceptron___024root___eval_act(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_act\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VPerceptron___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VPerceptron___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VPerceptron___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VPerceptron___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VPerceptron___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VPerceptron___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x3eULL & vlSelfRef.__VactTriggered.word(0U))) {
        VPerceptron___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        VPerceptron___024root___act_comb__TOP__1(vlSelf);
        VPerceptron___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x3fULL & vlSelfRef.__VactTriggered.word(0U))) {
        VPerceptron___024root___act_comb__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
        VPerceptron___024root___act_comb__TOP__4(vlSelf);
    }
}

VL_INLINE_OPT void VPerceptron___024root___act_sequent__TOP__0(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___act_sequent__TOP__0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient_next_layer[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients
        [2U][0U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients
        [2U][0U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient_next_layer[1U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients
        [1U][1U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient_next_layer[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients
        [1U][0U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer[1U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients
        [1U][1U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients
        [1U][0U];
}

VL_INLINE_OPT void VPerceptron___024root___act_sequent__TOP__1(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___act_sequent__TOP__1\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_outputs[1U][0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction;
}

VL_INLINE_OPT void VPerceptron___024root___act_sequent__TOP__2(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___act_sequent__TOP__2\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_outputs[1U][1U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
}

VL_INLINE_OPT void VPerceptron___024root___act_sequent__TOP__3(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___act_sequent__TOP__3\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_outputs[2U][0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction;
}

VL_INLINE_OPT void VPerceptron___024root___act_sequent__TOP__4(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___act_sequent__TOP__4\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_outputs[2U][1U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction;
}

VL_INLINE_OPT void VPerceptron___024root___act_sequent__TOP__5(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___act_sequent__TOP__5\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_outputs[0U][0U] 
        = vlSelfRef.BenchMLP__DOT__values[0U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_outputs[0U][1U] 
        = vlSelfRef.BenchMLP__DOT__values[1U];
}

VL_INLINE_OPT void VPerceptron___024root___act_comb__TOP__2(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___act_comb__TOP__2\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vfunc_sfp_mul__329__Vfuncout;
    __Vfunc_sfp_mul__329__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__329__a;
    __Vfunc_sfp_mul__329__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__329__b;
    __Vfunc_sfp_mul__329__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__329__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__329__tmp);
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    __Vfunc_sfp_mul__329__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__values
        [0U];
    __Vfunc_sfp_mul__329__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_1, __Vfunc_sfp_mul__329__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_2, __Vfunc_sfp_mul__329__b);
    VL_MULS_WWW(128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__329__tmp, __Vtemp_3, 0x20U);
    __Vfunc_sfp_mul__329__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__329__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__329__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__329__Vfuncout;
    __Vfunc_sfp_mul__329__b = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__values
        [1U];
    __Vfunc_sfp_mul__329__a = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_4, __Vfunc_sfp_mul__329__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_5, __Vfunc_sfp_mul__329__b);
    VL_MULS_WWW(128, __Vtemp_6, __Vtemp_4, __Vtemp_5);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__329__tmp, __Vtemp_6, 0x20U);
    __Vfunc_sfp_mul__329__Vfuncout = (((QData)((IData)(
                                                       __Vfunc_sfp_mul__329__tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vfunc_sfp_mul__329__tmp[0U])));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__329__Vfuncout;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk6__DOT__i = 2U;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients[2U][0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__error_gradient;
}

void VPerceptron___024root___nba_sequent__TOP__0(VPerceptron___024root* vlSelf);
void VPerceptron___024root___nba_sequent__TOP__1(VPerceptron___024root* vlSelf);
void VPerceptron___024root___nba_sequent__TOP__2(VPerceptron___024root* vlSelf);
void VPerceptron___024root___nba_comb__TOP__0(VPerceptron___024root* vlSelf);
void VPerceptron___024root___nba_comb__TOP__1(VPerceptron___024root* vlSelf);
void VPerceptron___024root___nba_comb__TOP__2(VPerceptron___024root* vlSelf);
void VPerceptron___024root___nba_comb__TOP__3(VPerceptron___024root* vlSelf);

void VPerceptron___024root___eval_nba(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_nba\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VPerceptron___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
        VPerceptron___024root___nba_sequent__TOP__1(vlSelf);
        VPerceptron___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x28ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VPerceptron___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0x30ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VPerceptron___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x22ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VPerceptron___024root___nba_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((0x24ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VPerceptron___024root___nba_comb__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
    }
}

void VPerceptron___024root___timing_commit(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___timing_commit\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x20ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd88d814d__0.commit(
                                                   "@(posedge BenchMLP.clk)");
    }
}

void VPerceptron___024root___timing_resume(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___timing_resume\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd88d814d__0.resume(
                                                   "@(posedge BenchMLP.clk)");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VPerceptron___024root___eval_triggers__act(VPerceptron___024root* vlSelf);

bool VPerceptron___024root___eval_phase__act(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_phase__act\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<7> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VPerceptron___024root___eval_triggers__act(vlSelf);
    VPerceptron___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VPerceptron___024root___timing_resume(vlSelf);
        VPerceptron___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VPerceptron___024root___eval_phase__nba(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_phase__nba\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VPerceptron___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPerceptron___024root___dump_triggers__nba(VPerceptron___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPerceptron___024root___dump_triggers__act(VPerceptron___024root* vlSelf);
#endif  // VL_DEBUG

void VPerceptron___024root___eval(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VPerceptron___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/Benches/BenchMLP.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VPerceptron___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/Benches/BenchMLP.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VPerceptron___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VPerceptron___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VPerceptron___024root___eval_debug_assertions(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_debug_assertions\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
