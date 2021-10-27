#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_materials_lightpickers_LightPickerBase
#include <away3d/materials/lightpickers/LightPickerBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_SingleObjectDepthPass
#include <away3d/materials/passes/SingleObjectDepthPass.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f86ce327952c4412_19_new,"away3d.materials.passes.SingleObjectDepthPass","new",0x035eafc1,"away3d.materials.passes.SingleObjectDepthPass.new","away3d/materials/passes/SingleObjectDepthPass.hx",19,0x52ca68ce)
static const Float _hx_array_data_6501bb4f_5[] = {
	1.0,255.0,65025.0,16581375.0,0.00392156862745098,0.00392156862745098,0.00392156862745098,0.0,
};
static const ::String _hx_array_data_6501bb4f_6[] = {
	HX_("va0",a5,de,59,00),HX_("va1",a6,de,59,00),
};
static const ::String _hx_array_data_6501bb4f_7[] = {
	HX_("vt0",32,ef,59,00),HX_("vt1",33,ef,59,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_f86ce327952c4412_55_dispose,"away3d.materials.passes.SingleObjectDepthPass","dispose",0x40912480,"away3d.materials.passes.SingleObjectDepthPass.dispose","away3d/materials/passes/SingleObjectDepthPass.hx",55,0x52ca68ce)
HX_LOCAL_STACK_FRAME(_hx_pos_f86ce327952c4412_70_updateProjectionTextures,"away3d.materials.passes.SingleObjectDepthPass","updateProjectionTextures",0x9aadb24f,"away3d.materials.passes.SingleObjectDepthPass.updateProjectionTextures","away3d/materials/passes/SingleObjectDepthPass.hx",70,0x52ca68ce)
HX_LOCAL_STACK_FRAME(_hx_pos_f86ce327952c4412_89_getVertexCode,"away3d.materials.passes.SingleObjectDepthPass","getVertexCode",0xb631d988,"away3d.materials.passes.SingleObjectDepthPass.getVertexCode","away3d/materials/passes/SingleObjectDepthPass.hx",89,0x52ca68ce)
HX_LOCAL_STACK_FRAME(_hx_pos_f86ce327952c4412_109_getFragmentCode,"away3d.materials.passes.SingleObjectDepthPass","getFragmentCode",0xadaea7b4,"away3d.materials.passes.SingleObjectDepthPass.getFragmentCode","away3d/materials/passes/SingleObjectDepthPass.hx",109,0x52ca68ce)
HX_LOCAL_STACK_FRAME(_hx_pos_f86ce327952c4412_130_getDepthMap,"away3d.materials.passes.SingleObjectDepthPass","getDepthMap",0x12078070,"away3d.materials.passes.SingleObjectDepthPass.getDepthMap","away3d/materials/passes/SingleObjectDepthPass.hx",130,0x52ca68ce)
HX_LOCAL_STACK_FRAME(_hx_pos_f86ce327952c4412_140_getProjection,"away3d.materials.passes.SingleObjectDepthPass","getProjection",0xa83c2766,"away3d.materials.passes.SingleObjectDepthPass.getProjection","away3d/materials/passes/SingleObjectDepthPass.hx",140,0x52ca68ce)
HX_LOCAL_STACK_FRAME(_hx_pos_f86ce327952c4412_147_render,"away3d.materials.passes.SingleObjectDepthPass","render",0xab119e95,"away3d.materials.passes.SingleObjectDepthPass.render","away3d/materials/passes/SingleObjectDepthPass.hx",147,0x52ca68ce)
HX_LOCAL_STACK_FRAME(_hx_pos_f86ce327952c4412_185_activate,"away3d.materials.passes.SingleObjectDepthPass","activate",0xfc76dcb2,"away3d.materials.passes.SingleObjectDepthPass.activate","away3d/materials/passes/SingleObjectDepthPass.hx",185,0x52ca68ce)
namespace away3d{
namespace materials{
namespace passes{

void SingleObjectDepthPass_obj::__construct(::hx::Null< int >  __o_textureSize,::hx::Null< Float >  __o_polyOffset){
            		int textureSize = __o_textureSize.Default(512);
            		Float polyOffset = __o_polyOffset.Default(15);
            	HX_GC_STACKFRAME(&_hx_pos_f86ce327952c4412_19_new)
HXLINE(  26)		this->_projectionTexturesInvalid = true;
HXLINE(  37)		super::__construct(true);
HXLINE(  38)		this->_textureSize = textureSize;
HXLINE(  39)		this->_numUsedStreams = 2;
HXLINE(  40)		this->_numUsedVertexConstants = 7;
HXLINE(  41)		::Array< Float > array = ::Array_obj< Float >::__new(4)->init(0,polyOffset)->init(1,0)->init(2,0)->init(3,0);
HXDLIN(  41)		int length = null();
HXDLIN(  41)		bool fixed = null();
HXDLIN(  41)		::Array< Float > array1 = null();
HXDLIN(  41)		 ::openfl::_Vector::FloatVector vector =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array1,true);
HXDLIN(  41)		{
HXLINE(  41)			int _g = 0;
HXDLIN(  41)			int _g1 = array->length;
HXDLIN(  41)			while((_g < _g1)){
HXLINE(  41)				_g = (_g + 1);
HXDLIN(  41)				int i = (_g - 1);
HXDLIN(  41)				vector->set(i,array->__get(i));
            			}
            		}
HXDLIN(  41)		this->_polyOffset = vector;
HXLINE(  42)		::Array< Float > array2 = ::Array_obj< Float >::fromData( _hx_array_data_6501bb4f_5,8);
HXDLIN(  42)		int length1 = null();
HXDLIN(  42)		bool fixed1 = null();
HXDLIN(  42)		::Array< Float > array3 = null();
HXDLIN(  42)		 ::openfl::_Vector::FloatVector vector1 =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,array3,true);
HXDLIN(  42)		{
HXLINE(  42)			int _g2 = 0;
HXDLIN(  42)			int _g3 = array2->length;
HXDLIN(  42)			while((_g2 < _g3)){
HXLINE(  42)				_g2 = (_g2 + 1);
HXDLIN(  42)				int i = (_g2 - 1);
HXDLIN(  42)				vector1->set(i,array2->__get(i));
            			}
            		}
HXDLIN(  42)		this->_enc = vector1;
HXLINE(  46)		::Array< ::String > array4 = ::Array_obj< ::String >::fromData( _hx_array_data_6501bb4f_6,2);
HXDLIN(  46)		int length2 = null();
HXDLIN(  46)		bool fixed2 = null();
HXDLIN(  46)		::Array< ::String > array5 = null();
HXDLIN(  46)		 ::openfl::_Vector::ObjectVector vector2 =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length2,fixed2,array5,true);
HXDLIN(  46)		{
HXLINE(  46)			int _g4 = 0;
HXDLIN(  46)			int _g5 = array4->length;
HXDLIN(  46)			while((_g4 < _g5)){
HXLINE(  46)				_g4 = (_g4 + 1);
HXDLIN(  46)				int i = (_g4 - 1);
HXDLIN(  46)				vector2->set(i,array4->__get(i));
            			}
            		}
HXDLIN(  46)		this->_animatableAttributes = vector2;
HXLINE(  47)		::Array< ::String > array6 = ::Array_obj< ::String >::fromData( _hx_array_data_6501bb4f_7,2);
HXDLIN(  47)		int length3 = null();
HXDLIN(  47)		bool fixed3 = null();
HXDLIN(  47)		::Array< ::String > array7 = null();
HXDLIN(  47)		 ::openfl::_Vector::ObjectVector vector3 =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length3,fixed3,array7,true);
HXDLIN(  47)		{
HXLINE(  47)			int _g6 = 0;
HXDLIN(  47)			int _g7 = array6->length;
HXDLIN(  47)			while((_g6 < _g7)){
HXLINE(  47)				_g6 = (_g6 + 1);
HXDLIN(  47)				int i = (_g6 - 1);
HXDLIN(  47)				vector3->set(i,array6->__get(i));
            			}
            		}
HXDLIN(  47)		this->_animationTargetRegisters = vector3;
            	}

