/************************************************************
Author:LiGuoqi
Name:commit.v
Function:commit instration
************************************************************/
`include "defines.v"
module commit (
    input         wire                                          clk              ,
    input         wire                                          rst              ,
    input         wire   [2:0]                                  decode1_counter  ,
    input         wire                                          decode1_clean    ,
    input         wire   [`ysyx22040228_PCBUS]                  decode1_pc       ,
    input         wire   [2:0]                                  decode2_counter  ,
    input         wire                                          decode2_clean    ,
    input         wire   [`ysyx22040228_PCBUS]                  decode2_pc       ,

    input         wire   [`ysyx22040228_PCBUS]                  commit_pc1       ,
    input         wire   [`ysyx22040228_INSTBUS]                commit_inst1     ,
    input         wire   [`ysyx22040228_REGADDRBUS]             commit_addr1     ,
    input         wire   [`ysyx22040228_DATABUS]                commit_data1     ,
    input         wire                                          commit_ena1      ,

    input         wire   [`ysyx22040228_PCBUS]                  commit_pc2       ,
    input         wire   [`ysyx22040228_INSTBUS]                commit_inst2     ,
    input         wire   [`ysyx22040228_REGADDRBUS]             commit_addr2     ,
    input         wire   [`ysyx22040228_DATABUS]                commit_data2     ,
    input         wire                                          commit_ena2      ,

    input         wire   [`ysyx22040228_PCBUS]                  commit_pc3       ,
    input         wire   [`ysyx22040228_REGADDRBUS]             commit_addr3     ,
    input         wire   [`ysyx22040228_DATABUS]                commit_data3     ,
    input         wire                                          commit_ena3      ,

    output        reg                                           subm_wbena       ,
    output        reg    [`ysyx22040228_REGADDRBUS]             subm_wbaddr      ,
    output        reg    [`ysyx22040228_REGBUS]                 subm_wbdata      ,

    output        reg    [`ysyx22040228_REGADDRBUS]             comt_addr0       ,
    output        reg    [`ysyx22040228_DATABUS]                comt_data0       ,
    output        reg                                           comt_ena0        ,

    output        reg    [`ysyx22040228_REGADDRBUS]             comt_addr1       ,
    output        reg    [`ysyx22040228_DATABUS]                comt_data1       ,
    output        reg                                           comt_ena1        ,

    output        reg    [`ysyx22040228_REGADDRBUS]             comt_addr2       ,
    output        reg    [`ysyx22040228_DATABUS]                comt_data2       ,
    output        reg                                           comt_ena2        ,

    output        reg    [`ysyx22040228_REGADDRBUS]             comt_addr3       ,
    output        reg    [`ysyx22040228_DATABUS]                comt_data3       ,
    output        reg                                           comt_ena3        ,

    output        reg    [`ysyx22040228_REGADDRBUS]             comt_addr4       ,
    output        reg    [`ysyx22040228_DATABUS]                comt_data4       ,
    output        reg                                           comt_ena4        ,

    output        reg    [`ysyx22040228_REGADDRBUS]             comt_addr5       ,
    output        reg    [`ysyx22040228_DATABUS]                comt_data5       ,
    output        reg                                           comt_ena5        ,

    output        reg    [`ysyx22040228_REGADDRBUS]             comt_addr6       ,
    output        reg    [`ysyx22040228_DATABUS]                comt_data6       ,
    output        reg                                           comt_ena6        ,

    output        reg    [`ysyx22040228_REGADDRBUS]             comt_addr7       ,
    output        reg    [`ysyx22040228_DATABUS]                comt_data7       ,
    output        reg                                           comt_ena7        

);

import "DPI-C" function void difftest_dut_pc(input longint pc_data, input longint exit_code, input bit endyn, input bit exe);
import "DPI-C" function void difftest_dut_thepc(input longint thepc_data);

