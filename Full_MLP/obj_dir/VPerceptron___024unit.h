// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPerceptron.h for the primary calling header

#ifndef VERILATED_VPERCEPTRON___024UNIT_H_
#define VERILATED_VPERCEPTRON___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VPerceptron__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPerceptron___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VPerceptron__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPerceptron___024unit(VPerceptron__Syms* symsp, const char* v__name);
    ~VPerceptron___024unit();
    VL_UNCOPYABLE(VPerceptron___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
