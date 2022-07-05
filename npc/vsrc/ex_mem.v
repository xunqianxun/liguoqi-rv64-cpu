/************************************************************
Author:LiGuoqi
Name:ex_mem.v
Function:Intermediate module for memory access
************************************************************/
`include "./vsrc/defines.v"
module ex_mem (
    input              wire                                              clk             ,
    input              wire                                              rst             ,
    input              wire          [`ysyx22040228_PCBUS]               ex_mem_pc_i     ,
    input              wire          [`ysyx22040228_INSTBUS]             ex_mem_inst_i   ,
    /* verilator lint_off UNUSED */
    input              wire          [ 4:0]                              stall_ctrl      ,
    /* verilator lint_on UNUSED */
    input              wire          [ 7:0]                              ex_inst_type    ,
    input              wire                                              ex_rd_ena       ,
    input              wire          [`ysyx22040228_REGBUS]              ex_rd_data      ,
    input              wire          [`ysyx22040228_REGADDRBUS]          ex_rd_addr      ,

    input              wire          [ 2:0]                              ex_ls_sel       ,
    input              wire          [`ysyx22040228_DATAADDRBUS]         ex_ls_addr      ,
    
    output             reg           [ 7:0]                              mem_inst_type   ,
    output             reg                                               mem_rd_ena      ,
    output             reg           [`ysyx22040228_REGBUS]              mem_rd_data     ,
    output             reg           [`ysyx22040228_REGADDRBUS]          mem_rd_addr     ,
    output             reg           [`ysyx22040228_PCBUS]               ex_mem_pc_o     ,
    output             reg           [`ysyx22040228_INSTBUS]             ex_mem_inst_o   ,

    output             reg           [ 2:0]                              mem_ls_sel      ,
    output             reg           [`ysyx22040228_DATAADDRBUS]         mem_ls_addr       
);
    
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA) begin
        mem_inst_type <= 8'd0 ;
        mem_rd_ena    <= 1'b0 ;
        mem_rd_data   <= `ysyx22040228_ZEROWORD ;
        mem_rd_addr   <= 5'b0 ;
        mem_ls_sel    <= 3'd0 ;
        mem_ls_addr   <= `ysyx22040228_ZEROWORD ;
        ex_mem_pc_o   <= `ysyx22040228_ZEROWORD ;
        ex_mem_inst_o <= 32'b0 ;
    end
    else if(stall_ctrl[3:0] == 4'b1111) begin
        mem_inst_type <= mem_inst_type ;
        mem_rd_ena    <= mem_rd_ena  ;
        mem_rd_data   <= mem_rd_data ;
        mem_rd_addr   <= mem_rd_addr ;
        mem_ls_sel    <= mem_ls_sel  ;
        mem_ls_addr   <= mem_ls_addr ;
        ex_mem_pc_o   <= ex_mem_pc_o ;
        ex_mem_inst_o <= ex_mem_inst_o; 
    end  
    else begin
        mem_inst_type <= ex_inst_type ;
        mem_rd_ena    <= ex_rd_ena ;
        mem_rd_data   <= ex_rd_data ;
        mem_rd_addr   <= ex_rd_addr ;
        mem_ls_sel    <= ex_ls_sel ;
        mem_ls_addr   <= ex_ls_addr ;
        ex_mem_pc_o   <= ex_mem_pc_i;
        ex_mem_inst_o <= ex_mem_inst_i;

    end
end

endmodule//exe_mem

