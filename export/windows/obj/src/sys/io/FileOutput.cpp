#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_672551e7f83d972f_33_new,"sys.io.FileOutput","new",0x19e22a16,"sys.io.FileOutput.new","C:\\bin\\winBin\\haxe_20201231082044_5e33a78aa\\haxe\\std/cpp/_std/sys/io/FileOutput.hx",33,0x8d45f55d)
HX_LOCAL_STACK_FRAME(_hx_pos_672551e7f83d972f_37_writeByte,"sys.io.FileOutput","writeByte",0x887099bd,"sys.io.FileOutput.writeByte","C:\\bin\\winBin\\haxe_20201231082044_5e33a78aa\\haxe\\std/cpp/_std/sys/io/FileOutput.hx",37,0x8d45f55d)
HX_LOCAL_STACK_FRAME(_hx_pos_672551e7f83d972f_44_writeBytes,"sys.io.FileOutput","writeBytes",0xda15ec16,"sys.io.FileOutput.writeBytes","C:\\bin\\winBin\\haxe_20201231082044_5e33a78aa\\haxe\\std/cpp/_std/sys/io/FileOutput.hx",44,0x8d45f55d)
HX_LOCAL_STACK_FRAME(_hx_pos_672551e7f83d972f_51_close,"sys.io.FileOutput","close",0xa583caee,"sys.io.FileOutput.close","C:\\bin\\winBin\\haxe_20201231082044_5e33a78aa\\haxe\\std/cpp/_std/sys/io/FileOutput.hx",51,0x8d45f55d)
namespace sys{
namespace io{

void FileOutput_obj::__construct( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_672551e7f83d972f_33_new)
HXDLIN(  33)		this->_hx___f = f;
            	}

Dynamic FileOutput_obj::__CreateEmpty() { return new FileOutput_obj; }

void *FileOutput_obj::_hx_vtable = 0;

Dynamic FileOutput_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FileOutput_obj > _hx_result = new FileOutput_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FileOutput_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0a55a26d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0a55a26d;
	} else {
		return inClassId==(int)0x32387970;
	}
}

void FileOutput_obj::writeByte(int c){
            	HX_STACKFRAME(&_hx_pos_672551e7f83d972f_37_writeByte)
HXDLIN(  37)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  38)			_hx_std_file_write_char(this->_hx___f,c);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  39)				{
HXLINE(  39)					null();
            				}
HXDLIN(  39)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(  40)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::Custom(e)));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


int FileOutput_obj::writeBytes( ::haxe::io::Bytes s,int p,int l){
            	HX_STACKFRAME(&_hx_pos_672551e7f83d972f_44_writeBytes)
HXDLIN(  44)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXDLIN(  44)			return _hx_std_file_write(this->_hx___f,s->b,p,l);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXDLIN(  44)				{
HXDLIN(  44)					null();
            				}
HXDLIN(  44)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN(  44)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::Custom(e)));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXDLIN(  44)		return 0;
            	}


void FileOutput_obj::close(){
            	HX_STACKFRAME(&_hx_pos_672551e7f83d972f_51_close)
HXLINE(  52)		this->super::close();
HXLINE(  53)		_hx_std_file_close(this->_hx___f);
            	}



::hx::ObjectPtr< FileOutput_obj > FileOutput_obj::__new( ::Dynamic f) {
	::hx::ObjectPtr< FileOutput_obj > __this = new FileOutput_obj();
	__this->__construct(f);
	return __this;
}

::hx::ObjectPtr< FileOutput_obj > FileOutput_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic f) {
	FileOutput_obj *__this = (FileOutput_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FileOutput_obj), true, "sys.io.FileOutput"));
	*(void **)__this = FileOutput_obj::_hx_vtable;
	__this->__construct(f);
	return __this;
}

FileOutput_obj::FileOutput_obj()
{
}

void FileOutput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FileOutput);
	HX_MARK_MEMBER_NAME(_hx___f,"__f");
	HX_MARK_END_CLASS();
}

void FileOutput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___f,"__f");
}

::hx::Val FileOutput_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__f") ) { return ::hx::Val( _hx___f ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeByte") ) { return ::hx::Val( writeByte_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return ::hx::Val( writeBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FileOutput_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__f") ) { _hx___f=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FileOutput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__f",46,69,48,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FileOutput_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FileOutput_obj,_hx___f),HX_("__f",46,69,48,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FileOutput_obj_sStaticStorageInfo = 0;
#endif

static ::String FileOutput_obj_sMemberFields[] = {
	HX_("__f",46,69,48,00),
	HX_("writeByte",87,13,d7,49),
	HX_("writeBytes",0c,03,5a,52),
	HX_("close",b8,17,63,48),
	::String(null()) };

::hx::Class FileOutput_obj::__mClass;

void FileOutput_obj::__register()
{
	FileOutput_obj _hx_dummy;
	FileOutput_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("sys.io.FileOutput",24,27,1a,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FileOutput_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FileOutput_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileOutput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileOutput_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace io
