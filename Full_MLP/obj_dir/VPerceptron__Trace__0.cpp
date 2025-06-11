// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPerceptron__Syms.h"


void VPerceptron___024root__trace_chg_0_sub_0(VPerceptron___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPerceptron___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root__trace_chg_0\n"); );
    // Init
    VPerceptron___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPerceptron___024root*>(voidSelf);
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPerceptron___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VPerceptron___024root__trace_chg_0_sub_0(VPerceptron___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root__trace_chg_0_sub_0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgQData(oldp+0,(vlSymsp->TOP__FixedPoint.ONE),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+2,(vlSelfRef.BenchPerceptron__DOT__rst));
        bufp->chgQData(oldp+3,(vlSelfRef.BenchPerceptron__DOT__values[0]),64);
        bufp->chgQData(oldp+5,(vlSelfRef.BenchPerceptron__DOT__values[1]),64);
        bufp->chgIData(oldp+7,(vlSelfRef.BenchPerceptron__DOT__activation),32);
        bufp->chgBit(oldp+8,(vlSelfRef.BenchPerceptron__DOT__training));
        bufp->chgQData(oldp+9,(vlSelfRef.BenchPerceptron__DOT__learning_rate),64);
        bufp->chgQData(oldp+11,(vlSelfRef.BenchPerceptron__DOT__next_layer_weights[0]),64);
        bufp->chgQData(oldp+13,(vlSelfRef.BenchPerceptron__DOT__expected),64);
        bufp->chgQData(oldp+15,(vlSelfRef.BenchPerceptron__DOT__threshold),64);
        bufp->chgIData(oldp+17,(vlSelfRef.BenchPerceptron__DOT__correct),32);
        bufp->chgIData(oldp+18,(vlSelfRef.BenchPerceptron__DOT__unnamedblk1__DOT__epoch),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgQData(oldp+19,(vlSelfRef.BenchPerceptron__DOT__error_gradient_next_layer[0]),64);
        bufp->chgQData(oldp+21,(vlSelfRef.BenchPerceptron__DOT__prediction),64);
        bufp->chgQData(oldp+23,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient),64);
        bufp->chgQData(oldp+25,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum),64);
        bufp->chgQData(oldp+27,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weight_gradient[0]),64);
        bufp->chgQData(oldp+29,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weight_gradient[1]),64);
        bufp->chgQData(oldp+31,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias_gradient),64);
        bufp->chgIData(oldp+33,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+34,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+35,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+36,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk6__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgQData(oldp+37,(vlSelfRef.BenchPerceptron__DOT__current_weights[0]),64);
        bufp->chgQData(oldp+39,(vlSelfRef.BenchPerceptron__DOT__current_weights[1]),64);
        bufp->chgQData(oldp+41,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights[0]),64);
        bufp->chgQData(oldp+43,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights[1]),64);
        bufp->chgQData(oldp+45,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias),64);
        bufp->chgIData(oldp+47,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+48,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk8__DOT__i),32);
    }
    bufp->chgBit(oldp+49,(vlSelfRef.BenchPerceptron__DOT__clk));
}

void VPerceptron___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root__trace_cleanup\n"); );
    // Init
    VPerceptron___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPerceptron___024root*>(voidSelf);
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
