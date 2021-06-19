/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This software is delivered "as is" and shows the usage of other software
* components. It is provided as an example software which is intended to be
* modified and extended according to particular requirements.
*
* TARA Systems hereby disclaims all warranties and conditions with regard to the
* software, including all implied warranties and conditions of merchantability
* and non-infringement of any third party IPR or other rights which may result
* from the use or the inability to use the software.
*
********************************************************************************
*
* DESCRIPTION:
*   This file is part of the interface (glue layer) between an Embedded Wizard
*   generated UI application and the board support package (BSP) of a dedicated
*   target.
*   Please note: The implementation of this module is partially based on
*   examples that are provided within the STM32 cube firmware. In case you want
*   to adapt this module to your custom specific hardware, please adapt the
*   hardware initialization code according your needs or integrate the generated
*   initialization code created by using the tool CubeMX.
*   This template is responsible to establish a console connection in order
*   to send debug messages to a PC terminal tool, or to receive key events
*   for the UI application.
*
*******************************************************************************/

#include "ewconfig.h"
#include "stm32f7xx_hal.h"
#include "stm32746g_discovery.h"

#include "ew_bsp_console.h"

extern UART_HandleTypeDef                      huart1;


/*******************************************************************************
* FUNCTION:
*   EwBspConsolePutCharacter
*
* DESCRIPTION:
*   The function EwBspConsolePutCharacter sends the given character to the
*   console interface.
*
* ARGUMENTS:
*   aCharacter - The character to be send via the console interface.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspConsolePutCharacter( unsigned char aCharacter )
{
  HAL_UART_Transmit( &huart1, (uint8_t*)&aCharacter, 1, 10 );
}


/*******************************************************************************
* FUNCTION:
*   EwBspConsoleGetCharacter
*
* DESCRIPTION:
*   The function EwBspConsoleGetCharacter returns the current character from the 
*   console interface. If no character is available within the input buffer, 0 
*   is returned.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   Current character from console input buffer or 0.
*
*******************************************************************************/
unsigned char EwBspConsoleGetCharacter( void )
{
  uint8_t ret;
  HAL_UART_Receive( &huart1, &ret, 1, 10 );
  return ret;
}

/* msy */
