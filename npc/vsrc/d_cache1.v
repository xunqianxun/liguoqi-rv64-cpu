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

module d_cache1 (
    input         wire                                        clk                ,
    input         wire                                        rst                ,
    //-------------------------input  cache-------------------------------------//
    input         wire                                        mem_addr_i         ,
    input         wire        [`ysyx22040228_REGBUS]          mem_data_i         ,
    input         wire        [7:0]                           mem_mask_i         ,
    input         wire                                        mem_data_read_ena  ,
    input         wire                                        mem_data_writ_ena  ,
    //------------------------out for cpu core----------------------------------//
    output        wire        [`ysyx22040228_AXI_REGBUS]      mem_data_out_cpu   ,
    output        wire                                        mem_data_finish    , 
    //--------------------------------------------------------------------------//
    //                                 about axi port                           //
    //                                 master channel                           //
    //                              user to link cpu signal                     //
    //--------------------------------------------------------------------------//
    output   wire         [`ysyx22040228_ID       ]        dcache_axi_aw_id      , 
    output   wire         [`ysyx22040228_ADDR     ]        dcache_axi_aw_addr    ,
    output   wire         [`ysyx22040228_LEN      ]        dcache_axi_aw_len     ,
    output   wire         [`ysyx22040228_SIZE     ]        dcache_axi_aw_size    ,
    output   wire         [`ysyx22040228_BURST    ]        dcache_axi_aw_burst   ,
    output   wire         [`ysyx22040228_LOCK     ]        dcache_axi_aw_lock    ,
    output   wire         [`ysyx22040228_CACHE    ]        dcache_axi_aw_cache   ,
    output   wire         [`ysyx22040228_PROT     ]        dcache_axi_aw_prot    ,
    output   wire         [`ysyx22040228_QOS      ]        dcache_axi_aw_qos     ,
    output   wire         [`ysyx22040228_REGION   ]        dcache_axi_aw_region  ,
    output   wire         [`ysyx22040228_USER     ]        dcache_axi_aw_user    ,
    output   wire                                          dcache_axi_aw_valid   ,
    input    wire                                          dcache_axi_aw_ready   , 

    //write data channel
    output   wire         [`ysyx22040228_ID       ]        dcache_axi_w_id       ,
    output   wire         [`ysyx22040228_DATA     ]        dcache_axi_w_data     ,
    output   wire         [`ysyx22040228_STRB     ]        dcache_axi_w_strb     ,
    output   wire         [`ysyx22040228_LAST     ]        dcache_axi_w_last     ,
    output   wire         [`ysyx22040228_USER     ]        dcache_axi_w_user     ,
    output   wire                                          dcache_axi_w_valid    ,
    input    wire                                          dcache_axi_w_ready    ,

    //write response channel
    input    wire         [`ysyx22040228_ID       ]        dcache_axi_b_id       ,
    input    wire         [`ysyx22040228_RESP     ]        dcache_axi_b_resp     ,
    input    wire         [`ysyx22040228_USER     ]        dcache_axi_b_user     ,
    input    wire                                          dcache_axi_b_valid    ,
    output   wire                                          dcache_axi_b_ready    ,

    //read address channel
    output   wire         [`ysyx22040228_ID       ]        dcache_axi_ar_id     ,
    output   wire         [`ysyx22040228_ADDR     ]        dcache_axi_ar_addr   ,
    output   wire         [`ysyx22040228_LEN      ]        dcache_axi_ar_len    ,
    output   wire         [`ysyx22040228_SIZE     ]        dcache_axi_ar_size   ,
    output   wire         [`ysyx22040228_BURST    ]        dcache_axi_ar_burst  ,
    output   wire         [`ysyx22040228_LOCK     ]        dcache_axi_ar_lock   ,
    output   wire         [`ysyx22040228_CACHE    ]        dcache_axi_ar_cache  ,
    output   wire         [`ysyx22040228_PROT     ]        dcache_axi_ar_prot   ,
    output   wire         [`ysyx22040228_QOS      ]        dcache_axi_ar_qos    ,
    output   wire         [`ysyx22040228_REGION   ]        dcache_axi_ar_region ,
    output   wire         [`ysyx22040228_USER     ]        dcache_axi_ar_user   ,
    output   wire                                          dcache_axi_ar_valid  ,
    input    wire                                          dcache_axi_ar_ready  ,

    //read data channel
    input    wire         [`ysyx22040228_ID       ]        dcache_axi_r_id      ,
    input    wire         [`ysyx22040228_DATA     ]        dcache_axi_r_data    ,
    input    wire         [`ysyx22040228_RESP     ]        dcache_axi_r_resp    ,
    input    wire         [`ysyx22040228_LAST     ]        dcache_axi_r_last    ,
    input    wire         [`ysyx22040228_USER     ]        dcache_axi_r_user    ,
    input    wire                                          dcache_axi_r_valid   ,
    output   wire                                          dcache_axi_r_ready   
);
    
    //--------------------------------------------------------------------------//
    //                          cache data ram :64:2048                         //
    //--------------------------------------------------------------------------//
    reg  [`ysyx22040228_REGBUS]   data_ram_o    [`ysyx22040228_CACHE_DATA_W] ;
    reg  [`ysyx22040228_REGBUS]   data_ram_t    [`ysyx22040228_CACHE_DATA_W] ;
    wire        [7:0]             write_ena_o  ;
    wire        [7:0]             wirte_ena_t  ;
    wire                          write_tag_o_ena;
    wire                          write_tag_t_ena;
    wire                          read_ena     ;
    wire        [2:0]             offset       ;
    wire        [7:0]             index        ;
    wire        [22:0]            tag          ;
    wire  [`ysyx22040228_REGBUS]  write_data   ;
    wire  [`ysyx22040228_REGBUS]  read_data_o  ;
    wire  [`ysyx22040228_REGBUS]  read_data_t  ;

    //--------------------------------------------------------------------------//
    //                      two ways work link  cache data                      //
    //--------------------------------------------------------------------------//
    always @(posedge clk) begin
        if(write_ena_o[0])
            data_ram_o [index] [ 7:0 ] <= write_data [ 7:0 ];
        if(write_ena_o[1])
            data_ram_o [index] [15:0 ] <= write_data [15:8 ];
        if(write_ena_o[2])
            data_ram_o [index] [23:16] <= write_data [23:16];
        if(write_ena_o[3])
            data_ram_o [index] [31:24] <= write_data [31:24];
        if(write_ena_o[4])
            data_ram_o [index] [39:32] <= write_data [39:32];
        if(write_ena_o[5])
            data_ram_o [index] [47:40] <= write_data [47:40];
        if(write_ena_o[6])
            data_ram_o [index] [55:48] <= write_data [55:48];
        if(write_ena_o[7])
            data_ram_o [index] [63:56] <= write_data [63:56];
    end

    always @(posedge clk) begin
        if(write_ena_t[0])
            data_ram_t [index] [ 7:0 ] <= write_data [ 7:0 ];
        if(write_ena_t[1])
            data_ram_t [index] [15:0 ] <= write_data [15:8 ];
        if(write_ena_t[2])
            data_ram_t [index] [23:16] <= write_data [23:16];
        if(write_ena_t[3])
            data_ram_t [index] [31:24] <= write_data [31:24];
        if(write_ena_t[4])
            data_ram_t [index] [39:32] <= write_data [39:32];
        if(write_ena_t[5])
            data_ram_t [index] [47:40] <= write_data [47:40];
        if(write_ena_t[6])
            data_ram_t [index] [55:48] <= write_data [55:48];
        if(write_ena_t[7])
            data_ram_t [index] [63:56] <= write_data [63:56];
    end

    always @(posedge clk) begin
        if(rst == `ysyx22040228_AXI_RSTENA) begin 
            read_data_o <= `ysyx22040228_AXI_ZERO_WORD;
            read_data_t <= `ysyx22040228_AXI_ZERO_WORD;
        end 
        else if(read_ena) begin
            read_data_o <= data_ram_o[index];
            read_data_t <= data_ram_t[index];
        end 
    end

    //---------------------------------------tag------------------------------//

    reg   [22+1:0]    tag_o    [`ysyx22040228_CACHE_DATA_W] ;
    reg   [22+1:0]    tag_t    [`ysyx22040228_CACHE_DATA_W] ;
    wire  [22+1:0]    tago_data ;
    wire  [22+1:0]    tagt_data ;

    always @(posedge clk) begin
        if(write_tag_o_ena)
            tag_o[index] <= {1'b1,tag} ;
        if(write_tag_t_ena)
            tag_t[index] <= {1'b1,tag} ;
    end

    always @(posedge clk) begin
        if(rst == `ysyx22040228_AXI_RSTENA) begin 
            tago_data <= `ysyx22040228_AXI_ZERO_WORD;
            tagt_data <= `ysyx22040228_AXI_ZERO_WORD;
        end 
        else if(read_ena) begin
            tago_data <= tag_o[index];
            tagt_data <= tag_t[index];
        end 
    end

    //------------------------------------------------------------------------//
    //                         sign about cpu                                 //
    //------------------------------------------------------------------------//
    reg                               cache_miss  ;
    wire   [31:0]                     axi_addr    ;
    reg    [1:0]                      cache_check ;

    assign offset = (mem_data_read_ena || mem_data_writ_ena) ? mem_addr_i[ 2:0 ] : axi_addr[ 2:0 ];
    assign index  = (mem_data_read_ena || mem_data_writ_ena) ? mem_addr_i[10:3 ] : axi_addr[10:3 ];
    assign tag    = (mem_data_read_ena || mem_data_writ_ena) ? mem_addr_i[31:11] : axi_addr[31:11];
    
    always @(*) begin
        if(mem_data_read_ena|| mem_data_writ_ena) begin
            read_ena = 1'b1 ;
            if(tag_o[23] || tag_t[23]) begin
                 if(tag_o[22:0] == tag) begin
                     cache_check = 2'b01;
                     cache_miss  = 1'b0 ;
                 end 
                 else if(tag_t[22:0] == tag) begin
                     cache_check = 2'b10;
                     cache_miss  = 1'b0 ;
                 end 
                 else begin
                     cache_check = 2'b00;
                     cache_miss  = 1'b1 ;
                 end 
            end 
            else begin
                cache_miss = 1'b1 ;
            end 
        end
        else begin
            cache_check = 2'b00;
            cache_miss = 1'b0  ;
        end 
    end

    always @(*) begin
        if(mem_data_read_ena && ~cache_miss) begin
            if(cache_check == 2'b01) begin
                mem_data_out_cpu = read_data_o;
                mem_data_finish  = 1'b1 ;
            end 
            else if(cache_check == 2'b10) begin
                mem_data_out_cpu = read_data_t;
                mem_data_finish  = 1'b1 ;
            end 
        end 
        else if(mem_data_read_ena && cache_miss) begin
            
        end 
    end



    //------------------------------------------------------------------------//
    //                         sign about axi                                 //
    //------------------------------------------------------------------------//





endmodule