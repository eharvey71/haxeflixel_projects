#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CanvasRenderer
#include <openfl/display/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_ITileContainer
#include <openfl/display/ITileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_SimpleButton
#include <openfl/display/SimpleButton.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Tilemap
#include <openfl/display/Tilemap.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasBitmap
#include <openfl/display/_internal/CanvasBitmap.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasBitmapData
#include <openfl/display/_internal/CanvasBitmapData.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasDisplayObject
#include <openfl/display/_internal/CanvasDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasDisplayObjectContainer
#include <openfl/display/_internal/CanvasDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasSimpleButton
#include <openfl/display/_internal/CanvasSimpleButton.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasTextField
#include <openfl/display/_internal/CanvasTextField.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasTilemap
#include <openfl/display/_internal/CanvasTilemap.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasVideo
#include <openfl/display/_internal/CanvasVideo.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_media_Video
#include <openfl/media/Video.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dcbf857ab860ed73_35_new,"openfl.display.CanvasRenderer","new",0xb7099f97,"openfl.display.CanvasRenderer.new","openfl/display/CanvasRenderer.hx",35,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_71_applySmoothing,"openfl.display.CanvasRenderer","applySmoothing",0xf98f304f,"openfl.display.CanvasRenderer.applySmoothing","openfl/display/CanvasRenderer.hx",71,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_80_setTransform,"openfl.display.CanvasRenderer","setTransform",0x3b7aff53,"openfl.display.CanvasRenderer.setTransform","openfl/display/CanvasRenderer.hx",80,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_104___clear,"openfl.display.CanvasRenderer","__clear",0x050d0124,"openfl.display.CanvasRenderer.__clear","openfl/display/CanvasRenderer.hx",104,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_129___popMask,"openfl.display.CanvasRenderer","__popMask",0xbaf74a74,"openfl.display.CanvasRenderer.__popMask","openfl/display/CanvasRenderer.hx",129,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_133___popMaskObject,"openfl.display.CanvasRenderer","__popMaskObject",0x24188c53,"openfl.display.CanvasRenderer.__popMaskObject","openfl/display/CanvasRenderer.hx",133,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_147___popMaskRect,"openfl.display.CanvasRenderer","__popMaskRect",0xaa600db8,"openfl.display.CanvasRenderer.__popMaskRect","openfl/display/CanvasRenderer.hx",147,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_151___pushMask,"openfl.display.CanvasRenderer","__pushMask",0x88887caf,"openfl.display.CanvasRenderer.__pushMask","openfl/display/CanvasRenderer.hx",151,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_164___pushMaskObject,"openfl.display.CanvasRenderer","__pushMaskObject",0xbb0d9cce,"openfl.display.CanvasRenderer.__pushMaskObject","openfl/display/CanvasRenderer.hx",164,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_177___pushMaskRect,"openfl.display.CanvasRenderer","__pushMaskRect",0x16167973,"openfl.display.CanvasRenderer.__pushMaskRect","openfl/display/CanvasRenderer.hx",177,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_189___render,"openfl.display.CanvasRenderer","__render",0x63d57fdf,"openfl.display.CanvasRenderer.__render","openfl/display/CanvasRenderer.hx",189,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_193___renderDrawable,"openfl.display.CanvasRenderer","__renderDrawable",0x87e19e9d,"openfl.display.CanvasRenderer.__renderDrawable","openfl/display/CanvasRenderer.hx",193,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_219___renderDrawableMask,"openfl.display.CanvasRenderer","__renderDrawableMask",0x75211e29,"openfl.display.CanvasRenderer.__renderDrawableMask","openfl/display/CanvasRenderer.hx",219,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_245___setBlendMode,"openfl.display.CanvasRenderer","__setBlendMode",0xc677459b,"openfl.display.CanvasRenderer.__setBlendMode","openfl/display/CanvasRenderer.hx",245,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_256___setBlendModeContext,"openfl.display.CanvasRenderer","__setBlendModeContext",0x277f3194,"openfl.display.CanvasRenderer.__setBlendModeContext","openfl/display/CanvasRenderer.hx",256,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_35_boot,"openfl.display.CanvasRenderer","boot",0x697b051b,"openfl.display.CanvasRenderer.boot","openfl/display/CanvasRenderer.hx",35,0x2676f477)
namespace openfl{
namespace display{

void CanvasRenderer_obj::__construct( ::Dynamic context){
            	HX_GC_STACKFRAME(&_hx_pos_dcbf857ab860ed73_35_new)
HXLINE(  46)		this->pixelRatio = ((Float)1);
HXLINE(  54)		super::__construct();
HXLINE(  56)		this->context = context;
HXLINE(  58)		this->_hx___tempMatrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  61)		this->_hx___type = HX_("canvas",d8,54,42,b8);
            	}

Dynamic CanvasRenderer_obj::__CreateEmpty() { return new CanvasRenderer_obj; }

void *CanvasRenderer_obj::_hx_vtable = 0;

Dynamic CanvasRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CanvasRenderer_obj > _hx_result = new CanvasRenderer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CanvasRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x16827685) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x16827685;
		}
	} else {
		return inClassId==(int)0x49529132;
	}
}

