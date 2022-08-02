/************************************************************
Author:LiGuoqi
Name:PHB.v
Function:2-bit saturated branch prediction
************************************************************/
module PHB (
    input       wire                                              clk           ,
    //input       wire                                              rst           ,

    input       wire        [3:0]                                 pc1_in        ,
    output      wire                                              jump1_ena     ,

    input       wire        [3:0]                                 decode1_read  ,
    output      wire                                              decode1_data  ,

    input       wire        [3:0]                                 decode2_read  ,
    output      wire                                              decode2_data  ,

    input       wire        [3:0]                                 u_jum         ,
    input       wire                                              u_ena         ,
    input       wire                                              ujum_ft                     
);

    `define ysyx22040228_JJJJ    4'b1111 
    `define ysyx22040228_NNNN    4'b0000 
    `define ysyx22040228_JNJN    4'b0101 
    `define ysyx22040228_NJNJ    4'b1010 
    `define ysyx22040228_JJNN    4'b1100 
    `define ysyx22040228_JNNJ    4'b1001
    `define ysyx22040228_NJJN    4'b0110
    `define ysyx22040228_NNJJ    4'b0011 

    reg   [3:0]  ramdata   [0:15] ;

    always @(posedge clk) begin
        if(u_ena) begin
            if(ujum_ft)
                ramdata[u_jum] <= {ramdata[u_jum][3:1], 1'b1};
            else 
                ramdata[u_jum] <= {ramdata[u_jum][3:1], 1'b0};
        end 
        else begin
            ramdata[u_jum] <= ramdata[u_jum]                 ;
        end 
    end
    wire [2:0]  phb_addo    ;
    assign      phb_addo = {2'b00, ramdata[pc1_in][0]} + {2'b00, ramdata[pc1_in][1]} + {2'b00, ramdata[pc1_in][2]} + {2'b00, ramdata[pc1_in][3]};
    reg  history_jdata1     ;
    always @(*) begin
        case (ramdata[pc1_in])
            `ysyx22040228_JJJJ, `ysyx22040228_JNJN, `ysyx22040228_JJNN, `ysyx22040228_JNNJ : begin  history_jdata1  = 1'b1 ;    end 
            `ysyx22040228_NNNN, `ysyx22040228_NJNJ, `ysyx22040228_NJJN, `ysyx22040228_NNJJ : begin  history_jdata1  = 1'b0 ;    end 
            default: begin
                if(phb_addo > 2)
                    history_jdata1 = 1'b1 ;
                else 
                    history_jdata1 = 1'b0 ;
            end 
        endcase
    end


    wire [2:0] phb_addreadt;
    assign     phb_addreadt = {2'b00, ramdata[decode1_read][0]} + {2'b00, ramdata[decode1_read][1]} + {2'b00, ramdata[decode1_read][2]} + {2'b00, ramdata[decode1_read][3]};
    reg     history_jread1 ;
    always @(*) begin
        case (ramdata[decode1_read])
            `ysyx22040228_JJJJ, `ysyx22040228_JNJN, `ysyx22040228_JJNN, `ysyx22040228_JNNJ : begin  history_jread1  = 1'b1 ;    end 
            `ysyx22040228_NNNN, `ysyx22040228_NJNJ, `ysyx22040228_NJJN, `ysyx22040228_NNJJ : begin  history_jread1  = 1'b0 ;    end 
            default: begin
                if(phb_addreadt > 2)
                    history_jread1 = 1'b1 ;
                else 
                    history_jread1 = 1'b0 ;
            end 
        endcase
    end

    wire [2:0] phb_addreadw;
    assign     phb_addreadw = {2'b00, ramdata[decode2_read][0]} + {2'b00, ramdata[decode2_read][1]} + {2'b00, ramdata[decode2_read][2]} + {2'b00, ramdata[decode2_read][3]};
    reg     history_jread2 ;
    always @(*) begin
        case (ramdata[decode2_read])
            `ysyx22040228_JJJJ, `ysyx22040228_JNJN, `ysyx22040228_JJNN, `ysyx22040228_JNNJ : begin  history_jread2  = 1'b1 ;    end 
            `ysyx22040228_NNNN, `ysyx22040228_NJNJ, `ysyx22040228_NJJN, `ysyx22040228_NNJJ : begin  history_jread2  = 1'b0 ;    end 
            default: begin
                if(phb_addreadw > 2)
                    history_jread2 = 1'b1 ;
                else 
                    history_jread2 = 1'b0 ;
            end 
        endcase
    end
    assign jump1_ena = history_jdata1  ; 

    assign decode1_data = history_jread1  ;
    assign decode2_data = history_jread2  ;



    
endmodule


