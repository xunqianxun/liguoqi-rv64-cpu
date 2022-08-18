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

    input         wire                                          decode1_caninis  ,
    input         wire                                          decode2_caninis  ,

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
    difftest_dut_thepc(difftest_pc);
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

    reg  [63+3+1:0]                 commit_pcbuff    [7:0] ;
    reg  [`ysyx22040228_REGADDRBUS] commit_addrbuff  [7:0] ;
    reg  [`ysyx22040228_DATABUS]    commit_databuff  [7:0] ;
    reg                             commit_enabuff   [7:0] ;

    always @(*) begin
        comt_addr0 = {5{commit_pcbuff[0][67]}}  & commit_addrbuff[0] ;
        comt_data0 = {64{commit_pcbuff[0][67]}} & commit_databuff[0] ;
        comt_ena0  = commit_pcbuff[0][67]       & commit_enabuff [0] ;
        comt_addr1 = {5{commit_pcbuff[1][67]}}  & commit_addrbuff[1] ;
        comt_data1 = {64{commit_pcbuff[1][67]}} & commit_databuff[1] ;
        comt_ena1  = commit_pcbuff[1][67]       & commit_enabuff [1] ;
        comt_addr2 = {5{commit_pcbuff[2][67]}}  & commit_addrbuff[2] ;
        comt_data2 = {64{commit_pcbuff[2][67]}} & commit_databuff[2] ;
        comt_ena2  = commit_pcbuff[2][67]       & commit_enabuff [2] ;
        comt_addr3 = {5{commit_pcbuff[3][67]}}  & commit_addrbuff[3] ;
        comt_data3 = {64{commit_pcbuff[3][67]}} & commit_databuff[3] ;
        comt_ena3  = commit_pcbuff[3][67]       & commit_enabuff [3] ;
        comt_addr4 = {5{commit_pcbuff[4][67]}}  & commit_addrbuff[4] ;
        comt_data4 = {64{commit_pcbuff[4][67]}} & commit_databuff[4] ;
        comt_ena4  = commit_pcbuff[4][67]       & commit_enabuff [4] ;
        comt_addr5 = {5{commit_pcbuff[5][67]}}  & commit_addrbuff[5] ;
        comt_data5 = {64{commit_pcbuff[5][67]}} & commit_databuff[5] ;
        comt_ena5  = commit_pcbuff[5][67]       & commit_enabuff [5] ;
        comt_addr6 = {5{commit_pcbuff[6][67]}}  & commit_addrbuff[6] ;
        comt_data6 = {64{commit_pcbuff[6][67]}} & commit_databuff[6] ;
        comt_ena6  = commit_pcbuff[6][67]       & commit_enabuff [6] ;
        comt_addr7 = {5{commit_pcbuff[7][67]}}  & commit_addrbuff[7] ;
        comt_data7 = {64{commit_pcbuff[7][67]}} & commit_databuff[7] ;
        comt_ena7  = commit_pcbuff[7][67]       & commit_enabuff [7] ;
    end

    wire   decode1_ena ;
    assign decode1_ena = ( | decode1_counter) && (~decode1_clean) ;
    wire   decode2_ena ;
    assign decode2_ena = ( | decode2_counter) && (~decode2_clean) ;


    wire   able_buff1_pc1 ;
    assign able_buff1_pc1 = ((commit_pc1 != `ysyx22040228_ZEROWORD) && (commit_pc1 == commit_pcbuff[0][63:0])) ;
    wire   able_buff1_pc2 ;
    assign able_buff1_pc2 = ((commit_pc2 != `ysyx22040228_ZEROWORD) && (commit_pc2 == commit_pcbuff[0][63:0])) ;
    wire   able_buff1_pc3 ;
    assign able_buff1_pc3 = ((commit_pc3 != `ysyx22040228_ZEROWORD) && (commit_pc3 == commit_pcbuff[0][63:0])) ;  

    wire   able_buff2_pc1 ;
    assign able_buff2_pc1 = ((commit_pc1 != `ysyx22040228_ZEROWORD) && (commit_pc1 == commit_pcbuff[1][63:0])) ;
    wire   able_buff2_pc2 ;
    assign able_buff2_pc2 = ((commit_pc2 != `ysyx22040228_ZEROWORD) && (commit_pc2 == commit_pcbuff[1][63:0])) ;
    wire   able_buff2_pc3 ;
    assign able_buff2_pc3 = ((commit_pc3 != `ysyx22040228_ZEROWORD) && (commit_pc3 == commit_pcbuff[1][63:0])) ;

    wire   able_buff3_pc1 ;
    assign able_buff3_pc1 = ((commit_pc1 != `ysyx22040228_ZEROWORD) && (commit_pc1 == commit_pcbuff[2][63:0])) ;
    wire   able_buff3_pc2 ;
    assign able_buff3_pc2 = ((commit_pc2 != `ysyx22040228_ZEROWORD) && (commit_pc2 == commit_pcbuff[2][63:0])) ;
    wire   able_buff3_pc3 ;
    assign able_buff3_pc3 = ((commit_pc3 != `ysyx22040228_ZEROWORD) && (commit_pc3 == commit_pcbuff[2][63:0])) ;

    wire   able_buff4_pc1 ;
    assign able_buff4_pc1 = ((commit_pc1 != `ysyx22040228_ZEROWORD) && (commit_pc1 == commit_pcbuff[3][63:0])) ;
    wire   able_buff4_pc2 ;
    assign able_buff4_pc2 = ((commit_pc2 != `ysyx22040228_ZEROWORD) && (commit_pc2 == commit_pcbuff[3][63:0])) ;
    wire   able_buff4_pc3 ;
    assign able_buff4_pc3 = ((commit_pc3 != `ysyx22040228_ZEROWORD) && (commit_pc3 == commit_pcbuff[3][63:0])) ;

    wire   able_buff5_pc1 ;
    assign able_buff5_pc1 = ((commit_pc1 != `ysyx22040228_ZEROWORD) && (commit_pc1 == commit_pcbuff[4][63:0])) ;
    wire   able_buff5_pc2 ;
    assign able_buff5_pc2 = ((commit_pc2 != `ysyx22040228_ZEROWORD) && (commit_pc2 == commit_pcbuff[4][63:0])) ;
    wire   able_buff5_pc3 ;
    assign able_buff5_pc3 = ((commit_pc3 != `ysyx22040228_ZEROWORD) && (commit_pc3 == commit_pcbuff[4][63:0])) ;

    wire   able_buff6_pc1 ;
    assign able_buff6_pc1 = ((commit_pc1 != `ysyx22040228_ZEROWORD) && (commit_pc1 == commit_pcbuff[5][63:0])) ;
    wire   able_buff6_pc2 ;
    assign able_buff6_pc2 = ((commit_pc2 != `ysyx22040228_ZEROWORD) && (commit_pc2 == commit_pcbuff[5][63:0])) ;
    wire   able_buff6_pc3 ;
    assign able_buff6_pc3 = ((commit_pc3 != `ysyx22040228_ZEROWORD) && (commit_pc3 == commit_pcbuff[5][63:0])) ;

    wire   able_buff7_pc1 ;
    assign able_buff7_pc1 = ((commit_pc1 != `ysyx22040228_ZEROWORD) && (commit_pc1 == commit_pcbuff[6][63:0])) ;
    wire   able_buff7_pc2 ;
    assign able_buff7_pc2 = ((commit_pc2 != `ysyx22040228_ZEROWORD) && (commit_pc2 == commit_pcbuff[6][63:0])) ;
    wire   able_buff7_pc3 ;
    assign able_buff7_pc3 = ((commit_pc3 != `ysyx22040228_ZEROWORD) && (commit_pc3 == commit_pcbuff[6][63:0])) ;

    wire   able_buff8_pc1 ;
    assign able_buff8_pc1 = ((commit_pc1 != `ysyx22040228_ZEROWORD) && (commit_pc1 == commit_pcbuff[7][63:0])) ;
    wire   able_buff8_pc2 ;
    assign able_buff8_pc2 = ((commit_pc2 != `ysyx22040228_ZEROWORD) && (commit_pc2 == commit_pcbuff[7][63:0])) ;
    wire   able_buff8_pc3 ;
    assign able_buff8_pc3 = ((commit_pc3 != `ysyx22040228_ZEROWORD) && (commit_pc3 == commit_pcbuff[7][63:0])) ;  

    wire   able_buff1  ;
    assign able_buff1  = able_buff1_pc1 || able_buff1_pc2 || able_buff1_pc3 ;
    wire   able_buff2  ;
    assign able_buff2  = able_buff2_pc1 || able_buff2_pc2 || able_buff2_pc3 ;
    wire   able_buff3  ;
    assign able_buff3  = able_buff3_pc1 || able_buff3_pc2 || able_buff3_pc3 ;
    wire   able_buff4  ;
    assign able_buff4  = able_buff4_pc1 || able_buff4_pc2 || able_buff4_pc3 ;
    wire   able_buff5  ;
    assign able_buff5  = able_buff5_pc1 || able_buff5_pc2 || able_buff5_pc3 ;
    wire   able_buff6  ;
    assign able_buff6  = able_buff6_pc1 || able_buff6_pc2 || able_buff6_pc3 ;
    wire   able_buff7  ;
    assign able_buff7  = able_buff7_pc1 || able_buff7_pc2 || able_buff7_pc3 ;
    wire   able_buff8  ;
    assign able_buff8  = able_buff8_pc1 || able_buff8_pc2 || able_buff8_pc3 ; 

    wire   [`ysyx22040228_PCBUS]  depcbf1 ;
    assign depcbf1 = (decode1_ena | decode1_caninis) ?  decode1_pc : `ysyx22040228_ZEROWORD ;

    wire   [`ysyx22040228_PCBUS]  depcbf2 ;
    assign depcbf2 = (decode2_ena | decode2_caninis) ?  decode2_pc : `ysyx22040228_ZEROWORD ;

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            commit_pcbuff[0]  <= {1'b0, 3'd0, 64'b0} ;
            commit_pcbuff[1]  <= {1'b0, 3'd1, 64'b0} ;
            commit_pcbuff[2]  <= {1'b0, 3'd2, 64'b0} ;
            commit_pcbuff[3]  <= {1'b0, 3'd3, 64'b0} ;
            commit_pcbuff[4]  <= {1'b0, 3'd4, 64'b0} ;
            commit_pcbuff[5]  <= {1'b0, 3'd5, 64'b0} ;
            commit_pcbuff[6]  <= {1'b0, 3'd6, 64'b0} ;
            commit_pcbuff[7]  <= {1'b0, 3'd7, 64'b0} ;
        end 
        else if((depcbf1 > depcbf2) && (depcbf1 == `ysyx22040228_ZEROWORD))  begin
            commit_pcbuff[0][63:0]  <= depcbf1                        ;
            commit_pcbuff[0][67]    <= 1'b0                           ;
            commit_enabuff[0]       <= 1'b0                           ;
            commit_addrbuff[0]      <= 5'd0                           ;
            commit_databuff [0]     <= 64'h0                          ;
            commit_pcbuff[1][63:0]  <= commit_pcbuff[0][63:0] & {64{~clean_submcont[0]}} ;
            commit_pcbuff[1][67]    <= (commit_pcbuff[0][67] || able_buff1) & ~clean_submcont[0] ;
            commit_enabuff[1]       <= (able_buff1_pc1 & commit_ena1) | (able_buff1_pc2 & commit_ena2) | (able_buff1_pc3 & commit_ena3) | commit_enabuff[0] ;
            commit_addrbuff[1]      <= ({5{able_buff1_pc1}} & commit_addr1) | ({5{able_buff1_pc2}} & commit_addr2) | ({5{able_buff1_pc3}} & commit_addr3) | commit_addrbuff[0];
            commit_databuff [1]     <= ({64{able_buff1_pc1}} & commit_data1) | ({64{able_buff1_pc2}} & commit_data2) | ({64{able_buff1_pc3}} & commit_data3) | commit_databuff[0];
            commit_pcbuff[2][63:0]  <= commit_pcbuff[1][63:0] & {64{~clean_submcont[1]}} ;
            commit_pcbuff[2][67]    <= (commit_pcbuff[1][67] || able_buff2) & ~clean_submcont[1] ;
            commit_enabuff[2]       <= (able_buff2_pc1 & commit_ena1) | (able_buff2_pc2 & commit_ena2) | (able_buff2_pc3 & commit_ena3) | commit_enabuff[1] ;
            commit_addrbuff[2]      <= ({5{able_buff2_pc1}} & commit_addr1) | ({5{able_buff2_pc2}} & commit_addr2) | ({5{able_buff2_pc3}} & commit_addr3) | commit_addrbuff[1];
            commit_databuff [2]     <= ({64{able_buff2_pc1}} & commit_data1) | ({64{able_buff2_pc2}} & commit_data2) | ({64{able_buff2_pc3}} & commit_data3) | commit_databuff[1];
            commit_pcbuff[3][63:0]  <= commit_pcbuff[2][63:0] & {64{~clean_submcont[2]}} ;
            commit_pcbuff[3][67]    <= (commit_pcbuff[2][67] || able_buff3) & ~clean_submcont[2] ;
            commit_enabuff[3]       <= (able_buff3_pc1 & commit_ena1) | (able_buff3_pc2 & commit_ena2) | (able_buff3_pc3 & commit_ena3) | commit_enabuff[2] ;
            commit_addrbuff[3]      <= ({5{able_buff3_pc1}} & commit_addr1) | ({5{able_buff3_pc2}} & commit_addr2) | ({5{able_buff3_pc3}} & commit_addr3) | commit_addrbuff[2];
            commit_databuff [3]     <= ({64{able_buff3_pc1}} & commit_data1) | ({64{able_buff3_pc2}} & commit_data2) | ({64{able_buff3_pc3}} & commit_data3) | commit_databuff[2];
            commit_pcbuff[4][63:0]  <= commit_pcbuff[3][63:0] & {64{~clean_submcont[3]}} ;
            commit_pcbuff[4][67]    <= (commit_pcbuff[3][67] || able_buff4) & ~clean_submcont[3] ;
            commit_enabuff[4]       <= (able_buff4_pc1 & commit_ena1) | (able_buff4_pc2 & commit_ena2) | (able_buff4_pc3 & commit_ena3) | commit_enabuff[3] ;
            commit_addrbuff[4]      <= ({5{able_buff4_pc1}} & commit_addr1) | ({5{able_buff4_pc2}} & commit_addr2) | ({5{able_buff4_pc3}} & commit_addr3) | commit_addrbuff[3];
            commit_databuff [4]     <= ({64{able_buff4_pc1}} & commit_data1) | ({64{able_buff4_pc2}} & commit_data2) | ({64{able_buff4_pc3}} & commit_data3) | commit_databuff[3];
            commit_pcbuff[5][63:0]  <= commit_pcbuff[4][63:0] & {64{~clean_submcont[4]}} ;
            commit_pcbuff[5][67]    <= (commit_pcbuff[4][67] || able_buff5) & ~clean_submcont[4] ;
            commit_enabuff[5]       <= (able_buff5_pc1 & commit_ena1) | (able_buff5_pc2 & commit_ena2) | (able_buff5_pc3 & commit_ena3) | commit_enabuff[4] ;
            commit_addrbuff[5]      <= ({5{able_buff5_pc1}} & commit_addr1) | ({5{able_buff5_pc2}} & commit_addr2) | ({5{able_buff5_pc3}} & commit_addr3) | commit_addrbuff[4];
            commit_databuff [5]     <= ({64{able_buff5_pc1}} & commit_data1) | ({64{able_buff5_pc2}} & commit_data2) | ({64{able_buff5_pc3}} & commit_data3) | commit_databuff[4];
            commit_pcbuff[6][63:0]  <= commit_pcbuff[5][63:0] & {64{~clean_submcont[5]}} ;
            commit_pcbuff[6][67]    <= (commit_pcbuff[5][67] || able_buff6) & ~clean_submcont[5] ;
            commit_enabuff[6]       <= (able_buff6_pc1 & commit_ena1) | (able_buff6_pc2 & commit_ena2) | (able_buff6_pc3 & commit_ena3) | commit_enabuff[5] ;
            commit_addrbuff[6]      <= ({5{able_buff6_pc1}} & commit_addr1) | ({5{able_buff6_pc2}} & commit_addr2) | ({5{able_buff6_pc3}} & commit_addr3) | commit_addrbuff[5];
            commit_databuff [6]     <= ({64{able_buff6_pc1}} & commit_data1) | ({64{able_buff6_pc2}} & commit_data2) | ({64{able_buff6_pc3}} & commit_data3) | commit_databuff[5];
            commit_pcbuff[7][63:0]  <= commit_pcbuff[6][63:0] & {64{~clean_submcont[6]}} ;
            commit_pcbuff[7][67]    <= (commit_pcbuff[6][67] || able_buff7) & ~clean_submcont[6] ;
            commit_enabuff[7]       <= (able_buff7_pc1 & commit_ena1) | (able_buff7_pc2 & commit_ena2) | (able_buff7_pc3 & commit_ena3) | commit_enabuff[6] ;
            commit_addrbuff[7]      <= ({5{able_buff7_pc1}} & commit_addr1) | ({5{able_buff7_pc2}} & commit_addr2) | ({5{able_buff7_pc3}} & commit_addr3) | commit_addrbuff[6];
            commit_databuff [7]     <= ({64{able_buff7_pc1}} & commit_data1) | ({64{able_buff7_pc2}} & commit_data2) | ({64{able_buff7_pc3}} & commit_data3) | commit_databuff[6];
        end 
        else if((depcbf1 < depcbf2) && (depcbf2 == `ysyx22040228_ZEROWORD)) begin
            commit_pcbuff[0][63:0]  <= depcbf2                        ;
            commit_pcbuff[0][67]    <= 1'b0                           ;
            commit_enabuff[0]       <= 1'b0                           ;
            commit_addrbuff[0]      <= 5'd0                           ;
            commit_databuff [0]     <= 64'h0                          ;
            commit_pcbuff[1][63:0]  <= commit_pcbuff[0][63:0] & {64{~clean_submcont[0]}} ;
            commit_pcbuff[1][67]    <= (commit_pcbuff[0][67] || able_buff1) & ~clean_submcont[0] ;
            commit_enabuff[1]       <= (able_buff1_pc1 & commit_ena1) | (able_buff1_pc2 & commit_ena2) | (able_buff1_pc3 & commit_ena3) | commit_enabuff[0] ;
            commit_addrbuff[1]      <= ({5{able_buff1_pc1}} & commit_addr1) | ({5{able_buff1_pc2}} & commit_addr2) | ({5{able_buff1_pc3}} & commit_addr3) | commit_addrbuff[0];
            commit_databuff [1]     <= ({64{able_buff1_pc1}} & commit_data1) | ({64{able_buff1_pc2}} & commit_data2) | ({64{able_buff1_pc3}} & commit_data3) | commit_databuff[0];
            commit_pcbuff[2][63:0]  <= commit_pcbuff[1][63:0] & {64{~clean_submcont[1]}} ;
            commit_pcbuff[2][67]    <= (commit_pcbuff[1][67] || able_buff2) & ~clean_submcont[1] ;
            commit_enabuff[2]       <= (able_buff2_pc1 & commit_ena1) | (able_buff2_pc2 & commit_ena2) | (able_buff2_pc3 & commit_ena3) | commit_enabuff[1] ;
            commit_addrbuff[2]      <= ({5{able_buff2_pc1}} & commit_addr1) | ({5{able_buff2_pc2}} & commit_addr2) | ({5{able_buff2_pc3}} & commit_addr3) | commit_addrbuff[1];
            commit_databuff [2]     <= ({64{able_buff2_pc1}} & commit_data1) | ({64{able_buff2_pc2}} & commit_data2) | ({64{able_buff2_pc3}} & commit_data3) | commit_databuff[1];
            commit_pcbuff[3][63:0]  <= commit_pcbuff[2][63:0] & {64{~clean_submcont[2]}} ;
            commit_pcbuff[3][67]    <= (commit_pcbuff[2][67] || able_buff3) & ~clean_submcont[2] ;
            commit_enabuff[3]       <= (able_buff3_pc1 & commit_ena1) | (able_buff3_pc2 & commit_ena2) | (able_buff3_pc3 & commit_ena3) | commit_enabuff[2] ;
            commit_addrbuff[3]      <= ({5{able_buff3_pc1}} & commit_addr1) | ({5{able_buff3_pc2}} & commit_addr2) | ({5{able_buff3_pc3}} & commit_addr3) | commit_addrbuff[2];
            commit_databuff [3]     <= ({64{able_buff3_pc1}} & commit_data1) | ({64{able_buff3_pc2}} & commit_data2) | ({64{able_buff3_pc3}} & commit_data3) | commit_databuff[2];
            commit_pcbuff[4][63:0]  <= commit_pcbuff[3][63:0] & {64{~clean_submcont[3]}} ;
            commit_pcbuff[4][67]    <= (commit_pcbuff[3][67] || able_buff4) & ~clean_submcont[3] ;
            commit_enabuff[4]       <= (able_buff4_pc1 & commit_ena1) | (able_buff4_pc2 & commit_ena2) | (able_buff4_pc3 & commit_ena3) | commit_enabuff[3] ;
            commit_addrbuff[4]      <= ({5{able_buff4_pc1}} & commit_addr1) | ({5{able_buff4_pc2}} & commit_addr2) | ({5{able_buff4_pc3}} & commit_addr3) | commit_addrbuff[3];
            commit_databuff [4]     <= ({64{able_buff4_pc1}} & commit_data1) | ({64{able_buff4_pc2}} & commit_data2) | ({64{able_buff4_pc3}} & commit_data3) | commit_databuff[3];
            commit_pcbuff[5][63:0]  <= commit_pcbuff[4][63:0] & {64{~clean_submcont[4]}} ;
            commit_pcbuff[5][67]    <= (commit_pcbuff[4][67] || able_buff5) & ~clean_submcont[4] ;
            commit_enabuff[5]       <= (able_buff5_pc1 & commit_ena1) | (able_buff5_pc2 & commit_ena2) | (able_buff5_pc3 & commit_ena3) | commit_enabuff[4] ;
            commit_addrbuff[5]      <= ({5{able_buff5_pc1}} & commit_addr1) | ({5{able_buff5_pc2}} & commit_addr2) | ({5{able_buff5_pc3}} & commit_addr3) | commit_addrbuff[4];
            commit_databuff [5]     <= ({64{able_buff5_pc1}} & commit_data1) | ({64{able_buff5_pc2}} & commit_data2) | ({64{able_buff5_pc3}} & commit_data3) | commit_databuff[4];
            commit_pcbuff[6][63:0]  <= commit_pcbuff[5][63:0] & {64{~clean_submcont[5]}} ;
            commit_pcbuff[6][67]    <= (commit_pcbuff[5][67] || able_buff6) & ~clean_submcont[5] ;
            commit_enabuff[6]       <= (able_buff6_pc1 & commit_ena1) | (able_buff6_pc2 & commit_ena2) | (able_buff6_pc3 & commit_ena3) | commit_enabuff[5] ;
            commit_addrbuff[6]      <= ({5{able_buff6_pc1}} & commit_addr1) | ({5{able_buff6_pc2}} & commit_addr2) | ({5{able_buff6_pc3}} & commit_addr3) | commit_addrbuff[5];
            commit_databuff [6]     <= ({64{able_buff6_pc1}} & commit_data1) | ({64{able_buff6_pc2}} & commit_data2) | ({64{able_buff6_pc3}} & commit_data3) | commit_databuff[5];
            commit_pcbuff[7][63:0]  <= commit_pcbuff[6][63:0] & {64{~clean_submcont[6]}} ;
            commit_pcbuff[7][67]    <= (commit_pcbuff[6][67] || able_buff7) & ~clean_submcont[6] ;
            commit_enabuff[7]       <= (able_buff7_pc1 & commit_ena1) | (able_buff7_pc2 & commit_ena2) | (able_buff7_pc3 & commit_ena3) | commit_enabuff[6] ;
            commit_addrbuff[7]      <= ({5{able_buff7_pc1}} & commit_addr1) | ({5{able_buff7_pc2}} & commit_addr2) | ({5{able_buff7_pc3}} & commit_addr3) | commit_addrbuff[6];
            commit_databuff [7]     <= ({64{able_buff7_pc1}} & commit_data1) | ({64{able_buff7_pc2}} & commit_data2) | ({64{able_buff7_pc3}} & commit_data3) | commit_databuff[6];
        end  
        else if(depcbf1 > depcbf2)  begin
            commit_pcbuff[0][63:0]  <= depcbf1                        ;
            commit_pcbuff[0][67]    <= 1'b0                           ;
            commit_enabuff[0]       <= 1'b0                           ;
            commit_addrbuff[0]      <= 5'd0                           ;
            commit_databuff [0]     <= 64'h0                          ;
            commit_pcbuff[1][63:0]  <= depcbf2                        ;
            commit_pcbuff[1][67]    <= 1'b0                           ;
            commit_enabuff[1]       <= 1'b0                           ;
            commit_addrbuff[1]      <= 5'd0                           ;
            commit_databuff [1]     <= 64'h0                          ;
            commit_pcbuff[2][63:0]  <= commit_pcbuff[0][63:0] & {64{~clean_submcont[0]}} ;
            commit_pcbuff[2][67]    <= (commit_pcbuff[0][67] || able_buff1) & ~clean_submcont[0] ;
            commit_enabuff[2]       <= (able_buff1_pc1 & commit_ena1) | (able_buff1_pc2 & commit_ena2) | (able_buff1_pc3 & commit_ena3) | commit_enabuff[0] ;
            commit_addrbuff[2]      <= ({5{able_buff1_pc1}} & commit_addr1) | ({5{able_buff1_pc2}} & commit_addr2) | ({5{able_buff1_pc3}} & commit_addr3) | commit_addrbuff[0];
            commit_databuff [2]     <= ({64{able_buff1_pc1}} & commit_data1) | ({64{able_buff1_pc2}} & commit_data2) | ({64{able_buff1_pc3}} & commit_data3) | commit_databuff[0];
            commit_pcbuff[3][63:0]  <= commit_pcbuff[1][63:0] & {64{~clean_submcont[1]}} ;
            commit_pcbuff[3][67]    <= (commit_pcbuff[1][67] || able_buff2) & ~clean_submcont[1] ;
            commit_enabuff[3]       <= (able_buff2_pc1 & commit_ena1) | (able_buff2_pc2 & commit_ena2) | (able_buff2_pc3 & commit_ena3) | commit_enabuff[1] ;
            commit_addrbuff[3]      <= ({5{able_buff2_pc1}} & commit_addr1) | ({5{able_buff2_pc2}} & commit_addr2) | ({5{able_buff2_pc3}} & commit_addr3) | commit_addrbuff[1];
            commit_databuff [3]     <= ({64{able_buff2_pc1}} & commit_data1) | ({64{able_buff2_pc2}} & commit_data2) | ({64{able_buff2_pc3}} & commit_data3) | commit_databuff[1];
            commit_pcbuff[4][63:0]  <= commit_pcbuff[2][63:0] & {64{~clean_submcont[2]}} ;
            commit_pcbuff[4][67]    <= (commit_pcbuff[2][67] || able_buff3) & ~clean_submcont[2] ;
            commit_enabuff[4]       <= (able_buff3_pc1 & commit_ena1) | (able_buff3_pc2 & commit_ena2) | (able_buff3_pc3 & commit_ena3) | commit_enabuff[2] ;
            commit_addrbuff[4]      <= ({5{able_buff3_pc1}} & commit_addr1) | ({5{able_buff3_pc2}} & commit_addr2) | ({5{able_buff3_pc3}} & commit_addr3) | commit_addrbuff[2];
            commit_databuff [4]     <= ({64{able_buff3_pc1}} & commit_data1) | ({64{able_buff3_pc2}} & commit_data2) | ({64{able_buff3_pc3}} & commit_data3) | commit_databuff[2];
            commit_pcbuff[5][63:0]  <= commit_pcbuff[3][63:0] & {64{~clean_submcont[3]}} ;
            commit_pcbuff[5][67]    <= (commit_pcbuff[3][67] || able_buff4) & ~clean_submcont[3] ;
            commit_enabuff[5]       <= (able_buff4_pc1 & commit_ena1) | (able_buff4_pc2 & commit_ena2) | (able_buff4_pc3 & commit_ena3) | commit_enabuff[3] ;
            commit_addrbuff[5]      <= ({5{able_buff4_pc1}} & commit_addr1) | ({5{able_buff4_pc2}} & commit_addr2) | ({5{able_buff4_pc3}} & commit_addr3) | commit_addrbuff[3];
            commit_databuff [5]     <= ({64{able_buff4_pc1}} & commit_data1) | ({64{able_buff4_pc2}} & commit_data2) | ({64{able_buff4_pc3}} & commit_data3) | commit_databuff[3];
            commit_pcbuff[6][63:0]  <= commit_pcbuff[4][63:0] & {64{~clean_submcont[4]}} ;
            commit_pcbuff[6][67]    <= (commit_pcbuff[4][67] || able_buff5) & ~clean_submcont[4] ;
            commit_enabuff[6]       <= (able_buff5_pc1 & commit_ena1) | (able_buff5_pc2 & commit_ena2) | (able_buff5_pc3 & commit_ena3) | commit_enabuff[4] ;
            commit_addrbuff[6]      <= ({5{able_buff5_pc1}} & commit_addr1) | ({5{able_buff5_pc2}} & commit_addr2) | ({5{able_buff5_pc3}} & commit_addr3) | commit_addrbuff[4];
            commit_databuff [6]     <= ({64{able_buff5_pc1}} & commit_data1) | ({64{able_buff5_pc2}} & commit_data2) | ({64{able_buff5_pc3}} & commit_data3) | commit_databuff[4];
            commit_pcbuff[7][63:0]  <= commit_pcbuff[5][63:0] & {64{~clean_submcont[5]}} ;
            commit_pcbuff[7][67]    <= (commit_pcbuff[5][67] || able_buff6) & ~clean_submcont[5] ;
            commit_enabuff[7]       <= (able_buff6_pc1 & commit_ena1) | (able_buff6_pc2 & commit_ena2) | (able_buff6_pc3 & commit_ena3) | commit_enabuff[5] ;
            commit_addrbuff[7]      <= ({5{able_buff6_pc1}} & commit_addr1) | ({5{able_buff6_pc2}} & commit_addr2) | ({5{able_buff6_pc3}} & commit_addr3) | commit_addrbuff[5];
            commit_databuff [7]     <= ({64{able_buff6_pc1}} & commit_data1) | ({64{able_buff6_pc2}} & commit_data2) | ({64{able_buff6_pc3}} & commit_data3) | commit_databuff[5];
        end 
        else if(depcbf1 < depcbf2) begin
            commit_pcbuff[0][63:0]  <= depcbf2                        ;
            commit_pcbuff[0][67]    <= 1'b0                           ;
            commit_enabuff[0]       <= 1'b0                           ;
            commit_addrbuff[0]      <= 5'd0                           ;
            commit_databuff [0]     <= 64'h0                          ;
            commit_pcbuff[1][63:0]  <= depcbf1                        ;
            commit_pcbuff[1][67]    <= 1'b0                           ;
            commit_enabuff[1]       <= 1'b0                           ;
            commit_addrbuff[1]      <= 5'd0                           ;
            commit_databuff [1]     <= 64'h0                          ;
            commit_pcbuff[2][63:0]  <= commit_pcbuff[0][63:0] & {64{~clean_submcont[0]}} ;
            commit_pcbuff[2][67]    <= (commit_pcbuff[0][67] || able_buff1) & ~clean_submcont[0] ;
            commit_enabuff[2]       <= (able_buff1_pc1 & commit_ena1) | (able_buff1_pc2 & commit_ena2) | (able_buff1_pc3 & commit_ena3) | commit_enabuff[0] ;
            commit_addrbuff[2]      <= ({5{able_buff1_pc1}} & commit_addr1) | ({5{able_buff1_pc2}} & commit_addr2) | ({5{able_buff1_pc3}} & commit_addr3) | commit_addrbuff[0];
            commit_databuff [2]     <= ({64{able_buff1_pc1}} & commit_data1) | ({64{able_buff1_pc2}} & commit_data2) | ({64{able_buff1_pc3}} & commit_data3) | commit_databuff[0];
            commit_pcbuff[3][63:0]  <= commit_pcbuff[1][63:0] & {64{~clean_submcont[1]}} ;
            commit_pcbuff[3][67]    <= (commit_pcbuff[1][67] || able_buff2) & ~clean_submcont[1] ;
            commit_enabuff[3]       <= (able_buff2_pc1 & commit_ena1) | (able_buff2_pc2 & commit_ena2) | (able_buff2_pc3 & commit_ena3) | commit_enabuff[1] ;
            commit_addrbuff[3]      <= ({5{able_buff2_pc1}} & commit_addr1) | ({5{able_buff2_pc2}} & commit_addr2) | ({5{able_buff2_pc3}} & commit_addr3) | commit_addrbuff[1];
            commit_databuff [3]     <= ({64{able_buff2_pc1}} & commit_data1) | ({64{able_buff2_pc2}} & commit_data2) | ({64{able_buff2_pc3}} & commit_data3) | commit_databuff[1];
            commit_pcbuff[4][63:0]  <= commit_pcbuff[2][63:0] & {64{~clean_submcont[2]}} ;
            commit_pcbuff[4][67]    <= (commit_pcbuff[2][67] || able_buff3) & ~clean_submcont[2] ;
            commit_enabuff[4]       <= (able_buff3_pc1 & commit_ena1) | (able_buff3_pc2 & commit_ena2) | (able_buff3_pc3 & commit_ena3) | commit_enabuff[2] ;
            commit_addrbuff[4]      <= ({5{able_buff3_pc1}} & commit_addr1) | ({5{able_buff3_pc2}} & commit_addr2) | ({5{able_buff3_pc3}} & commit_addr3) | commit_addrbuff[2];
            commit_databuff [4]     <= ({64{able_buff3_pc1}} & commit_data1) | ({64{able_buff3_pc2}} & commit_data2) | ({64{able_buff3_pc3}} & commit_data3) | commit_databuff[2];
            commit_pcbuff[5][63:0]  <= commit_pcbuff[3][63:0] & {64{~clean_submcont[3]}} ;
            commit_pcbuff[5][67]    <= (commit_pcbuff[3][67] || able_buff4) & ~clean_submcont[3] ;
            commit_enabuff[5]       <= (able_buff4_pc1 & commit_ena1) | (able_buff4_pc2 & commit_ena2) | (able_buff4_pc3 & commit_ena3) | commit_enabuff[3] ;
            commit_addrbuff[5]      <= ({5{able_buff4_pc1}} & commit_addr1) | ({5{able_buff4_pc2}} & commit_addr2) | ({5{able_buff4_pc3}} & commit_addr3) | commit_addrbuff[3];
            commit_databuff [5]     <= ({64{able_buff4_pc1}} & commit_data1) | ({64{able_buff4_pc2}} & commit_data2) | ({64{able_buff4_pc3}} & commit_data3) | commit_databuff[3];
            commit_pcbuff[6][63:0]  <= commit_pcbuff[4][63:0] & {64{~clean_submcont[4]}} ;
            commit_pcbuff[6][67]    <= (commit_pcbuff[4][67] || able_buff5) & ~clean_submcont[4] ;
            commit_enabuff[6]       <= (able_buff5_pc1 & commit_ena1) | (able_buff5_pc2 & commit_ena2) | (able_buff5_pc3 & commit_ena3) | commit_enabuff[4] ;
            commit_addrbuff[6]      <= ({5{able_buff5_pc1}} & commit_addr1) | ({5{able_buff5_pc2}} & commit_addr2) | ({5{able_buff5_pc3}} & commit_addr3) | commit_addrbuff[4];
            commit_databuff [6]     <= ({64{able_buff5_pc1}} & commit_data1) | ({64{able_buff5_pc2}} & commit_data2) | ({64{able_buff5_pc3}} & commit_data3) | commit_databuff[4];
            commit_pcbuff[7][63:0]  <= commit_pcbuff[5][63:0] & {64{~clean_submcont[5]}} ;
            commit_pcbuff[7][67]    <= (commit_pcbuff[5][67] || able_buff6) & ~clean_submcont[5] ;
            commit_enabuff[7]       <= (able_buff6_pc1 & commit_ena1) | (able_buff6_pc2 & commit_ena2) | (able_buff6_pc3 & commit_ena3) | commit_enabuff[5] ;
            commit_addrbuff[7]      <= ({5{able_buff6_pc1}} & commit_addr1) | ({5{able_buff6_pc2}} & commit_addr2) | ({5{able_buff6_pc3}} & commit_addr3) | commit_addrbuff[5];
            commit_databuff [7]     <= ({64{able_buff6_pc1}} & commit_data1) | ({64{able_buff6_pc2}} & commit_data2) | ({64{able_buff6_pc3}} & commit_data3) | commit_databuff[5];
        end 
        else begin
            commit_pcbuff[0][63:0]  <= commit_pcbuff[0][63:0] & {64{~clean_submcont[0]}} ;
            commit_pcbuff[0][67]    <= (commit_pcbuff[0][67] || able_buff1) & ~clean_submcont[0]       ;
            commit_enabuff[0]       <= (able_buff1_pc1 & commit_ena1) | (able_buff1_pc2 & commit_ena2) | (able_buff1_pc3 & commit_ena3) | commit_enabuff[0] ;
            commit_addrbuff[0]      <= ({5{able_buff1_pc1}} & commit_addr1) | ({5{able_buff1_pc2}} & commit_addr2) | ({5{able_buff1_pc3}} & commit_addr3) | commit_addrbuff[0];
            commit_databuff [0]     <= ({64{able_buff1_pc1}} & commit_data1) | ({64{able_buff1_pc2}} & commit_data2) | ({64{able_buff1_pc3}} & commit_data3) | commit_databuff[0];
            commit_pcbuff[1][63:0]  <= commit_pcbuff[1][63:0] & {64{~clean_submcont[1]}} ;
            commit_pcbuff[1][67]    <= (commit_pcbuff[1][67] || able_buff2) & ~clean_submcont[1]       ;
            commit_enabuff[1]       <= (able_buff2_pc1 & commit_ena1) | (able_buff2_pc2 & commit_ena2) | (able_buff2_pc3 & commit_ena3) | commit_enabuff[1] ;
            commit_addrbuff[1]      <= ({5{able_buff2_pc1}} & commit_addr1) | ({5{able_buff2_pc2}} & commit_addr2) | ({5{able_buff2_pc3}} & commit_addr3) | commit_addrbuff[1];
            commit_databuff [1]     <= ({64{able_buff2_pc1}} & commit_data1) | ({64{able_buff2_pc2}} & commit_data2) | ({64{able_buff2_pc3}} & commit_data3) | commit_databuff[1];
            commit_pcbuff[2][63:0]  <= commit_pcbuff[2][63:0] & {64{~clean_submcont[2]}} ;
            commit_pcbuff[2][67]    <= (commit_pcbuff[2][67] || able_buff3) & ~clean_submcont[2]       ;
            commit_enabuff[2]       <= (able_buff3_pc1 & commit_ena1) | (able_buff3_pc2 & commit_ena2) | (able_buff3_pc3 & commit_ena3) | commit_enabuff[2] ;
            commit_addrbuff[2]      <= ({5{able_buff3_pc1}} & commit_addr1) | ({5{able_buff3_pc2}} & commit_addr2) | ({5{able_buff3_pc3}} & commit_addr3) | commit_addrbuff[2];
            commit_databuff [2]     <= ({64{able_buff3_pc1}} & commit_data1) | ({64{able_buff3_pc2}} & commit_data2) | ({64{able_buff3_pc3}} & commit_data3) | commit_databuff[2];
            commit_pcbuff[3][63:0]  <= commit_pcbuff[3][63:0] & {64{~clean_submcont[3]}} ;
            commit_pcbuff[3][67]    <= (commit_pcbuff[3][67] || able_buff4) & ~clean_submcont[3]       ;
            commit_enabuff[3]       <= (able_buff4_pc1 & commit_ena1) | (able_buff4_pc2 & commit_ena2) | (able_buff4_pc3 & commit_ena3) | commit_enabuff[3] ;
            commit_addrbuff[3]      <= ({5{able_buff4_pc1}} & commit_addr1) | ({5{able_buff4_pc2}} & commit_addr2) | ({5{able_buff4_pc3}} & commit_addr3) | commit_addrbuff[3];
            commit_databuff [3]     <= ({64{able_buff4_pc1}} & commit_data1) | ({64{able_buff4_pc2}} & commit_data2) | ({64{able_buff4_pc3}} & commit_data3) | commit_databuff[3];
            commit_pcbuff[4][63:0]  <= commit_pcbuff[4][63:0] & {64{~clean_submcont[4]}} ;
            commit_pcbuff[4][67]    <= (commit_pcbuff[4][67] || able_buff5) & ~clean_submcont[4]       ;
            commit_enabuff[4]       <= (able_buff5_pc1 & commit_ena1) | (able_buff5_pc2 & commit_ena2) | (able_buff5_pc3 & commit_ena3) | commit_enabuff[4] ;
            commit_addrbuff[4]      <= ({5{able_buff5_pc1}} & commit_addr1) | ({5{able_buff5_pc2}} & commit_addr2) | ({5{able_buff5_pc3}} & commit_addr3) | commit_addrbuff[4];
            commit_databuff [4]     <= ({64{able_buff5_pc1}} & commit_data1) | ({64{able_buff5_pc2}} & commit_data2) | ({64{able_buff5_pc3}} & commit_data3) | commit_databuff[4];
            commit_pcbuff[5][63:0]  <= commit_pcbuff[5][63:0] & {64{~clean_submcont[5]}} ;
            commit_pcbuff[5][67]    <= (commit_pcbuff[5][67] || able_buff6) & ~clean_submcont[5]       ;
            commit_enabuff[5]       <= (able_buff6_pc1 & commit_ena1) | (able_buff6_pc2 & commit_ena2) | (able_buff6_pc3 & commit_ena3) | commit_enabuff[5] ;
            commit_addrbuff[5]      <= ({5{able_buff6_pc1}} & commit_addr1) | ({5{able_buff6_pc2}} & commit_addr2) | ({5{able_buff6_pc3}} & commit_addr3) | commit_addrbuff[5];
            commit_databuff [5]     <= ({64{able_buff6_pc1}} & commit_data1) | ({64{able_buff6_pc2}} & commit_data2) | ({64{able_buff6_pc3}} & commit_data3) | commit_databuff[5];
            commit_pcbuff[6][63:0]  <= commit_pcbuff[6][63:0] & {64{~clean_submcont[6]}} ;
            commit_pcbuff[6][67]    <= (commit_pcbuff[6][67] || able_buff7) & ~clean_submcont[6]       ;
            commit_enabuff[6]       <= (able_buff7_pc1 & commit_ena1) | (able_buff7_pc2 & commit_ena2) | (able_buff7_pc3 & commit_ena3) | commit_enabuff[6] ;
            commit_addrbuff[6]      <= ({5{able_buff7_pc1}} & commit_addr1) | ({5{able_buff7_pc2}} & commit_addr2) | ({5{able_buff7_pc3}} & commit_addr3) | commit_addrbuff[6];
            commit_databuff [6]     <= ({64{able_buff7_pc1}} & commit_data1) | ({64{able_buff7_pc2}} & commit_data2) | ({64{able_buff7_pc3}} & commit_data3) | commit_databuff[6];
            commit_pcbuff[7][63:0]  <= commit_pcbuff[7][63:0] & {64{~clean_submcont[7]}} ;
            commit_pcbuff[7][67]    <= (commit_pcbuff[7][67] || able_buff8) & ~clean_submcont[7]       ;
            commit_enabuff[7]       <= (able_buff8_pc1 & commit_ena1) | (able_buff8_pc2 & commit_ena2) | (able_buff8_pc3 & commit_ena3) | commit_enabuff[7] ;
            commit_addrbuff[7]      <= ({5{able_buff8_pc1}} & commit_addr1) | ({5{able_buff8_pc2}} & commit_addr2) | ({5{able_buff8_pc3}} & commit_addr3) | commit_addrbuff[7];
            commit_databuff [7]     <= ({64{able_buff8_pc1}} & commit_data1) | ({64{able_buff8_pc2}} & commit_data2) | ({64{able_buff8_pc3}} & commit_data3) | commit_databuff[7];
        end        
    end

/* verilator lint_off UNUSED */
    reg [63+3:0] old_ready ;
    reg          diff_ena  ;

    // reg [4:0] chose_state  ;
    // always @(*) begin
    //     if(rst == `ysyx22040228_RSTENA) begin
    //         chose_state = 5'b00000   ;
    //     end 
    //     else begin 
    //         case (chose_state)
    //             5'b00000 : begin
    //                 chose_state = 5'b00001   ;
    //                 if((commit_pcbuff[7][63:0] != `ysyx22040228_ZEROWORD) && (commit_pcbuff[6][63:0] != `ysyx22040228_ZEROWORD) && (commit_pcbuff[7][63:0] < (commit_pcbuff[6][63:0])))
    //                     old_ready = commit_pcbuff[7][66:0]  ;
    //                 else if((commit_pcbuff[7][63:0] != `ysyx22040228_ZEROWORD) && (commit_pcbuff[6][63:0] != `ysyx22040228_ZEROWORD) && (commit_pcbuff[7][63:0] > (commit_pcbuff[6][63:0])))
    //                     old_ready = commit_pcbuff[6][66:0]  ;
    //                 else if((commit_pcbuff[7][63:0] == `ysyx22040228_ZEROWORD) && (commit_pcbuff[6][63:0] != `ysyx22040228_ZEROWORD))
    //                     old_ready = commit_pcbuff[6][66:0]  ;
    //                 else if((commit_pcbuff[7][63:0] != `ysyx22040228_ZEROWORD) && (commit_pcbuff[6][63:0] == `ysyx22040228_ZEROWORD))
    //                     old_ready = commit_pcbuff[7][66:0]  ;
    //                 else if((commit_pcbuff[7][63:0] == `ysyx22040228_ZEROWORD) && (commit_pcbuff[6][63:0] == `ysyx22040228_ZEROWORD))
    //                     old_ready = 67'h0                   ;
    //             end  
    //             5'b00001 : begin
    //                 chose_state = 5'b00010   ;
    //                 if((commit_pcbuff[7][63:0] != `ysyx22040228_ZEROWORD) && (commit_pcbuff[6][63:0] != `ysyx22040228_ZEROWORD) && (commit_pcbuff[7][63:0] < (commit_pcbuff[6][63:0])))
    //                     old_ready = commit_pcbuff[7][66:0]  ;
    //                 else if((commit_pcbuff[7][63:0] != `ysyx22040228_ZEROWORD) && (commit_pcbuff[6][63:0] != `ysyx22040228_ZEROWORD) && (commit_pcbuff[7][63:0] > (commit_pcbuff[6][63:0])))
    //                     old_ready = commit_pcbuff[6][66:0]  ;
    //                 else if((commit_pcbuff[7][63:0] == `ysyx22040228_ZEROWORD) && (commit_pcbuff[6][63:0] != `ysyx22040228_ZEROWORD))
    //                     old_ready = commit_pcbuff[6][66:0]  ;
    //                 else if((commit_pcbuff[7][63:0] != `ysyx22040228_ZEROWORD) && (commit_pcbuff[6][63:0] == `ysyx22040228_ZEROWORD))
    //                     old_ready = commit_pcbuff[7][66:0]  ;
    //                 else if((commit_pcbuff[7][63:0] == `ysyx22040228_ZEROWORD) && (commit_pcbuff[6][63:0] == `ysyx22040228_ZEROWORD))
    //                     old_ready = 67'h0                   ;
    //             end  
    //             default: chose_state = 5'b00000   ;
    //         endcase
    //     end 
    // end

    wire   chose_pc7 ;
    assign chose_pc7 = (commit_pcbuff[7][63:0] != `ysyx22040228_ZEROWORD) && ((((commit_pcbuff[7][63:0] < (commit_pcbuff[6][63:0])) && (commit_pcbuff[6][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[6][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[7][63:0] < (commit_pcbuff[5][63:0])) && (commit_pcbuff[5][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[5][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[7][63:0] < (commit_pcbuff[4][63:0])) && (commit_pcbuff[4][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[4][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[7][63:0] < (commit_pcbuff[3][63:0])) && (commit_pcbuff[3][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[3][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[7][63:0] < (commit_pcbuff[2][63:0])) && (commit_pcbuff[2][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[2][63:0] == `ysyx22040228_ZEROWORD)) && 
                        (((commit_pcbuff[7][63:0] < (commit_pcbuff[1][63:0])) && (commit_pcbuff[1][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[1][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[7][63:0] < (commit_pcbuff[0][63:0])) && (commit_pcbuff[0][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[0][63:0] == `ysyx22040228_ZEROWORD)) ) && (commit_pcbuff[7][67] == 1'b1) ;
    wire   chose_pc6 ;
    assign chose_pc6 = (commit_pcbuff[6][63:0] != `ysyx22040228_ZEROWORD) && ((((commit_pcbuff[6][63:0] < (commit_pcbuff[7][63:0])) && (commit_pcbuff[7][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[7][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[6][63:0] < (commit_pcbuff[5][63:0])) && (commit_pcbuff[5][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[5][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[6][63:0] < (commit_pcbuff[4][63:0])) && (commit_pcbuff[4][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[4][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[6][63:0] < (commit_pcbuff[3][63:0])) && (commit_pcbuff[3][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[3][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[6][63:0] < (commit_pcbuff[2][63:0])) && (commit_pcbuff[2][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[2][63:0] == `ysyx22040228_ZEROWORD)) && 
                        (((commit_pcbuff[6][63:0] < (commit_pcbuff[1][63:0])) && (commit_pcbuff[1][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[1][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[6][63:0] < (commit_pcbuff[0][63:0])) && (commit_pcbuff[0][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[0][63:0] == `ysyx22040228_ZEROWORD)) ) && (commit_pcbuff[6][67] == 1'b1) ;
    wire   chose_pc5 ;
    assign chose_pc5 = (commit_pcbuff[5][63:0] != `ysyx22040228_ZEROWORD) && ((((commit_pcbuff[5][63:0] < (commit_pcbuff[7][63:0])) && (commit_pcbuff[7][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[7][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[5][63:0] < (commit_pcbuff[6][63:0])) && (commit_pcbuff[6][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[5][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[5][63:0] < (commit_pcbuff[4][63:0])) && (commit_pcbuff[4][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[4][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[5][63:0] < (commit_pcbuff[3][63:0])) && (commit_pcbuff[3][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[3][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[5][63:0] < (commit_pcbuff[2][63:0])) && (commit_pcbuff[2][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[2][63:0] == `ysyx22040228_ZEROWORD)) && 
                        (((commit_pcbuff[5][63:0] < (commit_pcbuff[1][63:0])) && (commit_pcbuff[1][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[1][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[5][63:0] < (commit_pcbuff[0][63:0])) && (commit_pcbuff[0][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[0][63:0] == `ysyx22040228_ZEROWORD)) ) && (commit_pcbuff[5][67] == 1'b1) ;
    wire   chose_pc4 ;
    assign chose_pc4 = (commit_pcbuff[4][63:0] != `ysyx22040228_ZEROWORD) && ((((commit_pcbuff[4][63:0] < (commit_pcbuff[7][63:0])) && (commit_pcbuff[7][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[7][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[4][63:0] < (commit_pcbuff[6][63:0])) && (commit_pcbuff[6][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[6][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[4][63:0] < (commit_pcbuff[5][63:0])) && (commit_pcbuff[5][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[5][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[4][63:0] < (commit_pcbuff[3][63:0])) && (commit_pcbuff[3][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[3][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[4][63:0] < (commit_pcbuff[2][63:0])) && (commit_pcbuff[2][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[2][63:0] == `ysyx22040228_ZEROWORD)) && 
                        (((commit_pcbuff[4][63:0] < (commit_pcbuff[1][63:0])) && (commit_pcbuff[1][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[1][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[4][63:0] < (commit_pcbuff[0][63:0])) && (commit_pcbuff[0][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[0][63:0] == `ysyx22040228_ZEROWORD)) ) && (commit_pcbuff[4][67] == 1'b1) ;
    wire   chose_pc3 ;
    assign chose_pc3 = (commit_pcbuff[3][63:0] != `ysyx22040228_ZEROWORD) && ((((commit_pcbuff[3][63:0] < (commit_pcbuff[7][63:0])) && (commit_pcbuff[7][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[7][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[3][63:0] < (commit_pcbuff[6][63:0])) && (commit_pcbuff[6][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[6][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[3][63:0] < (commit_pcbuff[5][63:0])) && (commit_pcbuff[5][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[5][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[3][63:0] < (commit_pcbuff[4][63:0])) && (commit_pcbuff[4][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[4][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[3][63:0] < (commit_pcbuff[2][63:0])) && (commit_pcbuff[2][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[2][63:0] == `ysyx22040228_ZEROWORD)) && 
                        (((commit_pcbuff[3][63:0] < (commit_pcbuff[1][63:0])) && (commit_pcbuff[1][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[1][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[3][63:0] < (commit_pcbuff[0][63:0])) && (commit_pcbuff[0][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[0][63:0] == `ysyx22040228_ZEROWORD)) ) && (commit_pcbuff[3][67] == 1'b1) ;
    wire   chose_pc2 ;
    assign chose_pc2 = (commit_pcbuff[2][63:0] != `ysyx22040228_ZEROWORD) && ((((commit_pcbuff[2][63:0] < (commit_pcbuff[7][63:0])) && (commit_pcbuff[7][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[7][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[2][63:0] < (commit_pcbuff[6][63:0])) && (commit_pcbuff[6][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[6][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[2][63:0] < (commit_pcbuff[5][63:0])) && (commit_pcbuff[5][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[5][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[2][63:0] < (commit_pcbuff[4][63:0])) && (commit_pcbuff[4][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[4][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[2][63:0] < (commit_pcbuff[3][63:0])) && (commit_pcbuff[3][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[3][63:0] == `ysyx22040228_ZEROWORD)) && 
                        (((commit_pcbuff[2][63:0] < (commit_pcbuff[1][63:0])) && (commit_pcbuff[1][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[1][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[2][63:0] < (commit_pcbuff[0][63:0])) && (commit_pcbuff[0][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[0][63:0] == `ysyx22040228_ZEROWORD)) ) && (commit_pcbuff[2][67] == 1'b1) ;
    wire   chose_pc1 ;
    assign chose_pc1 = (commit_pcbuff[1][63:0] != `ysyx22040228_ZEROWORD) && ((((commit_pcbuff[1][63:0] < (commit_pcbuff[7][63:0])) && (commit_pcbuff[7][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[7][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[1][63:0] < (commit_pcbuff[6][63:0])) && (commit_pcbuff[6][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[6][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[1][63:0] < (commit_pcbuff[5][63:0])) && (commit_pcbuff[5][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[5][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[1][63:0] < (commit_pcbuff[4][63:0])) && (commit_pcbuff[4][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[4][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[1][63:0] < (commit_pcbuff[3][63:0])) && (commit_pcbuff[3][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[3][63:0] == `ysyx22040228_ZEROWORD)) && 
                        (((commit_pcbuff[1][63:0] < (commit_pcbuff[2][63:0])) && (commit_pcbuff[2][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[2][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[1][63:0] < (commit_pcbuff[0][63:0])) && (commit_pcbuff[0][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[0][63:0] == `ysyx22040228_ZEROWORD)) ) && (commit_pcbuff[1][67] == 1'b1) ;
    wire   chose_pc0 ;
    assign chose_pc0 = (commit_pcbuff[0][63:0] != `ysyx22040228_ZEROWORD) && ((((commit_pcbuff[0][63:0] < (commit_pcbuff[7][63:0])) && (commit_pcbuff[7][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[7][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[0][63:0] < (commit_pcbuff[6][63:0])) && (commit_pcbuff[6][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[6][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[0][63:0] < (commit_pcbuff[5][63:0])) && (commit_pcbuff[5][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[5][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[0][63:0] < (commit_pcbuff[4][63:0])) && (commit_pcbuff[4][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[4][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[0][63:0] < (commit_pcbuff[3][63:0])) && (commit_pcbuff[3][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[3][63:0] == `ysyx22040228_ZEROWORD)) && 
                        (((commit_pcbuff[0][63:0] < (commit_pcbuff[2][63:0])) && (commit_pcbuff[2][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[2][63:0] == `ysyx22040228_ZEROWORD)) &&
                        (((commit_pcbuff[0][63:0] < (commit_pcbuff[1][63:0])) && (commit_pcbuff[1][63:0] != `ysyx22040228_ZEROWORD)) || (commit_pcbuff[1][63:0] == `ysyx22040228_ZEROWORD)) ) && (commit_pcbuff[0][67] == 1'b1) ;

    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            old_ready = 67'h0            ;
            clean_submcont = 8'b00000000 ;
            diff_ena       = 1'b0        ;
        end 
        else if(chose_pc7)  begin
            old_ready = commit_pcbuff[7][66:0] ;
            clean_submcont = 8'b10000000 ;
            diff_ena  = 1'b1             ;
        end 
        else if(chose_pc6)  begin
            old_ready = commit_pcbuff[6][66:0] ;
            clean_submcont = 8'b01000000 ;
            diff_ena  = 1'b1             ;
        end
        else if(chose_pc5)  begin
            old_ready = commit_pcbuff[5][66:0] ;
            clean_submcont = 8'b00100000 ;
            diff_ena  = 1'b1             ;
        end
        else if(chose_pc4)  begin
            old_ready = commit_pcbuff[4][66:0] ;
            clean_submcont = 8'b00010000 ;
            diff_ena  = 1'b1             ;
        end
        else if(chose_pc3)  begin
            old_ready = commit_pcbuff[3][66:0] ;
            clean_submcont = 8'b00001000 ;
            diff_ena  = 1'b1             ;
        end
        else if(chose_pc2)  begin
            old_ready = commit_pcbuff[2][66:0] ;
            clean_submcont = 8'b00000100 ;
            diff_ena  = 1'b1             ;
        end
        else if(chose_pc1)  begin
            old_ready = commit_pcbuff[1][66:0] ;
            clean_submcont = 8'b00000010 ;
            diff_ena  = 1'b1             ;
        end
        else if(chose_pc0)  begin
            old_ready = commit_pcbuff[0][66:0] ;
            clean_submcont = 8'b00000001 ;
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
            subm_wbena      = commit_enabuff  [old_ready[63+3:64]] ;
            subm_wbaddr     = commit_addrbuff [old_ready[63+3:64]] ;
            subm_wbdata     = commit_databuff [old_ready[63+3:64]] ;
        end 
        else begin
            subm_wbena      = 1'b0                                 ;
            subm_wbaddr     = 5'd0                                 ;
            subm_wbdata     = 64'h0                                ;
        end 
    end

    reg  difftest_ena ;
    reg [`ysyx22040228_PCBUS] difftest_pc  ;
    // reg  difftest_ena_ ;
    // reg [`ysyx22040228_PCBUS] difftest_pc_  ;
    always @(posedge clk) begin
        difftest_pc   <= old_ready[63:0] ;
        difftest_ena  <= diff_ena        ;
        // difftest_pc_  <= difftest_pc     ;
        // difftest_ena_ <= difftest_ena    ;
    end
    
endmodule

  
