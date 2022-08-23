#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_99143fe9fb0bb031_152_new,"openfl.geom.Matrix","new",0xd1b9ff67,"openfl.geom.Matrix.new","openfl/geom/Matrix.hx",152,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_169_clone,"openfl.geom.Matrix","clone",0xe2f85224,"openfl.geom.Matrix.clone","openfl/geom/Matrix.hx",169,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_191_concat,"openfl.geom.Matrix","concat",0x6fd1b86d,"openfl.geom.Matrix.concat","openfl/geom/Matrix.hx",191,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_215_copyColumnFrom,"openfl.geom.Matrix","copyColumnFrom",0xa86bc7ce,"openfl.geom.Matrix.copyColumnFrom","openfl/geom/Matrix.hx",215,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_245_copyColumnTo,"openfl.geom.Matrix","copyColumnTo",0xb6db66df,"openfl.geom.Matrix.copyColumnTo","openfl/geom/Matrix.hx",245,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_276_copyFrom,"openfl.geom.Matrix","copyFrom",0xb7b00358,"openfl.geom.Matrix.copyFrom","openfl/geom/Matrix.hx",276,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_293_copyRowFrom,"openfl.geom.Matrix","copyRowFrom",0xadd25376,"openfl.geom.Matrix.copyRowFrom","openfl/geom/Matrix.hx",293,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_320_copyRowTo,"openfl.geom.Matrix","copyRowTo",0xe92c3887,"openfl.geom.Matrix.copyRowTo","openfl/geom/Matrix.hx",320,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_371_createBox,"openfl.geom.Matrix","createBox",0xbfa242b6,"openfl.geom.Matrix.createBox","openfl/geom/Matrix.hx",371,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_434_createGradientBox,"openfl.geom.Matrix","createGradientBox",0xa2dcb9a6,"openfl.geom.Matrix.createGradientBox","openfl/geom/Matrix.hx",434,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_473_deltaTransformPoint,"openfl.geom.Matrix","deltaTransformPoint",0xeb963a63,"openfl.geom.Matrix.deltaTransformPoint","openfl/geom/Matrix.hx",473,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_478_equals,"openfl.geom.Matrix","equals",0x67f49d98,"openfl.geom.Matrix.equals","openfl/geom/Matrix.hx",478,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_493_identity,"openfl.geom.Matrix","identity",0xa87e3cd7,"openfl.geom.Matrix.identity","openfl/geom/Matrix.hx",493,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_509_invert,"openfl.geom.Matrix","invert",0x47da966f,"openfl.geom.Matrix.invert","openfl/geom/Matrix.hx",509,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_548_rotate,"openfl.geom.Matrix","rotate",0x7321f5b4,"openfl.geom.Matrix.rotate","openfl/geom/Matrix.hx",548,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_594_scale,"openfl.geom.Matrix","scale",0x13640d51,"openfl.geom.Matrix.scale","openfl/geom/Matrix.hx",594,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_615_setRotation,"openfl.geom.Matrix","setRotation",0xf72e1507,"openfl.geom.Matrix.setRotation","openfl/geom/Matrix.hx",615,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_635_setTo,"openfl.geom.Matrix","setTo",0x14c4d084,"openfl.geom.Matrix.setTo","openfl/geom/Matrix.hx",635,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_647_to3DString,"openfl.geom.Matrix","to3DString",0xe99e8cb6,"openfl.geom.Matrix.to3DString","openfl/geom/Matrix.hx",647,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_660_toMozString,"openfl.geom.Matrix","toMozString",0xd9d4e6d5,"openfl.geom.Matrix.toMozString","openfl/geom/Matrix.hx",660,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_672_toString,"openfl.geom.Matrix","toString",0x27bdc845,"openfl.geom.Matrix.toString","openfl/geom/Matrix.hx",672,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_685_transformPoint,"openfl.geom.Matrix","transformPoint",0xaac7ff9d,"openfl.geom.Matrix.transformPoint","openfl/geom/Matrix.hx",685,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_697_translate,"openfl.geom.Matrix","translate",0xbf498595,"openfl.geom.Matrix.translate","openfl/geom/Matrix.hx",697,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_704_toArray,"openfl.geom.Matrix","toArray",0x4b8b78a5,"openfl.geom.Matrix.toArray","openfl/geom/Matrix.hx",704,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_740___cleanValues,"openfl.geom.Matrix","__cleanValues",0xae7254f2,"openfl.geom.Matrix.__cleanValues","openfl/geom/Matrix.hx",740,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_751___toMatrix3,"openfl.geom.Matrix","__toMatrix3",0xaf6ed17e,"openfl.geom.Matrix.__toMatrix3","openfl/geom/Matrix.hx",751,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_758___transformInversePoint,"openfl.geom.Matrix","__transformInversePoint",0xde42fb73,"openfl.geom.Matrix.__transformInversePoint","openfl/geom/Matrix.hx",758,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_775___transformInverseX,"openfl.geom.Matrix","__transformInverseX",0x55523a1b,"openfl.geom.Matrix.__transformInverseX","openfl/geom/Matrix.hx",775,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_789___transformInverseY,"openfl.geom.Matrix","__transformInverseY",0x55523a1c,"openfl.geom.Matrix.__transformInverseY","openfl/geom/Matrix.hx",789,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_803___transformPoint,"openfl.geom.Matrix","__transformPoint",0x5d3712fd,"openfl.geom.Matrix.__transformPoint","openfl/geom/Matrix.hx",803,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_813___transformX,"openfl.geom.Matrix","__transformX",0x93ad44a5,"openfl.geom.Matrix.__transformX","openfl/geom/Matrix.hx",813,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_818___transformY,"openfl.geom.Matrix","__transformY",0x93ad44a6,"openfl.geom.Matrix.__transformY","openfl/geom/Matrix.hx",818,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_822___translateTransformed,"openfl.geom.Matrix","__translateTransformed",0x123e9496,"openfl.geom.Matrix.__translateTransformed","openfl/geom/Matrix.hx",822,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_74_boot,"openfl.geom.Matrix","boot",0xa91e7b4b,"openfl.geom.Matrix.boot","openfl/geom/Matrix.hx",74,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_76_boot,"openfl.geom.Matrix","boot",0xa91e7b4b,"openfl.geom.Matrix.boot","openfl/geom/Matrix.hx",76,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_77_boot,"openfl.geom.Matrix","boot",0xa91e7b4b,"openfl.geom.Matrix.boot","openfl/geom/Matrix.hx",77,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_79_boot,"openfl.geom.Matrix","boot",0xa91e7b4b,"openfl.geom.Matrix.boot","openfl/geom/Matrix.hx",79,0xa0d54189)
namespace openfl{
namespace geom{

void Matrix_obj::__construct(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty){
            		Float a = __o_a.Default(1);
            		Float b = __o_b.Default(0);
            		Float c = __o_c.Default(0);
            		Float d = __o_d.Default(1);
            		Float tx = __o_tx.Default(0);
            		Float ty = __o_ty.Default(0);
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_152_new)
HXLINE( 153)		this->a = a;
HXLINE( 154)		this->b = b;
HXLINE( 155)		this->c = c;
HXLINE( 156)		this->d = d;
HXLINE( 157)		this->tx = tx;
HXLINE( 158)		this->ty = ty;
            	}

Dynamic Matrix_obj::__CreateEmpty() { return new Matrix_obj; }

void *Matrix_obj::_hx_vtable = 0;

Dynamic Matrix_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Matrix_obj > _hx_result = new Matrix_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Matrix_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x065caf19;
}

 ::openfl::geom::Matrix Matrix_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_99143fe9fb0bb031_169_clone)
