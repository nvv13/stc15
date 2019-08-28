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
                                     12 	.globl _exint0
                                     13 	.globl _setup
                                     14 	.globl _CCF0
                                     15 	.globl _CCF1
                                     16 	.globl _CCF2
                                     17 	.globl _CR
                                     18 	.globl _CF
                                     19 	.globl _PADC
                                     20 	.globl _PLVD
                                     21 	.globl _PPCA
                                     22 	.globl _EADC
                                     23 	.globl _ELVD
                                     24 	.globl _P4_7
                                     25 	.globl _P4_6
                                     26 	.globl _P4_5
                                     27 	.globl _P4_4
                                     28 	.globl _P4_3
                                     29 	.globl _P4_2
                                     30 	.globl _P4_1
                                     31 	.globl _P4_0
                                     32 	.globl _CY
                                     33 	.globl _AC
                                     34 	.globl _F0
                                     35 	.globl _RS1
                                     36 	.globl _RS0
                                     37 	.globl _OV
                                     38 	.globl _F1
                                     39 	.globl _P
                                     40 	.globl _PS
                                     41 	.globl _PT1
                                     42 	.globl _PX1
                                     43 	.globl _PT0
                                     44 	.globl _PX0
                                     45 	.globl _RD
                                     46 	.globl _WR
                                     47 	.globl _T1
                                     48 	.globl _T0
                                     49 	.globl _INT1
                                     50 	.globl _INT0
                                     51 	.globl _TXD
                                     52 	.globl _RXD
                                     53 	.globl _P3_7
                                     54 	.globl _P3_6
                                     55 	.globl _P3_5
                                     56 	.globl _P3_4
                                     57 	.globl _P3_3
                                     58 	.globl _P3_2
                                     59 	.globl _P3_1
                                     60 	.globl _P3_0
                                     61 	.globl _EA
                                     62 	.globl _ES
                                     63 	.globl _ET1
                                     64 	.globl _EX1
                                     65 	.globl _ET0
                                     66 	.globl _EX0
                                     67 	.globl _P2_7
                                     68 	.globl _P2_6
                                     69 	.globl _P2_5
                                     70 	.globl _P2_4
                                     71 	.globl _P2_3
                                     72 	.globl _P2_2
                                     73 	.globl _P2_1
                                     74 	.globl _P2_0
                                     75 	.globl _SM0
                                     76 	.globl _SM1
                                     77 	.globl _SM2
                                     78 	.globl _REN
                                     79 	.globl _TB8
                                     80 	.globl _RB8
                                     81 	.globl _TI
                                     82 	.globl _RI
                                     83 	.globl _P1_7
                                     84 	.globl _P1_6
                                     85 	.globl _P1_5
                                     86 	.globl _P1_4
                                     87 	.globl _P1_3
                                     88 	.globl _P1_2
                                     89 	.globl _P1_1
                                     90 	.globl _P1_0
                                     91 	.globl _TF1
                                     92 	.globl _TR1
                                     93 	.globl _TF0
                                     94 	.globl _TR0
                                     95 	.globl _IE1
                                     96 	.globl _IT1
                                     97 	.globl _IE0
                                     98 	.globl _IT0
                                     99 	.globl _P0_7
                                    100 	.globl _P0_6
                                    101 	.globl _P0_5
                                    102 	.globl _P0_4
                                    103 	.globl _P0_3
                                    104 	.globl _P0_2
                                    105 	.globl _P0_1
                                    106 	.globl _P0_0
                                    107 	.globl _PWMFDCR
                                    108 	.globl _PWMIF
                                    109 	.globl _PWMCR
                                    110 	.globl _PWMCFG
                                    111 	.globl _CMPCR2
                                    112 	.globl _CMPCR1
                                    113 	.globl _CCAP2H
                                    114 	.globl _CCAP1H
                                    115 	.globl _CCAP0H
                                    116 	.globl _PCA_PWM2
                                    117 	.globl _PCA_PWM1
                                    118 	.globl _PCA_PWM0
                                    119 	.globl _CCAP2L
                                    120 	.globl _CCAP1L
                                    121 	.globl _CCAP0L
                                    122 	.globl _CCAPM2
                                    123 	.globl _CCAPM1
                                    124 	.globl _CCAPM0
                                    125 	.globl _CH
                                    126 	.globl _CL
                                    127 	.globl _CMOD
                                    128 	.globl _CCON
                                    129 	.globl _IAP_CONTR
                                    130 	.globl _IAP_TRIG
                                    131 	.globl _IAP_CMD
                                    132 	.globl _IAP_ADDRL
                                    133 	.globl _IAP_ADDRH
                                    134 	.globl _IAP_DATA
                                    135 	.globl _SPDAT
                                    136 	.globl _SPCTL
                                    137 	.globl _SPSTAT
                                    138 	.globl _ADC_RESL
                                    139 	.globl _ADC_RES
                                    140 	.globl _ADC_CONTR
                                    141 	.globl _SADEN
                                    142 	.globl _SADDR
                                    143 	.globl _S4BUF
                                    144 	.globl _S4CON
                                    145 	.globl _S3BUF
                                    146 	.globl _S3CON
                                    147 	.globl _S2BUF
                                    148 	.globl _S2CON
                                    149 	.globl _WDT_CONTR
                                    150 	.globl _WKTCH
                                    151 	.globl _WKTCL
                                    152 	.globl _T2L
                                    153 	.globl _T2H
                                    154 	.globl _T3L
                                    155 	.globl _T3H
                                    156 	.globl _T4L
                                    157 	.globl _T4H
                                    158 	.globl _T3T4M
                                    159 	.globl _T4T3M
                                    160 	.globl _INT_CLKO
                                    161 	.globl _IP2
                                    162 	.globl _IE2
                                    163 	.globl _P_SW2
                                    164 	.globl _P1ASF
                                    165 	.globl _BUS_SPEED
                                    166 	.globl _CLK_DIV
                                    167 	.globl _P_SW1
                                    168 	.globl _AUXR1
                                    169 	.globl _AUXR
                                    170 	.globl _P7M1
                                    171 	.globl _P7M0
                                    172 	.globl _P6M1
                                    173 	.globl _P6M0
                                    174 	.globl _P5M1
                                    175 	.globl _P5M0
                                    176 	.globl _P4M1
                                    177 	.globl _P4M0
                                    178 	.globl _P3M1
                                    179 	.globl _P3M0
                                    180 	.globl _P2M1
                                    181 	.globl _P2M0
                                    182 	.globl _P1M1
                                    183 	.globl _P1M0
                                    184 	.globl _P0M1
                                    185 	.globl _P0M0
                                    186 	.globl _P4
                                    187 	.globl _B
                                    188 	.globl _ACC
                                    189 	.globl _PSW
                                    190 	.globl _IP
                                    191 	.globl _P3
                                    192 	.globl _IE
                                    193 	.globl _P2
                                    194 	.globl _SBUF
                                    195 	.globl _SCON
                                    196 	.globl _P1
                                    197 	.globl _TH1
                                    198 	.globl _TH0
                                    199 	.globl _TL1
                                    200 	.globl _TL0
                                    201 	.globl _TMOD
                                    202 	.globl _TCON
                                    203 	.globl _PCON
                                    204 	.globl _DPH
                                    205 	.globl _DPL
                                    206 	.globl _SP
                                    207 	.globl _P0
                                    208 	.globl _FLAG
                                    209 ;--------------------------------------------------------
                                    210 ; special function registers
                                    211 ;--------------------------------------------------------
                                    212 	.area RSEG    (ABS,DATA)
      000000                        213 	.org 0x0000
                           000080   214 _P0	=	0x0080
                           000081   215 _SP	=	0x0081
                           000082   216 _DPL	=	0x0082
                           000083   217 _DPH	=	0x0083
                           000087   218 _PCON	=	0x0087
                           000088   219 _TCON	=	0x0088
                           000089   220 _TMOD	=	0x0089
                           00008A   221 _TL0	=	0x008a
                           00008B   222 _TL1	=	0x008b
                           00008C   223 _TH0	=	0x008c
                           00008D   224 _TH1	=	0x008d
                           000090   225 _P1	=	0x0090
                           000098   226 _SCON	=	0x0098
                           000099   227 _SBUF	=	0x0099
                           0000A0   228 _P2	=	0x00a0
                           0000A8   229 _IE	=	0x00a8
                           0000B0   230 _P3	=	0x00b0
                           0000B8   231 _IP	=	0x00b8
                           0000D0   232 _PSW	=	0x00d0
                           0000E0   233 _ACC	=	0x00e0
                           0000F0   234 _B	=	0x00f0
                           0000C0   235 _P4	=	0x00c0
                           000094   236 _P0M0	=	0x0094
                           000093   237 _P0M1	=	0x0093
                           000092   238 _P1M0	=	0x0092
                           000091   239 _P1M1	=	0x0091
                           000096   240 _P2M0	=	0x0096
                           000095   241 _P2M1	=	0x0095
                           0000B2   242 _P3M0	=	0x00b2
                           0000B1   243 _P3M1	=	0x00b1
                           0000B4   244 _P4M0	=	0x00b4
                           0000B3   245 _P4M1	=	0x00b3
                           0000CA   246 _P5M0	=	0x00ca
                           0000C9   247 _P5M1	=	0x00c9
                           0000CC   248 _P6M0	=	0x00cc
                           0000CB   249 _P6M1	=	0x00cb
                           0000E2   250 _P7M0	=	0x00e2
                           0000E1   251 _P7M1	=	0x00e1
                           00008E   252 _AUXR	=	0x008e
                           0000A2   253 _AUXR1	=	0x00a2
                           0000A2   254 _P_SW1	=	0x00a2
                           000097   255 _CLK_DIV	=	0x0097
                           0000A1   256 _BUS_SPEED	=	0x00a1
                           00009D   257 _P1ASF	=	0x009d
                           0000BA   258 _P_SW2	=	0x00ba
                           0000AF   259 _IE2	=	0x00af
                           0000B5   260 _IP2	=	0x00b5
                           00008F   261 _INT_CLKO	=	0x008f
                           0000D1   262 _T4T3M	=	0x00d1
                           0000D1   263 _T3T4M	=	0x00d1
                           0000D2   264 _T4H	=	0x00d2
                           0000D3   265 _T4L	=	0x00d3
                           0000D4   266 _T3H	=	0x00d4
                           0000D5   267 _T3L	=	0x00d5
                           0000D6   268 _T2H	=	0x00d6
                           0000D7   269 _T2L	=	0x00d7
                           0000AA   270 _WKTCL	=	0x00aa
                           0000AB   271 _WKTCH	=	0x00ab
                           0000C1   272 _WDT_CONTR	=	0x00c1
                           00009A   273 _S2CON	=	0x009a
                           00009B   274 _S2BUF	=	0x009b
                           0000AC   275 _S3CON	=	0x00ac
                           0000AD   276 _S3BUF	=	0x00ad
                           000084   277 _S4CON	=	0x0084
                           000085   278 _S4BUF	=	0x0085
                           0000A9   279 _SADDR	=	0x00a9
                           0000B9   280 _SADEN	=	0x00b9
                           0000BC   281 _ADC_CONTR	=	0x00bc
                           0000BD   282 _ADC_RES	=	0x00bd
                           0000BE   283 _ADC_RESL	=	0x00be
                           0000CD   284 _SPSTAT	=	0x00cd
                           0000CE   285 _SPCTL	=	0x00ce
                           0000CF   286 _SPDAT	=	0x00cf
                           0000C2   287 _IAP_DATA	=	0x00c2
                           0000C3   288 _IAP_ADDRH	=	0x00c3
                           0000C4   289 _IAP_ADDRL	=	0x00c4
                           0000C5   290 _IAP_CMD	=	0x00c5
                           0000C6   291 _IAP_TRIG	=	0x00c6
                           0000C7   292 _IAP_CONTR	=	0x00c7
                           0000D8   293 _CCON	=	0x00d8
                           0000D9   294 _CMOD	=	0x00d9
                           0000E9   295 _CL	=	0x00e9
                           0000F9   296 _CH	=	0x00f9
                           0000DA   297 _CCAPM0	=	0x00da
                           0000DB   298 _CCAPM1	=	0x00db
                           0000DC   299 _CCAPM2	=	0x00dc
                           0000EA   300 _CCAP0L	=	0x00ea
                           0000EB   301 _CCAP1L	=	0x00eb
                           0000EC   302 _CCAP2L	=	0x00ec
                           0000F2   303 _PCA_PWM0	=	0x00f2
                           0000F3   304 _PCA_PWM1	=	0x00f3
                           0000F4   305 _PCA_PWM2	=	0x00f4
                           0000FA   306 _CCAP0H	=	0x00fa
                           0000FB   307 _CCAP1H	=	0x00fb
                           0000FC   308 _CCAP2H	=	0x00fc
                           0000E6   309 _CMPCR1	=	0x00e6
                           0000E7   310 _CMPCR2	=	0x00e7
                           0000F1   311 _PWMCFG	=	0x00f1
                           0000F5   312 _PWMCR	=	0x00f5
                           0000F6   313 _PWMIF	=	0x00f6
                           0000F7   314 _PWMFDCR	=	0x00f7
                                    315 ;--------------------------------------------------------
                                    316 ; special function bits
                                    317 ;--------------------------------------------------------
                                    318 	.area RSEG    (ABS,DATA)
      000000                        319 	.org 0x0000
                           000080   320 _P0_0	=	0x0080
                           000081   321 _P0_1	=	0x0081
                           000082   322 _P0_2	=	0x0082
                           000083   323 _P0_3	=	0x0083
                           000084   324 _P0_4	=	0x0084
                           000085   325 _P0_5	=	0x0085
                           000086   326 _P0_6	=	0x0086
                           000087   327 _P0_7	=	0x0087
                           000088   328 _IT0	=	0x0088
                           000089   329 _IE0	=	0x0089
                           00008A   330 _IT1	=	0x008a
                           00008B   331 _IE1	=	0x008b
                           00008C   332 _TR0	=	0x008c
                           00008D   333 _TF0	=	0x008d
                           00008E   334 _TR1	=	0x008e
                           00008F   335 _TF1	=	0x008f
                           000090   336 _P1_0	=	0x0090
                           000091   337 _P1_1	=	0x0091
                           000092   338 _P1_2	=	0x0092
                           000093   339 _P1_3	=	0x0093
                           000094   340 _P1_4	=	0x0094
                           000095   341 _P1_5	=	0x0095
                           000096   342 _P1_6	=	0x0096
                           000097   343 _P1_7	=	0x0097
                           000098   344 _RI	=	0x0098
                           000099   345 _TI	=	0x0099
                           00009A   346 _RB8	=	0x009a
                           00009B   347 _TB8	=	0x009b
                           00009C   348 _REN	=	0x009c
                           00009D   349 _SM2	=	0x009d
                           00009E   350 _SM1	=	0x009e
                           00009F   351 _SM0	=	0x009f
                           0000A0   352 _P2_0	=	0x00a0
                           0000A1   353 _P2_1	=	0x00a1
                           0000A2   354 _P2_2	=	0x00a2
                           0000A3   355 _P2_3	=	0x00a3
                           0000A4   356 _P2_4	=	0x00a4
                           0000A5   357 _P2_5	=	0x00a5
                           0000A6   358 _P2_6	=	0x00a6
                           0000A7   359 _P2_7	=	0x00a7
                           0000A8   360 _EX0	=	0x00a8
                           0000A9   361 _ET0	=	0x00a9
                           0000AA   362 _EX1	=	0x00aa
                           0000AB   363 _ET1	=	0x00ab
                           0000AC   364 _ES	=	0x00ac
                           0000AF   365 _EA	=	0x00af
                           0000B0   366 _P3_0	=	0x00b0
                           0000B1   367 _P3_1	=	0x00b1
                           0000B2   368 _P3_2	=	0x00b2
                           0000B3   369 _P3_3	=	0x00b3
                           0000B4   370 _P3_4	=	0x00b4
                           0000B5   371 _P3_5	=	0x00b5
                           0000B6   372 _P3_6	=	0x00b6
                           0000B7   373 _P3_7	=	0x00b7
                           0000B0   374 _RXD	=	0x00b0
                           0000B1   375 _TXD	=	0x00b1
                           0000B2   376 _INT0	=	0x00b2
                           0000B3   377 _INT1	=	0x00b3
                           0000B4   378 _T0	=	0x00b4
                           0000B5   379 _T1	=	0x00b5
                           0000B6   380 _WR	=	0x00b6
                           0000B7   381 _RD	=	0x00b7
                           0000B8   382 _PX0	=	0x00b8
                           0000B9   383 _PT0	=	0x00b9
                           0000BA   384 _PX1	=	0x00ba
                           0000BB   385 _PT1	=	0x00bb
                           0000BC   386 _PS	=	0x00bc
                           0000D0   387 _P	=	0x00d0
                           0000D1   388 _F1	=	0x00d1
                           0000D2   389 _OV	=	0x00d2
                           0000D3   390 _RS0	=	0x00d3
                           0000D4   391 _RS1	=	0x00d4
                           0000D5   392 _F0	=	0x00d5
                           0000D6   393 _AC	=	0x00d6
                           0000D7   394 _CY	=	0x00d7
                           0000C0   395 _P4_0	=	0x00c0
                           0000C1   396 _P4_1	=	0x00c1
                           0000C2   397 _P4_2	=	0x00c2
                           0000C3   398 _P4_3	=	0x00c3
                           0000C4   399 _P4_4	=	0x00c4
                           0000C5   400 _P4_5	=	0x00c5
                           0000C6   401 _P4_6	=	0x00c6
                           0000C7   402 _P4_7	=	0x00c7
                           0000AE   403 _ELVD	=	0x00ae
                           0000AD   404 _EADC	=	0x00ad
                           0000BF   405 _PPCA	=	0x00bf
                           0000BE   406 _PLVD	=	0x00be
                           0000BD   407 _PADC	=	0x00bd
                           0000DF   408 _CF	=	0x00df
                           0000DE   409 _CR	=	0x00de
                           0000DA   410 _CCF2	=	0x00da
                           0000D9   411 _CCF1	=	0x00d9
                           0000D8   412 _CCF0	=	0x00d8
                                    413 ;--------------------------------------------------------
                                    414 ; overlayable register banks
                                    415 ;--------------------------------------------------------
                                    416 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        417 	.ds 8
                                    418 ;--------------------------------------------------------
                                    419 ; internal ram data
                                    420 ;--------------------------------------------------------
                                    421 	.area DSEG    (DATA)
      000030                        422 _FLAG::
      000030                        423 	.ds 1
                                    424 ;--------------------------------------------------------
                                    425 ; overlayable items in internal ram 
                                    426 ;--------------------------------------------------------
                                    427 ;--------------------------------------------------------
                                    428 ; Stack segment in internal ram 
                                    429 ;--------------------------------------------------------
                                    430 	.area	SSEG
      000031                        431 __start__stack:
      000031                        432 	.ds	1
                                    433 
                                    434 ;--------------------------------------------------------
                                    435 ; indirectly addressable internal ram data
                                    436 ;--------------------------------------------------------
                                    437 	.area ISEG    (DATA)
                                    438 ;--------------------------------------------------------
                                    439 ; absolute internal ram data
                                    440 ;--------------------------------------------------------
                                    441 	.area IABS    (ABS,DATA)
                                    442 	.area IABS    (ABS,DATA)
                                    443 ;--------------------------------------------------------
                                    444 ; bit data
                                    445 ;--------------------------------------------------------
                                    446 	.area BSEG    (BIT)
                                    447 ;--------------------------------------------------------
                                    448 ; paged external ram data
                                    449 ;--------------------------------------------------------
                                    450 	.area PSEG    (PAG,XDATA)
                                    451 ;--------------------------------------------------------
                                    452 ; external ram data
                                    453 ;--------------------------------------------------------
                                    454 	.area XSEG    (XDATA)
                                    455 ;--------------------------------------------------------
                                    456 ; absolute external ram data
                                    457 ;--------------------------------------------------------
                                    458 	.area XABS    (ABS,XDATA)
                                    459 ;--------------------------------------------------------
                                    460 ; external initialized ram data
                                    461 ;--------------------------------------------------------
                                    462 	.area XISEG   (XDATA)
                                    463 	.area HOME    (CODE)
                                    464 	.area GSINIT0 (CODE)
                                    465 	.area GSINIT1 (CODE)
                                    466 	.area GSINIT2 (CODE)
                                    467 	.area GSINIT3 (CODE)
                                    468 	.area GSINIT4 (CODE)
                                    469 	.area GSINIT5 (CODE)
                                    470 	.area GSINIT  (CODE)
                                    471 	.area GSFINAL (CODE)
                                    472 	.area CSEG    (CODE)
                                    473 ;--------------------------------------------------------
                                    474 ; interrupt vector 
                                    475 ;--------------------------------------------------------
                                    476 	.area HOME    (CODE)
      000000                        477 __interrupt_vect:
      000000 02 00 09         [24]  478 	ljmp	__sdcc_gsinit_startup
      000003 02 00 84         [24]  479 	ljmp	_exint0
                                    480 ;--------------------------------------------------------
                                    481 ; global & static initialisations
                                    482 ;--------------------------------------------------------
                                    483 	.area HOME    (CODE)
                                    484 	.area GSINIT  (CODE)
                                    485 	.area GSFINAL (CODE)
                                    486 	.area GSINIT  (CODE)
                                    487 	.globl __sdcc_gsinit_startup
                                    488 	.globl __sdcc_program_startup
                                    489 	.globl __start__stack
                                    490 	.globl __mcs51_genXINIT
                                    491 	.globl __mcs51_genXRAMCLEAR
                                    492 	.globl __mcs51_genRAMCLEAR
                                    493 	.area GSFINAL (CODE)
      000062 02 00 06         [24]  494 	ljmp	__sdcc_program_startup
                                    495 ;--------------------------------------------------------
                                    496 ; Home
                                    497 ;--------------------------------------------------------
                                    498 	.area HOME    (CODE)
                                    499 	.area HOME    (CODE)
      000006                        500 __sdcc_program_startup:
      000006 02 00 99         [24]  501 	ljmp	_main
                                    502 ;	return from main will return to caller
                                    503 ;--------------------------------------------------------
                                    504 ; code
                                    505 ;--------------------------------------------------------
                                    506 	.area CSEG    (CODE)
                                    507 ;------------------------------------------------------------
                                    508 ;Allocation info for local variables in function 'setup'
                                    509 ;------------------------------------------------------------
                                    510 ;	src/main.c:40: void setup(void)
                                    511 ;	-----------------------------------------
                                    512 ;	 function setup
                                    513 ;	-----------------------------------------
      000065                        514 _setup:
                           000007   515 	ar7 = 0x07
                           000006   516 	ar6 = 0x06
                           000005   517 	ar5 = 0x05
                           000004   518 	ar4 = 0x04
                           000003   519 	ar3 = 0x03
                           000002   520 	ar2 = 0x02
                           000001   521 	ar1 = 0x01
                           000000   522 	ar0 = 0x00
                                    523 ;	src/main.c:70: P1M1 &= ~(1<<2) ;//сбрасываем в 0, 2 бит
      000065 53 91 FB         [24]  524 	anl	_P1M1,#0xfb
                                    525 ;	src/main.c:71: P1M0 |= (1<<2)  ;//устанавливаем в 1, 2 бит
      000068 43 92 04         [24]  526 	orl	_P1M0,#0x04
                                    527 ;	src/main.c:74: P1M1 &= ~(1<<3) ;
      00006B 53 91 F7         [24]  528 	anl	_P1M1,#0xf7
                                    529 ;	src/main.c:75: P1M0 |= (1<<3) ;
      00006E 43 92 08         [24]  530 	orl	_P1M0,#0x08
                                    531 ;	src/main.c:78: P1M1 &= ~(1<<4) ;
      000071 53 91 EF         [24]  532 	anl	_P1M1,#0xef
                                    533 ;	src/main.c:79: P1M0 |= (1<<4) ;
      000074 43 92 10         [24]  534 	orl	_P1M0,#0x10
                                    535 ;	src/main.c:82: P1_2 =0; 
      000077 C2 92            [12]  536 	clr	_P1_2
                                    537 ;	src/main.c:85: P1_3 =1; //
      000079 D2 93            [12]  538 	setb	_P1_3
                                    539 ;	src/main.c:86: P1_4 =0; //
      00007B C2 94            [12]  540 	clr	_P1_4
                                    541 ;	src/main.c:124: IT0 = 0; //Both rising and falling edge of INT0 can wake up MCU
      00007D C2 88            [12]  542 	clr	_IT0
                                    543 ;	src/main.c:162: EX0 = 1; //external interrupt 0 would be enabled.
      00007F D2 A8            [12]  544 	setb	_EX0
                                    545 ;	src/main.c:163: EA = 1;  //global - interrupt enabled
      000081 D2 AF            [12]  546 	setb	_EA
      000083 22               [24]  547 	ret
                                    548 ;------------------------------------------------------------
                                    549 ;Allocation info for local variables in function 'exint0'
                                    550 ;------------------------------------------------------------
                                    551 ;	src/main.c:172: INTERRUPT(exint0, IE0_VECTOR)   //void exint0(void) __interrupt(IE0_VECTOR) 
                                    552 ;	-----------------------------------------
                                    553 ;	 function exint0
                                    554 ;	-----------------------------------------
      000084                        555 _exint0:
      000084 C0 E0            [24]  556 	push	acc
      000086 C0 D0            [24]  557 	push	psw
                                    558 ;	src/main.c:174: P1_2 =!P1_2; //out reverse pin 2 port 1
      000088 B2 92            [12]  559 	cpl	_P1_2
                                    560 ;	src/main.c:175: P1_3 =!P1_3; //
      00008A B2 93            [12]  561 	cpl	_P1_3
                                    562 ;	src/main.c:176: P1_4 =!P1_4; //
      00008C B2 94            [12]  563 	cpl	_P1_4
                                    564 ;	src/main.c:178: FLAG = INT0; //save the sate of INT0, INT0=0(falling); INT0=1(rising)
      00008E A2 B2            [12]  565 	mov	c,_INT0
      000090 E4               [12]  566 	clr	a
      000091 33               [12]  567 	rlc	a
      000092 F5 30            [12]  568 	mov	_FLAG,a
      000094 D0 D0            [24]  569 	pop	psw
      000096 D0 E0            [24]  570 	pop	acc
      000098 32               [24]  571 	reti
                                    572 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                    573 ;	eliminated unneeded push/pop dpl
                                    574 ;	eliminated unneeded push/pop dph
                                    575 ;	eliminated unneeded push/pop b
                                    576 ;------------------------------------------------------------
                                    577 ;Allocation info for local variables in function 'main'
                                    578 ;------------------------------------------------------------
                                    579 ;	src/main.c:183: int main()
                                    580 ;	-----------------------------------------
                                    581 ;	 function main
                                    582 ;	-----------------------------------------
      000099                        583 _main:
                                    584 ;	src/main.c:185: setup(); 
      000099 12 00 65         [24]  585 	lcall	_setup
                                    586 ;	src/main.c:187: while (1)
      00009C                        587 00102$:
                                    588 ;	src/main.c:222: PCON = 0x02;    //Enter Stop/Power-Down Mode
      00009C 75 87 02         [24]  589 	mov	_PCON,#0x02
                                    590 ;	src/main.c:224: NOP();          // Fisrt implement this statement and then enter interrupt service routine
      00009F 00               [12]  591 	NOP	
                                    592 ;	src/main.c:226: NOP();
      0000A0 00               [12]  593 	NOP	
      0000A1 80 F9            [24]  594 	sjmp	00102$
                                    595 	.area CSEG    (CODE)
                                    596 	.area CONST   (CODE)
                                    597 	.area XINIT   (CODE)
                                    598 	.area CABS    (ABS,CODE)
