// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron___024root.h"

VL_ATTR_COLD void VPerceptron___024root___eval_static__TOP(VPerceptron___024root* vlSelf);
VL_ATTR_COLD void VPerceptron___024root____Vm_traceActivitySetAll(VPerceptron___024root* vlSelf);

VL_ATTR_COLD void VPerceptron___024root___eval_static(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_static\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VPerceptron___024root___eval_static__TOP(vlSelf);
    VPerceptron___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__BenchPerceptronIntroduction__DOT__clk__0 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__BenchPerceptronIntroduction__DOT__done_training__0 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__done_training;
}

VL_ATTR_COLD void VPerceptron___024root___eval_static__TOP(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_static__TOP\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__epoch_count = 0U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx = 0U;
}

VL_ATTR_COLD void VPerceptron___024root___eval_initial__TOP(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_initial__TOP\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[0U] = 0ULL;
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[1U] = 0ULL;
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias = 0ULL;
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state = 0U;
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
            VL_FATAL_MT("src/Benches/BenchPerceptronIntroduction.sv", 4, "", "Settle region did not converge.");
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

VL_ATTR_COLD void VPerceptron___024root___eval_stl(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_stl\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPerceptron___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VPerceptron___024root___stl_sequent__TOP__0(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___stl_sequent__TOP__0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vfunc_sfp_add__1__Vfuncout;
    __Vfunc_sfp_add__1__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_add__1__a;
    __Vfunc_sfp_add__1__a = 0;
    QData/*63:0*/ __Vfunc_sfp_add__1__b;
    __Vfunc_sfp_add__1__b = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__2__Vfuncout;
    __Vfunc_sfp_mul__2__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__2__a;
    __Vfunc_sfp_mul__2__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__2__b;
    __Vfunc_sfp_mul__2__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__2__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__2__tmp);
    QData/*63:0*/ __Vfunc_sfp_add__3__Vfuncout;
    __Vfunc_sfp_add__3__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_add__3__a;
    __Vfunc_sfp_add__3__a = 0;
    QData/*63:0*/ __Vfunc_sfp_add__3__b;
    __Vfunc_sfp_add__3__b = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__4__Vfuncout;
    __Vfunc_sfp_mul__4__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__4__a;
    __Vfunc_sfp_mul__4__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__4__b;
    __Vfunc_sfp_mul__4__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__4__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__4__tmp);
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
    // Body
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias;
    __Vfunc_sfp_mul__2__b = vlSelfRef.BenchPerceptronIntroduction__DOT__values
        [0U];
    __Vfunc_sfp_mul__2__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights
        [0U];
    VL_EXTENDS_WQ(128,64, __Vtemp_1, __Vfunc_sfp_mul__2__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_2, __Vfunc_sfp_mul__2__b);
    VL_MULS_WWW(128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__2__tmp, __Vtemp_3, 0x20U);
    __Vfunc_sfp_mul__2__Vfuncout = (((QData)((IData)(
                                                     __Vfunc_sfp_mul__2__tmp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 __Vfunc_sfp_mul__2__tmp[0U])));
    __Vfunc_sfp_add__1__b = __Vfunc_sfp_mul__2__Vfuncout;
    __Vfunc_sfp_add__1__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum;
    __Vfunc_sfp_add__1__Vfuncout = (__Vfunc_sfp_add__1__a 
                                    + __Vfunc_sfp_add__1__b);
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum 
        = __Vfunc_sfp_add__1__Vfuncout;
    __Vfunc_sfp_mul__2__b = vlSelfRef.BenchPerceptronIntroduction__DOT__values
        [1U];
    __Vfunc_sfp_mul__2__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights
        [1U];
    VL_EXTENDS_WQ(128,64, __Vtemp_4, __Vfunc_sfp_mul__2__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_5, __Vfunc_sfp_mul__2__b);
    VL_MULS_WWW(128, __Vtemp_6, __Vtemp_4, __Vtemp_5);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__2__tmp, __Vtemp_6, 0x20U);
    __Vfunc_sfp_mul__2__Vfuncout = (((QData)((IData)(
                                                     __Vfunc_sfp_mul__2__tmp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 __Vfunc_sfp_mul__2__tmp[0U])));
    __Vfunc_sfp_add__1__b = __Vfunc_sfp_mul__2__Vfuncout;
    __Vfunc_sfp_add__1__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum;
    __Vfunc_sfp_add__1__Vfuncout = (__Vfunc_sfp_add__1__a 
                                    + __Vfunc_sfp_add__1__b);
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum 
        = __Vfunc_sfp_add__1__Vfuncout;
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias;
    __Vfunc_sfp_mul__4__b = vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
        [(3U & vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx)]
        [0U];
    __Vfunc_sfp_mul__4__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights
        [0U];
    VL_EXTENDS_WQ(128,64, __Vtemp_7, __Vfunc_sfp_mul__4__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_8, __Vfunc_sfp_mul__4__b);
    VL_MULS_WWW(128, __Vtemp_9, __Vtemp_7, __Vtemp_8);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__4__tmp, __Vtemp_9, 0x20U);
    __Vfunc_sfp_mul__4__Vfuncout = (((QData)((IData)(
                                                     __Vfunc_sfp_mul__4__tmp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 __Vfunc_sfp_mul__4__tmp[0U])));
    __Vfunc_sfp_add__3__b = __Vfunc_sfp_mul__4__Vfuncout;
    __Vfunc_sfp_add__3__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum;
    __Vfunc_sfp_add__3__Vfuncout = (__Vfunc_sfp_add__3__a 
                                    + __Vfunc_sfp_add__3__b);
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum 
        = __Vfunc_sfp_add__3__Vfuncout;
    __Vfunc_sfp_mul__4__b = vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
        [(3U & vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx)]
        [1U];
    __Vfunc_sfp_mul__4__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights
        [1U];
    VL_EXTENDS_WQ(128,64, __Vtemp_10, __Vfunc_sfp_mul__4__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_11, __Vfunc_sfp_mul__4__b);
    VL_MULS_WWW(128, __Vtemp_12, __Vtemp_10, __Vtemp_11);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__4__tmp, __Vtemp_12, 0x20U);
    __Vfunc_sfp_mul__4__Vfuncout = (((QData)((IData)(
                                                     __Vfunc_sfp_mul__4__tmp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 __Vfunc_sfp_mul__4__tmp[0U])));
    __Vfunc_sfp_add__3__b = __Vfunc_sfp_mul__4__Vfuncout;
    __Vfunc_sfp_add__3__a = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum;
    __Vfunc_sfp_add__3__Vfuncout = (__Vfunc_sfp_add__3__a 
                                    + __Vfunc_sfp_add__3__b);
    vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum 
        = __Vfunc_sfp_add__3__Vfuncout;
    if ((0U == vlSelfRef.BenchPerceptronIntroduction__DOT__activation)) {
        vlSelfRef.BenchPerceptronIntroduction__DOT__prediction 
            = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum;
        vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_prediction 
            = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum;
    } else if ((1U == vlSelfRef.BenchPerceptronIntroduction__DOT__activation)) {
        vlSelfRef.__Vfunc_int_to_sfp__11__n = VL_LTS_IQQ(64, 0ULL, vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum);
        vlSelfRef.__Vfunc_int_to_sfp__11__Vfuncout 
            = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__11__n), 0x20U);
        vlSelfRef.BenchPerceptronIntroduction__DOT__prediction 
            = vlSelfRef.__Vfunc_int_to_sfp__11__Vfuncout;
        vlSelfRef.__Vfunc_int_to_sfp__13__n = VL_LTS_IQQ(64, 0ULL, vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum);
        vlSelfRef.__Vfunc_int_to_sfp__13__Vfuncout 
            = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__13__n), 0x20U);
        vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_prediction 
            = vlSelfRef.__Vfunc_int_to_sfp__13__Vfuncout;
    } else if ((2U == vlSelfRef.BenchPerceptronIntroduction__DOT__activation)) {
        vlSelfRef.__Vfunc_int_to_sfp__12__n = (IData)(
                                                      (VL_LTS_IQQ(64, 0ULL, vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum)
                                                        ? vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum
                                                        : 0ULL));
        vlSelfRef.__Vfunc_int_to_sfp__12__Vfuncout 
            = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__12__n), 0x20U);
        vlSelfRef.BenchPerceptronIntroduction__DOT__prediction 
            = vlSelfRef.__Vfunc_int_to_sfp__12__Vfuncout;
        vlSelfRef.__Vfunc_int_to_sfp__14__n = (IData)(
                                                      (VL_LTS_IQQ(64, 0ULL, vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum)
                                                        ? vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum
                                                        : 0ULL));
        vlSelfRef.__Vfunc_int_to_sfp__14__Vfuncout 
            = VL_SHIFTL_QQI(64,64,32, VL_EXTENDS_QI(64,32, vlSelfRef.__Vfunc_int_to_sfp__14__n), 0x20U);
        vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_prediction 
            = vlSelfRef.__Vfunc_int_to_sfp__14__Vfuncout;
    } else {
        vlSelfRef.BenchPerceptronIntroduction__DOT__prediction 
            = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum;
        vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_prediction 
            = vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum;
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
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( BenchPerceptronIntroduction.done_training)\n");
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
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( BenchPerceptronIntroduction.done_training)\n");
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
}

VL_ATTR_COLD void VPerceptron___024root___ctor_var_reset(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___ctor_var_reset\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->BenchPerceptronIntroduction__DOT__ONE = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptronIntroduction__DOT__clk = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchPerceptronIntroduction__DOT__values[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchPerceptronIntroduction__DOT__activation = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__prediction = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptronIntroduction__DOT__done_training = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__learning_rate = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->BenchPerceptronIntroduction__DOT__train_values[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BenchPerceptronIntroduction__DOT__expected[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_prediction = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__epoch_count = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__training_active = VL_RAND_RESET_I(1);
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->__Vfunc_int_to_sfp__11__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__11__n = 0;
    vlSelf->__Vfunc_int_to_sfp__12__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__12__n = 0;
    vlSelf->__Vfunc_int_to_sfp__13__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__13__n = 0;
    vlSelf->__Vfunc_int_to_sfp__14__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_int_to_sfp__14__n = 0;
    vlSelf->__Vtrigprevexpr___TOP__BenchPerceptronIntroduction__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__BenchPerceptronIntroduction__DOT__done_training__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
