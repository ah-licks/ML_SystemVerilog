// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron__Syms.h"
#include "VPerceptron___024root.h"

VL_ATTR_COLD void VPerceptron_FixedPoint___eval_static__TOP__FixedPoint(VPerceptron_FixedPoint* vlSelf);
VL_ATTR_COLD void VPerceptron___024root____Vm_traceActivitySetAll(VPerceptron___024root* vlSelf);

VL_ATTR_COLD void VPerceptron___024root___eval_static(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_static\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VPerceptron_FixedPoint___eval_static__TOP__FixedPoint((&vlSymsp->TOP__FixedPoint));
    VPerceptron___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void VPerceptron___024root___eval_initial__TOP(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_initial__TOP\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vfunc_sfp_random__0__Vfuncout;
    __Vfunc_sfp_random__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_lcg_next__1__Vfuncout;
    __Vfunc_lcg_next__1__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_random__2__Vfuncout;
    __Vfunc_sfp_random__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_lcg_next__3__Vfuncout;
    __Vfunc_lcg_next__3__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sfp_random__4__Vfuncout;
    __Vfunc_sfp_random__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_lcg_next__5__Vfuncout;
    __Vfunc_lcg_next__5__Vfuncout = 0;
    // Body
    __Vfunc_sfp_random__0__Vfuncout = VL_EXTEND_QI(64,32, 
                                                   ([&]() {
                vlSymsp->TOP__FixedPoint.lcg_next__Vstatic__current 
                    = ((IData)(0x3c6ef35fU) + ((IData)(0x19660dU) 
                                               * vlSymsp->TOP__FixedPoint.lcg_next__Vstatic__current));
                __Vfunc_lcg_next__1__Vfuncout = vlSymsp->TOP__FixedPoint.lcg_next__Vstatic__current;
            }(), __Vfunc_lcg_next__1__Vfuncout));
    vlSelfRef.Testing__DOT__random = __Vfunc_sfp_random__0__Vfuncout;
    VL_WRITEF_NX("%20d\n",0,64,vlSelfRef.Testing__DOT__random);
    __Vfunc_sfp_random__2__Vfuncout = VL_EXTEND_QI(64,32, 
                                                   ([&]() {
                vlSymsp->TOP__FixedPoint.lcg_next__Vstatic__current 
                    = ((IData)(0x3c6ef35fU) + ((IData)(0x19660dU) 
                                               * vlSymsp->TOP__FixedPoint.lcg_next__Vstatic__current));
                __Vfunc_lcg_next__3__Vfuncout = vlSymsp->TOP__FixedPoint.lcg_next__Vstatic__current;
            }(), __Vfunc_lcg_next__3__Vfuncout));
    vlSelfRef.Testing__DOT__random = __Vfunc_sfp_random__2__Vfuncout;
    VL_WRITEF_NX("%20d\n",0,64,vlSelfRef.Testing__DOT__random);
    __Vfunc_sfp_random__4__Vfuncout = VL_EXTEND_QI(64,32, 
                                                   ([&]() {
                vlSymsp->TOP__FixedPoint.lcg_next__Vstatic__current 
                    = ((IData)(0x3c6ef35fU) + ((IData)(0x19660dU) 
                                               * vlSymsp->TOP__FixedPoint.lcg_next__Vstatic__current));
                __Vfunc_lcg_next__5__Vfuncout = vlSymsp->TOP__FixedPoint.lcg_next__Vstatic__current;
            }(), __Vfunc_lcg_next__5__Vfuncout));
    vlSelfRef.Testing__DOT__random = __Vfunc_sfp_random__4__Vfuncout;
    VL_WRITEF_NX("%20d\n",0,64,vlSelfRef.Testing__DOT__random);
}
