// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron___024root.h"

VL_ATTR_COLD void VPerceptron___024root___eval_initial__TOP(VPerceptron___024root* vlSelf);
VlCoroutine VPerceptron___024root___eval_initial__TOP__Vtiming__0(VPerceptron___024root* vlSelf);
VlCoroutine VPerceptron___024root___eval_initial__TOP__Vtiming__1(VPerceptron___024root* vlSelf);

void VPerceptron___024root___eval_initial(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_initial\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VPerceptron___024root___eval_initial__TOP(vlSelf);
    VPerceptron___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VPerceptron___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine VPerceptron___024root___eval_initial__TOP__Vtiming__1(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_initial__TOP__Vtiming__1\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (vlSelfRef.BenchPerceptronIntroduction__DOT__training) {
        co_await vlSelfRef.__VtrigSched_hfa9fd802__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ BenchPerceptronIntroduction.training))", 
                                                             "src/Benches/BenchPerceptronIntroduction.sv", 
                                                             50);
    }
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                         51);
    vlSelfRef.BenchPerceptronIntroduction__DOT__values[0U] = 0.0;
    vlSelfRef.BenchPerceptronIntroduction__DOT__values[1U] = 0.0;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                         54);
    vlSelfRef.BenchPerceptronIntroduction__DOT__values[0U] = 1.0;
    vlSelfRef.BenchPerceptronIntroduction__DOT__values[1U] = 0.0;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                         56);
    vlSelfRef.BenchPerceptronIntroduction__DOT__values[0U] = 0.0;
    vlSelfRef.BenchPerceptronIntroduction__DOT__values[1U] = 1.0;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                         58);
    vlSelfRef.BenchPerceptronIntroduction__DOT__values[0U] = 1.0;
    vlSelfRef.BenchPerceptronIntroduction__DOT__values[1U] = 1.0;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                         60);
    VL_FINISH_MT("src/Benches/BenchPerceptronIntroduction.sv", 60, "");
}

void VPerceptron___024root___act_comb__TOP__0(VPerceptron___024root* vlSelf);

void VPerceptron___024root___eval_act(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_act\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VPerceptron___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VPerceptron___024root___act_comb__TOP__0(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___act_comb__TOP__0\n"); );
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
}

void VPerceptron___024root___nba_sequent__TOP__0(VPerceptron___024root* vlSelf);

void VPerceptron___024root___eval_nba(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_nba\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VPerceptron___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VPerceptron___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VPerceptron___024root___nba_sequent__TOP__0(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___nba_sequent__TOP__0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx;
    __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx = 0;
    IData/*31:0*/ __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state;
    __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state = 0;
    double __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error;
    __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error = 0;
    double __VdlyVal__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v0;
    __VdlyVal__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v0 = 0;
    CData/*0:0*/ __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v0;
    __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v0 = 0;
    double __VdlyVal__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v1;
    __VdlyVal__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v1 = 0;
    CData/*0:0*/ __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v1;
    __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v1 = 0;
    // Body
    __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state;
    __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error;
    __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx;
    __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v0 = 0U;
    __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v1 = 0U;
    if (vlSelfRef.BenchPerceptronIntroduction__DOT__training) {
        if ((0U == vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state)) {
            __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx = 0U;
            __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state = 1U;
        } else if ((1U == vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state)) {
            __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error 
                = (vlSelfRef.BenchPerceptronIntroduction__DOT__expected
                   [(3U & vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx)] 
                   - VL_ITOR_D_I(1, (vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum 
                                     > 0.0)));
            __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state = 2U;
        } else if ((2U == vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state)) {
            __VdlyVal__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v0 
                = (vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights
                   [0U] + (1.0 * (vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error 
                                  * vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
                                  [(3U & vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx)]
                                  [0U])));
            __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v0 = 1U;
            vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk4__DOT__i = 2U;
            __VdlyVal__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v1 
                = (vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights
                   [1U] + (1.0 * (vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error 
                                  * vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
                                  [(3U & vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx)]
                                  [1U])));
            __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v1 = 1U;
            vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias 
                = (vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias 
                   + (1.0 * vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error));
            if (VL_GTS_III(32, 3U, vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx)) {
                __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx 
                    = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx);
                __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state = 1U;
            } else {
                __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx = 0U;
                if (VL_GTS_III(32, 9U, vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__epoch_count)) {
                    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__epoch_count 
                        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__epoch_count);
                    __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state = 1U;
                } else {
                    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 0U;
                    __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state = 0U;
                }
            }
        }
    }
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state 
        = __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state;
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error 
        = __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error;
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx 
        = __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx;
    if (__VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v0) {
        vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[0U] 
            = __VdlyVal__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v0;
    }
    if (__VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v1) {
        vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[1U] 
            = __VdlyVal__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v1;
    }
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

void VPerceptron___024root___timing_commit(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___timing_commit\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hfa9fd802__0.commit(
                                                   "@( (~ BenchPerceptronIntroduction.training))");
    }
}

void VPerceptron___024root___timing_resume(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___timing_resume\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hfa9fd802__0.resume(
                                                   "@( (~ BenchPerceptronIntroduction.training))");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VPerceptron___024root___eval_triggers__act(VPerceptron___024root* vlSelf);

bool VPerceptron___024root___eval_phase__act(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_phase__act\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
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
            VL_FATAL_MT("src/Benches/BenchPerceptronIntroduction.sv", 3, "", "NBA region did not converge.");
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
                VL_FATAL_MT("src/Benches/BenchPerceptronIntroduction.sv", 3, "", "Active region did not converge.");
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
