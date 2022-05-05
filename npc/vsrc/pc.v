/************************************************************
Author:LiGuoqi
Name:pc.v
Function:Instruction address transmitter
************************************************************/
`include "./vsrc/defines.v"
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
    input    wire                                           pip_btype    ,
    //from ctrl 
    input    wire                                           pc_stall     ,   //pc暂停信号
    //to if
    output   reg     [`ysyx22040228_PCBUS]                  pc           ,
    output   wire    [ 1:0]                                 pip_b_cont   ,
    output   wire                                           ce
);

    reg   [ 1:0]   jump_cont = 2'b11;
    assign pip_b_cont = jump_cont;
  
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            pc <= `ysyx22040228_START;   
        end
        else begin
            if (ex_pc_ena) 
                  pc <= ex_pc_i               ;
                  jump_cont <= jump_cont - 2'b2;
                  if(jump_cont == 2'b00){
                      jump_cont <= jump_cont;
                  }
            else if (pip_btype) begin
                  jump_cont <= jump_cont + 1'b1;
                  if(jump_cont == 2'b11){
                      jump_cont <= jump_cont;
                  }
            end 
            else if (id_pc_ena)
                  pc <= id_pc_i            ;
            else if (pc_stall == `ysyx22040228_STOP) begin 
                  pc <= pc                 ;
            end
            else begin
                  pc <= static_pc_i        ;              
            end
        end
    end
    
    assign ce = (rst == `ysyx22040228_RSTENA)? 1'b1:1'b0;
    
endmodule//pc

