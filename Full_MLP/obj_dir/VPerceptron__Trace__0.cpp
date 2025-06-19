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
        bufp->chgQData(oldp+0,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__next_layer_weights[0]),64);
        bufp->chgQData(oldp+2,(vlSymsp->TOP__FixedPoint.ONE),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+4,(vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+5,(vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+6,(vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+7,(vlSelfRef.BenchMLP__DOT__data__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+8,(vlSelfRef.BenchMLP__DOT__rst));
        bufp->chgIData(oldp+9,(vlSelfRef.BenchMLP__DOT__hidden_activation),32);
        bufp->chgIData(oldp+10,(vlSelfRef.BenchMLP__DOT__output_activation),32);
        bufp->chgBit(oldp+11,(vlSelfRef.BenchMLP__DOT__training));
        bufp->chgQData(oldp+12,(vlSelfRef.BenchMLP__DOT__learning_rate),64);
        bufp->chgIData(oldp+14,(vlSelfRef.BenchMLP__DOT__example),32);
        bufp->chgQData(oldp+15,(vlSelfRef.BenchMLP__DOT__threshold),64);
        bufp->chgIData(oldp+17,(vlSelfRef.BenchMLP__DOT__correct),32);
        bufp->chgBit(oldp+18,(vlSelfRef.BenchMLP__DOT__tmp_correct));
        bufp->chgIData(oldp+19,(vlSelfRef.BenchMLP__DOT__unnamedblk1__DOT__epoch),32);
        bufp->chgIData(oldp+20,(vlSelfRef.BenchMLP__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+21,(vlSelfRef.BenchMLP__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+22,(vlSelfRef.BenchMLP__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+23,(vlSelfRef.BenchMLP__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgQData(oldp+24,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient_next_layer[0]),64);
        bufp->chgQData(oldp+26,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient_next_layer[1]),64);
        bufp->chgQData(oldp+28,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer[0]),64);
        bufp->chgQData(oldp+30,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer[1]),64);
        bufp->chgQData(oldp+32,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient_next_layer[0]),64);
        bufp->chgQData(oldp+34,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer[0]),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgQData(oldp+36,(vlSelfRef.BenchMLP__DOT__values[0]),64);
        bufp->chgQData(oldp+38,(vlSelfRef.BenchMLP__DOT__values[1]),64);
        bufp->chgQData(oldp+40,(vlSelfRef.BenchMLP__DOT__expected[0]),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgQData(oldp+42,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__values[0]),64);
        bufp->chgQData(oldp+44,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__values[1]),64);
        bufp->chgQData(oldp+46,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__values[0]),64);
        bufp->chgQData(oldp+48,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__values[1]),64);
        bufp->chgQData(oldp+50,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__values[0]),64);
        bufp->chgQData(oldp+52,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__values[1]),64);
        bufp->chgQData(oldp+54,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__values[0]),64);
        bufp->chgQData(oldp+56,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__values[1]),64);
        bufp->chgQData(oldp+58,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__values[0]),64);
        bufp->chgQData(oldp+60,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__values[1]),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[5U] 
                      | vlSelfRef.__Vm_traceActivity
                      [7U])))) {
        bufp->chgQData(oldp+62,(vlSelfRef.BenchMLP__DOT__prediction[0]),64);
        bufp->chgQData(oldp+64,(vlSelfRef.BenchMLP__DOT__mlp__DOT__cost_gradients[0]),64);
        bufp->chgQData(oldp+66,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction),64);
        bufp->chgQData(oldp+68,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__sum),64);
        bufp->chgQData(oldp+70,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction),64);
        bufp->chgQData(oldp+72,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__sum),64);
        bufp->chgQData(oldp+74,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction),64);
        bufp->chgQData(oldp+76,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__sum),64);
        bufp->chgQData(oldp+78,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction),64);
        bufp->chgQData(oldp+80,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__sum),64);
        bufp->chgQData(oldp+82,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer[0]),64);
        bufp->chgQData(oldp+84,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__prediction),64);
        bufp->chgQData(oldp+86,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__error_gradient),64);
        bufp->chgQData(oldp+88,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__sum),64);
        bufp->chgQData(oldp+90,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[0]),64);
        bufp->chgQData(oldp+92,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[1]),64);
        bufp->chgQData(oldp+94,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__bias_gradient),64);
        bufp->chgQData(oldp+96,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient),64);
        bufp->chgIData(oldp+98,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+99,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+100,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+101,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+102,(vlSelfRef.BenchMLP__DOT__mlp__DOT__unnamedblk5__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[6U] 
                      | vlSelfRef.__Vm_traceActivity
                      [8U])))) {
        bufp->chgQData(oldp+103,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient),64);
        bufp->chgQData(oldp+105,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[0]),64);
        bufp->chgQData(oldp+107,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[1]),64);
        bufp->chgQData(oldp+109,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__bias_gradient),64);
        bufp->chgQData(oldp+111,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient),64);
        bufp->chgIData(oldp+113,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+114,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+115,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+116,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[6U] 
                      | vlSelfRef.__Vm_traceActivity
                      [9U])))) {
        bufp->chgQData(oldp+117,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient),64);
        bufp->chgQData(oldp+119,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[0]),64);
        bufp->chgQData(oldp+121,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[1]),64);
        bufp->chgQData(oldp+123,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__bias_gradient),64);
        bufp->chgQData(oldp+125,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient),64);
        bufp->chgIData(oldp+127,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+128,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+129,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+130,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[6U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xaU])))) {
        bufp->chgQData(oldp+131,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient),64);
        bufp->chgQData(oldp+133,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[0]),64);
        bufp->chgQData(oldp+135,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[1]),64);
        bufp->chgQData(oldp+137,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__bias_gradient),64);
        bufp->chgQData(oldp+139,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient),64);
        bufp->chgIData(oldp+141,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+142,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+143,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+144,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[6U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xbU])))) {
        bufp->chgQData(oldp+145,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient),64);
        bufp->chgQData(oldp+147,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[0]),64);
        bufp->chgQData(oldp+149,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[1]),64);
        bufp->chgQData(oldp+151,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__bias_gradient),64);
        bufp->chgQData(oldp+153,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient),64);
        bufp->chgIData(oldp+155,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+156,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+157,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+158,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgQData(oldp+159,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                                 [0U][0U][0U]),64);
        bufp->chgQData(oldp+161,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                                 [0U][0U][1U]),64);
        bufp->chgQData(oldp+163,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                                 [0U][1U][0U]),64);
        bufp->chgQData(oldp+165,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                                 [0U][1U][1U]),64);
        bufp->chgQData(oldp+167,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                                 [1U][0U][0U]),64);
        bufp->chgQData(oldp+169,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                                 [1U][0U][1U]),64);
        bufp->chgQData(oldp+171,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                                 [1U][1U][0U]),64);
        bufp->chgQData(oldp+173,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                                 [1U][1U][1U]),64);
        bufp->chgQData(oldp+175,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                                 [2U][0U][0U]),64);
        bufp->chgQData(oldp+177,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                                 [2U][0U][1U]),64);
        bufp->chgQData(oldp+179,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                                 [2U][1U][0U]),64);
        bufp->chgQData(oldp+181,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                                 [2U][1U][1U]),64);
        bufp->chgQData(oldp+183,(vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
                                 [0U][0U][0U]),64);
        bufp->chgQData(oldp+185,(vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
                                 [0U][0U][1U]),64);
        bufp->chgQData(oldp+187,(vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
                                 [0U][1U][0U]),64);
        bufp->chgQData(oldp+189,(vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
                                 [0U][1U][1U]),64);
        bufp->chgQData(oldp+191,(vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
                                 [1U][0U][0U]),64);
        bufp->chgQData(oldp+193,(vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
                                 [1U][0U][1U]),64);
        bufp->chgQData(oldp+195,(vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
                                 [1U][1U][0U]),64);
        bufp->chgQData(oldp+197,(vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
                                 [1U][1U][1U]),64);
        bufp->chgQData(oldp+199,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights[0]),64);
        bufp->chgQData(oldp+201,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights[1]),64);
        bufp->chgQData(oldp+203,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__current_weights[0]),64);
        bufp->chgQData(oldp+205,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__current_weights[1]),64);
        bufp->chgQData(oldp+207,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weights[0]),64);
        bufp->chgQData(oldp+209,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weights[1]),64);
        bufp->chgQData(oldp+211,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__bias),64);
        bufp->chgIData(oldp+213,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+214,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i),32);
        bufp->chgQData(oldp+215,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights[0]),64);
        bufp->chgQData(oldp+217,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights[1]),64);
        bufp->chgQData(oldp+219,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__current_weights[0]),64);
        bufp->chgQData(oldp+221,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__current_weights[1]),64);
        bufp->chgQData(oldp+223,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weights[0]),64);
        bufp->chgQData(oldp+225,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weights[1]),64);
        bufp->chgQData(oldp+227,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__bias),64);
        bufp->chgIData(oldp+229,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+230,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i),32);
        bufp->chgQData(oldp+231,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights[0]),64);
        bufp->chgQData(oldp+233,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__current_weights[0]),64);
        bufp->chgQData(oldp+235,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__current_weights[1]),64);
        bufp->chgQData(oldp+237,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weights[0]),64);
        bufp->chgQData(oldp+239,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weights[1]),64);
        bufp->chgQData(oldp+241,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__bias),64);
        bufp->chgIData(oldp+243,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+244,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i),32);
        bufp->chgQData(oldp+245,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights[0]),64);
        bufp->chgQData(oldp+247,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__current_weights[0]),64);
        bufp->chgQData(oldp+249,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__current_weights[1]),64);
        bufp->chgQData(oldp+251,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weights[0]),64);
        bufp->chgQData(oldp+253,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weights[1]),64);
        bufp->chgQData(oldp+255,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__bias),64);
        bufp->chgIData(oldp+257,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+258,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__1__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i),32);
        bufp->chgQData(oldp+259,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__current_weights[0]),64);
        bufp->chgQData(oldp+261,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__current_weights[1]),64);
        bufp->chgQData(oldp+263,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__weights[0]),64);
        bufp->chgQData(oldp+265,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__weights[1]),64);
        bufp->chgQData(oldp+267,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__bias),64);
        bufp->chgIData(oldp+269,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+270,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk8__DOT__i),32);
        bufp->chgIData(oldp+271,(vlSymsp->TOP__FixedPoint.lcg_next__Vstatic__current),32);
    }
    bufp->chgBit(oldp+272,(vlSelfRef.BenchMLP__DOT__clk));
    bufp->chgQData(oldp+273,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_outputs
                             [0U][0U]),64);
    bufp->chgQData(oldp+275,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_outputs
                             [0U][1U]),64);
    bufp->chgQData(oldp+277,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_outputs
                             [1U][0U]),64);
    bufp->chgQData(oldp+279,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_outputs
                             [1U][1U]),64);
    bufp->chgQData(oldp+281,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_outputs
                             [2U][0U]),64);
    bufp->chgQData(oldp+283,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_outputs
                             [2U][1U]),64);
    bufp->chgQData(oldp+285,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients
                             [0U][0U]),64);
    bufp->chgQData(oldp+287,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients
                             [0U][1U]),64);
    bufp->chgQData(oldp+289,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients
                             [1U][0U]),64);
    bufp->chgQData(oldp+291,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients
                             [1U][1U]),64);
    bufp->chgQData(oldp+293,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients
                             [2U][0U]),64);
    bufp->chgQData(oldp+295,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients
                             [2U][1U]),64);
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
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
}
