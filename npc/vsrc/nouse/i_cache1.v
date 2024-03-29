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
`define ysyx22040228_CHOSE   6'b000010
`define ysyx22040228_HIT     6'b000100
`define ysyx22040228_MISS    6'b001000
`define ysyx22040228_WRITE   6'b010000
`define ysyx22040228_READ    6'b100000
module i_cache1 (
    input       wire                                         clk             ,
    input       wire                                         rst             ,
    input       wire          [63:0]                         inst_addr       ,
    input       wire                                         inst_ena        ,
    input       wire                                         inst_ready      ,
    output      wire          [31:0]                         inst_data       ,
    output      reg                                          inst_valid      ,

    output      wire                                         cache_read_ena  ,
    output      wire          [63:0]                         cache_addr      ,
    input       wire          [63:0]                         cache_or_data   ,
    input       wire                                         cache_in_ok     ,
    input       wire                                         axi_working_ti                                  
);

    //----------------------data temporary storage------------------------//
    reg  [63:0]    addr_lock_reg ; 
    //reg            ena_lock_reg  ;
    always @(posedge clk) begin
        if(state_inst == `ysyx22040228_WRITE) begin
            addr_lock_reg <= inst_addr ;
            //ena_lock_reg  <= `ysyx22040228_ABLE;
        end 
        else begin
            if(axi_working_ti)begin
                addr_lock_reg <= addr_lock_reg ;
                //ena_lock_reg  <= ena_lock_reg  ;
            end 
            else begin
                addr_lock_reg <= 64'h0         ;
                //ena_lock_reg  <= `ysyx22040228_ENABLE;
            end 
        end
    end 

    wire  [54:0]  i_in_teg                     ;
    assign i_in_teg = inst_addr[63:9]          ;
    /* verilator lint_off UNOPTFLAT */
    reg [5:0] state_inst    ;
    /* verilator lint_on UNOPTFLAT */
    reg       inst_hit_ok   ;
    reg       write_i_ok    ;
    reg       read_ok       ;
    wire      state_sign    ;
    assign state_sign = (~inst_ena) && (inst_ready) ;

    always @(*) begin 
        if(rst == `ysyx22040228_RSTENA) begin
            state_inst = `ysyx22040228_IDLE;
        end 
        else begin
            case (state_inst)
               `ysyx22040228_IDLE : begin
                   if(state_sign)
                        state_inst = `ysyx22040228_READ;
                   else 
                        state_inst = `ysyx22040228_IDLE;  
               end 
               `ysyx22040228_READ  : begin
                   if(read_ok)
                        state_inst = `ysyx22040228_CHOSE;
                   else
                        state_inst = `ysyx22040228_READ ;
               end 
               `ysyx22040228_CHOSE : begin
                   if(((i_tag_data1 == i_in_teg) && (i_tag_user1 == `ysyx22040228_ABLE)) || ((i_tag_data2 == i_in_teg) && (i_tag_user2 == `ysyx22040228_ABLE))) 
                       state_inst = `ysyx22040228_HIT;
                   else 
                    state_inst = `ysyx22040228_WRITE;  
               end 
               `ysyx22040228_HIT : begin
                   if(inst_hit_ok)
                        state_inst = `ysyx22040228_IDLE;
                   else 
                        state_inst = `ysyx22040228_HIT;
               end 
               `ysyx22040228_WRITE : begin
                   if(write_i_ok)
                        state_inst = `ysyx22040228_IDLE;
                   else 
                        state_inst = `ysyx22040228_WRITE;  
               end 

                default: begin
                  state_inst =  `ysyx22040228_IDLE ;
                end 
            endcase
        end 
    end 

    always @(posedge clk or negedge rst) begin
        if(state_inst == `ysyx22040228_READ)
            read_ok <= `ysyx22040228_ABLE;
        else
            read_ok <= `ysyx22040228_ENABLE;
    end

    always @(posedge clk or negedge rst) begin
        if(state_inst == `ysyx22040228_HIT)
              inst_hit_ok               <= `ysyx22040228_ABLE    ; 
        else   
              inst_hit_ok               <= `ysyx22040228_ENABLE  ;  
    end

    reg                          inst_in_cache1   ;
    reg                          inst_in_cache2   ;
    reg                          inst_write_cache ;
    wire  inst_chose1 = ((i_tag_user1 == `ysyx22040228_ENABLE) || (i_counter1[i_count_addr] >= i_counter2[i_count_addr])) ;
    wire  inst_chose2 = ((i_tag_user2 == `ysyx22040228_ENABLE) || (i_counter1[i_count_addr] < i_counter2[i_count_addr]))  ; 

    always @(posedge clk or negedge rst) begin
        if((state_inst == `ysyx22040228_WRITE) && (cache_in_ok))begin
            inst_write_cache <=  `ysyx22040228_ABLE    ;
            if((i_tag_user1 == `ysyx22040228_ENABLE) || (i_counter1[i_count_addr] >= i_counter2[i_count_addr]))
                inst_in_cache1   <=  `ysyx22040228_ABLE;
            else if((i_tag_user2 == `ysyx22040228_ENABLE) || (i_counter1[i_count_addr] < i_counter2[i_count_addr]))
                inst_in_cache2   <=  `ysyx22040228_ABLE;
        end 
        else if(inst_write_cache) begin
            write_i_ok       <= `ysyx22040228_ABLE  ;
            inst_write_cache <= `ysyx22040228_ENABLE;
        end 

        else if(write_i_ok) begin
                write_i_ok    <= `ysyx22040228_ENABLE;
                if(state_inst ==`ysyx22040228_IDLE) begin
                    inst_in_cache1   <= `ysyx22040228_ENABLE;
                    inst_in_cache2   <= `ysyx22040228_ENABLE;
                end 
        end 
    end
    //-----------------------miss state data lock---------------------------------//

    assign cache_addr      = axi_working_ti ?  addr_lock_reg : inst_addr ; 
    assign cache_read_ena  = ((state_inst == `ysyx22040228_WRITE) && (~cache_in_ok)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE  ;
    assign inst_data       = ((state_inst == `ysyx22040228_HIT) && (inst_ena)) ? ((i_tag_data1 == i_in_teg) ? (inst_addr[2] ? i_out_data1[63:32] : i_out_data1[31:0]) : (inst_addr[2] ? i_out_data2[63:32] : i_out_data2[31:0])) :
                             inst_write_cache                                  ? (inst_in_cache1 ? (inst_addr[2] ? i_out_data1[63:32] : i_out_data1[31:0]) : (inst_addr[2] ? i_out_data2[63:32] : i_out_data2[31:0]))            :
                                                                              32'b0;                   
    /* verilator lint_off LATCH */
    always @(*) begin
        if(rst == `ysyx22040228_ABLE)
            inst_valid  = `ysyx22040228_ABLE  ;
        else if(state_inst == `ysyx22040228_READ)
            inst_valid  = `ysyx22040228_ENABLE;
        else if(((state_inst == `ysyx22040228_HIT) && (inst_ena)) || inst_write_cache)
            inst_valid  = `ysyx22040228_ABLE  ;
    end
    /* verilator lint_on LATCH */                        

    wire    [5:0]    i_cache_addr1;
    wire    [55:0]   i_cache_tag1 ;
    wire             i_tag_ena1   ;
    wire    [54:0]   i_tag_data1  ;
    wire             i_tag_user1  ;
    assign i_tag_ena1      = (((state_inst == `ysyx22040228_WRITE) && (cache_in_ok)) && inst_chose1) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE; 
    assign i_cache_addr1   = inst_addr[8:3]        ;
    assign i_cache_tag1    = {1'b1,inst_addr[63:9]};

    i_cache_tag_ram u_tag01(
        .clk         (clk          ),
        //.rst         (rst          ),
        .addr_i      (i_cache_addr1),
        .data_i      (i_cache_tag1 ),
        .write_ena   (i_tag_ena1   ),
        .tag_data    (i_tag_data1  ),
        .tag_valid   (i_tag_user1  )
    );

    wire    [5:0]    i_cache_addr2;
    wire    [55:0]   i_cache_tag2 ;
    wire             i_tag_ena2   ;
    wire    [54:0]   i_tag_data2  ;
    wire             i_tag_user2  ;
    assign i_tag_ena2      = (((state_inst == `ysyx22040228_WRITE) && (cache_in_ok)) && inst_chose2) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE; 
    assign i_cache_addr2   = inst_addr[8:3];
    assign i_cache_tag2    = {1'b1,inst_addr[63:9]};

    i_cache_tag_ram u_tag02(
        .clk         (clk          ),
        //.rst         (rst          ),
        .addr_i      (i_cache_addr2),
        .data_i      (i_cache_tag2 ),
        .write_ena   (i_tag_ena2   ),
        .tag_data    (i_tag_data2  ),
        .tag_valid   (i_tag_user2  )
    );

    //-------------------------------ram data---------------------------------//
    
    wire    [5:0]    i_addrdata1;
    wire    [63:0]   i_in_data1 ;
    wire             i_data_ena1 ;
    wire    [63:0]   i_out_data1 ;
    assign  i_addrdata1 = inst_addr[8:3];
    assign  i_in_data1  = (((state_inst == `ysyx22040228_WRITE) && (cache_in_ok)) && inst_chose1) ? cache_or_data        : 64'b0                 ; 
    assign  i_data_ena1 = (((state_inst == `ysyx22040228_WRITE) && (cache_in_ok)) && inst_chose1) ? `ysyx22040228_ABLE   : `ysyx22040228_ENABLE  ;
    i_cache_data_ram u_data01(
        .clk         (clk           ),
        //.rst         (rst           ),
        .addr_i      (i_addrdata1   ),
        .data_i      (i_in_data1    ),
        .write_ena   (i_data_ena1   ),
        .data_o      (i_out_data1   )
    );

    wire    [5:0]    i_addrdata2 ;
    wire    [63:0]   i_in_data2  ;
    wire             i_data_ena2 ;
    wire    [63:0]   i_out_data2 ;
    assign  i_addrdata2 = inst_addr[8:3];
    assign  i_in_data2  = (((state_inst == `ysyx22040228_WRITE) && (cache_in_ok)) && inst_chose2) ? cache_or_data        : 64'b0                 ; 
    assign  i_data_ena2 = (((state_inst == `ysyx22040228_WRITE) && (cache_in_ok)) && inst_chose2) ? `ysyx22040228_ENABLE : `ysyx22040228_ENABLE  ;
    i_cache_data_ram u_data02(
        .clk         (clk           ),
        //.rst         (rst           ),
        .addr_i      (i_addrdata2   ),
        .data_i      (i_in_data2    ),
        .write_ena   (i_data_ena2   ),
        .data_o      (i_out_data2   )
    );


    //--------------------------------------bit code---------------------------//
    reg  [2:0]  i_counter1 [`ysyx22040228_CACHE_DATA_W];
    reg  [2:0]  i_counter2 [`ysyx22040228_CACHE_DATA_W];
    wire [5:0]  i_count_addr;
    assign i_count_addr = inst_addr[8:3];
    integer i ;

    always @(posedge clk) begin
        if(inst_hit_ok && (i_tag_data1 == i_in_teg))
            i_counter1[i_count_addr] <= 3'b0;
        if(inst_hit_ok && (i_tag_data1 == i_in_teg))
            i_counter2[i_count_addr] <= 3'b0;
        if(inst_write_cache && inst_in_cache1)
            i_counter1[i_count_addr] <= 3'b0;
        if(inst_write_cache && inst_in_cache2)
            i_counter2[i_count_addr] <= 3'b0;
        if((~inst_ena) && (inst_ready)) begin
		    for(i = 0;i<64;i=i+1) begin
			   i_counter1[i][2:0] <= (i_counter1[i] == 3'd7) ? 3'd7 : i_counter1[i][2:0] + 1'b1;
               i_counter2[i][2:0] <= (i_counter2[i] == 3'd7) ? 3'd7 : i_counter2[i][2:0] + 1'b1;
		    end
        end 
	end

endmodule

