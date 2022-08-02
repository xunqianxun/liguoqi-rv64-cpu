`include "defines.v"
module submit (
    input       wire                                         rst          ,

    input       wire     [`ysyx22040228_REGADDRBUS]          aluo_addr    ,
    input       wire                                         aluo_ena     ,
    input       wire     [`ysyx22040228_REGBUS]              aluo_data    ,
    input       wire     [`ysyx22040228_PCBUS]               aluo_pc      ,

    input       wire     [`ysyx22040228_REGADDRBUS]          alut_addr    ,
    input       wire                                         alut_ena     ,
    input       wire     [`ysyx22040228_REGBUS]              alut_data    ,
    input       wire     [`ysyx22040228_PCBUS]               alut_pc      ,

    input       wire     [`ysyx22040228_REGADDRBUS]          mmu_addr     ,
    input       wire                                         mmu_ena      ,
    input       wire     [`ysyx22040228_REGBUS]              mmu_data     ,
    input       wire     [`ysyx22040228_PCBUS]               mmu_pc       ,

    output      reg      [`ysyx22040228_REGBUS]              submit_data1 ,
    output      reg      [`ysyx22040228_REGADDRBUS]          submit_addr1 ,
    output      reg                                          submit_ena1  ,

    output      reg      [`ysyx22040228_REGBUS]              submit_data2 ,
    output      reg      [`ysyx22040228_REGADDRBUS]          submit_addr2 ,
    output      reg                                          submit_ena2  , 

    output      reg      [`ysyx22040228_REGADDRBUS]          submit_addr3 ,
    output      reg      [`ysyx22040228_REGBUS]              submit_data3 ,
    output      reg                                          submit_ena3   
);

    //-----------------------------write-affter-write-------------------------------//
    wire   wbw_aluo_alut ;
    wire   wbw_aluo_mmu  ;
    wire   wbw_alut_mmu  ;
    wire   wbw_ao_at_mm  ;
    assign wbw_aluo_alut = aluo_ena & alut_ena & (aluo_addr == alut_addr) ;
    assign wbw_aluo_mmu  = aluo_ena & mmu_ena  & (aluo_addr == mmu_addr ) ;
    assign wbw_alut_mmu  = alut_ena & mmu_ena  & (alut_addr == mmu_addr ) ;
    assign wbw_ao_at_mm  = aluo_ena & alut_ena & mmu_ena & (aluo_addr == alut_addr) & (aluo_addr == mmu_addr ) & (alut_addr == mmu_addr ) ;

    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            submit_data1 = `ysyx22040228_ZEROWORD      ;
            submit_addr1 = 5'b00000                    ;
            submit_ena1  = 1'b0                        ;
            submit_data2 = `ysyx22040228_ZEROWORD      ;
            submit_addr2 = 5'b00000                    ;
            submit_ena2  = 1'b0                        ;
            submit_data3 = `ysyx22040228_ZEROWORD      ;
            submit_addr3 = 5'b00000                    ;
            submit_ena3  = 1'b0                        ;            
        end 
         else if(wbw_ao_at_mm) begin
            if((aluo_pc > alut_pc) && (aluo_pc > mmu_pc)) begin
                submit_data1 = aluo_data               ;
                submit_addr1 = aluo_addr               ;
                submit_ena1  = aluo_ena                ;
            end 
            else if((alut_pc > aluo_pc) && (alut_pc > mmu_pc)) begin
                submit_data2 = alut_data               ;
                submit_addr2 = alut_addr               ;
                submit_ena2  = alut_ena                ;
            end 
            else if((mmu_pc > aluo_pc) && (mmu_pc > alut_pc)) begin
                submit_data3 = mmu_data                ;
                submit_addr3 = mmu_addr                ;
                submit_ena3  = mmu_ena                 ;
            end 
        end 
        else if(wbw_aluo_alut && mmu_ena)begin
            submit_data3 = mmu_data                    ;
            submit_addr3 = mmu_addr                    ;
            submit_ena3  = mmu_ena                     ;
            if(aluo_pc > alut_pc)begin
                submit_data1 = aluo_data               ;
                submit_addr1 = aluo_addr               ;
                submit_ena1  = aluo_ena                ;
            end 
            else begin
                submit_data2 = alut_data               ;
                submit_addr2 = alut_addr               ;
                submit_ena2  = alut_ena                ;
            end 
        end 
        else if(wbw_aluo_mmu && alut_ena)begin
            submit_data2 = alut_data                   ;
            submit_addr2 = alut_addr                   ;
            submit_ena2  = alut_ena                    ;
            if(aluo_pc > mmu_pc)begin
                submit_data1 = aluo_data               ;
                submit_addr1 = aluo_addr               ;
                submit_ena1  = aluo_ena                ;
            end 
            else begin
                submit_data3 = mmu_data                ;
                submit_addr3 = mmu_addr                ;
                submit_ena3  = mmu_ena                 ;
            end 
        end 
        else if(wbw_alut_mmu && alut_ena)begin
            submit_data1 = aluo_data                   ;
            submit_addr1 = aluo_addr                   ;
            submit_ena1  = aluo_ena                    ;
            if(alut_pc > mmu_pc)begin
                submit_data2 = alut_data               ;
                submit_addr2 = alut_addr               ;
                submit_ena2  = alut_ena                ;
            end 
            else begin
                submit_data3 = mmu_data                ;
                submit_addr3 = mmu_addr                ;
                submit_ena3  = mmu_ena                 ;
            end 
        end 
        else if(wbw_aluo_alut)begin
            if(aluo_pc > alut_pc)begin
                submit_data1 = aluo_data               ;
                submit_addr1 = aluo_addr               ;
                submit_ena1  = aluo_ena                ;
            end 
            else begin
                submit_data2 = alut_data               ;
                submit_addr2 = alut_addr               ;
                submit_ena2  = alut_ena                ;
            end 
        end 
        else if(wbw_aluo_mmu)begin
            if(aluo_pc > mmu_pc)begin
                submit_data1 = aluo_data               ;
                submit_addr1 = aluo_addr               ;
                submit_ena1  = aluo_ena                ;
            end 
            else begin
                submit_data3 = mmu_data                ;
                submit_addr3 = mmu_addr                ;
                submit_ena3  = mmu_ena                 ;
            end 
        end 
        else if(wbw_alut_mmu)begin
            if(alut_pc > mmu_pc)begin
                submit_data2 = alut_data               ;
                submit_addr2 = alut_addr               ;
                submit_ena2  = alut_ena                ;
            end 
            else begin
                submit_data3 = mmu_data                ;
                submit_addr3 = mmu_addr                ;
                submit_ena3  = mmu_ena                 ;
            end 
        end
        else begin
                submit_data1 = aluo_data               ;
                submit_addr1 = aluo_addr               ;
                submit_ena1  = aluo_ena                ;
                submit_data2 = aluo_data               ;
                submit_addr2 = aluo_addr               ;
                submit_ena2  = aluo_ena                ;
                submit_data3 = aluo_data               ;
                submit_addr3 = aluo_addr               ;
                submit_ena3  = aluo_ena                ;
        end 
    end

    
endmodule

