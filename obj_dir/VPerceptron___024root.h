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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ BenchPerceptron__DOT__clk;
        CData/*0:0*/ BenchPerceptron__DOT__rst;
        CData/*0:0*/ BenchPerceptron__DOT__training;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__BenchPerceptron__DOT__clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ BenchPerceptron__DOT__activation;
        IData/*31:0*/ BenchPerceptron__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ BenchPerceptron__DOT__perceptron__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ BenchPerceptron__DOT__perceptron__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ BenchPerceptron__DOT__perceptron__DOT__unnamedblk7__DOT__i;
        IData/*31:0*/ BenchPerceptron__DOT__perceptron__DOT__unnamedblk10__DOT__i;
        IData/*31:0*/ BenchPerceptron__DOT__perceptron__DOT__unnamedblk11__DOT__i;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__13__tmp;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__16__tmp;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__17__tmp;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__19__tmp;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__21__tmp;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__22__tmp;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__24__tmp;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__25__tmp;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__35__tmp;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__40__tmp;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ BenchPerceptron__DOT__learning_rate;
        QData/*63:0*/ BenchPerceptron__DOT__prediction;
        QData/*63:0*/ BenchPerceptron__DOT__expected;
        QData/*63:0*/ BenchPerceptron__DOT__cost;
        QData/*63:0*/ BenchPerceptron__DOT__unnamedblk1__DOT__diff;
        QData/*63:0*/ BenchPerceptron__DOT__perceptron__DOT__bias;
        QData/*63:0*/ BenchPerceptron__DOT__perceptron__DOT__sum;
        QData/*63:0*/ BenchPerceptron__DOT__perceptron__DOT__bias_gradient;
        QData/*63:0*/ BenchPerceptron__DOT__perceptron__DOT__local_error_gradient;
        QData/*63:0*/ BenchPerceptron__DOT__perceptron__DOT__unnamedblk3__DOT__unnamedblk4__DOT__sigmoid_derivative;
        QData/*63:0*/ BenchPerceptron__DOT__perceptron__DOT__unnamedblk5__DOT__unnamedblk6__DOT__tanh_derivative;
        QData/*63:0*/ BenchPerceptron__DOT__perceptron__DOT__unnamedblk7__DOT__unnamedblk8__DOT__relu_derivative;
        QData/*63:0*/ BenchPerceptron__DOT__perceptron__DOT__predict__DOT__sigmoid_out;
        QData/*63:0*/ BenchPerceptron__DOT__perceptron__DOT__predict__DOT__tanh_out;
        QData/*63:0*/ __Vfunc_sfp_mul__13__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__13__a;
        QData/*63:0*/ __Vfunc_sfp_mul__13__b;
        QData/*63:0*/ __Vfunc_sfp_sub__14__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_sub__14__b;
        QData/*63:0*/ __Vfunc_sfp_add__15__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_add__15__a;
        QData/*63:0*/ __Vfunc_sfp_add__15__b;
        QData/*63:0*/ __Vfunc_sfp_mul__16__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__16__a;
        QData/*63:0*/ __Vfunc_sfp_mul__16__b;
        QData/*63:0*/ __Vfunc_sfp_mul__17__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__17__a;
        QData/*63:0*/ __Vfunc_sfp_mul__17__b;
        QData/*63:0*/ __Vfunc_sfp_sub__18__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_sub__18__b;
        QData/*63:0*/ __Vfunc_sfp_mul__19__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__19__a;
        QData/*63:0*/ __Vfunc_sfp_mul__19__b;
        QData/*63:0*/ __Vfunc_sfp_add__20__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_add__20__a;
        QData/*63:0*/ __Vfunc_sfp_add__20__b;
        QData/*63:0*/ __Vfunc_sfp_mul__21__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__21__a;
        QData/*63:0*/ __Vfunc_sfp_mul__21__b;
        QData/*63:0*/ __Vfunc_sfp_mul__22__Vfuncout;
    };
    struct {
        QData/*63:0*/ __Vfunc_sfp_mul__22__a;
        QData/*63:0*/ __Vfunc_sfp_mul__22__b;
        QData/*63:0*/ __Vfunc_sfp_add__23__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_add__23__a;
        QData/*63:0*/ __Vfunc_sfp_add__23__b;
        QData/*63:0*/ __Vfunc_sfp_mul__24__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__24__a;
        QData/*63:0*/ __Vfunc_sfp_mul__24__b;
        QData/*63:0*/ __Vfunc_sfp_mul__25__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__25__a;
        QData/*63:0*/ __Vfunc_sfp_mul__25__b;
        QData/*63:0*/ __Vfunc_sfp_mul__35__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__35__a;
        QData/*63:0*/ __Vfunc_sfp_mul__40__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__40__a;
        VlUnpacked<QData/*63:0*/, 2> BenchPerceptron__DOT__values;
        VlUnpacked<QData/*63:0*/, 1> BenchPerceptron__DOT__next_layer_weights;
        VlUnpacked<QData/*63:0*/, 1> BenchPerceptron__DOT__error_gradient_next_layer;
        VlUnpacked<QData/*63:0*/, 2> BenchPerceptron__DOT__current_weights;
        VlUnpacked<QData/*63:0*/, 2> BenchPerceptron__DOT__perceptron__DOT__weights;
        VlUnpacked<QData/*63:0*/, 2> BenchPerceptron__DOT__perceptron__DOT__weight_gradient;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hdf907d93__0;
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
