/***********************************************************************/
/*Author         :Gokul S                                              */
/*Date           :15/9/2023                                            */
/*File           :LED                                                  */
/*Description	 :using Binary in blink_led_1to8                       */
/***********************************************************************/

#include<htc.h> //Header file (htc.h) hi-tech c complier
__CONFIG(0x1f7a);  //configration pic board 
#define _XTAL_FREQ 20000000   //XTAL-cristal, FREQ-freqancy 
 void main(void){
	 TRISD=0;    //TRIS-tristate  output
	 while(1)   //repet value 
	{
	  PORTD=0b10000001;  //portable pin binary value
	  __delay_ms(500);
	  PORTD=0b11000011;
	   __delay_ms(500);
	  PORTD=0b11100111;
	   __delay_ms(500);   //delay for blink
	  PORTD=0b11111111;
	   __delay_ms(500);
	  PORTD=0b00011000;
	   __delay_ms(500);
	  PORTD=0b00111100;
	   __delay_ms(500);
	  PORTD=0b01111110;
	   __delay_ms(500);
	  PORTD=0b11111111;
	   __delay_ms(500);
	}
	 return;
	}     
	   

