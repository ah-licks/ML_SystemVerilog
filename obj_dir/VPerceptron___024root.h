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
    CData/*0:0*/ BenchPerceptronIntroduction__DOT__clk;
    CData/*0:0*/ BenchPerceptronIntroduction__DOT__training;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__BenchPerceptronIntroduction__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr_h6a988f12__1;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ BenchPerceptronIntroduction__DOT__perceptron_i__DOT__state;
    IData/*31:0*/ BenchPerceptronIntroduction__DOT__perceptron_i__DOT__epoch_count;
    IData/*31:0*/ BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sample_idx;
    IData/*31:0*/ BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk4__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    double BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias;
    double BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum;
    double BenchPerceptronIntroduction__DOT__perceptron_i__DOT__train_sum;
    double BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hfa9fd802__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;
    VlUnpacked<double, 2> BenchPerceptronIntroduction__DOT__values;
    VlUnpacked<VlUnpacked<double, 2>, 4> BenchPerceptronIntroduction__DOT__train_values;
    VlUnpacked<double, 4> BenchPerceptronIntroduction__DOT__expected;
    VlUnpacked<double, 2> BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights;

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