Dynamic SingleObjectDepthPass_obj::__CreateEmpty() { return new SingleObjectDepthPass_obj; }

void *SingleObjectDepthPass_obj::_hx_vtable = 0;

Dynamic SingleObjectDepthPass_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SingleObjectDepthPass_obj > _hx_result = new SingleObjectDepthPass_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SingleObjectDepthPass_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x048a1b61) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x048a1b61;
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		return inClassId==(int)0x5a0f1d75;
	}
}

void SingleObjectDepthPass_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_f86ce327952c4412_55_dispose)
HXDLIN(  55)		if (::hx::IsNotNull( this->_textures )) {
HXLINE(  56)			{
HXLINE(  56)				int _g = 0;
HXDLIN(  56)				int _g1 = this->_textures->get_length();
HXDLIN(  56)				while((_g < _g1)){
HXLINE(  56)					_g = (_g + 1);
HXDLIN(  56)					int i = (_g - 1);
HXLINE(  57)					 ::haxe::ds::ObjectMap map = this->_textures->get(i).StaticCast<  ::haxe::ds::ObjectMap >();
HXLINE(  58)					{
HXLINE(  58)						 ::Dynamic texture = map->iterator();
HXDLIN(  58)						while(( (bool)(texture->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  58)							 ::openfl::display3D::textures::Texture texture1 = ( ( ::openfl::display3D::textures::Texture)(texture->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  59)							texture1->dispose();
            						}
            					}
            				}
            			}
HXLINE(  62)			this->_textures = null();
            		}
            	}


void SingleObjectDepthPass_obj::updateProjectionTextures(){
            	HX_GC_STACKFRAME(&_hx_pos_f86ce327952c4412_70_updateProjectionTextures)
HXLINE(  71)		if (::hx::IsNotNull( this->_textures )) {
HXLINE(  72)			int _g = 0;
HXDLIN(  72)			int _g1 = this->_textures->get_length();
HXDLIN(  72)			while((_g < _g1)){
HXLINE(  72)				_g = (_g + 1);
HXDLIN(  72)				int i = (_g - 1);
HXLINE(  73)				 ::haxe::ds::ObjectMap map = this->_textures->get(i).StaticCast<  ::haxe::ds::ObjectMap >();
HXLINE(  74)				{
HXLINE(  74)					 ::Dynamic texture = map->iterator();
HXDLIN(  74)					while(( (bool)(texture->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  74)						 ::openfl::display3D::textures::Texture texture1 = ( ( ::openfl::display3D::textures::Texture)(texture->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  75)						texture1->dispose();
            					}
            				}
            			}
            		}
HXLINE(  80)		bool fixed = null();
HXDLIN(  80)		::Array< ::Dynamic> array = null();
HXDLIN(  80)		this->_textures =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed,array,true);
HXLINE(  81)		this->_projections =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  82)		this->_projectionTexturesInvalid = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SingleObjectDepthPass_obj,updateProjectionTextures,(void))

::String SingleObjectDepthPass_obj::getVertexCode(){
            	HX_STACKFRAME(&_hx_pos_f86ce327952c4412_89_getVertexCode)
HXLINE(  90)		::String code = ((HX_("mul vt7, vt1, vc4.x\t\n",9c,f7,ff,e6) + HX_("add vt7, vt7, vt0\t\t\n",f7,1d,0e,a7)) + HX_("mov vt7.w, vt0.w\t\t\n",79,76,2b,95));
HXLINE(  96)		code = (code + (HX_("m44 vt2, vt7, vc0\t\t\n",ff,c1,62,77) + HX_("mov op, vt2\t\t\t\n",74,5c,10,fc)));
HXLINE( 100)		code = (code + HX_("div v0, vt2, vt2.w \n",dc,90,e5,f5));
HXLINE( 102)		return code;
            	}


::String SingleObjectDepthPass_obj::getFragmentCode(::String animationCode){
            	HX_STACKFRAME(&_hx_pos_f86ce327952c4412_109_getFragmentCode)
HXLINE( 110)		::String code = HX_("",00,00,00,00);
HXLINE( 113)		code = (code + ((((HX_("mul ft0, fc0, v0.z     \n",fd,32,ba,9b) + HX_("frc ft0, ft0           \n",df,ad,d7,4f)) + HX_("mul ft1, ft0.yzww, fc1 \n",02,f8,cb,8c)) + HX_("sub ft0, ft0, ft1      \n",27,12,1f,f8)) + HX_("mov oc, ft0            \n",fc,d4,42,f8)));
HXLINE( 119)		return code;
            	}


 ::openfl::display3D::textures::Texture SingleObjectDepthPass_obj::getDepthMap(::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_f86ce327952c4412_130_getDepthMap)
HXDLIN( 130)		return ( ( ::openfl::display3D::textures::Texture)(this->_textures->get(stage3DProxy->_stage3DIndex).StaticCast<  ::haxe::ds::ObjectMap >()->get(renderable)) );
            	}


