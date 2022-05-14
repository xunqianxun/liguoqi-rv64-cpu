/************************************************************
Author:LiGuoqi
Name:axi4_lite.v
Function:AXI4 bus
************************************************************/

`include "defines_axi4.v"

module axi4_lite #(
    parameter ADDR_WIDE = 64,
    parameter DATA_WIDE = 64,
    parameter ID_WIDE   = 4;
    // parameter S_PORT    = 2;
    // parameter RES_WIDE  = 1;
) (
    //sys
    input    wire                                        clk                ,
    input    wire                                        rst                ,

    //-----------------------------------------------------------------//
    //                    master channel                               //
    //               user to link cpu signal                           //
    //-----------------------------------------------------------------//

    input    wire     [S_PORT-1:0]                    write_device_select   ,
    input    wire     [S_PORT-1:0]                    read_device_select    ,
    //write address chnnel
    input    wire     [`ysyx22040228_ID       ]        master_axi_aw_id     , 
    input    wire     [`ysyx22040228_ADDR     ]        master_axi_aw_addr   ,
    input    wire     [`ysyx22040228_LEN      ]        master_axi_aw_len    ,
    input    wire     [`ysyx22040228_SIZE     ]        master_axi_aw_size   ,
    input    wire     [`ysyx22040228_BURST    ]        master_axi_aw_burst  ,
    input    wire     [`ysyx22040228_LOCK     ]        master_axi_aw_lock   ,
    input    wire     [`ysyx22040228_CACHE    ]        master_axi_aw_cache  ,
    inout    wire     [`ysyx22040228_PROT     ]        master_axi_aw_prot   ,
    inout    wire     [`ysyx22040228_QOS      ]        master_axi_aw_qos    ,
    input    wire     [`ysyx22040228_REGION   ]        master_axi_aw_region ,
    input    wire     [`ysyx22040228_USER     ]        master_axi_aw_user   ,
    input    wire                                      master_axi_aw_valid  ,
    output   wire                                      master_axi_aw_ready  , 

    //write data channel
    input    wire     [`ysyx22040228_ID       ]        master_axi_w_id      ,
    input    wire     [`ysyx22040228_DATA     ]        master_axi_w_data    ,
    input    wire     [`ysyx22040228_STRB     ]        master_axi_w_strb    ,
    input    wire     [`ysyx22040228_LAST     ]        master_axi_w_last    ,
    input    wire     [`ysyx22040228_USER     ]        master_axi_w_user    ,
    input    wire                                      master_axi_w_valid   ,
    output   wire                                      master_axi_w_ready   ,

    //write response channel
    output   wire     [`ysyx22040228_ID       ]        master_axi_b_id      ,
    output   wire     [`ysyx22040228_RESP     ]        master_axi_b_resp    ,
    output   wire     [`ysyx22040228_USER     ]        master_axi_b_user    ,
    output   wire                                      master_axi_b_valid   ,
    input    wire                                      master_axi_b_ready   ,

    //read address channel
    input    wire     [`ysyx22040228_ID       ]        master_axi_ar_id     ,
    input    wire     [`ysyx22040228_ADDR     ]        master_axi_ar_addr   ,
    input    wire     [`ysyx22040228_LEN      ]        master_axi_ar_len    ,
    input    wire     [`ysyx22040228_SIZE     ]        master_axi_ar_size   ,
    input    wire     [`ysyx22040228_BURST    ]        master_axi_ar_burst  ,
    input    wire     [`ysyx22040228_LOCK     ]        master_axi_ar_lock   ,
    input    wire     [`ysyx22040228_CACHE    ]        master_axi_ar_cache  ,
    input    wire     [`ysyx22040228_PROT     ]        master_axi_ar_prot   ,
    input    wire     [`ysyx22040228_QOS      ]        master_axi_ar_qos    ,
    input    wire     [`ysyx22040228_REGION   ]        master_axi_ar_region ,
    inout    wire     [`ysyx22040228_USER     ]        master_axi_ar_user   ,
    input    wire                                      master_axi_ar_valid  ,
    output   wire                                      master_axi_ar_ready  ,

    //read data channel
    output   wire     [`ysyx22040228_ID       ]        master_axi_r_id      ,
    output   wire     [`ysyx22040228_DATA     ]        master_axi_r_data    ,
    output   wire     [`ysyx22040228_RESP     ]        master_axi_r_resp    ,
    output   wire     [`ysyx22040228_LAST     ]        master_axi_r_last    ,
    output   wire     [`ysyx22040228_USER     ]        master_axi_r_user    ,
    output   wire                                      master_axi_r_valid   ,
    input    wire                                      master_axi_r_ready   ,

    //-----------------------------------------------------------------//
    //                    slave channel                                //
    //               user to link device signal                        //
    //-----------------------------------------------------------------//

    //write address chnnel
    output   wire     [`ysyx22040228_ID       ]        slave_axi_aw_id      , 
    output   wire     [`ysyx22040228_ADDR     ]        slave_axi_aw_addr    ,
    output   wire     [`ysyx22040228_LEN      ]        slave_axi_aw_len     ,
    output   wire     [`ysyx22040228_SIZE     ]        slave_axi_aw_size    ,
    output   wire     [`ysyx22040228_BURST    ]        slave_axi_aw_burst   ,
    output   wire     [`ysyx22040228_LOCK     ]        slave_axi_aw_lock    ,
    output   wire     [`ysyx22040228_CACHE    ]        slave_axi_aw_cache   ,
    output   wire     [`ysyx22040228_PROT     ]        slave_axi_aw_prot    ,
    output   wire     [`ysyx22040228_QOS      ]        slave_axi_aw_qos     ,
    output   wire     [`ysyx22040228_REGION   ]        slave_axi_aw_region  ,
    output   wire     [`ysyx22040228_USER     ]        slave_axi_aw_user    ,
    output   wire                                      slave_axi_aw_valid   ,
    input    wire                                      slave_axi_aw_ready   , 

    //write data channel
    output   wire     [`ysyx22040228_ID       ]        slave_axi_w_id       ,
    output   wire     [`ysyx22040228_DATA     ]        slave_axi_w_data     ,
    output   wire     [`ysyx22040228_STRB     ]        slave_axi_w_strb     ,
    output   wire     [`ysyx22040228_LAST     ]        slave_axi_w_last     ,
    output   wire     [`ysyx22040228_USER     ]        slave_axi_w_user     ,
    output   wire                                      slave_axi_w_valid    ,
    input    wire                                      slave_axi_w_ready    ,

    //write response channel
    input    wire     [`ysyx22040228_ID       ]        slave_axi_b_id       ,
    input    wire     [`ysyx22040228_RESP     ]        slave_axi_b_resp     ,
    input    wire     [`ysyx22040228_USER     ]        slave_axi_b_user     ,
    input    wire                                      slave_axi_b_valid    ,
    output   wire                                      slave_axi_b_ready    ,

    //read address channel
    output   wire     [`ysyx22040228_ID       ]        slave_axi_ar_id     ,
    output   wire     [`ysyx22040228_ADDR     ]        slave_axi_ar_addr   ,
    output   wire     [`ysyx22040228_LEN      ]        slave_axi_ar_len    ,
    output   wire     [`ysyx22040228_SIZE     ]        slave_axi_ar_size   ,
    output   wire     [`ysyx22040228_BURST    ]        slave_axi_ar_burst  ,
    output   wire     [`ysyx22040228_LOCK     ]        slave_axi_ar_lock   ,
    output   wire     [`ysyx22040228_CACHE    ]        slave_axi_ar_cache  ,
    output   wire     [`ysyx22040228_PROT     ]        slave_axi_ar_prot   ,
    output   wire     [`ysyx22040228_QOS      ]        slave_axi_ar_qos    ,
    output   wire     [`ysyx22040228_REGION   ]        slave_axi_ar_region ,
    output   wire     [`ysyx22040228_USER     ]        slave_axi_ar_user   ,
    output   wire                                      slave_axi_ar_valid  ,
    input    wire                                      slave_axi_ar_ready  ,

    //read data channel
    input    wire     [`ysyx22040228_ID       ]        slave_axi_r_id      ,
    input    wire     [`ysyx22040228_DATA     ]        slave_axi_r_data    ,
    input    wire     [`ysyx22040228_RESP     ]        slave_axi_r_resp    ,
    input    wire     [`ysyx22040228_LAST     ]        slave_axi_r_last    ,
    input    wire     [`ysyx22040228_USER     ]        slave_axi_r_user    ,
    input    wire                                      slave_axi_r_valid   ,
    output   wire                                      slave_axi_r_ready   
);
    parameter S_PORT    = 6;
    //parameter RES_WIDE  = 1;

   //------------------------------------------------------------------//
   //                 shun xu zhong cai                                //
   //------------------------------------------------------------------//
    wire  [`ysyx22040228_ID    ]   select_axi_aw_id     [S_PORT-1:0]  ;
    wire  [`ysyx22040228_ADDR  ]   select_axi_aw_addr   [S_PORT-1:0]  ;
    wire  [`ysyx22040228_LEN   ]   select_axi_aw_len    [S_PORT-1:0]  ;
    wire  [`ysyx22040228_SIZE  ]   select_axi_aw_size   [S_PORT-1:0]  ;
    wire  [`ysyx22040228_BURST ]   select_axi_aw_burst  [S_PORT-1:0]  ;
    wire  [`ysyx22040228_LOCK  ]   select_axi_aw_lock   [S_PORT-1:0]  ;
    wire  [`ysyx22040228_CACHE ]   select_axi_aw_cache  [S_PORT-1:0]  ;
    wire  [`ysyx22040228_PROT  ]   select_axi_aw_prot   [S_PORT-1:0]  ;
    wire  [`ysyx22040228_QOS   ]   select_axi_aw_qos    [S_PORT-1:0]  ;
    wire  [`ysyx22040228_REGION]   select_axi_aw_region [S_PORT-1:0]  ;
    wire  [`ysyx22040228_USER  ]   select_axi_aw_user   [S_PORT-1:0]  ;
    wire                           select_axi_aw_valid  [S_PORT-1:0]  ;
    wire                           select_axi_aw_ready  [S_PORT-1:0]  ; 

    //write data channel
    wire  [`ysyx22040228_ID    ]   select_axi_w_id      [S_PORT-1:0]  ;
    wire  [`ysyx22040228_DATA  ]   select_axi_w_data    [S_PORT-1:0]  ;
    wire  [`ysyx22040228_STRB  ]   select_axi_w_strb    [S_PORT-1:0]  ;
    wire  [`ysyx22040228_LAST  ]   select_axi_w_last    [S_PORT-1:0]  ;
    wire  [`ysyx22040228_USER  ]   select_axi_w_user    [S_PORT-1:0]  ;
    wire                           select_axi_w_valid   [S_PORT-1:0]  ;
    wire                           select_axi_w_ready   [S_PORT-1:0]  ;

    //write response channel
    wire  [`ysyx22040228_ID    ]   select_axi_b_id      [S_PORT-1:0]  ;
    wire  [`ysyx22040228_RESP  ]   select_axi_b_resp    [S_PORT-1:0]  ;
    wire  [`ysyx22040228_USER  ]   select_axi_b_user    [S_PORT-1:0]  ;
    wire                           select_axi_b_valid   [S_PORT-1:0]  ;
    wire                           select_axi_b_ready   [S_PORT-1:0]  ;

    //read address channel
    wire  [`ysyx22040228_ID    ]   select_axi_ar_id     [S_PORT-1:0]  ;
    wire  [`ysyx22040228_ADDR  ]   select_axi_ar_addr   [S_PORT-1:0]  ;
    wire  [`ysyx22040228_LEN   ]   select_axi_ar_len    [S_PORT-1:0]  ;
    wire  [`ysyx22040228_SIZE  ]   select_axi_ar_size   [S_PORT-1:0]  ;
    wire  [`ysyx22040228_BURST ]   select_axi_ar_burst  [S_PORT-1:0]  ;
    wire  [`ysyx22040228_LOCK  ]   select_axi_ar_lock   [S_PORT-1:0]  ;
    wire  [`ysyx22040228_CACHE ]   select_axi_ar_cache  [S_PORT-1:0]  ;
    wire  [`ysyx22040228_PROT  ]   select_axi_ar_prot   [S_PORT-1:0]  ;
    wire  [`ysyx22040228_QOS   ]   select_axi_ar_qos    [S_PORT-1:0]  ;
    wire  [`ysyx22040228_REGION]   select_axi_ar_region [S_PORT-1:0]  ;
    wire  [`ysyx22040228_USER  ]   select_axi_ar_user   [S_PORT-1:0]  ;
    wire                           select_axi_ar_valid  [S_PORT-1:0]  ;
    wire                           select_axi_ar_ready  [S_PORT-1:0]  ;

    //read data channel
    wire  [`ysyx22040228_ID    ]   select_axi_r_id      [S_PORT-1:0]  ;
    wire  [`ysyx22040228_DATA  ]   select_axi_r_data    [S_PORT-1:0]  ;
    wire  [`ysyx22040228_RESP  ]   select_axi_r_resp    [S_PORT-1:0]  ;
    wire  [`ysyx22040228_LAST  ]   select_axi_r_last    [S_PORT-1:0]  ;
    wire  [`ysyx22040228_USER  ]   select_axi_r_user    [S_PORT-1:0]  ;
    wire                           select_axi_r_valid   [S_PORT-1:0]  ;
    wire                           select_axi_r_ready   [S_PORT-1:0]  ;
    
    integer loop;
    always @(*) begin
        for(loop=0; loop < S_PORT; loop=loop+1) begin:joggle_loop
             //------------------------------------------------------------------------------------------------------------------------------
             //wirie address channel checok
             assign slave_axi_aw_id     [ID_WIDE * (loop+1)-1              : ID_WIDE * loop                ]   = selset_axi_aw_id     [loop] ;
             assign slave_axi_aw_addr   [ADDR_WIDE * (loop+1)-1            : ADDR_WIDE * loop              ]   = select_axi_aw_addr   [loop] ;
             assign slave_axi_aw_len    [`ysyx22040228_LEN * (loop+1)-1    : `ysyx22040228_LEN * loop      ]   = selset_axi_ar_len    [loop] ;
             assign slave_axi_aw_size   [`ysyx22040228_SIZE * (loop+1)-1   : `ysyx22040228_SIZE * loop     ]   = select_axi_aw_size   [loop] ;
             assign slave_axi_aw_burst  [`ysyx22040228_BURST * (loop+1)-1  : `ysyx22040228_BURST * loop    ]   = select_axi_aw_burst  [loop] ;
             assign slave_axi_aw_lock   [`ysyx22040228_LOCK * (loop+1)-1   : `ysyx22040228_LOCK * loop     ]   = select_axi_aw_lock   [loop] ;
             assign slave_axi_aw_cache  [`ysyx22040228_CACHE * (loop+1)-1  : `ysyx22040228_CACHE * loop    ]   = select_axi_aw_cache  [loop] ;
             assign slave_axi_aw_prot   [`ysyx22040228_PROT * (loop+1)-1   : `ysyx22040228_PROT * loop     ]   = select_axi_aw_prot   [loop] ;
             assign slave_axi_aw_qos    [`ysyx22040228_QOS * (loop+1)-1    : `ysyx22040228_QOS * loop      ]   = select_axi_aw_qos    [loop] ;
             assign slave_axi_aw_region [`ysyx22040228_REGION * (loop+1)-1 : `ysyx22040228_REGION *loop    ]   = select_axi_aw_region [loop] ;
             assign slave_axi_aw_user   [`ysyx22040228_USER * (loop+1)-1   : `ysyx22040228_USER *loop      ]   = select_axi_aw_user   [loop] ;
             assign slave_axi_aw_valid  [`ysyx22040228_VALID * (loop+1)-1  : `ysyx22040228_VALID *loop     ]   = select_axi_aw_valid  [loop] ;
             assign select_axi_aw_ready [loop] = slave_axi_aw_ready[`ysyx22040228_READYN * (loop+1)-1 : `ysyx22040228_READYN *loop ];
             //-------------------------------------------------------------------------------------------------------------------------------
             //write data channel checok
             assign slave_axi_w_id      [ID_WIDE * (loop+1)-1              : ID_WIDE * loop                ]   = selset_axi_w_id      [loop] ;
             assign slave_axi_w_data    [DATA_WIDE * (loop+1)-1            : DATA_WIDE * loop              ]   = select_axi_w_data    [loop] ;
             assign slave_axi_w_strb    [`ysyx22040228_STRBN * (loop+1)-1  : `ysyx22040228_STRBN *loop     ]   = select_axi_w_strb    [loop] ;
             assign slave_axi_w_last    [`ysyx22040228_LASTN * (loop+1)-1  : `ysyx22040228_LASTN *loop     ]   = select_axi_w_last    [loop] ;
             assign slave_axi_w_user    [`ysyx22040228_USERN * (loop+1)-1  : `ysyx22040228_USERN *loop     ]   = select_axi_w_user    [loop] ;
             assign slave_axi_w_valid   [`ysyx22040228_VALIDN * (loop+1)-1 : `ysyx22040228_VALIDN *loop    ]   = select_axi_w_valid   [loop] ;
             assign select_axi_w_ready  [loop] = slave_axi_w_ready[`ysyx22040228_READYN * (loop+1)-1 : `ysyx22040228_READYN *loop ] ;
             //-------------------------------------------------------------------------------------------------------------------------------
             //wire respons channel cheock
             assign select_axi_b_id     [loop] = slave_axi_b_id [ID_WIDE * (loop+1)-1              : ID_WIDE * loop               ] ;
             assign select_axi_b_resp   [loop] = slave_axi_b_resp [`ysyx22040228_RESPN * (loop+1)-1  : `ysyx22040228_RESPN *loop  ] ;
             assign select_axi_b_user   [loop] = slave_axi_b_user [`ysyx22040228_USERN * (loop+1)-1  : `ysyx22040228_USERN *loop  ] ;
             assign select_axi_b_valid  [loop] = slave_axi_b_valid[`ysyx22040228_VALIDN * (loop+1)-1 : `ysyx22040228_VALIDN *loop ] ;
             assign slave_axi_b_ready   [`ysyx22040228_READYN * (loop+1)-1 : `ysyx22040228_READYN *loop    ]   = select_axi_b_ready   [loop] ;
             //-------------------------------------------------------------------------------------------------------------------------------
             //read address channel cheock
             assign slave_axi_ar_id     [ID_WIDE * (loop+1)-1              : ID_WIDE * loop                ]   = select_axi_ar_id     [loop] ;
             assign slave_axi_ar_addr   [ADDR_WIDE * (loop+1)-1            : ADDR_WIDE * loop              ]   = sleect_axi_ar_addr   [loop] ;
             assign slave_axi_ar_len    [`ysyx22040228_LENN * (loop+1)-1   : `ysyx22040228_LENN * loop     ]   = select_axi_ar_len    [loop] ;
             assign slave_axi_ar_size   [`ysyx22040228_SIZEN * (loop+1)-1  : `ysyx22040228_SIZEN * loop    ]   = select_axi_ar_size   [loop] ;
             assign slave_axi_ar_burst  [`ysyx22040228_BURSTN * (loop+1)-1 : `ysyx22040228_BURSTN * loop   ]   = select_axi_ar_burst  [loop] ;
             assign slave_axi_ar_lock   [`ysyx22040228_LOCKN * (loop+1)-1  : `ysyx22040228_LOCKN * loop    ]   = select_axi_ar_lock   [loop] ;
             assign slave_axi_ar_cache  [`ysyx22040228_CACHEN * (loop+1)-1 : `ysyx22040228_CACHEN * loop   ]   = select_axi_ar_cache  [loop] ;
             assign slave_axi_ar_prot   [`ysyx22040228_PROTN * (loop+1)-1  : `ysyx22040228_PROTN * loop    ]   = select_axi_ar_prot   [loop] ;
             assign slave_axi_ar_qos    [`ysyx22040228_QOSN * (loop+1)-1   : `ysyx22040228_QOSN * loop     ]   = select_axi_ar_qos    [loop] ;
             assign slave_axi_ar_region [`ysyx22040228_REGIONN * (loop+1)-1: `ysyx22040228_REGIONN *loop   ]   = select_axi_ar_region [loop] ;
             assign slave_axi_ar_user   [`ysyx22040228_USERN * (loop+1)-1  : `ysyx22040228_USERN *loop     ]   = select_axi_ar_user   [loop] ;
             assign slave_axi_ar_valid  [`ysyx22040228_VALIDN * (loop+1)-1 : `ysyx22040228_VALIDN *loop    ]   = select_axi_ar_valid  [loop] ;
             assign select_axi_ar_ready [loop] = slave_axi_ar_ready[`ysyx22040228_READYN * (loop+1)-1 : `ysyx22040228_READYN *loop ];
             //-------------------------------------------------------------------------------------------------------------------------------
             //read data channel cheock
             assign select_axi_r_id     [loop] = slave_axi_r_id    [ID_WIDE * (loop+1)-1              : ID_WIDE * loop             ];
             assign select_axi_r_data   [loop] = slave_axi_r_data  [DATA_WIDE * (loop+1)-1            : DATA_WIDE * loop           ];
             assign select_axi_r_resp   [loop] = slave_axi_r_resp  [`ysyx22040228_RESPN * (loop+1)-1  : `ysyx22040228_RESPN *loop  ];
             assign select_axi_r_last   [loop] = slave_axi_r_last  [`ysyx22040228_LASTN * (loop+1)-1  : `ysyx22040228_LASTN *loop  ];
             assign select_axi_r_user   [loop] = slave_axi_r_user  [`ysyx22040228_USERN * (loop+1)-1  : `ysyx22040228_USERN *loop  ];
             assign select_axi_r_valid  [loop] = slave_axi_r_valid [`ysyx22040228_VALIDN * (loop+1)-1 : `ysyx22040228_VALIDN *loop ];
             assign slave_axi_r_ready   [`ysyx22040228_READYN * (loop+1)-1 : `ysyx22040228_READYN *loop    ]   = select_axi_r_ready   [loop] ;
        end 
    end
    //------------------------------------------------------------------------------------------------------------------------------------------------
    // write address channel
    wire  [S_PORT-1:0]  aw_port_select ;
    assign aw_port_select = ((write_device_select == `ysyx22040228_TIME) && select_axi_aw_ready[`ysyx22040228_TIME_SLECT]) ? `ysyx22040228_TIME_SLECT :
                            ((write_device_select == `ysyx22040228_UART) && select_axi_aw_ready[`ysyx22040228_UART_SLECT]) ? `ysyx22040228_UART_SLECT :
                            ((write_device_select == `ysyx22040228_IO)   && select_axi_aw_ready[`ysyx22040228_IO_SLECT])   ? `ysyx22040228_IO_SLECT   :
                            ((write_device_select == `ysyx22040228_VGA)  && select_axi_aw_ready[`ysyx22040228_VGA_SLECT])  ? `ysyx22040228_VGA_SLECT  :
                            ((write_device_select == `ysyx22040228_KEY)  && select_axi_aw_ready[`ysyx22040228_KEY_SLECT])  ? `ysyx22040228_KEY_SLECT  :
                            ((write_device_select == `ysyx22040228_OUT)  && select_axi_aw_ready[`ysyx22040228_OUT_SlECT])  ? `ysyx22040228_OUT_SLECT  :
                                                                                                                             `ysyx22040228_NOSELECT   ;   
    integer daxi ;
    always @(*) begin
        if(master_axi_aw_valid) begin
            for(daxi=0; daxi<S_PORT; daxi=daxi+1)begin
                assign select_axi_aw_id     [daxi]  =  (aw_port_select == daxi) ? master_axi_aw_id      : `ysyx22040228_ID_ZERO    ;
                assign select_axi_aw_addr   [daxi]  =  (aw_port_select == daxi) ? master_axi_aw_addr    : `ysyx22040228_ADDR_ZERO  ;
                assign select_axi_aw_len    [daxi]  =  (aw_port_select == daxi) ? master_axi_aw_len     : `ysyx22040228_LEN_ZERO   ;
                assign select_axi_aw_size   [daxi]  =  (aw_port_select == daxi) ? master_axi_aw_size    : `ysyx22040228_SIZE_ZERO  ;
                assign select_axi_aw_burst  [daxi]  =  (aw_port_select == daxi) ? master_axi_aw_burst   : `ysyx22040228_BURST_ZERO ;
                assign select_axi_aw_lock   [daxi]  =  (aw_port_select == daxi) ? master_axi_aw_lock    : `ysyx22040228_LOCK_ZERO  ;
                assign select_axi_aw_cache  [daxi]  =  (aw_port_select == daxi) ? master_axi_aw_cache   : `ysyx22040228_CACKE_ZERO ;
                assign select_axi_aw_prot   [daxi]  =  (aw_port_select == daxi) ? master_axi_aw_prot    : `ysyx22040228_PROT_ZERO  ;
                assign master_axi_aw_qos    [daxi]  =  (aw_port_select == daxi) ? master_axi_aw_qos     : `ysyx22040228_QOS_ZERO   ;
                assign select_axi_aw_region [daxi]  =  (aw_port_select == daxi) ? master_axi_aw_region  : `ysyx22040228_REGION_ZERO;
                assign select_axi_aw_user   [daxi]  =  (aw_port_select == daxi) ? master_axi_aw_user    : `ysyx22040228_USER_ZERO  ;
                assign select_axi_aw_valid  [daxi]  =  (aw_port_select == daxi) ? master_axi_aw_valid   : `ysyx22040228_VALID_ZERO ;
                assign master_axi_aw_ready          =  select_axi_aw_ready  [aw_port_select];
            end 
        end 
    end
    //------------------------------------------------------------------------------------------------------------------------------------------------
    // write data channel
    wire  [S_PORT-1:0]  w_port_select ;
    assign w_port_select  = ((write_device_select == `ysyx22040228_TIME) && select_axi_w_ready[`ysyx22040228_TIME_SLECT]) ? `ysyx22040228_TIME_SLECT :
                            ((write_device_select == `ysyx22040228_UART) && select_axi_w_ready[`ysyx22040228_UART_SLECT]) ? `ysyx22040228_UART_SLECT :
                            ((write_device_select == `ysyx22040228_IO)   && select_axi_w_ready[`ysyx22040228_IO_SLECT])   ? `ysyx22040228_IO_SLECT   :
                            ((write_device_select == `ysyx22040228_VGA)  && select_axi_w_ready[`ysyx22040228_VGA_SLECT])  ? `ysyx22040228_VGA_SLECT  :
                            ((write_device_select == `ysyx22040228_KEY)  && select_axi_w_ready[`ysyx22040228_KEY_SLECT])  ? `ysyx22040228_KEY_SLECT  :
                            ((write_device_select == `ysyx22040228_OUT)  && select_axi_w_ready[`ysyx22040228_OUT_SlECT])  ? `ysyx22040228_OUT_SLECT  : 
                                                                                                                            `ysyx22040228_NOSELECT   ;   
    integer daxi_w ;
    always @(*) begin
        if(master_axi_w_valid) begin
            for(daxi_w=0; daxi_w<S_PORT; daxi_w=daxi_w+1)begin
                assign select_axi_w_id      [daxi_w]  =  (w_port_select == daxi_w) ? master_axi_w_id       : `ysyx22040228_ID_ZERO    ;
                assign select_axi_w_data    [daxi_w]  =  (w_port_select == daxi_w) ? master_axi_w_data     : `ysyx22040228_DATA_ZERO  ;
                assign select_axi_w_strb    [daxi_w]  =  (w_port_select == daxi_w) ? master_axi_w_strb     : `ysyx22040228_STRB_ZERO  ;
                assign select_axi_w_last    [daxi_w]  =  (w_port_select == daxi_w) ? master_axi_w_last     : `ysyx22040228_LAST_ZERO  ;
                assign select_axi_w_user    [daxi_w]  =  (w_port_select == daxi_w) ? master_axi_w_user     : `ysyx22040228_USER_ZERO  ;
                assign select_axi_w_valid   [daxi_w]  =  (w_port_select == daxi_w) ? master_axi_w_valid    : `ysyx22040228_VALID_ZERO ;
                assign master_axi_w_ready           =  select_axi_w_ready  [w_port_select];
            end 
        end 
    end
    //------------------------------------------------------------------------------------------------------------------------------------------------
    // write respon channel
    wire  [S_PORT-1:0]  b_port_select ;
    assign b_port_select  = (select_axi_b_valid[`ysyx22040228_TIME_SLECT]) ? `ysyx22040228_TIME_SLECT :
                            (select_axi_b_valid[`ysyx22040228_UART_SLECT]) ? `ysyx22040228_UART_SLECT :
                            (select_axi_b_valid[`ysyx22040228_IO_SLECT])   ? `ysyx22040228_IO_SLECT   :
                            (select_axi_b_valid[`ysyx22040228_VGA_SLECT])  ? `ysyx22040228_VGA_SLECT  :
                            (select_axi_b_valid[`ysyx22040228_KEY_SLECT])  ? `ysyx22040228_KEY_SLECT  :
                            (select_axi_b_valid[`ysyx22040228_OUT_SlECT])  ? `ysyx22040228_OUT_SLECT  :   
                                                                             `ysyx22040228_NOSELECT   ;   
    integer daxi_b ;
    always @(*) begin
        if(master_axi_b_ready) begin
//            for(daxi=0; daxi<S_PORT; daxi=daxi+1)begin
                master_axi_b_id              =  select_axi_b_id     [b_port_select]  ; 
                master_axi_b_resp            =  select_axi_b_resp   [b_port_select]  ;
                master_axi_b_user            =  select_axi_b_user   [b_port_select]  ;
                master_axi_b_valid           =  select_axi_b_valid  [b_port_select]  ;
                for(daxi_b=0; daxi_b<S_PORT; daxi_b=daxi_b+1) begin
                select_axi_b_ready           =  (b_port_select == daxi_b) ? master_axi_b_ready    : `ysyx22040228_READY_ZERO ;
                end
//            end 
        end 
    end
    //------------------------------------------------------------------------------------------------------------------------------------------------
    // read address channel
    wire  [S_PORT-1:0]  ar_port_select ;
    assign ar_port_select = ((read_device_select == `ysyx22040228_TIME) && select_axi_ar_ready[`ysyx22040228_TIME_SLECT]) ? `ysyx22040228_TIME_SLECT :
                            ((read_device_select == `ysyx22040228_UART) && select_axi_ar_ready[`ysyx22040228_UART_SLECT]) ? `ysyx22040228_UART_SLECT :
                            ((read_device_select == `ysyx22040228_IO)   && select_axi_ar_ready[`ysyx22040228_IO_SLECT])   ? `ysyx22040228_IO_SLECT   :
                            ((read_device_select == `ysyx22040228_VGA)  && select_axi_ar_ready[`ysyx22040228_VGA_SLECT])  ? `ysyx22040228_VGA_SLECT  :
                            ((read_device_select == `ysyx22040228_KEY)  && select_axi_ar_ready[`ysyx22040228_KEY_SLECT])  ? `ysyx22040228_KEY_SLECT  :
                            ((read_device_select == `ysyx22040228_OUT)  && select_axi_ar_ready[`ysyx22040228_OUT_SlECT])  ? `ysyx22040228_OUT_SLECT  :
                                                                                                                             `ysyx22040228_NOSELECT   ;   
    integer daxi_ar ;
    always @(*) begin
        if(master_axi_ar_valid) begin
            for(daxi_ar=0; daxi_ar<S_PORT; daxi_ar=daxi_ar+1)begin
                assign select_axi_ar_id     [daxi_ar]  =  (ar_port_select == daxi_ar) ? master_axi_ar_id      : `ysyx22040228_ID_ZERO    ;
                assign select_axi_ar_addr   [daxi_ar]  =  (ar_port_select == daxi_ar) ? master_axi_ar_addr    : `ysyx22040228_ADDR_ZERO  ;
                assign select_axi_ar_len    [daxi_ar]  =  (ar_port_select == daxi_ar) ? master_axi_ar_len     : `ysyx22040228_LEN_ZERO   ;
                assign select_axi_ar_size   [daxi_ar]  =  (ar_port_select == daxi_ar) ? master_axi_ar_size    : `ysyx22040228_SIZE_ZERO  ;
                assign select_axi_ar_burst  [daxi_ar]  =  (ar_port_select == daxi_ar) ? master_axi_ar_burst   : `ysyx22040228_BURST_ZERO ;
                assign select_axi_ar_lock   [daxi_ar]  =  (ar_port_select == daxi_ar) ? master_axi_ar_lock    : `ysyx22040228_LOCK_ZERO  ;
                assign select_axi_ar_cache  [daxi_ar]  =  (ar_port_select == daxi_ar) ? master_axi_ar_cache   : `ysyx22040228_CACKE_ZERO ;
                assign select_axi_ar_prot   [daxi_ar]  =  (ar_port_select == daxi_ar) ? master_axi_ar_prot    : `ysyx22040228_PROT_ZERO  ;
                assign master_axi_ar_qos    [daxi_ar]  =  (ar_port_select == daxi_ar) ? master_axi_ar_qos     : `ysyx22040228_QOS_ZERO   ;
                assign select_axi_ar_region [daxi_ar]  =  (ar_port_select == daxi_ar) ? master_axi_ar_region  : `ysyx22040228_REGION_ZERO;
                assign select_axi_ar_user   [daxi_ar]  =  (ar_port_select == daxi_ar) ? master_axi_ar_user    : `ysyx22040228_USER_ZERO  ;
                assign select_axi_ar_valid  [daxi_ar]  =  (ar_port_select == daxi_ar) ? master_axi_ar_valid   : `ysyx22040228_VALID_ZERO ;
                assign master_axi_ar_ready          =  select_axi_ar_ready  [ar_port_select];
            end 
        end 
    end
    //------------------------------------------------------------------------------------------------------------------------------------------------
    // read data channel
    wire  [S_PORT-1:0]  r_port_select ;
    assign r_port_select  = (select_axi_r_valid[`ysyx22040228_TIME_SLECT]) ? `ysyx22040228_TIME_SLECT :
                            (select_axi_r_valid[`ysyx22040228_UART_SLECT]) ? `ysyx22040228_UART_SLECT :
                            (select_axi_r_valid[`ysyx22040228_IO_SLECT])   ? `ysyx22040228_IO_SLECT   :
                            (select_axi_r_valid[`ysyx22040228_VGA_SLECT])  ? `ysyx22040228_VGA_SLECT  :
                            (select_axi_r_valid[`ysyx22040228_KEY_SLECT])  ? `ysyx22040228_KEY_SLECT  :
                            (select_axi_r_valid[`ysyx22040228_OUT_SlECT])  ? `ysyx22040228_OUT_SLECT  :   
                                                                             `ysyx22040228_NOSELECT   ;   
    integer daxi_r ;
    always @(*) begin
        if(master_axi_r_ready) begin
//            for(daxi=0; daxi<S_PORT; daxi=daxi+1)begin
                master_axi_r_id              =  select_axi_r_id     [r_port_select]  ; 
                master_axi_r_data            =  select_axi_r_data   [r_port_select]  ;
                master_axi_r_resp            =  select_axi_r_resp   [r_port_select]  ;
                master_axi_r_last            =  select_axi_r_last   [r_port_select]  ;
                master_axi_r_user            =  select_axi_r_user   [r_port_select]  ;
                master_axi_r_valid           =  select_axi_r_valid  [r_port_select]  ;
                for(daxi_r=0; daxi_r<S_PORT; daxi_r=daxi_r+1) begin
                select_axi_r_ready           =  (r_port_select == daxi_r) ? master_axi_r_ready    : `ysyx22040228_READY_ZERO ;
                end
//            end 
        end 
    end
    
endmodule