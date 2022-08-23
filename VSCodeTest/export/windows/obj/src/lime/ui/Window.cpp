#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeWindow
#include <lime/_internal/backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_Int_Void
#include <lime/app/_Event_Float_Float_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_Void
#include <lime/app/_Event_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_lime_ui_MouseButton_Void
#include <lime/app/_Event_Float_Float_lime_ui_MouseButton_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_lime_ui_MouseWheelMode_Void
#include <lime/app/_Event_Float_Float_lime_ui_MouseWheelMode_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Int_Void
#include <lime/app/_Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Int_Int_Void
#include <lime/app/_Event_String_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Void
#include <lime/app/_Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_graphics_RenderContext_Void
#include <lime/app/_Event_lime_graphics_RenderContext_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#include <lime/app/_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_29_new,"lime.ui.Window","new",0xbff4f5c3,"lime.ui.Window.new","lime/ui/Window.hx",29,0x6ac7286d)
static const ::String _hx_array_data_feb85851_1[] = {
	HX_("8f0e1200000000000000504944564944,Acme,platform:Windows,x:b2,a:b0,b:b1,y:b3,back:b8,start:b9,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,dpup:h0.1,leftshoulder:b4,lefttrigger:b5,rightshoulder:b6,righttrigger:b7,leftstick:b10,rightstick:b11,leftx:a0,lefty:a1,rightx:a3,righty:a2",ed,81,eb,0e),HX_("341a3608000000000000504944564944,Afterglow PS3 Controller,a:b1,b:b2,back:b8,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:h0.1,guide:b12,leftshoulder:b4,leftstick:b10,lefttrigger:b6,leftx:a0,lefty:a1,rightshoulder:b5,rightstick:b11,righttrigger:b7,rightx:a2,righty:a3,start:b9,x:b0,y:b3,platform:Windows",47,be,1b,97),HX_("ffff0000000000000000504944564944,GameStop Gamepad,a:b0,b:b1,back:b8,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:h0.1,guide:,leftshoulder:b4,leftstick:b10,lefttrigger:b6,leftx:a0,lefty:a1,rightshoulder:b5,rightstick:b11,righttrigger:b7,rightx:a2,righty:a3,start:b9,x:b2,y:b3,platform:Windows",88,0e,d0,59),HX_("6d0416c2000000000000504944564944,Generic DirectInput Controller,a:b1,b:b2,back:b8,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:h0.1,leftshoulder:b4,leftstick:b10,lefttrigger:b6,leftx:a0,lefty:a1,rightshoulder:b5,rightstick:b11,righttrigger:b7,rightx:a2,righty:a3,start:b9,x:b0,y:b3,platform:Windows",97,eb,af,ec),HX_("0d0f6e00000000000000504944564944,HORIPAD 4,a:b1,b:b2,y:b3,x:b0,start:b9,guide:b12,back:b8,leftstick:b10,rightstick:b11,leftshoulder:b4,rightshoulder:b5,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a3,lefttrigger:b6,righttrigger:b7,platform:Windows",3c,36,6f,05),HX_("6d0419c2000000000000504944564944,Logitech F710 Gamepad,a:b1,b:b2,back:b8,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:h0.1,leftshoulder:b4,leftstick:b10,lefttrigger:b6,leftx:a0,lefty:a1,rightshoulder:b5,rightstick:b11,righttrigger:b7,rightx:a2,righty:a3,start:b9,x:b0,y:b3,platform:Windows",ec,fa,73,9a),HX_("88880803000000000000504944564944,PS3 Controller,a:b2,b:b1,back:b8,dpdown:h0.8,dpleft:h0.4,dpright:h0.2,dpup:h0.1,guide:b12,leftshoulder:b4,leftstick:b9,lefttrigger:b6,leftx:a0,lefty:a1,rightshoulder:b5,rightstick:b10,righttrigger:b7,rightx:a3,righty:a4,start:b11,x:b0,y:b3,platform:Windows",d1,e7,43,f6),HX_("4c056802000000000000504944564944,PS3 Controller,a:b14,b:b13,back:b0,dpdown:b6,dpleft:b7,dpright:b5,dpup:b4,guide:b16,leftshoulder:b10,leftstick:b1,lefttrigger:b8,leftx:a0,lefty:a1,rightshoulder:b11,rightstick:b2,righttrigger:b9,rightx:a2,righty:a3,start:b3,x:b15,y:b12,platform:Windows",e3,59,65,63),HX_("25090500000000000000504944564944,PS3 DualShock,a:b2,b:b1,back:b9,dpdown:h0.8,dpleft:h0.4,dpright:h0.2,dpup:h0.1,guide:,leftshoulder:b6,leftstick:b10,lefttrigger:b4,leftx:a0,lefty:a1,rightshoulder:b7,rightstick:b11,righttrigger:b5,rightx:a2,righty:a3,start:b8,x:b0,y:b3,platform:Windows",fa,a8,e3,31),HX_("4c05c405000000000000504944564944,Sony DualShock 4,a:b1,b:b2,y:b3,x:b0,start:b9,guide:b12,back:b13,leftstick:b10,rightstick:b11,leftshoulder:b4,rightshoulder:b5,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a5,lefttrigger:a3,righttrigger:a4,platform:Windows",b5,bf,45,e5),HX_("4c05cc09000000000000504944564944,Sony DualShock 4,a:b1,b:b2,y:b3,x:b0,start:b9,guide:b12,back:b13,leftstick:b10,rightstick:b11,leftshoulder:b4,rightshoulder:b5,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a5,lefttrigger:a3,righttrigger:a4,platform:Windows",28,c0,ca,2a),HX_("4c05a00b000000000000504944564944,Sony DualShock 4 Wireless Adaptor,a:b1,b:b2,y:b3,x:b0,start:b9,guide:b12,back:b13,leftstick:b10,rightstick:b11,leftshoulder:b4,rightshoulder:b5,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a5,lefttrigger:a3,righttrigger:a4,platform:Windows",01,d3,4f,e8),HX_("6d0418c2000000000000504944564944,Logitech RumblePad 2 USB,platform:Windows,x:b0,a:b1,b:b2,y:b3,back:b8,start:b9,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,dpup:h0.1,leftshoulder:b4,lefttrigger:b6,rightshoulder:b5,righttrigger:b7,leftstick:b10,rightstick:b11,leftx:a0,lefty:a1,rightx:a2,righty:a3",c2,6f,63,a2),HX_("36280100000000000000504944564944,OUYA Controller,platform:Windows,a:b0,b:b3,y:b2,x:b1,start:b14,guide:b15,leftstick:b6,rightstick:b7,leftshoulder:b4,rightshoulder:b5,dpup:b8,dpleft:b10,dpdown:b9,dpright:b11,leftx:a0,lefty:a1,rightx:a3,righty:a4,lefttrigger:b12,righttrigger:b13",09,f1,71,18),HX_("4f0400b3000000000000504944564944,Thrustmaster Firestorm Dual Power,a:b0,b:b2,y:b3,x:b1,start:b10,guide:b8,back:b9,leftstick:b11,rightstick:b12,leftshoulder:b4,rightshoulder:b6,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a3,lefttrigger:b5,righttrigger:b7,platform:Windows",07,24,ed,25),HX_("00f00300000000000000504944564944,RetroUSB.com RetroPad,a:b1,b:b5,x:b0,y:b4,back:b2,start:b3,leftshoulder:b6,rightshoulder:b7,leftx:a0,lefty:a1,platform:Windows",79,f3,bd,51),HX_("00f0f100000000000000504944564944,RetroUSB.com Super RetroPort,a:b1,b:b5,x:b0,y:b4,back:b2,start:b3,leftshoulder:b6,rightshoulder:b7,leftx:a0,lefty:a1,platform:Windows",d8,a7,57,6a),HX_("28040140000000000000504944564944,GamePad Pro USB,platform:Windows,a:b1,b:b2,x:b0,y:b3,back:b8,start:b9,leftshoulder:b4,rightshoulder:b5,leftx:a0,lefty:a1,lefttrigger:b6,righttrigger:b7",33,16,de,47),HX_("ff113133000000000000504944564944,SVEN X-PAD,platform:Windows,a:b2,b:b3,y:b1,x:b0,start:b5,back:b4,leftshoulder:b6,rightshoulder:b7,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a4,lefttrigger:b8,righttrigger:b9",82,51,40,68),HX_("8f0e0300000000000000504944564944,Piranha xtreme,platform:Windows,x:b3,a:b2,b:b1,y:b0,back:b8,start:b9,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,dpup:h0.1,leftshoulder:b6,lefttrigger:b4,rightshoulder:b7,righttrigger:b5,leftstick:b10,rightstick:b11,leftx:a0,lefty:a1,rightx:a3,righty:a2",59,24,e0,70),HX_("8f0e0d31000000000000504944564944,Multilaser JS071 USB,platform:Windows,a:b1,b:b2,y:b3,x:b0,start:b9,back:b8,leftstick:b10,rightstick:b11,leftshoulder:b4,rightshoulder:b5,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a3,lefttrigger:b6,righttrigger:b7",4f,ad,07,7a),HX_("10080300000000000000504944564944,PS2 USB,platform:Windows,a:b2,b:b1,y:b0,x:b3,start:b9,back:b8,leftstick:b10,rightstick:b11,leftshoulder:b6,rightshoulder:b7,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,leftx:a0,lefty:a1,rightx:a4,righty:a2,lefttrigger:b4,righttrigger:b5",15,db,c4,af),HX_("79000600000000000000504944564944,G-Shark GS-GP702,a:b2,b:b1,x:b3,y:b0,back:b8,start:b9,leftstick:b10,rightstick:b11,leftshoulder:b4,rightshoulder:b5,dpup:h0.1,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a4,lefttrigger:b6,righttrigger:b7,platform:Windows",9e,d8,8a,03),HX_("4b12014d000000000000504944564944,NYKO AIRFLO,a:b0,b:b1,x:b2,y:b3,back:b8,guide:b10,start:b9,leftstick:a0,rightstick:a2,leftshoulder:a3,rightshoulder:b5,dpup:h0.1,dpdown:h0.0,dpleft:h0.8,dpright:h0.2,leftx:h0.6,lefty:h0.12,rightx:h0.9,righty:h0.4,lefttrigger:b6,righttrigger:b7,platform:Windows",45,f0,44,29),HX_("d6206dca000000000000504944564944,PowerA Pro Ex,a:b1,b:b2,x:b0,y:b3,back:b8,guide:b12,start:b9,leftstick:b10,rightstick:b11,leftshoulder:b4,rightshoulder:b5,dpup:h0.1,dpdown:h0.0,dpleft:h0.8,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a3,lefttrigger:b6,righttrigger:b7,platform:Windows",94,81,92,90),HX_("a3060cff000000000000504944564944,Saitek P2500,a:b2,b:b3,y:b1,x:b0,start:b4,guide:b10,back:b5,leftstick:b8,rightstick:b9,leftshoulder:b6,rightshoulder:b7,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a3,platform:Windows",27,a3,a1,9d),HX_("4f0415b3000000000000504944564944,Thrustmaster Dual Analog 3.2,platform:Windows,x:b1,a:b0,b:b2,y:b3,back:b8,start:b9,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,dpup:h0.1,leftshoulder:b4,lefttrigger:b5,rightshoulder:b6,righttrigger:b7,leftstick:b10,rightstick:b11,leftx:a0,lefty:a1,rightx:a2,righty:a3",71,89,82,8d),HX_("6f0e1e01000000000000504944564944,Rock Candy Gamepad for PS3,platform:Windows,a:b1,b:b2,x:b0,y:b3,back:b8,start:b9,guide:b12,leftshoulder:b4,rightshoulder:b5,leftstick:b10,rightstick:b11,leftx:a0,lefty:a1,rightx:a2,righty:a3,lefttrigger:b6,righttrigger:b7,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2",28,25,cc,ac),HX_("83056020000000000000504944564944,iBuffalo USB 2-axis 8-button Gamepad,a:b1,b:b0,y:b2,x:b3,start:b7,back:b6,leftshoulder:b4,rightshoulder:b5,leftx:a0,lefty:a1,platform:Windows",d2,40,0b,6f),HX_("10080100000000000000504944564944,PS1 USB,platform:Windows,a:b2,b:b1,x:b3,y:b0,back:b8,start:b9,leftshoulder:b6,rightshoulder:b7,leftstick:b10,rightstick:b11,leftx:a0,lefty:a1,rightx:a3,righty:a2,lefttrigger:b4,righttrigger:b5,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2",df,a4,45,77),HX_("49190204000000000000504944564944,Ipega PG-9023,a:b0,b:b1,x:b3,y:b4,back:b10,start:b11,leftstick:b13,rightstick:b14,leftshoulder:b6,rightshoulder:b7,dpup:h0.1,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,leftx:a0,lefty:a1,rightx:a3,righty:a4,lefttrigger:b8,righttrigger:b9,platform:Windows",2c,53,8e,04),HX_("4f0423b3000000000000504944564944,Dual Trigger 3-in-1,a:b1,b:b2,x:b0,y:b3,back:b8,start:b9,leftstick:b10,rightstick:b11,leftshoulder:b4,rightshoulder:b5,dpup:h0.1,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a5,lefttrigger:b6,righttrigger:b7,platform:Windows",6a,33,a6,09),HX_("0d0f4900000000000000504944564944,Hatsune Miku Sho Controller,a:b1,b:b2,x:b0,y:b3,back:b8,guide:b12,start:b9,leftstick:b10,rightstick:b11,leftshoulder:b4,rightshoulder:b5,dpup:h0.1,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a3,lefttrigger:b6,righttrigger:b7,platform:Windows",69,04,a6,e3),HX_("79004318000000000000504944564944,Mayflash GameCube Controller Adapter,platform:Windows,a:b1,b:b2,x:b0,y:b3,back:b0,start:b9,guide:b0,leftshoulder:b4,rightshoulder:b7,leftstick:b0,rightstick:b0,leftx:a0,lefty:a1,rightx:a5,righty:a2,lefttrigger:a3,righttrigger:a4,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2",ed,b0,53,24),HX_("79000018000000000000504944564944,Mayflash WiiU Pro Game Controller Adapter (DInput),a:b1,b:b2,x:b0,y:b3,back:b8,start:b9,leftstick:b10,rightstick:b11,leftshoulder:b4,rightshoulder:b5,dpup:h0.1,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a3,lefttrigger:b6,righttrigger:b7,platform:Windows",96,7c,24,29),HX_("2509e803000000000000504944564944,Mayflash Wii Classic Controller,a:b1,b:b0,x:b3,y:b2,back:b8,guide:b10,start:b9,leftshoulder:b4,rightshoulder:b5,dpup:h0.1,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:b11,dpdown:b13,dpleft:b12,dpright:b14,leftx:a0,lefty:a1,rightx:a2,righty:a3,lefttrigger:b6,righttrigger:b7,platform:Windows",94,e4,d6,92),HX_("300f1001000000000000504944564944,Saitek P480 Rumble Pad,a:b2,b:b3,x:b0,y:b1,back:b8,start:b9,leftstick:b10,rightstick:b11,leftshoulder:b4,rightshoulder:b6,dpup:h0.1,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,leftx:a0,lefty:a1,rightx:a3,righty:a2,lefttrigger:b5,righttrigger:b7,platform:Windows",6f,c3,ef,09),HX_("10280900000000000000504944564944,8Bitdo SFC30 GamePad,a:b1,b:b0,y:b3,x:b4,start:b11,back:b10,leftshoulder:b6,leftx:a0,lefty:a1,rightshoulder:b7,platform:Windows",3a,c1,e6,9b),HX_("63252305000000000000504944564944,USB Vibration Joystick (BM),platform:Windows,x:b3,a:b2,b:b1,y:b0,back:b8,start:b9,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,dpup:h0.1,leftshoulder:b4,lefttrigger:b6,rightshoulder:b5,righttrigger:b7,leftstick:b10,rightstick:b11,leftx:a0,lefty:a1,rightx:a2,righty:a3",85,86,df,08),HX_("20380900000000000000504944564944,8Bitdo NES30 PRO Wireless,platform:Windows,a:b0,b:b1,x:b3,y:b4,leftshoulder:b6,rightshoulder:b7,lefttrigger:b8,righttrigger:b9,back:b10,start:b11,leftstick:b13,rightstick:b14,leftx:a0,lefty:a1,rightx:a3,righty:a4,dpup:h0.1,dpright:h0.2,dpdown:h0.4,dpleft:h0.8",1d,7f,c6,ba),HX_("02200090000000000000504944564944,8Bitdo NES30 PRO USB,platform:Windows,a:b0,b:b1,x:b3,y:b4,leftshoulder:b6,rightshoulder:b7,lefttrigger:b8,righttrigger:b9,back:b10,start:b11,leftstick:b13,rightstick:b14,leftx:a0,lefty:a1,rightx:a3,righty:a4,dpup:h0.1,dpright:h0.2,dpdown:h0.4,dpleft:h0.8",f8,bb,2a,6f),HX_("ff113133000000000000504944564944,Gembird JPD-DualForce,platform:Windows,a:b2,b:b3,x:b0,y:b1,start:b9,back:b8,leftshoulder:b4,rightshoulder:b5,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a4,lefttrigger:b6,righttrigger:b7,leftstick:b10,rightstick:b11",dc,1d,6b,23),HX_("341a0108000000000000504944564944,EXEQ RF USB Gamepad 8206,a:b0,b:b1,x:b2,y:b3,leftshoulder:b4,rightshoulder:b5,leftstick:b8,rightstick:b7,back:b8,start:b9,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:h0.1,leftx:a0,lefty:a1,rightx:a2,righty:a3,platform:Windows",b7,dc,97,32),HX_("c0111352000000000000504944564944,Battalife Joystick,platform:Windows,x:b4,a:b6,b:b7,y:b5,back:b2,start:b3,leftshoulder:b0,rightshoulder:b1,leftx:a0,lefty:a1",76,3c,b0,2d),HX_("100801e5000000000000504944564944,NEXT Classic USB Game Controller,a:b0,b:b1,back:b8,start:b9,rightx:a2,righty:a3,leftx:a0,lefty:a1,platform:Windows",e5,fe,d6,fe),HX_("79000600000000000000504944564944,NGS Phantom,a:b2,b:b3,y:b1,x:b0,start:b9,back:b8,leftstick:b10,rightstick:b11,leftshoulder:b4,rightshoulder:b5,dpup:h0.1,dpleft:h0.8,dpdown:h0.4,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a4,lefttrigger:b6,righttrigger:b7,platform:Windows",e5,16,6d,f8),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_362_alert,"lime.ui.Window","alert",0xe7cddb7f,"lime.ui.Window.alert","lime/ui/Window.hx",362,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_367_close,"lime.ui.Window","close",0x0ea29bdb,"lime.ui.Window.close","lime/ui/Window.hx",367,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_372_focus,"lime.ui.Window","focus",0xcac8e3fb,"lime.ui.Window.focus","lime/ui/Window.hx",372,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_376_move,"lime.ui.Window","move",0x35c0744e,"lime.ui.Window.move","lime/ui/Window.hx",376,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_385_readPixels,"lime.ui.Window","readPixels",0xd5a57020,"lime.ui.Window.readPixels","lime/ui/Window.hx",385,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_389_resize,"lime.ui.Window","resize",0xb9cf7471,"lime.ui.Window.resize","lime/ui/Window.hx",389,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_397_setIcon,"lime.ui.Window","setIcon",0x837a3b1e,"lime.ui.Window.setIcon","lime/ui/Window.hx",397,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_408_toString,"lime.ui.Window","toString",0xfadc4469,"lime.ui.Window.toString","lime/ui/Window.hx",408,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_413_warpMouse,"lime.ui.Window","warpMouse",0x03c6b060,"lime.ui.Window.warpMouse","lime/ui/Window.hx",413,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_419_get_cursor,"lime.ui.Window","get_cursor",0x7eef9b9c,"lime.ui.Window.get_cursor","lime/ui/Window.hx",419,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_424_set_cursor,"lime.ui.Window","set_cursor",0x826d3a10,"lime.ui.Window.set_cursor","lime/ui/Window.hx",424,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_429_get_display,"lime.ui.Window","get_display",0x816e4abc,"lime.ui.Window.get_display","lime/ui/Window.hx",429,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_434_get_displayMode,"lime.ui.Window","get_displayMode",0xe9ea583f,"lime.ui.Window.get_displayMode","lime/ui/Window.hx",434,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_439_set_displayMode,"lime.ui.Window","set_displayMode",0xe5b5d54b,"lime.ui.Window.set_displayMode","lime/ui/Window.hx",439,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_444_get_borderless,"lime.ui.Window","get_borderless",0x37452e0b,"lime.ui.Window.get_borderless","lime/ui/Window.hx",444,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_449_set_borderless,"lime.ui.Window","set_borderless",0x5765167f,"lime.ui.Window.set_borderless","lime/ui/Window.hx",449,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_454_get_frameRate,"lime.ui.Window","get_frameRate",0xe8edc4a7,"lime.ui.Window.get_frameRate","lime/ui/Window.hx",454,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_459_set_frameRate,"lime.ui.Window","set_frameRate",0x2df3a6b3,"lime.ui.Window.set_frameRate","lime/ui/Window.hx",459,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_464_get_fullscreen,"lime.ui.Window","get_fullscreen",0x19882201,"lime.ui.Window.get_fullscreen","lime/ui/Window.hx",464,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_469_set_fullscreen,"lime.ui.Window","set_fullscreen",0x39a80a75,"lime.ui.Window.set_fullscreen","lime/ui/Window.hx",469,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_474_get_height,"lime.ui.Window","get_height",0x425314ad,"lime.ui.Window.get_height","lime/ui/Window.hx",474,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_478_set_height,"lime.ui.Window","set_height",0x45d0b321,"lime.ui.Window.set_height","lime/ui/Window.hx",478,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_485_get_hidden,"lime.ui.Window","get_hidden",0x8c9d0c30,"lime.ui.Window.get_hidden","lime/ui/Window.hx",485,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_490_get_maximized,"lime.ui.Window","get_maximized",0xaea9c112,"lime.ui.Window.get_maximized","lime/ui/Window.hx",490,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_494_set_maximized,"lime.ui.Window","set_maximized",0xf3afa31e,"lime.ui.Window.set_maximized","lime/ui/Window.hx",494,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_501_get_minimized,"lime.ui.Window","get_minimized",0xd866ae80,"lime.ui.Window.get_minimized","lime/ui/Window.hx",501,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_505_set_minimized,"lime.ui.Window","set_minimized",0x1d6c908c,"lime.ui.Window.set_minimized","lime/ui/Window.hx",505,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_512_get_mouseLock,"lime.ui.Window","get_mouseLock",0xa3d507aa,"lime.ui.Window.get_mouseLock","lime/ui/Window.hx",512,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_516_set_mouseLock,"lime.ui.Window","set_mouseLock",0xe8dae9b6,"lime.ui.Window.set_mouseLock","lime/ui/Window.hx",516,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_523_get_resizable,"lime.ui.Window","get_resizable",0x5918ea65,"lime.ui.Window.get_resizable","lime/ui/Window.hx",523,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_527_set_resizable,"lime.ui.Window","set_resizable",0x9e1ecc71,"lime.ui.Window.set_resizable","lime/ui/Window.hx",527,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_534_get_scale,"lime.ui.Window","get_scale",0x19cffc84,"lime.ui.Window.get_scale","lime/ui/Window.hx",534,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_539_get_textInputEnabled,"lime.ui.Window","get_textInputEnabled",0x0bd5462a,"lime.ui.Window.get_textInputEnabled","lime/ui/Window.hx",539,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_544_set_textInputEnabled,"lime.ui.Window","set_textInputEnabled",0xd88cfd9e,"lime.ui.Window.set_textInputEnabled","lime/ui/Window.hx",544,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_549_get_title,"lime.ui.Window","get_title",0xb13c4392,"lime.ui.Window.get_title","lime/ui/Window.hx",549,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_554_set_title,"lime.ui.Window","set_title",0x948d2f9e,"lime.ui.Window.set_title","lime/ui/Window.hx",554,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_559_get_width,"lime.ui.Window","get_width",0x6b63e400,"lime.ui.Window.get_width","lime/ui/Window.hx",559,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_563_set_width,"lime.ui.Window","set_width",0x4eb4d00c,"lime.ui.Window.set_width","lime/ui/Window.hx",563,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_570_get_x,"lime.ui.Window","get_x",0x57a02972,"lime.ui.Window.get_x","lime/ui/Window.hx",570,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_574_set_x,"lime.ui.Window","set_x",0x406f1f7e,"lime.ui.Window.set_x","lime/ui/Window.hx",574,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_581_get_y,"lime.ui.Window","get_y",0x57a02973,"lime.ui.Window.get_y","lime/ui/Window.hx",581,0x6ac7286d)
