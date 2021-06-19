#include "ewlocale.h"
#include "_Application_2AirScreen.h"
#include "_Application_2Application.h"
#include "_Application_2background.h"
#include "_Application_2screenLight.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_EffectsRectEffect.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "_setAlarmSetAlarm.h"
#include "Application_2.h"
#include "Core.h"
#include "Resources.h"
#include "Templates.h"
#include "Views.h"
#include "WidgetSet.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x000001EA, /* ratio 59.59 % */
  0xB8001100, 0x80098452, 0x00CE0034, 0x0E800340, 0x060E8780, 0xA002A116, 0x0036800C,
  0x200454E0, 0x86984007, 0xDC70EA00, 0x448090F8, 0x2C010F18, 0xE4248890, 0xC80083C5,
  0x279874C0, 0x009381E5, 0xB1280040, 0x8901A533, 0x7C766041, 0x50609028, 0x62471E36,
  0x2700587C, 0x0926948E, 0x94D948EA, 0x28000CE0, 0xD0050299, 0x8344A7C4, 0x9550F122,
  0x10C00B08, 0x606304AF, 0xE095AB5D, 0xC635000D, 0x16C19412, 0x49AD8640, 0x69C94800,
  0x0013C016, 0x0110004E, 0xDE629790, 0x9E7581BF, 0xE2800C45, 0x7506BFDE, 0xD049FC3E,
  0x77001BE0, 0x8AE916D0, 0x9BC3E650, 0x54225B04, 0x0361F0C8, 0xEA3F3289, 0x35797994,
  0xDD99CB80, 0x30495CA4, 0x7CD65F35, 0x88846A45, 0xD6EBA93A, 0xDE635F19, 0x02401438,
  0x4E835D89, 0x88A00C69, 0x091194DE, 0x047BCE06, 0x3A8A4B40, 0xCEB7520D, 0x890421FC,
  0x1D079D7B, 0xF570379C, 0x540184EC, 0xC2529EBF, 0x99EBF4D7, 0x77C054EB, 0x8FE66031,
  0x994C1801, 0x00002032, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 480, 272 }};
static const XRect _Const0001 = {{ 11, 11 }, { 132, 61 }};
static const XStringRes _Const0002 = { _StringsDefault0, 0x0002 };
static const XRect _Const0003 = {{ 0, 220 }, { 480, 272 }};
static const XColor _Const0004 = { 0x9A, 0x62, 0x42, 0xFF };
static const XColor _Const0005 = { 0xFF, 0xD9, 0x76, 0xFF };
static const XColor _Const0006 = { 0x45, 0x45, 0x45, 0xFF };
static const XRect _Const0007 = {{ 3, 220 }, { 120, 244 }};
static const XStringRes _Const0008 = { _StringsDefault0, 0x000A };
static const XColor _Const0009 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const000A = {{ 40, 244 }, { 76, 268 }};
static const XStringRes _Const000B = { _StringsDefault0, 0x0018 };
static const XColor _Const000C = { 0xF6, 0xFF, 0xF9, 0xFF };
static const XPoint _Const000D = { 127, 265 };
static const XPoint _Const000E = { 127, 224 };
static const XRect _Const000F = {{ 136, 221 }, { 216, 245 }};
static const XStringRes _Const0010 = { _StringsDefault0, 0x001C };
static const XColor _Const0011 = { 0xF2, 0xF2, 0xF2, 0xFF };
static const XRect _Const0012 = {{ 162, 244 }, { 193, 268 }};
static const XStringRes _Const0013 = { _StringsDefault0, 0x0027 };
static const XPoint _Const0014 = { 222, 265 };
static const XPoint _Const0015 = { 222, 224 };
static const XRect _Const0016 = {{ 240, 221 }, { 285, 245 }};
static const XColor _Const0017 = { 0xFA, 0xFA, 0xFF, 0xFF };
static const XRect _Const0018 = {{ 222, 244 }, { 251, 268 }};
static const XRect _Const0019 = {{ 19, 82 }, { 127, 132 }};
static const XStringRes _Const001A = { _StringsDefault0, 0x002E };
static const XRect _Const001B = {{ 175, 3 }, { 465, 218 }};
static const XRect _Const001C = {{ 200, 210 }, { 315, 258 }};
static const XRect _Const001D = {{ 19, 148 }, { 127, 198 }};
static const XStringRes _Const001E = { _StringsDefault0, 0x0034 };
static const XRect _Const001F = {{ 306, 227 }, { 356, 270 }};
static const XPoint _Const0020 = { 437, 6 };
static const XPoint _Const0021 = { 480, 6 };
static const XPoint _Const0022 = { 480, 50 };
static const XPoint _Const0023 = { 437, 50 };
static const XPoint _Const0024 = { 302, 268 };
static const XPoint _Const0025 = { 302, 227 };
static const XRect _Const0026 = {{ 342, 229 }, { 390, 272 }};
static const XStringRes _Const0027 = { _StringsDefault0, 0x003C };
static const XRect _Const0028 = {{ 361, 227 }, { 409, 270 }};
static const XStringRes _Const0029 = { _StringsDefault0, 0x0041 };
static const XRect _Const002A = {{ 384, 229 }, { 432, 272 }};
static const XStringRes _Const002B = { _StringsDefault0, 0x0045 };
static const XPoint _Const002C = { 428, 185 };
static const XPoint _Const002D = { 469, 185 };
static const XPoint _Const002E = { 469, 224 };
static const XPoint _Const002F = { 428, 224 };
static const XRect _Const0030 = {{ 421, 229 }, { 469, 272 }};
static const XStringRes _Const0031 = { _StringsDefault0, 0x004A };
static const XRect _Const0032 = {{ 252, 244 }, { 302, 268 }};
static const XStringRes _Const0033 = { _StringsDefault0, 0x004F };
static const XRect _Const0034 = {{ 74, 245 }, { 94, 269 }};
static const XStringRes _Const0035 = { _StringsDefault0, 0x0055 };
static const XColor _Const0036 = { 0x33, 0x00, 0x00, 0x8E };
static const XStringRes _Const0037 = { _StringsDefault0, 0x005A };
static const XStringRes _Const0038 = { _StringsDefault0, 0x0060 };
static const XStringRes _Const0039 = { _StringsDefault0, 0x0065 };
static const XColor _Const003A = { 0xFA, 0x0D, 0xFF, 0xFF };
static const XRect _Const003B = {{ 0, 0 }, { 288, 220 }};
static const XColor _Const003C = { 0x1A, 0x33, 0x47, 0xFF };
static const XRect _Const003D = {{ 1, 0 }, { 288, 36 }};
static const XColor _Const003E = { 0x33, 0x47, 0xFF, 0xFF };
static const XRect _Const003F = {{ 15, 6 }, { 254, 30 }};
static const XStringRes _Const0040 = { _StringsDefault0, 0x006A };
static const XRect _Const0041 = {{ 193, 49 }, { 257, 110 }};
static const XRect _Const0042 = {{ 197, 48 }, { 254, 109 }};
static const XPoint _Const0043 = { 197, 49 };
static const XPoint _Const0044 = { 254, 49 };
static const XPoint _Const0045 = { 254, 110 };
static const XPoint _Const0046 = { 197, 110 };
static const XRect _Const0047 = {{ 25, 48 }, { 86, 109 }};
static const XRect _Const0048 = {{ 22, 48 }, { 84, 109 }};
static const XPoint _Const0049 = { 25, 49 };
static const XPoint _Const004A = { 82, 49 };
static const XPoint _Const004B = { 82, 110 };
static const XPoint _Const004C = { 25, 110 };
static const XRect _Const004D = {{ 105, 68 }, { 122, 104 }};
static const XRect _Const004E = {{ 138, 60 }, { 184, 114 }};
static const XRect _Const004F = {{ 195, 133 }, { 257, 195 }};
static const XRect _Const0050 = {{ 190, 129 }, { 262, 199 }};
static const XPoint _Const0051 = { 197, 136 };
static const XPoint _Const0052 = { 254, 136 };
static const XPoint _Const0053 = { 254, 197 };
static const XPoint _Const0054 = { 197, 197 };
static const XRect _Const0055 = {{ 91, 145 }, { 136, 195 }};
static const XRect _Const0056 = {{ 139, 131 }, { 176, 155 }};
static const XStringRes _Const0057 = { _StringsDefault0, 0x0083 };
static const XRect _Const0058 = {{ 139, 158 }, { 172, 182 }};
static const XStringRes _Const0059 = { _StringsDefault0, 0x0089 };
static const XRect _Const005A = {{ 137, 185 }, { 178, 209 }};
static const XStringRes _Const005B = { _StringsDefault0, 0x008F };
static const XRect _Const005C = {{ 253, -7 }, { 291, 43 }};
static const XRect _Const005D = {{ 27, 135 }, { 89, 197 }};
static const XRect _Const005E = {{ 22, 131 }, { 94, 201 }};
static const XPoint _Const005F = { 27, 136 };
static const XPoint _Const0060 = { 86, 136 };
static const XPoint _Const0061 = { 86, 195 };
static const XPoint _Const0062 = { 27, 195 };
static const XStringRes _Const0063 = { _StringsDefault0, 0x0096 };
static const XStringRes _Const0064 = { _StringsDefault0, 0x00A3 };
static const XStringRes _Const0065 = { _StringsDefault0, 0x00AE };
static const XColor _Const0066 = { 0xFF, 0x51, 0xFC, 0xFF };
static const XColor _Const0067 = { 0x6C, 0x6C, 0x6C, 0xFF };
static const XRect _Const0068 = {{ 0, -2 }, { 144, 108 }};
static const XRect _Const0069 = {{ 144, 110 }, { 288, 220 }};
static const XRect _Const006A = {{ 0, 109 }, { 144, 220 }};
static const XRect _Const006B = {{ 0, -1 }, { 144, 109 }};
static const XRect _Const006C = {{ 0, -2 }, { 144, 28 }};
static const XStringRes _Const006D = { _StringsDefault0, 0x00BC };
static const XRect _Const006E = {{ 0, 110 }, { 144, 140 }};
static const XStringRes _Const006F = { _StringsDefault0, 0x00C5 };
static const XRect _Const0070 = {{ 144, 110 }, { 288, 138 }};
static const XStringRes _Const0071 = { _StringsDefault0, 0x00D3 };
static const XRect _Const0072 = {{ 0, 0 }, { 144, 110 }};
static const XRect _Const0073 = {{ 0, 110 }, { 144, 221 }};
static const XRect _Const0074 = {{ 144, 109 }, { 288, 219 }};
static const XRect _Const0075 = {{ 153, 15 }, { 278, 97 }};
static const XStringRes _Const0076 = { _StringsDefault0, 0x00E3 };
static const XPoint _Const0077 = { 4, 2 };
static const XPoint _Const0078 = { 141, 2 };
static const XPoint _Const0079 = { 141, 102 };
static const XPoint _Const007A = { 4, 102 };
static const XRect _Const007B = {{ 247, -10 }, { 297, 40 }};
static const XPoint _Const007C = { 4, 114 };
static const XPoint _Const007D = { 141, 114 };
static const XPoint _Const007E = { 141, 214 };
static const XPoint _Const007F = { 4, 214 };
static const XPoint _Const0080 = { 147, 114 };
static const XPoint _Const0081 = { 284, 114 };
static const XPoint _Const0082 = { 284, 214 };
static const XPoint _Const0083 = { 147, 214 };
static const XPoint _Const0084 = { 153, 28 };
static const XPoint _Const0085 = { 272, 28 };
static const XPoint _Const0086 = { 272, 97 };
static const XPoint _Const0087 = { 153, 97 };
static const XColor _Const0088 = { 0xFF, 0xFF, 0xFF, 0x99 };
static const XColor _Const0089 = { 0x9F, 0x7A, 0xB1, 0xA1 };
static const XColor _Const008A = { 0xD9, 0xD6, 0x3D, 0x97 };

