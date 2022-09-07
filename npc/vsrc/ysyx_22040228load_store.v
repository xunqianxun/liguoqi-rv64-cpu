/************************************************************
Author:LiGuoqi
Name:mem.v
Function:Reading and write data in the DATA-memory module
************************************************************/
`include "ysyx_22040228defines.v"
module ysyx_22040228load_store (
    input                wire                                                rst                  ,
    input                wire          [ 7:0]                                inst_type_i          ,
    input                wire                                                rd_ena_i             ,
    input                wire          [`ysyx22040228_REGBUS]                rd_data_i            ,
    input                wire          [`ysyx22040228_REGADDRBUS]            rd_addr_i            ,
    input                wire          [`ysyx22040228_PCBUS]                 mem_pc_i             ,
    input                wire          [`ysyx22040228_INSTBUS]               mem_inst_i           ,

    input                wire          [`ysyx22040228_DATAADDRBUS]           ls_addr_i            ,
    input                wire          [ 2:0]                                ls_sel_i             ,
    input                wire                                                fence_ready_         ,

    output               wire          [`ysyx22040228_DATAADDRBUS]           data_addr_o          ,
    output               wire          [ 7:0]                                wmask_o              ,
    input                wire          [`ysyx22040228_DATABUS]               data_i               ,
    output               wire          [`ysyx22040228_DATABUS]               data_o               ,
    output               wire                                                fence                ,
    output               wire                                                we                   ,
    output               wire          [2:0]                                 we_type_sel          ,
    output               wire                                                re                   ,
    output               wire          [2:0]                                 re_type_sel          ,
    input                wire                                                mem_finish           ,
    
    output               wire                                                rd_ena_o             ,
    output               wire          [`ysyx22040228_REGBUS]                rd_data_o            ,
    output               wire          [`ysyx22040228_REGADDRBUS]            rd_addr_o            ,
    output               wire          [`ysyx22040228_PCBUS]                 mem_pc_o             ,
    output               wire          [`ysyx22040228_INSTBUS]               mem_inst_o           ,

    output               wire                                                mem_stall_req        
);

assign mem_pc_o = (rst == `ysyx22040228_RSTENA) ? `ysyx22040228_ZEROWORD : mem_pc_i ;
assign mem_inst_o = (rst == `ysyx22040228_RSTENA) ? 32'b0 : mem_inst_i ;
    
assign mem_stall_req = (rst == `ysyx22040228_RSTENA) ? 1'b0 : ((((re|we) | (fence_ready_)) && (mem_finish == 1'b0))) ;
assign fence         = fence_ready_;

assign rd_addr_o  = rd_addr_i ;
assign rd_data_o  = inst_type_i[1] ? load_data : rd_data_i ;
assign rd_ena_o   = rd_ena_i  ;

//-------------------------------write type------------------------------------//
//                we_type_sel == 3'b000 ------------>>> SB                     //
//                we_type_sel == 3'b001 ------------>>> SH                     //
//                we_type_sel == 3'b010 ------------>>> SW                     //
//                we_type_sel == 3'b100 ------------>>> SD                     //
//-----------------------------------------------------------------------------//      

assign we             = (rst == `ysyx22040228_RSTENA)                                            ? 1'b0 : inst_type_i[0]  ;
assign we_type_sel    = (rst == `ysyx22040228_RSTENA)                                            ? 3'b111                 :
                        ((inst_type_i[0]) && (ls_sel_i == `SB_SEL))                              ? 3'b000                 :
                        ((inst_type_i[0]) && (ls_sel_i == `SH_SEL))                              ? 3'b001                 :
                        ((inst_type_i[0]) && (ls_sel_i == `SW_SEL))                              ? 3'b010                 :
                        ((inst_type_i[0]) && (ls_sel_i == `SD_SEL))                              ? 3'b100                 :
                                                                                                   3'b111                 ;
//-------------------------------read type-------------------------------------//
//                re_type_sel == 3'b000 ------------>>> LB | LBU               //
//                re_type_sel == 3'b001 ------------>>> LH | LHU               //
//                re_type_sel == 3'b010 ------------>>> LW | LWU               //
//                re_type_sel == 3'b100 ------------>>> LD                     //
//-----------------------------------------------------------------------------//           

assign re             = (rst == `ysyx22040228_RSTENA)                                            ? 1'b0 : inst_type_i[1]  ;
assign re_type_sel    = (rst == `ysyx22040228_RSTENA)                                            ? 3'b111                 :
                        ((inst_type_i[1]) && ((ls_sel_i == `LB_SEL) || (ls_sel_i == `LBU_SEL)))  ? 3'b000                 :
                        ((inst_type_i[1]) && ((ls_sel_i == `LH_SEL) || (ls_sel_i == `LHU_SEL)))  ? 3'b001                 :
                        ((inst_type_i[1]) && ((ls_sel_i == `LW_SEL) || (ls_sel_i == `LWU_SEL)))  ? 3'b010                 :
                        ((inst_type_i[1]) && (ls_sel_i == `LD_SEL))                              ? 3'b100                 :
                                                                                                   3'b111                 ;
