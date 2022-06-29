module d_cache_data_ram (
    input            wire                                       clk        ,
    //input            wire                                       rst        ,
    input            wire       [5:0]                           addr_i     ,
    input            wire       [63:0]                          data_i     ,
    input            wire       [7:0]                           write_ena  ,
    output           wire       [63:0]                          data_o    
);

    reg [63:0] ram [0:63];
    reg [63:0] out_data  ;

    always @(posedge clk) begin
        if(write_ena[0])
            ram [addr_i] [ 7:0 ] <= data_i [ 7:0 ];
        if(write_ena[1])
            ram [addr_i] [15:8 ] <= data_i [15:8 ];
        if(write_ena[2])
            ram [addr_i] [23:16] <= data_i [23:16];
        if(write_ena[3])
            ram [addr_i] [31:24] <= data_i [31:24];
        if(write_ena[4])
            ram [addr_i] [39:32] <= data_i [39:32];
        if(write_ena[5])
            ram [addr_i] [47:40] <= data_i [47:40];
        if(write_ena[6])
            ram [addr_i] [55:48] <= data_i [55:48];
        if(write_ena[7])
            ram [addr_i] [63:56] <= data_i [63:56];
        out_data <= ram[addr_i];
    end

    assign data_o = out_data;
    
endmodule


