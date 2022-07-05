/************************************************************
Author:LiGuoqi
Name:if_idr.v
Function:From IR-DATA get instruct spread id module
************************************************************/
`include "./vsrc/defines.v"
module if_id (
    //系统信号
    input    wire                                              clk          ,
    input    wire                                              rst          ,
    // from pc if
    input    wire    [`ysyx22040228_PCBUS]                     if_pc        ,  //pc地址
    input    wire    [`ysyx22040228_INSTBUS]                   if_inst      ,
    // from id
    input    wire                                              if_id_flush  ,  
    //from exe 
    input    wire                                              if_id_bubble ,
    // axi
    input    wire                                              if_inst_valid,   
    output   wire                                              if_inst_ready,  
    output   wire                                              if_inst_stall,  
    // ctrl
    input    wire      [4:0]                                   stall_ctrl   ,     //暂停控制信号
    output   wire                                              if_unstall_req ,     //if_id阶段的暂停请求信号
    // id
    output   reg      [`ysyx22040228_PCBUS]                    id_pc        , //输出给id译码阶段的指令地址
    output   reg      [`ysyx22040228_INSTBUS]                  id_inst        //输出给id译码阶段的指令数据
);

always@(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            id_pc   <= `ysyx22040228_ZEROWORD;
            id_inst <= 32'h0000_0000;
        end
        else if((if_id_flush | if_id_bubble) || (fl_bub_temp)) begin
            id_pc   <= `ysyx22040228_ZEROWORD;
            id_inst <= 32'h0000_0000;
        end 
        else if((stall_ctrl[1] == `ysyx22040228_STOP) && (stall_ctrl[2] == `ysyx22040228_NOSTOP) && (stall_ctrl[4:3]==2'b00)) begin
            id_pc   <= `ysyx22040228_ZEROWORD;
            id_inst <= 32'h0000_0000;
        end
        else if((stall_ctrl[0]==`ysyx22040228_STOP) && (stall_ctrl[1] == `ysyx22040228_STOP) && (stall_ctrl[2] == `ysyx22040228_STOP)) begin
            id_pc   <= id_pc;
            id_inst <= id_inst;
        end
        else begin
            id_pc   <= if_pc;
            id_inst <= if_inst;
        end
    end
    reg     fl_bub_temp ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) 
            fl_bub_temp <= 1'b0    ;
        else if((stall_ctrl[1:0] == 2'b11) && (if_id_flush | if_id_bubble)) begin
            fl_bub_temp <= 1'b1    ;
        end 
        else if(stall_ctrl[1:0] == 2'b00) begin
            fl_bub_temp <= 1'b0    ;
        end 
    end


assign if_inst_stall   = (stall_ctrl == 5'b11111) || (stall_ctrl == 5'b01111) ;
assign if_unstall_req  = (rst == `ysyx22040228_RSTENA) ? 1'b0:((if_inst_valid == 1'b1) ? 1'b1 : 1'b0);
assign if_inst_ready   = (rst != `ysyx22040228_RSTENA) ;


endmodule//if_id



