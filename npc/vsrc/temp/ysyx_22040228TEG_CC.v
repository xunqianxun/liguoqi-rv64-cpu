/************************************************************
Author:LiGuoqi
Name:teg_cc.v
Function:memory teg data
************************************************************/
`include "ysyx_22040228defines.v"
`include "ysyx_22040228cache_defines.v"
module ysyx_22040228TEG_CC (
    input            wire                                                         clk        ,
    input            wire                                                         rst        ,
    input            wire       [5:0]                                             addr_i     ,
    input            wire       [`ysyx22040228_TEG_WITH]                          teg_i      ,
    input            wire                                                         teg_valid  ,
    input            wire                                                         teg_ena    ,
    output           wire       [`ysyx22040228_TEG_WITH]                          data_o     ,
    output           wire                                                         data_valid 
);

    reg   [`ysyx22040228_TEG_WITH]   ram   [0:63] ;
    reg                              valid [0:63] ;
    reg   [`ysyx22040228_TEG_WITH]   out_data_r   ;
    reg                              out_valid_r  ;
    integer t ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            for(t = 0;t<64;t=t+1) begin
                ram[t] <= 23'h0 ;
                valid[t] <= 1'b0 ;
            end
        end 
        else if(teg_ena) begin
            ram[addr_i]   <= teg_i    ;
            valid[addr_i] <= teg_valid;
        end 
        else begin
           out_data_r     <= ram[addr_i]  ;
           out_valid_r    <= valid[addr_i]; 
        end 
    end

    assign data_o = out_data_r ;
    assign data_valid = (out_valid_r == 1'b1) ? 1'b1 : 1'b0 ;


endmodule

