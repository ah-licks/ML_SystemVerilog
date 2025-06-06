// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPerceptron__Syms.h"


VL_ATTR_COLD void VPerceptron___024root__trace_init_sub__TOP__FixedPoint__0(VPerceptron___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VPerceptron___024root__trace_init_sub__TOP__Common__0(VPerceptron___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPerceptron___024root__trace_init_sub__TOP__0(VPerceptron___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root__trace_init_sub__TOP__0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("FixedPoint", VerilatedTracePrefixType::SCOPE_MODULE);
    VPerceptron___024root__trace_init_sub__TOP__FixedPoint__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("Common", VerilatedTracePrefixType::SCOPE_MODULE);
    VPerceptron___024root__trace_init_sub__TOP__Common__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("BenchPerceptron", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+50,0,"input_units",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+51,0,"output_units",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+47,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("values", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declDouble(c+2+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+6,0,"activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+7,0,"training",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declDouble(c+8,0,"learning_rate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->pushPrefix("next_layer_weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declDouble(c+10+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("error_gradient_next_layer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declDouble(c+18+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declDouble(c+20,0,"prediction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+22,0,"error_gradient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->pushPrefix("current_weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declDouble(c+35+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declDouble(c+12,0,"expected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+14,0,"threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+16,0,"correct",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+48,0,"cost",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->pushPrefix("perceptron", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+50,0,"input_units",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+51,0,"output_units",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+47,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("values", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declDouble(c+2+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+6,0,"activation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+7,0,"training",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+8,0,"learning_rate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->pushPrefix("next_layer_weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declDouble(c+10+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("error_gradient_next_layer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declDouble(c+18+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declDouble(c+20,0,"prediction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+22,0,"error_gradient",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->pushPrefix("current_weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declDouble(c+35+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declDouble(c+39+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declDouble(c+43,0,"bias",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+24,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->pushPrefix("weight_gradient", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declDouble(c+26+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declDouble(c+30,0,"bias_gradient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+22,0,"local_error_gradient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->pushPrefix("predict", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"activation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+24,0,"sum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+20,0,"prediction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+52,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+52,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+32,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+52,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"epoch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VPerceptron___024root__trace_init_sub__TOP__FixedPoint__0(VPerceptron___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root__trace_init_sub__TOP__FixedPoint__0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+53,0,"frac_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+54,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+56,0,"epsilon",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
}

VL_ATTR_COLD void VPerceptron___024root__trace_init_sub__TOP__Common__0(VPerceptron___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root__trace_init_sub__TOP__Common__0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declDouble(c+58,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+60,0,"epsilon",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
}

VL_ATTR_COLD void VPerceptron___024root__trace_init_top(VPerceptron___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root__trace_init_top\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VPerceptron___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPerceptron___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VPerceptron___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPerceptron___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPerceptron___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPerceptron___024root__trace_register(VPerceptron___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root__trace_register\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VPerceptron___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VPerceptron___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VPerceptron___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VPerceptron___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPerceptron___024root__trace_const_0_sub_0(VPerceptron___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPerceptron___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root__trace_const_0\n"); );
    // Init
    VPerceptron___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPerceptron___024root*>(voidSelf);
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPerceptron___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPerceptron___024root__trace_const_0_sub_0(VPerceptron___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root__trace_const_0_sub_0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+50,(2U),32);
    bufp->fullIData(oldp+51,(1U),32);
    bufp->fullIData(oldp+52,(2U),32);
    bufp->fullIData(oldp+53,(0x20U),32);
    bufp->fullQData(oldp+54,(0x2b7e15160ULL),64);
    bufp->fullQData(oldp+56,(0x2aULL),64);
    bufp->fullDouble(oldp+58,(2.71828182799999984e+00));
    bufp->fullDouble(oldp+60,(1.00000000000000002e-08));
}

VL_ATTR_COLD void VPerceptron___024root__trace_full_0_sub_0(VPerceptron___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPerceptron___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root__trace_full_0\n"); );
    // Init
    VPerceptron___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPerceptron___024root*>(voidSelf);
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPerceptron___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPerceptron___024root__trace_full_0_sub_0(VPerceptron___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root__trace_full_0_sub_0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.BenchPerceptron__DOT__rst));
    bufp->fullDouble(oldp+2,(vlSelfRef.BenchPerceptron__DOT__values[0]));
    bufp->fullDouble(oldp+4,(vlSelfRef.BenchPerceptron__DOT__values[1]));
    bufp->fullIData(oldp+6,(vlSelfRef.BenchPerceptron__DOT__activation),32);
    bufp->fullBit(oldp+7,(vlSelfRef.BenchPerceptron__DOT__training));
    bufp->fullDouble(oldp+8,(vlSelfRef.BenchPerceptron__DOT__learning_rate));
    bufp->fullDouble(oldp+10,(vlSelfRef.BenchPerceptron__DOT__next_layer_weights[0]));
    bufp->fullDouble(oldp+12,(vlSelfRef.BenchPerceptron__DOT__expected));
    bufp->fullDouble(oldp+14,(vlSelfRef.BenchPerceptron__DOT__threshold));
    bufp->fullIData(oldp+16,(vlSelfRef.BenchPerceptron__DOT__correct),32);
    bufp->fullIData(oldp+17,(vlSelfRef.BenchPerceptron__DOT__unnamedblk1__DOT__epoch),32);
    bufp->fullDouble(oldp+18,(vlSelfRef.BenchPerceptron__DOT__error_gradient_next_layer[0]));
    bufp->fullDouble(oldp+20,(vlSelfRef.BenchPerceptron__DOT__prediction));
    bufp->fullDouble(oldp+22,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__local_error_gradient));
    bufp->fullDouble(oldp+24,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__sum));
    bufp->fullDouble(oldp+26,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weight_gradient[0]));
    bufp->fullDouble(oldp+28,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weight_gradient[1]));
    bufp->fullDouble(oldp+30,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias_gradient));
    bufp->fullIData(oldp+32,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+33,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+34,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk5__DOT__i),32);
    bufp->fullDouble(oldp+35,(vlSelfRef.BenchPerceptron__DOT__current_weights[0]));
    bufp->fullDouble(oldp+37,(vlSelfRef.BenchPerceptron__DOT__current_weights[1]));
    bufp->fullDouble(oldp+39,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights[0]));
    bufp->fullDouble(oldp+41,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__weights[1]));
    bufp->fullDouble(oldp+43,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__bias));
    bufp->fullIData(oldp+45,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk7__DOT__i),32);
    bufp->fullIData(oldp+46,(vlSelfRef.BenchPerceptron__DOT__perceptron__DOT__unnamedblk8__DOT__i),32);
    bufp->fullBit(oldp+47,(vlSelfRef.BenchPerceptron__DOT__clk));
    bufp->fullDouble(oldp+48,((-1.0 * ((vlSelfRef.BenchPerceptron__DOT__expected 
                                        * log((1.00000000000000002e-08 
                                               + vlSelfRef.BenchPerceptron__DOT__prediction))) 
                                       + ((1.0 - vlSelfRef.BenchPerceptron__DOT__expected) 
                                          * log((1.00000000000000002e-08 
                                                 + 
                                                 (1.0 
                                                  - vlSelfRef.BenchPerceptron__DOT__prediction))))))));
}
