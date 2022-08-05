/************************************************************
Author:LiGuoqi
Name:pc.v
Function: pc 
************************************************************/
`include "defines.v"
module issuequeue (
    input          wire                                     clk            ,
    input          wire                                     rst            ,

    input          wire    [255:0]                          pc             , 
    input          wire    [127:0]                          inst           ,
    input          wire    [3:0]                            check_cleanj   ,
    input          wire                                     cache_data_in  ,

    input          wire                                     decode1_j_bad  ,
    input          wire                                     decide2_j_bad  ,
    input          wire                                     interrupt_terp ,

    input          wire                                     stop1          ,
    input          wire                                     stop2          ,
    input          wire                                     trap_nop1      ,
    input          wire                                     trap_nop2      ,

    output         reg                                      accept_icache  ,
    output         reg     [`ysyx22040228_PCBUS]            pc_decode1     ,
    output         reg     [`ysyx22040228_INSTBUS]          inst_decode1   ,

    output         reg     [`ysyx22040228_PCBUS]            pc_decode2     ,
    output         reg     [`ysyx22040228_INSTBUS]          inst_decode2     
);
    wire  should_updata  ;
    reg   [255:0]  inreg_pc    ;
    reg   [127:0]  inreg_inst  ;
    reg   [255:0]  temp_pc     ;
    reg   [127:0]  temp_inst   ;
    reg            clean_temp  ; 
    always @(posedge clk) begin
        if(decode1_j_bad | decide2_j_bad | interrupt_terp)
            clean_temp   <=  1'b1  ;
        else if(cache_data_in)
            clean_temp   <=  1'b0  ;
        else 
            clean_temp <= clean_temp ;
    end

    always @(posedge clk) begin
        if(clean_temp) begin
            inreg_pc    <= 256'h0 ;
            inreg_inst  <= 128'h0 ;
            accept_icache <= 1'b1 ;
        end 
        else if(inreg_pc[31:28] == 4'b0000) begin
            inreg_pc    <= {(pc[255:192] & {64{~check_cleanj[3]}}), (pc[191:128] & {64{~check_cleanj[2]}}), (pc[127:64] & {64{~check_cleanj[1]}}), (pc[63:0] & {64{~check_cleanj[0]}})}    ;
            inreg_inst  <= {(inst[127:96] & {32{~check_cleanj[3]}}), (inst[95:64] & {32{~check_cleanj[2]}}), (inst[63:32] & {32{~check_cleanj[1]}}), (inst[31:0] & {32{~check_cleanj[0]}})}  ;
            accept_icache <= 1'b1 ;
        end 
        else if(decode1_j_bad | decide2_j_bad | interrupt_terp) begin
            inreg_pc    <= 256'h0 ;
            inreg_inst  <= 128'h0 ;
            accept_icache <= 1'b1 ;
        end 
        else if(inreg_clean) begin
            inreg_pc    <= 256'h0 ;
            inreg_inst  <= 128'h0 ;
            accept_icache <= 1'b1 ;
        end 
        else begin 
            inreg_pc   <= inreg_pc   ;
            inreg_inst <= inreg_inst ;
            accept_icache <= 1'b0    ;
        end 
    end
    reg           inreg_clean ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            pc_decode1    <= `ysyx22040228_ZEROWORD ;
            inst_decode1  <= 32'h0                  ;    
            pc_decode2    <= `ysyx22040228_ZEROWORD ;
            inst_decode2  <= 32'h0                  ;
            inreg_clean   <= 1'b0                   ;
        end 
        else if(decode1_j_bad | decide2_j_bad | interrupt_terp) begin
            pc_decode1    <= `ysyx22040228_ZEROWORD ;
            inst_decode1  <= 32'h0                  ;
            pc_decode2    <= `ysyx22040228_ZEROWORD ;
            inst_decode2  <= 32'h0                  ;
            temp_inst     <= 128'h0                 ;
            temp_pc       <= 256'h0                 ;
            inreg_clean   <= 1'b0                   ;
        end
        else begin
            if(should_updata)begin
                temp_pc   <= inreg_pc   ;
                temp_inst <= inreg_inst ;
                inreg_clean <= 1'b1     ;
                pc_decode1    <= `ysyx22040228_ZEROWORD ;
                inst_decode1  <= 32'h0                  ;    
                pc_decode2    <= `ysyx22040228_ZEROWORD ;
                inst_decode2  <= 32'h0                  ;
            end 
            else if((stop1 != 1'b1) && (stop2 != 1'b1)) begin
                pc_decode1    <= temp_pc[63:0]          ;
                inst_decode1  <= temp_inst[31:0]        ;
                pc_decode2    <= temp_pc[127:64]        ;
                inst_decode2  <= temp_inst[63:32]       ; 
                temp_pc       <= {128'h0, temp_pc[255:128]} ;
                temp_inst     <= {64'h0 , temp_inst[127:64]};
                inreg_clean   <= 1'b0                   ;
            end 
            else if((stop1 != 1'b1) && (stop2 == 1'b1)) begin
                pc_decode1    <= temp_pc[63:0]          ;
                inst_decode1  <= temp_inst[31:0]        ;
                temp_pc       <= {64'h0, temp_pc[255:64]}  ;
                temp_inst     <= {32'h0, temp_inst[127:32]};
                inreg_clean   <= 1'b0                   ;
                if(trap_nop1)begin
                    pc_decode2    <= 64'h0             ;
                    inst_decode2  <= 32'h0             ;
                end
                else begin
                    pc_decode2    <= pc_decode2        ;
                    inst_decode2  <= inst_decode2      ;
                end  
            end 
            else if((stop1 == 1'b1) && (stop2 != 1'b1)) begin
                pc_decode2    <= temp_pc[63:0]          ;
                inst_decode2  <= temp_inst[31:0]        ;
                temp_pc       <= {64'h0, temp_pc[255:64]}  ;
                temp_inst     <= {32'h0, temp_inst[127:32]};
                inreg_clean   <= 1'b0                   ;
                if(trap_nop2)begin
                    pc_decode1    <= 64'h0             ;
                    inst_decode1  <= 32'h0             ;
                end
                else begin
                    pc_decode1    <= pc_decode1        ;
                    inst_decode1  <= inst_decode1      ;
                end
            end
            else begin
                pc_decode1    <= pc_decode1             ;
                inst_decode1  <= inst_decode1           ;
                pc_decode2    <= pc_decode2             ;
                inst_decode2  <= inst_decode2           ;
                inreg_clean   <= 1'b0                   ;
            end  
        end 
    end 

    //assign temp_empty      = (inreg_pc[63:60] == 4'b0000)    ;
    assign should_updata = (temp_pc[31:28] == 4'b0000) && (temp_pc[95:92] == 4'b0000) && (temp_pc[159:156] == 4'b0000) && (temp_pc[222:219] == 4'b0000) && (stop1 != 1'b1) && (stop2 != 1'b1); 
    
endmodule
