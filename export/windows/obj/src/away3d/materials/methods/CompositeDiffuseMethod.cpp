#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_events_ShadingMethodEvent
#include <away3d/events/ShadingMethodEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterData
#include <away3d/materials/compilation/ShaderRegisterData.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicDiffuseMethod
#include <away3d/materials/methods/BasicDiffuseMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_CompositeDiffuseMethod
#include <away3d/materials/methods/CompositeDiffuseMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_LightingMethodBase
#include <away3d/materials/methods/LightingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ee4f079af4128f82_26_new,"away3d.materials.methods.CompositeDiffuseMethod","new",0x7264083b,"away3d.materials.methods.CompositeDiffuseMethod.new","away3d/materials/methods/CompositeDiffuseMethod.hx",26,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_39_get_baseMethod,"away3d.materials.methods.CompositeDiffuseMethod","get_baseMethod",0x5ec0ae20,"away3d.materials.methods.CompositeDiffuseMethod.get_baseMethod","away3d/materials/methods/CompositeDiffuseMethod.hx",39,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_43_set_baseMethod,"away3d.materials.methods.CompositeDiffuseMethod","set_baseMethod",0x7ee09694,"away3d.materials.methods.CompositeDiffuseMethod.set_baseMethod","away3d/materials/methods/CompositeDiffuseMethod.hx",43,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_58_initVO,"away3d.materials.methods.CompositeDiffuseMethod","initVO",0xbaba4d4e,"away3d.materials.methods.CompositeDiffuseMethod.initVO","away3d/materials/methods/CompositeDiffuseMethod.hx",58,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_66_initConstants,"away3d.materials.methods.CompositeDiffuseMethod","initConstants",0x6ccbf0fa,"away3d.materials.methods.CompositeDiffuseMethod.initConstants","away3d/materials/methods/CompositeDiffuseMethod.hx",66,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_73_dispose,"away3d.materials.methods.CompositeDiffuseMethod","dispose",0x980541fa,"away3d.materials.methods.CompositeDiffuseMethod.dispose","away3d/materials/methods/CompositeDiffuseMethod.hx",73,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_83_get_alphaThreshold,"away3d.materials.methods.CompositeDiffuseMethod","get_alphaThreshold",0xbc3dd7bb,"away3d.materials.methods.CompositeDiffuseMethod.get_alphaThreshold","away3d/materials/methods/CompositeDiffuseMethod.hx",83,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_87_set_alphaThreshold,"away3d.materials.methods.CompositeDiffuseMethod","set_alphaThreshold",0x98ed0a2f,"away3d.materials.methods.CompositeDiffuseMethod.set_alphaThreshold","away3d/materials/methods/CompositeDiffuseMethod.hx",87,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_97_get_texture,"away3d.materials.methods.CompositeDiffuseMethod","get_texture",0x78ff33cd,"away3d.materials.methods.CompositeDiffuseMethod.get_texture","away3d/materials/methods/CompositeDiffuseMethod.hx",97,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_104_set_texture,"away3d.materials.methods.CompositeDiffuseMethod","set_texture",0x836c3ad9,"away3d.materials.methods.CompositeDiffuseMethod.set_texture","away3d/materials/methods/CompositeDiffuseMethod.hx",104,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_114_get_diffuseAlpha,"away3d.materials.methods.CompositeDiffuseMethod","get_diffuseAlpha",0x6c9d1a6a,"away3d.materials.methods.CompositeDiffuseMethod.get_diffuseAlpha","away3d/materials/methods/CompositeDiffuseMethod.hx",114,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_122_get_diffuseColor,"away3d.materials.methods.CompositeDiffuseMethod","get_diffuseColor",0x9562e46f,"away3d.materials.methods.CompositeDiffuseMethod.get_diffuseColor","away3d/materials/methods/CompositeDiffuseMethod.hx",122,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_129_set_diffuseColor,"away3d.materials.methods.CompositeDiffuseMethod","set_diffuseColor",0xeba4d1e3,"away3d.materials.methods.CompositeDiffuseMethod.set_diffuseColor","away3d/materials/methods/CompositeDiffuseMethod.hx",129,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_138_set_diffuseAlpha,"away3d.materials.methods.CompositeDiffuseMethod","set_diffuseAlpha",0xc2df07de,"away3d.materials.methods.CompositeDiffuseMethod.set_diffuseAlpha","away3d/materials/methods/CompositeDiffuseMethod.hx",138,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_148_getFragmentPreLightingCode,"away3d.materials.methods.CompositeDiffuseMethod","getFragmentPreLightingCode",0xf145bd7b,"away3d.materials.methods.CompositeDiffuseMethod.getFragmentPreLightingCode","away3d/materials/methods/CompositeDiffuseMethod.hx",148,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_155_getFragmentCodePerLight,"away3d.materials.methods.CompositeDiffuseMethod","getFragmentCodePerLight",0x43f05407,"away3d.materials.methods.CompositeDiffuseMethod.getFragmentCodePerLight","away3d/materials/methods/CompositeDiffuseMethod.hx",155,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_165_getFragmentCodePerProbe,"away3d.materials.methods.CompositeDiffuseMethod","getFragmentCodePerProbe",0x97839e61,"away3d.materials.methods.CompositeDiffuseMethod.getFragmentCodePerProbe","away3d/materials/methods/CompositeDiffuseMethod.hx",165,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_176_activate,"away3d.materials.methods.CompositeDiffuseMethod","activate",0x2a9c89f8,"away3d.materials.methods.CompositeDiffuseMethod.activate","away3d/materials/methods/CompositeDiffuseMethod.hx",176,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_184_deactivate,"away3d.materials.methods.CompositeDiffuseMethod","deactivate",0xf09da5b9,"away3d.materials.methods.CompositeDiffuseMethod.deactivate","away3d/materials/methods/CompositeDiffuseMethod.hx",184,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_192_getVertexCode,"away3d.materials.methods.CompositeDiffuseMethod","getVertexCode",0xdc544e82,"away3d.materials.methods.CompositeDiffuseMethod.getVertexCode","away3d/materials/methods/CompositeDiffuseMethod.hx",192,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_200_getFragmentPostLightingCode,"away3d.materials.methods.CompositeDiffuseMethod","getFragmentPostLightingCode",0xf2ec551a,"away3d.materials.methods.CompositeDiffuseMethod.getFragmentPostLightingCode","away3d/materials/methods/CompositeDiffuseMethod.hx",200,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_208_reset,"away3d.materials.methods.CompositeDiffuseMethod","reset",0x273a6e6a,"away3d.materials.methods.CompositeDiffuseMethod.reset","away3d/materials/methods/CompositeDiffuseMethod.hx",208,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_215_cleanCompilationData,"away3d.materials.methods.CompositeDiffuseMethod","cleanCompilationData",0x449c70c9,"away3d.materials.methods.CompositeDiffuseMethod.cleanCompilationData","away3d/materials/methods/CompositeDiffuseMethod.hx",215,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_224_set_sharedRegisters,"away3d.materials.methods.CompositeDiffuseMethod","set_sharedRegisters",0xccc79549,"away3d.materials.methods.CompositeDiffuseMethod.set_sharedRegisters","away3d/materials/methods/CompositeDiffuseMethod.hx",224,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_233_set_shadowRegister,"away3d.materials.methods.CompositeDiffuseMethod","set_shadowRegister",0xba8ef425,"away3d.materials.methods.CompositeDiffuseMethod.set_shadowRegister","away3d/materials/methods/CompositeDiffuseMethod.hx",233,0x3513a3f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ee4f079af4128f82_244_onShaderInvalidated,"away3d.materials.methods.CompositeDiffuseMethod","onShaderInvalidated",0x60184d20,"away3d.materials.methods.CompositeDiffuseMethod.onShaderInvalidated","away3d/materials/methods/CompositeDiffuseMethod.hx",244,0x3513a3f2)
namespace away3d{
namespace materials{
namespace methods{

void CompositeDiffuseMethod_obj::__construct( ::Dynamic modulateMethod, ::away3d::materials::methods::BasicDiffuseMethod baseDiffuseMethod){
            	HX_GC_STACKFRAME(&_hx_pos_ee4f079af4128f82_26_new)
HXLINE(  27)		this->_baseMethod = baseDiffuseMethod;
HXLINE(  28)		if (::hx::IsNull( this->_baseMethod )) {
HXLINE(  28)			this->_baseMethod =  ::away3d::materials::methods::BasicDiffuseMethod_obj::__alloc( HX_CTX );
            		}
HXLINE(  29)		this->_baseMethod->_modulateMethod = modulateMethod;
HXLINE(  30)		this->_baseMethod->addEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null(),null(),null());
HXLINE(  31)		super::__construct();
            	}

Dynamic CompositeDiffuseMethod_obj::__CreateEmpty() { return new CompositeDiffuseMethod_obj; }

void *CompositeDiffuseMethod_obj::_hx_vtable = 0;

Dynamic CompositeDiffuseMethod_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CompositeDiffuseMethod_obj > _hx_result = new CompositeDiffuseMethod_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CompositeDiffuseMethod_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x0446cf5e) {
			if (inClassId<=(int)0x011e2747) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x011e2747;
			} else {
				return inClassId==(int)0x0446cf5e;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x37f46043) {
			return inClassId==(int)0x12886923 || inClassId==(int)0x37f46043;
		} else {
			return inClassId==(int)0x5786be41;
		}
	}
}

 ::away3d::materials::methods::BasicDiffuseMethod CompositeDiffuseMethod_obj::get_baseMethod(){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_39_get_baseMethod)
