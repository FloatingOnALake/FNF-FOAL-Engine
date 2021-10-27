#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#define INCLUDED_flixel_group_FlxTypedSpriteGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroupIterator)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace group{


class HXCPP_CLASS_ATTRIBUTES FlxTypedSpriteGroup_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef FlxTypedSpriteGroup_obj OBJ_;
		FlxTypedSpriteGroup_obj();

	public:
		enum { _hx_ClassId = 0x288ce903 };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.group.FlxTypedSpriteGroup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.group.FlxTypedSpriteGroup"); }
		static ::hx::ObjectPtr< FlxTypedSpriteGroup_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_MaxSize);
		static ::hx::ObjectPtr< FlxTypedSpriteGroup_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTypedSpriteGroup_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTypedSpriteGroup",22,bd,19,61); }

		void transformChildren_flixel_math_FlxRect( ::Dynamic Function, ::flixel::math::FlxRect Value);
		::Dynamic transformChildren_flixel_math_FlxRect_dyn();

		void transformChildren_flash_display_BlendMode( ::Dynamic Function, ::Dynamic Value);
		::Dynamic transformChildren_flash_display_BlendMode_dyn();

		void transformChildren_Int( ::Dynamic Function,int Value);
		::Dynamic transformChildren_Int_dyn();

		void transformChildren_Bool( ::Dynamic Function,bool Value);
		::Dynamic transformChildren_Bool_dyn();

		void transformChildren_Array_flixel_FlxCamera( ::Dynamic Function,::Array< ::Dynamic> Value);
		::Dynamic transformChildren_Array_flixel_FlxCamera_dyn();

		void transformChildren_flixel_FlxCamera( ::Dynamic Function, ::flixel::FlxCamera Value);
		::Dynamic transformChildren_flixel_FlxCamera_dyn();

		void transformChildren_Float( ::Dynamic Function,Float Value);
		::Dynamic transformChildren_Float_dyn();

		void multiTransformChildren_Float(::Array< ::Dynamic> FunctionArray,::Array< Float > ValueArray);
		::Dynamic multiTransformChildren_Float_dyn();

		void transformChildren_flixel_math_FlxPoint( ::Dynamic Function, ::flixel::math::FlxPoint Value);
		::Dynamic transformChildren_flixel_math_FlxPoint_dyn();

		 ::flixel::group::FlxTypedGroup group;
		bool directAlpha;
		bool _skipTransformChildren;
		::Array< ::Dynamic> _sprites;
		void initVars();

		void destroy();

		 ::flixel::FlxSprite clone();

		bool isOnScreen( ::flixel::FlxCamera Camera);

		bool overlapsPoint( ::flixel::math::FlxPoint point,::hx::Null< bool >  InScreenSpace, ::flixel::FlxCamera Camera);

		bool pixelsOverlapPoint( ::flixel::math::FlxPoint point,::hx::Null< int >  Mask, ::flixel::FlxCamera Camera);

		void update(Float elapsed);

		void draw();

		::Array< ::Dynamic> replaceColor(int _tmp_Color,int _tmp_NewColor,::hx::Null< bool >  FetchPositions);

		 ::Dynamic add( ::Dynamic Sprite);
		::Dynamic add_dyn();

		 ::Dynamic insert(int Position, ::Dynamic Sprite);
		::Dynamic insert_dyn();

		void preAdd( ::Dynamic Sprite);
		::Dynamic preAdd_dyn();

		 ::Dynamic recycle(::hx::Class ObjectClass, ::Dynamic ObjectFactory,::hx::Null< bool >  Force,::hx::Null< bool >  Revive);
		::Dynamic recycle_dyn();

		 ::Dynamic remove( ::Dynamic Sprite,::hx::Null< bool >  Splice);
		::Dynamic remove_dyn();

		 ::Dynamic replace( ::Dynamic OldObject, ::Dynamic NewObject);
		::Dynamic replace_dyn();

		void sort( ::Dynamic Function,::hx::Null< int >  Order);
		::Dynamic sort_dyn();

		 ::Dynamic getFirstAvailable(::hx::Class ObjectClass,::hx::Null< bool >  Force);
		::Dynamic getFirstAvailable_dyn();

		int getFirstNull();
		::Dynamic getFirstNull_dyn();

		 ::Dynamic getFirstExisting();
		::Dynamic getFirstExisting_dyn();

		 ::Dynamic getFirstAlive();
		::Dynamic getFirstAlive_dyn();

		 ::Dynamic getFirstDead();
		::Dynamic getFirstDead_dyn();

		int countLiving();
		::Dynamic countLiving_dyn();

		int countDead();
		::Dynamic countDead_dyn();

		 ::Dynamic getRandom(::hx::Null< int >  StartIndex,::hx::Null< int >  Length);
		::Dynamic getRandom_dyn();

		 ::flixel::group::FlxTypedGroupIterator iterator( ::Dynamic filter);
		::Dynamic iterator_dyn();

		void forEach( ::Dynamic Function,::hx::Null< bool >  Recurse);
		::Dynamic forEach_dyn();

		void forEachAlive( ::Dynamic Function,::hx::Null< bool >  Recurse);
		::Dynamic forEachAlive_dyn();

		void forEachDead( ::Dynamic Function,::hx::Null< bool >  Recurse);
		::Dynamic forEachDead_dyn();

		void forEachExists( ::Dynamic Function,::hx::Null< bool >  Recurse);
		::Dynamic forEachExists_dyn();

		void forEachOfType(::hx::Class ObjectClass, ::Dynamic Function,::hx::Null< bool >  Recurse);
		::Dynamic forEachOfType_dyn();

		void clear();
		::Dynamic clear_dyn();

		void kill();

		void revive();

		void reset(Float X,Float Y);

		void setPosition(::hx::Null< Float >  X,::hx::Null< Float >  Y);

		 ::flixel::FlxCamera set_camera( ::flixel::FlxCamera Value);

		::Array< ::Dynamic> set_cameras(::Array< ::Dynamic> Value);

		bool set_exists(bool Value);

		bool set_visible(bool Value);

		bool set_active(bool Value);

		bool set_alive(bool Value);

		Float set_x(Float Value);

		Float set_y(Float Value);

		Float set_angle(Float Value);

		Float set_alpha(Float Value);

		int set_facing(int _tmp_Value);

		bool set_flipX(bool Value);

		bool set_flipY(bool Value);

		bool set_moves(bool Value);

		bool set_immovable(bool Value);

		bool set_solid(bool Value);

		int set_color(int _tmp_Value);

		 ::Dynamic set_blend( ::Dynamic Value);

		 ::flixel::math::FlxRect set_clipRect( ::flixel::math::FlxRect rect);

		bool set_pixelPerfectRender(bool Value);

		Float set_width(Float Value);

		Float get_width();

		Float set_height(Float Value);

		Float get_height();

		int get_length();
		::Dynamic get_length_dyn();

		int get_maxSize();
		::Dynamic get_maxSize_dyn();

		int set_maxSize(int Size);
		::Dynamic set_maxSize_dyn();

		::cpp::VirtualArray get_members();
		::Dynamic get_members_dyn();

		void xTransform( ::flixel::FlxSprite Sprite,Float X);
		::Dynamic xTransform_dyn();

		void yTransform( ::flixel::FlxSprite Sprite,Float Y);
		::Dynamic yTransform_dyn();

		void angleTransform( ::flixel::FlxSprite Sprite,Float Angle);
		::Dynamic angleTransform_dyn();

		void alphaTransform( ::flixel::FlxSprite Sprite,Float Alpha);
		::Dynamic alphaTransform_dyn();

		void directAlphaTransform( ::flixel::FlxSprite Sprite,Float Alpha);
		::Dynamic directAlphaTransform_dyn();

		void facingTransform( ::flixel::FlxSprite Sprite,int Facing);
		::Dynamic facingTransform_dyn();

		void flipXTransform( ::flixel::FlxSprite Sprite,bool FlipX);
		::Dynamic flipXTransform_dyn();

		void flipYTransform( ::flixel::FlxSprite Sprite,bool FlipY);
		::Dynamic flipYTransform_dyn();

		void movesTransform( ::flixel::FlxSprite Sprite,bool Moves);
		::Dynamic movesTransform_dyn();

		void pixelPerfectTransform( ::flixel::FlxSprite Sprite,bool PixelPerfect);
		::Dynamic pixelPerfectTransform_dyn();

		void gColorTransform( ::flixel::FlxSprite Sprite,int Color);
		::Dynamic gColorTransform_dyn();

		void blendTransform( ::flixel::FlxSprite Sprite, ::Dynamic Blend);
		::Dynamic blendTransform_dyn();

		void immovableTransform( ::flixel::FlxSprite Sprite,bool Immovable);
		::Dynamic immovableTransform_dyn();

		void visibleTransform( ::flixel::FlxSprite Sprite,bool Visible);
		::Dynamic visibleTransform_dyn();

		void activeTransform( ::flixel::FlxSprite Sprite,bool Active);
		::Dynamic activeTransform_dyn();

		void solidTransform( ::flixel::FlxSprite Sprite,bool Solid);
		::Dynamic solidTransform_dyn();

		void aliveTransform( ::flixel::FlxSprite Sprite,bool Alive);
		::Dynamic aliveTransform_dyn();

		void existsTransform( ::flixel::FlxSprite Sprite,bool Exists);
		::Dynamic existsTransform_dyn();

		void cameraTransform( ::flixel::FlxSprite Sprite, ::flixel::FlxCamera Camera);
		::Dynamic cameraTransform_dyn();

		void camerasTransform( ::flixel::FlxSprite Sprite,::Array< ::Dynamic> Cameras);
		::Dynamic camerasTransform_dyn();

		void offsetTransform( ::flixel::FlxSprite Sprite, ::flixel::math::FlxPoint Offset);
		::Dynamic offsetTransform_dyn();

		void originTransform( ::flixel::FlxSprite Sprite, ::flixel::math::FlxPoint Origin);
		::Dynamic originTransform_dyn();

		void scaleTransform( ::flixel::FlxSprite Sprite, ::flixel::math::FlxPoint Scale);
		::Dynamic scaleTransform_dyn();

		void scrollFactorTransform( ::flixel::FlxSprite Sprite, ::flixel::math::FlxPoint ScrollFactor);
		::Dynamic scrollFactorTransform_dyn();

		void clipRectTransform( ::flixel::FlxSprite Sprite, ::flixel::math::FlxRect ClipRect);
		::Dynamic clipRectTransform_dyn();

		void offsetCallback( ::flixel::math::FlxPoint Offset);
		::Dynamic offsetCallback_dyn();

		void originCallback( ::flixel::math::FlxPoint Origin);
		::Dynamic originCallback_dyn();

		void scaleCallback( ::flixel::math::FlxPoint Scale);
		::Dynamic scaleCallback_dyn();

		void scrollFactorCallback( ::flixel::math::FlxPoint ScrollFactor);
		::Dynamic scrollFactorCallback_dyn();

		 ::flixel::FlxSprite loadGraphicFromSprite( ::flixel::FlxSprite Sprite);

		 ::flixel::FlxSprite loadGraphic( ::Dynamic Graphic,::hx::Null< bool >  Animated,::hx::Null< int >  Width,::hx::Null< int >  Height,::hx::Null< bool >  Unique,::String Key);

		 ::flixel::FlxSprite loadRotatedGraphic( ::Dynamic Graphic,::hx::Null< int >  Rotations,::hx::Null< int >  Frame,::hx::Null< bool >  AntiAliasing,::hx::Null< bool >  AutoBuffer,::String Key);

		 ::flixel::FlxSprite makeGraphic(int Width,int Height,::hx::Null< int >  _tmp_Color,::hx::Null< bool >  Unique,::String Key);

		 ::openfl::display::BitmapData set_pixels( ::openfl::display::BitmapData Value);

		 ::flixel::graphics::frames::FlxFrame set_frame( ::flixel::graphics::frames::FlxFrame Value);

		 ::openfl::display::BitmapData get_pixels();

		void calcFrame(::hx::Null< bool >  RunOnCpp);

		void resetHelpers();

		void stamp( ::flixel::FlxSprite Brush,::hx::Null< int >  X,::hx::Null< int >  Y);

		 ::flixel::graphics::frames::FlxFramesCollection set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames);

		void updateColorTransform();

};

} // end namespace flixel
} // end namespace group

#endif /* INCLUDED_flixel_group_FlxTypedSpriteGroup */ 