assign data_addr_o    = (rst == `ysyx22040228_RSTENA) ? `ysyx22040228_ZEROWORD : ls_addr_i ;

reg [`ysyx22040228_DATABUS] load_data ;

wire [ 2:0] byte_sel      = ls_addr_i[2:0] ;
wire [ 1:0] half_byte_sel = ls_addr_i[2:1] ;
wire        word_sel      = ls_addr_i[2]   ;

reg  [ 7:0] data_byte      ;
reg  [15:0] data_half_byte ;
wire [31:0] data_word      ;

always @(*) begin
    if(rst == `ysyx22040228_RSTENA) begin
        data_byte = 8'b00000000           ;
    end 
    else begin 
        case (byte_sel)
            3'b000: data_byte = data_i[ 7: 0] ;
            3'b001: data_byte = data_i[15: 8] ;
            3'b010: data_byte = data_i[23:16] ;
            3'b011: data_byte = data_i[31:24] ;
            3'b100: data_byte = data_i[39:32] ;
            3'b101: data_byte = data_i[47:40] ;
            3'b110: data_byte = data_i[55:48] ;
            default: data_byte = data_i[63:56] ;
        endcase
    end 
end

always @(*) begin
    if(rst == `ysyx22040228_RSTENA) begin 
        data_half_byte = 16'h0  ;
    end 
    else begin 
        case (half_byte_sel)
            2'b00: data_half_byte = data_i[15: 0] ;
            2'b01: data_half_byte = data_i[31:16] ;
            2'b10: data_half_byte = data_i[47:32] ; 
            default: data_half_byte = data_i[63:48] ;
        endcase
    end 
end

assign data_word = word_sel ? data_i[63:32] : data_i[31:0] ;

always @(*) begin
    if(rst == `ysyx22040228_RSTENA) begin
        load_data = `ysyx22040228_ZEROWORD ;
    end 
    else if(inst_type_i == 8'b00000010 ) begin
        case (ls_sel_i)
            `LB_SEL:begin load_data = {{56{data_byte[7]}} , data_byte} ; end
            `LH_SEL:begin load_data = {{48{data_half_byte[15]}} , data_half_byte} ; end
            `LW_SEL:begin load_data = {{32{data_word[31]}} , data_word} ; end
            `LBU_SEL:begin load_data = {{56{1'b0}} , data_byte} ; end
            `LHU_SEL:begin load_data = {{48{1'b0}} , data_half_byte} ; end
            `LWU_SEL:begin load_data = {{32{1'b0}} , data_word} ; end
            `LD_SEL:begin load_data = data_i ; end
            default:begin load_data = `ysyx22040228_ZEROWORD ; end
        endcase
    end
    else begin load_data = `ysyx22040228_ZEROWORD ; end
end

reg [`ysyx22040228_DATABUS] store_data ;
reg [ 7:0]      store_mask ;
reg [`ysyx22040228_DATABUS] sb_data    ;
reg [`ysyx22040228_DATABUS] sh_data    ;
reg [`ysyx22040228_DATABUS] sw_data    ;
reg [ 7:0]      sb_mask    ;
reg [ 7:0]      sh_mask    ;
reg [ 7:0]      sw_mask    ;

always @(*) begin
    if(rst == `ysyx22040228_RSTENA) begin
        sb_data = 64'd0 ;
        sb_mask = 8'd0  ;
    end
    else begin
        case (byte_sel)
            3'b000:    begin
                sb_data = {56'd0 , rd_data_i[7:0]} ;
                sb_mask = 8'b00000001 ; 
            end 
            3'b001:    begin
                sb_data = {48'd0 , rd_data_i[7:0] , 8'd0} ;
                sb_mask = 8'b00000010 ; 
            end 
            3'b010:    begin
                sb_data = {40'd0 , rd_data_i[7:0] , 16'd0} ;
                sb_mask = 8'b00000100 ; 
            end 
            3'b011:    begin
                sb_data = {32'd0 , rd_data_i[7:0] , 24'd0} ;
                sb_mask = 8'b00001000 ; 
            end 
            3'b100:    begin
                sb_data = {24'd0 , rd_data_i[7:0] , 32'd0} ;
                sb_mask = 8'b00010000 ; 
            end 
            3'b101:    begin
                sb_data = {16'd0 , rd_data_i[7:0] , 40'd0} ;
                sb_mask = 8'b00100000 ; 
            end 
            3'b110:    begin
                sb_data = {8'd0 , rd_data_i[7:0] , 48'd0} ;
                sb_mask = 8'b01000000 ; 
            end 
            default:   begin
                sb_data = {rd_data_i[7:0] , 56'd0} ;
                sb_mask = 8'b10000000 ; 
            end
        endcase
    end
end

always @(*) begin
    if(rst == `ysyx22040228_RSTENA) begin
        sh_data = 64'd0 ;
        sh_mask = 8'd0  ;
    end
    else begin
        case (half_byte_sel)
            2'b00:     begin
                sh_data = {48'd0 , rd_data_i[15:0]} ;
                sh_mask = 8'b00000011               ;
            end 
            2'b01:     begin
                sh_data = {32'd0 , rd_data_i[15:0] , 16'd0} ;
                sh_mask = 8'b00001100                       ;
            end
            2'b10:     begin
                sh_data = {16'd0 , rd_data_i[15:0] , 32'd0} ;
                sh_mask = 8'b00110000                       ;
            end
            default:   begin
                sh_data = {rd_data_i[15:0] , 48'd0} ;
                sh_mask = 8'b11000000               ;
            end 
        endcase
    end
end

always @(*) begin
    if(rst == `ysyx22040228_RSTENA) begin
        sw_data = 64'd0 ;
        sw_mask = 8'd0  ;
    end
    else begin
        case (word_sel)
            1'b0:    begin
                sw_data = {32'd0 , rd_data_i[31:0]} ;
                sw_mask = 8'b00001111               ;
            end 
            default: begin
                sw_data = {rd_data_i[31:0] , 32'd0} ;
                sw_mask = 8'b11110000               ;
            end 
        endcase
    end
end

always @(*) begin
    if(rst == `ysyx22040228_RSTENA) begin
        store_data = 64'd0 ;
        store_mask = 8'd0  ;
    end
    else begin
        case (ls_sel_i)
            `SB_SEL:   begin
                store_data = sb_data ;
                store_mask = sb_mask ; 
            end
            `SH_SEL:   begin
                store_data = sh_data ;
                store_mask = sh_mask ; 
            end
            `SW_SEL:   begin
                store_data = sw_data ;
                store_mask = sw_mask ; 
            end
            `SD_SEL:   begin
                store_data = rd_data_i ;
                store_mask = 8'b11111111 ; 
            end
            default: begin
                store_data = 64'd0 ;
                store_mask = 8'd0  ;
            end
        endcase
    end
end

assign data_o   = (rst == `ysyx22040228_RSTENA | ~inst_type_i[0]) ? 64'd0 : store_data ;
assign wmask_o  = (rst == `ysyx22040228_RSTENA | ~inst_type_i[0]) ? 8'd0  : store_mask ;
endmodule//mem

