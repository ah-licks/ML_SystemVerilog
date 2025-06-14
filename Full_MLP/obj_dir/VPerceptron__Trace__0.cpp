// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPerceptron__Syms.h"


void VPerceptron___024root__trace_chg_0_sub_0(VPerceptron___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPerceptron___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root__trace_chg_0\n"); );
    // Init
    VPerceptron___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPerceptron___024root*>(voidSelf);
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPerceptron___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VPerceptron___024root__trace_chg_0_sub_0(VPerceptron___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root__trace_chg_0_sub_0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.BenchMLP__DOT__rst));
        bufp->chgDouble(oldp+1,(vlSelfRef.BenchMLP__DOT__values[0]));
        bufp->chgDouble(oldp+3,(vlSelfRef.BenchMLP__DOT__values[1]));
        bufp->chgDouble(oldp+5,(vlSelfRef.BenchMLP__DOT__expected[0]));
        bufp->chgIData(oldp+7,(vlSelfRef.BenchMLP__DOT__hidden_activation),32);
        bufp->chgIData(oldp+8,(vlSelfRef.BenchMLP__DOT__output_activation),32);
        bufp->chgBit(oldp+9,(vlSelfRef.BenchMLP__DOT__training));
        bufp->chgDouble(oldp+10,(vlSelfRef.BenchMLP__DOT__learning_rate));
        bufp->chgDouble(oldp+12,(vlSelfRef.BenchMLP__DOT__threshold));
        bufp->chgIData(oldp+14,(vlSelfRef.BenchMLP__DOT__correct),32);
        bufp->chgIData(oldp+15,(vlSelfRef.BenchMLP__DOT__unnamedblk1__DOT__epoch),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgDouble(oldp+16,(vlSelfRef.BenchMLP__DOT__prediction[0]));
        bufp->chgDouble(oldp+18,(vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions[0]));
        bufp->chgDouble(oldp+20,(vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions[1]));
        bufp->chgDouble(oldp+22,(vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions[2]));
        bufp->chgDouble(oldp+24,(vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions[3]));
        bufp->chgDouble(oldp+26,(vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients[0]));
        bufp->chgDouble(oldp+28,(vlSelfRef.BenchMLP__DOT__mlp__DOT__activation_gradients[0]));
        bufp->chgDouble(oldp+30,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction));
        bufp->chgDouble(oldp+32,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__error_gradient));
        bufp->chgDouble(oldp+34,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum));
        bufp->chgDouble(oldp+36,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[0]));
        bufp->chgDouble(oldp+38,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[1]));
        bufp->chgDouble(oldp+40,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias_gradient));
        bufp->chgDouble(oldp+42,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient));
        bufp->chgIData(oldp+44,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+45,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+46,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i),32);
        bufp->chgDouble(oldp+47,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction));
        bufp->chgDouble(oldp+49,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__error_gradient));
        bufp->chgDouble(oldp+51,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum));
        bufp->chgDouble(oldp+53,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[0]));
        bufp->chgDouble(oldp+55,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[1]));
        bufp->chgDouble(oldp+57,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias_gradient));
        bufp->chgDouble(oldp+59,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient));
        bufp->chgIData(oldp+61,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+62,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+63,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i),32);
        bufp->chgDouble(oldp+64,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__prediction));
        bufp->chgDouble(oldp+66,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__error_gradient));
        bufp->chgDouble(oldp+68,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__sum));
        bufp->chgDouble(oldp+70,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weight_gradient[0]));
        bufp->chgDouble(oldp+72,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weight_gradient[1]));
        bufp->chgDouble(oldp+74,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__bias_gradient));
        bufp->chgDouble(oldp+76,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__local_error_gradient));
        bufp->chgIData(oldp+78,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+79,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+80,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i),32);
        bufp->chgDouble(oldp+81,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__prediction));
        bufp->chgDouble(oldp+83,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__error_gradient));
        bufp->chgDouble(oldp+85,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__sum));
        bufp->chgDouble(oldp+87,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weight_gradient[0]));
        bufp->chgDouble(oldp+89,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weight_gradient[1]));
        bufp->chgDouble(oldp+91,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__bias_gradient));
        bufp->chgDouble(oldp+93,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__local_error_gradient));
        bufp->chgIData(oldp+95,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+96,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+97,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i),32);
        bufp->chgDouble(oldp+98,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer[0]));
        bufp->chgDouble(oldp+100,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__prediction));
        bufp->chgDouble(oldp+102,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient));
        bufp->chgDouble(oldp+104,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum));
        bufp->chgDouble(oldp+106,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[0]));
        bufp->chgDouble(oldp+108,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[1]));
        bufp->chgDouble(oldp+110,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[2]));
        bufp->chgDouble(oldp+112,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[3]));
        bufp->chgDouble(oldp+114,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias_gradient));
        bufp->chgDouble(oldp+116,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient));
        bufp->chgIData(oldp+118,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+119,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+120,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk5__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgDouble(oldp+121,(vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
                                  [0U][0U]));
        bufp->chgDouble(oldp+123,(vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
                                  [1U][0U]));
        bufp->chgDouble(oldp+125,(vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
                                  [2U][0U]));
        bufp->chgDouble(oldp+127,(vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
                                  [3U][0U]));
        bufp->chgDouble(oldp+129,(vlSelfRef.BenchMLP__DOT__mlp__DOT__output_weights
                                  [0U][0U]));
        bufp->chgDouble(oldp+131,(vlSelfRef.BenchMLP__DOT__mlp__DOT__output_weights
                                  [0U][1U]));
        bufp->chgDouble(oldp+133,(vlSelfRef.BenchMLP__DOT__mlp__DOT__output_weights
                                  [0U][2U]));
        bufp->chgDouble(oldp+135,(vlSelfRef.BenchMLP__DOT__mlp__DOT__output_weights
                                  [0U][3U]));
        bufp->chgDouble(oldp+137,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights[0]));
        bufp->chgDouble(oldp+139,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__current_weights[0]));
        bufp->chgDouble(oldp+141,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__current_weights[1]));
        bufp->chgDouble(oldp+143,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights[0]));
        bufp->chgDouble(oldp+145,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights[1]));
        bufp->chgDouble(oldp+147,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias));
        bufp->chgIData(oldp+149,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+150,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i),32);
        bufp->chgDouble(oldp+151,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights[0]));
        bufp->chgDouble(oldp+153,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__current_weights[0]));
        bufp->chgDouble(oldp+155,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__current_weights[1]));
        bufp->chgDouble(oldp+157,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights[0]));
        bufp->chgDouble(oldp+159,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights[1]));
        bufp->chgDouble(oldp+161,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias));
        bufp->chgIData(oldp+163,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+164,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i),32);
        bufp->chgDouble(oldp+165,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__next_layer_weights[0]));
        bufp->chgDouble(oldp+167,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__current_weights[0]));
        bufp->chgDouble(oldp+169,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__current_weights[1]));
        bufp->chgDouble(oldp+171,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights[0]));
        bufp->chgDouble(oldp+173,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__weights[1]));
        bufp->chgDouble(oldp+175,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__bias));
        bufp->chgIData(oldp+177,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+178,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__2__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i),32);
        bufp->chgDouble(oldp+179,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__next_layer_weights[0]));
        bufp->chgDouble(oldp+181,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__current_weights[0]));
        bufp->chgDouble(oldp+183,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__current_weights[1]));
        bufp->chgDouble(oldp+185,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights[0]));
        bufp->chgDouble(oldp+187,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__weights[1]));
        bufp->chgDouble(oldp+189,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__bias));
        bufp->chgIData(oldp+191,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+192,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__3__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i),32);
        bufp->chgDouble(oldp+193,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__current_weights[0]));
        bufp->chgDouble(oldp+195,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__current_weights[1]));
        bufp->chgDouble(oldp+197,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__current_weights[2]));
        bufp->chgDouble(oldp+199,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__current_weights[3]));
        bufp->chgDouble(oldp+201,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights[0]));
        bufp->chgDouble(oldp+203,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights[1]));
        bufp->chgDouble(oldp+205,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights[2]));
        bufp->chgDouble(oldp+207,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights[3]));
        bufp->chgDouble(oldp+209,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias));
        bufp->chgIData(oldp+211,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+212,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk8__DOT__i),32);
    }
    bufp->chgBit(oldp+213,(vlSelfRef.BenchMLP__DOT__clk));
    bufp->chgDouble(oldp+214,((-1.0 * ((vlSelfRef.BenchMLP__DOT__expected
                                        [0U] * log(
                                                   (1.00000000000000002e-08 
                                                    + 
                                                    vlSelfRef.BenchMLP__DOT__prediction
                                                    [0U]))) 
                                       + ((1.0 - vlSelfRef.BenchMLP__DOT__expected
                                           [0U]) * 
                                          log((1.00000000000000002e-08 
                                               + (1.0 
                                                  - 
                                                  vlSelfRef.BenchMLP__DOT__prediction
                                                  [0U]))))))));
    bufp->chgDouble(oldp+216,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__next_layer_weights[0]));
}

void VPerceptron___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root__trace_cleanup\n"); );
    // Init
    VPerceptron___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPerceptron___024root*>(voidSelf);
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
