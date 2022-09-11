//system 
`define ysyx22040228_RSTENA    1'b1
`define ysyx22040228_MTIMECMP  64'h0000000002004000
`define ysyx22040228_MTIME     64'h000000000200bff8
`define ysyx22040228_SERIAL_H  64'h00000000a00003ff
`define ysyx22040228_SERIAL_L  64'h00000000a00003f8
`define ysyx22040228_DIV_ZERO  128'h000000000000000000000000000000

//pip define 
`define ysyx22040228_PCBUS     63:0
`define ysyx22040228_INSTBUS   31:0
`define ysyx22040228_REGBUS    63:0
`define ysyx22040228_ZEROWORD  64'h0000000000000000
`define ysyx22040228_NEXTPC    64'h0000000000000004
`define ysyx22040228_NNXPC     64'h0000000000000008
`define ysyx22040228_THISPC    64'h0000000000000000
//pc
//`define ysyx22040228_START     64'h0000000080000000
`define ysyx22040228_START     64'h0000000030000000
//id
//`define ysyx22040228_REGBUS       63:0
`define ysyx22040228_REGADDRBUS   4:0
`define ysyx22040228_SYS          5'b11100
`define ysyx22040228_REGIMM        5'b00100
`define ysyx22040228_REGREG        5'b01100
`define ysyx22040228_REGIMMW      5'b00110
`define ysyx22040228_REGREGW      5'b01110
`define ysyx22040228_LUI            5'b01101
`define ysyx22040228_AUIPC          5'b00101
`define ysyx22040228_JAL            5'b11011
`define ysyx22040228_JALR           5'b11001
`define ysyx22040228_BRANCH             5'b11000
`define ysyx22040228_LOAD               5'b00000
`define ysyx22040228_STORE              5'b01000
`define FENCH              5'b00011
`define ysyx22040228_FLUSHDISABLE 1'b0
`define ysyx22040228_FLUSHABLE    1'b1
//ctrl
`define ysyx22040228_STOP      1'b1
`define ysyx22040228_NOSTOP    1'b0
//ex
`define ysyx22040228_WDISABLE  1'b0
`define ysyx22040228_WENABLE   1'b1
`define ysyx22040228_RDISABLE  1'b0
`define ysyx22040228_RENABLE   1'b1
`define ysyx22040228_DATAADDRBUS   63:0
`define ysyx22040228_DATABUS       63:0

//inst
`define EBREAK_TRAP        32'b00000000000100000000000001110011
`define INST_ADDI          8'b00000001
`define INST_SLTI          8'b00000010
`define INST_SLTIU         8'b00000100
`define INST_XORI          8'b00001000
`define INST_ORI           8'b00010000
`define INST_ANDI          8'b00100000
`define INST_SLLI          8'b01000000
`define INST_SRLI          8'b10000000
`define INST_SRAI          8'b00000011
`define INST_ADD           8'b00001100
`define INST_SUB           8'b00110000
`define INST_SLL           8'b11000000
`define INST_SLT           8'b00000101
`define INST_SLTU          8'b00001010
`define INST_XOR           8'b01010000
`define INST_SRL           8'b10100000
`define INST_SRA           8'b00010001
`define INST_OR            8'b00100010
`define INST_AND           8'b01000100
`define INST_LUI           8'b10001000
`define INST_AUIPC         8'b10000001
`define INST_ADDIW         8'b00011000
`define INST_SLLIW         8'b00001001
`define INST_SRLIW         8'b10010000
`define INST_SRAIW         8'b00000110
`define INST_ADDW          8'b01100000
`define INST_SUBW          8'b00100001
`define INST_SLLW          8'b00010010
`define INST_SRLW          8'b10000100
`define INST_SRAW          8'b01001000

`define INST_JAL           8'b01000010
`define INST_JALR          8'b00100100

`define INST_BEQ           8'b00000001
`define INST_BNE           8'b00000010
`define INST_BLT           8'b00000100
`define INST_BGE           8'b00001000
`define INST_BLTU          8'b00010000
`define INST_BGEU          8'b00100000

`define INST_MUL           8'b00001110
`define INST_MULH          8'b00011100
`define INST_MULHSU        8'b00111000
`define INST_MULHU         8'b01110000
`define INST_MULW          8'b11100000

`define INST_DIV           8'b10000110
`define INST_DIVU          8'b00011010
`define INST_DIVUW         8'b00100101
`define INST_DIVW          8'b01010001

`define INST_REM           8'b11000001
`define INST_REMU          8'b10000101
`define INST_REMUW         8'b01000011
`define INST_REMW          8'b00010011


`define INST_CSRRW         8'b01000000
`define INST_CSRRS         8'b10000000
`define INST_CSRRC         8'b00000001
`define INST_CSRRWI        8'b00000010
`define INST_CSRRSI        8'b00000100
`define INST_CSRRCI        8'b00001000

`define INST_EBREAK        8'b00000111
`define INST_ECALL         8'b00010000
`define INST_MRET          8'b00100000
`define INST_FENCE         8'b10101000

//mem
//`define DATA_BUS           63:0
`define LB_SEL             3'b000
`define LH_SEL             3'b001
`define LW_SEL             3'b010
`define LBU_SEL            3'b100
`define LHU_SEL            3'b101
`define LWU_SEL            3'b110
`define LD_SEL             3'b011

`define SB_SEL             3'b000
`define SH_SEL             3'b001
`define SW_SEL             3'b010
`define SD_SEL             3'b011
//defines
/************************************************************
Author:LiGuoqi
Name:define_axi4.v
Function:AXI4 use define
************************************************************/

`define  SLAVE_NUM 3


`define ysyx22040228_ID_BUS       3:0
`define ysyx22040228_ADDR_BUS     63:0
`define ysyx22040228_LEN_BUS      7:0
`define ysyx22040228_SIZE_BUS     2:0
`define ysyx22040228_BURST_BUS    1:0
//`define ysyx22040228_LOCK     1:0
`define ysyx22040228_CACHE_BUS    3:0
`define ysyx22040228_PROT_BUS     2:0
`define ysyx22040228_QOS_BUS      3:0
// `define ysyx22040228_REGION
// `define ysyx22040228_USER

`define ysyx22040228_DATA_BUS     63:0
`define ysyx22040228_STRB_BUS     7:0       
//`define ysyx22040228_LAST 
//`define ysyx22040228_USER   
`define ysyx22040228_RESP_BUS     1:0



//multiply by six relative to the input bit width
`define ysyx22040228_SLAVE_ID       23:0 //4*6-1
`define ysyx22040228_SLAVE_ADDR     383:0//64*6-1
`define ysyx22040228_SLAVE_LEN      47:0 //8*6-1
`define ysyx22040228_SLAVE_SIZE     17:0 //3*6-1
`define ysyx22040228_SLAVE_BURST    11:0 //2*6-1 
`define ysyx22040228_SLAVE_LOCK     11:0 //2*6-1
`define ysyx22040228_SLAVE_CACHE    23:0 //4*6-1
`define ysyx22040228_SLAVE_PROT     17:0 //3*6-1
// `define ysyx22040228_SLAVE_QOS  
// `define ysyx22040228_SLAVE_REGION
// `define ysyx22040228_SLAVE_USER
`define ysyx22040228_SLAVE_DATA     383:0//64*6-1
// `define ysyx22040228_SLAVE_STRB     
// `define ysyx22040228_SLAVE_LAST 
//`define ysyx22040228_SLAVE_USER   
//`define ysyx22040228_SLAVE_RESP

//number of the port 
// `define ysyx22040228_STRBN  
// `define ysyx22040228_LASTN 

//signal zero data
`define ysyx22040228_ID_ZERO    4'b0000 
`define ysyx22040228_ADDR_ZERO  64'b0
`define ysyx22040228_LEN_ZERO   8'b0
`define ysyx22040228_SIZE_ZERO  3'b0
`define ysyx22040228_BURST_ZERO 2'b0
`define ysyx22040228_LOCK_ZERO  2'b0
`define ysyx22040228_CACHE_ZERO 4'b0
`define ysyx22040228_PROT_ZERO  3'b0
// `define ysyx22040228_QOS_ZERO   
// `define ysyx22040228_REGION_ZERO
// `define ysyx22040228_USER_ZERO
`define ysyx22040228_DATA_ZERO  64'b0
// `define ysyx22040228_STRB_ZERO
// `define ysyx22040228_LAST_ZERO
// `define ysyx22040228_RESP_ZERO 


`define ysyx22040228_TIME     6'b000001
`define ysyx22040228_UART     6'b000010
`define ysyx22040228_IO       6'b000100
`define ysyx22040228_VGA      6'b001000
`define ysyx22040228_KEY      6'b010000
`define ysyx22040228_OUT      6'b100000
`define ysyx22040228_NOSELECT    0
`define ysyx22040228_TIME_SLECT  1
`define ysyx22040228_UART_SLECT  2
`define ysyx22040228_IO_SLECT    3
`define ysyx22040228_VGA_SLECT   4
`define ysyx22040228_KEY_SLECT   5
`define ysyx22040228_OUT_SlECT   6

`define ysyx22040228_AXI_RSTENA    1'b1
`define ysyx22040228_TIME_WAITE    2'b00
`define ysyx22040228_TIME_WRITE    2'b01
`define ysyx22040228_TIME_READ     2'b01
`define ysyx22040228_TIME_RESP     2'b10
`define ysyx22040228_TIME_WIBK     2'b10
`define ysyx22040228_AXI_ZERO_WORD 64'b0
`define ysyx22040228_AXI_REGBUS    63:0

`define ysyx22040228_CACHE_DATA_W  63:0

`define ysyx22040228_DCACHE_ADDR_W  31:0
`define ysyx22040228_DCACHE_DATA_W  63:0

`define ysyx22040228_ABLE         1'b1
`define ysyx22040228_ENABLE       1'b0

`define ysyx22040228_TEG_WITH      22:0
`define ysyx22040228_INDEX_WITH    5:0
`define ysyx22040228_CLINT_START   64'h0000000002000000
`define ysyx22040228_CLINT_END     64'h000000000200ffff
`define ysyx22040228_UART_START    64'h0000000010000000
`define ysyx22040228_UART_END      64'h0000000010000fff
`define ysyx22040228_SPICTRL_START 64'h0000000010001000
`define ysyx22040228_SPICTRL_END   64'h0000000010001fff
`define ysyx22040228_SPI_START     64'h0000000030000000
`define ysyx22040228_SPI_END       64'h000000003fffffff
`define ysyx22040228_CHIPLINK_START 64'h0000000040000000
`define ysyx22040228_CHIPLINK_END   64'h000000007fffffff
`define ysyx22040228_APB_START     64'h0000000010000000
`define ysyx22040228_APB_END       64'h000000003fffffff
`define ysyx22040228_CACHE_STRBL   128'h0000000000000000ffffffffffffffff
`define ysyx22040228_CACHE_STRBH   128'hffffffffffffffff0000000000000000
`define ysyx22040228_CACHE_STRBZ   128'h00000000000000000000000000000000


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
`define ysyx22040228_ARB_DWRITEU    3'b011
`define ysyx22040228_ARB_DREADU     3'b110

// `define ysyx22040228_AXI_SEND       3'b110
// `define ysyx22040228_AXI_OK         3'b000
// `define ysyx22040228_AXI_END        3'b010
// `define ysyx22040228_AXI_IDLE       3'b100
// `define ysyx22040228_AXI_WRITE      3'b101

`define ysyx22040228_AXIW_IDLE      3'b000 
`define ysyx22040228_AXIW_ADDR      3'b001 
`define ysyx22040228_AXIW_WRITE     3'b010 
`define ysyx22040228_AXIW_RESP      3'b100 