HXDLIN(  39)		return this->_baseMethod;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompositeDiffuseMethod_obj,get_baseMethod,return )

 ::away3d::materials::methods::BasicDiffuseMethod CompositeDiffuseMethod_obj::set_baseMethod( ::away3d::materials::methods::BasicDiffuseMethod value){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_43_set_baseMethod)
HXLINE(  44)		if (::hx::IsInstanceEq( this->_baseMethod,value )) {
HXLINE(  45)			return value;
            		}
HXLINE(  46)		this->_baseMethod->removeEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null());
HXLINE(  47)		this->_baseMethod = value;
HXLINE(  48)		this->_baseMethod->addEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),false,0,true);
HXLINE(  49)		this->invalidateShaderProgram();
HXLINE(  50)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompositeDiffuseMethod_obj,set_baseMethod,return )

void CompositeDiffuseMethod_obj::initVO( ::away3d::materials::methods::MethodVO vo){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_58_initVO)
HXDLIN(  58)		this->_baseMethod->initVO(vo);
            	}


void CompositeDiffuseMethod_obj::initConstants( ::away3d::materials::methods::MethodVO vo){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_66_initConstants)
HXDLIN(  66)		this->_baseMethod->initConstants(vo);
            	}


void CompositeDiffuseMethod_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_73_dispose)
HXLINE(  74)		this->_baseMethod->removeEventListener(HX_("ShaderInvalidated",44,03,b9,4d),this->onShaderInvalidated_dyn(),null());
HXLINE(  75)		this->_baseMethod->dispose();
            	}


