// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron_FixedPoint.h"

VL_ATTR_COLD void VPerceptron_FixedPoint___eval_static__TOP__FixedPoint(VPerceptron_FixedPoint* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPerceptron_FixedPoint___eval_static__TOP__FixedPoint\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ONE = 0x100000000ULL;
    vlSelfRef.lcg_next__Vstatic__current = 1U;
}

VL_ATTR_COLD void VPerceptron_FixedPoint___ctor_var_reset(VPerceptron_FixedPoint* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPerceptron_FixedPoint___ctor_var_reset\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__ONE = VL_RAND_RESET_Q(64);
    vlSelf->lcg_next__Vstatic__current = VL_RAND_RESET_I(32);
}
