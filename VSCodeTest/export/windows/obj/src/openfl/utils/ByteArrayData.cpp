#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_FPHelper
#include <haxe/io/FPHelper.h>
#endif
#ifndef INCLUDED_lime_system_Endian
#include <lime/system/Endian.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_CompressionAlgorithm
#include <lime/utils/CompressionAlgorithm.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
#ifndef INCLUDED_openfl_errors_EOFError
#include <openfl/errors/EOFError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IOError
#include <openfl/errors/IOError.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1109_new,"openfl.utils.ByteArrayData","new",0x36383a32,"openfl.utils.ByteArrayData.new","openfl/utils/ByteArray.hx",1109,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1135_clear,"openfl.utils.ByteArrayData","clear",0x0f8b73df,"openfl.utils.ByteArrayData.clear","openfl/utils/ByteArray.hx",1135,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1141_compress,"openfl.utils.ByteArrayData","compress",0xe3300490,"openfl.utils.ByteArrayData.compress","openfl/utils/ByteArray.hx",1141,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1189_deflate,"openfl.utils.ByteArrayData","deflate",0x97ecc63d,"openfl.utils.ByteArrayData.deflate","openfl/utils/ByteArray.hx",1189,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1208_inflate,"openfl.utils.ByteArrayData","inflate",0x010e5759,"openfl.utils.ByteArrayData.inflate","openfl/utils/ByteArray.hx",1208,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1225_readBoolean,"openfl.utils.ByteArrayData","readBoolean",0x98e809c4,"openfl.utils.ByteArrayData.readBoolean","openfl/utils/ByteArray.hx",1225,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1237_readByte,"openfl.utils.ByteArrayData","readByte",0xc88bb66c,"openfl.utils.ByteArrayData.readByte","openfl/utils/ByteArray.hx",1237,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1251_readBytes,"openfl.utils.ByteArrayData","readBytes",0xb1b3e887,"openfl.utils.ByteArrayData.readBytes","openfl/utils/ByteArray.hx",1251,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1270_readDouble,"openfl.utils.ByteArrayData","readDouble",0xd7136375,"openfl.utils.ByteArrayData.readDouble","openfl/utils/ByteArray.hx",1270,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1292_readFloat,"openfl.utils.ByteArrayData","readFloat",0xf6b2a5b8,"openfl.utils.ByteArrayData.readFloat","openfl/utils/ByteArray.hx",1292,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1310_readInt,"openfl.utils.ByteArrayData","readInt",0xf7bc6e0b,"openfl.utils.ByteArrayData.readInt","openfl/utils/ByteArray.hx",1310,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1328_readMultiByte,"openfl.utils.ByteArrayData","readMultiByte",0x011f243d,"openfl.utils.ByteArrayData.readMultiByte","openfl/utils/ByteArray.hx",1328,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1333_readObject,"openfl.utils.ByteArrayData","readObject",0xb987b723,"openfl.utils.ByteArrayData.readObject","openfl/utils/ByteArray.hx",1333,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1447_readShort,"openfl.utils.ByteArrayData","readShort",0x70436498,"openfl.utils.ByteArrayData.readShort","openfl/utils/ByteArray.hx",1447,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1474_readUnsignedByte,"openfl.utils.ByteArrayData","readUnsignedByte",0x50ca6601,"openfl.utils.ByteArrayData.readUnsignedByte","openfl/utils/ByteArray.hx",1474,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1486_readUnsignedInt,"openfl.utils.ByteArrayData","readUnsignedInt",0xac948816,"openfl.utils.ByteArrayData.readUnsignedInt","openfl/utils/ByteArray.hx",1486,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1503_readUnsignedShort,"openfl.utils.ByteArrayData","readUnsignedShort",0x1ede5763,"openfl.utils.ByteArrayData.readUnsignedShort","openfl/utils/ByteArray.hx",1503,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1518_readUTF,"openfl.utils.ByteArrayData","readUTF",0xf7c57243,"openfl.utils.ByteArrayData.readUTF","openfl/utils/ByteArray.hx",1518,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1524_readUTFBytes,"openfl.utils.ByteArrayData","readUTFBytes",0x87ebf328,"openfl.utils.ByteArrayData.readUTFBytes","openfl/utils/ByteArray.hx",1524,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1536_uncompress,"openfl.utils.ByteArrayData","uncompress",0xb44f8369,"openfl.utils.ByteArrayData.uncompress","openfl/utils/ByteArray.hx",1536,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1585_writeBoolean,"openfl.utils.ByteArrayData","writeBoolean",0x790a5b77,"openfl.utils.ByteArrayData.writeBoolean","openfl/utils/ByteArray.hx",1585,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1589_writeByte,"openfl.utils.ByteArrayData","writeByte",0x6d0ba6d9,"openfl.utils.ByteArrayData.writeByte","openfl/utils/ByteArray.hx",1589,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1595_writeBytes,"openfl.utils.ByteArrayData","writeBytes",0xfd26577a,"openfl.utils.ByteArrayData.writeBytes","openfl/utils/ByteArray.hx",1595,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1606_writeDouble,"openfl.utils.ByteArrayData","writeDouble",0x8fc20922,"openfl.utils.ByteArrayData.writeDouble","openfl/utils/ByteArray.hx",1606,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1623_writeFloat,"openfl.utils.ByteArrayData","writeFloat",0x422514ab,"openfl.utils.ByteArrayData.writeFloat","openfl/utils/ByteArray.hx",1623,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1637_writeInt,"openfl.utils.ByteArrayData","writeInt",0x83612a3e,"openfl.utils.ByteArrayData.writeInt","openfl/utils/ByteArray.hx",1637,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1658_writeMultiByte,"openfl.utils.ByteArrayData","writeMultiByte",0xebbf88b0,"openfl.utils.ByteArrayData.writeMultiByte","openfl/utils/ByteArray.hx",1658,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1663_writeObject,"openfl.utils.ByteArrayData","writeObject",0x72365cd0,"openfl.utils.ByteArrayData.writeObject","openfl/utils/ByteArray.hx",1663,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1695_writeShort,"openfl.utils.ByteArrayData","writeShort",0xbbb5d38b,"openfl.utils.ByteArrayData.writeShort","openfl/utils/ByteArray.hx",1695,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1712_writeUnsignedInt,"openfl.utils.ByteArrayData","writeUnsignedInt",0xcb6d2f49,"openfl.utils.ByteArrayData.writeUnsignedInt","openfl/utils/ByteArray.hx",1712,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1716_writeUTF,"openfl.utils.ByteArrayData","writeUTF",0x836a2e76,"openfl.utils.ByteArrayData.writeUTF","openfl/utils/ByteArray.hx",1716,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1724_writeUTFBytes,"openfl.utils.ByteArrayData","writeUTFBytes",0xc5d11e15,"openfl.utils.ByteArrayData.writeUTFBytes","openfl/utils/ByteArray.hx",1724,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1730___fromBytes,"openfl.utils.ByteArrayData","__fromBytes",0x684ac753,"openfl.utils.ByteArrayData.__fromBytes","openfl/utils/ByteArray.hx",1730,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1740___resize,"openfl.utils.ByteArrayData","__resize",0x101b8202,"openfl.utils.ByteArrayData.__resize","openfl/utils/ByteArray.hx",1740,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1776___setData,"openfl.utils.ByteArrayData","__setData",0xac6a7b1e,"openfl.utils.ByteArrayData.__setData","openfl/utils/ByteArray.hx",1776,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1797_get_bytesAvailable,"openfl.utils.ByteArrayData","get_bytesAvailable",0x68329f15,"openfl.utils.ByteArrayData.get_bytesAvailable","openfl/utils/ByteArray.hx",1797,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1830_get_endian,"openfl.utils.ByteArrayData","get_endian",0x95dc5cd2,"openfl.utils.ByteArrayData.get_endian","openfl/utils/ByteArray.hx",1830,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1835_set_endian,"openfl.utils.ByteArrayData","set_endian",0x9959fb46,"openfl.utils.ByteArrayData.set_endian","openfl/utils/ByteArray.hx",1835,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1200_fromBytes,"openfl.utils.ByteArrayData","fromBytes",0x955585f3,"openfl.utils.ByteArrayData.fromBytes","openfl/utils/ByteArray.hx",1200,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1801_get_defaultEndian,"openfl.utils.ByteArrayData","get_defaultEndian",0xa344ace5,"openfl.utils.ByteArrayData.get_defaultEndian","openfl/utils/ByteArray.hx",1801,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1825_set_defaultEndian,"openfl.utils.ByteArrayData","set_defaultEndian",0xc6b284f1,"openfl.utils.ByteArrayData.set_defaultEndian","openfl/utils/ByteArray.hx",1825,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1065_boot,"openfl.utils.ByteArrayData","boot",0x3313b220,"openfl.utils.ByteArrayData.boot","openfl/utils/ByteArray.hx",1065,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1068_boot,"openfl.utils.ByteArrayData","boot",0x3313b220,"openfl.utils.ByteArrayData.boot","openfl/utils/ByteArray.hx",1068,0xaa5cee4a)
HX_LOCAL_STACK_FRAME(_hx_pos_dd5cdbe7a8b93fcc_1069_boot,"openfl.utils.ByteArrayData","boot",0x3313b220,"openfl.utils.ByteArrayData.boot","openfl/utils/ByteArray.hx",1069,0xaa5cee4a)
namespace openfl{
namespace utils{

void ByteArrayData_obj::__construct(::hx::Null< int >  __o_length){
            		int length = __o_length.Default(0);
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1109_new)
HXLINE(1110)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(length);
HXLINE(1113)		if ((length > 0)) {
HXLINE(1115)			bytes->fill(0,length,0);
            		}
HXLINE(1124)		super::__construct(length,bytes->b);
HXLINE(1127)		this->__length = length;
HXLINE(1129)		{
HXLINE(1129)			if (::hx::IsNull( ::openfl::utils::ByteArrayData_obj::_hx___defaultEndian )) {
HXLINE(1129)				if (::hx::IsPointerEq( ::lime::_hx_system::System_obj::get_endianness(),::lime::_hx_system::Endian_obj::_hx_LITTLE_ENDIAN_dyn() )) {
HXLINE(1129)					::openfl::utils::ByteArrayData_obj::_hx___defaultEndian = 1;
            				}
            				else {
HXLINE(1129)					::openfl::utils::ByteArrayData_obj::_hx___defaultEndian = 0;
            				}
            			}
HXDLIN(1129)			this->_hx___endian = ::openfl::utils::ByteArrayData_obj::_hx___defaultEndian;
            		}
HXLINE(1130)		this->objectEncoding = ::openfl::utils::ByteArrayData_obj::defaultObjectEncoding;
HXLINE(1131)		this->position = 0;
            	}

Dynamic ByteArrayData_obj::__CreateEmpty() { return new ByteArrayData_obj; }

void *ByteArrayData_obj::_hx_vtable = 0;

Dynamic ByteArrayData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ByteArrayData_obj > _hx_result = new ByteArrayData_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ByteArrayData_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12ff8ebe) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x12ff8ebe;
	} else {
		return inClassId==(int)0x195c64b7;
	}
}

