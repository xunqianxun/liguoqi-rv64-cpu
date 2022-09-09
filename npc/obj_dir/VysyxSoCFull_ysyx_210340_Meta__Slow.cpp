// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_ysyx_210340_Meta.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========


void VysyxSoCFull_ysyx_210340_Meta___ctor_var_reset(VysyxSoCFull_ysyx_210340_Meta* vlSelf);

VysyxSoCFull_ysyx_210340_Meta::VysyxSoCFull_ysyx_210340_Meta(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VysyxSoCFull_ysyx_210340_Meta___ctor_var_reset(this);
}

void VysyxSoCFull_ysyx_210340_Meta::__Vconfigure(VysyxSoCFull__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VysyxSoCFull_ysyx_210340_Meta::~VysyxSoCFull_ysyx_210340_Meta() {
}

void VysyxSoCFull_ysyx_210340_Meta___settle__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__cache__DOT__meta_0__17(VysyxSoCFull_ysyx_210340_Meta* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VysyxSoCFull_ysyx_210340_Meta___settle__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__cache__DOT__meta_0__17\n"); );
    // Body
    vlSelf->__PVT__tags_io_tag_r_MPORT_data = vlSelf->__PVT__tags
        [vlSelf->__PVT__tags_io_tag_r_MPORT_addr_pipe_0];
}

void VysyxSoCFull_ysyx_210340_Meta___ctor_var_reset(VysyxSoCFull_ysyx_210340_Meta* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VysyxSoCFull_ysyx_210340_Meta___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_idx = VL_RAND_RESET_I(6);
    vlSelf->io_tag_r = VL_RAND_RESET_I(21);
    vlSelf->io_tag_w = VL_RAND_RESET_I(21);
    vlSelf->io_tag_wen = VL_RAND_RESET_I(1);
    vlSelf->io_dirty_r = VL_RAND_RESET_I(1);
    vlSelf->io_dirty_w = VL_RAND_RESET_I(1);
    vlSelf->io_dirty_wen = VL_RAND_RESET_I(1);
    vlSelf->io_valid_r = VL_RAND_RESET_I(1);
    vlSelf->io_invalidate = VL_RAND_RESET_I(1);
    vlSelf->io_dirty_r_async = VL_RAND_RESET_I(1);
    vlSelf->io_valid_r_async = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->__PVT__tags[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->__PVT__tags_io_tag_r_MPORT_data = VL_RAND_RESET_I(21);
    vlSelf->__PVT__tags_io_tag_r_MPORT_addr_pipe_0 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__valid_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_7 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_8 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_9 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_11 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_12 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_13 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_14 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_15 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_16 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_17 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_18 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_19 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_20 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_21 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_22 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_23 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_24 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_25 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_26 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_27 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_28 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_29 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_30 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_31 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_32 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_33 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_34 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_35 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_36 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_37 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_38 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_39 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_40 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_41 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_42 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_43 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_44 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_45 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_46 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_47 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_48 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_49 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_50 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_51 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_52 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_53 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_54 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_55 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_56 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_57 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_58 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_59 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_60 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_61 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_62 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_63 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_7 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_8 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_9 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_11 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_12 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_13 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_14 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_15 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_16 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_17 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_18 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_19 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_20 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_21 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_22 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_23 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_24 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_25 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_26 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_27 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_28 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_29 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_30 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_31 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_32 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_33 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_34 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_35 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_36 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_37 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_38 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_39 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_40 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_41 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_42 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_43 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_44 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_45 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_46 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_47 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_48 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_49 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_50 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_51 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_52 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_53 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_54 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_55 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_56 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_57 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_58 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_59 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_60 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_61 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_62 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_63 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_17 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_19 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_21 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_22 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_23 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_24 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_25 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_26 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_27 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_28 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_29 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_30 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_31 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_32 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_33 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_34 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_35 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_36 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_37 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_38 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_39 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_40 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_41 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_42 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_43 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_44 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_45 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_46 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_47 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_48 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_49 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_50 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_51 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_52 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_53 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_54 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_55 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_56 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_57 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_58 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_59 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_60 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_61 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_62 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_63 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dirty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_192 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_384 = VL_RAND_RESET_I(1);
}
