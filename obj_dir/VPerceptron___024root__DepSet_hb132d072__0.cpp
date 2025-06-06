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
    vlSelfRef.BenchPerceptron__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "src/Benches/BenchPerceptron.sv", 
                                             53);
        vlSelfRef.BenchPerceptron__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.BenchPerceptron__DOT__clk)));
    }
}

void VPerceptron___024root___act_sequent__TOP__0(VPerceptron___024root* vlSelf);

void VPerceptron___024root___eval_act(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_act\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VPerceptron___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void VPerceptron___024root___act_sequent__TOP__0(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___act_sequent__TOP__0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void VPerceptron___024root___nba_sequent__TOP__0(VPerceptron___024root* vlSelf);

void VPerceptron___024root___eval_nba(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_nba\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VPerceptron___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

VL_INLINE_OPT void VPerceptron___024root___nba_sequent__TOP__0(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___nba_sequent__TOP__0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    double __Vdly__BenchPerceptron__DOT__perceptron__DOT__bias;
    __Vdly__BenchPerceptron__DOT__perceptron__DOT__bias = 0;
    double __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v0;
    __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v0 = 0;
    CData/*0:0*/ __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v0;
    __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v0 = 0;
    double __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v1;
    __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v1 = 0;
    double __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v2;
    __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v2 = 0;
    CData/*0:0*/ __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v2;
    __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v2 = 0;
    double __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v3;
    __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v3 = 0;
    // Body
    __Vdly__BenchPerceptron__DOT__perceptron__DOT__bias 
        = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias;
    __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v0 = 0U;
    __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v2 = 0U;
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
    if ((1U == vlSelfRef.BenchPerceptron__DOT__activation)) {
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk3__DOT__i = 1U;
    }
    if (vlSelfRef.BenchPerceptron__DOT__rst) {
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk7__DOT__i = 2U;
        __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v0 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
        __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v0 = 1U;
        __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v1 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
        __Vdly__BenchPerceptron__DOT__perceptron__DOT__bias 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
    } else if (vlSelfRef.BenchPerceptron__DOT__training) {
        __Vdly__BenchPerceptron__DOT__perceptron__DOT__bias 
            = (vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias 
               - (vlSelfRef.BenchPerceptron__DOT__learning_rate 
                  * vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias_gradient));
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk8__DOT__i = 2U;
        __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v2 
            = (vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights
               [0U] - (vlSelfRef.BenchPerceptron__DOT__learning_rate 
                       * vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weight_gradient
                       [0U]));
        __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v2 = 1U;
        __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v3 
            = (vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights
               [1U] - (vlSelfRef.BenchPerceptron__DOT__learning_rate 
                       * vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weight_gradient
                       [1U]));
    }
    vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias 
        = __Vdly__BenchPerceptron__DOT__perceptron__DOT__bias;
    if (__VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v0) {
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights[0U] 
            = __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v0;
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights[1U] 
            = __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v1;
    }
    if (__VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v2) {
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights[0U] 
            = __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v2;
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights[1U] 
            = __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v3;
    }
    vlSelfRef.BenchPerceptron__DOT__current_weights[0U] 
        = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights
        [0U];
    vlSelfRef.BenchPerceptron__DOT__current_weights[1U] 
        = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights
        [1U];
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
    vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient 
        = ((1U == vlSelfRef.BenchPerceptron__DOT__activation)
            ? (0.0 + (((vlSelfRef.BenchPerceptron__DOT__next_layer_weights
                        [0U] * vlSelfRef.BenchPerceptron__DOT__error_gradient_next_layer
                        [0U]) * vlSelfRef.BenchPerceptron__DOT__prediction) 
                      * (1.0 - vlSelfRef.BenchPerceptron__DOT__prediction)))
            : ((2U == vlSelfRef.BenchPerceptron__DOT__activation)
                ? (0.0 + ((vlSelfRef.BenchPerceptron__DOT__next_layer_weights
                           [0U] * vlSelfRef.BenchPerceptron__DOT__error_gradient_next_layer
                           [0U]) * (1.0 - pow(vlSelfRef.BenchPerceptron__DOT__prediction,2.0))))
                : ((3U == vlSelfRef.BenchPerceptron__DOT__activation)
                    ? (0.0 + (vlSelfRef.BenchPerceptron__DOT__next_layer_weights
                              [0U] * ((vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum 
                                       >= 0.0) ? vlSelfRef.BenchPerceptron__DOT__error_gradient_next_layer
                                      [0U] : 0.0)))
                    : 0.0)));
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

void VPerceptron___024root___timing_commit(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___timing_commit\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hdf907d93__0.commit(
                                                   "@(posedge BenchPerceptron.clk)");
    }
}

void VPerceptron___024root___timing_resume(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___timing_resume\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hdf907d93__0.resume(
                                                   "@(posedge BenchPerceptron.clk)");
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
    VlTriggerVec<2> __VpreTriggered;
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
            VL_FATAL_MT("src/Benches/BenchPerceptron.sv", 4, "", "NBA region did not converge.");
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
                VL_FATAL_MT("src/Benches/BenchPerceptron.sv", 4, "", "Active region did not converge.");
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