HX_LOCAL_STACK_FRAME(_hx_pos_ee84c8bd7ccb9d8c_585_set_y,"lime.ui.Window","set_y",0x406f1f7f,"lime.ui.Window.set_y","lime/ui/Window.hx",585,0x6ac7286d)
namespace lime{
namespace ui{

void Window_obj::__construct( ::lime::app::Application application, ::Dynamic attributes){
            	HX_GC_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_29_new)
HXLINE(  82)		this->onTextInput =  ::lime::app::_Event_String_Void_obj::__alloc( HX_CTX );
HXLINE(  81)		this->onTextEdit =  ::lime::app::_Event_String_Int_Int_Void_obj::__alloc( HX_CTX );
HXLINE(  80)		this->onRestore =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  79)		this->onResize =  ::lime::app::_Event_Int_Int_Void_obj::__alloc( HX_CTX );
HXLINE(  78)		this->onRenderContextRestored =  ::lime::app::_Event_lime_graphics_RenderContext_Void_obj::__alloc( HX_CTX );
HXLINE(  77)		this->onRenderContextLost =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  76)		this->onRender =  ::lime::app::_Event_lime_graphics_RenderContext_Void_obj::__alloc( HX_CTX );
HXLINE(  75)		this->onMove =  ::lime::app::_Event_Float_Float_Void_obj::__alloc( HX_CTX );
HXLINE(  74)		this->onMouseWheel =  ::lime::app::_Event_Float_Float_lime_ui_MouseWheelMode_Void_obj::__alloc( HX_CTX );
HXLINE(  73)		this->onMouseUp =  ::lime::app::_Event_Float_Float_Int_Void_obj::__alloc( HX_CTX );
HXLINE(  72)		this->onMouseMoveRelative =  ::lime::app::_Event_Float_Float_Void_obj::__alloc( HX_CTX );
HXLINE(  71)		this->onMouseMove =  ::lime::app::_Event_Float_Float_Void_obj::__alloc( HX_CTX );
HXLINE(  70)		this->onMouseDown =  ::lime::app::_Event_Float_Float_lime_ui_MouseButton_Void_obj::__alloc( HX_CTX );
HXLINE(  69)		this->onMinimize =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  68)		this->onMaximize =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  67)		this->onLeave =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  66)		this->onKeyUp =  ::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::__alloc( HX_CTX );
HXLINE(  65)		this->onKeyDown =  ::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::__alloc( HX_CTX );
HXLINE(  64)		this->onFullscreen =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  63)		this->onFocusOut =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  62)		this->onFocusIn =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  61)		this->onExpose =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  60)		this->onEnter =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  59)		this->onDropFile =  ::lime::app::_Event_String_Void_obj::__alloc( HX_CTX );
HXLINE(  58)		this->onDeactivate =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  57)		this->onClose =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  56)		this->onActivate =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE( 139)		this->application = application;
HXLINE( 140)		 ::Dynamic _hx_tmp;
HXDLIN( 140)		if (::hx::IsNotNull( attributes )) {
HXLINE( 140)			_hx_tmp = attributes;
            		}
            		else {
HXLINE( 140)			_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXDLIN( 140)		this->_hx___attributes = _hx_tmp;
HXLINE( 142)		if (::Reflect_obj::hasField(this->_hx___attributes,HX_("parameters",aa,be,7e,51))) {
HXLINE( 142)			this->parameters =  ::Dynamic(this->_hx___attributes->__Field(HX_("parameters",aa,be,7e,51),::hx::paccDynamic));
            		}
HXLINE( 144)		this->_hx___width = 0;
HXLINE( 145)		this->_hx___height = 0;
HXLINE( 146)		this->_hx___fullscreen = false;
HXLINE( 147)		this->_hx___scale = ( (Float)(1) );
HXLINE( 148)		this->_hx___x = 0;
HXLINE( 149)		this->_hx___y = 0;
HXLINE( 150)		this->_hx___title = HX_("",00,00,00,00);
HXLINE( 151)		this->id = -1;
HXLINE( 153)		this->_hx___backend =  ::lime::_internal::backend::native::NativeWindow_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 156)		::Array< ::String > mappings = ::Array_obj< ::String >::fromData( _hx_array_data_feb85851_1,46);
HXLINE( 207)		::lime::ui::Gamepad_obj::addMappings(mappings);
            	}

