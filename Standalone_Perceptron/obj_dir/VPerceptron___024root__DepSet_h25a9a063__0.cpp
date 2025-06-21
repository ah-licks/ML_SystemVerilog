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
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__learning_rate 
        = vlSymsp->TOP__FixedPoint.ONE;
    vlSelfRef.BenchPerceptronIntroduction__DOT__rst = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__rst = 0U;
    VL_WRITEF_NX("Starting AND gate training...\nTime\tInputs\tExpected\tPrediction\n----\t------\t--------\t----------\n\n=== Epoch 0 ===\n",0);
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 0U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__epoch = 1U;
    VL_WRITEF_NX("\n=== Epoch 1 ===\n",0);
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 0U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__epoch = 2U;
    VL_WRITEF_NX("\n=== Epoch 2 ===\n",0);
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 0U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__epoch = 3U;
    VL_WRITEF_NX("\n=== Epoch 3 ===\n",0);
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 0U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__epoch = 4U;
    VL_WRITEF_NX("\n=== Epoch 4 ===\n",0);
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 0U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__epoch = 5U;
    VL_WRITEF_NX("\n=== Epoch 5 ===\n",0);
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 0U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__epoch = 6U;
    VL_WRITEF_NX("\n=== Epoch 6 ===\n",0);
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 0U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__epoch = 7U;
    VL_WRITEF_NX("\n=== Epoch 7 ===\n",0);
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 0U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__epoch = 8U;
    VL_WRITEF_NX("\n=== Epoch 8 ===\n",0);
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 0U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__epoch = 9U;
    VL_WRITEF_NX("\n=== Epoch 9 ===\n",0);
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 0U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%0t\t[%20d,%20d]\t%20d\t\t%20d\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i = 4U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__epoch = 0xaU;
    VL_WRITEF_NX("\n=== Final Testing Phase ===\n",0);
    vlSelfRef.BenchPerceptronIntroduction__DOT__training = 0U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__correct = 0U;
    vlSelfRef.BenchPerceptronIntroduction__DOT__example = 0U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.BenchPerceptronIntroduction__DOT__prediction 
         == vlSelfRef.BenchPerceptronIntroduction__DOT__expected)) {
        vlSelfRef.BenchPerceptronIntroduction__DOT__correct 
            = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__correct);
    }
    VL_WRITEF_NX("Test [%20d,%20d] -> %20d (expected %20d)\n",0,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk4__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.BenchPerceptronIntroduction__DOT__prediction 
         == vlSelfRef.BenchPerceptronIntroduction__DOT__expected)) {
        vlSelfRef.BenchPerceptronIntroduction__DOT__correct 
            = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__correct);
    }
    VL_WRITEF_NX("Test [%20d,%20d] -> %20d (expected %20d)\n",0,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk4__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.BenchPerceptronIntroduction__DOT__prediction 
         == vlSelfRef.BenchPerceptronIntroduction__DOT__expected)) {
        vlSelfRef.BenchPerceptronIntroduction__DOT__correct 
            = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__correct);
    }
    VL_WRITEF_NX("Test [%20d,%20d] -> %20d (expected %20d)\n",0,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk4__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         92);
    if ((vlSelfRef.BenchPerceptronIntroduction__DOT__prediction 
         == vlSelfRef.BenchPerceptronIntroduction__DOT__expected)) {
        vlSelfRef.BenchPerceptronIntroduction__DOT__correct 
            = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__correct);
    }
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Test [%20d,%20d] -> %20d (expected %20d)\n",0,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [0U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__values
                 [1U],64,vlSelfRef.BenchPerceptronIntroduction__DOT__prediction,
                 64,vlSelfRef.BenchPerceptronIntroduction__DOT__expected);
    vlSelfRef.BenchPerceptronIntroduction__DOT__example 
        = ((IData)(1U) + vlSelfRef.BenchPerceptronIntroduction__DOT__example);
    vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk4__DOT__i = 4U;
    VL_WRITEF_NX("\nClassification Accuracy: %11d/          4 (%0.1f%%)\n",0,
                 32,vlSelfRef.BenchPerceptronIntroduction__DOT__correct,
                 64,((100.0 * VL_ISTOR_D_I(32, vlSelfRef.BenchPerceptronIntroduction__DOT__correct)) 
                     / 4.0));
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h7b9e73b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge BenchPerceptronIntroduction.clk)", 
                                                         "src/Benches/BenchPerceptronIntroduction.sv", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("src/Benches/BenchPerceptronIntroduction.sv", 103, "");
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
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.BenchPerceptronIntroduction__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__BenchPerceptronIntroduction__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__BenchPerceptronIntroduction__DOT__clk__0 
        = vlSelfRef.BenchPerceptronIntroduction__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPerceptron___024root___dump_triggers__act(vlSelf);
    }
#endif
}
