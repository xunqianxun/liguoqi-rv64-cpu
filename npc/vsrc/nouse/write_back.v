/************************************************************
Author:LiGuoqi
Name:mem_wb.v
Function:write data back to regfile module
************************************************************/
`include "defines.v"
module write_back (
    input                   wire                                             clk             ,
    input                   wire                                             rst             ,
    input                   wire          [ 4:0]                             stall_ctrl      ,

    input                   wire          [`ysyx22040228_REGBUS]             inao_rd_data    ,
    input                   wire          [`ysyx22040228_REGADDRBUS]         inao_rd_addr    ,
    input                   wire                                             inao_rd_ena     ,

    input                   wire          [`ysyx22040228_REGBUS]             inat_rd_data    ,
    input                   wire          [`ysyx22040228_REGADDRBUS]         inat_rd_addr    ,
    input                   wire                                             inat_rd_ena     ,

    input                   wire          [`ysyx22040228_REGBUS]             inmm_rd_data    ,
    input                   wire          [`ysyx22040228_REGADDRBUS]         inmm_rd_addr    ,
    input                   wire                                             inmm_rd_ena     ,    

    output                  reg           [`ysyx22040228_REGBUS]             wb_rd_data1     ,
    output                  reg           [`ysyx22040228_REGADDRBUS]         wb_rd_addr1     ,
    output                  reg                                              wb_rd_ena1      ,  

    output                  reg           [`ysyx22040228_REGBUS]             wb_rd_data2     ,
    output                  reg           [`ysyx22040228_REGADDRBUS]         wb_rd_addr2     ,
    output                  reg                                              wb_rd_ena2      ,  

    output                  reg           [`ysyx22040228_REGBUS]             wb_rd_data3     ,
    output                  reg           [`ysyx22040228_REGADDRBUS]         wb_rd_addr3     ,
    output                  reg                                              wb_rd_ena3        
);


always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA) begin
        wb_rd_ena1  <= 1'b0 ;
        wb_rd_addr1 <= 5'b0 ;
        wb_rd_data1 <= `ysyx22040228_ZEROWORD ;
        wb_rd_ena2  <= 1'b0 ;
        wb_rd_addr2 <= 5'b0 ;
        wb_rd_data2 <= `ysyx22040228_ZEROWORD ;
        wb_rd_ena3  <= 1'b0 ;
        wb_rd_addr3 <= 5'b0 ;
        wb_rd_data3 <= `ysyx22040228_ZEROWORD ;
    end
    else begin
        if(stall_ctrl[4] == `ysyx22040228_NOSTOP) begin
            wb_rd_ena1  <= inao_rd_ena  ;
            wb_rd_addr1 <= inao_rd_addr ;
            wb_rd_data1 <= inao_rd_data ;
            wb_rd_ena2  <= inat_rd_ena  ;
            wb_rd_addr2 <= inat_rd_addr ;
            wb_rd_data2 <= inat_rd_data ;
            wb_rd_ena3  <= inmm_rd_ena  ;
            wb_rd_addr3 <= inmm_rd_addr ;
            wb_rd_data3 <= inmm_rd_data ;
        end
        else if((stall_ctrl[3:0] == 4'b1111) && (stall_ctrl[4] == `ysyx22040228_STOP)) begin
            wb_rd_ena1  <= 1'b0 ;
            wb_rd_addr1 <= 5'b0 ;
            wb_rd_data1 <= `ysyx22040228_ZEROWORD ;
            wb_rd_ena2  <= 1'b0 ;
            wb_rd_addr2 <= 5'b0 ;
            wb_rd_data2 <= `ysyx22040228_ZEROWORD ;
            wb_rd_ena3  <= 1'b0 ;
            wb_rd_addr3 <= 5'b0 ;
            wb_rd_data3 <= `ysyx22040228_ZEROWORD ;
        end
        else begin
        wb_rd_ena1  <= inao_rd_ena  ;
        wb_rd_addr1 <= inao_rd_addr ;
        wb_rd_data1 <= inao_rd_data ;
        wb_rd_ena2  <= inat_rd_ena  ;
        wb_rd_addr2 <= inat_rd_addr ;
        wb_rd_data2 <= inat_rd_data ;
        wb_rd_ena3  <= inmm_rd_ena  ;
        wb_rd_addr3 <= inmm_rd_addr ;
        wb_rd_data3 <= inmm_rd_data ;
        end
    end
end

endmodule
