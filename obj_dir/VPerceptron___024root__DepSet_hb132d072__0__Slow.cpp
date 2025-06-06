// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron___024root.h"

VL_ATTR_COLD void VPerceptron___024root___eval_static(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_static\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__BenchPerceptron__DOT__clk__0 
        = vlSelfRef.BenchPerceptron__DOT__clk;
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
            VL_FATAL_MT("src/Benches/BenchPerceptron.sv", 5, "", "Settle region did not converge.");
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
VL_ATTR_COLD void VPerceptron___024root____Vm_traceActivitySetAll(VPerceptron___024root* vlSelf);

VL_ATTR_COLD void VPerceptron___024root___eval_stl(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_stl\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPerceptron___024root___stl_sequent__TOP__0(vlSelf);
        VPerceptron___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VPerceptron___024root___stl_sequent__TOP__0(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___stl_sequent__TOP__0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vfunc_sfp_sub__0__Vfuncout;
    __Vfunc_sfp_sub__0__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_sub__0__a;
    __Vfunc_sfp_sub__0__a = 0;
    QData/*63:0*/ __Vfunc_sfp_sub__0__b;
    __Vfunc_sfp_sub__0__b = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__1__Vfuncout;
    __Vfunc_sfp_mul__1__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__1__a;
    __Vfunc_sfp_mul__1__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__1__b;
    __Vfunc_sfp_mul__1__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__1__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__1__tmp);
    QData/*63:0*/ __Vfunc_sfp_sub__2__Vfuncout;
    __Vfunc_sfp_sub__2__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_sub__2__a;
    __Vfunc_sfp_sub__2__a = 0;
    QData/*63:0*/ __Vfunc_sfp_sub__2__b;
    __Vfunc_sfp_sub__2__b = 0;
    QData/*63:0*/ __Vfunc_sfp_add__11__Vfuncout;
    __Vfunc_sfp_add__11__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_add__11__a;
    __Vfunc_sfp_add__11__a = 0;
    QData/*63:0*/ __Vfunc_sfp_add__11__b;
    __Vfunc_sfp_add__11__b = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__12__Vfuncout;
    __Vfunc_sfp_mul__12__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__12__a;
    __Vfunc_sfp_mul__12__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__12__b;
    __Vfunc_sfp_mul__12__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__12__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__12__tmp);
    QData/*63:0*/ __Vfunc_sfp_mul__26__Vfuncout;
    __Vfunc_sfp_mul__26__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__26__a;
    __Vfunc_sfp_mul__26__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__26__b;
    __Vfunc_sfp_mul__26__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__26__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__26__tmp);
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
    VlWide<4>/*127:0*/ __Vtemp_22;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_26;
    VlWide<4>/*127:0*/ __Vtemp_27;
    VlWide<4>/*127:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_30;
    VlWide<4>/*127:0*/ __Vtemp_31;
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_33;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_35;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_37;
    VlWide<4>/*127:0*/ __Vtemp_38;
    VlWide<4>/*127:0*/ __Vtemp_39;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_41;
    VlWide<4>/*127:0*/ __Vtemp_42;
    VlWide<4>/*127:0*/ __Vtemp_43;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_45;
    // Body
    vlSelfRef.BenchPerceptron__DOT__current_weights[0U] 
        = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights
        [0U];
    vlSelfRef.BenchPerceptron__DOT__current_weights[1U] 
        = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights
        [1U];
    if ((1U != vlSelfRef.BenchPerceptron__DOT__activation)) {
        if ((2U == vlSelfRef.BenchPerceptron__DOT__activation)) {
            vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk5__DOT__i = 1U;
        }
        if ((2U != vlSelfRef.BenchPerceptron__DOT__activation)) {
            if ((3U == vlSelfRef.BenchPerceptron__DOT__activation)) {
                vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk7__DOT__i = 1U;
            }
        }
    }
    vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum 
        = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias;
    __Vfunc_sfp_mul__12__b = vlSelfRef.BenchPerceptron__DOT__values
        [0U];
    __Vfunc_sfp_mul__12__a = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights
        [0U];
    VL_EXTENDS_WQ(128,64, __Vtemp_1, __Vfunc_sfp_mul__12__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_2, __Vfunc_sfp_mul__12__b);
    VL_MULS_WWW(128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__12__tmp, __Vtemp_3, 0x20U);
    __Vfunc_sfp_mul__12__Vfuncout = (((QData)((IData)(
                                                      __Vfunc_sfp_mul__12__tmp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vfunc_sfp_mul__12__tmp[0U])));
    __Vfunc_sfp_add__11__b = __Vfunc_sfp_mul__12__Vfuncout;
    __Vfunc_sfp_add__11__a = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum;
    __Vfunc_sfp_add__11__Vfuncout = (__Vfunc_sfp_add__11__a 
                                     + __Vfunc_sfp_add__11__b);
    vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum 
        = __Vfunc_sfp_add__11__Vfuncout;
    __Vfunc_sfp_mul__12__b = vlSelfRef.BenchPerceptron__DOT__values
        [1U];
    __Vfunc_sfp_mul__12__a = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights
        [1U];
    VL_EXTENDS_WQ(128,64, __Vtemp_4, __Vfunc_sfp_mul__12__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_5, __Vfunc_sfp_mul__12__b);
    VL_MULS_WWW(128, __Vtemp_6, __Vtemp_4, __Vtemp_5);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__12__tmp, __Vtemp_6, 0x20U);
    __Vfunc_sfp_mul__12__Vfuncout = (((QData)((IData)(
                                                      __Vfunc_sfp_mul__12__tmp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vfunc_sfp_mul__12__tmp[0U])));
    __Vfunc_sfp_add__11__b = __Vfunc_sfp_mul__12__Vfuncout;
    __Vfunc_sfp_add__11__a = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum;
    __Vfunc_sfp_add__11__Vfuncout = (__Vfunc_sfp_add__11__a 
                                     + __Vfunc_sfp_add__11__b);
    vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum 
        = __Vfunc_sfp_add__11__Vfuncout;
    if ((1U == vlSelfRef.BenchPerceptron__DOT__activation)) {
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk3__DOT__i = 1U;
    }
    if (VL_LTES_IQQ(64, 0x500000000ULL, vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum)) {
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__predict__DOT__sigmoid_out = 0x100000000ULL;
    } else if (VL_GTES_IQQ(64, 0xfffffffb00000000ULL, vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum)) {
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__predict__DOT__sigmoid_out = 0ULL;
    } else {
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__predict__DOT__sigmoid_out 
            = (0x80000000ULL + ([&]() {
                    vlSelfRef.__Vfunc_sfp_mul__35__a 
                        = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum;
                    __Vtemp_7[0U] = 0x20000000U;
                    __Vtemp_7[1U] = 0U;
                    __Vtemp_7[2U] = 0U;
                    __Vtemp_7[3U] = 0U;
                    VL_EXTENDS_WQ(128,64, __Vtemp_8, vlSelfRef.__Vfunc_sfp_mul__35__a);
                    VL_MULS_WWW(128, __Vtemp_9, __Vtemp_7, __Vtemp_8);
                    VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__35__tmp, __Vtemp_9, 0x20U);
                    vlSelfRef.__Vfunc_sfp_mul__35__Vfuncout 
                        = (((QData)((IData)(vlSelfRef.__Vfunc_sfp_mul__35__tmp[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.__Vfunc_sfp_mul__35__tmp[0U])));
                }(), vlSelfRef.__Vfunc_sfp_mul__35__Vfuncout));
        if (VL_LTS_IQQ(64, 0x100000000ULL, vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__predict__DOT__sigmoid_out)) {
            vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__predict__DOT__sigmoid_out = 0x100000000ULL;
        }
        if (VL_GTS_IQQ(64, 0ULL, vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__predict__DOT__sigmoid_out)) {
            vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__predict__DOT__sigmoid_out = 0ULL;
        }
    }
    if (VL_LTES_IQQ(64, 0x300000000ULL, vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum)) {
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__predict__DOT__tanh_out = 0x100000000ULL;
    } else if (VL_GTES_IQQ(64, 0xfffffffd00000000ULL, vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum)) {
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__predict__DOT__tanh_out = 0xffffffff00000000ULL;
    } else {
        vlSelfRef.__Vfunc_sfp_mul__40__a = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum;
        __Vtemp_10[0U] = 0x80000000U;
        __Vtemp_10[1U] = 0U;
        __Vtemp_10[2U] = 0U;
        __Vtemp_10[3U] = 0U;
        VL_EXTENDS_WQ(128,64, __Vtemp_11, vlSelfRef.__Vfunc_sfp_mul__40__a);
        VL_MULS_WWW(128, __Vtemp_12, __Vtemp_10, __Vtemp_11);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__40__tmp, __Vtemp_12, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__40__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__40__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__40__tmp[0U])));
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__predict__DOT__tanh_out 
            = vlSelfRef.__Vfunc_sfp_mul__40__Vfuncout;
        if (VL_LTS_IQQ(64, 0x100000000ULL, vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__predict__DOT__tanh_out)) {
            vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__predict__DOT__tanh_out = 0x100000000ULL;
        }
        if (VL_GTS_IQQ(64, 0xffffffff00000000ULL, vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__predict__DOT__tanh_out)) {
            vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__predict__DOT__tanh_out = 0xffffffff00000000ULL;
        }
    }
    vlSelfRef.BenchPerceptron__DOT__prediction = ((1U 
                                                   == vlSelfRef.BenchPerceptron__DOT__activation)
                                                   ? vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__predict__DOT__sigmoid_out
                                                   : 
                                                  ((2U 
                                                    == vlSelfRef.BenchPerceptron__DOT__activation)
                                                    ? vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__predict__DOT__tanh_out
                                                    : 
                                                   ((3U 
                                                     == vlSelfRef.BenchPerceptron__DOT__activation)
                                                     ? 
                                                    (VL_LTS_IQQ(64, 0ULL, vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum)
                                                      ? vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum
                                                      : 0ULL)
                                                     : 
                                                    ((0U 
                                                      == vlSelfRef.BenchPerceptron__DOT__activation)
                                                      ? 
                                                     (VL_LTS_IQQ(64, 0ULL, vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum)
                                                       ? 0x100000000ULL
                                                       : 0ULL)
                                                      : 0ULL))));
    __Vfunc_sfp_sub__0__b = vlSelfRef.BenchPerceptron__DOT__prediction;
    __Vfunc_sfp_sub__0__a = vlSelfRef.BenchPerceptron__DOT__expected;
    __Vfunc_sfp_sub__0__Vfuncout = (__Vfunc_sfp_sub__0__a 
                                    - __Vfunc_sfp_sub__0__b);
    vlSelfRef.BenchPerceptron__DOT__unnamedblk1__DOT__diff 
        = __Vfunc_sfp_sub__0__Vfuncout;
    __Vfunc_sfp_mul__1__b = vlSelfRef.BenchPerceptron__DOT__unnamedblk1__DOT__diff;
    __Vfunc_sfp_mul__1__a = vlSelfRef.BenchPerceptron__DOT__unnamedblk1__DOT__diff;
    VL_EXTENDS_WQ(128,64, __Vtemp_13, __Vfunc_sfp_mul__1__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_14, __Vfunc_sfp_mul__1__b);
    VL_MULS_WWW(128, __Vtemp_15, __Vtemp_13, __Vtemp_14);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__1__tmp, __Vtemp_15, 0x20U);
    __Vfunc_sfp_mul__1__Vfuncout = (((QData)((IData)(
                                                     __Vfunc_sfp_mul__1__tmp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 __Vfunc_sfp_mul__1__tmp[0U])));
    vlSelfRef.BenchPerceptron__DOT__cost = __Vfunc_sfp_mul__1__Vfuncout;
    __Vfunc_sfp_sub__2__b = vlSelfRef.BenchPerceptron__DOT__expected;
    __Vfunc_sfp_sub__2__a = vlSelfRef.BenchPerceptron__DOT__prediction;
    __Vfunc_sfp_sub__2__Vfuncout = (__Vfunc_sfp_sub__2__a 
                                    - __Vfunc_sfp_sub__2__b);
    vlSelfRef.BenchPerceptron__DOT__error_gradient_next_layer[0U] 
        = __Vfunc_sfp_sub__2__Vfuncout;
    vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient = 0ULL;
    if ((1U == vlSelfRef.BenchPerceptron__DOT__activation)) {
        vlSelfRef.__Vfunc_sfp_sub__14__b = vlSelfRef.BenchPerceptron__DOT__prediction;
        vlSelfRef.__Vfunc_sfp_sub__14__Vfuncout = (0x100000000ULL 
                                                   - vlSelfRef.__Vfunc_sfp_sub__14__b);
        vlSelfRef.__Vfunc_sfp_mul__13__b = vlSelfRef.__Vfunc_sfp_sub__14__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__13__a = vlSelfRef.BenchPerceptron__DOT__prediction;
        VL_EXTENDS_WQ(128,64, __Vtemp_16, vlSelfRef.__Vfunc_sfp_mul__13__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_17, vlSelfRef.__Vfunc_sfp_mul__13__b);
        VL_MULS_WWW(128, __Vtemp_18, __Vtemp_16, __Vtemp_17);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__13__tmp, __Vtemp_18, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__13__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__13__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__13__tmp[0U])));
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sigmoid_derivative 
            = vlSelfRef.__Vfunc_sfp_mul__13__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__16__b = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sigmoid_derivative;
        vlSelfRef.__Vfunc_sfp_mul__17__b = vlSelfRef.BenchPerceptron__DOT__error_gradient_next_layer
            [0U];
        vlSelfRef.__Vfunc_sfp_mul__17__a = vlSelfRef.BenchPerceptron__DOT__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_19, vlSelfRef.__Vfunc_sfp_mul__17__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_20, vlSelfRef.__Vfunc_sfp_mul__17__b);
        VL_MULS_WWW(128, __Vtemp_21, __Vtemp_19, __Vtemp_20);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__17__tmp, __Vtemp_21, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__17__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__17__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__17__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__16__a = vlSelfRef.__Vfunc_sfp_mul__17__Vfuncout;
        VL_EXTENDS_WQ(128,64, __Vtemp_22, vlSelfRef.__Vfunc_sfp_mul__16__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_23, vlSelfRef.__Vfunc_sfp_mul__16__b);
        VL_MULS_WWW(128, __Vtemp_24, __Vtemp_22, __Vtemp_23);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__16__tmp, __Vtemp_24, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__16__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__16__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__16__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__15__b = vlSelfRef.__Vfunc_sfp_mul__16__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__15__a = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__15__Vfuncout = (vlSelfRef.__Vfunc_sfp_add__15__a 
                                                   + vlSelfRef.__Vfunc_sfp_add__15__b);
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__15__Vfuncout;
    } else if ((2U == vlSelfRef.BenchPerceptron__DOT__activation)) {
        vlSelfRef.__Vfunc_sfp_mul__19__b = vlSelfRef.BenchPerceptron__DOT__prediction;
        vlSelfRef.__Vfunc_sfp_mul__19__a = vlSelfRef.BenchPerceptron__DOT__prediction;
        VL_EXTENDS_WQ(128,64, __Vtemp_25, vlSelfRef.__Vfunc_sfp_mul__19__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_26, vlSelfRef.__Vfunc_sfp_mul__19__b);
        VL_MULS_WWW(128, __Vtemp_27, __Vtemp_25, __Vtemp_26);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__19__tmp, __Vtemp_27, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__19__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__19__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__19__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_sub__18__b = vlSelfRef.__Vfunc_sfp_mul__19__Vfuncout;
        vlSelfRef.__Vfunc_sfp_sub__18__Vfuncout = (0x100000000ULL 
                                                   - vlSelfRef.__Vfunc_sfp_sub__18__b);
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk5__DOT__unnamedblk6__DOT__tanh_derivative 
            = vlSelfRef.__Vfunc_sfp_sub__18__Vfuncout;
        vlSelfRef.__Vfunc_sfp_mul__21__b = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk5__DOT__unnamedblk6__DOT__tanh_derivative;
        vlSelfRef.__Vfunc_sfp_mul__22__b = vlSelfRef.BenchPerceptron__DOT__error_gradient_next_layer
            [0U];
        vlSelfRef.__Vfunc_sfp_mul__22__a = vlSelfRef.BenchPerceptron__DOT__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_28, vlSelfRef.__Vfunc_sfp_mul__22__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_29, vlSelfRef.__Vfunc_sfp_mul__22__b);
        VL_MULS_WWW(128, __Vtemp_30, __Vtemp_28, __Vtemp_29);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__22__tmp, __Vtemp_30, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__22__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__22__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__22__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__21__a = vlSelfRef.__Vfunc_sfp_mul__22__Vfuncout;
        VL_EXTENDS_WQ(128,64, __Vtemp_31, vlSelfRef.__Vfunc_sfp_mul__21__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_32, vlSelfRef.__Vfunc_sfp_mul__21__b);
        VL_MULS_WWW(128, __Vtemp_33, __Vtemp_31, __Vtemp_32);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__21__tmp, __Vtemp_33, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__21__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__21__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__21__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__20__b = vlSelfRef.__Vfunc_sfp_mul__21__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__20__a = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__20__Vfuncout = (vlSelfRef.__Vfunc_sfp_add__20__a 
                                                   + vlSelfRef.__Vfunc_sfp_add__20__b);
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__20__Vfuncout;
    } else if ((3U == vlSelfRef.BenchPerceptron__DOT__activation)) {
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk7__DOT__unnamedblk8__DOT__relu_derivative 
            = (VL_LTES_IQQ(64, 0ULL, vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum)
                ? 0x100000000ULL : 0ULL);
        vlSelfRef.__Vfunc_sfp_mul__24__b = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk7__DOT__unnamedblk8__DOT__relu_derivative;
        vlSelfRef.__Vfunc_sfp_mul__25__b = vlSelfRef.BenchPerceptron__DOT__error_gradient_next_layer
            [0U];
        vlSelfRef.__Vfunc_sfp_mul__25__a = vlSelfRef.BenchPerceptron__DOT__next_layer_weights
            [0U];
        VL_EXTENDS_WQ(128,64, __Vtemp_34, vlSelfRef.__Vfunc_sfp_mul__25__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_35, vlSelfRef.__Vfunc_sfp_mul__25__b);
        VL_MULS_WWW(128, __Vtemp_36, __Vtemp_34, __Vtemp_35);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__25__tmp, __Vtemp_36, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__25__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__25__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__25__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_mul__24__a = vlSelfRef.__Vfunc_sfp_mul__25__Vfuncout;
        VL_EXTENDS_WQ(128,64, __Vtemp_37, vlSelfRef.__Vfunc_sfp_mul__24__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_38, vlSelfRef.__Vfunc_sfp_mul__24__b);
        VL_MULS_WWW(128, __Vtemp_39, __Vtemp_37, __Vtemp_38);
        VL_SHIFTRS_WWI(128,128,32, vlSelfRef.__Vfunc_sfp_mul__24__tmp, __Vtemp_39, 0x20U);
        vlSelfRef.__Vfunc_sfp_mul__24__Vfuncout = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__Vfunc_sfp_mul__24__tmp[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__Vfunc_sfp_mul__24__tmp[0U])));
        vlSelfRef.__Vfunc_sfp_add__23__b = vlSelfRef.__Vfunc_sfp_mul__24__Vfuncout;
        vlSelfRef.__Vfunc_sfp_add__23__a = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient;
        vlSelfRef.__Vfunc_sfp_add__23__Vfuncout = (vlSelfRef.__Vfunc_sfp_add__23__a 
                                                   + vlSelfRef.__Vfunc_sfp_add__23__b);
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient 
            = vlSelfRef.__Vfunc_sfp_add__23__Vfuncout;
    } else {
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient = 0ULL;
    }
    __Vfunc_sfp_mul__26__b = vlSelfRef.BenchPerceptron__DOT__values
        [0U];
    __Vfunc_sfp_mul__26__a = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_40, __Vfunc_sfp_mul__26__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_41, __Vfunc_sfp_mul__26__b);
    VL_MULS_WWW(128, __Vtemp_42, __Vtemp_40, __Vtemp_41);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__26__tmp, __Vtemp_42, 0x20U);
    __Vfunc_sfp_mul__26__Vfuncout = (((QData)((IData)(
                                                      __Vfunc_sfp_mul__26__tmp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vfunc_sfp_mul__26__tmp[0U])));
    vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weight_gradient[0U] 
        = __Vfunc_sfp_mul__26__Vfuncout;
    __Vfunc_sfp_mul__26__b = vlSelfRef.BenchPerceptron__DOT__values
        [1U];
    __Vfunc_sfp_mul__26__a = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient;
    VL_EXTENDS_WQ(128,64, __Vtemp_43, __Vfunc_sfp_mul__26__a);
    VL_EXTENDS_WQ(128,64, __Vtemp_44, __Vfunc_sfp_mul__26__b);
    VL_MULS_WWW(128, __Vtemp_45, __Vtemp_43, __Vtemp_44);
    VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__26__tmp, __Vtemp_45, 0x20U);
    __Vfunc_sfp_mul__26__Vfuncout = (((QData)((IData)(
                                                      __Vfunc_sfp_mul__26__tmp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vfunc_sfp_mul__26__tmp[0U])));
    vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weight_gradient[1U] 
        = __Vfunc_sfp_mul__26__Vfuncout;
    vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias_gradient 
        = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient;
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge BenchPerceptron.clk)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge BenchPerceptron.clk)\n");
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
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void VPerceptron___024root___ctor_var_reset(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___ctor_var_reset\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->BenchPerceptron__DOT__clk = 0;
    vlSelf->BenchPerceptron__DOT__rst = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchPerceptron__DOT__values[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchPerceptron__DOT__activation = 0;
    vlSelf->BenchPerceptron__DOT__training = 0;
    vlSelf->BenchPerceptron__DOT__learning_rate = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->BenchPerceptron__DOT__next_layer_weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->BenchPerceptron__DOT__error_gradient_next_layer[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchPerceptron__DOT__prediction = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchPerceptron__DOT__current_weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchPerceptron__DOT__expected = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptron__DOT__cost = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptron__DOT__unnamedblk1__DOT__diff = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptron__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchPerceptron__DOT__perceptron__DOT__weights[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__bias = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__sum = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->BenchPerceptron__DOT__perceptron__DOT__weight_gradient[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__bias_gradient = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__local_error_gradient = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sigmoid_derivative = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__unnamedblk5__DOT__unnamedblk6__DOT__tanh_derivative = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__unnamedblk7__DOT__unnamedblk8__DOT__relu_derivative = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__predict__DOT__sigmoid_out = VL_RAND_RESET_Q(64);
    vlSelf->BenchPerceptron__DOT__perceptron__DOT__predict__DOT__tanh_out = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__13__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__13__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__13__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__13__tmp);
    vlSelf->__Vfunc_sfp_sub__14__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__14__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__15__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__15__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__15__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__16__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__16__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__16__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__16__tmp);
    vlSelf->__Vfunc_sfp_mul__17__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__17__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__17__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__17__tmp);
    vlSelf->__Vfunc_sfp_sub__18__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_sub__18__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__19__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__19__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__19__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__19__tmp);
    vlSelf->__Vfunc_sfp_add__20__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__20__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__20__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__21__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__21__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__21__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__21__tmp);
    vlSelf->__Vfunc_sfp_mul__22__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__22__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__22__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__22__tmp);
    vlSelf->__Vfunc_sfp_add__23__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__23__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_add__23__b = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__24__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__24__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__24__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__24__tmp);
    vlSelf->__Vfunc_sfp_mul__25__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__25__a = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__25__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__25__tmp);
    vlSelf->__Vfunc_sfp_mul__35__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__35__a = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__35__tmp);
    vlSelf->__Vfunc_sfp_mul__40__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_sfp_mul__40__a = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_sfp_mul__40__tmp);
    vlSelf->__Vtrigprevexpr___TOP__BenchPerceptron__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
