#ifndef INCLUDED_away3d_materials_methods_SubsurfaceScatteringDiffuseMethod
#define INCLUDED_away3d_materials_methods_SubsurfaceScatteringDiffuseMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_materials_methods_CompositeDiffuseMethod
#include <away3d/materials/methods/CompositeDiffuseMethod.h>
#endif
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
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
HX_DECLARE_CLASS3(away3d,materials,methods,SubsurfaceScatteringDiffuseMethod)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS3(away3d,materials,passes,SingleObjectDepthPass)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES SubsurfaceScatteringDiffuseMethod_obj : public  ::away3d::materials::methods::CompositeDiffuseMethod_obj
{
	public:
		typedef  ::away3d::materials::methods::CompositeDiffuseMethod_obj super;
		typedef SubsurfaceScatteringDiffuseMethod_obj OBJ_;
		SubsurfaceScatteringDiffuseMethod_obj();

	public:
		enum { _hx_ClassId = 0x6c06fbed };

		void __construct(::hx::Null< int >  __o_depthMapSize,::hx::Null< Float >  __o_depthMapOffset);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.methods.SubsurfaceScatteringDiffuseMethod")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.methods.SubsurfaceScatteringDiffuseMethod"); }
		static ::hx::ObjectPtr< SubsurfaceScatteringDiffuseMethod_obj > __new(::hx::Null< int >  __o_depthMapSize,::hx::Null< Float >  __o_depthMapOffset);
		static ::hx::ObjectPtr< SubsurfaceScatteringDiffuseMethod_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_depthMapSize,::hx::Null< Float >  __o_depthMapOffset);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SubsurfaceScatteringDiffuseMethod_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SubsurfaceScatteringDiffuseMethod",92,20,b4,6b); }

		 ::away3d::materials::passes::SingleObjectDepthPass _depthPass;
		 ::away3d::materials::compilation::ShaderRegisterElement _lightProjVarying;
		 ::away3d::materials::compilation::ShaderRegisterElement _propReg;
		Float _scattering;
		Float _translucency;
		 ::away3d::materials::compilation::ShaderRegisterElement _lightColorReg;
		int _scatterColor;
		 ::away3d::materials::compilation::ShaderRegisterElement _colorReg;
		 ::away3d::materials::compilation::ShaderRegisterElement _decReg;
		Float _scatterR;
		Float _scatterG;
		Float _scatterB;
		 ::away3d::materials::compilation::ShaderRegisterElement _targetReg;
		void initConstants( ::away3d::materials::methods::MethodVO vo);

		void cleanCompilationData();

		Float get_scattering();
		::Dynamic get_scattering_dyn();

		Float set_scattering(Float value);
		::Dynamic set_scattering_dyn();

		Float get_translucency();
		::Dynamic get_translucency_dyn();

		Float set_translucency(Float value);
		::Dynamic set_translucency_dyn();

		int get_scatterColor();
		::Dynamic get_scatterColor_dyn();

		int set_scatterColor(int scatterColor);
		::Dynamic set_scatterColor_dyn();

		::String getVertexCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache);

		::String getFragmentPreLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache);

		::String getFragmentCodePerLight( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement lightDirReg, ::away3d::materials::compilation::ShaderRegisterElement lightColReg, ::away3d::materials::compilation::ShaderRegisterCache regCache);

		::String getFragmentPostLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg);

		void activate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy);

		void setRenderState( ::away3d::materials::methods::MethodVO vo,::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera);

		::String scatterLight( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement targetReg, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterData sharedRegisters);
		::Dynamic scatterLight_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_SubsurfaceScatteringDiffuseMethod */ 
