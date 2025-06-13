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
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgQData(oldp+0,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__next_layer_weights[0]),64);
        bufp->chgQData(oldp+2,(vlSymsp->TOP__FixedPoint.ONE),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+4,(vlSelfRef.BenchMLP__DOT__rst));
        bufp->chgQData(oldp+5,(vlSelfRef.BenchMLP__DOT__values[0]),64);
        bufp->chgQData(oldp+7,(vlSelfRef.BenchMLP__DOT__values[1]),64);
        bufp->chgQData(oldp+9,(vlSelfRef.BenchMLP__DOT__expected[0]),64);
        bufp->chgIData(oldp+11,(vlSelfRef.BenchMLP__DOT__hidden_activation),32);
        bufp->chgIData(oldp+12,(vlSelfRef.BenchMLP__DOT__output_activation),32);
        bufp->chgBit(oldp+13,(vlSelfRef.BenchMLP__DOT__training));
        bufp->chgQData(oldp+14,(vlSelfRef.BenchMLP__DOT__learning_rate),64);
        bufp->chgQData(oldp+16,(vlSelfRef.BenchMLP__DOT__threshold),64);
        bufp->chgIData(oldp+18,(vlSelfRef.BenchMLP__DOT__correct),32);
        bufp->chgIData(oldp+19,(vlSelfRef.BenchMLP__DOT__unnamedblk1__DOT__epoch),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgQData(oldp+20,(vlSelfRef.BenchMLP__DOT__prediction[0]),64);
        bufp->chgQData(oldp+22,(vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions[0]),64);
        bufp->chgQData(oldp+24,(vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_predictions[1]),64);
        bufp->chgQData(oldp+26,(vlSelfRef.BenchMLP__DOT__mlp__DOT__output_error_gradients[0]),64);
        bufp->chgQData(oldp+28,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__prediction),64);
        bufp->chgQData(oldp+30,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__error_gradient),64);
        bufp->chgQData(oldp+32,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__sum),64);
        bufp->chgQData(oldp+34,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[0]),64);
        bufp->chgQData(oldp+36,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[1]),64);
        bufp->chgQData(oldp+38,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias_gradient),64);
        bufp->chgIData(oldp+40,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+41,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+42,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+43,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i),32);
        bufp->chgQData(oldp+44,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__prediction),64);
        bufp->chgQData(oldp+46,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__error_gradient),64);
        bufp->chgQData(oldp+48,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__sum),64);
        bufp->chgQData(oldp+50,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[0]),64);
        bufp->chgQData(oldp+52,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[1]),64);
        bufp->chgQData(oldp+54,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias_gradient),64);
        bufp->chgIData(oldp+56,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+57,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+58,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+59,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i),32);
        bufp->chgQData(oldp+60,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer[0]),64);
        bufp->chgQData(oldp+62,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__prediction),64);
        bufp->chgQData(oldp+64,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__error_gradient),64);
        bufp->chgQData(oldp+66,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__sum),64);
        bufp->chgQData(oldp+68,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[0]),64);
        bufp->chgQData(oldp+70,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[1]),64);
        bufp->chgQData(oldp+72,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias_gradient),64);
        bufp->chgIData(oldp+74,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+75,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+76,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+77,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+78,(vlSelfRef.BenchMLP__DOT__mlp__DOT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgQData(oldp+79,(vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
                                [0U][0U]),64);
        bufp->chgQData(oldp+81,(vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
                                [1U][0U]),64);
        bufp->chgQData(oldp+83,(vlSelfRef.BenchMLP__DOT__mlp__DOT__output_weights
                                [0U][0U]),64);
        bufp->chgQData(oldp+85,(vlSelfRef.BenchMLP__DOT__mlp__DOT__output_weights
                                [0U][1U]),64);
        bufp->chgQData(oldp+87,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights[0]),64);
        bufp->chgQData(oldp+89,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__current_weights[0]),64);
        bufp->chgQData(oldp+91,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__current_weights[1]),64);
        bufp->chgQData(oldp+93,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights[0]),64);
        bufp->chgQData(oldp+95,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__weights[1]),64);
        bufp->chgQData(oldp+97,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__bias),64);
        bufp->chgIData(oldp+99,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+100,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i),32);
        bufp->chgQData(oldp+101,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights[0]),64);
        bufp->chgQData(oldp+103,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__current_weights[0]),64);
        bufp->chgQData(oldp+105,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__current_weights[1]),64);
        bufp->chgQData(oldp+107,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights[0]),64);
        bufp->chgQData(oldp+109,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__weights[1]),64);
        bufp->chgQData(oldp+111,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__bias),64);
        bufp->chgIData(oldp+113,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+114,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i),32);
        bufp->chgQData(oldp+115,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__current_weights[0]),64);
        bufp->chgQData(oldp+117,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer__BRA__0__KET____DOT__output_perceptron__current_weights[1]),64);
        bufp->chgQData(oldp+119,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights[0]),64);
        bufp->chgQData(oldp+121,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__weights[1]),64);
        bufp->chgQData(oldp+123,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__bias),64);
        bufp->chgIData(oldp+125,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+126,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk8__DOT__i),32);
        bufp->chgIData(oldp+127,(vlSymsp->TOP__FixedPoint.lcg_next__Vstatic__current),32);
    }
    bufp->chgBit(oldp+128,(vlSelfRef.BenchMLP__DOT__clk));
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