`define ysyx22040228_AXIR_IDLE      2'b00  
`define ysyx22040228_AXIR_ADDR      2'b01 
`define ysyx22040228_AXIR_READ      2'b10 

/* verilator lint_off DECLFILENAME */
// `include "ysyx_22040228defines.v"
// `include "ysyx_22040228defines_axi4.v"
// `include "ysyx_22040228cache_defines.v"
module ysyx_22040228arbitratem  (
/* verilator lint_off UNUSED */ 
   //-----------------------------system----------------------------------------//
    input       wire                                         clk                  ,
    input       wire                                         rst                  ,
    //-----------------------------d_cache---------------------------------------//
    input       wire       [63:0]                            d_cache_addr         ,
    input       wire       [63:0]                            d_cache_data         ,
    input       wire       [3:0]                             d_cache_type         ,
    output      reg        [63:0]                            d_cache_data_o       ,
    output      reg                                          d_cache_valid_       ,
    //----------------------------uncache----------------------------------------//
    input       wire       [63:0]                            uncache_addr         ,
    input       wire       [63:0]                            uncache_data         ,
    input       wire                                         uncache_read_ena     ,
    input       wire                                         uncache_write_ena    ,
    input       wire       [2:0]                             uncache_size_data    ,
    input       wire       [7:0]                             uncache_mask         ,
    output      reg        [63:0]                            uncahce_data_o       ,
    output      reg                                          uncahce_valid_       ,
    //----------------------------i_cache----------------------------------------//
    input       wire       [63:0]                            i_cache_addr         ,
    input       wire                                         i_cache_ena          ,
    output      reg        [63:0]                            i_cache_data         ,
    output      reg                                          i_cache_valid_       ,
    //----------------------write address cahnnel--------------------------------//
    output      reg        [`ysyx22040228_ID_BUS]            axi_aw_id            ,
    output      reg        [`ysyx22040228_ADDR_BUS]          axi_aw_addr          ,
    output      reg        [`ysyx22040228_LEN_BUS]           axi_aw_len           ,
    output      reg        [`ysyx22040228_SIZE_BUS]          axi_aw_size          ,
    output      reg        [`ysyx22040228_BURST_BUS]         axi_aw_burst         ,
    output      reg        [`ysyx22040228_CACHE_BUS]         axi_aw_cache         ,
    output      reg        [`ysyx22040228_PROT_BUS]          axi_aw_port          ,
    output      reg        [`ysyx22040228_QOS_BUS]           axi_aw_qos           ,
    output      reg                                          axi_aw_valid         ,
    input       reg                                          axi_aw_ready         ,
    //----------------------write data channel-----------------------------------//
    output      reg        [`ysyx22040228_DATA_BUS]          axi_w_data           ,
    output      reg        [`ysyx22040228_STRB_BUS]          axi_w_strb           ,
    output      reg                                          axi_w_last           ,
    output      reg                                          axi_w_valid          ,
    input       wire                                         axi_w_ready          ,

    //-----------------------write response channel------------------------------//
    input       wire       [`ysyx22040228_ID_BUS]            axi_b_id             ,
    input       wire       [`ysyx22040228_RESP_BUS]          axi_b_resp           ,
    input       wire                                         axi_b_valid          ,
    output      reg                                          axi_b_ready          ,

    //------------------------read address channel-------------------------------//
    output      reg        [`ysyx22040228_ID_BUS]            axi_ar_id            ,
    output      reg        [`ysyx22040228_ADDR_BUS]          axi_ar_addr          ,
    output      reg        [`ysyx22040228_LEN_BUS]           axi_ar_len           ,
    output      reg        [`ysyx22040228_SIZE_BUS]          axi_ar_size          ,
    output      reg        [`ysyx22040228_BURST_BUS]         axi_ar_burst         ,
    output      reg        [`ysyx22040228_CACHE_BUS]         axi_ar_cache         ,
    output      reg        [`ysyx22040228_PROT_BUS]          axi_ar_prot          ,
    output      reg        [`ysyx22040228_QOS_BUS]           axi_ar_qos           ,
    output      reg                                          axi_ar_valid         ,
    input       wire                                         axi_ar_ready         ,

    //------------------------read data channel----------------------------------//
    input       wire       [`ysyx22040228_ID_BUS]            axi_r_id             ,
    input       wire       [`ysyx22040228_DATA_BUS]          axi_r_data           ,
    input       wire       [`ysyx22040228_RESP_BUS]          axi_r_resp           ,
    input       wire                                         axi_r_last           ,
    input       wire                                         axi_r_valid          ,
    output      reg                                          axi_r_ready           
);

    wire    read_dcache_shankhand  ;
    wire    write_dcache_shankhand ;
    wire    read_icache_shankhand  ;
    wire    read_uncahce_shankhand ;
    wire    write_uncahce_shankhand;

    assign read_uncahce_shankhand  =  (~read_icache_shankhand) && (uncache_read_ena) ;
    assign write_uncahce_shankhand =  (~read_icache_shankhand) && (uncache_write_ena);
    assign read_dcache_shankhand   =  (~read_icache_shankhand) && ((d_cache_type == 4'b0010) || (d_cache_type == 4'b1000));
    assign write_dcache_shankhand  =  (~read_icache_shankhand) && ((d_cache_type == 4'b0001) || (d_cache_type == 4'b0100)); 
    assign read_icache_shankhand   =  ((d_cache_type == 4'b0000) & (~uncache_read_ena) & (~uncache_write_ena)) && i_cache_ena ;

    wire [2:0]  shankhand_chose ;
    assign      shankhand_chose = read_uncahce_shankhand  ? `ysyx22040228_ARB_DREADU  :
                                  write_uncahce_shankhand ? `ysyx22040228_ARB_DWRITEU : 
                                  read_dcache_shankhand   ? `ysyx22040228_ARB_DREAD   :
                                  write_dcache_shankhand  ? `ysyx22040228_ARB_DWRITE  :
                                  read_icache_shankhand   ? `ysyx22040228_ARB_IREAD   : `ysyx22040228_ARB_IDLE ;

    wire   read_valid  ;
    wire   write_valid ;
    assign read_valid  = read_uncahce_shankhand | read_dcache_shankhand | read_icache_shankhand ;
    assign write_valid = write_uncahce_shankhand | write_dcache_shankhand ;

    reg [2:0] axiw_state ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            axiw_state <= `ysyx22040228_AXIW_IDLE ;
        end 
        else begin
            if(write_valid)begin 
                case (axiw_state)
                    `ysyx22040228_AXIW_IDLE : begin
                        axiw_state <= `ysyx22040228_AXIW_ADDR ;
                    end 
                    `ysyx22040228_AXIW_ADDR : begin
                        if(axi_aw_ready) 
                            axiw_state <= `ysyx22040228_AXIW_WRITE ;
                        else 
                            axiw_state <= `ysyx22040228_AXIW_ADDR  ;
                    end 
                    `ysyx22040228_AXIW_WRITE : begin
                        if(axi_w_ready & axi_w_valid & axi_w_last)
                            axiw_state <= `ysyx22040228_AXIW_RESP ;
                        else begin
                            axiw_state <= `ysyx22040228_AXIW_WRITE;
                        end 
                    end 
                    `ysyx22040228_AXIW_RESP : begin
                        if(axi_b_valid) 
                            axiw_state <= `ysyx22040228_AXIW_IDLE ;
                        else 
                            axiw_state <= `ysyx22040228_AXIW_RESP ;
                    end 
                    default: axiw_state <= `ysyx22040228_AXIW_IDLE ;
                endcase
            end 
        end 
    end

    reg [1:0] axir_state ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            axir_state <= `ysyx22040228_AXIR_IDLE ;
        end 
        else begin
            if(read_valid) begin 
                case (axir_state)
                    `ysyx22040228_AXIR_IDLE : begin
                        axir_state <= `ysyx22040228_AXIR_ADDR ;
                    end  
                    `ysyx22040228_AXIR_ADDR : begin
                        if(axi_ar_valid & axi_ar_ready)
                            axir_state <= `ysyx22040228_AXIR_READ ;
                        else 
                            axir_state <= `ysyx22040228_AXIR_ADDR ;
                    end 
                    `ysyx22040228_AXIR_READ : begin
                        if(axi_r_last & axi_r_valid)
                            axir_state <= `ysyx22040228_AXIR_IDLE ;
                        else
                            axir_state <= `ysyx22040228_AXIR_READ ;
                    end 
                    default: axir_state <= `ysyx22040228_AXIR_IDLE ;
                endcase
            end 
        end 
    end
/* verilator lint_off BLKSEQ */
    reg  chosel ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            chosel = `ysyx22040228_ENABLE ;
        end
        else if(axi_ar_ready & axi_ar_valid)begin
            chosel = `ysyx22040228_ABLE ;
        end  
        else begin
            chosel = `ysyx22040228_ENABLE ;
        end 
    end 

    always @(*) begin
        axi_aw_id = 4'b0000 ;
        axi_aw_addr = 64'h0 ;
        axi_aw_len = 8'b0   ;
        axi_aw_size = 3'b000;
        axi_aw_burst = 2'b0 ;
        axi_aw_cache = 4'b0000 ;
        axi_aw_port = 3'b000 ;
        axi_aw_qos = 4'h0 ;
        axi_aw_valid = `ysyx22040228_ENABLE ;
        axi_w_data = 64'h0 ;
        axi_w_strb = 8'b00000000 ;
        axi_w_last = `ysyx22040228_ENABLE ;
        axi_w_valid = `ysyx22040228_ENABLE ;
        axi_b_ready = `ysyx22040228_ENABLE ;
        axi_ar_id = 4'b0000 ;
        axi_ar_addr = 64'h0 ;
        axi_ar_len = 8'b0 ;
        axi_ar_size = 3'b000 ;
        axi_ar_burst = 2'b0 ;
        axi_ar_cache = 4'b0000 ;
        axi_ar_prot = 3'b000 ;
        axi_ar_qos = 4'h0 ;
        axi_ar_valid = `ysyx22040228_ENABLE ;
        axi_r_ready = `ysyx22040228_ENABLE ;
        case (shankhand_chose)
            `ysyx22040228_ARB_IREAD : begin   
                case (axir_state)
                `ysyx22040228_AXIR_IDLE : begin
                        axi_r_ready    = 1'b0;
                        axi_ar_valid   = 1'b0;       
                        axi_ar_len     = 8'h00;      
                        axi_ar_burst   = 2'b0;       
                        axi_ar_id      = 4'b0000;          
                        axi_aw_valid   = 1'b0;
                        axi_w_valid    = 1'b0;
                        axi_b_ready    = 1'b0; 
                        axi_w_strb     =8'h00;
                        axi_ar_addr    =64'h0;
                    end
                `ysyx22040228_AXIR_ADDR : begin
                    //pc读通道
                        axi_ar_valid  = (i_cache_addr[31] == 1 )?axi_ar_ready:~chosel;
                        axi_ar_addr   =  i_cache_addr;
                        axi_ar_size  = ((i_cache_addr >= `ysyx22040228_APB_START) && (i_cache_addr <= `ysyx22040228_APB_END)) ? `AXI_SIZE_BYTES_4 :`AXI_SIZE_BYTES_8;
                        axi_ar_len    = 8'h00;
                        axi_ar_burst  = 2'b01;
                        axi_ar_id     = 4'b0000;
                        axi_aw_valid  =1'b0;
                        axi_w_valid   = 1'b0;
                        axi_b_ready   = 1'b0;  
                        axi_w_strb    =8'h00;                                    
                end
                `ysyx22040228_AXIR_READ : begin
                        axi_ar_valid  = 1'b0;
                        axi_ar_addr   = i_cache_addr; 
                        axi_r_ready   = 1'b1;
                        axi_ar_len    = 8'h00;
                        axi_ar_size   = 3'b000;
                        axi_ar_burst  = 2'b0;
                        axi_ar_id     = 4'b0000;
                        axi_aw_valid  =1'b0;
                        axi_w_strb    = 8'h00;
                        axi_w_valid   = 1'b0;
                        axi_b_ready   = 1'b0;             
                    end

                    default:;
                endcase
            end
        `ysyx22040228_ARB_DREAD : begin
            case (axir_state)
                `ysyx22040228_AXIR_IDLE : begin
                        axi_r_ready   = 1'b0;
                        axi_ar_valid  = 1'b0;
                        axi_ar_len   = 8'h00;
                        axi_ar_burst = 2'b0;
                        axi_ar_id     = 4'b0000;
                        axi_aw_valid  =1'b0;
                        axi_w_strb    =8'h00;
                        axi_w_valid  = 1'b0;
                        axi_b_ready   = 1'b0; 
                        axi_ar_addr   = d_cache_addr;                 
                    end

                `ysyx22040228_AXIR_ADDR : begin
                        axi_ar_valid  = (d_cache_addr[31] == 1 )?axi_ar_ready:~chosel;
                        axi_ar_addr   =  d_cache_addr;
                        axi_ar_size   = `AXI_SIZE_BYTES_8;
                        axi_ar_len    = 8'b0000_0000;
                        axi_ar_burst  = 2'b01;
                        axi_ar_id     = 4'b0000;
                        axi_r_ready   = 1'b0;
                        axi_aw_valid  =1'b0;
                        axi_w_valid  = 1'b0;
                        axi_b_ready   = 1'b0;
                        axi_w_strb    =8'h00;                    
                    end

                `ysyx22040228_AXIR_READ: begin                  
                        axi_ar_valid  = 1'b0;
                        axi_ar_addr  = d_cache_addr;
                        axi_r_ready   = 1'b1;                  
                        axi_ar_len    = 8'h00;
                        axi_ar_size   = 3'b000;
                        axi_ar_burst  = 2'b0;
                        axi_ar_id     = 4'b0000;
                        axi_aw_valid  =1'b0;
                        axi_w_strb    =8'h00;
                        axi_w_valid  = 1'b0;
                        axi_b_ready   = 1'b0;                    
                        //axi_w_data   = d_cache_data;
                        axi_w_strb   = 8'h0;                    
                    end
                    default:;
            endcase
          end
        `ysyx22040228_ARB_DREADU : begin
            case (axir_state)
                `ysyx22040228_AXIR_IDLE : begin
                        axi_r_ready   = 1'b0;
                        axi_ar_valid  = 1'b0;
                        axi_ar_len   = 8'h00;
                        axi_ar_burst = 2'b0;
                        axi_ar_id     = 4'b0000;
                        axi_aw_valid  =1'b0;
                        axi_w_strb    =8'h00;
                        axi_w_valid  = 1'b0;
                        axi_b_ready   = 1'b0;  
                        axi_ar_addr   = uncache_addr;                 
                    end

                `ysyx22040228_AXIR_ADDR : begin
                        axi_ar_valid  = (uncache_addr[31] == 1 )?axi_ar_ready:~chosel;
                        axi_ar_addr   =  uncache_addr;
                        axi_ar_size   = uncache_size_data ;
                        axi_ar_len    = 8'b0000_0000;
                        axi_ar_burst  = 2'b01;
                        axi_ar_id     = 4'b0000;
                        axi_r_ready   = 1'b0;
                        axi_aw_valid  =1'b0;
                        axi_w_valid  = 1'b0;
                        axi_b_ready   = 1'b0;
                        axi_w_strb    = 8'h00;                    
                    end

                `ysyx22040228_AXIR_READ : begin                   
                        axi_ar_valid  = 1'b0;
                        axi_ar_addr  = uncache_addr;
                        axi_r_ready   = 1'b1;               
                        axi_ar_len    = 8'h00;
                        axi_ar_size   = 3'b000;
                        axi_ar_burst  = 2'b0;
                        axi_ar_id     = 4'b0000;
                        axi_aw_valid  =1'b0;
                        axi_w_strb    =8'h00;
                        axi_w_valid  = 1'b0;
                        axi_b_ready   = 1'b0;                    
                        //axi_w_data   = d_cache_data;
                        axi_w_strb   = 8'h00;                    
                    end

                    default:;
            endcase
          end

        `ysyx22040228_ARB_DWRITE : begin
            case (axiw_state)    
            `ysyx22040228_AXIW_IDLE : begin
                    axi_aw_valid = 1'b0;
                    axi_aw_addr  = 64'h0;
                    axi_aw_id    = 4'b0000;
                    axi_aw_len   = 8'h00;
                    axi_aw_size  = 3'b000;
                    axi_aw_burst = 2'b0;
                    axi_w_valid  = 1'b0;
                    axi_w_data   = d_cache_data;
                    axi_w_strb   = 8'b11111111;
                    axi_w_last    = 1'b0;
                    axi_b_ready   = 1'b0;
                    axi_r_ready  = 1'b0;
                    axi_ar_valid = 1'b0;                                        
                end
            `ysyx22040228_AXIW_ADDR :begin
                    axi_aw_valid = 1'b1;
                    axi_aw_addr  = d_cache_addr;
                    axi_ar_addr  = 64'h0;
                    axi_aw_id    = 4'b0000;
                    axi_aw_len   = 8'h00;
                    axi_aw_size  = `AXI_SIZE_BYTES_8 ;
                    axi_aw_burst = 2'b01;
                    axi_w_valid   = 1'b0;
                    axi_w_data    = d_cache_data;
                    axi_w_strb    = 8'b11111111;
                    axi_w_last    = 1'b0;
                    axi_b_ready   = 1'b0;
                    axi_r_ready  = 1'b0;
                    axi_ar_valid = 1'b0;
                end
            `ysyx22040228_AXIW_WRITE : begin
                    axi_aw_valid = 1'b0;
                    axi_aw_addr  = d_cache_addr;
                    axi_ar_addr  = 64'h0;
                    axi_aw_id    = 4'b0000;
                    axi_aw_len   = 8'h00;
                    axi_aw_size  = 3'b000;
                    axi_aw_burst = 2'b0;
                    axi_w_valid  = 1'b1;
                    axi_w_data   = d_cache_data;
                    axi_w_strb   = 8'b11111111;
                    axi_w_last    = 1'b1;
                    axi_b_ready   = 1'b0;
                    axi_r_ready  = 1'b0;
                    axi_ar_valid = 1'b0;
                end
            `ysyx22040228_AXIW_RESP :begin
                    axi_aw_valid = 1'b0;
                    axi_aw_addr  = d_cache_addr;
                    axi_ar_addr  = 64'h0;
                    axi_aw_id    = 4'b0000;
                    axi_aw_len   = 8'h00;
                    axi_aw_size  = 3'b000;
                    axi_aw_burst = 2'b01;
                    axi_w_valid = 1'b0;
                    axi_w_data  = d_cache_data;
                    axi_w_strb   = 8'b11111111;
                    axi_w_last   = 1'b1;
                    axi_b_ready   = 1'b1;
                    axi_r_ready  = 1'b0;
                    axi_ar_valid = 1'b0;                 
                end

                default:; 
        endcase
                
        end

        `ysyx22040228_ARB_DWRITEU : begin
            case (axiw_state)    
                `ysyx22040228_AXIW_IDLE :begin
                    axi_aw_valid = 1'b0;
                    axi_aw_addr  = 64'h0;
                    axi_aw_id    = 4'b0000;
                    axi_aw_len   = 8'h00;
                    axi_aw_size  = 3'b000;
                    axi_aw_burst = 2'b0;
                    axi_w_valid  = 1'b0;
                    axi_w_data   = uncache_data;
                    axi_w_strb   = uncache_mask;
                    axi_w_last    = 1'b0;
                    axi_b_ready   = 1'b0; 
                    axi_r_ready  = 1'b0;
                    axi_ar_valid = 1'b0;                                     
                end
                `ysyx22040228_AXIW_ADDR : begin
                    axi_aw_valid = 1'b1;
                    axi_aw_addr  = uncache_addr;
                    axi_ar_addr  = 64'h0;
                    axi_aw_id    = 4'b0000;
                    axi_aw_len   = 8'h00;
                    axi_aw_size  = uncache_size_data;
                    axi_aw_burst = 2'b01;
                    axi_w_valid   = 1'b0;
                    axi_w_data    = uncache_data;
                    axi_w_strb    = uncache_mask;
                    axi_w_last    = 1'b0;
                    axi_b_ready   = 1'b0;
                    axi_r_ready  = 1'b0;
                    axi_ar_valid = 1'b0;
                end
                `ysyx22040228_AXIW_WRITE : begin
                    axi_aw_valid = 1'b0;
                    axi_aw_addr  = uncache_addr;
                    axi_ar_addr  = 64'h0;
                    axi_aw_id    = 4'b0000;
                    axi_aw_len   = 8'h00;
                    axi_aw_size  = 3'b000;
                    axi_aw_burst = 2'b0;
                    axi_w_valid  = 1'b1;
                    axi_w_data   = uncache_data;
                    axi_w_strb   = uncache_mask;
                    axi_w_last    = 1'b1;
                    axi_b_ready   = 1'b0;
                    axi_r_ready  = 1'b0;
                    axi_ar_valid = 1'b0;
                end
                `ysyx22040228_AXIW_RESP : begin
                    axi_aw_valid = 1'b0;
                    axi_aw_addr  = uncache_addr;
                    axi_ar_addr  = 64'h0;
                    axi_aw_id    = 4'b0000;
                    axi_aw_len   = 8'h00;
                    axi_aw_size  = 3'b000;
                    axi_aw_burst = 2'b01;
                    axi_w_valid  = 1'b0;
                    axi_w_data   = uncache_data;
                    axi_w_strb   = uncache_mask;
                    axi_w_last    = 1'b1;
                    axi_b_ready   = 1'b1;
                    axi_r_ready  = 1'b0;
                    axi_ar_valid = 1'b0;                 
                end

                default:; 
        endcase       
        end
            default: ; 
        endcase
    end

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            d_cache_data_o     <= 64'h0               ;
            d_cache_valid_     <= `ysyx22040228_ENABLE;
            i_cache_data       <= 64'h0               ;
            i_cache_valid_     <= `ysyx22040228_ENABLE;
            uncahce_data_o     <= 64'h0               ;
            uncahce_valid_     <= `ysyx22040228_ENABLE;
        end 
        else if(read_dcache_shankhand & (axi_r_last & axi_r_valid)) begin
            d_cache_data_o     <= axi_r_data        ;
            d_cache_valid_     <= `ysyx22040228_ABLE;
        end 
        else if(write_dcache_shankhand & (axi_b_ready & axi_b_valid)) begin
            d_cache_valid_     <= `ysyx22040228_ABLE;
        end 
        else if(read_icache_shankhand & (axi_r_last & axi_r_valid))begin
            i_cache_data       <= axi_r_data        ;
            i_cache_valid_     <= `ysyx22040228_ABLE;
        end 
        else if(read_uncahce_shankhand & (axi_r_last & axi_r_valid)) begin          
            uncahce_data_o     <= axi_r_data        ;
            uncahce_valid_     <= `ysyx22040228_ABLE;

        end 
        else if(write_uncahce_shankhand & (axi_b_ready & axi_b_valid)) begin
            uncahce_valid_     <= `ysyx22040228_ABLE;
        end 
        else begin
            d_cache_data_o     <= 64'h0               ;
            d_cache_valid_     <= `ysyx22040228_ENABLE;
            i_cache_data       <= 64'h0               ;
            i_cache_valid_     <= `ysyx22040228_ENABLE;
            uncahce_data_o     <= 64'h0               ;
            uncahce_valid_     <= `ysyx22040228_ENABLE;
        end 
    end


endmodule
/************************************************************
Author:LiGuoqi
Name:inst_cache.v
Function:write instraction cache
************************************************************/
// `include "ysyx_22040228defines.v"
// `include "ysyx_22040228defines_axi4.v"
// `include "ysyx_22040228TEG_CC.v"
//`include "S011HD1P_X32Y2D128_BW.v"
//`include "ysyx_22040228cache_defines.v"

`define ysyx22040228_I_IDLE    6'b000001
`define ysyx22040228_I_MISSRL  6'b000010 //--> read chiplink can use burst
`define ysyx22040228_I_HIT     6'b000100
`define ysyx22040228_I_MISSRH  6'b001000 //--> read APB can't use burst
`define ysyx22040228_I_READ    6'b100000
/* verilator lint_off LATCH */

module ysyx_22040228inst_cache (
    input       wire                                         clk             ,
    input       wire                                         rst             ,
    input       wire          [63:0]                         inst_addr       ,
    input       wire                                         inst_ready      ,
    input       wire                                         core_stall      ,
    input       wire                                         inst_fence      ,
    output      reg           [31:0]                         inst_data       ,
    output      reg                                          inst_valid      ,

    output      wire                                         cache_read_ena  ,
    output      wire          [63:0]                         cache_addr      ,
    input       wire          [63:0]                         cache_in_data   ,
    input       wire                                         cache_in_valid  ,

    output      wire                                         CE              ,
    output      wire                                         w_data_ena      ,
    output      wire          [127:0]                        w_strb_ram      ,
    output      wire          [5:0]                          icache_index    ,
    output      wire          [127:0]                        w_data_ram      ,
    input       wire          [127:0]                        data_out                     
);

    // froce define for verdi
    reg          read_ok_    ;
    reg          read_ok     ;
    wire   [`ysyx22040228_TEG_WITH]  oteg_ata_o    ;
    wire                             oteg_valid_o  ;
    wire   [`ysyx22040228_TEG_WITH]  tteg_ata_o    ;
    wire                             tteg_valid_o  ;
    //wire  [127:0] data_out ;
    reg  [2:0]  i_counter1 [`ysyx22040228_CACHE_DATA_W];
    reg  [2:0]  i_counter2 [`ysyx22040228_CACHE_DATA_W];
    reg         inst_hit_ok ;
    reg         write_i_ok  ; 
    reg         write_m_ok  ;
    // froce define for verdi

    wire   icache_if_shankhand   ;
    assign icache_if_shankhand = inst_ready && ~inst_valid  ;

    wire [`ysyx22040228_TEG_WITH]   icache_tag    =   inst_addr[31:9 ];
    /*wire [`ysyx22040228_INDEX_WITH] */assign icache_index  =   inst_addr[ 8:3 ];


    reg  [5:0]  state_inst     ;
    reg  [5:0]  state_inst_nxt ;
    reg  [6:0]  fence_counter  ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            fence_counter <= 7'h0 ; 
        end 
        else if(inst_fence)begin
            if(fence_counter >= 64)
                fence_counter <= fence_counter;
            else 
                fence_counter <= fence_counter+1;
        end 
        else begin
            fence_counter <= 7'h0 ; 
        end 
    end

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            state_inst <= `ysyx22040228_I_IDLE;
        end 
        else begin
            state_inst <= state_inst_nxt    ;
        end 
    end

    always @(*) begin 
        if(rst == `ysyx22040228_RSTENA) begin
            state_inst_nxt       =  `ysyx22040228_I_IDLE ;
        end 
        else begin 
            case (state_inst)
               `ysyx22040228_I_IDLE : begin
                   if(icache_if_shankhand)
                        state_inst_nxt = `ysyx22040228_I_READ;
                   else 
                        state_inst_nxt = `ysyx22040228_I_IDLE;  
               end 
               `ysyx22040228_I_READ  : begin
                   if((read_ok) && (((oteg_ata_o == icache_tag) && (oteg_valid_o == `ysyx22040228_ABLE)) || ((tteg_ata_o == icache_tag) && (tteg_valid_o == `ysyx22040228_ABLE))))
                        state_inst_nxt = `ysyx22040228_I_HIT;
                   else if(read_ok && ~((inst_addr >= `ysyx22040228_APB_START) && (inst_addr <= `ysyx22040228_APB_END)))
                        state_inst_nxt = `ysyx22040228_I_MISSRL;
                   else if(read_ok && ((inst_addr >= `ysyx22040228_APB_START) && (inst_addr <= `ysyx22040228_APB_END)))
                        state_inst_nxt = `ysyx22040228_I_MISSRH;
                   else
                        state_inst_nxt = `ysyx22040228_I_READ ;
               end 
               `ysyx22040228_I_HIT : begin
                   if(inst_hit_ok)
                        state_inst_nxt = `ysyx22040228_I_IDLE;
                   else 
                        state_inst_nxt = `ysyx22040228_I_HIT;
               end 
               `ysyx22040228_I_MISSRL : begin
                   if(write_i_ok)
                        state_inst_nxt = `ysyx22040228_I_READ ;
                   else 
                        state_inst_nxt = `ysyx22040228_I_MISSRL;  
               end 
               `ysyx22040228_I_MISSRH : begin
                   if(write_m_ok)
                        state_inst_nxt = `ysyx22040228_I_READ ;
                   else 
                        state_inst_nxt = `ysyx22040228_I_MISSRH;  
               end 
                default: begin
                  state_inst_nxt       =  `ysyx22040228_I_IDLE ;
                end 
            endcase 
        end 
    end 

    // reg          read_ok_    ;
    // reg          read_ok     ;
    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            read_ok_ = `ysyx22040228_ENABLE  ;
        end 
        else if(state_inst == `ysyx22040228_I_READ) begin
            read_ok_ = `ysyx22040228_ABLE    ;
        end 
        else begin
            read_ok_ = `ysyx22040228_ENABLE  ;
        end 
    end
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            read_ok <= `ysyx22040228_ENABLE  ;
        end 
        else begin
            read_ok <= read_ok_;
        end 
    end

    // reg         inst_hit_ok ;
    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            inst_data    = 32'b0                   ;
            inst_hit_ok  = `ysyx22040228_ENABLE    ;
            inst_valid   = `ysyx22040228_ENABLE    ;
        end 
        else if(state_inst == `ysyx22040228_I_HIT) begin
            if(core_stall == `ysyx22040228_ABLE) begin
                inst_data = 32'b0 ;
                inst_hit_ok = `ysyx22040228_ENABLE;
                inst_valid  = `ysyx22040228_ENABLE;
            end 
            else if((oteg_ata_o == icache_tag) && (oteg_valid_o == `ysyx22040228_ABLE))begin
                if(inst_addr[2] == `ysyx22040228_ABLE)   begin
                    inst_data =    data_out[63:32]      ;
                    inst_hit_ok  = `ysyx22040228_ABLE  ;
                    inst_valid   = `ysyx22040228_ABLE;
                end 
                else if(inst_addr[2] == `ysyx22040228_ENABLE) begin
                    inst_data =    data_out[31:0 ]      ;
                    inst_hit_ok  = `ysyx22040228_ABLE  ;
                    inst_valid   = `ysyx22040228_ABLE;
                end
            end
            else if((tteg_ata_o == icache_tag) && (tteg_valid_o == `ysyx22040228_ABLE))begin
                if(inst_addr[2] == `ysyx22040228_ABLE)   begin
                    inst_data = data_out[127:96]      ;
                    inst_hit_ok  = `ysyx22040228_ABLE  ;
                    inst_valid   = `ysyx22040228_ABLE;
                end 
                else if(inst_addr[2] == `ysyx22040228_ENABLE) begin
                    inst_data = data_out[95:64]      ;
                    inst_hit_ok  = `ysyx22040228_ABLE  ;
                    inst_valid   = `ysyx22040228_ABLE;
                end
            end
            else begin
                inst_data    = 32'b0                   ;
                inst_hit_ok  = `ysyx22040228_ENABLE    ;
                inst_valid   = `ysyx22040228_ENABLE    ;
            end
        end 
        else begin  
          inst_hit_ok  = `ysyx22040228_ENABLE          ; 
          inst_valid   = `ysyx22040228_ENABLE          ;   
        end 
    end


    reg   [127:0]   miss_data ;
    reg             miss_ena_l;
    reg   [127:0]   miss_strb_l;
    // reg             write_i_ok;  

    reg             cahce_miss_ena ;
    reg   [63:0]    cache_miss_addr ;
    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            cahce_miss_ena = `ysyx22040228_ENABLE;
            cache_miss_addr = `ysyx22040228_ZEROWORD ;
            miss_data =  128'h0  ;
            write_i_ok = `ysyx22040228_ENABLE ;
            miss_ena_l = `ysyx22040228_ENABLE ;
            miss_strb_l = `ysyx22040228_CACHE_STRBZ;
        end 
        else if((state_inst ==  `ysyx22040228_I_MISSRL) && (~cache_in_valid)) begin
            cahce_miss_ena = `ysyx22040228_ABLE     ;
            cache_miss_addr = {inst_addr[63:3],3'b0};
        end 
        else if((state_inst ==  `ysyx22040228_I_MISSRL) && (cache_in_valid)) begin
            cahce_miss_ena = `ysyx22040228_ENABLE;
            miss_data      = {cache_in_data, cache_in_data}  ;
            write_i_ok     = `ysyx22040228_ABLE  ;
            miss_ena_l     = `ysyx22040228_ABLE  ;
            if(oteg_valid_o == `ysyx22040228_ENABLE) begin
                miss_strb_l = `ysyx22040228_CACHE_STRBL;
            end 
            else if(tteg_valid_o == `ysyx22040228_ENABLE) begin
                miss_strb_l = `ysyx22040228_CACHE_STRBH;
            end 
            else if(i_counter1[icache_index] >= i_counter2[icache_index])begin
                miss_strb_l = `ysyx22040228_CACHE_STRBL;
            end   
            else if(i_counter1[icache_index] < i_counter2[icache_index]) begin
                miss_strb_l = `ysyx22040228_CACHE_STRBH;
            end
            else begin
                miss_strb_l = `ysyx22040228_CACHE_STRBZ;
                miss_ena_l = `ysyx22040228_ENABLE ;
            end  
        end
        else begin
            miss_data      = `ysyx22040228_CACHE_STRBZ ;
            miss_ena_l     = `ysyx22040228_ENABLE ;
            miss_strb_l = `ysyx22040228_CACHE_STRBZ;
            write_i_ok     = `ysyx22040228_ENABLE   ;
        end 
    end

    reg   [1:0]     missr_counter ;
    reg   [1:0]     missr_counter_n;
    /* verilator lint_off UNUSED */
    reg   [63:0]    temp_inst     ;
    reg   [127:0]   mism_data ;
    reg             mism_ena_l;
    reg   [127:0]   mism_strb_l;
    // reg             write_m_ok;  

    reg             cache_mism_ena ;
    reg   [63:0]    cahce_mism_addr ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)
            missr_counter <= 2'b00 ;
        else 
            missr_counter <= missr_counter_n ;
    end

    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            cache_mism_ena = `ysyx22040228_ENABLE;
            cahce_mism_addr = `ysyx22040228_ZEROWORD ;
            missr_counter_n  = 2'b00               ;
            write_m_ok     = `ysyx22040228_ENABLE   ;
            mism_ena_l     = `ysyx22040228_ENABLE ;
            mism_strb_l = `ysyx22040228_CACHE_STRBZ;
        end 
        else if((state_inst ==  `ysyx22040228_I_MISSRH) && (~cache_in_valid)) begin
            if(missr_counter <= 2'b01) begin
                cache_mism_ena = `ysyx22040228_ABLE      ;
                cahce_mism_addr = {inst_addr[63:3], 1'b1, 2'b0};
                missr_counter_n  = 2'b01                 ;
            end 
            else begin
                cache_mism_ena = `ysyx22040228_ABLE    ;
                cahce_mism_addr = {inst_addr[63:3], 1'b0, 2'b0};
                missr_counter_n  = 2'b11                 ;
            end 
        end 
        else if((state_inst ==  `ysyx22040228_I_MISSRH) && (cache_in_valid) && (missr_counter  == 2'b01)) begin
            cache_mism_ena = `ysyx22040228_ABLE    ;
            cahce_mism_addr = {inst_addr[63:3], 1'b0, 2'b0};
            missr_counter_n  = 2'b11                 ;
            temp_inst      = {cache_in_data[31:0], 32'h0};
        end 
        else if((state_inst ==  `ysyx22040228_I_MISSRH) && (cache_in_valid) && (missr_counter  == 2'b11)) begin
            missr_counter_n  = 2'b00               ;
            mism_data      = {temp_inst[63:32], cache_in_data[31:0], temp_inst[63:32], cache_in_data[31:0]};
            cache_mism_ena = `ysyx22040228_ENABLE;
            write_m_ok     = `ysyx22040228_ABLE  ;
            mism_ena_l     = `ysyx22040228_ABLE  ;
            if(oteg_valid_o == `ysyx22040228_ENABLE) begin
                mism_strb_l = `ysyx22040228_CACHE_STRBL;
            end 
            else if(tteg_valid_o == `ysyx22040228_ENABLE) begin
                mism_strb_l = `ysyx22040228_CACHE_STRBH;
            end 
            else if(i_counter1[icache_index] >= i_counter2[icache_index])begin
                mism_strb_l = `ysyx22040228_CACHE_STRBL;
            end   
            else if(i_counter1[icache_index] < i_counter2[icache_index]) begin
                mism_strb_l = `ysyx22040228_CACHE_STRBH;
            end 
        end
        else begin
            mism_data      = `ysyx22040228_CACHE_STRBZ ;
            mism_ena_l     = `ysyx22040228_ENABLE ;
            mism_strb_l = `ysyx22040228_CACHE_STRBZ;
            write_m_ok     = `ysyx22040228_ENABLE   ;
        end
    end

    wire                             oteg_ena_i    ;
    assign                           oteg_ena_i  =  inst_fence                                                                                ? `ysyx22040228_ABLE : 
                                                    ((state_inst ==  `ysyx22040228_I_MISSRL) && ((miss_strb_l == `ysyx22040228_CACHE_STRBL))) ? `ysyx22040228_ABLE :
                                                    ((state_inst ==  `ysyx22040228_I_MISSRH) && ((mism_strb_l == `ysyx22040228_CACHE_STRBL))) ? `ysyx22040228_ABLE :
                                                                                                                                              `ysyx22040228_ENABLE ;
    wire                             oteg_valid_i  ;
    assign                           oteg_valid_i = inst_fence ? `ysyx22040228_ENABLE : `ysyx22040228_ABLE ;
    wire         [22:0]              oteg_data_i   ;
    assign                           oteg_data_i  = inst_fence ? 23'h0 : icache_tag ;
    wire         [5:0]               oteg_addr_i   ; 
    assign                           oteg_addr_i  = inst_fence ? fence_counter[5:0] : icache_index ;    
    // wire   [`ysyx22040228_TEG_WITH]  oteg_ata_o    ;
    // wire                             oteg_valid_o  ;
    ysyx_22040228TEG_CC TEG_ICACHEO(
        .clk         (clk          ),
        .addr_i      (oteg_addr_i  ),
        .teg_i       (oteg_data_i  ),
        .teg_valid   (oteg_valid_i ),
        .teg_ena     (oteg_ena_i   ), 
        .data_o      (oteg_ata_o   ),
        .data_valid  (oteg_valid_o )
    );

    wire                             tteg_ena_i    ; 
    assign                           tteg_ena_i  =  inst_fence                                                                                ? `ysyx22040228_ABLE : 
                                                    ((state_inst ==  `ysyx22040228_I_MISSRL) && ((miss_strb_l == `ysyx22040228_CACHE_STRBH))) ? `ysyx22040228_ABLE :
                                                    ((state_inst ==  `ysyx22040228_I_MISSRH) && ((mism_strb_l == `ysyx22040228_CACHE_STRBH))) ? `ysyx22040228_ABLE :
                                                                                                                                              `ysyx22040228_ENABLE ;
    wire                             tteg_valid_i  ;
    assign                           tteg_valid_i = inst_fence ? `ysyx22040228_ENABLE : `ysyx22040228_ABLE ;
    wire         [22:0]              tteg_data_i   ;
    assign                           tteg_data_i  = inst_fence ? 23'h0 : icache_tag ;
    wire         [5:0]               tteg_addr_i   ; 
    assign                           tteg_addr_i  = inst_fence ? fence_counter[5:0] : icache_index ;
    // wire   [`ysyx22040228_TEG_WITH]  tteg_ata_o    ;
    // wire                             tteg_valid_o  ;
    ysyx_22040228TEG_CC TEG_ICACHET(
        .clk         (clk          ),
        .addr_i      (tteg_addr_i  ),
        .teg_i      (tteg_data_i  ),
        .teg_valid   (tteg_valid_i ),
        .teg_ena     (tteg_ena_i   ),
        .data_o      (tteg_ata_o   ),
        .data_valid  (tteg_valid_o )
    );

    //-------------------------------ram data---------------------------------//
    // wire  [127:0] data_out ;
    /*wire*/   assign       CE = 1'b0 ;
    //wire  [127:0] w_strb_ram;
    assign        w_strb_ram = (state_inst ==  `ysyx22040228_I_MISSRL) ? miss_strb_l :
                               (state_inst ==  `ysyx22040228_I_MISSRH) ? mism_strb_l :
                                                          `ysyx22040228_CACHE_STRBZ  ;
    //wire  [127:0] w_data_ram;
    assign        w_data_ram = (state_inst ==  `ysyx22040228_I_MISSRL) ? miss_data :
                               (state_inst ==  `ysyx22040228_I_MISSRH) ? mism_data :
                                                          `ysyx22040228_CACHE_STRBZ;
    //wire          w_data_ena;
    assign        w_data_ena = (state_inst ==  `ysyx22040228_I_MISSRL) ? miss_ena_l :
                               (state_inst ==  `ysyx22040228_I_MISSRH) ? mism_ena_l :
                                                               `ysyx22040228_ENABLE ;
    // S011HD1P_X32Y2D128_BW REM_ICACHE (
    //     .Q           (data_out     ) ,
    //     .CLK         (clk          ) ,
    //     .CEN         (CE           ) ,
    //     .WEN         ( ~w_data_ena ) ,
    //     .BWEN        ( ~w_strb_ram ) ,
    //     .A           (icache_index ) ,
    //     .D           (w_data_ram   )
    // );


    //--------------------------------------bit code---------------------------//
    // reg  [2:0]  i_counter1 [`ysyx22040228_CACHE_DATA_W];
    // reg  [2:0]  i_counter2 [`ysyx22040228_CACHE_DATA_W];
    integer i ;

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
		    for(i = 0;i<64;i=i+1) begin
			   i_counter1[i][2:0] <= 3'd0;
               i_counter2[i][2:0] <= 3'd0;
		    end
        end 
        if(((state_inst == `ysyx22040228_I_HIT) && ((oteg_ata_o == icache_tag) && (oteg_valid_o == `ysyx22040228_ABLE))) || ((miss_strb_l == `ysyx22040228_CACHE_STRBL) | (mism_strb_l == `ysyx22040228_CACHE_STRBL)))
            i_counter1[icache_index] <= 3'b0 ;
        if(((state_inst == `ysyx22040228_I_HIT) && ((tteg_ata_o == icache_tag) && (tteg_valid_o == `ysyx22040228_ABLE))) || ((miss_strb_l == `ysyx22040228_CACHE_STRBH) | (mism_strb_l == `ysyx22040228_CACHE_STRBH)))
            i_counter2[icache_index] <= 3'b0 ;
        if(icache_if_shankhand && inst_valid) begin
		    for(i = 0;i<64;i=i+1) begin
			   i_counter1[i][2:0] <= (i_counter1[i] == 3'd7) ? 3'd7 : i_counter1[i][2:0] + 1'b1;
               i_counter2[i][2:0] <= (i_counter2[i] == 3'd7) ? 3'd7 : i_counter2[i][2:0] + 1'b1;
		    end
        end 
	end

    assign cache_read_ena = (state_inst ==  `ysyx22040228_I_MISSRL) ? cahce_miss_ena : 
                            (state_inst ==  `ysyx22040228_I_MISSRH) ? cache_mism_ena :
                                                                 `ysyx22040228_ENABLE;
    assign cache_addr     = (state_inst ==  `ysyx22040228_I_MISSRL) ? cache_miss_addr : 
                            (state_inst ==  `ysyx22040228_I_MISSRH) ? cahce_mism_addr :
                                                                `ysyx22040228_ZEROWORD;

/* verilator lint_on LATCH */

endmodule    
// `include "ysyx_22040228defines_axi4.v"
// `include "ysyx_22040228defines.v"

// // Burst types
// `define AXI_BURST_TYPE_FIXED                                2'b00
// `define AXI_BURST_TYPE_INCR                                 2'b01
// `define AXI_BURST_TYPE_WRAP                                 2'b10
// // Access permissions
// `define AXI_PROT_UNPRIVILEGED_ACCESS                        3'b000
// `define AXI_PROT_PRIVILEGED_ACCESS                          3'b001
// `define AXI_PROT_SECURE_ACCESS                              3'b000
// `define AXI_PROT_NON_SECURE_ACCESS                          3'b010
// `define AXI_PROT_DATA_ACCESS                                3'b000
// `define AXI_PROT_INSTRUCTION_ACCESS                         3'b100
// // Memory types (AR)
// `define AXI_ARCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
// `define AXI_ARCACHE_DEVICE_BUFFERABLE                       4'b0001
// `define AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
// `define AXI_ARCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
// `define AXI_ARCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b1010
// `define AXI_ARCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b1110
// `define AXI_ARCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1010
// `define AXI_ARCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
// `define AXI_ARCACHE_WRITE_BACK_NO_ALLOCATE                  4'b1011
// `define AXI_ARCACHE_WRITE_BACK_READ_ALLOCATE                4'b1111
// `define AXI_ARCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1011
// `define AXI_ARCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111
// // Memory types (AW)
// `define AXI_AWCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
// `define AXI_AWCACHE_DEVICE_BUFFERABLE                       4'b0001
// `define AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
// `define AXI_AWCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
// `define AXI_AWCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b0110
// `define AXI_AWCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b0110
// `define AXI_AWCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1110
// `define AXI_AWCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
// `define AXI_AWCACHE_WRITE_BACK_NO_ALLOCATE                  4'b0111
// `define AXI_AWCACHE_WRITE_BACK_READ_ALLOCATE                4'b0111
// `define AXI_AWCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1111
// `define AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111

// `define AXI_SIZE_BYTES_1                                    3'b000
// `define AXI_SIZE_BYTES_2                                    3'b001
// `define AXI_SIZE_BYTES_4                                    3'b010
// `define AXI_SIZE_BYTES_8                                    3'b011
// `define AXI_SIZE_BYTES_16                                   3'b100
// `define AXI_SIZE_BYTES_32                                   3'b101
// `define AXI_SIZE_BYTES_64                                   3'b110
// `define AXI_SIZE_BYTES_128                                  3'b111

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
    assign                   shankhand_successw =  success_w                         ;
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
                if(shankhand_successr)
                    timer_state_n = `ysyx22040228_TIMER_HANDL ;
                else 
                    timer_state_n = `ysyx22040228_TIMER_IDLE  ;
            end  
            `ysyx22040228_TIMER_HANDL: begin
                timer_state_n = `ysyx22040228_TIMER_RESPR  ;
            end 
            `ysyx22040228_TIMER_RESPR : begin
                if(resp_success)
                    timer_state_n = `ysyx22040228_TIMER_IDLE ;
                else 
                    timer_state_n = `ysyx22040228_TIMER_RESPR ;
            end 
            default: timer_state_n = `ysyx22040228_TIMER_IDLE ; 
        endcase
    end

    reg     [1:0]            timew_state        ;
    reg     [1:0]            timew_state_n      ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)
            timew_state <= `ysyx22040228_TIMER_IDLE;
        else 
            timew_state <= timew_state_n ;
    end

    always @(*) begin
        case (timew_state)
            `ysyx22040228_TIMER_IDLE: begin
                if(shankhand_successw)
                    timew_state_n = `ysyx22040228_TIMER_HANDL ;
                else 
                    timew_state_n = `ysyx22040228_TIMER_IDLE  ;
            end  
            `ysyx22040228_TIMER_HANDL: begin
                timew_state_n = `ysyx22040228_TIMER_RESPW  ;
            end 
            `ysyx22040228_TIMER_RESPW : begin
                if(resp_success)
                    timew_state_n = `ysyx22040228_TIMER_IDLE ;
                else 
                    timew_state_n = `ysyx22040228_TIMER_RESPW ;
            end 
            default: timew_state_n = `ysyx22040228_TIMER_IDLE ; 
        endcase
    end

    assign time_axi_aw_ready = 1'b1 && time_axi_aw_valid ;
    assign time_axi_w_ready  = 1'b1 && success_aw ;


    reg    [3:0 ]  timeraw_id_temp   ;

    always @(posedge clk) begin
        if(success_aw) begin
            timeraw_id_temp <= time_axi_aw_id ;
        end 
        else if(success_b) begin
            timeraw_id_temp <= 4'b0000        ;
        end 
        else begin
            timeraw_id_temp <= timeraw_id_temp;
        end 
    end

    assign time_axi_b_id    = (timew_state == `ysyx22040228_TIMER_RESPW) ? timeraw_id_temp : 4'b0000 ;
    assign time_axi_b_resp  = (timew_state == `ysyx22040228_TIMER_RESPW) ? 2'b00           : 2'b00   ; 
    assign time_axi_b_valid = (timew_state == `ysyx22040228_TIMER_RESPW) ? 1'b1            : 1'b0    ;


    wire   csr_mtime_readena                                                                  ;
    assign csr_mtime_readena    = success_ar && (time_axi_ar_addr == `ysyx22040228_MTIME)     ;
    wire   csr_mtimecmp_readena                                                               ;
    assign csr_mtimecmp_readena = success_ar && (time_axi_ar_addr == `ysyx22040228_MTIMECMP)  ;

    wire   csr_mtime_writeena                                                                ;
    assign csr_mtime_writeena     = success_w && (time_axi_aw_addr == `ysyx22040228_MTIME)   ;
    wire   csr_mtimecmp_writeena                                                             ;
    assign csr_mtimecmp_writeena  =  success_w && (time_axi_aw_addr == `ysyx22040228_MTIMECMP);

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

    assign time_axi_ar_ready = 1'b1 ;

    reg   [63:0] read_csrdata_temp ;
    always @(posedge clk) begin
        if(csr_mtime_readena)
            read_csrdata_temp <= csr_mtime ;
        else if(csr_mtimecmp_readena) 
            read_csrdata_temp <= csr_mtimecmp;
        else if(success_r) 
            read_csrdata_temp <= 64'h0       ;
        else 
            read_csrdata_temp <= read_csrdata_temp;
    end

    
    reg     [3:0]  timerar_id_temp ;

    always @(posedge clk) begin
        if(success_ar) begin
            timerar_id_temp <= time_axi_ar_id ;
        end           
        else if(success_r) begin
            timerar_id_temp <= 4'b0000        ;
        end 
        else begin
            timerar_id_temp <= timerar_id_temp;
        end 
    end

    assign time_axi_r_data = (timer_state == `ysyx22040228_TIMER_RESPR) ? read_csrdata_temp : 64'h0  ;
    assign time_axi_r_id   = (timer_state == `ysyx22040228_TIMER_RESPR) ? timerar_id_temp   : 4'b0000;
    assign time_axi_r_last = (timer_state == `ysyx22040228_TIMER_RESPR) ? 1'b1              : 1'b0   ;
    assign time_axi_r_resp = (timer_state == `ysyx22040228_TIMER_RESPR) ? 2'b00             : 2'b00  ;
    assign time_axi_r_valid= (timer_state == `ysyx22040228_TIMER_RESPR) ? 1'b1              : 1'b0   ;

endmodule

/************************************************************
Author:LiGuoqi
Name:csr.v
Function:The necessary registers in machine mode are designed
         andimplented.
************************************************************/
//`include "ysyx_22040228defines.v"
module ysyx_22040228csr (
    input          wire                                        clk              ,
    input          wire                                        rst              ,
    input          wire        [`ysyx22040228_PCBUS]           pc_i             ,

    input          wire                                        csr_wr_en        ,
    input          wire                                        csr_rd_en        ,
    input          wire        [11:0]                          csr_idx          ,

    input          wire                                        cmt_mret_ena     ,
    input          wire                                        ecall_trap_ena   ,
    input          wire        [`ysyx22040228_REGBUS]          trap_mcause_value,

    input          wire                                        tmr_intr_ena     ,
    output         wire                                        tmr_trap_ena     ,

    output         wire        [`ysyx22040228_REGBUS]          read_csr_data    ,
    input          wire        [`ysyx22040228_REGBUS]          wbck_csr_data    ,

    input          wire                                        ex_stall       
);

// import "DPI-C" function void difftest_dut_csrs(
//     input longint mcycle_val, //0xb00
//     input longint mstatus_val, //0x300
//     input longint mtvec_val, //0x305
//     input longint mepc_val, //0x341
//     input longint mcause_val, //0x342
//     input longint mie_val, //0x304
//     input longint mip_val, //0x344
//     input longint mscratch_val //0x340
// );

// always@(*)begin
// difftest_dut_csrs(    
//     csr_mcycle  ,
//     csr_mstatus ,
//     csr_mtvec   ,
//     csr_mepc    ,
//     csr_mcause  ,
//     csr_mie     ,
//     csr_mip     ,
//     csr_mscrstch
// );
//end
// 0xb00
wire       sel_mcycle  =  (csr_idx == 12'hb00) ;
wire       rd_mcycle   =  csr_rd_en && sel_mcycle  ;
wire       wr_mcycle   =  csr_wr_en && sel_mcycle  ;
reg [`ysyx22040228_REGBUS] csr_mcycle ;
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA) begin csr_mcycle <= `ysyx22040228_ZEROWORD    ; end
    else if(wr_mcycle)     begin csr_mcycle <= wbck_csr_data ; end
    else                   begin csr_mcycle <= csr_mcycle + 64'd1 ;end 
end
//0x300
reg csr_mstatus_mpie ;
wire      sel_mstatus  =  (csr_idx == 12'h300) ;
wire      rd_mstatus   =  sel_mstatus && csr_rd_en  ;
wire      wr_mstatus   =  sel_mstatus && csr_wr_en  ;           
    
wire      mstatus_mpie_ena = wr_mstatus | cmt_mret_ena | (ecall_trap_ena | tmr_trap_ena) ;
reg csr_mstatus_mie ;
wire      mstatus_mpie_nxt = (ecall_trap_ena | tmr_trap_ena) ? csr_mstatus_mie : 
                                               cmt_mret_ena  ? 1'b1            :
                                               wr_mstatus    ? wbck_csr_data[7]:
                                                               csr_mstatus_mpie;

always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA)                begin csr_mstatus_mpie <= 1'b0 ; end
    else if(mstatus_mpie_ena & ~ex_stall) begin csr_mstatus_mpie <= mstatus_mpie_nxt ; end
    else                                  begin csr_mstatus_mpie <= csr_mstatus_mpie ; end
end

wire mstatus_mie_ena = mstatus_mpie_ena ;
wire mstatus_mie_nxt = (ecall_trap_ena | tmr_trap_ena) ? 1'b0            :
                                          cmt_mret_ena ? csr_mstatus_mpie:
                                            wr_mstatus ? wbck_csr_data[3]:
                                                         csr_mstatus_mie ;
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA)               begin csr_mstatus_mie <= 1'b0 ; end
    else if(mstatus_mie_ena & ~ex_stall) begin csr_mstatus_mie <= mstatus_mie_nxt ; end 
    else                                 begin csr_mstatus_mie <= csr_mstatus_mie ; end 
end
reg [1:0] csr_mstatus_mpp ;
wire mstatus_mpp_ena = mstatus_mpie_ena ;
wire [1:0] mstatus_mpp_nxt = (ecall_trap_ena | tmr_trap_ena) ? 2'b11                   :
                                                cmt_mret_ena ? 2'b00                   :
                                                  wr_mstatus ? wbck_csr_data[12:11]    :
                                                            csr_mstatus_mpp            ;
always @(posedge clk ) begin
    if(rst == `ysyx22040228_RSTENA)   begin csr_mstatus_mpp <= 2'b00 ;  end
    else if(mstatus_mpp_ena) begin csr_mstatus_mpp <= mstatus_mpp_nxt ; end
    else                     begin csr_mstatus_mpp <= csr_mstatus_mpp ; end 
end

wire  [1:0] csr_mstatus_xs ;
assign csr_mstatus_xs = 2'b00 ;

reg   [1:0] csr_mstatus_fs ;
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA)    begin csr_mstatus_fs <= 2'b00 ;end
    else if(wr_mstatus)       begin csr_mstatus_fs <= wbck_csr_data[14:13] ; end
    else                      begin csr_mstatus_fs <= csr_mstatus_fs ; end
end

wire csr_mstatus_sd = (csr_mstatus_xs == 2'b11) | (csr_mstatus_fs == 2'b11) ;

wire   [`ysyx22040228_REGBUS]             csr_mstatus         ;
assign csr_mstatus[63]        = csr_mstatus_sd    ;
assign csr_mstatus[62:36]     = 27'd0             ;
assign csr_mstatus[35:34]     = 2'b00             ;
assign csr_mstatus[33:32]     = 2'b00             ;
assign csr_mstatus[31:23]     = 9'd0              ;
assign csr_mstatus[22:17]     = 6'd0              ;
assign csr_mstatus[16:15]     = csr_mstatus_xs    ;
assign csr_mstatus[14:13]     = csr_mstatus_fs    ;
assign csr_mstatus[12:11]     = csr_mstatus_mpp   ;
assign csr_mstatus[10: 9]     = 2'b00             ;
assign csr_mstatus[8]         = 1'b0              ;
assign csr_mstatus[7]         = csr_mstatus_mpie  ;
assign csr_mstatus[6]         = 1'b0              ;
assign csr_mstatus[5]         = 1'b0              ;
assign csr_mstatus[4]         = 1'b0              ;
assign csr_mstatus[3]         = csr_mstatus_mie   ;
assign csr_mstatus[2]         = 1'b0              ;
assign csr_mstatus[1]         = 1'b0              ;
assign csr_mstatus[0]         = 1'b0              ;

//0x305
wire sel_mtvec = (csr_idx == 12'h305) ;
wire rd_mtvec  = (sel_mtvec && csr_rd_en) | ecall_trap_ena | tmr_trap_ena ;
wire wr_mtvec  = sel_mtvec && csr_wr_en ;

reg [63:2] csr_mtvec_base ;
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA) begin csr_mtvec_base <= 62'd0 ; end
    else if(wr_mtvec)      begin csr_mtvec_base <= wbck_csr_data[63:2] ; end
    else                   begin csr_mtvec_base <= csr_mtvec_base ; end
end

wire [1:0] csr_mtvec_mode ;
assign csr_mtvec_mode = 2'b00 ;
wire [`ysyx22040228_REGBUS] csr_mtvec ;
assign csr_mtvec = {csr_mtvec_base , csr_mtvec_mode} ;

//0x341
wire sel_mepc = (csr_idx == 12'h341) ;
wire rd_mepc  = (sel_mepc && csr_rd_en) | cmt_mret_ena ;
wire wr_mepc  = (sel_mepc && csr_wr_en) | ecall_trap_ena | tmr_trap_ena ;

reg [`ysyx22040228_REGBUS] csr_mepc ;
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA) begin csr_mepc <= `ysyx22040228_ZEROWORD ; end
    else if(wr_mepc)       begin csr_mepc <= {wbck_csr_data[63:2],2'b00} ; end
    else                   begin csr_mepc <= csr_mepc ; end 
end

//0x342
wire sel_mcause = (csr_idx == 12'h342) ;
wire rd_mcause  = sel_mcause && csr_rd_en ;
wire wr_mcause  = sel_mcause && csr_wr_en ;
wire csr_mcause_ena = wr_mcause | ecall_trap_ena | tmr_trap_ena ;
reg [`ysyx22040228_REGBUS] csr_mcause ;
wire [`ysyx22040228_REGBUS] csr_mcause_nxt = (ecall_trap_ena | tmr_trap_ena) ? trap_mcause_value :
                                                       wr_mcause ? wbck_csr_data     :
                                                                   csr_mcause        ;

always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA)     begin csr_mcause <= `ysyx22040228_ZEROWORD ; end
    else if(csr_mcause_ena)    begin csr_mcause <= csr_mcause_nxt ; end
    else                       begin csr_mcause <= csr_mcause ; end
end

//0x304
wire sle_mie = (csr_idx == 12'h304) ;
wire rd_mie  = sle_mie && csr_rd_en ;
wire wr_mie  = sle_mie && csr_wr_en ;

reg csr_mie_mtie ;
always @(posedge clk) begin
    if(rst ==`ysyx22040228_RSTENA) begin csr_mie_mtie <= 1'b0 ; end
    else if(wr_mie)       begin csr_mie_mtie <= wbck_csr_data[7] ; end
    else                  begin csr_mie_mtie <= csr_mie_mtie ; end
end

wire [`ysyx22040228_REGBUS] csr_mie ;
assign csr_mie[6:0]  = 7'd0 ;
assign csr_mie[63:8] = 56'd0;
assign csr_mie[7]    = csr_mie_mtie ;

//0x344
wire sel_mip = (csr_idx == 12'h344) ;
wire rd_mip  = sel_mip && csr_rd_en ;

reg csr_mip_mtip ;
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA) begin csr_mip_mtip <= 1'b0 ; end
    else                   begin csr_mip_mtip <= tmr_intr_ena ; end
end

wire [`ysyx22040228_REGBUS] csr_mip ;
assign csr_mip[6:0] = 7'd0 ;
assign csr_mip[7]   = csr_mip_mtip ;
assign csr_mip[63:8]= 56'd0 ;

assign tmr_trap_ena = csr_mip_mtip & csr_mstatus_mie & csr_mie_mtie && (pc_i != 64'd0) ;

//0x340
wire sel_mscratch = (csr_idx == 12'h340) ;
wire rd_mscrstch  = sel_mscratch && csr_rd_en ;
wire wr_mscrstch  = sel_mscratch && csr_wr_en ;

reg [`ysyx22040228_REGBUS] csr_mscrstch ;
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA) begin csr_mscrstch <= `ysyx22040228_ZEROWORD ; end
    else if(wr_mscrstch)   begin csr_mscrstch <= wbck_csr_data ; end
    else                   begin csr_mscrstch <= csr_mscrstch ; end
end

//0x100
//wire [`ysyx22040228_REGBUS] csr_sstatus ;
//assign csr_sstatus[63]    = (csr_mstatus_fs == 2'b11) ;
//assign csr_sstatus[62:15] = 48'd0 ;
//assign csr_sstatus[14:13] = csr_mstatus_fs ;
//assign csr_sstatus[12:0]  = 13'd0 ;


assign read_csr_data = 64'd0 | ({64{rd_mcycle}} & csr_mcycle)
                             | ({64{rd_mstatus}} & csr_mstatus)
                             | ({64{rd_mtvec}} & csr_mtvec)
                             | ({64{rd_mepc}} & csr_mepc)
                             | ({64{rd_mcause}} & csr_mcause)
                             | ({64{rd_mie}} & csr_mie)
                             | ({64{rd_mip}} & csr_mip)
                             | ({64{rd_mscrstch}} & csr_mscrstch) ;
                            



endmodule 

/************************************************************
Author:LiGuoqi
Name:ctrl.v
Function:Pause control of the whole pipeline
************************************************************/
//`include "ysyx_22040228defines.v"
module ysyx_22040228ctrl (
    input                   wire                                      rst           ,
    input                   wire                                      if_stall_req  ,
    input                   wire                                      id_stall_req  ,
    input                   wire                                      ex_stall_req  ,
    input                   wire                                      mem_stall_req ,

    output                  reg              [ 4:0]                   stall_ctrl    
);

