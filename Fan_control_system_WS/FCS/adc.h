/*****************************************************************************
 *
 * adc.h
 *
 *  Created on: Oct 5, 2023
 *
 *  Author: Ahmad Hamdy
 *
 *****************************************************************************/

#ifndef ADC
#define ADC

#include "std_types.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
#define ADC_MAXIMUM_VALUE    1023
#define ADC_REF_VOLT_VALUE   2.56

/*******************************************************************************
 *                         Types Declaration                                   *
 *******************************************************************************/
typedef enum
{
	AREF, AVCC, RESERVED, INTERNAL_2_56
}ADC_ReferenceVolatge;

typedef enum
{
	DIV2=1, DIV4, DIV8, DIV16, DIV32, DIV64, DIV128
}ADC_Prescaler;

typedef struct
{
	ADC_ReferenceVolatge ref_volt;
	ADC_Prescaler prescaler;
}ADC_ConfigType;

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Function responsible for initialize the ADC driver.
 */
void ADC_init(const ADC_ConfigType * Config_Ptr);

/*
 * Description :
 * Function responsible for read analog data from a certain ADC channel
 * and convert it to digital using the ADC driver.
 */
uint16 ADC_readChannel(uint8 channel_num);

#endif /* ADC */
