/*****************************************************************************
 *
 * main.c
 *
 *  Created on: Oct 13, 2023
 *
 *  Author: Ahmad Hamdy
 *
 *****************************************************************************/
#include "adc.h"
#include "lcd.h"
#include "lm35_sensor.h"
#include "motor.h"

int main(){
	uint8 temp = 0;
	ADC_ConfigType adc_Config = {INTERNAL_2_56, DIV8};
	ADC_init(&adc_Config);
	LCD_init();
	DcMotor_Init();
	LCD_moveCursor(0, 3);
	LCD_displayString("FAN IS ");
	LCD_moveCursor(1, 3);
	LCD_displayString("Temp =    C");
	while(1){
		temp = LM35_getTemperature();
		LCD_moveCursor(0, 10);
		if(temp >= 120){
			LCD_displayString("ON ");
			DcMotor_Rotate(CW, 100);
		}
		else if(temp >= 90){
			LCD_displayString("ON ");
			DcMotor_Rotate(CW, 75);
		}
		else if(temp >= 60){
			LCD_displayString("ON ");
			DcMotor_Rotate(CW, 50);
		}
		else if(temp >= 30){
			LCD_displayString("ON ");
			DcMotor_Rotate(CW, 25);
		}
		else{
			LCD_displayString("OFF");
			DcMotor_Rotate(OFF, 0);
		}
		LCD_moveCursor(1, 10);
		if(temp >= 100)
			LCD_intgerToString(temp);
		else {
			LCD_intgerToString(temp);
			LCD_displayCharacter(' ');
		}
	}
}
