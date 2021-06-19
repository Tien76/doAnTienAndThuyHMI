/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 10.00
* Profile  : STM32F746
* Platform : STM.STM32.RGB565
*
*******************************************************************************/

#ifndef Application_2_H
#define Application_2_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if EW_RTE_VERSION != 0x000A0000
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if EW_GFX_VERSION != 0x000A0000
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_Application_2AirScreen.h"
#include "_Application_2Application.h"
#include "_Application_2background.h"
#include "_Application_2screenLight.h"

/* Bitmap resource : 'Application_2::backGroundMap' */
EW_DECLARE_BITMAP_RES( Application_2backGroundMap )

/* Bitmap resource : 'Application_2::exiticon' */
EW_DECLARE_BITMAP_RES( Application_2exiticon )

/* Bitmap resource : 'Application_2::down' */
EW_DECLARE_BITMAP_RES( Application_2down )

/* Bitmap resource : 'Application_2::down1' */
EW_DECLARE_BITMAP_RES( Application_2down1 )

/* Bitmap resource : 'Application_2::up' */
EW_DECLARE_BITMAP_RES( Application_2up )

/* Bitmap resource : 'Application_2::up1' */
EW_DECLARE_BITMAP_RES( Application_2up1 )

/* Bitmap resource : 'Application_2::On' */
EW_DECLARE_BITMAP_RES( Application_2On )

/* Bitmap resource : 'Application_2::Off' */
EW_DECLARE_BITMAP_RES( Application_2Off )

/* Bitmap resource : 'Application_2::SpeedON' */
EW_DECLARE_BITMAP_RES( Application_2SpeedON )

/* Bitmap resource : 'Application_2::SpeedOff' */
EW_DECLARE_BITMAP_RES( Application_2SpeedOff )

/* Bitmap resource : 'Application_2::Fan' */
EW_DECLARE_BITMAP_RES( Application_2Fan )

/* Bitmap resource : 'Application_2::iconAlarm' */
EW_DECLARE_BITMAP_RES( Application_2iconAlarm )

/* Font resource : 'Application_2::fontMedium' */
EW_DECLARE_FONT_RES( Application_2fontMedium )

/* Font resource : 'Application_2::fontTimer' */
EW_DECLARE_FONT_RES( Application_2fontTimer )

/* Bitmap resource : 'Application_2::readingBook' */
EW_DECLARE_BITMAP_RES( Application_2readingBook )

/* Bitmap resource : 'Application_2::bedRoom' */
EW_DECLARE_BITMAP_RES( Application_2bedRoom )

/* Bitmap resource : 'Application_2::iconAlarmSmall' */
EW_DECLARE_BITMAP_RES( Application_2iconAlarmSmall )

#ifdef __cplusplus
  }
#endif

#endif /* Application_2_H */

/* Embedded Wizard */
