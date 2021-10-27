#ifndef INCLUDED_away3d_materials_methods_CompositeDiffuseMethod
#define INCLUDED_away3d_materials_methods_CompositeDiffuseMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_materials_methods_BasicDiffuseMethod
#include <away3d/materials/methods/BasicDiffuseMethod.h>
#endif
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,events,ShadingMethodEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterData)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicDiffuseMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,CompositeDiffuseMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,LightingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES CompositeDiffuseMethod_obj : public  ::away3d::materials::methods::BasicDiffuseMethod_obj
{
	public:
		typedef  ::away3d::materials::methods::BasicDiffuseMethod_obj super;
		typedef CompositeDiffuseMethod_obj OBJ_;
		CompositeDiffuseMethod_obj();

	public:
		enum { _hx_ClassId = 0x5786be41 };

		void __construct( ::Dynamic modulateMethod, ::away3d::materials::methods::BasicDiffuseMethod baseDiffuseMethod);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.methods.CompositeDiffuseMethod")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.methods.CompositeDiffuseMethod"); }
		static ::hx::ObjectPtr< CompositeDiffuseMethod_obj > __new( ::Dynamic modulateMethod, ::away3d::materials::methods::BasicDiffuseMethod baseDiffuseMethod);
		static ::hx::ObjectPtr< CompositeDiffuseMethod_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic modulateMethod, ::away3d::materials::methods::BasicDiffuseMethod baseDiffuseMethod);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CompositeDiffuseMethod_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CompositeDiffuseMethod",7c,3d,3a,3d); }

		 ::away3d::materials::methods::BasicDiffuseMethod _baseMethod;
		 ::away3d::materials::methods::BasicDiffuseMethod get_baseMethod();
		::Dynamic get_baseMethod_dyn();

		 ::away3d::materials::methods::BasicDiffuseMethod set_baseMethod( ::away3d::materials::methods::BasicDiffuseMethod value);
		::Dynamic set_baseMethod_dyn();

		void initVO( ::away3d::materials::methods::MethodVO vo);

		virtual void initConstants( ::away3d::materials::methods::MethodVO vo);

		void dispose();

		Float get_alphaThreshold();

		Float set_alphaThreshold(Float value);

		 ::away3d::textures::Texture2DBase get_texture();

		 ::away3d::textures::Texture2DBase set_texture( ::away3d::textures::Texture2DBase value);

		Float get_diffuseAlpha();

		int get_diffuseColor();

		int set_diffuseColor(int diffuseColor);

		Float set_diffuseAlpha(Float value);

		virtual ::String getFragmentPreLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache);

		virtual ::String getFragmentCodePerLight( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement lightDirReg, ::away3d::materials::compilation::ShaderRegisterElement lightColReg, ::away3d::materials::compilation::ShaderRegisterCache regCache);

		::String getFragmentCodePerProbe( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement cubeMapReg,::String weightRegister, ::away3d::materials::compilation::ShaderRegisterCache regCache);

		virtual void activate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy);

		void deactivate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy);

		virtual ::String getVertexCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache);

		virtual ::String getFragmentPostLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg);

		void reset();

		virtual void cleanCompilationData();

		 ::away3d::materials::compilation::ShaderRegisterData set_sharedRegisters( ::away3d::materials::compilation::ShaderRegisterData value);

		 ::away3d::materials::compilation::ShaderRegisterElement set_shadowRegister( ::away3d::materials::compilation::ShaderRegisterElement value);

		void onShaderInvalidated( ::away3d::events::ShadingMethodEvent event);
		::Dynamic onShaderInvalidated_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_CompositeDiffuseMethod */ 
