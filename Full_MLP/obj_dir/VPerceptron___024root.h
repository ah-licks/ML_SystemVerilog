// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPerceptron.h for the primary calling header

#ifndef VERILATED_VPERCEPTRON___024ROOT_H_
#define VERILATED_VPERCEPTRON___024ROOT_H_  // guard

#include "verilated.h"
class VPerceptron_FixedPoint;


class VPerceptron__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPerceptron___024root final : public VerilatedModule {
  public:
    // CELLS
    VPerceptron_FixedPoint* __PVT__FixedPoint;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ Testing__DOT__random;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

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
