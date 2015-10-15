/*******************************************************************************
* File Name: UART_TEST_BOOT.c
* Version 2.0
*
* Description:
*  This file provides the source code to the API for the bootloader
*  communication support in the SCB Component.
*
* Note:
*
********************************************************************************
* Copyright 2013-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "UART_TEST_BOOT.h"


#if defined(CYDEV_BOOTLOADER_IO_COMP) && (UART_TEST_BTLDR_COMM_MODE_ENABLED)

/*******************************************************************************
* Function Name: UART_TEST_CyBtldrCommStart
********************************************************************************
*
* Summary:
*  Calls the CyBtldrCommStart function of the bootloader communication
*  component for the selected mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void UART_TEST_CyBtldrCommStart(void)
{
    #if(UART_TEST_SCB_MODE_UNCONFIG_CONST_CFG)
        if(UART_TEST_SCB_MODE_I2C_RUNTM_CFG)
        {
            UART_TEST_I2CCyBtldrCommStart();
        }
        else if(UART_TEST_SCB_MODE_SPI_RUNTM_CFG)
        {
            UART_TEST_SpiCyBtldrCommStart();
        }
        else if(UART_TEST_SCB_MODE_UART_RUNTM_CFG)
        {
            UART_TEST_UartCyBtldrCommStart();
        }
        else if(UART_TEST_SCB_MODE_EZI2C_RUNTM_CFG)
        {
             UART_TEST_EzI2CCyBtldrCommStart();
        }
        else
        {
            /* Unknown mode */
        }
    #elif(UART_TEST_SCB_MODE_I2C_CONST_CFG)
        UART_TEST_I2CCyBtldrCommStart();

    #elif(UART_TEST_SCB_MODE_SPI_CONST_CFG)
        UART_TEST_SpiCyBtldrCommStart();

    #elif(UART_TEST_SCB_MODE_UART_CONST_CFG)
        UART_TEST_UartCyBtldrCommStart();

    #elif(UART_TEST_SCB_MODE_EZI2C_CONST_CFG)
        UART_TEST_EzI2CCyBtldrCommStart();

    #else
        /* Unknown mode */

    #endif /* (UART_TEST_SCB_MODE_UNCONFIG_CONST_CFG) */
}


/*******************************************************************************
* Function Name: UART_TEST_CyBtldrCommStop
********************************************************************************
*
* Summary:
*  Calls the CyBtldrCommStop function of the bootloader communication
*  component for the selected mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void UART_TEST_CyBtldrCommStop(void)
{
    #if(UART_TEST_SCB_MODE_UNCONFIG_CONST_CFG)
        if(UART_TEST_SCB_MODE_I2C_RUNTM_CFG)
        {
            UART_TEST_I2CCyBtldrCommStop();
        }
        else if(UART_TEST_SCB_MODE_SPI_RUNTM_CFG)
        {
            UART_TEST_SpiCyBtldrCommStop();
        }
        else if(UART_TEST_SCB_MODE_UART_RUNTM_CFG)
        {
            UART_TEST_UartCyBtldrCommStop();
        }
        else if(UART_TEST_SCB_MODE_EZI2C_RUNTM_CFG)
        {
            UART_TEST_EzI2CCyBtldrCommStop();
        }
        else
        {
            /* Unknown mode */
        }
    #elif(UART_TEST_SCB_MODE_I2C_CONST_CFG)
        UART_TEST_I2CCyBtldrCommStop();

    #elif(UART_TEST_SCB_MODE_SPI_CONST_CFG)
        UART_TEST_SpiCyBtldrCommStop();

    #elif(UART_TEST_SCB_MODE_UART_CONST_CFG)
        UART_TEST_UartCyBtldrCommStop();

    #elif(UART_TEST_SCB_MODE_EZI2C_CONST_CFG)
        UART_TEST_EzI2CCyBtldrCommStop();

    #else
        /* Unknown mode */

    #endif /* (UART_TEST_SCB_MODE_UNCONFIG_CONST_CFG) */
}


/*******************************************************************************
* Function Name: UART_TEST_CyBtldrCommReset
********************************************************************************
*
* Summary:
*  Calls the CyBtldrCommReset function of the bootloader communication
*  component for the selected mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void UART_TEST_CyBtldrCommReset(void)
{
    #if(UART_TEST_SCB_MODE_UNCONFIG_CONST_CFG)
        if(UART_TEST_SCB_MODE_I2C_RUNTM_CFG)
        {
            UART_TEST_I2CCyBtldrCommReset();
        }
        else if(UART_TEST_SCB_MODE_SPI_RUNTM_CFG)
        {
            UART_TEST_SpiCyBtldrCommReset();
        }
        else if(UART_TEST_SCB_MODE_UART_RUNTM_CFG)
        {
            UART_TEST_UartCyBtldrCommReset();
        }
        else if(UART_TEST_SCB_MODE_EZI2C_RUNTM_CFG)
        {
            UART_TEST_EzI2CCyBtldrCommReset();
        }
        else
        {
            /* Unknown mode */
        }
    #elif(UART_TEST_SCB_MODE_I2C_CONST_CFG)
        UART_TEST_I2CCyBtldrCommReset();

    #elif(UART_TEST_SCB_MODE_SPI_CONST_CFG)
        UART_TEST_SpiCyBtldrCommReset();

    #elif(UART_TEST_SCB_MODE_UART_CONST_CFG)
        UART_TEST_UartCyBtldrCommReset();

    #elif(UART_TEST_SCB_MODE_EZI2C_CONST_CFG)
        UART_TEST_EzI2CCyBtldrCommReset();

    #else
        /* Unknown mode */

    #endif /* (UART_TEST_SCB_MODE_UNCONFIG_CONST_CFG) */
}