Float CompositeDiffuseMethod_obj::get_alphaThreshold(){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_83_get_alphaThreshold)
HXDLIN(  83)		return this->_baseMethod->get_alphaThreshold();
            	}


Float CompositeDiffuseMethod_obj::set_alphaThreshold(Float value){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_87_set_alphaThreshold)
HXLINE(  88)		this->_baseMethod->set_alphaThreshold(value);
HXLINE(  89)		return value;
            	}


 ::away3d::textures::Texture2DBase CompositeDiffuseMethod_obj::get_texture(){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_97_get_texture)
HXDLIN(  97)		return this->_baseMethod->get_texture();
            	}


 ::away3d::textures::Texture2DBase CompositeDiffuseMethod_obj::set_texture( ::away3d::textures::Texture2DBase value){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_104_set_texture)
HXLINE( 105)		this->_baseMethod->set_texture(value);
HXLINE( 106)		return value;
            	}


Float CompositeDiffuseMethod_obj::get_diffuseAlpha(){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_114_get_diffuseAlpha)
HXDLIN( 114)		return this->_baseMethod->get_diffuseAlpha();
            	}


int CompositeDiffuseMethod_obj::get_diffuseColor(){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_122_get_diffuseColor)
HXDLIN( 122)		return this->_baseMethod->get_diffuseColor();
            	}


int CompositeDiffuseMethod_obj::set_diffuseColor(int diffuseColor){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_129_set_diffuseColor)
HXLINE( 130)		this->_baseMethod->set_diffuseColor(diffuseColor);
HXLINE( 131)		return diffuseColor;
            	}


Float CompositeDiffuseMethod_obj::set_diffuseAlpha(Float value){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_138_set_diffuseAlpha)
HXLINE( 139)		this->_baseMethod->set_diffuseAlpha(value);
HXLINE( 140)		return value;
            	}


::String CompositeDiffuseMethod_obj::getFragmentPreLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_148_getFragmentPreLightingCode)
HXDLIN( 148)		return this->_baseMethod->getFragmentPreLightingCode(vo,regCache);
            	}


::String CompositeDiffuseMethod_obj::getFragmentCodePerLight( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement lightDirReg, ::away3d::materials::compilation::ShaderRegisterElement lightColReg, ::away3d::materials::compilation::ShaderRegisterCache regCache){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_155_getFragmentCodePerLight)
HXLINE( 156)		::String code = this->_baseMethod->getFragmentCodePerLight(vo,lightDirReg,lightColReg,regCache);
HXLINE( 157)		this->_totalLightColorReg = this->_baseMethod->_totalLightColorReg;
HXLINE( 158)		return code;
            	}


