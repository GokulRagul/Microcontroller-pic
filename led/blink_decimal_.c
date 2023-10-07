/***********************************************************************/
/*Author         :Gokul S                                              */
/*Date           :16/9/2023                                            */
/*File           :LED                                                  */
/*Description	 :using Binary in blink decimal                        */
/***********************************************************************/

#include<htc.h>   //Header file (htc.h) hi-tech c complier
__CONFIG(0x1f7a);      //configration pic board 
#define _XTAL_FREQ 20000000   //XTAL-cristal, FREQ-freqancy
 void main(void){
	 TRISD=0;   //TRIS-tristate  output 
	 TRISC=0;
	 while(1)    //repet value
	 {
		 PORTD=1;   //portable D pin decimal value
		 PORTC=1;   //portable c pin decimal value
		 __delay_ms(500);
		 PORTD=2;
		 PORTC=2;
		 __delay_ms(500);   //delay for blink
		 PORTD=4;
		 PORTC=4;
		 __delay_ms(500);
                 PORTD=8;
		 PORTC=8;
		 __delay_ms(500);
		 PORTD=16;
		 PORTC=16;
		 __delay_ms(500);
		 PORTD=32;
		 PORTC=32;
		 __delay_ms(500);
		 PORTD=64;
		 PORTC=64;
		 __delay_ms(500);
		 PORTD=128;
		 PORTC=128;
		 __delay_ms(500);
		 PORTD=128;
		 PORTC=128;
		 __delay_ms(500);
		 PORTD=64;
		 PORTC=64;
		 __delay_ms(500);
		 PORTD=32;
		 PORTC=32;
		 __delay_ms(500);
                 PORTD=16;
		 PORTC=16;
		 __delay_ms(500);
		 PORTD=8;
		 PORTC=8;
		 __delay_ms(500);
		 PORTD=4;
		 PORTC=4;
		 __delay_ms(500);
		 PORTD=2;
		 PORTC=2;
		 __delay_ms(500);
		 PORTD=1;
		 PORTC=1;
		 __delay_ms(500); 	 
     }
	 return;
}