/* Initializer for the class 'Application_2::Application' */
void Application_2Application__Init( Application_2Application _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( Application_2Application );

  /* ... then construct all embedded objects */
  Application_2background__Init( &_this->Component, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Temp, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TempValue, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Line, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Humd, &_this->_XObject, 0 );
  ViewsText__Init( &_this->HumdValue, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Line1, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Light, &_this->_XObject, 0 );
  ViewsText__Init( &_this->LightValue, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton1, &_this->_XObject, 0 );
  EffectsRectEffect__Init( &_this->AirEffect, &_this->_XObject, 0 );
  Application_2AirScreen__Init( &_this->AirScreen, &_this->_XObject, 0 );
  Application_2screenLight__Init( &_this->LightScreen, &_this->_XObject, 0 );
  EffectsRectEffect__Init( &_this->LightEffect, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton2, &_this->_XObject, 0 );
  EffectsRectEffect__Init( &_this->AlarmEffect, &_this->_XObject, 0 );
  setAlarmSetAlarm__Init( &_this->SetAlarm, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchExit, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Line2, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_XObject, 0 );
  ViewsText__Init( &_this->hourText, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_XObject, 0 );
  ViewsText__Init( &_this->minText, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_XObject, 0 );
  ViewsText__Init( &_this->amPmText, &_this->_XObject, 0 );
  ViewsText__Init( &_this->lux, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TempValue1, &_this->_XObject, 0 );
  CoreTimer__Init( &_this->Timer, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( Application_2Application );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->PushButton, _Const0001 );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton, EwLoadString( &_Const0002 ));
  CoreView_OnSetLayout((CoreView)&_this->Rectangle, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0003 );
  ViewsRectangle_OnSetColorBL( &_this->Rectangle, _Const0004 );
  ViewsRectangle_OnSetColorBR( &_this->Rectangle, _Const0005 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0006 );
  CoreRectView__OnSetBounds( &_this->Temp, _Const0007 );
  ViewsText_OnSetAutoSize( &_this->Temp, 1 );
  ViewsText_OnSetString( &_this->Temp, EwLoadString( &_Const0008 ));
  ViewsText_OnSetColor( &_this->Temp, _Const0009 );
  CoreRectView__OnSetBounds( &_this->TempValue, _Const000A );
  ViewsText_OnSetAutoSize( &_this->TempValue, 1 );
  ViewsText_OnSetString( &_this->TempValue, EwLoadString( &_Const000B ));
  ViewsText_OnSetColor( &_this->TempValue, _Const000C );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const000D );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const000E );
  ViewsLine_OnSetWidth( &_this->Line, 2 );
  CoreRectView__OnSetBounds( &_this->Humd, _Const000F );
  ViewsText_OnSetAutoSize( &_this->Humd, 1 );
  ViewsText_OnSetString( &_this->Humd, EwLoadString( &_Const0010 ));
  ViewsText_OnSetColor( &_this->Humd, _Const0011 );
  CoreRectView__OnSetBounds( &_this->HumdValue, _Const0012 );
  ViewsText_OnSetAutoSize( &_this->HumdValue, 1 );
  ViewsText_OnSetString( &_this->HumdValue, EwLoadString( &_Const0013 ));
  ViewsText_OnSetColor( &_this->HumdValue, _Const000C );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const0014 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const0015 );
  ViewsLine_OnSetWidth( &_this->Line1, 2 );
  CoreRectView__OnSetBounds( &_this->Light, _Const0016 );
  ViewsText_OnSetAutoSize( &_this->Light, 1 );
  ViewsText_OnSetString( &_this->Light, EwLoadString( &_Const0002 ));
  ViewsText_OnSetColor( &_this->Light, _Const0017 );
  CoreRectView__OnSetBounds( &_this->LightValue, _Const0018 );
  ViewsText_OnSetAutoSize( &_this->LightValue, 1 );
  ViewsText_OnSetString( &_this->LightValue, EwLoadString( &_Const000B ));
  ViewsText_OnSetColor( &_this->LightValue, _Const000C );
  CoreRectView__OnSetBounds( &_this->PushButton1, _Const0019 );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton1, EwLoadString( &_Const001A ));
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->AirEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->AirEffect, 130 );
  _this->AirEffect.Value2 = _Const001B;
  _this->AirEffect.Value1 = _Const001C;
  CoreRectView__OnSetBounds( &_this->AirScreen, _Const0007 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->AirScreen, 0 );
  CoreRectView__OnSetBounds( &_this->LightScreen, _Const0016 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->LightScreen, 0 );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->LightEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LightEffect, 130 );
  _this->LightEffect.Value2 = _Const001B;
  _this->LightEffect.Value1 = _Const001C;
  CoreRectView__OnSetBounds( &_this->PushButton2, _Const001D );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton2, EwLoadString( &_Const001E ));
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->AlarmEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->AlarmEffect, 130 );
  _this->AlarmEffect.Value2 = _Const001B;
  _this->AlarmEffect.Value1 = _Const001C;
  CoreRectView__OnSetBounds( &_this->SetAlarm, _Const001F );
  CoreGroup_OnSetVisible((CoreGroup)&_this->SetAlarm, 0 );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchExit, _Const0020 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchExit, _Const0021 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchExit, _Const0022 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchExit, _Const0023 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const0024 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const0025 );
  ViewsLine_OnSetWidth( &_this->Line2, 2 );
  CoreRectView__OnSetBounds( &_this->Image, _Const001F );
  CoreRectView__OnSetBounds( &_this->hourText, _Const0026 );
  ViewsText_OnSetString( &_this->hourText, EwLoadString( &_Const0027 ));
  CoreRectView__OnSetBounds( &_this->Text1, _Const0028 );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0029 ));
  CoreRectView__OnSetBounds( &_this->minText, _Const002A );
  ViewsText_OnSetString( &_this->minText, EwLoadString( &_Const002B ));
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->SimpleTouchHandler, _Const002C );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->SimpleTouchHandler, _Const002D );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->SimpleTouchHandler, _Const002E );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->SimpleTouchHandler, _Const002F );
  CoreRectView__OnSetBounds( &_this->amPmText, _Const0030 );
  ViewsText_OnSetString( &_this->amPmText, EwLoadString( &_Const0031 ));
  ViewsText_OnSetColor( &_this->amPmText, _Const0009 );
  CoreRectView__OnSetBounds( &_this->lux, _Const0032 );
  ViewsText_OnSetAutoSize( &_this->lux, 1 );
  ViewsText_OnSetString( &_this->lux, EwLoadString( &_Const0033 ));
  ViewsText_OnSetColor( &_this->lux, _Const000C );
  CoreRectView__OnSetBounds( &_this->TempValue1, _Const0034 );
  ViewsText_OnSetAutoSize( &_this->TempValue1, 1 );
  ViewsText_OnSetString( &_this->TempValue1, EwLoadString( &_Const0035 ));
  ViewsText_OnSetColor( &_this->TempValue1, _Const000C );
  CoreTimer_OnSetPeriod( &_this->Timer, 5000 );
  CoreTimer_OnSetEnabled( &_this->Timer, 1 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Component ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->PushButton ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Temp ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TempValue ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Line ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Humd ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->HumdValue ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Line1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Light ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->LightValue ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->PushButton1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->AirScreen ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->LightScreen ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->PushButton2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->SetAlarm ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TouchExit ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Line2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->hourText ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->minText ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->amPmText ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->lux ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TempValue1 ), 0 );
  _this->PushButton.OnLeave = EwNullSlot;
  _this->PushButton.OnEnter = EwNullSlot;
  _this->PushButton.OnRelease = EwNullSlot;
  _this->PushButton.OnPress = EwNewSlot( _this, Application_2Application_LightFunction );
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton, EwGetAutoObject( &WidgetSetPushButton_Medium, 
  WidgetSetPushButtonConfig ));
  ViewsText_OnSetFont( &_this->Temp, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TempValue, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Humd, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->HumdValue, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Light, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->LightValue, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  _this->PushButton1.OnPress = EwNewSlot( _this, Application_2Application_AirFunction );
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton1, EwGetAutoObject( &WidgetSetPushButton_Medium, 
  WidgetSetPushButtonConfig ));
  _this->AirEffect.Outlet = EwNewRef( &_this->AirScreen, CoreRectView_OnGetBounds, 
  CoreRectView__OnSetBounds );
  _this->LightEffect.Outlet = EwNewRef( &_this->LightScreen, CoreRectView_OnGetBounds, 
  CoreRectView__OnSetBounds );
  _this->PushButton2.OnPress = EwNewSlot( _this, Application_2Application_AlarmFunction );
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton2, EwGetAutoObject( &WidgetSetPushButton_Medium, 
  WidgetSetPushButtonConfig ));
  _this->AlarmEffect.Outlet = EwNewRef( &_this->SetAlarm, CoreRectView_OnGetBounds, 
  CoreRectView__OnSetBounds );
  _this->TouchExit.OnPress = EwNewSlot( _this, Application_2Application_Exit );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &Application_2iconAlarmSmall, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->hourText, EwLoadResource( &Application_2fontTimer, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &Application_2fontTimer, ResourcesFont ));
  ViewsText_OnSetFont( &_this->minText, EwLoadResource( &Application_2fontTimer, 
  ResourcesFont ));
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, Application_2Application_slotSetAlarm );
  ViewsText_OnSetFont( &_this->amPmText, EwLoadResource( &Application_2fontTimer, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->lux, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TempValue1, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  _this->Timer.OnTrigger = EwNewSlot( _this, Application_2Application_TimerTick );
}

/* Re-Initializer for the class 'Application_2::Application' */
void Application_2Application__ReInit( Application_2Application _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  Application_2background__ReInit( &_this->Component );
  WidgetSetPushButton__ReInit( &_this->PushButton );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsText__ReInit( &_this->Temp );
  ViewsText__ReInit( &_this->TempValue );
  ViewsLine__ReInit( &_this->Line );
  ViewsText__ReInit( &_this->Humd );
  ViewsText__ReInit( &_this->HumdValue );
  ViewsLine__ReInit( &_this->Line1 );
  ViewsText__ReInit( &_this->Light );
  ViewsText__ReInit( &_this->LightValue );
  WidgetSetPushButton__ReInit( &_this->PushButton1 );
  EffectsRectEffect__ReInit( &_this->AirEffect );
  Application_2AirScreen__ReInit( &_this->AirScreen );
  Application_2screenLight__ReInit( &_this->LightScreen );
  EffectsRectEffect__ReInit( &_this->LightEffect );
  WidgetSetPushButton__ReInit( &_this->PushButton2 );
  EffectsRectEffect__ReInit( &_this->AlarmEffect );
  setAlarmSetAlarm__ReInit( &_this->SetAlarm );
  CoreSimpleTouchHandler__ReInit( &_this->TouchExit );
  ViewsLine__ReInit( &_this->Line2 );
  ViewsImage__ReInit( &_this->Image );
  ViewsText__ReInit( &_this->hourText );
  ViewsText__ReInit( &_this->Text1 );
  ViewsText__ReInit( &_this->minText );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ViewsText__ReInit( &_this->amPmText );
  ViewsText__ReInit( &_this->lux );
  ViewsText__ReInit( &_this->TempValue1 );
  CoreTimer__ReInit( &_this->Timer );
}

/* Finalizer method for the class 'Application_2::Application' */
void Application_2Application__Done( Application_2Application _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreRoot );

  /* Finalize all embedded objects */
  Application_2background__Done( &_this->Component );
  WidgetSetPushButton__Done( &_this->PushButton );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsText__Done( &_this->Temp );
  ViewsText__Done( &_this->TempValue );
  ViewsLine__Done( &_this->Line );
  ViewsText__Done( &_this->Humd );
  ViewsText__Done( &_this->HumdValue );
  ViewsLine__Done( &_this->Line1 );
  ViewsText__Done( &_this->Light );
  ViewsText__Done( &_this->LightValue );
  WidgetSetPushButton__Done( &_this->PushButton1 );
  EffectsRectEffect__Done( &_this->AirEffect );
  Application_2AirScreen__Done( &_this->AirScreen );
  Application_2screenLight__Done( &_this->LightScreen );
  EffectsRectEffect__Done( &_this->LightEffect );
  WidgetSetPushButton__Done( &_this->PushButton2 );
  EffectsRectEffect__Done( &_this->AlarmEffect );
  setAlarmSetAlarm__Done( &_this->SetAlarm );
  CoreSimpleTouchHandler__Done( &_this->TouchExit );
  ViewsLine__Done( &_this->Line2 );
  ViewsImage__Done( &_this->Image );
  ViewsText__Done( &_this->hourText );
  ViewsText__Done( &_this->Text1 );
  ViewsText__Done( &_this->minText );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ViewsText__Done( &_this->amPmText );
  ViewsText__Done( &_this->lux );
  ViewsText__Done( &_this->TempValue1 );
  CoreTimer__Done( &_this->Timer );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_Super );
}

