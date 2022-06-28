module i_cache_data_ram (
    input            wire                                       clk        ,
    input            wire                                       rst        ,
    input            wire       [5:0]                           addr_i     ,
    input            wire       [31:0]                          data_i     ,
    input            wire                                       write_ena  ,
    output           wire       [31:0]                          data_o    
);

    reg [31:0] ram [0:63];
    reg [31:0] out_data  ;

    always @(posedge clk) begin
        if(write_ena)
            ram[addr_i] = data_i;
        out_data = ram[addr_i]  ;
    end

    assign data_o = out_data;
    
endmodule

