/************************************************************
Author:LiGuoqi
data:2021,10.21
Name:decode_exe.v
Function:Decoding module it is used to parse the key information 
         of the instruction
************************************************************/
`include "defines.v"
module decode_exe (
    input           wire                                     clk               ,
    input           wire                                     rst               ,

    input           wire                                     clean1_ena        ,
    input           wire                                     clean2_ena        ,
    input           wire                                     timer_init        ,

    input           wire                                     stop_aluo         ,
    input           wire                                     stop_alut         ,
    input           wire                                     stop_mmu          ,
    input           wire   [2:0]                             de_ex_chose1      ,
    input           wire   [2:0]                             de_ex_chose2      ,

    input           wire   [7:0]                             inst_type_d1      ,
    input           wire   [7:0]                             inst_opcode_d1    ,
    input           wire   [`ysyx22040228_REGBUS]            op1_decode1       ,
    input           wire   [`ysyx22040228_REGBUS]            op2_decode1       ,
    input           wire                                     decode1_rd_ena    ,
    input           wire   [`ysyx22040228_REGADDRBUS]        decode1_rd_addr   ,
    input           wire   [`ysyx22040228_PCBUS]             decode1_pc_data   ,
    input           wire   [`ysyx22040228_INSTBUS]           decode1_inst_data ,

    input           wire   [`ysyx22040228_DATAADDRBUS]       decode1_memoffset ,
    input           wire   [2 :0]                            decode1_memsel    ,

    input           wire   [7:0]                             inst_type_d2      ,
    input           wire   [7:0]                             inst_opcode_d2    ,
    input           wire   [`ysyx22040228_REGBUS]            op1_decode2       ,
    input           wire   [`ysyx22040228_REGBUS]            op2_decode2       ,
    input           wire                                     decode2_rd_ena    ,
    input           wire   [`ysyx22040228_REGADDRBUS]        decode2_rd_addr   ,
    input           wire   [`ysyx22040228_PCBUS]             decode2_pc_data   ,
    input           wire   [`ysyx22040228_INSTBUS]           decode2_inst_data ,

    input           wire   [`ysyx22040228_DATAADDRBUS]       decode2_memoffset ,
    input           wire   [2 :0]                            decode2_memsel    , 

    output          reg                                      alu1_timer_init   ,
    output          reg    [`ysyx22040228_INSTBUS]           alu1_inst         ,
    output          reg    [`ysyx22040228_PCBUS]             alu1_pc           ,
    output          reg    [7:0]                             alu1_inst_type    ,
    output          reg    [7:0]                             alu1_inst_opcode  ,
    output          reg    [`ysyx22040228_REGBUS]            alu1_op1_data     ,
    output          reg    [`ysyx22040228_REGBUS]            alu1_op2_data     ,
    output          reg                                      alu1_rd_ena       ,
    output          reg    [`ysyx22040228_REGADDRBUS]        alu1_rd_addr      ,

    output          reg    [`ysyx22040228_INSTBUS]           alu2_inst         ,
    output          reg    [`ysyx22040228_PCBUS]             alu2_pc           ,
    output          reg    [7:0]                             alu2_inst_type    ,
    output          reg    [7:0]                             alu2_inst_opcode  ,
    output          reg    [`ysyx22040228_REGBUS]            alu2_op1_data     ,
    output          reg    [`ysyx22040228_REGBUS]            alu2_op2_data     ,
    output          reg                                      alu2_rd_ena       ,
    output          reg    [`ysyx22040228_REGADDRBUS]        alu2_rd_addr      ,

    output          reg    [`ysyx22040228_INSTBUS]           mem_inst          ,
    output          reg    [`ysyx22040228_PCBUS]             mem_pc            ,
    output          reg    [7:0]                             mem_inst_type     ,
    output          reg                                      mem_rd_ena        ,
    output          reg    [`ysyx22040228_REGADDRBUS]        mem_rd_addr       ,
    output          reg    [`ysyx22040228_REGBUS]            mem_op2           ,
    output          reg    [`ysyx22040228_DATAADDRBUS]       mem_offset        ,
    output          reg    [ 2:0]                            mem_sel           

);
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            alu1_inst          <= 32'h0          ;
            alu1_pc            <= 64'h0          ;
            alu1_inst_type     <= 8'h0           ;
            alu1_inst_opcode   <= 8'h0           ;
            alu1_op1_data      <= 64'h0          ;
            alu1_op2_data      <= 64'h0          ;
            alu1_rd_ena        <= 1'b0           ;
            alu1_rd_addr       <= 5'd0           ;
        end  
        else if(stop_aluo) begin
            alu1_inst          <= alu1_inst      ;
            alu1_pc            <= alu1_pc        ;
            alu1_inst_type     <= alu1_inst_type ;
            alu1_inst_opcode   <= alu1_inst_opcode;
            alu1_op1_data      <= alu1_op1_data  ;
            alu1_op2_data      <= alu1_op2_data  ;
            alu1_rd_ena        <= alu1_rd_ena    ;
            alu1_rd_addr       <= alu1_rd_addr   ;     
        end 
        else if((de_ex_chose1 == 3'b001) && (clean1_ena)) begin
            alu1_inst          <= decode1_inst_data;
            alu1_pc            <= decode1_pc_data;
            alu1_inst_type     <= inst_type_d1   ;
            alu1_inst_opcode   <= inst_opcode_d1 ;
            alu1_op1_data      <= op1_decode1    ;
            alu1_op2_data      <= op2_decode1    ;
            alu1_rd_ena        <= decode1_rd_ena ;
            alu1_rd_addr       <= decode1_rd_addr;
            alu1_timer_init    <= timer_init     ;
        end 
        else if((de_ex_chose2 == 3'b001) && (clean2_ena)) begin
            alu1_inst          <= decode2_inst_data;
            alu1_pc            <= decode2_pc_data;
            alu1_inst_type     <= inst_type_d2   ;
            alu1_inst_opcode   <= inst_opcode_d2 ;
            alu1_op1_data      <= op1_decode2    ;
            alu1_op2_data      <= op2_decode2    ;
            alu1_rd_ena        <= decode2_rd_ena ;
            alu1_rd_addr       <= decode2_rd_addr;
            alu1_timer_init    <= timer_init     ;
        end 
        else begin
            alu1_inst          <= 32'h0          ;
            alu1_pc            <= 64'h0          ;
            alu1_inst_type     <= 8'h0           ;
            alu1_inst_opcode   <= 8'h0           ;
            alu1_op1_data      <= 64'h0          ;
            alu1_op2_data      <= 64'h0          ;
            alu1_rd_ena        <= 1'b0           ;
            alu1_rd_addr       <= 5'd0           ;
        end 
    end

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            alu2_inst          <= 32'h0          ;
            alu2_pc            <= 64'h0          ;
            alu2_inst_type     <= 8'h0           ;
            alu2_inst_opcode   <= 8'h0           ;
            alu2_op1_data      <= 64'h0          ;
            alu2_op2_data      <= 64'h0          ;
            alu2_rd_ena        <= 1'b0           ;
            alu2_rd_addr       <= 5'd0           ;
        end 
        else if(stop_alut) begin
            alu2_inst          <= alu2_inst      ;
            alu2_pc            <= alu2_pc        ;
            alu2_inst_type     <= alu2_inst_type ;
            alu2_inst_opcode   <= alu2_inst_opcode;
            alu2_op1_data      <= alu2_op1_data  ;
            alu2_op2_data      <= alu2_op2_data  ;
            alu2_rd_ena        <= alu2_rd_ena    ;
            alu2_rd_addr       <= alu2_rd_addr   ;
        end
        else if((de_ex_chose1 == 3'b010) && (clean1_ena)) begin
            alu2_inst          <= decode1_inst_data;
            alu2_pc            <= decode1_pc_data;
            alu2_inst_type     <= inst_type_d1   ;
            alu2_inst_opcode   <= inst_opcode_d1 ;
            alu2_op1_data      <= op1_decode1    ;
            alu2_op2_data      <= op2_decode1    ;
            alu2_rd_ena        <= decode1_rd_ena ;
            alu2_rd_addr       <= decode1_rd_addr;
        end  
        else if((de_ex_chose2 == 3'b010) && (clean2_ena)) begin
            alu2_inst          <= decode2_inst_data;
            alu2_pc            <= decode2_pc_data;
            alu2_inst_type     <= inst_type_d2   ;
            alu2_inst_opcode   <= inst_opcode_d2 ;
            alu2_op1_data      <= op1_decode2    ;
            alu2_op2_data      <= op2_decode2    ;
            alu2_rd_ena        <= decode2_rd_ena ;
            alu2_rd_addr       <= decode2_rd_addr;
        end  
        else begin
            alu2_inst          <= 32'h0          ;
            alu2_pc            <= 64'h0          ;
            alu2_inst_type     <= 8'h0           ;
            alu2_inst_opcode   <= 8'h0           ;
            alu2_op1_data      <= 64'h0          ;
            alu2_op2_data      <= 64'h0          ;
            alu2_rd_ena        <= 1'b0           ;
            alu2_rd_addr       <= 5'd0           ;
        end 
    end

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            mem_inst           <= 32'h0          ;
            mem_pc             <= 64'h0          ;
            mem_inst_type      <= 8'h0           ;
            mem_rd_ena         <= 1'b0           ;
            mem_rd_addr        <= 5'h0           ;
            mem_op2            <= 64'h0          ; 
            mem_offset         <= 64'h0          ;
            mem_sel            <= 3'b0           ;
        end
        else if(stop_mmu) begin
            mem_inst           <= mem_inst       ;
            mem_pc             <= mem_pc         ;
            mem_inst_type      <= mem_inst_type  ;
            mem_rd_ena         <= mem_rd_ena     ;
            mem_rd_addr        <= mem_rd_addr    ;
            mem_op2            <= mem_op2        ; 
            mem_offset         <= mem_offset     ;
            mem_sel            <= mem_sel        ;
        end 
        else if((de_ex_chose1 == 3'b100) && (clean1_ena)) begin
            mem_inst           <= decode1_inst_data;
            mem_pc             <= decode1_pc_data  ;
            mem_inst_type      <= inst_type_d1     ;
            mem_rd_ena         <= decode1_rd_ena   ;
            mem_rd_addr        <= decode1_rd_addr  ;
            mem_op2            <= op2_decode1      ; 
            mem_offset         <= decode1_memoffset;
            mem_sel            <= decode1_memsel   ;
        end
        else if((de_ex_chose2 == 3'b100) && (clean2_ena)) begin
            mem_inst           <= decode2_inst_data;
            mem_pc             <= decode2_pc_data  ;
            mem_inst_type      <= inst_type_d2     ;
            mem_rd_ena         <= decode2_rd_ena   ;
            mem_rd_addr        <= decode2_rd_addr  ;
            mem_op2            <= op2_decode2      ; 
            mem_offset         <= decode2_memoffset;
            mem_sel            <= decode2_memsel   ;
        end 
        else begin
            mem_inst           <= 32'h0          ;
            mem_pc             <= 64'h0          ;
            mem_inst_type      <= 8'h0           ;
            mem_rd_ena         <= 1'b0           ;
            mem_rd_addr        <= 5'h0           ;
            mem_op2            <= 64'h0          ; 
            mem_offset         <= 64'h0          ;
            mem_sel            <= 3'b0           ;
        end 
    end

endmodule

