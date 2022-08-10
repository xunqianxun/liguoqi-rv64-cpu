`include "defines.v"
module socreboard (
    //----------------------------need stop type-----------------------------//
    //                type_needstop1[0] ---->  div and multiplier            //
    //                type_needstop1[1] ---->  load and store                //
    //                type_needstop1[2] ---->  CSR inst                      //
    //                type_needstop1[3] ---->  JUMP                          //
    //                type_needstop1[4] ---->  OTHER_WORKING                 //
    //                type_needstop1[5] ---->  trap about                    //
    //-----------------------------------------------------------------------//
    input         wire    [`ysyx22040228_PCBUS]                decode1_pc    ,
    input         wire    [5:0]                                type_needstop1,
    input         wire    [`ysyx22040228_REGADDRBUS]           decode11_addr ,
    input         wire                                         decode11_ena  ,
    input         wire    [`ysyx22040228_REGADDRBUS]           decode12_addr ,
    input         wire                                         decode12_ena  ,
    input         wire    [`ysyx22040228_REGADDRBUS]           de1_wb_addr   ,
    input         wire                                         de1_wb_ena    ,
    input         wire    [`ysyx22040228_PCBUS]                decode2_pc    ,
    input         wire    [5:0]                                type_needstop2,
    input         wire    [`ysyx22040228_REGADDRBUS]           decode21_addr ,
    input         wire                                         decode21_ena  ,
    input         wire    [`ysyx22040228_REGADDRBUS]           decode22_addr ,
    input         wire                                         decode22_ena  ,
    input         wire    [`ysyx22040228_REGADDRBUS]           de2_wb_addr   ,
    input         wire                                         de2_wb_ena    ,

    input         wire    [`ysyx22040228_REGADDRBUS]           aluo_addr     ,
    input         wire                                         aluo_ena      ,
    input         wire    [`ysyx22040228_REGADDRBUS]           alut_addr     ,
    input         wire                                         alut_ena      ,
    input         wire    [`ysyx22040228_REGADDRBUS]           mmu_addr      ,
    input         wire                                         mmu_ena       ,

    input         wire                                         aluo_busy     ,
    input         wire                                         alut_busy     ,
    input         wire                                         mmu_busy      ,

    input         wire                                         timer_intr    ,

    //---------------------------exe_chose----------------------------------//
    //                chose_exu1[0] ----> ALU1                              //
    //                chose_exu1[1] ----> ALU2                              //
    //                chose_exu1[2] ----> MMU                               //
    //----------------------------------------------------------------------//
    output        wire    [2:0]                                chose_exu1    ,
    output        wire    [2:0]                                chose_exu2    ,
    output        wire                                         decode1_launch,
    output        wire                                         decode2_launch,
    output        wire                                         de_ex_cleano  ,
    output        wire                                         de_ex_cleant  ,
    output        wire                                         shoud_nop_de1 ,
    output        wire                                         shoud_nop_de2 ,
    output        wire    [`ysyx22040228_PCBUS]                retire_pc     
);
    //---------------------------register table------------------------------//
    //reg  [4:0] reg_decode_name [0:3] ;
    wire   [4:0] reg_exe_name    [0:2] ;

    assign reg_exe_name[0]    = aluo_ena    ? aluo_addr    : 5'b00000 ;
    assign reg_exe_name[1]    = alut_ena    ? alut_addr    : 5'b00000 ;
    assign reg_exe_name[2]    = mmu_ena     ? mmu_addr     : 5'b00000 ;

    wire         busy            [0:2] ;
    assign       busy [0]     = aluo_busy   ? 1'b1         : 1'b0     ;
    assign       busy [1]     = alut_busy   ? 1'b1         : 1'b0     ;       
    assign       busy [2]     = mmu_busy    ? 1'b1         : 1'b0     ;

    wire   shoudo_stop_waw ;
    assign shoudo_stop_waw = ((reg_exe_name[0] == de1_wb_addr) && de1_wb_ena && busy[0] ) ? 1'b1 :
                             ((reg_exe_name[1] == de1_wb_addr) && de1_wb_ena && busy[1] ) ? 1'b1 :
                             ((reg_exe_name[2] == de1_wb_addr) && de1_wb_ena && busy[2] ) ? 1'b1 :
                             ((de1_wb_addr == de2_wb_addr) && de1_wb_ena && de2_wb_ena && (decode1_pc > decode2_pc)) ? 1'b1 :
                                                                                            1'b0 ;
    wire   shoudt_stop_waw ;
    assign shoudt_stop_waw = ((reg_exe_name[0] == de2_wb_addr) && de2_wb_ena && busy[0] ) ? 1'b1 :
                             ((reg_exe_name[1] == de2_wb_addr) && de2_wb_ena && busy[1] ) ? 1'b1 :
                             ((reg_exe_name[2] == de2_wb_addr) && de2_wb_ena && busy[2] ) ? 1'b1 :
                             ((de1_wb_addr == de2_wb_addr) && de1_wb_ena && de2_wb_ena && (decode1_pc < decode2_pc)) ? 1'b1 :
                                                                                            1'b0 ;
    wire   shoudo1_stop_war ;
    assign shoudo1_stop_war = ((reg_exe_name[0] == decode11_addr) && decode11_ena && busy[0] ) ? 1'b1 :
                              ((reg_exe_name[1] == decode11_addr) && decode11_ena && busy[1] ) ? 1'b1 :
                              ((reg_exe_name[2] == decode11_addr) && decode11_ena && busy[2] ) ? 1'b1 :
                              ((decode11_addr == de2_wb_addr) && decode11_ena && de2_wb_ena && (decode1_pc > decode2_pc)) ? 1'b1 : 
                              ((de1_wb_addr == decode21_addr) && de1_wb_ena && (type_needstop2[0] || type_needstop2[1]) && (decode1_pc > decode2_pc))  ? 1'b1 :
                                                                                                 1'b0 ;
    wire   shoudo2_stop_war ;
    assign shoudo2_stop_war = ((reg_exe_name[0] == decode12_addr) && decode12_ena && busy[0] ) ? 1'b1 :
                              ((reg_exe_name[1] == decode12_addr) && decode12_ena && busy[1] ) ? 1'b1 :
                              ((reg_exe_name[2] == decode12_addr) && decode12_ena && busy[2] ) ? 1'b1 :
                              ((decode12_addr == de2_wb_addr) && decode12_ena && de2_wb_ena && (decode1_pc > decode2_pc)) ? 1'b1 : 
                              ((de1_wb_addr == decode22_addr) && de1_wb_ena && (type_needstop2[0] || type_needstop2[1]) && (decode1_pc > decode2_pc))  ? 1'b1 :
                                                                                                 1'b0 ;
    wire   shoudt1_stop_war ;
    assign shoudt1_stop_war = ((reg_exe_name[0] == decode21_addr) && decode21_ena && busy[0] ) ? 1'b1 :
                              ((reg_exe_name[1] == decode21_addr) && decode21_ena && busy[1] ) ? 1'b1 :
                              ((reg_exe_name[2] == decode21_addr) && decode21_ena && busy[2] ) ? 1'b1 :
                              ((decode21_addr == de1_wb_addr) && decode21_ena && de1_wb_ena && (decode1_pc < decode2_pc)) ? 1'b1 :
                              ((de2_wb_addr == decode11_addr) && de2_wb_ena && (type_needstop1[0] || type_needstop1[1]) && (decode1_pc < decode2_pc))  ? 1'b1 : 
                                                                                                 1'b0 ;
    wire   shoudt2_stop_war ;
    assign shoudt2_stop_war = ((reg_exe_name[0] == decode22_addr) && decode22_ena && busy[0] ) ? 1'b1 :
                              ((reg_exe_name[1] == decode22_addr) && decode22_ena && busy[1] ) ? 1'b1 :
                              ((reg_exe_name[2] == decode22_addr) && decode22_ena && busy[2] ) ? 1'b1 :
                              ((decode22_addr == de1_wb_addr) && decode22_ena && de1_wb_ena && (decode1_pc < decode2_pc)) ? 1'b1 :
                              ((de2_wb_addr == decode12_addr) && de2_wb_ena && (type_needstop1[0] || type_needstop1[1]) && (decode1_pc < decode2_pc))  ? 1'b1 :
                                                                                                 1'b0 ;
    wire   shoudo_stop_ctrl ; 
    assign shoudo_stop_ctrl = type_needstop1[3] && (shoudo_stop_waw | shoudo1_stop_war | shoudo2_stop_war | shoudo_stop_hard) ;

    wire   shoudt_stop_ctrl ; 
    assign shoudt_stop_ctrl = type_needstop2[3] && (shoudo_stop_waw | shoudo1_stop_war | shoudo2_stop_war | shoudo_stop_hard) ;  
            
                                                                                                
    wire   shoudo_stop_hard ; 
    assign shoudo_stop_hard =  (type_needstop1[0] & (busy[0] & busy[1]))                       ? 1'b1 :
                               (type_needstop1[1] & busy[2] )                                  ? 1'b1 :
                               (type_needstop1[2] & busy[0] )                                  ? 1'b1 :
                               (type_needstop1[3] & (busy[0] & busy[1]))                       ? 1'b1 :
                               (type_needstop1[4] & (busy[0] & busy[1]))                       ? 1'b1 :
                                                                                                 1'b0 ;
    wire   shoudt_stop_hard ;  
    assign shoudt_stop_hard =  (type_needstop2[0] & ((busy[0] & busy[1]) || (((busy[0] | busy[1]) || (busy[0] | busy[1])) && type_needstop1[0])))   ? 1'b1 :
                               (type_needstop2[1] & (busy[2] | type_needstop1[1]))                                                                  ? 1'b1 :
                               (type_needstop2[2] & (busy[0] | type_needstop1[2]))                                                                  ? 1'b1 :
                               (type_needstop2[3] & (busy[0] & busy[1]))                                                                            ? 1'b1 :
                               (type_needstop2[4] & ((busy[0] & busy[1]) || (((busy[0] | busy[1]) || (busy[0] | busy[1])) && type_needstop1[4])))   ? 1'b1 :              
                                                                                                                                                      1'b0 ;
    wire   shoudo_stop_trap ;
    assign shoudo_stop_trap = ((type_needstop1[5] || (timer_intr & (shoudo_stop_waw | shoudo1_stop_war | shoudo2_stop_war | shoudo_stop_hard))) && (busy[0] | busy[1] | busy[2]) && de2_wb_ena) ? 1'b1 : 1'b0 ;
    wire   shoudt_stop_trap ;
    assign shoudt_stop_trap = ((type_needstop2[5] || (timer_intr & (shoudt_stop_waw | shoudt1_stop_war | shoudt2_stop_war | shoudt_stop_hard))) && (busy[0] | busy[1] | busy[2]) && de1_wb_ena) ? 1'b1 : 1'b0 ;

    assign retire_pc       = shoudo_stop_trap ? decode1_pc :
                             shoudt_stop_trap ? decode2_pc :
                                       64'hffffffffffffffff;

    assign shoud_nop_de1   = shoudt_stop_trap ;
    assign shoud_nop_de2   = shoudo_stop_trap ;

    assign de_ex_cleano     = (type_needstop1[3] && (decode1_pc < decode2_pc))                      ? 1'b1 : 1'b0 ;

    assign de_ex_cleant     = (type_needstop2[3] && (decode1_pc > decode2_pc))                      ? 1'b1 : 1'b0 ;

    assign decode1_launch   = shoudo_stop_waw | shoudo1_stop_war | shoudo2_stop_war | shoudo_stop_hard | shoudo_stop_ctrl | shoudo_stop_trap;
    assign decode2_launch   = shoudt_stop_waw | shoudt1_stop_war | shoudt2_stop_war | shoudt_stop_hard | shoudt_stop_ctrl | shoudt_stop_trap;

    assign chose_exu1       = (~decode1_launch & (type_needstop1[5] | (timer_intr && de1_wb_ena))) ?  3'b001 :
                              (~decode1_launch & type_needstop1[0] & ~busy[0]) ?  3'b001 :
                              (~decode1_launch & type_needstop1[0] & ~busy[1]) ?  3'b010 :
                              (~decode1_launch & type_needstop1[1]           ) ?  3'b100 :
                              (~decode1_launch & type_needstop1[2]           ) ?  3'b001 :
                              (~decode1_launch & type_needstop1[3] & ~busy[0]) ?  3'b001 :
                              (~decode1_launch & type_needstop1[3] & ~busy[1]) ?  3'b010 :
                              (~decode1_launch & type_needstop1[4] & ~busy[0]) ?  3'b001 :
                              (~decode1_launch & type_needstop1[4] & ~busy[1]) ?  3'b010 :
                                                                                  3'b000 ;
    assign chose_exu2       = (~decode2_launch & (type_needstop2[5] | (timer_intr && de2_wb_ena))) ?  3'b001 :
                              (~decode2_launch & type_needstop2[0] & ~busy[1]) ?  3'b010 :
                              (~decode2_launch & type_needstop2[0] & ~busy[0]) ?  3'b001 :
                              (~decode2_launch & type_needstop2[1]           ) ?  3'b100 :
                              (~decode2_launch & type_needstop2[2]           ) ?  3'b001 :
                              (~decode2_launch & type_needstop2[3] & ~busy[1]) ?  3'b010 :
                              (~decode2_launch & type_needstop2[3] & ~busy[0]) ?  3'b001 :
                              (~decode2_launch & type_needstop2[4] & ~busy[1]) ?  3'b010 :
                              (~decode2_launch & type_needstop2[4] & ~busy[0]) ?  3'b001 :
                                                                                  3'b000 ;


endmodule
