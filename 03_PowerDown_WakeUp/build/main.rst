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
                                     12 	.globl _setup
                                     13 	.globl _CCF0
                                     14 	.globl _CCF1
                                     15 	.globl _CCF2
                                     16 	.globl _CR
                                     17 	.globl _CF
                                     18 	.globl _PADC
                                     19 	.globl _PLVD
                                     20 	.globl _PPCA
                                     21 	.globl _EADC
                                     22 	.globl _ELVD
                                     23 	.globl _P4_7
                                     24 	.globl _P4_6
                                     25 	.globl _P4_5
                                     26 	.globl _P4_4
                                     27 	.globl _P4_3
                                     28 	.globl _P4_2
                                     29 	.globl _P4_1
                                     30 	.globl _P4_0
                                     31 	.globl _CY
                                     32 	.globl _AC
                                     33 	.globl _F0
                                     34 	.globl _RS1
                                     35 	.globl _RS0
                                     36 	.globl _OV
                                     37 	.globl _F1
                                     38 	.globl _P
                                     39 	.globl _PS
                                     40 	.globl _PT1
                                     41 	.globl _PX1
                                     42 	.globl _PT0
                                     43 	.globl _PX0
                                     44 	.globl _RD
                                     45 	.globl _WR
                                     46 	.globl _T1
                                     47 	.globl _T0
                                     48 	.globl _INT1
                                     49 	.globl _INT0
                                     50 	.globl _TXD
                                     51 	.globl _RXD
                                     52 	.globl _P3_7
                                     53 	.globl _P3_6
                                     54 	.globl _P3_5
                                     55 	.globl _P3_4
                                     56 	.globl _P3_3
                                     57 	.globl _P3_2
                                     58 	.globl _P3_1
                                     59 	.globl _P3_0
                                     60 	.globl _EA
                                     61 	.globl _ES
                                     62 	.globl _ET1
                                     63 	.globl _EX1
                                     64 	.globl _ET0
                                     65 	.globl _EX0
                                     66 	.globl _P2_7
                                     67 	.globl _P2_6
                                     68 	.globl _P2_5
                                     69 	.globl _P2_4
                                     70 	.globl _P2_3
                                     71 	.globl _P2_2
                                     72 	.globl _P2_1
                                     73 	.globl _P2_0
                                     74 	.globl _SM0
                                     75 	.globl _SM1
                                     76 	.globl _SM2
                                     77 	.globl _REN
                                     78 	.globl _TB8
                                     79 	.globl _RB8
                                     80 	.globl _TI
                                     81 	.globl _RI
                                     82 	.globl _P1_7
                                     83 	.globl _P1_6
                                     84 	.globl _P1_5
                                     85 	.globl _P1_4
                                     86 	.globl _P1_3
                                     87 	.globl _P1_2
                                     88 	.globl _P1_1
                                     89 	.globl _P1_0
                                     90 	.globl _TF1
                                     91 	.globl _TR1
                                     92 	.globl _TF0
                                     93 	.globl _TR0
                                     94 	.globl _IE1
                                     95 	.globl _IT1
                                     96 	.globl _IE0
                                     97 	.globl _IT0
                                     98 	.globl _P0_7
                                     99 	.globl _P0_6
                                    100 	.globl _P0_5
                                    101 	.globl _P0_4
                                    102 	.globl _P0_3
                                    103 	.globl _P0_2
                                    104 	.globl _P0_1
                                    105 	.globl _P0_0
                                    106 	.globl _PWMFDCR
                                    107 	.globl _PWMIF
                                    108 	.globl _PWMCR
                                    109 	.globl _PWMCFG
                                    110 	.globl _CMPCR2
                                    111 	.globl _CMPCR1
                                    112 	.globl _CCAP2H
                                    113 	.globl _CCAP1H
                                    114 	.globl _CCAP0H
                                    115 	.globl _PCA_PWM2
                                    116 	.globl _PCA_PWM1
                                    117 	.globl _PCA_PWM0
                                    118 	.globl _CCAP2L
                                    119 	.globl _CCAP1L
                                    120 	.globl _CCAP0L
                                    121 	.globl _CCAPM2
                                    122 	.globl _CCAPM1
                                    123 	.globl _CCAPM0
                                    124 	.globl _CH
                                    125 	.globl _CL
                                    126 	.globl _CMOD
                                    127 	.globl _CCON
                                    128 	.globl _IAP_CONTR
                                    129 	.globl _IAP_TRIG
                                    130 	.globl _IAP_CMD
                                    131 	.globl _IAP_ADDRL
                                    132 	.globl _IAP_ADDRH
                                    133 	.globl _IAP_DATA
                                    134 	.globl _SPDAT
                                    135 	.globl _SPCTL
                                    136 	.globl _SPSTAT
                                    137 	.globl _ADC_RESL
                                    138 	.globl _ADC_RES
                                    139 	.globl _ADC_CONTR
                                    140 	.globl _SADEN
                                    141 	.globl _SADDR
                                    142 	.globl _S4BUF
                                    143 	.globl _S4CON
                                    144 	.globl _S3BUF
                                    145 	.globl _S3CON
                                    146 	.globl _S2BUF
                                    147 	.globl _S2CON
                                    148 	.globl _WDT_CONTR
                                    149 	.globl _WKTCH
                                    150 	.globl _WKTCL
                                    151 	.globl _T2L
                                    152 	.globl _T2H
                                    153 	.globl _T3L
                                    154 	.globl _T3H
                                    155 	.globl _T4L
                                    156 	.globl _T4H
                                    157 	.globl _T3T4M
                                    158 	.globl _T4T3M
                                    159 	.globl _INT_CLKO
                                    160 	.globl _IP2
                                    161 	.globl _IE2
                                    162 	.globl _P_SW2
                                    163 	.globl _P1ASF
                                    164 	.globl _BUS_SPEED
                                    165 	.globl _CLK_DIV
                                    166 	.globl _P_SW1
                                    167 	.globl _AUXR1
                                    168 	.globl _AUXR
                                    169 	.globl _P7M1
                                    170 	.globl _P7M0
                                    171 	.globl _P6M1
                                    172 	.globl _P6M0
                                    173 	.globl _P5M1
                                    174 	.globl _P5M0
                                    175 	.globl _P4M1
                                    176 	.globl _P4M0
                                    177 	.globl _P3M1
                                    178 	.globl _P3M0
                                    179 	.globl _P2M1
                                    180 	.globl _P2M0
                                    181 	.globl _P1M1
                                    182 	.globl _P1M0
                                    183 	.globl _P0M1
                                    184 	.globl _P0M0
                                    185 	.globl _P4
                                    186 	.globl _B
                                    187 	.globl _ACC
                                    188 	.globl _PSW
                                    189 	.globl _IP
                                    190 	.globl _P3
                                    191 	.globl _IE
                                    192 	.globl _P2
                                    193 	.globl _SBUF
                                    194 	.globl _SCON
                                    195 	.globl _P1
                                    196 	.globl _TH1
                                    197 	.globl _TH0
                                    198 	.globl _TL1
                                    199 	.globl _TL0
                                    200 	.globl _TMOD
                                    201 	.globl _TCON
                                    202 	.globl _PCON
                                    203 	.globl _DPH
                                    204 	.globl _DPL
                                    205 	.globl _SP
                                    206 	.globl _P0
                                    207 ;--------------------------------------------------------
                                    208 ; special function registers
                                    209 ;--------------------------------------------------------
                                    210 	.area RSEG    (ABS,DATA)
      000000                        211 	.org 0x0000
                           000080   212 _P0	=	0x0080
                           000081   213 _SP	=	0x0081
                           000082   214 _DPL	=	0x0082
                           000083   215 _DPH	=	0x0083
                           000087   216 _PCON	=	0x0087
                           000088   217 _TCON	=	0x0088
                           000089   218 _TMOD	=	0x0089
                           00008A   219 _TL0	=	0x008a
                           00008B   220 _TL1	=	0x008b
                           00008C   221 _TH0	=	0x008c
                           00008D   222 _TH1	=	0x008d
                           000090   223 _P1	=	0x0090
                           000098   224 _SCON	=	0x0098
                           000099   225 _SBUF	=	0x0099
                           0000A0   226 _P2	=	0x00a0
                           0000A8   227 _IE	=	0x00a8
                           0000B0   228 _P3	=	0x00b0
                           0000B8   229 _IP	=	0x00b8
                           0000D0   230 _PSW	=	0x00d0
                           0000E0   231 _ACC	=	0x00e0
                           0000F0   232 _B	=	0x00f0
                           0000C0   233 _P4	=	0x00c0
                           000094   234 _P0M0	=	0x0094
                           000093   235 _P0M1	=	0x0093
                           000092   236 _P1M0	=	0x0092
                           000091   237 _P1M1	=	0x0091
                           000096   238 _P2M0	=	0x0096
                           000095   239 _P2M1	=	0x0095
                           0000B2   240 _P3M0	=	0x00b2
                           0000B1   241 _P3M1	=	0x00b1
                           0000B4   242 _P4M0	=	0x00b4
                           0000B3   243 _P4M1	=	0x00b3
                           0000CA   244 _P5M0	=	0x00ca
                           0000C9   245 _P5M1	=	0x00c9
                           0000CC   246 _P6M0	=	0x00cc
                           0000CB   247 _P6M1	=	0x00cb
                           0000E2   248 _P7M0	=	0x00e2
                           0000E1   249 _P7M1	=	0x00e1
                           00008E   250 _AUXR	=	0x008e
                           0000A2   251 _AUXR1	=	0x00a2
                           0000A2   252 _P_SW1	=	0x00a2
                           000097   253 _CLK_DIV	=	0x0097
                           0000A1   254 _BUS_SPEED	=	0x00a1
                           00009D   255 _P1ASF	=	0x009d
                           0000BA   256 _P_SW2	=	0x00ba
                           0000AF   257 _IE2	=	0x00af
                           0000B5   258 _IP2	=	0x00b5
                           00008F   259 _INT_CLKO	=	0x008f
                           0000D1   260 _T4T3M	=	0x00d1
                           0000D1   261 _T3T4M	=	0x00d1
                           0000D2   262 _T4H	=	0x00d2
                           0000D3   263 _T4L	=	0x00d3
                           0000D4   264 _T3H	=	0x00d4
                           0000D5   265 _T3L	=	0x00d5
                           0000D6   266 _T2H	=	0x00d6
                           0000D7   267 _T2L	=	0x00d7
                           0000AA   268 _WKTCL	=	0x00aa
                           0000AB   269 _WKTCH	=	0x00ab
                           0000C1   270 _WDT_CONTR	=	0x00c1
                           00009A   271 _S2CON	=	0x009a
                           00009B   272 _S2BUF	=	0x009b
                           0000AC   273 _S3CON	=	0x00ac
                           0000AD   274 _S3BUF	=	0x00ad
                           000084   275 _S4CON	=	0x0084
                           000085   276 _S4BUF	=	0x0085
                           0000A9   277 _SADDR	=	0x00a9
                           0000B9   278 _SADEN	=	0x00b9
                           0000BC   279 _ADC_CONTR	=	0x00bc
                           0000BD   280 _ADC_RES	=	0x00bd
                           0000BE   281 _ADC_RESL	=	0x00be
                           0000CD   282 _SPSTAT	=	0x00cd
                           0000CE   283 _SPCTL	=	0x00ce
                           0000CF   284 _SPDAT	=	0x00cf
                           0000C2   285 _IAP_DATA	=	0x00c2
                           0000C3   286 _IAP_ADDRH	=	0x00c3
                           0000C4   287 _IAP_ADDRL	=	0x00c4
                           0000C5   288 _IAP_CMD	=	0x00c5
                           0000C6   289 _IAP_TRIG	=	0x00c6
                           0000C7   290 _IAP_CONTR	=	0x00c7
                           0000D8   291 _CCON	=	0x00d8
                           0000D9   292 _CMOD	=	0x00d9
                           0000E9   293 _CL	=	0x00e9
                           0000F9   294 _CH	=	0x00f9
                           0000DA   295 _CCAPM0	=	0x00da
                           0000DB   296 _CCAPM1	=	0x00db
                           0000DC   297 _CCAPM2	=	0x00dc
                           0000EA   298 _CCAP0L	=	0x00ea
                           0000EB   299 _CCAP1L	=	0x00eb
                           0000EC   300 _CCAP2L	=	0x00ec
                           0000F2   301 _PCA_PWM0	=	0x00f2
                           0000F3   302 _PCA_PWM1	=	0x00f3
                           0000F4   303 _PCA_PWM2	=	0x00f4
                           0000FA   304 _CCAP0H	=	0x00fa
                           0000FB   305 _CCAP1H	=	0x00fb
                           0000FC   306 _CCAP2H	=	0x00fc
                           0000E6   307 _CMPCR1	=	0x00e6
                           0000E7   308 _CMPCR2	=	0x00e7
                           0000F1   309 _PWMCFG	=	0x00f1
                           0000F5   310 _PWMCR	=	0x00f5
                           0000F6   311 _PWMIF	=	0x00f6
                           0000F7   312 _PWMFDCR	=	0x00f7
                                    313 ;--------------------------------------------------------
                                    314 ; special function bits
                                    315 ;--------------------------------------------------------
                                    316 	.area RSEG    (ABS,DATA)
      000000                        317 	.org 0x0000
                           000080   318 _P0_0	=	0x0080
                           000081   319 _P0_1	=	0x0081
                           000082   320 _P0_2	=	0x0082
                           000083   321 _P0_3	=	0x0083
                           000084   322 _P0_4	=	0x0084
                           000085   323 _P0_5	=	0x0085
                           000086   324 _P0_6	=	0x0086
                           000087   325 _P0_7	=	0x0087
                           000088   326 _IT0	=	0x0088
                           000089   327 _IE0	=	0x0089
                           00008A   328 _IT1	=	0x008a
                           00008B   329 _IE1	=	0x008b
                           00008C   330 _TR0	=	0x008c
                           00008D   331 _TF0	=	0x008d
                           00008E   332 _TR1	=	0x008e
                           00008F   333 _TF1	=	0x008f
                           000090   334 _P1_0	=	0x0090
                           000091   335 _P1_1	=	0x0091
                           000092   336 _P1_2	=	0x0092
                           000093   337 _P1_3	=	0x0093
                           000094   338 _P1_4	=	0x0094
                           000095   339 _P1_5	=	0x0095
                           000096   340 _P1_6	=	0x0096
                           000097   341 _P1_7	=	0x0097
                           000098   342 _RI	=	0x0098
                           000099   343 _TI	=	0x0099
                           00009A   344 _RB8	=	0x009a
                           00009B   345 _TB8	=	0x009b
                           00009C   346 _REN	=	0x009c
                           00009D   347 _SM2	=	0x009d
                           00009E   348 _SM1	=	0x009e
                           00009F   349 _SM0	=	0x009f
                           0000A0   350 _P2_0	=	0x00a0
                           0000A1   351 _P2_1	=	0x00a1
                           0000A2   352 _P2_2	=	0x00a2
                           0000A3   353 _P2_3	=	0x00a3
                           0000A4   354 _P2_4	=	0x00a4
                           0000A5   355 _P2_5	=	0x00a5
                           0000A6   356 _P2_6	=	0x00a6
                           0000A7   357 _P2_7	=	0x00a7
                           0000A8   358 _EX0	=	0x00a8
                           0000A9   359 _ET0	=	0x00a9
                           0000AA   360 _EX1	=	0x00aa
                           0000AB   361 _ET1	=	0x00ab
                           0000AC   362 _ES	=	0x00ac
                           0000AF   363 _EA	=	0x00af
                           0000B0   364 _P3_0	=	0x00b0
                           0000B1   365 _P3_1	=	0x00b1
                           0000B2   366 _P3_2	=	0x00b2
                           0000B3   367 _P3_3	=	0x00b3
                           0000B4   368 _P3_4	=	0x00b4
                           0000B5   369 _P3_5	=	0x00b5
                           0000B6   370 _P3_6	=	0x00b6
                           0000B7   371 _P3_7	=	0x00b7
                           0000B0   372 _RXD	=	0x00b0
                           0000B1   373 _TXD	=	0x00b1
                           0000B2   374 _INT0	=	0x00b2
                           0000B3   375 _INT1	=	0x00b3
                           0000B4   376 _T0	=	0x00b4
                           0000B5   377 _T1	=	0x00b5
                           0000B6   378 _WR	=	0x00b6
                           0000B7   379 _RD	=	0x00b7
                           0000B8   380 _PX0	=	0x00b8
                           0000B9   381 _PT0	=	0x00b9
                           0000BA   382 _PX1	=	0x00ba
                           0000BB   383 _PT1	=	0x00bb
                           0000BC   384 _PS	=	0x00bc
                           0000D0   385 _P	=	0x00d0
                           0000D1   386 _F1	=	0x00d1
                           0000D2   387 _OV	=	0x00d2
                           0000D3   388 _RS0	=	0x00d3
                           0000D4   389 _RS1	=	0x00d4
                           0000D5   390 _F0	=	0x00d5
                           0000D6   391 _AC	=	0x00d6
                           0000D7   392 _CY	=	0x00d7
                           0000C0   393 _P4_0	=	0x00c0
                           0000C1   394 _P4_1	=	0x00c1
                           0000C2   395 _P4_2	=	0x00c2
                           0000C3   396 _P4_3	=	0x00c3
                           0000C4   397 _P4_4	=	0x00c4
                           0000C5   398 _P4_5	=	0x00c5
                           0000C6   399 _P4_6	=	0x00c6
                           0000C7   400 _P4_7	=	0x00c7
                           0000AE   401 _ELVD	=	0x00ae
                           0000AD   402 _EADC	=	0x00ad
                           0000BF   403 _PPCA	=	0x00bf
                           0000BE   404 _PLVD	=	0x00be
                           0000BD   405 _PADC	=	0x00bd
                           0000DF   406 _CF	=	0x00df
                           0000DE   407 _CR	=	0x00de
                           0000DA   408 _CCF2	=	0x00da
                           0000D9   409 _CCF1	=	0x00d9
                           0000D8   410 _CCF0	=	0x00d8
                                    411 ;--------------------------------------------------------
                                    412 ; overlayable register banks
                                    413 ;--------------------------------------------------------
                                    414 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        415 	.ds 8
                                    416 ;--------------------------------------------------------
                                    417 ; internal ram data
                                    418 ;--------------------------------------------------------
                                    419 	.area DSEG    (DATA)
                                    420 ;--------------------------------------------------------
                                    421 ; overlayable items in internal ram 
                                    422 ;--------------------------------------------------------
                                    423 ;--------------------------------------------------------
                                    424 ; Stack segment in internal ram 
                                    425 ;--------------------------------------------------------
                                    426 	.area	SSEG
      000008                        427 __start__stack:
      000008                        428 	.ds	1
                                    429 
                                    430 ;--------------------------------------------------------
                                    431 ; indirectly addressable internal ram data
                                    432 ;--------------------------------------------------------
                                    433 	.area ISEG    (DATA)
                                    434 ;--------------------------------------------------------
                                    435 ; absolute internal ram data
                                    436 ;--------------------------------------------------------
                                    437 	.area IABS    (ABS,DATA)
                                    438 	.area IABS    (ABS,DATA)
                                    439 ;--------------------------------------------------------
                                    440 ; bit data
                                    441 ;--------------------------------------------------------
                                    442 	.area BSEG    (BIT)
                                    443 ;--------------------------------------------------------
                                    444 ; paged external ram data
                                    445 ;--------------------------------------------------------
                                    446 	.area PSEG    (PAG,XDATA)
                                    447 ;--------------------------------------------------------
                                    448 ; external ram data
                                    449 ;--------------------------------------------------------
                                    450 	.area XSEG    (XDATA)
                                    451 ;--------------------------------------------------------
                                    452 ; absolute external ram data
                                    453 ;--------------------------------------------------------
                                    454 	.area XABS    (ABS,XDATA)
                                    455 ;--------------------------------------------------------
                                    456 ; external initialized ram data
                                    457 ;--------------------------------------------------------
                                    458 	.area XISEG   (XDATA)
                                    459 	.area HOME    (CODE)
                                    460 	.area GSINIT0 (CODE)
                                    461 	.area GSINIT1 (CODE)
                                    462 	.area GSINIT2 (CODE)
                                    463 	.area GSINIT3 (CODE)
                                    464 	.area GSINIT4 (CODE)
                                    465 	.area GSINIT5 (CODE)
                                    466 	.area GSINIT  (CODE)
                                    467 	.area GSFINAL (CODE)
                                    468 	.area CSEG    (CODE)
                                    469 ;--------------------------------------------------------
                                    470 ; interrupt vector 
                                    471 ;--------------------------------------------------------
                                    472 	.area HOME    (CODE)
      000000                        473 __interrupt_vect:
      000000 02 00 06         [24]  474 	ljmp	__sdcc_gsinit_startup
                                    475 ;--------------------------------------------------------
                                    476 ; global & static initialisations
                                    477 ;--------------------------------------------------------
                                    478 	.area HOME    (CODE)
                                    479 	.area GSINIT  (CODE)
                                    480 	.area GSFINAL (CODE)
                                    481 	.area GSINIT  (CODE)
                                    482 	.globl __sdcc_gsinit_startup
                                    483 	.globl __sdcc_program_startup
                                    484 	.globl __start__stack
                                    485 	.globl __mcs51_genXINIT
                                    486 	.globl __mcs51_genXRAMCLEAR
                                    487 	.globl __mcs51_genRAMCLEAR
                                    488 	.area GSFINAL (CODE)
      00005F 02 00 03         [24]  489 	ljmp	__sdcc_program_startup
                                    490 ;--------------------------------------------------------
                                    491 ; Home
                                    492 ;--------------------------------------------------------
                                    493 	.area HOME    (CODE)
                                    494 	.area HOME    (CODE)
      000003                        495 __sdcc_program_startup:
      000003 02 00 81         [24]  496 	ljmp	_main
                                    497 ;	return from main will return to caller
                                    498 ;--------------------------------------------------------
                                    499 ; code
                                    500 ;--------------------------------------------------------
                                    501 	.area CSEG    (CODE)
                                    502 ;------------------------------------------------------------
                                    503 ;Allocation info for local variables in function 'setup'
                                    504 ;------------------------------------------------------------
                                    505 ;	src/main.c:41: void setup(void)
                                    506 ;	-----------------------------------------
                                    507 ;	 function setup
                                    508 ;	-----------------------------------------
      000062                        509 _setup:
                           000007   510 	ar7 = 0x07
                           000006   511 	ar6 = 0x06
                           000005   512 	ar5 = 0x05
                           000004   513 	ar4 = 0x04
                           000003   514 	ar3 = 0x03
                           000002   515 	ar2 = 0x02
                           000001   516 	ar1 = 0x01
                           000000   517 	ar0 = 0x00
                                    518 ;	src/main.c:71: P1M1 &= ~(1<<2) ;//сбрасываем в 0, 2 бит
      000062 53 91 FB         [24]  519 	anl	_P1M1,#0xfb
                                    520 ;	src/main.c:72: P1M0 |= (1<<2)  ;//устанавливаем в 1, 2 бит
      000065 43 92 04         [24]  521 	orl	_P1M0,#0x04
                                    522 ;	src/main.c:75: P1M1 &= ~(1<<3) ;
      000068 53 91 F7         [24]  523 	anl	_P1M1,#0xf7
                                    524 ;	src/main.c:76: P1M0 |= (1<<3) ;
      00006B 43 92 08         [24]  525 	orl	_P1M0,#0x08
                                    526 ;	src/main.c:79: P1M1 &= ~(1<<4) ;
      00006E 53 91 EF         [24]  527 	anl	_P1M1,#0xef
                                    528 ;	src/main.c:80: P1M0 |= (1<<4) ;
      000071 43 92 10         [24]  529 	orl	_P1M0,#0x10
                                    530 ;	src/main.c:83: P1_2 =0; 
      000074 C2 92            [12]  531 	clr	_P1_2
                                    532 ;	src/main.c:86: P1_3 =1; //
      000076 D2 93            [12]  533 	setb	_P1_3
                                    534 ;	src/main.c:87: P1_4 =0; //
      000078 C2 94            [12]  535 	clr	_P1_4
                                    536 ;	src/main.c:108: WKTCL = 49;   // wake-up cycle: 488us*(49+1) = 24.4ms, suppose the frequency of chip is 18.432MHz
      00007A 75 AA 31         [24]  537 	mov	_WKTCL,#0x31
                                    538 ;	src/main.c:109: WKTCH = 0x80; // WKTEN=1
      00007D 75 AB 80         [24]  539 	mov	_WKTCH,#0x80
      000080 22               [24]  540 	ret
                                    541 ;------------------------------------------------------------
                                    542 ;Allocation info for local variables in function 'main'
                                    543 ;------------------------------------------------------------
                                    544 ;	src/main.c:115: int main()
                                    545 ;	-----------------------------------------
                                    546 ;	 function main
                                    547 ;	-----------------------------------------
      000081                        548 _main:
                                    549 ;	src/main.c:117: setup(); 
      000081 12 00 62         [24]  550 	lcall	_setup
                                    551 ;	src/main.c:119: while (1)
      000084                        552 00102$:
                                    553 ;	src/main.c:154: PCON = 0x02;    //Enter Stop/Power-Down Mode
      000084 75 87 02         [24]  554 	mov	_PCON,#0x02
                                    555 ;	src/main.c:155: NOP();          // 
      000087 00               [12]  556 	NOP	
                                    557 ;	src/main.c:156: NOP();
      000088 00               [12]  558 	NOP	
                                    559 ;	src/main.c:157: P1_2 =!P1_2; //out reverse pin 2 port 1
      000089 B2 92            [12]  560 	cpl	_P1_2
                                    561 ;	src/main.c:158: P1_3 =!P1_3; //
      00008B B2 93            [12]  562 	cpl	_P1_3
                                    563 ;	src/main.c:159: P1_4 =!P1_4; //
      00008D B2 94            [12]  564 	cpl	_P1_4
      00008F 80 F3            [24]  565 	sjmp	00102$
                                    566 	.area CSEG    (CODE)
                                    567 	.area CONST   (CODE)
                                    568 	.area XINIT   (CODE)
                                    569 	.area CABS    (ABS,CODE)
