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
    vlSelfRef.BenchPerceptronIntroduction__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "src/Benches/BenchPerceptronIntroduction.sv", 
                                             44);
        vlSelfRef.BenchPerceptronIntroduction__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.BenchPerceptronIntroduction__DOT__clk)));
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
    QData/*63:0*/ __Vfunc_sfp_add__0__Vfuncout;
    __Vfunc_sfp_add__0__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_add__0__a;
    __Vfunc_sfp_add__0__a = 0;
    QData/*63:0*/ __Vfunc_sfp_add__0__b;
    __Vfunc_sfp_add__0__b = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__1__Vfuncout;
    __Vfunc_sfp_mul__1__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__1__a;
    __Vfunc_sfp_mul__1__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__1__b;
    __Vfunc_sfp_mul__1__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__1__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__1__tmp);
    QData/*63:0*/ __Vfunc_int_to_sfp__2__Vfuncout;
    __Vfunc_int_to_sfp__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_int_to_sfp__2__n;
    __Vfunc_int_to_sfp__2__n = 0;
    QData/*63:0*/ __Vfunc_sfp_sub__3__Vfuncout;
    __Vfunc_sfp_sub__3__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_sub__3__a;
    __Vfunc_sfp_sub__3__a = 0;
    QData/*63:0*/ __Vfunc_sfp_sub__3__b;
    __Vfunc_sfp_sub__3__b = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelfRef.BenchPerceptronIntroduction__DOT__expected 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data
        [(7U & vlSelfRef.BenchPerceptronIntroduction__DOT__example)];
    vlSelfRef.BenchPerceptronIntroduction__DOT__values[1U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
        [(7U & vlSelfRef.BenchPerceptronIntroduction__DOT__example)]
        [1U];
    vlSelfRef.BenchPerceptronIntroduction__DOT__values[0U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
        [(7U & vlSelfRef.BenchPerceptronIntroduction__DOT__example)]
        [0U];
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias;
    __Vfunc_sfp_mul__1__b = vlSelfRef.BenchPerceptronIntroduction__DOT__values
        [0U];
    __Vfunc_sfp_mul__1__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights
        [0U];
    VL_EXTENDS_WQ(128,64, __Vtemp_1, __Vfunc_sfp_mul__1__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_2, __Vfunc_sfp_mul__1__b);
    VL_MULS_WWW(128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__1__tmp, __Vtemp_3, 0x20U);
    __Vfunc_sfp_mul__1__Vfuncout = (((QData)((IData)(
                                                     __Vfunc_sfp_mul__1__tmp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 __Vfunc_sfp_mul__1__tmp[0U])));
    __Vfunc_sfp_add__0__b = __Vfunc_sfp_mul__1__Vfuncout;
    __Vfunc_sfp_add__0__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum;
    __Vfunc_sfp_add__0__Vfuncout = (__Vfunc_sfp_add__0__a 
                                    + __Vfunc_sfp_add__0__b);
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum 
        = __Vfunc_sfp_add__0__Vfuncout;
    __Vfunc_sfp_mul__1__b = vlSelfRef.BenchPerceptronIntroduction__DOT__values
        [1U];
    __Vfunc_sfp_mul__1__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights
        [1U];
    VL_EXTENDS_WQ(128,64, __Vtemp_4, __Vfunc_sfp_mul__1__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_5, __Vfunc_sfp_mul__1__b);
    VL_MULS_WWW(128, __Vtemp_6, __Vtemp_4, __Vtemp_5);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__1__tmp, __Vtemp_6, 0x20U);
    __Vfunc_sfp_mul__1__Vfuncout = (((QData)((IData)(
                                                     __Vfunc_sfp_mul__1__tmp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 __Vfunc_sfp_mul__1__tmp[0U])));
    __Vfunc_sfp_add__0__b = __Vfunc_sfp_mul__1__Vfuncout;
    __Vfunc_sfp_add__0__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum;
    __Vfunc_sfp_add__0__Vfuncout = (__Vfunc_sfp_add__0__a 
                                    + __Vfunc_sfp_add__0__b);
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum 
        = __Vfunc_sfp_add__0__Vfuncout;
    __Vfunc_int_to_sfp__2__n = VL_LTS_IQQ(64, 0ULL, vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum);
    __Vfunc_int_to_sfp__2__Vfuncout = VL_SHIFTL_QQI(64,64,32, 
                                                    VL_EXTENDS_QI(64,32, __Vfunc_int_to_sfp__2__n), 0x20U);
    vlSelfRef.BenchPerceptronIntroduction__DOT__prediction 
        = __Vfunc_int_to_sfp__2__Vfuncout;
    __Vfunc_sfp_sub__3__b = vlSelfRef.BenchPerceptronIntroduction__DOT__prediction;
    __Vfunc_sfp_sub__3__a = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data
        [(7U & vlSelfRef.BenchPerceptronIntroduction__DOT__example)];
    __Vfunc_sfp_sub__3__Vfuncout = (__Vfunc_sfp_sub__3__a 
                                    - __Vfunc_sfp_sub__3__b);
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error 
        = __Vfunc_sfp_sub__3__Vfuncout;
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
    QData/*63:0*/ __Vfunc_sfp_add__0__Vfuncout;
    __Vfunc_sfp_add__0__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_add__0__a;
    __Vfunc_sfp_add__0__a = 0;
    QData/*63:0*/ __Vfunc_sfp_add__0__b;
    __Vfunc_sfp_add__0__b = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__1__Vfuncout;
    __Vfunc_sfp_mul__1__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__1__a;
    __Vfunc_sfp_mul__1__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__1__b;
    __Vfunc_sfp_mul__1__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__1__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__1__tmp);
    QData/*63:0*/ __Vfunc_int_to_sfp__2__Vfuncout;
    __Vfunc_int_to_sfp__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_int_to_sfp__2__n;
    __Vfunc_int_to_sfp__2__n = 0;
    QData/*63:0*/ __Vfunc_sfp_sub__3__Vfuncout;
    __Vfunc_sfp_sub__3__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_sub__3__a;
    __Vfunc_sfp_sub__3__a = 0;
    QData/*63:0*/ __Vfunc_sfp_sub__3__b;
    __Vfunc_sfp_sub__3__b = 0;
    QData/*63:0*/ __Vfunc_sfp_add__4__Vfuncout;
    __Vfunc_sfp_add__4__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_add__4__a;
    __Vfunc_sfp_add__4__a = 0;
    QData/*63:0*/ __Vfunc_sfp_add__4__b;
    __Vfunc_sfp_add__4__b = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__5__Vfuncout;
    __Vfunc_sfp_mul__5__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__5__a;
    __Vfunc_sfp_mul__5__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__5__b;
    __Vfunc_sfp_mul__5__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__5__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__5__tmp);
    QData/*63:0*/ __Vfunc_sfp_mul__6__Vfuncout;
    __Vfunc_sfp_mul__6__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__6__a;
    __Vfunc_sfp_mul__6__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__6__b;
    __Vfunc_sfp_mul__6__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__6__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__6__tmp);
    QData/*63:0*/ __Vfunc_sfp_add__7__Vfuncout;
    __Vfunc_sfp_add__7__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_add__7__a;
    __Vfunc_sfp_add__7__a = 0;
    QData/*63:0*/ __Vfunc_sfp_add__7__b;
    __Vfunc_sfp_add__7__b = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__8__Vfuncout;
    __Vfunc_sfp_mul__8__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__8__a;
    __Vfunc_sfp_mul__8__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__8__b;
    __Vfunc_sfp_mul__8__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__8__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__8__tmp);
    QData/*63:0*/ __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias;
    __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias = 0;
    CData/*0:0*/ __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v0;
    __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v0 = 0;
    QData/*63:0*/ __VdlyVal__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v2;
    __VdlyVal__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v2 = 0;
    CData/*0:0*/ __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v2;
    __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v2 = 0;
    QData/*63:0*/ __VdlyVal__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v3;
    __VdlyVal__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v3 = 0;
    CData/*0:0*/ __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v3;
    __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v3 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_21;
    // Body
    __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias;
    __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v0 = 0U;
    __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v2 = 0U;
    __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v3 = 0U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__expected 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data
        [(7U & vlSelfRef.BenchPerceptronIntroduction__DOT__example)];
    if (vlSelfRef.BenchPerceptronIntroduction__DOT__rst) {
        vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk2__DOT__i = 2U;
        __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias = 0ULL;
        __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v0 = 1U;
    } else if (vlSelfRef.BenchPerceptronIntroduction__DOT__training) {
        __Vfunc_sfp_mul__8__b = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error;
        __Vfunc_sfp_mul__8__a = vlSelfRef.BenchPerceptronIntroduction__DOT__learning_rate;
        VL_EXTENDS_WQ(128,64, __Vtemp_1, __Vfunc_sfp_mul__8__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2, __Vfunc_sfp_mul__8__b);
        VL_MULS_WWW(128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
        VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__8__tmp, __Vtemp_3, 0x20U);
        __Vfunc_sfp_mul__8__Vfuncout = (((QData)((IData)(
                                                         __Vfunc_sfp_mul__8__tmp[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vfunc_sfp_mul__8__tmp[0U])));
        __Vfunc_sfp_add__7__b = __Vfunc_sfp_mul__8__Vfuncout;
        __Vfunc_sfp_add__7__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias;
        __Vfunc_sfp_add__7__Vfuncout = (__Vfunc_sfp_add__7__a 
                                        + __Vfunc_sfp_add__7__b);
        __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias 
            = __Vfunc_sfp_add__7__Vfuncout;
        __Vfunc_sfp_mul__6__b = vlSelfRef.BenchPerceptronIntroduction__DOT__values
            [0U];
        __Vfunc_sfp_mul__6__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error;
        VL_EXTENDS_WQ(128,64, __Vtemp_4, __Vfunc_sfp_mul__6__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_5, __Vfunc_sfp_mul__6__b);
        VL_MULS_WWW(128, __Vtemp_6, __Vtemp_4, __Vtemp_5);
        VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__6__tmp, __Vtemp_6, 0x20U);
        __Vfunc_sfp_mul__6__Vfuncout = (((QData)((IData)(
                                                         __Vfunc_sfp_mul__6__tmp[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vfunc_sfp_mul__6__tmp[0U])));
        __Vfunc_sfp_mul__5__b = __Vfunc_sfp_mul__6__Vfuncout;
        __Vfunc_sfp_mul__5__a = vlSelfRef.BenchPerceptronIntroduction__DOT__learning_rate;
        VL_EXTENDS_WQ(128,64, __Vtemp_7, __Vfunc_sfp_mul__5__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_8, __Vfunc_sfp_mul__5__b);
        VL_MULS_WWW(128, __Vtemp_9, __Vtemp_7, __Vtemp_8);
        VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__5__tmp, __Vtemp_9, 0x20U);
        __Vfunc_sfp_mul__5__Vfuncout = (((QData)((IData)(
                                                         __Vfunc_sfp_mul__5__tmp[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vfunc_sfp_mul__5__tmp[0U])));
        __Vfunc_sfp_add__4__b = __Vfunc_sfp_mul__5__Vfuncout;
        __Vfunc_sfp_add__4__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights
            [0U];
        __Vfunc_sfp_add__4__Vfuncout = (__Vfunc_sfp_add__4__a 
                                        + __Vfunc_sfp_add__4__b);
        __VdlyVal__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v2 
            = __Vfunc_sfp_add__4__Vfuncout;
        __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v2 = 1U;
        __Vfunc_sfp_mul__6__b = vlSelfRef.BenchPerceptronIntroduction__DOT__values
            [1U];
        __Vfunc_sfp_mul__6__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error;
        VL_EXTENDS_WQ(128,64, __Vtemp_10, __Vfunc_sfp_mul__6__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_11, __Vfunc_sfp_mul__6__b);
        VL_MULS_WWW(128, __Vtemp_12, __Vtemp_10, __Vtemp_11);
        VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__6__tmp, __Vtemp_12, 0x20U);
        __Vfunc_sfp_mul__6__Vfuncout = (((QData)((IData)(
                                                         __Vfunc_sfp_mul__6__tmp[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vfunc_sfp_mul__6__tmp[0U])));
        __Vfunc_sfp_mul__5__b = __Vfunc_sfp_mul__6__Vfuncout;
        __Vfunc_sfp_mul__5__a = vlSelfRef.BenchPerceptronIntroduction__DOT__learning_rate;
        VL_EXTENDS_WQ(128,64, __Vtemp_13, __Vfunc_sfp_mul__5__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_14, __Vfunc_sfp_mul__5__b);
        VL_MULS_WWW(128, __Vtemp_15, __Vtemp_13, __Vtemp_14);
        VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__5__tmp, __Vtemp_15, 0x20U);
        __Vfunc_sfp_mul__5__Vfuncout = (((QData)((IData)(
                                                         __Vfunc_sfp_mul__5__tmp[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vfunc_sfp_mul__5__tmp[0U])));
        __Vfunc_sfp_add__4__b = __Vfunc_sfp_mul__5__Vfuncout;
        __Vfunc_sfp_add__4__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights
            [1U];
        __Vfunc_sfp_add__4__Vfuncout = (__Vfunc_sfp_add__4__a 
                                        + __Vfunc_sfp_add__4__b);
        __VdlyVal__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v3 
            = __Vfunc_sfp_add__4__Vfuncout;
        __VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v3 = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.BenchPerceptronIntroduction__DOT__rst)))) {
        if (vlSelfRef.BenchPerceptronIntroduction__DOT__training) {
            vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk3__DOT__i = 2U;
        }
    }
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias 
        = __Vdly__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias;
    vlSelfRef.BenchPerceptronIntroduction__DOT__values[1U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
        [(7U & vlSelfRef.BenchPerceptronIntroduction__DOT__example)]
        [1U];
    vlSelfRef.BenchPerceptronIntroduction__DOT__values[0U] 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
        [(7U & vlSelfRef.BenchPerceptronIntroduction__DOT__example)]
        [0U];
    if (__VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v0) {
        vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[0U] = 0ULL;
        vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[1U] = 0ULL;
    }
    if (__VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v2) {
        vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[0U] 
            = __VdlyVal__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v2;
    }
    if (__VdlySet__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v3) {
        vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[1U] 
            = __VdlyVal__BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights__v3;
    }
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias;
    __Vfunc_sfp_mul__1__b = vlSelfRef.BenchPerceptronIntroduction__DOT__values
        [0U];
    __Vfunc_sfp_mul__1__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights
        [0U];
    VL_EXTENDS_WQ(128,64, __Vtemp_16, __Vfunc_sfp_mul__1__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_17, __Vfunc_sfp_mul__1__b);
    VL_MULS_WWW(128, __Vtemp_18, __Vtemp_16, __Vtemp_17);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__1__tmp, __Vtemp_18, 0x20U);
    __Vfunc_sfp_mul__1__Vfuncout = (((QData)((IData)(
                                                     __Vfunc_sfp_mul__1__tmp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 __Vfunc_sfp_mul__1__tmp[0U])));
    __Vfunc_sfp_add__0__b = __Vfunc_sfp_mul__1__Vfuncout;
    __Vfunc_sfp_add__0__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum;
    __Vfunc_sfp_add__0__Vfuncout = (__Vfunc_sfp_add__0__a 
                                    + __Vfunc_sfp_add__0__b);
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum 
        = __Vfunc_sfp_add__0__Vfuncout;
    __Vfunc_sfp_mul__1__b = vlSelfRef.BenchPerceptronIntroduction__DOT__values
        [1U];
    __Vfunc_sfp_mul__1__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights
        [1U];
    VL_EXTENDS_WQ(128,64, __Vtemp_19, __Vfunc_sfp_mul__1__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_20, __Vfunc_sfp_mul__1__b);
    VL_MULS_WWW(128, __Vtemp_21, __Vtemp_19, __Vtemp_20);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__1__tmp, __Vtemp_21, 0x20U);
    __Vfunc_sfp_mul__1__Vfuncout = (((QData)((IData)(
                                                     __Vfunc_sfp_mul__1__tmp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 __Vfunc_sfp_mul__1__tmp[0U])));
    __Vfunc_sfp_add__0__b = __Vfunc_sfp_mul__1__Vfuncout;
    __Vfunc_sfp_add__0__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum;
    __Vfunc_sfp_add__0__Vfuncout = (__Vfunc_sfp_add__0__a 
                                    + __Vfunc_sfp_add__0__b);
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum 
        = __Vfunc_sfp_add__0__Vfuncout;
    __Vfunc_int_to_sfp__2__n = VL_LTS_IQQ(64, 0ULL, vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum);
    __Vfunc_int_to_sfp__2__Vfuncout = VL_SHIFTL_QQI(64,64,32, 
                                                    VL_EXTENDS_QI(64,32, __Vfunc_int_to_sfp__2__n), 0x20U);
    vlSelfRef.BenchPerceptronIntroduction__DOT__prediction 
        = __Vfunc_int_to_sfp__2__Vfuncout;
    __Vfunc_sfp_sub__3__b = vlSelfRef.BenchPerceptronIntroduction__DOT__prediction;
    __Vfunc_sfp_sub__3__a = vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data
        [(7U & vlSelfRef.BenchPerceptronIntroduction__DOT__example)];
    __Vfunc_sfp_sub__3__Vfuncout = (__Vfunc_sfp_sub__3__a 
                                    - __Vfunc_sfp_sub__3__b);
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error 
        = __Vfunc_sfp_sub__3__Vfuncout;
}

void VPerceptron___024root___timing_commit(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___timing_commit\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h7b9e73b7__0.commit(
                                                   "@(posedge BenchPerceptronIntroduction.clk)");
    }
}

void VPerceptron___024root___timing_resume(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___timing_resume\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h7b9e73b7__0.resume(
                                                   "@(posedge BenchPerceptronIntroduction.clk)");
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
