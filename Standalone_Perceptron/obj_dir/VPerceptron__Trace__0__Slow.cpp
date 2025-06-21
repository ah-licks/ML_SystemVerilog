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
    tracep->pushPrefix("BenchPerceptronIntroduction", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+116,0,"input_units",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+117,0,"num_train_examples",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+117,0,"num_test_examples",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+85,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("values", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+97+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+86,0,"training",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declQuad(c+87,0,"learning_rate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+101,0,"prediction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+89,0,"expected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+91,0,"example",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+92,0,"correct",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("data", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+116,0,"inputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+118,0,"outputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+119,0,"total_examples",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+91,0,"example",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("values", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+97+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declQuad(c+89,0,"expected",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("input_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+3,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+7,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+11,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+13,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+15,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+19,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+21,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+23,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+25,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+27,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+29,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+31,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+33,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+35+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("flat_input_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+51+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+83,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+84,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("perceptron_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+116,0,"input_units",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("values", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+97+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+86,0,"training",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+87,0,"learning_rate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+89,0,"expected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+101,0,"prediction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+107+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declQuad(c+111,0,"bias",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+103,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+105,0,"error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+120,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+113,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+93,0,"epoch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+94,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+95,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+96,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    tracep->declBus(c+121,0,"frac_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+1,0,"ONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
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
    bufp->fullIData(oldp+116,(2U),32);
    bufp->fullIData(oldp+117,(4U),32);
    bufp->fullIData(oldp+118,(1U),32);
    bufp->fullIData(oldp+119,(8U),32);
    bufp->fullIData(oldp+120,(2U),32);
    bufp->fullIData(oldp+121,(0x20U),32);
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
    bufp->fullQData(oldp+1,(vlSymsp->TOP__FixedPoint.ONE),64);
    bufp->fullQData(oldp+3,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                            [0U][0U]),64);
    bufp->fullQData(oldp+5,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                            [0U][1U]),64);
    bufp->fullQData(oldp+7,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                            [1U][0U]),64);
    bufp->fullQData(oldp+9,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                            [1U][1U]),64);
    bufp->fullQData(oldp+11,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                             [2U][0U]),64);
    bufp->fullQData(oldp+13,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                             [2U][1U]),64);
    bufp->fullQData(oldp+15,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                             [3U][0U]),64);
    bufp->fullQData(oldp+17,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                             [3U][1U]),64);
    bufp->fullQData(oldp+19,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                             [4U][0U]),64);
    bufp->fullQData(oldp+21,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                             [4U][1U]),64);
    bufp->fullQData(oldp+23,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                             [5U][0U]),64);
    bufp->fullQData(oldp+25,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                             [5U][1U]),64);
    bufp->fullQData(oldp+27,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                             [6U][0U]),64);
    bufp->fullQData(oldp+29,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                             [6U][1U]),64);
    bufp->fullQData(oldp+31,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                             [7U][0U]),64);
    bufp->fullQData(oldp+33,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__input_data
                             [7U][1U]),64);
    bufp->fullQData(oldp+35,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data[0]),64);
    bufp->fullQData(oldp+37,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data[1]),64);
    bufp->fullQData(oldp+39,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data[2]),64);
    bufp->fullQData(oldp+41,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data[3]),64);
    bufp->fullQData(oldp+43,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data[4]),64);
    bufp->fullQData(oldp+45,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data[5]),64);
    bufp->fullQData(oldp+47,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data[6]),64);
    bufp->fullQData(oldp+49,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data[7]),64);
    bufp->fullQData(oldp+51,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[0]),64);
    bufp->fullQData(oldp+53,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[1]),64);
    bufp->fullQData(oldp+55,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[2]),64);
    bufp->fullQData(oldp+57,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[3]),64);
    bufp->fullQData(oldp+59,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[4]),64);
    bufp->fullQData(oldp+61,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[5]),64);
    bufp->fullQData(oldp+63,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[6]),64);
    bufp->fullQData(oldp+65,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[7]),64);
    bufp->fullQData(oldp+67,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[8]),64);
    bufp->fullQData(oldp+69,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[9]),64);
    bufp->fullQData(oldp+71,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[10]),64);
    bufp->fullQData(oldp+73,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[11]),64);
    bufp->fullQData(oldp+75,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[12]),64);
    bufp->fullQData(oldp+77,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[13]),64);
    bufp->fullQData(oldp+79,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[14]),64);
    bufp->fullQData(oldp+81,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__flat_input_data[15]),64);
    bufp->fullIData(oldp+83,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+84,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullBit(oldp+85,(vlSelfRef.BenchPerceptronIntroduction__DOT__rst));
    bufp->fullBit(oldp+86,(vlSelfRef.BenchPerceptronIntroduction__DOT__training));
    bufp->fullQData(oldp+87,(vlSelfRef.BenchPerceptronIntroduction__DOT__learning_rate),64);
    bufp->fullQData(oldp+89,(vlSelfRef.BenchPerceptronIntroduction__DOT__data__DOT__output_data
                             [(7U & vlSelfRef.BenchPerceptronIntroduction__DOT__example)]),64);
    bufp->fullIData(oldp+91,(vlSelfRef.BenchPerceptronIntroduction__DOT__example),32);
    bufp->fullIData(oldp+92,(vlSelfRef.BenchPerceptronIntroduction__DOT__correct),32);
    bufp->fullIData(oldp+93,(vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__epoch),32);
    bufp->fullIData(oldp+94,(vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+95,(vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+96,(vlSelfRef.BenchPerceptronIntroduction__DOT__unnamedblk4__DOT__i),32);
    bufp->fullQData(oldp+97,(vlSelfRef.BenchPerceptronIntroduction__DOT__values[0]),64);
    bufp->fullQData(oldp+99,(vlSelfRef.BenchPerceptronIntroduction__DOT__values[1]),64);
    bufp->fullQData(oldp+101,(vlSelfRef.BenchPerceptronIntroduction__DOT__prediction),64);
    bufp->fullQData(oldp+103,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__sum),64);
    bufp->fullQData(oldp+105,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__error),64);
    bufp->fullQData(oldp+107,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[0]),64);
    bufp->fullQData(oldp+109,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__weights[1]),64);
    bufp->fullQData(oldp+111,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__bias),64);
    bufp->fullIData(oldp+113,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+114,(vlSelfRef.BenchPerceptronIntroduction__DOT__perceptron_i__DOT__unnamedblk3__DOT__i),32);
    bufp->fullBit(oldp+115,(vlSelfRef.BenchPerceptronIntroduction__DOT__clk));
}
