*
 * main.c
 *
 *  Created on: Sep 15, 2022
 *      Author: AbdelRahman Atef
 */


///************************* Application on ADC using Temperature sensor LM35 ********************//


///*****************INCLUDES**********//
#include "main.h"      ///*** this is a header file to contain all includes of Application



int main ()
{
	H_LCD_Void_LCDInt();                  ///// LCD initialization
	M_ADC_void_AdcInt();                 ///// ADC initialization
	H_TEMPSENSOR_void_TempSensorInt();  ///// Temperature sensor initialization

   u8 Local_u8SensorValue= 0;         /// local variable to take sensor value

    while (1)
       {
    	/////taking sensor value
    	 Local_u8SensorValue = H_TEMPSENSOR_void_TempSensorRead();
          _delay_ms(1000);   ////delay for 1 sec
        //////printing the value on the LCD
         H_Lcd_void_LCDWriteNum(Local_u8SensorValue);
          _delay_ms(1000); ////delay for 1 sec
         H_Lcd_void_LCDClear(); /// clear screen

       }


}
