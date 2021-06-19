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

#ifndef _Application_2Application_H
#define _Application_2Application_H

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
#include "_Application_2background.h"
#include "_Application_2screenLight.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"
#include "_EffectsRectEffect.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"
#include "_setAlarmSetAlarm.h"

/* Forward declaration of the class Application_2::Application */
#ifndef _Application_2Application_
  EW_DECLARE_CLASS( Application_2Application )
#define _Application_2Application_
#endif

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
#endif

/* Forward declaration of the class Core::Group */
#ifndef _CoreGroup_
  EW_DECLARE_CLASS( CoreGroup )
#define _CoreGroup_
#endif

/* Forward declaration of the class Core::KeyPressHandler */
#ifndef _CoreKeyPressHandler_
  EW_DECLARE_CLASS( CoreKeyPressHandler )
#define _CoreKeyPressHandler_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::ModalContext */
#ifndef _CoreModalContext_
  EW_DECLARE_CLASS( CoreModalContext )
#define _CoreModalContext_
#endif

/* Forward declaration of the class Core::TaskQueue */
#ifndef _CoreTaskQueue_
  EW_DECLARE_CLASS( CoreTaskQueue )
#define _CoreTaskQueue_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Graphics::Canvas */
#ifndef _GraphicsCanvas_
  EW_DECLARE_CLASS( GraphicsCanvas )
#define _GraphicsCanvas_
#endif


/* Deklaration of class : 'Application_2::Application' */
EW_DEFINE_FIELDS( Application_2Application, CoreRoot )
  EW_OBJECT  ( Component,       Application_2background )
  EW_OBJECT  ( PushButton,      WidgetSetPushButton )
  EW_OBJECT  ( Rectangle,       ViewsRectangle )
  EW_OBJECT  ( Temp,            ViewsText )
  EW_OBJECT  ( TempValue,       ViewsText )
  EW_OBJECT  ( Line,            ViewsLine )
  EW_OBJECT  ( Humd,            ViewsText )
  EW_OBJECT  ( HumdValue,       ViewsText )
  EW_OBJECT  ( Line1,           ViewsLine )
  EW_OBJECT  ( Light,           ViewsText )
  EW_OBJECT  ( LightValue,      ViewsText )
  EW_OBJECT  ( PushButton1,     WidgetSetPushButton )
  EW_OBJECT  ( AirEffect,       EffectsRectEffect )
  EW_OBJECT  ( AirScreen,       Application_2AirScreen )
  EW_OBJECT  ( LightScreen,     Application_2screenLight )
  EW_OBJECT  ( LightEffect,     EffectsRectEffect )
  EW_OBJECT  ( PushButton2,     WidgetSetPushButton )
  EW_OBJECT  ( AlarmEffect,     EffectsRectEffect )
  EW_OBJECT  ( SetAlarm,        setAlarmSetAlarm )
  EW_OBJECT  ( TouchExit,       CoreSimpleTouchHandler )
  EW_OBJECT  ( Line2,           ViewsLine )
  EW_OBJECT  ( Image,           ViewsImage )
  EW_OBJECT  ( hourText,        ViewsText )
  EW_OBJECT  ( Text1,           ViewsText )
  EW_OBJECT  ( minText,         ViewsText )
  EW_OBJECT  ( SimpleTouchHandler, CoreSimpleTouchHandler )
  EW_OBJECT  ( amPmText,        ViewsText )
  EW_OBJECT  ( lux,             ViewsText )
  EW_OBJECT  ( TempValue1,      ViewsText )
  EW_OBJECT  ( Timer,           CoreTimer )
EW_END_OF_FIELDS( Application_2Application )

/* Virtual Method Table (VMT) for the class : 'Application_2::Application' */
EW_DEFINE_METHODS( Application_2Application, CoreRoot )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreRoot _this )
  EW_METHOD( Draw,              void )( CoreRoot _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, XSet aRetargetReason )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreRoot _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreRoot _this, CoreView value )
  EW_METHOD( DispatchEvent,     XObject )( CoreRoot _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreRoot _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateLayout,      void )( CoreGroup _this, XPoint aSize )
  EW_METHOD( UpdateViewState,   void )( CoreGroup _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreRoot _this, XRect aArea )
EW_END_OF_METHODS( Application_2Application )

/* 'C' function for method : 'Application_2::Application.LightFunction()' */
void Application_2Application_LightFunction( Application_2Application _this, XObject 
  sender );

/* 'C' function for method : 'Application_2::Application.Exit()' */
void Application_2Application_Exit( Application_2Application _this, XObject sender );

/* 'C' function for method : 'Application_2::Application.AirFunction()' */
void Application_2Application_AirFunction( Application_2Application _this, XObject 
  sender );

/* 'C' function for method : 'Application_2::Application.AlarmFunction()' */
void Application_2Application_AlarmFunction( Application_2Application _this, XObject 
  sender );

/* 'C' function for method : 'Application_2::Application.slotSetAlarm()' */
void Application_2Application_slotSetAlarm( Application_2Application _this, XObject 
  sender );

#ifdef __cplusplus
  }
#endif

#endif /* _Application_2Application_H */

/* Embedded Wizard */