void CanvasRenderer_obj::applySmoothing( ::Dynamic context,bool value){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_71_applySmoothing)
HXDLIN(  71)		context->__SetField(HX_("imageSmoothingEnabled",e8,4e,0e,94),value,::hx::paccDynamic);
            	}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderer_obj,applySmoothing,(void))

void CanvasRenderer_obj::setTransform( ::openfl::geom::Matrix transform, ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_80_setTransform)
HXLINE(  81)		if (::hx::IsNull( context )) {
HXLINE(  83)			context = this->context;
            		}
            		else {
HXLINE(  85)			bool _hx_tmp;
HXDLIN(  85)			if (::hx::IsEq( this->context,context )) {
HXLINE(  85)				_hx_tmp = ::hx::IsNotNull( this->_hx___worldTransform );
            			}
            			else {
HXLINE(  85)				_hx_tmp = false;
            			}
HXDLIN(  85)			if (_hx_tmp) {
HXLINE(  87)				this->_hx___tempMatrix->copyFrom(transform);
HXLINE(  88)				this->_hx___tempMatrix->concat(this->_hx___worldTransform);
HXLINE(  89)				transform = this->_hx___tempMatrix;
            			}
            		}
HXLINE(  92)		if (this->_hx___roundPixels) {
HXLINE(  94)			 ::Dynamic context1 =  ::Dynamic(context->__Field(HX_("setTransform",6a,ed,e2,69),::hx::paccDynamic));
HXDLIN(  94)			Float transform1 = transform->a;
HXDLIN(  94)			Float transform2 = transform->b;
HXDLIN(  94)			Float transform3 = transform->c;
HXDLIN(  94)			Float transform4 = transform->d;
HXDLIN(  94)			int _hx_tmp = ::Std_obj::_hx_int(transform->tx);
HXDLIN(  94)			context1(transform1,transform2,transform3,transform4,_hx_tmp,::Std_obj::_hx_int(transform->ty));
            		}
            		else {
HXLINE(  98)			context->__Field(HX_("setTransform",6a,ed,e2,69),::hx::paccDynamic)(transform->a,transform->b,transform->c,transform->d,transform->tx,transform->ty);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderer_obj,setTransform,(void))

void CanvasRenderer_obj::_hx___clear(){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_104___clear)
HXDLIN( 104)		if (::hx::IsNotNull( this->_hx___stage )) {
HXLINE( 106)			 ::Dynamic cacheBlendMode = this->_hx___blendMode;
HXLINE( 107)			this->_hx___blendMode = null();
HXLINE( 108)			this->_hx___setBlendMode(10);
HXLINE( 110)			this->context->__Field(HX_("setTransform",6a,ed,e2,69),::hx::paccDynamic)(1,0,0,1,0,0);
HXLINE( 111)			this->context->__SetField(HX_("globalAlpha",fb,fe,d4,f9),1,::hx::paccDynamic);
HXLINE( 113)			bool _hx_tmp;
HXDLIN( 113)			if (!(this->_hx___stage->_hx___transparent)) {
HXLINE( 113)				_hx_tmp = this->_hx___stage->_hx___clearBeforeRender;
            			}
            			else {
HXLINE( 113)				_hx_tmp = false;
            			}
HXDLIN( 113)			if (_hx_tmp) {
HXLINE( 115)				this->context->__SetField(HX_("fillStyle",ae,cb,c4,52),this->_hx___stage->_hx___colorString,::hx::paccDynamic);
HXLINE( 116)				this->context->__Field(HX_("fillRect",47,45,b9,6c),::hx::paccDynamic)(0,0,(( (Float)(this->_hx___stage->stageWidth) ) * this->_hx___stage->window->_hx___scale),(( (Float)(this->_hx___stage->stageHeight) ) * this->_hx___stage->window->_hx___scale));
            			}
            			else {
HXLINE( 118)				bool _hx_tmp;
HXDLIN( 118)				if (this->_hx___stage->_hx___transparent) {
HXLINE( 118)					_hx_tmp = this->_hx___stage->_hx___clearBeforeRender;
            				}
            				else {
HXLINE( 118)					_hx_tmp = false;
            				}
HXDLIN( 118)				if (_hx_tmp) {
HXLINE( 120)					this->context->__Field(HX_("clearRect",51,35,68,bf),::hx::paccDynamic)(0,0,(( (Float)(this->_hx___stage->stageWidth) ) * this->_hx___stage->window->_hx___scale),(( (Float)(this->_hx___stage->stageHeight) ) * this->_hx___stage->window->_hx___scale));
            				}
            			}
HXLINE( 123)			this->_hx___setBlendMode(cacheBlendMode);
            		}
            	}


