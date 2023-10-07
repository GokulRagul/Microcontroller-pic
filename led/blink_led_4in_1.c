/***********************************************************************/
/*Author         :Gokul S                            		               */
/*Date           :15/9/2023                                            */
/*File           :LED                                                  */
/*Description	 :using Binary in blink_led_4in1                         */
/***********************************************************************/

#include <htc.h>  //Header file (htc.h) hi-tech c complier
__CONFIG(0x1f7a);  //configration pic board 
#define _XTAL_FREQ 20000000   //XTAL-cristal, FREQ-freqancy 
void main(void){
TRISD=0;   //TRIS-tristate  output
{
	PORTD=0b11111111;  //portable pin binary value
	__delay_ms(500);  
	PORTD=0b00000000;  
	__delay_ms(500);   //delay for blink
	PORTD=0b00000001;
	__delay_ms(500);
	PORTD=0b00000001;
	__delay_ms(500);
	PORTD=0b00000010;
	__delay_ms(500);
	PORTD=0b00000100;
	__delay_ms(500);
	PORTD=0b00001000;
	__delay_ms(500);							
	PORTD=0b00010000;
	__delay_ms(500);
	PORTD=0b00100000;
	__delay_ms(500);
	PORTD=0b01000000;
	__delay_ms(500);
	PORTD=0b10000000;
	__delay_ms(500);
	PORTD=0b10000000;
	__delay_ms(500);
	PORTD=0b01000000;
	__delay_ms(500);
	PORTD=0b00100000;
	__delay_ms(500);
	PORTD=0b00010000;
	__delay_ms(500);
	PORTD=0b00001000;
	__delay_ms(500);
	PORTD=0b00000100;
	__delay_ms(500);
	PORTD=0b00000010;
	__delay_ms(500);
	PORTD=0b00000001;
	__delay_ms(500);
	PORTD=0b00000001;
	__delay_ms(500);
	PORTD=0b00000100;
	__delay_ms(500);
	PORTD=0b00010000;
	__delay_ms(500);
	PORTD=0b01000000;
	__delay_ms(500);
	PORTD=0b00000010;
	__delay_ms(500);
	PORTD=0b00001000;
	__delay_ms(500);
	PORTD=0b00100000;
	__delay_ms(500);
	PORTD=0b10000000;
	__delay_ms(500);
	PORTD=0b00000001;
	__delay_ms(500);
	PORTD=0b10000000;
	__delay_ms(500);
	PORTD=0b00000010;
	__delay_ms(500);
	PORTD=0b01000000;
	__delay_ms(500);
	PORTD=0b00000100;
	__delay_ms(500);
	PORTD=0b00100000;
	__delay_ms(500);
	PORTD=0b00001000;
	__delay_ms(500);
	PORTD=0b00010000;
	__delay_ms(500);
	PORTD=0b00001000;
	__delay_ms(500);
	PORTD=0b00010000;
	__delay_ms(500);
	PORTD=0b00000100;
	__delay_ms(500);
	PORTD=0b00100000;
	__delay_ms(500);
	PORTD=0b00000010;
	__delay_ms(500);
	PORTD=0b01000000;
	__delay_ms(500);
	PORTD=0b00000001;
	__delay_ms(500);
	PORTD=0b10000000;
	__delay_ms(500);
}
     return;
}		
