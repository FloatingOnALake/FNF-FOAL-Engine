#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#include <flixel/system/debug/console/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console__ConsoleUtil_Interp
#include <flixel/system/debug/console/_ConsoleUtil/Interp.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a994ee380c23f681_35_init,"flixel.system.debug.console.ConsoleUtil","init",0x40765844,"flixel.system.debug.console.ConsoleUtil.init","flixel/system/debug/console/ConsoleUtil.hx",35,0x2e8bcde6)
HX_LOCAL_STACK_FRAME(_hx_pos_a994ee380c23f681_50_parseCommand,"flixel.system.debug.console.ConsoleUtil","parseCommand",0xbaf1368c,"flixel.system.debug.console.ConsoleUtil.parseCommand","flixel/system/debug/console/ConsoleUtil.hx",50,0x2e8bcde6)
HX_LOCAL_STACK_FRAME(_hx_pos_a994ee380c23f681_64_runCommand,"flixel.system.debug.console.ConsoleUtil","runCommand",0x85b4fd74,"flixel.system.debug.console.ConsoleUtil.runCommand","flixel/system/debug/console/ConsoleUtil.hx",64,0x2e8bcde6)
HX_LOCAL_STACK_FRAME(_hx_pos_a994ee380c23f681_74_runExpr,"flixel.system.debug.console.ConsoleUtil","runExpr",0x4a0f2d6c,"flixel.system.debug.console.ConsoleUtil.runExpr","flixel/system/debug/console/ConsoleUtil.hx",74,0x2e8bcde6)
HX_LOCAL_STACK_FRAME(_hx_pos_a994ee380c23f681_85_registerObject,"flixel.system.debug.console.ConsoleUtil","registerObject",0x0d502bb6,"flixel.system.debug.console.ConsoleUtil.registerObject","flixel/system/debug/console/ConsoleUtil.hx",85,0x2e8bcde6)
HX_LOCAL_STACK_FRAME(_hx_pos_a994ee380c23f681_97_registerFunction,"flixel.system.debug.console.ConsoleUtil","registerFunction",0xb3a1c3cf,"flixel.system.debug.console.ConsoleUtil.registerFunction","flixel/system/debug/console/ConsoleUtil.hx",97,0x2e8bcde6)
HX_LOCAL_STACK_FRAME(_hx_pos_a994ee380c23f681_103_getFields,"flixel.system.debug.console.ConsoleUtil","getFields",0x604f9dfb,"flixel.system.debug.console.ConsoleUtil.getFields","flixel/system/debug/console/ConsoleUtil.hx",103,0x2e8bcde6)
HX_LOCAL_STACK_FRAME(_hx_pos_a994ee380c23f681_134_sortFields,"flixel.system.debug.console.ConsoleUtil","sortFields",0x773f00ab,"flixel.system.debug.console.ConsoleUtil.sortFields","flixel/system/debug/console/ConsoleUtil.hx",134,0x2e8bcde6)
HX_LOCAL_STACK_FRAME(_hx_pos_a994ee380c23f681_160_log,"flixel.system.debug.console.ConsoleUtil","log",0x2bebd9d0,"flixel.system.debug.console.ConsoleUtil.log","flixel/system/debug/console/ConsoleUtil.hx",160,0x2e8bcde6)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace console{

void ConsoleUtil_obj::__construct() { }

Dynamic ConsoleUtil_obj::__CreateEmpty() { return new ConsoleUtil_obj; }

void *ConsoleUtil_obj::_hx_vtable = 0;

Dynamic ConsoleUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ConsoleUtil_obj > _hx_result = new ConsoleUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ConsoleUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x31204b4a;
}

 ::hscript::Parser ConsoleUtil_obj::parser;

 ::flixel::_hx_system::debug::console::_ConsoleUtil::Interp ConsoleUtil_obj::interp;

