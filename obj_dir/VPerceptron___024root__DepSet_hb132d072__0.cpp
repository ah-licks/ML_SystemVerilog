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

VL_INLINE_OPT VlCoroutine VPerceptron___024root___eval_initial__TOP__Vtiming__1(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_initial__TOP__Vtiming__1\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    double __Vfunc_sfp_to_real__4__Vfuncout;
    __Vfunc_sfp_to_real__4__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_to_real__4__n;
    __Vfunc_sfp_to_real__4__n = 0;
    double __Vfunc_sfp_to_real__5__Vfuncout;
    __Vfunc_sfp_to_real__5__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_to_real__5__n;
    __Vfunc_sfp_to_real__5__n = 0;
    double __Vfunc_sfp_to_real__6__Vfuncout;
    __Vfunc_sfp_to_real__6__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_to_real__6__n;
    __Vfunc_sfp_to_real__6__n = 0;
    double __Vfunc_sfp_to_real__7__Vfuncout;
    __Vfunc_sfp_to_real__7__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_to_real__7__n;
    __Vfunc_sfp_to_real__7__n = 0;
    double __Vfunc_sfp_to_real__8__Vfuncout;
    __Vfunc_sfp_to_real__8__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_to_real__8__n;
    __Vfunc_sfp_to_real__8__n = 0;
    double __Vfunc_sfp_to_real__9__Vfuncout;
    __Vfunc_sfp_to_real__9__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_to_real__9__n;
    __Vfunc_sfp_to_real__9__n = 0;
    double __Vfunc_sfp_to_real__10__Vfuncout;
    __Vfunc_sfp_to_real__10__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_to_real__10__n;
    __Vfunc_sfp_to_real__10__n = 0;
    // Body
    vlSelfRef.BenchPerceptron__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "src/Benches/BenchPerceptron.sv", 
                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptron__DOT__rst = 0U;
    vlSelfRef.BenchPerceptron__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x64U, vlSelfRef.BenchPerceptron__DOT__unnamedblk2__DOT__i)) {
        vlSelfRef.BenchPerceptron__DOT__values[0U] = 0x100000000ULL;
        vlSelfRef.BenchPerceptron__DOT__values[1U] = 0x100000000ULL;
        vlSelfRef.BenchPerceptron__DOT__expected = 0ULL;
        co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge BenchPerceptron.clk)", 
                                                             "src/Benches/BenchPerceptron.sv", 
                                                             79);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge BenchPerceptron.clk)", 
                                                             "src/Benches/BenchPerceptron.sv", 
                                                             80);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.BenchPerceptron__DOT__values[0U] = 0x100000000ULL;
        vlSelfRef.BenchPerceptron__DOT__values[1U] = 0ULL;
        vlSelfRef.BenchPerceptron__DOT__expected = 0x100000000ULL;
        co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge BenchPerceptron.clk)", 
                                                             "src/Benches/BenchPerceptron.sv", 
                                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge BenchPerceptron.clk)", 
                                                             "src/Benches/BenchPerceptron.sv", 
                                                             86);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.BenchPerceptron__DOT__values[0U] = 0ULL;
        vlSelfRef.BenchPerceptron__DOT__values[1U] = 0x100000000ULL;
        vlSelfRef.BenchPerceptron__DOT__expected = 0x100000000ULL;
        co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge BenchPerceptron.clk)", 
                                                             "src/Benches/BenchPerceptron.sv", 
                                                             91);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge BenchPerceptron.clk)", 
                                                             "src/Benches/BenchPerceptron.sv", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.BenchPerceptron__DOT__values[0U] = 0ULL;
        vlSelfRef.BenchPerceptron__DOT__values[1U] = 0ULL;
        vlSelfRef.BenchPerceptron__DOT__expected = 0ULL;
        co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge BenchPerceptron.clk)", 
                                                             "src/Benches/BenchPerceptron.sv", 
                                                             97);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge BenchPerceptron.clk)", 
                                                             "src/Benches/BenchPerceptron.sv", 
                                                             98);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY(((0U == VL_MODDIVS_III(32, vlSelfRef.BenchPerceptron__DOT__unnamedblk2__DOT__i, (IData)(0xaU)))))) {
            VL_WRITEF_NX("Iteration %0d: Prediction = %f, Expected = %f, Cost = %f\n",0,
                         32,vlSelfRef.BenchPerceptron__DOT__unnamedblk2__DOT__i,
                         64,([&]() {
                            __Vfunc_sfp_to_real__4__n 
                                = vlSelfRef.BenchPerceptron__DOT__prediction;
                            __Vfunc_sfp_to_real__4__Vfuncout 
                                = (VL_ISTOR_D_Q(64, __Vfunc_sfp_to_real__4__n) 
                                   / 4.29496729600000000e+09);
                        }(), __Vfunc_sfp_to_real__4__Vfuncout),
                         64,([&]() {
                            __Vfunc_sfp_to_real__5__n 
                                = vlSelfRef.BenchPerceptron__DOT__expected;
                            __Vfunc_sfp_to_real__5__Vfuncout 
                                = (VL_ISTOR_D_Q(64, __Vfunc_sfp_to_real__5__n) 
                                   / 4.29496729600000000e+09);
                        }(), __Vfunc_sfp_to_real__5__Vfuncout),
                         64,([&]() {
                            __Vfunc_sfp_to_real__6__n 
                                = vlSelfRef.BenchPerceptron__DOT__cost;
                            __Vfunc_sfp_to_real__6__Vfuncout 
                                = (VL_ISTOR_D_Q(64, __Vfunc_sfp_to_real__6__n) 
                                   / 4.29496729600000000e+09);
                        }(), __Vfunc_sfp_to_real__6__Vfuncout));
        }
        vlSelfRef.BenchPerceptron__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelfRef.BenchPerceptron__DOT__unnamedblk2__DOT__i);
    }
    vlSelfRef.BenchPerceptron__DOT__training = 0U;
    VL_WRITEF_NX("\nTesting trained network:\n",0);
    vlSelfRef.BenchPerceptron__DOT__values[0U] = 0x100000000ULL;
    vlSelfRef.BenchPerceptron__DOT__values[1U] = 0x100000000ULL;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Input: 1,1 -> Output: %f (Expected: 0)\n",0,
                 64,([&]() {
                    __Vfunc_sfp_to_real__7__n = vlSelfRef.BenchPerceptron__DOT__prediction;
                    __Vfunc_sfp_to_real__7__Vfuncout 
                        = (VL_ISTOR_D_Q(64, __Vfunc_sfp_to_real__7__n) 
                           / 4.29496729600000000e+09);
                }(), __Vfunc_sfp_to_real__7__Vfuncout));
    vlSelfRef.BenchPerceptron__DOT__values[0U] = 0x100000000ULL;
    vlSelfRef.BenchPerceptron__DOT__values[1U] = 0ULL;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         118);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Input: 1,0 -> Output: %f (Expected: 1)\n",0,
                 64,([&]() {
                    __Vfunc_sfp_to_real__8__n = vlSelfRef.BenchPerceptron__DOT__prediction;
                    __Vfunc_sfp_to_real__8__Vfuncout 
                        = (VL_ISTOR_D_Q(64, __Vfunc_sfp_to_real__8__n) 
                           / 4.29496729600000000e+09);
                }(), __Vfunc_sfp_to_real__8__Vfuncout));
    vlSelfRef.BenchPerceptron__DOT__values[0U] = 0ULL;
    vlSelfRef.BenchPerceptron__DOT__values[1U] = 0x100000000ULL;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         123);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Input: 0,1 -> Output: %f (Expected: 1)\n",0,
                 64,([&]() {
                    __Vfunc_sfp_to_real__9__n = vlSelfRef.BenchPerceptron__DOT__prediction;
                    __Vfunc_sfp_to_real__9__Vfuncout 
                        = (VL_ISTOR_D_Q(64, __Vfunc_sfp_to_real__9__n) 
                           / 4.29496729600000000e+09);
                }(), __Vfunc_sfp_to_real__9__Vfuncout));
    vlSelfRef.BenchPerceptron__DOT__values[0U] = 0ULL;
    vlSelfRef.BenchPerceptron__DOT__values[1U] = 0ULL;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         128);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Input: 0,0 -> Output: %f (Expected: 0)\n",0,
                 64,([&]() {
                    __Vfunc_sfp_to_real__10__n = vlSelfRef.BenchPerceptron__DOT__prediction;
                    __Vfunc_sfp_to_real__10__Vfuncout 
                        = (VL_ISTOR_D_Q(64, __Vfunc_sfp_to_real__10__n) 
                           / 4.29496729600000000e+09);
                }(), __Vfunc_sfp_to_real__10__Vfuncout));
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "src/Benches/BenchPerceptron.sv", 
                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("src/Benches/BenchPerceptron.sv", 132, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void VPerceptron___024root___act_sequent__TOP__0(VPerceptron___024root* vlSelf);
void VPerceptron___024root___act_comb__TOP__0(VPerceptron___024root* vlSelf);

void VPerceptron___024root___eval_act(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_act\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VPerceptron___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VPerceptron___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void VPerceptron___024root___act_sequent__TOP__0(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___act_sequent__TOP__0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U == vlSelfRef.BenchPerceptron__DOT__activation)) {
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk3__DOT__i = 1U;
    }
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
}

