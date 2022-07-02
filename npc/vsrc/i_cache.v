/************************************************************
Author:LiGuoqi
Name:d_cache1.v
Function:write data cache
************************************************************/
`include "./vsrc/defines.v"
`include "./vsrc/defines_axi4.v"
`include "./vsrc/i_cache_data_ram.v"
`include "./vsrc/i_cache_tag_ram.v"

`define ysyx22040228_IDLE    6'b000001
`define ysyx22040228_MISSR   6'b000010
`define ysyx22040228_HIT     6'b000100
`define ysyx22040228_COREBCH 6'b001000
`define ysyx22040228_COREBCM 6'b010000
`define ysyx22040228_READ    6'b100000

module i_cache (
    input       wire                                         clk             ,
    input       wire                                         rst             ,
    input       wire          [63:0]                         inst_addr       ,
    input       wire                                         inst_ena        ,
    input       wire                                         inst_ready      ,
    output      reg           [31:0]                         inst_data       ,
    output      reg                                          inst_valid      ,

    output      reg                                          cache_read_ena  ,
    output      reg                                          cache_read_resp ,
    output      reg           [63:0]                         cache_addr      ,
    input       wire          [63:0]                         cache_in_data   ,
    input       wire                                         cache_in_valid  ,
    input       wire                                         arb_working_ti                                  
);
    wire   icache_if_shankhand   ;
    assign icache_if_shankhand = inst_ready && inst_valid ;

    reg [63:0]   addr_lock ;
    always @(posedge clk) begin
        if(icache_if_shankhand) begin
            addr_lock <= inst_addr ;
        end  
        else begin
            addr_lock <= addr_lock ;
        end 
    end
    wire [54:0 ] icache_tag    =   addr_lock[63:9 ];
    wire [ 6:0 ] icache_index  =   addr_lock[ 8:3 ];
    wire [ 2:0 ] icache_offset =   addr_lock[ 2:0 ];

    reg  [5:0]  state_inst     ;
    reg  [5:0]  state_inst_nxt ;

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            state_inst <= `ysyx22040228_IDLE;
        end 
        else begin
            state_inst <= state_inst_nxt    ;
        end 
    end

    always @(*) begin 
            case (state_inst)
               `ysyx22040228_IDLE : begin
                   if(icache_if_shankhand)
                        state_inst_nxt = `ysyx22040228_READ;
                   else 
                        state_inst_nxt = `ysyx22040228_IDLE;  
               end 
               `ysyx22040228_READ  : begin
                   if(read_ok) && (((i_tag_data1 == icache_tag) && (i_tag_user1 == `ysyx22040228_ABLE)) || ((i_tag_data2 == icache_tag) && (i_tag_user2 == `ysyx22040228_ABLE)))
                        state_inst_nxt = `ysyx22040228_HIT;
                   else if(read_ok)
                        state_inst_nxt = `ysyx22040228_MISSR;
                   else
                        state_inst_nxt = `ysyx22040228_READ ;
               end 
               `ysyx22040228_HIT : begin
                   if(inst_hit_ok)
                        state_inst_nxt = `ysyx22040228_IDLE;
                   else 
                        state_inst_nxt = `ysyx22040228_HIT;
               end 
               `ysyx22040228_MISSR : begin
                   if(write_i_ok)
                        state_inst_nxt = `ysyx22040228_READ ;
                   else 
                        state_inst_nxt = `ysyx22040228_MISSR;  
               end 

                default: begin
                  state_inst_nxt       =  `ysyx22040228_IDLE ;
                end 
            endcase 
    end 

    reg          read_ok    ;
    always @(*) begin
        if(state_inst == `ysyx22040228_READ) begin
            read_ok = `ysyx22040228_ABLE    ;
        end 
        else begin
            read_ok = `ysyx22040228_ENABLE  ;
        end 
    end

    reg         inst_hit_ok ;
    always @(*) begin
        if(state_inst == `ysyx22040228_HIT)
            if((i_tag_data1 == icache_tag) && (i_tag_user1 == `ysyx22040228_ABLE))begin
                if(addr_lock[2] == `ysyx22040228_ABLE)   begin
                    inst_data = inst_out_1[63:32]      ;
                    inst_hit_ok  = `ysyx22040228_ABLE  ;
                end 
                if(addr_lock[2] == `ysyx22040228_ENABLE) begin
                    inst_data = inst_out_1[31:0 ]      ;
                    inst_hit_ok  = `ysyx22040228_ABLE  ;
                end
            end
            else if((i_tag_data2 == icache_tag) && (i_tag_user2 == `ysyx22040228_ABLE))begin
                if(addr_lock[2] == `ysyx22040228_ABLE)   begin
                    inst_data = inst_out_2[63:32]      ;
                    inst_hit_ok  = `ysyx22040228_ABLE  ;
                end 
                if(addr_lock[2] == `ysyx22040228_ENABLE) begin
                    inst_data = inst_out_2[31:0 ]      ;
                    inst_hit_ok  = `ysyx22040228_ABLE  ;
                end
            end
            else begin
                inst_data    = 32'b0                   ;
                inst_hit_ok  = `ysyx22040228_ENABLE    ;
            end  
        else   
          inst_hit_ok  = `ysyx22040228_ENABLE          ;  
    end 
    assign  inst_valid  = (state_inst == `ysyx22040228_READ) ? `ysyx22040228_ENABLE :
                          (state_inst == `ysyx22040228_HIT)  ? `ysyx22040228_ENABLE :
                          (state_inst == `ysyx22040228_MISSR)? `ysyx22040228_ENABLE :
                          arb_working_ti                     ? `ysyx22040228_ENABLE ;
                                                                 `ysyx22040228_ABLE ;


    reg   [63:0]    miss_data ;
    reg             miss_ena_o; 
    reg             miss_ena_t;
    reg             write_i_ok;   
    always @(*) begin
        if((state_inst ==  `ysyx22040228_MISSR) && (~cache_in_valid)) begin
            cache_read_ena = `ysyx22040228_ABLE  ;
            cache_addr     = inst_addr           ;
        end 
        else if((state_inst ==  `ysyx22040228_MISSR) && (cache_in_valid)) begin
            miss_data      = cache_in_data       ;
            cache_read_resp= `ysyx22040228_ABLE  ; 
            write_i_ok     = `ysyx22040228_ABLE  ;
            if((i_tag_user1 == `ysyx22040228_ENABLE) || (i_counter1[icache_index]] >= i_counter2[icache_index]))begin
                miss_ena_o = `ysyx22040228_ABLE  ;
            end    
            else if((i_tag_user2 == `ysyx22040228_ENABLE) || (i_counter1[icache_index] < i_counter2[icache_index])) begin
                miss_ena_t = `ysyx22040228_ABLE  ;
            end
            else begin
                miss_ena_o = `ysyx22040228_ENABLE ;
                miss_ena_t = `ysyx22040228_ENABLE ;
            end  
        end
        else begin
            miss_data      = `ysyx22040228_ZEROWORD ;
            miss_ena_o     = `ysyx22040228_ENABLE ;
            miss_ena_t     = `ysyx22040228_ENABLE ;
            cache_read_resp= `ysyx22040228_ENABLE   ; 
            write_i_ok     = `ysyx22040228_ENABLE   ;
        end 
    end

    wire [54:0] i_tag_data1 ;
    wire        i_tag_user1 ;
    i_cache_tag_ram u_tag01(
        .clk         (clk          ),
        .addr_i      (icache_index ),
        .data_i      (icache_tag   ),
        .write_ena   (miss_ena_o   ),
        .tag_data    (i_tag_data1  ),
        .tag_valid   (i_tag_user1  )
    );

    wire [54:0] i_tag_data1 ;
    wire        i_tag_user1 ;
    i_cache_tag_ram u_tag02(
        .clk         (clk          ),
        .addr_i      (icache_index ),
        .data_i      (icache_tag   ),
        .write_ena   (miss_ena_t   ),
        .tag_data    (i_tag_data2  ),
        .tag_valid   (i_tag_user2  )
    );

    //-------------------------------ram data---------------------------------//
    
    i_cache_data_ram u_data01(
        .clk         (clk           ),
        .addr_i      (icache_offset ),
        .data_i      (miss_data    ),
        .write_ena   (miss_ena_t    ),
        .data_o      (inst_out_1    )
    );
    i_cache_data_ram u_data02(
        .clk         (clk           ),
        //.rst         (rst           ),
        .addr_i      (icache_offset ),
        .data_i      (miss_data     ),
        .write_ena   (miss_ena_o    ),
        .data_o      (inst_out_2    )
    );


    //--------------------------------------bit code---------------------------//
    reg  [2:0]  i_counter1 [`ysyx22040228_CACHE_DATA_W];
    reg  [2:0]  i_counter2 [`ysyx22040228_CACHE_DATA_W];
    integer i ;

    always @(posedge clk) begin
        if(((state_inst == `ysyx22040228_HIT) && ((i_tag_data1 == icache_tag) && (i_tag_user1 == `ysyx22040228_ABLE))) || (miss_ena_o))
            i_counter1[icache_index] <= 3'b0 ;
        if(((state_inst == `ysyx22040228_HIT) && ((i_tag_data2 == icache_tag) && (i_tag_user2 == `ysyx22040228_ABLE))) || (miss_ena_t))
            i_counter2[icache_index] <= 3'b0 ;
        if(icache_if_shankhand) begin
		    for(i = 0;i<64;i=i+1) begin
			   i_counter1[i][2:0] <= (i_counter1[i] == 3'd7) ? 3'd7 : i_counter1[i][2:0] + 1'b1;
               i_counter2[i][2:0] <= (i_counter2[i] == 3'd7) ? 3'd7 : i_counter2[i][2:0] + 1'b1;
		    end
        end 
	end

endmodule    
