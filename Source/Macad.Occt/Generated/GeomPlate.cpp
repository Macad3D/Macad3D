// Generated wrapper code for package GeomPlate

#include "OcctPCH.h"
#include "GeomPlate.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TColgp.h"
#include "Geom.h"


//---------------------------------------------------------------------
//  Class  GeomPlate_BuildAveragePlane
//---------------------------------------------------------------------

Macad::Occt::GeomPlate_BuildAveragePlane::GeomPlate_BuildAveragePlane(Macad::Occt::TColgp_HArray1OfPnt^ Pts, int NbBoundPoints, double Tol, int POption, int NOption)
    : Macad::Occt::BaseClass<::GeomPlate_BuildAveragePlane>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomPlate_BuildAveragePlane(Handle(::TColgp_HArray1OfPnt)(Pts->NativeInstance), NbBoundPoints, Tol, POption, NOption);
}

Macad::Occt::GeomPlate_BuildAveragePlane::GeomPlate_BuildAveragePlane(Macad::Occt::TColgp_SequenceOfVec^ Normals, Macad::Occt::TColgp_HArray1OfPnt^ Pts)
    : Macad::Occt::BaseClass<::GeomPlate_BuildAveragePlane>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomPlate_BuildAveragePlane(*(::TColgp_SequenceOfVec*)Normals->NativeInstance, Handle(::TColgp_HArray1OfPnt)(Pts->NativeInstance));
}

Macad::Occt::Geom_Plane^ Macad::Occt::GeomPlate_BuildAveragePlane::Plane()
{
    Handle(::Geom_Plane) _result = ((::GeomPlate_BuildAveragePlane*)_NativeInstance)->Plane();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Plane::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_Line^ Macad::Occt::GeomPlate_BuildAveragePlane::Line()
{
    Handle(::Geom_Line) _result = ((::GeomPlate_BuildAveragePlane*)_NativeInstance)->Line();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Line::CreateDowncasted(_result.get());
}

bool Macad::Occt::GeomPlate_BuildAveragePlane::IsPlane()
{
    bool _result = ((::GeomPlate_BuildAveragePlane*)_NativeInstance)->IsPlane();
    return _result;
}

bool Macad::Occt::GeomPlate_BuildAveragePlane::IsLine()
{
    bool _result = ((::GeomPlate_BuildAveragePlane*)_NativeInstance)->IsLine();
    return _result;
}

void Macad::Occt::GeomPlate_BuildAveragePlane::MinMaxBox(double% Umin, double% Umax, double% Vmin, double% Vmax)
{
    pin_ptr<double> pp_Umin = &Umin;
    pin_ptr<double> pp_Umax = &Umax;
    pin_ptr<double> pp_Vmin = &Vmin;
    pin_ptr<double> pp_Vmax = &Vmax;
    ((::GeomPlate_BuildAveragePlane*)_NativeInstance)->MinMaxBox(*(double*)pp_Umin, *(double*)pp_Umax, *(double*)pp_Vmin, *(double*)pp_Vmax);
}


