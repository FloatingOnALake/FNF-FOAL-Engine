#ifndef INCLUDED_lime_media_AudioSource
#define INCLUDED_lime_media_AudioSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeAudioSource)
HX_DECLARE_CLASS2(lime,app,_Event_Void_Void)
HX_DECLARE_CLASS2(lime,math,Vector4)
HX_DECLARE_CLASS2(lime,media,AudioBuffer)
HX_DECLARE_CLASS2(lime,media,AudioSource)

namespace lime{
namespace media{


class HXCPP_CLASS_ATTRIBUTES AudioSource_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AudioSource_obj OBJ_;
		AudioSource_obj();

	public:
		enum { _hx_ClassId = 0x37add122 };

		void __construct( ::lime::media::AudioBuffer buffer,::hx::Null< int >  __o_offset, ::Dynamic length,::hx::Null< int >  __o_loops);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.media.AudioSource")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.media.AudioSource"); }
		static ::hx::ObjectPtr< AudioSource_obj > __new( ::lime::media::AudioBuffer buffer,::hx::Null< int >  __o_offset, ::Dynamic length,::hx::Null< int >  __o_loops);
		static ::hx::ObjectPtr< AudioSource_obj > __alloc(::hx::Ctx *_hx_ctx, ::lime::media::AudioBuffer buffer,::hx::Null< int >  __o_offset, ::Dynamic length,::hx::Null< int >  __o_loops);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AudioSource_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AudioSource",31,7a,14,e5); }

		 ::lime::app::_Event_Void_Void onComplete;
		 ::lime::media::AudioBuffer buffer;
		int offset;
		 ::lime::_internal::backend::native::NativeAudioSource _hx___backend;
		void dispose();
		::Dynamic dispose_dyn();

		void init();
		::Dynamic init_dyn();

		void play();
		::Dynamic play_dyn();

		void pause();
		::Dynamic pause_dyn();

		void stop();
		::Dynamic stop_dyn();

		int get_currentTime();
		::Dynamic get_currentTime_dyn();

		int set_currentTime(int value);
		::Dynamic set_currentTime_dyn();

		Float get_gain();
		::Dynamic get_gain_dyn();

		Float set_gain(Float value);
		::Dynamic set_gain_dyn();

		int get_length();
		::Dynamic get_length_dyn();

		int set_length(int value);
		::Dynamic set_length_dyn();

		int get_loops();
		::Dynamic get_loops_dyn();

		int set_loops(int value);
		::Dynamic set_loops_dyn();

		 ::lime::math::Vector4 get_position();
		::Dynamic get_position_dyn();

		 ::lime::math::Vector4 set_position( ::lime::math::Vector4 value);
		::Dynamic set_position_dyn();

};

} // end namespace lime
} // end namespace media

#endif /* INCLUDED_lime_media_AudioSource */ 