/* 'C' function for method : 'Application_2::Application.LightFunction()' */
void Application_2Application_LightFunction( Application_2Application _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_OnSetVisible((CoreGroup)&_this->SetAlarm, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->AirScreen, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->LightScreen, 1 );
  EffectsEffect_OnSetReversed((EffectsEffect)&_this->LightEffect, 0 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->LightEffect, 1 );
}

/* 'C' function for method : 'Application_2::Application.Exit()' */
void Application_2Application_Exit( Application_2Application _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( CoreGroup_OnGetVisible((CoreGroup)&_this->SetAlarm ))
  {
    ViewsText_OnSetColor( &_this->hourText, _Const0009 );
    ViewsText_OnSetColor( &_this->minText, _Const0009 );
    ViewsText_OnSetColor( &_this->amPmText, _Const0009 );
    ViewsText_OnSetColor( &_this->Text1, _Const0009 );
    CoreGroup_OnSetVisible((CoreGroup)&_this->SetAlarm, 0 );
  }
  else
    if ( CoreGroup_OnGetVisible((CoreGroup)&_this->LightScreen ))
    {
      if ( EwCompColor( ViewsRectangle_OnGetColor( &_this->LightScreen.colorMaster ), 
          _Const0036 ))
        ViewsText_OnSetString( &_this->LightValue, EwLoadString( &_Const0037 ));
      else
        if ( EwCompColor( ViewsRectangle_OnGetColor( &_this->LightScreen.colorRead ), 
            _Const0036 ))
          ViewsText_OnSetString( &_this->LightValue, EwLoadString( &_Const0038 ));
        else
          if ( EwCompColor( ViewsRectangle_OnGetColor( &_this->LightScreen.colorNight ), 
              _Const0036 ))
            ViewsText_OnSetString( &_this->LightValue, EwLoadString( &_Const0039 ));
          else
            ViewsText_OnSetString( &_this->LightValue, EwLoadString( &_Const000B ));

      CoreGroup_OnSetVisible((CoreGroup)&_this->LightScreen, 0 );
    }
    else
    {
      ViewsText_OnSetString( &_this->TempValue, _this->AirScreen.tempuText.String );
      CoreGroup_OnSetVisible((CoreGroup)&_this->AirScreen, 0 );
    }
}