void ConsoleUtil_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_a994ee380c23f681_35_init)
HXLINE(  36)		::flixel::_hx_system::debug::console::ConsoleUtil_obj::parser =  ::hscript::Parser_obj::__alloc( HX_CTX );
HXLINE(  37)		::flixel::_hx_system::debug::console::ConsoleUtil_obj::parser->allowJSON = true;
HXLINE(  38)		::flixel::_hx_system::debug::console::ConsoleUtil_obj::parser->allowTypes = true;
HXLINE(  40)		::flixel::_hx_system::debug::console::ConsoleUtil_obj::interp =  ::flixel::_hx_system::debug::console::_ConsoleUtil::Interp_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ConsoleUtil_obj,init,(void))

 ::hscript::Expr ConsoleUtil_obj::parseCommand(::String Input){
            	HX_STACKFRAME(&_hx_pos_a994ee380c23f681_50_parseCommand)
HXLINE(  51)		if (::StringTools_obj::endsWith(Input,HX_(";",3b,00,00,00))) {
HXLINE(  52)			Input = Input.substr(0,-1);
            		}
HXLINE(  53)		return ::flixel::_hx_system::debug::console::ConsoleUtil_obj::parser->parseString(Input,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,parseCommand,return )

 ::Dynamic ConsoleUtil_obj::runCommand(::String Input){
            	HX_STACKFRAME(&_hx_pos_a994ee380c23f681_64_runCommand)
HXDLIN(  64)		 ::flixel::_hx_system::debug::console::_ConsoleUtil::Interp _hx_tmp = ::flixel::_hx_system::debug::console::ConsoleUtil_obj::interp;
HXDLIN(  64)		return _hx_tmp->expr(::flixel::_hx_system::debug::console::ConsoleUtil_obj::parseCommand(Input));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,runCommand,return )

 ::Dynamic ConsoleUtil_obj::runExpr( ::hscript::Expr expr){
            	HX_STACKFRAME(&_hx_pos_a994ee380c23f681_74_runExpr)
HXDLIN(  74)		return ::flixel::_hx_system::debug::console::ConsoleUtil_obj::interp->expr(expr);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,runExpr,return )

void ConsoleUtil_obj::registerObject(::String ObjectAlias, ::Dynamic AnyObject){
            	HX_STACKFRAME(&_hx_pos_a994ee380c23f681_85_registerObject)
HXDLIN(  85)		bool _hx_tmp;
HXDLIN(  85)		if (::hx::IsNotNull( AnyObject )) {
HXDLIN(  85)			_hx_tmp = ::Reflect_obj::isObject(AnyObject);
            		}
            		else {
HXDLIN(  85)			_hx_tmp = true;
            		}
HXDLIN(  85)		if (_hx_tmp) {
HXLINE(  86)			::flixel::_hx_system::debug::console::ConsoleUtil_obj::interp->variables->set(ObjectAlias,AnyObject);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,registerObject,(void))

void ConsoleUtil_obj::registerFunction(::String FunctionAlias, ::Dynamic Function){
            	HX_STACKFRAME(&_hx_pos_a994ee380c23f681_97_registerFunction)
HXDLIN(  97)		if (::Reflect_obj::isFunction(Function)) {
HXLINE(  98)			::flixel::_hx_system::debug::console::ConsoleUtil_obj::interp->variables->set(FunctionAlias,Function);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,registerFunction,(void))

::Array< ::String > ConsoleUtil_obj::getFields( ::Dynamic Object){
            	HX_STACKFRAME(&_hx_pos_a994ee380c23f681_103_getFields)
HXLINE( 104)		::Array< ::String > fields = ::Array_obj< ::String >::__new(0);
HXLINE( 105)		if (::Std_obj::isOfType(Object,::hx::ClassOf< ::hx::Class >())) {
HXLINE( 106)			fields = ::Type_obj::getClassFields(Object);
            		}
            		else {
HXLINE( 107)			if (::Std_obj::isOfType(Object,::hx::ClassOf< ::Enum >())) {
HXLINE( 108)				fields = ::Type_obj::getEnumConstructs(Object);
            			}
            			else {
HXLINE( 109)				if (::Reflect_obj::isObject(Object)) {
HXLINE( 110)					fields = ::Type_obj::getInstanceFields(::Type_obj::getClass(Object));
            				}
            			}
            		}
HXLINE( 113)		fields->remove(HX_("__constructs__",bc,a9,85,55));
HXLINE( 115)		::Array< ::String > filteredFields = ::Array_obj< ::String >::__new(0);
HXLINE( 116)		{
HXLINE( 116)			int _g = 0;
HXDLIN( 116)			while((_g < fields->length)){
HXLINE( 116)				::String field = fields->__get(_g);
HXDLIN( 116)				_g = (_g + 1);
HXLINE( 119)				bool _hx_tmp;
HXDLIN( 119)				if (!(::StringTools_obj::startsWith(field,HX_("get_",09,03,62,44)))) {
HXLINE( 119)					_hx_tmp = ::StringTools_obj::startsWith(field,HX_("set_",7d,92,50,4c));
            				}
            				else {
HXLINE( 119)					_hx_tmp = true;
            				}
HXDLIN( 119)				if (_hx_tmp) {
HXLINE( 121)					::String name = field.substr(4,null());
HXLINE( 123)					bool _hx_tmp;
HXDLIN( 123)					if (!(fields->contains(name))) {
HXLINE( 123)						_hx_tmp = !(filteredFields->contains(name));
            					}
            					else {
HXLINE( 123)						_hx_tmp = false;
            					}
HXDLIN( 123)					if (_hx_tmp) {
HXLINE( 124)						filteredFields->push(name);
            					}
            				}
            				else {
HXLINE( 127)					filteredFields->push(field);
            				}
            			}
            		}
HXLINE( 130)		return ::flixel::_hx_system::debug::console::ConsoleUtil_obj::sortFields(filteredFields);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,getFields,return )

::Array< ::String > ConsoleUtil_obj::sortFields(::Array< ::String > fields){
            	HX_STACKFRAME(&_hx_pos_a994ee380c23f681_134_sortFields)
HXLINE( 135)		::Array< ::String > underscoreList = ::Array_obj< ::String >::__new(0);
HXLINE( 137)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 137)		{
HXLINE( 137)			int _g1 = 0;
HXDLIN( 137)			::Array< ::String > _g2 = fields;
HXDLIN( 137)			while((_g1 < _g2->length)){
HXLINE( 137)				::String v = _g2->__get(_g1);
HXDLIN( 137)				_g1 = (_g1 + 1);
HXLINE( 139)				bool fields;
HXDLIN( 139)				if (::StringTools_obj::startsWith(v,HX_("_",5f,00,00,00))) {
HXLINE( 141)					underscoreList->push(v);
HXLINE( 139)					fields = false;
            				}
            				else {
HXLINE( 139)					fields = true;
            				}
HXLINE( 137)				if (fields) {
HXLINE( 137)					_g->push(v);
            				}
            			}
            		}
HXDLIN( 137)		fields = _g;
HXLINE( 147)		::flixel::util::FlxStringUtil_obj::sortAlphabetically(fields);
HXLINE( 148)		::flixel::util::FlxStringUtil_obj::sortAlphabetically(underscoreList);
HXLINE( 150)		return fields->concat(underscoreList);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,sortFields,return )

void ConsoleUtil_obj::log( ::Dynamic Text){
            	HX_STACKFRAME(&_hx_pos_a994ee380c23f681_160_log)
HXDLIN( 160)		::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,Text),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,log,(void))


ConsoleUtil_obj::ConsoleUtil_obj()
{
}

bool ConsoleUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { outValue = log_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parser") ) { outValue = ( parser ); return true; }
		if (HX_FIELD_EQ(inName,"interp") ) { outValue = ( interp ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"runExpr") ) { outValue = runExpr_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFields") ) { outValue = getFields_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"runCommand") ) { outValue = runCommand_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sortFields") ) { outValue = sortFields_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"parseCommand") ) { outValue = parseCommand_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registerObject") ) { outValue = registerObject_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerFunction") ) { outValue = registerFunction_dyn(); return true; }
	}
	return false;
}

