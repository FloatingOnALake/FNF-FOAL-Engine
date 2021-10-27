#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_GenericCell_hscript_Token
#include <haxe/ds/GenericCell_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds_GenericStack_hscript_Token
#include <haxe/ds/GenericStack_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds__GenericStack_GenericStackIterator_hscript_Token
#include <haxe/ds/_GenericStack/GenericStackIterator_hscript_Token.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_843328fad7e824ae_107_new,"haxe.ds.GenericStack_hscript_Token","new",0xda5f4ac8,"haxe.ds.GenericStack_hscript_Token.new","C:\\bin\\winBin\\haxe_20201231082044_5e33a78aa\\haxe\\std/haxe/ds/GenericStack.hx",107,0x99db8fda)
HX_LOCAL_STACK_FRAME(_hx_pos_843328fad7e824ae_113_add,"haxe.ds.GenericStack_hscript_Token","add",0xda556c89,"haxe.ds.GenericStack_hscript_Token.add","C:\\bin\\winBin\\haxe_20201231082044_5e33a78aa\\haxe\\std/haxe/ds/GenericStack.hx",113,0x99db8fda)
HX_LOCAL_STACK_FRAME(_hx_pos_843328fad7e824ae_122_first,"haxe.ds.GenericStack_hscript_Token","first",0x104a5c98,"haxe.ds.GenericStack_hscript_Token.first","C:\\bin\\winBin\\haxe_20201231082044_5e33a78aa\\haxe\\std/haxe/ds/GenericStack.hx",122,0x99db8fda)
HX_LOCAL_STACK_FRAME(_hx_pos_843328fad7e824ae_130_pop,"haxe.ds.GenericStack_hscript_Token","pop",0xda60d7f9,"haxe.ds.GenericStack_hscript_Token.pop","C:\\bin\\winBin\\haxe_20201231082044_5e33a78aa\\haxe\\std/haxe/ds/GenericStack.hx",130,0x99db8fda)
HX_LOCAL_STACK_FRAME(_hx_pos_843328fad7e824ae_144_isEmpty,"haxe.ds.GenericStack_hscript_Token","isEmpty",0x0c5cacab,"haxe.ds.GenericStack_hscript_Token.isEmpty","C:\\bin\\winBin\\haxe_20201231082044_5e33a78aa\\haxe\\std/haxe/ds/GenericStack.hx",144,0x99db8fda)
HX_LOCAL_STACK_FRAME(_hx_pos_843328fad7e824ae_156_remove,"haxe.ds.GenericStack_hscript_Token","remove",0xac2392dc,"haxe.ds.GenericStack_hscript_Token.remove","C:\\bin\\winBin\\haxe_20201231082044_5e33a78aa\\haxe\\std/haxe/ds/GenericStack.hx",156,0x99db8fda)
HX_LOCAL_STACK_FRAME(_hx_pos_843328fad7e824ae_178_iterator,"haxe.ds.GenericStack_hscript_Token","iterator",0x90d21686,"haxe.ds.GenericStack_hscript_Token.iterator","C:\\bin\\winBin\\haxe_20201231082044_5e33a78aa\\haxe\\std/haxe/ds/GenericStack.hx",178,0x99db8fda)
HX_LOCAL_STACK_FRAME(_hx_pos_843328fad7e824ae_203_toString,"haxe.ds.GenericStack_hscript_Token","toString",0x35a69d44,"haxe.ds.GenericStack_hscript_Token.toString","C:\\bin\\winBin\\haxe_20201231082044_5e33a78aa\\haxe\\std/haxe/ds/GenericStack.hx",203,0x99db8fda)
namespace haxe{
namespace ds{

void GenericStack_hscript_Token_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_843328fad7e824ae_107_new)
            	}

Dynamic GenericStack_hscript_Token_obj::__CreateEmpty() { return new GenericStack_hscript_Token_obj; }

void *GenericStack_hscript_Token_obj::_hx_vtable = 0;

Dynamic GenericStack_hscript_Token_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GenericStack_hscript_Token_obj > _hx_result = new GenericStack_hscript_Token_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GenericStack_hscript_Token_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x76b7fd14;
}

void GenericStack_hscript_Token_obj::add( ::hscript::Token item){
            	HX_GC_STACKFRAME(&_hx_pos_843328fad7e824ae_113_add)
HXDLIN( 113)		this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,item,this->head);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericStack_hscript_Token_obj,add,(void))

 ::hscript::Token GenericStack_hscript_Token_obj::first(){
            	HX_STACKFRAME(&_hx_pos_843328fad7e824ae_122_first)
HXDLIN( 122)		if (::hx::IsNull( this->head )) {
HXDLIN( 122)			return null();
            		}
            		else {
HXDLIN( 122)			return this->head->elt;
            		}
HXDLIN( 122)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hscript_Token_obj,first,return )

 ::hscript::Token GenericStack_hscript_Token_obj::pop(){
            	HX_STACKFRAME(&_hx_pos_843328fad7e824ae_130_pop)
HXLINE( 131)		 ::haxe::ds::GenericCell_hscript_Token k = this->head;
HXLINE( 132)		if (::hx::IsNull( k )) {
HXLINE( 133)			return null();
            		}
            		else {
HXLINE( 135)			this->head = k->next;
HXLINE( 136)			return k->elt;
            		}
HXLINE( 132)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hscript_Token_obj,pop,return )

