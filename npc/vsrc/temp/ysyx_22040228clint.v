`include "ysyx_22040228defines_axi4.v"
`include "ysyx_22040228defines.v"

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
`define ysyx22040228_TIMER_HANDL    2'b01
`define ysyx22040228_TIMER_RESPW    2'b10
`define ysyx22040228_TIMER_RESPR    2'b11
/* verilator lint_off UNUSED */
module ysyx_22040228clint (
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
    output   wire     [`ysyx22040228_ID_BUS   ]        time_axi_b_id      ,
    output   wire     [`ysyx22040228_RESP_BUS ]        time_axi_b_resp    ,
    output   wire                                      time_axi_b_valid   ,
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
    output   wire     [`ysyx22040228_ID_BUS   ]        time_axi_r_id      ,
    output   wire     [`ysyx22040228_DATA_BUS ]        time_axi_r_data    ,
    output   wire     [`ysyx22040228_RESP_BUS ]        time_axi_r_resp    ,
    output   wire                                      time_axi_r_last    ,
    output   wire                                      time_axi_r_valid   ,
    input    wire                                      time_axi_r_ready   
);


    reg     [63:0]           csr_mtime          ;
    reg     [63:0]           csr_mtimecmp       ;
    assign                   time_interrupt = (csr_mtime >= csr_mtimecmp)         ;

    wire    [63:0]           wmask              ;
    assign                   wmask     = {{8{time_axi_w_strb[7]}}, {8{time_axi_w_strb[6]}}, {8{time_axi_w_strb[5]}}, {8{time_axi_w_strb[4]}}, 
                                         {8{time_axi_w_strb[3]}}, {8{time_axi_w_strb[2]}}, {8{time_axi_w_strb[1]}}, {8{time_axi_w_strb[0]}}};  

    reg [2:0] time_write ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            time_write <= 3'b000 ;
        end 
        else begin
                case (time_write)
                    3'b000 : begin
                        if(time_axi_aw_valid) 
                            time_write <= 3'b001 ;
                        else 
                            time_write <= 3'b000 ;
                    end 
                    3'b001 : begin
                        if(time_axi_w_ready & time_axi_w_valid & time_axi_w_last)
                            time_write <= 3'b010 ;
                        else begin
                            time_write <= 3'b001;
                        end 
                    end 
                    3'b010 : begin
                        if(time_axi_b_ready) 
                            time_write <= 3'b100 ;
                        else 
                            time_write <= 3'b10 ;
                    end
                    3'b100 : begin
                       time_write <= 3'b000 ; 
                    end 
                    default: time_write <= 3'b000 ;
                endcase
        end 
    end

    reg [1:0] time_read ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            time_read <= 2'b00 ;
        end 
        else begin
                case (time_read) 
                    2'b00 : begin
                        if(time_axi_ar_valid & time_axi_ar_ready)
                            time_read <= 2'b01 ;
                        else 
                            time_read <= 2'b00 ;
                    end 
                    2'b01 : begin
                        if(time_axi_r_ready)
                            time_read <= 2'b10 ;
                        else
                            time_read <= 2'b01 ;
                    end 
                    2'b10 : begin
                        time_read <= 2'b00 ;
                    end 
                    default: time_read <= 2'b00 ;
                endcase
        end 
    end
    reg  [63:0] temp_mtime_r ;
    assign time_axi_aw_ready = 1'b1 & time_axi_aw_valid ;
    assign time_axi_w_ready = 1'b1 & time_axi_w_valid ;
    assign time_axi_b_valid = (time_write == 3'b100) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE ;
    assign time_axi_b_id    = (time_write == 3'b100) ? 4'b0010 : 4'b0000 ;
    assign time_axi_b_resp = 2'b00 ;

    assign time_axi_ar_ready = 1'b1 & time_axi_ar_valid ;
    assign time_axi_r_valid = (time_read == 2'b10) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE ;
    assign time_axi_r_data  = (time_read == 2'b10) ? temp_mtime_r : 64'h0                      ;
    assign time_axi_r_last  = (time_read == 2'b10) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE ;
    assign time_axi_r_id    = (time_write == 3'b100) ? 4'b0010 : 4'b0000 ; 
    assign time_axi_r_resp  = 2'b00 ;

    




    wire   csr_mtime_readena                                                                                               ;
    assign csr_mtime_readena    = (time_axi_ar_valid & time_axi_ar_ready) && (time_axi_ar_addr == `ysyx22040228_MTIME)     ;
    wire   csr_mtimecmp_readena                                                                                            ;
    assign csr_mtimecmp_readena = (time_axi_ar_valid & time_axi_ar_ready) && (time_axi_ar_addr == `ysyx22040228_MTIMECMP)  ;

    wire   csr_mtime_writeena                                                                                                              ;
    assign csr_mtime_writeena     = (time_axi_w_ready & time_axi_w_valid & time_axi_w_last) && (time_axi_aw_addr == `ysyx22040228_MTIME)   ;
    wire   csr_mtimecmp_writeena                                                                                                            ;
    assign csr_mtimecmp_writeena  =  (time_axi_w_ready & time_axi_w_valid & time_axi_w_last) && (time_axi_aw_addr == `ysyx22040228_MTIMECMP);


    wire   [63:0] csr_mtime_temp    ;
    wire   [63:0] csr_mtimecmp_temp ;
    assign        csr_mtime_temp    = csr_mtime_writeena    ? ((wmask & time_axi_w_data) | (~wmask & (csr_mtime))) : (csr_mtime + 1);
    assign        csr_mtimecmp_temp = csr_mtimecmp_writeena ? ((wmask & time_axi_w_data) | (~wmask & (csr_mtimecmp))) : csr_mtimecmp  ;

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            csr_mtime         <= `ysyx22040228_ZEROWORD ;
            csr_mtimecmp      <= `ysyx22040228_ZEROWORD ;
        end 
        else begin
            csr_mtime         <= csr_mtime_temp         ;
            csr_mtimecmp      <= csr_mtimecmp_temp      ;
        end 
    end

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            temp_mtime_r <= 64'h0 ;
        end 
        else if(csr_mtime_readena) begin
            temp_mtime_r <= csr_mtime ;
        end 
        else if(csr_mtimecmp_readena) begin
            temp_mtime_r <= csr_mtimecmp  ;
        end 
    end

endmodule