::String CompositeDiffuseMethod_obj::getFragmentCodePerProbe( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement cubeMapReg,::String weightRegister, ::away3d::materials::compilation::ShaderRegisterCache regCache){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_165_getFragmentCodePerProbe)
HXLINE( 166)		::String code = this->_baseMethod->getFragmentCodePerProbe(vo,cubeMapReg,weightRegister,regCache);
HXLINE( 167)		this->_totalLightColorReg = this->_baseMethod->_totalLightColorReg;
HXLINE( 168)		return code;
            	}


void CompositeDiffuseMethod_obj::activate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_176_activate)
HXDLIN( 176)		this->_baseMethod->activate(vo,stage3DProxy);
            	}


void CompositeDiffuseMethod_obj::deactivate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_184_deactivate)
HXDLIN( 184)		this->_baseMethod->deactivate(vo,stage3DProxy);
            	}


::String CompositeDiffuseMethod_obj::getVertexCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_192_getVertexCode)
HXDLIN( 192)		return this->_baseMethod->getVertexCode(vo,regCache);
            	}


::String CompositeDiffuseMethod_obj::getFragmentPostLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_200_getFragmentPostLightingCode)
HXDLIN( 200)		return this->_baseMethod->getFragmentPostLightingCode(vo,regCache,targetReg);
            	}


void CompositeDiffuseMethod_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_208_reset)
HXDLIN( 208)		this->_baseMethod->reset();
            	}


void CompositeDiffuseMethod_obj::cleanCompilationData(){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_215_cleanCompilationData)
HXLINE( 216)		this->super::cleanCompilationData();
HXLINE( 217)		this->_baseMethod->cleanCompilationData();
            	}


 ::away3d::materials::compilation::ShaderRegisterData CompositeDiffuseMethod_obj::set_sharedRegisters( ::away3d::materials::compilation::ShaderRegisterData value){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_224_set_sharedRegisters)
HXLINE( 225)		this->super::set_sharedRegisters(this->_baseMethod->set_sharedRegisters(value));
HXLINE( 226)		return value;
            	}


 ::away3d::materials::compilation::ShaderRegisterElement CompositeDiffuseMethod_obj::set_shadowRegister( ::away3d::materials::compilation::ShaderRegisterElement value){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_233_set_shadowRegister)
HXLINE( 234)		this->super::set_shadowRegister(value);
HXLINE( 235)		this->_baseMethod->set_shadowRegister(value);
HXLINE( 236)		return value;
            	}


void CompositeDiffuseMethod_obj::onShaderInvalidated( ::away3d::events::ShadingMethodEvent event){
            	HX_STACKFRAME(&_hx_pos_ee4f079af4128f82_244_onShaderInvalidated)
HXDLIN( 244)		this->invalidateShaderProgram();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompositeDiffuseMethod_obj,onShaderInvalidated,(void))


::hx::ObjectPtr< CompositeDiffuseMethod_obj > CompositeDiffuseMethod_obj::__new( ::Dynamic modulateMethod, ::away3d::materials::methods::BasicDiffuseMethod baseDiffuseMethod) {
	::hx::ObjectPtr< CompositeDiffuseMethod_obj > __this = new CompositeDiffuseMethod_obj();
	__this->__construct(modulateMethod,baseDiffuseMethod);
	return __this;
}

::hx::ObjectPtr< CompositeDiffuseMethod_obj > CompositeDiffuseMethod_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic modulateMethod, ::away3d::materials::methods::BasicDiffuseMethod baseDiffuseMethod) {
	CompositeDiffuseMethod_obj *__this = (CompositeDiffuseMethod_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CompositeDiffuseMethod_obj), true, "away3d.materials.methods.CompositeDiffuseMethod"));
	*(void **)__this = CompositeDiffuseMethod_obj::_hx_vtable;
	__this->__construct(modulateMethod,baseDiffuseMethod);
	return __this;
}

CompositeDiffuseMethod_obj::CompositeDiffuseMethod_obj()
{
}

void CompositeDiffuseMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompositeDiffuseMethod);
	HX_MARK_MEMBER_NAME(_baseMethod,"_baseMethod");
	 ::away3d::materials::methods::BasicDiffuseMethod_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CompositeDiffuseMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_baseMethod,"_baseMethod");
	 ::away3d::materials::methods::BasicDiffuseMethod_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CompositeDiffuseMethod_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"initVO") ) { return ::hx::Val( initVO_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"baseMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_baseMethod() ); }
		if (HX_FIELD_EQ(inName,"deactivate") ) { return ::hx::Val( deactivate_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_baseMethod") ) { return ::hx::Val( _baseMethod ); }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return ::hx::Val( get_texture_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return ::hx::Val( set_texture_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"initConstants") ) { return ::hx::Val( initConstants_dyn() ); }
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return ::hx::Val( getVertexCode_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_baseMethod") ) { return ::hx::Val( get_baseMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_baseMethod") ) { return ::hx::Val( set_baseMethod_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_diffuseAlpha") ) { return ::hx::Val( get_diffuseAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_diffuseColor") ) { return ::hx::Val( get_diffuseColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_diffuseColor") ) { return ::hx::Val( set_diffuseColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_diffuseAlpha") ) { return ::hx::Val( set_diffuseAlpha_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_alphaThreshold") ) { return ::hx::Val( get_alphaThreshold_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alphaThreshold") ) { return ::hx::Val( set_alphaThreshold_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shadowRegister") ) { return ::hx::Val( set_shadowRegister_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_sharedRegisters") ) { return ::hx::Val( set_sharedRegisters_dyn() ); }
		if (HX_FIELD_EQ(inName,"onShaderInvalidated") ) { return ::hx::Val( onShaderInvalidated_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cleanCompilationData") ) { return ::hx::Val( cleanCompilationData_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFragmentCodePerLight") ) { return ::hx::Val( getFragmentCodePerLight_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFragmentCodePerProbe") ) { return ::hx::Val( getFragmentCodePerProbe_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getFragmentPreLightingCode") ) { return ::hx::Val( getFragmentPreLightingCode_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getFragmentPostLightingCode") ) { return ::hx::Val( getFragmentPostLightingCode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CompositeDiffuseMethod_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"baseMethod") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_baseMethod(inValue.Cast<  ::away3d::materials::methods::BasicDiffuseMethod >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_baseMethod") ) { _baseMethod=inValue.Cast<  ::away3d::materials::methods::BasicDiffuseMethod >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CompositeDiffuseMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("baseMethod",d2,35,8b,e1));
	outFields->push(HX_("_baseMethod",f1,02,15,b4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CompositeDiffuseMethod_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::materials::methods::BasicDiffuseMethod */ ,(int)offsetof(CompositeDiffuseMethod_obj,_baseMethod),HX_("_baseMethod",f1,02,15,b4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CompositeDiffuseMethod_obj_sStaticStorageInfo = 0;
#endif

static ::String CompositeDiffuseMethod_obj_sMemberFields[] = {
	HX_("_baseMethod",f1,02,15,b4),
	HX_("get_baseMethod",1b,be,80,57),
	HX_("set_baseMethod",8f,a6,a0,77),
	HX_("initVO",49,6a,4c,97),
	HX_("initConstants",5f,39,6b,bf),
	HX_("dispose",9f,80,4c,bb),
	HX_("get_alphaThreshold",36,01,45,9d),
	HX_("set_alphaThreshold",aa,33,f4,79),
	HX_("get_texture",f2,28,db,24),
	HX_("set_texture",fe,2f,48,2f),
	HX_("get_diffuseAlpha",25,5f,7d,21),
	HX_("get_diffuseColor",2a,29,43,4a),
	HX_("set_diffuseColor",9e,16,85,a0),
	HX_("set_diffuseAlpha",99,4c,bf,77),
	HX_("getFragmentPreLightingCode",f6,59,1b,b5),
	HX_("getFragmentCodePerLight",ac,ec,39,19),
	HX_("getFragmentCodePerProbe",06,37,cd,6c),
	HX_("activate",b3,1b,ac,e5),
	HX_("deactivate",34,5c,01,3c),
	HX_("getVertexCode",e7,96,f3,2e),
	HX_("getFragmentPostLightingCode",3f,a4,ff,89),
	HX_("reset",cf,49,c8,e6),
	HX_("cleanCompilationData",04,2f,dd,d4),
	HX_("set_sharedRegisters",6e,b7,04,d2),
	HX_("set_shadowRegister",a0,1d,96,9b),
	HX_("onShaderInvalidated",45,6f,55,65),
	::String(null()) };

::hx::Class CompositeDiffuseMethod_obj::__mClass;

void CompositeDiffuseMethod_obj::__register()
{
	CompositeDiffuseMethod_obj _hx_dummy;
	CompositeDiffuseMethod_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.methods.CompositeDiffuseMethod",c9,ce,9e,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CompositeDiffuseMethod_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CompositeDiffuseMethod_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CompositeDiffuseMethod_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CompositeDiffuseMethod_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
