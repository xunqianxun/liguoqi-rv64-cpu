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
    reg   [`ysyx22040228_REGBUS]   car_mtime_l;
    reg   [`ysyx22040228_REGBUS]   csr_mtime_h;
    wire  [`ysyx22040228_REGBUS]   csr_mtime_l_nxt   ;
    wire  [`ysyx22040228_REGBUS]   csr_mtime_h_nxt   ;
    wire                           csr_mtime_l_r_ena ;
    wire                           csr_mtime_h_r_ena ;
    wire                           csr_mtime_l_w_ena ;
    wire                           csr_mtime_h_w_ena ;  
    wire      [63:0]               wmask             ;
    assign wmask = {{8{time_axi_w_strb[7]}}, {8{time_axi_w_strb[6]}}, {8{time_axi_w_strb[5]}}, {8{time_axi_w_strb[4]}}, {8{time_axi_w_strb[3]}},
                    {8{time_axi_w_strb[2]}}, {8{time_axi_w_strb[1]}}, {8{time_axi_w_strb[0]}}};                      

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)begin
            car_mtime_l <= `ysyx22040228_ZEROWORD ;
            csr_mtime_h <= `ysyx22040228_ZEROWORD ;
        end
        else begin
            car_mtime_l <= csr_mtime_l_nxt        ;
            csr_mtime_h <= csr_mtime_h_nxt        ;
        end 
    end

    //---------------------------shake hande------------------------------//
    wire aw_shakehand ;
    wire w_shakehand  ;
    wire b_shankhand  ;
    wire mode_right   ;
    assign aw_shakehand = time_axi_aw_valid && time_axi_aw_ready  ;
    assign w_shakehand  = time_axi_w_valid  && time_axi_w_ready   ;
    assign b_shankhand  = time_axi_b_valid  && time_axi_b_ready   ;

    //---------------------------signed check-----------------------------//
    assign mode_right        = (time_axi_aw_len == 8'd0) && (time_axi_aw_size == `AXI_SIZE_BYTES_8) && (time_axi_aw_burst == `AXI_BURST_TYPE_INCR) && (time_axi_aw_cache == `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE) && (time_axi_aw_prot == `AXI_PROT_UNPRIVILEGED_ACCESS) && (time_axi_aw_qos == 4'b0000);
    assign csr_mtime_l_w_ena = mode_right && w_shakehand && aw_shakehand && (time_axi_aw_addr == `ysyx22040228_MTIMECMP);
    assign csr_mtime_h_w_ena = mode_right && w_shakehand && aw_shakehand && (time_axi_aw_addr == `ysyx22040228_MTIME   );
    assign csr_mtime_l_nxt   = csr_mtime_l_w_ena ? ((wmask & time_axi_w_data) | (~wmask & (car_mtime_l))) : (car_mtime_l + 1);
    assign csr_mtime_h_nxt   = csr_mtime_h_w_ena ? ((wmask & time_axi_w_data) | (~wmask & (csr_mtime_h))) : csr_mtime_h      ;
    assign time_axi_aw_ready = time_axi_aw_valid && time_axi_w_valid && mode_right     ;
    assign time_axi_w_ready  = time_axi_aw_valid && time_axi_w_valid && time_axi_w_last;
    assign time_interrupt    = (car_mtime_l>= csr_mtime_h) ? 1'b1 : 1'b0 ;

    //---------------------write state check------------------------------//
    /* verilator lint_off UNOPTFLAT */
    reg [1:0] state_time_m;
    reg [1:0] state_time_m_nxt;
    /* verilator lint_on UNOPTFLAT */
    always @(posedge clk) begin
        if(rst == `ysyx22040228_AXI_RSTENA) begin
            state_time_m <= `ysyx22040228_TIME_WAITE; 
        end 
        else begin
            state_time_m <= state_time_m_nxt        ;
        end 
    end

    always @(*) begin
        case (state_time_m)
            `ysyx22040228_TIME_WAITE: begin
                if(w_shakehand && aw_shakehand) begin  state_time_m_nxt = `ysyx22040228_TIME_RESP; end 
                else if(time_axi_w_valid | time_axi_aw_valid) begin state_time_m_nxt = `ysyx22040228_TIME_WRITE;end 
                else                            begin  state_time_m_nxt = `ysyx22040228_TIME_WAITE; end 
            end 
            `ysyx22040228_TIME_WRITE: begin
                if(w_shakehand && aw_shakehand) begin  state_time_m_nxt = `ysyx22040228_TIME_RESP ; end 
                else                            begin  state_time_m_nxt = `ysyx22040228_TIME_WRITE; end
            end 
            `ysyx22040228_TIME_RESP : begin
                if(b_shankhand)                 begin  state_time_m_nxt = `ysyx22040228_TIME_WAITE ; end 
                else                            begin  state_time_m_nxt = `ysyx22040228_TIME_RESP  ; end
            end 
            default:                            begin  state_time_m_nxt = `ysyx22040228_TIME_WRITE ; end 
        endcase
    end

    //wire respon
    reg [3:0] time_reg_id ;
    reg [1:0] time_reg_resp ;

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin 
            time_reg_id <= 4'b0000;
            time_reg_resp <= 2'b0 ;
        end 
        else begin
            time_reg_id <= time_axi_aw_id ;
            time_reg_resp <= 2'b00 ;
        end 
    end

    assign time_axi_b_valid = (state_time_m != `ysyx22040228_TIME_WRITE) && (state_time_m != `ysyx22040228_TIME_WAITE) ;
    assign time_axi_b_resp  = time_reg_resp ;
    assign time_axi_b_id    = (state_time_m == `ysyx22040228_TIME_RESP) ? time_reg_id : 4'b00000 ;
    //-------------------------read state channel------------------------//
    wire mode_right_r;
    wire ar_shakehand ;
    wire r_shankhand  ;
    wire [`ysyx22040228_REGBUS] time_csr_link;
    assign ar_shakehand = time_axi_ar_valid && time_axi_ar_ready  ;
    assign r_shankhand  = time_axi_r_valid  && time_axi_r_ready   ;
    assign mode_right_r      = (time_axi_ar_len == 8'd0) && (time_axi_ar_size == `AXI_SIZE_BYTES_8) && (time_axi_ar_burst == `AXI_BURST_TYPE_INCR) && (time_axi_ar_cache == `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE) && (time_axi_ar_prot == `AXI_PROT_UNPRIVILEGED_ACCESS) && (time_axi_ar_qos == 4'b0000);
    assign csr_mtime_l_r_ena = mode_right && ar_shakehand && (time_axi_ar_addr == `ysyx22040228_MTIMECMP);
    assign csr_mtime_h_r_ena = mode_right && ar_shakehand && (time_axi_ar_addr == `ysyx22040228_MTIME   );
    assign time_axi_ar_ready = time_axi_ar_valid && mode_right_r ;
    assign time_csr_link     = csr_mtime_l_r_ena ? car_mtime_l :
                               csr_mtime_h_r_ena ? csr_mtime_h :
                                    `ysyx22040228_AXI_ZERO_WORD;

    reg [1:0] state_time_r;
    reg [1:0] state_time_r_nxt;
        always @(posedge clk) begin
        if(rst == `ysyx22040228_AXI_RSTENA) begin
            state_time_r <= `ysyx22040228_TIME_WAITE; 
        end 
        else begin
            state_time_r <= state_time_r_nxt        ;
        end 
    end

    always @(*) begin
        case (state_time_r)
            `ysyx22040228_TIME_WAITE: begin
                if(ar_shakehand)                begin  state_time_r_nxt = `ysyx22040228_TIME_WIBK ; end 
                else if(time_axi_ar_valid)      begin  state_time_r_nxt = `ysyx22040228_TIME_READ ; end  
                else                            begin  state_time_r_nxt = `ysyx22040228_TIME_WAITE; end 
            end 
            `ysyx22040228_TIME_READ : begin
                if(ar_shakehand)                begin  state_time_r_nxt = `ysyx22040228_TIME_WIBK ; end 
                else                            begin  state_time_r_nxt = `ysyx22040228_TIME_READ ; end
            end 
            `ysyx22040228_TIME_WIBK : begin
                if(r_shankhand)                begin  state_time_r_nxt = `ysyx22040228_TIME_WAITE; end 
                else                            begin  state_time_r_nxt = `ysyx22040228_TIME_WIBK ; end
            end 
            default:                            begin  state_time_r_nxt = `ysyx22040228_TIME_WAITE; end 
        endcase
    end

    always @(*) begin
        if(state_time_r == `ysyx22040228_TIME_WIBK) begin
           time_axi_r_id = time_axi_ar_id;
           time_axi_r_data = time_csr_link;
           time_axi_r_last = 1'b1;
           time_axi_r_resp = 2'b00;
        end 
        else begin
           time_axi_r_id = 4'b0000;
           time_axi_r_data = `ysyx22040228_AXI_ZERO_WORD;
           time_axi_r_last = 1'b0;
           time_axi_r_resp = 2'b00;
        end 
    end
    assign time_axi_r_valid = (state_time_r == `ysyx22040228_TIME_WIBK);
endmodule