static ::openfl::utils::IDataOutput_obj _hx_openfl_utils_ByteArrayData__hx_openfl_utils_IDataOutput= {
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::get_endian,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::openfl::utils::ByteArrayData_obj::set_endian,
	( void (::hx::Object::*)(bool))&::openfl::utils::ByteArrayData_obj::writeBoolean,
	( void (::hx::Object::*)(int))&::openfl::utils::ByteArrayData_obj::writeByte,
	( void (::hx::Object::*)( ::openfl::utils::ByteArrayData,::hx::Null< int > ,::hx::Null< int > ))&::openfl::utils::ByteArrayData_obj::writeBytes,
	( void (::hx::Object::*)(Float))&::openfl::utils::ByteArrayData_obj::writeDouble,
	( void (::hx::Object::*)(Float))&::openfl::utils::ByteArrayData_obj::writeFloat,
	( void (::hx::Object::*)(int))&::openfl::utils::ByteArrayData_obj::writeInt,
	( void (::hx::Object::*)(::String,::String))&::openfl::utils::ByteArrayData_obj::writeMultiByte,
	( void (::hx::Object::*)( ::Dynamic))&::openfl::utils::ByteArrayData_obj::writeObject,
	( void (::hx::Object::*)(int))&::openfl::utils::ByteArrayData_obj::writeShort,
	( void (::hx::Object::*)(int))&::openfl::utils::ByteArrayData_obj::writeUnsignedInt,
	( void (::hx::Object::*)(::String))&::openfl::utils::ByteArrayData_obj::writeUTF,
	( void (::hx::Object::*)(::String))&::openfl::utils::ByteArrayData_obj::writeUTFBytes,
};

