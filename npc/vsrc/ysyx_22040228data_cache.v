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

`include "ysyx_22040228defines.v"
`include "ysyx_22040228defines_axi4.v"
//`include "S011HD1P_X32Y2D128_BWF.v"
`include "ysyx_22040228TEG_CC.v"
/* verilator lint_off UNUSED */
/* verilator lint_off LATCH */
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
    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            dirty_out_addr = `ysyx22040228_ZEROWORD  ;
            dirty_out_data = `ysyx22040228_ZEROWORD  ;
            dirty_out_type  = 4'b0000                ;
            dirty_ok       = `ysyx22040228_ENABLE    ;
            dirty_clean_o = `ysyx22040228_ENABLE     ;
            dirty_clean_t = `ysyx22040228_ENABLE     ;
        end 
        else if((state_dread == `ysyx22040228_DIRTY) && (~in_dcache_ready)) begin
            if((dirty1[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] >= counter2[dcache_index])) begin
                dirty_out_addr = {32'h0, oteg_ata_o, dcache_index, 3'b000} ;
                dirty_out_data = data_out[63:0]  ;
                dirty_out_type = 4'b0001         ;
                dirty_clean_o  = `ysyx22040228_ABLE ;
                dirty_ok       = `ysyx22040228_ENABLE    ;
                dirty_clean_t = `ysyx22040228_ENABLE     ;
            end 
            else if((dirty2[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] < counter2[dcache_index])) begin
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
        else if((in_dcache_ready) && (state_dread == `ysyx22040228_DIRTY)) begin
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
    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            dirtyw_out_addr = `ysyx22040228_ZEROWORD  ;
            dirtyw_out_data = `ysyx22040228_ZEROWORD  ;
            dirtyw_ok   = `ysyx22040228_ENABLE;
            dirtyw_out_type = 4'b0000                 ;
            dirtyw_clean_o = `ysyx22040228_ENABLE     ;
            dirtyw_clean_t = `ysyx22040228_ENABLE     ;
        end 
        else if((state_dwrite == `ysyx22040228_DIRTY) && (~in_dcache_ready)) begin
            if((dirty1[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] >= counter2[dcache_index])) begin
                dirtyw_out_addr = {32'h0,oteg_ata_o, dcache_index, 3'b000} ;
                dirtyw_out_data = data_out[63:0]  ;
                dirtyw_out_type = 4'b0100         ;
                dirtyw_clean_o  = `ysyx22040228_ABLE ;
                dirtyw_ok   = `ysyx22040228_ENABLE   ;
                dirtyw_clean_t = `ysyx22040228_ENABLE;
            end 
            else if((dirty2[dcache_index] == `ysyx22040228_ABLE) && (counter1[dcache_index] < counter2[dcache_index])) begin
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

    // reg          missw_i_ok     ;
    reg  [3: 0]  missw_out_type ;
    reg  [63:0]  missw_out_addr ;
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
            if((mem_read_valid && mem_write_valid) && (mem_data_ready)) begin
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
        else if(dirtyw_clean_o | dirty_clean_o) begin
            dirty1[dcache_index] <= `ysyx22040228_ENABLE ;
        end 
        else if(dirtyw_clean_t | dirty_clean_t) begin
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

/* verilator lint_on LATCH */

endmodule
