// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPERCEPTRON__SYMS_H_
#define VERILATED_VPERCEPTRON__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VPerceptron.h"

// INCLUDE MODULE CLASSES
#include "VPerceptron___024root.h"
#include "VPerceptron___024unit.h"
#include "VPerceptron_FixedPoint.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VPerceptron__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VPerceptron* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VPerceptron___024root          TOP;
    VPerceptron_FixedPoint         TOP__FixedPoint;

    // CONSTRUCTORS
    VPerceptron__Syms(VerilatedContext* contextp, const char* namep, VPerceptron* modelp);
    ~VPerceptron__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
