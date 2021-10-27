#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DVideo
#include <openfl/display/_internal/Context3DVideo.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Video
#include <openfl/media/Video.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_83dc6c86a6c9c25b_25_render,"openfl.display._internal.Context3DVideo","render",0x5a89d2ed,"openfl.display._internal.Context3DVideo.render","openfl/display/_internal/Context3DVideo.hx",25,0x07ba4844)
HX_LOCAL_STACK_FRAME(_hx_pos_83dc6c86a6c9c25b_96_renderDrawable,"openfl.display._internal.Context3DVideo","renderDrawable",0x20d4afab,"openfl.display._internal.Context3DVideo.renderDrawable","openfl/display/_internal/Context3DVideo.hx",96,0x07ba4844)
HX_LOCAL_STACK_FRAME(_hx_pos_83dc6c86a6c9c25b_103_renderDrawableMask,"openfl.display._internal.Context3DVideo","renderDrawableMask",0xe30cce37,"openfl.display._internal.Context3DVideo.renderDrawableMask","openfl/display/_internal/Context3DVideo.hx",103,0x07ba4844)
HX_LOCAL_STACK_FRAME(_hx_pos_83dc6c86a6c9c25b_107_renderMask,"openfl.display._internal.Context3DVideo","renderMask",0xa201ba79,"openfl.display._internal.Context3DVideo.renderMask","openfl/display/_internal/Context3DVideo.hx",107,0x07ba4844)
HX_LOCAL_STACK_FRAME(_hx_pos_83dc6c86a6c9c25b_20_boot,"openfl.display._internal.Context3DVideo","boot",0x10f20809,"openfl.display._internal.Context3DVideo.boot","openfl/display/_internal/Context3DVideo.hx",20,0x07ba4844)
HX_LOCAL_STACK_FRAME(_hx_pos_83dc6c86a6c9c25b_22_boot,"openfl.display._internal.Context3DVideo","boot",0x10f20809,"openfl.display._internal.Context3DVideo.boot","openfl/display/_internal/Context3DVideo.hx",22,0x07ba4844)
static const Float _hx_array_data_001a6bf7_6[] = {
	(Float)0,0.,
};
namespace openfl{
namespace display{
namespace _internal{

void Context3DVideo_obj::__construct() { }

Dynamic Context3DVideo_obj::__CreateEmpty() { return new Context3DVideo_obj; }

void *Context3DVideo_obj::_hx_vtable = 0;

Dynamic Context3DVideo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DVideo_obj > _hx_result = new Context3DVideo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DVideo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4de6ab29;
}

::Array< Float > Context3DVideo_obj::_hx___textureSizeValue;

void Context3DVideo_obj::render( ::openfl::media::Video video, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_83dc6c86a6c9c25b_25_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DVideo_obj,render,(void))

void Context3DVideo_obj::renderDrawable( ::openfl::media::Video video, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_83dc6c86a6c9c25b_96_renderDrawable)
HXLINE(  97)		::openfl::display::_internal::Context3DVideo_obj::render(video,renderer);
HXLINE(  98)		renderer->_hx___renderEvent(video);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DVideo_obj,renderDrawable,(void))

void Context3DVideo_obj::renderDrawableMask( ::openfl::media::Video video, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_83dc6c86a6c9c25b_103_renderDrawableMask)
HXDLIN( 103)		::openfl::display::_internal::Context3DVideo_obj::renderMask(video,renderer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DVideo_obj,renderDrawableMask,(void))

void Context3DVideo_obj::renderMask( ::openfl::media::Video video, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_83dc6c86a6c9c25b_107_renderMask)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DVideo_obj,renderMask,(void))


Context3DVideo_obj::Context3DVideo_obj()
{
}

bool Context3DVideo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__textureSizeValue") ) { outValue = ( _hx___textureSizeValue ); return true; }
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

bool Context3DVideo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"__textureSizeValue") ) { _hx___textureSizeValue=ioValue.Cast< ::Array< Float > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DVideo_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Context3DVideo_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(void *) &Context3DVideo_obj::_hx___textureSizeValue,HX_("__textureSizeValue",b5,29,2d,70)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Context3DVideo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DVideo_obj::_hx___textureSizeValue,"__textureSizeValue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DVideo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DVideo_obj::_hx___textureSizeValue,"__textureSizeValue");
};

#endif

::hx::Class Context3DVideo_obj::__mClass;

static ::String Context3DVideo_obj_sStaticFields[] = {
	HX_("__textureSizeValue",b5,29,2d,70),
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	HX_("renderMask",62,3b,60,e5),
	::String(null())
};

void Context3DVideo_obj::__register()
{
	Context3DVideo_obj _hx_dummy;
	Context3DVideo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.Context3DVideo",f7,6b,1a,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DVideo_obj::__GetStatic;
	__mClass->mSetStaticField = &Context3DVideo_obj::__SetStatic;
	__mClass->mMarkFunc = Context3DVideo_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DVideo_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DVideo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DVideo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DVideo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DVideo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DVideo_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_83dc6c86a6c9c25b_20_boot)
HXDLIN(  20)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_83dc6c86a6c9c25b_22_boot)
HXDLIN(  22)		_hx___textureSizeValue = ::Array_obj< Float >::fromData( _hx_array_data_001a6bf7_6,2);
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