/*******************************************************************************
* Function Name: UART_TEST_CyBtldrCommRead
********************************************************************************
*
* Summary:
*  Calls the CyBtldrCommRead function of the bootloader communication
*  component for the selected mode.
*
* Parameters:
*  pData:    Pointer to storage for the block of data to be read from the
*            bootloader host
*  size:     Number of bytes to be read.
*  count:    Pointer to the variable to write the number of bytes actually
*            read.
*  timeOut:  Number of units in 10 ms to wait before returning because of a
*            timeout.
*
* Return:
*  Returns CYRET_SUCCESS if no problem was encountered or returns the value
*  that best describes the problem.
*
*******************************************************************************/
cystatus UART_TEST_CyBtldrCommRead(uint8 pData[], uint16 size, uint16 * count, uint8 timeOut)
{
    cystatus status;

    #if(UART_TEST_SCB_MODE_UNCONFIG_CONST_CFG)
        if(UART_TEST_SCB_MODE_I2C_RUNTM_CFG)
        {
            status = UART_TEST_I2CCyBtldrCommRead(pData, size, count, timeOut);
        }
        else if(UART_TEST_SCB_MODE_SPI_RUNTM_CFG)
        {
            status = UART_TEST_SpiCyBtldrCommRead(pData, size, count, timeOut);
        }
        else if(UART_TEST_SCB_MODE_UART_RUNTM_CFG)
        {
            status = UART_TEST_UartCyBtldrCommRead(pData, size, count, timeOut);
        }
        else if(UART_TEST_SCB_MODE_EZI2C_RUNTM_CFG)
        {
            status = UART_TEST_EzI2CCyBtldrCommRead(pData, size, count, timeOut);
        }
        else
        {
            status = CYRET_INVALID_STATE; /* Unknown mode: return status */
        }

    #elif(UART_TEST_SCB_MODE_I2C_CONST_CFG)
        status = UART_TEST_I2CCyBtldrCommRead(pData, size, count, timeOut);

    #elif(UART_TEST_SCB_MODE_SPI_CONST_CFG)
        status = UART_TEST_SpiCyBtldrCommRead(pData, size, count, timeOut);

    #elif(UART_TEST_SCB_MODE_UART_CONST_CFG)
        status = UART_TEST_UartCyBtldrCommRead(pData, size, count, timeOut);

    #elif(UART_TEST_SCB_MODE_EZI2C_CONST_CFG)
        status = UART_TEST_EzI2CCyBtldrCommRead(pData, size, count, timeOut);

    #else
        status = CYRET_INVALID_STATE; /* Unknown mode: return status */

    #endif /* (UART_TEST_SCB_MODE_UNCONFIG_CONST_CFG) */

    return(status);
}


/*******************************************************************************
* Function Name: UART_TEST_CyBtldrCommWrite
********************************************************************************
*
* Summary:
*  Calls the CyBtldrCommWrite  function of the bootloader communication
*  component for the selected mode.
*
* Parameters:
*  pData:    Pointer to the block of data to be written to the bootloader host.
*  size:     Number of bytes to be written.
*  count:    Pointer to the variable to write the number of bytes actually
*            written.
*  timeOut:  Number of units in 10 ms to wait before returning because of a
*            timeout.
*
* Return:
*  Returns CYRET_SUCCESS if no problem was encountered or returns the value
*  that best describes the problem.
*
*******************************************************************************/
cystatus UART_TEST_CyBtldrCommWrite(const uint8 pData[], uint16 size, uint16 * count, uint8 timeOut)
{
    cystatus status;

    #if(UART_TEST_SCB_MODE_UNCONFIG_CONST_CFG)
        if(UART_TEST_SCB_MODE_I2C_RUNTM_CFG)
        {
            status = UART_TEST_I2CCyBtldrCommWrite(pData, size, count, timeOut);
        }
        else if(UART_TEST_SCB_MODE_SPI_RUNTM_CFG)
        {
            status = UART_TEST_SpiCyBtldrCommWrite(pData, size, count, timeOut);
        }
        else if(UART_TEST_SCB_MODE_UART_RUNTM_CFG)
        {
            status = UART_TEST_UartCyBtldrCommWrite(pData, size, count, timeOut);
        }
        else if(UART_TEST_SCB_MODE_EZI2C_RUNTM_CFG)
        {
            status = UART_TEST_EzI2CCyBtldrCommWrite(pData, size, count, timeOut);
        }
        else
        {
            status = CYRET_INVALID_STATE; /* Unknown mode */
        }
    #elif(UART_TEST_SCB_MODE_I2C_CONST_CFG)
        status = UART_TEST_I2CCyBtldrCommWrite(pData, size, count, timeOut);

    #elif(UART_TEST_SCB_MODE_SPI_CONST_CFG)
        status = UART_TEST_SpiCyBtldrCommWrite(pData, size, count, timeOut);

    #elif(UART_TEST_SCB_MODE_UART_CONST_CFG)
        status = UART_TEST_UartCyBtldrCommWrite(pData, size, count, timeOut);

    #elif(UART_TEST_SCB_MODE_EZI2C_CONST_CFG)
        status = UART_TEST_EzI2CCyBtldrCommWrite(pData, size, count, timeOut);

    #else
        status = CYRET_INVALID_STATE; /* Unknown mode */

    #endif /* (UART_TEST_SCB_MODE_UNCONFIG_CONST_CFG) */

    return(status);
}

#endif /* defined(CYDEV_BOOTLOADER_IO_COMP) && (UART_TEST_BTLDR_COMM_MODE_ENABLED) */


/* [] END OF FILE */
