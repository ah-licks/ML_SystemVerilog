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
    tracep->pushPrefix("Testing", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1,0,"random",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VPerceptron___024root__trace_init_sub__TOP__FixedPoint__0(VPerceptron___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPerceptron___024root__trace_init_sub__TOP__FixedPoint__0\n"); );
    VPerceptron__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+6,0,"frac_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+7,0,"epsilon",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"ONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"HALF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+5,0,"lcg_next__Vstatic__current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    bufp->fullIData(oldp+6,(0x20U),32);
    bufp->fullQData(oldp+7,(0x2aULL),64);
    bufp->fullQData(oldp+9,(0x80000000ULL),64);
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
    bufp->fullQData(oldp+1,(vlSelfRef.Testing__DOT__random),64);
    bufp->fullQData(oldp+3,(vlSymsp->TOP__FixedPoint.__PVT__ONE),64);
    bufp->fullIData(oldp+5,(vlSymsp->TOP__FixedPoint.lcg_next__Vstatic__current),32);
}