always @(*) begin
    if(rst == `ysyx22040228_RSTENA)          begin stall_ctrl = 5'b00000  ;  end
    else if(mem_stall_req == `ysyx22040228_STOP) begin stall_ctrl = 5'b11111  ;  end
    else if(ex_stall_req == `ysyx22040228_STOP)  begin stall_ctrl = 5'b01111  ;  end
    else if(id_stall_req == `ysyx22040228_STOP)  begin stall_ctrl = 5'b00111  ;  end
    else if(if_stall_req == `ysyx22040228_STOP)  begin stall_ctrl = 5'b00000  ;  end
    else                                         begin stall_ctrl = 5'b00011  ;  end 
end
    
endmodule//ctrl

/************************************************************
Author:LiGuoqi
Name:d_cache1.v
Function:write data cache
************************************************************/
`define ysyx22040228_IDLE    6'b000001
`define ysyx22040228_READ    6'b000010
`define ysyx22040228_HIT     6'b000100
`define ysyx22040228_DIRTY   6'b001000
`define ysyx22040228_MISSR   6'b010000
`define ysyx22040228_UNCACHE 6'b100000
`define ysyx22040228_MISSW   6'b010000

`define ysyx22040228_FENCEIDLE  3'b001
`define ysyx22040228_FENCECOUNT 3'b010
`define ysyx22040228_FENCEEND   3'b100

// `include "ysyx_22040228defines.v"
// `include "ysyx_22040228defines_axi4.v"
//`include "S011HD1P_X32Y2D128_BWF.v"
//`include "ysyx_22040228TEG_CC.v"
/* verilator lint_off UNUSED */
module ysyx_22040228data_cache (
    input         wire                                        clk                ,
    input         wire                                        rst                ,
    //-------------------------input  cache-------------------------------------//
    input         wire        [`ysyx22040228_DATAADDRBUS]     mem_addr_i         ,
    input         wire        [`ysyx22040228_REGBUS]          mem_data_i         ,
    input         wire        [7:0]                           mem_strb_i         ,
    input         wire                                        mem_fence_i        ,
    input         wire                                        mem_read_valid     ,
    input         wire                                        mem_write_valid    ,
    output        reg         [`ysyx22040228_AXI_REGBUS]      mem_data_out       ,
    output        wire                                        mem_data_ready     ,

    input         wire        [`ysyx22040228_DCACHE_DATA_W]   in_dcache_data     ,
    input         wire                                        in_dcache_ready    ,
    output        wire        [63:0]                          out_dcache_addr    ,
    output        wire        [`ysyx22040228_DCACHE_DATA_W]   out_dcache_data    ,
    //type[0]---->  dirty | fence 
    //type[1]---->  missr
    //type[2]---->  dirtyw
    //type[3]---->  missw
    output        wire        [3:0]                           out_dcache_type    ,

    output        wire                                        CE                 ,
    output        wire                                        w_data_ena         ,
    output        wire        [127:0]                         w_strb_ram         ,
    output        wire        [5:0]                           w_data_addr        ,
    output        wire        [127:0]                         w_data_ram         ,
    input         wire        [127:0]                         data_out            
);
    //----------------------------------fence-------------------------------------//    
    // froce define for verdi
    wire   [`ysyx22040228_TEG_WITH]  oteg_ata_o    ;
    wire                             oteg_valid_o  ;
    wire   [`ysyx22040228_TEG_WITH]  tteg_ata_o    ;
    wire                             tteg_valid_o  ;
    //wire  [127:0] data_out ;
    reg    dirty1 [`ysyx22040228_CACHE_DATA_W];
    reg    dirty2 [`ysyx22040228_CACHE_DATA_W];
    reg  [2:0]  counter1 [`ysyx22040228_CACHE_DATA_W];
    reg  [2:0]  counter2 [`ysyx22040228_CACHE_DATA_W];
    reg          read_ok_      ;
    reg          read_ok       ;
    reg          dirty_ok      ;
    reg          missr_i_ok    ;
    reg          read_w_ok_    ;
    reg          read_w_ok     ;
    reg          dirtyw_ok     ;
    reg          memw_hit_ok   ;
    reg          missw_i_ok    ;

    // froce define for verdi

    reg [7:0] docker_counter ;
    reg [7:0] counter_temp   ;
    reg [5:0] fence_index    ;
    reg       transt_sign1   ;
    reg       transt_sign2   ;
    reg       fence_finish   ;
    reg       check_valid1   ;
    reg       check_valid2   ;
    wire   counterscl        ;
    assign counterscl = (docker_counter == 8'd63) ? 1'b1 : 1'b0  ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            fence_index <= 6'b000000 ;
            docker_counter <= 8'd1   ;
            counter_temp <= 8'd0     ;
            transt_sign1 <= `ysyx22040228_ENABLE ;
            transt_sign2 <= `ysyx22040228_ENABLE ;
            fence_finish <= `ysyx22040228_ENABLE ;
            check_valid1 <= `ysyx22040228_ENABLE ;
            check_valid2 <= `ysyx22040228_ENABLE ;
        end 
        else if((mem_fence_i) && (docker_counter < 8'd129))begin 
            if(docker_counter < 8'd64) begin
                if(counter_temp != docker_counter)begin
                    counter_temp  <= docker_counter       ;
                    //transt_sign1  <= `ysyx22040228_ABLE   ;
                    check_valid1  <= `ysyx22040228_ABLE   ;
                end 
                else if(check_valid1) begin
                    if(oteg_valid_o) begin
                       transt_sign1  <= `ysyx22040228_ABLE  ;
                       check_valid1  <= `ysyx22040228_ENABLE;
                    end 
                    else begin
                       transt_sign1  <= `ysyx22040228_ENABLE;
                       check_valid1  <= `ysyx22040228_ENABLE;
                       fence_index <= fence_index + 1       ;
                       docker_counter <= docker_counter + 1 ;
                    end 
                end 
                else if(in_dcache_ready) begin
                    transt_sign1 <= `ysyx22040228_ENABLE  ;
                    docker_counter <= docker_counter + 1  ;
                    fence_index <= (fence_index + 1) & {6{~counterscl}}  ;
                end  
            end 
            else if(docker_counter >= 8'd64) begin
                if(counter_temp != docker_counter)begin
                    counter_temp  <= docker_counter       ;
                    //transt_sign2  <= `ysyx22040228_ABLE   ;
                    check_valid2  <= `ysyx22040228_ABLE   ;
                end 
                else if(check_valid2) begin
                    if(tteg_valid_o) begin
                       transt_sign2  <= `ysyx22040228_ABLE  ;
                       check_valid2  <= `ysyx22040228_ENABLE;
                    end 
                    else begin
                       transt_sign2  <= `ysyx22040228_ENABLE;
                       check_valid2  <= `ysyx22040228_ENABLE;
                       fence_index <= fence_index + 1       ;
                       docker_counter <= docker_counter + 1 ;
                    end 
                end 
                else if(in_dcache_ready) begin
                    transt_sign2 <= `ysyx22040228_ENABLE  ;
                    docker_counter <= docker_counter + 1  ;
                    fence_index <= fence_index + 1        ;
                end  
            end 
        end 
        else if(docker_counter == 8'd129) begin
            docker_counter <= 8'd1                 ;
        end 
        else begin
            docker_counter <= 8'd1                 ; 
        end 
    end

    //-----------------------------------dcache----------------------------------//
    wire   dcache_read_shankhand   ;
    wire   dcache_write_shankhand  ;
    wire   dcache_read_ready ;
    wire   dcache_write_ready;
    reg  [5:0]  state_dread     ;
    reg  [5:0]  state_dwrite     ;
    assign dcache_read_shankhand  = mem_read_valid && dcache_read_ready  ;
    assign dcache_write_shankhand = mem_write_valid && dcache_write_ready;
    assign dcache_read_ready      = (state_dread == `ysyx22040228_IDLE)  ;
    assign dcache_write_ready     = (state_dwrite == `ysyx22040228_IDLE) ;

    wire [22:0 ] dcache_tag    =   mem_addr_i[31:9];
    wire [ 5:0 ] dcache_index  =   mem_addr_i[ 8:3 ];
    //wire [ 2:0 ] dcache_offset =   mem_addr_i[ 2:0 ];

    reg  [5:0]  state_dread_nxt ;

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            state_dread <= `ysyx22040228_IDLE;
        end 
        else begin
            state_dread <= state_dread_nxt    ;
        end 
    end
    reg         mem_hit_ok ;
    always @(*) begin 
        if(rst == `ysyx22040228_RSTENA) begin
            state_dread_nxt = `ysyx22040228_IDLE;  
        end 
        else begin
            case (state_dread)
               `ysyx22040228_IDLE : begin
                   if(dcache_read_shankhand)
                        state_dread_nxt = `ysyx22040228_READ;
                   else 
                        state_dread_nxt = `ysyx22040228_IDLE;  
               end 
               `ysyx22040228_READ  : begin
                   if((read_ok) && (((oteg_ata_o == dcache_tag) && (oteg_valid_o == `ysyx22040228_ABLE)) || ((tteg_ata_o == dcache_tag) && (tteg_valid_o == `ysyx22040228_ABLE))))
                        state_dread_nxt = `ysyx22040228_HIT  ;
                   else if((read_ok) && (((dirty1[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] >= counter2[dcache_index]) && (tteg_valid_o == `ysyx22040228_ABLE)) || ((dirty2[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] < counter2[dcache_index]) && (tteg_valid_o == `ysyx22040228_ABLE))))
                        state_dread_nxt = `ysyx22040228_DIRTY;
                   else if(read_ok)
                        state_dread_nxt = `ysyx22040228_MISSR;
                   else
                        state_dread_nxt = `ysyx22040228_READ ;
               end 
               `ysyx22040228_HIT : begin
                   if(mem_hit_ok)
                        state_dread_nxt = `ysyx22040228_IDLE;
                   else 
                        state_dread_nxt = `ysyx22040228_HIT;
               end 
               `ysyx22040228_MISSR : begin
                   if(missr_i_ok)
                        state_dread_nxt = `ysyx22040228_READ ;
                   else 
                        state_dread_nxt = `ysyx22040228_MISSR;  
               end 
               `ysyx22040228_DIRTY : begin
                   if(dirty_ok)
                        state_dread_nxt = `ysyx22040228_MISSR;
                    else 
                        state_dread_nxt = `ysyx22040228_DIRTY;
               end 
                default: begin
                  state_dread_nxt       =  `ysyx22040228_IDLE ;
                end 
            endcase 
        end 
    end 

    // reg          read_ok_    ;
    // reg          read_ok     ;
    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            read_ok_ = `ysyx22040228_ENABLE ;
        end 
        else if(state_dread == `ysyx22040228_READ) begin
            read_ok_ = `ysyx22040228_ABLE  ;
        end 
        else begin
            read_ok_ = `ysyx22040228_ENABLE ;
        end 
    end
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)
            read_ok <= `ysyx22040228_ENABLE ;
        else 
            read_ok <= read_ok_;
    end

    reg         hit_data_ready;
    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            mem_hit_ok     = `ysyx22040228_ENABLE    ; 
            mem_data_out   = 64'b0                   ;
            hit_data_ready = `ysyx22040228_ENABLE    ; 
        end 
        else if(state_dread == `ysyx22040228_HIT) begin
            if((oteg_ata_o == dcache_tag) && (oteg_valid_o == `ysyx22040228_ABLE))begin
                mem_hit_ok     = `ysyx22040228_ABLE  ;
                mem_data_out   = data_out[63:0]      ;
                hit_data_ready = `ysyx22040228_ABLE  ;
            end
            else /*if((tteg_ata_o == dcache_tag) && (tteg_valid_o == `ysyx22040228_ABLE))*/begin
                mem_hit_ok     = `ysyx22040228_ABLE  ;
                mem_data_out   = data_out[127:64]    ;
                hit_data_ready = `ysyx22040228_ABLE  ;
            end
        end   
        else   begin
            mem_hit_ok     = `ysyx22040228_ENABLE    ; 
            mem_data_out   = 64'b0                   ;
            hit_data_ready = `ysyx22040228_ENABLE    ; 
        end 
    end 

    // reg        dirty_ok  ;
    reg [63:0] dirty_out_addr ;
    reg [63:0] dirty_out_data ;
    reg [3:0]  dirty_out_type ;
    reg        dirty_clean_o  ;
    reg        dirty_clean_t  ;
    reg        delay_cnt1     ;
    reg        delay_cnt2     ;
    reg        delay_cnt      ;
    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            dirty_out_addr = `ysyx22040228_ZEROWORD  ;
            dirty_out_data = `ysyx22040228_ZEROWORD  ;
            dirty_out_type  = 4'b0000                ;
            dirty_ok       = `ysyx22040228_ENABLE    ;
            dirty_clean_o = `ysyx22040228_ENABLE     ;
            dirty_clean_t = `ysyx22040228_ENABLE     ;
        end 
        else if((state_dread == `ysyx22040228_DIRTY) && (~in_dcache_ready) && (~delay_cnt)) begin
            if((dirty1[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] >= counter2[dcache_index])) begin
                dirty_out_addr = {32'h0, oteg_ata_o, dcache_index, 3'b000} ;
                dirty_out_data = data_out[63:0]  ;
                dirty_out_type = 4'b0001         ;
                dirty_clean_o  = `ysyx22040228_ABLE ;
                dirty_ok       = `ysyx22040228_ENABLE    ;
                dirty_clean_t = `ysyx22040228_ENABLE     ;
            end 
            else /*if((dirty2[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] < counter2[dcache_index]))*/ begin
                dirty_out_addr = {32'h0, tteg_ata_o, dcache_index, 3'b000} ;
                dirty_out_data = data_out[127:64]  ;
                dirty_out_type = 4'b0001   ;
                dirty_clean_t  = `ysyx22040228_ABLE ;
                dirty_ok       = `ysyx22040228_ENABLE    ;
                dirty_clean_o = `ysyx22040228_ENABLE     ;
            end
            // else begin
            //     dirty_out_addr = `ysyx22040228_ZEROWORD  ;
            //     dirty_out_data = `ysyx22040228_ZEROWORD  ;
            //     dirty_out_type  = 4'b0000                ;
            //     dirty_clean_o  = `ysyx22040228_ABLE      ;
            //     dirty_ok       = `ysyx22040228_ENABLE    ;
            //     dirty_clean_t  = `ysyx22040228_ENABLE    ;
            // end  
        end 
        else if((state_dread == `ysyx22040228_DIRTY) && (in_dcache_ready)) begin
            dirty_out_addr = `ysyx22040228_ZEROWORD  ;
            dirty_out_data = `ysyx22040228_ZEROWORD  ;
            dirty_out_type  = 4'b0000                ;
            dirty_ok     = `ysyx22040228_ENABLE      ;
            dirty_clean_o = `ysyx22040228_ENABLE     ;
            dirty_clean_t = `ysyx22040228_ENABLE     ;
        end 
        else if((state_dread == `ysyx22040228_DIRTY) && (delay_cnt)) begin
            dirty_out_addr = `ysyx22040228_ZEROWORD  ;
            dirty_out_data = `ysyx22040228_ZEROWORD  ;
            dirty_out_type  = 4'b0000                ;
            dirty_ok     = `ysyx22040228_ABLE        ;
            dirty_clean_o = `ysyx22040228_ENABLE     ;
            dirty_clean_t = `ysyx22040228_ENABLE     ;
        end
        else begin
            dirty_out_addr = `ysyx22040228_ZEROWORD  ;
            dirty_out_data = `ysyx22040228_ZEROWORD  ;
            dirty_out_type  = 4'b0000                ;
            dirty_ok       = `ysyx22040228_ENABLE    ;
            dirty_clean_o = `ysyx22040228_ENABLE     ;
            dirty_clean_t = `ysyx22040228_ENABLE     ;
        end  
    end

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            delay_cnt1 <= `ysyx22040228_ENABLE ;
            delay_cnt2 <= `ysyx22040228_ENABLE ;
            delay_cnt <= `ysyx22040228_ENABLE  ;
        end 
        else if(in_dcache_ready) begin
            delay_cnt1 <= `ysyx22040228_ENABLE ;
            delay_cnt2 <= `ysyx22040228_ENABLE ;
            delay_cnt <= `ysyx22040228_ABLE    ;
        end 
        else if(dirty_clean_o) begin
            delay_cnt1 <= `ysyx22040228_ABLE   ;
            delay_cnt2 <= `ysyx22040228_ENABLE ;
            delay_cnt <= `ysyx22040228_ENABLE  ;
        end 
        else if(dirty_clean_t) begin
            delay_cnt2 <= `ysyx22040228_ABLE   ;
            delay_cnt1 <= `ysyx22040228_ENABLE ;
            delay_cnt <= `ysyx22040228_ENABLE  ;
        end 
        else begin
            delay_cnt1 <= `ysyx22040228_ENABLE ;
            delay_cnt2 <= `ysyx22040228_ENABLE ;
            delay_cnt <= `ysyx22040228_ENABLE  ;
        end 
    end

    // reg          missr_i_ok     ;
    // reg  [3: 0]  missr_out_type ;
    // reg  [63:0]  missr_out_addr ;
    reg [127: 0] missr_data_strb;
    reg          missr_tag_ena1  ;
    reg [127: 0] missr_data_temp;
    reg          missr_tag_ena2 ;
    reg          missr_data_ena ;


    reg          write_regr     ;
    reg          write_regr_    ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) 
            write_regr_ <= `ysyx22040228_ENABLE ;
        else if(write_regr == `ysyx22040228_ABLE)
            write_regr_ <= `ysyx22040228_ABLE;
        else if((write_regr_) && (in_dcache_ready))
            write_regr_ <= `ysyx22040228_ENABLE;
        else 
            write_regr_ <= write_regr_;
    end

    wire  [3:0]  missr_out_type ;
    assign       missr_out_type = ((state_dread == `ysyx22040228_MISSR) && (~in_dcache_ready)) ?  4'b0010  :  4'b0000 ;
    wire  [63:0] missr_out_addr ;
    assign       missr_out_addr = ((state_dread == `ysyx22040228_MISSR) && (~in_dcache_ready)) ? {mem_addr_i[63:3],3'b0} : `ysyx22040228_ZEROWORD ;

    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            // missr_out_type = 4'b0000                ;
            // missr_out_addr = `ysyx22040228_ZEROWORD ;
            write_regr     = `ysyx22040228_ENABLE   ;
            missr_data_ena   = `ysyx22040228_ENABLE ;
            missr_data_strb  = `ysyx22040228_CACHE_STRBZ;
            missr_data_temp  = `ysyx22040228_CACHE_STRBZ;
            missr_tag_ena1   = `ysyx22040228_ENABLE;
            missr_i_ok       = 1'b0                ;
            missr_tag_ena2   = `ysyx22040228_ENABLE;
        end 
        else if((state_dread == `ysyx22040228_MISSR) && (~in_dcache_ready)) begin
            // missr_out_type = 4'b0010    ;
            // missr_out_addr = {mem_addr_i[63:3],3'b0} ;
            write_regr     = `ysyx22040228_ABLE      ;
            missr_data_ena   = `ysyx22040228_ENABLE ;
            missr_data_strb  = `ysyx22040228_CACHE_STRBZ;
            missr_data_temp  = `ysyx22040228_CACHE_STRBZ;
            missr_tag_ena1   = `ysyx22040228_ENABLE;
            missr_i_ok       = 1'b0                ;
            missr_tag_ena2   = `ysyx22040228_ENABLE;
        end
        else if((in_dcache_ready) && (state_dread == `ysyx22040228_MISSR) && (write_regr_)) begin
            // write_regr     = `ysyx22040228_ENABLE   ;
            // missr_data_ena = `ysyx22040228_ABLE     ;
            if(oteg_valid_o == `ysyx22040228_ENABLE) begin
                write_regr     = `ysyx22040228_ENABLE   ;
                missr_data_ena = `ysyx22040228_ABLE     ;
                missr_data_strb = `ysyx22040228_CACHE_STRBL;
                missr_data_temp = {64'h0, in_dcache_data};
                missr_tag_ena1  = `ysyx22040228_ABLE;
                missr_i_ok      = `ysyx22040228_ABLE;
                missr_tag_ena2   = `ysyx22040228_ENABLE;
            end 
            else if(tteg_valid_o == `ysyx22040228_ENABLE) begin
                write_regr     = `ysyx22040228_ENABLE   ;
                missr_data_ena = `ysyx22040228_ABLE     ;
                missr_data_strb =`ysyx22040228_CACHE_STRBH;
                missr_data_temp = {in_dcache_data, 64'h0};
                missr_tag_ena2  = `ysyx22040228_ABLE;
                missr_i_ok      = `ysyx22040228_ABLE;
                missr_tag_ena1   = `ysyx22040228_ENABLE;
            end 
            else if(counter1[dcache_index] >= counter2[dcache_index]) begin
                write_regr     = `ysyx22040228_ENABLE   ;
                missr_data_ena = `ysyx22040228_ABLE     ;
                missr_data_strb = `ysyx22040228_CACHE_STRBL;
                missr_data_temp = {64'h0, in_dcache_data};
                missr_tag_ena1  = `ysyx22040228_ABLE;
                missr_i_ok      = `ysyx22040228_ABLE;
                missr_tag_ena2   = `ysyx22040228_ENABLE;
            end 
            else /*if(counter1[dcache_index] < counter2[dcache_index])*/begin
                write_regr     = `ysyx22040228_ENABLE   ;
                missr_data_ena = `ysyx22040228_ABLE     ;
                missr_data_strb = `ysyx22040228_CACHE_STRBH;
                missr_data_temp = {in_dcache_data, 64'h0};
                missr_tag_ena2  = `ysyx22040228_ABLE;
                missr_i_ok      = `ysyx22040228_ABLE;
                missr_tag_ena1   = `ysyx22040228_ENABLE;
            end
        end 
        else begin
            write_regr     = `ysyx22040228_ENABLE   ;
            missr_data_ena   = `ysyx22040228_ENABLE;
            missr_data_strb  = `ysyx22040228_CACHE_STRBZ;
            missr_tag_ena1   = `ysyx22040228_ENABLE;
            missr_data_temp  = `ysyx22040228_CACHE_STRBZ;
            missr_tag_ena2   = `ysyx22040228_ENABLE;
            missr_i_ok       = 1'b0                ;
        end 
    end

    reg  [5:0]  state_dwrite_nxt ;

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            state_dwrite <= `ysyx22040228_IDLE;
        end 
        else begin
            state_dwrite <= state_dwrite_nxt    ;
        end 
    end

    always @(*) begin 
        if(rst == `ysyx22040228_RSTENA) begin
            state_dwrite_nxt = `ysyx22040228_IDLE;  
        end 
        else begin 
            case (state_dwrite)
               `ysyx22040228_IDLE : begin
                   if(dcache_write_shankhand)
                        state_dwrite_nxt = `ysyx22040228_READ;
                   else 
                        state_dwrite_nxt = `ysyx22040228_IDLE;  
               end 
               `ysyx22040228_READ  : begin
                   if((read_w_ok) && (((oteg_ata_o == dcache_tag) && (oteg_valid_o == `ysyx22040228_ABLE)) || ((tteg_ata_o == dcache_tag) && (tteg_valid_o == `ysyx22040228_ABLE))))
                        state_dwrite_nxt = `ysyx22040228_HIT  ;
                   else if((read_w_ok) && (((dirty1[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] >= counter2[dcache_index]) && (tteg_valid_o == `ysyx22040228_ABLE)) || ((dirty2[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] < counter2[dcache_index]) && (oteg_valid_o == `ysyx22040228_ABLE))))
                        state_dwrite_nxt = `ysyx22040228_DIRTY;
                   else if(read_w_ok)
                        state_dwrite_nxt = `ysyx22040228_MISSW;
                   else
                        state_dwrite_nxt = `ysyx22040228_READ ;
               end 
               `ysyx22040228_HIT : begin
                   if(memw_hit_ok)
                        state_dwrite_nxt = `ysyx22040228_IDLE;
                   else 
                        state_dwrite_nxt = `ysyx22040228_HIT;
               end 
               `ysyx22040228_MISSW : begin
                   if(missw_i_ok)
                        state_dwrite_nxt = `ysyx22040228_READ ;
                   else 
                        state_dwrite_nxt = `ysyx22040228_MISSW;  
               end 
               `ysyx22040228_DIRTY : begin
                   if(dirtyw_ok)
                        state_dwrite_nxt = `ysyx22040228_MISSW;
                   else 
                        state_dwrite_nxt = `ysyx22040228_DIRTY;
               end 
                default: begin
                  state_dwrite_nxt       =  `ysyx22040228_IDLE ;
                end 
            endcase 
        end 
    end 

    // reg          read_w_ok_    ;
    // reg          read_w_ok     ;
    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            read_w_ok_ = `ysyx22040228_ENABLE ;
        end 
        else if(state_dwrite == `ysyx22040228_READ) begin
            read_w_ok_ = `ysyx22040228_ABLE  ;
        end 
        else begin
            read_w_ok_ = `ysyx22040228_ENABLE ;
        end 
    end
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)
            read_w_ok <= `ysyx22040228_ENABLE ;
        else 
            read_w_ok <= read_w_ok_ ;
    end

    // reg         memw_hit_ok    ;
    reg [127:0] hitw_data_strb ;
    reg [127:0] hitw_data_temp ;
    reg         hitw_data_ready; 
    reg         hitw_data_ena  ;
    wire [63:0] strb_extection ;
    assign      strb_extection = {{8{mem_strb_i[7]}}, {8{mem_strb_i[6]}}, {8{mem_strb_i[5]}}, {8{mem_strb_i[4]}},
                                 {8{mem_strb_i[3]}}, {8{mem_strb_i[2]}}, {8{mem_strb_i[1]}}, {8{mem_strb_i[0]}}};

    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            memw_hit_ok  = `ysyx22040228_ENABLE    ; 
            hitw_data_strb = `ysyx22040228_CACHE_STRBZ;
            hitw_data_temp  =  `ysyx22040228_CACHE_STRBZ; 
            hitw_data_ready = `ysyx22040228_ENABLE ; 
            hitw_data_ena   = `ysyx22040228_ENABLE ;
        end 
        else if(state_dwrite == `ysyx22040228_HIT) begin
            if((oteg_ata_o == dcache_tag) && (oteg_valid_o == `ysyx22040228_ABLE))begin
                memw_hit_ok     = `ysyx22040228_ABLE   ;
                hitw_data_strb  = {64'h0, strb_extection} ;
                hitw_data_temp  = {64'h0, mem_data_i} ;
                hitw_data_ready = `ysyx22040228_ABLE   ;
                hitw_data_ena   = `ysyx22040228_ABLE   ;
            end
            else /*if((tteg_ata_o == dcache_tag) && (tteg_valid_o == `ysyx22040228_ABLE))*/begin
                memw_hit_ok     = `ysyx22040228_ABLE   ;
                hitw_data_strb  = {strb_extection, 64'h0} ;
                hitw_data_temp  = {mem_data_i, 64'h0} ;
                hitw_data_ready = `ysyx22040228_ABLE   ;
                hitw_data_ena   = `ysyx22040228_ABLE   ;
            end
            // else begin
            //     memw_hit_ok     = `ysyx22040228_ABLE   ; 
            //     hitw_data_strb  =  `ysyx22040228_CACHE_STRBZ;
            //     hitw_data_temp  =  `ysyx22040228_CACHE_STRBZ;  
            //     hitw_data_ready = `ysyx22040228_ENABLE ;
            //     hitw_data_ena   = `ysyx22040228_ENABLE ;
            // end
        end   
        else  begin
            hitw_data_temp  =  `ysyx22040228_CACHE_STRBZ; 
            memw_hit_ok  = `ysyx22040228_ENABLE    ; 
            hitw_data_strb = `ysyx22040228_CACHE_STRBZ;  
            hitw_data_ready = `ysyx22040228_ENABLE ; 
            hitw_data_ena   = `ysyx22040228_ENABLE ;
        end   
    end 

    // reg        dirtyw_ok       ;
    reg [63:0] dirtyw_out_addr ;
    reg [63:0] dirtyw_out_data ;
    reg [3:0]  dirtyw_out_type ;
    reg        dirtyw_clean_o  ;
    reg        dirtyw_clean_t  ;
    reg        delayw_cnt1     ;
    reg        delayw_cnt2     ;
    reg        delayw_cnt      ;
    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            dirtyw_out_addr = `ysyx22040228_ZEROWORD  ;
            dirtyw_out_data = `ysyx22040228_ZEROWORD  ;
            dirtyw_ok   = `ysyx22040228_ENABLE;
            dirtyw_out_type = 4'b0000                 ;
            dirtyw_clean_o = `ysyx22040228_ENABLE     ;
            dirtyw_clean_t = `ysyx22040228_ENABLE     ;
        end 
        else if((state_dwrite == `ysyx22040228_DIRTY) && (~in_dcache_ready) && (~delayw_cnt)) begin
            if((dirty1[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] >= counter2[dcache_index])) begin
                dirtyw_out_addr = {32'h0,oteg_ata_o, dcache_index, 3'b000} ;
                dirtyw_out_data = data_out[63:0]  ;
                dirtyw_out_type = 4'b0100         ;
                dirtyw_clean_o  = `ysyx22040228_ABLE ;
                dirtyw_ok   = `ysyx22040228_ENABLE   ;
                dirtyw_clean_t = `ysyx22040228_ENABLE;
            end 
            else /*if((dirty2[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] < counter2[dcache_index]))*/ begin
                dirtyw_out_addr = {32'h0,tteg_ata_o, dcache_index, 3'b000} ;
                dirtyw_out_data = data_out[127:64]  ;
                dirtyw_out_type = 4'b0100    ;
                dirtyw_clean_t  = `ysyx22040228_ABLE ;
                dirtyw_ok   = `ysyx22040228_ENABLE   ;
                dirtyw_clean_o = `ysyx22040228_ENABLE;
            end
            // else begin
            //     dirtyw_out_addr = `ysyx22040228_ZEROWORD  ;
            //     dirtyw_out_data = `ysyx22040228_ZEROWORD  ;
            //     dirtyw_out_type  = 4'b0000                ;
            // end  
        end 
        else if((in_dcache_ready) && (state_dwrite == `ysyx22040228_DIRTY)) begin
            dirtyw_out_addr = `ysyx22040228_ZEROWORD  ;
            dirtyw_out_data = `ysyx22040228_ZEROWORD  ;
            dirtyw_ok     = `ysyx22040228_ENABLE      ;
            dirtyw_out_type = 4'b0000                 ;
            dirtyw_clean_o = `ysyx22040228_ENABLE     ;
            dirtyw_clean_t = `ysyx22040228_ENABLE     ;
        end 
        else if((delayw_cnt) && (state_dwrite == `ysyx22040228_DIRTY)) begin
            dirtyw_out_addr = `ysyx22040228_ZEROWORD  ;
            dirtyw_out_data = `ysyx22040228_ZEROWORD  ;
            dirtyw_ok     = `ysyx22040228_ABLE        ;
            dirtyw_out_type = 4'b0000                 ;
            dirtyw_clean_o = `ysyx22040228_ENABLE     ;
            dirtyw_clean_t = `ysyx22040228_ENABLE     ;
        end
        else begin
            dirtyw_out_addr = `ysyx22040228_ZEROWORD  ;
            dirtyw_out_data = `ysyx22040228_ZEROWORD  ;
            dirtyw_ok   = `ysyx22040228_ENABLE;
            dirtyw_out_type = 4'b0000                 ;
            dirtyw_clean_o = `ysyx22040228_ENABLE     ;
            dirtyw_clean_t = `ysyx22040228_ENABLE     ;
        end  
    end

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            delayw_cnt1 <= `ysyx22040228_ENABLE ;
            delayw_cnt2 <= `ysyx22040228_ENABLE ;
            delayw_cnt <= `ysyx22040228_ENABLE  ;
        end 
        else if(in_dcache_ready) begin
            delayw_cnt1 <= delayw_cnt1          ;
            delayw_cnt2 <= delayw_cnt2          ;
            delayw_cnt <= `ysyx22040228_ABLE    ;
        end 
        else if(dirtyw_clean_o) begin
            delayw_cnt1 <= `ysyx22040228_ABLE   ;
            delayw_cnt2 <= `ysyx22040228_ENABLE ;
            delayw_cnt <= `ysyx22040228_ENABLE  ;
        end 
        else if(dirtyw_clean_t) begin
            delayw_cnt2 <= `ysyx22040228_ABLE   ;
            delayw_cnt1 <= `ysyx22040228_ENABLE ;
            delayw_cnt <= `ysyx22040228_ENABLE  ;
        end 
        else begin
            delayw_cnt1 <= `ysyx22040228_ENABLE ;
            delayw_cnt2 <= `ysyx22040228_ENABLE ;
            delayw_cnt <= `ysyx22040228_ENABLE  ;
        end 
    end

    // reg          missw_i_ok     ;
    // reg  [3: 0]  missw_out_type ;
    // reg  [63:0]  missw_out_addr ;
    reg [127: 0] missw_data_strb;
    reg          missw_tag_ena1 ;
    reg [127: 0] missw_data_temp;
    reg          missw_tag_ena2 ;
    reg          missw_data_ena ;

    reg          write_regw     ;
    reg          write_regw_    ;
    always @(posedge clk) begin
        if(rst ==`ysyx22040228_RSTENA) 
            write_regw_ <= `ysyx22040228_ENABLE;
        else if(write_regw == `ysyx22040228_ABLE)
            write_regw_ <= `ysyx22040228_ABLE;
        else if((write_regw_) && (in_dcache_ready))
            write_regw_ <= `ysyx22040228_ENABLE;
        else 
            write_regw_ <= write_regw_;
    end

    wire [3:0]  missw_out_type ;
    assign      missw_out_type = ((state_dwrite == `ysyx22040228_MISSW) && (~in_dcache_ready)) ? 4'b1000 : 4'b0000 ;
    wire [63:0] missw_out_addr ;
    assign      missw_out_addr = ((state_dwrite == `ysyx22040228_MISSW) && (~in_dcache_ready)) ? {mem_addr_i[63:3],3'b0} : `ysyx22040228_ZEROWORD ;


    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            // missw_out_type = 4'b0000                ;
            // missw_out_addr = `ysyx22040228_ZEROWORD ;
            write_regw     = `ysyx22040228_ENABLE   ;
            missw_data_ena   = `ysyx22040228_ENABLE ;
            missw_data_strb = `ysyx22040228_CACHE_STRBZ;
            missw_tag_ena1   = `ysyx22040228_ENABLE;
            missw_tag_ena2   = `ysyx22040228_ENABLE;
            missw_data_temp  = `ysyx22040228_CACHE_STRBZ;
            missw_i_ok       = `ysyx22040228_ENABLE;
        end 
        else if((state_dwrite == `ysyx22040228_MISSW) && (~in_dcache_ready)) begin
            // missw_out_type = 4'b1000    ;
            // missw_out_addr = {mem_addr_i[63:3],3'b0} ;
            write_regw     = `ysyx22040228_ABLE      ;
            missw_data_ena   = `ysyx22040228_ENABLE ;
            missw_data_strb = `ysyx22040228_CACHE_STRBZ;
            missw_tag_ena1   = `ysyx22040228_ENABLE;
            missw_tag_ena2   = `ysyx22040228_ENABLE;
            missw_data_temp  = `ysyx22040228_CACHE_STRBZ;
            missw_i_ok       = `ysyx22040228_ENABLE;
        end
        else if((in_dcache_ready) && (state_dwrite == `ysyx22040228_MISSW) && (write_regw_)) begin
            // write_regw     = `ysyx22040228_ENABLE   ;
            // missw_data_ena = `ysyx22040228_ABLE     ;
            // missw_out_type = 4'b0000                ;
            // missw_out_addr = `ysyx22040228_ZEROWORD ;
            if(oteg_valid_o == `ysyx22040228_ENABLE) begin
                missw_data_strb = `ysyx22040228_CACHE_STRBL;
                missw_tag_ena1  = `ysyx22040228_ABLE;
                missw_data_temp = {64'h0, in_dcache_data};
                missw_i_ok      = `ysyx22040228_ABLE;
                write_regw     = `ysyx22040228_ENABLE   ;
                missw_data_ena = `ysyx22040228_ABLE     ; 
                missw_tag_ena2  = `ysyx22040228_ENABLE;   
            end
            else if(tteg_valid_o == `ysyx22040228_ENABLE) begin
                missw_data_strb = `ysyx22040228_CACHE_STRBH;
                missw_tag_ena2  = `ysyx22040228_ABLE;
                missw_data_temp = {in_dcache_data, 64'h0};
                missw_i_ok      = `ysyx22040228_ABLE;
                write_regw     = `ysyx22040228_ENABLE   ;
                missw_data_ena = `ysyx22040228_ABLE     ;   
                missw_tag_ena1  = `ysyx22040228_ENABLE;
            end 
            else if(counter1[dcache_index] >= counter2[dcache_index]) begin
                missw_data_strb = `ysyx22040228_CACHE_STRBL;
                missw_tag_ena1  = `ysyx22040228_ABLE;
                missw_data_temp = {64'h0, in_dcache_data};
                missw_i_ok      = `ysyx22040228_ABLE;
                write_regw     = `ysyx22040228_ENABLE   ;
                missw_data_ena = `ysyx22040228_ABLE     ;
                missw_tag_ena2  = `ysyx22040228_ENABLE;   
            end 
            else /*if(counter1[dcache_index] < counter2[dcache_index])*/ begin
                missw_data_strb = `ysyx22040228_CACHE_STRBH;
                missw_tag_ena2  = `ysyx22040228_ABLE;
                missw_data_temp = {in_dcache_data, 64'h0};
                missw_i_ok      = `ysyx22040228_ABLE;
                write_regw     = `ysyx22040228_ENABLE   ;
                missw_data_ena = `ysyx22040228_ABLE     ; 
                missw_tag_ena1  = `ysyx22040228_ENABLE;  
            end
        end 
        else begin
            write_regw     = `ysyx22040228_ENABLE   ;
            missw_data_strb = `ysyx22040228_CACHE_STRBZ;
            missw_tag_ena1   = `ysyx22040228_ENABLE;
            missw_tag_ena2   = `ysyx22040228_ENABLE;
            missw_data_temp  = `ysyx22040228_CACHE_STRBZ;
            missw_i_ok       = `ysyx22040228_ENABLE;
            missw_data_ena   = `ysyx22040228_ENABLE;
        end 
    end

    //--------------------------------------bit code---------------------------//
    // reg  [2:0]  counter1 [`ysyx22040228_CACHE_DATA_W];
    // reg  [2:0]  counter2 [`ysyx22040228_CACHE_DATA_W];
    integer i ;

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
           	for(i = 0;i<64;i=i+1) begin
			   counter1[i][2:0] <= 3'b0;
               counter2[i][2:0] <= 3'b0;
		    end 
        end 
        else begin
            if((state_dread == `ysyx22040228_HIT) && (oteg_ata_o == dcache_tag))
                counter1[dcache_index] <= 3'b0 ;
            if((state_dread == `ysyx22040228_HIT) && (tteg_ata_o == dcache_tag))
                counter2[dcache_index] <= 3'b0 ;
            if((state_dwrite == `ysyx22040228_HIT) && (oteg_ata_o == dcache_tag))
                counter1[dcache_index] <= 3'b0 ;
            if((state_dwrite == `ysyx22040228_HIT) && (tteg_ata_o == dcache_tag))
                counter2[dcache_index] <= 3'b0 ;
            if((mem_read_valid || mem_write_valid) && (mem_data_ready)) begin
                for(i = 0;i<64;i=i+1) begin
                counter1[i][2:0] <= (counter1[i] == 3'd7) ? 3'd7 : counter1[i][2:0] + 1'b1;
                counter2[i][2:0] <= (counter2[i] == 3'd7) ? 3'd7 : counter2[i][2:0] + 1'b1;
                end
            end 
        end 
	end
    //-----------------------------dirty state sign-----------------------------//
    // reg    dirty1 [`ysyx22040228_CACHE_DATA_W];
    // reg    dirty2 [`ysyx22040228_CACHE_DATA_W];

    wire   dirty1_ ;
    wire   dirty2_ ;
    assign dirty1_ = dirty1[dcache_index];
    assign dirty2_ = dirty2[dcache_index];
    //assign dirty2[dcache_index] = ((state_dwrite == `ysyx22040228_HIT) && (tag_data2 == dcache_tag)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE;
    integer j;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
           	for(j = 0;j<64;j=j+1) begin
			   dirty1[j] <= 1'b0;
               dirty2[j] <= 1'b0;
		    end 
        end 
        else if((state_dwrite == `ysyx22040228_HIT) && (oteg_ata_o == dcache_tag)) begin
            dirty1[dcache_index] <= `ysyx22040228_ABLE ;
        end 
        else if((state_dwrite == `ysyx22040228_HIT) && (tteg_ata_o == dcache_tag)) begin
            dirty2[dcache_index] <= `ysyx22040228_ABLE ;
        end
        else if((delayw_cnt1 & in_dcache_ready) | (delay_cnt1 & in_dcache_ready)) begin
            dirty1[dcache_index] <= `ysyx22040228_ENABLE ;
        end 
        else if((delayw_cnt2 & in_dcache_ready) | (delay_cnt2 & in_dcache_ready)) begin
            dirty2[dcache_index] <= `ysyx22040228_ENABLE ;
        end 
        else if(((mem_fence_i) && (docker_counter < 8'd64)) && (dirty1[fence_index] == `ysyx22040228_ABLE))begin
            dirty1[fence_index] <= `ysyx22040228_ENABLE;
        end 
        else if(((mem_fence_i) && (docker_counter>= 8'd64)) && (dirty2[fence_index] == `ysyx22040228_ABLE))begin
            dirty2[fence_index] <= `ysyx22040228_ENABLE;
        end 
    end

    wire                             oteg_ena_i    ;
    assign                           oteg_ena_i  =  (state_dread == `ysyx22040228_MISSR) ? missr_tag_ena1     :
                                                    (state_dwrite == `ysyx22040228_MISSW)? missw_tag_ena1     :
                                                                                         `ysyx22040228_ENABLE ;
    wire                             oteg_valid_i  ;
    assign                           oteg_valid_i = mem_fence_i ? `ysyx22040228_ENABLE : `ysyx22040228_ABLE ;
    wire         [22:0]              oteg_data_i   ;
    assign                           oteg_data_i  = mem_fence_i ? 23'h0 : dcache_tag ;
    wire         [5:0]               oteg_addr_i   ; 
    assign                           oteg_addr_i  = mem_fence_i ? fence_index : dcache_index ;
    // wire   [`ysyx22040228_TEG_WITH]  oteg_ata_o    ;
    // wire                             oteg_valid_o  ;
    ysyx_22040228TEG_CC TEG_DCACHEO(
        .clk         (clk          ),
        .addr_i      (oteg_addr_i  ),
        .teg_i       (oteg_data_i  ),
        .teg_valid   (oteg_valid_i ),
        .teg_ena     (oteg_ena_i   ), 
        .data_o      (oteg_ata_o   ),
        .data_valid  (oteg_valid_o )
    );

    wire                             tteg_ena_i    ; 
    assign                           tteg_ena_i  =  (state_dread == `ysyx22040228_MISSR) ? missr_tag_ena2     :
                                                    (state_dwrite == `ysyx22040228_MISSW)? missw_tag_ena2     :
                                                                                         `ysyx22040228_ENABLE ;
    wire                             tteg_valid_i  ;
    assign                           tteg_valid_i = mem_fence_i ? `ysyx22040228_ENABLE : `ysyx22040228_ABLE ;
    wire         [22:0]              tteg_data_i   ;
    assign                           tteg_data_i  = mem_fence_i ? 23'h0 : dcache_tag ;
    wire         [5:0]               tteg_addr_i   ; 
    assign                           tteg_addr_i  = mem_fence_i ? fence_index : dcache_index ;
    // wire   [`ysyx22040228_TEG_WITH]  tteg_ata_o    ;
    // wire                             tteg_valid_o  ;
    ysyx_22040228TEG_CC TEG_DCACHET(
        .clk         (clk          ),
        .addr_i      (tteg_addr_i  ),
        .teg_i       (tteg_data_i  ),
        .teg_valid   (tteg_valid_i ),
        .teg_ena     (tteg_ena_i   ),
        .data_o      (tteg_ata_o   ),
        .data_valid  (tteg_valid_o )
    );

    //-------------------------------ram data---------------------------------//
    // wire  [127:0] data_out ;
    /*wire*/ assign          CE = 1'b0 ;
    //wire  [127:0] w_strb_ram;
    assign        w_strb_ram = (state_dread == `ysyx22040228_MISSR) ? missr_data_strb :
                               (state_dwrite == `ysyx22040228_HIT) ? hitw_data_strb   :
                               (state_dwrite == `ysyx22040228_MISSW)? missw_data_strb :
                                                             `ysyx22040228_CACHE_STRBZ;
    //wire  [127:0] w_data_ram;
    assign        w_data_ram = (state_dread == `ysyx22040228_MISSR) ? missr_data_temp :
                               (state_dwrite == `ysyx22040228_HIT) ? hitw_data_temp   :
                               (state_dwrite == `ysyx22040228_MISSW)? missw_data_temp :
                                                             `ysyx22040228_CACHE_STRBZ;
    //wire          w_data_ena;
    assign        w_data_ena = (state_dread == `ysyx22040228_MISSR) ? missr_data_ena  :
                               (state_dwrite == `ysyx22040228_HIT) ? hitw_data_ena    :
                               (state_dwrite == `ysyx22040228_MISSW)? missw_data_ena  :
                                                               `ysyx22040228_ENABLE   ;

    //wire  [5:0]   w_data_addr;
    assign        w_data_addr = mem_fence_i ? fence_index : dcache_index ;
    // S011HD1P_X32Y2D128_BWF REM_DCACHE (
    //     .Q           (data_out     ) ,
    //     .CLK         (clk          ) ,
    //     .CEN         (CE           ) ,
    //     .WEN         ( ~w_data_ena ) ,
    //     .BWEN        ( ~w_strb_ram ) ,
    //     .A           (w_data_addr  ) ,
    //     .D           (w_data_ram   )
    // );


    assign out_dcache_type = (state_dread == `ysyx22040228_DIRTY) ? dirty_out_type :
                             (state_dread == `ysyx22040228_MISSR) ? missr_out_type :
                             (state_dwrite == `ysyx22040228_DIRTY)? dirtyw_out_type:
                             (state_dwrite == `ysyx22040228_MISSW)?  missw_out_type:
                             (transt_sign1 && (~in_dcache_ready)) ? 4'b0001        :
                             (transt_sign2 && (~in_dcache_ready)) ? 4'b0001        :
                                                                               4'b0;

    assign out_dcache_addr = (state_dread == `ysyx22040228_DIRTY) ? dirty_out_addr :
                             (state_dread == `ysyx22040228_MISSR) ? missr_out_addr :
                             (state_dwrite == `ysyx22040228_DIRTY)? dirtyw_out_addr:
                             (state_dwrite == `ysyx22040228_MISSW)? missw_out_addr :
                             (transt_sign1 && (~in_dcache_ready)) ? {32'h0, oteg_ata_o, fence_index, 3'b000} :
                             (transt_sign2 && (~in_dcache_ready)) ? {32'h0, tteg_ata_o, fence_index, 3'b000} :
                                                             `ysyx22040228_ZEROWORD;

    assign out_dcache_data = (state_dread == `ysyx22040228_DIRTY) ? dirty_out_data :
                             (state_dwrite == `ysyx22040228_DIRTY)? dirtyw_out_data:
                             (transt_sign1 && (~in_dcache_ready)) ? data_out[63:0] :
                             (transt_sign2 && (~in_dcache_ready)) ? data_out[127:64]:
                                                             `ysyx22040228_ZEROWORD;

    assign mem_data_ready  = (state_dread == `ysyx22040228_HIT)   ? hit_data_ready :
                             (state_dwrite == `ysyx22040228_HIT)  ? hitw_data_ready:
                             (docker_counter == 8'd129)           ? `ysyx22040228_ABLE:
                                                               `ysyx22040228_ENABLE;


endmodule
/************************************************************
Author:LiGuoqi
Name:divider.v
Function:execute muliplication instruction
************************************************************/
// `include "ysyx_22040228defines.v"

`define ysyx22040228_DIV_SIGN       3'b001 
`define ysyx22040228_DIV_DOING      3'b010
`define ysyx22040228_DIV_READUC     3'b100

module ysyx_22040228divider (
    input        wire                                       clk               ,
    input        wire                                       rst               ,

    input        wire    [63:0]                             diviser           ,
    input        wire    [63:0]                             dividend          ,
    input        wire    [7 :0]                             inst_opcode       ,
    input        wire                                       div_ready         ,
    output       wire    [63:0]                             div_rem_data      ,
    output       wire                                       div_finish                               
);


reg     [6:0]    counter ;
reg              sign    ;
reg              sign_y  ;
reg     [63:0]   dividend_t;
reg     [63:0]   divider_t ;

reg     [128: 0] temp_a   ;
reg     [64:0]   temp_b   ;
reg              finish   ;
wire             sigin_inst ;
assign sigin_inst = (inst_opcode == `INST_DIV) || (inst_opcode == `INST_DIVW) || (inst_opcode == `INST_REM) || (inst_opcode == `INST_REMW);
/* verilator lint_off BLKSEQ */
always @(posedge clk ) begin
    if(rst == `ysyx22040228_RSTENA) begin
        counter = 7'b0     ;
        dividend_t = 64'h0 ;
        divider_t  = 64'h0 ;
        temp_a     = 129'h0 ;
        temp_b     = 65'h0  ;
        finish     = 1'b0   ;
        sign       = 1'b0   ;
        sign_y     = 1'b0   ;
    end
    else begin
        case (counter)
            0 : begin
                if(div_ready) begin
                    counter = counter + 1 ;
                    finish  = 1'b0        ;
                    if((sigin_inst) && (dividend[63]) && (diviser[63])) begin
                        dividend_t = ~dividend + 1 ;
                        divider_t  = ~diviser + 1  ;
                        sign       = 1'b0          ;
                        sign_y     = 1'b1          ;
                    end 
                    else if((sigin_inst) && dividend[63]) begin
                        dividend_t = ~dividend + 1 ;
                        divider_t  = diviser       ;
                        sign       = 1'b1           ;
                        sign_y     = 1'b1           ;
                    end 
                    else if((sigin_inst) && diviser[63]) begin
                        divider_t   = ~diviser + 1    ;
                        dividend_t  = dividend        ;
                        sign        = 1'b1            ;
                        sign_y      = 1'b0            ;
                    end
                    else begin
                        divider_t  = diviser  ;
                        dividend_t = dividend ;
                        sign       = 1'b0     ; 
                        sign_y     = 1'b0     ;
                    end 
                end
            end
            1 : begin
                temp_a = {65'b0, dividend_t};
                temp_b = {1'b0 , divider_t} ;
                counter = counter + 1 ;
            end  
            66 : begin
                finish = 1'b1 ;
                counter = counter + 1 ;
            end 
            67 : begin
                 counter = 7'h0 ;
                 finish = 1'b0  ;
            end 
            default:  begin
                temp_a = {temp_a[127:0],1'b0};
                if(temp_a[128:64] >= temp_b) 
                    temp_a = ({(temp_a[128:64] - temp_b), temp_a[63:0]}) + 1 ;
                else 
                    temp_a = temp_a ;
                counter = counter + 1 ;
            end 
        endcase
    end 
end
/* verilator lint_on BLKSEQ */

reg [63:0] yushu ;
reg [63:0] shang ;

always @(*) begin
    if(rst == `ysyx22040228_RSTENA) begin
        yushu = `ysyx22040228_ZEROWORD ;
        shang = `ysyx22040228_ZEROWORD ;
    end 
    else if(finish) begin
        if((sign) && (!sign_y)) begin
            yushu = temp_a[127:64]      ;
            shang = ~temp_a[63:0]   + 1 ;
        end 
        else if((sign) && (sign_y)) begin
            yushu = ~temp_a[127:64] + 1 ;
            shang = ~temp_a[63:0]   + 1 ;
        end 
        else if((!sign) && (sign_y)) begin
            yushu = ~temp_a[127:64] + 1 ;
            shang = temp_a[63:0]        ;
        end 
        else begin
            yushu = temp_a[127:64] ;
            shang = temp_a[63:0]   ;
        end 
    end
    else begin
        yushu = temp_a[127:64] ;
        shang = temp_a[63:0]   ;
    end 
end

assign div_finish = finish ;
assign div_rem_data = ((inst_opcode == `INST_DIV) || (inst_opcode == `INST_DIVU) || (inst_opcode == `INST_DIVUW) || (inst_opcode == `INST_DIVW)) ? shang :
                      ((inst_opcode == `INST_REM) || (inst_opcode == `INST_REMU) || (inst_opcode == `INST_REMUW) || (inst_opcode == `INST_REMW)) ? yushu :
                      `ysyx22040228_ZEROWORD ;
endmodule
/************************************************************
Author:LiGuoqi
Name:ex_mem.v
Function:Intermediate module for memory access
************************************************************/
//`include "ysyx_22040228defines.v"
module ysyx_22040228ex_mem (
    input              wire                                              clk             ,
    input              wire                                              rst             ,
    input              wire          [`ysyx22040228_PCBUS]               ex_mem_pc_i     ,
    input              wire          [`ysyx22040228_INSTBUS]             ex_mem_inst_i   ,
    input              wire          [ 4:0]                              stall_ctrl      ,
    input              wire          [ 7:0]                              ex_inst_type    ,
    input              wire                                              ex_rd_ena       ,
    input              wire          [`ysyx22040228_REGBUS]              ex_rd_data      ,
    input              wire          [`ysyx22040228_REGADDRBUS]          ex_rd_addr      ,

    input              wire          [ 2:0]                              ex_ls_sel       ,
    input              wire          [`ysyx22040228_DATAADDRBUS]         ex_ls_addr      ,
    input              wire                                              fence_ready_i   ,
    
    output             reg           [ 7:0]                              mem_inst_type   ,
    output             reg                                               mem_rd_ena      ,
    output             reg           [`ysyx22040228_REGBUS]              mem_rd_data     ,
    output             reg           [`ysyx22040228_REGADDRBUS]          mem_rd_addr     ,
    output             reg           [`ysyx22040228_PCBUS]               ex_mem_pc_o     ,
    output             reg           [`ysyx22040228_INSTBUS]             ex_mem_inst_o   ,

    output             reg           [ 2:0]                              mem_ls_sel      ,
    output             reg           [`ysyx22040228_DATAADDRBUS]         mem_ls_addr     ,
    output             reg                                               fence_ready_o     
);
    
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA) begin
        mem_inst_type <= 8'd0 ;
        mem_rd_ena    <= 1'b0 ;
        mem_rd_data   <= `ysyx22040228_ZEROWORD ;
        mem_rd_addr   <= 5'b0 ;
        mem_ls_sel    <= 3'd0 ;
        mem_ls_addr   <= `ysyx22040228_ZEROWORD ;
        ex_mem_pc_o   <= `ysyx22040228_ZEROWORD ;
        ex_mem_inst_o <= 32'b0 ;
        fence_ready_o <= 1'b0  ;
    end
    else if(stall_ctrl[3:0] == 4'b1111) begin
        mem_inst_type <= mem_inst_type ;
        mem_rd_ena    <= mem_rd_ena  ;
        mem_rd_data   <= mem_rd_data ;
        mem_rd_addr   <= mem_rd_addr ;
        mem_ls_sel    <= mem_ls_sel  ;
        mem_ls_addr   <= mem_ls_addr ;
        ex_mem_pc_o   <= ex_mem_pc_o ;
        ex_mem_inst_o <= ex_mem_inst_o; 
        fence_ready_o <= fence_ready_o;
    end  
    else begin
        mem_inst_type <= ex_inst_type ;
        mem_rd_ena    <= ex_rd_ena ;
        mem_rd_data   <= ex_rd_data ;
        mem_rd_addr   <= ex_rd_addr ;
        mem_ls_sel    <= ex_ls_sel ;
        mem_ls_addr   <= ex_ls_addr ;
        ex_mem_pc_o   <= ex_mem_pc_i;
        ex_mem_inst_o <= ex_mem_inst_i;
        fence_ready_o <= fence_ready_i;
    end
end

endmodule//exe_mem

/************************************************************
Author:LiGuoqi
Name:ex.v
Function:Instruction execution module and CSR is instantiated
************************************************************/
// `include "ysyx_22040228csr.v"
// `include "ysyx_22040228divider.v"
// `include "ysyx_22040228multiplier.v"
// `include "ysyx_22040228defines.v"
module ysyx_22040228ex (
    input         wire                                        clk               ,
    input         wire                                        rst               ,
    input         wire          [`ysyx22040228_PCBUS]         pc_i              ,
    input         wire          [`ysyx22040228_INSTBUS]       id_ex_inst        ,

    input         wire          [ 7:0]                        inst_type_i       ,
    input         wire          [ 7:0]                        inst_opcode_i     ,
    input         wire          [`ysyx22040228_REGBUS]        op1_i             ,
    input         wire          [`ysyx22040228_REGBUS]        op2_i             ,
    input         wire                                        rd_ena_i          ,
    input         wire          [`ysyx22040228_REGADDRBUS]    rd_addr_i         ,

    input         wire          [ 2:0]                        ls_sel_i          ,
    input         wire          [11:0]                        addr_offsel_i     ,

    //output 
    output        wire          [ 7:0]                        inst_type_o       ,
    output        wire                                        rd_ena_o          ,
    output        wire          [`ysyx22040228_REGADDRBUS]    rd_addr_o         ,
    output        wire          [`ysyx22040228_REGBUS]        rd_data_o         ,
    output        wire          [`ysyx22040228_PCBUS]         ex_pc_o           ,
    output        wire          [`ysyx22040228_INSTBUS]       ex_inst_o         ,

    output        wire          [ 2:0]                        ls_sel_o          ,
    output        wire          [`ysyx22040228_REGBUS]        ls_addr_o         ,
    output        wire                                        fence_ready       ,

    output        wire                                        ex_flush          ,
    output        wire                                        branch_pc_ena     ,
    output        wire          [`ysyx22040228_PCBUS]         branch_pc         ,
    
    //to ctrl
    output        wire                                       ex_stall_req      ,
    
    //to interrupt
    input         wire                                       timer_intr        ,
    input         wire                                       ex_stall          
    
);

assign ex_pc_o = (rst == `ysyx22040228_RSTENA) ? `ysyx22040228_ZEROWORD : pc_i ;
assign ex_inst_o = (rst == `ysyx22040228_RSTENA) ? 32'b0 : id_ex_inst ;
assign fence_ready = (inst_opcode_i == `INST_FENCE) ? 1'b1 : 1'b0 ;

reg      [`ysyx22040228_REGBUS]       exe_res   ;

//about slti slt
wire     [`ysyx22040228_REGBUS]  op2_i_mux   = ~op2_i + 64'd1     ;
wire     [`ysyx22040228_REGBUS]  op1_sub_op2 = op1_i  + op2_i_mux ;

//sbout addxx
wire     [`ysyx22040228_REGBUS]  op1_add_op2   = op1_i + op2_i ;
wire     [`ysyx22040228_REGBUS]  op1_addw_op2  = {{32{op1_add_op2[31]}},op1_add_op2[31:0]} ;

//about slt slti
wire     op1_ls_op2 = (op1_i[63] && ~op2_i[63]) || (~op1_i[63] && ~op2_i[63] && op1_sub_op2[63]) || (op1_i[63] && op2_i[63] && op1_sub_op2[63]) ;

//about srai sra
wire     [`ysyx22040228_REGBUS]  shift_res = ( {64{op1_i[63]}} << (7'd64 - {1'b0 , op2_i[5:0]})) | (op1_i >> op2_i[5:0]) ;
 
//about sllw srlw
wire     [31:0]      op1_sllw_op2  = op1_i[31:0] << op2_i[4:0]               ;
wire     [`ysyx22040228_REGBUS]  sllw_res      = {{32{op1_sllw_op2[31]}} , op1_sllw_op2} ;

//about srliw srlw
wire     [31:0]      op1_srlw_op2  = op1_i[31:0] >> op2_i[4:0]               ;
wire     [`ysyx22040228_REGBUS]  srlw_res      = {{32{op1_srlw_op2[31]}} , op1_srlw_op2} ;

//about sraiw sraw 
wire     [31:0]      op1_sraw_op2  = ( {32{op1_i[31]}} << (6'd32 - {1'b0,op2_i[4:0]})) | (op1_i[31:0] >> op2_i[4:0]) ;
wire     [`ysyx22040228_REGBUS]  sraw_res      = {{32{op1_sraw_op2[31]}},op1_sraw_op2}                                         ;

//about subw
wire     [31:0]      op1_subw_op2  = op1_i[31:0] - op2_i[31:0]             ;
wire     [`ysyx22040228_REGBUS]  subw_res      = {{32{op1_subw_op2[31]}},op1_subw_op2} ;

wire  [`ysyx22040228_REGBUS]    read_csr_data  ;
assign rd_data_o    = inst_type_i[0] ? op2_i : ((inst_type_i[7] && (inst_opcode_i != `INST_EBREAK)) ? read_csr_data : exe_res) ;
wire                tmr_trap_ena ;
assign inst_type_o  = inst_type_i & {8{~tmr_trap_ena}} ;
assign rd_ena_o     = rd_ena_i    & (~tmr_trap_ena)    ;
assign rd_addr_o    = rd_addr_i                        ;

assign ls_addr_o    = (inst_type_i[1]|inst_type_i[0]) ? (op1_i + {{52{addr_offsel_i[11]}},addr_offsel_i}) : `ysyx22040228_ZEROWORD ;
assign ls_sel_o     = ls_sel_i  ;

wire     [`ysyx22040228_REGBUS]  upper_imm = {{32{op2_i[19]}},op2_i[19:0],12'd0} ;

reg   [63:0]   mul_data        ;
reg   [63:0]   divrem_data      ;
always @(*) begin
    if(rst == `ysyx22040228_RSTENA) begin  exe_res = `ysyx22040228_ZEROWORD   ;     end
    else begin
        case (inst_opcode_i) 
          `INST_ADDI ,  `INST_ADD:  begin exe_res = op1_add_op2              ;end
          `INST_SLTI ,  `INST_SLT:  begin exe_res = {63'd0 , op1_ls_op2}     ;end
          `INST_SLTIU , `INST_SLTU: begin exe_res = {63'd0 , (op1_i < op2_i)};end
          `INST_XORI ,  `INST_XOR:  begin exe_res = op1_i ^ op2_i            ;end
          `INST_ORI  ,  `INST_OR :  begin exe_res = op1_i | op2_i            ;end
          `INST_ANDI ,  `INST_AND:  begin exe_res = op1_i & op2_i            ;end
          `INST_SLLI ,  `INST_SLL:  begin exe_res = op1_i << op2_i[5:0]      ;end
          `INST_SRLI ,  `INST_SRL:  begin exe_res = op1_i >> op2_i[5:0]      ;end
          `INST_SRAI ,  `INST_SRA:  begin exe_res = shift_res                ;end
          `INST_SUB             :   begin exe_res = op1_sub_op2              ;end
          `INST_LUI  , `INST_AUIPC: begin exe_res = op1_i + upper_imm        ;end
          `INST_JAL  , `INST_JALR:  begin exe_res = op2_i + 64'd4            ;end
          `INST_ADDIW, `INST_ADDW:  begin exe_res = op1_addw_op2             ;end
          `INST_SLLIW, `INST_SLLW:  begin exe_res = sllw_res                 ;end
          `INST_SRLIW, `INST_SRLW:  begin exe_res = srlw_res                 ;end
          `INST_SRAIW, `INST_SRAW:  begin exe_res = sraw_res                 ;end
          `INST_SUBW             :  begin exe_res = subw_res                 ;end
          `INST_EBREAK           :  begin exe_res = op1_i                    ;end
          `INST_MUL ,  `INST_MULH,
          `INST_MULHSU,`INST_MULHU,
          `INST_MULW             :  begin exe_res = mul_data                 ;end 
          `INST_DIV , `INST_DIVU ,
          `INST_DIVUW,`INST_DIVW ,
          `INST_REM , `INST_REMU ,
          `INST_REMUW,`INST_REMW :  begin exe_res = divrem_data              ;end 
        default    :                begin exe_res = `ysyx22040228_ZEROWORD   ;end
        endcase
    end
end

wire clk_in ;
assign clk_in = clk ;
reg            mul_finish_sign ;
wire           mul_ready       ;
assign mul_ready =  (inst_opcode_i == `INST_MUL   ) | 
                    (inst_opcode_i == `INST_MULH  ) | 
                    (inst_opcode_i == `INST_MULHSU) | 
                    (inst_opcode_i == `INST_MULHU ) | 
                    (inst_opcode_i == `INST_MULW  ) ;

ysyx_22040228multiplier multiplier1 (
    .clk             (clk_in         ) ,
    .rst             (rst            ) ,
    .mult_ready      (mul_ready      ) ,
    .inst_opcode     (inst_opcode_i  ) ,
    .mult_op1        (op1_i          ) ,
    .mult_op2        (op2_i          ) ,
    .product_val     (mul_data       ) ,
    .mult_finish     (mul_finish_sign)  
);

reg            dr_finish_sign   ;
wire           dr_ready         ;
assign  dr_ready  = (inst_opcode_i == `INST_DIV     ) |
                    (inst_opcode_i == `INST_DIVU    ) |
                    (inst_opcode_i == `INST_DIVUW   ) |
                    (inst_opcode_i == `INST_DIVW    ) |
                    (inst_opcode_i == `INST_REM     ) |
                    (inst_opcode_i == `INST_REMU    ) |
                    (inst_opcode_i == `INST_REMUW   ) |
                    (inst_opcode_i == `INST_REMW    ) ;

wire  [63:0]  op1_divdata ;
wire  [63:0]  op2_divdata ;
assign op1_divdata = (inst_opcode_i == `INST_DIV     ) ? op1_i         :
                     (inst_opcode_i == `INST_DIVU    ) ? op1_i         :
                     (inst_opcode_i == `INST_DIVUW   ) ? {32'b0, op1_i[31:0]}   :
                     (inst_opcode_i == `INST_DIVW    ) ? (op1_i[32] ? {32'hffffffff, op1_i[31:0]} : {32'b0, op1_i[31:0]})   :
                     (inst_opcode_i == `INST_REM     ) ? op1_i         :
                     (inst_opcode_i == `INST_REMU    ) ? op1_i         :
                     (inst_opcode_i == `INST_REMUW   ) ? {32'b0, op1_i[31:0]}   :
                     (inst_opcode_i == `INST_REMW    ) ? (op1_i[32] ? {32'hffffffff, op1_i[31:0]} : {32'b0, op1_i[31:0]})   :
                                                `ysyx22040228_ZEROWORD ;

assign op2_divdata = (inst_opcode_i == `INST_DIV     ) ? op2_i         :
                     (inst_opcode_i == `INST_DIVU    ) ? op2_i         : 
                     (inst_opcode_i == `INST_DIVUW   ) ? {32'b0, op2_i[31:0]}   :
                     (inst_opcode_i == `INST_DIVW    ) ? (op2_i[32] ? {32'hffffffff, op2_i[31:0]} : {32'b0, op2_i[31:0]})   : 
                     (inst_opcode_i == `INST_REM     ) ? op2_i         :
                     (inst_opcode_i == `INST_REMU    ) ? op2_i         :  
                     (inst_opcode_i == `INST_REMUW   ) ? {32'b0, op2_i[31:0]}   :    
                     (inst_opcode_i == `INST_REMW    ) ? (op2_i[32] ? {32'hffffffff, op2_i[31:0]} : {32'b0, op2_i[31:0]})   :
                                                `ysyx22040228_ZEROWORD ;           
ysyx_22040228divider divider2 (
    .clk              (clk_in         ) ,
    .rst              (rst            ) ,

    .diviser          (op2_divdata    ) ,
    .dividend         (op1_divdata    ) ,
    .inst_opcode      (inst_opcode_i  ) ,
    .div_ready        (dr_ready       ) ,
    .div_rem_data     (divrem_data    ) ,
    .div_finish       (dr_finish_sign )  
);
wire   mul_div_req ;
assign mul_div_req = (~dr_finish_sign && dr_ready) || (~mul_finish_sign && mul_ready) ;

//branch
reg                ex_flush_branch                  ;

always @(*) begin
    if(~inst_type_i[2])  begin ex_flush_branch = `ysyx22040228_FLUSHDISABLE  ;    end
    else begin
        case (inst_opcode_i) 
             `INST_BEQ     : begin  ex_flush_branch = (op1_i == op2_i) ? `ysyx22040228_FLUSHDISABLE : `ysyx22040228_FLUSHABLE ;  end
             `INST_BNE     : begin  ex_flush_branch = (op1_i != op2_i) ? `ysyx22040228_FLUSHDISABLE : `ysyx22040228_FLUSHABLE ;  end
             `INST_BLTU    : begin  ex_flush_branch = (op1_i <  op2_i) ? `ysyx22040228_FLUSHDISABLE : `ysyx22040228_FLUSHABLE ;  end
             `INST_BGEU    : begin  ex_flush_branch = (op1_i >= op2_i) ? `ysyx22040228_FLUSHDISABLE : `ysyx22040228_FLUSHABLE ;  end
             `INST_BLT     : begin  ex_flush_branch = ( op1_ls_op2   ) ? `ysyx22040228_FLUSHDISABLE : `ysyx22040228_FLUSHABLE ;  end
             `INST_BGE     : begin  ex_flush_branch = (~op1_ls_op2   ) ? `ysyx22040228_FLUSHDISABLE : `ysyx22040228_FLUSHABLE ;  end
             default:        begin  ex_flush_branch = `ysyx22040228_FLUSHDISABLE  ;    end 
        endcase
    end
end

wire                trap_ena ;
reg                 cmt_mret_ena   ;
assign branch_pc_ena = (ex_flush_branch == `ysyx22040228_FLUSHABLE) | trap_ena | cmt_mret_ena ;
assign branch_pc     = (trap_ena | cmt_mret_ena) ? read_csr_data :
                       (ex_flush_branch == `ysyx22040228_FLUSHABLE) ? pc_i + 64'd4 :
                                                          `ysyx22040228_ZEROWORD   ;

assign ex_stall_req = mul_div_req    ;
assign ex_flush     = branch_pc_ena  ;

//CSR
wire  [11:0]        csr_idx = inst_type_i[7] ? op2_i[11:0] : 12'd0  ;
reg                 ecall_trap_ena ;
assign              trap_ena = ecall_trap_ena | (tmr_trap_ena) ;
reg                 csr_wr_en      ;
reg                 csr_rd_en      ;
reg   [`ysyx22040228_REGBUS]    wbck_csr_data  ;
reg   [`ysyx22040228_REGBUS]    trap_mcause_value ;

//assign tmr_trap_ena_o = tmr_trap_ena ;

wire [`ysyx22040228_REGBUS] mask_set_res   = read_csr_data | op1_i ;
wire [`ysyx22040228_REGBUS] mask_clear_res = read_csr_data & (~op1_i) ;

 ysyx_22040228csr csr0 (
     .clk               (clk_in)             ,
     .rst               (rst)                ,

     .pc_i              (pc_i)               ,
     .csr_wr_en         (csr_wr_en)          ,
     .csr_rd_en         (csr_rd_en)          ,
     .csr_idx           (csr_idx)            ,
     
     .cmt_mret_ena      (cmt_mret_ena)       ,
     .ecall_trap_ena    (ecall_trap_ena)     ,
     .trap_mcause_value (trap_mcause_value ) ,

     .tmr_intr_ena      (timer_intr)         ,
     .tmr_trap_ena      (tmr_trap_ena)       , 

     .read_csr_data     (read_csr_data)      ,
     .wbck_csr_data     (wbck_csr_data)      ,
     .ex_stall          (ex_stall) 
);

always @(*) begin
    if((~inst_type_i[7] ) || (rst == `ysyx22040228_RSTENA)) begin
        csr_wr_en          = `ysyx22040228_WDISABLE  ;
        csr_rd_en          = `ysyx22040228_RDISABLE  ;
        cmt_mret_ena       = 1'b0          ;
        ecall_trap_ena     = 1'b0          ;
        wbck_csr_data      = `ysyx22040228_ZEROWORD    ;
        trap_mcause_value  = `ysyx22040228_ZEROWORD    ;
    end
    else begin
        csr_wr_en          = `ysyx22040228_WDISABLE  ;
        csr_rd_en          = `ysyx22040228_RDISABLE  ;
        cmt_mret_ena       = 1'b0          ;
        ecall_trap_ena     = 1'b0          ;
        wbck_csr_data      = `ysyx22040228_ZEROWORD    ;
        trap_mcause_value  = `ysyx22040228_ZEROWORD    ;
        case (inst_opcode_i)
            `INST_CSRRW,`INST_CSRRWI: begin
                csr_wr_en           = `ysyx22040228_WENABLE   ;
                csr_rd_en           = (rd_addr_o == 5'b0) ?  `ysyx22040228_RDISABLE : `ysyx22040228_RENABLE    ;
                wbck_csr_data       = op1_i          ;
            end 
            `INST_CSRRS,`INST_CSRRSI: begin
                csr_wr_en           = (op1_i == `ysyx22040228_ZEROWORD) ? `ysyx22040228_WDISABLE : `ysyx22040228_WENABLE ;
                csr_rd_en           = `ysyx22040228_RENABLE    ;
                wbck_csr_data       = mask_set_res   ;
            end
            `INST_CSRRC,`INST_CSRRCI: begin
                csr_wr_en           = (op1_i == `ysyx22040228_ZEROWORD) ? `ysyx22040228_WDISABLE : `ysyx22040228_WENABLE ;
                csr_rd_en           = `ysyx22040228_RENABLE    ;
                wbck_csr_data       = mask_clear_res ;
            end
            `INST_ECALL:              begin
                ecall_trap_ena      = 1'b1           ;
                wbck_csr_data       = pc_i           ;
                trap_mcause_value   = 64'd11         ;
            end
            `INST_MRET:               begin
                cmt_mret_ena        = 1'b1           ;
            end   

            default: begin
               csr_wr_en            = `ysyx22040228_WDISABLE ;
               csr_rd_en            = `ysyx22040228_RDISABLE  ;
               cmt_mret_ena         = 1'b0          ;
               ecall_trap_ena       = 1'b0          ;
            end
        endcase
    end
    if(tmr_trap_ena) begin
        csr_wr_en          = `ysyx22040228_WDISABLE ;
        csr_rd_en          = `ysyx22040228_RDISABLE  ;
        cmt_mret_ena       = 1'b0          ;
        ecall_trap_ena     = 1'b0          ;
        wbck_csr_data      = pc_i          ;
        trap_mcause_value  = 64'h8000000000000007;
    end
end
   
endmodule//ex

/************************************************************
Author:LiGuoqi
Name:id_ex.v
Function: Intermediate module for compiling code and executing
************************************************************/
//`include "ysyx_22040228defines.v"
module ysyx_22040228id_ex (
    input       wire                                     clk                ,
    input       wire                                     rst                ,
    input       wire                                     id_ex_bubble       ,
    input       wire       [ 4:0]                        stall_ctrl         ,
    input       wire       [`ysyx22040228_INSTBUS]       id_inst            ,
    input       wire       [`ysyx22040228_PCBUS]         id_pc              ,
    input       wire       [ 7:0]                        id_inst_type       ,
    input       wire       [ 7:0]                        id_inst_opcode     ,
    input       wire       [`ysyx22040228_REGBUS]        id_op1             ,
    input       wire       [`ysyx22040228_REGBUS]        id_op2             ,
    input       wire                                     id_rd_ena          ,
    input       wire       [`ysyx22040228_REGADDRBUS]    id_rd_addr         ,

    input       wire       [11:0]                        id_addr_offset     , 
    input       wire       [ 2:0]                        id_ls_sel          ,

    //output
    output      reg        [`ysyx22040228_INSTBUS]       ex_inst            ,
    output      reg        [`ysyx22040228_PCBUS]         ex_pc              ,
    output      reg        [ 7:0]                        ex_inst_type       ,
    output      reg        [ 7:0]                        ex_inst_opcode     ,
    output      reg        [`ysyx22040228_REGBUS]        ex_op1             ,
    output      reg        [`ysyx22040228_REGBUS]        ex_op2             ,
    output      reg                                      ex_rd_ena          ,
    output      reg        [`ysyx22040228_REGADDRBUS]    ex_rd_addr         ,

    output      reg        [11:0]                        ex_addr_offset     ,
    output      reg        [ 2:0]                        ex_ls_sel          
 );

 always @(posedge clk) begin
     if(rst == `ysyx22040228_RSTENA) begin
         ex_pc              <= `ysyx22040228_ZEROWORD  ;
         ex_inst            <= 32'b0       ;
         ex_inst_type       <= 8'b0        ;
         ex_inst_opcode     <= 8'B0        ;
         ex_op1             <= 64'b0       ; 
         ex_op2             <= 64'b0       ;
         ex_rd_ena          <= 1'b0        ;
         ex_rd_addr         <= 5'b0        ;
         ex_addr_offset     <= 12'b0       ;
         ex_ls_sel          <= 3'b0        ;
     end
     else if(id_ex_bubble) begin
         ex_pc              <= `ysyx22040228_ZEROWORD  ;
         ex_inst            <= 32'b0       ;             
         ex_inst_type       <= 8'b0        ;
         ex_inst_opcode     <= 8'B0        ;
         ex_op1             <= 64'b0       ;              
         ex_op2             <= 64'b0       ;
         ex_rd_ena          <= 1'b0        ;
         ex_rd_addr         <= 5'b0        ;
         ex_addr_offset     <= 12'b0       ;
         ex_ls_sel          <= 3'b0        ;
     end
     else if(stall_ctrl[2:0] == 3'b111)begin
         ex_pc              <= ex_pc          ;
         ex_inst            <= ex_inst        ;
         ex_inst_type       <= ex_inst_type   ;
         ex_inst_opcode     <= ex_inst_opcode ;
         ex_op1             <= ex_op1         ; 
         ex_op2             <= ex_op2         ;
         ex_rd_ena          <= ex_rd_ena      ;
         ex_rd_addr         <= ex_rd_addr     ;
         ex_addr_offset     <= ex_addr_offset ;
         ex_ls_sel          <= ex_ls_sel      ;
     end 
     else begin
         ex_pc              <= id_pc              ;
         ex_inst            <= id_inst            ;
         ex_inst_type       <= id_inst_type       ;
         ex_inst_opcode     <= id_inst_opcode     ;
         ex_op1             <= id_op1             ; 
         ex_op2             <= id_op2             ;
         ex_rd_ena          <= id_rd_ena          ;
         ex_rd_addr         <= id_rd_addr         ;
         ex_addr_offset     <= id_addr_offset     ;
         ex_ls_sel          <= id_ls_sel          ;
     end
 end
    
endmodule//id_ex
/************************************************************
Author:LiGuoqi
data:2021,10.21
Name:id.v
Function:Decoding module it is used to parse the key information 
         of the instruction
************************************************************/
//`include "ysyx_22040228defines.v"
module ysyx_22040228id (
    //系统输入
    input       wire                                                           rst                 ,
    input       wire         [`ysyx22040228_INSTBUS]                           inst_i              ,
    input       wire         [`ysyx22040228_PCBUS]                             pc_i                ,

    // regfile
    input       wire         [`ysyx22040228_REGBUS]                            op1_data_i          ,
    input       wire         [`ysyx22040228_REGBUS]                            op2_data_i          ,
    output      wire         [`ysyx22040228_REGADDRBUS]                        op1_addr_o          ,
    output      wire         [`ysyx22040228_REGADDRBUS]                        op2_addr_o          ,
    output      wire                                                           op1_read_o          ,
    output      wire                                                           op2_read_o          ,

    // ex 
    input       wire         [`ysyx22040228_REGBUS]                            ex_rd_data         ,
    input       wire         [`ysyx22040228_REGADDRBUS]                        ex_rd_addr         ,
    input       wire                                                           ex_rd_ena          ,
    input       wire         [7:0]                                             ex_inst_type       , // load related data hazard

    // mem 
    input       wire         [`ysyx22040228_REGBUS]                            mem_rd_data         ,
    input       wire         [`ysyx22040228_REGADDRBUS]                        mem_rd_addr         ,
    input       wire                                                           mem_rd_ena          ,
    //regfile(wbm)
    input       wire                                                           wb_rd_ena          ,
    input       wire         [`ysyx22040228_REGADDRBUS]                        wb_rd_addr         ,
    
    //ctrl
    output      wire                                                           id_stall_req        ,

    //id_exe
    output      wire         [7:0]                                             inst_type           ,
    output      wire         [7:0]                                             inst_opcode         ,
    output      reg          [`ysyx22040228_REGBUS]                            op1_o               ,
    output      reg          [`ysyx22040228_REGBUS]                            op2_o               ,
    output      wire                                                           rd_w_ena            ,
    output      wire         [`ysyx22040228_REGADDRBUS]                        rd_w_addr           ,
    output      wire         [`ysyx22040228_PCBUS]                             pc_o                ,
    output      wire         [`ysyx22040228_INSTBUS]                           inst_o              ,
    
    output      wire         [11:0]                                            store_addr_offset   ,
    output      wire         [2 :0]                                            mem_op_sel          , //?


    // to pc and if_id
    output      wire                                                           jalr_pc_ena         ,
    output      wire         [`ysyx22040228_PCBUS]                             jalr_pc             ,
    output      wire                                                           id_flush
);

//I-Type
wire   [ 6:0]   opcode ;
wire   [ 4:0]   rd     ;
wire   [ 2:0]   funct3 ;
wire   [ 4:0]   rs1    ;
wire   [11:0]   imm    ;
assign  opcode   =  inst_i [6:0]    ;
assign  rd       =  inst_i [11:7]   ;
assign  funct3   =  inst_i [14:12]  ;
assign  rs1      =  inst_i [19:15]  ;
assign  imm      =  inst_i [31:20]  ;

//R-Type

wire   [ 6:0]   funct7 ;
wire   [ 4:0]   rs2    ;
assign  funct7   =  inst_i [31:25]  ;
assign  rs2      =  inst_i [24:20]  ;

//U-Type 
wire   [19:0]    u_imm ;
assign  u_imm    =  inst_i [31:12]  ;

//S_Type 
wire   [11:0]    s_imm ;
assign  s_imm    =  {inst_i[31:25], inst_i[11:7]} ;

//*****************decode************************
assign inst_type[7]   =   (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_SYS)       ;
assign inst_type[6]   =   (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_REGREGW)   ;
assign inst_type[5]   =   (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_REGIMMW) ;
assign inst_type[4]   =   (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_REGIMM)    ;
assign inst_type[3]   =   (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_REGREG)   ;
assign inst_type[2]   =   (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_BRANCH)        ;
assign inst_type[1]   =   (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_LOAD) && (opcode[1:0] == 2'b11);
assign inst_type[0]   =   (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_STORE)         ;

wire inst_lui      = (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_LUI)    ;
wire inst_auipc    = (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_AUIPC)  ;
wire inst_jal      = (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_JAL)    ;
wire inst_jalr     = (rst == `ysyx22040228_RSTENA) ? 0 : (opcode[6:2] == `ysyx22040228_JALR)   ;
wire inst_jump     = inst_jal |inst_jalr    ;

wire inst_addi     = inst_type[4] & ~funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_slti     = inst_type[4] & ~funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_sltiu    = inst_type[4] & ~funct3[2] &  funct3[1] &  funct3[0]   ;
wire inst_xori     = inst_type[4] &  funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_ori      = inst_type[4] &  funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_andi     = inst_type[4] &  funct3[2] &  funct3[1] &  funct3[0]   ;
wire inst_slli     = inst_type[4] & ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_srli     = inst_type[4] &  funct3[2] & ~funct3[1] &  funct3[0] & ~imm[10]   ;
wire inst_srai     = inst_type[4] &  funct3[2] & ~funct3[1] &  funct3[0] &  imm[10]   ;

wire inst_addiw    = inst_type[5] & ~funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_slliw    = inst_type[5] & ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_srliw    = inst_type[5] &  funct3[2] & ~funct3[1] &  funct3[0] & ~imm[10]   ;
wire inst_sraiw    = inst_type[5] &  funct3[2] & ~funct3[1] &  funct3[0] &  imm[10]   ;

wire inst_add      = inst_type[3] & ~funct3[2] & ~funct3[1] & ~funct3[0] & ~funct7[5] & ~funct7[0];
wire inst_sub      = inst_type[3] & ~funct3[2] & ~funct3[1] & ~funct3[0] &  funct7[5] & ~funct7[0];
wire inst_sll      = inst_type[3] & ~funct3[2] & ~funct3[1] &  funct3[0] & ~funct7[0] ;
wire inst_slt      = inst_type[3] & ~funct3[2] &  funct3[1] & ~funct3[0] & ~funct7[0] ;
wire inst_sltu     = inst_type[3] & ~funct3[2] &  funct3[1] &  funct3[0] & ~funct7[0]  ;
wire inst_xor      = inst_type[3] &  funct3[2] & ~funct3[1] & ~funct3[0] & ~funct7[0] ;
wire inst_srl      = inst_type[3] &  funct3[2] & ~funct3[1] &  funct3[0] & ~funct7[5] & ~funct7[0];
wire inst_sra      = inst_type[3] &  funct3[2] & ~funct3[1] &  funct3[0] &  funct7[5] & ~funct7[0];
wire inst_or       = inst_type[3] &  funct3[2] &  funct3[1] & ~funct3[0] & ~funct7[0] ;
wire inst_and      = inst_type[3] &  funct3[2] &  funct3[1] &  funct3[0] & ~funct7[0]  ;
wire inst_div      = inst_type[3] &  funct3[2] & ~funct3[1] & ~funct3[0]  & funct7[0] ;
wire inst_divu     = inst_type[3] &  funct3[2] & ~funct3[1] &  funct3[0]  & funct7[0] ;
wire inst_mul      = inst_type[3] &  ~funct3[2] & ~funct3[1] & ~funct3[0] & funct7[0] ;
wire inst_mulh     = inst_type[3] &  ~funct3[2] & ~funct3[1] &  funct3[0] & funct7[0] ;
wire inst_mulhsu   = inst_type[3] &  ~funct3[2] &  funct3[1] & ~funct3[0] & funct7[0] ;
wire inst_mulhu    = inst_type[3] &  ~funct3[2] &  funct3[1] &  funct3[0] & funct7[0] ;
wire inst_rem      = inst_type[3] &  funct3[2] &  funct3[1] & ~funct3[0]  & funct7[0] ;
wire inst_remu     = inst_type[3] &  funct3[2] &  funct3[1] &  funct3[0]  & funct7[0] ;

wire inst_addw     = inst_type[6] & ~funct3[2] & ~funct3[1] & ~funct3[0] & ~imm[10] & ~funct7[0] ;
wire inst_subw     = inst_type[6] & ~funct3[2] & ~funct3[1] & ~funct3[0] &  imm[10] & ~funct7[0] ;
wire inst_sllw     = inst_type[6] & ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_srlw     = inst_type[6] &  funct3[2] & ~funct3[1] &  funct3[0] & ~imm[10] & ~funct7[0] ;
wire inst_sraw     = inst_type[6] &  funct3[2] & ~funct3[1] &  funct3[0] &  imm[10] & ~funct7[0] ;
wire inst_divuw    = inst_type[6] &  funct3[2] & ~funct3[1] &  funct3[0]  & funct7[0] ;
wire inst_divw     = inst_type[6] &  funct3[2] & ~funct3[1] & ~funct3[0]  & funct7[0] ;
wire inst_mulw     = inst_type[6] &  ~funct3[2] & ~funct3[1] & ~funct3[0] & funct7[0] ;
wire inst_remuw    = inst_type[6] &  funct3[2] &  funct3[1] &  funct3[0]  & funct7[0] ;
wire inst_remw     = inst_type[6] &  funct3[2] &  funct3[1] & ~funct3[0]  & funct7[0] ;

wire inst_beq      = inst_type[2] & ~funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_ben      = inst_type[2] & ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_blt      = inst_type[2] &  funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_bge      = inst_type[2] &  funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_bltu     = inst_type[2] &  funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_bgeu     = inst_type[2] &  funct3[2] &  funct3[1] &  funct3[0]   ;

wire inst_csrrw    = inst_type[7] & ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_csrrs    = inst_type[7] & ~funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_csrrc    = inst_type[7] & ~funct3[2] &  funct3[1] &  funct3[0]   ;
wire inst_csrrwi   = inst_type[7] &  funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_csrrsi   = inst_type[7] &  funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_csrrci   = inst_type[7] &  funct3[2] &  funct3[1] &  funct3[0]   ;


wire inst_csr_rs1  = inst_csrrw | inst_csrrs | inst_csrrc    ;
wire inst_csr_imm  = inst_csrrwi | inst_csrrsi | inst_csrrci ;

wire inst_ecall    = inst_type[7] & ~funct3[2] & ~funct3[1] & ~funct3[0] && (imm == 12'd0)         ;
wire inst_ebreak   = inst_type[7] & ~funct3[2] & ~funct3[1] & ~funct3[0] && (imm == 12'd1)         ;
wire inst_mret     = inst_type[7] & ~funct3[2] & ~funct3[1] & ~funct3[0] && (funct7 == 7'b0011000) ;
wire inst_fence_i  = ~funct3[2] & ~funct3[1] & funct3[0] & (opcode == 7'b0001111);


assign inst_opcode[0] = (rst == `ysyx22040228_RSTENA) ? 0 :  inst_csrrc  | inst_beq  | inst_addi | inst_srai | inst_slt  | inst_sra  | inst_auipc | inst_slliw | inst_subw | inst_divuw  | inst_divw  | inst_rem    | inst_remu  | inst_remuw  | inst_remw  | inst_ebreak ;
assign inst_opcode[1] = (rst == `ysyx22040228_RSTENA) ? 0 :  inst_csrrwi | inst_ben  | inst_slti | inst_srai | inst_sltu | inst_or   | inst_jal   | inst_sraiw | inst_sllw | inst_mul    | inst_div   | inst_divu   | inst_remuw | inst_remw   | inst_ebreak  ;
assign inst_opcode[2] = (rst == `ysyx22040228_RSTENA) ? 0 :  inst_csrrsi | inst_blt  | inst_sltiu| inst_add  | inst_slt  | inst_and  | inst_jalr  | inst_sraiw | inst_srlw | inst_mul    | inst_mulh  | inst_div    | inst_divuw | inst_remu   | inst_ebreak  ;
assign inst_opcode[3] = (rst == `ysyx22040228_RSTENA) ? 0 :  inst_csrrci | inst_bge  | inst_xori | inst_add  | inst_sltu | inst_lui  | inst_addiw | inst_slliw | inst_sraw | inst_mul    | inst_mulh  | inst_mulhsu | inst_divu  | inst_fence_i               ;
assign inst_opcode[4] = (rst == `ysyx22040228_RSTENA) ? 0 :  inst_ecall  | inst_bltu | inst_ori  | inst_sub  | inst_xor  | inst_sra  | inst_addiw | inst_srliw | inst_sllw | inst_mulh   | inst_mulhsu| inst_mulhu  | inst_divu  | inst_divw   | inst_remw    ;
assign inst_opcode[5] = (rst == `ysyx22040228_RSTENA) ? 0 :  inst_mret   | inst_bgeu | inst_andi | inst_sub  | inst_srl  | inst_or   | inst_jalr  | inst_addw  | inst_subw | inst_mulhsu | inst_mulhu | inst_mulw   | inst_divuw | inst_fence_i               ;
assign inst_opcode[6] = (rst == `ysyx22040228_RSTENA) ? 0 :              | inst_csrrw| inst_slli | inst_sll  | inst_xor  | inst_and  | inst_jal   | inst_addw  | inst_sraw | inst_mulhu  | inst_mulw  | inst_divu   | inst_rem   | inst_remuw  | inst_divw    ;
assign inst_opcode[7] = (rst == `ysyx22040228_RSTENA) ? 0 :              | inst_csrrs| inst_srli | inst_sll  | inst_srl  | inst_lui  | inst_auipc | inst_srliw | inst_srlw | inst_mulw   | inst_div   | inst_rem    | inst_remu  | inst_fence_i               ;



//output sign 
wire op1_loda_relate ;
wire op2_loda_relate ;
assign op1_loda_relate = (rst == `ysyx22040228_RSTENA) ? 0 : op1_read_o && (ex_inst_type == 8'b00000010) && (op1_addr_o == ex_rd_addr) ;
assign op2_loda_relate = (rst == `ysyx22040228_RSTENA) ? 0 : op2_read_o && (ex_inst_type == 8'b00000010) && (op2_addr_o == ex_rd_addr) ;
assign id_stall_req = (rst == `ysyx22040228_RSTENA) ? 0 : op1_loda_relate | op2_loda_relate ;

assign pc_o   = (rst == `ysyx22040228_RSTENA) ? `ysyx22040228_ZEROWORD : pc_i ;
assign inst_o = (rst == `ysyx22040228_RSTENA) ? 32'b0 : inst_i ;

assign op1_read_o = 1'b0 | inst_type[6] | inst_type[5] | inst_type[4] | inst_type[3] | inst_type[2] | inst_type[1] | inst_type[0] | inst_csr_rs1 | inst_jalr;
assign op1_addr_o = op1_read_o ? rs1 : 5'd0  ;

assign op2_read_o = 1'b0 | inst_type[6] | inst_type[3] | inst_type[2] | inst_type[0] ;
assign op2_addr_o = op2_read_o ? rs2 : 5'd0  ;

assign rd_w_ena   = (rd != 5'b0) && (inst_type[7] |inst_type[6] | inst_type[5] | inst_type[4] | inst_type[3] | inst_type[1] | inst_lui | inst_auipc | inst_jump) ; 
assign rd_w_addr  = rd_w_ena ? ((inst_ebreak)? 5'b01011 : rd) : 5'd0     ; //difftest

assign store_addr_offset = inst_type[1] ?   imm :
                           inst_type[0] ? s_imm :
                                          12'b0 ;

assign mem_op_sel = (rst == `ysyx22040228_RSTENA) ? 3'b000 : funct3 ;

//data hazard
wire ex_op1 ;
wire mem_op1;  

assign ex_op1  = (ex_rd_addr == op1_addr_o) && ex_rd_ena  ;
assign mem_op1 = (mem_rd_addr == op1_addr_o) && mem_rd_ena  ;

always @(*) begin
  if(rst == `ysyx22040228_RSTENA) begin op1_o = `ysyx22040228_ZEROWORD; end 
  else if(op1_read_o)
  begin
    if(ex_op1)         begin op1_o = ex_rd_data   ;   end
    else if(mem_op1)   begin op1_o = mem_rd_data  ;   end
    else               begin op1_o = op1_data_i   ;   end 
  end
  else if(inst_auipc|inst_jal) begin op1_o = pc_i             ;   end
  else if(inst_csr_imm)        begin op1_o = {{59{1'b0}},rs1} ;   end
  else                         begin op1_o = `ysyx22040228_ZEROWORD       ;   end    
end

wire ex_op2 ;
wire mem_op2;  

assign ex_op2  = (ex_rd_addr == op2_addr_o) && ex_rd_ena  ;
assign mem_op2 = (mem_rd_addr == op2_addr_o) && mem_rd_ena  ;

always @(*) begin
  if(rst == `ysyx22040228_RSTENA) begin op2_o = `ysyx22040228_ZEROWORD; end 
  else if(op2_read_o)
  begin
    if(ex_op2)         begin op2_o = ex_rd_data  ;   end
    else if(mem_op2)   begin op2_o = mem_rd_data  ;   end
    else               begin op2_o = op2_data_i   ;   end 
  end
  else if(inst_type[4] |inst_type[5] |inst_type[7]) begin op2_o = {{52{imm[11]}},imm}     ; end
  else if(inst_lui|inst_auipc)                      begin op2_o = {{44{u_imm[19]}},u_imm} ; end
  else if(inst_jump)                                begin op2_o = pc_i                    ; end 
  else                                              begin op2_o = `ysyx22040228_ZEROWORD  ; end    
end

wire wb_op1 ;
assign wb_op1 = (wb_rd_addr == op1_addr_o) && wb_rd_ena ;

wire [`ysyx22040228_PCBUS] jalr_pc_temp = {{52{imm[11]}} , imm} + op1_o ;
wire predict_success = ~ex_op1 & ~mem_op1 & ~wb_op1 ;//& (op1_addr_o == 5'd1) ;

assign jalr_pc_ena = (rst == `ysyx22040228_RSTENA) ? 0 : inst_jalr && ~predict_success ;
assign jalr_pc     = inst_jalr ? {jalr_pc_temp[63:1] , 1'b0 & jalr_pc_temp[0]} : `ysyx22040228_ZEROWORD ;

assign id_flush    = (rst == `ysyx22040228_RSTENA) ? `ysyx22040228_FLUSHDISABLE  :
                              jalr_pc_ena ? `ysyx22040228_FLUSHABLE   :
                                            `ysyx22040228_FLUSHDISABLE  ;
endmodule //id

/************************************************************
Author:LiGuoqi
Name:if_idr.v
Function:From IR-DATA get instruct spread id module
************************************************************/
//`include "ysyx_22040228defines.v"
module ysyx_22040228if_id (
    //系统信号
    input    wire                                              clk          ,
    input    wire                                              rst          ,
    // from pc if
    input    wire    [`ysyx22040228_PCBUS]                     if_pc        ,  //pc地址
    input    wire    [`ysyx22040228_INSTBUS]                   if_inst      ,
    // from id
    input    wire                                              if_id_flush  ,  
    //from exe 
    input    wire                                              if_id_bubble ,
    // axi
    input    wire                                              if_inst_valid,   
    output   wire                                              if_inst_ready,  
    output   wire                                              if_inst_stall,  
    // ctrl
    input    wire      [4:0]                                   stall_ctrl   , 
    input    wire                                              mem_stall_sign,
    input    wire                                              ex_stall_sign,
    input    wire                                              id_stall_sign,
    output   wire                                              if_unstall_req ,     //if_id阶段的暂停请求信号
    // id
    output   reg      [`ysyx22040228_PCBUS]                    id_pc        , //输出给id译码阶段的指令地址
    output   reg      [`ysyx22040228_INSTBUS]                  id_inst        //输出给id译码阶段的指令数据
);

//  import "DPI-C" function void if_id_thepc(input longint thepc_data, input bit[31:0] the_inst);

//  always @(posedge clk) begin
//     if_id_thepc(id_pc, id_inst);
//  end

    reg     fl_bub_temp ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) 
            fl_bub_temp <= 1'b0    ;
        else if((stall_ctrl[1:0] == 2'b11) && (if_id_flush | if_id_bubble)) begin
            fl_bub_temp <= 1'b1    ;
        end 
        else if(stall_ctrl[1:0] == 2'b00) begin
            fl_bub_temp <= 1'b0    ;
        end 
    end

always@(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            id_pc   <= `ysyx22040228_ZEROWORD;
            id_inst <= 32'h0000_0000;
        end
        else if((if_id_flush | if_id_bubble) || (fl_bub_temp)) begin
            id_pc   <= `ysyx22040228_ZEROWORD;
            id_inst <= 32'h0000_0000;
        end 
        else if((stall_ctrl[1] == `ysyx22040228_STOP) && (stall_ctrl[2] == `ysyx22040228_NOSTOP) && (stall_ctrl[4:3]==2'b00)) begin
            id_pc   <= `ysyx22040228_ZEROWORD;
            id_inst <= 32'h0000_0000;
        end
        else if((stall_ctrl[0]==`ysyx22040228_STOP) && (stall_ctrl[1] == `ysyx22040228_STOP) && (stall_ctrl[2] == `ysyx22040228_STOP)) begin
            id_pc   <= id_pc;
            id_inst <= id_inst;
        end
        else begin
            id_pc   <= if_pc;
            id_inst <= if_inst;
        end
    end


assign if_inst_stall   = mem_stall_sign | ex_stall_sign | id_stall_sign ;
assign if_unstall_req  = (rst == `ysyx22040228_RSTENA) ? 1'b0:((if_inst_valid == 1'b1) ? 1'b1 : 1'b0);
assign if_inst_ready   = (rst != `ysyx22040228_RSTENA) ;


endmodule//if_id



/************************************************************
Author:LiGuoqi
Name:mem.v
Function:Reading and write data in the DATA-memory module
************************************************************/
//`include "ysyx_22040228defines.v"
module ysyx_22040228load_store (
    input                wire                                                rst                  ,
    input                wire          [ 7:0]                                inst_type_i          ,
    input                wire                                                rd_ena_i             ,
    input                wire          [`ysyx22040228_REGBUS]                rd_data_i            ,
    input                wire          [`ysyx22040228_REGADDRBUS]            rd_addr_i            ,
    input                wire          [`ysyx22040228_PCBUS]                 mem_pc_i             ,
    input                wire          [`ysyx22040228_INSTBUS]               mem_inst_i           ,

    input                wire          [`ysyx22040228_DATAADDRBUS]           ls_addr_i            ,
    input                wire          [ 2:0]                                ls_sel_i             ,
    input                wire                                                fence_ready_         ,

    output               wire          [`ysyx22040228_DATAADDRBUS]           data_addr_o          ,
    output               wire          [ 7:0]                                wmask_o              ,
    input                wire          [`ysyx22040228_DATABUS]               data_i               ,
    output               wire          [`ysyx22040228_DATABUS]               data_o               ,
    output               wire                                                fence                ,
    output               wire                                                we                   ,
    output               wire          [2:0]                                 we_type_sel          ,
    output               wire                                                re                   ,
    output               wire          [2:0]                                 re_type_sel          ,
    input                wire                                                mem_finish           ,
    
    output               wire                                                rd_ena_o             ,
    output               wire          [`ysyx22040228_REGBUS]                rd_data_o            ,
    output               wire          [`ysyx22040228_REGADDRBUS]            rd_addr_o            ,
    output               wire          [`ysyx22040228_PCBUS]                 mem_pc_o             ,
    output               wire          [`ysyx22040228_INSTBUS]               mem_inst_o           ,

    output               wire                                                mem_stall_req        
);

assign mem_pc_o = (rst == `ysyx22040228_RSTENA) ? `ysyx22040228_ZEROWORD : mem_pc_i ;
assign mem_inst_o = (rst == `ysyx22040228_RSTENA) ? 32'b0 : mem_inst_i ;
    
assign mem_stall_req = (rst == `ysyx22040228_RSTENA) ? 1'b0 : ((((re|we) | (fence_ready_)) && (mem_finish == 1'b0))) ;
assign fence         = fence_ready_;

reg [`ysyx22040228_DATABUS] load_data ;
assign rd_addr_o  = rd_addr_i ;
assign rd_data_o  = inst_type_i[1] ? load_data : rd_data_i ;
assign rd_ena_o   = rd_ena_i  ;

//-------------------------------write type------------------------------------//
//                we_type_sel == 3'b000 ------------>>> SB                     //
//                we_type_sel == 3'b001 ------------>>> SH                     //
//                we_type_sel == 3'b010 ------------>>> SW                     //
//                we_type_sel == 3'b100 ------------>>> SD                     //
//-----------------------------------------------------------------------------//      

assign we             = (rst == `ysyx22040228_RSTENA)                                            ? 1'b0 : inst_type_i[0]  ;
assign we_type_sel    = (rst == `ysyx22040228_RSTENA)                                            ? 3'b111                 :
                        ((inst_type_i[0]) && (ls_sel_i == `SB_SEL))                              ? 3'b000                 :
                        ((inst_type_i[0]) && (ls_sel_i == `SH_SEL))                              ? 3'b001                 :
                        ((inst_type_i[0]) && (ls_sel_i == `SW_SEL))                              ? 3'b010                 :
                        ((inst_type_i[0]) && (ls_sel_i == `SD_SEL))                              ? 3'b100                 :
                                                                                                   3'b111                 ;
//-------------------------------read type-------------------------------------//
//                re_type_sel == 3'b000 ------------>>> LB | LBU               //
//                re_type_sel == 3'b001 ------------>>> LH | LHU               //
//                re_type_sel == 3'b010 ------------>>> LW | LWU               //
//                re_type_sel == 3'b100 ------------>>> LD                     //
//-----------------------------------------------------------------------------//           

assign re             = (rst == `ysyx22040228_RSTENA)                                            ? 1'b0 : inst_type_i[1]  ;
assign re_type_sel    = (rst == `ysyx22040228_RSTENA)                                            ? 3'b111                 :
                        ((inst_type_i[1]) && ((ls_sel_i == `LB_SEL) || (ls_sel_i == `LBU_SEL)))  ? 3'b000                 :
                        ((inst_type_i[1]) && ((ls_sel_i == `LH_SEL) || (ls_sel_i == `LHU_SEL)))  ? 3'b001                 :
                        ((inst_type_i[1]) && ((ls_sel_i == `LW_SEL) || (ls_sel_i == `LWU_SEL)))  ? 3'b010                 :
                        ((inst_type_i[1]) && (ls_sel_i == `LD_SEL))                              ? 3'b100                 :
                                                                                                   3'b111                 ;
assign data_addr_o    = (rst == `ysyx22040228_RSTENA) ? `ysyx22040228_ZEROWORD : ls_addr_i ;

wire [ 2:0] byte_sel      = ls_addr_i[2:0] ;
wire [ 1:0] half_byte_sel = ls_addr_i[2:1] ;
wire        word_sel      = ls_addr_i[2]   ;

reg  [ 7:0] data_byte      ;
reg  [15:0] data_half_byte ;
wire [31:0] data_word      ;

always @(*) begin
    if(rst == `ysyx22040228_RSTENA) begin
        data_byte = 8'b00000000           ;
    end 
    else begin 
        case (byte_sel)
            3'b000: data_byte = data_i[ 7: 0] ;
            3'b001: data_byte = data_i[15: 8] ;
            3'b010: data_byte = data_i[23:16] ;
            3'b011: data_byte = data_i[31:24] ;
            3'b100: data_byte = data_i[39:32] ;
            3'b101: data_byte = data_i[47:40] ;
            3'b110: data_byte = data_i[55:48] ;
            default: data_byte = data_i[63:56] ;
        endcase
    end 
end

always @(*) begin
    if(rst == `ysyx22040228_RSTENA) begin 
        data_half_byte = 16'h0  ;
    end 
    else begin 
        case (half_byte_sel)
            2'b00: data_half_byte = data_i[15: 0] ;
            2'b01: data_half_byte = data_i[31:16] ;
            2'b10: data_half_byte = data_i[47:32] ; 
            default: data_half_byte = data_i[63:48] ;
        endcase
    end 
end

assign data_word = word_sel ? data_i[63:32] : data_i[31:0] ;

always @(*) begin
    if(rst == `ysyx22040228_RSTENA) begin
        load_data = `ysyx22040228_ZEROWORD ;
    end 
    else if(inst_type_i == 8'b00000010 ) begin
        case (ls_sel_i)
            `LB_SEL:begin load_data = {{56{data_byte[7]}} , data_byte} ; end
            `LH_SEL:begin load_data = {{48{data_half_byte[15]}} , data_half_byte} ; end
            `LW_SEL:begin load_data = {{32{data_word[31]}} , data_word} ; end
            `LBU_SEL:begin load_data = {{56{1'b0}} , data_byte} ; end
            `LHU_SEL:begin load_data = {{48{1'b0}} , data_half_byte} ; end
            `LWU_SEL:begin load_data = {{32{1'b0}} , data_word} ; end
            `LD_SEL:begin load_data = data_i ; end
            default:begin load_data = `ysyx22040228_ZEROWORD ; end
        endcase
    end
    else begin load_data = `ysyx22040228_ZEROWORD ; end
end

reg [`ysyx22040228_DATABUS] store_data ;
reg [ 7:0]      store_mask ;
reg [`ysyx22040228_DATABUS] sb_data    ;
reg [`ysyx22040228_DATABUS] sh_data    ;
reg [`ysyx22040228_DATABUS] sw_data    ;
reg [ 7:0]      sb_mask    ;
reg [ 7:0]      sh_mask    ;
reg [ 7:0]      sw_mask    ;

always @(*) begin
    if(rst == `ysyx22040228_RSTENA) begin
        sb_data = 64'd0 ;
        sb_mask = 8'd0  ;
    end
    else begin
        case (byte_sel)
            3'b000:    begin
                sb_data = {56'd0 , rd_data_i[7:0]} ;
                sb_mask = 8'b00000001 ; 
            end 
            3'b001:    begin
                sb_data = {48'd0 , rd_data_i[7:0] , 8'd0} ;
                sb_mask = 8'b00000010 ; 
            end 
            3'b010:    begin
                sb_data = {40'd0 , rd_data_i[7:0] , 16'd0} ;
                sb_mask = 8'b00000100 ; 
            end 
            3'b011:    begin
                sb_data = {32'd0 , rd_data_i[7:0] , 24'd0} ;
                sb_mask = 8'b00001000 ; 
            end 
            3'b100:    begin
                sb_data = {24'd0 , rd_data_i[7:0] , 32'd0} ;
                sb_mask = 8'b00010000 ; 
            end 
            3'b101:    begin
                sb_data = {16'd0 , rd_data_i[7:0] , 40'd0} ;
                sb_mask = 8'b00100000 ; 
            end 
            3'b110:    begin
                sb_data = {8'd0 , rd_data_i[7:0] , 48'd0} ;
                sb_mask = 8'b01000000 ; 
            end 
            default:   begin
                sb_data = {rd_data_i[7:0] , 56'd0} ;
                sb_mask = 8'b10000000 ; 
            end
        endcase
    end
end

always @(*) begin
    if(rst == `ysyx22040228_RSTENA) begin
        sh_data = 64'd0 ;
        sh_mask = 8'd0  ;
    end
    else begin
        case (half_byte_sel)
            2'b00:     begin
                sh_data = {48'd0 , rd_data_i[15:0]} ;
                sh_mask = 8'b00000011               ;
            end 
            2'b01:     begin
                sh_data = {32'd0 , rd_data_i[15:0] , 16'd0} ;
                sh_mask = 8'b00001100                       ;
            end
            2'b10:     begin
                sh_data = {16'd0 , rd_data_i[15:0] , 32'd0} ;
                sh_mask = 8'b00110000                       ;
            end
            default:   begin
                sh_data = {rd_data_i[15:0] , 48'd0} ;
                sh_mask = 8'b11000000               ;
            end 
        endcase
    end
end

always @(*) begin
    if(rst == `ysyx22040228_RSTENA) begin
        sw_data = 64'd0 ;
        sw_mask = 8'd0  ;
    end
    else begin
        case (word_sel)
            1'b0:    begin
                sw_data = {32'd0 , rd_data_i[31:0]} ;
                sw_mask = 8'b00001111               ;
            end 
            default: begin
                sw_data = {rd_data_i[31:0] , 32'd0} ;
                sw_mask = 8'b11110000               ;
            end 
        endcase
    end
end

always @(*) begin
    if(rst == `ysyx22040228_RSTENA) begin
        store_data = 64'd0 ;
        store_mask = 8'd0  ;
    end
    else begin
        case (ls_sel_i)
            `SB_SEL:   begin
                store_data = sb_data ;
                store_mask = sb_mask ; 
            end
            `SH_SEL:   begin
                store_data = sh_data ;
                store_mask = sh_mask ; 
            end
            `SW_SEL:   begin
                store_data = sw_data ;
                store_mask = sw_mask ; 
            end
            `SD_SEL:   begin
                store_data = rd_data_i ;
                store_mask = 8'b11111111 ; 
            end
            default: begin
                store_data = 64'd0 ;
                store_mask = 8'd0  ;
            end
        endcase
    end
end

assign data_o   = (rst == `ysyx22040228_RSTENA | ~inst_type_i[0]) ? 64'd0 : store_data ;
assign wmask_o  = (rst == `ysyx22040228_RSTENA | ~inst_type_i[0]) ? 8'd0  : store_mask ;
endmodule//mem

/************************************************************
Author:LiGuoqi
Name:mem_wb.v
Function:write data back to regfile module
************************************************************/
/* verilator lint_off UNUSED */
//`include "ysyx_22040228defines.v"
module ysyx_22040228mem_wb (
    input                   wire                                             clk            ,
    input                   wire                                             rst            ,
    input                   wire          [`ysyx22040228_PCBUS]              wb_pc_i        ,
    input                   wire          [`ysyx22040228_INSTBUS]            wb_inst_i      ,
    input                   wire          [ 4:0]                             stall_ctrl     ,

    input                   wire          [`ysyx22040228_REGBUS]             mem_rd_data    ,
    input                   wire          [`ysyx22040228_REGADDRBUS]         mem_rd_addr    ,
    input                   wire                                             mem_rd_ena     ,

    output                  reg           [`ysyx22040228_REGBUS]             wb_rd_data     ,
    output                  reg           [`ysyx22040228_REGADDRBUS]         wb_rd_addr     ,
    output                  reg                                              wb_rd_ena         
);

// import "DPI-C" function void difftest_dut_pc(input longint pc_data, input longint exit_code, input bit endyn, input bit exe);
// import "DPI-C" function void difftest_dut_thepc(input longint thepc_data);

// always @(*) begin
//     difftest_dut_thepc(wb_pc_o);
// end

reg  [`ysyx22040228_PCBUS]    wb_pc_o;
reg  [`ysyx22040228_INSTBUS]  wb_inst_o;


// always@(*)begin
// difftest_dut_pc(pc_data1, trap_code, teap_yn, difftest_exyn);    
// end  
    
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA) begin
        wb_rd_ena  <= 1'b0 ;
        wb_rd_addr <= 5'b0 ;
        wb_rd_data <= `ysyx22040228_ZEROWORD ;
        wb_pc_o    <= `ysyx22040228_ZEROWORD ;
        wb_inst_o  <= 32'b0 ;
    end
    else begin
        if(stall_ctrl[4] == `ysyx22040228_NOSTOP) begin
            wb_rd_ena  <= mem_rd_ena  ;
            wb_rd_addr <= mem_rd_addr ;
            wb_rd_data <= mem_rd_data ;
            wb_pc_o    <= wb_pc_i     ;
            wb_inst_o  <= wb_inst_i   ;
        end
        else if((stall_ctrl[3:0] == 4'b1111) && (stall_ctrl[4] == `ysyx22040228_STOP)) begin
            wb_rd_ena  <= 1'b0 ;
            wb_rd_addr <= 5'b0 ;
            wb_rd_data <= `ysyx22040228_ZEROWORD ;
            wb_pc_o    <= `ysyx22040228_ZEROWORD ;
            wb_inst_o  <= 32'b0 ;
        end
        else begin
        wb_rd_ena  <= wb_rd_ena  ;
        wb_rd_addr <= wb_rd_addr ;
        wb_rd_data <= wb_rd_data ;
        wb_pc_o    <= wb_pc_i    ;
        wb_inst_o  <= wb_inst_i   ;
        end
    end
end

//delay two time to writ difftest exe
reg   [`ysyx22040228_PCBUS]    pc_data1;
reg                            difftest_exyn;
reg                            teap_yn ;
reg   [`ysyx22040228_REGBUS]   trap_code;

always @(posedge clk) begin
    if(rst == `ysyx22040228_RENABLE) begin
       pc_data1   <= `ysyx22040228_ZEROWORD;
    end 
    else begin
       pc_data1   <= wb_pc_o;
    end 
end

always @(posedge clk) begin
    if(wb_inst_o != 32'b0) begin
        difftest_exyn <= 1'b1;
        if(wb_inst_o == `EBREAK_TRAP) begin
            teap_yn <= 1'b1;
            trap_code <= wb_rd_data ;
        end
        else begin
            teap_yn <= 1'b0;
            trap_code <= `ysyx22040228_ZEROWORD ;
        end  
    end 
    else if(wb_inst_o == 32'b0) begin
        difftest_exyn <= 1'b0;
        teap_yn <= 1'b0;
        trap_code <= `ysyx22040228_ZEROWORD ;
    end 
end

endmodule//mem_wb

/************************************************************
Author:LiGuoqi
Name:multiplier.v
Function:execute muliplication instruction
************************************************************/
//`include "ysyx_22040228defines.v"
module ysyx_22040228multiplier (
    inout          wire                                            clk              ,
    input          wire                                            rst              ,
    input          wire                                            mult_ready       ,
    input          wire            [7 :0]                          inst_opcode      ,
    input          wire            [63:0]                          mult_op1         ,
    input          wire            [63:0]                          mult_op2         ,
    output         wire            [63:0]                          product_val      ,
    output         wire                                            mult_finish              
);

    reg     mult_valid ;
    reg  [63:0] multipler ;
    assign  mult_finish = mult_valid & ~( | multipler) ;

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)
            mult_valid <= 1'b1  ;
        else if(~mult_ready | mult_finish)
            mult_valid <= 1'b0  ;
        else 
            mult_valid <= 1'b1  ;
    end

    wire         op1_signbit ;
    wire         op2_signbit ;
    wire  [63:0] op1_absolute;
    wire  [63:0] op2_absolute;
    assign op1_signbit  = mult_op1[63] ;
    assign op2_signbit  = mult_op2[63] ;
    assign op1_absolute = op1_signbit ? (~mult_op1 + 1) : mult_op1 ;
    assign op2_absolute = op2_signbit ? (~mult_op2 + 1) : mult_op2 ; 

    reg  [127:0] multiplcand ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)
            multiplcand <= `ysyx22040228_DIV_ZERO ;
        else if(mult_valid)
            multiplcand <= {multiplcand[126:0],1'b0} ;
        else if(mult_ready)
            multiplcand <= {64'b0,op1_absolute}; 
    end
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)
            multipler <= `ysyx22040228_ZEROWORD ;
        else if(mult_valid)
            multipler <= {1'b0, multipler[63:1]} ;
        else if(mult_ready)
            multipler <= op2_absolute ;
    end

    wire [127:0] product_lins ;
    assign product_lins = multipler[0] ? multiplcand : 128'b0 ;
    reg  [127:0] product_temp ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)
            product_temp <= 128'h0;
        else if(mult_valid)
            product_temp <= product_temp + product_lins ;
        else if(mult_ready)
            product_temp <= 128'b0  ;
    end

    reg   product_signbit ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)
            product_signbit <= 1'b0 ;
        else if(mult_valid)
            product_signbit <= op1_signbit ^ op2_signbit ;
        else 
            product_signbit <= op1_signbit ^ op2_signbit ;
    end

    assign product_val = (inst_opcode == `INST_MUL)      ? (product_signbit ? ~product_temp[63:0]+1 : product_temp[63:0])                     :
                         (inst_opcode == `INST_MULH)     ? (product_signbit ? {(~product_temp[63:32]+1),32'b0} : {product_temp[63:32],32'b0}) :
                         (inst_opcode == `INST_MULHU)    ? (product_signbit ? {(~product_temp[63:32]+1),32'b0} : {product_temp[63:32],32'b0}) :
                         (inst_opcode == `INST_MULW)     ? (product_signbit ? (~product_temp[31] ? {32'hffffffff,(~product_temp[31:0]+1)} : {32'b0,(~product_temp[31:0]+1)}) : (product_temp[31] ? {32'hffffffff,product_temp[31:0]} : {32'b0,product_temp[31:0]})) :
                                                                                                                            `ysyx22040228_ZEROWORD;
    
endmodule
/************************************************************
Author:LiGuoqi
Name:pc.v
Function:Instruction address transmitter
************************************************************/
//`include "ysyx_22040228defines.v"
module ysyx_22040228pc ( 
    //系统输入
    input    wire                                           clk          ,
    input    wire                                           rst          ,

    input    wire    [`ysyx22040228_PCBUS]                  static_pc_i  ,   //分支预测指令dz
    // from id
    input    wire    [`ysyx22040228_PCBUS]                  id_pc_i      ,   //译码传来指令地址
    input    wire                                           id_pc_ena    ,   //译码传来指令使能信号

    input    wire    [`ysyx22040228_PCBUS]                  ex_pc_i      ,   //执行阶段送来的指令
    input    wire                                           ex_pc_ena    ,   // 执行阶段指令送来的使能信号
    input    wire    [4:0]                                  stall_ctrl   ,   //pc暂停信号
    //to if
    output   reg     [`ysyx22040228_PCBUS]                  pc               
);


    reg        ex_pc_change ;
    reg        id_pc_change ;
    reg [63:0] pc_ex        ;
    reg [63:0] pc_id        ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            ex_pc_change <= 1'b0    ;
            id_pc_change <= 1'b0    ;
            pc_ex <= `ysyx22040228_ZEROWORD ;
            pc_id <= `ysyx22040228_ZEROWORD ;
        end 
        else if((stall_ctrl[1:0] == 2'b11) && (ex_pc_ena)) begin
            ex_pc_change <= 1'b1    ;
            pc_ex <= ex_pc_i        ;
        end 
        else if((stall_ctrl[1:0] == 2'b11) && (id_pc_ena)) begin
            id_pc_change <= 1'b1    ;
            pc_id <= id_pc_i        ;
        end 
        else if(stall_ctrl[1:0] == 2'b00) begin
            ex_pc_change <= 1'b0    ;
            id_pc_change <= 1'b0    ;
            pc_ex <= `ysyx22040228_ZEROWORD ;
            pc_id <= `ysyx22040228_ZEROWORD ;
        end 
    end

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            pc <= `ysyx22040228_START      ; 
        end
        else begin
            if (stall_ctrl[0] == `ysyx22040228_STOP) begin 
                  pc <= pc                 ;
            end
            else if((stall_ctrl[1:0] == 2'b00) && ((ex_pc_change) || (ex_pc_ena))) begin
                  pc <= pc_ex              ;
            end 
            else if((stall_ctrl[1:0] == 2'b00) && ((id_pc_change) || (id_pc_ena))) begin
                  pc <= pc_id              ;
            end 
            else begin
                  pc <= static_pc_i        ;            
            end
        end
    end
    
    
endmodule//pc

/**********************************************************************
Author  :LiGuoQi
Data    :2022,03,21
Function:this module use to pipeline prediction
**********************************************************************/
//`include "ysyx_22040228defines.v"
module ysyx_22040228pip_fore (
    input            wire                                   rst      ,
    input            wire    [`ysyx22040228_PCBUS]          pc_i     ,
    input            wire    [`ysyx22040228_INSTBUS]        inst     ,
    input            wire    [`ysyx22040228_REGBUS]         x1_data  ,

    
    output           wire    [`ysyx22040228_PCBUS]          pc_o     ,
    output           wire    [`ysyx22040228_REGADDRBUS]     x1_addr  ,
    output           wire                                   x1_ena   
);

wire   [20:1] j_imm;
assign {j_imm[20] , j_imm[10:1] , j_imm[11] , j_imm[19:12]} = inst[31:12];
wire   [11:0] i_imm;
assign i_imm = inst[31:20];
wire   [12:1] b_imm;
assign {b_imm[12] , b_imm[10:5] , b_imm[4:1] , b_imm[11]} = {inst[31:25] , inst[11:7]} ; 

wire [6:0] opcode;
assign x1_addr = inst[19:15];
assign opcode = inst[6:0];
wire inst_jal  ;
wire inst_jalr ;
wire inst_bxx  ;
assign inst_jal  = (opcode[6:2] == `ysyx22040228_JAL) && (opcode[1:0] == 2'b11)  ;
assign inst_jalr = (opcode[6:2] == `ysyx22040228_JALR) && (opcode[1:0] == 2'b11) ;
assign inst_bxx  = (opcode[6:2] == `ysyx22040228_BRANCH) && (opcode[1:0] == 2'b11)   ; 
//assign pip_ena   = inst_bxx;
assign x1_ena = (rst == `ysyx22040228_RSTENA) ? 0:inst_jalr;

wire [63:0] operand1;
wire [63:0] operand2;
assign operand1 = inst_jalr ? x1_data:pc_i;
assign operand2 = inst_jal  ? {{44{j_imm[20]}} , j_imm[20:1] << 1} :
                  inst_bxx  ? {{52{b_imm[12]}} , b_imm[12:1] << 1} :
                  inst_jalr ? {{52{i_imm[11]}} , i_imm[11:0]}      :
                  (rst ==`ysyx22040228_RSTENA) ? `ysyx22040228_THISPC:
                                               `ysyx22040228_NEXTPC; 

wire [63:0] j_pc;
assign j_pc         = operand1 + operand2;
assign pc_o = (rst == `ysyx22040228_RSTENA) ? `ysyx22040228_ZEROWORD:
                      inst_jalr                     ? {j_pc[63:1] , 1'b0}   :
                                                                j_pc;

endmodule//pip_fore

/************************************************************
Author:LiGuoqi
Name:regfile.v
Function:32 general purpose registers
************************************************************/
//`include "ysyx_22040228defines.v"
module ysyx_22040228regfile (
	input                   wire                                     clk            ,
	input                   wire                                     rst            ,

	input                   wire     [`ysyx22040228_REGADDRBUS]      waddr          ,
	input                   wire     [`ysyx22040228_REGBUS]          wdata          ,
	input                   wire                                     we             ,

	input                   wire     [`ysyx22040228_REGADDRBUS]      raddr1         ,
	output                  wire     [`ysyx22040228_REGBUS]          rdata1         ,
	input                   wire                                     re1            ,

	input                   wire     [`ysyx22040228_REGADDRBUS]      raddr2         ,
	output                  wire     [`ysyx22040228_REGBUS]          rdata2         ,
	input                   wire                                     re2            ,     

	input                   wire                                     x1_read_ena    ,
	output                  wire     [`ysyx22040228_REGBUS]          x1_data        ,
	input                   wire     [`ysyx22040228_REGADDRBUS]      x1_addr        

//	output                  wire     [ 7:0]                         trap_code      ,

//	output                  wire     [`ysyx22040228_REGBUS]         reg_a0                   
);

// import "DPI-C" function void difftest_dut_regs(
// 	input longint Z0 ,
// 	input longint ra ,
// 	input longint sp ,
// 	input longint gp ,
// 	input longint tp ,
// 	input longint t0 ,
// 	input longint t1 ,
// 	input longint t2 ,
// 	input longint fp ,
// 	input longint s1 ,
// 	input longint a0 ,
// 	input longint a1 ,
// 	input longint a2 ,
// 	input longint a3 ,
// 	input longint a4 ,
// 	input longint a5 ,
// 	input longint a6 ,
// 	input longint a7 ,
// 	input longint s2 ,
// 	input longint s3 ,
// 	input longint s4 ,
// 	input longint s5 ,
// 	input longint s6 ,
// 	input longint s7 ,
// 	input longint s8 ,
// 	input longint s9 ,
// 	input longint s10 ,
// 	input longint a11 ,
//     input longint t3 ,
// 	input longint t4 ,
// 	input longint t5 ,
// 	input longint t6 
// );

// always@(*)begin
// 	difftest_dut_regs(
// 		regs[0],
// 		regs[1],
// 		regs[2],
// 		regs[3],
// 		regs[4],
// 		regs[5],
// 		regs[6],
// 		regs[7],
// 		regs[8],
// 		regs[9],
// 		regs[10],
// 		regs[11],
// 		regs[12],
// 		regs[13],
// 		regs[14],
// 		regs[15],
// 		regs[16],
// 		regs[17],
// 		regs[18],
// 		regs[19],
// 		regs[20],
// 		regs[21],
// 		regs[22],
// 		regs[23],
// 		regs[24],
// 		regs[25],
// 		regs[26],
// 		regs[27],
// 		regs[28],
// 		regs[29],
// 		regs[30],
// 		regs[31]
// 	);
// end

reg [`ysyx22040228_REGBUS] regs [0:31] ;

integer i ;

always @(posedge clk) begin
	if(rst == `ysyx22040228_RSTENA) begin
		for(i = 0;i<32;i=i+1) begin
			regs[i] <= `ysyx22040228_ZEROWORD ;
		end
	end
	else begin
		if(we == `ysyx22040228_WENABLE && waddr != 5'd0) begin
			regs[waddr] <= wdata ;
		end
	end
end

assign rdata1 = ((rst != `ysyx22040228_RSTENA) && (re1 == `ysyx22040228_RENABLE)) ? (((waddr == raddr1) && (we == `ysyx22040228_WENABLE) ? wdata : regs[raddr1])) : `ysyx22040228_ZEROWORD ;
assign rdata2 = ((rst != `ysyx22040228_RSTENA) && (re2 == `ysyx22040228_RENABLE)) ? (((waddr == raddr2) && (we == `ysyx22040228_WENABLE) ? wdata : regs[raddr2])) : `ysyx22040228_ZEROWORD ;

assign x1_data  = ((rst != `ysyx22040228_RSTENA) && (x1_read_ena == `ysyx22040228_RENABLE)) ? (((x1_addr == waddr) && (we == `ysyx22040228_WENABLE) ? wdata : regs[x1_addr])) : `ysyx22040228_ZEROWORD ;

endmodule//regfile

/************************************************************
Author:LiGuoqi
data:2021,10.21
Name:rvcpu.v
Function:Core top level module
************************************************************/
// `include "ysyx_22040228pip_fore.v"
// `include "ysyx_22040228pc.v"
// `include "ysyx_22040228if_id.v"
// `include "ysyx_22040228id.v"
// `include "ysyx_22040228id_ex.v"
// `include "ysyx_22040228ex.v"
// `include "ysyx_22040228ex_mem.v"
// `include "ysyx_22040228load_store.v"
// `include "ysyx_22040228mem_wb.v"
// `include "ysyx_22040228ctrl.v"
// `include "ysyx_22040228defines.v"
// `include "ysyx_22040228regfile.v"
/* verilator lint_off UNUSED */
module ysyx_22040228rvcpu (
    input           wire                                        clk            ,
    input           wire                                        rst            ,
    
    output          wire         [`ysyx22040228_PCBUS]          inst_addr      ,
   
    output          wire                                        inst_ready     ,
    input           wire         [`ysyx22040228_INSTBUS]        inst           ,
    input           wire                                        bui_inst_valid ,
    output          wire                                        core_stall_sign,

    output          wire         [`ysyx22040228_DATAADDRBUS]    data_addr      ,
    output          wire         [7:0]                          wmask          ,
    output          wire         [`ysyx22040228_DATABUS]        data_o         ,
    input           wire         [`ysyx22040228_DATABUS]        data_i         ,
    output          wire         [2:0]                          we_type_data   ,
    output          wire                                        we             ,
    output          wire         [2:0]                          re_type_data   ,
    output          wire                                        re             ,
    output          wire                                        fence          ,
    input           wire                                        mem_finish     ,

    input           wire                                        timer_intr     
);
//about Pip_prediction
wire    [`ysyx22040228_REGBUS]           pip_regfile_x1     ;
wire                                     pip_refflie_x1_ena ;
wire    [`ysyx22040228_REGADDRBUS]       pip_regfile_x1_addr;
wire    [`ysyx22040228_PCBUS]            pip_pc             ;
//about if_id
wire                                    if_stall_req       ;
wire    [`ysyx22040228_PCBUS]           if_id_pc           ;
wire    [`ysyx22040228_INSTBUS]         if_id_inst         ;

//about ex
wire                                    ex_flush           ;
wire    [`ysyx22040228_REGBUS]          ex_id_rd_data      ;
wire    [`ysyx22040228_REGADDRBUS]      ex_id_rd_addr      ;
wire                                    ex_id_rd_ena       ;
wire    [ 7:0]                          ex_id_rd_type      ;
wire    [ 2:0]                          ex_mem_sel         ;
wire    [`ysyx22040228_DATABUS]         ex_mem_addr        ;
wire                                    ex_mem_fence       ;
wire                                    ex_pc_branchena    ;
wire    [`ysyx22040228_PCBUS]           ex_pc_branchpc     ;
wire                                    ex_ctrl_req        ;

//about id
//wire                                   id_flush           ;
wire    [`ysyx22040228_REGADDRBUS]     id_reg_addr1       ;
wire                                   id_reg_ena1        ;
wire    [`ysyx22040228_REGADDRBUS]     id_reg_addr2       ;
wire                                   id_reg_ena2        ;
wire                                   id_ctrl_req        ;
wire    [ 7:0]                         id_ex_type         ;
wire    [ 7:0]                         id_ex_opcode       ;
wire    [`ysyx22040228_REGBUS]         id_ex_op           ;
wire    [`ysyx22040228_REGBUS]         id_ex_op2          ;
wire                                   id_ex_rd_ena       ;
wire    [`ysyx22040228_REGADDRBUS]     id_ex_rd_addr      ;
wire    [`ysyx22040228_PCBUS]          id_ex_pc           ;
wire    [11:0]                         id_ex_s_offset     ;
wire    [ 2:0]                         id_ex_memsel       ;
wire    [`ysyx22040228_PCBUS]          id_pip_jalrpc      ;
wire                                   id_pip_jalrena     ;
wire                                   id_if_flush        ;

  
//about ctrl
wire    [4:0]                          stall_ctrl         ;

//about regfile
wire    [`ysyx22040228_REGBUS]         regs_id_data1      ;
wire    [`ysyx22040228_REGBUS]         regs_id_data2      ;

//about mem
wire    [`ysyx22040228_REGBUS]         mem_id_data        ;
wire    [`ysyx22040228_REGADDRBUS]     mem_id_addr        ;
wire                                   mem_id_ena         ;
wire                                   mem_ctrl_req       ;
//about wb
wire    [`ysyx22040228_REGADDRBUS]     wb_id_addr         ;
wire                                   wb_id_ena          ;
wire    [`ysyx22040228_REGBUS]         wb_regfile_data    ;

//about id_ex
wire    [`ysyx22040228_PCBUS]          idex_ex_pc         ;
wire    [ 7:0]                         idex_ex_type       ;
wire    [ 7:0]                         idex_ex_opcode     ;
wire    [`ysyx22040228_REGBUS]         idex_ex_op1        ;
wire    [`ysyx22040228_REGBUS]         idex_ex_op2        ;
wire                                   idex_ex_rdena      ;
wire    [`ysyx22040228_REGADDRBUS]     idex_ex_rdaddr     ;
wire    [11:0]                         idex_ex_offset     ;
wire    [ 2:0]                         idex_ex_sel        ;
     
//about ex_eme
wire    [ 7:0]                         exmem_mem_type     ;
wire                                   exmem_mem_ena      ;
wire    [`ysyx22040228_REGBUS]         exmem_mem_data     ;
wire    [`ysyx22040228_REGADDRBUS]     exmem_mem_addr     ;
wire    [ 2:0]                         exmem_mem_sel      ;
wire    [`ysyx22040228_DATAADDRBUS]    exmem_mem_lsaddr   ;
wire                                   exmem_mem_fence    ;
//difftest use
wire    [`ysyx22040228_PCBUS]          ex_ex_mem_pc       ;
wire    [`ysyx22040228_PCBUS]          ex_mem_mem_pc      ;
wire    [`ysyx22040228_PCBUS]          mem_mem_wb_pc      ;

wire    [`ysyx22040228_INSTBUS]        id_id_ex_inst      ;
wire    [`ysyx22040228_INSTBUS]        id_ex_ex_inst      ;
wire    [`ysyx22040228_INSTBUS]        ex_ex_mem_inst     ;
wire    [`ysyx22040228_INSTBUS]        ex_mem_mem_inst    ;
wire    [`ysyx22040228_INSTBUS]        mem_mem_wb_inst    ;

ysyx_22040228pip_fore pip_fore0 (
    .rst                 (rst                  ),
    .pc_i                (inst_addr            ),
    .inst                (inst                 ),
    .x1_data             (pip_regfile_x1       ),
    .x1_ena              (pip_refflie_x1_ena   ),
    .x1_addr             (pip_regfile_x1_addr  ),
    .pc_o                (pip_pc               )
);

ysyx_22040228pc pc1 (
    .clk                 (clk                  ),
    .rst                 (rst                  ),
    .static_pc_i         (pip_pc               ),
    .id_pc_i             (id_pip_jalrpc        ),
    .id_pc_ena           (id_pip_jalrena       ),
    .ex_pc_ena           (ex_pc_branchena      ),
    .ex_pc_i             (ex_pc_branchpc       ),
    .stall_ctrl          (stall_ctrl           ),
    .pc                  (inst_addr            )             
);

ysyx_22040228if_id if_id2 (
    .clk                 (clk                  ),
    .rst                 (rst                  ),
    .if_pc               (inst_addr            ),
    .if_inst             (inst                 ),
    .if_id_flush         (ex_flush             ),
    .if_id_bubble        (id_if_flush          ),
    .if_inst_valid       (bui_inst_valid       ),
    .if_inst_ready       (inst_ready           ),
    .if_inst_stall       (core_stall_sign      ),
    .stall_ctrl          (stall_ctrl           ),
    .mem_stall_sign      (mem_ctrl_req         ),
    .ex_stall_sign       (ex_ctrl_req          ),
    .id_stall_sign       (id_ctrl_req          ),
    .if_unstall_req      (if_stall_req         ),
    .id_pc               (if_id_pc             ),
    .id_inst             (if_id_inst           )
);

ysyx_22040228id id3 (
    //系统输入
    .rst                 (rst                  ),
    .inst_i              (if_id_inst           ),
    .pc_i                (if_id_pc             ),

    // regfile
    .op1_data_i          (regs_id_data1        ),
    .op2_data_i          (regs_id_data2        ),
    .op1_addr_o          (id_reg_addr1         ),
    .op2_addr_o          (id_reg_addr2         ),
    .op1_read_o          (id_reg_ena1          ),
    .op2_read_o          (id_reg_ena2          ),

    // ex 
    .ex_rd_data          (ex_id_rd_data        ),
    .ex_rd_addr          (ex_id_rd_addr        ),
    .ex_rd_ena           (ex_id_rd_ena         ),
    .ex_inst_type        (ex_id_rd_type        ), // load related data hazard

    // mem 
    .mem_rd_data         (mem_id_data          ),
    .mem_rd_addr         (mem_id_addr          ),
    .mem_rd_ena          (mem_id_ena           ),
    //regfile(wbm)
    .wb_rd_ena           (wb_id_ena            ),
    .wb_rd_addr          (wb_id_addr           ),
    
    //ctrl
    .id_stall_req        (id_ctrl_req          ),

    //id_exe
    .inst_type           (id_ex_type           ),
    .inst_opcode         (id_ex_opcode         ),
    .op1_o               (id_ex_op             ),
    .op2_o               (id_ex_op2            ),
    .rd_w_ena            (id_ex_rd_ena         ),
    .rd_w_addr           (id_ex_rd_addr        ),
    .pc_o                (id_ex_pc             ),
    .inst_o              (id_id_ex_inst        ),
    
    .store_addr_offset   (id_ex_s_offset       ),
    .mem_op_sel          (id_ex_memsel         ), //?


    // to pc and if_id
    .jalr_pc_ena         (id_pip_jalrena       ),
    .jalr_pc             (id_pip_jalrpc        ),
    .id_flush            (id_if_flush          )
);

ysyx_22040228id_ex id_ex4 (
    .clk                 (clk                  ),
    .rst                 (rst                  ),
    .id_ex_bubble        (ex_flush             ),

    .stall_ctrl          (stall_ctrl           ),
    
    .id_inst             (id_id_ex_inst        ),
    .id_pc               (id_ex_pc             ),
    .id_inst_type        (id_ex_type           ),
    .id_inst_opcode      (id_ex_opcode         ),
    .id_op1              (id_ex_op             ),
    .id_op2              (id_ex_op2            ),
    .id_rd_ena           (id_ex_rd_ena         ),
    .id_rd_addr          (id_ex_rd_addr        ),

    .id_addr_offset      (id_ex_s_offset       ), 
    .id_ls_sel           (id_ex_memsel         ),

    //output
    .ex_inst             (id_ex_ex_inst        ),
    .ex_pc               (idex_ex_pc           ),
    .ex_inst_type        (idex_ex_type         ),
    .ex_inst_opcode      (idex_ex_opcode       ),
    .ex_op1              (idex_ex_op1          ),
    .ex_op2              (idex_ex_op2          ),
    .ex_rd_ena           (idex_ex_rdena        ),
    .ex_rd_addr          (idex_ex_rdaddr       ),

    .ex_addr_offset      (idex_ex_offset       ),
    .ex_ls_sel           (idex_ex_sel          )
 );

ysyx_22040228ex ex5 (
    .clk                 (clk                  ),
    .rst                 (rst                  ),
    .pc_i                (idex_ex_pc           ),
    .id_ex_inst          (id_ex_ex_inst        ),

    .inst_type_i         (idex_ex_type         ),
    .inst_opcode_i       (idex_ex_opcode       ),
    .op1_i               (idex_ex_op1          ),
    .op2_i               (idex_ex_op2          ),
    .rd_ena_i            (idex_ex_rdena        ),
    .rd_addr_i           (idex_ex_rdaddr       ),

    .ls_sel_i            (idex_ex_sel          ),
    .addr_offsel_i       (idex_ex_offset       ),

    //output 
    .inst_type_o         (ex_id_rd_type        ),
    .rd_ena_o            (ex_id_rd_ena         ),
    .rd_addr_o           (ex_id_rd_addr        ),
    .rd_data_o           (ex_id_rd_data        ),
    .ex_pc_o             (ex_ex_mem_pc         ),
    .ex_inst_o           (ex_ex_mem_inst       ),

    .ls_sel_o            (ex_mem_sel           ),
    .ls_addr_o           (ex_mem_addr          ),
    .fence_ready         (ex_mem_fence         ),

    .ex_flush            (ex_flush             ),
    .branch_pc_ena       (ex_pc_branchena      ),
    .branch_pc           (ex_pc_branchpc       ),
    
    //to ctrl
    .ex_stall_req        (ex_ctrl_req          ),
    
    //to interrupt
    .timer_intr          (timer_intr           ),
    .ex_stall            (stall_ctrl[3]        )//,
    
    //to difftest
    //.tmr_trap_ena_o      ()
);

ysyx_22040228ex_mem ex_mem6 (
    .clk                 (clk                  ),
    .rst                 (rst                  ),
    .ex_mem_pc_i         (ex_ex_mem_pc         ),
    .ex_mem_inst_i       (ex_ex_mem_inst       ),
    .stall_ctrl          (stall_ctrl           ),

    .ex_inst_type        (ex_id_rd_type        ),
    .ex_rd_ena           (ex_id_rd_ena         ),
    .ex_rd_data          (ex_id_rd_data        ),
    .ex_rd_addr          (ex_id_rd_addr        ),

    .ex_ls_sel           (ex_mem_sel           ),
    .ex_ls_addr          (ex_mem_addr          ),
    .fence_ready_i       (ex_mem_fence         ),
    
    .mem_inst_type       (exmem_mem_type       ),
    .mem_rd_ena          (exmem_mem_ena        ),
    .mem_rd_data         (exmem_mem_data       ),
    .mem_rd_addr         (exmem_mem_addr       ),
    .ex_mem_pc_o         (ex_mem_mem_pc        ),
    .ex_mem_inst_o       (ex_mem_mem_inst      ),

    .mem_ls_sel          (exmem_mem_sel        ),
    .mem_ls_addr         (exmem_mem_lsaddr     ),
    .fence_ready_o       (exmem_mem_fence      )
);

ysyx_22040228load_store load_store7 (
   .rst                  (rst                  ),
   .inst_type_i          (exmem_mem_type       ),
   .rd_ena_i             (exmem_mem_ena        ),
   .rd_data_i            (exmem_mem_data       ),
   .rd_addr_i            (exmem_mem_addr       ),
   .mem_pc_i             (ex_mem_mem_pc        ),
   .mem_inst_i           (ex_mem_mem_inst      ),

   .ls_addr_i            (exmem_mem_lsaddr     ),
   .ls_sel_i             (exmem_mem_sel        ),
   .fence_ready_         (exmem_mem_fence      ),

   .data_addr_o          (data_addr            ),
   .wmask_o              (wmask                ),
   .data_i               (data_i               ),
   .data_o               (data_o               ),
   .fence                (fence                ),
   .we_type_sel          (we_type_data         ),
   .we                   (we                   ),
   .re_type_sel          (re_type_data         ),
   .re                   (re                   ),
   .mem_finish           (mem_finish           ),
    
   .rd_ena_o             (mem_id_ena           ),
   .rd_data_o            (mem_id_data          ),
   .rd_addr_o            (mem_id_addr          ),
   .mem_pc_o             (mem_mem_wb_pc        ),
   .mem_inst_o           (mem_mem_wb_inst      ),

   .mem_stall_req        (mem_ctrl_req         )
);

ysyx_22040228mem_wb mem_wb8 (
   .clk                  (clk                  ),
   .rst                  (rst                  ),
   .wb_pc_i              (mem_mem_wb_pc        ),
   .wb_inst_i            (mem_mem_wb_inst      ),

   .stall_ctrl           (stall_ctrl           ),

   .mem_rd_data          (mem_id_data          ),
   .mem_rd_addr          (mem_id_addr          ),
   .mem_rd_ena           (mem_id_ena           ),

   .wb_rd_data           (wb_regfile_data      ),
   .wb_rd_addr           (wb_id_addr           ),
   .wb_rd_ena            (wb_id_ena            )
);

ysyx_22040228ctrl ctrl9 (
   .rst                  (rst                  ),
   .if_stall_req         (if_stall_req         ), 
   .id_stall_req         (id_ctrl_req          ),
   .ex_stall_req         (ex_ctrl_req          ),
   .mem_stall_req        (mem_ctrl_req         ),

   .stall_ctrl           (stall_ctrl           )
);

ysyx_22040228regfile regfile10 (
   .clk                  (clk                  ),
   .rst                  (rst                  ),

   .waddr                (wb_id_addr           ),
   .wdata                (wb_regfile_data      ),
   .we                   (wb_id_ena            ),

   .raddr1               (id_reg_addr1         ),
   .rdata1               (regs_id_data1        ),
   .re1                  (id_reg_ena1          ),

   .raddr2               (id_reg_addr2         ),
   .rdata2               (regs_id_data2        ),
   .re2                  (id_reg_ena2          ),     

   .x1_read_ena          (pip_refflie_x1_ena   ),
   .x1_data              (pip_regfile_x1       ),
   .x1_addr              (pip_regfile_x1_addr  )

   //.trap_code            () ,

   //.reg_a0               ()       
);

endmodule

/************************************************************
Author:LiGuoqi
Name:soc_axi.v
Function:AXI4 bus
************************************************************/
// `include "ysyx_22040228defines_axi4.v"
// `include "ysyx_22040228defines.v"
// `define  IO_ADDR   
// `define  TIME_ADDR
parameter SLAVE_NUM = 2 ;

//SLAVE_NUM 1 --> IO
//SLAVE_NUM 2 --> TIME
//slave_NUM 3 --> ELSE

module ysyx_22040228soc_axi4(
    inout             wire                                               clk                  ,
    input             wire                                               rst                  ,
    input             wire         [1:0]                                 prot_chose_write     ,
    input             wire         [1:0]                                 prot_chose_read      ,

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
    //parameter SLAVE_NUM = 3 ;

    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            master_axi_aw_ready = `ysyx22040228_ENABLE   ;
            slave_axi_aw_id        = 8'b0      ;
            slave_axi_aw_addr      = 128'b0     ;
            slave_axi_aw_len       = 16'b0      ;
            slave_axi_aw_size      = 6'b0       ;
            slave_axi_aw_burst     = 4'b0       ;
            slave_axi_aw_cache     = 8'b0       ;
            slave_axi_aw_prot      = 6'b0       ;
            slave_axi_aw_qos       = 8'b0      ;
            slave_axi_aw_valid     = 2'b0       ;
            //slave_axi_w_id         = 12'b0      ;
            slave_axi_w_data       = 128'b0     ;
            slave_axi_w_strb       = 16'b0      ;
            slave_axi_w_last       = 2'b0       ;
            slave_axi_w_valid      = 2'b0       ;
            master_axi_w_ready     = `ysyx22040228_ENABLE   ;
            master_axi_b_id        = 4'b0000                ;
            master_axi_b_resp      = 2'b00                  ;
            master_axi_b_valid     = `ysyx22040228_ENABLE   ;
            slave_axi_b_ready      = 2'b0                   ;
        end 
        else if(prot_chose_write[0] == `ysyx22040228_ABLE) begin
            master_axi_aw_ready = slave_axi_aw_ready[1*1-1    : 0]   ;
            slave_axi_aw_id   [4*1-1    :     0     ]      = master_axi_aw_id      ;
            slave_axi_aw_addr [64*1-1   :     0     ]      = master_axi_aw_addr    ;
            slave_axi_aw_len  [8*1-1    :     0     ]      = master_axi_aw_len     ;
            slave_axi_aw_size [3*1-1    :     0     ]      = master_axi_aw_size    ;
            slave_axi_aw_burst[2*1-1    :     0     ]      = master_axi_aw_burst   ;
            slave_axi_aw_cache[4*1-1    :     0     ]      = master_axi_aw_cache   ;
            slave_axi_aw_prot [3*1-1    :     0     ]      = master_axi_aw_prot    ;
            slave_axi_aw_qos  [4*1-1    :     0     ]      = master_axi_aw_qos     ;
            slave_axi_aw_valid[1*1-1    :     0     ]      = master_axi_aw_valid   ;
            //slave_axi_w_id    [4*1-1    :     0     ]      = master_axi_w_id       ;
            slave_axi_w_data  [64*1-1   :     0     ]      = master_axi_w_data     ;
            slave_axi_w_strb  [8*1-1    :     0     ]      = master_axi_w_strb     ;
            slave_axi_w_last  [1*1-1    :     0     ]      = master_axi_w_last     ;
            slave_axi_w_valid [1*1-1    :     0     ]      = master_axi_w_valid    ;
            master_axi_w_ready  = slave_axi_w_ready [1*1-1    : 0]   ;
            master_axi_b_id     = slave_axi_b_id    [4*1-1    : 0]   ;
            master_axi_b_resp   = slave_axi_b_resp  [2*1-1    : 0]   ;
            master_axi_b_valid  = slave_axi_b_valid [1*1-1    : 0]   ;
            slave_axi_b_ready [1*1-1    :     0     ]      = master_axi_b_ready    ;
        end 
        else if(prot_chose_write[1] == `ysyx22040228_ABLE) begin
            master_axi_aw_ready = slave_axi_aw_ready[1*2-1    : 1*1]  ;
            slave_axi_aw_id   [4*2-1    :     4*1   ]      = master_axi_aw_id      ;
            slave_axi_aw_addr [64*2-1   :     64*1  ]      = master_axi_aw_addr    ;
            slave_axi_aw_len  [8*2-1    :     8*1   ]      = master_axi_aw_len     ;
            slave_axi_aw_size [3*2-1    :     3*1   ]      = master_axi_aw_size    ;
            slave_axi_aw_burst[2*2-1    :     2*1   ]      = master_axi_aw_burst   ;
            slave_axi_aw_cache[4*2-1    :     4*1   ]      = master_axi_aw_cache   ;
            slave_axi_aw_prot [3*2-1    :     3*1   ]      = master_axi_aw_prot    ;
            slave_axi_aw_qos  [4*2-1    :     4*1   ]      = master_axi_aw_qos     ;
            slave_axi_aw_valid[1*2-1    :     1*1   ]      = master_axi_aw_valid   ;
            //slave_axi_w_id    [4*2-1    :     4*1   ]      = master_axi_w_id       ;
            slave_axi_w_data  [64*2-1   :     64*1  ]      = master_axi_w_data     ;
            slave_axi_w_strb  [8*2-1    :     8*1   ]      = master_axi_w_strb     ;
            slave_axi_w_last  [1*2-1    :     1*1   ]      = master_axi_w_last     ;
            slave_axi_w_valid [1*2-1    :     1*1   ]      = master_axi_w_valid    ;
            master_axi_w_ready  = slave_axi_w_ready [1*2-1    : 1*1]  ;
            master_axi_b_id     = slave_axi_b_id    [4*2-1    : 4*1]  ;
            master_axi_b_resp   = slave_axi_b_resp  [2*2-1    : 2*1]  ;
            master_axi_b_valid  = slave_axi_b_valid [1*2-1    : 1*1]  ;
            slave_axi_b_ready [1*2-1    :     1*1   ]      = master_axi_b_ready    ;
        end 
        // else if(prot_chose_write[2] == `ysyx22040228_ABLE) begin
        //     master_axi_aw_ready = slave_axi_aw_ready[1*3-1    : 1*2]  ;
        //     slave_axi_aw_id   [4*3-1    :     4*2   ]      = master_axi_aw_id      ;
        //     slave_axi_aw_addr [64*3-1   :     64*2  ]      = master_axi_aw_addr    ;
        //     slave_axi_aw_len  [8*3-1    :     8*2   ]      = master_axi_aw_len     ;
        //     slave_axi_aw_size [3*3-1    :     3*2   ]      = master_axi_aw_size    ;
        //     slave_axi_aw_burst[2*3-1    :     2*2   ]      = master_axi_aw_burst   ;
        //     slave_axi_aw_cache[4*3-1    :     4*2   ]      = master_axi_aw_cache   ;
        //     slave_axi_aw_prot [3*3-1    :     3*2   ]      = master_axi_aw_prot    ;
        //     slave_axi_aw_qos  [4*3-1    :     4*2   ]      = master_axi_aw_qos     ;
        //     slave_axi_aw_valid[1*3-1    :     1*2   ]      = master_axi_aw_valid   ;
        //     //slave_axi_w_id    [4*3-1    :     4*2   ]      = master_axi_w_id       ;
        //     slave_axi_w_data  [64*3-1   :     64*2  ]      = master_axi_w_data     ;
        //     slave_axi_w_strb  [8*3-1    :     8*2   ]      = master_axi_w_strb     ;
        //     slave_axi_w_last  [1*3-1    :     1*2   ]      = master_axi_w_last     ;
        //     slave_axi_w_valid [1*3-1    :     1*2   ]      = master_axi_w_valid    ;
        //     master_axi_w_ready  = slave_axi_w_ready [1*3-1    : 1*2]  ;
        //     master_axi_b_id     = slave_axi_b_id    [4*3-1    : 4*2]  ;
        //     master_axi_b_resp   = slave_axi_b_resp  [2*3-1    : 2*2]  ;
        //     master_axi_b_valid  = slave_axi_b_valid [1*3-1    : 1*2]  ;
        //     slave_axi_b_ready [1*3-1    :     1*2   ]      = master_axi_b_ready    ;
        // end 
        else begin
            master_axi_aw_ready = `ysyx22040228_ENABLE   ;
            slave_axi_aw_id        = 8'b0      ;
            slave_axi_aw_addr      = 128'b0     ;
            slave_axi_aw_len       = 16'b0      ;
            slave_axi_aw_size      = 6'b0       ;
            slave_axi_aw_burst     = 4'b0       ;
            slave_axi_aw_cache     = 8'b0       ;
            slave_axi_aw_prot      = 6'b0       ;
            slave_axi_aw_qos       = 8'b0      ;
            slave_axi_aw_valid     = 2'b0       ;
            //slave_axi_w_id         = 12'b0      ;
            slave_axi_w_data       = 128'b0     ;
            slave_axi_w_strb       = 16'b0      ;
            slave_axi_w_last       = 2'b0       ;
            slave_axi_w_valid      = 2'b0       ;
            master_axi_w_ready     = `ysyx22040228_ENABLE   ;
            master_axi_b_id        = 4'b0000                ;
            master_axi_b_resp      = 2'b00                  ;
            master_axi_b_valid     = `ysyx22040228_ENABLE   ;
            slave_axi_b_ready      = 2'b0                   ;
        end 
    end

    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            slave_axi_ar_id        = 8'b0      ;
            slave_axi_ar_addr      = 128'b0     ;
            slave_axi_ar_len       = 16'b0      ;
            slave_axi_ar_size      = 6'b0       ;
            slave_axi_ar_burst     = 4'b0       ;
            slave_axi_ar_cache     = 8'b0      ;
            slave_axi_ar_prot      = 6'b0       ;
            slave_axi_ar_qos       = 8'b0      ;
            slave_axi_ar_valid     = 2'b0       ;
            master_axi_ar_ready = `ysyx22040228_ENABLE   ;
            master_axi_r_id     = 4'b0000                ;
            master_axi_r_data   = `ysyx22040228_ZEROWORD ;
            master_axi_r_resp   = 2'b00                  ;
            master_axi_r_last   = `ysyx22040228_ENABLE   ;
            master_axi_r_valid  = `ysyx22040228_ENABLE   ;
            slave_axi_r_ready      = 2'b0       ;
        end 
        else if(prot_chose_read[0] == `ysyx22040228_ABLE) begin
            slave_axi_ar_id   [4*1-1    :     0     ]      = master_axi_ar_id      ;
            slave_axi_ar_addr [64*1-1   :     0     ]      = master_axi_ar_addr    ;
            slave_axi_ar_len  [8*1-1    :     0     ]      = master_axi_ar_len     ;
            slave_axi_ar_size [3*1-1    :     0     ]      = master_axi_ar_size    ;
            slave_axi_ar_burst[2*1-1    :     0     ]      = master_axi_ar_burst   ;
            slave_axi_ar_cache[4*1-1    :     0     ]      = master_axi_ar_cache   ;
            slave_axi_ar_prot [3*1-1    :     0     ]      = master_axi_ar_prot    ;
            slave_axi_ar_qos  [4*1-1    :     0     ]      = master_axi_ar_qos     ;
            slave_axi_ar_valid[1*1-1    :     0     ]      = master_axi_ar_valid   ;
            master_axi_ar_ready = slave_axi_ar_ready[1*1-1    : 0]   ;
            master_axi_r_id     = slave_axi_r_id    [4*1-1    : 0]   ;
            master_axi_r_data   = slave_axi_r_data  [64*1-1   : 0]   ;
            master_axi_r_resp   = slave_axi_r_resp  [2*1-1    : 0]   ;
            master_axi_r_last   = slave_axi_r_last  [1*1-1    : 0]   ;
            master_axi_r_valid  = slave_axi_r_valid [1*1-1    : 0]   ;
            slave_axi_r_ready [1*1-1    :     0     ]      = master_axi_r_ready   ;
        end 
        else if(prot_chose_read[1] == `ysyx22040228_ABLE) begin
            slave_axi_ar_id   [4*2-1    :     4*1   ]      = master_axi_ar_id      ;
            slave_axi_ar_addr [64*2-1   :     64*1  ]      = master_axi_ar_addr    ;
            slave_axi_ar_len  [8*2-1    :     8*1   ]      = master_axi_ar_len     ;
            slave_axi_ar_size [3*2-1    :     3*1   ]      = master_axi_ar_size    ;
            slave_axi_ar_burst[2*2-1    :     2*1   ]      = master_axi_ar_burst   ;
            slave_axi_ar_cache[4*2-1    :     4*1   ]      = master_axi_ar_cache   ;
            slave_axi_ar_prot [3*2-1    :     3*1   ]      = master_axi_ar_prot    ;
            slave_axi_ar_qos  [4*2-1    :     4*1   ]      = master_axi_ar_qos     ;
            slave_axi_ar_valid[1*2-1    :     1*1   ]      = master_axi_ar_valid   ;
            master_axi_ar_ready = slave_axi_ar_ready[1*2-1    : 1*1]  ;
            master_axi_r_id     = slave_axi_r_id    [4*2-1    : 4*1]  ;
            master_axi_r_data   = slave_axi_r_data  [64*2-1   : 64*1] ;
            master_axi_r_resp   = slave_axi_r_resp  [2*2-1    : 2*1]  ;
            master_axi_r_last   = slave_axi_r_last  [1*2-1    : 1*1]  ;
            master_axi_r_valid  = slave_axi_r_valid [1*2-1    : 1*1]  ;
            slave_axi_r_ready [1*2-1    :     1*1   ]      = master_axi_r_ready   ;
        end 
        // else if(prot_chose_read[2] == `ysyx22040228_ABLE) begin
        //     slave_axi_ar_id   [4*3-1    :     4*2   ]      = master_axi_ar_id      ;
        //     slave_axi_ar_addr [64*3-1   :     64*2  ]      = master_axi_ar_addr    ;
        //     slave_axi_ar_len  [8*3-1    :     8*2   ]      = master_axi_ar_len     ;
        //     slave_axi_ar_size [3*3-1    :     3*2   ]      = master_axi_ar_size    ;
        //     slave_axi_ar_burst[2*3-1    :     2*2   ]      = master_axi_ar_burst   ;
        //     slave_axi_ar_cache[4*3-1    :     4*2   ]      = master_axi_ar_cache   ;
        //     slave_axi_ar_prot [3*3-1    :     3*2   ]      = master_axi_ar_prot    ;
        //     slave_axi_ar_qos  [4*3-1    :     4*2   ]      = master_axi_ar_qos     ;
        //     slave_axi_ar_valid[1*3-1    :     1*2   ]      = master_axi_ar_valid   ;
        //     master_axi_ar_ready = slave_axi_ar_ready[1*3-1    : 1*2]  ;
        //     master_axi_r_id     = slave_axi_r_id    [4*3-1    : 4*2]  ;
        //     master_axi_r_data   = slave_axi_r_data  [64*3-1   : 64*2] ;
        //     master_axi_r_resp   = slave_axi_r_resp  [2*3-1    : 2*2]  ;
        //     master_axi_r_last   = slave_axi_r_last  [1*3-1    : 1*2]  ;
        //     master_axi_r_valid  = slave_axi_r_valid [1*3-1    : 1*2]  ;
        //     slave_axi_r_ready [1*3-1    :     1*2   ]      = master_axi_r_ready   ;
        // end 
        else begin
            slave_axi_ar_id        = 8'b0      ;
            slave_axi_ar_addr      = 128'b0     ;
            slave_axi_ar_len       = 16'b0      ;
            slave_axi_ar_size      = 6'b0       ;
            slave_axi_ar_burst     = 4'b0       ;
            slave_axi_ar_cache     = 8'b0      ;
            slave_axi_ar_prot      = 6'b0       ;
            slave_axi_ar_qos       = 8'b0      ;
            slave_axi_ar_valid     = 2'b0       ;
            master_axi_ar_ready = `ysyx22040228_ENABLE   ;
            master_axi_r_id     = 4'b0000                ;
            master_axi_r_data   = `ysyx22040228_ZEROWORD ;
            master_axi_r_resp   = 2'b00                  ;
            master_axi_r_last   = `ysyx22040228_ENABLE   ;
            master_axi_r_valid  = `ysyx22040228_ENABLE   ;
            slave_axi_r_ready      = 2'b0       ;
        end 
    end
    
endmodule

/************************************************************
Author:LiGuoqi
Name:teg_cc.v
Function:memory teg data
************************************************************/
// `include "ysyx_22040228cache_defines.v"
module ysyx_22040228TEG_CC (
    input            wire                                                         clk        ,
    input            wire       [5:0]                                             addr_i     ,
    input            wire       [`ysyx22040228_TEG_WITH]                          teg_i      ,
    input            wire                                                         teg_valid  ,
    input            wire                                                         teg_ena    ,
    output           wire       [`ysyx22040228_TEG_WITH]                          data_o     ,
    output           wire                                                         data_valid 
);

    reg   [`ysyx22040228_TEG_WITH]   ram   [0:63] ;
    reg                              valid [0:63] ;
    reg   [`ysyx22040228_TEG_WITH]   out_data_r   ;
    reg                              out_valid_r  ;
    always @(posedge clk) begin
        if(teg_ena) begin
            ram[addr_i]   <= teg_i    ;
            valid[addr_i] <= teg_valid;
        end 
        else begin
           out_data_r     <= ram[addr_i]  ;
           out_valid_r    <= valid[addr_i]; 
        end 
    end

    assign data_o = out_data_r ;
    assign data_valid = out_valid_r ;


endmodule

// `include "ysyx_22040228defines.v"
// `include "ysyx_22040228defines_axi4.v"
// `include "ysyx_22040228cache_defines.v"
// `define AXI_SIZE_BYTES_1                                    3'b000
// `define AXI_SIZE_BYTES_2                                    3'b001
// `define AXI_SIZE_BYTES_4                                    3'b010
// `define AXI_SIZE_BYTES_8                                    3'b011
// `define AXI_SIZE_BYTES_16                                   3'b100
// `define AXI_SIZE_BYTES_32                                   3'b101
// `define AXI_SIZE_BYTES_64                                   3'b110
// `define AXI_SIZE_BYTES_128                                  3'b111
module ysyx_22040228uncache_mmio (
    //input     wire                                         clk              ,
    //input     wire                                         rst              ,
    output    wire          [1:0]                          mmio_sign        ,

    input     wire          [63:0]                         core_addr        ,
    input     wire          [63:0]                         core_data        ,
    input     wire          [7:0]                          core_mask        ,
    input     wire                                         fence_in         ,
    input     wire          [2:0]                          core_we_type     ,
    input     wire                                         core_we          ,
    input     wire          [2:0]                          core_re_type     ,
    input     wire                                         core_re          ,
    output    wire          [63:0]                         in_core_data     ,
    output    wire                                         in_core_finish   ,

    output    wire          [63:0]                         arb_addr         ,
    output    wire          [63:0]                         arb_data         ,
    output    wire          [7:0]                          arb_mask         ,
    output    wire                                         arb_we           ,
    output    wire                                         arb_re           ,
    output    wire          [2:0]                          arb_size_data    ,
    input     wire          [63:0]                         in_arb_data      ,
    input     wire                                         in_arb_finish    ,

    output    wire          [63:0]                         dcache_addr      ,
    output    wire          [63:0]                         dcache_data      ,
    output    wire          [7:0]                          dcache_mask      ,
    output    wire                                         dcache_fence     ,
    output    wire                                         dcache_we        ,
    output    wire                                         dcache_re        ,
    input     wire          [63:0]                         in_dcache_data   ,
    input     wire                                         in_dcache_finish 
);
    wire   start_sign;
    assign start_sign = (core_we | core_re );
    assign mmio_sign  = (start_sign &&((core_addr >= `ysyx22040228_CLINT_START) && (core_addr <= `ysyx22040228_CLINT_END))) ? 2'b01 :
                                                                                                                              2'b10 ;
    assign dcache_fence = fence_in;
    wire   uncache  ;
    assign uncache    = ((core_addr >= `ysyx22040228_UART_START) && (core_addr <= `ysyx22040228_UART_END)) |
                        ((core_addr >= `ysyx22040228_SPICTRL_START) && (core_addr <= `ysyx22040228_SPICTRL_END)) |
                        ((core_addr >= `ysyx22040228_SPI_START) && (core_addr <= `ysyx22040228_SPI_END)) |
                        ((core_addr >= `ysyx22040228_CLINT_START) && (core_addr <= `ysyx22040228_CLINT_END)) |
                        ((core_addr >= `ysyx22040228_CHIPLINK_START) && (core_addr <= `ysyx22040228_CHIPLINK_END)) ;


    assign dcache_addr = ~uncache ? core_addr : `ysyx22040228_ZEROWORD ;
    assign dcache_data = ~uncache ? core_data : `ysyx22040228_ZEROWORD ;
    assign dcache_mask = ~uncache ? core_mask : 8'b00000000            ;
    assign dcache_we   = ~uncache ? core_we   : `ysyx22040228_ENABLE   ;
    assign dcache_re   = ~uncache ? core_re   : `ysyx22040228_ENABLE   ;

 
    wire [2:0]  byte_size ;
    assign      byte_size   = (core_we && (core_we_type == 3'b000)) || (core_re && (core_re_type == 3'b000)) ? `AXI_SIZE_BYTES_1 :
                              (core_we && (core_we_type == 3'b001)) || (core_re && (core_re_type == 3'b001)) ? `AXI_SIZE_BYTES_2 : 
                              (core_we && (core_we_type == 3'b010)) || (core_re && (core_re_type == 3'b010)) ? `AXI_SIZE_BYTES_4 :
                              (core_we && (core_we_type == 3'b100)) || (core_re && (core_re_type == 3'b100)) ? `AXI_SIZE_BYTES_8 :
                                                                                                               `AXI_SIZE_BYTES_1 ;
    wire [63:0] addr_outaxi ;
    assign      addr_outaxi = (core_we && (core_we_type == 3'b000)) || (core_re && (core_re_type == 3'b000)) ? core_addr                 :
                              (core_we && (core_we_type == 3'b001)) || (core_re && (core_re_type == 3'b001)) ? {core_addr[63:1], 1'b0}   : 
                              (core_we && (core_we_type == 3'b010)) || (core_re && (core_re_type == 3'b010)) ? {core_addr[63:2], 2'b00}  :
                              (core_we && (core_we_type == 3'b100)) || (core_re && (core_re_type == 3'b100)) ? {core_addr[63:3], 3'b000} :
                                                                                                               core_addr                 ;                                                                                                          

    // reg   [63:0]    uncache_temp        ;
    // reg             uncahche_read_finish;
    // reg             uncache_out_ena  ;
    // reg   [63:0]    uncahce_out_addr ;
    // //reg   [2:0]     uncache_out_size ;

    // always @(*) begin
    //     if((uncache && core_re) && (~in_arb_finish)) begin
    //         uncache_out_ena   = `ysyx22040228_ABLE ;
    //         uncahce_out_addr  =  addr_outaxi       ;
    //     end 
    //     else if((core_re) && (uncache) && (in_arb_finish)) begin
    //         uncache_out_ena   = `ysyx22040228_ENABLE  ;
    //         uncahce_out_addr  = `ysyx22040228_ZEROWORD;
    //         uncache_temp      = in_arb_data           ;
    //         uncahche_read_finish = `ysyx22040228_ABLE ;
    //     end  
    //     else begin
    //         uncache_out_ena  =  uncache_out_ena ;
    //         uncahce_out_addr = uncahce_out_addr ;
    //         uncache_temp = uncache_temp ;
    //         uncahche_read_finish = `ysyx22040228_ENABLE; 
    //     end
    // end 

    wire   [63:0]    uncache_temp        ;
    wire             uncahche_read_finish;
    wire             uncache_out_ena  ;
    wire   [63:0]    uncahce_out_addr ;

    assign uncache_out_ena  = ((uncache && core_re) && (~in_arb_finish)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE ;
    assign uncahce_out_addr = ((uncache && core_re) && (~in_arb_finish)) ? addr_outaxi : `ysyx22040228_ZEROWORD      ;
    assign uncache_temp     = ((core_re) && (uncache) && (in_arb_finish)) ? in_arb_data : `ysyx22040228_ZEROWORD     ;
    assign uncahche_read_finish = ((core_re) && (uncache) && (in_arb_finish)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE ;

    // reg              uncache_out_ena1 ;
    // reg   [63:0]     uncache_out_addr1 ;
    // reg              uncahche_write_finish;
    // always @(*) begin
    //     if((uncache && core_we) && (~in_arb_finish)) begin
    //         uncache_out_ena1   = `ysyx22040228_ABLE ;
    //         uncache_out_addr1  =  addr_outaxi       ;
    //         arb_data           =  core_data         ;
    //     end 
    //     else if((uncache) && (in_arb_finish) && (core_we)) begin
    //         uncache_out_ena1   = `ysyx22040228_ENABLE   ;
    //         uncache_out_addr1  = `ysyx22040228_ZEROWORD ;
    //         uncahche_write_finish = `ysyx22040228_ABLE  ;
    //         arb_data           = `ysyx22040228_ZEROWORD ;
    //     end 
    //     else begin
    //         uncahche_write_finish = `ysyx22040228_ENABLE;
    //     end
    // end

    wire              uncache_out_ena1 ;
    wire   [63:0]     uncache_out_addr1 ;
    wire              uncahche_write_finish;
    assign uncache_out_ena1 = ((uncache && core_we) && (~in_arb_finish)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE ;
    assign uncache_out_addr1 = ((uncache && core_we) && (~in_arb_finish)) ? addr_outaxi : `ysyx22040228_ZEROWORD ;
    assign arb_data = ((uncache && core_we) && (~in_arb_finish)) ? core_data : `ysyx22040228_ZEROWORD ;
    assign uncahche_write_finish = ((uncache) && (in_arb_finish) && (core_we)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE ;


    assign  in_core_data    = uncache ? uncache_temp  : in_dcache_data   ;
    
    assign  in_core_finish  = (uncache && core_re) ? uncahche_read_finish :
                              (uncache && core_we) ? uncahche_write_finish:
                                                         in_dcache_finish ; 
    assign  arb_addr =  (uncache && core_re) ? uncahce_out_addr :
                        (uncache && core_we) ? uncache_out_addr1:
                                          `ysyx22040228_ZEROWORD; 
    assign  arb_mask = uncache ? core_mask : 8'b00000000           ;
    assign  arb_we   = uncache ? uncache_out_ena1   : `ysyx22040228_ENABLE  ;
    assign  arb_re   = uncache ? uncache_out_ena    : `ysyx22040228_ENABLE  ;

    assign arb_size_data = (uncache && core_re) ? byte_size        :
                           (uncache && core_we) ? byte_size        :
                                                  3'b000           ; 

endmodule
/************************************************************
Author:LiGuoqi
Name:SocTOp.v
Function:top module of this soc
************************************************************/
/* verilator lint_off UNUSED */
/* verilator lint_off MODDUP */
/* verilator lint_off LATCH */
// `include "ysyx_22040228arbitratem.v"
// `include "ysyx_22040228inst_cache.v"
// `include "ysyx_22040228data_cache.v"
// `include "ysyx_22040228soc_axi4.v"
// `include "ysyx_22040228clint.v"
// `include "ysyx_22040228rvcpu.v"
// `include "ysyx_22040228defines_axi4.v"
// `include "ysyx_22040228defines.v"
// `include "ysyx_22040228uncache_mmio.v"
module ysyx_22040228 (
    input       wire                                         clock                ,
    input       wire                                         reset                ,

    input       wire                                         io_interrupt         ,
   //-----------------------------AXI--------------------------------------------//
   //----------------------write address cahnnel---------------------------------//
    output      wire       [`ysyx22040228_ID_BUS]            io_master_awid       ,
    output      wire       [31:0]                            io_master_awaddr     ,
    output      wire       [`ysyx22040228_LEN_BUS]           io_master_awlen      ,
    output      wire       [`ysyx22040228_SIZE_BUS]          io_master_awsize     ,
    output      wire       [`ysyx22040228_BURST_BUS]         io_master_awburst    ,
    // output      wire       [`ysyx22040228_CACHE_BUS]         out_axi_aw_cache     ,
    // output      wire       [`ysyx22040228_PROT_BUS]          out_axi_aw_port      ,
    // output      wire       [`ysyx22040228_QOS_BUS]           out_axi_aw_qos       ,
    output      wire                                         io_master_awvalid    ,
    input       wire                                         io_master_awready    ,

    //----------------------write data channel-----------------------------------//
    output      wire       [`ysyx22040228_DATA_BUS]          io_master_wdata       ,
    output      wire       [`ysyx22040228_STRB_BUS]          io_master_wstrb       ,
    output      wire                                         io_master_wlast       ,
    output      wire                                         io_master_wvalid      ,
    input       wire                                         io_master_wready      ,

    //-----------------------write response channel------------------------------//
    input       wire       [`ysyx22040228_ID_BUS]            io_master_bid         ,
    input       wire       [`ysyx22040228_RESP_BUS]          io_master_bresp       ,
    input       wire                                         io_master_bvalid      ,
    output      wire                                         io_master_bready      ,

    //------------------------read address channel-------------------------------//
    output      wire       [`ysyx22040228_ID_BUS]            io_master_arid        ,
    output      wire       [31:0]                            io_master_araddr      ,
    output      wire       [`ysyx22040228_LEN_BUS]           io_master_arlen       ,
    output      wire       [`ysyx22040228_SIZE_BUS]          io_master_arsize      ,
    output      wire       [`ysyx22040228_BURST_BUS]         io_master_arburst     ,
    // output      wire       [`ysyx22040228_CACHE_BUS]         out_axi_ar_cache     ,
    // output      wire       [`ysyx22040228_PROT_BUS]          out_axi_ar_prot      ,
    // output      wire       [`ysyx22040228_QOS_BUS]           out_axi_ar_qos       ,
    output      wire                                         io_master_arvalid     ,
    input       wire                                         io_master_arready     ,

    //------------------------read data channel----------------------------------//
    input       wire       [`ysyx22040228_ID_BUS]            io_master_rid         ,
    input       wire       [`ysyx22040228_DATA_BUS]          io_master_rdata       ,
    input       wire       [`ysyx22040228_RESP_BUS]          io_master_rresp       ,
    input       wire                                         io_master_rlast       ,
    input       wire                                         io_master_rvalid      ,
    output      wire                                         io_master_rready      ,

    output      wire                                         io_slave_awready      ,
    input       wire                                         io_slave_awvalid      ,
    input       wire       [`ysyx22040228_ID_BUS]            io_slave_awid         ,
    input       wire       [31:0]                            io_slave_awaddr       ,
    input       wire       [`ysyx22040228_LEN_BUS]           io_slave_awlen        ,
    input       wire       [`ysyx22040228_SIZE_BUS]          io_slave_awsize       ,
    input       wire       [`ysyx22040228_BURST_BUS]         io_slave_awburst      ,
    output      wire                                         io_slave_wready       ,
    input       wire                                         io_slave_wvalid       ,
    input       wire       [`ysyx22040228_DATA_BUS]          io_slave_wdata        ,
    input       wire       [`ysyx22040228_STRB_BUS]          io_slave_wstrb        ,
    input       wire                                         io_slave_wlast        ,
    input       wire                                         io_slave_bready       ,
    output      wire                                         io_slave_bvalid       , 
    output      wire       [`ysyx22040228_ID_BUS]            io_slave_bid          ,
    output      wire       [`ysyx22040228_RESP_BUS]          io_slave_bresp        ,
    output      wire                                         io_slave_arready      ,
    input       wire                                         io_slave_arvalid      ,
    input       wire       [`ysyx22040228_ID_BUS]            io_slave_arid         ,
    input       wire       [31:0]                            io_slave_araddr       ,
    input       wire       [`ysyx22040228_LEN_BUS]           io_slave_arlen        ,
    input       wire       [`ysyx22040228_SIZE_BUS]          io_slave_arsize       ,
    input       wire       [`ysyx22040228_BURST_BUS]         io_slave_arburst      ,
    input       wire                                         io_slave_rready       ,
    output      wire                                         io_slave_rvalid       ,
    output      wire       [`ysyx22040228_ID_BUS]            io_slave_rid          ,
    output      wire       [`ysyx22040228_DATA_BUS]          io_slave_rdata        ,
    output      wire       [`ysyx22040228_RESP_BUS]          io_slave_rresp        ,
    output      wire                                         io_slave_rlast        ,

    output      wire       [5:0]                             io_sram0_addr         ,
    output      wire                                         io_sram0_cen          ,
    output      wire                                         io_sram0_wen          ,
    output      wire       [127:0]                           io_sram0_wmask        ,
    output      wire       [127:0]                           io_sram0_wdata        ,
    input       wire       [127:0]                           io_sram0_rdata        ,
    output      wire       [5:0]                             io_sram1_addr         ,
    output      wire                                         io_sram1_cen          ,
    output      wire                                         io_sram1_wen          ,
    output      wire       [127:0]                           io_sram1_wmask        , 
    output      wire       [127:0]                           io_sram1_wdata        ,
    input       wire       [127:0]                           io_sram1_rdata        ,
    output      wire       [5:0]                             io_sram2_addr         ,
    output                                                   io_sram2_cen          ,
    output                                                   io_sram2_wen          ,
    output      wire       [127:0]                           io_sram2_wmask        ,
    output      wire       [127:0]                           io_sram2_wdata        ,
    input       wire       [127:0]                           io_sram2_rdata        ,
    output      wire       [5:0]                             io_sram3_addr         ,
    output      wire                                         io_sram3_cen          ,
    output      wire                                         io_sram3_wen          ,
    output      wire       [127:0]                           io_sram3_wmask        ,
    output      wire       [127:0]                           io_sram3_wdata        ,
    input       wire       [127:0]                           io_sram3_rdata        ,
    output      wire       [5:0]                             io_sram4_addr         ,
    output      wire                                         io_sram4_cen          ,
    output      wire                                         io_sram4_wen          ,
    output      wire       [127:0]                           io_sram4_wmask        ,
    output      wire       [127:0]                           io_sram4_wdata        ,
    input       wire       [127:0]                           io_sram4_rdata        ,
    output      wire       [5:0]                             io_sram5_addr         ,
    output      wire                                         io_sram5_cen          ,
    output      wire                                         io_sram5_wen          ,
    output      wire       [127:0]                           io_sram5_wmask        ,
    output      wire       [127:0]                           io_sram5_wdata        ,
    input       wire       [127:0]                           io_sram5_rdata        ,
    output      wire       [5:0]                             io_sram6_addr         ,
    output      wire                                         io_sram6_cen          ,
    output      wire                                         io_sram6_wen          ,
    output      wire       [127:0]                           io_sram6_wmask        ,
    output      wire       [127:0]                           io_sram6_wdata        ,
    input       wire       [127:0]                           io_sram6_rdata        ,
    output      wire       [5:0]                             io_sram7_addr         ,
    output      wire                                         io_sram7_cen          ,
    output      wire                                         io_sram7_wen          ,
    output      wire       [127:0]                           io_sram7_wmask        ,
    output      wire       [127:0]                           io_sram7_wdata        ,
    input       wire       [127:0]                           io_sram7_rdata        
);

    reg  rst ;
    reg [4:0] countr ;
    always @(posedge clock) begin
        if(reset == `ysyx22040228_RSTENA) begin
            countr <= 5'b00000 ;
            rst <= 1'b1       ;
        end 
        else if(countr < 5'd31) begin
            countr <= countr + 5'd1 ;
            rst <= 1'b1       ;
        end 
        else begin
            countr <= countr  ;
            rst <= 1'b0       ;
        end 
    end

    assign io_slave_awready = 1'b0 ;
    assign io_slave_wready  = 1'b0 ;
    assign io_slave_bvalid  = 1'b0 ;
    assign io_slave_bid     = 4'b0000;
    assign io_slave_bresp   = 2'b00 ;
    assign io_slave_arready = 1'b0 ;
    assign io_slave_rvalid  = 1'b0 ;
    assign io_slave_rid     = 4'b0000;
    assign io_slave_rdata   = 64'h0 ;
    assign io_slave_rresp   = 2'b00 ;
    assign io_slave_rlast   = 1'b0  ;

    assign io_sram2_addr    = 6'b000000  ;
    assign io_sram2_cen     = 1'b1       ;
    assign io_sram2_wen     = 1'b1       ;
    assign io_sram2_wmask   = 128'h0     ;
    assign io_sram2_wdata   = 128'h0     ;

    assign io_sram3_addr    = 6'b000000  ;
    assign io_sram3_cen     = 1'b1       ;
    assign io_sram3_wen     = 1'b1       ;
    assign io_sram3_wmask   = 128'h0     ;
    assign io_sram3_wdata   = 128'h0     ;

    assign io_sram4_addr    = 6'b000000  ;
    assign io_sram4_cen     = 1'b1       ;
    assign io_sram4_wen     = 1'b1       ;
    assign io_sram4_wmask   = 128'h0     ;
    assign io_sram4_wdata   = 128'h0     ;

    assign io_sram5_addr    = 6'b000000  ;
    assign io_sram5_cen     = 1'b1       ;
    assign io_sram5_wen     = 1'b1       ;
    assign io_sram5_wmask   = 128'h0     ;
    assign io_sram5_wdata   = 128'h0     ;

    assign io_sram6_addr    = 6'b000000  ;
    assign io_sram6_cen     = 1'b1       ;
    assign io_sram6_wen     = 1'b1       ;
    assign io_sram6_wmask   = 128'h0     ;
    assign io_sram6_wdata   = 128'h0     ;

    assign io_sram7_addr    = 6'b000000  ;
    assign io_sram7_cen     = 1'b1       ;
    assign io_sram7_wen     = 1'b1       ;
    assign io_sram7_wmask   = 128'h0     ;
    assign io_sram7_wdata   = 128'h0     ;

    //-----------------------------wire about rvcpu------------------------------//
    wire aclk;
    assign aclk = clock ;

    wire  [63:0]    rvcpu_inst_addr  ;
    wire  [63:0]    rvcpu_data_addr  ;
    wire  [7:0 ]    rvcpu_wmask      ;
    wire  [63:0]    rvcpu_data_o     ;
    wire            rvcpu_we         ;
    wire            rvcpu_re         ;
    wire            cache_fnece      ;
    wire            core_stall_l     ;
    wire  [2:0]     rvcpu_we_type    ;
    wire  [2:0]     rvcpu_re_type    ;

    wire  [63:0]    uncache_arb_data ;
    wire  [63:0]    uncache_arb_addr ;
    wire  [7:0]     uncache_arb_mask ;
    wire  [63:0]    uncache_arb_data_o;
    wire            uncache_arb_we   ;
    wire            uncache_arb_re   ;
    wire  [2:0]     uncahce_arb_size ;
    wire            uncache_arb_finish;
    wire  [63:0]    uncache_dc_data ;
    wire  [63:0]    uncache_dc_addr ;
    wire  [7:0]     uncache_dc_mask ;
    wire            uncache_dc_fence;
    wire  [63:0]    uncache_dc_data_o;
    wire            uncache_dc_we   ;
    wire            uncache_dc_re   ;
    wire            uncache_dc_finish;    

    wire  [31:0]    i_cache_inst_data;
    wire            i_cache_inst_valid;
    wire            i_cache_read_ena ;
    wire  [63:0]    i_cache_addr     ;  
    wire            i_cache_ready    ;
    wire            i_caceh_resp     ;

    wire  [63:0]    d_cache_data_out ; 
    wire            d_cache_mem_finish;   
    wire  [63:0]    d_cache_out_addr ;
    wire  [63:0]    d_cache_out_data ;
    wire            d_cache_out_resp ;
    wire  [3:0]     d_cache_out_type ;  

    wire  [63:0]    arbitrate_d_data ;
    /* verilator lint_off UNOPTFLAT */
    wire            arbitrate_d_ok   ;
    /* verilator lint_on UNOPTFLAT */
    wire  [63:0]    arbitrate_i_data ;
    wire            arbitrate_i_ok   ;

    wire   time_init_sign            ;
    wire   interrupt_                ;
    assign interrupt_ = time_init_sign | io_interrupt;

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
    

    wire          [4*SLAVE_NUM-1      : 0]              add_axi_aw_id      ;
    wire          [64*SLAVE_NUM-1     : 0]              add_axi_aw_addr    ;
    wire          [8*SLAVE_NUM-1      : 0]              add_axi_aw_len     ;
    wire          [3*SLAVE_NUM-1      : 0]              add_axi_aw_size    ;
    wire          [2*SLAVE_NUM-1      : 0]              add_axi_aw_burst   ;
    wire          [4*SLAVE_NUM-1      : 0]              add_axi_aw_cache   ;
    wire          [3*SLAVE_NUM-1      : 0]              add_axi_aw_prot    ;
    wire          [4*SLAVE_NUM-1      : 0]              add_axi_aw_qos     ;
    wire          [1*SLAVE_NUM-1      : 0]              add_axi_aw_valid   ;
    wire          [1*SLAVE_NUM-1      : 0]              add_axi_aw_ready   ;

    //wire          [4*SLAVE_NUM-1      : 0]              add_axi_w_id       ;
    wire          [64*SLAVE_NUM-1     : 0]              add_axi_w_data     ;
    wire          [8*SLAVE_NUM-1      : 0]              add_axi_w_strb     ;
    wire          [1*SLAVE_NUM-1      : 0]              add_axi_w_last     ;
    wire          [1*SLAVE_NUM-1      : 0]              add_axi_w_valid    ;
    wire          [1*SLAVE_NUM-1      : 0]              add_axi_w_ready    ;

    wire          [4*SLAVE_NUM-1      : 0]              add_axi_b_id       ;
    wire          [2*SLAVE_NUM-1      : 0]              add_axi_b_resp     ;
    wire          [1*SLAVE_NUM-1      : 0]              add_axi_b_valid    ;
    wire          [1*SLAVE_NUM-1      : 0]              add_axi_b_ready    ;

    wire          [4*SLAVE_NUM-1      : 0]              add_axi_ar_id      ;
    wire          [64*SLAVE_NUM-1     : 0]              add_axi_ar_addr    ;
    wire          [8*SLAVE_NUM-1      : 0]              add_axi_ar_len     ;
    wire          [3*SLAVE_NUM-1      : 0]              add_axi_ar_size    ;
    wire          [2*SLAVE_NUM-1      : 0]              add_axi_ar_burst   ;
    wire          [4*SLAVE_NUM-1      : 0]              add_axi_ar_cache   ;
    wire          [3*SLAVE_NUM-1      : 0]              add_axi_ar_prot    ;
    wire          [4*SLAVE_NUM-1      : 0]              add_axi_ar_qos     ;
    wire          [1*SLAVE_NUM-1      : 0]              add_axi_ar_valid   ;
    wire          [1*SLAVE_NUM-1      : 0]              add_axi_ar_ready   ;

    wire          [4*SLAVE_NUM-1      : 0]              add_axi_r_id       ;
    wire          [64*SLAVE_NUM-1     : 0]              add_axi_r_data     ;
    wire          [2*SLAVE_NUM-1      : 0]              add_axi_r_resp     ;
    wire          [1*SLAVE_NUM-1      : 0]              add_axi_r_last     ;
    wire          [1*SLAVE_NUM-1      : 0]              add_axi_r_valid    ;
    wire          [1*SLAVE_NUM-1      : 0]              add_axi_r_ready    ;


    wire   [`ysyx22040228_ID_BUS]    soc_axi_aw_id    ;
    wire   [`ysyx22040228_ADDR_BUS]  soc_axi_aw_addr  ;
    wire   [`ysyx22040228_LEN_BUS]   soc_axi_aw_len   ;
    wire   [`ysyx22040228_SIZE_BUS]  soc_axi_aw_size  ;
    wire   [`ysyx22040228_BURST_BUS] soc_axi_aw_burst ;
    wire   [`ysyx22040228_CACHE_BUS] soc_axi_aw_cache ;
    wire   [`ysyx22040228_PROT_BUS]  soc_axi_aw_port  ;
    wire   [`ysyx22040228_QOS_BUS]   soc_axi_aw_qos   ;
    wire                             soc_axi_aw_ready ;
    wire                             soc_axi_aw_valid ;

    wire   [`ysyx22040228_DATA_BUS]  soc_axi_w_data   ;
    wire   [`ysyx22040228_STRB_BUS]  soc_axi_w_strb   ;
    wire                             soc_axi_w_last   ;
    wire                             soc_axi_w_valid  ;
    wire                             soc_axi_w_ready  ;

    wire   [`ysyx22040228_ID_BUS]    soc_axi_b_id     ;
    wire   [`ysyx22040228_RESP_BUS]  soc_axi_b_resp   ;
    wire                             soc_axi_b_valid  ;
    wire                             soc_axi_b_ready  ;

    wire   [`ysyx22040228_ID_BUS]    soc_axi_ar_id    ;
    wire   [`ysyx22040228_ADDR_BUS]  soc_axi_ar_addr  ;
    wire   [`ysyx22040228_LEN_BUS]   soc_axi_ar_len   ;
    wire   [`ysyx22040228_SIZE_BUS]  soc_axi_ar_size  ;
    wire   [`ysyx22040228_BURST_BUS] soc_axi_ar_burst ;
    wire   [`ysyx22040228_CACHE_BUS] soc_axi_ar_cache ;
    wire   [`ysyx22040228_PROT_BUS]  soc_axi_ar_prot  ;
    wire   [`ysyx22040228_QOS_BUS]   soc_axi_ar_qos   ;
    wire                             soc_axi_ar_valid ;
    wire                             soc_axi_ar_ready ;

    wire   [`ysyx22040228_ID_BUS]    soc_axi_r_id     ;
    wire   [`ysyx22040228_DATA_BUS]  soc_axi_r_data   ;
    wire   [`ysyx22040228_RESP_BUS]  soc_axi_r_resp   ;
    wire                             soc_axi_r_last   ;
    wire                             soc_axi_r_valid  ;
    wire                             soc_axi_r_ready  ;

    wire   [`ysyx22040228_ID_BUS]    tim_axi_aw_id    ;
    wire   [`ysyx22040228_ADDR_BUS]  tim_axi_aw_addr  ;
    wire   [`ysyx22040228_LEN_BUS]   tim_axi_aw_len   ;
    wire   [`ysyx22040228_SIZE_BUS]  tim_axi_aw_size  ;
    wire   [`ysyx22040228_BURST_BUS] tim_axi_aw_burst ;
    wire   [`ysyx22040228_CACHE_BUS] tim_axi_aw_cache ;
    /* verilator lint_off UNUSED */
    wire   [`ysyx22040228_PROT_BUS]  tim_axi_aw_port  ;
    wire   [`ysyx22040228_QOS_BUS]   tim_axi_aw_qos   ;
    wire                             tim_axi_aw_ready ;
    wire                             tim_axi_aw_valid ;

    wire   [`ysyx22040228_DATA_BUS]  tim_axi_w_data   ;
    wire   [`ysyx22040228_STRB_BUS]  tim_axi_w_strb   ;
    wire                             tim_axi_w_last   ;
    wire                             tim_axi_w_valid  ;
    wire                             tim_axi_w_ready  ;

    wire   [`ysyx22040228_ID_BUS]    tim_axi_b_id     ;
    wire   [`ysyx22040228_RESP_BUS]  tim_axi_b_resp   ;
    wire                             tim_axi_b_valid  ;
    wire                             tim_axi_b_ready  ;

    wire   [`ysyx22040228_ID_BUS]    tim_axi_ar_id    ;
    wire   [`ysyx22040228_ADDR_BUS]  tim_axi_ar_addr  ;
    wire   [`ysyx22040228_LEN_BUS]   tim_axi_ar_len   ;
    wire   [`ysyx22040228_SIZE_BUS]  tim_axi_ar_size  ;
    wire   [`ysyx22040228_BURST_BUS] tim_axi_ar_burst ;
    wire   [`ysyx22040228_CACHE_BUS] tim_axi_ar_cache ;
    wire   [`ysyx22040228_PROT_BUS]  tim_axi_ar_prot  ;
    wire   [`ysyx22040228_QOS_BUS]   tim_axi_ar_qos   ;
    wire                             tim_axi_ar_valid ;
    wire                             tim_axi_ar_ready ;

    wire   [`ysyx22040228_ID_BUS]    tim_axi_r_id     ;
    wire   [`ysyx22040228_DATA_BUS]  tim_axi_r_data   ;
    wire   [`ysyx22040228_RESP_BUS]  tim_axi_r_resp   ;
    wire                             tim_axi_r_last   ;
    wire                             tim_axi_r_valid  ;
    wire                             tim_axi_r_ready  ;
   /* verilator lint_off UNUSED */
   /* verilator lint_off UNDRIVEN */
    // wire   [`ysyx22040228_ID_BUS]    io_axi_aw_id    ;
    // wire   [`ysyx22040228_ADDR_BUS]  io_axi_aw_addr  ;
    // wire   [`ysyx22040228_LEN_BUS]   io_axi_aw_len   ;
    // wire   [`ysyx22040228_SIZE_BUS]  io_axi_aw_size  ;
    // wire   [`ysyx22040228_BURST_BUS] io_axi_aw_burst ;
    // wire   [`ysyx22040228_CACHE_BUS] io_axi_aw_cache ;
    // wire   [`ysyx22040228_PROT_BUS]  io_axi_aw_port  ;
    // wire   [`ysyx22040228_QOS_BUS]   io_axi_aw_qos   ;
    // wire                             io_axi_aw_ready ;
    // wire                             io_axi_aw_valid ;

    // wire   [`ysyx22040228_DATA_BUS]  io_axi_w_data   ;
    // wire   [`ysyx22040228_STRB_BUS]  io_axi_w_strb   ;
    // wire                             io_axi_w_last   ;
    // wire                             io_axi_w_valid  ;
    // wire                             io_axi_w_ready  ;

    // wire   [`ysyx22040228_ID_BUS]    io_axi_b_id     ;
    // wire   [`ysyx22040228_RESP_BUS]  io_axi_b_resp   ;
    // wire                             io_axi_b_valid  ;
    // wire                             io_axi_b_ready  ;

    // wire   [`ysyx22040228_ID_BUS]    io_axi_ar_id    ;
    // wire   [`ysyx22040228_ADDR_BUS]  io_axi_ar_addr  ;
    // wire   [`ysyx22040228_LEN_BUS]   io_axi_ar_len   ;
    // wire   [`ysyx22040228_SIZE_BUS]  io_axi_ar_size  ;
    // wire   [`ysyx22040228_BURST_BUS] io_axi_ar_burst ;
    // wire   [`ysyx22040228_CACHE_BUS] io_axi_ar_cache ;
    // wire   [`ysyx22040228_PROT_BUS]  io_axi_ar_prot  ;
    // wire   [`ysyx22040228_QOS_BUS]   io_axi_ar_qos   ;
    // wire                             io_axi_ar_valid ;
    // wire                             io_axi_ar_ready ;

    // wire   [`ysyx22040228_ID_BUS]    io_axi_r_id     ;
    // wire   [`ysyx22040228_DATA_BUS]  io_axi_r_data   ;
    // wire   [`ysyx22040228_RESP_BUS]  io_axi_r_resp   ;
    // wire                             io_axi_r_last   ;
    // wire                             io_axi_r_valid  ;
    // wire                             io_axi_r_ready  ;

    assign  {soc_axi_aw_id     , tim_axi_aw_id    /* , io_axi_aw_id     */}   =  add_axi_aw_id   ;
    assign  {soc_axi_aw_addr   , tim_axi_aw_addr  /* , io_axi_aw_addr   */}   =  add_axi_aw_addr ;
    assign  {soc_axi_aw_len    , tim_axi_aw_len   /* , io_axi_aw_len    */}   =  add_axi_aw_len  ;
    assign  {soc_axi_aw_size   , tim_axi_aw_size  /* , io_axi_aw_size   */}   =  add_axi_aw_size ;
    assign  {soc_axi_aw_burst  , tim_axi_aw_burst /* , io_axi_aw_burst */ }   =  add_axi_aw_burst;
    assign  {soc_axi_aw_cache  , tim_axi_aw_cache /* , io_axi_aw_cache  */}   =  add_axi_aw_cache;
    assign  {soc_axi_aw_port   , tim_axi_aw_port  /* , io_axi_aw_port   */}   =  add_axi_aw_prot ;
    assign  {soc_axi_aw_qos    , tim_axi_aw_qos   /* , io_axi_aw_qos    */}   =  add_axi_aw_qos  ;
    assign  {soc_axi_aw_valid  , tim_axi_aw_valid /* , io_axi_aw_valid  */}   =  add_axi_aw_valid;
    assign  add_axi_aw_ready  =  {soc_axi_aw_ready  , tim_axi_aw_ready  /* ,io_axi_aw_ready  */} ;

    //assign      add_axi_w_id      =  {soc_axi_w_id      , tim_axi_w_id      , io_axi_w_id      } ;
    assign  {soc_axi_w_data    , tim_axi_w_data   /* , io_axi_w_data    */}   =  add_axi_w_data  ;
    assign  {soc_axi_w_strb    , tim_axi_w_strb   /* , io_axi_w_strb    */}   =  add_axi_w_strb  ;
    assign  {soc_axi_w_last    , tim_axi_w_last   /* , io_axi_w_last    */}   =  add_axi_w_last  ;
    assign  {soc_axi_w_valid   , tim_axi_w_valid  /* , io_axi_w_valid   */}   =  add_axi_w_valid ;
    assign  add_axi_w_ready   =  {soc_axi_w_ready   , tim_axi_w_ready    /* ,io_axi_w_ready   */} ;

    assign  add_axi_b_id      =  {soc_axi_b_id        , tim_axi_b_id     /* , io_axi_b_id      */} ;
    assign  add_axi_b_resp    =  {soc_axi_b_resp      , tim_axi_b_resp   /* , io_axi_b_resp    */} ;
    assign  add_axi_b_valid   =  {soc_axi_b_valid     , tim_axi_b_valid  /* , io_axi_b_valid   */} ;
    assign  {soc_axi_b_ready   , tim_axi_b_ready  /* , io_axi_b_ready   */}   =  add_axi_b_ready ;

    assign  {soc_axi_ar_id     , tim_axi_ar_id    /* , io_axi_ar_id     */}   =  add_axi_ar_id   ;
    assign  {soc_axi_ar_addr   , tim_axi_ar_addr  /* , io_axi_ar_addr   */}   =  add_axi_ar_addr ;
    assign  {soc_axi_ar_len    , tim_axi_ar_len   /* , io_axi_ar_len    */}   =  add_axi_ar_len  ;
    assign  {soc_axi_ar_size   , tim_axi_ar_size  /* , io_axi_ar_size   */}   =  add_axi_ar_size ;
    assign  {soc_axi_ar_burst  , tim_axi_ar_burst /* , io_axi_ar_burst  */}   =  add_axi_ar_burst;
    assign  {soc_axi_ar_cache  , tim_axi_ar_cache /* , io_axi_ar_cache  */}   =  add_axi_ar_cache;
    assign  {soc_axi_ar_prot   , tim_axi_ar_prot  /* , io_axi_ar_prot   */}   =  add_axi_ar_prot ;
    assign  {soc_axi_ar_qos    , tim_axi_ar_qos   /* , io_axi_ar_qos    */}   =  add_axi_ar_qos  ;
    assign  {soc_axi_ar_valid  , tim_axi_ar_valid /* , io_axi_ar_valid  */}   =  add_axi_ar_valid;
    assign  add_axi_ar_ready   = {soc_axi_ar_ready  , tim_axi_ar_ready  /*, io_axi_ar_ready  */} ;

    assign  add_axi_r_id       = {soc_axi_r_id      , tim_axi_r_id     /* , io_axi_r_id      */} ;
    assign  add_axi_r_data     = {soc_axi_r_data    , tim_axi_r_data   /* , io_axi_r_data    */} ;
    assign  add_axi_r_resp     = {soc_axi_r_resp    , tim_axi_r_resp   /* , io_axi_r_resp    */} ;
    assign  add_axi_r_last     = {soc_axi_r_last    , tim_axi_r_last   /* , io_axi_r_last    */} ;
    assign  add_axi_r_valid    = {soc_axi_r_valid   , tim_axi_r_valid  /* , io_axi_r_valid   */} ;
    assign  {soc_axi_r_ready   , tim_axi_r_ready   /* , io_axi_r_ready   */}   =  add_axi_r_ready ;


    ysyx_22040228rvcpu rvcpu1 (
        .clk                 (aclk                ) ,
        .rst                 (rst                 ) ,
        
        .inst_addr           (rvcpu_inst_addr     ) ,
    
        .inst_ready          (i_cache_ready       ) ,
        .inst                (i_cache_inst_data   ) ,
        .bui_inst_valid      (i_cache_inst_valid  ) ,
        .core_stall_sign     (core_stall_l        ),

        .data_addr           (rvcpu_data_addr     ) ,
        .wmask               (rvcpu_wmask         ) ,
        .data_o              (rvcpu_data_o        ) ,
        .data_i              (d_cache_data_out    ) ,
        .we_type_data        (rvcpu_we_type       ) ,
        .we                  (rvcpu_we            ) ,
        .re_type_data        (rvcpu_re_type       ) ,
        .re                  (rvcpu_re            ) ,
        .fence               (cache_fnece         ) ,
        .mem_finish          (d_cache_mem_finish  ) ,

        .timer_intr          (interrupt_          )

    );

    wire [1:0] mmio_thing ;
    ysyx_22040228uncache_mmio uncache_mmio7(
        //.clk                 (aclk                ) ,
        //.rst                 (rst                 ) ,
        .mmio_sign           (mmio_thing          ) ,

        .core_addr           (rvcpu_data_addr     ) ,
        .core_data           (rvcpu_data_o        ) ,
        .core_mask           (rvcpu_wmask         ) ,
        .fence_in            (cache_fnece         ) ,
        .core_we_type        (rvcpu_we_type       ) ,
        .core_we             (rvcpu_we            ) ,
        .core_re_type        (rvcpu_re_type       ) ,
        .core_re             (rvcpu_re            ) ,
        .in_core_data        (d_cache_data_out    ) ,
        .in_core_finish      (d_cache_mem_finish  ) ,

        .arb_addr            (uncache_arb_addr    ) ,
        .arb_data            (uncache_arb_data    ) ,
        .arb_mask            (uncache_arb_mask    ) ,
        .arb_we              (uncache_arb_we      ) ,
        .arb_re              (uncache_arb_re      ) ,
        .arb_size_data       (uncahce_arb_size    ) ,
        .in_arb_data         (uncache_arb_data_o  ) ,
        .in_arb_finish       (uncache_arb_finish  ) ,

        .dcache_addr         (uncache_dc_addr     ) ,
        .dcache_data         (uncache_dc_data     ) ,
        .dcache_mask         (uncache_dc_mask     ) ,
        .dcache_fence        (uncache_dc_fence    ) ,
        .dcache_we           (uncache_dc_we       ) ,
        .dcache_re           (uncache_dc_re       ) ,
        .in_dcache_data      (uncache_dc_data_o   ) ,
        .in_dcache_finish    (uncache_dc_finish   )
    );
    wire   [5:0]   inst_cache_addr ;
    assign io_sram0_addr = inst_cache_addr ;
    wire           inst_cache_ce   ;
    assign io_sram0_cen  = inst_cache_ce   ;
    wire           inst_cache_we   ;
    assign io_sram0_wen = ~inst_cache_we    ;        
    wire   [127:0] inst_cache_strb ;
    assign io_sram0_wmask = ~inst_cache_strb ;
    wire   [127:0] inst_cache_wdata ;
    assign io_sram0_wdata = inst_cache_wdata ;

    ysyx_22040228inst_cache inst_cache2 (
        .clk                 (aclk                ) ,
        .rst                 (rst                 ) ,
        .inst_addr           (rvcpu_inst_addr     ) ,
        .inst_ready          (i_cache_ready       ) ,
        .core_stall          (core_stall_l        ) ,
        .inst_fence          (uncache_dc_fence    ) ,
        .inst_data           (i_cache_inst_data   ) ,
        .inst_valid          (i_cache_inst_valid  ) ,

        .cache_read_ena      (i_cache_read_ena    ) ,
        .cache_addr          (i_cache_addr        ) ,
        .cache_in_data       (arbitrate_i_data    ) ,
        .cache_in_valid      (arbitrate_i_ok      ) ,

        .CE                  (inst_cache_ce       ) ,
        .w_data_ena          (inst_cache_we       ) ,
        .w_strb_ram          (inst_cache_strb    ) ,
        .icache_index        (inst_cache_addr     ) ,
        .w_data_ram          (inst_cache_wdata    ) ,
        .data_out            (io_sram0_rdata      )                
);
    wire   [5:0]   data_cache_addr ;
    assign io_sram1_addr = data_cache_addr ;
    wire           data_cache_ce   ;
    assign io_sram1_cen  = data_cache_ce   ;
    wire           data_cache_we   ;
    assign io_sram1_wen = ~data_cache_we    ;        
    wire   [127:0] data_cache_strb ;
    assign io_sram1_wmask = ~data_cache_strb ;
    wire   [127:0] data_cache_wdata ;
    assign io_sram1_wdata = data_cache_wdata ;
    ysyx_22040228data_cache data_cache3 (
        .clk                 (aclk               ) ,
        .rst                 (rst                ) ,

        .mem_addr_i          (uncache_dc_addr    ) ,
        .mem_data_i          (uncache_dc_data    ) ,
        .mem_strb_i          (uncache_dc_mask    ) ,
        .mem_fence_i         (uncache_dc_fence   ) ,
        .mem_read_valid      (uncache_dc_re      ) ,
        .mem_write_valid     (uncache_dc_we      ) ,
        .mem_data_out        (uncache_dc_data_o  ) ,
        .mem_data_ready      (uncache_dc_finish  ) ,

        .in_dcache_data      (arbitrate_d_data   ) ,
        .in_dcache_ready     (arbitrate_d_ok     ) ,
        .out_dcache_addr     (d_cache_out_addr   ) ,
        .out_dcache_data     (d_cache_out_data   ) ,
        .out_dcache_type     (d_cache_out_type   ) ,

        .CE                  (data_cache_ce      ) ,
        .w_data_ena          (data_cache_we      ) ,
        .w_strb_ram          (data_cache_strb    ) ,
        .w_data_addr         (data_cache_addr    ) ,
        .w_data_ram          (data_cache_wdata   ) ,
        .data_out            (io_sram1_rdata     )

    );

    ysyx_22040228arbitratem arbitratem4(
        .clk                 (aclk               ) ,
        .rst                 (rst                ) ,

        .d_cache_addr        (d_cache_out_addr   ) ,
        .d_cache_data        (d_cache_out_data   ) ,
        .d_cache_type        (d_cache_out_type   ) ,
        .d_cache_data_o      (arbitrate_d_data   ) ,
        .d_cache_valid_      (arbitrate_d_ok     ) ,

        .uncache_addr        (uncache_arb_addr   ) ,
        .uncache_data        (uncache_arb_data   ) ,
        .uncache_read_ena    (uncache_arb_re     ) ,
        .uncache_write_ena   (uncache_arb_we     ) ,
        .uncache_size_data   (uncahce_arb_size   ) ,
        .uncache_mask        (uncache_arb_mask   ) ,
        .uncahce_data_o      (uncache_arb_data_o ) ,
        .uncahce_valid_      (uncache_arb_finish ) ,

        .i_cache_addr        (i_cache_addr       ) ,
        .i_cache_ena         (i_cache_read_ena   ) ,
        .i_cache_data        (arbitrate_i_data   ) ,
        .i_cache_valid_      (arbitrate_i_ok     ) ,

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
        .axi_r_valid         (t_axi_r_valid      ) ,
        .axi_r_ready         (t_axi_r_ready      )  
    );    

    // wire         read_ena_sign  ;
    // wire [63:0]  addr_oup_sign   ;
    // wire [63:0]  read_data_sign ;
    // wire         write_ena_sign  ;
    // wire [63:0]  write_addr_sign ;
    // wire [63:0]  write_data_sign ;
    // assign  read_ena_sign_    = read_ena_sign ;
    // assign  out_addr_outp     = addr_oup_sign ;
    // assign  read_data_sign   = read_data_sign_;
    // assign  out_write_ram_ena = write_ena_sign;
    // assign  out_write_ram_addr= write_addr_sign;
    // assign  out_write_ram_data= write_data_sign;
    // axi_mnq axi_mnq4(
    //     .clk                 (aclk                ) ,
    //     .rst                 (rst                ) ,

    //     .s_axi_aw_id         (soc_axi_aw_id      ) ,
    //     .s_axi_aw_addr       (soc_axi_aw_addr    ) ,
    //     .s_axi_aw_len        (soc_axi_aw_len     ) ,
    //     .s_axi_aw_size       (soc_axi_aw_size    ) ,
    //     .s_axi_aw_burst      (soc_axi_aw_burst   ) ,
    //     .s_axi_aw_cache      (soc_axi_aw_cache   ) ,
    //     .s_axi_aw_port       (soc_axi_aw_port    ) ,
    //     .s_axi_aw_qos        (soc_axi_aw_qos     ) ,
    //     .s_axi_aw_valid      (soc_axi_aw_valid   ) ,
    //     .s_axi_aw_ready      (soc_axi_aw_ready   ) ,

    // //----------------------write data channel-----------------------------------//
    //     .s_axi_w_data        (soc_axi_w_data     ) ,
    //     .s_axi_w_strb        (soc_axi_w_strb     ) ,
    //     .s_axi_w_last        (soc_axi_w_last     ) ,
    //     .s_axi_w_valid       (soc_axi_w_valid    ) ,
    //     .s_axi_w_ready       (soc_axi_w_ready    ) ,

    // //-----------------------write response channel------------------------------//
    //     .s_axi_b_id          (soc_axi_b_id       ) ,
    //     .s_axi_b_resp        (soc_axi_b_resp     ) ,
    //     .s_axi_b_valid       (soc_axi_b_valid    ) ,
    //     .s_axi_b_ready       (soc_axi_b_ready    ) ,

    // //------------------------read address channel-------------------------------//
    //     .s_axi_ar_id         (soc_axi_ar_id      ) ,
    //     .s_axi_ar_addr       (soc_axi_ar_addr    ) ,
    //     .s_axi_ar_len        (soc_axi_ar_len     ) ,
    //     .s_axi_ar_size       (soc_axi_ar_size    ) ,
    //     .s_axi_ar_burst      (soc_axi_ar_burst   ) ,
    //     .s_axi_ar_cache      (soc_axi_ar_cache   ) ,
    //     .s_axi_ar_prot       (soc_axi_ar_prot    ) ,
    //     .s_axi_ar_qos        (soc_axi_ar_qos     ) ,
    //     .s_axi_ar_valid      (soc_axi_ar_valid   ) ,
    //     .s_axi_ar_ready      (soc_axi_ar_ready   ) ,

    // //------------------------read data channel----------------------------------//
    //     .s_axi_r_id          (soc_axi_r_id       ) ,
    //     .s_axi_r_data        (soc_axi_r_data     ) ,
    //     .s_axi_r_resp        (soc_axi_r_resp     ) ,
    //     .s_axi_r_last        (soc_axi_r_last     ) ,
    //     .s_axi_r_valid       (soc_axi_r_valid    ) ,    
    //     .s_axi_r_ready       (soc_axi_r_ready    ) ,

    //     .mnq_read_ena        (read_ena_sign      ) ,
    //     .addr_oup            (addr_oup_sign      ) ,
    //     .mnq_data_in         (read_data_sign     ) ,
    //     .write_ram_ena       (write_ena_sign     ) ,
    //     .write_ram_data      (write_data_sign    ) ,
    //     .write_ram_addr      (write_addr_sign    )     
    // );

    assign io_master_awid   = soc_axi_aw_id ;
    assign io_master_awaddr = soc_axi_aw_addr[31:0];
    assign io_master_awlen  = soc_axi_aw_len ;
    assign io_master_awsize = soc_axi_aw_size;
    assign io_master_awburst = soc_axi_aw_burst;
    // assign out_axi_aw_cache = soc_axi_aw_cache;
    // assign out_axi_aw_port  = soc_axi_aw_port;
    // assign out_axi_aw_qos   = soc_axi_aw_qos ;
    assign io_master_awvalid = soc_axi_aw_valid;
    assign soc_axi_aw_ready = io_master_awready;

    assign io_master_wdata   = soc_axi_w_data ;
    assign io_master_wstrb   = soc_axi_w_strb ;
    assign io_master_wlast   = soc_axi_w_last ;
    assign io_master_wvalid  = soc_axi_w_valid;
    assign soc_axi_w_ready  = io_master_wready;

    assign soc_axi_b_id     = io_master_bid   ;
    assign soc_axi_b_resp   = io_master_bresp ;
    assign soc_axi_b_valid  = io_master_bvalid;
    assign io_master_bready  = soc_axi_b_ready;

    assign io_master_arid    = soc_axi_ar_id  ;
    assign io_master_araddr  = soc_axi_ar_addr[31:0];
    assign io_master_arlen   = soc_axi_ar_len ;
    assign io_master_arsize  = soc_axi_ar_size;
    assign io_master_arburst = soc_axi_ar_burst;
    // assign out_axi_ar_cache = soc_axi_ar_cache;
    // assign out_axi_ar_prot  = soc_axi_ar_prot;
    // assign out_axi_ar_qos   = soc_axi_ar_qos ;
    assign io_master_arvalid = soc_axi_ar_valid;
    assign soc_axi_ar_ready = io_master_arready;

    assign soc_axi_r_data   = io_master_rdata ;
    assign soc_axi_r_id     = io_master_rid   ;
    assign soc_axi_r_last   = io_master_rlast ;
    assign soc_axi_r_resp   = io_master_rresp ;
    assign soc_axi_r_valid  = io_master_rvalid;
    assign io_master_rready  = soc_axi_r_ready;



    wire   [1:0]   prot_chose_write;// = 3'b100 ;
    assign prot_chose_write = mmio_thing ;
    wire   [1:0]   prot_chose_read ;// = 3'b100 ;
    assign prot_chose_read = mmio_thing;
    ysyx_22040228soc_axi4 soc_axi45 (
        .clk                 (aclk              ) ,
        .rst                 (rst               ) ,
        .prot_chose_write    (prot_chose_write  ) ,
        .prot_chose_read     (prot_chose_read   ) ,

        .master_axi_aw_id    (t_axi_aw_id       ) ,
        .master_axi_aw_addr  (t_axi_aw_addr     ) ,
        .master_axi_aw_len   (t_axi_aw_len      ) ,
        .master_axi_aw_size  (t_axi_aw_size     ) ,   
        .master_axi_aw_burst (t_axi_aw_burst    ) ,
        .master_axi_aw_cache (t_axi_aw_cache    ) ,
        .master_axi_aw_prot  (t_axi_aw_port     ) ,
        .master_axi_aw_qos   (t_axi_aw_qos      ) ,
        .master_axi_aw_valid (t_axi_aw_valid    ) ,
        .master_axi_aw_ready (t_axi_aw_ready    ) ,

        //.master_axi_w_id     (t_axi_w_id        ) ,
        .master_axi_w_data   (t_axi_w_data      ) ,
        .master_axi_w_strb   (t_axi_w_strb      ) ,
        .master_axi_w_last   (t_axi_w_last      ) ,
        .master_axi_w_valid  (t_axi_w_valid     ) ,
        .master_axi_w_ready  (t_axi_w_ready     ) ,

        .master_axi_b_id     (t_axi_b_id        ) ,
        .master_axi_b_resp   (t_axi_b_resp      ) ,
        .master_axi_b_ready  (t_axi_b_ready     ) ,
        .master_axi_b_valid  (t_axi_b_valid     ) ,

        .master_axi_ar_id    (t_axi_ar_id       ) ,
        .master_axi_ar_addr  (t_axi_ar_addr     ) ,
        .master_axi_ar_len   (t_axi_ar_len      ) ,
        .master_axi_ar_size  (t_axi_ar_size     ) ,
        .master_axi_ar_burst (t_axi_ar_burst    ) ,
        .master_axi_ar_cache (t_axi_ar_cache    ) ,
        .master_axi_ar_prot  (t_axi_ar_prot     ) ,
        .master_axi_ar_qos   (t_axi_ar_qos      ) ,
        .master_axi_ar_valid (t_axi_ar_valid    ) ,
        .master_axi_ar_ready (t_axi_ar_ready    ) ,

        .master_axi_r_id     (t_axi_r_id        ) ,
        .master_axi_r_data   (t_axi_r_data      ) ,
        .master_axi_r_resp   (t_axi_r_resp      ) ,
        .master_axi_r_last   (t_axi_r_last      ) ,
        .master_axi_r_valid  (t_axi_r_valid     ) ,
        .master_axi_r_ready  (t_axi_r_ready     ) ,

        .slave_axi_aw_id     (add_axi_aw_id     ) ,
        .slave_axi_aw_addr   (add_axi_aw_addr   ) ,
        .slave_axi_aw_len    (add_axi_aw_len    ) ,
        .slave_axi_aw_size   (add_axi_aw_size   ) ,
        .slave_axi_aw_burst  (add_axi_aw_burst  ) ,
        .slave_axi_aw_cache  (add_axi_aw_cache  ) ,
        .slave_axi_aw_prot   (add_axi_aw_prot   ) ,
        .slave_axi_aw_qos    (add_axi_aw_qos    ) ,
        .slave_axi_aw_valid  (add_axi_aw_valid  ) ,
        .slave_axi_aw_ready  (add_axi_aw_ready  ) ,

        //.slave_axi_w_id      (add_axi_w_id      ) ,
        .slave_axi_w_data    (add_axi_w_data    ) ,
        .slave_axi_w_strb    (add_axi_w_strb    ) ,
        .slave_axi_w_last    (add_axi_w_last    ) ,
        .slave_axi_w_valid   (add_axi_w_valid   ) ,
        .slave_axi_w_ready   (add_axi_w_ready   ) ,

        .slave_axi_b_id      (add_axi_b_id      ) ,
        .slave_axi_b_resp    (add_axi_b_resp    ) ,
        .slave_axi_b_valid   (add_axi_b_valid   ) ,
        .slave_axi_b_ready   (add_axi_b_ready   ) ,

        .slave_axi_ar_id     (add_axi_ar_id     ) ,
        .slave_axi_ar_addr   (add_axi_ar_addr   ) ,
        .slave_axi_ar_len    (add_axi_ar_len    ) ,
        .slave_axi_ar_size   (add_axi_ar_size   ) ,
        .slave_axi_ar_burst  (add_axi_ar_burst  ) ,
        .slave_axi_ar_cache  (add_axi_ar_cache  ) ,
        .slave_axi_ar_prot   (add_axi_ar_prot   ) ,
        .slave_axi_ar_qos    (add_axi_ar_qos    ) ,
        .slave_axi_ar_valid  (add_axi_ar_valid  ) ,
        .slave_axi_ar_ready  (add_axi_ar_ready  ) ,

        .slave_axi_r_id      (add_axi_r_id      ) ,
        .slave_axi_r_data    (add_axi_r_data    ) ,
        .slave_axi_r_resp    (add_axi_r_resp    ) ,
        .slave_axi_r_last    (add_axi_r_last    ) ,
        .slave_axi_r_valid   (add_axi_r_valid   ) ,
        .slave_axi_r_ready   (add_axi_r_ready   ) 
    );

    ysyx_22040228clint clint6 (
        .clk                 (aclk              ) ,
        .rst                 (rst               ) ,
        .time_interrupt      (time_init_sign    ) ,

        .time_axi_aw_id      (tim_axi_aw_id     ) , 
        .time_axi_aw_addr    (tim_axi_aw_addr   ) ,
        .time_axi_aw_len     (tim_axi_aw_len    ) ,
        .time_axi_aw_size    (tim_axi_aw_size   ) ,
        .time_axi_aw_burst   (tim_axi_aw_burst  ) ,
        .time_axi_aw_cache   (tim_axi_aw_cache  ) ,
        .time_axi_aw_prot    (tim_axi_aw_port   ) ,
        .time_axi_aw_qos     (tim_axi_aw_qos    ) ,
        .time_axi_aw_valid   (tim_axi_aw_valid  ) ,
        .time_axi_aw_ready   (tim_axi_aw_ready  ) , 

        .time_axi_w_data     (tim_axi_w_data    ) ,
        .time_axi_w_strb     (tim_axi_w_strb    ) ,
        .time_axi_w_last     (tim_axi_w_last    ) ,
        .time_axi_w_ready    (tim_axi_w_ready   ) ,
        .time_axi_w_valid    (tim_axi_w_valid   ) ,

    //write response channel
        .time_axi_b_id       (tim_axi_b_id      ) ,
        .time_axi_b_resp     (tim_axi_b_resp    ) ,
        .time_axi_b_valid    (tim_axi_b_valid   ) ,
        .time_axi_b_ready    (tim_axi_b_ready   ) ,

    //read address channel
        .time_axi_ar_id      (tim_axi_ar_id     ) ,
        .time_axi_ar_addr    (tim_axi_ar_addr   ) ,
        .time_axi_ar_len     (tim_axi_ar_len    ) ,
        .time_axi_ar_size    (tim_axi_ar_size   ) ,
        .time_axi_ar_burst   (tim_axi_ar_burst  ) ,
        .time_axi_ar_cache   (tim_axi_ar_cache  ) ,
        .time_axi_ar_prot    (tim_axi_ar_prot   ) ,
        .time_axi_ar_qos     (tim_axi_ar_qos    ) ,
        .time_axi_ar_valid   (tim_axi_ar_valid  ) ,
        .time_axi_ar_ready   (tim_axi_ar_ready  ) ,

    //read data channel
        .time_axi_r_id       (tim_axi_r_id      ) ,
        .time_axi_r_data     (tim_axi_r_data    ) ,
        .time_axi_r_resp     (tim_axi_r_resp    ) ,
        .time_axi_r_last     (tim_axi_r_last    ) ,
        .time_axi_r_valid    (tim_axi_r_valid   ) ,
        .time_axi_r_ready    (tim_axi_r_ready   ) 
    );

    // io_slave_axi io_slave_axi9(
    //     .clk                 (aclk              ) ,
    //     .rst                 (rst               ) ,

    //     .ioe_axi_aw_id       (io_axi_aw_id      ) , 
    //     .ioe_axi_aw_addr     (io_axi_aw_addr    ) ,
    //     .ioe_axi_aw_len      (io_axi_aw_len     ) ,
    //     .ioe_axi_aw_size     (io_axi_aw_size    ) ,
    //     .ioe_axi_aw_burst    (io_axi_aw_burst   ) ,
    //     .ioe_axi_aw_cache    (io_axi_aw_cache   ) ,
    //     .ioe_axi_aw_prot     (io_axi_aw_port    ) ,
    //     .ioe_axi_aw_qos      (io_axi_aw_qos     ) ,
    //     .ioe_axi_aw_valid    (io_axi_aw_valid   ) ,
    //     .ioe_axi_aw_ready    (io_axi_aw_ready   ) , 

    //     .ioe_axi_w_data      (io_axi_w_data     ) ,
    //     .ioe_axi_w_strb      (io_axi_w_strb     ) ,
    //     .ioe_axi_w_last      (io_axi_w_last     ) ,
    //     .ioe_axi_w_valid     (io_axi_w_valid    ) ,
    //     .ioe_axi_w_ready     (io_axi_w_ready    ) ,

    //     .ioe_axi_b_id        (io_axi_b_id       ) ,
    //     .ioe_axi_b_resp      (io_axi_b_resp     ) ,
    //     .ioe_axi_b_valid     (io_axi_b_valid    ) ,
    //     .ioe_axi_b_ready     (io_axi_b_ready    ) ,

    //     .ioe_axi_ar_id       (io_axi_ar_id      ) ,
    //     .ioe_axi_ar_addr     (io_axi_ar_addr    ) ,
    //     .ioe_axi_ar_len      (io_axi_ar_len     ) ,
    //     .ioe_axi_ar_size     (io_axi_ar_size    ) ,
    //     .ioe_axi_ar_burst    (io_axi_ar_burst   ) ,
    //     .ioe_axi_ar_cache    (io_axi_ar_cache   ) ,
    //     .ioe_axi_ar_prot     (io_axi_ar_prot    ) ,
    //     .ioe_axi_ar_qos      (io_axi_ar_qos     ) ,
    //     .ioe_axi_ar_valid    (io_axi_ar_valid   ) ,
    //     .ioe_axi_ar_ready    (io_axi_ar_ready   ) ,

    //     .ioe_axi_r_id        (io_axi_r_id       ) ,
    //     .ioe_axi_r_data      (io_axi_r_data     ) ,
    //     .ioe_axi_r_resp      (io_axi_r_resp     ) ,
    //     .ioe_axi_r_last      (io_axi_r_last     ) ,
    //     .ioe_axi_r_valid     (io_axi_r_valid    ) ,
    //     .ioe_axi_r_ready     (io_axi_r_ready    ) ,

    //     .out_slave_addr      (out_slave_addr_   ) ,

    //     .out_serial_data     (out_serial_data_  ) ,
    //     .out_serial_write    (out_serial_write_ ) ,
    //     .in_rtc_data         (in_rtc_data_      ) ,
    //     .out_rtc_read        (out_rtc_read_     ) 
    // );


endmodule