static ::openfl::utils::IDataInput_obj _hx_openfl_utils_ByteArrayData__hx_openfl_utils_IDataInput= {
	( int (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::get_bytesAvailable,
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::get_endian,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::openfl::utils::ByteArrayData_obj::set_endian,
	( bool (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readBoolean,
	( int (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readByte,
	( void (::hx::Object::*)( ::openfl::utils::ByteArrayData,::hx::Null< int > ,::hx::Null< int > ))&::openfl::utils::ByteArrayData_obj::readBytes,
	( Float (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readDouble,
	( Float (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readFloat,
	( int (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readInt,
	( ::String (::hx::Object::*)(int,::String))&::openfl::utils::ByteArrayData_obj::readMultiByte,
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readObject,
	( int (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readShort,
	( int (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readUnsignedByte,
	( int (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readUnsignedInt,
	( int (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readUnsignedShort,
	( ::String (::hx::Object::*)())&::openfl::utils::ByteArrayData_obj::readUTF,
	( ::String (::hx::Object::*)(int))&::openfl::utils::ByteArrayData_obj::readUTFBytes,
};

void *ByteArrayData_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x948d2d33: return &_hx_openfl_utils_ByteArrayData__hx_openfl_utils_IDataOutput;
		case (int)0xbeb9f218: return &_hx_openfl_utils_ByteArrayData__hx_openfl_utils_IDataInput;
	}
	return super::_hx_getInterface(inHash);
}

void ByteArrayData_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1135_clear)
HXLINE(1136)		this->length = 0;
HXLINE(1137)		this->position = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,clear,(void))

void ByteArrayData_obj::compress( ::Dynamic __o_algorithm){
            		 ::Dynamic algorithm = __o_algorithm;
            		if (::hx::IsNull(__o_algorithm)) algorithm = 2;
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1141_compress)
HXLINE(1163)		 ::haxe::io::Bytes limeBytes = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1165)		 ::haxe::io::Bytes bytes;
HXDLIN(1165)		 ::Dynamic _hx_switch_0 = algorithm;
            		if (  (_hx_switch_0==0) ){
HXLINE(1165)			bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::compress(limeBytes,::lime::utils::CompressionAlgorithm_obj::DEFLATE_dyn());
HXDLIN(1165)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(1165)			bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::compress(limeBytes,::lime::utils::CompressionAlgorithm_obj::LZMA_dyn());
HXDLIN(1165)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(1165)			bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::compress(limeBytes,::lime::utils::CompressionAlgorithm_obj::ZLIB_dyn());
            		}
            		_hx_goto_2:;
HXLINE(1172)		if (::hx::IsNotNull( bytes )) {
HXLINE(1174)			{
HXLINE(1174)				this->b = bytes->b;
HXDLIN(1174)				this->__length = bytes->length;
            			}
HXLINE(1179)			this->length = this->__length;
HXLINE(1182)			this->position = this->length;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,compress,(void))

void ByteArrayData_obj::deflate(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1189_deflate)
HXDLIN(1189)		this->compress(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,deflate,(void))

void ByteArrayData_obj::inflate(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1208_inflate)
HXDLIN(1208)		this->uncompress(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,inflate,(void))

bool ByteArrayData_obj::readBoolean(){
            	HX_GC_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1225_readBoolean)
HXDLIN(1225)		if ((this->position < this->length)) {
HXLINE(1227)			return (this->b->__get(this->position++) != 0);
            		}
            		else {
HXLINE(1231)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::EOFError_obj::__alloc( HX_CTX ,null(),null())));
            		}
HXLINE(1225)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readBoolean,return )

int ByteArrayData_obj::readByte(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1237_readByte)
HXLINE(1238)		int value = this->readUnsignedByte();
HXLINE(1240)		if (((value & 128) != 0)) {
HXLINE(1242)			return (value - 256);
            		}
            		else {
HXLINE(1246)			return value;
            		}
HXLINE(1240)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readByte,return )

void ByteArrayData_obj::readBytes( ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  __o_offset,::hx::Null< int >  __o_length){
            		int offset = __o_offset.Default(0);
            		int length = __o_length.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1251_readBytes)
HXLINE(1252)		if ((length == 0)) {
HXLINE(1252)			length = (this->length - this->position);
            		}
HXLINE(1254)		if (((this->position + length) > this->length)) {
HXLINE(1256)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::EOFError_obj::__alloc( HX_CTX ,null(),null())));
            		}
HXLINE(1259)		if ((bytes->length < (offset + length))) {
HXLINE(1261)			bytes->_hx___resize((offset + length));
            		}
HXLINE(1264)		bytes->blit(offset,::hx::ObjectPtr<OBJ_>(this),this->position,length);
HXLINE(1265)		 ::openfl::utils::ByteArrayData _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1265)		_hx_tmp->position = (_hx_tmp->position + length);
            	}


HX_DEFINE_DYNAMIC_FUNC3(ByteArrayData_obj,readBytes,(void))

Float ByteArrayData_obj::readDouble(){
            	HX_GC_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1270_readDouble)
HXDLIN(1270)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1272)			if (((this->position + 8) > this->length)) {
HXLINE(1274)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::EOFError_obj::__alloc( HX_CTX ,null(),null())));
            			}
HXLINE(1278)			 ::openfl::utils::ByteArrayData _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1278)			_hx_tmp->position = (_hx_tmp->position + 8);
HXLINE(1279)			int pos = (this->position - 8);
HXDLIN(1279)			bool _hx_tmp1;
HXDLIN(1279)			if ((pos >= 0)) {
HXLINE(1279)				_hx_tmp1 = ((pos + 8) > this->length);
            			}
            			else {
HXLINE(1279)				_hx_tmp1 = true;
            			}
HXDLIN(1279)			if (_hx_tmp1) {
HXLINE(1279)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            			}
HXDLIN(1279)			return  ::__hxcpp_memory_get_double(this->b,pos);
            		}
            		else {
HXLINE(1283)			int ch1 = this->readInt();
HXLINE(1284)			int ch2 = this->readInt();
HXLINE(1286)			return ::haxe::io::FPHelper_obj::i64ToDouble(ch2,ch1);
            		}
HXLINE(1270)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readDouble,return )

Float ByteArrayData_obj::readFloat(){
            	HX_GC_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1292_readFloat)
HXDLIN(1292)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1294)			if (((this->position + 4) > this->length)) {
HXLINE(1296)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::EOFError_obj::__alloc( HX_CTX ,null(),null())));
            			}
