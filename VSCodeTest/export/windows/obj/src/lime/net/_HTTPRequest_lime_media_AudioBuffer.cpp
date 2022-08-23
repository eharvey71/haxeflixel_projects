#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_lime_media_AudioBuffer
#include <lime/net/_HTTPRequest_lime_media_AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6031011c5de7d4fd_134_new,"lime.net._HTTPRequest_lime_media_AudioBuffer","new",0xe9102f50,"lime.net._HTTPRequest_lime_media_AudioBuffer.new","lime/_internal/macros/HTTPRequestMacro.hx",134,0xf82711de)
HX_LOCAL_STACK_FRAME(_hx_pos_66fce3bdaaf914c3_295_fromBytes,"lime.net._HTTPRequest_lime_media_AudioBuffer","fromBytes",0x6d972591,"lime.net._HTTPRequest_lime_media_AudioBuffer.fromBytes","lime/media/AudioBuffer.hx",295,0xf6fabaad)
namespace lime{
namespace net{

void _HTTPRequest_lime_media_AudioBuffer_obj::__construct(::String uri){
            	HX_STACKFRAME(&_hx_pos_6031011c5de7d4fd_134_new)
HXDLIN( 134)		super::__construct(uri);
            	}

Dynamic _HTTPRequest_lime_media_AudioBuffer_obj::__CreateEmpty() { return new _HTTPRequest_lime_media_AudioBuffer_obj; }

void *_HTTPRequest_lime_media_AudioBuffer_obj::_hx_vtable = 0;

Dynamic _HTTPRequest_lime_media_AudioBuffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< _HTTPRequest_lime_media_AudioBuffer_obj > _hx_result = new _HTTPRequest_lime_media_AudioBuffer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool _HTTPRequest_lime_media_AudioBuffer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x09b24b15) {
		if (inClassId<=(int)0x01038184) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x01038184;
		} else {
			return inClassId==(int)0x09b24b15;
		}
	} else {
		return inClassId==(int)0x7f4deb50;
	}
}

 ::Dynamic _HTTPRequest_lime_media_AudioBuffer_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_66fce3bdaaf914c3_295_fromBytes)
HXDLIN( 295)		return ::lime::media::AudioBuffer_obj::fromBytes(bytes);
            	}



::hx::ObjectPtr< _HTTPRequest_lime_media_AudioBuffer_obj > _HTTPRequest_lime_media_AudioBuffer_obj::__new(::String uri) {
	::hx::ObjectPtr< _HTTPRequest_lime_media_AudioBuffer_obj > __this = new _HTTPRequest_lime_media_AudioBuffer_obj();
	__this->__construct(uri);
	return __this;
}

::hx::ObjectPtr< _HTTPRequest_lime_media_AudioBuffer_obj > _HTTPRequest_lime_media_AudioBuffer_obj::__alloc(::hx::Ctx *_hx_ctx,::String uri) {
	_HTTPRequest_lime_media_AudioBuffer_obj *__this = (_HTTPRequest_lime_media_AudioBuffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(_HTTPRequest_lime_media_AudioBuffer_obj), true, "lime.net._HTTPRequest_lime_media_AudioBuffer"));
	*(void **)__this = _HTTPRequest_lime_media_AudioBuffer_obj::_hx_vtable;
	__this->__construct(uri);
	return __this;
}

_HTTPRequest_lime_media_AudioBuffer_obj::_HTTPRequest_lime_media_AudioBuffer_obj()
{
}

::hx::Val _HTTPRequest_lime_media_AudioBuffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return ::hx::Val( fromBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *_HTTPRequest_lime_media_AudioBuffer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *_HTTPRequest_lime_media_AudioBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String _HTTPRequest_lime_media_AudioBuffer_obj_sMemberFields[] = {
	HX_("fromBytes",a1,f2,20,72),
	::String(null()) };

::hx::Class _HTTPRequest_lime_media_AudioBuffer_obj::__mClass;

void _HTTPRequest_lime_media_AudioBuffer_obj::__register()
{
	_HTTPRequest_lime_media_AudioBuffer_obj _hx_dummy;
	_HTTPRequest_lime_media_AudioBuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.net._HTTPRequest_lime_media_AudioBuffer",5e,87,5a,dd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(_HTTPRequest_lime_media_AudioBuffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< _HTTPRequest_lime_media_AudioBuffer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = _HTTPRequest_lime_media_AudioBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = _HTTPRequest_lime_media_AudioBuffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace net
