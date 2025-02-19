// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ top__DOT__i;
    top__DOT__i = 0;
    SData/*15:0*/ __Vdly__top__DOT__cpu__DOT__pc;
    __Vdly__top__DOT__cpu__DOT__pc = 0;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__rf__v0 = 0;
    SData/*15:0*/ __Vdlyvval__top__DOT__cpu__DOT__rf__v0;
    __Vdlyvval__top__DOT__cpu__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__rf__v0;
    __Vdlyvset__top__DOT__cpu__DOT__rf__v0 = 0;
    SData/*15:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__m__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__m__v0 = 0;
    SData/*15:0*/ __Vdlyvval__top__DOT__cpu__DOT__m__v0;
    __Vdlyvval__top__DOT__cpu__DOT__m__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__m__v0;
    __Vdlyvset__top__DOT__cpu__DOT__m__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__rf__v1;
    __Vdlyvdim0__top__DOT__cpu__DOT__rf__v1 = 0;
    SData/*15:0*/ __Vdlyvval__top__DOT__cpu__DOT__rf__v1;
    __Vdlyvval__top__DOT__cpu__DOT__rf__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__rf__v1;
    __Vdlyvset__top__DOT__cpu__DOT__rf__v1 = 0;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__rf__v2;
    __Vdlyvdim0__top__DOT__cpu__DOT__rf__v2 = 0;
    SData/*15:0*/ __Vdlyvval__top__DOT__cpu__DOT__rf__v2;
    __Vdlyvval__top__DOT__cpu__DOT__rf__v2 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__rf__v2;
    __Vdlyvset__top__DOT__cpu__DOT__rf__v2 = 0;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__rf__v3;
    __Vdlyvdim0__top__DOT__cpu__DOT__rf__v3 = 0;
    SData/*15:0*/ __Vdlyvval__top__DOT__cpu__DOT__rf__v3;
    __Vdlyvval__top__DOT__cpu__DOT__rf__v3 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__rf__v3;
    __Vdlyvset__top__DOT__cpu__DOT__rf__v3 = 0;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__rf__v4;
    __Vdlyvdim0__top__DOT__cpu__DOT__rf__v4 = 0;
    SData/*15:0*/ __Vdlyvval__top__DOT__cpu__DOT__rf__v4;
    __Vdlyvval__top__DOT__cpu__DOT__rf__v4 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__rf__v4;
    __Vdlyvset__top__DOT__cpu__DOT__rf__v4 = 0;
    // Body
    __Vdlyvset__top__DOT__cpu__DOT__m__v0 = 0U;
    __Vdly__top__DOT__cpu__DOT__pc = vlSelf->top__DOT__cpu__DOT__pc;
    __Vdlyvset__top__DOT__cpu__DOT__rf__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__rf__v1 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__rf__v2 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__rf__v3 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__rf__v4 = 0U;
    top__DOT__i = 0xfffffff6U;
    vlSelf->top__DOT__cpu__DOT__rf[0U] = 0U;
    VL_WRITEF("cycle %0d start -------\n",32,vlSelf->top__DOT__cycle);
    vlSelf->top__DOT__cycle = ((IData)(1U) + vlSelf->top__DOT__cycle);
    VL_WRITEF("pc = %0#\ninstr = %x\n",16,vlSelf->top__DOT__cpu__DOT__pc,
              16,(IData)(vlSelf->top__DOT__cpu__DOT__instr));
    if (VL_UNLIKELY((0x8000U & (IData)(vlSelf->top__DOT__cpu__DOT__instr)))) {
        VL_WRITEF("bad op - outer default\n");
    } else if ((0x4000U & (IData)(vlSelf->top__DOT__cpu__DOT__instr))) {
        if ((0x2000U & (IData)(vlSelf->top__DOT__cpu__DOT__instr))) {
            if (VL_LIKELY((0x1000U & (IData)(vlSelf->top__DOT__cpu__DOT__instr)))) {
                if ((0x70ffU != (IData)(vlSelf->top__DOT__cpu__DOT__instr))) {
                    VL_WRITEF("JALR r%0#, r%0#\n",4,
                              (0xfU & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                       >> 8U)),4,(0xfU 
                                                  & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                                     >> 4U)));
                } else {
                    VL_WRITEF("HALT\n");
                }
            } else {
                VL_WRITEF("BEZ  r%0#, %0#\n",4,(0xfU 
                                                & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                                   >> 8U)),
                          16,(IData)(vlSelf->top__DOT__cpu__DOT__imm8_ext));
            }
        } else if ((0x1000U & (IData)(vlSelf->top__DOT__cpu__DOT__instr))) {
            VL_WRITEF("SW   r%0#, r%0#, %0#\n",4,(0xfU 
                                                  & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                                     >> 8U)),
                      4,(0xfU & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                 >> 4U)),16,(IData)(vlSelf->top__DOT__cpu__DOT__imm4_ext));
        } else {
            VL_WRITEF("LW   r%0#, r%0#, %0#\n",4,(0xfU 
                                                  & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                                     >> 8U)),
                      4,(0xfU & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                 >> 4U)),16,(IData)(vlSelf->top__DOT__cpu__DOT__imm4_ext));
        }
    } else if ((0x2000U & (IData)(vlSelf->top__DOT__cpu__DOT__instr))) {
        if ((0x1000U & (IData)(vlSelf->top__DOT__cpu__DOT__instr))) {
            VL_WRITEF("bad op - outer default\n");
        } else {
            VL_WRITEF("AND  r%0#, r%0#, r%0#\n",4,(0xfU 
                                                   & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                                      >> 8U)),
                      4,(0xfU & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                 >> 4U)),4,(0xfU & (IData)(vlSelf->top__DOT__cpu__DOT__instr)));
        }
    } else if (VL_LIKELY((0x1000U & (IData)(vlSelf->top__DOT__cpu__DOT__instr)))) {
        if ((0U != (0xfU & (IData)(vlSelf->top__DOT__cpu__DOT__instr)))) {
            VL_WRITEF("ADDI r%0#, r%0#, %0#\n",4,(0xfU 
                                                  & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                                     >> 8U)),
                      4,(0xfU & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                 >> 4U)),16,(IData)(vlSelf->top__DOT__cpu__DOT__imm4_ext));
        } else {
            VL_WRITEF("ADDI.L r%0#, r%0#, %0#\n",4,
                      (0xfU & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                               >> 8U)),4,(0xfU & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                                  >> 4U)),
                      16,vlSelf->top__DOT__cpu__DOT__m
                      [(0xffffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__cpu__DOT__pc)))]);
        }
    } else {
        VL_WRITEF("ADD  r%0#, r%0#, r%0#\n",4,(0xfU 
                                               & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                                  >> 8U)),
                  4,(0xfU & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                             >> 4U)),4,(0xfU & (IData)(vlSelf->top__DOT__cpu__DOT__instr)));
    }
    VL_WRITEF("rf[0] = %x\trf[8] = %x\nrf[1] = %x\trf[9] = %x\nrf[2] = %x\trf[10] = %x\nrf[3] = %x\trf[11] = %x\nrf[4] = %x\trf[12] = %x\nrf[5] = %x\trf[13] = %x\nrf[6] = %x\trf[14] = %x\nrf[7] = %x\trf[15] = %x\nm[50] = %x %x %x %x %x %x %x %x %x %x\nm[40] = %x %x %x %x %x %x %x %x %x %x\nm[30] = %x %x %x %x %x %x %x %x %x %x\nm[20] = %x %x %x %x %x %x %x %x %x %x\nm[10] = %x %x %x %x %x %x %x %x %x %x\nm[00] = %x %x %x %x %x %x %x %x %x %x\n",
              16,vlSelf->top__DOT__cpu__DOT__rf[0U],
              16,vlSelf->top__DOT__cpu__DOT__rf[8U],
              16,vlSelf->top__DOT__cpu__DOT__rf[1U],
              16,vlSelf->top__DOT__cpu__DOT__rf[9U],
              16,vlSelf->top__DOT__cpu__DOT__rf[2U],
              16,vlSelf->top__DOT__cpu__DOT__rf[0xaU],
              16,vlSelf->top__DOT__cpu__DOT__rf[3U],
              16,vlSelf->top__DOT__cpu__DOT__rf[0xbU],
              16,vlSelf->top__DOT__cpu__DOT__rf[4U],
              16,vlSelf->top__DOT__cpu__DOT__rf[0xcU],
              16,vlSelf->top__DOT__cpu__DOT__rf[5U],
              16,vlSelf->top__DOT__cpu__DOT__rf[0xdU],
              16,vlSelf->top__DOT__cpu__DOT__rf[6U],
              16,vlSelf->top__DOT__cpu__DOT__rf[0xeU],
              16,vlSelf->top__DOT__cpu__DOT__rf[7U],
              16,vlSelf->top__DOT__cpu__DOT__rf[0xfU],
              16,vlSelf->top__DOT__cpu__DOT__m[0x32U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x33U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x34U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x35U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x36U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x37U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x38U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x39U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x3aU],
              16,vlSelf->top__DOT__cpu__DOT__m[0x3bU],
              16,vlSelf->top__DOT__cpu__DOT__m[0x28U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x29U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x2aU],
              16,vlSelf->top__DOT__cpu__DOT__m[0x2bU],
              16,vlSelf->top__DOT__cpu__DOT__m[0x2cU],
              16,vlSelf->top__DOT__cpu__DOT__m[0x2dU],
              16,vlSelf->top__DOT__cpu__DOT__m[0x2eU],
              16,vlSelf->top__DOT__cpu__DOT__m[0x2fU],
              16,vlSelf->top__DOT__cpu__DOT__m[0x30U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x31U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x1eU],
              16,vlSelf->top__DOT__cpu__DOT__m[0x1fU],
              16,vlSelf->top__DOT__cpu__DOT__m[0x20U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x21U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x22U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x23U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x24U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x25U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x26U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x27U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x14U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x15U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x16U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x17U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x18U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x19U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x1aU],
              16,vlSelf->top__DOT__cpu__DOT__m[0x1bU],
              16,vlSelf->top__DOT__cpu__DOT__m[0x1cU],
              16,vlSelf->top__DOT__cpu__DOT__m[0x1dU],
              16,vlSelf->top__DOT__cpu__DOT__m[0xaU],
              16,vlSelf->top__DOT__cpu__DOT__m[0xbU],
              16,vlSelf->top__DOT__cpu__DOT__m[0xcU],
              16,vlSelf->top__DOT__cpu__DOT__m[0xdU],
              16,vlSelf->top__DOT__cpu__DOT__m[0xeU],
              16,vlSelf->top__DOT__cpu__DOT__m[0xfU],
              16,vlSelf->top__DOT__cpu__DOT__m[0x10U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x11U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x12U],
              16,vlSelf->top__DOT__cpu__DOT__m[0x13U],
              16,vlSelf->top__DOT__cpu__DOT__m[0U],
              16,vlSelf->top__DOT__cpu__DOT__m[1U],
              16,vlSelf->top__DOT__cpu__DOT__m[2U],
              16,vlSelf->top__DOT__cpu__DOT__m[3U],
              16,vlSelf->top__DOT__cpu__DOT__m[4U],
              16,vlSelf->top__DOT__cpu__DOT__m[5U],
              16,vlSelf->top__DOT__cpu__DOT__m[6U],
              16,vlSelf->top__DOT__cpu__DOT__m[7U],
              16,vlSelf->top__DOT__cpu__DOT__m[8U],
              16,vlSelf->top__DOT__cpu__DOT__m[9U]);
    if (VL_UNLIKELY(VL_LTS_III(32, 0x64U, vlSelf->top__DOT__cycle))) {
        VL_FINISH_MT("top.v", 38, "");
    }
    vlSelf->top__DOT__cpu__DOT__rf[0U] = 0U;
    if (VL_UNLIKELY((0x8000U & (IData)(vlSelf->top__DOT__cpu__DOT__instr)))) {
        VL_WRITEF("error: op %2# at PC %5#\n",4,(0xfU 
                                                 & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                                    >> 0xcU)),
                  16,(IData)(vlSelf->top__DOT__cpu__DOT__pc));
        __Vdly__top__DOT__cpu__DOT__pc = vlSelf->top__DOT__cpu__DOT__pc1;
    } else if ((0x4000U & (IData)(vlSelf->top__DOT__cpu__DOT__instr))) {
        if ((0x2000U & (IData)(vlSelf->top__DOT__cpu__DOT__instr))) {
            if ((0x1000U & (IData)(vlSelf->top__DOT__cpu__DOT__instr))) {
                __Vdly__top__DOT__cpu__DOT__pc = vlSelf->top__DOT__cpu__DOT__rf
                    [(0xfU & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                              >> 4U))];
                __Vdlyvval__top__DOT__cpu__DOT__rf__v0 
                    = vlSelf->top__DOT__cpu__DOT__pc1;
                __Vdlyvset__top__DOT__cpu__DOT__rf__v0 = 1U;
                __Vdlyvdim0__top__DOT__cpu__DOT__rf__v0 
                    = (0xfU & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                               >> 8U));
            } else {
                __Vdly__top__DOT__cpu__DOT__pc = (0xffffU 
                                                  & ((0U 
                                                      == 
                                                      vlSelf->top__DOT__cpu__DOT__rf
                                                      [
                                                      (0xfU 
                                                       & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                                          >> 8U))])
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__cpu__DOT__pc) 
                                                      + (IData)(vlSelf->top__DOT__cpu__DOT__imm4_ext))
                                                      : (IData)(vlSelf->top__DOT__cpu__DOT__pc1)));
            }
        } else if ((0x1000U & (IData)(vlSelf->top__DOT__cpu__DOT__instr))) {
            __Vdlyvval__top__DOT__cpu__DOT__m__v0 = 
                vlSelf->top__DOT__cpu__DOT__rf[(0xfU 
                                                & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                                   >> 8U))];
            __Vdlyvset__top__DOT__cpu__DOT__m__v0 = 1U;
            __Vdlyvdim0__top__DOT__cpu__DOT__m__v0 
                = (0xffffU & (vlSelf->top__DOT__cpu__DOT__rf
                              [(0xfU & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                        >> 4U))] + (IData)(vlSelf->top__DOT__cpu__DOT__imm8_ext)));
            __Vdly__top__DOT__cpu__DOT__pc = vlSelf->top__DOT__cpu__DOT__pc1;
        } else {
            __Vdlyvval__top__DOT__cpu__DOT__rf__v1 
                = vlSelf->top__DOT__cpu__DOT__m[(0xffffU 
                                                 & (vlSelf->top__DOT__cpu__DOT__rf
                                                    [
                                                    (0xfU 
                                                     & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                                        >> 4U))] 
                                                    + (IData)(vlSelf->top__DOT__cpu__DOT__imm8_ext)))];
            __Vdlyvset__top__DOT__cpu__DOT__rf__v1 = 1U;
            __Vdlyvdim0__top__DOT__cpu__DOT__rf__v1 
                = (0xfU & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                           >> 8U));
            __Vdly__top__DOT__cpu__DOT__pc = vlSelf->top__DOT__cpu__DOT__pc1;
        }
    } else if ((0x2000U & (IData)(vlSelf->top__DOT__cpu__DOT__instr))) {
        if (VL_UNLIKELY((0x1000U & (IData)(vlSelf->top__DOT__cpu__DOT__instr)))) {
            VL_WRITEF("error: op %2# at PC %5#\n",4,
                      (0xfU & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                               >> 0xcU)),16,(IData)(vlSelf->top__DOT__cpu__DOT__pc));
            __Vdly__top__DOT__cpu__DOT__pc = vlSelf->top__DOT__cpu__DOT__pc1;
        } else {
            __Vdlyvval__top__DOT__cpu__DOT__rf__v2 
                = (0xffffU & (~ (vlSelf->top__DOT__cpu__DOT__rf
                                 [(0xfU & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                           >> 4U))] 
                                 + (IData)(vlSelf->top__DOT__cpu__DOT__imm8_ext))));
            __Vdlyvset__top__DOT__cpu__DOT__rf__v2 = 1U;
            __Vdlyvdim0__top__DOT__cpu__DOT__rf__v2 
                = (0xfU & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                           >> 8U));
            __Vdly__top__DOT__cpu__DOT__pc = vlSelf->top__DOT__cpu__DOT__pc1;
        }
    } else if ((0x1000U & (IData)(vlSelf->top__DOT__cpu__DOT__instr))) {
        __Vdlyvval__top__DOT__cpu__DOT__rf__v3 = (0xffffU 
                                                  & (vlSelf->top__DOT__cpu__DOT__rf
                                                     [
                                                     (0xfU 
                                                      & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                                         >> 4U))] 
                                                     + (IData)(vlSelf->top__DOT__cpu__DOT__imm8_ext)));
        __Vdlyvset__top__DOT__cpu__DOT__rf__v3 = 1U;
        __Vdlyvdim0__top__DOT__cpu__DOT__rf__v3 = (0xfU 
                                                   & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                                      >> 8U));
        __Vdly__top__DOT__cpu__DOT__pc = vlSelf->top__DOT__cpu__DOT__pc1;
    } else {
        __Vdlyvval__top__DOT__cpu__DOT__rf__v4 = (0xffffU 
                                                  & (vlSelf->top__DOT__cpu__DOT__rf
                                                     [
                                                     (0xfU 
                                                      & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                                         >> 4U))] 
                                                     + 
                                                     vlSelf->top__DOT__cpu__DOT__rf
                                                     [
                                                     (0xfU 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__instr))]));
        __Vdlyvset__top__DOT__cpu__DOT__rf__v4 = 1U;
        __Vdlyvdim0__top__DOT__cpu__DOT__rf__v4 = (0xfU 
                                                   & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                                      >> 8U));
        __Vdly__top__DOT__cpu__DOT__pc = vlSelf->top__DOT__cpu__DOT__pc1;
    }
    if (VL_UNLIKELY((0x70ffU == (IData)(vlSelf->top__DOT__cpu__DOT__instr)))) {
        VL_WRITEF("HALT encountered ... exiting\n");
        VL_FINISH_MT("risc16.v", 96, "");
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__m__v0) {
        vlSelf->top__DOT__cpu__DOT__m[__Vdlyvdim0__top__DOT__cpu__DOT__m__v0] 
            = __Vdlyvval__top__DOT__cpu__DOT__m__v0;
    }
    vlSelf->top__DOT__cpu__DOT__pc = __Vdly__top__DOT__cpu__DOT__pc;
    if (__Vdlyvset__top__DOT__cpu__DOT__rf__v0) {
        vlSelf->top__DOT__cpu__DOT__rf[__Vdlyvdim0__top__DOT__cpu__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__cpu__DOT__rf__v0;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__rf__v1) {
        vlSelf->top__DOT__cpu__DOT__rf[__Vdlyvdim0__top__DOT__cpu__DOT__rf__v1] 
            = __Vdlyvval__top__DOT__cpu__DOT__rf__v1;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__rf__v2) {
        vlSelf->top__DOT__cpu__DOT__rf[__Vdlyvdim0__top__DOT__cpu__DOT__rf__v2] 
            = __Vdlyvval__top__DOT__cpu__DOT__rf__v2;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__rf__v3) {
        vlSelf->top__DOT__cpu__DOT__rf[__Vdlyvdim0__top__DOT__cpu__DOT__rf__v3] 
            = __Vdlyvval__top__DOT__cpu__DOT__rf__v3;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__rf__v4) {
        vlSelf->top__DOT__cpu__DOT__rf[__Vdlyvdim0__top__DOT__cpu__DOT__rf__v4] 
            = __Vdlyvval__top__DOT__cpu__DOT__rf__v4;
    }
    vlSelf->top__DOT__cpu__DOT__pc1 = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__cpu__DOT__pc)));
    vlSelf->top__DOT__cpu__DOT__instr = vlSelf->top__DOT__cpu__DOT__m
        [vlSelf->top__DOT__cpu__DOT__pc];
    vlSelf->top__DOT__cpu__DOT__imm8_ext = ((0xff00U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                                               >> 7U)))) 
                                                << 8U)) 
                                            | (0xffU 
                                               & (IData)(vlSelf->top__DOT__cpu__DOT__instr)));
    vlSelf->top__DOT__cpu__DOT__imm4_ext = ((0xfff0U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top__DOT__cpu__DOT__instr) 
                                                               >> 3U)))) 
                                                << 4U)) 
                                            | (0xfU 
                                               & (IData)(vlSelf->top__DOT__cpu__DOT__instr)));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.v", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.v", 5, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