HXLINE(1300)			 ::openfl::utils::ByteArrayData _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1300)			_hx_tmp->position = (_hx_tmp->position + 4);
HXLINE(1301)			int pos = (this->position - 4);
HXDLIN(1301)			bool _hx_tmp1;
HXDLIN(1301)			if ((pos >= 0)) {
HXLINE(1301)				_hx_tmp1 = ((pos + 4) > this->length);
            			}
            			else {
HXLINE(1301)				_hx_tmp1 = true;
            			}
HXDLIN(1301)			if (_hx_tmp1) {
HXLINE(1301)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            			}
HXDLIN(1301)			return  ::__hxcpp_memory_get_float(this->b,pos);
            		}
            		else {
HXLINE(1305)			return ::haxe::io::FPHelper_obj::i32ToFloat(this->readInt());
            		}
HXLINE(1292)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readFloat,return )

int ByteArrayData_obj::readInt(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1310_readInt)
HXLINE(1311)		int ch1 = this->readUnsignedByte();
HXLINE(1312)		int ch2 = this->readUnsignedByte();
HXLINE(1313)		int ch3 = this->readUnsignedByte();
HXLINE(1314)		int ch4 = this->readUnsignedByte();
HXLINE(1316)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1318)			return ((((ch4 << 24) | (ch3 << 16)) | (ch2 << 8)) | ch1);
            		}
            		else {
HXLINE(1322)			return ((((ch1 << 24) | (ch2 << 16)) | (ch3 << 8)) | ch4);
            		}
HXLINE(1316)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readInt,return )

::String ByteArrayData_obj::readMultiByte(int length,::String charSet){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1328_readMultiByte)
HXDLIN(1328)		return this->readUTFBytes(length);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ByteArrayData_obj,readMultiByte,return )

 ::Dynamic ByteArrayData_obj::readObject(){
            	HX_GC_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1333_readObject)
HXDLIN(1333)		switch((int)(this->objectEncoding)){
            			case (int)10: {
HXLINE(1352)				::String data = this->readUTF();
HXLINE(1353)				return ::haxe::Unserializer_obj::run(data);
            			}
            			break;
            			case (int)12: {
HXLINE(1356)				::String data = this->readUTF();
HXLINE(1357)				return  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,data)->doParse();
            			}
            			break;
            			default:{
HXLINE(1360)				return null();
            			}
            		}
HXLINE(1333)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readObject,return )

int ByteArrayData_obj::readShort(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1447_readShort)
HXLINE(1448)		int ch1 = this->readUnsignedByte();
HXLINE(1449)		int ch2 = this->readUnsignedByte();
HXLINE(1451)		int value;
HXLINE(1453)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1455)			value = ((ch2 << 8) | ch1);
            		}
            		else {
HXLINE(1459)			value = ((ch1 << 8) | ch2);
            		}
HXLINE(1462)		if (((value & 32768) != 0)) {
HXLINE(1464)			return (value - 65536);
            		}
            		else {
HXLINE(1468)			return value;
            		}
HXLINE(1462)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readShort,return )

int ByteArrayData_obj::readUnsignedByte(){
            	HX_GC_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1474_readUnsignedByte)
