/************************************************************
Author:LiGuoqi
Name:SocTOp.v
Function:top module of this soc
************************************************************/
`include "./vsrc/arbitrate.v"
`include "./vsrc/d_cache1.v"
`include "./vsrc/i_cache1.v"
`include "./vsrc/rvcpu.v"
`include "./vsrc/defines_axi4.v"
`include "./vsrc/defines.v"
module SocTop (
    input            wire                                    clk                  ,
    input            wire                                    rst                  ,
   //-----------------------------AXI--------------------------------------------//
   //----------------------write address cahnnel---------------------------------//
    output      wire       [`ysyx22040228_ID_BUS]            out_axi_aw_id        ,
    output      wire       [`ysyx22040228_ADDR_BUS]          out_axi_aw_addr      ,
    output      wire       [`ysyx22040228_LEN_BUS]           out_axi_aw_len       ,
    output      wire       [`ysyx22040228_SIZE_BUS]          out_axi_aw_size      ,
    output      wire       [`ysyx22040228_BURST_BUS]         out_axi_aw_burst     ,
    output      wire       [`ysyx22040228_CACHE_BUS]         out_axi_aw_cache     ,
    output      wire       [`ysyx22040228_PROT_BUS]          out_axi_aw_port      ,
    output      wire       [`ysyx22040228_QOS_BUS]           out_axi_aw_qos       ,
    output      wire                                         out_axi_aw_valid     ,
    input       wire                                         out_axi_aw_ready     ,

    //----------------------write data channel-----------------------------------//
    output      wire       [`ysyx22040228_DATA_BUS]          out_axi_w_data       ,
    output      wire       [`ysyx22040228_STRB_BUS]          out_axi_w_strb       ,
    output      wire                                         out_axi_w_last       ,
    output      wire                                         out_axi_w_valid      ,
    input       wire                                         out_axi_w_ready      ,

    //-----------------------write response channel------------------------------//
    input       wire       [`ysyx22040228_ID_BUS]            out_axi_b_id         ,
    input       wire       [`ysyx22040228_RESP_BUS]          out_axi_b_resp       ,
    input       wire                                         out_axi_b_valid      ,
    output      wire                                         out_axi_b_ready      ,

    //------------------------read address channel-------------------------------//
    output      wire       [`ysyx22040228_ID_BUS]            out_axi_ar_id        ,
    output      wire       [`ysyx22040228_ADDR_BUS]          out_axi_ar_addr      ,
    output      wire       [`ysyx22040228_LEN_BUS]           out_axi_ar_len       ,
    output      wire       [`ysyx22040228_SIZE_BUS]          out_axi_ar_size      ,
    output      wire       [`ysyx22040228_BURST_BUS]         out_axi_ar_burst     ,
    output      wire       [`ysyx22040228_CACHE_BUS]         out_axi_ar_cache     ,
    output      wire       [`ysyx22040228_PROT_BUS]          out_axi_ar_prot      ,
    output      wire       [`ysyx22040228_QOS_BUS]           out_axi_ar_qos       ,
    output      wire                                         out_axi_ar_valid     ,
    input       wire                                         out_axi_ar_ready     ,

    //------------------------read data channel----------------------------------//
    input       wire       [`ysyx22040228_ID_BUS]            out_axi_r_id         ,
    input       wire       [`ysyx22040228_DATA_BUS]          out_axi_r_data       ,
    input       wire       [`ysyx22040228_RESP_BUS]          out_axi_r_resp       ,
    input       wire                                         out_axi_r_last       ,
    input       wire                                         out_axi_r_valid      ,
    output      wire                                         out_axi_r_ready           
);
  
    //-----------------------------wire about rvcpu------------------------------//
    
    wire  [63:0]    rvcpu_inst_addr  ;
    wire            rvcpu_inst_ena   ;
    wire            rvcpu_inst_ready ;
    wire  [63:0]    rvcpu_data_addr  ;
    wire  [7:0 ]    rvcpu_wmask      ;
    wire  [63:0]    rvcpu_data_o     ;
    wire            rvcpu_we         ;
    wire            rvcpu_re         ;

    wire  [63:0]    i_cache_inst_data;
    wire            i_cache_inst_valid;
    wire            i_cache_read_ena ;
    wire  [63:0]    i_cache_addr     ;  

    wire  [63:0]    d_cache_data_out ; 
    wire            d_cache_mem_finish;   
    wire  [63:0]    d_cache_out_addr ;
    wire  [63:0]    d_cache_out_data ;
    wire            d_cache_read_ena ;
    wire            d_cache_write_ena;  

    wire  [63:0]    arbitrate_d_data ;
    wire            arbitrate_d_ok   ;
    wire  [63:0]    arbitrate_i_data ;
    wire            arbitrate_i_ok   ;

    wire   time_init_sign       ;
    assign time_init_sign = 1'b0;

    wire   [`ysyx22040228_ID_BUS]    t_axi_aw_id    ;
    wire   [`ysyx22040228_ADDR_BUS]  t_axi_aw_addr  ;
    wire   [`ysyx22040228_LEN_BUS]   t_axi_aw_len   ;
    wire   [`ysyx22040228_SIZE_BUS]  t_axi_aw_size  ;
    wire   [`ysyx22040228_BURST_BUS] t_axi_aw_burst ;
    wire   [`ysyx22040228_CACHE_BUS] t_axi_aw_cache ;
    wire   [`ysyx22040228_PROT_BUS]  t_axi_aw_port  ;
    wire   [`ysyx22040228_QOS_BUS]   t_axi_aw_qos   ;
    wire                             t_axi_aw_ready ;
    wire                             t_axi_aw_valid ;

    wire   [`ysyx22040228_ID_BUS]    t_axi_w_id     ;
    wire   [`ysyx22040228_DATA_BUS]  t_axi_w_data   ;
    wire   [`ysyx22040228_STRB_BUS]  t_axi_w_strb   ;
    wire                             t_axi_w_last   ;
    wire                             t_axi_w_valid  ;
    wire                             t_axi_w_ready  ;

    wire   [`ysyx22040228_ID_BUS]    t_axi_b_id     ;
    wire   [`ysyx22040228_RESP_BUS]  t_axi_b_resp   ;
    wire                             t_axi_b_valid  ;
    wire                             t_axi_b_ready  ;

    wire   [`ysyx22040228_ID_BUS]    t_axi_ar_id    ;
    wire   [`ysyx22040228_ADDR_BUS]  t_axi_ar_addr  ;
    wire   [`ysyx22040228_LEN_BUS]   t_axi_ar_len   ;
    wire   [`ysyx22040228_SIZE_BUS]  t_axi_ar_size  ;
    wire   [`ysyx22040228_BURST_BUS] t_axi_ar_burst ;
    wire   [`ysyx22040228_CACHE_BUS] t_axi_ar_cache ;
    wire   [`ysyx22040228_PROT_BUS]  t_axi_ar_prot  ;
    wire   [`ysyx22040228_QOS_BUS]   t_axi_ar_qos   ;
    wire                             t_axi_ar_valid ;
    wire                             t_axi_ar_ready ;

    wire   [`ysyx22040228_ID_BUS]    t_axi_r_id     ;
    wire   [`ysyx22040228_DATA_BUS]  t_axi_r_data   ;
    wire   [`ysyx22040228_RESP_BUS]  t_axi_r_resp   ;
    wire                             t_axi_r_last   ;
    wire                             t_axi_r_valid  ;
    wire                             t_axi_r_ready  ;
    
    assign out_axi_aw_id    = t_axi_aw_id     ;
    assign out_axi_aw_addr  = t_axi_aw_addr   ;
    assign out_axi_aw_len   = t_axi_aw_len    ;
    assign out_axi_aw_size  = t_axi_aw_size   ;
    assign out_axi_aw_burst = t_axi_aw_burst  ;
    assign out_axi_aw_cache = t_axi_aw_cache  ;
    assign out_axi_aw_port  = t_axi_aw_port   ;
    assign out_axi_aw_qos   = t_axi_aw_qos    ;
    assign out_axi_aw_valid = t_axi_aw_valid  ;
    assign t_axi_aw_ready   = out_axi_aw_ready;

    assign out_axi_w_data   = t_axi_w_data    ;
    assign out_axi_w_strb   = t_axi_w_strb    ;
    assign out_axi_w_last   = t_axi_w_last    ;
    assign out_axi_w_valid  = t_axi_w_valid   ;
    assign t_axi_w_ready    = out_axi_w_ready ;

    assign t_axi_b_id       = out_axi_b_id    ;
    assign t_axi_b_resp     = out_axi_b_resp  ;
    assign t_axi_b_valid    = out_axi_b_valid ;
    assign out_axi_b_ready  = t_axi_b_ready   ;

    assign out_axi_ar_id    = t_axi_ar_id     ;
    assign out_axi_ar_addr  = t_axi_ar_addr   ;
    assign out_axi_ar_len   = t_axi_ar_len    ;
    assign out_axi_ar_size  = t_axi_ar_size   ;
    assign out_axi_ar_burst = t_axi_ar_burst  ;
    assign out_axi_ar_cache = t_axi_ar_cache  ;
    assign out_axi_ar_prot  = t_axi_ar_prot   ;
    assign out_axi_ar_qos   = t_axi_ar_qos    ;
    assign out_axi_ar_valid = t_axi_ar_valid  ;
    assign t_axi_ar_ready   = out_axi_ar_ready;

    assign t_axi_r_id       = out_axi_r_id    ;
    assign t_axi_r_data     = out_axi_r_data  ;
    assign t_axi_r_resp     = out_axi_r_resp  ;
    assign t_axi_r_last     = out_axi_r_last  ;
    assign t_axi_r_valid    = out_axi_r_valid ;
    assign out_axi_r_ready  = t_axi_r_ready   ;

    rvcpu rvcpu1 (
        .clk                 (clk                 ) ,
        .rst                 (rst                 ) ,
        
        .inst_addr           (rvcpu_inst_addr     ) ,
        .inst_ena            (rvcpu_inst_ena      ) ,
    
        .inst_ready          (rvcpu_inst_ready    ) ,
        .inst                (i_cache_inst_data   ) ,
        .bui_inst_valid      (i_cache_inst_valid  ) ,

        .data_addr           (rvcpu_data_addr     ) ,
        .wmask               (rvcpu_wmask         ) ,
        .data_o              (rvcpu_data_o        ) ,
        .data_i              (d_cache_data_out    ) ,
        .we                  (rvcpu_we            ) ,
        .re                  (rvcpu_re            ) ,
        .mem_finish          (d_cache_mem_finish  ) ,

        .timer_intr          (time_init_sign      )

    );

    icache1 i_cache12 (
        .clk                 (clk                 ) ,
        .rst                 (rst                 ) ,
        .inst_addr           (rvcpu_inst_addr     ) ,
        .inst_ena            (rvcpu_inst_ena      ) ,
        .inst_data           (i_cache_inst_data   ) ,
        .inst_valid          (i_cache_inst_valid  ) ,

        .cache_read_ena      (i_cache_read_ena    ) ,
        .cache_addr          (i_cache_addr        ) ,
        .cache_or_data       (arbitrate_i_data    ) ,
        .cache_in_ok         (arbitrate_i_ok      )                             
);
    
    d_cache1 d_cache13 (
        .clk                 (clk                ) ,
        .rst                 (rst                ) ,

        .mem_addr_i          (rvcpu_data_addr    ) ,
        .mem_data_i          (rvcpu_data_o       ) ,
        .mem_mask_i          (rvcpu_wmask        ) ,
        .mem_data_read_ena   (rvcpu_re           ) ,
        .mem_data_writ_ena   (rvcpu_we           ) ,

        .mem_data_out_cpu    (d_cache_data_out   ) ,
        .mem_data_finish     (d_cache_mem_finish ) ,

        // .in_dcache_addr      () ,
        // .in_dcache_ena       () ,

        .in_dcache_data      (arbitrate_d_data   ) ,
 
        .in_dcache_ok        (arbitrate_d_ok     ) ,
        .out_dcache_addr     (d_cache_out_addr   ) ,
        .out_dcache_data     (d_cache_out_data   ) ,
        .outr_dcache_ena     (d_cache_read_ena   ) ,
        .outw_dcache_ena     (d_cache_write_ena  )
    );

    wire d_cache_mask_gd = 8'b11111111 ;

    arbitrate arbitrate4(
        .clk                 (clk                ) ,
        .rst                 (rst                ) ,

        .d_cache_addr        (d_cache_out_addr   ) ,
        .d_cache_data        (d_cache_out_data   ) ,
        .d_cache_read_ena    (d_cache_read_ena   ) ,
        .d_cache_write_ena   (d_cache_write_ena  ) ,
        .d_cache_mask        (d_cache_mask_gd    ) ,
        .d_cache_data_o      (arbitrate_d_data   ) ,
        .d_cache_ok          (arbitrate_d_ok     ) ,

        .i_cache_addr        (i_cache_addr       ) ,
        .i_cache_ena         (i_cache_read_ena   ) ,
        .i_cache_data_o      (arbitrate_i_data   ) ,
        .i_cache_ok          (arbitrate_i_ok     ) ,

        .axi_aw_id           (t_axi_aw_id        ) ,
        .axi_aw_addr         (t_axi_aw_addr      ) ,
        .axi_aw_len          (t_axi_aw_len       ) ,
        .axi_aw_size         (t_axi_aw_size      ) ,
        .axi_aw_burst        (t_axi_aw_burst     ) ,
        .axi_aw_cache        (t_axi_aw_cache     ) ,
        .axi_aw_port         (t_axi_aw_port      ) ,
        .axi_aw_qos          (t_axi_aw_qos       ) ,
        .axi_aw_valid        (t_axi_aw_valid     ) ,
        .axi_aw_ready        (t_axi_aw_ready     ) ,

        .axi_w_data          (t_axi_w_data       ) ,
        .axi_w_strb          (t_axi_w_strb       ) ,
        .axi_w_last          (t_axi_w_last       ) ,
        .axi_w_valid         (t_axi_w_valid      ) ,
        .axi_w_ready         (t_axi_w_ready      ) ,

        .axi_b_id            (t_axi_b_id         ) ,
        .axi_b_resp          (t_axi_b_resp       ) ,
        .axi_b_valid         (t_axi_b_valid      ) ,
        .axi_b_ready         (t_axi_b_ready      ) ,

        .axi_ar_id           (t_axi_ar_id        ) ,
        .axi_ar_addr         (t_axi_ar_addr      ) ,
        .axi_ar_len          (t_axi_ar_len       ) ,
        .axi_ar_size         (t_axi_ar_size      ) ,
        .axi_ar_burst        (t_axi_ar_burst     ) ,
        .axi_ar_cache        (t_axi_ar_cache     ) ,
        .axi_ar_prot         (t_axi_ar_prot      ) ,
        .axi_ar_qos          (t_axi_ar_qos       ) ,
        .axi_ar_valid        (t_axi_ar_valid     ) ,
        .axi_ar_ready        (t_axi_ar_ready     ) ,

        //------------------------read data channel----------------------------------//
        .axi_r_id            (t_axi_r_id         ) ,
        .axi_r_data          (t_axi_r_data       ) ,
        .axi_r_resp          (t_axi_r_resp       ) ,
        .axi_r_last          (t_axi_r_last       ) ,
        .aix_r_valid         (t_axi_r_valid      ) ,
        .axi_r_ready         (t_axi_r_ready      )  
    );    

endmodule