bool GenericStack_hscript_Token_obj::isEmpty(){
            	HX_STACKFRAME(&_hx_pos_843328fad7e824ae_144_isEmpty)
HXDLIN( 144)		return ::hx::IsNull( this->head );
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hscript_Token_obj,isEmpty,return )

bool GenericStack_hscript_Token_obj::remove( ::hscript::Token v){
            	HX_STACKFRAME(&_hx_pos_843328fad7e824ae_156_remove)
HXLINE( 157)		 ::haxe::ds::GenericCell_hscript_Token prev = null();
HXLINE( 158)		 ::haxe::ds::GenericCell_hscript_Token l = this->head;
HXLINE( 159)		while(::hx::IsNotNull( l )){
HXLINE( 160)			if (::hx::IsPointerEq( l->elt,v )) {
HXLINE( 161)				if (::hx::IsNull( prev )) {
HXLINE( 162)					this->head = l->next;
            				}
            				else {
HXLINE( 164)					prev->next = l->next;
            				}
HXLINE( 165)				goto _hx_goto_5;
            			}
HXLINE( 167)			prev = l;
HXLINE( 168)			l = l->next;
            		}
            		_hx_goto_5:;
HXLINE( 170)		return ::hx::IsNotNull( l );
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericStack_hscript_Token_obj,remove,return )

 ::Dynamic GenericStack_hscript_Token_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_843328fad7e824ae_178_iterator)
HXDLIN( 178)		return  ::haxe::ds::_GenericStack::GenericStackIterator_hscript_Token_obj::__alloc( HX_CTX ,this->head);
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hscript_Token_obj,iterator,return )

::String GenericStack_hscript_Token_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_843328fad7e824ae_203_toString)
HXLINE( 204)		::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE( 205)		 ::haxe::ds::GenericCell_hscript_Token l = this->head;
HXLINE( 206)		while(::hx::IsNotNull( l )){
HXLINE( 207)			a->push(l->elt);
HXLINE( 208)			l = l->next;
            		}
HXLINE( 210)		return ((HX_("{",7b,00,00,00) + a->join(HX_(",",2c,00,00,00))) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hscript_Token_obj,toString,return )


::hx::ObjectPtr< GenericStack_hscript_Token_obj > GenericStack_hscript_Token_obj::__new() {
	::hx::ObjectPtr< GenericStack_hscript_Token_obj > __this = new GenericStack_hscript_Token_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GenericStack_hscript_Token_obj > GenericStack_hscript_Token_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GenericStack_hscript_Token_obj *__this = (GenericStack_hscript_Token_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GenericStack_hscript_Token_obj), true, "haxe.ds.GenericStack_hscript_Token"));
	*(void **)__this = GenericStack_hscript_Token_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GenericStack_hscript_Token_obj::GenericStack_hscript_Token_obj()
{
}

void GenericStack_hscript_Token_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericStack_hscript_Token);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void GenericStack_hscript_Token_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
}

::hx::Val GenericStack_hscript_Token_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"pop") ) { return ::hx::Val( pop_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { return ::hx::Val( head ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return ::hx::Val( first_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return ::hx::Val( isEmpty_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GenericStack_hscript_Token_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast<  ::haxe::ds::GenericCell_hscript_Token >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericStack_hscript_Token_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("head",20,29,0b,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GenericStack_hscript_Token_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::GenericCell_hscript_Token */ ,(int)offsetof(GenericStack_hscript_Token_obj,head),HX_("head",20,29,0b,45)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GenericStack_hscript_Token_obj_sStaticStorageInfo = 0;
#endif

static ::String GenericStack_hscript_Token_obj_sMemberFields[] = {
	HX_("head",20,29,0b,45),
	HX_("add",21,f2,49,00),
	HX_("first",30,78,9d,00),
	HX_("pop",91,5d,55,00),
	HX_("isEmpty",43,de,5f,0c),
	HX_("remove",44,9c,88,04),
	HX_("iterator",ee,49,9a,93),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class GenericStack_hscript_Token_obj::__mClass;

void GenericStack_hscript_Token_obj::__register()
{
	GenericStack_hscript_Token_obj _hx_dummy;
	GenericStack_hscript_Token_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ds.GenericStack_hscript_Token",d6,86,28,9e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GenericStack_hscript_Token_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GenericStack_hscript_Token_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GenericStack_hscript_Token_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GenericStack_hscript_Token_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
