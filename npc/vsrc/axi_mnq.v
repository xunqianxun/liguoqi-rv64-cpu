module axi_mnq (
    input       wire                                         clk                    ,
    input       wire                                         rst                    ,

    input       wire       [`ysyx22040228_ID_BUS]            s_axi_aw_id            ,
    input       wire       [`ysyx22040228_ADDR_BUS]          s_axi_aw_addr          ,
    input       wire       [`ysyx22040228_LEN_BUS]           s_axi_aw_len           ,
    input       wire       [`ysyx22040228_SIZE_BUS]          s_axi_aw_size          ,
    input       wire       [`ysyx22040228_BURST_BUS]         s_axi_aw_burst         ,
    input       wire       [`ysyx22040228_CACHE_BUS]         s_axi_aw_cache         ,
    input       wire       [`ysyx22040228_PROT_BUS]          s_axi_aw_port          ,
    input       wire       [`ysyx22040228_QOS_BUS]           s_axi_aw_qos           ,
    input       wire                                         s_axi_aw_valid         ,
    output      wire                                         s_axi_aw_ready         ,

    //----------------------write data channel-----------------------------------//
    input       wire       [`ysyx22040228_DATA_BUS]          s_axi_w_data           ,
    input       wire       [`ysyx22040228_STRB_BUS]          s_axi_w_strb           ,
    input       wire                                         s_axi_w_last           ,
    input       wire                                         s_axi_w_valid          ,
    output      wire                                         s_axi_w_ready          ,

    //-----------------------write response channel------------------------------//
    output      wire       [`ysyx22040228_ID_BUS]            s_axi_b_id             ,
    output      wire       [`ysyx22040228_RESP_BUS]          s_axi_b_resp           ,
    output      wire                                         s_axi_b_valid          ,
    input       wire                                         s_axi_b_ready          ,

    //------------------------read address channel-------------------------------//
    input       wire       [`ysyx22040228_ID_BUS]            s_axi_ar_id            ,
    input       wire       [`ysyx22040228_ADDR_BUS]          s_axi_ar_addr          ,
    input       wire       [`ysyx22040228_LEN_BUS]           s_axi_ar_len           ,
    input       wire       [`ysyx22040228_SIZE_BUS]          s_axi_ar_size          ,
    input       wire       [`ysyx22040228_BURST_BUS]         s_axi_ar_burst         ,
    input       wire       [`ysyx22040228_CACHE_BUS]         s_axi_ar_cache         ,
    input       wire       [`ysyx22040228_PROT_BUS]          s_axi_ar_prot          ,
    input       wire       [`ysyx22040228_QOS_BUS]           s_axi_ar_qos           ,
    input       wire                                         s_axi_ar_valid         ,
    output      wire                                         s_axi_ar_ready         ,

    //------------------------read data channel----------------------------------//
    output      wire       [`ysyx22040228_ID_BUS]            s_axi_r_id             ,
    output      wire       [`ysyx22040228_DATA_BUS]          s_axi_r_data           ,
    output      wire       [`ysyx22040228_RESP_BUS]          s_axi_r_resp           ,
    output      wire                                         s_axi_r_last           ,
    output      wire                                         s_axi_r_valid          ,
    input       wire                                         s_axi_r_ready          ,

    output      wire                                         read_ram_ena           ,
    output      wire                                         read_inst_ena          ,
    output      wire       [63:0]                            addr_oup               ,
    input       wire       [31:0]                            inst_data_in           ,
    input       wire       [63:0]                            ram_data_in            , 
    output      wire                                         write_ram_ena          ,
    output      wire       [63:0]                            write_ram_data         ,
    output      wire       [63:0]                            write_ram_addr              
);
    
    `define ysyx22040228_S_IDLE  2'b00 
    `define ysyx22040228_S_INFO  2'b01
    `define ysyx22040228_S_RESP  2'b10

    `define ysyx22040228_S_ADDR  2'b01
    `define ysyx22040228_S_DATA  2'b10

    wire  aw_shankhand = s_axi_aw_valid && s_axi_aw_ready;
    wire  w_shankhand  = s_axi_w_valid  && s_axi_w_ready ;
    wire  b_shankhand  = s_axi_b_valid  && s_axi_b_ready ;

    reg  [1:0]  s_write_state     ;
    reg  [1:0]  s_write_state_nxt ;
    always @(posedge clk or negedge rst) begin
        if(rst == `ysyx22040228_RSTENA)
            s_write_state <= `ysyx22040228_S_IDLE ;
        else 
            s_write_state <= s_write_state_nxt    ;
    end 

    always @(*) begin
        case (s_write_state)
            `ysyx22040228_S_IDLE : begin
                if(aw_shankhand && w_shankhand) 
                    s_write_state_nxt = `ysyx22040228_S_RESP ;
                else if(s_axi_aw_valid | s_axi_w_valid) 
                    s_write_state_nxt = `ysyx22040228_S_INFO ;
                else 
                    s_write_state_nxt = `ysyx22040228_S_IDLE ;
            end 
            `ysyx22040228_S_INFO : begin
                if(aw_shankhand && w_shankhand)
                    s_write_state_nxt = `ysyx22040228_S_RESP ;
                else 
                    s_write_state_nxt = `ysyx22040228_S_INFO ;
            end 
            `ysyx22040228_S_RESP : begin
                if(b_shankhand)
                    s_write_state_nxt = `ysyx22040228_S_IDLE ;
                else 
                    s_write_state_nxt = `ysyx22040228_S_RESP ;
            end 
            default: s_write_state_nxt = `ysyx22040228_S_IDLE;
        endcase
    end

    assign s_axi_aw_ready = (s_axi_aw_valid && s_axi_w_valid && (s_axi_aw_len == 8'b0) && (s_axi_aw_size == 3'b011) && (s_axi_aw_burst == 2'b01));
    assign s_axi_w_ready  = s_axi_aw_valid && s_axi_w_valid  && (s_axi_w_last) ;

    assign s_axi_b_id     = 4'b0000;
    assign s_axi_b_resp   = 2'b00  ;
    assign s_axi_b_valid  = (s_write_state == `ysyx22040228_S_RESP) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE ;

    assign write_ram_ena  = (s_write_state == `ysyx22040228_S_RESP) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE ;
    assign write_ram_addr = (s_write_state == `ysyx22040228_S_RESP) ? s_axi_aw_addr      : `ysyx22040228_ZEROWORD;
    assign write_ram_data = (s_write_state == `ysyx22040228_S_RESP) ? s_axi_w_data       : `ysyx22040228_ZEROWORD;

    wire   ar_shankhand   = s_axi_ar_ready && s_axi_ar_valid && (s_axi_ar_len == 8'd0) && (s_axi_ar_size == 3'b011) && (s_axi_ar_burst == 2'b0) ;
    wire   r_shankhand    = s_axi_r_ready && s_axi_r_valid ;
    reg  [1:0] s_read_state     ;
    reg  [1:0] s_read_state_nxt ;
    always @(posedge clk or negedge rst) begin
        if(rst == `ysyx22040228_RSTENA)
            s_read_state  <= `ysyx22040228_S_IDLE ;
        else 
            s_read_state  <= s_read_state_nxt     ;
    end

    always @(posedge clk or negedge rst) begin
        case (s_read_state)
            `ysyx22040228_S_IDLE : begin
                if(ar_shankhand)
                    s_read_state_nxt <= `ysyx22040228_S_DATA ;
                else if(s_axi_ar_valid)
                    s_read_state_nxt <= `ysyx22040228_S_ADDR ;
                else 
                    s_read_state_nxt <= `ysyx22040228_S_IDLE ;
            end 
            `ysyx22040228_S_ADDR : begin
                if(ar_shankhand)
                    s_read_state_nxt <= `ysyx22040228_S_DATA ;
                else 
                    s_read_state_nxt <= `ysyx22040228_S_ADDR ;
            end        
            `ysyx22040228_S_DATA : begin
                if(r_shankhand)
                    s_read_state_nxt <= `ysyx22040228_S_IDLE ;
                else 
                    s_read_state_nxt <= `ysyx22040228_S_DATA ; 
            end 
            default: s_read_state_nxt <= `ysyx22040228_S_IDLE;
        endcase
    end

    assign s_axi_ar_ready = ((s_read_state == `ysyx22040228_S_IDLE) | (s_read_state == `ysyx22040228_S_ADDR)) ;
    assign s_axi_r_valid  = (s_read_state == `ysyx22040228_S_DATA) ;
    assign s_axi_r_id     = (s_read_state == `ysyx22040228_S_DATA) ? s_axi_ar_id : 4'b0 ;
    assign s_axi_r_resp   = 2'b00 ;
    assign s_axi_r_last   = (s_read_state == `ysyx22040228_S_DATA) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE; 
    assign s_axi_r_data   = (s_read_state == `ysyx22040228_S_DATA) ? ((s_axi_ar_id == 4'b0000) ? ram_data_in : {32'b0, inst_data_in}) : `ysyx22040228_ZEROWORD;

    assign read_ram_ena   = ((s_read_state == `ysyx22040228_S_DATA) & (s_axi_ar_id == 4'b0000)) ;
    assign read_inst_ena  = ((s_read_state == `ysyx22040228_S_DATA) & (s_axi_ar_id == 4'b0001)) ;

endmodule