void CanvasRenderer_obj::_hx___popMask(){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_129___popMask)
HXDLIN( 129)		this->context->__Field(HX_("restore",4e,67,b0,6a),::hx::paccDynamic)();
            	}


void CanvasRenderer_obj::_hx___popMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  __o_handleScrollRect){
            		bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_133___popMaskObject)
HXLINE( 134)		bool _hx_tmp;
HXDLIN( 134)		if (!(object->_hx___isCacheBitmapRender)) {
HXLINE( 134)			_hx_tmp = ::hx::IsNotNull( object->_hx___mask );
            		}
            		else {
HXLINE( 134)			_hx_tmp = false;
            		}
HXDLIN( 134)		if (_hx_tmp) {
HXLINE( 136)			this->_hx___popMask();
            		}
HXLINE( 139)		bool _hx_tmp1;
HXDLIN( 139)		if (handleScrollRect) {
HXLINE( 139)			_hx_tmp1 = ::hx::IsNotNull( object->_hx___scrollRect );
            		}
            		else {
HXLINE( 139)			_hx_tmp1 = false;
            		}
HXDLIN( 139)		if (_hx_tmp1) {
HXLINE( 141)			this->_hx___popMaskRect();
            		}
            	}


void CanvasRenderer_obj::_hx___popMaskRect(){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_147___popMaskRect)
HXDLIN( 147)		this->context->__Field(HX_("restore",4e,67,b0,6a),::hx::paccDynamic)();
            	}


void CanvasRenderer_obj::_hx___pushMask( ::openfl::display::DisplayObject mask){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_151___pushMask)
HXLINE( 152)		this->context->__Field(HX_("save",3d,8b,4d,4c),::hx::paccDynamic)();
HXLINE( 154)		this->setTransform(mask->_hx___renderTransform,this->context);
HXLINE( 156)		this->context->__Field(HX_("beginPath",6e,c4,2b,93),::hx::paccDynamic)();
HXLINE( 157)		this->_hx___renderDrawableMask(mask);
HXLINE( 158)		this->context->__Field(HX_("closePath",7d,65,20,14),::hx::paccDynamic)();
HXLINE( 160)		this->context->__Field(HX_("clip",d0,6e,c2,41),::hx::paccDynamic)();
            	}


void CanvasRenderer_obj::_hx___pushMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  __o_handleScrollRect){
            		bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_164___pushMaskObject)
HXLINE( 165)		bool _hx_tmp;
HXDLIN( 165)		if (handleScrollRect) {
HXLINE( 165)			_hx_tmp = ::hx::IsNotNull( object->_hx___scrollRect );
            		}
            		else {
HXLINE( 165)			_hx_tmp = false;
            		}
HXDLIN( 165)		if (_hx_tmp) {
HXLINE( 167)			this->_hx___pushMaskRect(object->_hx___scrollRect,object->_hx___renderTransform);
            		}
HXLINE( 170)		bool _hx_tmp1;
HXDLIN( 170)		if (!(object->_hx___isCacheBitmapRender)) {
HXLINE( 170)			_hx_tmp1 = ::hx::IsNotNull( object->_hx___mask );
            		}
            		else {
HXLINE( 170)			_hx_tmp1 = false;
            		}
HXDLIN( 170)		if (_hx_tmp1) {
HXLINE( 172)			this->_hx___pushMask(object->_hx___mask);
            		}
            	}