bool ConsoleUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"parser") ) { parser=ioValue.Cast<  ::hscript::Parser >(); return true; }
		if (HX_FIELD_EQ(inName,"interp") ) { interp=ioValue.Cast<  ::flixel::_hx_system::debug::console::_ConsoleUtil::Interp >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ConsoleUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ConsoleUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::hscript::Parser */ ,(void *) &ConsoleUtil_obj::parser,HX_("parser",df,9c,88,ed)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::console::_ConsoleUtil::Interp */ ,(void *) &ConsoleUtil_obj::interp,HX_("interp",d4,79,86,9e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ConsoleUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleUtil_obj::parser,"parser");
	HX_MARK_MEMBER_NAME(ConsoleUtil_obj::interp,"interp");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConsoleUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleUtil_obj::parser,"parser");
	HX_VISIT_MEMBER_NAME(ConsoleUtil_obj::interp,"interp");
};

#endif

::hx::Class ConsoleUtil_obj::__mClass;

static ::String ConsoleUtil_obj_sStaticFields[] = {
	HX_("parser",df,9c,88,ed),
	HX_("interp",d4,79,86,9e),
	HX_("init",10,3b,bb,45),
	HX_("parseCommand",58,c5,47,db),
	HX_("runCommand",40,01,ea,eb),
	HX_("runExpr",20,12,5b,d0),
	HX_("registerObject",82,05,81,db),
	HX_("registerFunction",9b,a8,15,13),
	HX_("getFields",af,17,e5,fc),
	HX_("sortFields",77,04,74,dd),
	HX_("log",84,54,52,00),
	::String(null())
};

void ConsoleUtil_obj::__register()
{
	ConsoleUtil_obj _hx_dummy;
	ConsoleUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.console.ConsoleUtil",ba,4f,d6,a9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConsoleUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &ConsoleUtil_obj::__SetStatic;
	__mClass->mMarkFunc = ConsoleUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ConsoleUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ConsoleUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConsoleUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConsoleUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConsoleUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console