/* 'C' function for method : 'Application_2::Application.AirFunction()' */
void Application_2Application_AirFunction( Application_2Application _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_OnSetVisible((CoreGroup)&_this->LightScreen, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->SetAlarm, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->AirScreen, 1 );
  EffectsEffect_OnSetReversed((EffectsEffect)&_this->AirEffect, 0 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->AirEffect, 1 );
}

/* 'C' function for method : 'Application_2::Application.AlarmFunction()' */
void Application_2Application_AlarmFunction( Application_2Application _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_OnSetVisible((CoreGroup)&_this->LightScreen, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->AirScreen, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->SetAlarm, 1 );
  EffectsEffect_OnSetReversed((EffectsEffect)&_this->AlarmEffect, 0 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->AlarmEffect, 1 );
}

/* 'C' function for method : 'Application_2::Application.slotSetAlarm()' */
void Application_2Application_slotSetAlarm( Application_2Application _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetString( &_this->hourText, _this->SetAlarm.hourText.String );
  ViewsText_OnSetColor( &_this->hourText, _Const003A );
  ViewsText_OnSetString( &_this->minText, _this->SetAlarm.minText.String );
  ViewsText_OnSetColor( &_this->minText, _Const003A );
  ViewsText_OnSetString( &_this->amPmText, _this->SetAlarm.amPmText.String );
  ViewsText_OnSetColor( &_this->amPmText, _Const003A );
  ViewsText_OnSetColor( &_this->Text1, _Const003A );
  CoreGroup_OnSetVisible((CoreGroup)&_this->SetAlarm, 0 );
}

/* 'C' function for method : 'Application_2::Application.TimerTick()' */
float temp , humid;
unsigned int lux = 0;
void Application_2Application_TimerTick( Application_2Application _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetString( &_this->TempValue, EwNewStringFloat( temp,
  0, 1 ));
  ViewsText_OnSetString( &_this->HumdValue, EwNewStringFloat( humid,
  0, 1 ));
  ViewsText_OnSetString( &_this->LightValue, EwNewStringInt( lux, 0,
  10 ));
}

/* Variants derived from the class : 'Application_2::Application' */
EW_DEFINE_CLASS_VARIANTS( Application_2Application )
EW_END_OF_CLASS_VARIANTS( Application_2Application )

