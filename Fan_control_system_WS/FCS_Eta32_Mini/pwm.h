/*****************************************************************************
 *
 * pwm.h
 *
 *  Created on: Oct 10, 2023
 *
 *  Author: Ahmad Hamdy
 *
 *****************************************************************************/

#ifndef PWM
#define PWM

#include "std_types.h"

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Function responsible for initialize the PWM driver.
 */
void PWM_Timer0_Start(uint8 duty_cycle);

#endif /* PWM */
