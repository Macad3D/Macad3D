// Generated wrapper code for package ShapeAlgo

#include "OcctPCH.h"
#include "ShapeAlgo.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "ShapeAlgo.h"
#include "Standard.h"
#include "ShapeAnalysis.h"
#include "ShapeExtend.h"
#include "Geom.h"
#include "Geom2d.h"
#include "TopoDS.h"
#include "GeomAbs.h"
#include "ShapeFix.h"


//---------------------------------------------------------------------
//  Class  ShapeAlgo_AlgoContainer
//---------------------------------------------------------------------

Macad::Occt::ShapeAlgo_AlgoContainer::ShapeAlgo_AlgoContainer()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAlgo_AlgoContainer();
}

Macad::Occt::ShapeAlgo_AlgoContainer::ShapeAlgo_AlgoContainer(Macad::Occt::ShapeAlgo_AlgoContainer^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAlgo_AlgoContainer(*(::ShapeAlgo_AlgoContainer*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeAlgo_AlgoContainer::SetToolContainer(Macad::Occt::ShapeAlgo_ToolContainer^ TC)
{
	Handle(::ShapeAlgo_ToolContainer) h_TC = TC->NativeInstance;
	((::ShapeAlgo_AlgoContainer*)_NativeInstance)->SetToolContainer(h_TC);
	TC->NativeInstance = h_TC.get();
}

Macad::Occt::ShapeAlgo_ToolContainer^ Macad::Occt::ShapeAlgo_AlgoContainer::ToolContainer()
{
	Handle(::ShapeAlgo_ToolContainer) _result;
	_result = ((::ShapeAlgo_AlgoContainer*)_NativeInstance)->ToolContainer();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAlgo_ToolContainer::CreateDowncasted( _result.get());
}

bool Macad::Occt::ShapeAlgo_AlgoContainer::ConnectNextWire(Macad::Occt::ShapeAnalysis_Wire^ saw, Macad::Occt::ShapeExtend_WireData^ nextsewd, double maxtol, double% distmin, bool% revsewd, bool% revnextsewd)
{
	Handle(::ShapeAnalysis_Wire) h_saw = saw->NativeInstance;
	Handle(::ShapeExtend_WireData) h_nextsewd = nextsewd->NativeInstance;
	pin_ptr<double> pp_distmin = &distmin;
	pin_ptr<bool> pp_revsewd = &revsewd;
	pin_ptr<bool> pp_revnextsewd = &revnextsewd;
	return ((::ShapeAlgo_AlgoContainer*)_NativeInstance)->ConnectNextWire(h_saw, h_nextsewd, maxtol, *(Standard_Real*)pp_distmin, *(Standard_Boolean*)pp_revsewd, *(Standard_Boolean*)pp_revnextsewd);
	saw->NativeInstance = h_saw.get();
	nextsewd->NativeInstance = h_nextsewd.get();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeAlgo_AlgoContainer::C0ShapeToC1Shape(Macad::Occt::TopoDS_Shape^ shape, double tol)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeAlgo_AlgoContainer*)_NativeInstance)->C0ShapeToC1Shape(*(::TopoDS_Shape*)shape->NativeInstance, tol);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::ShapeAlgo_AlgoContainer::ConvertSurfaceToBSpline(Macad::Occt::Geom_Surface^ surf, double UF, double UL, double VF, double VL)
{
	Handle(::Geom_Surface) h_surf = surf->NativeInstance;
	Handle(::Geom_BSplineSurface) _result;
	_result = ((::ShapeAlgo_AlgoContainer*)_NativeInstance)->ConvertSurfaceToBSpline(h_surf, UF, UL, VF, VL);
	surf->NativeInstance = h_surf.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
}

bool Macad::Occt::ShapeAlgo_AlgoContainer::HomoWires(Macad::Occt::TopoDS_Wire^ wireIn1, Macad::Occt::TopoDS_Wire^ wireIn2, Macad::Occt::TopoDS_Wire^ wireOut1, Macad::Occt::TopoDS_Wire^ wireOut2, bool byParam)
{
	return ((::ShapeAlgo_AlgoContainer*)_NativeInstance)->HomoWires(*(::TopoDS_Wire*)wireIn1->NativeInstance, *(::TopoDS_Wire*)wireIn2->NativeInstance, *(::TopoDS_Wire*)wireOut1->NativeInstance, *(::TopoDS_Wire*)wireOut2->NativeInstance, byParam);
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::ShapeAlgo_AlgoContainer::OuterWire(Macad::Occt::TopoDS_Face^ face)
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result = ((::ShapeAlgo_AlgoContainer*)_NativeInstance)->OuterWire(*(::TopoDS_Face*)face->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

Macad::Occt::Geom_Surface^ Macad::Occt::ShapeAlgo_AlgoContainer::ConvertToPeriodic(Macad::Occt::Geom_Surface^ surf)
{
	Handle(::Geom_Surface) h_surf = surf->NativeInstance;
	Handle(::Geom_Surface) _result;
	_result = ((::ShapeAlgo_AlgoContainer*)_NativeInstance)->ConvertToPeriodic(h_surf);
	surf->NativeInstance = h_surf.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeAlgo_AlgoContainer::GetFaceUVBounds(Macad::Occt::TopoDS_Face^ F, double% Umin, double% Umax, double% Vmin, double% Vmax)
{
	pin_ptr<double> pp_Umin = &Umin;
	pin_ptr<double> pp_Umax = &Umax;
	pin_ptr<double> pp_Vmin = &Vmin;
	pin_ptr<double> pp_Vmax = &Vmax;
	((::ShapeAlgo_AlgoContainer*)_NativeInstance)->GetFaceUVBounds(*(::TopoDS_Face*)F->NativeInstance, *(Standard_Real*)pp_Umin, *(Standard_Real*)pp_Umax, *(Standard_Real*)pp_Vmin, *(Standard_Real*)pp_Vmax);
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::ShapeAlgo_AlgoContainer::ConvertCurveToBSpline(Macad::Occt::Geom_Curve^ C3D, double First, double Last, double Tol3d, Macad::Occt::GeomAbs_Shape Continuity, int MaxSegments, int MaxDegree)
{
	Handle(::Geom_Curve) h_C3D = C3D->NativeInstance;
	Handle(::Geom_BSplineCurve) _result;
	_result = ((::ShapeAlgo_AlgoContainer*)_NativeInstance)->ConvertCurveToBSpline(h_C3D, First, Last, Tol3d, (::GeomAbs_Shape)Continuity, MaxSegments, MaxDegree);
	C3D->NativeInstance = h_C3D.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted( _result.get());
}


Macad::Occt::ShapeAlgo_AlgoContainer^ Macad::Occt::ShapeAlgo_AlgoContainer::CreateDowncasted(::ShapeAlgo_AlgoContainer* instance)
{
	return gcnew Macad::Occt::ShapeAlgo_AlgoContainer( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeAlgo_ToolContainer
//---------------------------------------------------------------------

Macad::Occt::ShapeAlgo_ToolContainer::ShapeAlgo_ToolContainer()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAlgo_ToolContainer();
}

Macad::Occt::ShapeAlgo_ToolContainer::ShapeAlgo_ToolContainer(Macad::Occt::ShapeAlgo_ToolContainer^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAlgo_ToolContainer(*(::ShapeAlgo_ToolContainer*)parameter1->NativeInstance);
}

Macad::Occt::ShapeFix_Shape^ Macad::Occt::ShapeAlgo_ToolContainer::FixShape()
{
	Handle(::ShapeFix_Shape) _result;
	_result = ((::ShapeAlgo_ToolContainer*)_NativeInstance)->FixShape();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeFix_Shape::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeFix_EdgeProjAux^ Macad::Occt::ShapeAlgo_ToolContainer::EdgeProjAux()
{
	Handle(::ShapeFix_EdgeProjAux) _result;
	_result = ((::ShapeAlgo_ToolContainer*)_NativeInstance)->EdgeProjAux();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeFix_EdgeProjAux::CreateDowncasted( _result.get());
}


Macad::Occt::ShapeAlgo_ToolContainer^ Macad::Occt::ShapeAlgo_ToolContainer::CreateDowncasted(::ShapeAlgo_ToolContainer* instance)
{
	return gcnew Macad::Occt::ShapeAlgo_ToolContainer( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeAlgo
//---------------------------------------------------------------------

Macad::Occt::ShapeAlgo::ShapeAlgo()
	: BaseClass<::ShapeAlgo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAlgo();
}

Macad::Occt::ShapeAlgo::ShapeAlgo(Macad::Occt::ShapeAlgo^ parameter1)
	: BaseClass<::ShapeAlgo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAlgo(*(::ShapeAlgo*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeAlgo::Init()
{
	::ShapeAlgo::Init();
}

void Macad::Occt::ShapeAlgo::SetAlgoContainer(Macad::Occt::ShapeAlgo_AlgoContainer^ aContainer)
{
	Handle(::ShapeAlgo_AlgoContainer) h_aContainer = aContainer->NativeInstance;
	::ShapeAlgo::SetAlgoContainer(h_aContainer);
	aContainer->NativeInstance = h_aContainer.get();
}

Macad::Occt::ShapeAlgo_AlgoContainer^ Macad::Occt::ShapeAlgo::AlgoContainer()
{
	Handle(::ShapeAlgo_AlgoContainer) _result;
	_result = ::ShapeAlgo::AlgoContainer();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAlgo_AlgoContainer::CreateDowncasted( _result.get());
}



