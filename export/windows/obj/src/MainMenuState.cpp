#include <hxcpp.h>

#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_9_new,"MainMenuState","new",0x83a7c9cb,"MainMenuState.new","MainMenuState.hx",9,0x0e5db805)
static const ::String _hx_array_data_205e8859_1[] = {
	HX_("storymode",d8,85,a8,3d),HX_("freeplay",a0,90,86,22),HX_("credits",1a,0e,5e,13),HX_("options",5e,33,fe,df),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_17_create,"MainMenuState","create",0x6b76e271,"MainMenuState.create","MainMenuState.hx",17,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_57_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",57,0x0e5db805)

void MainMenuState_obj::__construct( ::Dynamic MaxSize){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_9_new)
HXLINE(  14)		this->menuItems =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,100);
HXLINE(  13)		this->funnyTriangle =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE(  12)		this->bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE(  11)		this->menuShit = ::Array_obj< ::String >::fromData( _hx_array_data_205e8859_1,4);
HXLINE(   9)		super::__construct(MaxSize);
            	}

Dynamic MainMenuState_obj::__CreateEmpty() { return new MainMenuState_obj; }

void *MainMenuState_obj::_hx_vtable = 0;

Dynamic MainMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainMenuState_obj > _hx_result = new MainMenuState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MainMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6915cded) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x6915cded;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void MainMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_17_create)
HXLINE(  18)		this->super::create();
HXLINE(  19)		 ::flixel::FlxSprite _hx_tmp = this->bg;
HXDLIN(  19)		_hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuBG",24,65,6d,05)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null()),null(),null(),null(),null(),null());
HXLINE(  20)		this->bg->screenCenter(null());
HXLINE(  21)		this->bg->set_antialiasing(true);
HXLINE(  22)		this->bg->scrollFactor->set(null(),null());
HXLINE(  23)		this->add(this->bg);
HXLINE(  24)		::String library = null();
HXDLIN(  24)		::String tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("funnyTriangle",32,cf,52,f2)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null());
HXDLIN(  24)		 ::flixel::graphics::frames::FlxAtlasFrames tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("funnyTriangle",32,cf,52,f2)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE(  25)		this->funnyTriangle->set_frames(tex1);
HXLINE(  26)		this->funnyTriangle->set_antialiasing(true);
HXLINE(  27)		this->funnyTriangle->animation->addByPrefix(HX_("1",31,00,00,00),HX_("story mode",6e,d7,a7,5e),24,true,null(),null());
HXLINE(  28)		this->funnyTriangle->animation->addByPrefix(HX_("2",32,00,00,00),HX_("freeplay",a0,90,86,22),24,true,null(),null());
HXLINE(  29)		this->funnyTriangle->animation->addByPrefix(HX_("3",33,00,00,00),HX_("credits",1a,0e,5e,13),24,true,null(),null());
HXLINE(  30)		this->funnyTriangle->animation->addByPrefix(HX_("4",34,00,00,00),HX_("options",5e,33,fe,df),24,true,null(),null());
HXLINE(  31)		 ::flixel::FlxSprite _hx_tmp1 = this->funnyTriangle;
HXDLIN(  31)		_hx_tmp1->set_x((this->funnyTriangle->get_width() * ((Float)1.2)));
HXLINE(  32)		 ::flixel::FlxSprite _hx_tmp2 = this->funnyTriangle;
HXDLIN(  32)		int _hx_tmp3 = ::flixel::FlxG_obj::height;
HXDLIN(  32)		_hx_tmp2->set_y((( (Float)(_hx_tmp3) ) - (this->funnyTriangle->get_height() * ((Float)1.6))));
HXLINE(  34)		this->add(this->funnyTriangle);
HXLINE(  36)		{
HXLINE(  36)			int _g = 0;
HXDLIN(  36)			int _g1 = this->menuShit->length;
HXDLIN(  36)			while((_g < _g1)){
HXLINE(  36)				_g = (_g + 1);
HXDLIN(  36)				int i = (_g - 1);
HXLINE(  39)				 ::flixel::FlxSprite menuItem =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,550,(( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(6) )),null());
HXLINE(  40)				::String library = null();
HXDLIN(  40)				::String tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("funkyMenu",ec,43,55,b5)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null());
HXDLIN(  40)				 ::flixel::graphics::frames::FlxAtlasFrames tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("funkyMenu",ec,43,55,b5)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE(  41)				menuItem->set_antialiasing(true);
HXLINE(  42)				menuItem->set_frames(tex1);
HXLINE(  43)				menuItem->animation->addByPrefix(HX_("idle",14,a7,b3,45),this->menuShit->__get(i),24,null(),null(),null());
HXLINE(  44)				menuItem->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  45)				menuItem->set_y((menuItem->y + (i * 100)));
HXLINE(  46)				menuItem->set_x((menuItem->x + (i * 120)));
HXLINE(  47)				menuItem->setGraphicSize(::Std_obj::_hx_int((menuItem->get_width() * ((Float)1.5))),null());
HXLINE(  48)				menuItem->updateHitbox();
HXLINE(  49)				menuItem->ID = i;
HXLINE(  50)				this->menuItems->add(menuItem).StaticCast<  ::flixel::FlxBasic >();
            			}
            		}
HXLINE(  52)		this->add(this->menuItems);
            	}


void MainMenuState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_57_update)
HXDLIN(  57)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< MainMenuState_obj > __this = new MainMenuState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	MainMenuState_obj *__this = (MainMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainMenuState_obj), true, "MainMenuState"));
	*(void **)__this = MainMenuState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

MainMenuState_obj::MainMenuState_obj()
{
}

void MainMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainMenuState);
	HX_MARK_MEMBER_NAME(menuShit,"menuShit");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(funnyTriangle,"funnyTriangle");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(menuShit,"menuShit");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(funnyTriangle,"funnyTriangle");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MainMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"menuShit") ) { return ::hx::Val( menuShit ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"funnyTriangle") ) { return ::hx::Val( funnyTriangle ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MainMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"menuShit") ) { menuShit=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"funnyTriangle") ) { funnyTriangle=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("menuShit",ff,fc,c1,52));
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("funnyTriangle",32,cf,52,f2));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(MainMenuState_obj,menuShit),HX_("menuShit",ff,fc,c1,52)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,funnyTriangle),HX_("funnyTriangle",32,cf,52,f2)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MainMenuState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MainMenuState_obj_sStaticStorageInfo = 0;
#endif

static ::String MainMenuState_obj_sMemberFields[] = {
	HX_("menuShit",ff,fc,c1,52),
	HX_("bg",c5,55,00,00),
	HX_("funnyTriangle",32,cf,52,f2),
	HX_("menuItems",e1,15,e5,5c),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class MainMenuState_obj::__mClass;

void MainMenuState_obj::__register()
{
	MainMenuState_obj _hx_dummy;
	MainMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MainMenuState",59,88,5e,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainMenuState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

