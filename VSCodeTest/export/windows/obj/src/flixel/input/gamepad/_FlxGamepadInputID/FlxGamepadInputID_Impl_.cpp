#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad__FlxGamepadInputID_FlxGamepadInputID_Impl_
#include <flixel/input/gamepad/_FlxGamepadInputID/FlxGamepadInputID_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_134_fromString,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","fromString",0xff2eba07,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.fromString","flixel/input/gamepad/FlxGamepadInputID.hx",134,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_142_toString,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","toString",0xe73bb9d8,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.toString","flixel/input/gamepad/FlxGamepadInputID.hx",142,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_97787d57481f8476_54_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/system/macros/FlxMacroUtil.hx",54,0x8cc0f087)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_18_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",18,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_19_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",19,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_22_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",22,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_25_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",25,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_28_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",28,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_31_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",31,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_34_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",34,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_37_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",37,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_40_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",40,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_43_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",43,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_46_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",46,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_49_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",49,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_52_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",52,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_54_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",54,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_55_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",55,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_56_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",56,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_57_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",57,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_60_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",60,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_63_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",63,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_65_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",65,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_66_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",66,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_69_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",69,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_72_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",72,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_75_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",75,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_85_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",85,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_88_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",88,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_91_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",91,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_94_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",94,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_97_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",97,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_100_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",100,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_103_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",103,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_106_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",106,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_109_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",109,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_112_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",112,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_115_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",115,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_118_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",118,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_121_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",121,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_124_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",124,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_127_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",127,0x292d23ae)
HX_LOCAL_STACK_FRAME(_hx_pos_92ec9d1968218ffd_130_boot,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","boot",0xe219675e,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.boot","flixel/input/gamepad/FlxGamepadInputID.hx",130,0x292d23ae)
namespace flixel{
namespace input{
namespace gamepad{
namespace _FlxGamepadInputID{

void FlxGamepadInputID_Impl__obj::__construct() { }

Dynamic FlxGamepadInputID_Impl__obj::__CreateEmpty() { return new FlxGamepadInputID_Impl__obj; }

void *FlxGamepadInputID_Impl__obj::_hx_vtable = 0;

Dynamic FlxGamepadInputID_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxGamepadInputID_Impl__obj > _hx_result = new FlxGamepadInputID_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxGamepadInputID_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x32abd6c8;
}

 ::haxe::ds::StringMap FlxGamepadInputID_Impl__obj::fromStringMap;

