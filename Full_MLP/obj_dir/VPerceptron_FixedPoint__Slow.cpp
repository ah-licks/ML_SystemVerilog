// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPerceptron.h for the primary calling header

#include "VPerceptron__pch.h"
#include "VPerceptron_FixedPoint.h"
#include "VPerceptron__Syms.h"

void VPerceptron_FixedPoint___ctor_var_reset(VPerceptron_FixedPoint* vlSelf);

VPerceptron_FixedPoint::VPerceptron_FixedPoint(VPerceptron__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPerceptron_FixedPoint___ctor_var_reset(this);
}

void VPerceptron_FixedPoint::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VPerceptron_FixedPoint::~VPerceptron_FixedPoint() {
}
