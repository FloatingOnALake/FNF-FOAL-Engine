#ifndef INCLUDED_hscript_FieldAccess
#define INCLUDED_hscript_FieldAccess

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscript,FieldAccess)
namespace hscript{


class FieldAccess_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FieldAccess_obj OBJ_;

	public:
		FieldAccess_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hscript.FieldAccess",63,1d,79,4e); }
		::String __ToString() const { return HX_("FieldAccess.",90,a4,8d,70) + _hx_tag; }

		static ::hscript::FieldAccess AInline;
		static inline ::hscript::FieldAccess AInline_dyn() { return AInline; }
		static ::hscript::FieldAccess AMacro;
		static inline ::hscript::FieldAccess AMacro_dyn() { return AMacro; }
		static ::hscript::FieldAccess AOverride;
		static inline ::hscript::FieldAccess AOverride_dyn() { return AOverride; }
		static ::hscript::FieldAccess APrivate;
		static inline ::hscript::FieldAccess APrivate_dyn() { return APrivate; }
		static ::hscript::FieldAccess APublic;
		static inline ::hscript::FieldAccess APublic_dyn() { return APublic; }
		static ::hscript::FieldAccess AStatic;
		static inline ::hscript::FieldAccess AStatic_dyn() { return AStatic; }
};

} // end namespace hscript

#endif /* INCLUDED_hscript_FieldAccess */ 