Dynamic Window_obj::__CreateEmpty() { return new Window_obj; }

void *Window_obj::_hx_vtable = 0;

Dynamic Window_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Window_obj > _hx_result = new Window_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Window_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7d946485;
}

void Window_obj::alert(::String message,::String title){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_362_alert)
HXDLIN( 362)		this->_hx___backend->alert(message,title);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,alert,(void))

void Window_obj::close(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_367_close)
HXDLIN( 367)		this->_hx___backend->close();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,close,(void))

void Window_obj::focus(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_372_focus)
HXDLIN( 372)		this->_hx___backend->focus();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,focus,(void))

void Window_obj::move(int x,int y){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_376_move)
HXLINE( 377)		this->_hx___backend->move(x,y);
HXLINE( 379)		this->_hx___x = x;
HXLINE( 380)		this->_hx___y = y;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,move,(void))

 ::lime::graphics::Image Window_obj::readPixels( ::lime::math::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_385_readPixels)
HXDLIN( 385)		return this->_hx___backend->readPixels(rect);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,readPixels,return )

void Window_obj::resize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_389_resize)
HXLINE( 390)		this->_hx___backend->resize(width,height);
HXLINE( 392)		this->_hx___width = width;
HXLINE( 393)		this->_hx___height = height;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,resize,(void))

