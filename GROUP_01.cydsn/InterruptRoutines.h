/*
*
* \brief Header file for interrupt routines
*
* This header files contains the function declarations
* for the interrupt services routines.
*
* \author Group 1
* \date April 14, 2022
*/

#ifndef __INTERRUPT_ROUTINES_H
    #define __INTERRUPT_ROUTINES_H
    
    #include <cytypes.h>
    
    #define TMP_CH 0
    #define LDR_CH 1
    #define RGB_LED_ON 255
    #define RGB_LED_OFF 0
    #define AMBIENT_T 29
    #define LIGHT_INCREMENT 30
    #define DARK_CONDITION 12
    
    uint8 sampling_status;
    uint8 led_modality;
    uint8 counter_samples;
    uint8 PeriodoTimer;
    uint8 flag_send;
    
    int32 TMP_mv;
    int32 TMP_value;
    int32 avg_TMP;
    int32 sum_TMP;    
    int temp_celsius;

    
    int32 LDR_mv;
    int32 LDR_value;
    int32 avg_LDR;
    int32 sum_LDR;
    int32 resistance_kohm;
    int light_lux;

    /**
    *   \brief ISR called on timer overflow
    */
    CY_ISR_PROTO(Custom_Timer_ADC_ISR);
    CY_ISR_PROTO(Custom_Timer_50Hz_ISR);    
    
 #endif
/* [] END OF FILE */

