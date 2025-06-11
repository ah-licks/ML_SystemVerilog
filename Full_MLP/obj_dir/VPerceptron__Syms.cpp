// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VPerceptron__pch.h"
#include "VPerceptron.h"
#include "VPerceptron___024root.h"
#include "VPerceptron___024unit.h"
#include "VPerceptron_FixedPoint.h"

// FUNCTIONS
VPerceptron__Syms::~VPerceptron__Syms()
{
}

VPerceptron__Syms::VPerceptron__Syms(VerilatedContext* contextp, const char* namep, VPerceptron* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__FixedPoint{this, Verilated::catName(namep, "FixedPoint")}
{
        // Check resources
        Verilated::stackCheck(47);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__FixedPoint = &TOP__FixedPoint;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__FixedPoint.__Vconfigure(true);
}
