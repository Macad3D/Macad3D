// Generated wrapper code for package GeomProjLib

#include "OcctPCH.h"
#include "GeomProjLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom2d.h"
#include "Geom.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  GeomProjLib
//---------------------------------------------------------------------

Macad::Occt::GeomProjLib::GeomProjLib()
    : Macad::Occt::BaseClass<::GeomProjLib>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomProjLib();
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomProjLib::Curve2d(Macad::Occt::Geom_Curve^ C, double First, double Last, Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double% Tolerance)
{
    pin_ptr<double> pp_Tolerance = &Tolerance;
    Handle(::Geom2d_Curve) _result = ::GeomProjLib::Curve2d(Handle(::Geom_Curve)(C->NativeInstance), First, Last, Handle(::Geom_Surface)(S->NativeInstance), UFirst, ULast, VFirst, VLast, *(double*)pp_Tolerance);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomProjLib::Curve2d(Macad::Occt::Geom_Curve^ C, double First, double Last, Macad::Occt::Geom_Surface^ S, double% Tolerance)
{
    pin_ptr<double> pp_Tolerance = &Tolerance;
    Handle(::Geom2d_Curve) _result = ::GeomProjLib::Curve2d(Handle(::Geom_Curve)(C->NativeInstance), First, Last, Handle(::Geom_Surface)(S->NativeInstance), *(double*)pp_Tolerance);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomProjLib::Curve2d(Macad::Occt::Geom_Curve^ C, double First, double Last, Macad::Occt::Geom_Surface^ S)
{
    Handle(::Geom2d_Curve) _result = ::GeomProjLib::Curve2d(Handle(::Geom_Curve)(C->NativeInstance), First, Last, Handle(::Geom_Surface)(S->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomProjLib::Curve2d(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S)
{
    Handle(::Geom2d_Curve) _result = ::GeomProjLib::Curve2d(Handle(::Geom_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomProjLib::Curve2d(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S, double UDeb, double UFin, double VDeb, double VFin)
{
    Handle(::Geom2d_Curve) _result = ::GeomProjLib::Curve2d(Handle(::Geom_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), UDeb, UFin, VDeb, VFin);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomProjLib::Curve2d(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S, double UDeb, double UFin, double VDeb, double VFin, double% Tolerance)
{
    pin_ptr<double> pp_Tolerance = &Tolerance;
    Handle(::Geom2d_Curve) _result = ::GeomProjLib::Curve2d(Handle(::Geom_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), UDeb, UFin, VDeb, VFin, *(double*)pp_Tolerance);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_Curve^ Macad::Occt::GeomProjLib::Project(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S)
{
    Handle(::Geom_Curve) _result = ::GeomProjLib::Project(Handle(::Geom_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_Curve^ Macad::Occt::GeomProjLib::ProjectOnPlane(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Plane^ Plane, Macad::Occt::Dir Dir, bool KeepParametrization)
{
    pin_ptr<Macad::Occt::Dir> pp_Dir = &Dir;
    Handle(::Geom_Curve) _result = ::GeomProjLib::ProjectOnPlane(Handle(::Geom_Curve)(Curve->NativeInstance), Handle(::Geom_Plane)(Plane->NativeInstance), *(gp_Dir*)pp_Dir, KeepParametrization);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}


