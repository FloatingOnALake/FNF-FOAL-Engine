#ifndef INCLUDED_flixel_FlxSprite
#define INCLUDED_flixel_FlxSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,animation,FlxAnimationController)
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{


class HXCPP_CLASS_ATTRIBUTES FlxSprite_obj : public  ::flixel::FlxObject_obj
{
	public:
		typedef  ::flixel::FlxObject_obj super;
		typedef FlxSprite_obj OBJ_;
		FlxSprite_obj();

	public:
		enum { _hx_ClassId = 0x2c01639b };

		void __construct( ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.FlxSprite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.FlxSprite"); }
		static ::hx::ObjectPtr< FlxSprite_obj > __new( ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic);
		static ::hx::ObjectPtr< FlxSprite_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxSprite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxSprite",f7,d5,84,45); }

		 ::flixel::animation::FlxAnimationController animation;
		 ::openfl::display::BitmapData framePixels;
		bool useFramePixels;
		bool antialiasing;
		bool dirty;
		 ::flixel::graphics::frames::FlxFrame frame;
		int frameWidth;
		int frameHeight;
		int numFrames;
		 ::flixel::graphics::frames::FlxFramesCollection frames;
		 ::flixel::graphics::FlxGraphic graphic;
		Float bakedRotationAngle;
		Float alpha;
		int facing;
		bool flipX;
		bool flipY;
		 ::flixel::math::FlxPoint origin;
		 ::flixel::math::FlxPoint offset;
		 ::flixel::math::FlxPoint scale;
		 ::Dynamic blend;
		int color;
		 ::openfl::geom::ColorTransform colorTransform;
		bool useColorTransform;
		 ::flixel::math::FlxRect clipRect;
		 ::flixel::graphics::tile::FlxGraphicsShader shader;
		 ::flixel::graphics::frames::FlxFrame _frame;
		 ::flixel::graphics::FlxGraphic _frameGraphic;
		int _facingHorizontalMult;
		int _facingVerticalMult;
		 ::openfl::geom::Point _flashPoint;
		 ::openfl::geom::Rectangle _flashRect;
		 ::openfl::geom::Rectangle _flashRect2;
		 ::openfl::geom::Point _flashPointZero;
		 ::flixel::math::FlxMatrix _matrix;
		 ::flixel::math::FlxPoint _halfSize;
		Float _sinAngle;
		Float _cosAngle;
		bool _angleChanged;
		 ::haxe::ds::IntMap _facingFlip;
		virtual void initVars();

		virtual void destroy();

		virtual  ::flixel::FlxSprite clone();
		::Dynamic clone_dyn();

		virtual  ::flixel::FlxSprite loadGraphicFromSprite( ::flixel::FlxSprite Sprite);
		::Dynamic loadGraphicFromSprite_dyn();

		virtual  ::flixel::FlxSprite loadGraphic( ::Dynamic Graphic,::hx::Null< bool >  Animated,::hx::Null< int >  Width,::hx::Null< int >  Height,::hx::Null< bool >  Unique,::String Key);
		::Dynamic loadGraphic_dyn();

		virtual  ::flixel::FlxSprite loadRotatedGraphic( ::Dynamic Graphic,::hx::Null< int >  Rotations,::hx::Null< int >  Frame,::hx::Null< bool >  AntiAliasing,::hx::Null< bool >  AutoBuffer,::String Key);
		::Dynamic loadRotatedGraphic_dyn();

		 ::flixel::FlxSprite loadRotatedFrame( ::flixel::graphics::frames::FlxFrame Frame,::hx::Null< int >  Rotations,::hx::Null< bool >  AntiAliasing,::hx::Null< bool >  AutoBuffer);
		::Dynamic loadRotatedFrame_dyn();

		virtual  ::flixel::FlxSprite makeGraphic(int Width,int Height,::hx::Null< int >  Color,::hx::Null< bool >  Unique,::String Key);
		::Dynamic makeGraphic_dyn();

		void graphicLoaded();
		::Dynamic graphicLoaded_dyn();

		void resetSize();
		::Dynamic resetSize_dyn();

		void resetFrameSize();
		::Dynamic resetFrameSize_dyn();

		void resetSizeFromFrame();
		::Dynamic resetSizeFromFrame_dyn();

		void resetFrame();
		::Dynamic resetFrame_dyn();

		void setGraphicSize(::hx::Null< int >  Width,::hx::Null< int >  Height);
		::Dynamic setGraphicSize_dyn();

		void updateHitbox();
		::Dynamic updateHitbox_dyn();

		virtual void resetHelpers();
		::Dynamic resetHelpers_dyn();

		virtual void update(Float elapsed);

		void updateAnimation(Float elapsed);
		::Dynamic updateAnimation_dyn();

		void checkEmptyFrame();
		::Dynamic checkEmptyFrame_dyn();

		virtual void draw();

		void drawSimple( ::flixel::FlxCamera camera);
		::Dynamic drawSimple_dyn();

		void drawComplex( ::flixel::FlxCamera camera);
		::Dynamic drawComplex_dyn();

		virtual void stamp( ::flixel::FlxSprite Brush,::hx::Null< int >  X,::hx::Null< int >  Y);
		::Dynamic stamp_dyn();

		void drawFrame(::hx::Null< bool >  Force);
		::Dynamic drawFrame_dyn();

		void centerOffsets(::hx::Null< bool >  AdjustPosition);
		::Dynamic centerOffsets_dyn();

		void centerOrigin();
		::Dynamic centerOrigin_dyn();

		virtual ::Array< ::Dynamic> replaceColor(int Color,int NewColor,::hx::Null< bool >  FetchPositions);
		::Dynamic replaceColor_dyn();

		void setColorTransform(::hx::Null< Float >  redMultiplier,::hx::Null< Float >  greenMultiplier,::hx::Null< Float >  blueMultiplier,::hx::Null< Float >  alphaMultiplier,::hx::Null< int >  redOffset,::hx::Null< int >  greenOffset,::hx::Null< int >  blueOffset,::hx::Null< int >  alphaOffset);
		::Dynamic setColorTransform_dyn();

		virtual void updateColorTransform();
		::Dynamic updateColorTransform_dyn();

		virtual bool pixelsOverlapPoint( ::flixel::math::FlxPoint point,::hx::Null< int >  Mask, ::flixel::FlxCamera Camera);
		::Dynamic pixelsOverlapPoint_dyn();

		virtual void calcFrame(::hx::Null< bool >  RunOnCpp);
		::Dynamic calcFrame_dyn();

		 ::openfl::display::BitmapData updateFramePixels();
		::Dynamic updateFramePixels_dyn();

		 ::flixel::math::FlxPoint getGraphicMidpoint( ::flixel::math::FlxPoint point);
		::Dynamic getGraphicMidpoint_dyn();

		virtual bool isOnScreen( ::flixel::FlxCamera Camera);

		bool isSimpleRender( ::flixel::FlxCamera camera);
		::Dynamic isSimpleRender_dyn();

		bool isSimpleRenderBlit( ::flixel::FlxCamera camera);
		::Dynamic isSimpleRenderBlit_dyn();

		void setFacingFlip(int Direction,bool FlipX,bool FlipY);
		::Dynamic setFacingFlip_dyn();

		 ::flixel::FlxSprite setFrames( ::flixel::graphics::frames::FlxFramesCollection Frames,::hx::Null< bool >  saveAnimations);
		::Dynamic setFrames_dyn();

		virtual  ::openfl::display::BitmapData get_pixels();
		::Dynamic get_pixels_dyn();

		virtual  ::openfl::display::BitmapData set_pixels( ::openfl::display::BitmapData Pixels);
		::Dynamic set_pixels_dyn();

		virtual  ::flixel::graphics::frames::FlxFrame set_frame( ::flixel::graphics::frames::FlxFrame Value);
		::Dynamic set_frame_dyn();

		virtual int set_facing(int Direction);
		::Dynamic set_facing_dyn();

		virtual Float set_alpha(Float Alpha);
		::Dynamic set_alpha_dyn();

		virtual int set_color(int Color);
		::Dynamic set_color_dyn();

		virtual Float set_angle(Float Value);

		void updateTrig();
		::Dynamic updateTrig_dyn();

		virtual  ::Dynamic set_blend( ::Dynamic Value);
		::Dynamic set_blend_dyn();

		 ::flixel::graphics::FlxGraphic set_graphic( ::flixel::graphics::FlxGraphic Value);
		::Dynamic set_graphic_dyn();

		virtual  ::flixel::math::FlxRect set_clipRect( ::flixel::math::FlxRect rect);
		::Dynamic set_clipRect_dyn();

		virtual  ::flixel::graphics::frames::FlxFramesCollection set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames);
		::Dynamic set_frames_dyn();

		virtual bool set_flipX(bool Value);
		::Dynamic set_flipX_dyn();

		virtual bool set_flipY(bool Value);
		::Dynamic set_flipY_dyn();

		bool set_antialiasing(bool value);
		::Dynamic set_antialiasing_dyn();

		bool set_useFramePixels(bool value);
		::Dynamic set_useFramePixels_dyn();

		bool checkFlipX();
		::Dynamic checkFlipX_dyn();

		bool checkFlipY();
		::Dynamic checkFlipY_dyn();

};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxSprite */ 
