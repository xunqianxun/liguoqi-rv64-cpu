/************************************************************
Author:LiGuoqi
Name:define_axi4.v
Function:AXI4 use define
************************************************************/
`define ysyx22040228_ID       3:0
`define ysyx22040228_ADDR     63:0
`define ysyx22040228_LEN      7:0
`define ysyx22040228_SIZE     2:0
`define ysyx22040228_BURST    1:0
`define ysyx22040228_LOCK     1:0
`define ysyx22040228_CACHE    3:0
`define ysyx22040228_PROT     2:0
`define ysyx22040228_QOS  
`define ysyx22040228_REGION
`define ysyx22040228_USER
`define ysyx22040228_DATA     63:0
`define ysyx22040228_STRB     
`define ysyx22040228_LAST 
`define ysyx22040228_USER   
`define ysyx22040228_RESP

//multiply by six relative to the input bit width
`define ysyx22040228_SLAVE_ID       23:0 //4*6-1
`define ysyx22040228_SLAVE_ADDR     383:0//64*6-1
`define ysyx22040228_SLAVE_LEN      47:0 //8*6-1
`define ysyx22040228_SLAVE_SIZE     17:0 //3*6-1
`define ysyx22040228_SLAVE_BURST    11:0 //2*6-1 
`define ysyx22040228_SLAVE_LOCK     11:0 //2*6-1
`define ysyx22040228_SLAVE_CACHE    23:0 //4*6-1
`define ysyx22040228_SLAVE_PROT     17:0 //3*6-1
`define ysyx22040228_SLAVE_QOS  
`define ysyx22040228_SLAVE_REGION
`define ysyx22040228_SLAVE_USER
`define ysyx22040228_SLAVE_DATA     383:0//64*6-1
`define ysyx22040228_SLAVE_STRB     
`define ysyx22040228_SLAVE_LAST 
//`define ysyx22040228_SLAVE_USER   
`define ysyx22040228_SLAVE_RESP

//number of the port 
`define ysyx22040228_STRBN  
`define ysyx22040228_LASTN 

//signal zero data
`define ysyx22040228_ID_ZERO    4'b0000 
`define ysyx22040228_ADDR_ZERO  64'b0
`define ysyx22040228_LEN_ZERO   8'b0
`define ysyx22040228_SIZE_ZERO  3'b0
`define ysyx22040228_BURST_ZERO 2'b0
`define ysyx22040228_LOCK_ZERO  2'b0
`define ysyx22040228_CACHE_ZERO 4'b0
`define ysyx22040228_PROT_ZERO  3'b0
`define ysyx22040228_QOS_ZERO   
`define ysyx22040228_REGION_ZERO
`define ysyx22040228_USER_ZERO
`define ysyx22040228_DATA_ZERO  64'b0
`define ysyx22040228_STRB_ZERO
`define ysyx22040228_LAST_ZERO
`define ysyx22040228_RESP_ZERO 


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

`define ysyx22040228_CACHE_DATA_W  511:0

`define ysyx22040228_DCACHE_ADDR_W  31:0
`define ysyx22040228_DCACHE_DATA_W  63:0

`define ysyx22040228_ABLE         1'b1
`define ysyx22040228_ENABLE       1'b0