always @(*) begin
    difftest_dut_thepc(`ysyx22040228_ZEROWORD);
end

always@(posedge clk)begin
    if(commit_inst1 == `EBREAK_TRAP) begin
        difftest_dut_pc(commit_pc1, commit_data1, 1'b1, diff_ena );   
    end 
    else if(commit_inst2 == `EBREAK_TRAP) begin
        difftest_dut_pc(commit_pc2, commit_data2, 1'b1, diff_ena );   
    end   
    else begin
        difftest_dut_pc(old_ready[63:0], `ysyx22040228_ZEROWORD, 1'b0, diff_ena ); 
    end 
end 

    reg  [63+3:0]                   commit_pcbuff    [7:0] ;
    reg  [`ysyx22040228_REGADDRBUS] commit_addrbuff  [7:0] ;
    reg  [`ysyx22040228_DATABUS]    commit_databuff  [7:0] ;
    reg                             commit_enabuff   [7:0] ;
    reg                             commit_validbuff [7:0] ;

    always @(*) begin
        comt_addr0 = {5{commit_validbuff[0]}}  & commit_addrbuff[0] ;
        comt_data0 = {64{commit_validbuff[0]}} & commit_databuff[0] ;
        comt_ena0  = commit_validbuff[0]       & commit_enabuff [0] ;
        comt_addr1 = {5{commit_validbuff[1]}}  & commit_addrbuff[1] ;
        comt_data1 = {64{commit_validbuff[1]}} & commit_databuff[1] ;
        comt_ena1  = commit_validbuff[1]       & commit_enabuff [1] ;
        comt_addr2 = {5{commit_validbuff[2]}}  & commit_addrbuff[2] ;
        comt_data2 = {64{commit_validbuff[2]}} & commit_databuff[2] ;
        comt_ena2  = commit_validbuff[2]       & commit_enabuff [2] ;
        comt_addr3 = {5{commit_validbuff[3]}}  & commit_addrbuff[3] ;
        comt_data3 = {64{commit_validbuff[3]}} & commit_databuff[3] ;
        comt_ena3  = commit_validbuff[3]       & commit_enabuff [3] ;
        comt_addr4 = {5{commit_validbuff[4]}}  & commit_addrbuff[4] ;
        comt_data4 = {64{commit_validbuff[4]}} & commit_databuff[4] ;
        comt_ena4  = commit_validbuff[4]       & commit_enabuff [4] ;
        comt_addr5 = {5{commit_validbuff[5]}}  & commit_addrbuff[5] ;
        comt_data5 = {64{commit_validbuff[5]}} & commit_databuff[5] ;
        comt_ena5  = commit_validbuff[5]       & commit_enabuff [5] ;
        comt_addr6 = {5{commit_validbuff[6]}}  & commit_addrbuff[6] ;
        comt_data6 = {64{commit_validbuff[6]}} & commit_databuff[6] ;
        comt_ena6  = commit_validbuff[6]       & commit_enabuff [6] ;
        comt_addr7 = {5{commit_validbuff[7]}}  & commit_addrbuff[7] ;
        comt_data7 = {64{commit_validbuff[7]}} & commit_databuff[7] ;
        comt_ena7  = commit_validbuff[7]       & commit_enabuff [7] ;
    end

    wire   decode1_ena ;
    assign decode1_ena = ( | decode1_counter) && (~decode1_clean) ;
    wire   decode2_ena ;
    assign decode2_ena = ( | decode2_counter) && (~decode2_clean) ;

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            commit_pcbuff[0]  <= {3'd0, 64'b0} ;
            commit_pcbuff[1]  <= {3'd1, 64'b0} ;
            commit_pcbuff[2]  <= {3'd2, 64'b0} ;
            commit_pcbuff[3]  <= {3'd3, 64'b0} ;
            commit_pcbuff[4]  <= {3'd4, 64'b0} ;
            commit_pcbuff[5]  <= {3'd5, 64'b0} ;
            commit_pcbuff[6]  <= {3'd6, 64'b0} ;
            commit_pcbuff[7]  <= {3'd7, 64'b0} ;
        end 
        else if(decode1_pc > decode2_pc)  begin
            commit_pcbuff[0][63:0]  <= decode1_pc & {64{decode1_ena}} ;
            commit_pcbuff[1][63:0]  <= decode2_pc & {64{decode2_ena}} ;
            commit_pcbuff[2][63:0]  <= commit_pcbuff[0][63:0] & {64{~clean_submcont[0]}} ;
            commit_pcbuff[3][63:0]  <= commit_pcbuff[1][63:0] & {64{~clean_submcont[1]}} ;
            commit_pcbuff[4][63:0]  <= commit_pcbuff[2][63:0] & {64{~clean_submcont[2]}} ;
            commit_pcbuff[5][63:0]  <= commit_pcbuff[3][63:0] & {64{~clean_submcont[3]}} ;
            commit_pcbuff[6][63:0]  <= commit_pcbuff[4][63:0] & {64{~clean_submcont[4]}} ;
            commit_pcbuff[7][63:0]  <= commit_pcbuff[5][63:0] & {64{~clean_submcont[5]}} ;
        end 
        else if(decode1_pc < decode2_pc) begin
            commit_pcbuff[0][63:0]  <= decode2_pc & {64{decode2_ena}} ;
            commit_pcbuff[1][63:0]  <= decode1_pc & {64{decode1_ena}} ;
            commit_pcbuff[2][63:0]  <= commit_pcbuff[0][63:0] & {64{~clean_submcont[0]}} ;
            commit_pcbuff[3][63:0]  <= commit_pcbuff[1][63:0] & {64{~clean_submcont[1]}} ;
            commit_pcbuff[4][63:0]  <= commit_pcbuff[2][63:0] & {64{~clean_submcont[2]}} ;
            commit_pcbuff[5][63:0]  <= commit_pcbuff[3][63:0] & {64{~clean_submcont[3]}} ;
            commit_pcbuff[6][63:0]  <= commit_pcbuff[4][63:0] & {64{~clean_submcont[4]}} ;
            commit_pcbuff[7][63:0]  <= commit_pcbuff[5][63:0] & {64{~clean_submcont[5]}} ;
        end  
        else begin
            commit_pcbuff[0][63:0]  <= commit_pcbuff[0][63:0] & {64{~clean_submcont[0]}} ;
            commit_pcbuff[1][63:0]  <= commit_pcbuff[1][63:0] & {64{~clean_submcont[1]}} ;
            commit_pcbuff[2][63:0]  <= commit_pcbuff[2][63:0] & {64{~clean_submcont[2]}} ;
            commit_pcbuff[3][63:0]  <= commit_pcbuff[3][63:0] & {64{~clean_submcont[3]}} ;
            commit_pcbuff[4][63:0]  <= commit_pcbuff[4][63:0] & {64{~clean_submcont[4]}} ;
            commit_pcbuff[5][63:0]  <= commit_pcbuff[5][63:0] & {64{~clean_submcont[5]}} ;
            commit_pcbuff[6][63:0]  <= commit_pcbuff[6][63:0] & {64{~clean_submcont[6]}} ;
            commit_pcbuff[7][63:0]  <= commit_pcbuff[7][63:0] & {64{~clean_submcont[7]}} ;
        end        
    end

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            commit_validbuff [0] <= 1'b0 ; 
            commit_validbuff [1] <= 1'b0 ; 
            commit_validbuff [2] <= 1'b0 ; 
            commit_validbuff [3] <= 1'b0 ; 
            commit_validbuff [4] <= 1'b0 ; 
            commit_validbuff [5] <= 1'b0 ; 
            commit_validbuff [6] <= 1'b0 ; 
            commit_validbuff [7] <= 1'b0 ;
        end 
        else begin 
            commit_validbuff [0] <= ~clean_submcont[0] & commit_validbuff [0] ; 
            commit_validbuff [1] <= ~clean_submcont[1] & commit_validbuff [1] ; 
            commit_validbuff [2] <= ~clean_submcont[2] & commit_validbuff [2] ; 
            commit_validbuff [3] <= ~clean_submcont[3] & commit_validbuff [3] ; 
            commit_validbuff [4] <= ~clean_submcont[4] & commit_validbuff [4] ; 
            commit_validbuff [5] <= ~clean_submcont[5] & commit_validbuff [5] ; 
            commit_validbuff [6] <= ~clean_submcont[6] & commit_validbuff [6] ; 
            commit_validbuff [7] <= ~clean_submcont[7] & commit_validbuff [7] ; 
            if(commit_pc1 != `ysyx22040228_ZEROWORD) begin 
                if(commit_pc1 == commit_pcbuff[0][63:0]) begin
                    commit_validbuff[0] <= 1'b1         ;
                    commit_enabuff  [0] <= commit_ena1  ;
                    commit_databuff [0] <= commit_data1 ;
                    commit_addrbuff [0] <= commit_addr1 ;
                end 
                if(commit_pc1 == commit_pcbuff[1][63:0]) begin
                    commit_validbuff[1] <= 1'b1         ;
                    commit_enabuff  [1] <= commit_ena1  ;
                    commit_databuff [1] <= commit_data1 ;
                    commit_addrbuff [1] <= commit_addr1 ;
                end 
                if(commit_pc1 == commit_pcbuff[2][63:0]) begin
                    commit_validbuff[2] <= 1'b1         ;
                    commit_enabuff  [2] <= commit_ena1  ;
                    commit_databuff [2] <= commit_data1 ;
                    commit_addrbuff [2] <= commit_addr1 ;
                end 
                if(commit_pc1 == commit_pcbuff[3][63:0]) begin
                    commit_validbuff[3] <= 1'b1         ;
                    commit_enabuff  [3] <= commit_ena1  ;
                    commit_databuff [3] <= commit_data1 ;
                    commit_addrbuff [3] <= commit_addr1 ;
                end 
                if(commit_pc1 == commit_pcbuff[4][63:0]) begin
                    commit_validbuff[4] <= 1'b1         ;
                    commit_enabuff  [4] <= commit_ena1  ;
                    commit_databuff [4] <= commit_data1 ;
                    commit_addrbuff [4] <= commit_addr1 ;
                end 
                if(commit_pc1 == commit_pcbuff[5][63:0]) begin
                    commit_validbuff[5] <= 1'b1         ;
                    commit_enabuff  [5] <= commit_ena1  ;
                    commit_databuff [5] <= commit_data1 ;
                    commit_addrbuff [5] <= commit_addr1 ;
                end 
                if(commit_pc1 == commit_pcbuff[6][63:0]) begin
                    commit_validbuff[6] <= 1'b1         ;
                    commit_enabuff  [6] <= commit_ena1  ;
                    commit_databuff [6] <= commit_data1 ;
                    commit_addrbuff [6] <= commit_addr1 ;
                end 
                if(commit_pc1 == commit_pcbuff[7][63:0]) begin
                    commit_validbuff[7] <= 1'b1         ;
                    commit_enabuff  [7] <= commit_ena1  ;
                    commit_databuff [7] <= commit_data1 ;
                    commit_addrbuff [7] <= commit_addr1 ;
                end 
            end 
            if(commit_pc2 != `ysyx22040228_ZEROWORD) begin 
                if(commit_pc2 == commit_pcbuff[0][63:0]) begin
                    commit_validbuff[0] <= 1'b1         ;
                    commit_enabuff  [0] <= commit_ena2  ;
                    commit_databuff [0] <= commit_data2 ;
                    commit_addrbuff [0] <= commit_addr2 ;
                end 
                if(commit_pc2 == commit_pcbuff[1][63:0]) begin
                    commit_validbuff[1] <= 1'b1         ;
                    commit_enabuff  [1] <= commit_ena2  ;
                    commit_databuff [1] <= commit_data2 ;
                    commit_addrbuff [1] <= commit_addr2 ;
                end 
                if(commit_pc2 == commit_pcbuff[2][63:0]) begin
                    commit_validbuff[2] <= 1'b1         ;
                    commit_enabuff  [2] <= commit_ena2  ;
                    commit_databuff [2] <= commit_data2 ;
                    commit_addrbuff [2] <= commit_addr2 ;
                end 
                if(commit_pc2 == commit_pcbuff[3][63:0]) begin
                    commit_validbuff[3] <= 1'b1         ;
                    commit_enabuff  [3] <= commit_ena2  ;
                    commit_databuff [3] <= commit_data2 ;
                    commit_addrbuff [3] <= commit_addr2 ;
                end 
                if(commit_pc2 == commit_pcbuff[4][63:0]) begin
                    commit_validbuff[4] <= 1'b1         ;
                    commit_enabuff  [4] <= commit_ena2  ;
                    commit_databuff [4] <= commit_data2 ;
                    commit_addrbuff [4] <= commit_addr2 ;
                end 
                if(commit_pc2 == commit_pcbuff[5][63:0]) begin
                    commit_validbuff[5] <= 1'b1         ;
                    commit_enabuff  [5] <= commit_ena2  ;
                    commit_databuff [5] <= commit_data2 ;
                    commit_addrbuff [5] <= commit_addr2 ;
                end 
                if(commit_pc2 == commit_pcbuff[6][63:0]) begin
                    commit_validbuff[6] <= 1'b1         ;
                    commit_enabuff  [6] <= commit_ena2  ;
                    commit_databuff [6] <= commit_data2 ;
                    commit_addrbuff [6] <= commit_addr2 ;
                end 
                if(commit_pc2 == commit_pcbuff[7][63:0]) begin
                    commit_validbuff[7] <= 1'b1         ;
                    commit_enabuff  [7] <= commit_ena2  ;
                    commit_databuff [7] <= commit_data2 ;
                    commit_addrbuff [7] <= commit_addr2 ;
                end 
            end 
            if(commit_pc3 != `ysyx22040228_ZEROWORD) begin 
                if(commit_pc3 == commit_pcbuff[0][63:0]) begin
                    commit_validbuff[0] <= 1'b1         ;
                    commit_enabuff  [0] <= commit_ena3  ;
                    commit_databuff [0] <= commit_data3 ;
                    commit_addrbuff [0] <= commit_addr3 ;
                end 
                if(commit_pc3 == commit_pcbuff[1][63:0]) begin
                    commit_validbuff[1] <= 1'b1         ;
                    commit_enabuff  [1] <= commit_ena3  ;
                    commit_databuff [1] <= commit_data3 ;
                    commit_addrbuff [1] <= commit_addr3 ;
                end 
                if(commit_pc3 == commit_pcbuff[2][63:0]) begin
                    commit_validbuff[2] <= 1'b1         ;
                    commit_enabuff  [2] <= commit_ena3  ;
                    commit_databuff [2] <= commit_data3 ;
                    commit_addrbuff [2] <= commit_addr3 ;
                end 
                if(commit_pc3 == commit_pcbuff[3][63:0]) begin
                    commit_validbuff[3] <= 1'b1         ;
                    commit_enabuff  [3] <= commit_ena3  ;
                    commit_databuff [3] <= commit_data3 ;
                    commit_addrbuff [3] <= commit_addr3 ;
                end 
                if(commit_pc3 == commit_pcbuff[4][63:0]) begin
                    commit_validbuff[4] <= 1'b1         ;
                    commit_enabuff  [4] <= commit_ena3  ;
                    commit_databuff [4] <= commit_data3 ;
                    commit_addrbuff [4] <= commit_addr3 ;
                end 
                if(commit_pc3 == commit_pcbuff[5][63:0]) begin
                    commit_validbuff[5] <= 1'b1         ;
                    commit_enabuff  [5] <= commit_ena3  ;
                    commit_databuff [5] <= commit_data3 ;
                    commit_addrbuff [5] <= commit_addr3 ;
                end 
                if(commit_pc3 == commit_pcbuff[6][63:0]) begin
                    commit_validbuff[6] <= 1'b1         ;
                    commit_enabuff  [6] <= commit_ena3  ;
                    commit_databuff [6] <= commit_data3 ;
                    commit_addrbuff [6] <= commit_addr3 ;
                end 
                if(commit_pc3 == commit_pcbuff[7][63:0]) begin
                    commit_validbuff[7] <= 1'b1         ;
                    commit_enabuff  [7] <= commit_ena3  ;
                    commit_databuff [7] <= commit_data3 ;
                    commit_addrbuff [7] <= commit_addr3 ;
                end 
            end 
        end 
    end
/* verilator lint_off UNUSED */
    reg [63+3:0] old_ready ;
    reg          diff_ena  ;
    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            old_ready = 67'h0            ;
            clean_submcont = 8'b00000000 ;
            diff_ena       = 1'b0        ;
        end 
        else if((commit_pcbuff[7][63:0] != `ysyx22040228_ZEROWORD) && (commit_validbuff[7]))  begin
            old_ready = commit_pcbuff[7] ;
            clean_submcont = 8'b00000001 ;
            diff_ena  = 1'b1             ;
        end 
        else if((commit_pcbuff[6][63:0] != `ysyx22040228_ZEROWORD) && (commit_validbuff[6]))  begin
            old_ready = commit_pcbuff[6] ;
            clean_submcont = 8'b00000010 ;
            diff_ena  = 1'b1             ;
        end
        else if((commit_pcbuff[5][63:0] != `ysyx22040228_ZEROWORD) && (commit_validbuff[5]))  begin
            old_ready = commit_pcbuff[5] ;
            clean_submcont = 8'b00000100 ;
            diff_ena  = 1'b1             ;
        end
        else if((commit_pcbuff[4][63:0] != `ysyx22040228_ZEROWORD) && (commit_validbuff[4]))  begin
            old_ready = commit_pcbuff[4] ;
            clean_submcont = 8'b00001000 ;
            diff_ena  = 1'b1             ;
        end
        else if((commit_pcbuff[3][63:0] != `ysyx22040228_ZEROWORD) && (commit_validbuff[3]))  begin
            old_ready = commit_pcbuff[3] ;
            clean_submcont = 8'b00010000 ;
            diff_ena  = 1'b1             ;
        end
        else if((commit_pcbuff[2][63:0] != `ysyx22040228_ZEROWORD) && (commit_validbuff[2]))  begin
            old_ready = commit_pcbuff[2] ;
            clean_submcont = 8'b00100000 ;
            diff_ena  = 1'b1             ;
        end
        else if((commit_pcbuff[1][63:0] != `ysyx22040228_ZEROWORD) && (commit_validbuff[1]))  begin
            old_ready = commit_pcbuff[1] ;
            clean_submcont = 8'b01000000 ;
            diff_ena  = 1'b1             ;
        end
        else if((commit_pcbuff[0][63:0] != `ysyx22040228_ZEROWORD) && (commit_validbuff[0]))  begin
            old_ready = commit_pcbuff[0] ;
            clean_submcont = 8'b10000000 ;
            diff_ena  = 1'b1             ;
        end
        else begin
            old_ready = 67'h0            ;
            clean_submcont = 8'b00000000 ;
            diff_ena  = 1'b0             ;
        end 
    end
    reg [7:0] clean_submcont ;
    always @(*) begin
        if(diff_ena  == 1'b1) begin 
            subm_wbena      = commit_validbuff[old_ready[63+3:64]] ;
            subm_wbaddr     = commit_addrbuff [old_ready[63+3:64]] ;
            subm_wbdata     = commit_databuff [old_ready[63+3:64]] ;
        end 
        else begin
            subm_wbena      = 1'b0                                 ;
            subm_wbaddr     = 5'd0                                 ;
            subm_wbdata     = 64'h0                                ;
        end 
    end
    
endmodule

  
