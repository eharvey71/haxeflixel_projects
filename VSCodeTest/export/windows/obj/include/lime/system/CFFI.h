#ifndef INCLUDED_lime_system_CFFI
#define INCLUDED_lime_system_CFFI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,_hx_system,CFFI)

namespace lime{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES CFFI_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CFFI_obj OBJ_;
		CFFI_obj();

	public:
		enum { _hx_ClassId = 0x277adf4e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.system.CFFI")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.system.CFFI"); }

		inline static ::hx::ObjectPtr< CFFI_obj > __new() {
			::hx::ObjectPtr< CFFI_obj > __this = new CFFI_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CFFI_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CFFI_obj *__this = (CFFI_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CFFI_obj), false, "lime.system.CFFI"));
			*(void **)__this = CFFI_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CFFI_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		static void __init__();

		::String __ToString() const { return HX_("CFFI",a6,a6,7e,2c); }

		static void __boot();
		static  ::haxe::ds::StringMap _hx___moduleNames;
		static bool available;
		static bool enabled;
		static  ::Dynamic load(::String library,::String method,::hx::Null< int >  args,::hx::Null< bool >  lazy);
		static ::Dynamic load_dyn();

		static ::String _hx___findHaxelib(::String library);
		static ::Dynamic _hx___findHaxelib_dyn();

		static void _hx___loaderTrace(::String message);
		static ::Dynamic _hx___loaderTrace_dyn();

		static ::String _hx___sysName();
		static ::Dynamic _hx___sysName_dyn();

		static  ::Dynamic _hx___tryLoad(::String name,::String library,::String func,int args);
		static ::Dynamic _hx___tryLoad_dyn();

};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_CFFI */ 
