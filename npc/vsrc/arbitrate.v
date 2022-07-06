/************************************************************
Author:LiGuoqi
Name:arbitrate.v
Function:arbitrate i_cache and d_cache
************************************************************/
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

`define ysyx22040228_ARB_IDLE       3'b001  
`define ysyx22040228_ARB_DWRITE     3'b010
`define ysyx22040228_ARB_IREAD      3'b100
`define ysyx22040228_ARB_DREAD      3'b101



`include "./vsrc/defines.v"
`include "./vsrc/defines_axi4.v"
module arbitrate (
    //-----------------------------system----------------------------------------//
    input       wire                                         clk                  ,
    input       wire                                         rst                  ,
    //-----------------------------d_cache---------------------------------------//
    input       wire       [63:0]                            d_cache_addr         ,
    input       wire       [63:0]                            d_cache_data         ,
    input       wire       [3:0]                             d_cache_type         ,
    /* verilator lint_off UNUSED */
    input       wire                                         d_cache_resp         ,
    /* verilator lint_on UNUSED */
    output      reg        [63:0]                            d_cache_data_o       ,
    output      wire                                         d_cache_valid_       ,
    //----------------------------i_cache----------------------------------------//
    input       wire       [63:0]                            i_cache_addr         ,
    input       wire                                         i_cache_ena          ,
    input       wire                                         i_cache_resp         ,
    output      reg        [63:0]                            i_cache_data         ,
    output      wire                                         i_cache_valid_       ,
    //----------------------write address cahnnel--------------------------------//
    output      wire       [`ysyx22040228_ID_BUS]            axi_aw_id            ,
    output      wire       [`ysyx22040228_ADDR_BUS]          axi_aw_addr          ,
    output      wire       [`ysyx22040228_LEN_BUS]           axi_aw_len           ,
    output      wire       [`ysyx22040228_SIZE_BUS]          axi_aw_size          ,
    output      wire       [`ysyx22040228_BURST_BUS]         axi_aw_burst         ,
    output      wire       [`ysyx22040228_CACHE_BUS]         axi_aw_cache         ,
    output      wire       [`ysyx22040228_PROT_BUS]          axi_aw_port          ,
    output      wire       [`ysyx22040228_QOS_BUS]           axi_aw_qos           ,
    output      wire                                         axi_aw_valid         ,
    input       wire                                         axi_aw_ready         ,

    //----------------------write data channel-----------------------------------//
    output      wire       [`ysyx22040228_DATA_BUS]          axi_w_data           ,
    output      wire       [`ysyx22040228_STRB_BUS]          axi_w_strb           ,
    output      wire                                         axi_w_last           ,
    output      wire                                         axi_w_valid          ,
    input       wire                                         axi_w_ready          ,

    //-----------------------write response channel------------------------------//
    input       wire       [`ysyx22040228_ID_BUS]            axi_b_id             ,
    input       wire       [`ysyx22040228_RESP_BUS]          axi_b_resp           ,
    input       wire                                         axi_b_valid          ,
    output      wire                                         axi_b_ready          ,

    //------------------------read address channel-------------------------------//
    output      wire       [`ysyx22040228_ID_BUS]            axi_ar_id            ,
    output      wire       [`ysyx22040228_ADDR_BUS]          axi_ar_addr          ,
    output      wire       [`ysyx22040228_LEN_BUS]           axi_ar_len           ,
    output      wire       [`ysyx22040228_SIZE_BUS]          axi_ar_size          ,
    output      wire       [`ysyx22040228_BURST_BUS]         axi_ar_burst         ,
    output      wire       [`ysyx22040228_CACHE_BUS]         axi_ar_cache         ,
    output      wire       [`ysyx22040228_PROT_BUS]          axi_ar_prot          ,
    output      wire       [`ysyx22040228_QOS_BUS]           axi_ar_qos           ,
    output      wire                                         axi_ar_valid         ,
    input       wire                                         axi_ar_ready         ,

    //------------------------read data channel----------------------------------//
    input       wire       [`ysyx22040228_ID_BUS]            axi_r_id             ,
    input       wire       [`ysyx22040228_DATA_BUS]          axi_r_data           ,
    input       wire       [`ysyx22040228_RESP_BUS]          axi_r_resp           ,
    input       wire                                         axi_r_last           ,
    input       wire                                         axi_r_valid          ,
    output      wire                                         axi_r_ready           
);

    wire    read_dcache_shankhand  ;
    wire    write_dcache_shankhand ;
    wire    read_icache_shankhand  ;

    assign read_dcache_shankhand   = (~write_dcache_shankhand) && (~read_icache_shankhand) && ((d_cache_type == 4'b0010) || (d_cache_type == 4'b1000));
    assign write_dcache_shankhand  = (~read_dcache_shankhand)  && (~read_icache_shankhand) && ((d_cache_type == 4'b0001) || (d_cache_type == 4'b0100)); 
    assign read_icache_shankhand   = (~read_dcache_shankhand)  && (~write_dcache_shankhand)&& i_cache_ena ;

    reg  [2:0]    arbitrate_state ;
    reg  [2:0]    arbitrate_state_nxt ;

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)
            arbitrate_state <= `ysyx22040228_ARB_IDLE ;
        else 
            arbitrate_state <= arbitrate_state_nxt   ;
    end

    reg     dread_success ;
    reg     dwrite_success;
    reg     iread_success ;
    always @(*) begin
        case (arbitrate_state)
            `ysyx22040228_ARB_IDLE : begin
                if(read_dcache_shankhand)
                    arbitrate_state_nxt = `ysyx22040228_ARB_DREAD ;
                else if(write_dcache_shankhand)
                    arbitrate_state_nxt = `ysyx22040228_ARB_DWRITE;
                else if(read_icache_shankhand)
                    arbitrate_state_nxt = `ysyx22040228_ARB_IREAD ;
                else 
                    arbitrate_state_nxt = `ysyx22040228_ARB_IDLE  ;
            end 
            `ysyx22040228_ARB_DREAD : begin
                if(dread_success)
                    arbitrate_state_nxt = `ysyx22040228_ARB_IDLE  ;
                else 
                    arbitrate_state_nxt = `ysyx22040228_ARB_DREAD ;
            end 
            `ysyx22040228_ARB_DWRITE : begin
                if(dwrite_success)
                    arbitrate_state_nxt = `ysyx22040228_ARB_IDLE  ;
                else 
                    arbitrate_state_nxt = `ysyx22040228_ARB_DWRITE;
            end 
            `ysyx22040228_ARB_IREAD : begin
                if(dread_success)
                    arbitrate_state_nxt = `ysyx22040228_ARB_IDLE  ;
                else 
                    arbitrate_state_nxt = `ysyx22040228_ARB_IREAD ;
            end 
            default:  arbitrate_state_nxt = `ysyx22040228_ARB_IDLE  ;
        endcase
    end


    reg     [`ysyx22040228_ID_BUS]            dread_ar_id           ;
    reg     [`ysyx22040228_ADDR_BUS]          dread_ar_addr         ;
    reg     [`ysyx22040228_LEN_BUS]           dread_ar_len          ;
    reg     [`ysyx22040228_SIZE_BUS]          dread_ar_size         ;
    reg     [`ysyx22040228_BURST_BUS]         dread_ar_burst        ;
    reg     [`ysyx22040228_CACHE_BUS]         dread_ar_cache        ;
    reg     [`ysyx22040228_PROT_BUS]          dread_ar_prot         ;
    reg     [`ysyx22040228_QOS_BUS]           dread_ar_qos          ;
    reg                                       dread_ar_valid        ;

    reg                                       dread_cache_valid     ;
    wire                                      dread_arshankhand     ;
    wire                                      dread_r_ready         ;
    assign dread_r_ready = `ysyx22040228_ABLE                       ;
    assign dread_arshankhand = dread_ar_valid && axi_ar_ready       ;

    assign dread_success = (axi_r_id == 4'b0001) && dread_r_ready && axi_r_valid && axi_r_last && (axi_r_resp == 2'b00) ;
    always @(posedge clk) begin
        if(dread_success) begin
            dread_ar_id      <= 4'b0001             ;
            dread_ar_addr    <= `ysyx22040228_ZEROWORD   ;
            dread_ar_len     <= 8'b0                ;
            dread_ar_size    <= `AXI_SIZE_BYTES_8   ;
            dread_ar_burst   <= `AXI_BURST_TYPE_INCR;
            dread_ar_cache   <= `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE ;
            dread_ar_prot    <= `AXI_PROT_UNPRIVILEGED_ACCESS ;
            dread_ar_qos     <= 4'h0                ;
            dread_ar_valid   <= `ysyx22040228_ENABLE ;

            d_cache_data_o   <= axi_r_data          ;
            dread_cache_valid<= `ysyx22040228_ABLE  ;
        end 
        else if(dread_arshankhand) begin
            dread_ar_valid   <= `ysyx22040228_ENABLE ;
        end 
        else if(arbitrate_state == `ysyx22040228_ARB_DREAD) begin
            dread_ar_id      <= 4'b0001             ;
            dread_ar_addr    <= d_cache_addr        ;
            dread_ar_len     <= 8'b0                ;
            dread_ar_size    <= `AXI_SIZE_BYTES_8   ;
            dread_ar_burst   <= `AXI_BURST_TYPE_INCR;
            dread_ar_cache   <= `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE ;
            dread_ar_prot    <= `AXI_PROT_UNPRIVILEGED_ACCESS ;
            dread_ar_qos     <= 4'h0                ;
            dread_ar_valid   <= `ysyx22040228_ABLE  ;
        end 
        else begin
            d_cache_data_o   <= `ysyx22040228_ZEROWORD ;
            dread_cache_valid<= `ysyx22040228_ENABLE   ;
        end 
    end

    reg     [`ysyx22040228_ID_BUS]            iread_ar_id           ;
    reg     [`ysyx22040228_ADDR_BUS]          iread_ar_addr         ;
    reg     [`ysyx22040228_LEN_BUS]           iread_ar_len          ;
    reg     [`ysyx22040228_SIZE_BUS]          iread_ar_size         ;
    reg     [`ysyx22040228_BURST_BUS]         iread_ar_burst        ;
    reg     [`ysyx22040228_CACHE_BUS]         iread_ar_cache        ;
    reg     [`ysyx22040228_PROT_BUS]          iread_ar_prot         ;
    reg     [`ysyx22040228_QOS_BUS]           iread_ar_qos          ;
    reg                                       iread_ar_valid        ;


    reg                                       iread_cache_valid     ;
    wire                                      iread_r_ready         ;
    wire                                      iread_arshankhand     ;
    assign iread_r_ready = `ysyx22040228_ABLE                       ;
    assign iread_arshankhand = iread_ar_valid && axi_ar_ready       ;

    assign iread_success = (axi_r_id == 4'b0000) && iread_r_ready && axi_r_valid && axi_r_last && (axi_r_resp == 2'b00) ;
    always @(posedge clk) begin
        if(dread_success) begin
            iread_ar_id      <= 4'b0001             ;
            iread_ar_addr    <= `ysyx22040228_ZEROWORD   ;
            iread_ar_len     <= 8'b0                ;
            iread_ar_size    <= `AXI_SIZE_BYTES_8   ;
            iread_ar_burst   <= `AXI_BURST_TYPE_INCR;
            iread_ar_cache   <= `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE ;
            iread_ar_prot    <= `AXI_PROT_UNPRIVILEGED_ACCESS ;
            iread_ar_qos     <= 4'h0                ;
            iread_ar_valid   <= `ysyx22040228_ENABLE ;

            i_cache_data     <= axi_r_data          ;
            iread_cache_valid<= `ysyx22040228_ABLE  ;
        end 
        else if(iread_arshankhand) begin
            iread_ar_valid   <= `ysyx22040228_ENABLE ;
        end 
        else if(arbitrate_state == `ysyx22040228_ARB_DREAD) begin
            iread_ar_id      <= 4'b0000             ;
            iread_ar_addr    <= i_cache_addr        ;
            iread_ar_len     <= 8'b0                ;
            iread_ar_size    <= `AXI_SIZE_BYTES_8   ;
            iread_ar_burst   <= `AXI_BURST_TYPE_INCR;
            iread_ar_cache   <= `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE ;
            iread_ar_prot    <= `AXI_PROT_UNPRIVILEGED_ACCESS ;
            iread_ar_qos     <= 4'h0                ;
            iread_ar_valid   <= `ysyx22040228_ABLE  ;
        end 
        else begin
            i_cache_data     <= `ysyx22040228_ZEROWORD ;
            iread_cache_valid<= `ysyx22040228_ENABLE   ;
        end 
    end 


    reg     [`ysyx22040228_ID_BUS]            dwrite_aw_id            ;
    reg     [`ysyx22040228_ADDR_BUS]          dwrite_aw_addr          ;
    reg     [`ysyx22040228_LEN_BUS]           dwrite_aw_len           ;
    reg     [`ysyx22040228_SIZE_BUS]          dwrite_aw_size          ;
    reg     [`ysyx22040228_BURST_BUS]         dwrite_aw_burst         ;
    reg     [`ysyx22040228_CACHE_BUS]         dwrite_aw_cache         ;
    reg     [`ysyx22040228_PROT_BUS]          dwrite_aw_port          ;
    reg     [`ysyx22040228_QOS_BUS]           dwrite_aw_qos           ;
    reg                                       dwrite_aw_valid         ;

    reg     [`ysyx22040228_DATA_BUS]          dwrite_w_data           ;
    reg     [`ysyx22040228_STRB_BUS]          dwrite_w_strb           ;
    reg                                       dwrite_w_last           ;
    reg                                       dwrite_w_valid          ;
    reg                                       dwrite_cache_valid      ;

    wire                                      dwrite_b_ready          ; 
    wire                                      dwrite_awshankhand      ;
    wire                                      dwrite_wshankhand       ;
    assign dwrite_b_ready = `ysyx22040228_ABLE                        ;
    assign dwrite_awshankhand = dwrite_aw_valid && axi_aw_ready ;
    assign dwrite_wshankhand  = dwrite_w_valid  && axi_w_ready  ;
    assign dwrite_success     = dwrite_b_ready && axi_b_valid && (axi_b_id == 4'b0001) && (axi_b_resp == 2'b00) ;

    always @(posedge clk) begin
        if(dwrite_success) begin
            dwrite_aw_valid     <= `ysyx22040228_ENABLE;
            dwrite_w_valid      <= `ysyx22040228_ENABLE;
            dwrite_cache_valid  <= `ysyx22040228_ABLE  ;
        end 
        else if(dwrite_awshankhand && dwrite_wshankhand)begin
            dwrite_aw_valid     <= `ysyx22040228_ENABLE;
            dwrite_w_valid      <= `ysyx22040228_ENABLE;
        end 
        else if(arbitrate_state == `ysyx22040228_ARB_DWRITE) begin
            dwrite_aw_id        <= 4'b0001           ;
            dwrite_aw_addr      <= d_cache_addr      ;
            dwrite_aw_len       <= 8'd0              ;
            dwrite_aw_size      <= `AXI_SIZE_BYTES_8 ;
            dwrite_aw_burst     <= `AXI_BURST_TYPE_INCR;
            dwrite_aw_cache     <= `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE ;
            dwrite_aw_port      <= `AXI_PROT_UNPRIVILEGED_ACCESS ;
            dwrite_aw_qos       <= 4'h0              ;
            dwrite_aw_valid     <= `ysyx22040228_ABLE;
            dwrite_w_data       <= d_cache_data      ;
            dwrite_w_strb       <= 8'b11111111       ;
            dwrite_w_last       <= `ysyx22040228_ABLE;
            dwrite_w_valid      <= `ysyx22040228_ABLE;
        end 
        else begin
            dwrite_cache_valid  <= `ysyx22040228_ENABLE;
        end 
    end


    assign d_cache_valid_ = (arbitrate_state == `ysyx22040228_ARB_DREAD)  ? dread_cache_valid  : 
                            (arbitrate_state == `ysyx22040228_ARB_DWRITE) ? dwrite_cache_valid :
                                                                            `ysyx22040228_ENABLE;
    assign i_cache_valid_ = iread_cache_valid ;

    assign axi_aw_id      = dwrite_aw_id      ;
    assign axi_aw_addr    = dwrite_aw_addr    ;
    assign axi_aw_len     = dwrite_aw_len     ;
    assign axi_aw_size    = dwrite_aw_size    ;
    assign axi_aw_burst   = dwrite_aw_burst   ;
    assign axi_aw_cache   = dwrite_aw_cache   ;
    assign axi_aw_port    = dwrite_aw_port    ;
    assign axi_aw_qos     = dwrite_aw_qos     ;
    assign axi_aw_valid   = dwrite_aw_valid   ;

    assign axi_w_data     = dwrite_w_data     ;
    assign axi_w_strb     = dwrite_w_strb     ;
    assign axi_w_last     = dwrite_w_last     ;
    assign axi_w_valid    = dwrite_w_valid    ;

    assign axi_b_ready    = dwrite_b_ready    ;

    assign axi_ar_id      = (arbitrate_state == `ysyx22040228_ARB_IREAD) ? iread_ar_id       :
                            (arbitrate_state == `ysyx22040228_ARB_DREAD) ? dread_ar_id       :
                                                                            4'b0000          ;
    assign axi_ar_addr    = (arbitrate_state == `ysyx22040228_ARB_IREAD) ? iread_ar_addr     :
                            (arbitrate_state == `ysyx22040228_ARB_DREAD) ? dread_ar_addr     :
                                                                            64'h0            ;
    assign axi_ar_len     = (arbitrate_state == `ysyx22040228_ARB_IREAD) ? iread_ar_len      :
                            (arbitrate_state == `ysyx22040228_ARB_DREAD) ? dread_ar_len      :
                                                                            8'b0             ;
    assign axi_ar_size    = (arbitrate_state == `ysyx22040228_ARB_IREAD) ? iread_ar_size     :
                            (arbitrate_state == `ysyx22040228_ARB_DREAD) ? dread_ar_size     :
                                                                            3'b011           ;
    assign axi_ar_burst   = (arbitrate_state == `ysyx22040228_ARB_IREAD) ? iread_ar_burst    :
                            (arbitrate_state == `ysyx22040228_ARB_DREAD) ? dread_ar_burst    :
                                                                            2'b01            ;
    assign axi_ar_cache   = (arbitrate_state == `ysyx22040228_ARB_IREAD) ? iread_ar_cache    :
                            (arbitrate_state == `ysyx22040228_ARB_DREAD) ? dread_ar_cache    :
                                                                            4'b0010          ;
    assign axi_ar_prot    = (arbitrate_state == `ysyx22040228_ARB_IREAD) ? iread_ar_prot     :
                            (arbitrate_state == `ysyx22040228_ARB_DREAD) ? dread_ar_prot     :
                                                                            3'b000           ;
    assign axi_ar_qos     = (arbitrate_state == `ysyx22040228_ARB_IREAD) ? iread_ar_qos      :
                            (arbitrate_state == `ysyx22040228_ARB_DREAD) ? dread_ar_qos      :
                                                                            4'b0000          ;


endmodule
