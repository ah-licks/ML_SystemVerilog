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
        bufp->chgQData(oldp+0,(vlSelfRef.BenchPerceptronIntroduction__DOT__ONE),64);
        bufp->chgBit(oldp+2,(vlSelfRef.BenchPerceptronIntroduction__DOT__clk));
        bufp->chgIData(oldp+3,(vlSelfRef.BenchPerceptronIntroduction__DOT__activation),32);
        bufp->chgQData(oldp+4,(vlSelfRef.BenchPerceptronIntroduction__DOT__learning_rate),64);
        bufp->chgQData(oldp+6,(vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
                               [0U][0U]),64);
        bufp->chgQData(oldp+8,(vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
                               [0U][1U]),64);
        bufp->chgQData(oldp+10,(vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
                                [1U][0U]),64);
        bufp->chgQData(oldp+12,(vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
                                [1U][1U]),64);
        bufp->chgQData(oldp+14,(vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
                                [2U][0U]),64);
        bufp->chgQData(oldp+16,(vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
                                [2U][1U]),64);
        bufp->chgQData(oldp+18,(vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
                                [3U][0U]),64);
        bufp->chgQData(oldp+20,(vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
                                [3U][1U]),64);
        bufp->chgQData(oldp+22,(vlSelfRef.BenchPerceptronIntroduction__DOT__expected[0]),64);
        bufp->chgQData(oldp+24,(vlSelfRef.BenchPerceptronIntroduction__DOT__expected[1]),64);
        bufp->chgQData(oldp+26,(vlSelfRef.BenchPerceptronIntroduction__DOT__expected[2]),64);
        bufp->chgQData(oldp+28,(vlSelfRef.BenchPerceptronIntroduction__DOT__expected[3]),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+30,(vlSelfRef.BenchPerceptronIntroduction__DOT__done_training));
        bufp->chgIData(oldp+31,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__epoch_count),32);
        bufp->chgIData(oldp+32,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx),32);
        bufp->chgQData(oldp+33,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error),64);
        bufp->chgBit(oldp+35,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__training_active));
        bufp->chgIData(oldp+36,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk4__DOT__i),32);
    }
    bufp->chgQData(oldp+37,(vlSelfRef.BenchPerceptronIntroduction__DOT__values[0]),64);
    bufp->chgQData(oldp+39,(vlSelfRef.BenchPerceptronIntroduction__DOT__values[1]),64);
    bufp->chgQData(oldp+41,(vlSelfRef.BenchPerceptronIntroduction__DOT__prediction),64);
    bufp->chgQData(oldp+43,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[0]),64);
    bufp->chgQData(oldp+45,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[1]),64);
    bufp->chgQData(oldp+47,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias),64);
    bufp->chgQData(oldp+49,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum),64);
    bufp->chgIData(oldp+51,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state),32);
    bufp->chgQData(oldp+52,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_prediction),64);
    bufp->chgQData(oldp+54,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum),64);
    bufp->chgIData(oldp+56,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk1__DOT__i),32);
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