HXDLIN(1474)		if ((this->position < this->length)) {
HXLINE(1476)			return ( (int)(this->b->__get(this->position++)) );
            		}
            		else {
HXLINE(1480)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::EOFError_obj::__alloc( HX_CTX ,null(),null())));
            		}
HXLINE(1474)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUnsignedByte,return )

int ByteArrayData_obj::readUnsignedInt(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1486_readUnsignedInt)
HXLINE(1487)		int ch1 = this->readUnsignedByte();
HXLINE(1488)		int ch2 = this->readUnsignedByte();
HXLINE(1489)		int ch3 = this->readUnsignedByte();
HXLINE(1490)		int ch4 = this->readUnsignedByte();
HXLINE(1492)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1494)			return ((((ch4 << 24) | (ch3 << 16)) | (ch2 << 8)) | ch1);
            		}
            		else {
HXLINE(1498)			return ((((ch1 << 24) | (ch2 << 16)) | (ch3 << 8)) | ch4);
            		}
HXLINE(1492)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUnsignedInt,return )

int ByteArrayData_obj::readUnsignedShort(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1503_readUnsignedShort)
HXLINE(1504)		int ch1 = this->readUnsignedByte();
HXLINE(1505)		int ch2 = this->readUnsignedByte();
HXLINE(1507)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1509)			return ((ch2 << 8) + ch1);
            		}
            		else {
HXLINE(1513)			return ((ch1 << 8) | ch2);
            		}
HXLINE(1507)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUnsignedShort,return )

::String ByteArrayData_obj::readUTF(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1518_readUTF)
HXLINE(1519)		int bytesCount = this->readUnsignedShort();
HXLINE(1520)		return this->readUTFBytes(bytesCount);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUTF,return )

::String ByteArrayData_obj::readUTFBytes(int length){
            	HX_GC_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1524_readUTFBytes)
HXLINE(1525)		if (((this->position + length) > this->length)) {
HXLINE(1527)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::EOFError_obj::__alloc( HX_CTX ,null(),null())));
            		}
HXLINE(1530)		 ::openfl::utils::ByteArrayData _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1530)		_hx_tmp->position = (_hx_tmp->position + length);
HXLINE(1532)		return this->getString((this->position - length),length,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,readUTFBytes,return )

void ByteArrayData_obj::uncompress( ::Dynamic __o_algorithm){
            		 ::Dynamic algorithm = __o_algorithm;
            		if (::hx::IsNull(__o_algorithm)) algorithm = 2;
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1536_uncompress)
HXLINE(1558)		 ::haxe::io::Bytes limeBytes = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1560)		 ::haxe::io::Bytes bytes;
HXDLIN(1560)		 ::Dynamic _hx_switch_0 = algorithm;
            		if (  (_hx_switch_0==0) ){
HXLINE(1560)			bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::decompress(limeBytes,::lime::utils::CompressionAlgorithm_obj::DEFLATE_dyn());
HXDLIN(1560)			goto _hx_goto_20;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(1560)			bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::decompress(limeBytes,::lime::utils::CompressionAlgorithm_obj::LZMA_dyn());
HXDLIN(1560)			goto _hx_goto_20;
            		}
            		/* default */{
HXLINE(1560)			bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::decompress(limeBytes,::lime::utils::CompressionAlgorithm_obj::ZLIB_dyn());
            		}
            		_hx_goto_20:;
HXLINE(1567)		if (::hx::IsNotNull( bytes )) {
HXLINE(1569)			{
HXLINE(1569)				this->b = bytes->b;
HXDLIN(1569)				this->__length = bytes->length;
            			}
HXLINE(1574)			this->length = this->__length;
            		}
HXLINE(1580)		this->position = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,uncompress,(void))

void ByteArrayData_obj::writeBoolean(bool value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1585_writeBoolean)
HXDLIN(1585)		int _hx_tmp;
HXDLIN(1585)		if (value) {
HXDLIN(1585)			_hx_tmp = 1;
            		}
            		else {
HXDLIN(1585)			_hx_tmp = 0;
            		}
HXDLIN(1585)		this->writeByte(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeBoolean,(void))

void ByteArrayData_obj::writeByte(int value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1589_writeByte)
HXLINE(1590)		this->_hx___resize((this->position + 1));
HXLINE(1591)		this->b[this->position++] = ( (unsigned char)((value & 255)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeByte,(void))

void ByteArrayData_obj::writeBytes( ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  __o_offset,::hx::Null< int >  __o_length){
            		int offset = __o_offset.Default(0);
            		int length = __o_length.Default(0);
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1595_writeBytes)
HXLINE(1596)		if ((::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(bytes) == 0)) {
HXLINE(1596)			return;
            		}
HXLINE(1597)		if ((length == 0)) {
HXLINE(1597)			length = (::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(bytes) - offset);
            		}
HXLINE(1599)		this->_hx___resize((this->position + length));
HXLINE(1600)		this->blit(this->position,bytes,offset,length);
HXLINE(1602)		this->position = (this->position + length);
            	}


HX_DEFINE_DYNAMIC_FUNC3(ByteArrayData_obj,writeBytes,(void))

void ByteArrayData_obj::writeDouble(Float value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1606_writeDouble)
HXLINE(1607)		 cpp::Int64Struct int64 = ::haxe::io::FPHelper_obj::doubleToI64(value);
HXLINE(1609)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1611)			this->writeInt(_hx_int64_low(int64));
HXLINE(1612)			this->writeInt(_hx_int64_high(int64));
            		}
            		else {
HXLINE(1616)			this->writeInt(_hx_int64_high(int64));
HXLINE(1617)			this->writeInt(_hx_int64_low(int64));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeDouble,(void))

