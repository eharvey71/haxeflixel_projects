#ifndef INCLUDED_hscript_ModuleDecl
#define INCLUDED_hscript_ModuleDecl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscript,ModuleDecl)
namespace hscript{


class ModuleDecl_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ModuleDecl_obj OBJ_;

	public:
		ModuleDecl_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hscript.ModuleDecl",71,f3,29,25); }
		::String __ToString() const { return HX_("ModuleDecl.",18,70,f2,04) + _hx_tag; }

		static ::hscript::ModuleDecl DClass( ::Dynamic c);
		static ::Dynamic DClass_dyn();
		static ::hscript::ModuleDecl DImport(::Array< ::String > path, ::Dynamic everything);
		static ::Dynamic DImport_dyn();
		static ::hscript::ModuleDecl DPackage(::Array< ::String > path);
		static ::Dynamic DPackage_dyn();
		static ::hscript::ModuleDecl DTypedef( ::Dynamic c);
		static ::Dynamic DTypedef_dyn();
};

} // end namespace hscript

#endif /* INCLUDED_hscript_ModuleDecl */ 
