/************************************************************
Author:LiGuoqi
Name:d_cache1.v
Function:write data cache
************************************************************/
`define ysyx22040228_IDLE    6'b000001
`define ysyx22040228_CHOSE   6'b000010
`define ysyx22040228_HIT     6'b000100
`define ysyx22040228_MISS    6'b001000
`define ysyx22040228_WRITE   6'b010000
`define ysyx22040228_WBCK    6'b100000
`include "./vsrc/defines.v"
`include "./vsrc/defines_axi4.v"
`include "./vsrc/d_cache_data_ram.v"
`include "./vsrc/d_cache_tag_ram.v"

module d_cache1 (
    input         wire                                        clk                ,
    input         wire                                        rst                ,
    //-------------------------input  cache-------------------------------------//
    input         wire        [`ysyx22040228_DATAADDRBUS]     mem_addr_i         ,
    input         wire        [`ysyx22040228_REGBUS]          mem_data_i         ,
    input         wire        [7:0]                           mem_mask_i         ,
    input         wire                                        mem_data_read_ena  ,
    input         wire                                        mem_data_writ_ena  ,
    //------------------------out for cpu core----------------------------------//
    output        reg         [`ysyx22040228_AXI_REGBUS]      mem_data_out_cpu   ,
    output        reg                                         mem_data_finish    ,

    //----------------------------- merge sign out------------------------------//
    // input         wire        [`ysyx22040228_DCACHE_ADDR_W]   in_dcache_addr     ,
    // input         wire                                        in_dcache_ena      ,

    input         wire        [`ysyx22040228_DCACHE_DATA_W]   in_dcache_data     ,

    //----------------------------- merge sign in-------------------------------//    
    input         wire                                        in_dcache_ok       ,
    output        wire        [63:0]                          out_dcache_addr    ,
    output        wire        [`ysyx22040228_DCACHE_DATA_W]   out_dcache_data    ,
    output        wire                                        outr_dcache_ena    ,
    output        wire                                        outw_dcache_ena 
);
    //-----------------------------in out sign make ----------------------------//
    assign mem_data_out_cpu = (mem_data_read_ena && (state_load == `ysyx22040228_HIT))                       ? load_data_o        :
                              (mem_data_read_ena && ((state_load == `ysyx22040228_WRITE) && (in_dcache_ok))) ? data_load          :
                                                                                                            `ysyx22040228_ZEROWORD;
    assign mem_data_finish  = (mem_data_read_ena && (state_load == `ysyx22040228_HIT))                       ? load_finish_h      :
                              (mem_data_read_ena && ((state_load == `ysyx22040228_WRITE) && (in_dcache_ok))) ? finish_the_mem_l   :
                              (mem_data_writ_ena && (state_store == `ysyx22040228_HIT))                      ? store_finish       :
                              (mem_data_writ_ena && ((state_store == `ysyx22040228_WRITE) && (in_dcache_ok)))? finish_the_mem     :
                                                                                                              `ysyx22040228_ENABLE;
    assign out_dcache_data  = (mem_data_read_ena && (state_load == `ysyx22040228_WBCK))                      ? out_data_wb_l      :
                            //   (mem_data_read_ena && (state_load == `ysyx22040228_WRITE))                     ? out_data_w_l :
                              (mem_data_writ_ena && (state_store == `ysyx22040228_WBCK))                     ? out_data_wb        :
                                                                                                            `ysyx22040228_ZEROWORD;
    assign out_dcache_addr  = mem_addr_i;
    assign outr_dcache_ena  = (mem_data_read_ena && (state_load == `ysyx22040228_WRITE))                     ? outr_data_ena_w_l  : 
                              ((state_load == `ysyx22040228_WRITE) && (~in_dcache_ok))                       ? outr_data_ena_w    :
                                                                                                              `ysyx22040228_ENABLE;
    assign outw_dcache_ena  = (mem_data_read_ena && (state_load == `ysyx22040228_WBCK))                      ? outw_data_ena_l    :
                              (mem_data_writ_ena && (state_store == `ysyx22040228_WBCK))                     ? outr_data_ena      :
                                                                                                              `ysyx22040228_ENABLE;


    //-----------------------------about tag ram-------------------------------//
    assign tag_ena1 = (((state_store == `ysyx22040228_WRITE) && (in_dcache_ok)) && (w_incache_ena1))         ? `ysyx22040228_ABLE     :
                      (((state_load == `ysyx22040228_WRITE) && (in_dcache_ok)) && (load_in_cache1))          ? `ysyx22040228_ABLE     :
                                                                                                               `ysyx22040228_ENABLE   ;
    wire    [5:0]    addrtag1;
    wire    [55:0]   datatag1;
    wire             tag_ena1;
    wire    [54:0]   tag_data1;
    wire             tag_user1;

    assign addrtag1 = mem_addr_i[8:3];
    assign datatag1 = {1'b1,mem_addr_i[63:9]};

    d_cache_tag_ram u_tag0(
        .clk         (clk         ),
        .rst         (rst         ),
        .addr_i      (addrtag1    ),
        .data_i      (datatag1    ),
        .write_ena   (tag_ena1    ),
        .tag_data    (tag_data1   ),
        .tag_valid   (tag_user1   )
    );

    assign tag_ena1 = (((state_store == `ysyx22040228_WRITE) && (in_dcache_ok)) && (w_incache_ena2))         ? `ysyx22040228_ABLE     :
                      (((state_load == `ysyx22040228_WRITE) && (in_dcache_ok)) && (load_in_cache2))          ? `ysyx22040228_ABLE     :
                                                                                                               `ysyx22040228_ENABLE   ;
    wire    [5:0]    addrtag2;
    wire    [55:0]   datatag2;
    wire             tag_ena2;
    wire    [54:0]   tag_data2;
    wire             tag_user2;

    assign addrtag2 = mem_addr_i[8:3];
    assign datatag2 = {1'b1,mem_addr_i[63:9]};

    d_cache_tag_ram u_tag1(
        .clk         (clk         ),
        .rst         (rst         ),
        .addr_i      (addrtag2    ),
        .data_i      (datatag2    ),
        .write_ena   (tag_ena2    ),
        .tag_data    (tag_data2   ),
        .tag_valid   (tag_user2   )
    );

    //-------------------------------ram data---------------------------------//
    // assign  in_data1  = (state_store == `ysyx22040228_HIT)                                                              ? data_ram1_data :
    //                     (((state_store == `ysyx22040228_WRITE) && (in_dcache_ok) && (~write_incache)) || write_incache) ? w_incache_ena1 :
                       
    assign  data_ena1 = (state_store == `ysyx22040228_HIT)                                                             ? data_ram1_mask :
                        (((state_store == `ysyx22040228_WRITE) && (in_dcache_ok)) && w_incache_ena1)                   ? 8'b11111111    :
                        (write_incache && w_incache_ena1)                                                              ? w_incache_mask :
                                                                                                                                    8'b0;  
    assign in_data1   = (state_store == `ysyx22040228_HIT)                                                             ? data_ram1_data :
                        (((state_store == `ysyx22040228_WRITE) && (in_dcache_ok)) && w_incache_ena1)                   ? ram_iw_data    :
                        (write_incache && w_incache_ena1)                                                              ? ram_iw_data    :
                                                                                                                  `ysyx22040228_ZEROWORD;
    
    wire    [5:0]    addrdata1;
    wire    [63:0]   in_data1 ;
    wire    [7:0]    data_ena1 ;
    wire    [63:0]   out_data1 ;
    assign  addrdata1 = mem_data_i[8:3];
    d_cache_data_ram u_data0(
        .clk         (clk         ),
        .rst         (rst         ),
        .addr_i      (addrdata1   ),
        .data_i      (in_data1    ),
        .write_ena   (data_ena1   ),
        .data_o      (out_data1   )
    );

    assign  data_ena2 = (state_store == `ysyx22040228_HIT)                                                             ? data_ram2_mask :
                        (((state_store == `ysyx22040228_WRITE) && (in_dcache_ok)) && w_incache_ena2)                   ? 8'b11111111    :
                        (write_incache && w_incache_ena2)                                                              ? w_incache_mask :
                                                                                                                                    8'b0;
    assign in_data2   = (state_store == `ysyx22040228_HIT)                                                             ? data_ram2_data :
                        (((state_store == `ysyx22040228_WRITE) && (in_dcache_ok)) && w_incache_ena2)                   ? ram_iw_data    :
                        (write_incache && w_incache_ena2)                                                              ? ram_iw_data    :
                                                                                                                  `ysyx22040228_ZEROWORD;
    wire    [5:0]    addrdata2;
    wire    [63:0]   in_data2 ;
    wire    [7:0]    data_ena2 ;
    wire    [63:0]   out_data2 ;
    assign  addrdata2 = mem_data_i[8:3];
    d_cache_data_ram u_data1(
        .clk         (clk         ),
        .rst         (rst         ),
        .addr_i      (addrdata2   ),
        .data_i      (in_data2    ),
        .write_ena   (data_ena2   ),
        .data_o      (out_data2   )
    );
    //--------------------------------------bit code---------------------------//
    reg  [2:0]  counter1 [`ysyx22040228_CACHE_DATA_W];
    reg  [2:0]  counter2 [`ysyx22040228_CACHE_DATA_W];
    wire [5:0]  count_a;
    assign count_a = mem_addr_i[8:3];
    integer i ;

    always @(posedge clk) begin
        if((state_store == `ysyx22040228_HIT) && (tag_data1 == in_teg))
            counter1[count_a] = count_hit1       ;
        if((state_store == `ysyx22040228_HIT) && (tag_data2 == in_teg))
            counter2[count_a] = count_hit2       ; 
        if(write_incache && w_incache_ena1) 
            counter1[count_a] = count_write1     ;
        if(write_incache && w_incache_ena2) 
            counter2[count_a] = count_write2     ;
        if ((state_load == `ysyx22040228_HIT) && (tag_data1 == in_teg))
            counter1[count_a] = load_hit_count1  ;
        if((state_store == `ysyx22040228_HIT) && (tag_data2 == in_teg))
            counter2[count_a] = load_hit_count2  ;
        if(read_cache && load_in_cache1)
            counter1[count_a] = load_write_count1;
        if(read_cache && load_in_cache2)
            counter2[count_a] = load_write_count2;
        if(mem_data_read_ena && mem_data_writ_ena) begin
		    for(i = 0;i<64;i=i+1) begin
			   assign counter1[i][2:0] = (counter1[i] == 3'd7) ? 3'd7 : counter1[i][2:0] + 1'b1;
               assign counter2[i][2:0] = (counter2[i] == 3'd7) ? 3'd7 : counter2[i][2:0] + 1'b1;
		    end
        end 
	end
    //-----------------------------dirty state sign-----------------------------//
    wire  [5:0]  dirty_addr ;
    assign dirty_addr = mem_addr_i[8:3];
    assign dirty1[dirty_addr] = (w_incache_ena1 && dirty_make)                                ? `ysyx22040228_ABLE :
                                ((state_store == `ysyx22040228_HIT) && (tag_data1 == in_teg)) ? dirty_hit          :
                                                                                               `ysyx22040228_ENABLE;
    assign dirty2[dirty_addr] = (w_incache_ena2 && dirty_make)                                ? `ysyx22040228_ABLE :
                                ((state_store == `ysyx22040228_HIT) && (tag_data2 == in_teg)) ? dirty_hit          :
                                                                                               `ysyx22040228_ENABLE;
    reg    dirty1 [`ysyx22040228_CACHE_DATA_W];
    reg    dirty2 [`ysyx22040228_CACHE_DATA_W];


    wire  [54:0]  in_teg                     ;
    assign in_teg = mem_addr_i[63:9]         ;
    wire  [5:0] dirty_count_addr             ;
    assign dirty_count_addr = mem_addr_i[8:3];

    //-------------------------------state_store _chose---------------------------------//
    reg [5:0] state_store    ;
    reg [5:0] state_store_nxt;
    reg       store_ok       ;
    reg       write_ok       ;
    reg       wbck_ok        ;
    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            state_store = `ysyx22040228_IDLE;
        end 
        else begin
            state_store = state_store_nxt;
            case (state_store)
               `ysyx22040228_IDLE : begin
                   if(mem_data_writ_ena)
                        state_store_nxt = `ysyx22040228_CHOSE;
                   state_store_nxt = `ysyx22040228_IDLE;  
               end 
               `ysyx22040228_CHOSE : begin
                   if(((tag_data1 == in_teg) && (tag_user1 == `ysyx22040228_ABLE)) || ((tag_data2 == in_teg) && (tag_user2 == `ysyx22040228_ABLE))) 
                       state_store_nxt = `ysyx22040228_HIT;
                   state_store_nxt = `ysyx22040228_MISS;  
               end 
               `ysyx22040228_HIT : begin
                   if(store_ok)
                        state_store_nxt = `ysyx22040228_IDLE;
                   state_store_nxt = `ysyx22040228_HIT;
               end 
               `ysyx22040228_MISS : begin
                   if(((dirty1[dirty_count_addr] == `ysyx22040228_ABLE) && (counter1[dirty_count_addr] >= counter2[dirty_count_addr])) || ((dirty2[dirty_count_addr] == `ysyx22040228_ABLE) && (counter1[dirty_count_addr] < counter2[dirty_count_addr])) && ((tag_user1 == `ysyx22040228_ABLE) && (tag_user2 == `ysyx22040228_ABLE)))
                        state_store_nxt = `ysyx22040228_WBCK;
                    state_store_nxt = `ysyx22040228_WRITE;
               end 
               `ysyx22040228_WRITE : begin
                   if(write_ok)
                        state_store_nxt = `ysyx22040228_IDLE;
                  state_store_nxt = `ysyx22040228_WRITE;  
               end 
               `ysyx22040228_WBCK : begin
                   if(wbck_ok) 
                        state_store_nxt = `ysyx22040228_WRITE;
                   state_store_nxt = `ysyx22040228_WBCK;
               end
                default: ;
            endcase
        end 
    end


    //-------------write cache from AXI and make state as hit-------------------------//
    reg                          finish_the_mem ;
    reg                          outr_data_ena_w;
    reg                          write_incache  ;
    reg  [63:0]                  ram_iw_data    ;
    //reg  [55:0]                  tag_iw_data    ;
    reg                          w_incache_ena1 ;
    reg                          w_incache_ena2 ;
    reg  [7:0 ]                  w_incache_mask ;
    reg                          dirty_make     ;
    reg  [2:0]                   count_write1   ;
    reg  [2:0]                   count_write2   ;
    reg  [5:0]                   count_addr     ;
    assign count_addr = mem_addr_i[8:3]         ;
    always @(posedge clk or negedge rst) begin
        if((state_store == `ysyx22040228_WRITE) && (~in_dcache_ok))begin
                outr_data_ena_w   = `ysyx22040228_ABLE;
        end 
        else if((state_store == `ysyx22040228_WRITE) && (in_dcache_ok))begin
              outr_data_ena_w = `ysyx22040228_ENABLE;
              if((tag_user1 == `ysyx22040228_ENABLE) || (dirty1[count_addr] == `ysyx22040228_ABLE) && (counter1[count_addr] >= counter2[count_addr]))begin
                count_write1          <= 3'b0;
                w_incache_ena1        = `ysyx22040228_ABLE;
                //tag_iw_data           = {1'b1,addr};
                ram_iw_data           = in_dcache_data;
                write_incache         <= `ysyx22040228_ABLE;
              end
              else if(tag_user2 == `ysyx22040228_ENABLE || ((dirty2[count_addr] == `ysyx22040228_ABLE) && (counter1[count_addr] < counter2[count_addr]))) begin
                count_write2          <= 3'b0;
                w_incache_ena2        = `ysyx22040228_ABLE;
                //tag_iw_data           = {1'b1,addr};
                ram_iw_data           = in_dcache_data;
                write_incache         <= `ysyx22040228_ABLE;
              end 
        end 
        else if(write_incache) begin
                write_incache  <= `ysyx22040228_ENABLE;
                w_incache_mask = mem_mask_i        ;
                ram_iw_data    = mem_data_i        ;
                write_ok       = `ysyx22040228_ABLE;
                dirty_make     = `ysyx22040228_ABLE;
                finish_the_mem = `ysyx22040228_ABLE;
        end
        else if(write_ok && (state_store_nxt == `ysyx22040228_IDLE)) begin
                finish_the_mem = `ysyx22040228_ENABLE;
                write_ok       = `ysyx22040228_ENABLE;
                w_incache_ena1 = `ysyx22040228_ENABLE;
                w_incache_ena2 = `ysyx22040228_ENABLE;
                //tag_iw_data    = 56'b0;
                ram_iw_data    = `ysyx22040228_ZEROWORD;
                dirty_make     = `ysyx22040228_ENABLE;
        end 
    end

    reg [63:0] out_data_wb;
    reg        outr_data_ena;
    reg [63:0] out_addr_wb; 
    assign wbck_ok = in_dcache_ok;
    always @(posedge clk or negedge rst) begin
        if(state_store == `ysyx22040228_WBCK)begin
            if((dirty1[count_addr] == `ysyx22040228_ABLE) && (counter1[count_addr] >= counter2[count_addr])) begin
                out_data_wb = out_data1;
                outr_data_ena = `ysyx22040228_ABLE;
                out_addr_wb = mem_addr_i;
            end 
            if((dirty2[count_addr] == `ysyx22040228_ABLE) && (counter1[count_addr] < counter2[count_addr])) begin
                out_data_wb = out_data2;
                outr_data_ena = `ysyx22040228_ABLE;
                out_addr_wb = mem_addr_i;
            end 
        end 
        else if(wbck_ok) begin
            out_data_wb = `ysyx22040228_ZEROWORD;
            outr_data_ena = `ysyx22040228_ENABLE;
            out_addr_wb = `ysyx22040228_ZEROWORD;
        end 
    end
    //---------------------store hit doing----------------------------//
    reg   [7:0]  data_ram1_mask;
    reg   [7:0]  data_ram2_mask;
    reg   [63:0] data_ram1_data;
    reg   [63:0] data_ram2_data;
    reg          store_finish  ;
    reg          dirty_hit     ;
    reg   [2:0]  count_hit1    ;
    reg   [2:0]  count_hit2    ;
    always @(posedge clk or negedge rst) begin
        if(state_store == `ysyx22040228_HIT)begin
            dirty_hit  =  `ysyx22040228_ABLE;
              if(tag_data1 == in_teg) begin
                  data_ram1_mask             = mem_mask_i        ;
                  data_ram1_data             = mem_data_i        ;
                  count_hit1                 = 3'b0              ;
                  store_finish               = `ysyx22040228_ABLE;
                  store_ok                   = `ysyx22040228_ABLE;
              end 
              if(tag_data2 == in_teg) begin
                  data_ram2_mask             = mem_mask_i        ;
                  data_ram2_data             = mem_data_i        ;
                  count_hit2                 = 3'b0              ;
                  store_finish               = `ysyx22040228_ABLE;
                  store_ok                   = `ysyx22040228_ABLE;
              end
        end 
        else if(store_ok == `ysyx22040228_ABLE && (state_store ==`ysyx22040228_IDLE)) begin  
              store_ok       = `ysyx22040228_ENABLE;        
              data_ram1_mask = 8'b0;
              data_ram1_data = `ysyx22040228_ZEROWORD;
              data_ram2_mask = 8'b0;
              data_ram2_data = `ysyx22040228_ZEROWORD;
              store_finish   = `ysyx22040228_ENABLE;
              dirty_hit      = `ysyx22040228_ENABLE;
        end 
    end

    //--------------------------------load make----------------------------------//
    reg [5:0] state_load    ;
    reg [5:0] state_load_nxt;
    reg       load_ok       ;

    reg       load_bc_ok    ;
    reg       write_l_ok    ;
    reg [5:0] count_addr2   ;
    assign count_addr2 = mem_addr_i[8:3];
    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            state_load = `ysyx22040228_IDLE;
        end 
        else begin
            case (state_load)
               `ysyx22040228_IDLE : begin
                   if(mem_data_read_ena)
                        state_load_nxt = `ysyx22040228_CHOSE;
                   state_load_nxt = `ysyx22040228_IDLE;  
               end 
               `ysyx22040228_CHOSE : begin
                   if(((tag_data1 == in_teg) && (tag_user1 == `ysyx22040228_ABLE)) || (tag_data2 == in_teg) && (tag_user2 == `ysyx22040228_ABLE)) 
                       state_load_nxt = `ysyx22040228_HIT;
                   state_load_nxt = `ysyx22040228_MISS;  
               end 
               `ysyx22040228_HIT : begin
                   if(load_ok)
                        state_load_nxt = `ysyx22040228_IDLE;
                    state_load_nxt = `ysyx22040228_HIT;
               end 
               `ysyx22040228_MISS : begin
                   if(((dirty1[count_addr2] == `ysyx22040228_ABLE) && (counter1[count_addr2] >= counter2[count_addr2])) || ((dirty2[count_addr2] == `ysyx22040228_ABLE) && (counter1[count_addr2] < counter2[count_addr2])) && ((tag_user1 == `ysyx22040228_ABLE) && (tag_user2 == `ysyx22040228_ABLE)))
                        state_load_nxt = `ysyx22040228_WBCK;
                   state_load_nxt = `ysyx22040228_WRITE;
               end 
               `ysyx22040228_WRITE : begin
                   if(write_l_ok)
                        state_load_nxt = `ysyx22040228_WRITE;
                  state_load_nxt = `ysyx22040228_IDLE;  
               end 
               `ysyx22040228_WBCK : begin
                   if(load_bc_ok) 
                        state_load_nxt = `ysyx22040228_WRITE;
                   state_load_nxt = `ysyx22040228_WBCK;
               end
                default: ;
            endcase
        end 
    end
    assign state_load = state_load_nxt;


    reg  [`ysyx22040228_REGBUS]  load_data_o    ;
    reg                          load_finish_h  ;  
    reg  [2:0]                   load_hit_count1;
    reg  [2:0]                   load_hit_count2;

    always @(posedge clk or negedge rst) begin
        if(state_load == `ysyx22040228_HIT)begin
              if(tag_data1 == in_teg) begin
                  load_data_o           = out_data1         ;
                  load_hit_count1       = 3'b0              ;
                  load_finish_h         = `ysyx22040228_ABLE;
                  load_ok               = `ysyx22040228_ABLE;
              end 
              if(tag_data2 == in_teg) begin
                  load_data_o           = out_data2         ;
                  load_hit_count2       = 3'b0              ;  
                  load_finish_h         = `ysyx22040228_ABLE;
                  load_ok               = `ysyx22040228_ABLE;
              end
        end 
        else begin  
              load_ok                   = `ysyx22040228_ENABLE  ;  
              if(state_load ==`ysyx22040228_IDLE) begin
              load_data_o               = `ysyx22040228_ZEROWORD;
              load_finish_h             = `ysyx22040228_ENABLE  ;
              end 
        end 
    end

    reg [63:0] out_data_wb_l;
    reg        outw_data_ena_l;
    //reg [63:0] out_addr_wb_l; 
    always @(posedge clk or negedge rst) begin
        if(state_load == `ysyx22040228_WBCK)begin
            if((dirty1[count_addr2] == `ysyx22040228_ABLE) && (counter1[count_addr2] >= counter2[count_addr2])) begin
                out_data_wb_l     = out_data1;
                outw_data_ena_l   = `ysyx22040228_ABLE;
                //out_addr_wb_l     = mem_addr_i;
            end 
            if((dirty2[count_addr2] == `ysyx22040228_ABLE) && (counter1[count_addr2] < counter2[count_addr2])) begin
                out_data_wb_l     = out_data2;
                outw_data_ena_l   = `ysyx22040228_ABLE;
                //out_addr_wb_l     = mem_addr_i;
            end 
        end 
        else if(load_bc_ok) begin
            out_data_wb_l         = `ysyx22040228_ZEROWORD;
            outw_data_ena_l       = `ysyx22040228_ENABLE;
            //out_addr_wb_l         = `ysyx22040228_ZEROWORD;
        end 
    end
    
    reg                          finish_the_mem_l ;
    reg  [`ysyx22040228_REGBUS]  data_load;
    reg                          outr_data_ena_w_l;

    reg  [2:0]                   load_write_count1;
    reg  [2:0]                   load_write_count2;

    reg                          load_in_cache1   ;
    reg                          load_in_cache2   ;
    reg  [63:0]                  ram_iw_data_l    ;
    reg                          read_cache       ;
    always @(posedge clk or negedge rst) begin
        if((state_load == `ysyx22040228_WRITE) && (~in_dcache_ok)) begin
                outr_data_ena_w_l = `ysyx22040228_ABLE  ;
        end 

        else if((state_load == `ysyx22040228_WRITE) && (in_dcache_ok))begin
                outr_data_ena_w_l = `ysyx22040228_ENABLE;
                if((tag_user1 == `ysyx22040228_ENABLE) || (dirty1[count_addr] == `ysyx22040228_ABLE) && (counter1[count_addr] >= counter2[count_addr]))begin
                load_write_count1     <= 3'b0;
                load_in_cache1        = `ysyx22040228_ABLE;
                //tag_iw_data         = {1'b1,addr};
                ram_iw_data_l         = in_dcache_data;
                read_cache           <= `ysyx22040228_ABLE;
              end
              else if(tag_user2 == `ysyx22040228_ENABLE || ((dirty2[count_addr] == `ysyx22040228_ABLE) && (counter1[count_addr] < counter2[count_addr]))) begin
                load_write_count2     <= 3'b0;
                load_in_cache2        = `ysyx22040228_ABLE;
                //tag_iw_data         = {1'b1,addr};
                ram_iw_data_l         = in_dcache_data;
                read_cache           <= `ysyx22040228_ABLE;
              end 
        end 
        else if(read_cache) begin
            finish_the_mem_l = `ysyx22040228_ABLE;
            write_l_ok       = `ysyx22040228_ABLE;
            if(load_in_cache1)
                data_load = out_data1;
            if(load_in_cache2)
                data_load = out_data2;
        end 

        else if(write_l_ok) begin
                write_l_ok    = `ysyx22040228_ENABLE;
                if(state_load ==`ysyx22040228_IDLE) begin
                    data_load        = `ysyx22040228_ZEROWORD;
                    finish_the_mem_l = `ysyx22040228_ENABLE  ;
                end 
        end 
    end

endmodule

