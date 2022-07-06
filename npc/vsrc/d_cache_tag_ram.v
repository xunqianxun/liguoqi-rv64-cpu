module d_cache_tag_ram (
    input        wire                               clk,
    //input        wire                               rst,
    input        wire            [5:0]              addr_i,
    input        wire            [55:0]             data_i,
    input        wire                               write_ena,
    output       wire            [54:0]             tag_data ,
    output       wire                               tag_valid
);
    import "DPI-C" function void caceh_checkteg(input longint write_teg);

always @(*) begin
    if((addr_i == 6'b111101) && (write_ena))
        caceh_checkreg(data_i) ;
    else if(addr_i == 6'b111101)
        caceh_check(ram[addr_i]) ;
end

    reg [55:0] ram [0:63];
    reg [54:0] out_data  ;
    reg        out_vaild ;

    always @(posedge clk) begin
        if(write_ena) begin
            ram[addr_i] [54:0] <= data_i[54:0];
            ram[addr_i] [55] <= data_i[55];
        end 
        else begin
            out_data <= ram[addr_i] [54:0];
            out_vaild <= ram[addr_i] [55];
        end 
    end

    assign tag_data = out_data;
    assign tag_valid = out_vaild;

endmodule 