HXDLIN( 169)		return  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,this->a,this->b,this->c,this->d,this->tx,this->ty);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,clone,return )

void Matrix_obj::concat( ::openfl::geom::Matrix m){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_191_concat)
HXLINE( 192)		Float a1 = ((this->a * m->a) + (this->b * m->c));
HXLINE( 193)		this->b = ((this->a * m->b) + (this->b * m->d));
HXLINE( 194)		this->a = a1;
HXLINE( 196)		Float c1 = ((this->c * m->a) + (this->d * m->c));
HXLINE( 197)		this->d = ((this->c * m->b) + (this->d * m->d));
HXLINE( 198)		this->c = c1;
HXLINE( 200)		Float tx1 = (((this->tx * m->a) + (this->ty * m->c)) + m->tx);
HXLINE( 201)		this->ty = (((this->tx * m->b) + (this->ty * m->d)) + m->ty);
HXLINE( 202)		this->tx = tx1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,concat,(void))

void Matrix_obj::copyColumnFrom(int column, ::openfl::geom::Vector3D vector3D){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_215_copyColumnFrom)
HXDLIN( 215)		if ((column > 2)) {
HXLINE( 217)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Column ",6a,d4,aa,c0) + column) + HX_(" out of bounds (2)",eb,c3,f0,de))));
            		}
            		else {
HXLINE( 219)			if ((column == 0)) {
HXLINE( 221)				this->a = vector3D->x;
HXLINE( 222)				this->b = vector3D->y;
            			}
            			else {
HXLINE( 224)				if ((column == 1)) {
HXLINE( 226)					this->c = vector3D->x;
HXLINE( 227)					this->d = vector3D->y;
            				}
            				else {
HXLINE( 231)					this->tx = vector3D->x;
HXLINE( 232)					this->ty = vector3D->y;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyColumnFrom,(void))

void Matrix_obj::copyColumnTo(int column, ::openfl::geom::Vector3D vector3D){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_245_copyColumnTo)
HXDLIN( 245)		if ((column > 2)) {
HXLINE( 247)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Column ",6a,d4,aa,c0) + column) + HX_(" out of bounds (2)",eb,c3,f0,de))));
            		}
            		else {
HXLINE( 249)			if ((column == 0)) {
HXLINE( 251)				vector3D->x = this->a;
HXLINE( 252)				vector3D->y = this->b;
HXLINE( 253)				vector3D->z = ( (Float)(0) );
            			}
            			else {
HXLINE( 255)				if ((column == 1)) {
HXLINE( 257)					vector3D->x = this->c;
HXLINE( 258)					vector3D->y = this->d;
HXLINE( 259)					vector3D->z = ( (Float)(0) );
            				}
            				else {
HXLINE( 263)					vector3D->x = this->tx;
HXLINE( 264)					vector3D->y = this->ty;
HXLINE( 265)					vector3D->z = ( (Float)(1) );
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyColumnTo,(void))

void Matrix_obj::copyFrom( ::openfl::geom::Matrix sourceMatrix){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_276_copyFrom)
HXLINE( 277)		this->a = sourceMatrix->a;
HXLINE( 278)		this->b = sourceMatrix->b;
HXLINE( 279)		this->c = sourceMatrix->c;
HXLINE( 280)		this->d = sourceMatrix->d;
HXLINE( 281)		this->tx = sourceMatrix->tx;
HXLINE( 282)		this->ty = sourceMatrix->ty;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,copyFrom,(void))

void Matrix_obj::copyRowFrom(int row, ::openfl::geom::Vector3D vector3D){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_293_copyRowFrom)
HXDLIN( 293)		if ((row > 2)) {
HXLINE( 295)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Row ",e6,20,88,36) + row) + HX_(" out of bounds (2)",eb,c3,f0,de))));
            		}
            		else {
HXLINE( 297)			if ((row == 0)) {
HXLINE( 299)				this->a = vector3D->x;
HXLINE( 300)				this->c = vector3D->y;
HXLINE( 301)				this->tx = vector3D->z;
            			}
            			else {
HXLINE( 303)				if ((row == 1)) {
HXLINE( 305)					this->b = vector3D->x;
HXLINE( 306)					this->d = vector3D->y;
HXLINE( 307)					this->ty = vector3D->z;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyRowFrom,(void))

void Matrix_obj::copyRowTo(int row, ::openfl::geom::Vector3D vector3D){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_320_copyRowTo)
HXDLIN( 320)		if ((row > 2)) {
HXLINE( 322)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Row ",e6,20,88,36) + row) + HX_(" out of bounds (2)",eb,c3,f0,de))));
            		}
            		else {
HXLINE( 324)			if ((row == 0)) {
HXLINE( 326)				vector3D->x = this->a;
HXLINE( 327)				vector3D->y = this->c;
HXLINE( 328)				vector3D->z = this->tx;
            			}
            			else {
HXLINE( 330)				if ((row == 1)) {
HXLINE( 332)					vector3D->x = this->b;
HXLINE( 333)					vector3D->y = this->d;
HXLINE( 334)					vector3D->z = this->ty;
            				}
            				else {
HXLINE( 338)					vector3D->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyRowTo,(void))

void Matrix_obj::createBox(Float scaleX,Float scaleY,::hx::Null< Float >  __o_rotation,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty){
            		Float rotation = __o_rotation.Default(0);
            		Float tx = __o_tx.Default(0);
            		Float ty = __o_ty.Default(0);
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_371_createBox)
HXLINE( 377)		if ((rotation != 0)) {
HXLINE( 379)			Float cos = ::Math_obj::cos(rotation);
HXLINE( 380)			Float sin = ::Math_obj::sin(rotation);
HXLINE( 382)			this->a = (cos * scaleX);
HXLINE( 383)			this->b = (sin * scaleY);
HXLINE( 384)			this->c = (-(sin) * scaleX);
HXLINE( 385)			this->d = (cos * scaleY);
            		}
            		else {
HXLINE( 389)			this->a = scaleX;
HXLINE( 390)			this->b = ( (Float)(0) );
HXLINE( 391)			this->c = ( (Float)(0) );
HXLINE( 392)			this->d = scaleY;
            		}
HXLINE( 395)		this->tx = tx;
HXLINE( 396)		this->ty = ty;
            	}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createBox,(void))

void Matrix_obj::createGradientBox(Float width,Float height,::hx::Null< Float >  __o_rotation,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty){
            		Float rotation = __o_rotation.Default(0);
            		Float tx = __o_tx.Default(0);
            		Float ty = __o_ty.Default(0);
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_434_createGradientBox)
HXLINE( 435)		this->a = (width / ((Float)1638.4));
HXLINE( 436)		this->d = (height / ((Float)1638.4));
HXLINE( 439)		if ((rotation != 0)) {
HXLINE( 441)			Float cos = ::Math_obj::cos(rotation);
HXLINE( 442)			Float sin = ::Math_obj::sin(rotation);
HXLINE( 444)			this->b = (sin * this->d);
HXLINE( 445)			this->c = (-(sin) * this->a);
HXLINE( 446)			 ::openfl::geom::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 446)			_hx_tmp->a = (_hx_tmp->a * cos);
HXLINE( 447)			 ::openfl::geom::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 447)			_hx_tmp1->d = (_hx_tmp1->d * cos);
            		}
            		else {
HXLINE( 451)			this->b = ( (Float)(0) );
HXLINE( 452)			this->c = ( (Float)(0) );
            		}
HXLINE( 455)		this->tx = (tx + (width / ( (Float)(2) )));
HXLINE( 456)		this->ty = (ty + (height / ( (Float)(2) )));
            	}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createGradientBox,(void))

 ::openfl::geom::Point Matrix_obj::deltaTransformPoint( ::openfl::geom::Point point){
            	HX_GC_STACKFRAME(&_hx_pos_99143fe9fb0bb031_473_deltaTransformPoint)
HXDLIN( 473)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,((point->x * this->a) + (point->y * this->c)),((point->x * this->b) + (point->y * this->d)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,deltaTransformPoint,return )

bool Matrix_obj::equals( ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_478_equals)
HXDLIN( 478)		bool _hx_tmp;
HXDLIN( 478)		bool _hx_tmp1;
HXDLIN( 478)		bool _hx_tmp2;
HXDLIN( 478)		bool _hx_tmp3;
HXDLIN( 478)		bool _hx_tmp4;
HXDLIN( 478)		if (::hx::IsNotNull( matrix )) {
HXDLIN( 478)			_hx_tmp4 = (this->tx == matrix->tx);
            		}
            		else {
HXDLIN( 478)			_hx_tmp4 = false;
            		}
HXDLIN( 478)		if (_hx_tmp4) {
HXDLIN( 478)			_hx_tmp3 = (this->ty == matrix->ty);
            		}
            		else {
HXDLIN( 478)			_hx_tmp3 = false;
            		}
HXDLIN( 478)		if (_hx_tmp3) {
HXDLIN( 478)			_hx_tmp2 = (this->a == matrix->a);
            		}
            		else {
HXDLIN( 478)			_hx_tmp2 = false;
            		}
HXDLIN( 478)		if (_hx_tmp2) {
HXDLIN( 478)			_hx_tmp1 = (this->b == matrix->b);
            		}
            		else {
HXDLIN( 478)			_hx_tmp1 = false;
            		}
HXDLIN( 478)		if (_hx_tmp1) {
HXDLIN( 478)			_hx_tmp = (this->c == matrix->c);
            		}
            		else {
HXDLIN( 478)			_hx_tmp = false;
            		}
HXDLIN( 478)		if (_hx_tmp) {
HXDLIN( 478)			return (this->d == matrix->d);
            		}
            		else {
HXDLIN( 478)			return false;
            		}
HXDLIN( 478)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,equals,return )

void Matrix_obj::identity(){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_493_identity)
HXLINE( 494)		this->a = ( (Float)(1) );
HXLINE( 495)		this->b = ( (Float)(0) );
HXLINE( 496)		this->c = ( (Float)(0) );
HXLINE( 497)		this->d = ( (Float)(1) );
HXLINE( 498)		this->tx = ( (Float)(0) );
HXLINE( 499)		this->ty = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,identity,(void))

 ::openfl::geom::Matrix Matrix_obj::invert(){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_509_invert)