/* Virtual Method Table (VMT) for the class : 'Application_2::Application' */
EW_DEFINE_CLASS( Application_2Application, CoreRoot, Component, Component, Component, 
                 Component, valueTemp, valueTemp, "Application_2::Application" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateLayout,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
EW_END_OF_CLASS( Application_2Application )

/* Include a file containing the bitmap resource : 'Application_2::backGroundMap' */
#include "_Application_2backGroundMap.h"

/* Table with links to derived variants of the bitmap resource : 'Application_2::backGroundMap' */
EW_RES_WITHOUT_VARIANTS( Application_2backGroundMap )

/* Initializer for the class 'Application_2::background' */
void Application_2background__Init( Application_2background _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( Application_2background );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Image, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( Application_2background );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Image, _Const0000 );
  ViewsImage_OnSetAlignment( &_this->Image, ViewsImageAlignmentScaleToFill );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &Application_2backGroundMap, 
  ResourcesBitmap ));
}

/* Re-Initializer for the class 'Application_2::background' */
void Application_2background__ReInit( Application_2background _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Image );
}

/* Finalizer method for the class 'Application_2::background' */
void Application_2background__Done( Application_2background _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Image );

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
void Application_2background_UpdateLayout( Application_2background _this, XPoint 
  aSize )
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
void Application_2background_UpdateViewState( Application_2background _this, XSet 
  aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* Variants derived from the class : 'Application_2::background' */
EW_DEFINE_CLASS_VARIANTS( Application_2background )
EW_END_OF_CLASS_VARIANTS( Application_2background )

/* Virtual Method Table (VMT) for the class : 'Application_2::background' */
EW_DEFINE_CLASS( Application_2background, CoreGroup, Image, Image, Image, Image, 
                 _None, _None, "Application_2::background" )
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
  Application_2background_UpdateLayout,
  Application_2background_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( Application_2background )

/* Initializer for the class 'Application_2::AirScreen' */
void Application_2AirScreen__Init( Application_2AirScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( Application_2AirScreen );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle1, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->down_apper, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->down_hiden, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchDown, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->up_apper, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->up_hiden, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchUp, &_this->_XObject, 0 );
  ViewsText__Init( &_this->tempuText, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text2, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->power_apper, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->power_hiden, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchOn, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->fan, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Low, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Mid, &_this->_XObject, 0 );
  ViewsText__Init( &_this->High, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->exit, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->speed_apper, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->speed_hiden, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchSpeed, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( Application_2AirScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const003B );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const003B );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const003C );
  CoreRectView__OnSetBounds( &_this->Rectangle1, _Const003D );
  ViewsRectangle_OnSetColor( &_this->Rectangle1, _Const003E );
  CoreRectView__OnSetBounds( &_this->Text, _Const003F );
  ViewsText_OnSetAutoSize( &_this->Text, 1 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0040 ));
  CoreRectView__OnSetBounds( &_this->down_apper, _Const0041 );
  ViewsImage_OnSetVisible( &_this->down_apper, 1 );
  CoreRectView__OnSetBounds( &_this->down_hiden, _Const0042 );
  ViewsImage_OnSetVisible( &_this->down_hiden, 0 );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchDown, _Const0043 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchDown, _Const0044 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchDown, _Const0045 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchDown, _Const0046 );
  CoreSimpleTouchHandler_OnSetLimitToFinger( &_this->TouchDown, -1 );
  CoreRectView__OnSetBounds( &_this->up_apper, _Const0047 );
  CoreRectView__OnSetBounds( &_this->up_hiden, _Const0048 );
  ViewsImage_OnSetVisible( &_this->up_hiden, 0 );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchUp, _Const0049 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchUp, _Const004A );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchUp, _Const004B );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchUp, _Const004C );
  CoreSimpleTouchHandler_OnSetRetargetDelay( &_this->TouchUp, 1200 );
  CoreRectView__OnSetBounds( &_this->tempuText, _Const004D );
  ViewsText_OnSetAutoSize( &_this->tempuText, 1 );
  ViewsText_OnSetString( &_this->tempuText, EwLoadString( &_Const0039 ));
  CoreRectView__OnSetBounds( &_this->Text2, _Const004E );
  ViewsText_OnSetAutoSize( &_this->Text2, 1 );
  ViewsText_OnSetString( &_this->Text2, EwLoadString( &_Const0035 ));
  CoreRectView__OnSetBounds( &_this->power_apper, _Const004F );
  CoreRectView__OnSetBounds( &_this->power_hiden, _Const0050 );
  ViewsImage_OnSetVisible( &_this->power_hiden, 0 );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchOn, _Const0051 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchOn, _Const0052 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchOn, _Const0053 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchOn, _Const0054 );
  CoreSimpleTouchHandler_OnSetRetargetDelay( &_this->TouchOn, 1200 );
  CoreRectView__OnSetBounds( &_this->fan, _Const0055 );
  CoreRectView__OnSetBounds( &_this->Low, _Const0056 );
  ViewsText_OnSetAutoSize( &_this->Low, 1 );
  ViewsText_OnSetString( &_this->Low, EwLoadString( &_Const0057 ));
  ViewsText_OnSetColor( &_this->Low, _Const0009 );
  CoreRectView__OnSetBounds( &_this->Mid, _Const0058 );
  ViewsText_OnSetAutoSize( &_this->Mid, 1 );
  ViewsText_OnSetString( &_this->Mid, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->Mid, _Const0009 );
  CoreRectView__OnSetBounds( &_this->High, _Const005A );
  ViewsText_OnSetAutoSize( &_this->High, 1 );
  ViewsText_OnSetString( &_this->High, EwLoadString( &_Const005B ));
  CoreRectView__OnSetBounds( &_this->exit, _Const005C );
  CoreRectView__OnSetBounds( &_this->speed_apper, _Const005D );
  CoreRectView__OnSetBounds( &_this->speed_hiden, _Const005E );
  ViewsImage_OnSetVisible( &_this->speed_hiden, 0 );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchSpeed, _Const005F );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchSpeed, _Const0060 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchSpeed, _Const0061 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchSpeed, _Const0062 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->down_apper ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->down_hiden ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TouchDown ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->up_apper ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->up_hiden ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TouchUp ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->tempuText ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->power_apper ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->power_hiden ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TouchOn ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->fan ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Low ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Mid ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->High ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->exit ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->speed_apper ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->speed_hiden ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TouchSpeed ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->down_apper, EwLoadResource( &Application_2down, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->down_hiden, EwLoadResource( &Application_2down1, 
  ResourcesBitmap ));
  _this->TouchDown.OnLeave = EwNullSlot;
  _this->TouchDown.OnEnter = EwNullSlot;
  _this->TouchDown.OnRelease = EwNewSlot( _this, Application_2AirScreen_down1 );
  _this->TouchDown.OnPress = EwNewSlot( _this, Application_2AirScreen_down );
  ViewsImage_OnSetBitmap( &_this->up_apper, EwLoadResource( &Application_2up, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->up_hiden, EwLoadResource( &Application_2up1, ResourcesBitmap ));
  _this->TouchUp.OnLeave = EwNewSlot( _this, Application_2AirScreen_up1 );
  _this->TouchUp.OnEnter = EwNullSlot;
  _this->TouchUp.OnRelease = EwNewSlot( _this, Application_2AirScreen_up1 );
  _this->TouchUp.OnPress = EwNewSlot( _this, Application_2AirScreen_up );
  ViewsText_OnSetFont( &_this->tempuText, EwLoadResource( &ResourcesFontExtraLarge, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text2, EwLoadResource( &ResourcesFontExtraLarge, 
  ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->power_apper, EwLoadResource( &Application_2On, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->power_hiden, EwLoadResource( &Application_2Off, 
  ResourcesBitmap ));
  _this->TouchOn.OnLeave = EwNullSlot;
  _this->TouchOn.OnEnter = EwNullSlot;
  _this->TouchOn.OnRelease = EwNewSlot( _this, Application_2AirScreen_Off );
  _this->TouchOn.OnPress = EwNewSlot( _this, Application_2AirScreen_On );
  ViewsImage_OnSetBitmap( &_this->fan, EwLoadResource( &Application_2Fan, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Low, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Mid, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsText_OnSetFont( &_this->High, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->exit, EwLoadResource( &Application_2exiticon, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->speed_apper, EwLoadResource( &Application_2SpeedON, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->speed_hiden, EwLoadResource( &Application_2SpeedOff, 
  ResourcesBitmap ));
  _this->TouchSpeed.OnRelease = EwNewSlot( _this, Application_2AirScreen_OffSpeed );
  _this->TouchSpeed.OnPress = EwNewSlot( _this, Application_2AirScreen_OnSpeed );
}

/* Re-Initializer for the class 'Application_2::AirScreen' */
void Application_2AirScreen__ReInit( Application_2AirScreen _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsRectangle__ReInit( &_this->Rectangle1 );
  ViewsText__ReInit( &_this->Text );
  ViewsImage__ReInit( &_this->down_apper );
  ViewsImage__ReInit( &_this->down_hiden );
  CoreSimpleTouchHandler__ReInit( &_this->TouchDown );
  ViewsImage__ReInit( &_this->up_apper );
  ViewsImage__ReInit( &_this->up_hiden );
  CoreSimpleTouchHandler__ReInit( &_this->TouchUp );
  ViewsText__ReInit( &_this->tempuText );
  ViewsText__ReInit( &_this->Text2 );
  ViewsImage__ReInit( &_this->power_apper );
  ViewsImage__ReInit( &_this->power_hiden );
  CoreSimpleTouchHandler__ReInit( &_this->TouchOn );
  ViewsImage__ReInit( &_this->fan );
  ViewsText__ReInit( &_this->Low );
  ViewsText__ReInit( &_this->Mid );
  ViewsText__ReInit( &_this->High );
  ViewsImage__ReInit( &_this->exit );
  ViewsImage__ReInit( &_this->speed_apper );
  ViewsImage__ReInit( &_this->speed_hiden );
  CoreSimpleTouchHandler__ReInit( &_this->TouchSpeed );
}

/* Finalizer method for the class 'Application_2::AirScreen' */
void Application_2AirScreen__Done( Application_2AirScreen _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsRectangle__Done( &_this->Rectangle1 );
  ViewsText__Done( &_this->Text );
  ViewsImage__Done( &_this->down_apper );
  ViewsImage__Done( &_this->down_hiden );
  CoreSimpleTouchHandler__Done( &_this->TouchDown );
  ViewsImage__Done( &_this->up_apper );
  ViewsImage__Done( &_this->up_hiden );
  CoreSimpleTouchHandler__Done( &_this->TouchUp );
  ViewsText__Done( &_this->tempuText );
  ViewsText__Done( &_this->Text2 );
  ViewsImage__Done( &_this->power_apper );
  ViewsImage__Done( &_this->power_hiden );
  CoreSimpleTouchHandler__Done( &_this->TouchOn );
  ViewsImage__Done( &_this->fan );
  ViewsText__Done( &_this->Low );
  ViewsText__Done( &_this->Mid );
  ViewsText__Done( &_this->High );
  ViewsImage__Done( &_this->exit );
  ViewsImage__Done( &_this->speed_apper );
  ViewsImage__Done( &_this->speed_hiden );
  CoreSimpleTouchHandler__Done( &_this->TouchSpeed );

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
void Application_2AirScreen_UpdateLayout( Application_2AirScreen _this, XPoint aSize )
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
void Application_2AirScreen_UpdateViewState( Application_2AirScreen _this, XSet 
  aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* 'C' function for method : 'Application_2::AirScreen.down()' */
void Application_2AirScreen_down( Application_2AirScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetVisible( &_this->down_hiden, 1 );
  ViewsImage_OnSetVisible( &_this->down_apper, 0 );
  ViewsText_OnSetString( &_this->tempuText, EwNewStringInt( EwStringParseInt32( 
  _this->tempuText.String, 0, 10 ) - 1, 0, 10 ));
  EwTrace( "%s", EwLoadString( &_Const0063 ));
}

/* 'C' function for method : 'Application_2::AirScreen.down1()' */
void Application_2AirScreen_down1( Application_2AirScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetVisible( &_this->down_apper, 1 );
  ViewsImage_OnSetVisible( &_this->down_hiden, 0 );
}

/* 'C' function for method : 'Application_2::AirScreen.up()' */
void Application_2AirScreen_up( Application_2AirScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetVisible( &_this->up_hiden, 1 );
  ViewsImage_OnSetVisible( &_this->up_apper, 0 );
  ViewsText_OnSetString( &_this->tempuText, EwNewStringInt( EwStringParseInt32( 
  _this->tempuText.String, 0, 10 ) + 1, 0, 10 ));
  EwTrace( "%s", EwLoadString( &_Const0064 ));
}

/* 'C' function for method : 'Application_2::AirScreen.up1()' */
void Application_2AirScreen_up1( Application_2AirScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetVisible( &_this->up_apper, 1 );
  ViewsImage_OnSetVisible( &_this->up_hiden, 0 );
}

/* 'C' function for method : 'Application_2::AirScreen.On()' */
void Application_2AirScreen_On( Application_2AirScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetVisible( &_this->power_hiden, 1 );
  ViewsImage_OnSetVisible( &_this->power_apper, 0 );
  EwTrace( "%s", EwLoadString( &_Const0065 ));
}

/* 'C' function for method : 'Application_2::AirScreen.Off()' */
void Application_2AirScreen_Off( Application_2AirScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetVisible( &_this->power_hiden, 0 );
  ViewsImage_OnSetVisible( &_this->power_apper, 1 );
}

/* 'C' function for method : 'Application_2::AirScreen.OnSpeed()' */
void Application_2AirScreen_OnSpeed( Application_2AirScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetVisible( &_this->speed_hiden, 1 );
  ViewsImage_OnSetVisible( &_this->speed_apper, 0 );

  if (( !EwCompColor( ViewsText_OnGetColor( &_this->Low ), _Const0009 ) && !EwCompColor( 
      ViewsText_OnGetColor( &_this->Mid ), _Const0009 )) && !EwCompColor( ViewsText_OnGetColor( 
      &_this->High ), _Const0009 ))
  {
    ViewsText_OnSetColor( &_this->Low, _Const0066 );
    ViewsText_OnSetColor( &_this->Mid, _Const0009 );
    ViewsText_OnSetColor( &_this->High, _Const0009 );
  }
  else
    if ( !EwCompColor( ViewsText_OnGetColor( &_this->Low ), _Const0066 ))
    {
      ViewsText_OnSetColor( &_this->Low, _Const0009 );
      ViewsText_OnSetColor( &_this->Mid, _Const0066 );
      ViewsText_OnSetColor( &_this->High, _Const0009 );
    }
    else
      if ( !EwCompColor( ViewsText_OnGetColor( &_this->Mid ), _Const0066 ))
      {
        ViewsText_OnSetColor( &_this->Low, _Const0009 );
        ViewsText_OnSetColor( &_this->Mid, _Const0009 );
        ViewsText_OnSetColor( &_this->High, _Const0066 );
      }
      else
      {
        ViewsText_OnSetColor( &_this->Low, _Const0066 );
        ViewsText_OnSetColor( &_this->Mid, _Const0009 );
        ViewsText_OnSetColor( &_this->High, _Const0009 );
      }
}

/* 'C' function for method : 'Application_2::AirScreen.OffSpeed()' */
void Application_2AirScreen_OffSpeed( Application_2AirScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetVisible( &_this->speed_hiden, 0 );
  ViewsImage_OnSetVisible( &_this->speed_apper, 1 );
}

/* Variants derived from the class : 'Application_2::AirScreen' */
EW_DEFINE_CLASS_VARIANTS( Application_2AirScreen )
EW_END_OF_CLASS_VARIANTS( Application_2AirScreen )

/* Virtual Method Table (VMT) for the class : 'Application_2::AirScreen' */
EW_DEFINE_CLASS( Application_2AirScreen, CoreGroup, Rectangle, Rectangle, Rectangle, 
                 Rectangle, _None, _None, "Application_2::AirScreen" )
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
  Application_2AirScreen_UpdateLayout,
  Application_2AirScreen_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( Application_2AirScreen )

/* Include a file containing the bitmap resource : 'Application_2::exiticon' */
#include "_Application_2exiticon.h"

/* Table with links to derived variants of the bitmap resource : 'Application_2::exiticon' */
EW_RES_WITHOUT_VARIANTS( Application_2exiticon )

/* Include a file containing the bitmap resource : 'Application_2::down' */
#include "_Application_2down.h"

/* Table with links to derived variants of the bitmap resource : 'Application_2::down' */
EW_RES_WITHOUT_VARIANTS( Application_2down )

/* Include a file containing the bitmap resource : 'Application_2::down1' */
#include "_Application_2down1.h"

/* Table with links to derived variants of the bitmap resource : 'Application_2::down1' */
EW_RES_WITHOUT_VARIANTS( Application_2down1 )

/* Include a file containing the bitmap resource : 'Application_2::up' */
#include "_Application_2up.h"

/* Table with links to derived variants of the bitmap resource : 'Application_2::up' */
EW_RES_WITHOUT_VARIANTS( Application_2up )

/* Include a file containing the bitmap resource : 'Application_2::up1' */
#include "_Application_2up1.h"

/* Table with links to derived variants of the bitmap resource : 'Application_2::up1' */
EW_RES_WITHOUT_VARIANTS( Application_2up1 )

/* Include a file containing the bitmap resource : 'Application_2::On' */
#include "_Application_2On.h"

/* Table with links to derived variants of the bitmap resource : 'Application_2::On' */
EW_RES_WITHOUT_VARIANTS( Application_2On )

/* Include a file containing the bitmap resource : 'Application_2::Off' */
#include "_Application_2Off.h"

/* Table with links to derived variants of the bitmap resource : 'Application_2::Off' */
EW_RES_WITHOUT_VARIANTS( Application_2Off )

/* Include a file containing the bitmap resource : 'Application_2::SpeedON' */
#include "_Application_2SpeedON.h"

/* Table with links to derived variants of the bitmap resource : 'Application_2::SpeedON' */
EW_RES_WITHOUT_VARIANTS( Application_2SpeedON )

/* Include a file containing the bitmap resource : 'Application_2::SpeedOff' */
#include "_Application_2SpeedOff.h"

/* Table with links to derived variants of the bitmap resource : 'Application_2::SpeedOff' */
EW_RES_WITHOUT_VARIANTS( Application_2SpeedOff )

/* Include a file containing the bitmap resource : 'Application_2::Fan' */
#include "_Application_2Fan.h"

/* Table with links to derived variants of the bitmap resource : 'Application_2::Fan' */
EW_RES_WITHOUT_VARIANTS( Application_2Fan )

/* Include a file containing the bitmap resource : 'Application_2::iconAlarm' */
#include "_Application_2iconAlarm.h"

/* Table with links to derived variants of the bitmap resource : 'Application_2::iconAlarm' */
EW_RES_WITHOUT_VARIANTS( Application_2iconAlarm )

/* Include a file containing the font resource : 'Application_2::fontMedium' */
#include "_Application_2fontMedium.h"

/* Table with links to derived variants of the font resource : 'Application_2::fontMedium' */
EW_RES_WITHOUT_VARIANTS( Application_2fontMedium )

/* Include a file containing the font resource : 'Application_2::fontTimer' */
#include "_Application_2fontTimer.h"

/* Table with links to derived variants of the font resource : 'Application_2::fontTimer' */
EW_RES_WITHOUT_VARIANTS( Application_2fontTimer )

/* Initializer for the class 'Application_2::screenLight' */
void Application_2screenLight__Init( Application_2screenLight _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( Application_2screenLight );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_XObject, 0 );
  ViewsBorder__Init( &_this->Border1, &_this->_XObject, 0 );
  ViewsBorder__Init( &_this->Border2, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->imgMaster, &_this->_XObject, 0 );
  ViewsText__Init( &_this->master, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->imgNight, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->colorMaster, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->imgRead, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->colorNight, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->colorRead, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text2, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->touchMaster, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->touchNight, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->touchRead, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->toughtLight, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( Application_2screenLight );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const003B );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const003B );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0067 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0068 );
  ViewsBorder_OnSetWidth( &_this->Border, 2 );
  CoreRectView__OnSetBounds( &_this->Border1, _Const0069 );
  ViewsBorder_OnSetWidth( &_this->Border1, 2 );
  CoreRectView__OnSetBounds( &_this->Border2, _Const006A );
  ViewsBorder_OnSetWidth( &_this->Border2, 2 );
  CoreRectView__OnSetBounds( &_this->imgMaster, _Const006B );
  ViewsImage_OnSetFrameNumber( &_this->imgMaster, 24 );
  CoreRectView__OnSetBounds( &_this->master, _Const006C );
  ViewsText_OnSetString( &_this->master, EwLoadString( &_Const006D ));
  CoreRectView__OnSetBounds( &_this->imgNight, _Const006A );
  CoreRectView__OnSetBounds( &_this->Text, _Const006E );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const006F ));
  CoreRectView__OnSetBounds( &_this->Text1, _Const0070 );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0071 ));
  CoreRectView__OnSetBounds( &_this->colorMaster, _Const0072 );
  ViewsRectangle_OnSetColor( &_this->colorMaster, _Const0036 );
  CoreRectView__OnSetBounds( &_this->imgRead, _Const0069 );
  CoreRectView__OnSetBounds( &_this->colorNight, _Const0073 );
  ViewsRectangle_OnSetColor( &_this->colorNight, _Const0036 );
  CoreRectView__OnSetBounds( &_this->colorRead, _Const0074 );
  ViewsRectangle_OnSetColor( &_this->colorRead, _Const0036 );
  CoreRectView__OnSetBounds( &_this->Text2, _Const0075 );
  ViewsText_OnSetString( &_this->Text2, EwLoadString( &_Const0076 ));
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->touchMaster, _Const0077 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->touchMaster, _Const0078 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->touchMaster, _Const0079 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->touchMaster, _Const007A );
  _this->touchMaster.EnableMultiTouch = 1;
  CoreRectView__OnSetBounds( &_this->Image, _Const007B );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->touchNight, _Const007C );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->touchNight, _Const007D );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->touchNight, _Const007E );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->touchNight, _Const007F );
  _this->touchNight.EnableMultiTouch = 1;
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->touchRead, _Const0080 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->touchRead, _Const0081 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->touchRead, _Const0082 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->touchRead, _Const0083 );
  _this->touchRead.EnableMultiTouch = 1;
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->toughtLight, _Const0084 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->toughtLight, _Const0085 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->toughtLight, _Const0086 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->toughtLight, _Const0087 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Border ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Border1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Border2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->imgMaster ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->master ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->imgNight ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->colorMaster ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->imgRead ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->colorNight ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->colorRead ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->touchMaster ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->touchNight ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->touchRead ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->toughtLight ), 0 );
  ViewsImage_OnSetBitmap( &_this->imgMaster, EwLoadResource( &ResourcesSymbolIconsLarge, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->master, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->imgNight, EwLoadResource( &Application_2bedRoom, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->imgRead, EwLoadResource( &Application_2readingBook, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text2, EwLoadResource( &TemplatesDefaultFontPicker, 
  ResourcesFont ));
  _this->touchMaster.OnEnter = EwNullSlot;
  _this->touchMaster.OnHold = EwNullSlot;
  _this->touchMaster.OnRelease = EwNullSlot;
  _this->touchMaster.OnPress = EwNewSlot( _this, Application_2screenLight_changeColorMaster );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &Application_2exiticon, 
  ResourcesBitmap ));
  _this->touchNight.OnEnter = EwNullSlot;
  _this->touchNight.OnHold = EwNullSlot;
  _this->touchNight.OnRelease = EwNullSlot;
  _this->touchNight.OnPress = EwNewSlot( _this, Application_2screenLight_changeColorNight );
  _this->touchRead.OnEnter = EwNullSlot;
  _this->touchRead.OnHold = EwNullSlot;
  _this->touchRead.OnRelease = EwNullSlot;
  _this->touchRead.OnPress = EwNewSlot( _this, Application_2screenLight_changeColorRead );
  _this->toughtLight.OnPress = EwNewSlot( _this, Application_2screenLight_changLight );
}

