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

#include "ewlocale.h"
#include "_CoreView.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "_setAlarmSetAlarm.h"
#include "Application_2.h"
#include "Resources.h"
#include "setAlarm.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x0000008C, /* ratio 77.14 % */
  0xB8000B00, 0x80060452, 0x1212001B, 0x47445818, 0x09020042, 0x306000CE, 0x4122C461,
  0xA8793400, 0x0010E180, 0x01C00061, 0x1A400740, 0xB8006F00, 0x61810879, 0x32002646,
  0x0008D14A, 0x00298004, 0xB2A0008A, 0x00124013, 0x791C004E, 0x8C6090B8, 0xCA8F1787,
  0x22B0CA20, 0x00358644, 0x10CA40E4, 0x0F87CD0A, 0x00000203, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 288, 220 }};
static const XRect _Const0001 = {{ 0, 1 }, { 288, 221 }};
static const XColor _Const0002 = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const0003 = {{ 70, 100 }, { 228, 150 }};
static const XColor _Const0004 = { 0xFF, 0x26, 0xF8, 0xFF };
static const XRect _Const0005 = {{ 70, 75 }, { 120, 100 }};
static const XRect _Const0006 = {{ 124, 75 }, { 174, 100 }};
static const XRect _Const0007 = {{ 178, 75 }, { 228, 100 }};
static const XRect _Const0008 = {{ 70, 150 }, { 120, 175 }};
static const XRect _Const0009 = {{ 124, 150 }, { 174, 175 }};
static const XRect _Const000A = {{ 178, 150 }, { 228, 175 }};
static const XRect _Const000B = {{ 70, 100 }, { 116, 150 }};
static const XStringRes _Const000C = { _StringsDefault0, 0x0002 };
static const XColor _Const000D = { 0x1D, 0x2C, 0xFF, 0xFF };
static const XRect _Const000E = {{ 116, 100 }, { 125, 150 }};
static const XStringRes _Const000F = { _StringsDefault0, 0x0007 };
static const XRect _Const0010 = {{ 129, 100 }, { 175, 150 }};
static const XStringRes _Const0011 = { _StringsDefault0, 0x000B };
static const XRect _Const0012 = {{ 178, 100 }, { 224, 150 }};
static const XStringRes _Const0013 = { _StringsDefault0, 0x0010 };
static const XRect _Const0014 = {{ 181, 100 }, { 225, 150 }};
static const XColor _Const0015 = { 0xD7, 0xD7, 0xD7, 0x5A };
static const XRect _Const0016 = {{ 239, 186 }, { 288, 220 }};
static const XRect _Const0017 = {{ 80, 75 }, { 107, 100 }};
static const XStringRes _Const0018 = { _StringsDefault0, 0x0015 };
static const XRect _Const0019 = {{ 135, 75 }, { 164, 100 }};
static const XRect _Const001A = {{ 188, 75 }, { 216, 100 }};
static const XRect _Const001B = {{ 80, 150 }, { 107, 175 }};
static const XRect _Const001C = {{ 135, 150 }, { 164, 175 }};
static const XRect _Const001D = {{ 188, 150 }, { 216, 175 }};
static const XRect _Const001E = {{ 0, 0 }, { 287, 36 }};
static const XColor _Const001F = { 0x3C, 0x3C, 0xFF, 0xFF };
static const XRect _Const0020 = {{ 256, 0 }, { 288, 36 }};
static const XRect _Const0021 = {{ 55, 2 }, { 228, 32 }};
static const XStringRes _Const0022 = { _StringsDefault0, 0x001F };
static const XRect _Const0023 = {{ 0, 34 }, { 61, 94 }};
static const XRect _Const0024 = {{ 256, -2 }, { 288, 36 }};
static const XStringRes _Const0025 = { _StringsDefault0, 0x002F };
static const XStringRes _Const0026 = { _StringsDefault0, 0x0033 };
static const XStringRes _Const0027 = { _StringsDefault0, 0x0038 };
static const XStringRes _Const0028 = { _StringsDefault0, 0x003C };
static const XStringRes _Const0029 = { _StringsDefault0, 0x0041 };