HXLINE( 510)		Float norm = ((this->a * this->d) - (this->b * this->c));
HXLINE( 512)		if ((norm == 0)) {
HXLINE( 514)			this->a = (this->b = (this->c = (this->d = ( (Float)(0) ))));
HXLINE( 515)			this->tx = -(this->tx);
HXLINE( 516)			this->ty = -(this->ty);
            		}
            		else {
HXLINE( 520)			norm = (((Float)1.0) / norm);
HXLINE( 521)			Float a1 = (this->d * norm);
HXLINE( 522)			this->d = (this->a * norm);
HXLINE( 523)			this->a = a1;
HXLINE( 524)			 ::openfl::geom::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 524)			_hx_tmp->b = (_hx_tmp->b * -(norm));
HXLINE( 525)			 ::openfl::geom::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 525)			_hx_tmp1->c = (_hx_tmp1->c * -(norm));
HXLINE( 527)			Float tx1 = ((-(this->a) * this->tx) - (this->c * this->ty));
HXLINE( 528)			this->ty = ((-(this->b) * this->tx) - (this->d * this->ty));
HXLINE( 529)			this->tx = tx1;
            		}
HXLINE( 534)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,invert,return )

void Matrix_obj::rotate(Float theta){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_548_rotate)
HXLINE( 562)		Float cos = ::Math_obj::cos(theta);
HXLINE( 564)		Float sin = ::Math_obj::sin(theta);
HXLINE( 566)		Float a1 = ((this->a * cos) - (this->b * sin));
HXLINE( 567)		this->b = ((this->a * sin) + (this->b * cos));
HXLINE( 568)		this->a = a1;
HXLINE( 570)		Float c1 = ((this->c * cos) - (this->d * sin));
HXLINE( 571)		this->d = ((this->c * sin) + (this->d * cos));
HXLINE( 572)		this->c = c1;
HXLINE( 574)		Float tx1 = ((this->tx * cos) - (this->ty * sin));
HXLINE( 575)		this->ty = ((this->tx * sin) + (this->ty * cos));
HXLINE( 576)		this->tx = tx1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,rotate,(void))

