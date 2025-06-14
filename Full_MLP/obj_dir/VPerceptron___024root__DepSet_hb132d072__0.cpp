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
                                             47);
        vlSelfRef.BenchMLP__DOT__clk = (1U & (~ (IData)(vlSelfRef.BenchMLP__DOT__clk)));
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
    // Init
    double BenchMLP__DOT__mlp__DOT____Vlvbound_h362076de__0;
    BenchMLP__DOT__mlp__DOT____Vlvbound_h362076de__0 = 0;
    // Body
    if ((1U != vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        if ((2U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
            vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
            vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
            vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
            vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
        }
        if ((2U != vlSelfRef.BenchMLP__DOT__hidden_activation)) {
            if ((3U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
                vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
                vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
                vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
                vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
            }
        }
    }
    if ((1U != vlSelfRef.BenchMLP__DOT__output_activation)) {
        if ((2U == vlSelfRef.BenchMLP__DOT__output_activation)) {
            vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk4__DOT__i = 1U;
        }
        if ((2U != vlSelfRef.BenchMLP__DOT__output_activation)) {
            if ((3U == vlSelfRef.BenchMLP__DOT__output_activation)) {
                vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk5__DOT__i = 1U;
            }
        }
    }
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights
              [0U] * vlSelfRef.BenchMLP__DOT__values
              [0U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights
              [1U] * vlSelfRef.BenchMLP__DOT__values
              [1U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights
              [0U] * vlSelfRef.BenchMLP__DOT__values
              [0U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights
              [1U] * vlSelfRef.BenchMLP__DOT__values
              [1U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__bias;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights
              [0U] * vlSelfRef.BenchMLP__DOT__values
              [0U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights
              [1U] * vlSelfRef.BenchMLP__DOT__values
              [1U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__bias;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights
              [0U] * vlSelfRef.BenchMLP__DOT__values
              [0U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights
              [1U] * vlSelfRef.BenchMLP__DOT__values
              [1U]));
    if ((0U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction 
            = VL_ITOR_D_I(1, (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum 
                              > 0.0));
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction 
            = VL_ITOR_D_I(1, (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum 
                              > 0.0));
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction 
            = VL_ITOR_D_I(1, (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum 
                              > 0.0));
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction 
            = VL_ITOR_D_I(1, (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum 
                              > 0.0));
    } else if ((1U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction 
            = (1.0 / (1.0 + pow(2.71828182799999984e+00,
                                (- vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum))));
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction 
            = (1.0 / (1.0 + pow(2.71828182799999984e+00,
                                (- vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum))));
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction 
            = (1.0 / (1.0 + pow(2.71828182799999984e+00,
                                (- vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum))));
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction 
            = (1.0 / (1.0 + pow(2.71828182799999984e+00,
                                (- vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum))));
    } else if ((2U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction 
            = ((2.0 / (1.0 + pow(2.71828182799999984e+00,
                                 (-2.0 * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum)))) 
               - 1.0);
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction 
            = ((2.0 / (1.0 + pow(2.71828182799999984e+00,
                                 (-2.0 * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum)))) 
               - 1.0);
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction 
            = ((2.0 / (1.0 + pow(2.71828182799999984e+00,
                                 (-2.0 * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum)))) 
               - 1.0);
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction 
            = ((2.0 / (1.0 + pow(2.71828182799999984e+00,
                                 (-2.0 * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum)))) 
               - 1.0);
    } else if ((3U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction 
            = ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum 
                > 0.0) ? vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum
                : 0.0);
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction 
            = ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum 
                > 0.0) ? vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum
                : 0.0);
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction 
            = ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum 
                > 0.0) ? vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum
                : 0.0);
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction 
            = ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum 
                > 0.0) ? vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum
                : 0.0);
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction 
            = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum;
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction 
            = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum;
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction 
            = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum;
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction 
            = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum;
    }
    vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions[1U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions[2U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions[3U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights
              [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
              [0U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights
              [1U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
              [1U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights
              [2U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
              [2U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights
              [3U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
              [3U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__prediction 
        = ((0U == vlSelfRef.BenchMLP__DOT__output_activation)
            ? VL_ITOR_D_I(1, (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
                              > 0.0)) : ((1U == vlSelfRef.BenchMLP__DOT__output_activation)
                                          ? (1.0 / 
                                             (1.0 + 
                                              pow(2.71828182799999984e+00,
                                                  (- vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum))))
                                          : ((2U == vlSelfRef.BenchMLP__DOT__output_activation)
                                              ? ((2.0 
                                                  / 
                                                  (1.0 
                                                   + 
                                                   pow(2.71828182799999984e+00,
                                                       (-2.0 
                                                        * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum)))) 
                                                 - 1.0)
                                              : ((3U 
                                                  == vlSelfRef.BenchMLP__DOT__output_activation)
                                                  ? 
                                                 ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
                                                   > 0.0)
                                                   ? vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum
                                                   : 0.0)
                                                  : vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum))));
    vlSelfRef.BenchMLP__DOT__prediction[0U] = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__prediction;
    vlSelfRef.BenchMLP__DOT__cost = (-1.0 * ((vlSelfRef.BenchMLP__DOT__expected
                                              [0U] 
                                              * log(
                                                    (1.00000000000000002e-08 
                                                     + 
                                                     vlSelfRef.BenchMLP__DOT__prediction
                                                     [0U]))) 
                                             + ((1.0 
                                                 - 
                                                 vlSelfRef.BenchMLP__DOT__expected
                                                 [0U]) 
                                                * log(
                                                      (1.00000000000000002e-08 
                                                       + 
                                                       (1.0 
                                                        - 
                                                        vlSelfRef.BenchMLP__DOT__prediction
                                                        [0U]))))));
    BenchMLP__DOT__mlp__DOT____Vlvbound_h362076de__0 
        = (- ((vlSelfRef.BenchMLP__DOT__expected[0U] 
               / (1.00000000000000002e-08 + vlSelfRef.BenchMLP__DOT__prediction
                  [0U])) - ((1.0 - vlSelfRef.BenchMLP__DOT__expected
                             [0U]) / (1.00000000000000002e-08 
                                      + (1.0 - vlSelfRef.BenchMLP__DOT__prediction
                                         [0U])))));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__activation_gradients[0U] 
        = BenchMLP__DOT__mlp__DOT____Vlvbound_h362076de__0;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__activation_gradients
        [0U];
    if ((1U == vlSelfRef.BenchMLP__DOT__output_activation)) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
            = (0.0 + (((vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__next_layer_weights
                        [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer
                        [0U]) * vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__prediction) 
                      * (1.0 - vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__prediction)));
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
            = ((2U == vlSelfRef.BenchMLP__DOT__output_activation)
                ? (0.0 + ((vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__next_layer_weights
                           [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer
                           [0U]) * (1.0 - pow(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__prediction,2.0))))
                : ((3U == vlSelfRef.BenchMLP__DOT__output_activation)
                    ? (0.0 + (vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__next_layer_weights
                              [0U] * ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
                                       >= 0.0) ? vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer
                                      [0U] : 0.0)))
                    : 0.0));
    }
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[0U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
           [0U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[1U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
           [1U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[2U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
           [2U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[3U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
           [3U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient;
    if ((1U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + (((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__next_layer_weights_for_hidden
                        [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                        [0U]) * vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction) 
                      * (1.0 - vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction)));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + (((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__next_layer_weights_for_hidden
                        [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                        [0U]) * vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction) 
                      * (1.0 - vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction)));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + (((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__next_layer_weights_for_hidden
                        [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                        [0U]) * vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction) 
                      * (1.0 - vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction)));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + (((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__next_layer_weights_for_hidden
                        [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                        [0U]) * vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction) 
                      * (1.0 - vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction)));
    } else if ((2U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__next_layer_weights_for_hidden
                       [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                       [0U]) * (1.0 - pow(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction,2.0))));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__next_layer_weights_for_hidden
                       [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                       [0U]) * (1.0 - pow(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction,2.0))));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__next_layer_weights_for_hidden
                       [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                       [0U]) * (1.0 - pow(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction,2.0))));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__next_layer_weights_for_hidden
                       [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                       [0U]) * (1.0 - pow(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction,2.0))));
    } else if ((3U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__next_layer_weights_for_hidden
                      [0U] * ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum 
                               >= 0.0) ? vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                              [0U] : 0.0)));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__next_layer_weights_for_hidden
                      [0U] * ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum 
                               >= 0.0) ? vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                              [0U] : 0.0)));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__next_layer_weights_for_hidden
                      [0U] * ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum 
                               >= 0.0) ? vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                              [0U] : 0.0)));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__next_layer_weights_for_hidden
                      [0U] * ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum 
                               >= 0.0) ? vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                              [0U] : 0.0)));
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0.0;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0.0;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0.0;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0.0;
    }
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__values[0U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__values[1U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__values[0U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__values[1U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__values[0U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__values[1U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__values[0U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__values[1U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
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
    double BenchMLP__DOT__mlp__DOT____Vlvbound_h88070a8d__0;
    BenchMLP__DOT__mlp__DOT____Vlvbound_h88070a8d__0 = 0;
    double BenchMLP__DOT__mlp__DOT____Vlvbound_h9f34236c__0;
    BenchMLP__DOT__mlp__DOT____Vlvbound_h9f34236c__0 = 0;
    double BenchMLP__DOT__mlp__DOT____Vlvbound_h99200702__0;
    BenchMLP__DOT__mlp__DOT____Vlvbound_h99200702__0 = 0;
    double BenchMLP__DOT__mlp__DOT____Vlvbound_h6a8a73b0__0;
    BenchMLP__DOT__mlp__DOT____Vlvbound_h6a8a73b0__0 = 0;
    double BenchMLP__DOT__mlp__DOT____Vlvbound_h362076de__0;
    BenchMLP__DOT__mlp__DOT____Vlvbound_h362076de__0 = 0;
    double __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias;
    __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias = 0;
    double __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias;
    __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias = 0;
    double __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__bias;
    __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__bias = 0;
    double __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__bias;
    __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__bias = 0;
    double __Vdly__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias;
    __Vdly__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v0;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v0 = 0;
    CData/*0:0*/ __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v0;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v0 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v1;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v1 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v2;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v2 = 0;
    CData/*0:0*/ __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v2;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v2 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v3;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v3 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v0;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v0 = 0;
    CData/*0:0*/ __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v0;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v0 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v1;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v1 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v2;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v2 = 0;
    CData/*0:0*/ __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v2;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v2 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v3;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v3 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v0;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v0 = 0;
    CData/*0:0*/ __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v0;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v0 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v1;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v1 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v2;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v2 = 0;
    CData/*0:0*/ __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v2;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v2 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v3;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v3 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v0;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v0 = 0;
    CData/*0:0*/ __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v0;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v0 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v1;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v1 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v2;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v2 = 0;
    CData/*0:0*/ __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v2;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v2 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v3;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v3 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v0;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v0 = 0;
    CData/*0:0*/ __VdlySet__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v0;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v0 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v1;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v1 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v2;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v2 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v3;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v3 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v4;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v4 = 0;
    CData/*0:0*/ __VdlySet__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v4;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v4 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v5;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v5 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v6;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v6 = 0;
    double __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v7;
    __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v7 = 0;
    // Body
    __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias;
    __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias;
    __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__bias 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__bias;
    __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__bias 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__bias;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v0 = 0U;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v2 = 0U;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v0 = 0U;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v2 = 0U;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v0 = 0U;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v2 = 0U;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v0 = 0U;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v2 = 0U;
    __Vdly__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v0 = 0U;
    __VdlySet__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v4 = 0U;
    if ((1U != vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        if ((2U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
            vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
            vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
            vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
            vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i = 1U;
        }
        if ((2U != vlSelfRef.BenchMLP__DOT__hidden_activation)) {
            if ((3U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
                vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
                vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
                vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
                vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i = 1U;
            }
        }
    }
    if ((1U != vlSelfRef.BenchMLP__DOT__output_activation)) {
        if ((2U == vlSelfRef.BenchMLP__DOT__output_activation)) {
            vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk4__DOT__i = 1U;
        }
        if ((2U != vlSelfRef.BenchMLP__DOT__output_activation)) {
            if ((3U == vlSelfRef.BenchMLP__DOT__output_activation)) {
                vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk5__DOT__i = 1U;
            }
        }
    }
    if ((1U == vlSelfRef.BenchMLP__DOT__output_activation)) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk3__DOT__i = 1U;
    }
    if ((1U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i = 1U;
    }
    if (vlSelfRef.BenchMLP__DOT__rst) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i = 2U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v0 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
        __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v0 = 1U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v1 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
        __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
    } else if (vlSelfRef.BenchMLP__DOT__training) {
        __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias 
            = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias 
               - (vlSelfRef.BenchMLP__DOT__learning_rate 
                  * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias_gradient));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i = 2U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v2 
            = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights
               [0U] - (vlSelfRef.BenchMLP__DOT__learning_rate 
                       * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient
                       [0U]));
        __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v2 = 1U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v3 
            = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights
               [1U] - (vlSelfRef.BenchMLP__DOT__learning_rate 
                       * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient
                       [1U]));
    }
    if (vlSelfRef.BenchMLP__DOT__rst) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i = 2U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v0 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
        __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v0 = 1U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v1 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
        __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
    } else if (vlSelfRef.BenchMLP__DOT__training) {
        __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias 
            = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias 
               - (vlSelfRef.BenchMLP__DOT__learning_rate 
                  * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias_gradient));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i = 2U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v2 
            = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights
               [0U] - (vlSelfRef.BenchMLP__DOT__learning_rate 
                       * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient
                       [0U]));
        __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v2 = 1U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v3 
            = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights
               [1U] - (vlSelfRef.BenchMLP__DOT__learning_rate 
                       * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient
                       [1U]));
    }
    if (vlSelfRef.BenchMLP__DOT__rst) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i = 2U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v0 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
        __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v0 = 1U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v1 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
        __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__bias 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
    } else if (vlSelfRef.BenchMLP__DOT__training) {
        __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__bias 
            = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__bias 
               - (vlSelfRef.BenchMLP__DOT__learning_rate 
                  * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__bias_gradient));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i = 2U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v2 
            = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights
               [0U] - (vlSelfRef.BenchMLP__DOT__learning_rate 
                       * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weight_gradient
                       [0U]));
        __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v2 = 1U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v3 
            = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights
               [1U] - (vlSelfRef.BenchMLP__DOT__learning_rate 
                       * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weight_gradient
                       [1U]));
    }
    if (vlSelfRef.BenchMLP__DOT__rst) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i = 2U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v0 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
        __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v0 = 1U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v1 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
        __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__bias 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
    } else if (vlSelfRef.BenchMLP__DOT__training) {
        __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__bias 
            = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__bias 
               - (vlSelfRef.BenchMLP__DOT__learning_rate 
                  * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__bias_gradient));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i = 2U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v2 
            = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights
               [0U] - (vlSelfRef.BenchMLP__DOT__learning_rate 
                       * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weight_gradient
                       [0U]));
        __VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v2 = 1U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v3 
            = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights
               [1U] - (vlSelfRef.BenchMLP__DOT__learning_rate 
                       * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weight_gradient
                       [1U]));
    }
    if (vlSelfRef.BenchMLP__DOT__rst) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk7__DOT__i = 4U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v0 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
        __VdlySet__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v0 = 1U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v1 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v2 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v3 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
        __Vdly__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias 
            = ((VL_ITOR_D_I(32, VL_URANDOM_RANGE_I(0x64U, 1U)) 
                / 100.0) - 5.00000000000000000e-01);
    } else if (vlSelfRef.BenchMLP__DOT__training) {
        __Vdly__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias 
            = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias 
               - (vlSelfRef.BenchMLP__DOT__learning_rate 
                  * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias_gradient));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk8__DOT__i = 4U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v4 
            = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights
               [0U] - (vlSelfRef.BenchMLP__DOT__learning_rate 
                       * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient
                       [0U]));
        __VdlySet__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v4 = 1U;
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v5 
            = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights
               [1U] - (vlSelfRef.BenchMLP__DOT__learning_rate 
                       * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient
                       [1U]));
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v6 
            = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights
               [2U] - (vlSelfRef.BenchMLP__DOT__learning_rate 
                       * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient
                       [2U]));
        __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v7 
            = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights
               [3U] - (vlSelfRef.BenchMLP__DOT__learning_rate 
                       * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient
                       [3U]));
    }
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias 
        = __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias;
    if (__VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v0) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights[0U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v0;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights[1U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v1;
    }
    if (__VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v2) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights[0U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v2;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights[1U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights__v3;
    }
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias 
        = __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias;
    if (__VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v0) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights[0U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v0;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights[1U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v1;
    }
    if (__VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v2) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights[0U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v2;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights[1U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights__v3;
    }
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__bias 
        = __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__bias;
    if (__VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v0) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights[0U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v0;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights[1U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v1;
    }
    if (__VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v2) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights[0U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v2;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights[1U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights__v3;
    }
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__bias 
        = __Vdly__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__bias;
    if (__VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v0) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights[0U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v0;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights[1U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v1;
    }
    if (__VdlySet__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v2) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights[0U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v2;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights[1U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights__v3;
    }
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias 
        = __Vdly__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias;
    if (__VdlySet__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v0) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights[0U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v0;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights[1U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v1;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights[2U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v2;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights[3U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v3;
    }
    if (__VdlySet__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v4) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights[0U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v4;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights[1U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v5;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights[2U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v6;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights[3U] 
            = __VdlyVal__BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights__v7;
    }
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__current_weights[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights
        [0U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__current_weights[1U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights
        [1U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights
              [0U] * vlSelfRef.BenchMLP__DOT__values
              [0U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights
              [1U] * vlSelfRef.BenchMLP__DOT__values
              [1U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__current_weights[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights
        [0U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__current_weights[1U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights
        [1U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights
              [0U] * vlSelfRef.BenchMLP__DOT__values
              [0U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights
              [1U] * vlSelfRef.BenchMLP__DOT__values
              [1U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__current_weights[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights
        [0U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__current_weights[1U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights
        [1U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__bias;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights
              [0U] * vlSelfRef.BenchMLP__DOT__values
              [0U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights
              [1U] * vlSelfRef.BenchMLP__DOT__values
              [1U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__current_weights[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights
        [0U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__current_weights[1U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights
        [1U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__bias;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights
              [0U] * vlSelfRef.BenchMLP__DOT__values
              [0U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights
              [1U] * vlSelfRef.BenchMLP__DOT__values
              [1U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__current_weights[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights
        [0U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__current_weights[1U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights
        [1U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__current_weights[2U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights
        [2U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__current_weights[3U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights
        [3U];
    if ((0U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction 
            = VL_ITOR_D_I(1, (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum 
                              > 0.0));
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction 
            = VL_ITOR_D_I(1, (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum 
                              > 0.0));
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction 
            = VL_ITOR_D_I(1, (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum 
                              > 0.0));
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction 
            = VL_ITOR_D_I(1, (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum 
                              > 0.0));
    } else if ((1U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction 
            = (1.0 / (1.0 + pow(2.71828182799999984e+00,
                                (- vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum))));
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction 
            = (1.0 / (1.0 + pow(2.71828182799999984e+00,
                                (- vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum))));
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction 
            = (1.0 / (1.0 + pow(2.71828182799999984e+00,
                                (- vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum))));
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction 
            = (1.0 / (1.0 + pow(2.71828182799999984e+00,
                                (- vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum))));
    } else if ((2U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction 
            = ((2.0 / (1.0 + pow(2.71828182799999984e+00,
                                 (-2.0 * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum)))) 
               - 1.0);
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction 
            = ((2.0 / (1.0 + pow(2.71828182799999984e+00,
                                 (-2.0 * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum)))) 
               - 1.0);
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction 
            = ((2.0 / (1.0 + pow(2.71828182799999984e+00,
                                 (-2.0 * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum)))) 
               - 1.0);
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction 
            = ((2.0 / (1.0 + pow(2.71828182799999984e+00,
                                 (-2.0 * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum)))) 
               - 1.0);
    } else if ((3U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction 
            = ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum 
                > 0.0) ? vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum
                : 0.0);
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction 
            = ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum 
                > 0.0) ? vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum
                : 0.0);
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction 
            = ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum 
                > 0.0) ? vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum
                : 0.0);
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction 
            = ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum 
                > 0.0) ? vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum
                : 0.0);
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction 
            = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum;
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction 
            = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum;
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction 
            = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum;
        vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction 
            = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum;
    }
    vlSelfRef.BenchMLP__DOT__mlp__DOT__output_weights[0U][3U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__current_weights
        [3U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__output_weights[0U][2U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__current_weights
        [2U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__output_weights[0U][1U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__current_weights
        [1U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__output_weights[0U][0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__current_weights
        [0U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions[1U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions[2U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions[3U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction;
    BenchMLP__DOT__mlp__DOT____Vlvbound_h88070a8d__0 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__output_weights
        [0U][0U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__next_layer_weights_for_hidden[0U] 
        = BenchMLP__DOT__mlp__DOT____Vlvbound_h88070a8d__0;
    BenchMLP__DOT__mlp__DOT____Vlvbound_h9f34236c__0 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__output_weights
        [0U][1U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__next_layer_weights_for_hidden[0U] 
        = BenchMLP__DOT__mlp__DOT____Vlvbound_h9f34236c__0;
    BenchMLP__DOT__mlp__DOT____Vlvbound_h99200702__0 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__output_weights
        [0U][2U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__next_layer_weights_for_hidden[0U] 
        = BenchMLP__DOT__mlp__DOT____Vlvbound_h99200702__0;
    BenchMLP__DOT__mlp__DOT____Vlvbound_h6a8a73b0__0 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__output_weights
        [0U][3U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__next_layer_weights_for_hidden[0U] 
        = BenchMLP__DOT__mlp__DOT____Vlvbound_h6a8a73b0__0;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights
              [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
              [0U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights
              [1U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
              [1U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights
              [2U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
              [2U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
           + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights
              [3U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
              [3U]));
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__prediction 
        = ((0U == vlSelfRef.BenchMLP__DOT__output_activation)
            ? VL_ITOR_D_I(1, (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
                              > 0.0)) : ((1U == vlSelfRef.BenchMLP__DOT__output_activation)
                                          ? (1.0 / 
                                             (1.0 + 
                                              pow(2.71828182799999984e+00,
                                                  (- vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum))))
                                          : ((2U == vlSelfRef.BenchMLP__DOT__output_activation)
                                              ? ((2.0 
                                                  / 
                                                  (1.0 
                                                   + 
                                                   pow(2.71828182799999984e+00,
                                                       (-2.0 
                                                        * vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum)))) 
                                                 - 1.0)
                                              : ((3U 
                                                  == vlSelfRef.BenchMLP__DOT__output_activation)
                                                  ? 
                                                 ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
                                                   > 0.0)
                                                   ? vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum
                                                   : 0.0)
                                                  : vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum))));
    vlSelfRef.BenchMLP__DOT__prediction[0U] = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__prediction;
    vlSelfRef.BenchMLP__DOT__cost = (-1.0 * ((vlSelfRef.BenchMLP__DOT__expected
                                              [0U] 
                                              * log(
                                                    (1.00000000000000002e-08 
                                                     + 
                                                     vlSelfRef.BenchMLP__DOT__prediction
                                                     [0U]))) 
                                             + ((1.0 
                                                 - 
                                                 vlSelfRef.BenchMLP__DOT__expected
                                                 [0U]) 
                                                * log(
                                                      (1.00000000000000002e-08 
                                                       + 
                                                       (1.0 
                                                        - 
                                                        vlSelfRef.BenchMLP__DOT__prediction
                                                        [0U]))))));
    BenchMLP__DOT__mlp__DOT____Vlvbound_h362076de__0 
        = (- ((vlSelfRef.BenchMLP__DOT__expected[0U] 
               / (1.00000000000000002e-08 + vlSelfRef.BenchMLP__DOT__prediction
                  [0U])) - ((1.0 - vlSelfRef.BenchMLP__DOT__expected
                             [0U]) / (1.00000000000000002e-08 
                                      + (1.0 - vlSelfRef.BenchMLP__DOT__prediction
                                         [0U])))));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__activation_gradients[0U] 
        = BenchMLP__DOT__mlp__DOT____Vlvbound_h362076de__0;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__activation_gradients
        [0U];
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
        = ((1U == vlSelfRef.BenchMLP__DOT__output_activation)
            ? (0.0 + (((vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__next_layer_weights
                        [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer
                        [0U]) * vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__prediction) 
                      * (1.0 - vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__prediction)))
            : ((2U == vlSelfRef.BenchMLP__DOT__output_activation)
                ? (0.0 + ((vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__next_layer_weights
                           [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer
                           [0U]) * (1.0 - pow(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__prediction,2.0))))
                : ((3U == vlSelfRef.BenchMLP__DOT__output_activation)
                    ? (0.0 + (vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__next_layer_weights
                              [0U] * ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum 
                                       >= 0.0) ? vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer
                                      [0U] : 0.0)))
                    : 0.0)));
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[0U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
           [0U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[1U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
           [1U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[2U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
           [2U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[3U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions
           [3U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients[0U] 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient;
    if ((1U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + (((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__next_layer_weights_for_hidden
                        [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                        [0U]) * vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction) 
                      * (1.0 - vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction)));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + (((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__next_layer_weights_for_hidden
                        [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                        [0U]) * vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction) 
                      * (1.0 - vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction)));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + (((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__next_layer_weights_for_hidden
                        [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                        [0U]) * vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction) 
                      * (1.0 - vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction)));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + (((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__next_layer_weights_for_hidden
                        [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                        [0U]) * vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction) 
                      * (1.0 - vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction)));
    } else if ((2U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__next_layer_weights_for_hidden
                       [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                       [0U]) * (1.0 - pow(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction,2.0))));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__next_layer_weights_for_hidden
                       [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                       [0U]) * (1.0 - pow(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction,2.0))));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__next_layer_weights_for_hidden
                       [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                       [0U]) * (1.0 - pow(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction,2.0))));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__next_layer_weights_for_hidden
                       [0U] * vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                       [0U]) * (1.0 - pow(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction,2.0))));
    } else if ((3U == vlSelfRef.BenchMLP__DOT__hidden_activation)) {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__next_layer_weights_for_hidden
                      [0U] * ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum 
                               >= 0.0) ? vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                              [0U] : 0.0)));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__next_layer_weights_for_hidden
                      [0U] * ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum 
                               >= 0.0) ? vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                              [0U] : 0.0)));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__next_layer_weights_for_hidden
                      [0U] * ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum 
                               >= 0.0) ? vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                              [0U] : 0.0)));
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
            = (0.0 + (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__next_layer_weights_for_hidden
                      [0U] * ((vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum 
                               >= 0.0) ? vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients
                              [0U] : 0.0)));
    } else {
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0.0;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0.0;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0.0;
        vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient = 0.0;
    }
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__values[0U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__values[1U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__values[0U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__values[1U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__values[0U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__values[1U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weight_gradient[0U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__values[0U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weight_gradient[1U] 
        = (vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient 
           * vlSelfRef.BenchMLP__DOT__values[1U]);
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
    vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__error_gradient 
        = vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient;
}

void VPerceptron___024root___timing_commit(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___timing_commit\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd88d814d__0.commit(
                                                   "@(posedge BenchMLP.clk)");
    }
}

void VPerceptron___024root___timing_resume(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___timing_resume\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd88d814d__0.resume(
                                                   "@(posedge BenchMLP.clk)");
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
            VL_FATAL_MT("src/Benches/BenchMLP.sv", 3, "", "NBA region did not converge.");
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
                VL_FATAL_MT("src/Benches/BenchMLP.sv", 3, "", "Active region did not converge.");
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