void Window_obj::setIcon( ::lime::graphics::Image image){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_397_setIcon)
HXLINE( 398)		if (::hx::IsNull( image )) {
HXLINE( 400)			return;
            		}
HXLINE( 403)		this->_hx___backend->setIcon(image);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,setIcon,(void))

::String Window_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_408_toString)
HXDLIN( 408)		return HX_("[object Window]",87,e9,90,f1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,toString,return )

void Window_obj::warpMouse(int x,int y){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_413_warpMouse)
HXDLIN( 413)		this->_hx___backend->warpMouse(x,y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,warpMouse,(void))

 ::lime::ui::MouseCursor Window_obj::get_cursor(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_419_get_cursor)
HXDLIN( 419)		return this->_hx___backend->getCursor();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_cursor,return )

 ::lime::ui::MouseCursor Window_obj::set_cursor( ::lime::ui::MouseCursor value){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_424_set_cursor)
HXDLIN( 424)		return this->_hx___backend->setCursor(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_cursor,return )

 ::lime::_hx_system::Display Window_obj::get_display(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_429_get_display)
HXDLIN( 429)		return this->_hx___backend->getDisplay();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_display,return )

 ::lime::_hx_system::DisplayMode Window_obj::get_displayMode(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_434_get_displayMode)
HXDLIN( 434)		return this->_hx___backend->getDisplayMode();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_displayMode,return )

 ::lime::_hx_system::DisplayMode Window_obj::set_displayMode( ::lime::_hx_system::DisplayMode value){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_439_set_displayMode)
HXDLIN( 439)		return this->_hx___backend->setDisplayMode(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_displayMode,return )

bool Window_obj::get_borderless(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_444_get_borderless)
HXDLIN( 444)		return this->_hx___borderless;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_borderless,return )

bool Window_obj::set_borderless(bool value){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_449_set_borderless)
HXDLIN( 449)		return (this->_hx___borderless = this->_hx___backend->setBorderless(value));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_borderless,return )

Float Window_obj::get_frameRate(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_454_get_frameRate)
HXDLIN( 454)		return this->_hx___backend->getFrameRate();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_frameRate,return )

Float Window_obj::set_frameRate(Float value){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_459_set_frameRate)
HXDLIN( 459)		return this->_hx___backend->setFrameRate(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_frameRate,return )

bool Window_obj::get_fullscreen(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_464_get_fullscreen)
HXDLIN( 464)		return this->_hx___fullscreen;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_fullscreen,return )

bool Window_obj::set_fullscreen(bool value){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_469_set_fullscreen)
HXDLIN( 469)		return (this->_hx___fullscreen = this->_hx___backend->setFullscreen(value));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_fullscreen,return )

int Window_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_474_get_height)
HXDLIN( 474)		return this->_hx___height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_height,return )

int Window_obj::set_height(int value){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_478_set_height)
HXLINE( 479)		this->resize(this->_hx___width,value);
HXLINE( 480)		return this->_hx___height;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_height,return )

bool Window_obj::get_hidden(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_485_get_hidden)
HXDLIN( 485)		return this->_hx___hidden;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_hidden,return )

bool Window_obj::get_maximized(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_490_get_maximized)
HXDLIN( 490)		return this->_hx___maximized;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_maximized,return )

bool Window_obj::set_maximized(bool value){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_494_set_maximized)
HXLINE( 495)		this->_hx___minimized = false;
HXLINE( 496)		return (this->_hx___maximized = this->_hx___backend->setMaximized(value));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_maximized,return )

bool Window_obj::get_minimized(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_501_get_minimized)
HXDLIN( 501)		return this->_hx___minimized;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_minimized,return )

bool Window_obj::set_minimized(bool value){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_505_set_minimized)
HXLINE( 506)		this->_hx___maximized = false;
HXLINE( 507)		return (this->_hx___minimized = this->_hx___backend->setMinimized(value));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_minimized,return )

bool Window_obj::get_mouseLock(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_512_get_mouseLock)
HXDLIN( 512)		return this->_hx___backend->getMouseLock();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_mouseLock,return )

bool Window_obj::set_mouseLock(bool value){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_516_set_mouseLock)
HXLINE( 517)		this->_hx___backend->setMouseLock(value);
HXLINE( 518)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_mouseLock,return )

bool Window_obj::get_resizable(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_523_get_resizable)
HXDLIN( 523)		return this->_hx___resizable;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_resizable,return )

bool Window_obj::set_resizable(bool value){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_527_set_resizable)
HXLINE( 528)		this->_hx___resizable = this->_hx___backend->setResizable(value);
HXLINE( 529)		return this->_hx___resizable;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_resizable,return )

