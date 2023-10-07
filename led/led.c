/***********************************************************************/
/*Author         :Gokul S                            		       */
/*Date           :15/9/2023                                            */
/*File           :LED                                                  */
/*Description	 :using hex decimal value for blinking first and last  */
/***********************************************************************/


#include <htc.h>
__CONFIG(0x1f7a);
#define _XTAL_FREQ 20000000
void main(void){
	TRISD=0;
{
	PORTD=0x01;
	__delay_ms(500);
	PORTD=0x80;
	__delay_ms(500);
	PORTD=0x02;
	__delay_ms(500);
	PORTD=0x40;
	__delay_ms(500);
	PORTD=0x04;
	__delay_ms(500);
	PORTD=0x20;
	__delay_ms(500);
	PORTD=0x08;
	__delay_ms(500);
	PORTD=0X10;
	__delay_ms(500);
	PORTD=0x08;
	__delay_ms(500);
	PORTD=0x10;
	__delay_ms(500);
	PORTD=0x04;
	__delay_ms(500);
	PORTD=0x20;
	__delay_ms(500);
    PORTD=0x02;
	__delay_ms(500);
	PORTD=0x40;
	__delay_ms(500);
	PORTD=0x01;
	__delay_ms(500);
	PORTD=0x80;
	__delay_ms(500);	
	}
	return;
}	
