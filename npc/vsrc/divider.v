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
    // reg   [63:0] shang_data  ;
    // reg   [63:0] yushu_data  ;
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
    assign div_rem_signbit = op1_signbit ^ op2_signbit ;

    /* verilator lint_off COMBDLY */
    reg  [7 : 0]  counter;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)
            counter <= 8'b0  ;
        else if(div_ready && (counter <= 8'd64))
            counter <= counter + 1 ;
        else 
            counter <= 8'b0  ;
    end
    /* verilator lint_on COMBDLY */
    reg  [127:0]  temp_a ;
    reg  [127:0]  temp_b ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            temp_a <= `ysyx22040228_DIV_ZERO;
            temp_b <= `ysyx22040228_DIV_ZERO;
            finish_sign <= 1'b0             ;
            // shang_data <= `ysyx22040228_ZEROWORD;
            // yushu_data <= `ysyx22040228_ZEROWORD;
        end 
        else begin
            if((counter <= 64) && (div_ready)) begin
                if(counter > 0)begin
                    finish_sign     <= 1'b0     ;
                    temp_a <= temp_a << 1 ;
                    if(temp_a >= temp_b)
                        temp_a <= temp_a - temp_b + 1'b1 ;
                    else 
                        temp_a <= temp_a   ;
                end 
                else begin
                    temp_a <= {`ysyx22040228_ZEROWORD,op1_absolute};
                    temp_b <= {op2_absolute,`ysyx22040228_ZEROWORD};
                end 
            end
            else  begin
                counter <= 8'b0 ;
                finish_sign <= 1'b0 ;
                if(div_ready)begin
                    finish_sign <= 1'b1 ;
                end 
            end 
        end 
    end
    wire [63:0]  fan_data ;
    assign fan_data = ~temp_a[63 :0 ] + 1 ;

    assign div_finish   =  finish_sign ;
    assign div_rem_data = (inst_opcode == `INST_DIV)      ? (div_rem_signbit ? fan_data : temp_a[63 :0 ])                                  :
                          (inst_opcode == `INST_DIVU)     ? (div_rem_signbit ? fan_data : temp_a[63 :0 ])                                  :
                          (inst_opcode == `INST_DIVUW)    ? (div_rem_signbit ? fan_data : temp_a[63 :0 ])                                  :
                          (inst_opcode == `INST_DIVW)     ? (div_rem_signbit ? fan_data : temp_a[63 :0 ])                                  :
                          (inst_opcode == `INST_REM)      ? temp_a[127:64]                                                                          :
                          (inst_opcode == `INST_REMU)     ? temp_a[127:64]                                                                          :
                          (inst_opcode == `INST_REMUW)    ? temp_a[127:64]                                                                          :
                          (inst_opcode == `INST_REMW)     ? temp_a[127:64]                                                                          :
                                                                                                                          `ysyx22040228_ZEROWORD;
     
endmodule
