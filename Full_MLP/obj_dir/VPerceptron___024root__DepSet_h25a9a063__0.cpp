// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron__Syms.h"
#include "VPerceptron___024root.h"

VL_INLINE_OPT VlCoroutine VPerceptron___024root___eval_initial__TOP__Vtiming__1(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_initial__TOP__Vtiming__1\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"sim.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelfRef.BenchPerceptron__DOT__activation = 1U;
    vlSelfRef.BenchPerceptron__DOT__training = 1U;
    vlSelfRef.BenchPerceptron__DOT__learning_rate = 1.0;
    vlSelfRef.BenchPerceptron__DOT__next_layer_weights[0U] = 1.0;
    vlSelfRef.BenchPerceptron__DOT__rst = 1U;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptron__DOT__rst = 0U;
    VL_WRITEF_NX("Starting AND gate training...\nTime\tInputs\tExpected\tPrediction\tCost\n----\t------\t--------\t----------\t----\n",0);
    vlSelfRef.BenchPerceptron__DOT__unnamedblk1__DOT__epoch = 0U;
    while (VL_GTS_III(32, 0x64U, vlSelfRef.BenchPerceptron__DOT__unnamedblk1__DOT__epoch)) {
        VL_WRITEF_NX("\n=== Epoch %0d ===\n",0,32,vlSelfRef.BenchPerceptron__DOT__unnamedblk1__DOT__epoch);
        co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge BenchPerceptron.clk)", 
                                                             "src/Benches/BenchPerceptron.sv", 
                                                             78);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.BenchPerceptron__DOT__values[0U] = 0.0;
        vlSelfRef.BenchPerceptron__DOT__values[1U] = 0.0;
        vlSelfRef.BenchPerceptron__DOT__expected = 0.0;
        co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge BenchPerceptron.clk)", 
                                                             "src/Benches/BenchPerceptron.sv", 
                                                             82);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VL_WRITEF_NX("%0t\t[0,0]\t%0.3f\t\t%0.6f\t%0.6f\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,64,
                     vlSelfRef.BenchPerceptron__DOT__expected,
                     64,vlSelfRef.BenchPerceptron__DOT__prediction,
                     64,vlSelfRef.BenchPerceptron__DOT__cost);
        co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge BenchPerceptron.clk)", 
                                                             "src/Benches/BenchPerceptron.sv", 
                                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.BenchPerceptron__DOT__values[0U] = 0.0;
        vlSelfRef.BenchPerceptron__DOT__values[1U] = 1.0;
        vlSelfRef.BenchPerceptron__DOT__expected = 0.0;
        co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge BenchPerceptron.clk)", 
                                                             "src/Benches/BenchPerceptron.sv", 
                                                             89);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VL_WRITEF_NX("%0t\t[0,1]\t%0.3f\t\t%0.6f\t%0.6f\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,64,
                     vlSelfRef.BenchPerceptron__DOT__expected,
                     64,vlSelfRef.BenchPerceptron__DOT__prediction,
                     64,vlSelfRef.BenchPerceptron__DOT__cost);
        co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge BenchPerceptron.clk)", 
                                                             "src/Benches/BenchPerceptron.sv", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.BenchPerceptron__DOT__values[0U] = 1.0;
        vlSelfRef.BenchPerceptron__DOT__values[1U] = 0.0;
        vlSelfRef.BenchPerceptron__DOT__expected = 0.0;
        co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge BenchPerceptron.clk)", 
                                                             "src/Benches/BenchPerceptron.sv", 
                                                             96);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VL_WRITEF_NX("%0t\t[1,0]\t%0.3f\t\t%0.6f\t%0.6f\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,64,
                     vlSelfRef.BenchPerceptron__DOT__expected,
                     64,vlSelfRef.BenchPerceptron__DOT__prediction,
                     64,vlSelfRef.BenchPerceptron__DOT__cost);
        co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge BenchPerceptron.clk)", 
                                                             "src/Benches/BenchPerceptron.sv", 
                                                             99);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.BenchPerceptron__DOT__values[0U] = 1.0;
        vlSelfRef.BenchPerceptron__DOT__values[1U] = 1.0;
        vlSelfRef.BenchPerceptron__DOT__expected = 1.0;
        co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge BenchPerceptron.clk)", 
                                                             "src/Benches/BenchPerceptron.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VL_WRITEF_NX("%0t\t[1,1]\t%0.3f\t\t%0.6f\t%0.6f\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,64,
                     vlSelfRef.BenchPerceptron__DOT__expected,
                     64,vlSelfRef.BenchPerceptron__DOT__prediction,
                     64,vlSelfRef.BenchPerceptron__DOT__cost);
        vlSelfRef.BenchPerceptron__DOT__unnamedblk1__DOT__epoch 
            = ((IData)(1U) + vlSelfRef.BenchPerceptron__DOT__unnamedblk1__DOT__epoch);
    }
    VL_WRITEF_NX("\n=== Final Testing Phase ===\n",0);
    vlSelfRef.BenchPerceptron__DOT__training = 0U;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptron__DOT__values[0U] = 0.0;
    vlSelfRef.BenchPerceptron__DOT__values[1U] = 0.0;
    vlSelfRef.BenchPerceptron__DOT__expected = 0.0;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Test [0,0] -> %0.6f (expected 0.000)\n",0,
                 64,vlSelfRef.BenchPerceptron__DOT__prediction);
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         117);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptron__DOT__values[0U] = 0.0;
    vlSelfRef.BenchPerceptron__DOT__values[1U] = 1.0;
    vlSelfRef.BenchPerceptron__DOT__expected = 0.0;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Test [0,1] -> %0.6f (expected 0.000)\n",0,
                 64,vlSelfRef.BenchPerceptron__DOT__prediction);
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptron__DOT__values[0U] = 1.0;
    vlSelfRef.BenchPerceptron__DOT__values[1U] = 0.0;
    vlSelfRef.BenchPerceptron__DOT__expected = 0.0;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         128);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Test [1,0] -> %0.6f (expected 0.000)\n",0,
                 64,vlSelfRef.BenchPerceptron__DOT__prediction);
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptron__DOT__values[0U] = 1.0;
    vlSelfRef.BenchPerceptron__DOT__values[1U] = 1.0;
    vlSelfRef.BenchPerceptron__DOT__expected = 1.0;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         135);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Test [1,1] -> %0.6f (expected 1.000)\n",0,
                 64,vlSelfRef.BenchPerceptron__DOT__prediction);
    vlSelfRef.BenchPerceptron__DOT__threshold = 5.00000000000000000e-01;
    vlSelfRef.BenchPerceptron__DOT__correct = 0U;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         142);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptron__DOT__values[0U] = 0.0;
    vlSelfRef.BenchPerceptron__DOT__values[1U] = 0.0;
    vlSelfRef.BenchPerceptron__DOT__expected = 0.0;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         146);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((vlSelfRef.BenchPerceptron__DOT__prediction 
          < vlSelfRef.BenchPerceptron__DOT__threshold) 
         == (vlSelfRef.BenchPerceptron__DOT__expected 
             < vlSelfRef.BenchPerceptron__DOT__threshold))) {
        vlSelfRef.BenchPerceptron__DOT__correct = ((IData)(1U) 
                                                   + vlSelfRef.BenchPerceptron__DOT__correct);
    }
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         149);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptron__DOT__values[0U] = 0.0;
    vlSelfRef.BenchPerceptron__DOT__values[1U] = 1.0;
    vlSelfRef.BenchPerceptron__DOT__expected = 0.0;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         153);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((vlSelfRef.BenchPerceptron__DOT__prediction 
          < vlSelfRef.BenchPerceptron__DOT__threshold) 
         == (vlSelfRef.BenchPerceptron__DOT__expected 
             < vlSelfRef.BenchPerceptron__DOT__threshold))) {
        vlSelfRef.BenchPerceptron__DOT__correct = ((IData)(1U) 
                                                   + vlSelfRef.BenchPerceptron__DOT__correct);
    }
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         156);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptron__DOT__values[0U] = 1.0;
    vlSelfRef.BenchPerceptron__DOT__values[1U] = 0.0;
    vlSelfRef.BenchPerceptron__DOT__expected = 0.0;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         160);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((vlSelfRef.BenchPerceptron__DOT__prediction 
          < vlSelfRef.BenchPerceptron__DOT__threshold) 
         == (vlSelfRef.BenchPerceptron__DOT__expected 
             < vlSelfRef.BenchPerceptron__DOT__threshold))) {
        vlSelfRef.BenchPerceptron__DOT__correct = ((IData)(1U) 
                                                   + vlSelfRef.BenchPerceptron__DOT__correct);
    }
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         163);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptron__DOT__values[0U] = 1.0;
    vlSelfRef.BenchPerceptron__DOT__values[1U] = 1.0;
    vlSelfRef.BenchPerceptron__DOT__expected = 1.0;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         167);
    if (((vlSelfRef.BenchPerceptron__DOT__prediction 
          < vlSelfRef.BenchPerceptron__DOT__threshold) 
         == (vlSelfRef.BenchPerceptron__DOT__expected 
             < vlSelfRef.BenchPerceptron__DOT__threshold))) {
        vlSelfRef.BenchPerceptron__DOT__correct = ((IData)(1U) 
                                                   + vlSelfRef.BenchPerceptron__DOT__correct);
    }
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\nClassification Accuracy: %0d/4 (%0.1f%%)\n",0,
                 32,vlSelfRef.BenchPerceptron__DOT__correct,
                 64,((100.0 * VL_ISTOR_D_I(32, vlSelfRef.BenchPerceptron__DOT__correct)) 
                     / 4.0));
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         172);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         172);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         172);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         172);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hdf907d93__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptron.clk)", 
                                                         "src/Benches/BenchPerceptron.sv", 
                                                         172);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("src/Benches/BenchPerceptron.sv", 173, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPerceptron___024root___dump_triggers__act(VPerceptron___024root* vlSelf);
#endif  // VL_DEBUG

void VPerceptron___024root___eval_triggers__act(VPerceptron___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root___eval_triggers__act\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.BenchPerceptron__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__BenchPerceptron__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__BenchPerceptron__DOT__clk__0 
        = vlSelfRef.BenchPerceptron__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPerceptron___024root___dump_triggers__act(vlSelf);
    }
#endif
}