void ByteArrayData_obj::writeFloat(Float value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1623_writeFloat)
HXDLIN(1623)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1625)			this->_hx___resize((this->position + 4));
HXLINE(1626)			this->setFloat(this->position,value);
HXLINE(1627)			 ::openfl::utils::ByteArrayData _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(1627)			_hx_tmp->position = (_hx_tmp->position + 4);
            		}
            		else {
HXLINE(1631)			int _hx_int = ::haxe::io::FPHelper_obj::floatToI32(value);
HXLINE(1632)			this->writeInt(_hx_int);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeFloat,(void))

void ByteArrayData_obj::writeInt(int value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1637_writeInt)
HXLINE(1638)		this->_hx___resize((this->position + 4));
HXLINE(1640)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1642)			this->b[this->position++] = ( (unsigned char)((value & 255)) );
HXLINE(1643)			this->b[this->position++] = ( (unsigned char)(((value >> 8) & 255)) );
HXLINE(1644)			this->b[this->position++] = ( (unsigned char)(((value >> 16) & 255)) );
HXLINE(1645)			this->b[this->position++] = ( (unsigned char)(((value >> 24) & 255)) );
            		}
            		else {
HXLINE(1649)			this->b[this->position++] = ( (unsigned char)(((value >> 24) & 255)) );
HXLINE(1650)			this->b[this->position++] = ( (unsigned char)(((value >> 16) & 255)) );
HXLINE(1651)			this->b[this->position++] = ( (unsigned char)(((value >> 8) & 255)) );
HXLINE(1652)			this->b[this->position++] = ( (unsigned char)((value & 255)) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeInt,(void))

void ByteArrayData_obj::writeMultiByte(::String value,::String charSet){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1658_writeMultiByte)
HXDLIN(1658)		this->writeUTFBytes(value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ByteArrayData_obj,writeMultiByte,(void))

void ByteArrayData_obj::writeObject( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1663_writeObject)
HXDLIN(1663)		switch((int)(this->objectEncoding)){
            			case (int)10: {
HXLINE(1682)				::String value = ::haxe::Serializer_obj::run(object);
HXLINE(1683)				this->writeUTF(value);
            			}
            			break;
            			case (int)12: {
HXLINE(1686)				 ::Dynamic replacer = null();
HXDLIN(1686)				::String space = null();
HXDLIN(1686)				::String value = ::haxe::format::JsonPrinter_obj::print(object,replacer,space);
HXLINE(1687)				this->writeUTF(value);
            			}
            			break;
            			default:{
HXLINE(1690)				return;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeObject,(void))

void ByteArrayData_obj::writeShort(int value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1695_writeShort)
HXLINE(1696)		this->_hx___resize((this->position + 2));
HXLINE(1698)		if (::hx::IsEq( this->_hx___endian,1 )) {
HXLINE(1700)			this->b[this->position++] = ( (unsigned char)(value) );
HXLINE(1701)			this->b[this->position++] = ( (unsigned char)((value >> 8)) );
            		}
            		else {
HXLINE(1705)			this->b[this->position++] = ( (unsigned char)((value >> 8)) );
HXLINE(1706)			this->b[this->position++] = ( (unsigned char)(value) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeShort,(void))

void ByteArrayData_obj::writeUnsignedInt(int value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1712_writeUnsignedInt)
HXDLIN(1712)		this->writeInt(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeUnsignedInt,(void))

void ByteArrayData_obj::writeUTF(::String value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1716_writeUTF)
HXLINE(1717)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(value,null());
HXLINE(1719)		this->writeShort(bytes->length);
HXLINE(1720)		this->writeBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(bytes),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeUTF,(void))

void ByteArrayData_obj::writeUTFBytes(::String value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1724_writeUTFBytes)
HXLINE(1725)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(value,null());
HXLINE(1726)		this->writeBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(bytes),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeUTFBytes,(void))

void ByteArrayData_obj::_hx___fromBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1730___fromBytes)
HXLINE(1731)		{
HXLINE(1731)			this->b = bytes->b;
HXDLIN(1731)			this->__length = bytes->length;
            		}
HXLINE(1735)		this->length = bytes->length;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,_hx___fromBytes,(void))

void ByteArrayData_obj::_hx___resize(int size){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1740___resize)
HXLINE(1741)		if ((size > this->__length)) {
HXLINE(1743)			 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc((((size + 1) * 3) >> 1));
HXLINE(1745)			bytes->fill(this->__length,(size - this->__length),0);
HXLINE(1748)			if ((this->__length > 0)) {
HXLINE(1750)				int cacheLength = this->length;
HXLINE(1754)				this->length = this->__length;
HXLINE(1757)				bytes->blit(0,::hx::ObjectPtr<OBJ_>(this),0,this->__length);
HXLINE(1761)				this->length = cacheLength;
            			}
HXLINE(1766)			{
HXLINE(1766)				this->b = bytes->b;
HXDLIN(1766)				this->__length = bytes->length;
            			}
            		}
HXLINE(1769)		if ((this->length < size)) {
HXLINE(1771)			this->length = size;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,_hx___resize,(void))

void ByteArrayData_obj::_hx___setData( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1776___setData)
HXLINE(1784)		this->b = bytes->b;
HXLINE(1787)		this->__length = bytes->length;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,_hx___setData,(void))

int ByteArrayData_obj::get_bytesAvailable(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1797_get_bytesAvailable)
HXDLIN(1797)		return (this->length - this->position);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,get_bytesAvailable,return )

 ::Dynamic ByteArrayData_obj::get_endian(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1830_get_endian)
