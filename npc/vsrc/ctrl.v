/************************************************************
Author:LiGuoqi
Name:ctrl.v
Function:Pause control of the whole pipeline
************************************************************/
`include "defines.v"
module ctrl (
    input                   wire                                      rst           ,
    input                   wire                                      if_stall_req  ,
    input                   wire                                      id_stall_req  ,
    input                   wire                                      ex_stall_req  ,
    input                   wire                                      mem_stall_req ,

    output                  reg              [ 4:0]                   stall_ctrl    
);

always @(*) begin
    if(rst == `ysyx22040228_RSTENA)          begin stall_ctrl = 5'b00000  ;  end
    else if(mem_stall_req == `ysyx22040228_STOP) begin stall_ctrl = 5'b11111  ;  end
    else if(ex_stall_req == `ysyx22040228_STOP)  begin stall_ctrl = 5'b01111  ;  end
    else if(id_stall_req == `ysyx22040228_STOP)  begin stall_ctrl = 5'b00111  ;  end
    else if(if_stall_req == `ysyx22040228_STOP)  begin stall_ctrl = 5'b00000  ;  end
    else                                         begin stall_ctrl = 5'b00011  ;  end 
end
    
endmodule//ctrl

