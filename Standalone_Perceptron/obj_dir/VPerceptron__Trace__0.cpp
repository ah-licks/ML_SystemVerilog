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
        bufp->chgBit(oldp+0,(vlSelfRef.BenchPerceptronIntroduction__DOT__rst));
        bufp->chgQData(oldp+1,(vlSelfRef.BenchPerceptronIntroduction__DOT__values[0]),64);
        bufp->chgQData(oldp+3,(vlSelfRef.BenchPerceptronIntroduction__DOT__values[1]),64);
        bufp->chgBit(oldp+5,(vlSelfRef.BenchPerceptronIntroduction__DOT__training));
        bufp->chgQData(oldp+6,(vlSelfRef.BenchPerceptronIntroduction__DOT__learning_rate),64);
        bufp->chgQData(oldp+8,(vlSelfRef.BenchPerceptronIntroduction__DOT__expected),64);
        bufp->chgIData(oldp+10,(vlSelfRef.BenchPerceptronIntroduction__DOT__correct),32);
        bufp->chgQData(oldp+11,(vlSelfRef.BenchPerceptronIntroduction__DOT__ONE),64);
        bufp->chgIData(oldp+13,(vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__epoch),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgQData(oldp+14,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[0]),64);
        bufp->chgQData(oldp+16,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[1]),64);
        bufp->chgQData(oldp+18,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias),64);
        bufp->chgIData(oldp+20,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+21,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk3__DOT__i),32);
    }
    bufp->chgBit(oldp+22,(vlSelfRef.BenchPerceptronIntroduction__DOT__clk));
    bufp->chgQData(oldp+23,(vlSelfRef.BenchPerceptronIntroduction__DOT__prediction),64);
    bufp->chgQData(oldp+25,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum),64);
    bufp->chgQData(oldp+27,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error),64);
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
}
