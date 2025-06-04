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
        bufp->chgDouble(oldp+0,(vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
                                [0U][0U]));
        bufp->chgDouble(oldp+2,(vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
                                [0U][1U]));
        bufp->chgDouble(oldp+4,(vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
                                [1U][0U]));
        bufp->chgDouble(oldp+6,(vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
                                [1U][1U]));
        bufp->chgDouble(oldp+8,(vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
                                [2U][0U]));
        bufp->chgDouble(oldp+10,(vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
                                 [2U][1U]));
        bufp->chgDouble(oldp+12,(vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
                                 [3U][0U]));
        bufp->chgDouble(oldp+14,(vlSelfRef.BenchPerceptronIntroduction__DOT__train_values
                                 [3U][1U]));
        bufp->chgDouble(oldp+16,(vlSelfRef.BenchPerceptronIntroduction__DOT__expected[0]));
        bufp->chgDouble(oldp+18,(vlSelfRef.BenchPerceptronIntroduction__DOT__expected[1]));
        bufp->chgDouble(oldp+20,(vlSelfRef.BenchPerceptronIntroduction__DOT__expected[2]));
        bufp->chgDouble(oldp+22,(vlSelfRef.BenchPerceptronIntroduction__DOT__expected[3]));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+24,(vlSelfRef.BenchPerceptronIntroduction__DOT__training));
        bufp->chgIData(oldp+25,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state),32);
        bufp->chgDouble(oldp+26,(VL_ITOR_D_I(1, (vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum 
                                                 > 0.0))));
        bufp->chgDouble(oldp+28,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum));
        bufp->chgIData(oldp+30,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__epoch_count),32);
        bufp->chgIData(oldp+31,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx),32);
        bufp->chgDouble(oldp+32,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error));
        bufp->chgIData(oldp+34,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk4__DOT__i),32);
    }
    bufp->chgBit(oldp+35,(vlSelfRef.BenchPerceptronIntroduction__DOT__clk));
    bufp->chgDouble(oldp+36,(vlSelfRef.BenchPerceptronIntroduction__DOT__values[0]));
    bufp->chgDouble(oldp+38,(vlSelfRef.BenchPerceptronIntroduction__DOT__values[1]));
    bufp->chgDouble(oldp+40,(VL_ITOR_D_I(1, (vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum 
                                             > 0.0))));
    bufp->chgDouble(oldp+42,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[0]));
    bufp->chgDouble(oldp+44,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[1]));
    bufp->chgDouble(oldp+46,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias));
    bufp->chgDouble(oldp+48,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum));
    bufp->chgIData(oldp+50,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk1__DOT__i),32);
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
}