Float Window_obj::get_scale(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_534_get_scale)
HXDLIN( 534)		return this->_hx___scale;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_scale,return )

bool Window_obj::get_textInputEnabled(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_539_get_textInputEnabled)
HXDLIN( 539)		return this->_hx___backend->getTextInputEnabled();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_textInputEnabled,return )

bool Window_obj::set_textInputEnabled(bool value){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_544_set_textInputEnabled)
HXDLIN( 544)		return this->_hx___backend->setTextInputEnabled(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_textInputEnabled,return )

::String Window_obj::get_title(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_549_get_title)
HXDLIN( 549)		return this->_hx___title;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_title,return )

::String Window_obj::set_title(::String value){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_554_set_title)
HXDLIN( 554)		return (this->_hx___title = this->_hx___backend->setTitle(value));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_title,return )

int Window_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_559_get_width)
HXDLIN( 559)		return this->_hx___width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_width,return )

int Window_obj::set_width(int value){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_563_set_width)
HXLINE( 564)		this->resize(value,this->_hx___height);
HXLINE( 565)		return this->_hx___width;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_width,return )

int Window_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_570_get_x)
HXDLIN( 570)		return this->_hx___x;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_x,return )

int Window_obj::set_x(int value){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_574_set_x)
HXLINE( 575)		this->move(value,this->_hx___y);
HXLINE( 576)		return this->_hx___x;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_x,return )

int Window_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_581_get_y)
HXDLIN( 581)		return this->_hx___y;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_y,return )

int Window_obj::set_y(int value){
            	HX_STACKFRAME(&_hx_pos_ee84c8bd7ccb9d8c_585_set_y)
HXLINE( 586)		this->move(this->_hx___x,value);
HXLINE( 587)		return this->_hx___y;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_y,return )


::hx::ObjectPtr< Window_obj > Window_obj::__new( ::lime::app::Application application, ::Dynamic attributes) {
	::hx::ObjectPtr< Window_obj > __this = new Window_obj();
	__this->__construct(application,attributes);
	return __this;
}

::hx::ObjectPtr< Window_obj > Window_obj::__alloc(::hx::Ctx *_hx_ctx, ::lime::app::Application application, ::Dynamic attributes) {
	Window_obj *__this = (Window_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Window_obj), true, "lime.ui.Window"));
	*(void **)__this = Window_obj::_hx_vtable;
	__this->__construct(application,attributes);
	return __this;
}

Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(application,"application");
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(display,"display");
	HX_MARK_MEMBER_NAME(element,"element");
	HX_MARK_MEMBER_NAME(hidden,"hidden");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(onActivate,"onActivate");
	HX_MARK_MEMBER_NAME(onClose,"onClose");
	HX_MARK_MEMBER_NAME(onDeactivate,"onDeactivate");
	HX_MARK_MEMBER_NAME(onDropFile,"onDropFile");
	HX_MARK_MEMBER_NAME(onEnter,"onEnter");
	HX_MARK_MEMBER_NAME(onExpose,"onExpose");
	HX_MARK_MEMBER_NAME(onFocusIn,"onFocusIn");
	HX_MARK_MEMBER_NAME(onFocusOut,"onFocusOut");
	HX_MARK_MEMBER_NAME(onFullscreen,"onFullscreen");
	HX_MARK_MEMBER_NAME(onKeyDown,"onKeyDown");
	HX_MARK_MEMBER_NAME(onKeyUp,"onKeyUp");
	HX_MARK_MEMBER_NAME(onLeave,"onLeave");
	HX_MARK_MEMBER_NAME(onMaximize,"onMaximize");
	HX_MARK_MEMBER_NAME(onMinimize,"onMinimize");
	HX_MARK_MEMBER_NAME(onMouseDown,"onMouseDown");
	HX_MARK_MEMBER_NAME(onMouseMove,"onMouseMove");
	HX_MARK_MEMBER_NAME(onMouseMoveRelative,"onMouseMoveRelative");
	HX_MARK_MEMBER_NAME(onMouseUp,"onMouseUp");
	HX_MARK_MEMBER_NAME(onMouseWheel,"onMouseWheel");
	HX_MARK_MEMBER_NAME(onMove,"onMove");
	HX_MARK_MEMBER_NAME(onRender,"onRender");
	HX_MARK_MEMBER_NAME(onRenderContextLost,"onRenderContextLost");
	HX_MARK_MEMBER_NAME(onRenderContextRestored,"onRenderContextRestored");
	HX_MARK_MEMBER_NAME(onResize,"onResize");
	HX_MARK_MEMBER_NAME(onRestore,"onRestore");
	HX_MARK_MEMBER_NAME(onTextEdit,"onTextEdit");
	HX_MARK_MEMBER_NAME(onTextInput,"onTextInput");
	HX_MARK_MEMBER_NAME(parameters,"parameters");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(stage,"stage");
	HX_MARK_MEMBER_NAME(_hx___attributes,"__attributes");
	HX_MARK_MEMBER_NAME(_hx___backend,"__backend");
	HX_MARK_MEMBER_NAME(_hx___borderless,"__borderless");
	HX_MARK_MEMBER_NAME(_hx___fullscreen,"__fullscreen");
	HX_MARK_MEMBER_NAME(_hx___height,"__height");
	HX_MARK_MEMBER_NAME(_hx___hidden,"__hidden");
	HX_MARK_MEMBER_NAME(_hx___maximized,"__maximized");
	HX_MARK_MEMBER_NAME(_hx___minimized,"__minimized");
	HX_MARK_MEMBER_NAME(_hx___resizable,"__resizable");
	HX_MARK_MEMBER_NAME(_hx___scale,"__scale");
	HX_MARK_MEMBER_NAME(_hx___title,"__title");
	HX_MARK_MEMBER_NAME(_hx___width,"__width");
	HX_MARK_MEMBER_NAME(_hx___x,"__x");
	HX_MARK_MEMBER_NAME(_hx___y,"__y");
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(application,"application");
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(display,"display");
	HX_VISIT_MEMBER_NAME(element,"element");
	HX_VISIT_MEMBER_NAME(hidden,"hidden");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(onActivate,"onActivate");
	HX_VISIT_MEMBER_NAME(onClose,"onClose");
	HX_VISIT_MEMBER_NAME(onDeactivate,"onDeactivate");
	HX_VISIT_MEMBER_NAME(onDropFile,"onDropFile");
	HX_VISIT_MEMBER_NAME(onEnter,"onEnter");
	HX_VISIT_MEMBER_NAME(onExpose,"onExpose");
	HX_VISIT_MEMBER_NAME(onFocusIn,"onFocusIn");
	HX_VISIT_MEMBER_NAME(onFocusOut,"onFocusOut");
	HX_VISIT_MEMBER_NAME(onFullscreen,"onFullscreen");
	HX_VISIT_MEMBER_NAME(onKeyDown,"onKeyDown");
	HX_VISIT_MEMBER_NAME(onKeyUp,"onKeyUp");
	HX_VISIT_MEMBER_NAME(onLeave,"onLeave");
	HX_VISIT_MEMBER_NAME(onMaximize,"onMaximize");
	HX_VISIT_MEMBER_NAME(onMinimize,"onMinimize");
	HX_VISIT_MEMBER_NAME(onMouseDown,"onMouseDown");
	HX_VISIT_MEMBER_NAME(onMouseMove,"onMouseMove");
	HX_VISIT_MEMBER_NAME(onMouseMoveRelative,"onMouseMoveRelative");
	HX_VISIT_MEMBER_NAME(onMouseUp,"onMouseUp");
	HX_VISIT_MEMBER_NAME(onMouseWheel,"onMouseWheel");
	HX_VISIT_MEMBER_NAME(onMove,"onMove");
	HX_VISIT_MEMBER_NAME(onRender,"onRender");
	HX_VISIT_MEMBER_NAME(onRenderContextLost,"onRenderContextLost");
	HX_VISIT_MEMBER_NAME(onRenderContextRestored,"onRenderContextRestored");
	HX_VISIT_MEMBER_NAME(onResize,"onResize");
	HX_VISIT_MEMBER_NAME(onRestore,"onRestore");
	HX_VISIT_MEMBER_NAME(onTextEdit,"onTextEdit");
	HX_VISIT_MEMBER_NAME(onTextInput,"onTextInput");
	HX_VISIT_MEMBER_NAME(parameters,"parameters");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(stage,"stage");
	HX_VISIT_MEMBER_NAME(_hx___attributes,"__attributes");
	HX_VISIT_MEMBER_NAME(_hx___backend,"__backend");
	HX_VISIT_MEMBER_NAME(_hx___borderless,"__borderless");
	HX_VISIT_MEMBER_NAME(_hx___fullscreen,"__fullscreen");
	HX_VISIT_MEMBER_NAME(_hx___height,"__height");
	HX_VISIT_MEMBER_NAME(_hx___hidden,"__hidden");
	HX_VISIT_MEMBER_NAME(_hx___maximized,"__maximized");
	HX_VISIT_MEMBER_NAME(_hx___minimized,"__minimized");
	HX_VISIT_MEMBER_NAME(_hx___resizable,"__resizable");
	HX_VISIT_MEMBER_NAME(_hx___scale,"__scale");
	HX_VISIT_MEMBER_NAME(_hx___title,"__title");
	HX_VISIT_MEMBER_NAME(_hx___width,"__width");
	HX_VISIT_MEMBER_NAME(_hx___x,"__x");
	HX_VISIT_MEMBER_NAME(_hx___y,"__y");
}

