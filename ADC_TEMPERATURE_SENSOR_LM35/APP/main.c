/*
 * main.c
 *
 *  Created on: Sep 15, 2022
 *      Author: AbdelRahman Atef
 */


///************************* Application on Interrupts using INT0 ********************//


///*****************INCLUDES**********//
#include "main.h"      ///*** this is a header file to contain all includes of Application



int main ()
{
	H_LCD_Void_LCDInt();
	M_ADC_void_AdcInt();
	H_TEMPSENSOR_void_TempSensorInt();

   u8 x= 0;

    while (1)
       {
    	 x=  H_TEMPSENSOR_void_TempSensorRead();

          _delay_ms(1000);
         H_Lcd_void_LCDWriteNum(x);
          _delay_ms(1000);
         H_Lcd_void_LCDClear();

       }


}

void A_TIMER0_void_Timer0Exc(void)
{
   H_LED_Void_LedOn(BLUE_LED);
   H_LED_Void_LedTogg(BLUE_LED);
}
