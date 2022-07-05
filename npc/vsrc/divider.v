/************************************************************
Author:LiGuoqi
Name:divider.v
Function:execute muliplication instruction
************************************************************/
`include "./vsrc/defines.v"
module divider (
    input        wire                                       clk               ,
    input        wire                                       rst               ,

    input        wire    [63:0]                             divisor           ,
    input        wire    [63:0]                             dividend          ,
    input        wire    [7 :0]                             inst_opcode       ,
    input        wire                                       div_ready         ,
    output       wire    [63:0]                             div_rem_data      ,
    output       wire                                       div_finish                               
);
    reg   [63:0] shang_data  ;
    reg   [63:0] yushu_data  ;
    reg          finish_sign ;
    wire         op1_signbit ;
    wire         op2_signbit ;
    wire  [63:0] op1_absolute;
    wire  [63:0] op2_absolute;
    assign op1_signbit  = divisor[63] ;
    assign op2_signbit  = dividend[63] ;
    assign op1_absolute = op1_signbit ? (~divisor + 1) : divisor ;
    assign op2_absolute = op2_signbit ? (~dividend + 1) : dividend ;
    wire   div_rem_signbit ;
    assign div_rem_signbit = op1_signbit ^ op2_absolute ;

    reg   [63:0] tempa ;
    reg   [63:0] tempb ;
    always @(divisor or dividend) begin
        tempa <= op1_absolute  ;
        tempb <= op2_absolute  ;
    end
    reg  [7 : 0]  counter;
    reg  [127:0]  temp_a ;
    reg  [127:0]  temp_b ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            temp_a <= `ysyx22040228_DIV_ZERO;
            temp_b <= `ysyx22040228_DIV_ZERO;
            finish_sign <= 1'b0             ;
        end 
        else begin
            if(counter <= 63) begin
                temp_a <= {temp_a[126:0],1'b0} ;
                if(temp_a[63:32] >= tempb) begin
                    temp_a <= temp_a - temp_b + 1'b1 ;
                end 
                else begin
                    temp_a <= temp_a ;
                end
                counter <= counter + 1  ;
                finish_sign <= 1'b0 ; 
            end
            else  begin
                counter <= 8'b0 ;
                temp_a <= {`ysyx22040228_ZEROWORD,tempa};
                temp_b <= {tempb,`ysyx22040228_ZEROWORD};
                shang_data <= temp_a[63 :0 ] ;
                yushu_data <= temp_a[127:64] ;
                if(div_ready)begin
                    finish_sign <= 1'b1 ;
                end 
            end 
        end 
    end
    wire [63:0]  fan_data ;
    assign fan_data = ~shang_data + 1 ;

    assign div_finish   =  finish_sign ;
    assign div_rem_data = (inst_opcode == `INST_MUL)      ? (div_rem_signbit ? fan_data : shang_data)                                  :
                          (inst_opcode == `INST_MULH)     ? (div_rem_signbit ? {fan_data[63:32], 32'b0} : {shang_data[63:32], 32'b0})  :
                          (inst_opcode == `INST_MULHSU)   ? (div_rem_signbit ? {fan_data[63:32], 32'b0} : {shang_data[63:32], 32'b0})  :
                          (inst_opcode == `INST_MULHU)    ? ({shang_data[63:32], 32'b0})                                                        :
                          (inst_opcode == `INST_MULW)     ? (shang_data[31]  ? {32'hffffffff, shang_data[31:0]} : {32'b0, shang_data[31:0]})    :
                          (inst_opcode == `INST_REM)      ? yushu_data                                                                          :
                          (inst_opcode == `INST_REMU)     ? yushu_data                                                                          :
                          (inst_opcode == `INST_REMUW)    ? yushu_data                                                                          :
                          (inst_opcode == `INST_REMW)     ? yushu_data                                                                          :
                                                                                                                          `ysyx22040228_ZEROWORD;
     
endmodule