void Matrix_obj::scale(Float sx,Float sy){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_594_scale)
HXLINE( 604)		 ::openfl::geom::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 604)		_hx_tmp->a = (_hx_tmp->a * sx);
HXLINE( 605)		 ::openfl::geom::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 605)		_hx_tmp1->b = (_hx_tmp1->b * sy);
HXLINE( 606)		 ::openfl::geom::Matrix _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 606)		_hx_tmp2->c = (_hx_tmp2->c * sx);
HXLINE( 607)		 ::openfl::geom::Matrix _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 607)		_hx_tmp3->d = (_hx_tmp3->d * sy);
HXLINE( 608)		 ::openfl::geom::Matrix _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 608)		_hx_tmp4->tx = (_hx_tmp4->tx * sx);
HXLINE( 609)		 ::openfl::geom::Matrix _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 609)		_hx_tmp5->ty = (_hx_tmp5->ty * sy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,scale,(void))

void Matrix_obj::setRotation(Float theta,::hx::Null< Float >  __o_scale){
            		Float scale = __o_scale.Default(1);
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_615_setRotation)
HXLINE( 616)		this->a = (::Math_obj::cos(theta) * scale);
HXLINE( 617)		this->c = (::Math_obj::sin(theta) * scale);
HXLINE( 618)		this->b = -(this->c);
HXLINE( 619)		this->d = this->a;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,setRotation,(void))

void Matrix_obj::setTo(Float a,Float b,Float c,Float d,Float tx,Float ty){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_635_setTo)
HXLINE( 636)		this->a = a;
HXLINE( 637)		this->b = b;
HXLINE( 638)		this->c = c;
HXLINE( 639)		this->d = d;
HXLINE( 640)		this->tx = tx;
HXLINE( 641)		this->ty = ty;
            	}


HX_DEFINE_DYNAMIC_FUNC6(Matrix_obj,setTo,(void))

