// Generated wrapper code for package GeomProjLib

#include "OcctPCH.h"
#include "GeomProjLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom2d.h"
#include "Geom.h"
#include "Standard.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  GeomProjLib
//---------------------------------------------------------------------

Macad::Occt::GeomProjLib::GeomProjLib()
	: BaseClass<::GeomProjLib>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomProjLib();
}

Macad::Occt::GeomProjLib::GeomProjLib(Macad::Occt::GeomProjLib^ parameter1)
	: BaseClass<::GeomProjLib>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomProjLib(*(::GeomProjLib*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomProjLib::Curve2d(Macad::Occt::Geom_Curve^ C, double First, double Last, Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double% Tolerance)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<double> pp_Tolerance = &Tolerance;
	Handle(::Geom2d_Curve) _result;
	_result = ::GeomProjLib::Curve2d(h_C, First, Last, h_S, UFirst, ULast, VFirst, VLast, *(Standard_Real*)pp_Tolerance);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomProjLib::Curve2d(Macad::Occt::Geom_Curve^ C, double First, double Last, Macad::Occt::Geom_Surface^ S, double% Tolerance)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<double> pp_Tolerance = &Tolerance;
	Handle(::Geom2d_Curve) _result;
	_result = ::GeomProjLib::Curve2d(h_C, First, Last, h_S, *(Standard_Real*)pp_Tolerance);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomProjLib::Curve2d(Macad::Occt::Geom_Curve^ C, double First, double Last, Macad::Occt::Geom_Surface^ S)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	Handle(::Geom2d_Curve) _result;
	_result = ::GeomProjLib::Curve2d(h_C, First, Last, h_S);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomProjLib::Curve2d(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	Handle(::Geom2d_Curve) _result;
	_result = ::GeomProjLib::Curve2d(h_C, h_S);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomProjLib::Curve2d(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S, double UDeb, double UFin, double VDeb, double VFin)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	Handle(::Geom2d_Curve) _result;
	_result = ::GeomProjLib::Curve2d(h_C, h_S, UDeb, UFin, VDeb, VFin);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomProjLib::Curve2d(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S, double UDeb, double UFin, double VDeb, double VFin, double% Tolerance)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<double> pp_Tolerance = &Tolerance;
	Handle(::Geom2d_Curve) _result;
	_result = ::GeomProjLib::Curve2d(h_C, h_S, UDeb, UFin, VDeb, VFin, *(Standard_Real*)pp_Tolerance);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_Curve^ Macad::Occt::GeomProjLib::Project(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	Handle(::Geom_Curve) _result;
	_result = ::GeomProjLib::Project(h_C, h_S);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_Curve^ Macad::Occt::GeomProjLib::ProjectOnPlane(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Plane^ Plane, Macad::Occt::Dir Dir, bool KeepParametrization)
{
	Handle(::Geom_Curve) h_Curve = Curve->NativeInstance;
	Handle(::Geom_Plane) h_Plane = Plane->NativeInstance;
	pin_ptr<Macad::Occt::Dir> pp_Dir = &Dir;
	Handle(::Geom_Curve) _result;
	_result = ::GeomProjLib::ProjectOnPlane(h_Curve, h_Plane, *(gp_Dir*)pp_Dir, KeepParametrization);
	Curve->NativeInstance = h_Curve.get();
	Plane->NativeInstance = h_Plane.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}



