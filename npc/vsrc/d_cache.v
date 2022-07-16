/************************************************************
Author:LiGuoqi
Name:d_cache1.v
Function:write data cache
************************************************************/
/* verilator lint_off LATCH */
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


`include "defines.v"
`include "defines_axi4.v"
`include "d_cache_data_ram.v"
`include "d_cache_tag_ram.v"

module d_cache (
    input         wire                                        clk                ,
    input         wire                                        rst                ,
    //-------------------------input  cache-------------------------------------//
    /* verilator lint_off UNUSED */
    input         wire        [`ysyx22040228_DATAADDRBUS]     mem_addr_i         ,
    /* verilator lint_on UNUSED */
    input         wire        [`ysyx22040228_REGBUS]          mem_data_i         ,
    input         wire        [7:0]                           mem_strb_i         ,
    input         wire                                        mem_fence_i        ,
    input         wire                                        mem_read_valid     ,
    input         wire                                        mem_write_valid    ,
    output        reg         [`ysyx22040228_AXI_REGBUS]      mem_data_out       ,
    output        reg                                         mem_data_ready     ,

    input         wire        [`ysyx22040228_DCACHE_DATA_W]   in_dcache_data     ,
    input         wire                                        in_dcache_ready    ,
    output        wire                                        out_dcache_resp    ,
    output        wire        [63:0]                          out_dcache_addr    ,
    output        wire        [`ysyx22040228_DCACHE_DATA_W]   out_dcache_data    ,
    //type[0]---->  dirty | fence 
    //type[1]---->  missr
    //type[2]---->  dirtyw
    //type[3]---->  missw
    output        wire        [3:0]                           out_dcache_type        
);
    //----------------------------------fence-------------------------------------//
    reg [6:0] counter    ;
    reg     fence_valid_req;
    reg     read_request ;
    reg     read_success ;
    reg     write_request;
    reg     write_success;
    always @(posedge clk) begin 
        if(read_success) begin
            read_request  <= `ysyx22040228_ENABLE;
            write_request <= `ysyx22040228_ABLE ;
        end 
        else if(write_success) begin
            write_request <= `ysyx22040228_ENABLE;
            counter       <= counter + 1 ;
        end 
        else if((mem_fence_i) && (counter < 64)) begin
            read_request <= `ysyx22040228_ABLE ;
        end
        else if((mem_fence_i) && (counter >= 64)) begin
            fence_valid_req <= `ysyx22040228_ABLE;
        end 
        else begin
            fence_valid_req <= `ysyx22040228_ENABLE;
            counter <= 8'b00000000;
        end 
    end

    always @(*) begin
        if(read_request)
            read_success = `ysyx22040228_ABLE;
        else 
            read_success = `ysyx22040228_ENABLE;
    end
    
    reg           fence_write_valid1;
    reg           fence_write_valid2;
    reg  [63:0]   fence_data_out ;
    reg  [63:0]   fence_addr_out ;
    reg  [3:0]    fence_type_out ;
    reg  [63:0]   fence_addr_cache;
    reg           check_two      ;
    always @(*) begin
        if((write_request) && (tag_user1 == `ysyx22040228_ABLE)) begin
            if((~in_dcache_ready) && (dirty1[counter[5:0]] == `ysyx22040228_ABLE)) begin
                fence_data_out = out_data1 ;
                fence_addr_out = {tag_data1, counter[5:0], 3'b000} ;
                fence_type_out = 4'b0001   ;
            end 
            else if((in_dcache_ready) && (dirty1[counter[5:0]] == `ysyx22040228_ABLE))begin
                fence_data_out = `ysyx22040228_ZEROWORD ;
                fence_addr_out = `ysyx22040228_ZEROWORD ;
                fence_type_out = 4'b0000                ;
            end 
            else begin
                //fence_addr_out = {tag_data1, counter, 3'b000} ;
                fence_write_valid1 = `ysyx22040228_ABLE ;
            end 
        end
        else if((write_request) && (tag_user2 == `ysyx22040228_ABLE)) begin
            if((~in_dcache_ready) && (dirty2[counter[5:0]] == `ysyx22040228_ABLE)) begin
                fence_data_out = out_data2 ;
                fence_addr_out = {tag_data2, counter[5:0], 3'b000} ; 
                fence_type_out = 4'b0001   ;
            end 
            else if((in_dcache_ready) && (dirty2[counter[5:0]] == `ysyx22040228_ABLE))begin
                fence_data_out = `ysyx22040228_ZEROWORD ;
                fence_addr_out = `ysyx22040228_ZEROWORD ;
                fence_type_out = 4'b0000                ;
            end 
            else begin
                //fence_addr_out = {tag_data1, counter, 3'b000} ;
                fence_write_valid2 = `ysyx22040228_ABLE ;
            end 
        end
        else if(delay_oclk) begin
            write_success = `ysyx22040228_ENABLE;
        end 
        else begin
            fence_write_valid1 = `ysyx22040228_ENABLE;
            write_success  = `ysyx22040228_ABLE;
            fence_write_valid2 = `ysyx22040228_ENABLE;
        end  
    end
    reg delay_oclk ;
    always @(posedge clk) begin
        if(write_success)
            delay_oclk <= `ysyx22040228_ABLE;
        else 
            delay_oclk <= `ysyx22040228_ENABLE;
    end
    //-----------------------------------dcache----------------------------------//
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
                   else if((read_ok) && (((dirty1[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] >= counter2[dcache_index]) && (tag_user2 == `ysyx22040228_ABLE)) || ((dirty2[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] < counter2[dcache_index]) && (tag_user1 == `ysyx22040228_ABLE))))
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

    reg          read_ok_    ;
    reg          read_ok     ;
    always @(*) begin
        if(state_dread == `ysyx22040228_READ) begin
            read_ok_ = `ysyx22040228_ABLE  ;
        end 
        else begin
            read_ok_ = `ysyx22040228_ENABLE ;
        end 
    end
    always @(posedge clk) begin
        read_ok <= read_ok_;
    end

    reg         mem_hit_ok ;
    reg         hit_data_ready;
    always @(*) begin
        if(state_dread == `ysyx22040228_HIT) begin
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
                mem_data_out   = 64'b0               ;
                hit_data_ready = `ysyx22040228_ENABLE;
            end
        end   
        else   begin
            mem_hit_ok     = `ysyx22040228_ENABLE    ; 
            mem_data_out   = 64'b0                   ;
            hit_data_ready = `ysyx22040228_ENABLE    ; 
        end 
    end 

    reg        dirty_ok  ;
    reg [63:0] dirty_out_addr ;
    reg [63:0] dirty_out_data ;
    reg [3:0]  dirty_out_type ;
    reg        dirty_clean_o  ;
    reg        dirty_clean_t  ;
    always @(*) begin
        if((state_dread == `ysyx22040228_DIRTY) && (~in_dcache_ready)) begin
            if((dirty1[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] >= counter2[dcache_index])) begin
                dirty_out_addr = {tag_data1, dcache_index, 3'b0} ;
                dirty_out_data = out_data1  ;
                dirty_out_type = 4'b0001    ;
                dirty_clean_o  = `ysyx22040228_ABLE ;
            end 
            else if((dirty2[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] < counter2[dcache_index])) begin
                dirty_out_addr = {tag_data2, dcache_index, 3'b0} ;
                dirty_out_data = out_data2  ;
                dirty_out_type = 4'b0001   ;
                dirty_clean_t  = `ysyx22040228_ABLE ;
            end
            // else begin
            //     dirty_out_addr = `ysyx22040228_ZEROWORD  ;
            //     dirty_out_data = `ysyx22040228_ZEROWORD  ;
            //     dirty_out_type  = 4'b0000                ;
            // end  
        end 
        else if((in_dcache_ready) && (state_dread == `ysyx22040228_DIRTY)) begin
            dirty_out_addr = `ysyx22040228_ZEROWORD  ;
            dirty_out_data = `ysyx22040228_ZEROWORD  ;
            dirty_out_type  = 4'b0000                ;
            dirty_ok     = `ysyx22040228_ABLE        ;
            dirty_clean_o = `ysyx22040228_ENABLE     ;
            dirty_clean_t = `ysyx22040228_ENABLE     ;
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


    reg          write_regr     ;
    reg          write_regr_    ;
    always @(posedge clk) begin
        if(write_regr == `ysyx22040228_ABLE)
            write_regr_ <= `ysyx22040228_ABLE;
        else if((write_regr_) && (in_dcache_ready))
            write_regr_ <= `ysyx22040228_ENABLE;
        else 
            write_regr_ <= write_regr_;
    end

    always @(*) begin
        if((state_dread == `ysyx22040228_MISSR) && (~in_dcache_ready)) begin
            missr_out_type = 4'b0010    ;
            missr_out_addr = {mem_addr_i[63:3],3'b0} ;
            write_regr     = `ysyx22040228_ABLE      ;
        end
        else if((in_dcache_ready) && (state_dread == `ysyx22040228_MISSR) && (write_regr_)) begin
            write_regr     = `ysyx22040228_ENABLE   ;
            missr_out_type = 4'b0000                ;
            missr_out_addr = `ysyx22040228_ZEROWORD ;
            if(tag_user1 == `ysyx22040228_ENABLE) begin
                missr_data_ena1 = 8'b11111111       ;
                missr_tag_ena1  = `ysyx22040228_ABLE;
                missr_out_resp  = 1'b1              ;
                missr_i_ok      = `ysyx22040228_ABLE;
            end 
            else if(tag_user2 == `ysyx22040228_ENABLE)begin
                missr_data_ena2 = 8'b11111111       ;
                missr_tag_ena2  = `ysyx22040228_ABLE;
                missr_out_resp  = 1'b1              ;
                missr_i_ok      = `ysyx22040228_ABLE;
            end 
            else if(counter1[dcache_index] >= counter2[dcache_index]) begin
                missr_data_ena1 = 8'b11111111       ;
                missr_tag_ena1  = `ysyx22040228_ABLE;
                missr_out_resp  = 1'b1              ;
                missr_i_ok      = `ysyx22040228_ABLE;
            end 
            else if(counter1[dcache_index] < counter2[dcache_index]) begin
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
            missr_i_ok       = 1'b0                ;
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
                   else if((read_w_ok) && (((dirty1[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] >= counter2[dcache_index]) && (tag_user2 == `ysyx22040228_ABLE)) || ((dirty2[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] < counter2[dcache_index]) && (tag_user1 == `ysyx22040228_ABLE))))
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
               end 
                default: begin
                  state_dwrite_nxt       =  `ysyx22040228_IDLE ;
                end 
            endcase 
    end 

    reg          read_w_ok_    ;
    reg          read_w_ok     ;
    always @(*) begin
        if(state_dwrite == `ysyx22040228_READ) begin
            read_w_ok_ = `ysyx22040228_ABLE  ;
        end 
        else begin
            read_w_ok_ = `ysyx22040228_ENABLE ;
        end 
    end
    always @(posedge clk) begin
        read_w_ok <= read_w_ok_ ;
    end

    reg         memw_hit_ok    ;
    reg  [7:0]  hitw_data_strb1;
    reg  [7:0]  hitw_data_strb2;
    reg         hitw_data_ready;  
    always @(*) begin
        if(state_dwrite == `ysyx22040228_HIT) begin
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
        end   
        else  begin
            memw_hit_ok  = `ysyx22040228_ENABLE    ; 
            hitw_data_strb1 =  8'b00000000         ;
            hitw_data_strb2 =  8'b00000000         ;  
            hitw_data_ready = `ysyx22040228_ENABLE ; 
        end   
    end 

    reg        dirtyw_ok       ;
    reg [63:0] dirtyw_out_addr ;
    reg [63:0] dirtyw_out_data ;
    reg [3:0]  dirtyw_out_type ;
    reg        dirtyw_clean_o  ;
    reg        dirtyw_clean_t  ;
    always @(*) begin
        if((state_dwrite == `ysyx22040228_DIRTY) && (~in_dcache_ready)) begin
            if((dirty1[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] >= counter2[dcache_index])) begin
                dirtyw_out_addr = {tag_data1, dcache_index, 3'b0} ;
                dirtyw_out_data = out_data1  ;
                dirtyw_out_type = 4'b0100    ;
                dirtyw_clean_o  = `ysyx22040228_ABLE ;
            end 
            else if((dirty2[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] < counter2[dcache_index])) begin
                dirtyw_out_addr = {tag_data2, dcache_index, 3'b0} ;
                dirtyw_out_data = out_data2  ;
                dirtyw_out_type = 4'b0100    ;
                dirtyw_clean_t  = `ysyx22040228_ABLE ;
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
            dirtyw_ok     = `ysyx22040228_ABLE        ;
            dirtyw_out_type = 4'b0000                 ;
            dirtyw_clean_o = `ysyx22040228_ENABLE     ;
            dirtyw_clean_t = `ysyx22040228_ENABLE     ;
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

    reg          write_regw     ;
    reg          write_regw_    ;
    always @(posedge clk) begin
        if(write_regw == `ysyx22040228_ABLE)
            write_regw_ <= `ysyx22040228_ABLE;
        else if((write_regw_) && (in_dcache_ready))
            write_regw_ <= `ysyx22040228_ENABLE;
        else 
            write_regw_ <= write_regw_;
    end

    always @(*) begin
        if((state_dwrite == `ysyx22040228_MISSW) && (~in_dcache_ready)) begin
            missw_out_type = 4'b1000    ;
            missw_out_addr = {mem_addr_i[63:3],3'b0} ;
            write_regw     = `ysyx22040228_ABLE      ;
        end
        else if((in_dcache_ready) && (state_dwrite == `ysyx22040228_MISSW) && (write_regw_)) begin
            write_regw     = `ysyx22040228_ENABLE   ;
            missw_out_type = 4'b0000                ;
            missw_out_addr = `ysyx22040228_ZEROWORD ;
            if(tag_user1 == `ysyx22040228_ENABLE) begin
                missw_data_ena1 = 8'b11111111       ;
                missw_tag_ena1  = `ysyx22040228_ABLE;
                missw_out_resp  = 1'b1              ;
                missw_i_ok      = `ysyx22040228_ABLE;    
            end
            else if(tag_user2 == `ysyx22040228_ENABLE) begin
                missw_data_ena2 = 8'b11111111       ;
                missw_tag_ena2  = `ysyx22040228_ABLE;
                missw_out_resp  = 1'b1              ;
                missw_i_ok      = `ysyx22040228_ABLE;
            end 
            else if(counter1[dcache_index] >= counter2[dcache_index]) begin
                missw_data_ena1 = 8'b11111111       ;
                missw_tag_ena1  = `ysyx22040228_ABLE;
                missw_out_resp  = 1'b1              ;
                missw_i_ok      = `ysyx22040228_ABLE;
            end 
            else if(counter1[dcache_index] < counter2[dcache_index]) begin
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
            missw_tag_ena2   = `ysyx22040228_ENABLE;
            missw_out_resp   = 1'b0                ;
            missw_i_ok       = `ysyx22040228_ENABLE;
        end 
    end

    //--------------------------------------bit code---------------------------//
    reg  [2:0]  counter1 [`ysyx22040228_CACHE_DATA_W];
    reg  [2:0]  counter2 [`ysyx22040228_CACHE_DATA_W];
    integer i ;

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
           	for(i = 0;i<64;i=i+1) begin
			   counter1[i][2:0] <= 3'b0;
               counter2[i][2:0] <= 3'b0;
		    end 
        end 
        else begin
            if((state_dread == `ysyx22040228_HIT) && (tag_data1 == dcache_tag))
                counter1[dcache_index] <= 3'b0 ;
            if((state_dread == `ysyx22040228_HIT) && (tag_data2 == dcache_tag))
                counter2[dcache_index] <= 3'b0 ;
            if((state_dwrite == `ysyx22040228_HIT) && (tag_data1 == dcache_tag))
                counter1[dcache_index] <= 3'b0 ;
            if((state_dwrite == `ysyx22040228_HIT) && (tag_data2 == dcache_tag))
                counter2[dcache_index] <= 3'b0 ;
            if((mem_read_valid && mem_write_valid) && (mem_data_ready)) begin
                for(i = 0;i<64;i=i+1) begin
                counter1[i][2:0] <= (counter1[i] == 3'd7) ? 3'd7 : counter1[i][2:0] + 1'b1;
                counter2[i][2:0] <= (counter2[i] == 3'd7) ? 3'd7 : counter2[i][2:0] + 1'b1;
                end
            end 
        end 
	end
    //-----------------------------dirty state sign-----------------------------//
    reg    dirty1 [`ysyx22040228_CACHE_DATA_W];
    reg    dirty2 [`ysyx22040228_CACHE_DATA_W];

    //assign dirty1[dcache_index] = ((state_dwrite == `ysyx22040228_HIT) && (tag_data1 == dcache_tag)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE;
    //assign dirty2[dcache_index] = ((state_dwrite == `ysyx22040228_HIT) && (tag_data2 == dcache_tag)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE;
    integer j;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
           	for(j = 0;j<64;j=j+1) begin
			   dirty1[j] <= 1'b0;
               dirty2[j] <= 1'b0;
		    end 
        end 
        else if((state_dwrite == `ysyx22040228_HIT) && (tag_data1 == dcache_tag)) begin
            dirty1[dcache_index] <= `ysyx22040228_ABLE ;
        end 
        else if((state_dwrite == `ysyx22040228_HIT) && (tag_data2 == dcache_tag)) begin
            dirty2[dcache_index] <= `ysyx22040228_ABLE ;
        end
        else if(dirtyw_clean_o | dirty_clean_o) begin
            dirty1[dcache_index] <= `ysyx22040228_ENABLE ;
        end 
        else if(dirtyw_clean_t | dirty_clean_t) begin
            dirty2[dcache_index] <= `ysyx22040228_ENABLE ;
        end 
        else if((write_request) && (dirty1[counter[5:0]] == `ysyx22040228_ABLE) && in_dcache_ready)begin
            dirty1[counter[5:0]] <= `ysyx22040228_ENABLE;
        end 
        else if((write_request) && (dirty2[counter[5:0]] == `ysyx22040228_ABLE) && in_dcache_ready)begin
            dirty2[counter[5:0]] <= `ysyx22040228_ENABLE;
        end 
    end


    wire        tag_ena1 ;
    wire [54:0] tag_data1;
    wire        tag_user1;
    wire [55:0] tag_din1 ;
    wire [63:0] tag_addr1;
    d_cache_tag_ram u_tag0(
        .clk         (clk         ),
        .addr_i      (tag_addr1   ),
        .data_i      (tag_din1    ),
        .write_ena   (tag_ena1    ),
        .tag_data    (tag_data1   ),
        .tag_valid   (tag_user1   )
    );
    assign tag_ena1 = (state_dread == `ysyx22040228_MISSR)  ? missr_tag_ena1 :
                      (state_dwrite == `ysyx22040228_MISSW) ? missw_tag_ena1 :
                      ((write_request)&& fence_write_valid1)? `ysyx22040228_ABLE:
                                                         `ysyx22040228_ENABLE;
    assign tag_din1 = ((write_request)&& fence_write_valid1) ? 56'h0         :
                                                            {1'b1,dcache_tag};
    assign tag_addr1 = ((write_request)&& fence_write_valid1)? counter[5:0]  :
                                                                 dcache_index;

    wire        tag_ena2 ;
    wire [54:0] tag_data2;
    wire        tag_user2;
    wire [63:0] tag_addr2;
    wire [55:0] tag_din2 ;
    d_cache_tag_ram u_tag1(
        .clk         (clk         ),
        .addr_i      (tag_addr2   ),
        .data_i      (tag_din2    ),
        .write_ena   (tag_ena2    ),
        .tag_data    (tag_data2   ),
        .tag_valid   (tag_user2   )
    );
    assign tag_ena2 = (state_dread == `ysyx22040228_MISSR)  ? missr_tag_ena2 : 
                      (state_dwrite == `ysyx22040228_MISSW) ? missw_tag_ena2 :
                      ((write_request)&& fence_write_valid2)? `ysyx22040228_ABLE:
                                                         `ysyx22040228_ENABLE;
    assign tag_din2 = ((write_request)&& fence_write_valid2) ? 56'h0         :
                                                            {1'b1,dcache_tag};
    assign tag_addr2 = ((write_request)&& fence_write_valid2)? counter[5:0]  :
                                                                 dcache_index;

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
                             (state_dwrite == `ysyx22040228_MISSW)?  missw_out_type:
                             write_request                        ? fence_type_out :
                                                                               4'b0;

    assign out_dcache_addr = (state_dread == `ysyx22040228_DIRTY) ? dirty_out_addr :
                             (state_dread == `ysyx22040228_MISSR) ? missr_out_addr :
                             (state_dwrite == `ysyx22040228_DIRTY)? dirtyw_out_addr:
                             (state_dwrite == `ysyx22040228_MISSW)? missw_out_addr :
                             write_request                        ? fence_addr_out :
                                                             `ysyx22040228_ZEROWORD;

    assign out_dcache_data = (state_dread == `ysyx22040228_DIRTY) ? dirty_out_data :
                             (state_dwrite == `ysyx22040228_DIRTY)? dirtyw_out_data:
                             write_request                        ? fence_data_out :
                                                             `ysyx22040228_ZEROWORD;

    assign out_dcache_resp = (state_dread == `ysyx22040228_MISSR) ? missr_out_resp :
                             (state_dwrite == `ysyx22040228_MISSW)? missw_out_resp :
                                                               `ysyx22040228_ENABLE;

    assign mem_data_ready  = (state_dread == `ysyx22040228_HIT)   ? hit_data_ready :
                             (state_dwrite == `ysyx22040228_HIT)  ? hitw_data_ready:
                             fence_valid_req                      ? `ysyx22040228_ABLE:
                                                               `ysyx22040228_ENABLE;

/* verilator lint_on LATCH */

endmodule