void CanvasRenderer_obj::_hx___pushMaskRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_177___pushMaskRect)
HXLINE( 178)		this->context->__Field(HX_("save",3d,8b,4d,4c),::hx::paccDynamic)();
HXLINE( 180)		this->setTransform(transform,this->context);
HXLINE( 182)		this->context->__Field(HX_("beginPath",6e,c4,2b,93),::hx::paccDynamic)();
HXLINE( 183)		this->context->__Field(HX_("rect",24,4d,a7,4b),::hx::paccDynamic)(rect->x,rect->y,rect->width,rect->height);
HXLINE( 184)		this->context->__Field(HX_("clip",d0,6e,c2,41),::hx::paccDynamic)();
            	}


void CanvasRenderer_obj::_hx___render(::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_189___render)
HXDLIN( 189)		this->_hx___renderDrawable(object);
            	}


void CanvasRenderer_obj::_hx___renderDrawable(::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_193___renderDrawable)
HXLINE( 194)		if (::hx::IsNull( object )) {
HXLINE( 194)			return;
            		}
HXLINE( 196)		switch((int)(( (int)(object->__Field(HX_("__drawableType",98,b4,3c,42),::hx::paccDynamic)) ))){
            			case (int)0: {
HXLINE( 199)				::openfl::display::_internal::CanvasBitmapData_obj::renderDrawable(( ( ::openfl::display::BitmapData)(object) ),::hx::ObjectPtr<OBJ_>(this));
            			}
            			break;
            			case (int)2: {
HXLINE( 203)				::openfl::display::_internal::CanvasBitmap_obj::renderDrawable(( ( ::openfl::display::Bitmap)(object) ),::hx::ObjectPtr<OBJ_>(this));
            			}
            			break;
            			case (int)3: {
HXLINE( 205)				::openfl::display::_internal::CanvasDisplayObject_obj::renderDrawable(( ( ::openfl::display::DisplayObject)(object) ),::hx::ObjectPtr<OBJ_>(this));
            			}
            			break;
            			case (int)4: case (int)5: {
HXLINE( 201)				::openfl::display::_internal::CanvasDisplayObjectContainer_obj::renderDrawable(( ( ::openfl::display::DisplayObjectContainer)(object) ),::hx::ObjectPtr<OBJ_>(this));
            			}
            			break;
            			case (int)6: {
HXLINE( 207)				::openfl::display::_internal::CanvasSimpleButton_obj::renderDrawable(( ( ::openfl::display::SimpleButton)(object) ),::hx::ObjectPtr<OBJ_>(this));
            			}
            			break;
            			case (int)7: {
HXLINE( 209)				::openfl::display::_internal::CanvasTextField_obj::renderDrawable(( ( ::openfl::text::TextField)(object) ),::hx::ObjectPtr<OBJ_>(this));
            			}
            			break;
            			case (int)8: {
HXLINE( 211)				::openfl::display::_internal::CanvasVideo_obj::renderDrawable(( ( ::openfl::media::Video)(object) ),::hx::ObjectPtr<OBJ_>(this));
            			}
            			break;
            			case (int)9: {
HXLINE( 213)				::openfl::display::_internal::CanvasTilemap_obj::renderDrawable(( ( ::openfl::display::Tilemap)(object) ),::hx::ObjectPtr<OBJ_>(this));
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderer_obj,_hx___renderDrawable,(void))

void CanvasRenderer_obj::_hx___renderDrawableMask(::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_219___renderDrawableMask)
HXLINE( 220)		if (::hx::IsNull( object )) {
HXLINE( 220)			return;
            		}
HXLINE( 222)		switch((int)(( (int)(object->__Field(HX_("__drawableType",98,b4,3c,42),::hx::paccDynamic)) ))){
            			case (int)0: {
HXLINE( 225)				::openfl::display::_internal::CanvasBitmapData_obj::renderDrawableMask(( ( ::openfl::display::BitmapData)(object) ),::hx::ObjectPtr<OBJ_>(this));
            			}
            			break;
            			case (int)2: {
HXLINE( 229)				::openfl::display::_internal::CanvasBitmap_obj::renderDrawableMask(( ( ::openfl::display::Bitmap)(object) ),::hx::ObjectPtr<OBJ_>(this));
            			}
            			break;
            			case (int)3: {
HXLINE( 231)				::openfl::display::_internal::CanvasDisplayObject_obj::renderDrawableMask(( ( ::openfl::display::DisplayObject)(object) ),::hx::ObjectPtr<OBJ_>(this));
            			}
            			break;
            			case (int)4: case (int)5: {
HXLINE( 227)				::openfl::display::_internal::CanvasDisplayObjectContainer_obj::renderDrawableMask(( ( ::openfl::display::DisplayObjectContainer)(object) ),::hx::ObjectPtr<OBJ_>(this));
            			}
            			break;
            			case (int)6: {
HXLINE( 233)				::openfl::display::_internal::CanvasSimpleButton_obj::renderDrawableMask(( ( ::openfl::display::SimpleButton)(object) ),::hx::ObjectPtr<OBJ_>(this));
            			}
            			break;
            			case (int)7: {
HXLINE( 235)				::openfl::display::_internal::CanvasTextField_obj::renderDrawableMask(( ( ::openfl::text::TextField)(object) ),::hx::ObjectPtr<OBJ_>(this));
            			}
            			break;
            			case (int)8: {
HXLINE( 237)				::openfl::display::_internal::CanvasVideo_obj::renderDrawableMask(( ( ::openfl::media::Video)(object) ),::hx::ObjectPtr<OBJ_>(this));
            			}
            			break;
            			case (int)9: {
HXLINE( 239)				::openfl::display::_internal::CanvasTilemap_obj::renderDrawableMask(( ( ::openfl::display::Tilemap)(object) ),::hx::ObjectPtr<OBJ_>(this));
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderer_obj,_hx___renderDrawableMask,(void))

void CanvasRenderer_obj::_hx___setBlendMode( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_245___setBlendMode)
HXLINE( 246)		if (::hx::IsNotNull( this->_hx___overrideBlendMode )) {
HXLINE( 246)			value = this->_hx___overrideBlendMode;
            		}
HXLINE( 247)		if (::hx::IsEq( this->_hx___blendMode,value )) {
HXLINE( 247)			return;
            		}
HXLINE( 249)		this->_hx___blendMode = value;
HXLINE( 250)		this->_hx___setBlendModeContext(this->context,value);
            	}


void CanvasRenderer_obj::_hx___setBlendModeContext( ::Dynamic context, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_256___setBlendModeContext)
HXDLIN( 256)		 ::Dynamic _hx_switch_0 = value;
            		if (  (_hx_switch_0==0) ){
HXLINE( 259)			context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("lighter",c3,4a,e3,19),::hx::paccDynamic);
HXDLIN( 259)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE( 266)			context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("darken",5f,36,3a,21),::hx::paccDynamic);
HXDLIN( 266)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==3) ){
HXLINE( 269)			context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("difference",fd,9b,91,46),::hx::paccDynamic);
HXDLIN( 269)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==5) ){
HXLINE( 276)			context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("hard-light",b4,7e,9e,35),::hx::paccDynamic);
HXDLIN( 276)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==8) ){
HXLINE( 287)			context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("lighten",bf,4a,e3,19),::hx::paccDynamic);
HXDLIN( 287)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==9) ){
HXLINE( 290)			context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("multiply",24,e2,8c,9a),::hx::paccDynamic);
HXDLIN( 290)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==11) ){
HXLINE( 293)			context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("overlay",90,43,10,a9),::hx::paccDynamic);
HXDLIN( 293)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==12) ){
HXLINE( 296)			context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("screen",6c,3b,5d,47),::hx::paccDynamic);
HXDLIN( 296)			goto _hx_goto_14;
            		}
            		/* default */{
HXLINE( 307)			context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("source-over",46,01,99,ce),::hx::paccDynamic);
            		}
            		_hx_goto_14:;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderer_obj,_hx___setBlendModeContext,(void))