::String Matrix_obj::to3DString(::hx::Null< bool >  __o_roundPixels){
            		bool roundPixels = __o_roundPixels.Default(false);
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_647_to3DString)
HXDLIN( 647)		if (roundPixels) {
HXLINE( 649)			::String _hx_tmp = ((((((((HX_("matrix3d(",96,72,db,ad) + this->a) + HX_(", ",74,26,00,00)) + this->b) + HX_(", 0, 0, ",f4,b3,68,a3)) + this->c) + HX_(", ",74,26,00,00)) + this->d) + HX_(", 0, 0, 0, 0, 1, 0, ",53,8b,16,4d));
HXDLIN( 649)			::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::_hx_int(this->tx)) + HX_(", ",74,26,00,00));
HXDLIN( 649)			return ((_hx_tmp1 + ::Std_obj::_hx_int(this->ty)) + HX_(", 0, 1)",88,a3,85,b1));
            		}
            		else {
HXLINE( 653)			return ((((((((((((HX_("matrix3d(",96,72,db,ad) + this->a) + HX_(", ",74,26,00,00)) + this->b) + HX_(", 0, 0, ",f4,b3,68,a3)) + this->c) + HX_(", ",74,26,00,00)) + this->d) + HX_(", 0, 0, 0, 0, 1, 0, ",53,8b,16,4d)) + this->tx) + HX_(", ",74,26,00,00)) + this->ty) + HX_(", 0, 1)",88,a3,85,b1));
            		}
HXLINE( 647)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,to3DString,return )

::String Matrix_obj::toMozString(){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_660_toMozString)
HXDLIN( 660)		return ((((((((((((HX_("matrix(",c7,42,67,93) + this->a) + HX_(", ",74,26,00,00)) + this->b) + HX_(", ",74,26,00,00)) + this->c) + HX_(", ",74,26,00,00)) + this->d) + HX_(", ",74,26,00,00)) + this->tx) + HX_("px, ",7c,1a,63,4a)) + this->ty) + HX_("px)",21,65,55,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,toMozString,return )

::String Matrix_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_672_toString)
HXDLIN( 672)		return ((((((((((((HX_("matrix(",c7,42,67,93) + this->a) + HX_(", ",74,26,00,00)) + this->b) + HX_(", ",74,26,00,00)) + this->c) + HX_(", ",74,26,00,00)) + this->d) + HX_(", ",74,26,00,00)) + this->tx) + HX_(", ",74,26,00,00)) + this->ty) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,toString,return )

 ::openfl::geom::Point Matrix_obj::transformPoint( ::openfl::geom::Point pos){
            	HX_GC_STACKFRAME(&_hx_pos_99143fe9fb0bb031_685_transformPoint)
HXDLIN( 685)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(((pos->x * this->a) + (pos->y * this->c)) + this->tx),(((pos->x * this->b) + (pos->y * this->d)) + this->ty));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,transformPoint,return )

void Matrix_obj::translate(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_697_translate)
HXLINE( 698)		 ::openfl::geom::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 698)		_hx_tmp->tx = (_hx_tmp->tx + dx);
HXLINE( 699)		 ::openfl::geom::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 699)		_hx_tmp1->ty = (_hx_tmp1->ty + dy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,translate,(void))

 ::lime::utils::ArrayBufferView Matrix_obj::toArray(::hx::Null< bool >  __o_transpose){
            		bool transpose = __o_transpose.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_99143fe9fb0bb031_704_toArray)
HXLINE( 705)		if (::hx::IsNull( this->_hx___array )) {
HXLINE( 707)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 707)			::cpp::VirtualArray array = null();
HXDLIN( 707)			 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 707)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 707)			 ::Dynamic len = null();
HXDLIN( 707)			 ::lime::utils::ArrayBufferView this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,9,8);
HXDLIN( 707)			this->_hx___array = this1;
            		}
HXLINE( 710)		if (transpose) {
HXLINE( 712)			{
HXLINE( 712)				 ::lime::utils::ArrayBufferView this1 = this->_hx___array;
HXDLIN( 712)				Float val = this->a;
HXDLIN( 712)				 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            			}
HXLINE( 713)			{
HXLINE( 713)				 ::lime::utils::ArrayBufferView this2 = this->_hx___array;
HXDLIN( 713)				Float val1 = this->b;
HXDLIN( 713)				 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),val1);
            			}
HXLINE( 714)			{
HXLINE( 714)				 ::lime::utils::ArrayBufferView this3 = this->_hx___array;
HXDLIN( 714)				 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),0);
            			}
HXLINE( 715)			{
HXLINE( 715)				 ::lime::utils::ArrayBufferView this4 = this->_hx___array;
HXDLIN( 715)				Float val2 = this->c;
HXDLIN( 715)				 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),val2);
            			}
HXLINE( 716)			{
HXLINE( 716)				 ::lime::utils::ArrayBufferView this5 = this->_hx___array;
HXDLIN( 716)				Float val3 = this->d;
HXDLIN( 716)				 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + 16),val3);
            			}
HXLINE( 717)			{
HXLINE( 717)				 ::lime::utils::ArrayBufferView this6 = this->_hx___array;
HXDLIN( 717)				 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + 20),0);
            			}
HXLINE( 718)			{
HXLINE( 718)				 ::lime::utils::ArrayBufferView this7 = this->_hx___array;
HXDLIN( 718)				Float val4 = this->tx;
HXDLIN( 718)				 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + 24),val4);
            			}
HXLINE( 719)			{
HXLINE( 719)				 ::lime::utils::ArrayBufferView this8 = this->_hx___array;
HXDLIN( 719)				Float val5 = this->ty;
HXDLIN( 719)				 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + 28),val5);
            			}