HX_DEFINE_DYNAMIC_FUNC2(SingleObjectDepthPass_obj,getDepthMap,return )

 ::openfl::geom::Matrix3D SingleObjectDepthPass_obj::getProjection(::Dynamic renderable){
            	HX_STACKFRAME(&_hx_pos_f86ce327952c4412_140_getProjection)
HXDLIN( 140)		return ( ( ::openfl::geom::Matrix3D)(this->_projections->get(renderable)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(SingleObjectDepthPass_obj,getProjection,return )

void SingleObjectDepthPass_obj::render(::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D viewProjection){
            	HX_GC_STACKFRAME(&_hx_pos_f86ce327952c4412_147_render)
HXLINE( 149)		int contextIndex = stage3DProxy->_stage3DIndex;
HXLINE( 150)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE( 153)		 ::openfl::_Vector::ObjectVector lights = this->_lightPicker->get_allPickedLights();
HXLINE( 155)		if (::hx::IsNull( this->_textures->get(contextIndex).StaticCast<  ::haxe::ds::ObjectMap >() )) {
HXLINE( 156)			::Dynamic this1 = this->_textures;
HXDLIN( 156)			( ( ::openfl::_Vector::ObjectVector)(this1) )->set(contextIndex, ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX )).StaticCast<  ::haxe::ds::ObjectMap >();
            		}
HXLINE( 158)		if (!(this->_projections->exists(renderable))) {
HXLINE( 159)			::Dynamic this1 = this->_projections;
HXDLIN( 159)			 ::openfl::geom::Matrix3D v =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
HXDLIN( 159)			( ( ::haxe::ds::ObjectMap)(this1) )->set(renderable,v);
            		}
HXLINE( 151)		int len = lights->get_length();
HXLINE( 152)		 ::away3d::lights::LightBase light = lights->get(0).StaticCast<  ::away3d::lights::LightBase >();
HXLINE( 148)		 ::openfl::geom::Matrix3D matrix = light->getObjectProjectionMatrix(renderable,camera,( ( ::openfl::geom::Matrix3D)(this->_projections->get(renderable)) ));
HXLINE( 168)		if (!(this->_textures->get(contextIndex).StaticCast<  ::haxe::ds::ObjectMap >()->exists(renderable))) {
HXLINE( 169)			::Dynamic this1 = this->_textures->get(contextIndex).StaticCast<  ::haxe::ds::ObjectMap >();
HXDLIN( 169)			 ::openfl::display3D::textures::Texture v = context->createTexture(this->_textureSize,this->_textureSize,1,true,null());
HXDLIN( 169)			( ( ::haxe::ds::ObjectMap)(this1) )->set(renderable,v);
            		}
HXLINE( 170)		 ::openfl::display3D::textures::Texture target = ( ( ::openfl::display3D::textures::Texture)(this->_textures->get(contextIndex).StaticCast<  ::haxe::ds::ObjectMap >()->get(renderable)) );
HXLINE( 172)		stage3DProxy->setRenderTarget(target,true,null());
HXLINE( 173)		context->clear(((Float)1.0),((Float)1.0),((Float)1.0),null(),null(),null(),null());
HXLINE( 174)		context->setProgramConstantsFromMatrix(1,0,matrix,true);
HXLINE( 175)		context->setProgramConstantsFromVector(0,0,this->_enc,2);
HXLINE( 176)		::away3d::core::base::IRenderable_obj::activateVertexBuffer(renderable,0,stage3DProxy);
HXLINE( 177)		::away3d::core::base::IRenderable_obj::activateVertexNormalBuffer(renderable,1,stage3DProxy);
HXLINE( 178)		 ::openfl::display3D::IndexBuffer3D _hx_tmp = ::away3d::core::base::IRenderable_obj::getIndexBuffer(renderable,stage3DProxy);
HXDLIN( 178)		stage3DProxy->drawTriangles(_hx_tmp,0,::away3d::core::base::IRenderable_obj::get_numTriangles(renderable));
            	}


void SingleObjectDepthPass_obj::activate( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_f86ce327952c4412_185_activate)
HXLINE( 186)		if (this->_projectionTexturesInvalid) {
HXLINE( 187)			this->updateProjectionTextures();
            		}
HXLINE( 189)		this->super::activate(stage3DProxy,camera);
HXLINE( 190)		stage3DProxy->get_context3D()->setProgramConstantsFromVector(1,4,this->_polyOffset,1);
            	}



::hx::ObjectPtr< SingleObjectDepthPass_obj > SingleObjectDepthPass_obj::__new(::hx::Null< int >  __o_textureSize,::hx::Null< Float >  __o_polyOffset) {
	::hx::ObjectPtr< SingleObjectDepthPass_obj > __this = new SingleObjectDepthPass_obj();
	__this->__construct(__o_textureSize,__o_polyOffset);
	return __this;
}

::hx::ObjectPtr< SingleObjectDepthPass_obj > SingleObjectDepthPass_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_textureSize,::hx::Null< Float >  __o_polyOffset) {
	SingleObjectDepthPass_obj *__this = (SingleObjectDepthPass_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SingleObjectDepthPass_obj), true, "away3d.materials.passes.SingleObjectDepthPass"));
	*(void **)__this = SingleObjectDepthPass_obj::_hx_vtable;
	__this->__construct(__o_textureSize,__o_polyOffset);
	return __this;
}

