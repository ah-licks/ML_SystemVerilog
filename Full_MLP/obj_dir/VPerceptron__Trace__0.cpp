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
        bufp->chgDouble(oldp+1,(vlSelfRef.BenchPerceptron__DOT__values[0]));
        bufp->chgDouble(oldp+3,(vlSelfRef.BenchPerceptron__DOT__values[1]));
        bufp->chgIData(oldp+5,(vlSelfRef.BenchPerceptron__DOT__activation),32);
        bufp->chgBit(oldp+6,(vlSelfRef.BenchPerceptron__DOT__training));
        bufp->chgDouble(oldp+7,(vlSelfRef.BenchPerceptron__DOT__learning_rate));
        bufp->chgDouble(oldp+9,(vlSelfRef.BenchPerceptron__DOT__next_layer_weights[0]));
        bufp->chgDouble(oldp+11,(vlSelfRef.BenchPerceptron__DOT__expected));
        bufp->chgDouble(oldp+13,(vlSelfRef.BenchPerceptron__DOT__threshold));
        bufp->chgIData(oldp+15,(vlSelfRef.BenchPerceptron__DOT__correct),32);
        bufp->chgIData(oldp+16,(vlSelfRef.BenchPerceptron__DOT__unnamedblk1__DOT__epoch),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgDouble(oldp+17,(vlSelfRef.BenchPerceptron__DOT__error_gradient_next_layer[0]));
        bufp->chgDouble(oldp+19,(vlSelfRef.BenchPerceptron__DOT__prediction));
        bufp->chgDouble(oldp+21,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient));
        bufp->chgDouble(oldp+23,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum));
        bufp->chgDouble(oldp+25,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weight_gradient[0]));
        bufp->chgDouble(oldp+27,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weight_gradient[1]));
        bufp->chgDouble(oldp+29,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias_gradient));
        bufp->chgIData(oldp+31,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+32,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+33,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk5__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgDouble(oldp+34,(vlSelfRef.BenchPerceptron__DOT__current_weights[0]));
        bufp->chgDouble(oldp+36,(vlSelfRef.BenchPerceptron__DOT__current_weights[1]));
        bufp->chgDouble(oldp+38,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights[0]));
        bufp->chgDouble(oldp+40,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights[1]));
        bufp->chgDouble(oldp+42,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias));
        bufp->chgIData(oldp+44,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+45,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk8__DOT__i),32);
    }
    bufp->chgBit(oldp+46,(vlSelfRef.BenchPerceptron__DOT__clk));
    bufp->chgDouble(oldp+47,((-1.0 * ((vlSelfRef.BenchPerceptron__DOT__expected 
                                       * log((1.00000000000000002e-08 
                                              + vlSelfRef.BenchPerceptron__DOT__prediction))) 
                                      + ((1.0 - vlSelfRef.BenchPerceptron__DOT__expected) 
                                         * log((1.00000000000000002e-08 
                                                + (1.0 
                                                   - vlSelfRef.BenchPerceptron__DOT__prediction))))))));
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
