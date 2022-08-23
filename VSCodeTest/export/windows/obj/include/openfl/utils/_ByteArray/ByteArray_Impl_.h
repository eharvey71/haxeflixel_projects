#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#define INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,utils,BytePointerData)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,utils,_ByteArray,ByteArray_Impl_)

namespace openfl{
namespace utils{
namespace _ByteArray{


class HXCPP_CLASS_ATTRIBUTES ByteArray_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ByteArray_Impl__obj OBJ_;
		ByteArray_Impl__obj();

	public:
		enum { _hx_ClassId = 0x63baca82 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.utils._ByteArray.ByteArray_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.utils._ByteArray.ByteArray_Impl_"); }

		inline static ::hx::ObjectPtr< ByteArray_Impl__obj > __new() {
			::hx::ObjectPtr< ByteArray_Impl__obj > __this = new ByteArray_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ByteArray_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			ByteArray_Impl__obj *__this = (ByteArray_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ByteArray_Impl__obj), false, "openfl.utils._ByteArray.ByteArray_Impl_"));
			*(void **)__this = ByteArray_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ByteArray_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ByteArray_Impl_",b1,b0,f9,e1); }

		static void __boot();
		static  ::lime::utils::BytePointerData _hx___bytePointer;
		static  ::openfl::utils::ByteArrayData _new(::hx::Null< int >  length);
		static ::Dynamic _new_dyn();

