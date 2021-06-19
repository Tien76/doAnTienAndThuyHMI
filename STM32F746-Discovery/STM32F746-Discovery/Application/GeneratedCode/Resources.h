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

#ifndef Resources_H
#define Resources_H

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

#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"

/* The small version of the default font resource. The resource is using 'Roboto' 
   TrueType font with 18 pixel height. */
EW_DECLARE_FONT_RES( ResourcesFontSmall )

/* The medium version of the default font resource. The resource is using 'Roboto' 
   TrueType font with 24 pixel height. */
EW_DECLARE_FONT_RES( ResourcesFontMedium )

/* The extra large version of the default font resource. The resource is using 'Roboto' 
   TrueType font with 54 pixel height. */
EW_DECLARE_FONT_RES( ResourcesFontExtraLarge )

/* Bitmap resource : 'Resources::WhiteBitmapStripe' */
EW_DECLARE_BITMAP_RES( ResourcesWhiteBitmapStripe )

/* Bitmap resource containing diverse icons you can use in your project. The icons 
   have the size 54x54 pixel. */
EW_DECLARE_BITMAP_RES( ResourcesSymbolIconsLarge )

/* Bitmap resource containing diverse icons you can use in your project. Usually 
   the icons are used to represent navigation buttons, etc.. The icons have the 
   size 36x36 pixel. */
EW_DECLARE_BITMAP_RES( ResourcesNavigationIconsMedium )

#ifdef __cplusplus
  }
#endif

#endif /* Resources_H */

/* Embedded Wizard */
