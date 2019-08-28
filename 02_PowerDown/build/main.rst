                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.0 #9615 (Linux)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _CCF0
                                     13 	.globl _CCF1
                                     14 	.globl _CCF2
                                     15 	.globl _CR
                                     16 	.globl _CF
                                     17 	.globl _PADC
                                     18 	.globl _PLVD
                                     19 	.globl _PPCA
                                     20 	.globl _EADC
                                     21 	.globl _ELVD
                                     22 	.globl _P4_7
                                     23 	.globl _P4_6
                                     24 	.globl _P4_5
                                     25 	.globl _P4_4
                                     26 	.globl _P4_3
                                     27 	.globl _P4_2
                                     28 	.globl _P4_1
                                     29 	.globl _P4_0
                                     30 	.globl _CY
                                     31 	.globl _AC
                                     32 	.globl _F0
                                     33 	.globl _RS1
                                     34 	.globl _RS0
                                     35 	.globl _OV
                                     36 	.globl _F1
                                     37 	.globl _P
                                     38 	.globl _PS
                                     39 	.globl _PT1
                                     40 	.globl _PX1
                                     41 	.globl _PT0
                                     42 	.globl _PX0
                                     43 	.globl _RD
                                     44 	.globl _WR
                                     45 	.globl _T1
                                     46 	.globl _T0
                                     47 	.globl _INT1
                                     48 	.globl _INT0
                                     49 	.globl _TXD
                                     50 	.globl _RXD
                                     51 	.globl _P3_7
                                     52 	.globl _P3_6
                                     53 	.globl _P3_5
                                     54 	.globl _P3_4
                                     55 	.globl _P3_3
                                     56 	.globl _P3_2
                                     57 	.globl _P3_1
                                     58 	.globl _P3_0
                                     59 	.globl _EA
                                     60 	.globl _ES
                                     61 	.globl _ET1
                                     62 	.globl _EX1
                                     63 	.globl _ET0
                                     64 	.globl _EX0
                                     65 	.globl _P2_7
                                     66 	.globl _P2_6
                                     67 	.globl _P2_5
                                     68 	.globl _P2_4
                                     69 	.globl _P2_3
                                     70 	.globl _P2_2
                                     71 	.globl _P2_1
                                     72 	.globl _P2_0
                                     73 	.globl _SM0
                                     74 	.globl _SM1
                                     75 	.globl _SM2
                                     76 	.globl _REN
                                     77 	.globl _TB8
                                     78 	.globl _RB8
                                     79 	.globl _TI
                                     80 	.globl _RI
                                     81 	.globl _P1_7
                                     82 	.globl _P1_6
                                     83 	.globl _P1_5
                                     84 	.globl _P1_4
                                     85 	.globl _P1_3
                                     86 	.globl _P1_2
                                     87 	.globl _P1_1
                                     88 	.globl _P1_0
                                     89 	.globl _TF1
                                     90 	.globl _TR1
                                     91 	.globl _TF0
                                     92 	.globl _TR0
                                     93 	.globl _IE1
                                     94 	.globl _IT1
                                     95 	.globl _IE0
                                     96 	.globl _IT0
                                     97 	.globl _P0_7
                                     98 	.globl _P0_6
                                     99 	.globl _P0_5
                                    100 	.globl _P0_4
                                    101 	.globl _P0_3
                                    102 	.globl _P0_2
                                    103 	.globl _P0_1
                                    104 	.globl _P0_0
                                    105 	.globl _PWMFDCR
                                    106 	.globl _PWMIF
                                    107 	.globl _PWMCR
                                    108 	.globl _PWMCFG
                                    109 	.globl _CMPCR2
                                    110 	.globl _CMPCR1
                                    111 	.globl _CCAP2H
                                    112 	.globl _CCAP1H
                                    113 	.globl _CCAP0H
                                    114 	.globl _PCA_PWM2
                                    115 	.globl _PCA_PWM1
                                    116 	.globl _PCA_PWM0
                                    117 	.globl _CCAP2L
                                    118 	.globl _CCAP1L
                                    119 	.globl _CCAP0L
                                    120 	.globl _CCAPM2
                                    121 	.globl _CCAPM1
                                    122 	.globl _CCAPM0
                                    123 	.globl _CH
                                    124 	.globl _CL
                                    125 	.globl _CMOD
                                    126 	.globl _CCON
                                    127 	.globl _IAP_CONTR
                                    128 	.globl _IAP_TRIG
                                    129 	.globl _IAP_CMD
                                    130 	.globl _IAP_ADDRL
                                    131 	.globl _IAP_ADDRH
                                    132 	.globl _IAP_DATA
                                    133 	.globl _SPDAT
                                    134 	.globl _SPCTL
                                    135 	.globl _SPSTAT
                                    136 	.globl _ADC_RESL
                                    137 	.globl _ADC_RES
                                    138 	.globl _ADC_CONTR
                                    139 	.globl _SADEN
                                    140 	.globl _SADDR
                                    141 	.globl _S4BUF
                                    142 	.globl _S4CON
                                    143 	.globl _S3BUF
                                    144 	.globl _S3CON
                                    145 	.globl _S2BUF
                                    146 	.globl _S2CON
                                    147 	.globl _WDT_CONTR
                                    148 	.globl _WKTCH
                                    149 	.globl _WKTCL
                                    150 	.globl _T2L
                                    151 	.globl _T2H
                                    152 	.globl _T3L
                                    153 	.globl _T3H
                                    154 	.globl _T4L
                                    155 	.globl _T4H
                                    156 	.globl _T3T4M
                                    157 	.globl _T4T3M
                                    158 	.globl _INT_CLKO
                                    159 	.globl _IP2
                                    160 	.globl _IE2
                                    161 	.globl _P_SW2
                                    162 	.globl _P1ASF
                                    163 	.globl _BUS_SPEED
                                    164 	.globl _CLK_DIV
                                    165 	.globl _P_SW1
                                    166 	.globl _AUXR1
                                    167 	.globl _AUXR
                                    168 	.globl _P7M1
                                    169 	.globl _P7M0
                                    170 	.globl _P6M1
                                    171 	.globl _P6M0
                                    172 	.globl _P5M1
                                    173 	.globl _P5M0
                                    174 	.globl _P4M1
                                    175 	.globl _P4M0
                                    176 	.globl _P3M1
                                    177 	.globl _P3M0
                                    178 	.globl _P2M1
                                    179 	.globl _P2M0
                                    180 	.globl _P1M1
                                    181 	.globl _P1M0
                                    182 	.globl _P0M1
                                    183 	.globl _P0M0
                                    184 	.globl _P4
                                    185 	.globl _B
                                    186 	.globl _ACC
                                    187 	.globl _PSW
                                    188 	.globl _IP
                                    189 	.globl _P3
                                    190 	.globl _IE
                                    191 	.globl _P2
                                    192 	.globl _SBUF
                                    193 	.globl _SCON
                                    194 	.globl _P1
                                    195 	.globl _TH1
                                    196 	.globl _TH0
                                    197 	.globl _TL1
                                    198 	.globl _TL0
                                    199 	.globl _TMOD
                                    200 	.globl _TCON
                                    201 	.globl _PCON
                                    202 	.globl _DPH
                                    203 	.globl _DPL
                                    204 	.globl _SP
                                    205 	.globl _P0
                                    206 ;--------------------------------------------------------
                                    207 ; special function registers
                                    208 ;--------------------------------------------------------
                                    209 	.area RSEG    (ABS,DATA)
      000000                        210 	.org 0x0000
                           000080   211 _P0	=	0x0080
                           000081   212 _SP	=	0x0081
                           000082   213 _DPL	=	0x0082
                           000083   214 _DPH	=	0x0083
                           000087   215 _PCON	=	0x0087
                           000088   216 _TCON	=	0x0088
                           000089   217 _TMOD	=	0x0089
                           00008A   218 _TL0	=	0x008a
                           00008B   219 _TL1	=	0x008b
                           00008C   220 _TH0	=	0x008c
                           00008D   221 _TH1	=	0x008d
                           000090   222 _P1	=	0x0090
                           000098   223 _SCON	=	0x0098
                           000099   224 _SBUF	=	0x0099
                           0000A0   225 _P2	=	0x00a0
                           0000A8   226 _IE	=	0x00a8
                           0000B0   227 _P3	=	0x00b0
                           0000B8   228 _IP	=	0x00b8
                           0000D0   229 _PSW	=	0x00d0
                           0000E0   230 _ACC	=	0x00e0
                           0000F0   231 _B	=	0x00f0
                           0000C0   232 _P4	=	0x00c0
                           000094   233 _P0M0	=	0x0094
                           000093   234 _P0M1	=	0x0093
                           000092   235 _P1M0	=	0x0092
                           000091   236 _P1M1	=	0x0091
                           000096   237 _P2M0	=	0x0096
                           000095   238 _P2M1	=	0x0095
                           0000B2   239 _P3M0	=	0x00b2
                           0000B1   240 _P3M1	=	0x00b1
                           0000B4   241 _P4M0	=	0x00b4
                           0000B3   242 _P4M1	=	0x00b3
                           0000CA   243 _P5M0	=	0x00ca
                           0000C9   244 _P5M1	=	0x00c9
                           0000CC   245 _P6M0	=	0x00cc
                           0000CB   246 _P6M1	=	0x00cb
                           0000E2   247 _P7M0	=	0x00e2
                           0000E1   248 _P7M1	=	0x00e1
                           00008E   249 _AUXR	=	0x008e
                           0000A2   250 _AUXR1	=	0x00a2
                           0000A2   251 _P_SW1	=	0x00a2
                           000097   252 _CLK_DIV	=	0x0097
                           0000A1   253 _BUS_SPEED	=	0x00a1
                           00009D   254 _P1ASF	=	0x009d
                           0000BA   255 _P_SW2	=	0x00ba
                           0000AF   256 _IE2	=	0x00af
                           0000B5   257 _IP2	=	0x00b5
                           00008F   258 _INT_CLKO	=	0x008f
                           0000D1   259 _T4T3M	=	0x00d1
                           0000D1   260 _T3T4M	=	0x00d1
                           0000D2   261 _T4H	=	0x00d2
                           0000D3   262 _T4L	=	0x00d3
                           0000D4   263 _T3H	=	0x00d4
                           0000D5   264 _T3L	=	0x00d5
                           0000D6   265 _T2H	=	0x00d6
                           0000D7   266 _T2L	=	0x00d7
                           0000AA   267 _WKTCL	=	0x00aa
                           0000AB   268 _WKTCH	=	0x00ab
                           0000C1   269 _WDT_CONTR	=	0x00c1
                           00009A   270 _S2CON	=	0x009a
                           00009B   271 _S2BUF	=	0x009b
                           0000AC   272 _S3CON	=	0x00ac
                           0000AD   273 _S3BUF	=	0x00ad
                           000084   274 _S4CON	=	0x0084
                           000085   275 _S4BUF	=	0x0085
                           0000A9   276 _SADDR	=	0x00a9
                           0000B9   277 _SADEN	=	0x00b9
                           0000BC   278 _ADC_CONTR	=	0x00bc
                           0000BD   279 _ADC_RES	=	0x00bd
                           0000BE   280 _ADC_RESL	=	0x00be
                           0000CD   281 _SPSTAT	=	0x00cd
                           0000CE   282 _SPCTL	=	0x00ce
                           0000CF   283 _SPDAT	=	0x00cf
                           0000C2   284 _IAP_DATA	=	0x00c2
                           0000C3   285 _IAP_ADDRH	=	0x00c3
                           0000C4   286 _IAP_ADDRL	=	0x00c4
                           0000C5   287 _IAP_CMD	=	0x00c5
                           0000C6   288 _IAP_TRIG	=	0x00c6
                           0000C7   289 _IAP_CONTR	=	0x00c7
                           0000D8   290 _CCON	=	0x00d8
                           0000D9   291 _CMOD	=	0x00d9
                           0000E9   292 _CL	=	0x00e9
                           0000F9   293 _CH	=	0x00f9
                           0000DA   294 _CCAPM0	=	0x00da
                           0000DB   295 _CCAPM1	=	0x00db
                           0000DC   296 _CCAPM2	=	0x00dc
                           0000EA   297 _CCAP0L	=	0x00ea
                           0000EB   298 _CCAP1L	=	0x00eb
                           0000EC   299 _CCAP2L	=	0x00ec
                           0000F2   300 _PCA_PWM0	=	0x00f2
                           0000F3   301 _PCA_PWM1	=	0x00f3
                           0000F4   302 _PCA_PWM2	=	0x00f4
                           0000FA   303 _CCAP0H	=	0x00fa
                           0000FB   304 _CCAP1H	=	0x00fb
                           0000FC   305 _CCAP2H	=	0x00fc
                           0000E6   306 _CMPCR1	=	0x00e6
                           0000E7   307 _CMPCR2	=	0x00e7
                           0000F1   308 _PWMCFG	=	0x00f1
                           0000F5   309 _PWMCR	=	0x00f5
                           0000F6   310 _PWMIF	=	0x00f6
                           0000F7   311 _PWMFDCR	=	0x00f7
                                    312 ;--------------------------------------------------------
                                    313 ; special function bits
                                    314 ;--------------------------------------------------------
                                    315 	.area RSEG    (ABS,DATA)
      000000                        316 	.org 0x0000
                           000080   317 _P0_0	=	0x0080
                           000081   318 _P0_1	=	0x0081
                           000082   319 _P0_2	=	0x0082
                           000083   320 _P0_3	=	0x0083
                           000084   321 _P0_4	=	0x0084
                           000085   322 _P0_5	=	0x0085
                           000086   323 _P0_6	=	0x0086
                           000087   324 _P0_7	=	0x0087
                           000088   325 _IT0	=	0x0088
                           000089   326 _IE0	=	0x0089
                           00008A   327 _IT1	=	0x008a
                           00008B   328 _IE1	=	0x008b
                           00008C   329 _TR0	=	0x008c
                           00008D   330 _TF0	=	0x008d
                           00008E   331 _TR1	=	0x008e
                           00008F   332 _TF1	=	0x008f
                           000090   333 _P1_0	=	0x0090
                           000091   334 _P1_1	=	0x0091
                           000092   335 _P1_2	=	0x0092
                           000093   336 _P1_3	=	0x0093
                           000094   337 _P1_4	=	0x0094
                           000095   338 _P1_5	=	0x0095
                           000096   339 _P1_6	=	0x0096
                           000097   340 _P1_7	=	0x0097
                           000098   341 _RI	=	0x0098
                           000099   342 _TI	=	0x0099
                           00009A   343 _RB8	=	0x009a
                           00009B   344 _TB8	=	0x009b
                           00009C   345 _REN	=	0x009c
                           00009D   346 _SM2	=	0x009d
                           00009E   347 _SM1	=	0x009e
                           00009F   348 _SM0	=	0x009f
                           0000A0   349 _P2_0	=	0x00a0
                           0000A1   350 _P2_1	=	0x00a1
                           0000A2   351 _P2_2	=	0x00a2
                           0000A3   352 _P2_3	=	0x00a3
                           0000A4   353 _P2_4	=	0x00a4
                           0000A5   354 _P2_5	=	0x00a5
                           0000A6   355 _P2_6	=	0x00a6
                           0000A7   356 _P2_7	=	0x00a7
                           0000A8   357 _EX0	=	0x00a8
                           0000A9   358 _ET0	=	0x00a9
                           0000AA   359 _EX1	=	0x00aa
                           0000AB   360 _ET1	=	0x00ab
                           0000AC   361 _ES	=	0x00ac
                           0000AF   362 _EA	=	0x00af
                           0000B0   363 _P3_0	=	0x00b0
                           0000B1   364 _P3_1	=	0x00b1
                           0000B2   365 _P3_2	=	0x00b2
                           0000B3   366 _P3_3	=	0x00b3
                           0000B4   367 _P3_4	=	0x00b4
                           0000B5   368 _P3_5	=	0x00b5
                           0000B6   369 _P3_6	=	0x00b6
                           0000B7   370 _P3_7	=	0x00b7
                           0000B0   371 _RXD	=	0x00b0
                           0000B1   372 _TXD	=	0x00b1
                           0000B2   373 _INT0	=	0x00b2
                           0000B3   374 _INT1	=	0x00b3
                           0000B4   375 _T0	=	0x00b4
                           0000B5   376 _T1	=	0x00b5
                           0000B6   377 _WR	=	0x00b6
                           0000B7   378 _RD	=	0x00b7
                           0000B8   379 _PX0	=	0x00b8
                           0000B9   380 _PT0	=	0x00b9
                           0000BA   381 _PX1	=	0x00ba
                           0000BB   382 _PT1	=	0x00bb
                           0000BC   383 _PS	=	0x00bc
                           0000D0   384 _P	=	0x00d0
                           0000D1   385 _F1	=	0x00d1
                           0000D2   386 _OV	=	0x00d2
                           0000D3   387 _RS0	=	0x00d3
                           0000D4   388 _RS1	=	0x00d4
                           0000D5   389 _F0	=	0x00d5
                           0000D6   390 _AC	=	0x00d6
                           0000D7   391 _CY	=	0x00d7
                           0000C0   392 _P4_0	=	0x00c0
                           0000C1   393 _P4_1	=	0x00c1
                           0000C2   394 _P4_2	=	0x00c2
                           0000C3   395 _P4_3	=	0x00c3
                           0000C4   396 _P4_4	=	0x00c4
                           0000C5   397 _P4_5	=	0x00c5
                           0000C6   398 _P4_6	=	0x00c6
                           0000C7   399 _P4_7	=	0x00c7
                           0000AE   400 _ELVD	=	0x00ae
                           0000AD   401 _EADC	=	0x00ad
                           0000BF   402 _PPCA	=	0x00bf
                           0000BE   403 _PLVD	=	0x00be
                           0000BD   404 _PADC	=	0x00bd
                           0000DF   405 _CF	=	0x00df
                           0000DE   406 _CR	=	0x00de
                           0000DA   407 _CCF2	=	0x00da
                           0000D9   408 _CCF1	=	0x00d9
                           0000D8   409 _CCF0	=	0x00d8
                                    410 ;--------------------------------------------------------
                                    411 ; overlayable register banks
                                    412 ;--------------------------------------------------------
                                    413 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        414 	.ds 8
                                    415 ;--------------------------------------------------------
                                    416 ; internal ram data
                                    417 ;--------------------------------------------------------
                                    418 	.area DSEG    (DATA)
                                    419 ;--------------------------------------------------------
                                    420 ; overlayable items in internal ram 
                                    421 ;--------------------------------------------------------
                                    422 ;--------------------------------------------------------
                                    423 ; Stack segment in internal ram 
                                    424 ;--------------------------------------------------------
                                    425 	.area	SSEG
      000008                        426 __start__stack:
      000008                        427 	.ds	1
                                    428 
                                    429 ;--------------------------------------------------------
                                    430 ; indirectly addressable internal ram data
                                    431 ;--------------------------------------------------------
                                    432 	.area ISEG    (DATA)
                                    433 ;--------------------------------------------------------
                                    434 ; absolute internal ram data
                                    435 ;--------------------------------------------------------
                                    436 	.area IABS    (ABS,DATA)
                                    437 	.area IABS    (ABS,DATA)
                                    438 ;--------------------------------------------------------
                                    439 ; bit data
                                    440 ;--------------------------------------------------------
                                    441 	.area BSEG    (BIT)
                                    442 ;--------------------------------------------------------
                                    443 ; paged external ram data
                                    444 ;--------------------------------------------------------
                                    445 	.area PSEG    (PAG,XDATA)
                                    446 ;--------------------------------------------------------
                                    447 ; external ram data
                                    448 ;--------------------------------------------------------
                                    449 	.area XSEG    (XDATA)
                                    450 ;--------------------------------------------------------
                                    451 ; absolute external ram data
                                    452 ;--------------------------------------------------------
                                    453 	.area XABS    (ABS,XDATA)
                                    454 ;--------------------------------------------------------
                                    455 ; external initialized ram data
                                    456 ;--------------------------------------------------------
                                    457 	.area XISEG   (XDATA)
                                    458 	.area HOME    (CODE)
                                    459 	.area GSINIT0 (CODE)
                                    460 	.area GSINIT1 (CODE)
                                    461 	.area GSINIT2 (CODE)
                                    462 	.area GSINIT3 (CODE)
                                    463 	.area GSINIT4 (CODE)
                                    464 	.area GSINIT5 (CODE)
                                    465 	.area GSINIT  (CODE)
                                    466 	.area GSFINAL (CODE)
                                    467 	.area CSEG    (CODE)
                                    468 ;--------------------------------------------------------
                                    469 ; interrupt vector 
                                    470 ;--------------------------------------------------------
                                    471 	.area HOME    (CODE)
      000000                        472 __interrupt_vect:
      000000 02 00 06         [24]  473 	ljmp	__sdcc_gsinit_startup
                                    474 ;--------------------------------------------------------
                                    475 ; global & static initialisations
                                    476 ;--------------------------------------------------------
                                    477 	.area HOME    (CODE)
                                    478 	.area GSINIT  (CODE)
                                    479 	.area GSFINAL (CODE)
                                    480 	.area GSINIT  (CODE)
                                    481 	.globl __sdcc_gsinit_startup
                                    482 	.globl __sdcc_program_startup
                                    483 	.globl __start__stack
                                    484 	.globl __mcs51_genXINIT
                                    485 	.globl __mcs51_genXRAMCLEAR
                                    486 	.globl __mcs51_genRAMCLEAR
                                    487 	.area GSFINAL (CODE)
      00005F 02 00 03         [24]  488 	ljmp	__sdcc_program_startup
                                    489 ;--------------------------------------------------------
                                    490 ; Home
                                    491 ;--------------------------------------------------------
                                    492 	.area HOME    (CODE)
                                    493 	.area HOME    (CODE)
      000003                        494 __sdcc_program_startup:
      000003 02 00 62         [24]  495 	ljmp	_main
                                    496 ;	return from main will return to caller
                                    497 ;--------------------------------------------------------
                                    498 ; code
                                    499 ;--------------------------------------------------------
                                    500 	.area CSEG    (CODE)
                                    501 ;------------------------------------------------------------
                                    502 ;Allocation info for local variables in function 'main'
                                    503 ;------------------------------------------------------------
                                    504 ;	src/main.c:38: int main()
                                    505 ;	-----------------------------------------
                                    506 ;	 function main
                                    507 ;	-----------------------------------------
      000062                        508 _main:
                           000007   509 	ar7 = 0x07
                           000006   510 	ar6 = 0x06
                           000005   511 	ar5 = 0x05
                           000004   512 	ar4 = 0x04
                           000003   513 	ar3 = 0x03
                           000002   514 	ar2 = 0x02
                           000001   515 	ar1 = 0x01
                           000000   516 	ar0 = 0x00
                                    517 ;	src/main.c:40: while (1)
      000062                        518 00102$:
                                    519 ;	src/main.c:73: PCON |= 0x02;   // PD   : PCON.1 Stop Mode/Power-Down Select bit..
      000062 43 87 02         [24]  520 	orl	_PCON,#0x02
                                    521 ;	src/main.c:76: NOP();          // 
      000065 00               [12]  522 	NOP	
                                    523 ;	src/main.c:77: NOP();
      000066 00               [12]  524 	NOP	
                                    525 ;	src/main.c:78: NOP();
      000067 00               [12]  526 	NOP	
      000068 80 F8            [24]  527 	sjmp	00102$
                                    528 	.area CSEG    (CODE)
                                    529 	.area CONST   (CODE)
                                    530 	.area XINIT   (CODE)
                                    531 	.area CABS    (ABS,CODE)