 ::haxe::ds::IntMap FlxGamepadInputID_Impl__obj::toStringMap;

int FlxGamepadInputID_Impl__obj::ANY;

int FlxGamepadInputID_Impl__obj::NONE;

int FlxGamepadInputID_Impl__obj::A;

int FlxGamepadInputID_Impl__obj::B;

int FlxGamepadInputID_Impl__obj::X;

int FlxGamepadInputID_Impl__obj::Y;

int FlxGamepadInputID_Impl__obj::LEFT_SHOULDER;

int FlxGamepadInputID_Impl__obj::RIGHT_SHOULDER;

int FlxGamepadInputID_Impl__obj::BACK;

int FlxGamepadInputID_Impl__obj::START;

int FlxGamepadInputID_Impl__obj::LEFT_STICK_CLICK;

int FlxGamepadInputID_Impl__obj::RIGHT_STICK_CLICK;

int FlxGamepadInputID_Impl__obj::GUIDE;

int FlxGamepadInputID_Impl__obj::DPAD_UP;

int FlxGamepadInputID_Impl__obj::DPAD_DOWN;

int FlxGamepadInputID_Impl__obj::DPAD_LEFT;

int FlxGamepadInputID_Impl__obj::DPAD_RIGHT;

int FlxGamepadInputID_Impl__obj::LEFT_TRIGGER_BUTTON;

int FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER_BUTTON;

int FlxGamepadInputID_Impl__obj::LEFT_TRIGGER;

int FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER;

int FlxGamepadInputID_Impl__obj::LEFT_ANALOG_STICK;

int FlxGamepadInputID_Impl__obj::RIGHT_ANALOG_STICK;

int FlxGamepadInputID_Impl__obj::DPAD;

int FlxGamepadInputID_Impl__obj::TILT_PITCH;

int FlxGamepadInputID_Impl__obj::TILT_ROLL;

int FlxGamepadInputID_Impl__obj::POINTER_X;

int FlxGamepadInputID_Impl__obj::POINTER_Y;

int FlxGamepadInputID_Impl__obj::EXTRA_0;

int FlxGamepadInputID_Impl__obj::EXTRA_1;

int FlxGamepadInputID_Impl__obj::EXTRA_2;

int FlxGamepadInputID_Impl__obj::EXTRA_3;

int FlxGamepadInputID_Impl__obj::LEFT_STICK_DIGITAL_UP;

int FlxGamepadInputID_Impl__obj::LEFT_STICK_DIGITAL_RIGHT;

int FlxGamepadInputID_Impl__obj::LEFT_STICK_DIGITAL_DOWN;

int FlxGamepadInputID_Impl__obj::LEFT_STICK_DIGITAL_LEFT;

int FlxGamepadInputID_Impl__obj::RIGHT_STICK_DIGITAL_UP;

int FlxGamepadInputID_Impl__obj::RIGHT_STICK_DIGITAL_RIGHT;

int FlxGamepadInputID_Impl__obj::RIGHT_STICK_DIGITAL_DOWN;

int FlxGamepadInputID_Impl__obj::RIGHT_STICK_DIGITAL_LEFT;

int FlxGamepadInputID_Impl__obj::fromString(::String s){
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_134_fromString)
HXLINE( 135)		s = s.toUpperCase();
HXLINE( 136)		if (::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap->exists(s)) {
HXLINE( 136)			return ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap->get_int(s);
            		}
            		else {
HXLINE( 136)			return -1;
            		}
HXDLIN( 136)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadInputID_Impl__obj,fromString,return )

::String FlxGamepadInputID_Impl__obj::toString(int this1){
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_142_toString)
HXDLIN( 142)		return ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::toStringMap->get_string(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadInputID_Impl__obj,toString,return )


FlxGamepadInputID_Impl__obj::FlxGamepadInputID_Impl__obj()
{
}

bool FlxGamepadInputID_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxGamepadInputID_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxGamepadInputID_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &FlxGamepadInputID_Impl__obj::fromStringMap,HX_("fromStringMap",81,6f,a2,3b)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &FlxGamepadInputID_Impl__obj::toStringMap,HX_("toStringMap",50,a5,9e,2e)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::ANY,HX_("ANY",cc,96,31,00)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::A,HX_("A",41,00,00,00)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::B,HX_("B",42,00,00,00)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::X,HX_("X",58,00,00,00)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::Y,HX_("Y",59,00,00,00)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::LEFT_SHOULDER,HX_("LEFT_SHOULDER",d8,b1,a9,01)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::RIGHT_SHOULDER,HX_("RIGHT_SHOULDER",83,9f,28,11)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::BACK,HX_("BACK",27,a2,d1,2b)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::START,HX_("START",42,ac,f9,01)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::LEFT_STICK_CLICK,HX_("LEFT_STICK_CLICK",21,9d,4a,bf)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::RIGHT_STICK_CLICK,HX_("RIGHT_STICK_CLICK",56,4c,25,0b)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::GUIDE,HX_("GUIDE",9c,f2,d9,19)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::DPAD_UP,HX_("DPAD_UP",6b,00,87,a2)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::DPAD_DOWN,HX_("DPAD_DOWN",72,1a,5b,87)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::DPAD_LEFT,HX_("DPAD_LEFT",17,2a,9d,8c)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::DPAD_RIGHT,HX_("DPAD_RIGHT",ac,b7,f4,f3)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::LEFT_TRIGGER_BUTTON,HX_("LEFT_TRIGGER_BUTTON",f1,61,33,1b)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER_BUTTON,HX_("RIGHT_TRIGGER_BUTTON",dc,61,f8,02)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::LEFT_TRIGGER,HX_("LEFT_TRIGGER",a0,31,c6,eb)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER,HX_("RIGHT_TRIGGER",55,e2,81,00)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::LEFT_ANALOG_STICK,HX_("LEFT_ANALOG_STICK",19,49,58,a5)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::RIGHT_ANALOG_STICK,HX_("RIGHT_ANALOG_STICK",44,e8,d6,b8)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::DPAD,HX_("DPAD",6f,6f,2f,2d)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::TILT_PITCH,HX_("TILT_PITCH",de,59,c1,1b)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::TILT_ROLL,HX_("TILT_ROLL",ff,5e,73,5e)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::POINTER_X,HX_("POINTER_X",f6,08,fa,28)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::POINTER_Y,HX_("POINTER_Y",f7,08,fa,28)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::EXTRA_0,HX_("EXTRA_0",61,a1,be,f8)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::EXTRA_1,HX_("EXTRA_1",62,a1,be,f8)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::EXTRA_2,HX_("EXTRA_2",63,a1,be,f8)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::EXTRA_3,HX_("EXTRA_3",64,a1,be,f8)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::LEFT_STICK_DIGITAL_UP,HX_("LEFT_STICK_DIGITAL_UP",29,d8,3b,d5)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::LEFT_STICK_DIGITAL_RIGHT,HX_("LEFT_STICK_DIGITAL_RIGHT",ae,ca,36,04)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::LEFT_STICK_DIGITAL_DOWN,HX_("LEFT_STICK_DIGITAL_DOWN",b0,dd,c3,72)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::LEFT_STICK_DIGITAL_LEFT,HX_("LEFT_STICK_DIGITAL_LEFT",55,ed,05,78)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::RIGHT_STICK_DIGITAL_UP,HX_("RIGHT_STICK_DIGITAL_UP",d4,e8,30,f8)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::RIGHT_STICK_DIGITAL_RIGHT,HX_("RIGHT_STICK_DIGITAL_RIGHT",e3,36,d3,6c)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::RIGHT_STICK_DIGITAL_DOWN,HX_("RIGHT_STICK_DIGITAL_DOWN",1b,af,9e,09)},
	{::hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::RIGHT_STICK_DIGITAL_LEFT,HX_("RIGHT_STICK_DIGITAL_LEFT",c0,be,e0,0e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxGamepadInputID_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::fromStringMap,"fromStringMap");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::toStringMap,"toStringMap");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::A,"A");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::B,"B");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::X,"X");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::Y,"Y");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_SHOULDER,"LEFT_SHOULDER");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_SHOULDER,"RIGHT_SHOULDER");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::START,"START");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_STICK_CLICK,"LEFT_STICK_CLICK");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_STICK_CLICK,"RIGHT_STICK_CLICK");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::GUIDE,"GUIDE");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD_UP,"DPAD_UP");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD_DOWN,"DPAD_DOWN");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD_LEFT,"DPAD_LEFT");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_TRIGGER_BUTTON,"LEFT_TRIGGER_BUTTON");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER_BUTTON,"RIGHT_TRIGGER_BUTTON");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD,"DPAD");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::TILT_PITCH,"TILT_PITCH");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::TILT_ROLL,"TILT_ROLL");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::POINTER_X,"POINTER_X");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::POINTER_Y,"POINTER_Y");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::EXTRA_0,"EXTRA_0");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::EXTRA_1,"EXTRA_1");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::EXTRA_2,"EXTRA_2");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::EXTRA_3,"EXTRA_3");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_STICK_DIGITAL_UP,"LEFT_STICK_DIGITAL_UP");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_STICK_DIGITAL_RIGHT,"LEFT_STICK_DIGITAL_RIGHT");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_STICK_DIGITAL_DOWN,"LEFT_STICK_DIGITAL_DOWN");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_STICK_DIGITAL_LEFT,"LEFT_STICK_DIGITAL_LEFT");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_STICK_DIGITAL_UP,"RIGHT_STICK_DIGITAL_UP");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_STICK_DIGITAL_RIGHT,"RIGHT_STICK_DIGITAL_RIGHT");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_STICK_DIGITAL_DOWN,"RIGHT_STICK_DIGITAL_DOWN");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_STICK_DIGITAL_LEFT,"RIGHT_STICK_DIGITAL_LEFT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxGamepadInputID_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::fromStringMap,"fromStringMap");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::toStringMap,"toStringMap");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::A,"A");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::B,"B");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::X,"X");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_SHOULDER,"LEFT_SHOULDER");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_SHOULDER,"RIGHT_SHOULDER");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::START,"START");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_STICK_CLICK,"LEFT_STICK_CLICK");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_STICK_CLICK,"RIGHT_STICK_CLICK");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::GUIDE,"GUIDE");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD_UP,"DPAD_UP");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD_DOWN,"DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD_LEFT,"DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_TRIGGER_BUTTON,"LEFT_TRIGGER_BUTTON");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER_BUTTON,"RIGHT_TRIGGER_BUTTON");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD,"DPAD");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::TILT_PITCH,"TILT_PITCH");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::TILT_ROLL,"TILT_ROLL");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::POINTER_X,"POINTER_X");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::POINTER_Y,"POINTER_Y");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::EXTRA_0,"EXTRA_0");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::EXTRA_1,"EXTRA_1");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::EXTRA_2,"EXTRA_2");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::EXTRA_3,"EXTRA_3");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_STICK_DIGITAL_UP,"LEFT_STICK_DIGITAL_UP");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_STICK_DIGITAL_RIGHT,"LEFT_STICK_DIGITAL_RIGHT");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_STICK_DIGITAL_DOWN,"LEFT_STICK_DIGITAL_DOWN");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_STICK_DIGITAL_LEFT,"LEFT_STICK_DIGITAL_LEFT");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_STICK_DIGITAL_UP,"RIGHT_STICK_DIGITAL_UP");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_STICK_DIGITAL_RIGHT,"RIGHT_STICK_DIGITAL_RIGHT");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_STICK_DIGITAL_DOWN,"RIGHT_STICK_DIGITAL_DOWN");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_STICK_DIGITAL_LEFT,"RIGHT_STICK_DIGITAL_LEFT");
};