SingleObjectDepthPass_obj::SingleObjectDepthPass_obj()
{
}

void SingleObjectDepthPass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SingleObjectDepthPass);
	HX_MARK_MEMBER_NAME(_textures,"_textures");
	HX_MARK_MEMBER_NAME(_projections,"_projections");
	HX_MARK_MEMBER_NAME(_textureSize,"_textureSize");
	HX_MARK_MEMBER_NAME(_polyOffset,"_polyOffset");
	HX_MARK_MEMBER_NAME(_enc,"_enc");
	HX_MARK_MEMBER_NAME(_projectionTexturesInvalid,"_projectionTexturesInvalid");
	 ::away3d::materials::passes::MaterialPassBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SingleObjectDepthPass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textures,"_textures");
	HX_VISIT_MEMBER_NAME(_projections,"_projections");
	HX_VISIT_MEMBER_NAME(_textureSize,"_textureSize");
	HX_VISIT_MEMBER_NAME(_polyOffset,"_polyOffset");
	HX_VISIT_MEMBER_NAME(_enc,"_enc");
	HX_VISIT_MEMBER_NAME(_projectionTexturesInvalid,"_projectionTexturesInvalid");
	 ::away3d::materials::passes::MaterialPassBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SingleObjectDepthPass_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_enc") ) { return ::hx::Val( _enc ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { return ::hx::Val( _textures ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_polyOffset") ) { return ::hx::Val( _polyOffset ); }
		if (HX_FIELD_EQ(inName,"getDepthMap") ) { return ::hx::Val( getDepthMap_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_projections") ) { return ::hx::Val( _projections ); }
		if (HX_FIELD_EQ(inName,"_textureSize") ) { return ::hx::Val( _textureSize ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return ::hx::Val( getVertexCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"getProjection") ) { return ::hx::Val( getProjection_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return ::hx::Val( getFragmentCode_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"updateProjectionTextures") ) { return ::hx::Val( updateProjectionTextures_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_projectionTexturesInvalid") ) { return ::hx::Val( _projectionTexturesInvalid ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SingleObjectDepthPass_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_enc") ) { _enc=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { _textures=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_polyOffset") ) { _polyOffset=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_projections") ) { _projections=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textureSize") ) { _textureSize=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_projectionTexturesInvalid") ) { _projectionTexturesInvalid=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SingleObjectDepthPass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_textures",97,ee,64,ad));
	outFields->push(HX_("_projections",05,a3,95,9b));
	outFields->push(HX_("_textureSize",3d,4d,dc,68));
	outFields->push(HX_("_polyOffset",1e,18,8c,c7));
	outFields->push(HX_("_enc",db,48,18,3f));
	outFields->push(HX_("_projectionTexturesInvalid",91,28,2a,b1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SingleObjectDepthPass_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SingleObjectDepthPass_obj,_textures),HX_("_textures",97,ee,64,ad)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(SingleObjectDepthPass_obj,_projections),HX_("_projections",05,a3,95,9b)},
	{::hx::fsInt,(int)offsetof(SingleObjectDepthPass_obj,_textureSize),HX_("_textureSize",3d,4d,dc,68)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(SingleObjectDepthPass_obj,_polyOffset),HX_("_polyOffset",1e,18,8c,c7)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(SingleObjectDepthPass_obj,_enc),HX_("_enc",db,48,18,3f)},
	{::hx::fsBool,(int)offsetof(SingleObjectDepthPass_obj,_projectionTexturesInvalid),HX_("_projectionTexturesInvalid",91,28,2a,b1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SingleObjectDepthPass_obj_sStaticStorageInfo = 0;
#endif

static ::String SingleObjectDepthPass_obj_sMemberFields[] = {
	HX_("_textures",97,ee,64,ad),
	HX_("_projections",05,a3,95,9b),
	HX_("_textureSize",3d,4d,dc,68),
	HX_("_polyOffset",1e,18,8c,c7),
	HX_("_enc",db,48,18,3f),
	HX_("_projectionTexturesInvalid",91,28,2a,b1),
	HX_("dispose",9f,80,4c,bb),
	HX_("updateProjectionTextures",50,c3,84,81),
	HX_("getVertexCode",e7,96,f3,2e),
	HX_("getFragmentCode",d3,ba,61,28),
	HX_("getDepthMap",0f,d8,0c,bd),
	HX_("getProjection",c5,e4,fd,20),
	HX_("render",56,6b,29,05),
	HX_("activate",b3,1b,ac,e5),
	::String(null()) };

::hx::Class SingleObjectDepthPass_obj::__mClass;

void SingleObjectDepthPass_obj::__register()
{
	SingleObjectDepthPass_obj _hx_dummy;
	SingleObjectDepthPass_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.passes.SingleObjectDepthPass",4f,bb,01,65);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SingleObjectDepthPass_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SingleObjectDepthPass_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SingleObjectDepthPass_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SingleObjectDepthPass_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace passes
