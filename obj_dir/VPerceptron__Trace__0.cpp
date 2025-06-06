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
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.BenchPerceptron__DOT__rst));
        bufp->chgQData(oldp+1,(vlSelfRef.BenchPerceptron__DOT__values[0]),64);
        bufp->chgQData(oldp+3,(vlSelfRef.BenchPerceptron__DOT__values[1]),64);
        bufp->chgQData(oldp+5,(vlSelfRef.BenchPerceptron__DOT__expected),64);
        bufp->chgIData(oldp+7,(vlSelfRef.BenchPerceptron__DOT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgQData(oldp+8,(vlSelfRef.BenchPerceptron__DOT__error_gradient_next_layer[0]),64);
        bufp->chgQData(oldp+10,(vlSelfRef.BenchPerceptron__DOT__prediction),64);
        bufp->chgQData(oldp+12,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient),64);
        bufp->chgQData(oldp+14,(vlSelfRef.BenchPerceptron__DOT__cost),64);
        bufp->chgQData(oldp+16,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum),64);
        bufp->chgQData(oldp+18,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weight_gradient[0]),64);
        bufp->chgQData(oldp+20,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weight_gradient[1]),64);
        bufp->chgQData(oldp+22,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias_gradient),64);
        bufp->chgQData(oldp+24,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__predict__DOT__sigmoid_out),64);
        bufp->chgQData(oldp+26,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__predict__DOT__tanh_out),64);
        bufp->chgQData(oldp+28,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sigmoid_derivative),64);
        bufp->chgQData(oldp+30,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk5__DOT__unnamedblk6__DOT__tanh_derivative),64);
        bufp->chgQData(oldp+32,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk7__DOT__unnamedblk8__DOT__relu_derivative),64);
        bufp->chgQData(oldp+34,(vlSelfRef.BenchPerceptron__DOT__unnamedblk1__DOT__diff),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgQData(oldp+36,(vlSelfRef.BenchPerceptron__DOT__current_weights[0]),64);
        bufp->chgQData(oldp+38,(vlSelfRef.BenchPerceptron__DOT__current_weights[1]),64);
        bufp->chgQData(oldp+40,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights[0]),64);
        bufp->chgQData(oldp+42,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights[1]),64);
        bufp->chgQData(oldp+44,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias),64);
        bufp->chgIData(oldp+46,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk10__DOT__i),32);
        bufp->chgIData(oldp+47,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk11__DOT__i),32);
    }
    bufp->chgBit(oldp+48,(vlSelfRef.BenchPerceptron__DOT__clk));
    bufp->chgIData(oldp+49,(vlSelfRef.BenchPerceptron__DOT__activation),32);
    bufp->chgBit(oldp+50,(vlSelfRef.BenchPerceptron__DOT__training));
    bufp->chgQData(oldp+51,(vlSelfRef.BenchPerceptron__DOT__learning_rate),64);
    bufp->chgQData(oldp+53,(vlSelfRef.BenchPerceptron__DOT__next_layer_weights[0]),64);
    bufp->chgIData(oldp+55,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk3__DOT__i),32);
    bufp->chgIData(oldp+56,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk5__DOT__i),32);
    bufp->chgIData(oldp+57,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk7__DOT__i),32);
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
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