/* Re-Initializer for the class 'Application_2::screenLight' */
void Application_2screenLight__ReInit( Application_2screenLight _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsBorder__ReInit( &_this->Border );
  ViewsBorder__ReInit( &_this->Border1 );
  ViewsBorder__ReInit( &_this->Border2 );
  ViewsImage__ReInit( &_this->imgMaster );
  ViewsText__ReInit( &_this->master );
  ViewsImage__ReInit( &_this->imgNight );
  ViewsText__ReInit( &_this->Text );
  ViewsText__ReInit( &_this->Text1 );
  ViewsRectangle__ReInit( &_this->colorMaster );
  ViewsImage__ReInit( &_this->imgRead );
  ViewsRectangle__ReInit( &_this->colorNight );
  ViewsRectangle__ReInit( &_this->colorRead );
  ViewsText__ReInit( &_this->Text2 );
  CoreSimpleTouchHandler__ReInit( &_this->touchMaster );
  ViewsImage__ReInit( &_this->Image );
  CoreSimpleTouchHandler__ReInit( &_this->touchNight );
  CoreSimpleTouchHandler__ReInit( &_this->touchRead );
  CoreSimpleTouchHandler__ReInit( &_this->toughtLight );
}

/* Finalizer method for the class 'Application_2::screenLight' */
void Application_2screenLight__Done( Application_2screenLight _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsBorder__Done( &_this->Border );
  ViewsBorder__Done( &_this->Border1 );
  ViewsBorder__Done( &_this->Border2 );
  ViewsImage__Done( &_this->imgMaster );
  ViewsText__Done( &_this->master );
  ViewsImage__Done( &_this->imgNight );
  ViewsText__Done( &_this->Text );
  ViewsText__Done( &_this->Text1 );
  ViewsRectangle__Done( &_this->colorMaster );
  ViewsImage__Done( &_this->imgRead );
  ViewsRectangle__Done( &_this->colorNight );
  ViewsRectangle__Done( &_this->colorRead );
  ViewsText__Done( &_this->Text2 );
  CoreSimpleTouchHandler__Done( &_this->touchMaster );
  ViewsImage__Done( &_this->Image );
  CoreSimpleTouchHandler__Done( &_this->touchNight );
  CoreSimpleTouchHandler__Done( &_this->touchRead );
  CoreSimpleTouchHandler__Done( &_this->toughtLight );

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
void Application_2screenLight_UpdateLayout( Application_2screenLight _this, XPoint 
  aSize )
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
void Application_2screenLight_UpdateViewState( Application_2screenLight _this, XSet 
  aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* 'C' function for method : 'Application_2::screenLight.changeColorMaster()' */
void Application_2screenLight_changeColorMaster( Application_2screenLight _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsRectangle_OnSetColor( &_this->colorMaster, _Const0088 );
  ViewsRectangle_OnSetColor( &_this->colorNight, _Const0036 );
  ViewsRectangle_OnSetColor( &_this->colorRead, _Const0036 );
}

/* 'C' function for method : 'Application_2::screenLight.changeColorNight()' */
void Application_2screenLight_changeColorNight( Application_2screenLight _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsRectangle_OnSetColor( &_this->colorNight, _Const0089 );
  ViewsRectangle_OnSetColor( &_this->colorMaster, _Const0036 );
  ViewsRectangle_OnSetColor( &_this->colorRead, _Const0036 );
}

/* 'C' function for method : 'Application_2::screenLight.changeColorRead()' */
void Application_2screenLight_changeColorRead( Application_2screenLight _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsRectangle_OnSetColor( &_this->colorRead, _Const008A );
  ViewsRectangle_OnSetColor( &_this->colorNight, _Const0036 );
  ViewsRectangle_OnSetColor( &_this->colorMaster, _Const0036 );
}

/* 'C' function for method : 'Application_2::screenLight.changLight()' */
void Application_2screenLight_changLight( Application_2screenLight _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsRectangle_OnSetColor( &_this->colorMaster, _Const0036 );
  ViewsRectangle_OnSetColor( &_this->colorNight, _Const0036 );
  ViewsRectangle_OnSetColor( &_this->colorRead, _Const0036 );
}

/* Variants derived from the class : 'Application_2::screenLight' */
EW_DEFINE_CLASS_VARIANTS( Application_2screenLight )
EW_END_OF_CLASS_VARIANTS( Application_2screenLight )

/* Virtual Method Table (VMT) for the class : 'Application_2::screenLight' */
EW_DEFINE_CLASS( Application_2screenLight, CoreGroup, Rectangle, Rectangle, Rectangle, 
                 Rectangle, _None, _None, "Application_2::screenLight" )
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
  Application_2screenLight_UpdateLayout,
  Application_2screenLight_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( Application_2screenLight )

/* Include a file containing the bitmap resource : 'Application_2::readingBook' */
#include "_Application_2readingBook.h"

/* Table with links to derived variants of the bitmap resource : 'Application_2::readingBook' */
EW_RES_WITHOUT_VARIANTS( Application_2readingBook )

/* Include a file containing the bitmap resource : 'Application_2::bedRoom' */
#include "_Application_2bedRoom.h"

/* Table with links to derived variants of the bitmap resource : 'Application_2::bedRoom' */
EW_RES_WITHOUT_VARIANTS( Application_2bedRoom )

/* Include a file containing the bitmap resource : 'Application_2::iconAlarmSmall' */
#include "_Application_2iconAlarmSmall.h"

/* Table with links to derived variants of the bitmap resource : 'Application_2::iconAlarmSmall' */
EW_RES_WITHOUT_VARIANTS( Application_2iconAlarmSmall )

/* Embedded Wizard */
