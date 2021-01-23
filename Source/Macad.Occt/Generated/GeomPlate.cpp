// Generated wrapper code for package GeomPlate

#include "OcctPCH.h"
#include "GeomPlate.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TColgp.h"
#include "Standard.h"
#include "GeomPlate.h"
#include "Geom.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  GeomPlate_BuildAveragePlane
//---------------------------------------------------------------------

Macad::Occt::GeomPlate_BuildAveragePlane::GeomPlate_BuildAveragePlane(Macad::Occt::TColgp_HArray1OfPnt^ Pts, int NbBoundPoints, double Tol, int POption, int NOption)
	: BaseClass<::GeomPlate_BuildAveragePlane>(BaseClass::InitMode::Uninitialized)
{
	Handle(::TColgp_HArray1OfPnt) h_Pts = Pts->NativeInstance;
	_NativeInstance = new ::GeomPlate_BuildAveragePlane(h_Pts, NbBoundPoints, Tol, POption, NOption);
	Pts->NativeInstance = h_Pts.get();
}

Macad::Occt::GeomPlate_BuildAveragePlane::GeomPlate_BuildAveragePlane(Macad::Occt::TColgp_SequenceOfVec^ Normals, Macad::Occt::TColgp_HArray1OfPnt^ Pts)
	: BaseClass<::GeomPlate_BuildAveragePlane>(BaseClass::InitMode::Uninitialized)
{
	Handle(::TColgp_HArray1OfPnt) h_Pts = Pts->NativeInstance;
	_NativeInstance = new ::GeomPlate_BuildAveragePlane(*(::TColgp_SequenceOfVec*)Normals->NativeInstance, h_Pts);
	Pts->NativeInstance = h_Pts.get();
}

Macad::Occt::GeomPlate_BuildAveragePlane::GeomPlate_BuildAveragePlane(Macad::Occt::GeomPlate_BuildAveragePlane^ parameter1)
	: BaseClass<::GeomPlate_BuildAveragePlane>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomPlate_BuildAveragePlane(*(::GeomPlate_BuildAveragePlane*)parameter1->NativeInstance);
}

Macad::Occt::Geom_Plane^ Macad::Occt::GeomPlate_BuildAveragePlane::Plane()
{
	Handle(::Geom_Plane) _result;
	_result = ((::GeomPlate_BuildAveragePlane*)_NativeInstance)->Plane();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Plane::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_Line^ Macad::Occt::GeomPlate_BuildAveragePlane::Line()
{
	Handle(::Geom_Line) _result;
	_result = ((::GeomPlate_BuildAveragePlane*)_NativeInstance)->Line();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Line::CreateDowncasted( _result.get());
}

bool Macad::Occt::GeomPlate_BuildAveragePlane::IsPlane()
{
	return ((::GeomPlate_BuildAveragePlane*)_NativeInstance)->IsPlane();
}

bool Macad::Occt::GeomPlate_BuildAveragePlane::IsLine()
{
	return ((::GeomPlate_BuildAveragePlane*)_NativeInstance)->IsLine();
}

void Macad::Occt::GeomPlate_BuildAveragePlane::MinMaxBox(double% Umin, double% Umax, double% Vmin, double% Vmax)
{
	pin_ptr<double> pp_Umin = &Umin;
	pin_ptr<double> pp_Umax = &Umax;
	pin_ptr<double> pp_Vmin = &Vmin;
	pin_ptr<double> pp_Vmax = &Vmax;
	((::GeomPlate_BuildAveragePlane*)_NativeInstance)->MinMaxBox(*(Standard_Real*)pp_Umin, *(Standard_Real*)pp_Umax, *(Standard_Real*)pp_Vmin, *(Standard_Real*)pp_Vmax);
}