HXLINE( 720)			{
HXLINE( 720)				 ::lime::utils::ArrayBufferView this9 = this->_hx___array;
HXDLIN( 720)				 ::__hxcpp_memory_set_float(this9->buffer->b,(this9->byteOffset + 32),1);
            			}
            		}
            		else {
HXLINE( 724)			{
HXLINE( 724)				 ::lime::utils::ArrayBufferView this1 = this->_hx___array;
HXDLIN( 724)				Float val = this->a;
HXDLIN( 724)				 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            			}
HXLINE( 725)			{
HXLINE( 725)				 ::lime::utils::ArrayBufferView this2 = this->_hx___array;
HXDLIN( 725)				Float val1 = this->c;
HXDLIN( 725)				 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),val1);
            			}
HXLINE( 726)			{
HXLINE( 726)				 ::lime::utils::ArrayBufferView this3 = this->_hx___array;
HXDLIN( 726)				Float val2 = this->tx;
HXDLIN( 726)				 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),val2);
            			}
HXLINE( 727)			{
HXLINE( 727)				 ::lime::utils::ArrayBufferView this4 = this->_hx___array;
HXDLIN( 727)				Float val3 = this->b;
HXDLIN( 727)				 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),val3);
            			}
HXLINE( 728)			{
HXLINE( 728)				 ::lime::utils::ArrayBufferView this5 = this->_hx___array;
HXDLIN( 728)				Float val4 = this->d;
HXDLIN( 728)				 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + 16),val4);
            			}
HXLINE( 729)			{
HXLINE( 729)				 ::lime::utils::ArrayBufferView this6 = this->_hx___array;
HXDLIN( 729)				Float val5 = this->ty;
HXDLIN( 729)				 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + 20),val5);
            			}
HXLINE( 730)			{
HXLINE( 730)				 ::lime::utils::ArrayBufferView this7 = this->_hx___array;
HXDLIN( 730)				 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + 24),0);
            			}
HXLINE( 731)			{
HXLINE( 731)				 ::lime::utils::ArrayBufferView this8 = this->_hx___array;
HXDLIN( 731)				 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + 28),0);
            			}
HXLINE( 732)			{
HXLINE( 732)				 ::lime::utils::ArrayBufferView this9 = this->_hx___array;
HXDLIN( 732)				 ::__hxcpp_memory_set_float(this9->buffer->b,(this9->byteOffset + 32),1);
            			}
            		}
HXLINE( 735)		return this->_hx___array;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,toArray,return )

void Matrix_obj::_hx___cleanValues(){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_740___cleanValues)
HXLINE( 741)		this->a = (( (Float)(::Math_obj::round((this->a * ( (Float)(1000) )))) ) / ( (Float)(1000) ));
HXLINE( 742)		this->b = (( (Float)(::Math_obj::round((this->b * ( (Float)(1000) )))) ) / ( (Float)(1000) ));
HXLINE( 743)		this->c = (( (Float)(::Math_obj::round((this->c * ( (Float)(1000) )))) ) / ( (Float)(1000) ));
HXLINE( 744)		this->d = (( (Float)(::Math_obj::round((this->d * ( (Float)(1000) )))) ) / ( (Float)(1000) ));
HXLINE( 745)		this->tx = (( (Float)(::Math_obj::round((this->tx * ( (Float)(10) )))) ) / ( (Float)(10) ));
HXLINE( 746)		this->ty = (( (Float)(::Math_obj::round((this->ty * ( (Float)(10) )))) ) / ( (Float)(10) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,_hx___cleanValues,(void))

 ::lime::math::Matrix3 Matrix_obj::_hx___toMatrix3(){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_751___toMatrix3)
HXLINE( 752)		{
HXLINE( 752)			 ::lime::math::Matrix3 _this = ::openfl::geom::Matrix_obj::_hx___matrix3;
HXDLIN( 752)			_this->a = this->a;
HXDLIN( 752)			_this->b = this->b;
HXDLIN( 752)			_this->c = this->c;
HXDLIN( 752)			_this->d = this->d;
HXDLIN( 752)			_this->tx = this->tx;
HXDLIN( 752)			_this->ty = this->ty;
            		}
HXLINE( 753)		return ::openfl::geom::Matrix_obj::_hx___matrix3;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,_hx___toMatrix3,return )

void Matrix_obj::_hx___transformInversePoint( ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_758___transformInversePoint)
HXLINE( 759)		Float norm = ((this->a * this->d) - (this->b * this->c));
HXLINE( 761)		if ((norm == 0)) {
HXLINE( 763)			point->x = -(this->tx);
HXLINE( 764)			point->y = -(this->ty);
            		}
            		else {
HXLINE( 768)			Float px = ((((Float)1.0) / norm) * ((this->c * (this->ty - point->y)) + (this->d * (point->x - this->tx))));
HXLINE( 769)			point->y = ((((Float)1.0) / norm) * ((this->a * (point->y - this->ty)) + (this->b * (this->tx - point->x))));
HXLINE( 770)			point->x = px;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,_hx___transformInversePoint,(void))

Float Matrix_obj::_hx___transformInverseX(Float px,Float py){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_775___transformInverseX)
HXLINE( 776)		Float norm = ((this->a * this->d) - (this->b * this->c));
HXLINE( 778)		if ((norm == 0)) {
HXLINE( 780)			return -(this->tx);
            		}
            		else {
HXLINE( 784)			return ((((Float)1.0) / norm) * ((this->c * (this->ty - py)) + (this->d * (px - this->tx))));
            		}