		static void clear( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic clear_dyn();

		static void compress( ::openfl::utils::ByteArrayData this1, ::Dynamic algorithm);
		static ::Dynamic compress_dyn();

		static void deflate( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic deflate_dyn();

		static  ::openfl::utils::ByteArrayData fromArrayBuffer( ::haxe::io::Bytes buffer);
		static ::Dynamic fromArrayBuffer_dyn();

		static  ::openfl::utils::ByteArrayData fromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic fromBytes_dyn();

		static  ::openfl::utils::ByteArrayData fromBytesData(::Array< unsigned char > bytesData);
		static ::Dynamic fromBytesData_dyn();

		static  ::openfl::utils::ByteArrayData fromFile(::String path);
		static ::Dynamic fromFile_dyn();

		static  ::openfl::utils::ByteArrayData fromLimeBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic fromLimeBytes_dyn();

		static int get( ::openfl::utils::ByteArrayData this1,int index);
		static ::Dynamic get_dyn();

		static void inflate( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic inflate_dyn();

		static  ::lime::app::Future loadFromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic loadFromBytes_dyn();

		static  ::lime::app::Future loadFromFile(::String path);
		static ::Dynamic loadFromFile_dyn();

		static bool readBoolean( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic readBoolean_dyn();

		static int readByte( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic readByte_dyn();

		static void readBytes( ::openfl::utils::ByteArrayData this1, ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  offset,::hx::Null< int >  length);
		static ::Dynamic readBytes_dyn();

		static Float readDouble( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic readDouble_dyn();

		static Float readFloat( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic readFloat_dyn();

		static int readInt( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic readInt_dyn();

		static ::String readMultiByte( ::openfl::utils::ByteArrayData this1,int length,::String charSet);
		static ::Dynamic readMultiByte_dyn();

		static  ::Dynamic readObject( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic readObject_dyn();

		static int readShort( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic readShort_dyn();

		static ::String readUTF( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic readUTF_dyn();

		static ::String readUTFBytes( ::openfl::utils::ByteArrayData this1,int length);
		static ::Dynamic readUTFBytes_dyn();

		static int readUnsignedByte( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic readUnsignedByte_dyn();

		static int readUnsignedInt( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic readUnsignedInt_dyn();

		static int readUnsignedShort( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic readUnsignedShort_dyn();

		static int set( ::openfl::utils::ByteArrayData this1,int index,int value);
		static ::Dynamic set_dyn();

		static  ::haxe::io::Bytes toArrayBuffer( ::openfl::utils::ByteArrayData byteArray);
		static ::Dynamic toArrayBuffer_dyn();

		static  ::lime::utils::BytePointerData toBytePointer( ::openfl::utils::ByteArrayData byteArray);
		static ::Dynamic toBytePointer_dyn();

		static Float toDataPointer( ::openfl::utils::ByteArrayData byteArray);
		static ::Dynamic toDataPointer_dyn();

		static  ::haxe::io::Bytes toBytes( ::openfl::utils::ByteArrayData byteArray);
		static ::Dynamic toBytes_dyn();

		static ::Array< unsigned char > toBytesData( ::openfl::utils::ByteArrayData byteArray);
		static ::Dynamic toBytesData_dyn();

		static  ::haxe::io::Bytes toLimeBytes( ::openfl::utils::ByteArrayData byteArray);
		static ::Dynamic toLimeBytes_dyn();

		static ::String toString( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic toString_dyn();

		static void uncompress( ::openfl::utils::ByteArrayData this1, ::Dynamic algorithm);
		static ::Dynamic uncompress_dyn();

		static void writeBoolean( ::openfl::utils::ByteArrayData this1,bool value);
		static ::Dynamic writeBoolean_dyn();

		static void writeByte( ::openfl::utils::ByteArrayData this1,int value);
		static ::Dynamic writeByte_dyn();

		static void writeBytes( ::openfl::utils::ByteArrayData this1, ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  offset,::hx::Null< int >  length);
		static ::Dynamic writeBytes_dyn();

		static void writeDouble( ::openfl::utils::ByteArrayData this1,Float value);
		static ::Dynamic writeDouble_dyn();

		static void writeFloat( ::openfl::utils::ByteArrayData this1,Float value);
		static ::Dynamic writeFloat_dyn();

		static void writeInt( ::openfl::utils::ByteArrayData this1,int value);
		static ::Dynamic writeInt_dyn();

		static void writeMultiByte( ::openfl::utils::ByteArrayData this1,::String value,::String charSet);
		static ::Dynamic writeMultiByte_dyn();

		static void writeObject( ::openfl::utils::ByteArrayData this1, ::Dynamic object);
		static ::Dynamic writeObject_dyn();

		static void writeShort( ::openfl::utils::ByteArrayData this1,int value);
		static ::Dynamic writeShort_dyn();

		static void writeUTF( ::openfl::utils::ByteArrayData this1,::String value);
		static ::Dynamic writeUTF_dyn();

		static void writeUTFBytes( ::openfl::utils::ByteArrayData this1,::String value);
		static ::Dynamic writeUTFBytes_dyn();

		static void writeUnsignedInt( ::openfl::utils::ByteArrayData this1,int value);
		static ::Dynamic writeUnsignedInt_dyn();

		static int get_bytesAvailable( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic get_bytesAvailable_dyn();

		static  ::Dynamic get_defaultEndian();
		static ::Dynamic get_defaultEndian_dyn();

		static  ::Dynamic set_defaultEndian( ::Dynamic value);
		static ::Dynamic set_defaultEndian_dyn();

		static int get_defaultObjectEncoding();
		static ::Dynamic get_defaultObjectEncoding_dyn();

		static int set_defaultObjectEncoding(int value);
		static ::Dynamic set_defaultObjectEncoding_dyn();

		static  ::Dynamic get_endian( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic get_endian_dyn();

		static  ::Dynamic set_endian( ::openfl::utils::ByteArrayData this1, ::Dynamic value);
		static ::Dynamic set_endian_dyn();

		static int get_length( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic get_length_dyn();

		static int set_length( ::openfl::utils::ByteArrayData this1,int value);
		static ::Dynamic set_length_dyn();

		static int get_objectEncoding( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic get_objectEncoding_dyn();

		static int set_objectEncoding( ::openfl::utils::ByteArrayData this1,int value);
		static ::Dynamic set_objectEncoding_dyn();

		static int get_position( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic get_position_dyn();

		static int set_position( ::openfl::utils::ByteArrayData this1,int value);
		static ::Dynamic set_position_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _ByteArray

#endif /* INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_ */ 
