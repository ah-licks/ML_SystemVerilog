// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPerceptron__Syms.h"


VL_ATTR_COLD void VPerceptron___024root__trace_init_sub__TOP__FixedPoint__0(VPerceptron___024root* vlSelf, VerilatedVcd* tracep);

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
    tracep->pushPrefix("BenchMLP", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+180,0,"inputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+181,0,"hidden_layers",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("hidden_layer_sizes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+182+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+181,0,"outputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+159,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+5,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("values", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+6+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("expected", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+10+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+12,0,"hidden_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+13,0,"output_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+14,0,"training",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declQuad(c+15,0,"learning_rate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("prediction", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+33+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declQuad(c+17,0,"threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+19,0,"correct",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("mlp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+180,0,"inputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+181,0,"hidden_layers",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("hidden_layer_sizes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+183+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+181,0,"outputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+159,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("values", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+6+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("expected", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+10+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+12,0,"hidden_activation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+13,0,"output_activation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+14,0,"training",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+15,0,"learning_rate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("prediction", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+33+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+180,0,"max_layer_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("layer_weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+94,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+96,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+98,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+100,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+102,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+104,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+106,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+108,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("layer_outputs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+160,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+162,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+164,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+166,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("layer_error_gradients", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+168,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+170,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+172,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+174,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("next_layer_weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+110,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+112,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+114,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+116,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("cost_gradients", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+35+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_hidden_layer[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+180,0,"current_layer_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+180,0,"current_input_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+181,0,"current_output_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("gen_hidden_neuron[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("hidden_perceptron", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+180,0,"input_units",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+181,0,"output_units",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+159,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("values", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+21+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+12,0,"activation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+14,0,"training",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+15,0,"learning_rate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("next_layer_weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+118+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("error_gradient_next_layer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+176+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declQuad(c+37,0,"prediction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+66,0,"error_gradient",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("current_weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+120+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+124+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declQuad(c+128,0,"bias",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+39,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("weight_gradient", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+68+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declQuad(c+72,0,"bias_gradient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+74,0,"local_error_gradient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("predict", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"activation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+39,0,"sum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+37,0,"prediction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+184,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+184,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+76,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+77,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+78,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+79,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+130,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+131,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_hidden_neuron[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("hidden_perceptron", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+180,0,"input_units",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+181,0,"output_units",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+159,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("values", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+25+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+12,0,"activation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+14,0,"training",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+15,0,"learning_rate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("next_layer_weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+132+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("error_gradient_next_layer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+178+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declQuad(c+41,0,"prediction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+80,0,"error_gradient",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("current_weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+134+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+138+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declQuad(c+142,0,"bias",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+43,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("weight_gradient", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+82+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declQuad(c+86,0,"bias_gradient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+88,0,"local_error_gradient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("predict", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"activation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+43,0,"sum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+41,0,"prediction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+184,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+184,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+90,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+91,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+92,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+93,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+144,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+145,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+184,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+185,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_layer_neuron[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("output_perceptron", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+180,0,"input_units",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+181,0,"output_units",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+159,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("values", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+29+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+13,0,"activation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+14,0,"training",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+15,0,"learning_rate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("next_layer_weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+1+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("error_gradient_next_layer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+45+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declQuad(c+47,0,"prediction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+49,0,"error_gradient",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("current_weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+146+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+150+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declQuad(c+154,0,"bias",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+51,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("weight_gradient", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+53+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declQuad(c+57,0,"bias_gradient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+59,0,"local_error_gradient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("predict", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"activation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+51,0,"sum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+47,0,"prediction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+184,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+184,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+62,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+63,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+64,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+156,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+157,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+184,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+65,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"epoch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    tracep->declBus(c+186,0,"frac_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+187,0,"epsilon",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"ONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+189,0,"HALF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+158,0,"lcg_next__Vstatic__current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    bufp->fullIData(oldp+180,(2U),32);
    bufp->fullIData(oldp+181,(1U),32);
    bufp->fullIData(oldp+182,(vlSelfRef.BenchMLP__DOT__hidden_layer_sizes[0]),32);
    bufp->fullIData(oldp+183,(vlSelfRef.BenchMLP__DOT__mlp__DOT__hidden_layer_sizes[0]),32);
    bufp->fullIData(oldp+184,(2U),32);
    bufp->fullIData(oldp+185,(1U),32);
    bufp->fullIData(oldp+186,(0x20U),32);
    bufp->fullQData(oldp+187,(0x2aULL),64);
    bufp->fullQData(oldp+189,(0x80000000ULL),64);
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
    bufp->fullQData(oldp+1,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__next_layer_weights[0]),64);
    bufp->fullQData(oldp+3,(vlSymsp->TOP__FixedPoint.ONE),64);
    bufp->fullBit(oldp+5,(vlSelfRef.BenchMLP__DOT__rst));
    bufp->fullQData(oldp+6,(vlSelfRef.BenchMLP__DOT__values[0]),64);
    bufp->fullQData(oldp+8,(vlSelfRef.BenchMLP__DOT__values[1]),64);
    bufp->fullQData(oldp+10,(vlSelfRef.BenchMLP__DOT__expected[0]),64);
    bufp->fullIData(oldp+12,(vlSelfRef.BenchMLP__DOT__hidden_activation),32);
    bufp->fullIData(oldp+13,(vlSelfRef.BenchMLP__DOT__output_activation),32);
    bufp->fullBit(oldp+14,(vlSelfRef.BenchMLP__DOT__training));
    bufp->fullQData(oldp+15,(vlSelfRef.BenchMLP__DOT__learning_rate),64);
    bufp->fullQData(oldp+17,(vlSelfRef.BenchMLP__DOT__threshold),64);
    bufp->fullIData(oldp+19,(vlSelfRef.BenchMLP__DOT__correct),32);
    bufp->fullIData(oldp+20,(vlSelfRef.BenchMLP__DOT__unnamedblk1__DOT__epoch),32);
    bufp->fullQData(oldp+21,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__values[0]),64);
    bufp->fullQData(oldp+23,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__values[1]),64);
    bufp->fullQData(oldp+25,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__values[0]),64);
    bufp->fullQData(oldp+27,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__values[1]),64);
    bufp->fullQData(oldp+29,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__values[0]),64);
    bufp->fullQData(oldp+31,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__values[1]),64);
    bufp->fullQData(oldp+33,(vlSelfRef.BenchMLP__DOT__prediction[0]),64);
    bufp->fullQData(oldp+35,(vlSelfRef.BenchMLP__DOT__mlp__DOT__cost_gradients[0]),64);
    bufp->fullQData(oldp+37,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__prediction),64);
    bufp->fullQData(oldp+39,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__sum),64);
    bufp->fullQData(oldp+41,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__prediction),64);
    bufp->fullQData(oldp+43,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__sum),64);
    bufp->fullQData(oldp+45,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__error_gradient_next_layer[0]),64);
    bufp->fullQData(oldp+47,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__prediction),64);
    bufp->fullQData(oldp+49,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__error_gradient),64);
    bufp->fullQData(oldp+51,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__sum),64);
    bufp->fullQData(oldp+53,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[0]),64);
    bufp->fullQData(oldp+55,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__weight_gradient[1]),64);
    bufp->fullQData(oldp+57,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__bias_gradient),64);
    bufp->fullQData(oldp+59,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__local_error_gradient),64);
    bufp->fullIData(oldp+61,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+62,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+63,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+64,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+65,(vlSelfRef.BenchMLP__DOT__mlp__DOT__unnamedblk5__DOT__i),32);
    bufp->fullQData(oldp+66,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient),64);
    bufp->fullQData(oldp+68,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[0]),64);
    bufp->fullQData(oldp+70,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weight_gradient[1]),64);
    bufp->fullQData(oldp+72,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__bias_gradient),64);
    bufp->fullQData(oldp+74,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__local_error_gradient),64);
    bufp->fullIData(oldp+76,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+77,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+78,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+79,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i),32);
    bufp->fullQData(oldp+80,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient),64);
    bufp->fullQData(oldp+82,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[0]),64);
    bufp->fullQData(oldp+84,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weight_gradient[1]),64);
    bufp->fullQData(oldp+86,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__bias_gradient),64);
    bufp->fullQData(oldp+88,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__local_error_gradient),64);
    bufp->fullIData(oldp+90,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+91,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+92,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+93,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk6__DOT__i),32);
    bufp->fullQData(oldp+94,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                             [0U][0U][0U]),64);
    bufp->fullQData(oldp+96,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                             [0U][0U][1U]),64);
    bufp->fullQData(oldp+98,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                             [0U][1U][0U]),64);
    bufp->fullQData(oldp+100,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                              [0U][1U][1U]),64);
    bufp->fullQData(oldp+102,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                              [1U][0U][0U]),64);
    bufp->fullQData(oldp+104,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                              [1U][0U][1U]),64);
    bufp->fullQData(oldp+106,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                              [1U][1U][0U]),64);
    bufp->fullQData(oldp+108,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_weights
                              [1U][1U][1U]),64);
    bufp->fullQData(oldp+110,(vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
                              [0U][0U][0U]),64);
    bufp->fullQData(oldp+112,(vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
                              [0U][0U][1U]),64);
    bufp->fullQData(oldp+114,(vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
                              [0U][1U][0U]),64);
    bufp->fullQData(oldp+116,(vlSelfRef.BenchMLP__DOT__mlp__DOT__next_layer_weights
                              [0U][1U][1U]),64);
    bufp->fullQData(oldp+118,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__next_layer_weights[0]),64);
    bufp->fullQData(oldp+120,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__current_weights[0]),64);
    bufp->fullQData(oldp+122,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__current_weights[1]),64);
    bufp->fullQData(oldp+124,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weights[0]),64);
    bufp->fullQData(oldp+126,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__weights[1]),64);
    bufp->fullQData(oldp+128,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__bias),64);
    bufp->fullIData(oldp+130,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i),32);
    bufp->fullIData(oldp+131,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i),32);
    bufp->fullQData(oldp+132,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__next_layer_weights[0]),64);
    bufp->fullQData(oldp+134,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__current_weights[0]),64);
    bufp->fullQData(oldp+136,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__current_weights[1]),64);
    bufp->fullQData(oldp+138,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weights[0]),64);
    bufp->fullQData(oldp+140,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__weights[1]),64);
    bufp->fullQData(oldp+142,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__bias),64);
    bufp->fullIData(oldp+144,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk7__DOT__i),32);
    bufp->fullIData(oldp+145,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__DOT__unnamedblk8__DOT__i),32);
    bufp->fullQData(oldp+146,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__current_weights[0]),64);
    bufp->fullQData(oldp+148,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellout__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__current_weights[1]),64);
    bufp->fullQData(oldp+150,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__weights[0]),64);
    bufp->fullQData(oldp+152,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__weights[1]),64);
    bufp->fullQData(oldp+154,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__bias),64);
    bufp->fullIData(oldp+156,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk7__DOT__i),32);
    bufp->fullIData(oldp+157,(vlSelfRef.BenchMLP__DOT__mlp__DOT__gen_output_layer_neuron__BRA__0__KET____DOT__output_perceptron__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+158,(vlSymsp->TOP__FixedPoint.lcg_next__Vstatic__current),32);
    bufp->fullBit(oldp+159,(vlSelfRef.BenchMLP__DOT__clk));
    bufp->fullQData(oldp+160,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_outputs
                              [0U][0U]),64);
    bufp->fullQData(oldp+162,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_outputs
                              [0U][1U]),64);
    bufp->fullQData(oldp+164,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_outputs
                              [1U][0U]),64);
    bufp->fullQData(oldp+166,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_outputs
                              [1U][1U]),64);
    bufp->fullQData(oldp+168,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients
                              [0U][0U]),64);
    bufp->fullQData(oldp+170,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients
                              [0U][1U]),64);
    bufp->fullQData(oldp+172,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients
                              [1U][0U]),64);
    bufp->fullQData(oldp+174,(vlSelfRef.BenchMLP__DOT__mlp__DOT__layer_error_gradients
                              [1U][1U]),64);
    bufp->fullQData(oldp+176,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__0__KET____DOT__hidden_perceptron__error_gradient_next_layer[0]),64);
    bufp->fullQData(oldp+178,(vlSelfRef.BenchMLP__DOT__mlp__DOT____Vcellinp__gen_hidden_layer__BRA__0__KET____DOT__gen_hidden_neuron__BRA__1__KET____DOT__hidden_perceptron__error_gradient_next_layer[0]),64);
}