::hx::Val Window_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_x() ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_y() ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { return ::hx::Val( _hx___x ); }
		if (HX_FIELD_EQ(inName,"__y") ) { return ::hx::Val( _hx___y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return ::hx::Val( move_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_scale() : scale ); }
		if (HX_FIELD_EQ(inName,"stage") ) { return ::hx::Val( stage ); }
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_title() ); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		if (HX_FIELD_EQ(inName,"alert") ) { return ::hx::Val( alert_dyn() ); }
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"focus") ) { return ::hx::Val( focus_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return ::hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return ::hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cursor() ); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_height() ); }
		if (HX_FIELD_EQ(inName,"hidden") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_hidden() : hidden ); }
		if (HX_FIELD_EQ(inName,"onMove") ) { return ::hx::Val( onMove ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return ::hx::Val( context ); }
		if (HX_FIELD_EQ(inName,"display") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_display() : display ); }
		if (HX_FIELD_EQ(inName,"element") ) { return ::hx::Val( element ); }
		if (HX_FIELD_EQ(inName,"onClose") ) { return ::hx::Val( onClose ); }
		if (HX_FIELD_EQ(inName,"onEnter") ) { return ::hx::Val( onEnter ); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return ::hx::Val( onKeyUp ); }
		if (HX_FIELD_EQ(inName,"onLeave") ) { return ::hx::Val( onLeave ); }
		if (HX_FIELD_EQ(inName,"__scale") ) { return ::hx::Val( _hx___scale ); }
		if (HX_FIELD_EQ(inName,"__title") ) { return ::hx::Val( _hx___title ); }
		if (HX_FIELD_EQ(inName,"__width") ) { return ::hx::Val( _hx___width ); }
		if (HX_FIELD_EQ(inName,"setIcon") ) { return ::hx::Val( setIcon_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onExpose") ) { return ::hx::Val( onExpose ); }
		if (HX_FIELD_EQ(inName,"onRender") ) { return ::hx::Val( onRender ); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return ::hx::Val( onResize ); }
		if (HX_FIELD_EQ(inName,"__height") ) { return ::hx::Val( _hx___height ); }
		if (HX_FIELD_EQ(inName,"__hidden") ) { return ::hx::Val( _hx___hidden ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_frameRate() ); }
		if (HX_FIELD_EQ(inName,"maximized") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maximized() ); }
		if (HX_FIELD_EQ(inName,"minimized") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minimized() ); }
		if (HX_FIELD_EQ(inName,"mouseLock") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mouseLock() ); }
		if (HX_FIELD_EQ(inName,"onFocusIn") ) { return ::hx::Val( onFocusIn ); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return ::hx::Val( onKeyDown ); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return ::hx::Val( onMouseUp ); }
		if (HX_FIELD_EQ(inName,"onRestore") ) { return ::hx::Val( onRestore ); }
		if (HX_FIELD_EQ(inName,"resizable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_resizable() ); }
		if (HX_FIELD_EQ(inName,"__backend") ) { return ::hx::Val( _hx___backend ); }
		if (HX_FIELD_EQ(inName,"warpMouse") ) { return ::hx::Val( warpMouse_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return ::hx::Val( get_scale_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_title") ) { return ::hx::Val( get_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return ::hx::Val( set_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"borderless") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_borderless() ); }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fullscreen() ); }
		if (HX_FIELD_EQ(inName,"onActivate") ) { return ::hx::Val( onActivate ); }
		if (HX_FIELD_EQ(inName,"onDropFile") ) { return ::hx::Val( onDropFile ); }
		if (HX_FIELD_EQ(inName,"onFocusOut") ) { return ::hx::Val( onFocusOut ); }
		if (HX_FIELD_EQ(inName,"onMaximize") ) { return ::hx::Val( onMaximize ); }
		if (HX_FIELD_EQ(inName,"onMinimize") ) { return ::hx::Val( onMinimize ); }
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { return ::hx::Val( onTextEdit ); }
		if (HX_FIELD_EQ(inName,"parameters") ) { return ::hx::Val( parameters ); }
		if (HX_FIELD_EQ(inName,"readPixels") ) { return ::hx::Val( readPixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_cursor") ) { return ::hx::Val( get_cursor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cursor") ) { return ::hx::Val( set_cursor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_hidden") ) { return ::hx::Val( get_hidden_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { return ::hx::Val( application ); }
		if (HX_FIELD_EQ(inName,"displayMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_displayMode() ); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return ::hx::Val( onMouseDown ); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return ::hx::Val( onMouseMove ); }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return ::hx::Val( onTextInput ); }
		if (HX_FIELD_EQ(inName,"__maximized") ) { return ::hx::Val( _hx___maximized ); }
		if (HX_FIELD_EQ(inName,"__minimized") ) { return ::hx::Val( _hx___minimized ); }
		if (HX_FIELD_EQ(inName,"__resizable") ) { return ::hx::Val( _hx___resizable ); }
		if (HX_FIELD_EQ(inName,"get_display") ) { return ::hx::Val( get_display_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onDeactivate") ) { return ::hx::Val( onDeactivate ); }
		if (HX_FIELD_EQ(inName,"onFullscreen") ) { return ::hx::Val( onFullscreen ); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return ::hx::Val( onMouseWheel ); }
		if (HX_FIELD_EQ(inName,"__attributes") ) { return ::hx::Val( _hx___attributes ); }
		if (HX_FIELD_EQ(inName,"__borderless") ) { return ::hx::Val( _hx___borderless ); }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { return ::hx::Val( _hx___fullscreen ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_frameRate") ) { return ::hx::Val( get_frameRate_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return ::hx::Val( set_frameRate_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maximized") ) { return ::hx::Val( get_maximized_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maximized") ) { return ::hx::Val( set_maximized_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_minimized") ) { return ::hx::Val( get_minimized_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_minimized") ) { return ::hx::Val( set_minimized_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mouseLock") ) { return ::hx::Val( get_mouseLock_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mouseLock") ) { return ::hx::Val( set_mouseLock_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_resizable") ) { return ::hx::Val( get_resizable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_resizable") ) { return ::hx::Val( set_resizable_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_borderless") ) { return ::hx::Val( get_borderless_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderless") ) { return ::hx::Val( set_borderless_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_fullscreen") ) { return ::hx::Val( get_fullscreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fullscreen") ) { return ::hx::Val( set_fullscreen_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_displayMode") ) { return ::hx::Val( get_displayMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_displayMode") ) { return ::hx::Val( set_displayMode_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textInputEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textInputEnabled() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { return ::hx::Val( onMouseMoveRelative ); }
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { return ::hx::Val( onRenderContextLost ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_textInputEnabled") ) { return ::hx::Val( get_textInputEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textInputEnabled") ) { return ::hx::Val( set_textInputEnabled_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { return ::hx::Val( onRenderContextRestored ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Window_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< int >()) ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { _hx___x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__y") ) { _hx___y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast<  ::openfl::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_title(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cursor(inValue.Cast<  ::lime::ui::MouseCursor >()) ); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"hidden") ) { hidden=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMove") ) { onMove=inValue.Cast<  ::lime::app::_Event_Float_Float_Void >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast<  ::lime::graphics::RenderContext >(); return inValue; }
		if (HX_FIELD_EQ(inName,"display") ) { display=inValue.Cast<  ::lime::_hx_system::Display >(); return inValue; }
		if (HX_FIELD_EQ(inName,"element") ) { element=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onClose") ) { onClose=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onEnter") ) { onEnter=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { onKeyUp=inValue.Cast<  ::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onLeave") ) { onLeave=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scale") ) { _hx___scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__title") ) { _hx___title=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__width") ) { _hx___width=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onExpose") ) { onExpose=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onRender") ) { onRender=inValue.Cast<  ::lime::app::_Event_lime_graphics_RenderContext_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onResize") ) { onResize=inValue.Cast<  ::lime::app::_Event_Int_Int_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__height") ) { _hx___height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hidden") ) { _hx___hidden=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frameRate(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"maximized") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maximized(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"minimized") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_minimized(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"mouseLock") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mouseLock(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"onFocusIn") ) { onFocusIn=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { onKeyDown=inValue.Cast<  ::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { onMouseUp=inValue.Cast<  ::lime::app::_Event_Float_Float_Int_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onRestore") ) { onRestore=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resizable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_resizable(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"__backend") ) { _hx___backend=inValue.Cast<  ::lime::_internal::backend::native::NativeWindow >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"borderless") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderless(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fullscreen(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"onActivate") ) { onActivate=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDropFile") ) { onDropFile=inValue.Cast<  ::lime::app::_Event_String_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onFocusOut") ) { onFocusOut=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMaximize") ) { onMaximize=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMinimize") ) { onMinimize=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { onTextEdit=inValue.Cast<  ::lime::app::_Event_String_Int_Int_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parameters") ) { parameters=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { application=inValue.Cast<  ::lime::app::Application >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_displayMode(inValue.Cast<  ::lime::_hx_system::DisplayMode >()) ); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { onMouseDown=inValue.Cast<  ::lime::app::_Event_Float_Float_lime_ui_MouseButton_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { onMouseMove=inValue.Cast<  ::lime::app::_Event_Float_Float_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { onTextInput=inValue.Cast<  ::lime::app::_Event_String_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__maximized") ) { _hx___maximized=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__minimized") ) { _hx___minimized=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__resizable") ) { _hx___resizable=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onDeactivate") ) { onDeactivate=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onFullscreen") ) { onFullscreen=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { onMouseWheel=inValue.Cast<  ::lime::app::_Event_Float_Float_lime_ui_MouseWheelMode_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__attributes") ) { _hx___attributes=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__borderless") ) { _hx___borderless=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { _hx___fullscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textInputEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textInputEnabled(inValue.Cast< bool >()) ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { onMouseMoveRelative=inValue.Cast<  ::lime::app::_Event_Float_Float_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { onRenderContextLost=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { onRenderContextRestored=inValue.Cast<  ::lime::app::_Event_lime_graphics_RenderContext_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("application",50,ab,3e,2a));
	outFields->push(HX_("borderless",45,46,71,17));
	outFields->push(HX_("context",ef,95,77,19));
	outFields->push(HX_("cursor",d6,8e,e8,3e));
	outFields->push(HX_("display",42,2a,4a,bb));
	outFields->push(HX_("displayMode",c5,72,53,30));
	outFields->push(HX_("element",bc,ae,54,06));
	outFields->push(HX_("frameRate",ad,11,25,39));
	outFields->push(HX_("fullscreen",3b,3a,b4,f9));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("hidden",6a,ff,95,4c));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("maximized",18,0e,e1,fe));
	outFields->push(HX_("minimized",86,fb,9d,28));
	outFields->push(HX_("mouseLock",b0,54,0c,f4));
	outFields->push(HX_("onActivate",f2,ef,62,c3));
	outFields->push(HX_("onClose",19,b6,a0,de));
	outFields->push(HX_("onDeactivate",33,fe,44,14));
	outFields->push(HX_("onDropFile",8a,4a,0d,c7));
	outFields->push(HX_("onEnter",79,0b,c4,06));
	outFields->push(HX_("onExpose",c3,88,2a,a4));
	outFields->push(HX_("onFocusIn",7e,fe,2d,19));
	outFields->push(HX_("onFocusOut",d5,43,15,ef));
	outFields->push(HX_("onFullscreen",3a,dc,f7,d1));
	outFields->push(HX_("onKeyDown",42,22,f2,73));
	outFields->push(HX_("onKeyUp",3b,58,3c,75));
	outFields->push(HX_("onLeave",58,d3,90,08));
	outFields->push(HX_("onMaximize",0b,f9,15,b2));
	outFields->push(HX_("onMinimize",5d,13,30,ff));
	outFields->push(HX_("onMouseDown",08,94,05,11));
	outFields->push(HX_("onMouseMove",b7,7e,f8,16));
	outFields->push(HX_("onMouseMoveRelative",a3,06,bf,7a));
	outFields->push(HX_("onMouseUp",81,ac,1d,98));
	outFields->push(HX_("onMouseWheel",35,ca,ca,bf));
	outFields->push(HX_("onMove",d0,eb,ea,ea));
	outFields->push(HX_("onRender",d5,61,d6,e4));
	outFields->push(HX_("onRenderContextLost",9e,9b,a7,84));
	outFields->push(HX_("onRenderContextRestored",10,54,6e,7a));
	outFields->push(HX_("onResize",73,50,28,e8));
	outFields->push(HX_("onRestore",ef,1f,5b,42));
	outFields->push(HX_("onTextEdit",96,f1,c0,23));
	outFields->push(HX_("onTextInput",fe,36,4e,79));
	outFields->push(HX_("parameters",aa,be,7e,51));
	outFields->push(HX_("resizable",6b,37,50,a9));
	outFields->push(HX_("scale",8a,ce,ce,78));
	outFields->push(HX_("stage",be,6a,0b,84));
	outFields->push(HX_("textInputEnabled",e4,45,00,c4));
	outFields->push(HX_("title",98,15,3b,10));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("__attributes",f7,23,05,d0));
	outFields->push(HX_("__backend",f4,0c,d6,7c));
	outFields->push(HX_("__borderless",65,c1,04,50));
	outFields->push(HX_("__fullscreen",5b,b5,47,32));
	outFields->push(HX_("__height",07,73,7b,aa));
	outFields->push(HX_("__hidden",8a,6a,c5,f4));
	outFields->push(HX_("__maximized",f8,56,0d,2d));
	outFields->push(HX_("__minimized",66,44,ca,56));
	outFields->push(HX_("__resizable",4b,80,7c,d7));
	outFields->push(HX_("__scale",6a,27,2d,e3));
	outFields->push(HX_("__title",78,6e,99,7a));
	outFields->push(HX_("__width",e6,0e,c1,34));
	outFields->push(HX_("__x",58,69,48,00));
	outFields->push(HX_("__y",59,69,48,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Window_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::lime::app::Application */ ,(int)offsetof(Window_obj,application),HX_("application",50,ab,3e,2a)},
	{::hx::fsObject /*  ::lime::graphics::RenderContext */ ,(int)offsetof(Window_obj,context),HX_("context",ef,95,77,19)},
	{::hx::fsObject /*  ::lime::_hx_system::Display */ ,(int)offsetof(Window_obj,display),HX_("display",42,2a,4a,bb)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Window_obj,element),HX_("element",bc,ae,54,06)},
	{::hx::fsBool,(int)offsetof(Window_obj,hidden),HX_("hidden",6a,ff,95,4c)},
	{::hx::fsInt,(int)offsetof(Window_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Window_obj,onActivate),HX_("onActivate",f2,ef,62,c3)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Window_obj,onClose),HX_("onClose",19,b6,a0,de)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Window_obj,onDeactivate),HX_("onDeactivate",33,fe,44,14)},
	{::hx::fsObject /*  ::lime::app::_Event_String_Void */ ,(int)offsetof(Window_obj,onDropFile),HX_("onDropFile",8a,4a,0d,c7)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Window_obj,onEnter),HX_("onEnter",79,0b,c4,06)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Window_obj,onExpose),HX_("onExpose",c3,88,2a,a4)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Window_obj,onFocusIn),HX_("onFocusIn",7e,fe,2d,19)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Window_obj,onFocusOut),HX_("onFocusOut",d5,43,15,ef)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Window_obj,onFullscreen),HX_("onFullscreen",3a,dc,f7,d1)},
	{::hx::fsObject /*  ::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void */ ,(int)offsetof(Window_obj,onKeyDown),HX_("onKeyDown",42,22,f2,73)},
	{::hx::fsObject /*  ::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void */ ,(int)offsetof(Window_obj,onKeyUp),HX_("onKeyUp",3b,58,3c,75)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Window_obj,onLeave),HX_("onLeave",58,d3,90,08)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Window_obj,onMaximize),HX_("onMaximize",0b,f9,15,b2)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Window_obj,onMinimize),HX_("onMinimize",5d,13,30,ff)},
	{::hx::fsObject /*  ::lime::app::_Event_Float_Float_lime_ui_MouseButton_Void */ ,(int)offsetof(Window_obj,onMouseDown),HX_("onMouseDown",08,94,05,11)},
	{::hx::fsObject /*  ::lime::app::_Event_Float_Float_Void */ ,(int)offsetof(Window_obj,onMouseMove),HX_("onMouseMove",b7,7e,f8,16)},
	{::hx::fsObject /*  ::lime::app::_Event_Float_Float_Void */ ,(int)offsetof(Window_obj,onMouseMoveRelative),HX_("onMouseMoveRelative",a3,06,bf,7a)},
	{::hx::fsObject /*  ::lime::app::_Event_Float_Float_Int_Void */ ,(int)offsetof(Window_obj,onMouseUp),HX_("onMouseUp",81,ac,1d,98)},
	{::hx::fsObject /*  ::lime::app::_Event_Float_Float_lime_ui_MouseWheelMode_Void */ ,(int)offsetof(Window_obj,onMouseWheel),HX_("onMouseWheel",35,ca,ca,bf)},
	{::hx::fsObject /*  ::lime::app::_Event_Float_Float_Void */ ,(int)offsetof(Window_obj,onMove),HX_("onMove",d0,eb,ea,ea)},
	{::hx::fsObject /*  ::lime::app::_Event_lime_graphics_RenderContext_Void */ ,(int)offsetof(Window_obj,onRender),HX_("onRender",d5,61,d6,e4)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Window_obj,onRenderContextLost),HX_("onRenderContextLost",9e,9b,a7,84)},
	{::hx::fsObject /*  ::lime::app::_Event_lime_graphics_RenderContext_Void */ ,(int)offsetof(Window_obj,onRenderContextRestored),HX_("onRenderContextRestored",10,54,6e,7a)},
	{::hx::fsObject /*  ::lime::app::_Event_Int_Int_Void */ ,(int)offsetof(Window_obj,onResize),HX_("onResize",73,50,28,e8)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Window_obj,onRestore),HX_("onRestore",ef,1f,5b,42)},
	{::hx::fsObject /*  ::lime::app::_Event_String_Int_Int_Void */ ,(int)offsetof(Window_obj,onTextEdit),HX_("onTextEdit",96,f1,c0,23)},
	{::hx::fsObject /*  ::lime::app::_Event_String_Void */ ,(int)offsetof(Window_obj,onTextInput),HX_("onTextInput",fe,36,4e,79)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Window_obj,parameters),HX_("parameters",aa,be,7e,51)},
	{::hx::fsFloat,(int)offsetof(Window_obj,scale),HX_("scale",8a,ce,ce,78)},
	{::hx::fsObject /*  ::openfl::display::Stage */ ,(int)offsetof(Window_obj,stage),HX_("stage",be,6a,0b,84)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Window_obj,_hx___attributes),HX_("__attributes",f7,23,05,d0)},
	{::hx::fsObject /*  ::lime::_internal::backend::native::NativeWindow */ ,(int)offsetof(Window_obj,_hx___backend),HX_("__backend",f4,0c,d6,7c)},
	{::hx::fsBool,(int)offsetof(Window_obj,_hx___borderless),HX_("__borderless",65,c1,04,50)},
	{::hx::fsBool,(int)offsetof(Window_obj,_hx___fullscreen),HX_("__fullscreen",5b,b5,47,32)},
	{::hx::fsInt,(int)offsetof(Window_obj,_hx___height),HX_("__height",07,73,7b,aa)},
	{::hx::fsBool,(int)offsetof(Window_obj,_hx___hidden),HX_("__hidden",8a,6a,c5,f4)},
	{::hx::fsBool,(int)offsetof(Window_obj,_hx___maximized),HX_("__maximized",f8,56,0d,2d)},
	{::hx::fsBool,(int)offsetof(Window_obj,_hx___minimized),HX_("__minimized",66,44,ca,56)},
	{::hx::fsBool,(int)offsetof(Window_obj,_hx___resizable),HX_("__resizable",4b,80,7c,d7)},
	{::hx::fsFloat,(int)offsetof(Window_obj,_hx___scale),HX_("__scale",6a,27,2d,e3)},
	{::hx::fsString,(int)offsetof(Window_obj,_hx___title),HX_("__title",78,6e,99,7a)},
	{::hx::fsInt,(int)offsetof(Window_obj,_hx___width),HX_("__width",e6,0e,c1,34)},
	{::hx::fsInt,(int)offsetof(Window_obj,_hx___x),HX_("__x",58,69,48,00)},
	{::hx::fsInt,(int)offsetof(Window_obj,_hx___y),HX_("__y",59,69,48,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Window_obj_sStaticStorageInfo = 0;
#endif

static ::String Window_obj_sMemberFields[] = {
	HX_("application",50,ab,3e,2a),
	HX_("context",ef,95,77,19),
	HX_("display",42,2a,4a,bb),
	HX_("element",bc,ae,54,06),
	HX_("hidden",6a,ff,95,4c),
	HX_("id",db,5b,00,00),
	HX_("onActivate",f2,ef,62,c3),
	HX_("onClose",19,b6,a0,de),
	HX_("onDeactivate",33,fe,44,14),
	HX_("onDropFile",8a,4a,0d,c7),
	HX_("onEnter",79,0b,c4,06),
	HX_("onExpose",c3,88,2a,a4),
	HX_("onFocusIn",7e,fe,2d,19),
	HX_("onFocusOut",d5,43,15,ef),
	HX_("onFullscreen",3a,dc,f7,d1),
	HX_("onKeyDown",42,22,f2,73),
	HX_("onKeyUp",3b,58,3c,75),
	HX_("onLeave",58,d3,90,08),
	HX_("onMaximize",0b,f9,15,b2),
	HX_("onMinimize",5d,13,30,ff),
	HX_("onMouseDown",08,94,05,11),
	HX_("onMouseMove",b7,7e,f8,16),
	HX_("onMouseMoveRelative",a3,06,bf,7a),
	HX_("onMouseUp",81,ac,1d,98),
	HX_("onMouseWheel",35,ca,ca,bf),
	HX_("onMove",d0,eb,ea,ea),
	HX_("onRender",d5,61,d6,e4),
	HX_("onRenderContextLost",9e,9b,a7,84),
	HX_("onRenderContextRestored",10,54,6e,7a),
	HX_("onResize",73,50,28,e8),
	HX_("onRestore",ef,1f,5b,42),
	HX_("onTextEdit",96,f1,c0,23),
	HX_("onTextInput",fe,36,4e,79),
	HX_("parameters",aa,be,7e,51),
	HX_("scale",8a,ce,ce,78),
	HX_("stage",be,6a,0b,84),
	HX_("__attributes",f7,23,05,d0),
	HX_("__backend",f4,0c,d6,7c),
	HX_("__borderless",65,c1,04,50),
	HX_("__fullscreen",5b,b5,47,32),
	HX_("__height",07,73,7b,aa),
	HX_("__hidden",8a,6a,c5,f4),
	HX_("__maximized",f8,56,0d,2d),
	HX_("__minimized",66,44,ca,56),
	HX_("__resizable",4b,80,7c,d7),
	HX_("__scale",6a,27,2d,e3),
	HX_("__title",78,6e,99,7a),
	HX_("__width",e6,0e,c1,34),
	HX_("__x",58,69,48,00),
	HX_("__y",59,69,48,00),
	HX_("alert",5c,57,8e,21),
	HX_("close",b8,17,63,48),
	HX_("focus",d8,5f,89,04),
	HX_("move",11,e3,60,48),
	HX_("readPixels",23,d3,25,86),
	HX_("resize",f4,59,7b,08),
	HX_("setIcon",3b,28,37,0b),
	HX_("toString",ac,d0,6e,38),
	HX_("warpMouse",bd,de,6e,a6),
	HX_("get_cursor",9f,fe,6f,2f),
	HX_("set_cursor",13,9d,ed,32),
	HX_("get_display",59,8a,44,41),
	HX_("get_displayMode",5c,2a,35,f1),
	HX_("set_displayMode",68,a7,00,ed),
	HX_("get_borderless",8e,ce,66,8d),
	HX_("set_borderless",02,b7,86,ad),
	HX_("get_frameRate",84,e5,88,fa),
	HX_("set_frameRate",90,c7,8e,3f),
	HX_("get_fullscreen",84,c2,a9,6f),
	HX_("set_fullscreen",f8,aa,c9,8f),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("get_hidden",33,6f,1d,3d),
	HX_("get_maximized",ef,e1,44,c0),
	HX_("set_maximized",fb,c3,4a,05),
	HX_("get_minimized",5d,cf,01,ea),
	HX_("set_minimized",69,b1,07,2f),
	HX_("get_mouseLock",87,28,70,b5),
	HX_("set_mouseLock",93,0a,76,fa),
	HX_("get_resizable",42,0b,b4,6a),
	HX_("set_resizable",4e,ed,b9,af),
	HX_("get_scale",e1,2a,78,bc),
	HX_("get_textInputEnabled",ed,aa,6a,e2),
	HX_("set_textInputEnabled",61,62,22,af),
	HX_("get_title",ef,71,e4,53),
	HX_("set_title",fb,5d,35,37),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_x",4f,a5,60,91),
	HX_("set_x",5b,9b,2f,7a),
	HX_("get_y",50,a5,60,91),
	HX_("set_y",5c,9b,2f,7a),
	::String(null()) };

::hx::Class Window_obj::__mClass;

void Window_obj::__register()
{
	Window_obj _hx_dummy;
	Window_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.ui.Window",51,58,b8,fe);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Window_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Window_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Window_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Window_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace ui