/* Initializer for the class 'setAlarm::SetAlarm' */
void setAlarmSetAlarm__Init( setAlarmSetAlarm _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( setAlarmSetAlarm );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->upHour, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->upMin, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->upPmAm, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->downHour, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->dowmMin, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->downAmPm, &_this->_XObject, 0 );
  ViewsText__Init( &_this->hourText, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_XObject, 0 );
  ViewsText__Init( &_this->minText, &_this->_XObject, 0 );
  ViewsText__Init( &_this->amPmText, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->colorChoise, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->Image2, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->pushUpHour, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->pushUpMin, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->pushUpAmPm, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->pushDoHour, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->pushDoMin, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->pushDoAmPm, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->pushSave, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle2, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->Image1, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->pushButtonSave, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->pushButtonExit, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( setAlarmSetAlarm );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0001 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0002 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0003 );
  ViewsBorder_OnSetColor( &_this->Border, _Const0004 );
  CoreRectView__OnSetBounds( &_this->upHour, _Const0005 );
  CoreRectView__OnSetBounds( &_this->upMin, _Const0006 );
  CoreRectView__OnSetBounds( &_this->upPmAm, _Const0007 );
  CoreRectView__OnSetBounds( &_this->downHour, _Const0008 );
  ViewsImage_OnSetFrameNumber( &_this->downHour, 1 );
  CoreRectView__OnSetBounds( &_this->dowmMin, _Const0009 );
  ViewsImage_OnSetFrameNumber( &_this->dowmMin, 1 );
  CoreRectView__OnSetBounds( &_this->downAmPm, _Const000A );
  ViewsImage_OnSetFrameNumber( &_this->downAmPm, 1 );
  CoreRectView__OnSetBounds( &_this->hourText, _Const000B );
  ViewsText_OnSetString( &_this->hourText, EwLoadString( &_Const000C ));
  ViewsText_OnSetColor( &_this->hourText, _Const000D );
  CoreRectView__OnSetBounds( &_this->Text1, _Const000E );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const000F ));
  ViewsText_OnSetColor( &_this->Text1, _Const000D );
  CoreRectView__OnSetBounds( &_this->minText, _Const0010 );
  ViewsText_OnSetString( &_this->minText, EwLoadString( &_Const0011 ));
  ViewsText_OnSetColor( &_this->minText, _Const000D );
  CoreRectView__OnSetBounds( &_this->amPmText, _Const0012 );
  ViewsText_OnSetString( &_this->amPmText, EwLoadString( &_Const0013 ));
  ViewsText_OnSetColor( &_this->amPmText, _Const000D );
  CoreRectView__OnSetBounds( &_this->colorChoise, _Const0014 );
  ViewsRectangle_OnSetColor( &_this->colorChoise, _Const0015 );
  CoreRectView__OnSetBounds( &_this->Image2, _Const0016 );
  CoreRectView__OnSetBounds( &_this->pushUpHour, _Const0017 );
  WidgetSetPushButton_OnSetLabel( &_this->pushUpHour, EwLoadString( &_Const0018 ));
  CoreRectView__OnSetBounds( &_this->pushUpMin, _Const0019 );
  WidgetSetPushButton_OnSetLabel( &_this->pushUpMin, EwLoadString( &_Const0018 ));
  CoreRectView__OnSetBounds( &_this->pushUpAmPm, _Const001A );
  WidgetSetPushButton_OnSetLabel( &_this->pushUpAmPm, EwLoadString( &_Const0018 ));
  CoreRectView__OnSetBounds( &_this->pushDoHour, _Const001B );
  WidgetSetPushButton_OnSetLabel( &_this->pushDoHour, EwLoadString( &_Const0018 ));
  CoreRectView__OnSetBounds( &_this->pushDoMin, _Const001C );
  WidgetSetPushButton_OnSetLabel( &_this->pushDoMin, EwLoadString( &_Const0018 ));
  CoreRectView__OnSetBounds( &_this->pushDoAmPm, _Const001D );
  WidgetSetPushButton_OnSetLabel( &_this->pushDoAmPm, EwLoadString( &_Const0018 ));
  CoreRectView__OnSetBounds( &_this->pushSave, _Const0016 );
  WidgetSetPushButton_OnSetLabel( &_this->pushSave, EwLoadString( &_Const0018 ));
  CoreRectView__OnSetBounds( &_this->Rectangle2, _Const001E );
  ViewsRectangle_OnSetColor( &_this->Rectangle2, _Const001F );
  CoreRectView__OnSetBounds( &_this->Image, _Const0020 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0021 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0022 ));
  CoreRectView__OnSetBounds( &_this->Image1, _Const0023 );
  CoreRectView__OnSetBounds( &_this->pushButtonSave, _Const0016 );
  WidgetSetPushButton_OnSetLabel( &_this->pushButtonSave, EwLoadString( &_Const0018 ));
  CoreRectView__OnSetBounds( &_this->pushButtonExit, _Const0024 );
  WidgetSetPushButton_OnSetLabel( &_this->pushButtonExit, EwLoadString( &_Const0018 ));
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Border ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->upHour ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->upMin ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->upPmAm ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->downHour ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->dowmMin ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->downAmPm ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->hourText ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->minText ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->amPmText ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->colorChoise ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->pushUpHour ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->pushUpMin ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->pushUpAmPm ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->pushDoHour ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->pushDoMin ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->pushDoAmPm ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->pushSave ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->pushButtonSave ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->pushButtonExit ), 0 );
  ViewsImage_OnSetBitmap( &_this->upHour, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->upMin, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->upPmAm, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->downHour, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->dowmMin, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->downAmPm, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->hourText, EwLoadResource( &Application_2fontTimer, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &Application_2fontTimer, ResourcesFont ));
  ViewsText_OnSetFont( &_this->minText, EwLoadResource( &Application_2fontTimer, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->amPmText, EwLoadResource( &Application_2fontTimer, 
  ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image2, EwLoadResource( &setAlarmsave1, ResourcesBitmap ));
  _this->pushUpHour.OnEnter = EwNullSlot;
  _this->pushUpHour.OnPress = EwNewSlot( _this, setAlarmSetAlarm_SlotUpHour );
  WidgetSetPushButton_OnSetAppearance( &_this->pushUpHour, EwGetAutoObject( &setAlarmbuttonSetAlarm, 
  WidgetSetPushButtonConfig ));
  _this->pushUpMin.OnEnter = EwNullSlot;
  _this->pushUpMin.OnPress = EwNewSlot( _this, setAlarmSetAlarm_SlotUpMin );
  WidgetSetPushButton_OnSetAppearance( &_this->pushUpMin, EwGetAutoObject( &setAlarmbuttonSetAlarm, 
  WidgetSetPushButtonConfig ));
  _this->pushUpAmPm.OnEnter = EwNullSlot;
  _this->pushUpAmPm.OnPress = EwNewSlot( _this, setAlarmSetAlarm_SlotUpAm );
  WidgetSetPushButton_OnSetAppearance( &_this->pushUpAmPm, EwGetAutoObject( &setAlarmbuttonSetAlarm, 
  WidgetSetPushButtonConfig ));
  _this->pushDoHour.OnEnter = EwNullSlot;
  _this->pushDoHour.OnPress = EwNewSlot( _this, setAlarmSetAlarm_SlotDoHour );
  WidgetSetPushButton_OnSetAppearance( &_this->pushDoHour, EwGetAutoObject( &setAlarmbuttonSetAlarm, 
  WidgetSetPushButtonConfig ));
  _this->pushDoMin.OnEnter = EwNullSlot;
  _this->pushDoMin.OnPress = EwNewSlot( _this, setAlarmSetAlarm_SlotDoMin );
  WidgetSetPushButton_OnSetAppearance( &_this->pushDoMin, EwGetAutoObject( &setAlarmbuttonSetAlarm, 
  WidgetSetPushButtonConfig ));
  _this->pushDoAmPm.OnPress = EwNewSlot( _this, setAlarmSetAlarm_SlotUpAm );
  WidgetSetPushButton_OnSetAppearance( &_this->pushDoAmPm, EwGetAutoObject( &setAlarmbuttonSetAlarm, 
  WidgetSetPushButtonConfig ));
  _this->pushSave.OnRelease = EwNullSlot;
  _this->pushSave.OnPress = EwNewSlot( _this, setAlarmSetAlarm_SlotUpHour );
  WidgetSetPushButton_OnSetAppearance( &_this->pushSave, EwGetAutoObject( &setAlarmbuttonSetAlarm, 
  WidgetSetPushButtonConfig ));
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &Application_2exiticon, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &Application_2fontMedium, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image1, EwLoadResource( &Application_2iconAlarm, 
  ResourcesBitmap ));
  WidgetSetPushButton_OnSetAppearance( &_this->pushButtonSave, EwGetAutoObject( 
  &setAlarmbuttonSetAlarm, WidgetSetPushButtonConfig ));
  WidgetSetPushButton_OnSetAppearance( &_this->pushButtonExit, EwGetAutoObject( 
  &setAlarmbuttonSetAlarm, WidgetSetPushButtonConfig ));
}

