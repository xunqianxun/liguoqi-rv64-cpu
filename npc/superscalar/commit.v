/************************************************************
Author:LiGuoqi
Name:commit.v
Function:commit instration
************************************************************/
`include "defines.v"
module commit (
    input         wire                                          clk              ,
    input         wire                                          rst              ,
    input         wire                                          decode1_clean    ,
    input         wire                                          decode1_stop     ,
    input         wire   [`ysyx22040228_PCBUS]                  decode1_pc       ,
    input         wire                                          decode2_clean    ,
    input         wire                                          decode2_stop     ,
    input         wire   [`ysyx22040228_PCBUS]                  decode2_pc       ,

    input         wire   [`ysyx22040228_PCBUS]                  commit_pc1       ,
    input         wire   [`ysyx22040228_REGADDRBUS]             commit_addr1     ,
    input         wire   [`ysyx22040228_DATABUS]                commit_data1     ,

    input         wire   [`ysyx22040228_PCBUS]                  commit_pc2       ,
    input         wire   [`ysyx22040228_REGADDRBUS]             commit_addr2     ,
    input         wire   [`ysyx22040228_DATABUS]                commit_data2     ,

    input         wire   [`ysyx22040228_PCBUS]                  commit_pc3       ,
    input         wire   [`ysyx22040228_REGADDRBUS]             commit_addr3     ,
    input         wire   [`ysyx22040228_DATABUS]                commit_data3     ,

    output        reg                                           subm_wb1ena      ,
    output        reg    [`ysyx22040228_REGADDRBUS]             subm_wb1addr     ,
    output        reg    [`ysyx22040228_REGBUS]                 subm_wb1data     ,

    output        reg                                           subm_wb2ena      ,
    output        reg    [`ysyx22040228_REGADDRBUS]             subm_wb2addr     ,
    output        reg    [`ysyx22040228_REGBUS]                 subm_wb2data     
);

    // reg  [`ysyx22040228_PCBUS]      commit_pcbuff    [7:0] ;
    // reg  [`ysyx22040228_REGADDRBUS] commit_addrbuff  [7:0] ;
    // reg  [`ysyx22040228_DATABUS]    commit_databuff  [7:0] ;
    // reg                             commit_validbuff [7:0] ;
    reg  [132]                      commit_reg[0:7]        ;
    reg  [2:0]                      commit_counter         ;

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            commit_counter <= 3'd0   ;
            commit_reg[0]  <= 133'b0 ;
            commit_reg[1]  <= 133'b0 ;
            commit_reg[2]  <= 133'b0 ;
            commit_reg[3]  <= 133'b0 ;
            commit_reg[4]  <= 133'b0 ;
            commit_reg[5]  <= 133'b0 ;
            commit_reg[6]  <= 133'b0 ;
            commit_reg[7]  <= 133'b0 ;
        end 
        else if((~decode1_clean && ~decode1_stop) && (~decode2_clean && ~decode2_stop)) begin
            commit_pcbuff[]
        end 
    end
    
endmodule

  