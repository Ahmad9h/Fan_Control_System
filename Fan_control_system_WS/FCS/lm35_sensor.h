/*****************************************************************************
 *
 * lm35_sensor.c
 *
 *  Created on: Oct 5, 2023
 *
 *  Author: Ahmad Hamdy
 *
 *****************************************************************************/

#ifndef LM35_SENSOR
#define LM35_SENSOR

#include "std_types.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define SENSOR_CHANNEL_ID         2
#define SENSOR_MAX_VOLT_VALUE     1.5
#define SENSOR_MAX_TEMPERATURE    150

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Function responsible for calculate the temperature from the ADC digital value.
 */
uint8 LM35_getTemperature(void);

#endif /* LM35_SENSOR */
