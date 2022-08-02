/************************************************************
Author:LiGuoqi
Name:ctrl.v
Function:Pause control of the whole pipeline
************************************************************/
`include "defines.v"
module Pip_ctrl (
    input                   wire                                      rst             ,
    input                   wire                                      pc_unstall_req  , 
    input                   wire                                      is_stall_req    ,
    input                   wire                                      de1_stall_req   ,
    input                   wire                                      de2_stall_req   ,
    input                   wire                                      al1_stall_req   ,
    input                   wire                                      al2_stall_req   ,
    input                   wire                                      mmu_stall_req   ,

    output                  reg              [ 6:0]                   stall_ctrl    
);

    //--------------------------------------------------------------------------------//
    //         stall_ctrl[0] ----> pc                                                 //
    //         stall_ctrl[1] ----> issueqeue                                          // 
    //         stall_ctrl[2] ----> decode1                                            //
    //         stall_ctrl[3] ----> decode2                                            //
    //         stall_ctrl[4] ----> ALUO                                               //
    //         stall_ctrl[5] ----> ALUT                                               //
    //         stall_ctrl[6] ----> MMU                                                //
    //--------------------------------------------------------------------------------//
    
    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            stall_ctrl = 7'b0000000   ;
        end 
        else if(pc_unstall_req)begin
            stall_ctrl = 7'b0000000   ;
        end
        else begin
            stall_ctrl = 7'b0000001   ;
        end  
    end




endmodule//ctrl

