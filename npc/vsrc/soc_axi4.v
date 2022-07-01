/************************************************************
Author:LiGuoqi
Name:soc_axi.v
Function:AXI4 bus
************************************************************/
`include "./vsrc/defines_axi4.v"
`include "./vsrc/defines.v"
`define  IO_ADDR   
`define  TIME_ADDR

//SLAVE_NUM 1 --> IO
//SLAVE_NUM 2 --> TIME
//slave_NUM 3 --> ELSE

module soc_axi4(
    inout             wire                                               clk                  ,
    input             wire                                               rst                  ,
    input             wire         [2:0]                                 prot_chose_write     ,
    input             wire         [2:0]                                 prot_chose_read      ,

    input             wire         [`ysyx22040228_ID_BUS]                master_axi_aw_id     ,
    input             wire         [`ysyx22040228_ADDR_BUS]              master_axi_aw_addr   ,
    input             wire         [`ysyx22040228_LEN_BUS]               master_axi_aw_len    ,
    input             wire         [`ysyx22040228_SIZE_BUS]              master_axi_aw_size   ,   
    input             wire         [`ysyx22040228_BURST_BUS]             master_axi_aw_burst  ,
    input             wire         [`ysyx22040228_CACHE_BUS]             master_axi_aw_cache  ,
    input             wire         [`ysyx22040228_PROT_BUS]              master_axi_aw_prot   ,
    input             wire         [`ysyx22040228_QOS_BUS]               master_axi_aw_qos    ,
    input             wire                                               master_axi_aw_valid  ,
    output            reg                                                master_axi_aw_ready  ,

    //input             wire         [`ysyx22040228_ID_BUS]                master_axi_w_id      ,
    input             wire         [`ysyx22040228_DATA_BUS]              master_axi_w_data    ,
    input             wire         [`ysyx22040228_STRB_BUS]              master_axi_w_strb    ,
    input             wire                                               master_axi_w_last    ,
    input             wire                                               master_axi_w_valid   ,
    output            reg                                                master_axi_w_ready   ,

    output            reg          [`ysyx22040228_ID_BUS]                master_axi_b_id      ,
    output            reg          [`ysyx22040228_RESP_BUS]              master_axi_b_resp    ,
    input             wire                                               master_axi_b_ready   ,
    output            reg                                                master_axi_b_valid   ,

    input             wire         [`ysyx22040228_ID_BUS]                master_axi_ar_id     ,
    input             wire         [`ysyx22040228_ADDR_BUS]              master_axi_ar_addr   ,
    input             wire         [`ysyx22040228_LEN_BUS]               master_axi_ar_len    ,
    input             wire         [`ysyx22040228_SIZE_BUS]              master_axi_ar_size   ,
    input             wire         [`ysyx22040228_BURST_BUS]             master_axi_ar_burst  ,
    input             wire         [`ysyx22040228_CACHE_BUS]             master_axi_ar_cache  ,
    input             wire         [`ysyx22040228_PROT_BUS]              master_axi_ar_prot   ,
    input             wire         [`ysyx22040228_QOS_BUS]               master_axi_ar_qos    ,
    input             wire                                               master_axi_ar_valid  ,
    output            reg                                                master_axi_ar_ready  ,

    output            reg          [`ysyx22040228_ID_BUS]                master_axi_r_id      ,
    output            reg          [`ysyx22040228_DATA_BUS]              master_axi_r_data    ,
    output            reg          [`ysyx22040228_RESP_BUS]              master_axi_r_resp    ,
    output            reg                                                master_axi_r_last    ,
    output            reg                                                master_axi_r_valid   ,
    input             wire                                               master_axi_r_ready   ,

    output            reg          [4*SLAVE_NUM-1      : 0]              slave_axi_aw_id      ,
    output            reg          [64*SLAVE_NUM-1     : 0]              slave_axi_aw_addr    ,
    output            reg          [8*SLAVE_NUM-1      : 0]              slave_axi_aw_len     ,
    output            reg          [3*SLAVE_NUM-1      : 0]              slave_axi_aw_size    ,
    output            reg          [2*SLAVE_NUM-1      : 0]              slave_axi_aw_burst   ,
    output            reg          [4*SLAVE_NUM-1      : 0]              slave_axi_aw_cache   ,
    output            reg          [3*SLAVE_NUM-1      : 0]              slave_axi_aw_prot    ,
    output            reg          [4*SLAVE_NUM-1      : 0]              slave_axi_aw_qos     ,
    output            reg          [1*SLAVE_NUM-1      : 0]              slave_axi_aw_valid   ,
    input             wire         [1*SLAVE_NUM-1      : 0]              slave_axi_aw_ready   ,

    //output            reg          [4*SLAVE_NUM-1      : 0]              slave_axi_w_id       ,
    output            reg          [64*SLAVE_NUM-1     : 0]              slave_axi_w_data     ,
    output            reg          [8*SLAVE_NUM-1      : 0]              slave_axi_w_strb     ,
    output            reg          [1*SLAVE_NUM-1      : 0]              slave_axi_w_last     ,
    output            reg          [1*SLAVE_NUM-1      : 0]              slave_axi_w_valid    ,
    input             wire         [1*SLAVE_NUM-1      : 0]              slave_axi_w_ready    ,

    input             wire         [4*SLAVE_NUM-1      : 0]              slave_axi_b_id       ,
    input             wire         [2*SLAVE_NUM-1      : 0]              slave_axi_b_resp     ,
    input             wire         [1*SLAVE_NUM-1      : 0]              slave_axi_b_valid    ,
    output            reg          [1*SLAVE_NUM-1      : 0]              slave_axi_b_ready    ,

    output            reg          [4*SLAVE_NUM-1      : 0]              slave_axi_ar_id      ,
    output            reg          [64*SLAVE_NUM-1     : 0]              slave_axi_ar_addr    ,
    output            reg          [8*SLAVE_NUM-1      : 0]              slave_axi_ar_len     ,
    output            reg          [3*SLAVE_NUM-1      : 0]              slave_axi_ar_size    ,
    output            reg          [2*SLAVE_NUM-1      : 0]              slave_axi_ar_burst   ,
    output            reg          [4*SLAVE_NUM-1      : 0]              slave_axi_ar_cache   ,
    output            reg          [3*SLAVE_NUM-1      : 0]              slave_axi_ar_prot    ,
    output            reg          [4*SLAVE_NUM-1      : 0]              slave_axi_ar_qos     ,
    output            reg          [1*SLAVE_NUM-1      : 0]              slave_axi_ar_valid   ,
    input             wire         [1*SLAVE_NUM-1      : 0]              slave_axi_ar_ready   ,

    input             wire         [4*SLAVE_NUM-1      : 0]              slave_axi_r_id       ,
    input             wire         [64*SLAVE_NUM-1     : 0]              slave_axi_r_data     ,
    input             wire         [2*SLAVE_NUM-1      : 0]              slave_axi_r_resp     ,
    input             wire         [1*SLAVE_NUM-1      : 0]              slave_axi_r_last     ,
    input             wire         [1*SLAVE_NUM-1      : 0]              slave_axi_r_valid    ,
    output            reg          [1*SLAVE_NUM-1      : 0]              slave_axi_r_ready    
);
    parameter SLAVE_NUM = 3 ;

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            master_axi_aw_ready <= `ysyx22040228_ENABLE   ;
            slave_axi_aw_id        <= 12'b0      ;
            slave_axi_aw_addr      <= 192'b0     ;
            slave_axi_aw_len       <= 24'b0      ;
            slave_axi_aw_size      <= 9'b0       ;
            slave_axi_aw_burst     <= 6'b0       ;
            slave_axi_aw_cache     <= 12'b0      ;
            slave_axi_aw_prot      <= 9'b0       ;
            slave_axi_aw_qos       <= 12'b0      ;
            slave_axi_aw_valid     <= 3'b0       ;
            //slave_axi_w_id         <= 12'b0      ;
            slave_axi_w_data       <= 192'b0     ;
            slave_axi_w_strb       <= 24'b0      ;
            slave_axi_w_last       <= 3'b0       ;
            slave_axi_w_valid      <= 3'b0       ;
            master_axi_w_ready     <= `ysyx22040228_ENABLE   ;
            master_axi_b_id        <= 4'b0000                ;
            master_axi_b_resp      <= 2'b00                  ;
            master_axi_b_valid     <= `ysyx22040228_ENABLE   ;
            slave_axi_b_ready      <= 3'b0                   ;
        end 
        else if(prot_chose_write[0] == `ysyx22040228_ABLE) begin
            master_axi_aw_ready <= slave_axi_aw_ready[1*1-1    : 0]   ;
            slave_axi_aw_id   [4*1-1    :     0     ]      <= master_axi_aw_id      ;
            slave_axi_aw_addr [64*1-1   :     0     ]      <= master_axi_aw_addr    ;
            slave_axi_aw_len  [8*1-1    :     0     ]      <= master_axi_aw_len     ;
            slave_axi_aw_size [3*1-1    :     0     ]      <= master_axi_aw_size    ;
            slave_axi_aw_burst[2*1-1    :     0     ]      <= master_axi_aw_burst   ;
            slave_axi_aw_cache[4*1-1    :     0     ]      <= master_axi_aw_cache   ;
            slave_axi_aw_prot [3*1-1    :     0     ]      <= master_axi_aw_prot    ;
            slave_axi_aw_qos  [4*1-1    :     0     ]      <= master_axi_aw_qos     ;
            slave_axi_aw_valid[1*1-1    :     0     ]      <= master_axi_aw_valid   ;
            //slave_axi_w_id    [4*1-1    :     0     ]      <= master_axi_w_id       ;
            slave_axi_w_data  [64*1-1   :     0     ]      <= master_axi_w_data     ;
            slave_axi_w_strb  [8*1-1    :     0     ]      <= master_axi_w_strb     ;
            slave_axi_w_last  [1*1-1    :     0     ]      <= master_axi_w_last     ;
            slave_axi_w_valid [1*1-1    :     0     ]      <= master_axi_w_valid    ;
            master_axi_w_ready  <= slave_axi_w_ready [1*1-1    : 0]   ;
            master_axi_b_id     <= slave_axi_b_id    [4*1-1    : 0]   ;
            master_axi_b_resp   <= slave_axi_b_resp  [2*1-1    : 0]   ;
            master_axi_b_valid  <= slave_axi_b_valid [1*1-1    : 0]   ;
            slave_axi_b_ready [1*1-1    :     0     ]      <= master_axi_b_ready    ;
        end 
        else if(prot_chose_write[1] == `ysyx22040228_ABLE) begin
            master_axi_aw_ready <= slave_axi_aw_ready[1*2-1    : 1*1]  ;
            slave_axi_aw_id   [4*2-1    :     4*1   ]      <= master_axi_aw_id      ;
            slave_axi_aw_addr [64*2-1   :     64*1  ]      <= master_axi_aw_addr    ;
            slave_axi_aw_len  [8*2-1    :     8*1   ]      <= master_axi_aw_len     ;
            slave_axi_aw_size [3*2-1    :     3*1   ]      <= master_axi_aw_size    ;
            slave_axi_aw_burst[2*2-1    :     2*1   ]      <= master_axi_aw_burst   ;
            slave_axi_aw_cache[4*2-1    :     4*1   ]      <= master_axi_aw_cache   ;
            slave_axi_aw_prot [3*2-1    :     3*1   ]      <= master_axi_aw_prot    ;
            slave_axi_aw_qos  [4*2-1    :     4*1   ]      <= master_axi_aw_qos     ;
            slave_axi_aw_valid[1*2-1    :     1*1   ]      <= master_axi_aw_valid   ;
            //slave_axi_w_id    [4*2-1    :     4*1   ]      <= master_axi_w_id       ;
            slave_axi_w_data  [64*2-1   :     64*1  ]      <= master_axi_w_data     ;
            slave_axi_w_strb  [8*2-1    :     8*1   ]      <= master_axi_w_strb     ;
            slave_axi_w_last  [1*2-1    :     1*1   ]      <= master_axi_w_last     ;
            slave_axi_w_valid [1*2-1    :     1*1   ]      <= master_axi_w_valid    ;
            master_axi_w_ready  <= slave_axi_w_ready [1*2-1    : 1*1]  ;
            master_axi_b_id     <= slave_axi_b_id    [4*2-1    : 4*1]  ;
            master_axi_b_resp   <= slave_axi_b_resp  [2*2-1    : 2*1]  ;
            master_axi_b_valid  <= slave_axi_b_valid [1*2-1    : 1*1]  ;
            slave_axi_b_ready [1*2-1    :     1*1   ]      <= master_axi_b_ready    ;
        end 
        else if(prot_chose_write[2] == `ysyx22040228_ABLE) begin
            master_axi_aw_ready <= slave_axi_aw_ready[1*3-1    : 1*2]  ;
            slave_axi_aw_id   [4*3-1    :     4*2   ]      <= master_axi_aw_id      ;
            slave_axi_aw_addr [64*3-1   :     64*2  ]      <= master_axi_aw_addr    ;
            slave_axi_aw_len  [8*3-1    :     8*2   ]      <= master_axi_aw_len     ;
            slave_axi_aw_size [3*3-1    :     3*2   ]      <= master_axi_aw_size    ;
            slave_axi_aw_burst[2*3-1    :     2*2   ]      <= master_axi_aw_burst   ;
            slave_axi_aw_cache[4*3-1    :     4*2   ]      <= master_axi_aw_cache   ;
            slave_axi_aw_prot [3*3-1    :     3*2   ]      <= master_axi_aw_prot    ;
            slave_axi_aw_qos  [4*3-1    :     4*2   ]      <= master_axi_aw_qos     ;
            slave_axi_aw_valid[1*3-1    :     1*2   ]      <= master_axi_aw_valid   ;
            //slave_axi_w_id    [4*3-1    :     4*2   ]      <= master_axi_w_id       ;
            slave_axi_w_data  [64*3-1   :     64*2  ]      <= master_axi_w_data     ;
            slave_axi_w_strb  [8*3-1    :     8*2   ]      <= master_axi_w_strb     ;
            slave_axi_w_last  [1*3-1    :     1*2   ]      <= master_axi_w_last     ;
            slave_axi_w_valid [1*3-1    :     1*2   ]      <= master_axi_w_valid    ;
            master_axi_w_ready  <= slave_axi_w_ready [1*3-1    : 1*2]  ;
            master_axi_b_id     <= slave_axi_b_id    [4*3-1    : 4*2]  ;
            master_axi_b_resp   <= slave_axi_b_resp  [2*3-1    : 2*2]  ;
            master_axi_b_valid  <= slave_axi_b_valid [1*3-1    : 1*2]  ;
            slave_axi_b_ready [1*3-1    :     1*2   ]      <= master_axi_b_ready    ;
        end 
        else begin
            master_axi_aw_ready <= `ysyx22040228_ENABLE   ;
            slave_axi_aw_id        <= 12'b0      ;
            slave_axi_aw_addr      <= 192'b0     ;
            slave_axi_aw_len       <= 24'b0      ;
            slave_axi_aw_size      <= 9'b0       ;
            slave_axi_aw_burst     <= 6'b0       ;
            slave_axi_aw_cache     <= 12'b0      ;
            slave_axi_aw_prot      <= 9'b0       ;
            slave_axi_aw_qos       <= 12'b0      ;
            slave_axi_aw_valid     <= 3'b0       ;
            //slave_axi_w_id         <= 12'b0      ;
            slave_axi_w_data       <= 192'b0     ;
            slave_axi_w_strb       <= 24'b0      ;
            slave_axi_w_last       <= 3'b0       ;
            slave_axi_w_valid      <= 3'b0       ;
            master_axi_w_ready  <= `ysyx22040228_ENABLE   ;
            master_axi_b_id     <= 4'b0000                ;
            master_axi_b_resp   <= 2'b00                  ;
            master_axi_b_valid  <= `ysyx22040228_ENABLE   ;
            slave_axi_b_ready   <= 3'b0                   ;
        end 
    end

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            slave_axi_ar_id        <= 12'b0      ;
            slave_axi_ar_addr      <= 192'b0     ;
            slave_axi_ar_len       <= 24'b0      ;
            slave_axi_ar_size      <= 9'b0       ;
            slave_axi_ar_burst     <= 6'b0       ;
            slave_axi_ar_cache     <= 12'b0      ;
            slave_axi_ar_prot      <= 9'b0       ;
            slave_axi_ar_qos       <= 12'b0      ;
            slave_axi_ar_valid     <= 3'b0       ;
            master_axi_ar_ready <= `ysyx22040228_ENABLE   ;
            master_axi_r_id     <= 4'b0000                ;
            master_axi_r_data   <= `ysyx22040228_ZEROWORD ;
            master_axi_r_resp   <= 2'b00                  ;
            master_axi_r_last   <= `ysyx22040228_ENABLE   ;
            master_axi_r_valid  <= `ysyx22040228_ENABLE   ;
            slave_axi_r_ready      <= 3'b0       ;
        end 
        else if(prot_chose_read[0] == `ysyx22040228_ABLE) begin
            slave_axi_ar_id   [4*1-1    :     0     ]      <= master_axi_ar_id      ;
            slave_axi_ar_addr [64*1-1   :     0     ]      <= master_axi_ar_addr    ;
            slave_axi_ar_len  [8*1-1    :     0     ]      <= master_axi_ar_len     ;
            slave_axi_ar_size [3*1-1    :     0     ]      <= master_axi_ar_size    ;
            slave_axi_ar_burst[2*1-1    :     0     ]      <= master_axi_ar_burst   ;
            slave_axi_ar_cache[4*1-1    :     0     ]      <= master_axi_ar_cache   ;
            slave_axi_ar_prot [3*1-1    :     0     ]      <= master_axi_ar_prot    ;
            slave_axi_ar_qos  [4*1-1    :     0     ]      <= master_axi_ar_qos     ;
            slave_axi_ar_valid[1*1-1    :     0     ]      <= master_axi_ar_valid   ;
            master_axi_ar_ready <= slave_axi_ar_ready[1*1-1    : 0]   ;
            master_axi_r_id     <= slave_axi_r_id    [4*1-1    : 0]   ;
            master_axi_r_data   <= slave_axi_r_data  [64*1-1   : 0]   ;
            master_axi_r_resp   <= slave_axi_r_resp  [2*1-1    : 0]   ;
            master_axi_r_last   <= slave_axi_r_last  [1*1-1    : 0]   ;
            master_axi_r_valid  <= slave_axi_r_valid [1*1-1    : 0]   ;
            slave_axi_r_ready [1*1-1    :     0     ]      <= master_axi_r_ready   ;
        end 
        else if(prot_chose_read[1] == `ysyx22040228_ABLE) begin
            slave_axi_ar_id   [4*2-1    :     4*1   ]      <= master_axi_ar_id      ;
            slave_axi_ar_addr [64*2-1   :     64*1  ]      <= master_axi_ar_addr    ;
            slave_axi_ar_len  [8*2-1    :     8*1   ]      <= master_axi_ar_len     ;
            slave_axi_ar_size [3*2-1    :     3*1   ]      <= master_axi_ar_size    ;
            slave_axi_ar_burst[2*2-1    :     2*1   ]      <= master_axi_ar_burst   ;
            slave_axi_ar_cache[4*2-1    :     4*1   ]      <= master_axi_ar_cache   ;
            slave_axi_ar_prot [3*2-1    :     3*1   ]      <= master_axi_ar_prot    ;
            slave_axi_ar_qos  [4*2-1    :     4*1   ]      <= master_axi_ar_qos     ;
            slave_axi_ar_valid[1*2-1    :     1*1   ]      <= master_axi_ar_valid   ;
            master_axi_ar_ready <= slave_axi_ar_ready[1*2-1    : 1*1]  ;
            master_axi_r_id     <= slave_axi_r_id    [4*2-1    : 4*1]  ;
            master_axi_r_data   <= slave_axi_r_data  [64*2-1   : 64*1] ;
            master_axi_r_resp   <= slave_axi_r_resp  [2*2-1    : 2*1]  ;
            master_axi_r_last   <= slave_axi_r_last  [1*2-1    : 1*1]  ;
            master_axi_r_valid  <= slave_axi_r_valid [1*2-1    : 1*1]  ;
            slave_axi_r_ready [1*2-1    :     1*1   ]      <= master_axi_r_ready   ;
        end 
        else if(prot_chose_read[2] == `ysyx22040228_ABLE) begin
            slave_axi_ar_id   [4*3-1    :     4*2   ]      <= master_axi_ar_id      ;
            slave_axi_ar_addr [64*3-1   :     64*2  ]      <= master_axi_ar_addr    ;
            slave_axi_ar_len  [8*3-1    :     8*2   ]      <= master_axi_ar_len     ;
            slave_axi_ar_size [3*3-1    :     3*2   ]      <= master_axi_ar_size    ;
            slave_axi_ar_burst[2*3-1    :     2*2   ]      <= master_axi_ar_burst   ;
            slave_axi_ar_cache[4*3-1    :     4*2   ]      <= master_axi_ar_cache   ;
            slave_axi_ar_prot [3*3-1    :     3*2   ]      <= master_axi_ar_prot    ;
            slave_axi_ar_qos  [4*3-1    :     4*2   ]      <= master_axi_ar_qos     ;
            slave_axi_ar_valid[1*3-1    :     1*2   ]      <= master_axi_ar_valid   ;
            master_axi_ar_ready <= slave_axi_ar_ready[1*3-1    : 1*2]  ;
            master_axi_r_id     <= slave_axi_r_id    [4*3-1    : 4*2]  ;
            master_axi_r_data   <= slave_axi_r_data  [64*3-1   : 64*2] ;
            master_axi_r_resp   <= slave_axi_r_resp  [2*3-1    : 2*2]  ;
            master_axi_r_last   <= slave_axi_r_last  [1*3-1    : 1*2]  ;
            master_axi_r_valid  <= slave_axi_r_valid [1*3-1    : 1*2]  ;
            slave_axi_r_ready [1*3-1    :     1*2   ]      <= master_axi_r_ready   ;
        end 
        else begin
            slave_axi_ar_id        <= 12'b0      ;
            slave_axi_ar_addr      <= 192'b0     ;
            slave_axi_ar_len       <= 24'b0      ;
            slave_axi_ar_size      <= 9'b0       ;
            slave_axi_ar_burst     <= 6'b0       ;
            slave_axi_ar_cache     <= 12'b0      ;
            slave_axi_ar_prot      <= 9'b0       ;
            slave_axi_ar_qos       <= 12'b0      ;
            slave_axi_ar_valid     <= 3'b0       ;
            master_axi_ar_ready <= `ysyx22040228_ENABLE   ;
            master_axi_r_id     <= 4'b0000                ;
            master_axi_r_data   <= `ysyx22040228_ZEROWORD ;
            master_axi_r_resp   <= 2'b00                  ;
            master_axi_r_last   <= `ysyx22040228_ENABLE   ;
            master_axi_r_valid  <= `ysyx22040228_ENABLE   ;
            slave_axi_r_ready      <= 3'b0       ;
        end 
    end
    
endmodule

