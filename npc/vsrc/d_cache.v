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
`include "./vsrc/defines.v"
`include "./vsrc/defines_axi4.v"
`include "./vsrc/d_cache_data_ram.v"
`include "./vsrc/d_cache_tag_ram.v"

module d_cache (
    input         wire                                        clk                ,
    input         wire                                        rst                ,
    //-------------------------input  cache-------------------------------------//
    input         wire        [`ysyx22040228_DATAADDRBUS]     mem_addr_i         ,
    input         wire        [`ysyx22040228_REGBUS]          mem_data_i         ,
    input         wire        [7:0]                           mem_strb_i         ,
    input         wire                                        mem_read_valid     ,
    input         wire                                        mem_write_valid    ,
    output        reg         [`ysyx22040228_AXI_REGBUS]      mem_data_out       ,
    output        reg                                         mem_data_ready     ,

    input         wire        [`ysyx22040228_DCACHE_DATA_W]   in_dcache_data     ,
    input         wire                                        in_dcache_ready    ,
    output        wire                                        out_dcache_resp    ,
    output        wire        [63:0]                          out_dcache_addr    ,
    output        wire        [`ysyx22040228_DCACHE_DATA_W]   out_dcache_data    ,
    //type[0]---->  dirty
    //type[1]---->  missr
    //type[2]---->  dirtyw
    //type[3]---->  missw
    output        wire        [3:0]                           out_dcache_type        
);
    wire   dcache_read_shankhand   ;
    wire   dcache_write_shankhand  ;
    wire   dcache_read_ready ;
    wire   dcache_write_ready;
    assign dcache_read_shankhand  = mem_read_valid && dcache_read_ready  ;
    assign dcache_write_shankhand = mem_write_valid && dcache_write_ready;
    assign dcache_read_ready      = (state_dread == `ysyx22040228_IDLE)  ;
    assign dcache_write_ready     = (state_dwrite == `ysyx22040228_IDLE) ;

    wire [54:0 ] dcache_tag    =   mem_addr_i[63:9 ];
    wire [ 5:0 ] dcache_index  =   mem_addr_i[ 8:3 ];
    //wire [ 2:0 ] dcache_offset =   mem_addr_i[ 2:0 ];

    reg  [5:0]  state_dread     ;
    reg  [5:0]  state_dread_nxt ;

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            state_dread <= `ysyx22040228_IDLE;
        end 
        else begin
            state_dread <= state_dread_nxt    ;
        end 
    end

    always @(*) begin 
            case (state_dread)
               `ysyx22040228_IDLE : begin
                   if(dcache_read_shankhand)
                        state_dread_nxt = `ysyx22040228_READ;
                   else 
                        state_dread_nxt = `ysyx22040228_IDLE;  
               end 
               `ysyx22040228_READ  : begin
                   if((read_ok) && (((tag_data1 == dcache_tag) && (tag_user1 == `ysyx22040228_ABLE)) || ((tag_data2 == dcache_tag) && (tag_user2 == `ysyx22040228_ABLE))))
                        state_dread_nxt = `ysyx22040228_HIT  ;
                   else if((read_ok) && (((dirty1[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] >= counter2[dcache_index])) || ((dirty2[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] < counter2[dcache_index]))))
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
               end 
                default: begin
                  state_dread_nxt       =  `ysyx22040228_IDLE ;
                end 
            endcase 
    end 

    reg          read_ok    ;
    always @(*) begin
        if(state_dread == `ysyx22040228_READ) begin
            read_ok = `ysyx22040228_ABLE  ;
        end 
        else begin
            read_ok = `ysyx22040228_ENABLE ;
        end 
    end

    reg         mem_hit_ok ;
    reg         hit_data_ready;
    always @(*) begin
        if(state_dread == `ysyx22040228_HIT)
            if((tag_data1 == dcache_tag) && (tag_user1 == `ysyx22040228_ABLE))begin
                mem_hit_ok     = `ysyx22040228_ABLE  ;
                mem_data_out   = out_data1           ;
                hit_data_ready = `ysyx22040228_ABLE  ;
            end
            else if((tag_data2 == dcache_tag) && (tag_user2 == `ysyx22040228_ABLE))begin
                mem_hit_ok     = `ysyx22040228_ABLE  ;
                mem_data_out   = out_data2           ;
                hit_data_ready = `ysyx22040228_ABLE  ;
            end
            else begin
                mem_data_out   = 63'b0               ;
                hit_data_ready = `ysyx22040228_ENABLE;
            end  
        else   
            mem_hit_ok     = `ysyx22040228_ENABLE    ; 
            mem_data_out   = 63'b0                   ;
            hit_data_ready = `ysyx22040228_ENABLE    ; 
    end 

    reg        dirty_ok  ;
    reg [63:0] dirty_out_addr ;
    reg [63:0] dirty_out_data ;
    reg [3:0]  dirty_out_type ;
    always @(*) begin
        if(state_dread == `ysyx22040228_DIRTY) begin
            if((dirty1[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] >= counter2[dcache_index])) begin
                dirty_out_addr = mem_addr_i ;
                dirty_out_data = out_data1  ;
                dirty_out_type = 4'b0001    ;
            end 
            else if((dirty2[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] < counter2[dcache_index])) begin
                dirty_out_addr = mem_addr_i ;
                dirty_out_data = out_data2  ;
                dirty_out_type  = 4'b0001   ;
            end
            else begin
                dirty_out_addr = `ysyx22040228_ZEROWORD  ;
                dirty_out_data = `ysyx22040228_ZEROWORD  ;
                dirty_out_type  = 4'b0000                ;
            end  
        end 
        else if((in_dcache_ready) && (state_dread == `ysyx22040228_DIRTY)) begin
            dirty_out_addr = `ysyx22040228_ZEROWORD  ;
            dirty_out_data = `ysyx22040228_ZEROWORD  ;
            dirty_out_type  = 4'b0000                ;
            dirty_ok     = `ysyx22040228_ABLE        ;
        end
        else begin
            dirty_ok   = `ysyx22040228_ENABLE;
        end  
    end

    reg          missr_i_ok     ;
    reg  [3: 0]  missr_out_type ;
    reg  [63:0]  missr_out_addr ;
    reg  [7: 0]  missr_data_ena1;
    reg          missr_tag_ena1 ;
    reg  [7: 0]  missr_data_ena2;
    reg          missr_tag_ena2 ;
    reg          missr_out_resp ;
    always @(*) begin
        if(state_dread == `ysyx22040228_MISSR) begin
            missr_out_type = 4'b0010    ;
            missr_out_addr = mem_addr_i ;
        end
        else if((in_dcache_ready) && (state_dread == `ysyx22040228_MISSR)) begin
            missr_out_type = 4'b0000                ;
            missr_out_addr = `ysyx22040228_ZEROWORD ;
            if((counter1[dcache_index] >= counter2[dcache_index]) || tag_user1 == `ysyx22040228_ENABLE) begin
                missr_data_ena1 = 8'b11111111       ;
                missr_tag_ena1  = `ysyx22040228_ABLE;
                missr_out_resp  = 1'b1              ;
                missr_i_ok      = `ysyx22040228_ABLE;
            end 
            if((counter1[dcache_index] < counter2[dcache_index]) || tag_user2 == `ysyx22040228_ENABLE) begin
                missr_data_ena2 = 8'b11111111       ;
                missr_tag_ena2  = `ysyx22040228_ABLE;
                missr_out_resp  = 1'b1              ;
                missr_i_ok      = `ysyx22040228_ABLE;
            end
        end 
        else begin
            missr_data_ena1  = 8'b00000000         ;
            missr_tag_ena1   = `ysyx22040228_ENABLE;
            missr_data_ena2  = 8'b00000000         ;
            missr_tag_ena2   = `ysyx22040228_ENABLE;
            missr_out_resp   = 1'b0                ;
            missr_i_ok       = `ysyx22040228_ENABLE;
        end 
    end

    reg  [5:0]  state_dwrite     ;
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
            case (state_dwrite)
               `ysyx22040228_IDLE : begin
                   if(dcache_write_shankhand)
                        state_dwrite_nxt = `ysyx22040228_READ;
                   else 
                        state_dwrite_nxt = `ysyx22040228_IDLE;  
               end 
               `ysyx22040228_READ  : begin
                   if((read_w_ok) && (((tag_data1 == dcache_tag) && (tag_user1 == `ysyx22040228_ABLE)) || ((tag_data2 == dcache_tag) && (tag_user2 == `ysyx22040228_ABLE))))
                        state_dwrite_nxt = `ysyx22040228_HIT  ;
                   else if((read_w_ok) && (((dirty1[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] >= counter2[dcache_index])) || ((dirty2[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] < counter2[dcache_index]))))
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
                        state_dwrite_nxt = `ysyx22040228_MISSR;
               end 
                default: begin
                  state_dwrite_nxt       =  `ysyx22040228_IDLE ;
                end 
            endcase 
    end 

    reg          read_w_ok    ;
    always @(*) begin
        if(state_dwrite == `ysyx22040228_READ) begin
            read_w_ok = `ysyx22040228_ABLE  ;
        end 
        else begin
            read_w_ok = `ysyx22040228_ENABLE ;
        end 
    end

    reg         memw_hit_ok    ;
    reg  [7:0]  hitw_data_strb1;
    reg  [7:0]  hitw_data_strb2;
    reg         hitw_data_ready;  
    always @(*) begin
        if(state_dwrite == `ysyx22040228_HIT)
            if((tag_data1 == dcache_tag) && (tag_user1 == `ysyx22040228_ABLE))begin
                memw_hit_ok     = `ysyx22040228_ABLE   ;
                hitw_data_strb1 = mem_strb_i           ;
                hitw_data_ready = `ysyx22040228_ABLE   ;
            end
            else if((tag_data2 == dcache_tag) && (tag_user2 == `ysyx22040228_ABLE))begin
                memw_hit_ok     = `ysyx22040228_ABLE   ;
                hitw_data_strb2 = mem_strb_i           ;
                hitw_data_ready = `ysyx22040228_ABLE   ;
            end
            else begin
                memw_hit_ok     = `ysyx22040228_ABLE   ; 
                hitw_data_strb1 =  8'b00000000         ;
                hitw_data_strb2 =  8'b00000000         ;  
                hitw_data_ready = `ysyx22040228_ENABLE ;
            end  
        else   
            memw_hit_ok  = `ysyx22040228_ENABLE    ; 
            hitw_data_strb1 =  8'b00000000         ;
            hitw_data_strb2 =  8'b00000000         ;  
            hitw_data_ready = `ysyx22040228_ENABLE ;   
    end 

    reg        dirtyw_ok       ;
    reg [63:0] dirtyw_out_addr ;
    reg [63:0] dirtyw_out_data ;
    reg [3:0]  dirtyw_out_type ;
    always @(*) begin
        if(state_dwrite == `ysyx22040228_DIRTY) begin
            if((dirty1[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] >= counter2[dcache_index])) begin
                dirtyw_out_addr = mem_addr_i ;
                dirtyw_out_data = out_data1  ;
                dirtyw_out_type = 4'b0100    ;
            end 
            else if((dirty2[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] < counter2[dcache_index])) begin
                dirtyw_out_addr = mem_addr_i ;
                dirtyw_out_data = out_data2  ;
                dirtyw_out_type  = 4'b0100    ;
            end
            else begin
                dirtyw_out_addr = `ysyx22040228_ZEROWORD  ;
                dirtyw_out_data = `ysyx22040228_ZEROWORD  ;
                dirtyw_out_type  = 4'b0000                ;
            end  
        end 
        else if((in_dcache_ready) && (state_dwrite == `ysyx22040228_DIRTY)) begin
            dirtyw_out_addr = `ysyx22040228_ZEROWORD  ;
            dirtyw_out_data = `ysyx22040228_ZEROWORD  ;
            dirtyw_ok     = `ysyx22040228_ABLE        ;
            dirtyw_out_type = 4'b0000                 ;
        end
        else begin
            dirtyw_ok   = `ysyx22040228_ENABLE;
        end  
    end

    reg          missw_i_ok     ;
    reg  [3: 0]  missw_out_type ;
    reg  [63:0]  missw_out_addr ;
    reg  [7: 0]  missw_data_ena1;
    reg          missw_tag_ena1 ;
    reg  [7: 0]  missw_data_ena2;
    reg          missw_tag_ena2 ;
    reg          missw_out_resp ;
    always @(*) begin
        if(state_dwrite == `ysyx22040228_MISSW) begin
            missw_out_type = 4'b1000    ;
            missw_out_addr = mem_addr_i ;
        end
        else if((in_dcache_ready) && (state_dwrite == `ysyx22040228_MISSW)) begin
            missw_out_type = 4'b0000                ;
            missw_out_addr = `ysyx22040228_ZEROWORD ;
            if((counter1[dcache_index] >= counter2[dcache_index]) || tag_user1 == `ysyx22040228_ENABLE) begin
                missw_data_ena1 = 8'b11111111       ;
                missw_tag_ena1  = `ysyx22040228_ABLE;
                missw_out_resp  = 1'b1              ;
                missw_i_ok      = `ysyx22040228_ABLE;
            end 
            if((counter1[dcache_index] < counter2[dcache_index]) || tag_user2 == `ysyx22040228_ENABLE) begin
                missw_data_ena2 = 8'b11111111       ;
                missw_tag_ena2  = `ysyx22040228_ABLE;
                missw_out_resp  = 1'b1              ;
                missw_i_ok      = `ysyx22040228_ABLE;
            end
        end 
        else begin
            missw_data_ena2  = 8'b00000000         ;
            missw_data_ena1  = 8'b00000000         ;
            missw_tag_ena1   = `ysyx22040228_ENABLE;
            missw_out_resp   = 1'b0                ;
            missw_i_ok       = `ysyx22040228_ENABLE;
        end 
    end

    //--------------------------------------bit code---------------------------//
    reg  [2:0]  counter1 [`ysyx22040228_CACHE_DATA_W];
    reg  [2:0]  counter2 [`ysyx22040228_CACHE_DATA_W];
    integer i ;

    always @(posedge clk) begin
        if((state_dread == `ysyx22040228_HIT) && (tag_data1 == dcache_tag))
            counter1[dcache_index] <= 3'b0 ;
        if((state_dread == `ysyx22040228_HIT) && (tag_data2 == dcache_tag))
            counter2[dcache_index] <= 3'b0 ;
        if((state_dwrite == `ysyx22040228_HIT) && (tag_data1 == dcache_tag))
            counter1[dcache_index] <= 3'b0 ;
        if((state_dwrite == `ysyx22040228_HIT) && (tag_data2 == dcache_tag))
            counter2[dcache_index] <= 3'b0 ;
        if(mem_read_valid && mem_write_valid) begin
		    for(i = 0;i<64;i=i+1) begin
			   counter1[i][2:0] <= (counter1[i] == 3'd7) ? 3'd7 : counter1[i][2:0] + 1'b1;
               counter2[i][2:0] <= (counter2[i] == 3'd7) ? 3'd7 : counter2[i][2:0] + 1'b1;
		    end
        end 
	end
    //-----------------------------dirty state sign-----------------------------//
    reg    dirty1 [`ysyx22040228_CACHE_DATA_W];
    reg    dirty2 [`ysyx22040228_CACHE_DATA_W];

    assign dirty1[dcache_index] = ((state_dwrite == `ysyx22040228_HIT) && (tag_data1 == dcache_tag)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE;
    assign dirty2[dcache_index] = ((state_dwrite == `ysyx22040228_HIT) && (tag_data2 == dcache_tag)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE;

    wire        tag_ena1 ;
    wire [54:0] tag_data1;
    wire        tag_user1;
    d_cache_tag_ram u_tag0(
        .clk         (clk         ),
        .addr_i      (dcache_index),
        .data_i      ({1'b1,dcache_tag}),
        .write_ena   (tag_ena1    ),
        .tag_data    (tag_data1   ),
        .tag_valid   (tag_user1   )
    );
    assign tag_ena1 = (state_dread == `ysyx22040228_MISSR)  ? missr_tag_ena1 :
                      (state_dwrite == `ysyx22040228_MISSW) ? missw_tag_ena1 :
                                                         `ysyx22040228_ENABLE;

    wire        tag_ena2 ;
    wire [54:0] tag_data2;
    wire        tag_user2;
    d_cache_tag_ram u_tag1(
        .clk         (clk         ),
        .addr_i      (dcache_index),
        .data_i      ({1'b1,dcache_tag}),
        .write_ena   (tag_ena2    ),
        .tag_data    (tag_data2   ),
        .tag_valid   (tag_user2   )
    );
    assign tag_ena2 = (state_dread == `ysyx22040228_MISSR)  ? missr_tag_ena2 : 
                      (state_dwrite == `ysyx22040228_MISSW) ? missw_tag_ena2 :
                                                         `ysyx22040228_ENABLE;

    wire [63:0] out_data1   ;
    wire [7:0]  data_ena1   ;
    wire [63:0] in_rem_data1;
    d_cache_data_ram u_data0(
        .clk         (clk         ),
        .addr_i      (dcache_index),
        .data_i      (in_rem_data1),
        .write_ena   (data_ena1   ),
        .data_o      (out_data1   )
    );
    assign data_ena1 = (state_dread == `ysyx22040228_MISSR)  ? missr_data_ena1  :
                       (state_dwrite == `ysyx22040228_HIT)   ? hitw_data_strb1  :
                       (state_dwrite == `ysyx22040228_MISSW) ? missw_data_ena1  :
                                                                    8'b00000000 ;
    assign in_rem_data1 = (state_dwrite == `ysyx22040228_HIT)   ? mem_data_i    :
                          (state_dread == `ysyx22040228_MISSR)  ? in_dcache_data:
                          (state_dwrite == `ysyx22040228_MISSW) ? in_dcache_data:
                                                          `ysyx22040228_ZEROWORD;


    wire [63:0] out_data2   ;
    wire [7:0]  data_ena2   ;
    wire [63:0] in_ram_data2;
    d_cache_data_ram u_data1(
        .clk         (clk         ),
        .addr_i      (dcache_index),
        .data_i      (in_ram_data2),
        .write_ena   (data_ena2   ),
        .data_o      (out_data2   )
    );

    assign data_ena2 = (state_dread == `ysyx22040228_MISSR)  ? missr_data_ena2  :
                       (state_dwrite == `ysyx22040228_HIT)   ? hitw_data_strb2  :
                       (state_dwrite == `ysyx22040228_MISSW) ? missw_data_ena2  :
                                                                    8'b00000000 ;
    assign in_ram_data2 = (state_dwrite == `ysyx22040228_HIT)   ? mem_data_i    :
                          (state_dread == `ysyx22040228_MISSR)  ? in_dcache_data:
                          (state_dwrite == `ysyx22040228_MISSW) ? in_dcache_data:
                                                          `ysyx22040228_ZEROWORD;




    assign out_dcache_type = (state_dread == `ysyx22040228_DIRTY) ? dirty_out_type :
                             (state_dread == `ysyx22040228_MISSR) ? missr_out_type :
                             (state_dwrite == `ysyx22040228_DIRTY)? dirtyw_out_type:
                             (state_dwrite == `ysyx22040228_MISSW) ? missw_out_type:
                                                                               4'b0;

    assign out_dcache_addr = (state_dread == `ysyx22040228_DIRTY) ? dirty_out_addr :
                             (state_dread == `ysyx22040228_MISSR) ? missr_out_addr :
                             (state_dwrite == `ysyx22040228_DIRTY)? dirtyw_out_addr:
                             (state_dwrite == `ysyx22040228_MISSW)? missw_out_addr :
                                                             `ysyx22040228_ZEROWORD;

    assign out_dcache_data = (state_dread == `ysyx22040228_DIRTY) ? dirty_out_data :
                             (state_dwrite == `ysyx22040228_DIRTY)? dirtyw_out_data:
                                                             `ysyx22040228_ZEROWORD;

    assign out_dcache_resp = (state_dread == `ysyx22040228_MISSR) ? missr_out_resp :
                             (state_dwrite == `ysyx22040228_MISSW)? missw_out_resp :
                                                               `ysyx22040228_ENABLE;

    assign mem_data_ready  = (state_dread == `ysyx22040228_HIT)   ? hit_data_ready :
                             (state_dwrite == `ysyx22040228_HIT)  ? hitw_data_ready:
                                                               `ysyx22040228_ENABLE;

endmodule