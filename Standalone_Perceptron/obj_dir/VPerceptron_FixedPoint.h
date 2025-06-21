// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPerceptron.h for the primary calling header

#ifndef VERILATED_VPERCEPTRON_FIXEDPOINT_H_
#define VERILATED_VPERCEPTRON_FIXEDPOINT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VPerceptron__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPerceptron_FixedPoint final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    QData/*63:0*/ ONE;

    // INTERNAL VARIABLES
    VPerceptron__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPerceptron_FixedPoint(VPerceptron__Syms* symsp, const char* v__name);
    ~VPerceptron_FixedPoint();
    VL_UNCOPYABLE(VPerceptron_FixedPoint);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