HXDLIN(1830)		return this->_hx___endian;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,get_endian,return )

 ::Dynamic ByteArrayData_obj::set_endian( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1835_set_endian)
HXDLIN(1835)		return (this->_hx___endian = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,set_endian,return )

int ByteArrayData_obj::defaultObjectEncoding;

 ::Dynamic ByteArrayData_obj::_hx___defaultEndian;

 ::openfl::utils::ByteArrayData ByteArrayData_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1200_fromBytes)
HXLINE(1201)		 ::openfl::utils::ByteArrayData result =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,null());
HXLINE(1202)		result->_hx___fromBytes(bytes);
HXLINE(1203)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,fromBytes,return )

 ::Dynamic ByteArrayData_obj::get_defaultEndian(){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1801_get_defaultEndian)
HXLINE(1802)		if (::hx::IsNull( ::openfl::utils::ByteArrayData_obj::_hx___defaultEndian )) {
HXLINE(1807)			if (::hx::IsPointerEq( ::lime::_hx_system::System_obj::get_endianness(),::lime::_hx_system::Endian_obj::_hx_LITTLE_ENDIAN_dyn() )) {
HXLINE(1809)				::openfl::utils::ByteArrayData_obj::_hx___defaultEndian = 1;
            			}
            			else {
HXLINE(1813)				::openfl::utils::ByteArrayData_obj::_hx___defaultEndian = 0;
            			}
            		}
HXLINE(1820)		return ::openfl::utils::ByteArrayData_obj::_hx___defaultEndian;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,get_defaultEndian,return )

 ::Dynamic ByteArrayData_obj::set_defaultEndian( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1825_set_defaultEndian)
HXDLIN(1825)		return (::openfl::utils::ByteArrayData_obj::_hx___defaultEndian = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,set_defaultEndian,return )


::hx::ObjectPtr< ByteArrayData_obj > ByteArrayData_obj::__new(::hx::Null< int >  __o_length) {
	::hx::ObjectPtr< ByteArrayData_obj > __this = new ByteArrayData_obj();
	__this->__construct(__o_length);
	return __this;
}

::hx::ObjectPtr< ByteArrayData_obj > ByteArrayData_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_length) {
	ByteArrayData_obj *__this = (ByteArrayData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ByteArrayData_obj), true, "openfl.utils.ByteArrayData"));
	*(void **)__this = ByteArrayData_obj::_hx_vtable;
	__this->__construct(__o_length);
	return __this;
}

ByteArrayData_obj::ByteArrayData_obj()
{
}