/* Re-Initializer for the class 'setAlarm::SetAlarm' */
void setAlarmSetAlarm__ReInit( setAlarmSetAlarm _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsBorder__ReInit( &_this->Border );
  ViewsImage__ReInit( &_this->upHour );
  ViewsImage__ReInit( &_this->upMin );
  ViewsImage__ReInit( &_this->upPmAm );
  ViewsImage__ReInit( &_this->downHour );
  ViewsImage__ReInit( &_this->dowmMin );
  ViewsImage__ReInit( &_this->downAmPm );
  ViewsText__ReInit( &_this->hourText );
  ViewsText__ReInit( &_this->Text1 );
  ViewsText__ReInit( &_this->minText );
  ViewsText__ReInit( &_this->amPmText );
  ViewsRectangle__ReInit( &_this->colorChoise );
  ViewsImage__ReInit( &_this->Image2 );
  WidgetSetPushButton__ReInit( &_this->pushUpHour );
  WidgetSetPushButton__ReInit( &_this->pushUpMin );
  WidgetSetPushButton__ReInit( &_this->pushUpAmPm );
  WidgetSetPushButton__ReInit( &_this->pushDoHour );
  WidgetSetPushButton__ReInit( &_this->pushDoMin );
  WidgetSetPushButton__ReInit( &_this->pushDoAmPm );
  WidgetSetPushButton__ReInit( &_this->pushSave );
  ViewsRectangle__ReInit( &_this->Rectangle2 );
  ViewsImage__ReInit( &_this->Image );
  ViewsText__ReInit( &_this->Text );
  ViewsImage__ReInit( &_this->Image1 );
  WidgetSetPushButton__ReInit( &_this->pushButtonSave );
  WidgetSetPushButton__ReInit( &_this->pushButtonExit );
}

