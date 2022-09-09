// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYX_210340_META_H_
#define VERILATED_VYSYXSOCFULL_YSYX_210340_META_H_  // guard

#include "verilated_heavy.h"

//==========

class VysyxSoCFull__Syms;
class VysyxSoCFull_VerilatedVcd;


//----------

VL_MODULE(VysyxSoCFull_ysyx_210340_Meta) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_idx,5,0);
    VL_IN8(io_tag_wen,0,0);
    VL_OUT8(io_dirty_r,0,0);
    VL_IN8(io_dirty_w,0,0);
    VL_IN8(io_dirty_wen,0,0);
    VL_OUT8(io_valid_r,0,0);
    VL_IN8(io_invalidate,0,0);
    VL_OUT8(io_dirty_r_async,0,0);
    VL_OUT8(io_valid_r_async,0,0);
    VL_OUT(io_tag_r,20,0);
    VL_IN(io_tag_w,20,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*5:0*/ __PVT__tags_io_tag_r_MPORT_addr_pipe_0;
        CData/*0:0*/ __PVT__valid_0;
        CData/*0:0*/ __PVT__valid_1;
        CData/*0:0*/ __PVT__valid_2;
        CData/*0:0*/ __PVT__valid_3;
        CData/*0:0*/ __PVT__valid_4;
        CData/*0:0*/ __PVT__valid_5;
        CData/*0:0*/ __PVT__valid_6;
        CData/*0:0*/ __PVT__valid_7;
        CData/*0:0*/ __PVT__valid_8;
        CData/*0:0*/ __PVT__valid_9;
        CData/*0:0*/ __PVT__valid_10;
        CData/*0:0*/ __PVT__valid_11;
        CData/*0:0*/ __PVT__valid_12;
        CData/*0:0*/ __PVT__valid_13;
        CData/*0:0*/ __PVT__valid_14;
        CData/*0:0*/ __PVT__valid_15;
        CData/*0:0*/ __PVT__valid_16;
        CData/*0:0*/ __PVT__valid_17;
        CData/*0:0*/ __PVT__valid_18;
        CData/*0:0*/ __PVT__valid_19;
        CData/*0:0*/ __PVT__valid_20;
        CData/*0:0*/ __PVT__valid_21;
        CData/*0:0*/ __PVT__valid_22;
        CData/*0:0*/ __PVT__valid_23;
        CData/*0:0*/ __PVT__valid_24;
        CData/*0:0*/ __PVT__valid_25;
        CData/*0:0*/ __PVT__valid_26;
        CData/*0:0*/ __PVT__valid_27;
        CData/*0:0*/ __PVT__valid_28;
        CData/*0:0*/ __PVT__valid_29;
        CData/*0:0*/ __PVT__valid_30;
        CData/*0:0*/ __PVT__valid_31;
        CData/*0:0*/ __PVT__valid_32;
        CData/*0:0*/ __PVT__valid_33;
        CData/*0:0*/ __PVT__valid_34;
        CData/*0:0*/ __PVT__valid_35;
        CData/*0:0*/ __PVT__valid_36;
        CData/*0:0*/ __PVT__valid_37;
        CData/*0:0*/ __PVT__valid_38;
        CData/*0:0*/ __PVT__valid_39;
        CData/*0:0*/ __PVT__valid_40;
        CData/*0:0*/ __PVT__valid_41;
        CData/*0:0*/ __PVT__valid_42;
        CData/*0:0*/ __PVT__valid_43;
        CData/*0:0*/ __PVT__valid_44;
        CData/*0:0*/ __PVT__valid_45;
        CData/*0:0*/ __PVT__valid_46;
        CData/*0:0*/ __PVT__valid_47;
        CData/*0:0*/ __PVT__valid_48;
        CData/*0:0*/ __PVT__valid_49;
        CData/*0:0*/ __PVT__valid_50;
        CData/*0:0*/ __PVT__valid_51;
        CData/*0:0*/ __PVT__valid_52;
        CData/*0:0*/ __PVT__valid_53;
        CData/*0:0*/ __PVT__valid_54;
        CData/*0:0*/ __PVT__valid_55;
        CData/*0:0*/ __PVT__valid_56;
        CData/*0:0*/ __PVT__valid_57;
        CData/*0:0*/ __PVT__valid_58;
        CData/*0:0*/ __PVT__valid_59;
        CData/*0:0*/ __PVT__valid_60;
        CData/*0:0*/ __PVT__valid_61;
        CData/*0:0*/ __PVT__valid_62;
    };
    struct {
        CData/*0:0*/ __PVT__valid_63;
        CData/*0:0*/ __PVT__dirty_0;
        CData/*0:0*/ __PVT__dirty_1;
        CData/*0:0*/ __PVT__dirty_2;
        CData/*0:0*/ __PVT__dirty_3;
        CData/*0:0*/ __PVT__dirty_4;
        CData/*0:0*/ __PVT__dirty_5;
        CData/*0:0*/ __PVT__dirty_6;
        CData/*0:0*/ __PVT__dirty_7;
        CData/*0:0*/ __PVT__dirty_8;
        CData/*0:0*/ __PVT__dirty_9;
        CData/*0:0*/ __PVT__dirty_10;
        CData/*0:0*/ __PVT__dirty_11;
        CData/*0:0*/ __PVT__dirty_12;
        CData/*0:0*/ __PVT__dirty_13;
        CData/*0:0*/ __PVT__dirty_14;
        CData/*0:0*/ __PVT__dirty_15;
        CData/*0:0*/ __PVT__dirty_16;
        CData/*0:0*/ __PVT__dirty_17;
        CData/*0:0*/ __PVT__dirty_18;
        CData/*0:0*/ __PVT__dirty_19;
        CData/*0:0*/ __PVT__dirty_20;
        CData/*0:0*/ __PVT__dirty_21;
        CData/*0:0*/ __PVT__dirty_22;
        CData/*0:0*/ __PVT__dirty_23;
        CData/*0:0*/ __PVT__dirty_24;
        CData/*0:0*/ __PVT__dirty_25;
        CData/*0:0*/ __PVT__dirty_26;
        CData/*0:0*/ __PVT__dirty_27;
        CData/*0:0*/ __PVT__dirty_28;
        CData/*0:0*/ __PVT__dirty_29;
        CData/*0:0*/ __PVT__dirty_30;
        CData/*0:0*/ __PVT__dirty_31;
        CData/*0:0*/ __PVT__dirty_32;
        CData/*0:0*/ __PVT__dirty_33;
        CData/*0:0*/ __PVT__dirty_34;
        CData/*0:0*/ __PVT__dirty_35;
        CData/*0:0*/ __PVT__dirty_36;
        CData/*0:0*/ __PVT__dirty_37;
        CData/*0:0*/ __PVT__dirty_38;
        CData/*0:0*/ __PVT__dirty_39;
        CData/*0:0*/ __PVT__dirty_40;
        CData/*0:0*/ __PVT__dirty_41;
        CData/*0:0*/ __PVT__dirty_42;
        CData/*0:0*/ __PVT__dirty_43;
        CData/*0:0*/ __PVT__dirty_44;
        CData/*0:0*/ __PVT__dirty_45;
        CData/*0:0*/ __PVT__dirty_46;
        CData/*0:0*/ __PVT__dirty_47;
        CData/*0:0*/ __PVT__dirty_48;
        CData/*0:0*/ __PVT__dirty_49;
        CData/*0:0*/ __PVT__dirty_50;
        CData/*0:0*/ __PVT__dirty_51;
        CData/*0:0*/ __PVT__dirty_52;
        CData/*0:0*/ __PVT__dirty_53;
        CData/*0:0*/ __PVT__dirty_54;
        CData/*0:0*/ __PVT__dirty_55;
        CData/*0:0*/ __PVT__dirty_56;
        CData/*0:0*/ __PVT__dirty_57;
        CData/*0:0*/ __PVT__dirty_58;
        CData/*0:0*/ __PVT__dirty_59;
        CData/*0:0*/ __PVT__dirty_60;
        CData/*0:0*/ __PVT__dirty_61;
        CData/*0:0*/ __PVT__dirty_62;
    };
    struct {
        CData/*0:0*/ __PVT__dirty_63;
        CData/*0:0*/ __PVT___GEN_0;
        CData/*0:0*/ __PVT___GEN_1;
        CData/*0:0*/ __PVT___GEN_2;
        CData/*0:0*/ __PVT___GEN_3;
        CData/*0:0*/ __PVT___GEN_4;
        CData/*0:0*/ __PVT___GEN_5;
        CData/*0:0*/ __PVT___GEN_6;
        CData/*0:0*/ __PVT___GEN_7;
        CData/*0:0*/ __PVT___GEN_8;
        CData/*0:0*/ __PVT___GEN_9;
        CData/*0:0*/ __PVT___GEN_10;
        CData/*0:0*/ __PVT___GEN_11;
        CData/*0:0*/ __PVT___GEN_12;
        CData/*0:0*/ __PVT___GEN_13;
        CData/*0:0*/ __PVT___GEN_14;
        CData/*0:0*/ __PVT___GEN_15;
        CData/*0:0*/ __PVT___GEN_16;
        CData/*0:0*/ __PVT___GEN_17;
        CData/*0:0*/ __PVT___GEN_18;
        CData/*0:0*/ __PVT___GEN_19;
        CData/*0:0*/ __PVT___GEN_20;
        CData/*0:0*/ __PVT___GEN_21;
        CData/*0:0*/ __PVT___GEN_22;
        CData/*0:0*/ __PVT___GEN_23;
        CData/*0:0*/ __PVT___GEN_24;
        CData/*0:0*/ __PVT___GEN_25;
        CData/*0:0*/ __PVT___GEN_26;
        CData/*0:0*/ __PVT___GEN_27;
        CData/*0:0*/ __PVT___GEN_28;
        CData/*0:0*/ __PVT___GEN_29;
        CData/*0:0*/ __PVT___GEN_30;
        CData/*0:0*/ __PVT___GEN_31;
        CData/*0:0*/ __PVT___GEN_32;
        CData/*0:0*/ __PVT___GEN_33;
        CData/*0:0*/ __PVT___GEN_34;
        CData/*0:0*/ __PVT___GEN_35;
        CData/*0:0*/ __PVT___GEN_36;
        CData/*0:0*/ __PVT___GEN_37;
        CData/*0:0*/ __PVT___GEN_38;
        CData/*0:0*/ __PVT___GEN_39;
        CData/*0:0*/ __PVT___GEN_40;
        CData/*0:0*/ __PVT___GEN_41;
        CData/*0:0*/ __PVT___GEN_42;
        CData/*0:0*/ __PVT___GEN_43;
        CData/*0:0*/ __PVT___GEN_44;
        CData/*0:0*/ __PVT___GEN_45;
        CData/*0:0*/ __PVT___GEN_46;
        CData/*0:0*/ __PVT___GEN_47;
        CData/*0:0*/ __PVT___GEN_48;
        CData/*0:0*/ __PVT___GEN_49;
        CData/*0:0*/ __PVT___GEN_50;
        CData/*0:0*/ __PVT___GEN_51;
        CData/*0:0*/ __PVT___GEN_52;
        CData/*0:0*/ __PVT___GEN_53;
        CData/*0:0*/ __PVT___GEN_54;
        CData/*0:0*/ __PVT___GEN_55;
        CData/*0:0*/ __PVT___GEN_56;
        CData/*0:0*/ __PVT___GEN_57;
        CData/*0:0*/ __PVT___GEN_58;
        CData/*0:0*/ __PVT___GEN_59;
        CData/*0:0*/ __PVT___GEN_60;
        CData/*0:0*/ __PVT___GEN_61;
        CData/*0:0*/ __PVT___GEN_62;
    };
    struct {
        CData/*0:0*/ __PVT___GEN_63;
        CData/*0:0*/ __PVT__dirty_r;
        CData/*0:0*/ __PVT___GEN_192;
        CData/*0:0*/ __PVT__valid_r;
        CData/*0:0*/ __PVT___GEN_384;
        IData/*20:0*/ __PVT__tags_io_tag_r_MPORT_data;
        VlUnpacked<IData/*20:0*/, 64> __PVT__tags;
    };

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VysyxSoCFull_ysyx_210340_Meta);  ///< Copying not allowed
  public:
    VysyxSoCFull_ysyx_210340_Meta(const char* name);
    ~VysyxSoCFull_ysyx_210340_Meta();

    // INTERNAL METHODS
    void __Vconfigure(VysyxSoCFull__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
