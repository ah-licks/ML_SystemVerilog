// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPerceptron.h for the primary calling header

#ifndef VERILATED_VPERCEPTRON___024ROOT_H_
#define VERILATED_VPERCEPTRON___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class VPerceptron_FixedPoint;


class VPerceptron__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPerceptron___024root final : public VerilatedModule {
  public:
    // CELLS
    VPerceptron_FixedPoint* __PVT__FixedPoint;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ BenchPerceptronIntroduction__DOT__clk;
    CData/*0:0*/ BenchPerceptronIntroduction__DOT__rst;
    CData/*0:0*/ BenchPerceptronIntroduction__DOT__training;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__BenchPerceptronIntroduction__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ BenchPerceptronIntroduction__DOT__example;
    IData/*31:0*/ BenchPerceptronIntroduction__DOT__correct;
    IData/*31:0*/ BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__epoch;
    IData/*31:0*/ BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ BenchPerceptronIntroduction__DOT__unnamedblk4__DOT__i;
    IData/*31:0*/ BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ BenchPerceptronIntroduction__DOT__data__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ BenchPerceptronIntroduction__DOT__data__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ BenchPerceptronIntroduction__DOT__learning_rate;
    QData/*63:0*/ BenchPerceptronIntroduction__DOT__prediction;
    QData/*63:0*/ BenchPerceptronIntroduction__DOT__expected;
    QData/*63:0*/ BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias;
    QData/*63:0*/ BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum;
    QData/*63:0*/ BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error;
    VlUnpacked<QData/*63:0*/, 2> BenchPerceptronIntroduction__DOT__values;
    VlUnpacked<QData/*63:0*/, 2> BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights;
    VlUnpacked<VlUnpacked<QData/*63:0*/, 2>, 8> BenchPerceptronIntroduction__DOT__data__DOT__input_data;
    VlUnpacked<QData/*63:0*/, 8> BenchPerceptronIntroduction__DOT__data__DOT__output_data;
    VlUnpacked<QData/*63:0*/, 16> BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7b9e73b7__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

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