HXLINE( 778)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,_hx___transformInverseX,return )

Float Matrix_obj::_hx___transformInverseY(Float px,Float py){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_789___transformInverseY)
HXLINE( 790)		Float norm = ((this->a * this->d) - (this->b * this->c));
HXLINE( 792)		if ((norm == 0)) {
HXLINE( 794)			return -(this->ty);
            		}
            		else {
HXLINE( 798)			return ((((Float)1.0) / norm) * ((this->a * (py - this->ty)) + (this->b * (this->tx - px))));
            		}
HXLINE( 792)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,_hx___transformInverseY,return )

void Matrix_obj::_hx___transformPoint( ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_803___transformPoint)
HXLINE( 804)		Float px = point->x;
HXLINE( 805)		Float py = point->y;
HXLINE( 807)		point->x = (((px * this->a) + (py * this->c)) + this->tx);
HXLINE( 808)		point->y = (((px * this->b) + (py * this->d)) + this->ty);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,_hx___transformPoint,(void))

Float Matrix_obj::_hx___transformX(Float px,Float py){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_813___transformX)
HXDLIN( 813)		return (((px * this->a) + (py * this->c)) + this->tx);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,_hx___transformX,return )

Float Matrix_obj::_hx___transformY(Float px,Float py){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_818___transformY)
HXDLIN( 818)		return (((px * this->b) + (py * this->d)) + this->ty);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,_hx___transformY,return )

void Matrix_obj::_hx___translateTransformed(Float px,Float py){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_822___translateTransformed)
HXLINE( 823)		this->tx = (((px * this->a) + (py * this->c)) + this->tx);
HXLINE( 824)		this->ty = (((px * this->b) + (py * this->d)) + this->ty);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,_hx___translateTransformed,(void))

 ::openfl::geom::Matrix Matrix_obj::_hx___identity;

 ::lime::utils::ObjectPool Matrix_obj::_hx___pool;

 ::lime::math::Matrix3 Matrix_obj::_hx___matrix3;


::hx::ObjectPtr< Matrix_obj > Matrix_obj::__new(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty) {
	::hx::ObjectPtr< Matrix_obj > __this = new Matrix_obj();
	__this->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return __this;
}

::hx::ObjectPtr< Matrix_obj > Matrix_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty) {
	Matrix_obj *__this = (Matrix_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Matrix_obj), true, "openfl.geom.Matrix"));
	*(void **)__this = Matrix_obj::_hx_vtable;
	__this->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return __this;
}

Matrix_obj::Matrix_obj()
{
}

void Matrix_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix);
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(tx,"tx");
	HX_MARK_MEMBER_NAME(ty,"ty");
	HX_MARK_MEMBER_NAME(_hx___array,"__array");
	HX_MARK_END_CLASS();
}

void Matrix_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(c,"c");
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(tx,"tx");
	HX_VISIT_MEMBER_NAME(ty,"ty");
	HX_VISIT_MEMBER_NAME(_hx___array,"__array");
}