#endif

::hx::Class FlxGamepadInputID_Impl__obj::__mClass;

static ::String FlxGamepadInputID_Impl__obj_sStaticFields[] = {
	HX_("fromStringMap",81,6f,a2,3b),
	HX_("toStringMap",50,a5,9e,2e),
	HX_("ANY",cc,96,31,00),
	HX_("NONE",b8,da,ca,33),
	HX_("A",41,00,00,00),
	HX_("B",42,00,00,00),
	HX_("X",58,00,00,00),
	HX_("Y",59,00,00,00),
	HX_("LEFT_SHOULDER",d8,b1,a9,01),
	HX_("RIGHT_SHOULDER",83,9f,28,11),
	HX_("BACK",27,a2,d1,2b),
	HX_("START",42,ac,f9,01),
	HX_("LEFT_STICK_CLICK",21,9d,4a,bf),
	HX_("RIGHT_STICK_CLICK",56,4c,25,0b),
	HX_("GUIDE",9c,f2,d9,19),
	HX_("DPAD_UP",6b,00,87,a2),
	HX_("DPAD_DOWN",72,1a,5b,87),
	HX_("DPAD_LEFT",17,2a,9d,8c),
	HX_("DPAD_RIGHT",ac,b7,f4,f3),
	HX_("LEFT_TRIGGER_BUTTON",f1,61,33,1b),
	HX_("RIGHT_TRIGGER_BUTTON",dc,61,f8,02),
	HX_("LEFT_TRIGGER",a0,31,c6,eb),
	HX_("RIGHT_TRIGGER",55,e2,81,00),
	HX_("LEFT_ANALOG_STICK",19,49,58,a5),
	HX_("RIGHT_ANALOG_STICK",44,e8,d6,b8),
	HX_("DPAD",6f,6f,2f,2d),
	HX_("TILT_PITCH",de,59,c1,1b),
	HX_("TILT_ROLL",ff,5e,73,5e),
	HX_("POINTER_X",f6,08,fa,28),
	HX_("POINTER_Y",f7,08,fa,28),
	HX_("EXTRA_0",61,a1,be,f8),
	HX_("EXTRA_1",62,a1,be,f8),
	HX_("EXTRA_2",63,a1,be,f8),
	HX_("EXTRA_3",64,a1,be,f8),
	HX_("LEFT_STICK_DIGITAL_UP",29,d8,3b,d5),
	HX_("LEFT_STICK_DIGITAL_RIGHT",ae,ca,36,04),
	HX_("LEFT_STICK_DIGITAL_DOWN",b0,dd,c3,72),
	HX_("LEFT_STICK_DIGITAL_LEFT",55,ed,05,78),
	HX_("RIGHT_STICK_DIGITAL_UP",d4,e8,30,f8),
	HX_("RIGHT_STICK_DIGITAL_RIGHT",e3,36,d3,6c),
	HX_("RIGHT_STICK_DIGITAL_DOWN",1b,af,9e,09),
	HX_("RIGHT_STICK_DIGITAL_LEFT",c0,be,e0,0e),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void FlxGamepadInputID_Impl__obj::__register()
{
	FlxGamepadInputID_Impl__obj _hx_dummy;
	FlxGamepadInputID_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_",c2,4c,79,15);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxGamepadInputID_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxGamepadInputID_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxGamepadInputID_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxGamepadInputID_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxGamepadInputID_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGamepadInputID_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGamepadInputID_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxGamepadInputID_Impl__obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::StringMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_97787d57481f8476_54_boot)
HXDLIN(  54)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  54)			_g->set(HX_("ANY",cc,96,31,00),-2);
HXDLIN(  54)			_g->set(HX_("A",41,00,00,00),0);
HXDLIN(  54)			_g->set(HX_("B",42,00,00,00),1);
HXDLIN(  54)			_g->set(HX_("X",58,00,00,00),2);
HXDLIN(  54)			_g->set(HX_("Y",59,00,00,00),3);
HXDLIN(  54)			_g->set(HX_("LEFT_SHOULDER",d8,b1,a9,01),4);
HXDLIN(  54)			_g->set(HX_("RIGHT_SHOULDER",83,9f,28,11),5);
HXDLIN(  54)			_g->set(HX_("BACK",27,a2,d1,2b),6);
HXDLIN(  54)			_g->set(HX_("START",42,ac,f9,01),7);
HXDLIN(  54)			_g->set(HX_("LEFT_STICK_CLICK",21,9d,4a,bf),8);
HXDLIN(  54)			_g->set(HX_("RIGHT_STICK_CLICK",56,4c,25,0b),9);
HXDLIN(  54)			_g->set(HX_("GUIDE",9c,f2,d9,19),10);
HXDLIN(  54)			_g->set(HX_("DPAD_UP",6b,00,87,a2),11);
HXDLIN(  54)			_g->set(HX_("DPAD_DOWN",72,1a,5b,87),12);
HXDLIN(  54)			_g->set(HX_("DPAD_LEFT",17,2a,9d,8c),13);
HXDLIN(  54)			_g->set(HX_("DPAD_RIGHT",ac,b7,f4,f3),14);
HXDLIN(  54)			_g->set(HX_("LEFT_TRIGGER_BUTTON",f1,61,33,1b),15);
HXDLIN(  54)			_g->set(HX_("RIGHT_TRIGGER_BUTTON",dc,61,f8,02),16);
HXDLIN(  54)			_g->set(HX_("LEFT_TRIGGER",a0,31,c6,eb),17);
HXDLIN(  54)			_g->set(HX_("RIGHT_TRIGGER",55,e2,81,00),18);
HXDLIN(  54)			_g->set(HX_("LEFT_ANALOG_STICK",19,49,58,a5),19);
HXDLIN(  54)			_g->set(HX_("RIGHT_ANALOG_STICK",44,e8,d6,b8),20);
HXDLIN(  54)			_g->set(HX_("DPAD",6f,6f,2f,2d),21);
HXDLIN(  54)			_g->set(HX_("TILT_PITCH",de,59,c1,1b),26);
HXDLIN(  54)			_g->set(HX_("TILT_ROLL",ff,5e,73,5e),27);
HXDLIN(  54)			_g->set(HX_("POINTER_X",f6,08,fa,28),28);
HXDLIN(  54)			_g->set(HX_("POINTER_Y",f7,08,fa,28),29);
HXDLIN(  54)			_g->set(HX_("EXTRA_0",61,a1,be,f8),30);
HXDLIN(  54)			_g->set(HX_("EXTRA_1",62,a1,be,f8),31);
HXDLIN(  54)			_g->set(HX_("EXTRA_2",63,a1,be,f8),32);
HXDLIN(  54)			_g->set(HX_("EXTRA_3",64,a1,be,f8),33);
HXDLIN(  54)			_g->set(HX_("LEFT_STICK_DIGITAL_UP",29,d8,3b,d5),34);
HXDLIN(  54)			_g->set(HX_("LEFT_STICK_DIGITAL_RIGHT",ae,ca,36,04),35);
HXDLIN(  54)			_g->set(HX_("LEFT_STICK_DIGITAL_DOWN",b0,dd,c3,72),36);
HXDLIN(  54)			_g->set(HX_("LEFT_STICK_DIGITAL_LEFT",55,ed,05,78),37);
HXDLIN(  54)			_g->set(HX_("RIGHT_STICK_DIGITAL_UP",d4,e8,30,f8),38);
HXDLIN(  54)			_g->set(HX_("RIGHT_STICK_DIGITAL_RIGHT",e3,36,d3,6c),39);
HXDLIN(  54)			_g->set(HX_("RIGHT_STICK_DIGITAL_DOWN",1b,af,9e,09),40);
HXDLIN(  54)			_g->set(HX_("RIGHT_STICK_DIGITAL_LEFT",c0,be,e0,0e),41);
HXDLIN(  54)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_97787d57481f8476_54_boot)
HXDLIN(  54)		fromStringMap = ( ( ::haxe::ds::StringMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::IntMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_97787d57481f8476_54_boot)
HXDLIN(  54)			 ::haxe::ds::IntMap _g =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXDLIN(  54)			_g->set(-2,HX_("ANY",cc,96,31,00));
HXDLIN(  54)			_g->set(0,HX_("A",41,00,00,00));
HXDLIN(  54)			_g->set(1,HX_("B",42,00,00,00));
HXDLIN(  54)			_g->set(2,HX_("X",58,00,00,00));
HXDLIN(  54)			_g->set(3,HX_("Y",59,00,00,00));
HXDLIN(  54)			_g->set(4,HX_("LEFT_SHOULDER",d8,b1,a9,01));
HXDLIN(  54)			_g->set(5,HX_("RIGHT_SHOULDER",83,9f,28,11));
HXDLIN(  54)			_g->set(6,HX_("BACK",27,a2,d1,2b));
HXDLIN(  54)			_g->set(7,HX_("START",42,ac,f9,01));
HXDLIN(  54)			_g->set(8,HX_("LEFT_STICK_CLICK",21,9d,4a,bf));
HXDLIN(  54)			_g->set(9,HX_("RIGHT_STICK_CLICK",56,4c,25,0b));
HXDLIN(  54)			_g->set(10,HX_("GUIDE",9c,f2,d9,19));
HXDLIN(  54)			_g->set(11,HX_("DPAD_UP",6b,00,87,a2));
HXDLIN(  54)			_g->set(12,HX_("DPAD_DOWN",72,1a,5b,87));
HXDLIN(  54)			_g->set(13,HX_("DPAD_LEFT",17,2a,9d,8c));
HXDLIN(  54)			_g->set(14,HX_("DPAD_RIGHT",ac,b7,f4,f3));
HXDLIN(  54)			_g->set(15,HX_("LEFT_TRIGGER_BUTTON",f1,61,33,1b));
HXDLIN(  54)			_g->set(16,HX_("RIGHT_TRIGGER_BUTTON",dc,61,f8,02));
HXDLIN(  54)			_g->set(17,HX_("LEFT_TRIGGER",a0,31,c6,eb));
HXDLIN(  54)			_g->set(18,HX_("RIGHT_TRIGGER",55,e2,81,00));
HXDLIN(  54)			_g->set(19,HX_("LEFT_ANALOG_STICK",19,49,58,a5));
HXDLIN(  54)			_g->set(20,HX_("RIGHT_ANALOG_STICK",44,e8,d6,b8));
HXDLIN(  54)			_g->set(21,HX_("DPAD",6f,6f,2f,2d));
HXDLIN(  54)			_g->set(26,HX_("TILT_PITCH",de,59,c1,1b));
HXDLIN(  54)			_g->set(27,HX_("TILT_ROLL",ff,5e,73,5e));
HXDLIN(  54)			_g->set(28,HX_("POINTER_X",f6,08,fa,28));
HXDLIN(  54)			_g->set(29,HX_("POINTER_Y",f7,08,fa,28));
HXDLIN(  54)			_g->set(30,HX_("EXTRA_0",61,a1,be,f8));
HXDLIN(  54)			_g->set(31,HX_("EXTRA_1",62,a1,be,f8));
HXDLIN(  54)			_g->set(32,HX_("EXTRA_2",63,a1,be,f8));
HXDLIN(  54)			_g->set(33,HX_("EXTRA_3",64,a1,be,f8));
HXDLIN(  54)			_g->set(34,HX_("LEFT_STICK_DIGITAL_UP",29,d8,3b,d5));
HXDLIN(  54)			_g->set(35,HX_("LEFT_STICK_DIGITAL_RIGHT",ae,ca,36,04));
HXDLIN(  54)			_g->set(36,HX_("LEFT_STICK_DIGITAL_DOWN",b0,dd,c3,72));
HXDLIN(  54)			_g->set(37,HX_("LEFT_STICK_DIGITAL_LEFT",55,ed,05,78));
HXDLIN(  54)			_g->set(38,HX_("RIGHT_STICK_DIGITAL_UP",d4,e8,30,f8));
HXDLIN(  54)			_g->set(39,HX_("RIGHT_STICK_DIGITAL_RIGHT",e3,36,d3,6c));
HXDLIN(  54)			_g->set(40,HX_("RIGHT_STICK_DIGITAL_DOWN",1b,af,9e,09));
HXDLIN(  54)			_g->set(41,HX_("RIGHT_STICK_DIGITAL_LEFT",c0,be,e0,0e));
HXDLIN(  54)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_97787d57481f8476_54_boot)
HXDLIN(  54)		toStringMap = ( ( ::haxe::ds::IntMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_18_boot)
HXDLIN(  18)		ANY = -2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_19_boot)
HXDLIN(  19)		NONE = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_22_boot)
HXDLIN(  22)		A = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_25_boot)
HXDLIN(  25)		B = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_28_boot)
HXDLIN(  28)		X = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_31_boot)
HXDLIN(  31)		Y = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_34_boot)
HXDLIN(  34)		LEFT_SHOULDER = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_37_boot)
HXDLIN(  37)		RIGHT_SHOULDER = 5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_40_boot)
HXDLIN(  40)		BACK = 6;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_43_boot)
HXDLIN(  43)		START = 7;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_46_boot)
HXDLIN(  46)		LEFT_STICK_CLICK = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_49_boot)
HXDLIN(  49)		RIGHT_STICK_CLICK = 9;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_52_boot)
HXDLIN(  52)		GUIDE = 10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_54_boot)
HXDLIN(  54)		DPAD_UP = 11;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_55_boot)
HXDLIN(  55)		DPAD_DOWN = 12;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_56_boot)
HXDLIN(  56)		DPAD_LEFT = 13;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_57_boot)
HXDLIN(  57)		DPAD_RIGHT = 14;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_60_boot)
HXDLIN(  60)		LEFT_TRIGGER_BUTTON = 15;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_63_boot)
HXDLIN(  63)		RIGHT_TRIGGER_BUTTON = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_65_boot)
HXDLIN(  65)		LEFT_TRIGGER = 17;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_66_boot)
HXDLIN(  66)		RIGHT_TRIGGER = 18;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_69_boot)
HXDLIN(  69)		LEFT_ANALOG_STICK = 19;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_72_boot)
HXDLIN(  72)		RIGHT_ANALOG_STICK = 20;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_75_boot)
HXDLIN(  75)		DPAD = 21;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_85_boot)
HXDLIN(  85)		TILT_PITCH = 26;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_88_boot)
HXDLIN(  88)		TILT_ROLL = 27;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_91_boot)
HXDLIN(  91)		POINTER_X = 28;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_94_boot)
HXDLIN(  94)		POINTER_Y = 29;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_97_boot)
HXDLIN(  97)		EXTRA_0 = 30;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_100_boot)
HXDLIN( 100)		EXTRA_1 = 31;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_103_boot)
HXDLIN( 103)		EXTRA_2 = 32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_106_boot)
HXDLIN( 106)		EXTRA_3 = 33;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_109_boot)
HXDLIN( 109)		LEFT_STICK_DIGITAL_UP = 34;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_112_boot)
HXDLIN( 112)		LEFT_STICK_DIGITAL_RIGHT = 35;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_115_boot)
HXDLIN( 115)		LEFT_STICK_DIGITAL_DOWN = 36;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_118_boot)
HXDLIN( 118)		LEFT_STICK_DIGITAL_LEFT = 37;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_121_boot)
HXDLIN( 121)		RIGHT_STICK_DIGITAL_UP = 38;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_124_boot)
HXDLIN( 124)		RIGHT_STICK_DIGITAL_RIGHT = 39;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_127_boot)
HXDLIN( 127)		RIGHT_STICK_DIGITAL_DOWN = 40;
            	}
{
            	HX_STACKFRAME(&_hx_pos_92ec9d1968218ffd_130_boot)
HXDLIN( 130)		RIGHT_STICK_DIGITAL_LEFT = 41;
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace _FlxGamepadInputID
