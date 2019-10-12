/*
 * Copyright (c) 2014-2016, Freescale Semiconductor, Inc.
 * Copyright 2016 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * Generated by erpcgen 1.7.2 on Wed Mar 20 14:14:04 2019.
 *
 * AUTOGENERATED - DO NOT EDIT
 */


#if !defined(_erpc_dac_adc_h_)
#define _erpc_dac_adc_h_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "erpc_version.h"

#if 10702 != ERPC_VERSION_NUMBER
#error "The generated shim code version is different to the rest of eRPC code."
#endif

#if !defined(ERPC_TYPE_DEFINITIONS)
#define ERPC_TYPE_DEFINITIONS

// Aliases data types declarations
typedef struct AdcConfig AdcConfig;
typedef struct Vector Vector;

// Structures/unions data types declarations
struct AdcConfig
{
    float vref;
    float atomicSteps;
};

struct Vector
{
    int16_t A_x;
    int16_t A_y;
    int16_t A_z;
    int16_t M_x;
    int16_t M_y;
    int16_t M_z;
};


// Constant variable declarations
extern const uint8_t StringMaxSize;

#endif // ERPC_TYPE_DEFINITIONS

/*! @brief dac_adc identifiers */
enum _dac_adc_ids
{
    kdac_adc_service_id = 1,
    kdac_adc_adc_get_config_id = 1,
    kdac_adc_convert_dac_adc_id = 2,
    kdac_adc_set_led_id = 3,
    kdac_adc_read_senzor_mag_accel_id = 4,
    kdac_adc_board_get_name_id = 5,
};

#if defined(__cplusplus)
extern "C" {
#endif

//! @name dac_adc
//@{
void adc_get_config(AdcConfig * config);

void convert_dac_adc(uint32_t numberToConvert, uint32_t * result);

void set_led(uint8_t whichLed);

void read_senzor_mag_accel(Vector * results);

void board_get_name(char * name);
//@} 

#if defined(__cplusplus)
}
#endif

#endif // _erpc_dac_adc_h_