::hx::Val Matrix_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( a ); }
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		if (HX_FIELD_EQ(inName,"c") ) { return ::hx::Val( c ); }
		if (HX_FIELD_EQ(inName,"d") ) { return ::hx::Val( d ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return ::hx::Val( tx ); }
		if (HX_FIELD_EQ(inName,"ty") ) { return ::hx::Val( ty ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return ::hx::Val( setTo_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return ::hx::Val( concat_dyn() ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		if (HX_FIELD_EQ(inName,"invert") ) { return ::hx::Val( invert_dyn() ); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return ::hx::Val( rotate_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { return ::hx::Val( _hx___array ); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return ::hx::Val( toArray_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"identity") ) { return ::hx::Val( identity_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { return ::hx::Val( copyRowTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"createBox") ) { return ::hx::Val( createBox_dyn() ); }
		if (HX_FIELD_EQ(inName,"translate") ) { return ::hx::Val( translate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"to3DString") ) { return ::hx::Val( to3DString_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { return ::hx::Val( copyRowFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRotation") ) { return ::hx::Val( setRotation_dyn() ); }
		if (HX_FIELD_EQ(inName,"toMozString") ) { return ::hx::Val( toMozString_dyn() ); }
		if (HX_FIELD_EQ(inName,"__toMatrix3") ) { return ::hx::Val( _hx___toMatrix3_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { return ::hx::Val( copyColumnTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"__transformX") ) { return ::hx::Val( _hx___transformX_dyn() ); }
		if (HX_FIELD_EQ(inName,"__transformY") ) { return ::hx::Val( _hx___transformY_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__cleanValues") ) { return ::hx::Val( _hx___cleanValues_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { return ::hx::Val( copyColumnFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"transformPoint") ) { return ::hx::Val( transformPoint_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformPoint") ) { return ::hx::Val( _hx___transformPoint_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBox") ) { return ::hx::Val( createGradientBox_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"deltaTransformPoint") ) { return ::hx::Val( deltaTransformPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"__transformInverseX") ) { return ::hx::Val( _hx___transformInverseX_dyn() ); }
		if (HX_FIELD_EQ(inName,"__transformInverseY") ) { return ::hx::Val( _hx___transformInverseY_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__translateTransformed") ) { return ::hx::Val( _hx___translateTransformed_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__transformInversePoint") ) { return ::hx::Val( _hx___transformInversePoint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Matrix_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { outValue = ( _hx___pool ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__matrix3") ) { outValue = ( _hx___matrix3 ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { outValue = ( _hx___identity ); return true; }
	}
	return false;
}

::hx::Val Matrix_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { _hx___array=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Matrix_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { _hx___pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__matrix3") ) { _hx___matrix3=ioValue.Cast<  ::lime::math::Matrix3 >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { _hx___identity=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
	}
	return false;
}

void Matrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("a",61,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("c",63,00,00,00));
	outFields->push(HX_("d",64,00,00,00));
	outFields->push(HX_("tx",84,65,00,00));
	outFields->push(HX_("ty",85,65,00,00));
	outFields->push(HX_("__array",79,c6,ed,8f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Matrix_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Matrix_obj,a),HX_("a",61,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,c),HX_("c",63,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,d),HX_("d",64,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,tx),HX_("tx",84,65,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,ty),HX_("ty",85,65,00,00)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(Matrix_obj,_hx___array),HX_("__array",79,c6,ed,8f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Matrix_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &Matrix_obj::_hx___identity,HX_("__identity",5e,b8,67,5c)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &Matrix_obj::_hx___pool,HX_("__pool",fc,e3,54,f9)},
	{::hx::fsObject /*  ::lime::math::Matrix3 */ ,(void *) &Matrix_obj::_hx___matrix3,HX_("__matrix3",b2,93,b5,14)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Matrix_obj_sMemberFields[] = {
	HX_("a",61,00,00,00),
	HX_("b",62,00,00,00),
	HX_("c",63,00,00,00),
	HX_("d",64,00,00,00),
	HX_("tx",84,65,00,00),
	HX_("ty",85,65,00,00),
	HX_("__array",79,c6,ed,8f),
	HX_("clone",5d,13,63,48),
	HX_("concat",14,09,d0,c7),
	HX_("copyColumnFrom",75,97,b5,3a),
	HX_("copyColumnTo",c6,2e,f6,f6),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("copyRowFrom",6f,45,8b,ef),
	HX_("copyRowTo",40,8a,62,73),
	HX_("createBox",6f,94,d8,49),
	HX_("createGradientBox",5f,ec,c0,25),
	HX_("deltaTransformPoint",5c,4d,f7,15),
	HX_("equals",3f,ee,f2,bf),
	HX_("identity",3e,45,2f,b9),
	HX_("invert",16,e7,d8,9f),
	HX_("rotate",5b,46,20,cb),
	HX_("scale",8a,ce,ce,78),
	HX_("setRotation",00,07,e7,38),
	HX_("setTo",bd,91,2f,7a),
	HX_("to3DString",dd,bc,ef,4e),
	HX_("toMozString",ce,d8,8d,1b),
	HX_("toString",ac,d0,6e,38),
	HX_("transformPoint",44,cf,11,3d),
	HX_("translate",4e,d7,7f,49),
	HX_("toArray",1e,ba,13,f2),
	HX_("__cleanValues",2b,77,c6,85),
	HX_("__toMatrix3",77,c3,27,f1),
	HX_("__transformInversePoint",ec,7e,5b,e2),
	HX_("__transformInverseX",14,4d,b3,7f),
	HX_("__transformInverseY",15,4d,b3,7f),
	HX_("__transformPoint",64,5a,51,71),
	HX_("__transformX",8c,0c,c8,d3),
	HX_("__transformY",8d,0c,c8,d3),
	HX_("__translateTransformed",3d,e3,ea,64),
	::String(null()) };

static void Matrix_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix_obj::_hx___identity,"__identity");
	HX_MARK_MEMBER_NAME(Matrix_obj::_hx___pool,"__pool");
	HX_MARK_MEMBER_NAME(Matrix_obj::_hx___matrix3,"__matrix3");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Matrix_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix_obj::_hx___identity,"__identity");
	HX_VISIT_MEMBER_NAME(Matrix_obj::_hx___pool,"__pool");
	HX_VISIT_MEMBER_NAME(Matrix_obj::_hx___matrix3,"__matrix3");
};

#endif

::hx::Class Matrix_obj::__mClass;

static ::String Matrix_obj_sStaticFields[] = {
	HX_("__identity",5e,b8,67,5c),
	HX_("__pool",fc,e3,54,f9),
	HX_("__matrix3",b2,93,b5,14),
	::String(null())
};

void Matrix_obj::__register()
{
	Matrix_obj _hx_dummy;
	Matrix_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.geom.Matrix",f5,bf,06,9e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix_obj::__GetStatic;
	__mClass->mSetStaticField = &Matrix_obj::__SetStatic;
	__mClass->mMarkFunc = Matrix_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Matrix_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Matrix_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Matrix_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Matrix_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Matrix_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Matrix_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Matrix_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_74_boot)
HXDLIN(  74)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("equals",3f,ee,f2,bf), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20)))))
            				->setFixed(1,HX_("toMozString",ce,d8,8d,1b), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20)))))
            				->setFixed(2,HX_("to3DString",dd,bc,ef,4e), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))))));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_99143fe9fb0bb031_76_boot)
HXDLIN(  76)		_hx___identity =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::geom::Matrix _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_99143fe9fb0bb031_77_boot)
HXDLIN(  77)			return  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::openfl::geom::Matrix m){
            			HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_77_boot)
HXDLIN(  77)			m->identity();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_99143fe9fb0bb031_77_boot)
HXDLIN(  77)		_hx___pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_99143fe9fb0bb031_79_boot)
HXDLIN(  79)		_hx___matrix3 =  ::lime::math::Matrix3_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
}

} // end namespace openfl
} // end namespace geom
