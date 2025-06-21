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
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgQData(oldp+2,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                               [0U][0U]),64);
        bufp->chgQData(oldp+4,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                               [0U][1U]),64);
        bufp->chgQData(oldp+6,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                               [1U][0U]),64);
        bufp->chgQData(oldp+8,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                               [1U][1U]),64);
        bufp->chgQData(oldp+10,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                                [2U][0U]),64);
        bufp->chgQData(oldp+12,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                                [2U][1U]),64);
        bufp->chgQData(oldp+14,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                                [3U][0U]),64);
        bufp->chgQData(oldp+16,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                                [3U][1U]),64);
        bufp->chgQData(oldp+18,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                                [4U][0U]),64);
        bufp->chgQData(oldp+20,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                                [4U][1U]),64);
        bufp->chgQData(oldp+22,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                                [5U][0U]),64);
        bufp->chgQData(oldp+24,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                                [5U][1U]),64);
        bufp->chgQData(oldp+26,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                                [6U][0U]),64);
        bufp->chgQData(oldp+28,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                                [6U][1U]),64);
        bufp->chgQData(oldp+30,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                                [7U][0U]),64);
        bufp->chgQData(oldp+32,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                                [7U][1U]),64);
        bufp->chgQData(oldp+34,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data[0]),64);
        bufp->chgQData(oldp+36,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data[1]),64);
        bufp->chgQData(oldp+38,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data[2]),64);
        bufp->chgQData(oldp+40,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data[3]),64);
        bufp->chgQData(oldp+42,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data[4]),64);
        bufp->chgQData(oldp+44,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data[5]),64);
        bufp->chgQData(oldp+46,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data[6]),64);
        bufp->chgQData(oldp+48,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data[7]),64);
        bufp->chgQData(oldp+50,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[0]),64);
        bufp->chgQData(oldp+52,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[1]),64);
        bufp->chgQData(oldp+54,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[2]),64);
        bufp->chgQData(oldp+56,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[3]),64);
        bufp->chgQData(oldp+58,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[4]),64);
        bufp->chgQData(oldp+60,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[5]),64);
        bufp->chgQData(oldp+62,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[6]),64);
        bufp->chgQData(oldp+64,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[7]),64);
        bufp->chgQData(oldp+66,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[8]),64);
        bufp->chgQData(oldp+68,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[9]),64);
        bufp->chgQData(oldp+70,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[10]),64);
        bufp->chgQData(oldp+72,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[11]),64);
        bufp->chgQData(oldp+74,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[12]),64);
        bufp->chgQData(oldp+76,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[13]),64);
        bufp->chgQData(oldp+78,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[14]),64);
        bufp->chgQData(oldp+80,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[15]),64);
        bufp->chgIData(oldp+82,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+83,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+84,(vlSelfRef.BenchPerceptronIntroduction__DOT__rst));
        bufp->chgBit(oldp+85,(vlSelfRef.BenchPerceptronIntroduction__DOT__training));
        bufp->chgQData(oldp+86,(vlSelfRef.BenchPerceptronIntroduction__DOT__learning_rate),64);
        bufp->chgQData(oldp+88,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data
                                [(7U & vlSelfRef.BenchPerceptronIntroduction__DOT__example)]),64);
        bufp->chgIData(oldp+90,(vlSelfRef.BenchPerceptronIntroduction__DOT__example),32);
        bufp->chgIData(oldp+91,(vlSelfRef.BenchPerceptronIntroduction__DOT__correct),32);
        bufp->chgIData(oldp+92,(vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__epoch),32);
        bufp->chgIData(oldp+93,(vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+94,(vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+95,(vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk4__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgQData(oldp+96,(vlSelfRef.BenchPerceptronIntroduction__DOT__values[0]),64);
        bufp->chgQData(oldp+98,(vlSelfRef.BenchPerceptronIntroduction__DOT__values[1]),64);
        bufp->chgQData(oldp+100,(vlSelfRef.BenchPerceptronIntroduction__DOT__prediction),64);
        bufp->chgQData(oldp+102,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum),64);
        bufp->chgQData(oldp+104,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgQData(oldp+106,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[0]),64);
        bufp->chgQData(oldp+108,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[1]),64);
        bufp->chgQData(oldp+110,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias),64);
        bufp->chgIData(oldp+112,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+113,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk3__DOT__i),32);
    }
    bufp->chgBit(oldp+114,(vlSelfRef.BenchPerceptronIntroduction__DOT__clk));
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
