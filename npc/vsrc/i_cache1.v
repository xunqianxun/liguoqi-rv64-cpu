/************************************************************
Author:LiGuoqi
Name:d_cache1.v
Function:write data cache
************************************************************/
`include "./vsrc/defines.v"
`include "./vsrc/defines_axi4.v"
`include "./vsrc/d_cache_data_ram.v"
`include "./vsrc/d_cache_tag_ram.v"
module i_cache1 (
    input       wire                                         clk             ,
    input       wire                                         rst             ,
    input       wire          [63:0]                         inst_addr       ,
    input       wire                                         inst_ena        ,
    output      wire          [31:0]                         inst_data       ,
    output      wire                                         inst_valid      ,

    output      wire                                         cache_read_ena  ,
    output      wire          [31:0]                         cache_addr      ,
    input       wire          [63:0]                         cache_or_data   ,
    input       wire                                         cache_in_ok                                     
);
    assign cache_addr      = inst_addr         ;  
    assign cache_read_ena  = ord_data_ena      ;
    assign inst_data       = (state_inst == `ysyx22040228_HIT) ? inst_data_o :
                             inst_write_cache                  ? data_inst   :
                                                       `ysyx22040228_ZEROWORD;
    assign inst_valid      = (state_inst == `ysyx22040228_HIT) ? inst_valid_o:
                             inst_write_cache                  ? inst_valid  :
                                                         `ysyx22040228_ENABLE;                        

    wire    [5:0]    i_cache_addr1;
    wire    [55:0]   i_cache_tag1 ;
    wire             i_tag_ena1   ;
    wire    [55:0]   i_tag_data1  ;
    wire             i_tag_user1  ;
    assign i_tag_ena1      = (((state_inst == `ysyx22040228_WRITE) && (cache_in_ok)) && (inst_in_cache1   =  `ysyx22040228_ABLE)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE; 
    assign i_cache_addr1   = inst_addr[8:3]        ;
    assign i_cache_tag1    = {1'b1,inst_addr[63:9]};

    d_cache_tag_ram u_tag01(
        .clk         (clk          ),
        .rst         (rst          ),
        .addr_i      (i_cache_addr1),
        .data_i      (i_cache_tag1 ),
        .write_ena   (i_tag_ena1   ),
        .tag_data    (i_tag_data1  ),
        .tag_valid   (i_tag_user1  )
    );

    wire    [5:0]    i_cache_addr2;
    wire    [55:0]   i_cache_tag2 ;
    wire             i_tag_ena2   ;
    wire    [55:0]   i_tag_data2  ;
    wire             i_tag_user2  ;
    assign i_tag_ena1      = (((state_inst == `ysyx22040228_WRITE) && (cache_in_ok)) && (inst_in_cache2   =  `ysyx22040228_ABLE)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE; 
    assign i_cache_addr2   = inst_addr[8:3];
    assign i_cache_tag2    = {1'b1,inst_addr[63:9]};

    d_cache_tag_ram u_tag02(
        .clk         (clk          ),
        .rst         (rst          ),
        .addr_i      (i_cache_addr2),
        .data_i      (i_cache_tag2 ),
        .write_ena   (i_tag_ena2   ),
        .tag_data    (i_tag_data2  ),
        .tag_valid   (i_tag_user2  )
    );

    //-------------------------------ram data---------------------------------//
    
    wire    [5:0]    i_addrdata1;
    wire    [63:0]   i_in_data1 ;
    wire    [7:0]    i_data_ena1 ;
    wire    [63:0]   i_out_data1 ;
    assign  i_addrdata1 = inst_addr[8:5];
    assign  i_in_data1  = (((state_inst == `ysyx22040228_WRITE) && (cache_in_ok)) && (inst_in_cache1   =  `ysyx22040228_ABLE)) ? cache_or_data        : `ysyx22040228_ZEROWORD; 
    assign  i_data_ena1 = (((state_inst == `ysyx22040228_WRITE) && (cache_in_ok)) && (inst_in_cache1   =  `ysyx22040228_ABLE)) ? `ysyx22040228_ENABLE : `ysyx22040228_ENABLE  ;
    d_cache_data_ram u_data01(
        .clk         (clk           ),
        .rst         (rst           ),
        .addr_i      (i_addrdata1   ),
        .data_i      (i_in_data1    ),
        .write_ena   (i_data_ena1   ),
        .data_o      (i_out_data1   )
    );

    wire    [5:0]    i_addrdata2;
    wire    [63:0]   i_in_data2 ;
    wire    [7:0]    i_data_ena2 ;
    wire    [63:0]   i_out_data2 ;
    assign  i_addrdata2 = inst_addr[8:5];
    assign  i_in_data1  = (((state_inst == `ysyx22040228_WRITE) && (cache_in_ok)) && (inst_in_cache2   =  `ysyx22040228_ABLE)) ? cache_or_data        : `ysyx22040228_ZEROWORD; 
    assign  i_data_ena1 = (((state_inst == `ysyx22040228_WRITE) && (cache_in_ok)) && (inst_in_cache2   =  `ysyx22040228_ABLE)) ? `ysyx22040228_ENABLE : `ysyx22040228_ENABLE  ;
    d_cache_data_ram u_data02(
        .clk         (clk           ),
        .rst         (rst           ),
        .addr_i      (i_addrdata2   ),
        .data_i      (i_in_data2    ),
        .write_ena   (i_data_ena2   ),
        .data_o      (i_out_data2   )
    );


    //--------------------------------------bit code---------------------------//
    reg  [2:0]  i_counter1 [`ysyx22040228_CACHE_DATA_W];
    reg  [2:0]  i_counter2 [`ysyx22040228_CACHE_DATA_W];
    wire   i_count_addr;
    assign i_count_addr = inst_addr[8:3];
    integer i ;

    always @(posedge clk) begin
        if(inst_in_cache1 && read_cache)
            i_counter1[i_count_addr] = 3'b0;
        if(inst_in_cache2 && read_cache)
            i_counter2[i_count_addr] = 3'b0;
        if(inst_ena) begin
		    for(i = 0;i<64;i=i+1) begin
			   assign i_counter1[i][2:0] = (i_counter1[i] == 3'd7) ? 3'd7 : i_counter1[i][2:0] + 1'b1;
               assign i_counter2[i][2:0] = (i_counter2[i] == 3'd7) ? 3'd7 : i_counter2[i][2:0] + 1'b1;
		    end
        end 
	end

    `define ysyx22040228_IDLE    6'b000001
    `define ysyx22040228_CHOSE   6'b000010
    `define ysyx22040228_HIT     6'b000100
    `define ysyx22040228_MISS    6'b001000
    `define ysyx22040228_WRITE   6'b010000
    `define ysyx22040228_WBCK    6'b100000

    wire  [55:0]  i_in_teg                     ;
    assign i_in_teg = inst_addr[63:9]          ;

    reg [5:0] state_inst    ;
    reg [5:0] state_inst_nxt;
    reg       inst_hit_ok   ;

    //reg       load_bc_ok;
    reg       write_i_ok    ;

    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            state_inst = `ysyx22040228_IDLE;
        end 
        else begin
            case (state_inst)
               `ysyx22040228_IDLE : begin
                   if(inst_ena)
                        state_inst_nxt = `ysyx22040228_CHOSE;
                   state_inst_nxt = `ysyx22040228_IDLE;  
               end 
               `ysyx22040228_CHOSE : begin
                   if(((i_tag_data1 == i_in_teg) && (i_tag_user1 == `ysyx22040228_ABLE)) || (i_tag_data2 == i_in_teg) && (i_tag_user2 == `ysyx22040228_ABLE)) 
                       state_inst_nxt = `ysyx22040228_HIT;
                   state_inst_nxt = `ysyx22040228_WRITE;  
               end 
               `ysyx22040228_HIT : begin
                   if(inst_hit_ok)
                        state_inst_nxt = `ysyx22040228_IDLE;
                    state_inst_nxt = `ysyx22040228_HIT;
               end 
            //    `ysyx22040228_MISS : begin
            //        if(((dirty1[count_addr2] == `ysyx22040228_ABLE) && (counter1[count_addr2] >= counter2[count_addr2])) || ((dirty2[count_addr2] == `ysyx22040228_ABLE) && (counter1[count_addr2] < counter2[count_addr2])) && ((tag_user1 == `ysyx22040228_ABLE) && (tag_user2 == `ysyx22040228_ABLE)))
            //             state_inst_nxt = `ysyx22040228_WBCK;
            //        state_inst_nxt = `ysyx22040228_WRITE;
            //   end 
               `ysyx22040228_WRITE : begin
                   if(write_i_ok)
                        state_inst_nxt = `ysyx22040228_IDLE;
                  state_inst_nxt = `ysyx22040228_WRITE;  
               end 
            //    `ysyx22040228_WBCK : begin
            //        if(load_bc_ok) 
            //             state_inst_nxt = `ysyx22040228_WRITE;
            //        state_inst_nxt = `ysyx22040228_WBCK;
            //    end
                default: 
            endcase
        end 
    end
    assign state_inst = state_inst_nxt;


    reg  [`ysyx22040228_REGBUS]  inst_data_o    ;
    reg                          inst_valid_o   ;  
    reg  [2:0]                   inst_hit_count1;
    reg  [2:0]                   inst_hit_count2;

    always @(posedge clk or negedge rst) begin
        if(state_inst == `ysyx22040228_HIT)begin
              if(i_tag_data1 == i_in_teg) begin
                  inst_data_o           = i_out_data1       ;
                  inst_hit_count1       = 3'b0              ;
                  inst_valid_o          = `ysyx22040228_ABLE;
                  inst_hit_ok           = `ysyx22040228_ABLE;
              end 
              if(i_tag_data2 == i_in_teg) begin
                  inst_data_o           = i_out_data2       ;
                  inst_hit_count2       = 3'b0              ;  
                  inst_valid_o          = `ysyx22040228_ABLE;
                  inst_hit_ok           = `ysyx22040228_ABLE;
              end
        end 
        else begin  
              inst_hit_ok               = `ysyx22040228_ENABLE  ;  
              if(state_inst ==`ysyx22040228_IDLE) begin
              inst_data_o               = `ysyx22040228_ZEROWORD;
              inst_valid_o              = `ysyx22040228_ENABLE  ;
              end 
        end 
    end

    // reg [63:0] out_data_wb_l;
    // reg        outw_data_ena_l;
    // //reg [63:0] out_addr_wb_l; 
    // always @(posedge clk or negedge rst) begin
    //     if(state_load == `ysyx22040228_WBCK)begin
    //         if((dirty1[count_addr2] == `ysyx22040228_ABLE) && (counter1[count_addr2] >= counter2[count_addr2])) begin
    //             out_data_wb_l     = out_data1;
    //             outw_data_ena_l   = `ysyx22040228_ABLE;
    //             //out_addr_wb_l     = mem_addr_i;
    //         end 
    //         if((dirty2[count_addr2] == `ysyx22040228_ABLE) && (counter1[count_addr2] < counter2[count_addr2])) begin
    //             out_data_wb_l     = out_data2;
    //             outw_data_ena_l   = `ysyx22040228_ABLE;
    //             //out_addr_wb_l     = mem_addr_i;
    //         end 
    //     end 
    //     else if(load_bc_ok) begin
    //         out_data_wb_l         = `ysyx22040228_ZEROWORD;
    //         outw_data_ena_l       = `ysyx22040228_ENABLE;
    //         //out_addr_wb_l         = `ysyx22040228_ZEROWORD;
    //     end 
    //end
    
    reg                          finish_the_mem_l ;
    reg  [`ysyx22040228_REGBUS]  data_inst        ;
    reg                          ord_data_ena     ;

    //reg  [2:0]                   inst_write_count ;


    reg                          inst_in_cache1   ;
    reg                          inst_in_cache2   ;
    reg  [63:0]                  ram_inst_data    ;
    //reg                          inst_write_cache ;
    always @(posedge clk or negedge ) begin
        if((state_inst == `ysyx22040228_WRITE) && (~cache_in_ok)) begin
                ord_data_ena = `ysyx22040228_ABLE  ;
        end 

        else if((state_inst == `ysyx22040228_WRITE) && (cache_in_ok))begin
                ord_data_ena     =  `ysyx22040228_ENABLE;
                //ram_inst_data    =  cache_or_data       ;
                //inst_write_count <= 3'b0                ;
                inst_write_cache =  `ysyx22040228_ABLE  ;
                if((i_tag_user1 == `ysyx22040228_ENABLE) || (counter1[i_count_addr] >= counter2[i_count_addr])
                    inst_in_cache1   =  `ysyx22040228_ABLE;
                else if((i_tag_user2 == `ysyx22040228_ENABLE) || (counter1[i_count_addr] < counter2[i_count_addr])
                    inst_in_cache2   =  `ysyx22040228_ABLE;
        end 
        else if(inst_write_cache) begin
            inst_valid       = `ysyx22040228_ABLE  ;
            write_i_ok       = `ysyx22040228_ABLE  ;
            inst_write_cache = `ysyx22040228_ENABLE;
            if(inst_in_cache1)
                data_inst = i_out_data1;
            if(inst_in_cache2)
                data_inst = i_out_data2;
        end 

        else if(write_i_ok) begin
                write_i_ok    = `ysyx22040228_ENABLE;
                if(state_inst ==`ysyx22040228_IDLE) begin
                    data_inst        = `ysyx22040228_ZEROWORD;
                    inst_valid       = `ysyx22040228_ENABLE  ;
                end 
        end 
    end

endmodule