VL_INLINE_OPT void VPerceptron___024root___act_comb__TOP__0(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___act_comb__TOP__0\n"); );
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
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VPerceptron___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VPerceptron___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

VL_INLINE_OPT void VPerceptron___024root___nba_sequent__TOP__0(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___nba_sequent__TOP__0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vfunc_real_to_sfp__27__Vfuncout;
    __Vfunc_real_to_sfp__27__Vfuncout = 0;
    double __Vfunc_real_to_sfp__27__r;
    __Vfunc_real_to_sfp__27__r = 0;
    QData/*63:0*/ __Vfunc_real_to_sfp__28__Vfuncout;
    __Vfunc_real_to_sfp__28__Vfuncout = 0;
    double __Vfunc_real_to_sfp__28__r;
    __Vfunc_real_to_sfp__28__r = 0;
    QData/*63:0*/ __Vfunc_sfp_sub__29__Vfuncout;
    __Vfunc_sfp_sub__29__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_sub__29__a;
    __Vfunc_sfp_sub__29__a = 0;
    QData/*63:0*/ __Vfunc_sfp_sub__29__b;
    __Vfunc_sfp_sub__29__b = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__30__Vfuncout;
    __Vfunc_sfp_mul__30__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__30__a;
    __Vfunc_sfp_mul__30__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__30__b;
    __Vfunc_sfp_mul__30__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__30__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__30__tmp);
    QData/*63:0*/ __Vfunc_sfp_sub__31__Vfuncout;
    __Vfunc_sfp_sub__31__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_sub__31__a;
    __Vfunc_sfp_sub__31__a = 0;
    QData/*63:0*/ __Vfunc_sfp_sub__31__b;
    __Vfunc_sfp_sub__31__b = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__32__Vfuncout;
    __Vfunc_sfp_mul__32__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__32__a;
    __Vfunc_sfp_mul__32__a = 0;
    QData/*63:0*/ __Vfunc_sfp_mul__32__b;
    __Vfunc_sfp_mul__32__b = 0;
    VlWide<4>/*127:0*/ __Vfunc_sfp_mul__32__tmp;
    VL_ZERO_W(128, __Vfunc_sfp_mul__32__tmp);
    QData/*63:0*/ __Vdly__BenchPerceptron__DOT__perceptron__DOT__bias;
    __Vdly__BenchPerceptron__DOT__perceptron__DOT__bias = 0;
    QData/*63:0*/ __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v0;
    __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v0 = 0;
    CData/*0:0*/ __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v0;
    __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v0 = 0;
    QData/*63:0*/ __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v1;
    __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v1 = 0;
    CData/*0:0*/ __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v1;
    __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v1 = 0;
    QData/*63:0*/ __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v2;
    __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v2 = 0;
    CData/*0:0*/ __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v2;
    __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v2 = 0;
    QData/*63:0*/ __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v3;
    __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v3 = 0;
    CData/*0:0*/ __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v3;
    __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v3 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    // Body
    __Vdly__BenchPerceptron__DOT__perceptron__DOT__bias 
        = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias;
    __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v0 = 0U;
    __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v1 = 0U;
    __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v2 = 0U;
    __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v3 = 0U;
    if (vlSelfRef.BenchPerceptron__DOT__rst) {
        __Vfunc_real_to_sfp__27__r = ((VL_ITOR_D_I(32, 
                                                   VL_URANDOM_RANGE_I(0x64U, 1U)) 
                                       / 100.0) - 5.00000000000000000e-01);
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk10__DOT__i = 2U;
        __Vfunc_real_to_sfp__27__Vfuncout = VL_RTOIROUND_Q_D(
                                                             (4.29496729600000000e+09 
                                                              * __Vfunc_real_to_sfp__27__r));
        __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v0 
            = __Vfunc_real_to_sfp__27__Vfuncout;
        __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v0 = 1U;
        __Vfunc_real_to_sfp__27__r = ((VL_ITOR_D_I(32, 
                                                   VL_URANDOM_RANGE_I(0x64U, 1U)) 
                                       / 100.0) - 5.00000000000000000e-01);
        __Vfunc_real_to_sfp__27__Vfuncout = VL_RTOIROUND_Q_D(
                                                             (4.29496729600000000e+09 
                                                              * __Vfunc_real_to_sfp__27__r));
        __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v1 
            = __Vfunc_real_to_sfp__27__Vfuncout;
        __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v1 = 1U;
        __Vfunc_real_to_sfp__28__r = ((VL_ITOR_D_I(32, 
                                                   VL_URANDOM_RANGE_I(0x64U, 1U)) 
                                       / 100.0) - 5.00000000000000000e-01);
        __Vfunc_real_to_sfp__28__Vfuncout = VL_RTOIROUND_Q_D(
                                                             (4.29496729600000000e+09 
                                                              * __Vfunc_real_to_sfp__28__r));
        __Vdly__BenchPerceptron__DOT__perceptron__DOT__bias 
            = __Vfunc_real_to_sfp__28__Vfuncout;
    } else if (vlSelfRef.BenchPerceptron__DOT__training) {
        __Vfunc_sfp_mul__32__b = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias_gradient;
        __Vfunc_sfp_mul__30__b = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weight_gradient
            [0U];
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk11__DOT__i = 2U;
        __Vfunc_sfp_mul__32__a = vlSelfRef.BenchPerceptron__DOT__learning_rate;
        __Vfunc_sfp_mul__30__a = vlSelfRef.BenchPerceptron__DOT__learning_rate;
        VL_EXTENDS_WQ(128,64, __Vtemp_1, __Vfunc_sfp_mul__32__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_2, __Vfunc_sfp_mul__32__b);
        VL_MULS_WWW(128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
        VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__32__tmp, __Vtemp_3, 0x20U);
        VL_EXTENDS_WQ(128,64, __Vtemp_4, __Vfunc_sfp_mul__30__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_5, __Vfunc_sfp_mul__30__b);
        VL_MULS_WWW(128, __Vtemp_6, __Vtemp_4, __Vtemp_5);
        VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__30__tmp, __Vtemp_6, 0x20U);
        __Vfunc_sfp_mul__32__Vfuncout = (((QData)((IData)(
                                                          __Vfunc_sfp_mul__32__tmp[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           __Vfunc_sfp_mul__32__tmp[0U])));
        __Vfunc_sfp_mul__30__Vfuncout = (((QData)((IData)(
                                                          __Vfunc_sfp_mul__30__tmp[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           __Vfunc_sfp_mul__30__tmp[0U])));
        __Vfunc_sfp_sub__31__b = __Vfunc_sfp_mul__32__Vfuncout;
        __Vfunc_sfp_sub__29__b = __Vfunc_sfp_mul__30__Vfuncout;
        __Vfunc_sfp_sub__31__a = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias;
        __Vfunc_sfp_sub__29__a = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights
            [0U];
        __Vfunc_sfp_sub__31__Vfuncout = (__Vfunc_sfp_sub__31__a 
                                         - __Vfunc_sfp_sub__31__b);
        __Vfunc_sfp_sub__29__Vfuncout = (__Vfunc_sfp_sub__29__a 
                                         - __Vfunc_sfp_sub__29__b);
        __Vdly__BenchPerceptron__DOT__perceptron__DOT__bias 
            = __Vfunc_sfp_sub__31__Vfuncout;
        __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v2 
            = __Vfunc_sfp_sub__29__Vfuncout;
        __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v2 = 1U;
        __Vfunc_sfp_mul__30__b = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weight_gradient
            [1U];
        __Vfunc_sfp_mul__30__a = vlSelfRef.BenchPerceptron__DOT__learning_rate;
        VL_EXTENDS_WQ(128,64, __Vtemp_7, __Vfunc_sfp_mul__30__a);
        VL_EXTENDS_WQ(128,64, __Vtemp_8, __Vfunc_sfp_mul__30__b);
        VL_MULS_WWW(128, __Vtemp_9, __Vtemp_7, __Vtemp_8);
        VL_SHIFTRS_WWI(128,128,32, __Vfunc_sfp_mul__30__tmp, __Vtemp_9, 0x20U);
        __Vfunc_sfp_mul__30__Vfuncout = (((QData)((IData)(
                                                          __Vfunc_sfp_mul__30__tmp[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           __Vfunc_sfp_mul__30__tmp[0U])));
        __Vfunc_sfp_sub__29__b = __Vfunc_sfp_mul__30__Vfuncout;
        __Vfunc_sfp_sub__29__a = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights
            [1U];
        __Vfunc_sfp_sub__29__Vfuncout = (__Vfunc_sfp_sub__29__a 
                                         - __Vfunc_sfp_sub__29__b);
        __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v3 
            = __Vfunc_sfp_sub__29__Vfuncout;
        __VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v3 = 1U;
    }
    vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias 
        = __Vdly__BenchPerceptron__DOT__perceptron__DOT__bias;
    if (__VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v0) {
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights[0U] 
            = __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v0;
    }
    if (__VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v1) {
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights[1U] 
            = __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v1;
    }
    if (__VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v2) {
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights[0U] 
            = __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v2;
    }
    if (__VdlySet__BenchPerceptron__DOT__perceptron__DOT__weights__v3) {
        vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights[1U] 
            = __VdlyVal__BenchPerceptron__DOT__perceptron__DOT__weights__v3;
    }
    vlSelfRef.BenchPerceptron__DOT__current_weights[0U] 
        = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights
        [0U];
    vlSelfRef.BenchPerceptron__DOT__current_weights[1U] 
        = vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights
        [1U];
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
            VL_FATAL_MT("src/Benches/BenchPerceptron.sv", 5, "", "NBA region did not converge.");
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
                VL_FATAL_MT("src/Benches/BenchPerceptron.sv", 5, "", "Active region did not converge.");
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
