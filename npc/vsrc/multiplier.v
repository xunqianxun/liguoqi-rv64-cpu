/************************************************************
Author:LiGuoqi
Name:multiplier.v
Function:execute muliplication instruction
************************************************************/
`include "./vsrc/defines.v"
module multiplier (
    inout          wire                                            clk              ,
    input          wire                                            rst              ,
    input          wire                                            mult_ready       ,
    input          wire                                            inst_opcode      ,
    input          wire            [63:0]                          mult_op1         ,
    input          wire            [63:0]                          mult_op2         ,
    output         wire            [63:0]                          product_val      ,
    output         wire                                            mult_finish              
);

    reg     mult_valid ;
    assign  mult_finish = mult_valid & ~( | multiplier) ;

    always @(posedge clk) begin
        if(~mult_ready | mult_finish)
            mult_valid <= 1'b0  ;
        else 
            mult_valid <= 1'b1  ;
    end

    wire         op1_signbit ;
    wire         op2_signbit ;
    wire  [63:0] op1_absolute;
    wire  [63:0] op2_absolute;
    assign op1_signbit  = mult_op1[63] ;
    assign op2_signbit  = mult_op2[63] ;
    assign op1_absolute = op1_signbit ? (~mult_op1 + 1) : mult_op1 ;
    assign op2_absolute = op2_signbit ? (~mult_op2 + 1) : mult_op2 ; 

    reg  [127:0] multiplcand ;
    always @(posedge clk) begin
        if(mutl_valid)
            multiplcand <= {multiplcand[126:0],1'b0} ;
        else if(mult_ready)
            multiplcand <= {64'b0,op1_absolute}; 
    end
    reg  [63:0] multipler ;
    always @(posedge clk) begin
        if(mult_valid)
            multipler <= {1'b0, multipler[63:1]} ;
        else if(mult_ready)
            multipler <= op2_absolute ;
    end

    wire [127:0] product_lins ;
    assign product_lins = multipler[0] ? multipler : 128'b0 ;
    reg  [127:0] product_temp ;
    always @(posedge clk) begin
        if(mult_valid)
            product_temp <= product_temp + product_lins ;
        else if(mult_ready)
            product_temp <= 128'b0  ;
    end

    reg   product_signbit ;
    always @(posedge clk) begin
        if(mult_valid)
            product_signbit <= op1_signbit ^ op2_signbit ;
        else 
            product_signbit <= op1_signbit ^ op2_signbit ;
    end

    assign product_val = (inst_opcode == `INST_MUL)      ? product_temp                                                       :
                         (inst_opcode == `INST_MULH)     ? (product_signbit ? {(~product_temp[63:32]+1),32'b0} : {product_temp[63:32],32'b0}) :
                         (inst_opcode == `INST_MULHU)    ? (product_signbit ? {(~product_temp[63:32]+1,32'b0} : {product_temp[63:32],32'b0}) :
                         (inst_opcode == `INST_MULW)     ? (product_signbit ? (product_temp[31] ? {32'hffffffff,(~product_temp[31:0]+1)} : {32'b0,(~product_temp[31:0]+1)}) : (product_temp[31] ? {32'hffffffff,product_temp[31:0]} : {32'b0,product_temp[31:0]})) :
                                                                                                                            `ysyx22040228_ZEROWORD;
    
endmodule