void ByteArrayData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ByteArrayData);
	HX_MARK_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(_hx___endian,"__endian");
	HX_MARK_MEMBER_NAME(__length,"__length");
	 ::haxe::io::Bytes_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ByteArrayData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(_hx___endian,"__endian");
	HX_VISIT_MEMBER_NAME(__length,"__length");
	 ::haxe::io::Bytes_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ByteArrayData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_endian() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"deflate") ) { return ::hx::Val( deflate_dyn() ); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return ::hx::Val( inflate_dyn() ); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return ::hx::Val( readInt_dyn() ); }
		if (HX_FIELD_EQ(inName,"readUTF") ) { return ::hx::Val( readUTF_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return ::hx::Val( position ); }
		if (HX_FIELD_EQ(inName,"__endian") ) { return ::hx::Val( _hx___endian ); }
		if (HX_FIELD_EQ(inName,"__length") ) { return ::hx::Val( __length ); }
		if (HX_FIELD_EQ(inName,"compress") ) { return ::hx::Val( compress_dyn() ); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return ::hx::Val( readByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return ::hx::Val( writeInt_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeUTF") ) { return ::hx::Val( writeUTF_dyn() ); }
		if (HX_FIELD_EQ(inName,"__resize") ) { return ::hx::Val( _hx___resize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return ::hx::Val( readBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return ::hx::Val( readFloat_dyn() ); }
		if (HX_FIELD_EQ(inName,"readShort") ) { return ::hx::Val( readShort_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return ::hx::Val( writeByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setData") ) { return ::hx::Val( _hx___setData_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readDouble") ) { return ::hx::Val( readDouble_dyn() ); }
		if (HX_FIELD_EQ(inName,"readObject") ) { return ::hx::Val( readObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"uncompress") ) { return ::hx::Val( uncompress_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return ::hx::Val( writeBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return ::hx::Val( writeFloat_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeShort") ) { return ::hx::Val( writeShort_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_endian") ) { return ::hx::Val( get_endian_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_endian") ) { return ::hx::Val( set_endian_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readBoolean") ) { return ::hx::Val( readBoolean_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeDouble") ) { return ::hx::Val( writeDouble_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeObject") ) { return ::hx::Val( writeObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return ::hx::Val( _hx___fromBytes_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return ::hx::Val( readUTFBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeBoolean") ) { return ::hx::Val( writeBoolean_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readMultiByte") ) { return ::hx::Val( readMultiByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { return ::hx::Val( writeUTFBytes_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bytesAvailable() ); }
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { return ::hx::Val( objectEncoding ); }
		if (HX_FIELD_EQ(inName,"writeMultiByte") ) { return ::hx::Val( writeMultiByte_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { return ::hx::Val( readUnsignedInt_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { return ::hx::Val( readUnsignedByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeUnsignedInt") ) { return ::hx::Val( writeUnsignedInt_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { return ::hx::Val( readUnsignedShort_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_bytesAvailable") ) { return ::hx::Val( get_bytesAvailable_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ByteArrayData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultEndian") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_defaultEndian() ); return true; } }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__defaultEndian") ) { outValue = ( _hx___defaultEndian ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_defaultEndian") ) { outValue = get_defaultEndian_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_defaultEndian") ) { outValue = set_defaultEndian_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"defaultObjectEncoding") ) { outValue = ( defaultObjectEncoding ); return true; }
	}
	return false;
}

::hx::Val ByteArrayData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_endian(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__endian") ) { _hx___endian=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__length") ) { __length=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { objectEncoding=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ByteArrayData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"defaultEndian") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_defaultEndian(ioValue.Cast<  ::Dynamic >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__defaultEndian") ) { _hx___defaultEndian=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"defaultObjectEncoding") ) { defaultObjectEncoding=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void ByteArrayData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bytesAvailable",de,4b,9d,9b));
	outFields->push(HX_("endian",9b,98,88,fa));
	outFields->push(HX_("objectEncoding",b2,1e,15,2a));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("__endian",bb,03,b8,a2));
	outFields->push(HX_("__length",06,00,37,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ByteArrayData_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ByteArrayData_obj,objectEncoding),HX_("objectEncoding",b2,1e,15,2a)},
	{::hx::fsInt,(int)offsetof(ByteArrayData_obj,position),HX_("position",a9,a0,fa,ca)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ByteArrayData_obj,_hx___endian),HX_("__endian",bb,03,b8,a2)},
	{::hx::fsInt,(int)offsetof(ByteArrayData_obj,__length),HX_("__length",06,00,37,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ByteArrayData_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ByteArrayData_obj::defaultObjectEncoding,HX_("defaultObjectEncoding",53,fb,eb,ff)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &ByteArrayData_obj::_hx___defaultEndian,HX_("__defaultEndian",1c,a5,b3,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ByteArrayData_obj_sMemberFields[] = {
	HX_("objectEncoding",b2,1e,15,2a),
	HX_("position",a9,a0,fa,ca),
	HX_("__endian",bb,03,b8,a2),
	HX_("__length",06,00,37,47),
	HX_("clear",8d,71,5b,48),
	HX_("compress",a2,47,bf,83),
	HX_("deflate",6b,0b,fa,a2),
	HX_("inflate",87,9c,1b,0c),
	HX_("readBoolean",f2,7d,ea,d0),
	HX_("readByte",7e,f9,1a,69),
	HX_("readBytes",35,55,7f,8e),
	HX_("readDouble",07,0f,47,2c),
	HX_("readFloat",66,12,7e,d3),
	HX_("readInt",39,b3,c9,02),
	HX_("readMultiByte",eb,7f,c9,15),
	HX_("readObject",b5,62,bb,0e),
	HX_("readShort",46,d1,0e,4d),
	HX_("readUnsignedByte",13,0b,ce,9b),
	HX_("readUnsignedInt",44,ab,4f,05),
	HX_("readUnsignedShort",11,22,0b,77),
	HX_("readUTF",71,b7,d2,02),
	HX_("readUTFBytes",3a,27,0f,52),
	HX_("uncompress",fb,2e,83,09),
	HX_("writeBoolean",89,8f,2d,43),
	HX_("writeByte",87,13,d7,49),
	HX_("writeBytes",0c,03,5a,52),
	HX_("writeDouble",50,7d,c4,c7),
	HX_("writeFloat",3d,c0,58,97),
	HX_("writeInt",50,6d,f0,23),
	HX_("writeMultiByte",42,65,25,ec),
	HX_("writeObject",fe,d0,38,aa),
	HX_("writeShort",1d,7f,e9,10),
	HX_("writeUnsignedInt",5b,d4,70,16),
	HX_("writeUTF",88,71,f9,23),
	HX_("writeUTFBytes",c3,79,7b,da),
	HX_("__fromBytes",81,3b,4d,a0),
	HX_("__resize",14,c5,aa,b0),
	HX_("__setData",cc,e7,35,89),
	HX_("get_bytesAvailable",a7,2c,37,37),
	HX_("get_endian",64,08,10,eb),
	HX_("set_endian",d8,a6,8d,ee),
	::String(null()) };

static void ByteArrayData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArrayData_obj::defaultObjectEncoding,"defaultObjectEncoding");
	HX_MARK_MEMBER_NAME(ByteArrayData_obj::_hx___defaultEndian,"__defaultEndian");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ByteArrayData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArrayData_obj::defaultObjectEncoding,"defaultObjectEncoding");
	HX_VISIT_MEMBER_NAME(ByteArrayData_obj::_hx___defaultEndian,"__defaultEndian");
};

#endif

::hx::Class ByteArrayData_obj::__mClass;

static ::String ByteArrayData_obj_sStaticFields[] = {
	HX_("defaultObjectEncoding",53,fb,eb,ff),
	HX_("__defaultEndian",1c,a5,b3,7c),
	HX_("fromBytes",a1,f2,20,72),
	HX_("get_defaultEndian",93,77,71,fb),
	HX_("set_defaultEndian",9f,4f,df,1e),
	::String(null())
};

void ByteArrayData_obj::__register()
{
	ByteArrayData_obj _hx_dummy;
	ByteArrayData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils.ByteArrayData",40,f9,66,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ByteArrayData_obj::__GetStatic;
	__mClass->mSetStaticField = &ByteArrayData_obj::__SetStatic;
	__mClass->mMarkFunc = ByteArrayData_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ByteArrayData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ByteArrayData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ByteArrayData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ByteArrayData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ByteArrayData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ByteArrayData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ByteArrayData_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1065_boot)
HXDLIN(1065)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1068_boot)
HXDLIN(1068)		defaultObjectEncoding = 10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dd5cdbe7a8b93fcc_1069_boot)
HXDLIN(1069)		_hx___defaultEndian = null();
            	}
}

} // end namespace openfl
} // end namespace utils
