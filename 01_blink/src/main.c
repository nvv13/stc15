//

#include "stc15.h"
#include <stdint.h>
#include <stdio.h>
    
//#define FOSC    11059200UL //11.0592 MHz
//#define FOSC    18432000UL //18.432  MHz
//#define FOSC    22118400UL //22.1184 MHz
//#define FOSC    24000000UL //24 Mhz
//#define FOSC    33177000UL //33.177 Mhz 
#define FOSC    35000000UL //35 Mhz




//========================================================================
void  delay_ms(unsigned int ms)
{
     unsigned int i;
     do{
          i = FOSC / 17000;
          while(--i)    ;
     }while(--ms);
}
/* ------------------------------------------------------------------------- */

#define START_DELAY 50 

int i_my_deley;


void setup(void)
{
/* I/O ports Mode
//P1M1[7 : 0] P1M0 [7 : 0]
0 0 quasi_bidirectional(traditional 8051 I/O port output) ,
    Sink Current up to 20mA , pull-up Current is 270μA ,
    Because of manufactured error, the actual pull-up current is 270uA ~ 150uA
0 1 push-pull output(strong pull-up output,current can be up to 20mA, resistors need to be added to restrict current
1 0 input-only (high-impedance )        
1 1 Open Drain,internal pull-up resistors should be disabled and external pull-up resistors need to join.
*/
    // set P1 pins 2 to push-pull output
    P1M1 &= ~(1<<2) ;
    P1M0 |= (1<<2) ;

    // set P1 pins 3 to push-pull output
    P1M1 &= ~(1<<3) ;
    P1M0 |= (1<<3) ;

    // set P1 pins 4 to push-pull output
    P1M1 &= ~(1<<4) ;
    P1M0 |= (1<<4) ;

    i_my_deley=START_DELAY;
}


/*********************************************/
int main()
{
    setup();


    // LOOP
    while(1)
    {

      P1_2 = 0; //out 0 pin 2 port 1
      delay_ms(i_my_deley);
      P1_2 = 1; //out 1 pin 2 port 1

      P1_3 = 0; //out 0 pin 3 port 1
      delay_ms(i_my_deley);
      P1_3 = 1; //out 1 pin 3 port 1

      P1_4 = 0; //out 0 pin 4 port 1
      delay_ms(i_my_deley);
      P1_4 = 1; //out 1 pin 4 port 1

      i_my_deley-=1;
      if(i_my_deley<=0)i_my_deley=START_DELAY;

    }
}
/* ------------------------------------------------------------------------- */
