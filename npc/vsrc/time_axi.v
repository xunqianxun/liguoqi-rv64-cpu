`include "defines_axi.v"
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

module time_axi (
    input    wire                                      clk                ,
    input    wire                                      rst                ,
    output   wire                                      time_interrupt     ,

    //-------------------------------------------------------------------//
    //                        time ensprtion                             //
    input    wire     [`ysyx22040228_ID       ]        time_axi_aw_id     , 
    input    wire     [`ysyx22040228_ADDR     ]        time_axi_aw_addr   ,
    input    wire     [`ysyx22040228_LEN      ]        time_axi_aw_len    ,
    input    wire     [`ysyx22040228_SIZE     ]        time_axi_aw_size   ,
    input    wire     [`ysyx22040228_BURST    ]        time_axi_aw_burst  ,
    input    wire     [`ysyx22040228_LOCK     ]        time_axi_aw_lock   ,
    input    wire     [`ysyx22040228_CACHE    ]        time_axi_aw_cache  ,
    inout    wire     [`ysyx22040228_PROT     ]        time_axi_aw_prot   ,
    inout    wire     [`ysyx22040228_QOS      ]        time_axi_aw_qos    ,
    input    wire     [`ysyx22040228_REGION   ]        time_axi_aw_region ,
    input    wire     [`ysyx22040228_USER     ]        time_axi_aw_user   ,
    input    wire                                      time_axi_aw_valid  ,
    output   wire                                      time_axi_aw_ready  , 

    //write data channel
    input    wire     [`ysyx22040228_ID       ]        time_axi_w_id      ,
    input    wire     [`ysyx22040228_DATA     ]        time_axi_w_data    ,
    input    wire     [`ysyx22040228_STRB     ]        time_axi_w_strb    ,
    input    wire     [`ysyx22040228_LAST     ]        time_axi_w_last    ,
    input    wire     [`ysyx22040228_USER     ]        time_axi_w_user    ,
    input    wire                                      time_axi_w_valid   ,
    output   wire                                      time_axi_w_ready   ,

    //write response channel
    output   wire     [`ysyx22040228_ID       ]        time_axi_b_id      ,
    output   wire     [`ysyx22040228_RESP     ]        time_axi_b_resp    ,
    output   wire     [`ysyx22040228_USER     ]        time_axi_b_user    ,
    output   wire                                      time_axi_b_valid   ,
    input    wire                                      time_axi_b_ready   ,

    //read address channel
    input    wire     [`ysyx22040228_ID       ]        time_axi_ar_id     ,
    input    wire     [`ysyx22040228_ADDR     ]        time_axi_ar_addr   ,
    input    wire     [`ysyx22040228_LEN      ]        time_axi_ar_len    ,
    input    wire     [`ysyx22040228_SIZE     ]        time_axi_ar_size   ,
    input    wire     [`ysyx22040228_BURST    ]        time_axi_ar_burst  ,
    input    wire     [`ysyx22040228_LOCK     ]        time_axi_ar_lock   ,
    input    wire     [`ysyx22040228_CACHE    ]        time_axi_ar_cache  ,
    input    wire     [`ysyx22040228_PROT     ]        time_axi_ar_prot   ,
    input    wire     [`ysyx22040228_QOS      ]        time_axi_ar_qos    ,
    input    wire     [`ysyx22040228_REGION   ]        time_axi_ar_region ,
    inout    wire     [`ysyx22040228_USER     ]        time_axi_ar_user   ,
    input    wire                                      time_axi_ar_valid  ,
    output   wire                                      time_axi_ar_ready  ,

    //read data channel
    output   wire     [`ysyx22040228_ID       ]        time_axi_r_id      ,
    output   wire     [`ysyx22040228_DATA     ]        time_axi_r_data    ,
    output   wire     [`ysyx22040228_RESP     ]        time_axi_r_resp    ,
    output   wire     [`ysyx22040228_LAST     ]        time_axi_r_last    ,
    output   wire     [`ysyx22040228_USER     ]        time_axi_r_user    ,
    output   wire                                      time_axi_r_valid   ,
    input    wire                                      time_axi_r_ready   ,
);
    reg   [`ysyx22040228_REGBUS]   car_mtime_l;
    reg   [`ysyx22040228_REGBUS]   csr_mtime_h;
    wire                           csr_mtime_l_r_ena ;
    wire                           csr_mtine_h_r_ena ;
    wire                           csr_mtime_l_w_ena ;
    wire                           csr_mtine_h_w_ena ;                       

    //---------------------------shake hande------------------------------//
    wire aw_shakehand ;
    wire w_shakehand  ;
    wire mode_right   ;
    aw_shakehand = time_axi_aw_valid && time_axi_aw_ready  ;
    w_shakehand  = time_axi_w_valid  && time_axi_w_ready   ;

    //---------------------------signed check-----------------------------//
    assign mode_right        = (time_axi_aw_len == 8'd0) && (time_axi_aw_size == `AXI_SIZE_BYTES_64) && (time_axi_aw_burst == `AXI_BURST_TYPE_INCR) && (time_axi_aw_cache == `AXI_ARCACHE_DEVICE_NON_BUFFERABLE) && (time_axi_aw_prot == `AXI_PROT_UNPRIVILEGED_ACCESS) && (time_axi_aw_qos == 4'b0000);
    assign csr_mtime_l_w_ena = mode_right && w_shakehand && aw_shakehand && (time_axi_aw_addr == `ysyx22040228_CSR_MTIME_L);
    assign csr_mtime_h_w_ena = mode_right && w_shakehand && aw_shakehand && (time_axi_aw_addr == `ysyx22040228_CSR_MTIME_H);
    assign car_mtime_l       = csr_mtime_l_w_ena ? time_axi_w_data : (car_mtime_l + 1);
    assign csr_mtime_h       = csr_mtime_h_w_ena ? time_axi_w_data : csr_mtime_h      ;
    assign time_axi_aw_ready = time_axi_aw_valid && time_axi_w_valid && mode_right     ;
    assign time_axi_w_ready  = time_axi_aw_valid && time_axi_w_valid && time_axi_w_last;
    assign time_interrupt    = (csr_mtime_l > csr_mtime_h) ? 1'b1 ; 1'b0 ;

    //---------------------write state check------------------------------//
    reg [1:0] state_time_m;
    reg [1:0] state_time_m_nxt;
    always @(*) begin
        if(rst == `ysyx22040228_AXI_RSTENA) begin
            state_time_m = `ysyx22040228_TIME_WAITE; 
        end 
        else begin
            state_time_m = state_time_m_nxt        ;
        end 
    end

    always @(*) begin
        case (state_time_m)
            `ysyx22040228_TIME_WAITE: begin
                if(w_shakehand && aw_shakehand) begin  state_time_m_nxt = `ysyx22040228_TIME_WRITE; end 
                else                            begin  state_time_m_nxt = `ysyx22040228_TIME_WAITE; end 
            end 
            `ysyx22040228_TIME_WRITE: begin
                if(w_shakehand && aw_shakehand) begin  state_time_m_nxt = `ysyx22040228_TIME_RESP ; end 
                else                            begin  state_time_m_nxt = `ysyx22040228_TIME_WRITE; end
            end 
            `ysyx22040228_TIME_RESP : begin
                if( |time_axi_b_valid)          begin  state_time_m_nxt = `ysyx22040228_TIME_RESP ; end 
                else if( |time_axi_b_ready)     begin  state_time_m_nxt = `ysyx22040228_TIME_WAITE; end
            end 
            default:                            begin  state_time_m_nxt = `ysyx22040228_TIME_WAITE; end 
        endcase
    end

    //wire respon 
    always @(*) begin
        if(state_time_m_nxt = `ysyx22040228_TIME_RESP ) begin 
            time_axi_b_id    = time_axi_w_id ;
            time_axi_b_resp  = `AXI_PROT_DATA_ACCESS ;
            time_axi_b_valid = 1'b1;
        end 
        else begin
            time_axi_b_id    = 4'b0000 ;
            time_axi_b_resp  = `AXI_PROT_DATA_ACCESS ;
            time_axi_b_valid = 1'b0;
        end 
    end

    //-------------------------read state channel------------------------//
    wire mode_right_r;
    wire ar_shakehand ;
    wire [`ysyx22040228_REGBUS] time_csr_link;
    ar_shakehand = time_axi_ar_valid && time_axi_ar_ready  ;
    assign mode_right_r      = (time_axi_ar_len == 8'd0) && (time_axi_ar_size == `AXI_SIZE_BYTES_64) && (time_axi_ar_burst == `AXI_BURST_TYPE_INCR) && (time_axi_ar_cache == `AXI_ARCACHE_DEVICE_NON_BUFFERABLE) && (time_axi_ar_prot == `AXI_PROT_UNPRIVILEGED_ACCESS) && (time_axi_ar_qos == 4'b0000);
    assign csr_mtime_l_w_ena = mode_right && ar_shakehand && (time_axi_ar_addr == `ysyx22040228_CSR_MTIME_L);
    assign csr_mtime_h_w_ena = mode_right && ar_shakehand && (time_axi_ar_addr == `ysyx22040228_CSR_MTIME_H);
    assign time_axi_ar_ready = time_axi_ar_valid && mode_right_r ;
    assign time_csr_link     = csr_mtime_l_w_ena ? car_mtime_l :
                               csr_mtime_h_w_ena ? car_mtime_h :
                                    `ysyx22040228_AXI_ZERO_WORD;

    reg [1:0] state_time_r;
    reg [1:0] state_time_r_nxt;
        always @(*) begin
        if(rst == `ysyx22040228_AXI_RSTENA) begin
            state_time_r = `ysyx22040228_TIME_WAITE; 
        end 
        else begin
            state_time_r = state_time_r_nxt        ;
        end 
    end

    always @(*) begin
        case (state_time_r)
            `ysyx22040228_TIME_WAITE: begin
                if(ar_shakehand)                begin  state_time_r_nxt = `ysyx22040228_TIME_READ ; end 
                else                            begin  state_time_r_nxt = `ysyx22040228_TIME_WAITE; end 
            end 
            `ysyx22040228_TIME_READ : begin
                if(ar_shakehand)                begin  state_time_m_nxt = `ysyx22040228_TIME_WIBK ; end 
                else                            begin  state_time_m_nxt = `ysyx22040228_TIME_READ ; end
            end 
            `ysyx22040228_TIME_WIBK : begin
                if( |time_axi_r_ready)          begin  state_time_m_nxt = `ysyx22040228_TIME_WAITE; end 
                else                            begin  state_time_m_nxt = `ysyx22040228_TIME_WIBK ; end
            end 
            default:                            begin  state_time_m_nxt = `ysyx22040228_TIME_WAITE; end 
        endcase
    end

    always @(*) begin
        if(state_time_r == `ysyx22040228_TIME_WIBK) begin
           time_axi_r_id = time_axi_ar_id;
           time_axi_r_data = time_csr_link;
           time_axi_r_last = 1'b1;
           time_axi_r_resp = `AXI_PROT_DATA_ACCESS;
        end 
        else begin
           time_axi_r_id = 4'b0000;
           time_axi_r_data = `ysyx22040228_AXI_ZERO_WORD;
           time_axi_r_last = 1'b0;
           time_axi_r_resp = `AXI_PROT_DATA_ACCESS;
        end 
    end
    
endmodule