::hx::ObjectPtr< CanvasRenderer_obj > CanvasRenderer_obj::__new( ::Dynamic context) {
	::hx::ObjectPtr< CanvasRenderer_obj > __this = new CanvasRenderer_obj();
	__this->__construct(context);
	return __this;
}

::hx::ObjectPtr< CanvasRenderer_obj > CanvasRenderer_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic context) {
	CanvasRenderer_obj *__this = (CanvasRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CanvasRenderer_obj), true, "openfl.display.CanvasRenderer"));
	*(void **)__this = CanvasRenderer_obj::_hx_vtable;
	__this->__construct(context);
	return __this;
}

CanvasRenderer_obj::CanvasRenderer_obj()
{
}

void CanvasRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CanvasRenderer);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(pixelRatio,"pixelRatio");
	HX_MARK_MEMBER_NAME(_hx___isDOM,"__isDOM");
	HX_MARK_MEMBER_NAME(_hx___tempMatrix,"__tempMatrix");
	 ::openfl::display::DisplayObjectRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CanvasRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(pixelRatio,"pixelRatio");
	HX_VISIT_MEMBER_NAME(_hx___isDOM,"__isDOM");
	HX_VISIT_MEMBER_NAME(_hx___tempMatrix,"__tempMatrix");
	 ::openfl::display::DisplayObjectRenderer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CanvasRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return ::hx::Val( context ); }
		if (HX_FIELD_EQ(inName,"__isDOM") ) { return ::hx::Val( _hx___isDOM ); }
		if (HX_FIELD_EQ(inName,"__clear") ) { return ::hx::Val( _hx___clear_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__render") ) { return ::hx::Val( _hx___render_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__popMask") ) { return ::hx::Val( _hx___popMask_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pixelRatio") ) { return ::hx::Val( pixelRatio ); }
		if (HX_FIELD_EQ(inName,"__pushMask") ) { return ::hx::Val( _hx___pushMask_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__tempMatrix") ) { return ::hx::Val( _hx___tempMatrix ); }
		if (HX_FIELD_EQ(inName,"setTransform") ) { return ::hx::Val( setTransform_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__popMaskRect") ) { return ::hx::Val( _hx___popMaskRect_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"applySmoothing") ) { return ::hx::Val( applySmoothing_dyn() ); }
		if (HX_FIELD_EQ(inName,"__pushMaskRect") ) { return ::hx::Val( _hx___pushMaskRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setBlendMode") ) { return ::hx::Val( _hx___setBlendMode_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__popMaskObject") ) { return ::hx::Val( _hx___popMaskObject_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__pushMaskObject") ) { return ::hx::Val( _hx___pushMaskObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"__renderDrawable") ) { return ::hx::Val( _hx___renderDrawable_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__renderDrawableMask") ) { return ::hx::Val( _hx___renderDrawableMask_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__setBlendModeContext") ) { return ::hx::Val( _hx___setBlendModeContext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CanvasRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isDOM") ) { _hx___isDOM=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pixelRatio") ) { pixelRatio=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__tempMatrix") ) { _hx___tempMatrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CanvasRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("context",ef,95,77,19));
	outFields->push(HX_("pixelRatio",a5,78,12,83));
	outFields->push(HX_("__isDOM",98,a9,a8,2b));
	outFields->push(HX_("__tempMatrix",95,6f,cb,0f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CanvasRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CanvasRenderer_obj,context),HX_("context",ef,95,77,19)},
	{::hx::fsFloat,(int)offsetof(CanvasRenderer_obj,pixelRatio),HX_("pixelRatio",a5,78,12,83)},
	{::hx::fsBool,(int)offsetof(CanvasRenderer_obj,_hx___isDOM),HX_("__isDOM",98,a9,a8,2b)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(CanvasRenderer_obj,_hx___tempMatrix),HX_("__tempMatrix",95,6f,cb,0f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CanvasRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String CanvasRenderer_obj_sMemberFields[] = {
	HX_("context",ef,95,77,19),
	HX_("pixelRatio",a5,78,12,83),
	HX_("__isDOM",98,a9,a8,2b),
	HX_("__tempMatrix",95,6f,cb,0f),
	HX_("applySmoothing",26,12,60,84),
	HX_("setTransform",6a,ed,e2,69),
	HX_("__clear",6d,ca,b9,b2),
	HX_("__popMask",fd,b7,5f,c4),
	HX_("__popMaskObject",9c,46,0d,10),
	HX_("__popMaskRect",c1,73,e8,16),
	HX_("__pushMask",06,e7,7f,ba),
	HX_("__pushMaskObject",65,e2,3b,45),
	HX_("__pushMaskRect",4a,5b,e7,a0),
	HX_("__render",76,d6,58,ad),
	HX_("__renderDrawable",34,e4,0f,12),
	HX_("__renderDrawableMask",40,7b,d7,45),
	HX_("__setBlendMode",72,27,48,51),
	HX_("__setBlendModeContext",9d,48,5a,f6),
	::String(null()) };

::hx::Class CanvasRenderer_obj::__mClass;

void CanvasRenderer_obj::__register()
{
	CanvasRenderer_obj _hx_dummy;
	CanvasRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.CanvasRenderer",25,88,96,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CanvasRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CanvasRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CanvasRenderer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_35_boot)
HXDLIN(  35)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("applySmoothing",26,12,60,84), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(1,HX_("__setBlendModeContext",9d,48,5a,f6), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(2,HX_("_",5f,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(3,HX_("context",ef,95,77,19), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(4,HX_("setTransform",6a,ed,e2,69), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
}

} // end namespace openfl
} // end namespace display
