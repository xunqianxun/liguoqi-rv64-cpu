`include "defines_axi4.v"
`include "defines.v"

// Burst types
`define AXI_BURST_TYPE_FIXED                                2'b00
`define AXI_BURST_TYPE_INCR                                 2'b01
`define AXI_BURST_TYPE_WRAP                                 2'b10
// Access permissions
`define AXI_PROT_UNPRIVILEGED_ACCESS                        3'b000
`define AXI_PROT_PRIVILEGED_ACCESS                          3'b001
`define AXI_PROT_SECURE_ACCESS                              3'b000
`define AXI_PROT_NON_SECURE_ACCESS                          3'b010
`define AXI_PROT_DATA_ACCESS                                3'b000
`define AXI_PROT_INSTRUCTION_ACCESS                         3'b100
// Memory types (AR)
`define AXI_ARCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_ARCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_ARCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b1110
`define AXI_ARCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_ARCACHE_WRITE_BACK_NO_ALLOCATE                  4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_ALLOCATE                4'b1111
`define AXI_ARCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111
// Memory types (AW)
`define AXI_AWCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_AWCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_AWCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1110
`define AXI_AWCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_AWCACHE_WRITE_BACK_NO_ALLOCATE                  4'b0111
`define AXI_AWCACHE_WRITE_BACK_READ_ALLOCATE                4'b0111
`define AXI_AWCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1111
`define AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111

`define AXI_SIZE_BYTES_1                                    3'b000
`define AXI_SIZE_BYTES_2                                    3'b001
`define AXI_SIZE_BYTES_4                                    3'b010
`define AXI_SIZE_BYTES_8                                    3'b011
`define AXI_SIZE_BYTES_16                                   3'b100
`define AXI_SIZE_BYTES_32                                   3'b101
`define AXI_SIZE_BYTES_64                                   3'b110
`define AXI_SIZE_BYTES_128                                  3'b111

`define ysyx22040228_TIMER_IDLE     2'b00 
`define ysyx22040228_TIMER_HANDLR   2'b01
`define ysyx22040228_TIMER_HANDLW   2'b10
`define ysyx22040228_TIMER_RESP     2'b11

module clint (
    input    wire                                      clk                ,
    input    wire                                      rst                ,
    output   wire                                      time_interrupt     ,

    //-------------------------------------------------------------------//
    //                        time ensprtion                             //
    input    wire     [`ysyx22040228_ID_BUS   ]        time_axi_aw_id     , 
    input    wire     [`ysyx22040228_ADDR_BUS ]        time_axi_aw_addr   ,
    input    wire     [`ysyx22040228_LEN_BUS  ]        time_axi_aw_len    ,
    input    wire     [`ysyx22040228_SIZE_BUS ]        time_axi_aw_size   ,
    input    wire     [`ysyx22040228_BURST_BUS]        time_axi_aw_burst  ,
    input    wire     [`ysyx22040228_CACHE_BUS]        time_axi_aw_cache  ,
    inout    wire     [`ysyx22040228_PROT_BUS ]        time_axi_aw_prot   ,
    inout    wire     [`ysyx22040228_QOS_BUS  ]        time_axi_aw_qos    ,
    input    wire                                      time_axi_aw_valid  ,
    output   wire                                      time_axi_aw_ready  , 

    //write data channel
    input    wire     [`ysyx22040228_DATA_BUS ]        time_axi_w_data    ,
    input    wire     [`ysyx22040228_STRB_BUS ]        time_axi_w_strb    ,
    input    wire                                      time_axi_w_last    ,
    input    wire                                      time_axi_w_valid   ,
    output   wire                                      time_axi_w_ready   ,

    //write response channel
    output   reg      [`ysyx22040228_ID_BUS   ]        time_axi_b_id      ,
    output   reg      [`ysyx22040228_RESP_BUS ]        time_axi_b_resp    ,
    output   reg                                       time_axi_b_valid   ,
    input    wire                                      time_axi_b_ready   ,

    //read address channel
    input    wire     [`ysyx22040228_ID_BUS   ]        time_axi_ar_id     ,
    input    wire     [`ysyx22040228_ADDR_BUS ]        time_axi_ar_addr   ,
    input    wire     [`ysyx22040228_LEN_BUS  ]        time_axi_ar_len    ,
    input    wire     [`ysyx22040228_SIZE_BUS ]        time_axi_ar_size   ,
    input    wire     [`ysyx22040228_BURST_BUS]        time_axi_ar_burst  ,
    input    wire     [`ysyx22040228_CACHE_BUS]        time_axi_ar_cache  ,
    input    wire     [`ysyx22040228_PROT_BUS ]        time_axi_ar_prot   ,
    input    wire     [`ysyx22040228_QOS_BUS  ]        time_axi_ar_qos    ,
    input    wire                                      time_axi_ar_valid  ,
    output   wire                                      time_axi_ar_ready  ,

    //read data channel
    output   reg      [`ysyx22040228_ID_BUS   ]        time_axi_r_id      ,
    output   reg      [`ysyx22040228_DATA_BUS ]        time_axi_r_data    ,
    output   reg      [`ysyx22040228_RESP_BUS ]        time_axi_r_resp    ,
    output   reg                                       time_axi_r_last    ,
    output   reg                                       time_axi_r_valid   ,
    input    wire                                      time_axi_r_ready   
);


    reg     [63:0]           csr_mtime          ;
    reg     [63:0]           csr_mtimecmp       ;
    wire                     success_aw         ;
    assign                   success_aw  = time_axi_aw_ready && time_axi_aw_valid ;
    wire                     success_w                                            ;
    assign                   success_w   = time_axi_w_ready  && time_axi_w_ready  ;
    wire                     success_ar                                           ;
    assign                   success_ar  = time_axi_ar_ready && time_axi_ar_valid ;
    wire                     success_r                                            ;
    assign                   success_r   = time_axi_r_ready  && time_axi_r_valid  ;
    wire                     success_b                                            ;
    assign                   success_b   = time_axi_b_ready  && time_axi_b_valid  ;
    wire                     shankhand_successw                                      ;
    assign                   shankhand_successw = success_aw | success_w             ;
    wire                     shankhand_successr                                      ;
    assign                   shankhand_successr = success_ar                         ;
    wire                     resp_success                                            ;
    assign                   resp_success      = success_r | success_b               ;

    wire    [63:0]           wmask              ;
    assign                   wmask     = {{8{time_axi_w_strb[7]}}, {8{time_axi_w_strb[6]}}, {8{time_axi_w_strb[5]}}, {8{time_axi_w_strb[4]}}, 
                                         {8{time_axi_w_strb[3]}}, {8{time_axi_w_strb[2]}}, {8{time_axi_w_strb[1]}}, {8{time_axi_w_strb[0]}}};  

    reg     [1:0]            timer_state        ;
    reg     [1:0]            timer_state_n      ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)
            timer_state <= `ysyx22040228_TIMER_IDLE;
        else 
            timer_state <= timer_state_n ;
    end

    always @(*) begin
        case (timer_state)
            `ysyx22040228_TIMER_IDLE: begin
                if(shankhand_successw) 
                    timer_state_n = `ysyx22040228_TIMER_HANDLW ;
                else if(shankhand_successr)
                    timer_state_n = `ysyx22040228_TIMER_HANDLR ;
                else 
                    timer_state_n = `ysyx22040228_TIMER_IDLE  ;
            end  
            `ysyx22040228_TIMER_HANDLR: begin
                timer_state_n = `ysyx22040228_TIMER_RESP  ;
            end 
            `ysyx22040228_TIMER_HANDLW: begin
                timer_state_n = `ysyx22040228_TIMER_RESP ;
            end 
            `ysyx22040228_TIMER_RESP : begin
                if(resp_success)
                    timer_state_n = `ysyx22040228_TIMER_IDLE ;
                else 
                    timer_state_n = `ysyx22040228_TIMER_IDLE ;
            end 
            default: timer_state_n = `ysyx22040228_TIMER_IDLE ; 
        endcase
    end

    assign time_axi_aw_ready = 1'b1  ;
    assign time_axi_w_ready  = 1'b1  ;

    // reg    [63:0]  csrmtime_temp     ;
    // reg    [63:0]  csrmtimecmp_temp  ;
    // reg    [3:0 ]  timeraw_id_temp   ;
    // reg    [3:0]   timerar_id_temp   ;
    // reg            read_csrmtime     ;
    // reg            read_csrmtimecmp  ;
    // always @(posedge clk) begin
    //     if(timer_state == `ysyx22040228_TIMER_HANDLW)begin
    //         if(time_axi_aw_addr == `ysyx22040228_MTIME) begin
    //             csrmtime_temp <= time_axi_w_data        ;
    //             csrmtimecmp_temp <= csrmtimecmp_temp + 1;
    //             timeraw_id_temp  <= time_axi_aw_id      ;
    //         end 
    //         else begin
    //             csrmtimecmp_temp <= time_axi_w_data     ;
    //             timeraw_id_temp  <= time_axi_aw_id      ;
    //         end 
    //     end 
    //     else if(timer_state == `ysyx22040228_TIMER_HANDLR) begin
    //         if(time_axi_aw_addr == `ysyx22040228_MTIME) begin
    //             csrmtimecmp_temp <= csrmtimecmp_temp + 1;
    //             read_csrmtime    <= 1'b1                ;
    //         end 
    //         else begin
    //             csrmtimecmp_temp <= csrmtimecmp_temp + 1;
    //             read_csrmtimecmp <= 1'b1                ;
    //         end 
    //         `ysyx22040228_TIMER_RESP: begin
                
    //         end 
    //     end 
    // end
    wire   csr_mtime_readena                                                                  ;
    assign csr_mtime_readena    = success_ar && (time_axi_ar_addr == `ysyx22040228_MTIME)     ;
    wire   csr_mtimecmp_readena                                                               ;
    assign csr_mtimecmp_readena = success_ar && (time_axi_ar_addr == `ysyx22040228_MTIMECMP)  ;

    wire   csr_mtime_writeena                                                                              ;
    assign csr_mtime_writeena     = success_aw && success_w && (time_axi_aw_addr == `ysyx22040228_MTIME)   ;
    wire   csr_mtimecmp_writeena                                                                           ;
    assign csr_mtimecmp_writeena  = success_aw && success_w && (time_axi_aw_addr == `ysyx22040228_MTIMECMP);

    

endmodule

