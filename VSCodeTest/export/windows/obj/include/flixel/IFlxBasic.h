#ifndef INCLUDED_flixel_IFlxBasic
#define INCLUDED_flixel_IFlxBasic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,IFlxBasic)

namespace flixel{


class HXCPP_CLASS_ATTRIBUTES IFlxBasic_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_set_active)(bool value); 
		static inline bool set_active( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::IFlxBasic_obj *>(_hx_.mPtr->_hx_getInterface(0x284cfea9)))->_hx_set_active)(value);
		}
		bool (::hx::Object :: *_hx_set_visible)(bool value); 
		static inline bool set_visible( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::IFlxBasic_obj *>(_hx_.mPtr->_hx_getInterface(0x284cfea9)))->_hx_set_visible)(value);
		}
		bool (::hx::Object :: *_hx_set_alive)(bool value); 
		static inline bool set_alive( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::IFlxBasic_obj *>(_hx_.mPtr->_hx_getInterface(0x284cfea9)))->_hx_set_alive)(value);
		}
		bool (::hx::Object :: *_hx_set_exists)(bool value); 
		static inline bool set_exists( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::IFlxBasic_obj *>(_hx_.mPtr->_hx_getInterface(0x284cfea9)))->_hx_set_exists)(value);
		}
		void (::hx::Object :: *_hx_draw)(); 
		static inline void draw( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::IFlxBasic_obj *>(_hx_.mPtr->_hx_getInterface(0x284cfea9)))->_hx_draw)();
		}
		void (::hx::Object :: *_hx_update)(Float elapsed); 
		static inline void update( ::Dynamic _hx_,Float elapsed) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::IFlxBasic_obj *>(_hx_.mPtr->_hx_getInterface(0x284cfea9)))->_hx_update)(elapsed);
		}
		void (::hx::Object :: *_hx_destroy)(); 
		static inline void destroy( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::IFlxBasic_obj *>(_hx_.mPtr->_hx_getInterface(0x284cfea9)))->_hx_destroy)();
		}
		void (::hx::Object :: *_hx_kill)(); 
		static inline void kill( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::IFlxBasic_obj *>(_hx_.mPtr->_hx_getInterface(0x284cfea9)))->_hx_kill)();
		}
		void (::hx::Object :: *_hx_revive)(); 
		static inline void revive( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::IFlxBasic_obj *>(_hx_.mPtr->_hx_getInterface(0x284cfea9)))->_hx_revive)();
		}
		::String (::hx::Object :: *_hx_toString)(); 
		static inline ::String toString( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::IFlxBasic_obj *>(_hx_.mPtr->_hx_getInterface(0x284cfea9)))->_hx_toString)();
		}
};

} // end namespace flixel

#endif /* INCLUDED_flixel_IFlxBasic */ 
