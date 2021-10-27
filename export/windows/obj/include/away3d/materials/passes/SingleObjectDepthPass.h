#ifndef INCLUDED_away3d_materials_passes_SingleObjectDepthPass
#define INCLUDED_away3d_materials_passes_SingleObjectDepthPass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
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
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS3(away3d,materials,passes,SingleObjectDepthPass)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,display3D,textures,Texture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace away3d{
namespace materials{
namespace passes{


class HXCPP_CLASS_ATTRIBUTES SingleObjectDepthPass_obj : public  ::away3d::materials::passes::MaterialPassBase_obj
{
	public:
		typedef  ::away3d::materials::passes::MaterialPassBase_obj super;
		typedef SingleObjectDepthPass_obj OBJ_;
		SingleObjectDepthPass_obj();

	public:
		enum { _hx_ClassId = 0x048a1b61 };

		void __construct(::hx::Null< int >  __o_textureSize,::hx::Null< Float >  __o_polyOffset);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.passes.SingleObjectDepthPass")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.passes.SingleObjectDepthPass"); }
		static ::hx::ObjectPtr< SingleObjectDepthPass_obj > __new(::hx::Null< int >  __o_textureSize,::hx::Null< Float >  __o_polyOffset);
		static ::hx::ObjectPtr< SingleObjectDepthPass_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_textureSize,::hx::Null< Float >  __o_polyOffset);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SingleObjectDepthPass_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SingleObjectDepthPass",ed,ba,2e,0d); }

		 ::openfl::_Vector::ObjectVector _textures;
		 ::haxe::ds::ObjectMap _projections;
		int _textureSize;
		 ::openfl::_Vector::FloatVector _polyOffset;
		 ::openfl::_Vector::FloatVector _enc;
		bool _projectionTexturesInvalid;
		void dispose();

		void updateProjectionTextures();
		::Dynamic updateProjectionTextures_dyn();

		::String getVertexCode();

		::String getFragmentCode(::String animationCode);

		 ::openfl::display3D::textures::Texture getDepthMap(::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic getDepthMap_dyn();

		 ::openfl::geom::Matrix3D getProjection(::Dynamic renderable);
		::Dynamic getProjection_dyn();

		void render(::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D viewProjection);

		void activate( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera);

};

} // end namespace away3d
} // end namespace materials
} // end namespace passes

#endif /* INCLUDED_away3d_materials_passes_SingleObjectDepthPass */ 
