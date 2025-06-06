// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron__Syms.h"
#include "VPerceptron___024unit.h"

void VPerceptron___024unit___ctor_var_reset(VPerceptron___024unit* vlSelf);

VPerceptron___024unit::VPerceptron___024unit(VPerceptron__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPerceptron___024unit___ctor_var_reset(this);
}

void VPerceptron___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VPerceptron___024unit::~VPerceptron___024unit() {
}
