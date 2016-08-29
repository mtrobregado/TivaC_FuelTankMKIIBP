//*****************************************************************************
//
// hw_bq27510g3.h - Macros used when accessing the TI BQ27510-G3 Fuel Gauge
//
// Copyright (c) 2013-2014 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.1.0.12573 of the Tiva Firmware Development Package.
//
// Maker/Author - Markel T. Robregado
// Modification Details :
// Modified to work for Fuel Tank MKII Battery BoosterPack
// File copied and renamed to hw_bq27441g1.h
//
// Macros used when accessing the TI BQ27441G1 Fuel Gauge
//
//*****************************************************************************

#ifndef __SENSORLIB_HW_BQ27441G1_H__
#define __SENSORLIB_HW_BQ27441G1_H__

//*****************************************************************************
//
// The following are defines for the BQ27441G1 register addresses
//
//*****************************************************************************
#define BQ27441G1_O_CNTL_LSB    0x00        // System Control Register LSB
#define BQ27441G1_O_CNTL_MSB    0x01        // System Control Register MSB
//#define BQ27441G1_O_AT_RATE_LSB 0x02        // Discharge current value LSB
//#define BQ27441G1_O_AT_RATE_MSB 0x03        // Discharge current value MSB
//#define BQ27441G1_O_AT_RATE_TTE_LSB                                           \
                                0x04        // Remaining operating time of
                                            // battery with current AT_RATE LSB
//#define BQ27441G1_O_AT_RATE_TTE_MSB                                           \
                                0x05        // Remaining operating time of
                                            // battery with current AT_RATE MSB
#define BQ27441G1_O_TEMP_LSB    0x02        // Battery temperature LSB
#define BQ27441G1_O_TEMP_MSB    0x03        // Battery temperature MSB
#define BQ27441G1_O_VOLT_LSB    0x04        // Battery cell-pack voltage LSB
#define BQ27441G1_O_VOLT_MSB    0x05        // Battery cell-pack voltage MSB
#define BQ27441G1_O_FLAGS_LSB   0x06        // Holds various operating status
                                            // value of gas-guage LSB
#define BQ27441G1_O_FLAGS_MSB   0x07        // Holds various operating status
                                            // value of gas-guage MSB
#define BQ27441G1_O_NOM_AV_CAP_LSB                                            \
                                0x08        // Uncompensated battery capacity
                                            // remaining LSB
#define BQ27441G1_O_NOM_AV_CAP_MSB                                            \
                                0x09        // Uncompensated battery capacity
                                            // remaining MSB
#define BQ27441G1_O_FULL_AV_CAP_LSB                                           \
                                0x0A        // Uncompensated capacity of fully
                                            // charged battery LSB
#define BQ27441G1_O_FULL_AV_CAP_MSB                                           \
                                0x0B        // Uncompensated capacity of fully
                                            // charged battery MSB
#define BQ27441G1_O_REM_CAP_LSB 0x0C        // Compensated battery capacity
                                            // remaining LSB
#define BQ27441G1_O_REM_CAP_MSB 0x0D        // Compensated battery capacity
                                            // remaining MSB
#define BQ27441G1_O_FULL_CHRG_CAP_LSB                                         \
                                0x0E       // Compensated battery capacity
                                            // when fully charged LSB
#define BQ27441G1_O_FULL_CHRG_CAP_MSB                                         \
                                0x0F        // Compensated battery capacity
                                            // when fully charged MSB
#define BQ27441G1_O_AVG_I_LSB   0x10        // Average current flow through
                                            // sense resistor LSB
#define BQ27441G1_O_AVG_I_MSB   0x11        // Average current flow through
                                            // sense resistor MSB
//#define BQ27441G1_O_TTE_LSB     0x16        // Predicted remaining battery life
                                            // (minutes) LSB
//#define BQ27441G1_O_TTE_MSB     0x17        // Predicted remaining battery life
                                            // (minutes) MSB
//#define BQ27441G1_O_STBY_I_LSB  0x18        // Standbye current through sense
                                            // resistor LSB
//#define BQ27441G1_O_STBY_I_MSB  0x19        // Standbye current through sense
                                            // resistor MSB
//#define BQ27441G1_O_STBY_TTE_LSB                                              \
                                0x1A        // Predicted remaining standby
                                            // battery life LSB
//#define BQ27441G1_O_STBY_TTE_MSB                                              \
                                0x1B        // Predicted remaining standby
                                            // battery life MSB
#define BQ27441G1_O_STATE_OF_HEALTH_LSB                                       \
                                0x1C        // State of health (percent) LSB
#define BQ27441G1_O_STATE_OF_HEALTH_MSB                                       \
                                0x1D        // State of health (percent) MSB
//#define BQ27441G1_O_CYC_COUNT_LSB                                             \
                                0x1E        // Number of battery cycles
                                            // experienced LSB
//#define BQ27441G1_O_CYC_COUNT_MSB                                             \
                                0x1F        // Number of battery cycles
                                            // experienced MSB
#define BQ27441G1_O_STATE_OF_CHRG_LSB                                         \
                                0x1C        // State of charge (percent) LSB
#define BQ27441G1_O_STATE_OF_CHRG_MSB                                         \
                                0x1D        // State of charge (percent) MSB
//#define BQ27441G1_O_INST_I_LSB  0x22        // Instananeous current flow
                                            // through sense resistor LSB
//#define BQ27441G1_O_INST_I_MSB  0x23        // Instananeous current flow
                                            // through sense resistor MSB
#define BQ27441G1_O_INT_TEMP_LSB                                              \
                                0x1E        // Internal tmeperature LSB
#define BQ27441G1_O_INT_TEMP_MSB                                              \
                                0x1F        // Internal tmeperature MSB
//#define BQ27441G1_O_RES_SCALE_LSB                                             \
                                0x2A        // Resistance Scale LSB
//#define BQ27441G1_O_RES_SCALE_MSB                                             \
                                0x2B        // Resistance Scale MSB
//#define BQ27441G1_O_OP_CFG_LSB  0x2C        // Operating Configuration LSB
//#define BQ27441G1_O_OP_CFG_MSB  0x2D        // Operating Configuration MSB
#define BQ27441G1_O_DCAP_LSB    0x3C        // Designed capacity of battery LSB
#define BQ27441G1_O_DCAP_MSB    0x3D        // Designed capacity of battery MSB


//*****************************************************************************
//
// The following are defines for the bit fields in the BQ27441G1_O_CNTL_LSB
// register.
//
//*****************************************************************************
#define BQ27441G1_CNTL_LSB_FUNC_M                                             \
                                0xFF        // Functions
#define BQ27441G1_CNTL_LSB_FUNC_STATUS                                        \
                                0x00        // reports DF checksum, hibernate,
                                            // IT, etc
//#define BQ27441G1_CNTL_LSB_FUNC_DEVTYPE                                       \
                                0x01        // reports device type (for
                                            // example: 0x0520)
#define BQ27441G1_CNTL_LSB_FUNC_FWVER                                         \
                                0x02        // reports firmware version on the
                                            // device type
#define BQ27441G1_CNTL_LSB_FUNC_PREVCMD                                       \
                                0x07        // reports previous Control()
                                            // subcommand code
#define BQ27441G1_CNTL_LSB_FUNC_RESET                                         \
                                0x41        // forces a full reset of the fuel
                                            // gauge
#define BQ27441G1_CNTL_LSB_FUNC_S                                             \
                                0

#endif // __SENSORLIB_HW_BQ27441G1_H__
