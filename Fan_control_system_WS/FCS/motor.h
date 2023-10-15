/*****************************************************************************
 *
 * motor.h
 *
 *  Created on: Oct 10, 2023
 *
 *  Author: Ahmad Hamdy
 *
 *****************************************************************************/

#ifndef MOTOR
#define MOTOR
#include "std_types.h"
#include "gpio.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define DC_MOTOR_PORT PORTB_ID
#define DC_MOTOR_PIN1 PIN0_ID
#define DC_MOTOR_PIN2 PIN1_ID

typedef enum{
	OFF, CW, ACW
}DcMotor_State;
/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description:
	➢ The Function responsible for setup the direction for the two
		motor pins through the GPIO driver.
	➢ Stop at the DC-Motor at the beginning through the GPIO driver.
*/
void DcMotor_Init(void);

/*
 * Description:
	➢ The function responsible for rotate the DC Motor CW/ or A-CW or
		stop the motor based on the state input state value.
	➢ Send the required duty cycle to the PWM driver based on the
		required speed value.
*/
void DcMotor_Rotate(DcMotor_State state,uint8 speed);

#endif /* MOTOR */
