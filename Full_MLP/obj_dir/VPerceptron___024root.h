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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ BenchPerceptron__DOT__clk;
        CData/*0:0*/ BenchPerceptron__DOT__rst;
        CData/*0:0*/ BenchPerceptron__DOT__training;
        CData/*0:0*/ __Vfunc_sfp_div__1__sign_bit;
        CData/*0:0*/ __Vfunc_sfp_div__5__sign_bit;
        CData/*0:0*/ __Vfunc_sfp_div__20__sign_bit;
        CData/*0:0*/ __Vfunc_sfp_div__23__sign_bit;
        CData/*0:0*/ __Vfunc_sfp_div__41__sign_bit;
        CData/*0:0*/ __Vfunc_sfp_div__44__sign_bit;
        CData/*0:0*/ __Vfunc_sfp_div__50__sign_bit;
        CData/*0:0*/ __Vfunc_sfp_div__53__sign_bit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__BenchPerceptron__DOT__clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ BenchPerceptron__DOT__activation;
        IData/*31:0*/ BenchPerceptron__DOT__correct;
        IData/*31:0*/ BenchPerceptron__DOT__unnamedblk1__DOT__epoch;
        IData/*31:0*/ BenchPerceptron__DOT__perceptron__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ BenchPerceptron__DOT__perceptron__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ BenchPerceptron__DOT__perceptron__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ BenchPerceptron__DOT__perceptron__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ BenchPerceptron__DOT__perceptron__DOT__unnamedblk7__DOT__i;
        IData/*31:0*/ BenchPerceptron__DOT__perceptron__DOT__unnamedblk8__DOT__i;
        VlWide<4>/*127:0*/ __Vfunc_sfp_div__1__remainder;
        VlWide<4>/*127:0*/ __Vfunc_sfp_div__1__b_ext;
        VlWide<4>/*127:0*/ __Vfunc_sfp_div__5__remainder;
        VlWide<4>/*127:0*/ __Vfunc_sfp_div__5__b_ext;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__10__tmp;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__11__tmp;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__12__tmp;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__14__tmp;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__15__tmp;
        IData/*31:0*/ __Vfunc_sfp_pow__17__b;
        IData/*31:0*/ __Vfunc_sfp_pow__17__unnamedblk2__DOT__i;
        VlWide<4>/*127:0*/ __Vfunc_sfp_div__20__remainder;
        VlWide<4>/*127:0*/ __Vfunc_sfp_div__20__b_ext;
        IData/*31:0*/ __Vfunc_sfp_exp__22__unnamedblk3__DOT__i;
        IData/*31:0*/ __Vfunc_sfp_exp__22__max_terms;
        VlWide<4>/*127:0*/ __Vfunc_sfp_div__23__remainder;
        VlWide<4>/*127:0*/ __Vfunc_sfp_div__23__b_ext;
        IData/*31:0*/ __Vfunc_int_to_sfp__24__n;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__25__tmp;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__28__tmp;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__30__tmp;
        VlWide<4>/*127:0*/ __Vfunc_sfp_div__41__remainder;
        VlWide<4>/*127:0*/ __Vfunc_sfp_div__41__b_ext;
        IData/*31:0*/ __Vfunc_sfp_exp__43__unnamedblk3__DOT__i;
        IData/*31:0*/ __Vfunc_sfp_exp__43__max_terms;
        VlWide<4>/*127:0*/ __Vfunc_sfp_div__44__remainder;
        VlWide<4>/*127:0*/ __Vfunc_sfp_div__44__b_ext;
        IData/*31:0*/ __Vfunc_int_to_sfp__45__n;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__46__tmp;
        VlWide<4>/*127:0*/ __Vfunc_sfp_div__50__remainder;
        VlWide<4>/*127:0*/ __Vfunc_sfp_div__50__b_ext;
        IData/*31:0*/ __Vfunc_sfp_exp__52__unnamedblk3__DOT__i;
        IData/*31:0*/ __Vfunc_sfp_exp__52__max_terms;
        VlWide<4>/*127:0*/ __Vfunc_sfp_div__53__remainder;
        VlWide<4>/*127:0*/ __Vfunc_sfp_div__53__b_ext;
        IData/*31:0*/ __Vfunc_int_to_sfp__54__n;
        VlWide<4>/*127:0*/ __Vfunc_sfp_mul__55__tmp;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ BenchPerceptron__DOT__learning_rate;
        QData/*63:0*/ BenchPerceptron__DOT__prediction;
        QData/*63:0*/ BenchPerceptron__DOT__expected;
    };
    struct {
        QData/*63:0*/ BenchPerceptron__DOT__threshold;
        QData/*63:0*/ BenchPerceptron__DOT__perceptron__DOT__bias;
        QData/*63:0*/ BenchPerceptron__DOT__perceptron__DOT__sum;
        QData/*63:0*/ BenchPerceptron__DOT__perceptron__DOT__bias_gradient;
        QData/*63:0*/ BenchPerceptron__DOT__perceptron__DOT__local_error_gradient;
        QData/*63:0*/ __Vfunc_sfp_sub__0__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_sub__0__a;
        QData/*63:0*/ __Vfunc_sfp_sub__0__b;
        QData/*63:0*/ __Vfunc_sfp_div__1__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_div__1__a;
        QData/*63:0*/ __Vfunc_sfp_div__1__b;
        QData/*63:0*/ __Vfunc_sfp_div__1__result;
        QData/*63:0*/ __Vfunc_sfp_div__1__abs_a;
        QData/*63:0*/ __Vfunc_sfp_div__1__abs_b;
        QData/*63:0*/ __Vfunc_sfp_sub__2__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_sub__2__a;
        QData/*63:0*/ __Vfunc_sfp_sub__2__b;
        QData/*63:0*/ __Vfunc_sfp_add__3__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_add__3__a;
        QData/*63:0*/ __Vfunc_sfp_sub__4__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_sub__4__a;
        QData/*63:0*/ __Vfunc_sfp_sub__4__b;
        QData/*63:0*/ __Vfunc_sfp_div__5__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_div__5__a;
        QData/*63:0*/ __Vfunc_sfp_div__5__b;
        QData/*63:0*/ __Vfunc_sfp_div__5__result;
        QData/*63:0*/ __Vfunc_sfp_div__5__abs_a;
        QData/*63:0*/ __Vfunc_sfp_div__5__abs_b;
        QData/*63:0*/ __Vfunc_sfp_add__6__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_add__6__a;
        QData/*63:0*/ __Vfunc_sfp_add__9__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_add__9__a;
        QData/*63:0*/ __Vfunc_sfp_add__9__b;
        QData/*63:0*/ __Vfunc_sfp_mul__10__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__10__a;
        QData/*63:0*/ __Vfunc_sfp_mul__10__b;
        QData/*63:0*/ __Vfunc_sfp_mul__11__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__11__a;
        QData/*63:0*/ __Vfunc_sfp_mul__11__b;
        QData/*63:0*/ __Vfunc_sfp_mul__12__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__12__a;
        QData/*63:0*/ __Vfunc_sfp_mul__12__b;
        QData/*63:0*/ __Vfunc_sfp_add__13__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_add__13__a;
        QData/*63:0*/ __Vfunc_sfp_add__13__b;
        QData/*63:0*/ __Vfunc_sfp_mul__14__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__14__a;
        QData/*63:0*/ __Vfunc_sfp_mul__14__b;
        QData/*63:0*/ __Vfunc_sfp_mul__15__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__15__a;
        QData/*63:0*/ __Vfunc_sfp_mul__15__b;
        QData/*63:0*/ __Vfunc_sfp_sub__16__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_sub__16__a;
        QData/*63:0*/ __Vfunc_sfp_sub__16__b;
        QData/*63:0*/ __Vfunc_sfp_pow__17__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_pow__17__a;
        QData/*63:0*/ __Vfunc_sfp_pow__17__result;
        QData/*63:0*/ __Vfunc_sfp_tanh__18__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_tanh__18__a;
        QData/*63:0*/ __Vfunc_sfp_sub__19__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_sub__19__a;
        QData/*63:0*/ __Vfunc_sfp_sub__19__b;
        QData/*63:0*/ __Vfunc_sfp_div__20__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_div__20__a;
    };
    struct {
        QData/*63:0*/ __Vfunc_sfp_div__20__b;
        QData/*63:0*/ __Vfunc_sfp_div__20__result;
        QData/*63:0*/ __Vfunc_sfp_div__20__abs_a;
        QData/*63:0*/ __Vfunc_sfp_div__20__abs_b;
        QData/*63:0*/ __Vfunc_sfp_add__21__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_add__21__a;
        QData/*63:0*/ __Vfunc_sfp_add__21__b;
        QData/*63:0*/ __Vfunc_sfp_exp__22__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_exp__22__a;
        QData/*63:0*/ __Vfunc_sfp_exp__22__result;
        QData/*63:0*/ __Vfunc_sfp_exp__22__term;
        QData/*63:0*/ __Vfunc_sfp_div__23__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_div__23__a;
        QData/*63:0*/ __Vfunc_sfp_div__23__b;
        QData/*63:0*/ __Vfunc_sfp_div__23__result;
        QData/*63:0*/ __Vfunc_sfp_div__23__abs_a;
        QData/*63:0*/ __Vfunc_sfp_div__23__abs_b;
        QData/*63:0*/ __Vfunc_int_to_sfp__24__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__25__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__25__a;
        QData/*63:0*/ __Vfunc_sfp_mul__25__b;
        QData/*63:0*/ __Vfunc_sfp_add__26__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_add__26__a;
        QData/*63:0*/ __Vfunc_sfp_add__26__b;
        QData/*63:0*/ __Vfunc_sfp_mul__28__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__28__a;
        QData/*63:0*/ __Vfunc_sfp_mul__28__b;
        QData/*63:0*/ __Vfunc_sfp_add__29__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_add__29__a;
        QData/*63:0*/ __Vfunc_sfp_add__29__b;
        QData/*63:0*/ __Vfunc_sfp_mul__30__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__30__a;
        QData/*63:0*/ __Vfunc_sfp_mul__30__b;
        QData/*63:0*/ __Vfunc_sfp_sigmoid__40__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_sigmoid__40__a;
        QData/*63:0*/ __Vfunc_sfp_div__41__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_div__41__a;
        QData/*63:0*/ __Vfunc_sfp_div__41__b;
        QData/*63:0*/ __Vfunc_sfp_div__41__result;
        QData/*63:0*/ __Vfunc_sfp_div__41__abs_a;
        QData/*63:0*/ __Vfunc_sfp_div__41__abs_b;
        QData/*63:0*/ __Vfunc_sfp_add__42__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_add__42__a;
        QData/*63:0*/ __Vfunc_sfp_add__42__b;
        QData/*63:0*/ __Vfunc_sfp_exp__43__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_exp__43__a;
        QData/*63:0*/ __Vfunc_sfp_exp__43__result;
        QData/*63:0*/ __Vfunc_sfp_exp__43__term;
        QData/*63:0*/ __Vfunc_sfp_div__44__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_div__44__a;
        QData/*63:0*/ __Vfunc_sfp_div__44__b;
        QData/*63:0*/ __Vfunc_sfp_div__44__result;
        QData/*63:0*/ __Vfunc_sfp_div__44__abs_a;
        QData/*63:0*/ __Vfunc_sfp_div__44__abs_b;
        QData/*63:0*/ __Vfunc_int_to_sfp__45__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__46__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__46__a;
        QData/*63:0*/ __Vfunc_sfp_mul__46__b;
        QData/*63:0*/ __Vfunc_sfp_add__47__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_add__47__a;
        QData/*63:0*/ __Vfunc_sfp_add__47__b;
        QData/*63:0*/ __Vfunc_sfp_tanh__48__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_tanh__48__a;
        QData/*63:0*/ __Vfunc_sfp_sub__49__Vfuncout;
    };
    struct {
        QData/*63:0*/ __Vfunc_sfp_sub__49__a;
        QData/*63:0*/ __Vfunc_sfp_sub__49__b;
        QData/*63:0*/ __Vfunc_sfp_div__50__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_div__50__a;
        QData/*63:0*/ __Vfunc_sfp_div__50__b;
        QData/*63:0*/ __Vfunc_sfp_div__50__result;
        QData/*63:0*/ __Vfunc_sfp_div__50__abs_a;
        QData/*63:0*/ __Vfunc_sfp_div__50__abs_b;
        QData/*63:0*/ __Vfunc_sfp_add__51__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_add__51__a;
        QData/*63:0*/ __Vfunc_sfp_add__51__b;
        QData/*63:0*/ __Vfunc_sfp_exp__52__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_exp__52__a;
        QData/*63:0*/ __Vfunc_sfp_exp__52__result;
        QData/*63:0*/ __Vfunc_sfp_exp__52__term;
        QData/*63:0*/ __Vfunc_sfp_div__53__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_div__53__a;
        QData/*63:0*/ __Vfunc_sfp_div__53__b;
        QData/*63:0*/ __Vfunc_sfp_div__53__result;
        QData/*63:0*/ __Vfunc_sfp_div__53__abs_a;
        QData/*63:0*/ __Vfunc_sfp_div__53__abs_b;
        QData/*63:0*/ __Vfunc_int_to_sfp__54__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__55__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_mul__55__a;
        QData/*63:0*/ __Vfunc_sfp_mul__55__b;
        QData/*63:0*/ __Vfunc_sfp_add__56__Vfuncout;
        QData/*63:0*/ __Vfunc_sfp_add__56__a;
        QData/*63:0*/ __Vfunc_sfp_add__56__b;
        VlUnpacked<QData/*63:0*/, 2> BenchPerceptron__DOT__values;
        VlUnpacked<QData/*63:0*/, 1> BenchPerceptron__DOT__next_layer_weights;
        VlUnpacked<QData/*63:0*/, 1> BenchPerceptron__DOT__error_gradient_next_layer;
        VlUnpacked<QData/*63:0*/, 2> BenchPerceptron__DOT__current_weights;
        VlUnpacked<QData/*63:0*/, 2> BenchPerceptron__DOT__perceptron__DOT__weights;
        VlUnpacked<QData/*63:0*/, 2> BenchPerceptron__DOT__perceptron__DOT__weight_gradient;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
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
