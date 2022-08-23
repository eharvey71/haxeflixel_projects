#ifndef INCLUDED_lime_ui_MouseCursor
#define INCLUDED_lime_ui_MouseCursor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,ui,MouseCursor)
namespace lime{
namespace ui{


class MouseCursor_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef MouseCursor_obj OBJ_;

	public:
		MouseCursor_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("lime.ui.MouseCursor",da,7e,bc,47); }
		::String __ToString() const { return HX_("MouseCursor.",13,09,4c,76) + _hx_tag; }

		static ::lime::ui::MouseCursor ARROW;
		static inline ::lime::ui::MouseCursor ARROW_dyn() { return ARROW; }
		static ::lime::ui::MouseCursor CROSSHAIR;
		static inline ::lime::ui::MouseCursor CROSSHAIR_dyn() { return CROSSHAIR; }
		static ::lime::ui::MouseCursor CUSTOM;
		static inline ::lime::ui::MouseCursor CUSTOM_dyn() { return CUSTOM; }
		static ::lime::ui::MouseCursor DEFAULT;
		static inline ::lime::ui::MouseCursor DEFAULT_dyn() { return DEFAULT; }
		static ::lime::ui::MouseCursor MOVE;
		static inline ::lime::ui::MouseCursor MOVE_dyn() { return MOVE; }
		static ::lime::ui::MouseCursor POINTER;
		static inline ::lime::ui::MouseCursor POINTER_dyn() { return POINTER; }
		static ::lime::ui::MouseCursor RESIZE_NESW;
		static inline ::lime::ui::MouseCursor RESIZE_NESW_dyn() { return RESIZE_NESW; }
		static ::lime::ui::MouseCursor RESIZE_NS;
		static inline ::lime::ui::MouseCursor RESIZE_NS_dyn() { return RESIZE_NS; }
		static ::lime::ui::MouseCursor RESIZE_NWSE;
		static inline ::lime::ui::MouseCursor RESIZE_NWSE_dyn() { return RESIZE_NWSE; }
		static ::lime::ui::MouseCursor RESIZE_WE;
		static inline ::lime::ui::MouseCursor RESIZE_WE_dyn() { return RESIZE_WE; }
		static ::lime::ui::MouseCursor TEXT;
		static inline ::lime::ui::MouseCursor TEXT_dyn() { return TEXT; }
		static ::lime::ui::MouseCursor WAIT;
		static inline ::lime::ui::MouseCursor WAIT_dyn() { return WAIT; }
		static ::lime::ui::MouseCursor WAIT_ARROW;
		static inline ::lime::ui::MouseCursor WAIT_ARROW_dyn() { return WAIT_ARROW; }
};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_MouseCursor */ 
