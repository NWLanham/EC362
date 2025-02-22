// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ top__DOT__cpu__DOT__pc;
    SData/*15:0*/ top__DOT__cpu__DOT__pc1;
    SData/*15:0*/ top__DOT__cpu__DOT__instr;
    SData/*15:0*/ top__DOT__cpu__DOT__imm8_ext;
    SData/*15:0*/ top__DOT__cpu__DOT__imm4_ext;
    IData/*31:0*/ top__DOT__cycle;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 16> top__DOT__cpu__DOT__rf;
    VlUnpacked<SData/*15:0*/, 65536> top__DOT__cpu__DOT__m;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
