// Generated wrapper code for package BRepIntCurveSurface

#include "OcctPCH.h"
#include "BRepIntCurveSurface.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "BRepIntCurveSurface.h"
#include "TopoDS.h"
#include "GeomAdaptor.h"
#include "Standard.h"
#include "gp.h"
#include "TopAbs.h"


//---------------------------------------------------------------------
//  Class  BRepIntCurveSurface_Inter
//---------------------------------------------------------------------

Macad::Occt::BRepIntCurveSurface_Inter::BRepIntCurveSurface_Inter()
	: BaseClass<::BRepIntCurveSurface_Inter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepIntCurveSurface_Inter();
}

Macad::Occt::BRepIntCurveSurface_Inter::BRepIntCurveSurface_Inter(Macad::Occt::BRepIntCurveSurface_Inter^ parameter1)
	: BaseClass<::BRepIntCurveSurface_Inter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepIntCurveSurface_Inter(*(::BRepIntCurveSurface_Inter*)parameter1->NativeInstance);
}

void Macad::Occt::BRepIntCurveSurface_Inter::Init(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::GeomAdaptor_Curve^ theCurve, double theTol)
{
	((::BRepIntCurveSurface_Inter*)_NativeInstance)->Init(*(::TopoDS_Shape*)theShape->NativeInstance, *(::GeomAdaptor_Curve*)theCurve->NativeInstance, theTol);
}

void Macad::Occt::BRepIntCurveSurface_Inter::Init(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::gp_Lin^ theLine, double theTol)
{
	((::BRepIntCurveSurface_Inter*)_NativeInstance)->Init(*(::TopoDS_Shape*)theShape->NativeInstance, *(::gp_Lin*)theLine->NativeInstance, theTol);
}

void Macad::Occt::BRepIntCurveSurface_Inter::Load(Macad::Occt::TopoDS_Shape^ theShape, double theTol)
{
	((::BRepIntCurveSurface_Inter*)_NativeInstance)->Load(*(::TopoDS_Shape*)theShape->NativeInstance, theTol);
}

void Macad::Occt::BRepIntCurveSurface_Inter::Init(Macad::Occt::GeomAdaptor_Curve^ theCurve)
{
	((::BRepIntCurveSurface_Inter*)_NativeInstance)->Init(*(::GeomAdaptor_Curve*)theCurve->NativeInstance);
}

bool Macad::Occt::BRepIntCurveSurface_Inter::More()
{
	return ((::BRepIntCurveSurface_Inter*)_NativeInstance)->More();
}

void Macad::Occt::BRepIntCurveSurface_Inter::Next()
{
	((::BRepIntCurveSurface_Inter*)_NativeInstance)->Next();
}

Macad::Occt::Pnt Macad::Occt::BRepIntCurveSurface_Inter::Pnt()
{
	return Macad::Occt::Pnt(((::BRepIntCurveSurface_Inter*)_NativeInstance)->Pnt());
}

double Macad::Occt::BRepIntCurveSurface_Inter::U()
{
	return ((::BRepIntCurveSurface_Inter*)_NativeInstance)->U();
}

double Macad::Occt::BRepIntCurveSurface_Inter::V()
{
	return ((::BRepIntCurveSurface_Inter*)_NativeInstance)->V();
}

double Macad::Occt::BRepIntCurveSurface_Inter::W()
{
	return ((::BRepIntCurveSurface_Inter*)_NativeInstance)->W();
}

Macad::Occt::TopAbs_State Macad::Occt::BRepIntCurveSurface_Inter::State()
{
	return (Macad::Occt::TopAbs_State)((::BRepIntCurveSurface_Inter*)_NativeInstance)->State();
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepIntCurveSurface_Inter::Face()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result =  (::TopoDS_Face)((::BRepIntCurveSurface_Inter*)_NativeInstance)->Face();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}



