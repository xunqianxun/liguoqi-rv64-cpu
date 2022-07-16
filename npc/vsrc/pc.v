/************************************************************
Author:LiGuoqi
Name:pc.v
Function:Instruction address transmitter
************************************************************/
`include "defines.v"
module pc ( 
    //系统输入
    input    wire                                           clk          ,
    input    wire                                           rst          ,

    input    wire    [`ysyx22040228_PCBUS]                  static_pc_i  ,   //分支预测指令dz
    // from id
    input    wire    [`ysyx22040228_PCBUS]                  id_pc_i      ,   //译码传来指令地址
    input    wire                                           id_pc_ena    ,   //译码传来指令使能信号

    input    wire    [`ysyx22040228_PCBUS]                  ex_pc_i      ,   //执行阶段送来的指令
    input    wire                                           ex_pc_ena    ,   // 执行阶段指令送来的使能信号
    input    wire    [4:0]                                  stall_ctrl   ,   //pc暂停信号
    //to if
    output   reg     [`ysyx22040228_PCBUS]                  pc               
);

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            pc <= `ysyx22040228_START      ; 
        end
        else begin
            if (stall_ctrl[0] == `ysyx22040228_STOP) begin 
                  pc <= pc                 ;
            end
            else if((stall_ctrl[1:0] == 2'b00) && ((ex_pc_change) || (ex_pc_ena))) begin
                  pc <= pc_ex              ;
            end 
            else if((stall_ctrl[1:0] == 2'b00) && ((id_pc_change) || (id_pc_ena))) begin
                  pc <= pc_id              ;
            end 
            else begin
                  pc <= static_pc_i        ;            
            end
        end
    end

    reg        ex_pc_change ;
    reg        id_pc_change ;
    reg [63:0] pc_ex        ;
    reg [63:0] pc_id        ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            ex_pc_change <= 1'b0    ;
            id_pc_change <= 1'b0    ;
            pc_ex <= `ysyx22040228_ZEROWORD ;
            pc_id <= `ysyx22040228_ZEROWORD ;
        end 
        else if((stall_ctrl[1:0] == 2'b11) && (ex_pc_ena)) begin
            ex_pc_change <= 1'b1    ;
            pc_ex <= ex_pc_i        ;
        end 
        else if((stall_ctrl[1:0] == 2'b11) && (id_pc_ena)) begin
            id_pc_change <= 1'b1    ;
            pc_id <= id_pc_i        ;
        end 
        else if(stall_ctrl[1:0] == 2'b00) begin
            ex_pc_change <= 1'b0    ;
            id_pc_change <= 1'b0    ;
            pc_ex <= `ysyx22040228_ZEROWORD ;
            pc_id <= `ysyx22040228_ZEROWORD ;
        end 
    end
    
    
endmodule//pc

