/*******************************************************************************
* File Name: .h
* Version 2.0
*
* Description:
*  This private file provides constants and parameter values for the
*  SCB Component.
*  Please do not use this file or its content in your project.
*
* Note:
*
********************************************************************************
* Copyright 2013-2014, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_SCB_PVT_Wrist_UART_H)
#define CY_SCB_PVT_Wrist_UART_H

#include "Wrist_UART.h"


/***************************************
*     Private Function Prototypes
***************************************/

/* APIs to service INTR_I2C_EC register */
#define Wrist_UART_SetI2CExtClkInterruptMode(interruptMask) Wrist_UART_WRITE_INTR_I2C_EC_MASK(interruptMask)
#define Wrist_UART_ClearI2CExtClkInterruptSource(interruptMask) Wrist_UART_CLEAR_INTR_I2C_EC(interruptMask)
#define Wrist_UART_GetI2CExtClkInterruptSource()                (Wrist_UART_INTR_I2C_EC_REG)
#define Wrist_UART_GetI2CExtClkInterruptMode()                  (Wrist_UART_INTR_I2C_EC_MASK_REG)
#define Wrist_UART_GetI2CExtClkInterruptSourceMasked()          (Wrist_UART_INTR_I2C_EC_MASKED_REG)

#if (!Wrist_UART_CY_SCBIP_V1)
    /* APIs to service INTR_SPI_EC register */
    #define Wrist_UART_SetSpiExtClkInterruptMode(interruptMask) \
                                                                Wrist_UART_WRITE_INTR_SPI_EC_MASK(interruptMask)
    #define Wrist_UART_ClearSpiExtClkInterruptSource(interruptMask) \
                                                                Wrist_UART_CLEAR_INTR_SPI_EC(interruptMask)
    #define Wrist_UART_GetExtSpiClkInterruptSource()                 (Wrist_UART_INTR_SPI_EC_REG)
    #define Wrist_UART_GetExtSpiClkInterruptMode()                   (Wrist_UART_INTR_SPI_EC_MASK_REG)
    #define Wrist_UART_GetExtSpiClkInterruptSourceMasked()           (Wrist_UART_INTR_SPI_EC_MASKED_REG)
#endif /* (!Wrist_UART_CY_SCBIP_V1) */

#if(Wrist_UART_SCB_MODE_UNCONFIG_CONST_CFG)
    extern void Wrist_UART_SetPins(uint32 mode, uint32 subMode, uint32 uartEnableMask);
#endif /* (Wrist_UART_SCB_MODE_UNCONFIG_CONST_CFG) */


/***************************************
*     Vars with External Linkage
***************************************/

#if !defined (CY_REMOVE_Wrist_UART_CUSTOM_INTR_HANDLER)
    extern cyisraddress Wrist_UART_customIntrHandler;
#endif /* !defined (CY_REMOVE_Wrist_UART_CUSTOM_INTR_HANDLER) */

extern Wrist_UART_BACKUP_STRUCT Wrist_UART_backup;

#if(Wrist_UART_SCB_MODE_UNCONFIG_CONST_CFG)
    /* Common configuration variables */
    extern uint8 Wrist_UART_scbMode;
    extern uint8 Wrist_UART_scbEnableWake;
    extern uint8 Wrist_UART_scbEnableIntr;

    /* I2C configuration variables */
    extern uint8 Wrist_UART_mode;
    extern uint8 Wrist_UART_acceptAddr;

    /* SPI/UART configuration variables */
    extern volatile uint8 * Wrist_UART_rxBuffer;
    extern uint8   Wrist_UART_rxDataBits;
    extern uint32  Wrist_UART_rxBufferSize;

    extern volatile uint8 * Wrist_UART_txBuffer;
    extern uint8   Wrist_UART_txDataBits;
    extern uint32  Wrist_UART_txBufferSize;

    /* EZI2C configuration variables */
    extern uint8 Wrist_UART_numberOfAddr;
    extern uint8 Wrist_UART_subAddrSize;
#endif /* (Wrist_UART_SCB_MODE_UNCONFIG_CONST_CFG) */


/***************************************
*        Conditional Macro
****************************************/

#if(Wrist_UART_SCB_MODE_UNCONFIG_CONST_CFG)
    /* Defines run time operation mode */
    #define Wrist_UART_SCB_MODE_I2C_RUNTM_CFG     (Wrist_UART_SCB_MODE_I2C      == Wrist_UART_scbMode)
    #define Wrist_UART_SCB_MODE_SPI_RUNTM_CFG     (Wrist_UART_SCB_MODE_SPI      == Wrist_UART_scbMode)
    #define Wrist_UART_SCB_MODE_UART_RUNTM_CFG    (Wrist_UART_SCB_MODE_UART     == Wrist_UART_scbMode)
    #define Wrist_UART_SCB_MODE_EZI2C_RUNTM_CFG   (Wrist_UART_SCB_MODE_EZI2C    == Wrist_UART_scbMode)
    #define Wrist_UART_SCB_MODE_UNCONFIG_RUNTM_CFG \
                                                        (Wrist_UART_SCB_MODE_UNCONFIG == Wrist_UART_scbMode)

    /* Defines wakeup enable */
    #define Wrist_UART_SCB_WAKE_ENABLE_CHECK       (0u != Wrist_UART_scbEnableWake)
#endif /* (Wrist_UART_SCB_MODE_UNCONFIG_CONST_CFG) */

/* Defines maximum number of SCB pins */
#if (!Wrist_UART_CY_SCBIP_V1)
    #define Wrist_UART_SCB_PINS_NUMBER    (7u)
#else
    #define Wrist_UART_SCB_PINS_NUMBER    (2u)
#endif /* (!Wrist_UART_CY_SCBIP_V1) */

#endif /* (CY_SCB_PVT_Wrist_UART_H) */


/* [] END OF FILE */
