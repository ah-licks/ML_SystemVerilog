// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPerceptron.h for the primary calling header

#ifndef VERILATED_VPERCEPTRON___024ROOT_H_
#define VERILATED_VPERCEPTRON___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VPerceptron__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPerceptron___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ BenchPerceptron__DOT__clk;
    CData/*0:0*/ BenchPerceptron__DOT__rst;
    CData/*0:0*/ BenchPerceptron__DOT__training;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__BenchPerceptron__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ BenchPerceptron__DOT__activation;
    IData/*31:0*/ BenchPerceptron__DOT__correct;
    IData/*31:0*/ BenchPerceptron__DOT__unnamedblk1__DOT__epoch;
    IData/*31:0*/ BenchPerceptron__DOT__perceptron__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ BenchPerceptron__DOT__perceptron__DOT__unnamedblk4__DOT__i;
    IData/*31:0*/ BenchPerceptron__DOT__perceptron__DOT__unnamedblk5__DOT__i;
    IData/*31:0*/ BenchPerceptron__DOT__perceptron__DOT__unnamedblk7__DOT__i;
    IData/*31:0*/ BenchPerceptron__DOT__perceptron__DOT__unnamedblk8__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    double BenchPerceptron__DOT__learning_rate;
    double BenchPerceptron__DOT__prediction;
    double BenchPerceptron__DOT__expected;
    double BenchPerceptron__DOT__threshold;
    double BenchPerceptron__DOT__cost;
    double BenchPerceptron__DOT__perceptron__DOT__bias;
    double BenchPerceptron__DOT__perceptron__DOT__sum;
    double BenchPerceptron__DOT__perceptron__DOT__bias_gradient;
    double BenchPerceptron__DOT__perceptron__DOT__local_error_gradient;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hdf907d93__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;
    VlUnpacked<double, 2> BenchPerceptron__DOT__values;
    VlUnpacked<double, 1> BenchPerceptron__DOT__next_layer_weights;
    VlUnpacked<double, 1> BenchPerceptron__DOT__error_gradient_next_layer;
    VlUnpacked<double, 2> BenchPerceptron__DOT__current_weights;
    VlUnpacked<double, 2> BenchPerceptron__DOT__perceptron__DOT__weights;
    VlUnpacked<double, 2> BenchPerceptron__DOT__perceptron__DOT__weight_gradient;

    // INTERNAL VARIABLES
    VPerceptron__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPerceptron___024root(VPerceptron__Syms* symsp, const char* v__name);
    ~VPerceptron___024root();
    VL_UNCOPYABLE(VPerceptron___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