/* Finalizer method for the class 'setAlarm::SetAlarm' */
void setAlarmSetAlarm__Done( setAlarmSetAlarm _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsBorder__Done( &_this->Border );
  ViewsImage__Done( &_this->upHour );
  ViewsImage__Done( &_this->upMin );
  ViewsImage__Done( &_this->upPmAm );
  ViewsImage__Done( &_this->downHour );
  ViewsImage__Done( &_this->dowmMin );
  ViewsImage__Done( &_this->downAmPm );
  ViewsText__Done( &_this->hourText );
  ViewsText__Done( &_this->Text1 );
  ViewsText__Done( &_this->minText );
  ViewsText__Done( &_this->amPmText );
  ViewsRectangle__Done( &_this->colorChoise );
  ViewsImage__Done( &_this->Image2 );
  WidgetSetPushButton__Done( &_this->pushUpHour );
  WidgetSetPushButton__Done( &_this->pushUpMin );
  WidgetSetPushButton__Done( &_this->pushUpAmPm );
  WidgetSetPushButton__Done( &_this->pushDoHour );
  WidgetSetPushButton__Done( &_this->pushDoMin );
  WidgetSetPushButton__Done( &_this->pushDoAmPm );
  WidgetSetPushButton__Done( &_this->pushSave );
  ViewsRectangle__Done( &_this->Rectangle2 );
  ViewsImage__Done( &_this->Image );
  ViewsText__Done( &_this->Text );
  ViewsImage__Done( &_this->Image1 );
  WidgetSetPushButton__Done( &_this->pushButtonSave );
  WidgetSetPushButton__Done( &_this->pushButtonExit );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void setAlarmSetAlarm_UpdateLayout( setAlarmSetAlarm _this, XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void setAlarmSetAlarm_UpdateViewState( setAlarmSetAlarm _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* 'C' function for method : 'setAlarm::SetAlarm.SlotUpHour()' */
void setAlarmSetAlarm_SlotUpHour( setAlarmSetAlarm _this, XObject sender )
{
  XInt32 valueNew;
  XInt32 test;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreRectView__OnSetBounds( &_this->colorChoise, _Const000B );

  if ( !EwIsSlotNull( _this->pushUpHour.OnPress ))
  {
    test = EwStringParseInt32( _this->hourText.String, 0, 10 );

    if ( test < 12 )
    {
      valueNew = test + 1;
      ViewsText_OnSetString( &_this->hourText, EwNewStringInt( valueNew, 0, 10 ));
    }
    else
      ViewsText_OnSetString( &_this->hourText, EwLoadString( &_Const0025 ));
  }
}

/* 'C' function for method : 'setAlarm::SetAlarm.SlotDoHour()' */
void setAlarmSetAlarm_SlotDoHour( setAlarmSetAlarm _this, XObject sender )
{
  XInt32 valueNew;
  XInt32 test;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreRectView__OnSetBounds( &_this->colorChoise, _Const000B );

  if ( !EwIsSlotNull( _this->pushDoHour.OnPress ))
  {
    test = EwStringParseInt32( _this->hourText.String, 0, 10 );

    if ( test > 1 )
    {
      valueNew = test - 1;
      ViewsText_OnSetString( &_this->hourText, EwNewStringInt( valueNew, 0, 10 ));
    }
    else
      ViewsText_OnSetString( &_this->hourText, EwLoadString( &_Const0026 ));
  }
}

/* 'C' function for method : 'setAlarm::SetAlarm.SlotUpMin()' */
void setAlarmSetAlarm_SlotUpMin( setAlarmSetAlarm _this, XObject sender )
{
  XInt32 valueNew;
  XInt32 test;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreRectView__OnSetBounds( &_this->colorChoise, _Const0010 );

  if ( !EwIsSlotNull( _this->pushUpMin.OnPress ))
  {
    test = EwStringParseInt32( _this->minText.String, 0, 10 );

    if ( test < 59 )
    {
      valueNew = test + 1;
      ViewsText_OnSetString( &_this->minText, EwNewStringInt( valueNew, 0, 10 ));
    }
    else
      ViewsText_OnSetString( &_this->minText, EwLoadString( &_Const0027 ));
  }
}

/* 'C' function for method : 'setAlarm::SetAlarm.SlotDoMin()' */
void setAlarmSetAlarm_SlotDoMin( setAlarmSetAlarm _this, XObject sender )
{
  XInt32 valueNew;
  XInt32 test;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreRectView__OnSetBounds( &_this->colorChoise, _Const0010 );

  if ( !EwIsSlotNull( _this->pushDoMin.OnPress ))
  {
    test = EwStringParseInt32( _this->minText.String, 0, 10 );

    if ( test > 1 )
    {
      valueNew = test - 1;
      ViewsText_OnSetString( &_this->minText, EwNewStringInt( valueNew, 0, 10 ));
    }
    else
      ViewsText_OnSetString( &_this->minText, EwLoadString( &_Const0028 ));
  }
}

/* 'C' function for method : 'setAlarm::SetAlarm.SlotUpAm()' */
void setAlarmSetAlarm_SlotUpAm( setAlarmSetAlarm _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreRectView__OnSetBounds( &_this->colorChoise, _Const0014 );

  if ( !EwCompString( _this->amPmText.String, EwLoadString( &_Const0013 )))
  {
    ViewsText_OnSetString( &_this->amPmText, EwLoadString( &_Const0029 ));
  }
  else
    ViewsText_OnSetString( &_this->amPmText, EwLoadString( &_Const0013 ));
}

/* Variants derived from the class : 'setAlarm::SetAlarm' */
EW_DEFINE_CLASS_VARIANTS( setAlarmSetAlarm )
EW_END_OF_CLASS_VARIANTS( setAlarmSetAlarm )

/* Virtual Method Table (VMT) for the class : 'setAlarm::SetAlarm' */
EW_DEFINE_CLASS( setAlarmSetAlarm, CoreGroup, Rectangle, Rectangle, Rectangle, Rectangle, 
                 _None, _None, "setAlarm::SetAlarm" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  setAlarmSetAlarm_UpdateLayout,
  setAlarmSetAlarm_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( setAlarmSetAlarm )

/* Include a file containing the bitmap resource : 'setAlarm::save1' */
#include "_setAlarmsave1.h"

/* Table with links to derived variants of the bitmap resource : 'setAlarm::save1' */
EW_RES_WITHOUT_VARIANTS( setAlarmsave1 )

/* User defined auto object: 'setAlarm::buttonSetAlarm' */
EW_DEFINE_AUTOOBJECT( setAlarmbuttonSetAlarm, WidgetSetPushButtonConfig )

/* Initializer for the auto object 'setAlarm::buttonSetAlarm' */
void setAlarmbuttonSetAlarm__Init( WidgetSetPushButtonConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'setAlarm::buttonSetAlarm' */
EW_DEFINE_AUTOOBJECT_VARIANTS( setAlarmbuttonSetAlarm )
EW_END_OF_AUTOOBJECT_VARIANTS( setAlarmbuttonSetAlarm )

/* Embedded Wizard */
