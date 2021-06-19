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
*   This template provides access to some LEDs and buttons of the board.
*
*******************************************************************************/

#include "ewconfig.h"
#include "stm32f7xx_hal.h"
#include "stm32746g_discovery.h"

#include "ew_bsp_inout.h"

#define EW_LED                LED1

static TButtonCallback        ButtonCallback = NULL;


/*******************************************************************************
* FUNCTION:
*   HAL_GPIO_EXTI_Callback
*
* DESCRIPTION:
*   The GPIO interrupt callback function.
*
* ARGUMENTS:
*   GPIO_Pin - the gpio pin.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void HAL_GPIO_EXTI_Callback( uint16_t GPIO_Pin )
{
  if ( GPIO_Pin == KEY_BUTTON_PIN )
  {
    GPIO_PinState pinState;

    pinState = HAL_GPIO_ReadPin( KEY_BUTTON_GPIO_PORT, GPIO_Pin );

    if ( ButtonCallback )
      ButtonCallback( pinState );
  }
}


/*******************************************************************************
* FUNCTION:
*   EwBspInOutInitButton
*
* DESCRIPTION:
*   Configures one hardware button of the board used for demo applications.
*
* ARGUMENTS:
*   aButtonCallback - The button callback.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspInOutInitButton( TButtonCallback aButtonCallback )
{
  ButtonCallback = aButtonCallback;
}


/*******************************************************************************
* FUNCTION:
*   EwBspInOutInitLed
*
* DESCRIPTION:
*   Configures one LED of the board used for demo applications.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspInOutInitLed( void )
{
  BSP_LED_Init( EW_LED );
}


/*******************************************************************************
* FUNCTION:
*   EwBspInOutLedOn
*
* DESCRIPTION:
*   Switch LED on (used for demo applications).
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspInOutLedOn( void )
{
  BSP_LED_On( EW_LED );
}


/*******************************************************************************
* FUNCTION:
*   EwBspInOutLedOff
*
* DESCRIPTION:
*   Switch LED off (used for demo applications).
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspInOutLedOff( void )
{
  BSP_LED_Off( EW_LED );
}


/*******************************************************************************
* FUNCTION:
*   EwBspInOutEventHandler
*
* DESCRIPTION:
*   The function EwBspInOutEventHandler is called from the touch screen driver
*   in case of an input event.
*
* ARGUMENTS:
*   aEventId - An optional target specific event ID.
*
* RETURN VALUE:
*   None.
*
*******************************************************************************/
void EwBspInOutEventHandler( int aEventId )
{
  uint16_t GPIO_Pin = ( uint16_t ) aEventId;

  if ( GPIO_Pin == KEY_BUTTON_PIN )
  {
    GPIO_PinState pinState;

    pinState = HAL_GPIO_ReadPin( KEY_BUTTON_GPIO_PORT, GPIO_Pin );

    if ( ButtonCallback )
      ButtonCallback( pinState );
  }
}

/* msy */
