/************************************************************
Author:LiGuoqi
Name:inst_cache.v
Function:write instraction cache
************************************************************/
/* verilator lint_off LATCH */
`include "defines.v"
`include "defines_axi4.v"
`include "TEG_CC.v"
`include "S011HD1P_X32Y2D128_BW.v"
`include "cache_defines.v"

`define ysyx22040228_I_IDLE    6'b000001
`define ysyx22040228_I_MISSRL  6'b000010 //--> read chiplink can use burst
`define ysyx22040228_I_HIT     6'b000100
`define ysyx22040228_I_MISSRH  6'b001000 //--> read APB can't use burst
`define ysyx22040228_I_READ    6'b100000

module inst_cache (
    input       wire                                         clk             ,
    input       wire                                         rst             ,
    input       wire          [63:0]                         inst_addr       ,
    input       wire          [2:0]                          inst_counter    ,
    input       wire                                         inst_ready      ,
    input       wire                                         issu_canin      ,
    input       wire                                         inst_fence      ,
    output      wire          [127:0]                        inst_data       ,
    output      wire          [255:0]                        inst_pc         ,
    output      wire                                         inst_valid      ,
    output      wire                                         inst_readyout   ,

    output      reg                                          cache_read_ena  ,
    output      reg           [63:0]                         cache_addr      ,
    input       wire          [63:0]                         cache_in_data   ,
    input       wire                                         cache_in_valid                                 
);

    wire   icache_if_shankhand   ;
    assign icache_if_shankhand = inst_ready && ~inst_valid  ;

    wire [`ysyx22040228_TEG_WITH]   icache_tag    =   inst_addr[31:10 ];
    wire [`ysyx22040228_INDEX_WITH] icache_index  =   inst_addr[ 9:4 ];


    reg  [5:0]  state_inst     ;
    reg  [5:0]  state_inst_nxt ;
    reg  [6:0]  fence_counter  ;
    always @(posedge clk) begin
        if(inst_fence)begin
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

    reg          read_ok_    ;
    reg          read_ok     ;
    always @(*) begin
        if(state_inst == `ysyx22040228_I_READ) begin
            read_ok_ = `ysyx22040228_ABLE    ;
        end 
        else begin
            read_ok_ = `ysyx22040228_ENABLE  ;
        end 
    end
    always @(posedge clk) begin
        read_ok <= read_ok_;
    end

    reg         inst_hit_ok ;
    reg [255:0] inst_pc_    ;
    reg [127:0] inst_data_  ;
    reg         inst_readyout_;
    reg         inst_valid_  ;
    always @(*) begin
        if(state_inst == `ysyx22040228_I_HIT) begin
            if(issu_canin == `ysyx22040228_ENABLE) begin
                inst_data_ = 128'b0 ;
                inst_hit_ok = `ysyx22040228_ENABLE;
                inst_valid_ = `ysyx22040228_ENABLE;
                inst_readyout_ = `ysyx22040228_ABLE;
            end 
            else if((oteg_ata_o == icache_tag) && (oteg_valid_o == `ysyx22040228_ABLE))begin
                inst_hit_ok  = `ysyx22040228_ABLE;
                inst_valid_  = `ysyx22040228_ABLE;
                if(inst_counter == 3'd4)   begin
                    inst_data_   =    data_outo                                              ;
                    inst_pc_     = {(inst_addr+12), (inst_addr+8), (inst_addr+4), inst_addr} ;
                end 
                if(inst_counter == 3'd3)   begin
                    inst_data_   = {data_outo[127:32], 32'h0}                                ;
                    inst_pc_     = {(inst_addr+8), (inst_addr+4), inst_addr, 64'h0}          ;
                end 
                if(inst_counter == 3'd2)   begin
                    inst_data_   = {data_outo[127:64], 64'h0}                                ;
                    inst_pc_     = {(inst_addr+4), inst_addr, 64'h0, 64'h0}                  ;
                end 
                if(inst_counter == 3'd1)   begin
                    inst_data_   = {data_outo[127:96], 96'h0 }                               ;
                    inst_pc_     = {inst_addr, 64'h0, 64'h0, 64'h0}                          ;
                end 
            end
            else if((tteg_ata_o == icache_tag) && (tteg_valid_o == `ysyx22040228_ABLE))begin
                inst_hit_ok  = `ysyx22040228_ABLE  ;
                inst_valid_  = `ysyx22040228_ABLE;
                if(inst_counter == 3'd4)   begin
                    inst_data_   =    data_outt                                              ;
                    inst_pc_     = {(inst_addr+12), (inst_addr+8), (inst_addr+4), inst_addr} ;
                end 
                if(inst_counter == 3'd3)   begin
                    inst_data_   = {data_outt[127:32], 32'h0}                                ;
                    inst_pc_     = {(inst_addr+8), (inst_addr+4), inst_addr, 64'h0}          ;
                end 
                if(inst_counter == 3'd2)   begin
                    inst_data_   = {data_outt[127:64], 64'h0}                                ;
                    inst_pc_     = {(inst_addr+4), inst_addr, 64'h0, 64'h0}                  ;
                end 
                if(inst_counter == 3'd1)   begin
                    inst_data_   = {data_outt[127:96], 96'h0 }                               ;
                    inst_pc_     = {inst_addr, 64'h0, 64'h0, 64'h0}                          ;
                end 
            end
            else begin
                inst_hit_ok  = `ysyx22040228_ENABLE     ;
                inst_valid_  = `ysyx22040228_ENABLE     ;
                inst_readyout_= `ysyx22040228_ENABLE     ;
            end
        end 
        else begin  
          inst_hit_ok  = `ysyx22040228_ENABLE          ; 
          inst_valid_  = `ysyx22040228_ENABLE          ;  
          inst_readyout_= `ysyx22040228_ENABLE          ; 
        end 
    end
    assign inst_data = (state_inst == `ysyx22040228_I_HIT) ? inst_data_ : 128'h0 ;
    assign inst_pc   = (state_inst == `ysyx22040228_I_HIT) ? inst_pc_   : 256'h0 ;
    assign inst_valid     = (state_inst == `ysyx22040228_I_HIT) ? inst_valid_    : 1'b0 ;
    assign inst_readyout  = (state_inst == `ysyx22040228_I_HIT) ? inst_readyout_ : 1'b0 ;

    reg             write_i_ok;  
    reg             cahce_miss_ena ;
    reg   [63:0]    cache_miss_addr ;
    reg             write_m_ok;  
    reg             cache_mism_ena ;
    reg   [63:0]    cahce_mism_addr ;

    reg   [1:0]   counter_readl ;
    reg   [1:0]   counter_readl_n ;

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) 
            counter_readl <= 2'd1 ;
        else 
            counter_readl <= counter_readl_n ;
    end
    reg  [127:0]  temp_date       ;
    reg           miss_strb_o     ;
    reg           miss_strb_t     ;
    always @(*) begin
        if(state_inst ==  `ysyx22040228_I_MISSRL) begin
            case (counter_readl)
                2'd1 : begin
                   if(cache_in_valid) begin
                        temp_date[63:0] = cache_in_data       ;
                        counter_readl_n = 2'd2                ;
                   end 
                   else begin 
                        cahce_miss_ena  = `ysyx22040228_ABLE  ;
                        cache_miss_addr = {inst_addr[63:4], 1'b0,3'b0}; 
                   end 
                end 
                2'd2 : begin
                   if(cache_in_valid) begin
                        cahce_miss_ena  = `ysyx22040228_ENABLE  ;
                        cache_miss_addr = `ysyx22040228_ZEROWORD;
                        temp_date[127:64] = cache_in_data       ;
                        counter_readl_n = 2'd2                  ;
                        write_i_ok      = `ysyx22040228_ABLE    ;
                        if(oteg_valid_o == `ysyx22040228_ENABLE) begin
                            miss_strb_o = `ysyx22040228_ABLE    ;
                        end 
                        else if(tteg_valid_o == `ysyx22040228_ENABLE) begin
                            miss_strb_t = `ysyx22040228_ABLE    ;
                        end 
                        else if(i_counter1[icache_index] >= i_counter2[icache_index])begin
                            miss_strb_o = `ysyx22040228_ABLE    ;
                        end   
                        else if(i_counter1[icache_index] < i_counter2[icache_index]) begin
                            miss_strb_t = `ysyx22040228_ABLE    ;
                        end
                   end 
                   else begin 
                        cahce_miss_ena  = `ysyx22040228_ABLE  ;
                        cache_miss_addr = {inst_addr[63:4], 1'b1,3'b0}; 
                   end
                end  
                default: counter_readl_n  = 2'd1  ;
            endcase
        end 
        else begin
             counter_readl_n  = 2'd1                 ;
             miss_strb_o      = `ysyx22040228_ENABLE ;
             miss_strb_t      = `ysyx22040228_ENABLE ;
             write_i_ok       = `ysyx22040228_ENABLE ;
        end 
    end


    reg   [2:0]   counter_readh ;
    reg   [2:0]   counter_readh_n ;

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)
            counter_readh  <= 3'd1 ;
        else 
            counter_readh  <= counter_readh_n ;
    end
    reg  [127:0]  temp_data ; 
    reg           mism_strb_o ;
    reg           mism_strb_t ;
    always @(*) begin
        if(state_inst ==  `ysyx22040228_I_MISSRH)begin
            case (counter_readh)
               3'd1 : begin
                   if(cache_in_valid) begin
                        temp_data[31:0] = cache_in_data[31:0] ;
                        counter_readh_n = 3'd2                ;
                   end 
                   else begin 
                        cache_mism_ena  = `ysyx22040228_ABLE    ;
                        cahce_mism_addr = {inst_addr[63:4], 1'b0, 1'b0, 2'b0}; 
                   end 
               end 
               3'd2 : begin
                   if(cache_in_valid) begin
                        temp_data[63:32] = cache_in_data[63:32] ;
                        counter_readh_n = 3'd3                    ;
                   end 
                   else begin 
                        cache_mism_ena  = `ysyx22040228_ABLE    ;
                        cahce_mism_addr = {inst_addr[63:4], 1'b0, 1'b1, 2'b0}; 
                   end 
               end 
               3'd3 : begin
                   if(cache_in_valid) begin
                        temp_data[95:64] = cache_in_data[31:0] ;
                        counter_readh_n = 3'd4                   ;
                   end 
                   else begin 
                        cache_mism_ena  = `ysyx22040228_ABLE    ;
                        cahce_mism_addr = {inst_addr[63:4], 1'b1, 1'b0, 2'b0}; 
                   end 
               end 
               3'd4 : begin
                   if(cache_in_valid) begin
                        temp_data[127:96] = cache_in_data[63:32] ;
                        counter_readh_n = 3'd4                     ;
                        cache_mism_ena  = `ysyx22040228_ENABLE     ;
                        cahce_mism_addr = `ysyx22040228_ZEROWORD   ;
                        write_m_ok      = `ysyx22040228_ABLE       ;
                        if(oteg_valid_o == `ysyx22040228_ENABLE) begin
                            mism_strb_o = `ysyx22040228_ABLE       ;
                        end 
                        else if(tteg_valid_o == `ysyx22040228_ENABLE) begin
                            mism_strb_t = `ysyx22040228_ABLE       ;
                        end 
                        else if(i_counter1[icache_index] >= i_counter2[icache_index])begin
                            mism_strb_o = `ysyx22040228_ABLE       ;
                        end   
                        else if(i_counter1[icache_index] < i_counter2[icache_index]) begin
                            mism_strb_t = `ysyx22040228_ABLE       ;
                        end
                   end 
                   else begin 
                        cache_mism_ena  = `ysyx22040228_ABLE      ;
                        cahce_mism_addr = {inst_addr[63:4], 1'b1, 1'b1, 2'b0}; 
                   end 
               end 
                default: counter_readh_n = 3'd1                     ;
            endcase
        end 
        else begin
            write_m_ok  = `ysyx22040228_ENABLE ;
            mism_strb_o = `ysyx22040228_ENABLE ;
            mism_strb_t = `ysyx22040228_ENABLE ;
            temp_data   = 128'h0               ;
            counter_readh_n = 3'd1             ;
        end 
    end

    wire                             oteg_ena_i    ;
    assign                           oteg_ena_i  =  inst_fence                                                 ? `ysyx22040228_ABLE : 
                                                    ((state_inst ==  `ysyx22040228_I_MISSRL) && (miss_strb_o)) ? `ysyx22040228_ABLE :
                                                    ((state_inst ==  `ysyx22040228_I_MISSRH) && (mism_strb_o)) ? `ysyx22040228_ABLE :
                                                                                                               `ysyx22040228_ENABLE ;
    wire                             oteg_valid_i  ;
    assign                           oteg_valid_i = inst_fence ? `ysyx22040228_ENABLE : `ysyx22040228_ABLE ;
    wire         [21:0]              oteg_data_i   ;
    assign                           oteg_data_i  = inst_fence ? 22'h0 : icache_tag ;
    wire         [5:0]               oteg_addr_i   ; 
    assign                           oteg_addr_i  = inst_fence ? fence_counter[5:0] : icache_index ;    
    wire   [`ysyx22040228_TEG_WITH]  oteg_ata_o    ;
    wire                             oteg_valid_o  ;
    TEG_CC TEG_ICACHEO(
        .clk         (clk          ),
        .addr_i      (oteg_addr_i  ),
        .teg_i       (oteg_data_i  ),
        .teg_valid   (oteg_valid_i ),
        .teg_ena     (oteg_ena_i   ), 
        .data_o      (oteg_ata_o   ),
        .data_valid  (oteg_valid_o )
    );

    wire                             tteg_ena_i    ; 
    assign                           tteg_ena_i  =  inst_fence                                                 ? `ysyx22040228_ABLE : 
                                                    ((state_inst ==  `ysyx22040228_I_MISSRL) && (miss_strb_t)) ? `ysyx22040228_ABLE :
                                                    ((state_inst ==  `ysyx22040228_I_MISSRH) && (mism_strb_t)) ? `ysyx22040228_ABLE :
                                                                                                               `ysyx22040228_ENABLE ;
    wire                             tteg_valid_i  ;
    assign                           tteg_valid_i = inst_fence ? `ysyx22040228_ENABLE : `ysyx22040228_ABLE ;
    wire         [21:0]              tteg_data_i   ;
    assign                           tteg_data_i  = inst_fence ? 22'h0 : icache_tag ;
    wire         [5:0]               tteg_addr_i   ; 
    assign                           tteg_addr_i  = inst_fence ? fence_counter[5:0] : icache_index ;
    wire   [`ysyx22040228_TEG_WITH]  tteg_ata_o    ;
    wire                             tteg_valid_o  ;
    TEG_CC TEG_ICACHET(
        .clk         (clk          ),
        .addr_i      (tteg_addr_i  ),
        .teg_i       (tteg_data_i  ),
        .teg_valid   (tteg_valid_i ),
        .teg_ena     (tteg_ena_i   ),
        .data_o      (tteg_ata_o   ),
        .data_valid  (tteg_valid_o )
    );

    //-------------------------------ram data---------------------------------//
    wire  [127:0] data_outo ;
    wire          CEO = 1'b0;
    wire  [127:0] w_strb_ramo;
    assign        w_strb_ramo = ((state_inst ==  `ysyx22040228_I_MISSRL) && (miss_strb_o)) ? `ysyx22040228_CACHE_STRBA :
                               ((state_inst ==  `ysyx22040228_I_MISSRH) && (mism_strb_o)) ? `ysyx22040228_CACHE_STRBA :
                                                                                           `ysyx22040228_CACHE_STRBZ  ;
    wire  [127:0] w_data_ramo;
    assign        w_data_ramo = ((state_inst ==  `ysyx22040228_I_MISSRL) && (miss_strb_o)) ? temp_date :
                               ((state_inst ==  `ysyx22040228_I_MISSRH) && (mism_strb_o)) ? temp_data :
                                                                             `ysyx22040228_CACHE_STRBZ;
    wire          w_data_enao;
    assign        w_data_enao = ((state_inst ==  `ysyx22040228_I_MISSRL) && (miss_strb_o)) ? `ysyx22040228_ABLE   :
                               ((state_inst ==  `ysyx22040228_I_MISSRH) && (mism_strb_o)) ? `ysyx22040228_ABLE   :
                                                                                            `ysyx22040228_ENABLE ;
    S011HD1P_X32Y2D128_BW REM_ICACHEO (
        .Q           (data_outo    ) ,
        .CLK         (clk          ) ,
        .CEN         (CEO          ) ,
        .WEN         ( ~w_data_enao) ,
        .BWEN        ( ~w_strb_ramo) ,
        .A           (icache_index ) ,
        .D           (w_data_ramo  )
    );

    wire  [127:0] data_outt;
    wire          CET = 1'b0;
    wire  [127:0] w_strb_ramt;
    assign        w_strb_ramt = ((state_inst ==  `ysyx22040228_I_MISSRL) && (miss_strb_t)) ? `ysyx22040228_CACHE_STRBA :
                               ((state_inst ==  `ysyx22040228_I_MISSRH) && (mism_strb_t)) ? `ysyx22040228_CACHE_STRBA :
                                                                                           `ysyx22040228_CACHE_STRBZ  ;
    wire  [127:0] w_data_ramt;
    assign        w_data_ramt = ((state_inst ==  `ysyx22040228_I_MISSRL) && (miss_strb_t)) ? temp_date :
                               ((state_inst ==  `ysyx22040228_I_MISSRH) && (mism_strb_t)) ? temp_data :
                                                                             `ysyx22040228_CACHE_STRBZ;
    wire          w_data_enat;
    assign        w_data_enat = ((state_inst ==  `ysyx22040228_I_MISSRL) && (miss_strb_t)) ? `ysyx22040228_ABLE   :
                               ((state_inst ==  `ysyx22040228_I_MISSRH) && (mism_strb_t)) ? `ysyx22040228_ABLE   :
                                                                                            `ysyx22040228_ENABLE ;

    S011HD1P_X32Y2D128_BW REM_ICACHET (
        .Q           (data_outt    ) ,
        .CLK         (clk          ) ,
        .CEN         (CET          ) ,
        .WEN         ( ~w_data_enat) ,
        .BWEN        ( ~w_strb_ramt) ,
        .A           (icache_index ) ,
        .D           (w_data_ramt  )
    );

    //--------------------------------------bit code---------------------------//
    reg  [2:0]  i_counter1 [`ysyx22040228_CACHE_DATA_W];
    reg  [2:0]  i_counter2 [`ysyx22040228_CACHE_DATA_W];
    integer i ;

    always @(posedge clk) begin
        if(((state_inst == `ysyx22040228_I_HIT) && ((oteg_ata_o == icache_tag) && (oteg_valid_o == `ysyx22040228_ABLE))) || ((miss_strb_o) | (mism_strb_o)))
            i_counter1[icache_index] <= 3'b0 ;
        if(((state_inst == `ysyx22040228_I_HIT) && ((tteg_ata_o == icache_tag) && (tteg_valid_o == `ysyx22040228_ABLE))) || ((miss_strb_t) | (mism_strb_t)))
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
