// Generated wrapper code for package ShapeCustom

#include "OcctPCH.h"
#include "ShapeCustom.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "ShapeCustom.h"
#include "Standard.h"
#include "Geom.h"
#include "TColgp.h"
#include "Geom2d.h"
#include "ShapeExtend.h"
#include "TopoDS.h"
#include "Message.h"
#include "TopLoc.h"
#include "gp.h"
#include "GeomAbs.h"
#include "BRepTools.h"
#include "TopTools.h"
#include "ShapeBuild.h"


//---------------------------------------------------------------------
//  Class  ShapeCustom_RestrictionParameters
//---------------------------------------------------------------------

Macad::Occt::ShapeCustom_RestrictionParameters::ShapeCustom_RestrictionParameters()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeCustom_RestrictionParameters();
}

Macad::Occt::ShapeCustom_RestrictionParameters::ShapeCustom_RestrictionParameters(Macad::Occt::ShapeCustom_RestrictionParameters^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeCustom_RestrictionParameters(*(::ShapeCustom_RestrictionParameters*)parameter1->NativeInstance);
}

int Macad::Occt::ShapeCustom_RestrictionParameters::GMaxDegree()
{
	return ((::ShapeCustom_RestrictionParameters*)_NativeInstance)->GMaxDegree();
}

int Macad::Occt::ShapeCustom_RestrictionParameters::GMaxSeg()
{
	return ((::ShapeCustom_RestrictionParameters*)_NativeInstance)->GMaxSeg();
}

bool Macad::Occt::ShapeCustom_RestrictionParameters::ConvertPlane()
{
	return ((::ShapeCustom_RestrictionParameters*)_NativeInstance)->ConvertPlane();
}

bool Macad::Occt::ShapeCustom_RestrictionParameters::ConvertBezierSurf()
{
	return ((::ShapeCustom_RestrictionParameters*)_NativeInstance)->ConvertBezierSurf();
}

bool Macad::Occt::ShapeCustom_RestrictionParameters::ConvertRevolutionSurf()
{
	return ((::ShapeCustom_RestrictionParameters*)_NativeInstance)->ConvertRevolutionSurf();
}

bool Macad::Occt::ShapeCustom_RestrictionParameters::ConvertExtrusionSurf()
{
	return ((::ShapeCustom_RestrictionParameters*)_NativeInstance)->ConvertExtrusionSurf();
}

bool Macad::Occt::ShapeCustom_RestrictionParameters::ConvertOffsetSurf()
{
	return ((::ShapeCustom_RestrictionParameters*)_NativeInstance)->ConvertOffsetSurf();
}

bool Macad::Occt::ShapeCustom_RestrictionParameters::ConvertCylindricalSurf()
{
	return ((::ShapeCustom_RestrictionParameters*)_NativeInstance)->ConvertCylindricalSurf();
}

bool Macad::Occt::ShapeCustom_RestrictionParameters::ConvertConicalSurf()
{
	return ((::ShapeCustom_RestrictionParameters*)_NativeInstance)->ConvertConicalSurf();
}

bool Macad::Occt::ShapeCustom_RestrictionParameters::ConvertToroidalSurf()
{
	return ((::ShapeCustom_RestrictionParameters*)_NativeInstance)->ConvertToroidalSurf();
}

bool Macad::Occt::ShapeCustom_RestrictionParameters::ConvertSphericalSurf()
{
	return ((::ShapeCustom_RestrictionParameters*)_NativeInstance)->ConvertSphericalSurf();
}

bool Macad::Occt::ShapeCustom_RestrictionParameters::SegmentSurfaceMode()
{
	return ((::ShapeCustom_RestrictionParameters*)_NativeInstance)->SegmentSurfaceMode();
}

bool Macad::Occt::ShapeCustom_RestrictionParameters::ConvertCurve3d()
{
	return ((::ShapeCustom_RestrictionParameters*)_NativeInstance)->ConvertCurve3d();
}

bool Macad::Occt::ShapeCustom_RestrictionParameters::ConvertOffsetCurv3d()
{
	return ((::ShapeCustom_RestrictionParameters*)_NativeInstance)->ConvertOffsetCurv3d();
}

bool Macad::Occt::ShapeCustom_RestrictionParameters::ConvertCurve2d()
{
	return ((::ShapeCustom_RestrictionParameters*)_NativeInstance)->ConvertCurve2d();
}

bool Macad::Occt::ShapeCustom_RestrictionParameters::ConvertOffsetCurv2d()
{
	return ((::ShapeCustom_RestrictionParameters*)_NativeInstance)->ConvertOffsetCurv2d();
}


Macad::Occt::ShapeCustom_RestrictionParameters^ Macad::Occt::ShapeCustom_RestrictionParameters::CreateDowncasted(::ShapeCustom_RestrictionParameters* instance)
{
	return gcnew Macad::Occt::ShapeCustom_RestrictionParameters( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeCustom_Surface
//---------------------------------------------------------------------

Macad::Occt::ShapeCustom_Surface::ShapeCustom_Surface()
	: BaseClass<::ShapeCustom_Surface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeCustom_Surface();
}

Macad::Occt::ShapeCustom_Surface::ShapeCustom_Surface(Macad::Occt::Geom_Surface^ S)
	: BaseClass<::ShapeCustom_Surface>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::ShapeCustom_Surface(h_S);
	S->NativeInstance = h_S.get();
}

Macad::Occt::ShapeCustom_Surface::ShapeCustom_Surface(Macad::Occt::ShapeCustom_Surface^ parameter1)
	: BaseClass<::ShapeCustom_Surface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeCustom_Surface(*(::ShapeCustom_Surface*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeCustom_Surface::Init(Macad::Occt::Geom_Surface^ S)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::ShapeCustom_Surface*)_NativeInstance)->Init(h_S);
	S->NativeInstance = h_S.get();
}

double Macad::Occt::ShapeCustom_Surface::Gap()
{
	return ((::ShapeCustom_Surface*)_NativeInstance)->Gap();
}

Macad::Occt::Geom_Surface^ Macad::Occt::ShapeCustom_Surface::ConvertToAnalytical(double tol, bool substitute)
{
	Handle(::Geom_Surface) _result;
	_result = ((::ShapeCustom_Surface*)_NativeInstance)->ConvertToAnalytical(tol, substitute);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_Surface^ Macad::Occt::ShapeCustom_Surface::ConvertToPeriodic(bool substitute, double preci)
{
	Handle(::Geom_Surface) _result;
	_result = ((::ShapeCustom_Surface*)_NativeInstance)->ConvertToPeriodic(substitute, preci);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_Surface^ Macad::Occt::ShapeCustom_Surface::ConvertToPeriodic(bool substitute)
{
	Handle(::Geom_Surface) _result;
	_result = ((::ShapeCustom_Surface*)_NativeInstance)->ConvertToPeriodic(substitute, -1);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  ShapeCustom_Curve
//---------------------------------------------------------------------

Macad::Occt::ShapeCustom_Curve::ShapeCustom_Curve()
	: BaseClass<::ShapeCustom_Curve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeCustom_Curve();
}

Macad::Occt::ShapeCustom_Curve::ShapeCustom_Curve(Macad::Occt::Geom_Curve^ C)
	: BaseClass<::ShapeCustom_Curve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	_NativeInstance = new ::ShapeCustom_Curve(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::ShapeCustom_Curve::ShapeCustom_Curve(Macad::Occt::ShapeCustom_Curve^ parameter1)
	: BaseClass<::ShapeCustom_Curve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeCustom_Curve(*(::ShapeCustom_Curve*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeCustom_Curve::Init(Macad::Occt::Geom_Curve^ C)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::ShapeCustom_Curve*)_NativeInstance)->Init(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom_Curve^ Macad::Occt::ShapeCustom_Curve::ConvertToPeriodic(bool substitute, double preci)
{
	Handle(::Geom_Curve) _result;
	_result = ((::ShapeCustom_Curve*)_NativeInstance)->ConvertToPeriodic(substitute, preci);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_Curve^ Macad::Occt::ShapeCustom_Curve::ConvertToPeriodic(bool substitute)
{
	Handle(::Geom_Curve) _result;
	_result = ((::ShapeCustom_Curve*)_NativeInstance)->ConvertToPeriodic(substitute, -1);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  ShapeCustom_Curve2d
//---------------------------------------------------------------------

Macad::Occt::ShapeCustom_Curve2d::ShapeCustom_Curve2d()
	: BaseClass<::ShapeCustom_Curve2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeCustom_Curve2d();
}

Macad::Occt::ShapeCustom_Curve2d::ShapeCustom_Curve2d(Macad::Occt::ShapeCustom_Curve2d^ parameter1)
	: BaseClass<::ShapeCustom_Curve2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeCustom_Curve2d(*(::ShapeCustom_Curve2d*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeCustom_Curve2d::IsLinear(Macad::Occt::TColgp_Array1OfPnt2d^ thePoles, double theTolerance, double% theDeviation)
{
	pin_ptr<double> pp_theDeviation = &theDeviation;
	return ::ShapeCustom_Curve2d::IsLinear(*(::TColgp_Array1OfPnt2d*)thePoles->NativeInstance, theTolerance, *(Standard_Real*)pp_theDeviation);
}

Macad::Occt::Geom2d_Line^ Macad::Occt::ShapeCustom_Curve2d::ConvertToLine2d(Macad::Occt::Geom2d_Curve^ theCurve, double theFirstIn, double theLastIn, double theTolerance, double% theNewFirst, double% theNewLast, double% theDeviation)
{
	Handle(::Geom2d_Curve) h_theCurve = theCurve->NativeInstance;
	pin_ptr<double> pp_theNewFirst = &theNewFirst;
	pin_ptr<double> pp_theNewLast = &theNewLast;
	pin_ptr<double> pp_theDeviation = &theDeviation;
	Handle(::Geom2d_Line) _result;
	_result = ::ShapeCustom_Curve2d::ConvertToLine2d(h_theCurve, theFirstIn, theLastIn, theTolerance, *(Standard_Real*)pp_theNewFirst, *(Standard_Real*)pp_theNewLast, *(Standard_Real*)pp_theDeviation);
	theCurve->NativeInstance = h_theCurve.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Line::CreateDowncasted( _result.get());
}

bool Macad::Occt::ShapeCustom_Curve2d::SimplifyBSpline2d(Macad::Occt::Geom2d_BSplineCurve^ theBSpline2d, double theTolerance)
{
	Handle(::Geom2d_BSplineCurve) h_theBSpline2d = theBSpline2d->NativeInstance;
	return ::ShapeCustom_Curve2d::SimplifyBSpline2d(h_theBSpline2d, theTolerance);
	theBSpline2d->NativeInstance = h_theBSpline2d.get();
}




//---------------------------------------------------------------------
//  Class  ShapeCustom_Modification
//---------------------------------------------------------------------

Macad::Occt::ShapeCustom_Modification::ShapeCustom_Modification(Macad::Occt::ShapeCustom_Modification^ parameter1)
	: Macad::Occt::BRepTools_Modification(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::ShapeCustom_Modification::ShapeCustom_Modification()
	: Macad::Occt::BRepTools_Modification(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::ShapeCustom_Modification::SetMsgRegistrator(Macad::Occt::ShapeExtend_BasicMsgRegistrator^ msgreg)
{
	Handle(::ShapeExtend_BasicMsgRegistrator) h_msgreg = msgreg->NativeInstance;
	((::ShapeCustom_Modification*)_NativeInstance)->SetMsgRegistrator(h_msgreg);
	msgreg->NativeInstance = h_msgreg.get();
}

Macad::Occt::ShapeExtend_BasicMsgRegistrator^ Macad::Occt::ShapeCustom_Modification::MsgRegistrator()
{
	Handle(::ShapeExtend_BasicMsgRegistrator) _result;
	_result = ((::ShapeCustom_Modification*)_NativeInstance)->MsgRegistrator();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeExtend_BasicMsgRegistrator::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeCustom_Modification::SendMsg(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity)
{
	((::ShapeCustom_Modification*)_NativeInstance)->SendMsg(*(::TopoDS_Shape*)shape->NativeInstance, *(::Message_Msg*)message->NativeInstance, (::Message_Gravity)gravity);
}

void Macad::Occt::ShapeCustom_Modification::SendMsg(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message)
{
	((::ShapeCustom_Modification*)_NativeInstance)->SendMsg(*(::TopoDS_Shape*)shape->NativeInstance, *(::Message_Msg*)message->NativeInstance, Message_Info);
}


Macad::Occt::ShapeCustom_Modification^ Macad::Occt::ShapeCustom_Modification::CreateDowncasted(::ShapeCustom_Modification* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeCustom_DirectModification)))
		return Macad::Occt::ShapeCustom_DirectModification::CreateDowncasted((::ShapeCustom_DirectModification*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeCustom_BSplineRestriction)))
		return Macad::Occt::ShapeCustom_BSplineRestriction::CreateDowncasted((::ShapeCustom_BSplineRestriction*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeCustom_ConvertToRevolution)))
		return Macad::Occt::ShapeCustom_ConvertToRevolution::CreateDowncasted((::ShapeCustom_ConvertToRevolution*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeCustom_SweptToElementary)))
		return Macad::Occt::ShapeCustom_SweptToElementary::CreateDowncasted((::ShapeCustom_SweptToElementary*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeCustom_ConvertToBSpline)))
		return Macad::Occt::ShapeCustom_ConvertToBSpline::CreateDowncasted((::ShapeCustom_ConvertToBSpline*)instance);

	return gcnew Macad::Occt::ShapeCustom_Modification( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeCustom_DirectModification
//---------------------------------------------------------------------

Macad::Occt::ShapeCustom_DirectModification::ShapeCustom_DirectModification()
	: Macad::Occt::ShapeCustom_Modification(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeCustom_DirectModification();
}

Macad::Occt::ShapeCustom_DirectModification::ShapeCustom_DirectModification(Macad::Occt::ShapeCustom_DirectModification^ parameter1)
	: Macad::Occt::ShapeCustom_Modification(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeCustom_DirectModification(*(::ShapeCustom_DirectModification*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeCustom_DirectModification::NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	pin_ptr<bool> pp_RevWires = &RevWires;
	pin_ptr<bool> pp_RevFace = &RevFace;
	return ((::ShapeCustom_DirectModification*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol, *(Standard_Boolean*)pp_RevWires, *(Standard_Boolean*)pp_RevFace);
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::ShapeCustom_DirectModification::NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_DirectModification*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::ShapeCustom_DirectModification::NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_DirectModification*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, *(Standard_Real*)pp_Tol);
}

bool Macad::Occt::ShapeCustom_DirectModification::NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_DirectModification*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF->NativeInstance, h_C, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::ShapeCustom_DirectModification::NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol)
{
	pin_ptr<double> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_DirectModification*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(Standard_Real*)pp_P, *(Standard_Real*)pp_Tol);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::ShapeCustom_DirectModification::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2)
{
	return (Macad::Occt::GeomAbs_Shape)((::ShapeCustom_DirectModification*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF1->NativeInstance, *(::TopoDS_Face*)NewF2->NativeInstance);
}


Macad::Occt::ShapeCustom_DirectModification^ Macad::Occt::ShapeCustom_DirectModification::CreateDowncasted(::ShapeCustom_DirectModification* instance)
{
	return gcnew Macad::Occt::ShapeCustom_DirectModification( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeCustom_TrsfModification
//---------------------------------------------------------------------

Macad::Occt::ShapeCustom_TrsfModification::ShapeCustom_TrsfModification(Macad::Occt::Trsf T)
	: Macad::Occt::BRepTools_TrsfModification(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	NativeInstance = new ::ShapeCustom_TrsfModification(*(gp_Trsf*)pp_T);
}

Macad::Occt::ShapeCustom_TrsfModification::ShapeCustom_TrsfModification(Macad::Occt::ShapeCustom_TrsfModification^ parameter1)
	: Macad::Occt::BRepTools_TrsfModification(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeCustom_TrsfModification(*(::ShapeCustom_TrsfModification*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeCustom_TrsfModification::NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	pin_ptr<bool> pp_RevWires = &RevWires;
	pin_ptr<bool> pp_RevFace = &RevFace;
	return ((::ShapeCustom_TrsfModification*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol, *(Standard_Boolean*)pp_RevWires, *(Standard_Boolean*)pp_RevFace);
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::ShapeCustom_TrsfModification::NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_TrsfModification*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::ShapeCustom_TrsfModification::NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_TrsfModification*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, *(Standard_Real*)pp_Tol);
}

bool Macad::Occt::ShapeCustom_TrsfModification::NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_TrsfModification*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF->NativeInstance, h_C, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::ShapeCustom_TrsfModification::NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol)
{
	pin_ptr<double> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_TrsfModification*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(Standard_Real*)pp_P, *(Standard_Real*)pp_Tol);
}


Macad::Occt::ShapeCustom_TrsfModification^ Macad::Occt::ShapeCustom_TrsfModification::CreateDowncasted(::ShapeCustom_TrsfModification* instance)
{
	return gcnew Macad::Occt::ShapeCustom_TrsfModification( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeCustom_BSplineRestriction
//---------------------------------------------------------------------

Macad::Occt::ShapeCustom_BSplineRestriction::ShapeCustom_BSplineRestriction()
	: Macad::Occt::ShapeCustom_Modification(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeCustom_BSplineRestriction();
}

Macad::Occt::ShapeCustom_BSplineRestriction::ShapeCustom_BSplineRestriction(bool anApproxSurfaceFlag, bool anApproxCurve3dFlag, bool anApproxCurve2dFlag, double aTol3d, double aTol2d, Macad::Occt::GeomAbs_Shape aContinuity3d, Macad::Occt::GeomAbs_Shape aContinuity2d, int aMaxDegree, int aNbMaxSeg, bool Degree, bool Rational)
	: Macad::Occt::ShapeCustom_Modification(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeCustom_BSplineRestriction(anApproxSurfaceFlag, anApproxCurve3dFlag, anApproxCurve2dFlag, aTol3d, aTol2d, (::GeomAbs_Shape)aContinuity3d, (::GeomAbs_Shape)aContinuity2d, aMaxDegree, aNbMaxSeg, Degree, Rational);
}

Macad::Occt::ShapeCustom_BSplineRestriction::ShapeCustom_BSplineRestriction(bool anApproxSurfaceFlag, bool anApproxCurve3dFlag, bool anApproxCurve2dFlag, double aTol3d, double aTol2d, Macad::Occt::GeomAbs_Shape aContinuity3d, Macad::Occt::GeomAbs_Shape aContinuity2d, int aMaxDegree, int aNbMaxSeg, bool Degree, bool Rational, Macad::Occt::ShapeCustom_RestrictionParameters^ aModes)
	: Macad::Occt::ShapeCustom_Modification(BaseClass::InitMode::Uninitialized)
{
	Handle(::ShapeCustom_RestrictionParameters) h_aModes = aModes->NativeInstance;
	NativeInstance = new ::ShapeCustom_BSplineRestriction(anApproxSurfaceFlag, anApproxCurve3dFlag, anApproxCurve2dFlag, aTol3d, aTol2d, (::GeomAbs_Shape)aContinuity3d, (::GeomAbs_Shape)aContinuity2d, aMaxDegree, aNbMaxSeg, Degree, Rational, h_aModes);
	aModes->NativeInstance = h_aModes.get();
}

Macad::Occt::ShapeCustom_BSplineRestriction::ShapeCustom_BSplineRestriction(Macad::Occt::ShapeCustom_BSplineRestriction^ parameter1)
	: Macad::Occt::ShapeCustom_Modification(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeCustom_BSplineRestriction(*(::ShapeCustom_BSplineRestriction*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeCustom_BSplineRestriction::NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	pin_ptr<bool> pp_RevWires = &RevWires;
	pin_ptr<bool> pp_RevFace = &RevFace;
	return ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol, *(Standard_Boolean*)pp_RevWires, *(Standard_Boolean*)pp_RevFace);
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::ShapeCustom_BSplineRestriction::NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::ShapeCustom_BSplineRestriction::NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF->NativeInstance, h_C, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::ShapeCustom_BSplineRestriction::ConvertSurface(Macad::Occt::Geom_Surface^ aSurface, Macad::Occt::Geom_Surface^ S, double UF, double UL, double VF, double VL, bool IsOf)
{
	Handle(::Geom_Surface) h_aSurface = aSurface->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	return ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->ConvertSurface(h_aSurface, h_S, UF, UL, VF, VL, IsOf);
	aSurface->NativeInstance = h_aSurface.get();
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::ShapeCustom_BSplineRestriction::ConvertSurface(Macad::Occt::Geom_Surface^ aSurface, Macad::Occt::Geom_Surface^ S, double UF, double UL, double VF, double VL)
{
	Handle(::Geom_Surface) h_aSurface = aSurface->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	return ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->ConvertSurface(h_aSurface, h_S, UF, UL, VF, VL, true);
	aSurface->NativeInstance = h_aSurface.get();
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::ShapeCustom_BSplineRestriction::ConvertCurve(Macad::Occt::Geom_Curve^ aCurve, Macad::Occt::Geom_Curve^ C, bool IsConvert, double First, double Last, double% TolCur, bool IsOf)
{
	Handle(::Geom_Curve) h_aCurve = aCurve->NativeInstance;
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_TolCur = &TolCur;
	return ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->ConvertCurve(h_aCurve, h_C, IsConvert, First, Last, *(Standard_Real*)pp_TolCur, IsOf);
	aCurve->NativeInstance = h_aCurve.get();
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::ShapeCustom_BSplineRestriction::ConvertCurve(Macad::Occt::Geom_Curve^ aCurve, Macad::Occt::Geom_Curve^ C, bool IsConvert, double First, double Last, double% TolCur)
{
	Handle(::Geom_Curve) h_aCurve = aCurve->NativeInstance;
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_TolCur = &TolCur;
	return ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->ConvertCurve(h_aCurve, h_C, IsConvert, First, Last, *(Standard_Real*)pp_TolCur, true);
	aCurve->NativeInstance = h_aCurve.get();
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::ShapeCustom_BSplineRestriction::ConvertCurve2d(Macad::Occt::Geom2d_Curve^ aCurve, Macad::Occt::Geom2d_Curve^ C, bool IsConvert, double First, double Last, double% TolCur, bool IsOf)
{
	Handle(::Geom2d_Curve) h_aCurve = aCurve->NativeInstance;
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_TolCur = &TolCur;
	return ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->ConvertCurve2d(h_aCurve, h_C, IsConvert, First, Last, *(Standard_Real*)pp_TolCur, IsOf);
	aCurve->NativeInstance = h_aCurve.get();
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::ShapeCustom_BSplineRestriction::ConvertCurve2d(Macad::Occt::Geom2d_Curve^ aCurve, Macad::Occt::Geom2d_Curve^ C, bool IsConvert, double First, double Last, double% TolCur)
{
	Handle(::Geom2d_Curve) h_aCurve = aCurve->NativeInstance;
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_TolCur = &TolCur;
	return ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->ConvertCurve2d(h_aCurve, h_C, IsConvert, First, Last, *(Standard_Real*)pp_TolCur, true);
	aCurve->NativeInstance = h_aCurve.get();
	C->NativeInstance = h_C.get();
}

void Macad::Occt::ShapeCustom_BSplineRestriction::SetTol3d(double Tol3d)
{
	((::ShapeCustom_BSplineRestriction*)_NativeInstance)->SetTol3d(Tol3d);
}

void Macad::Occt::ShapeCustom_BSplineRestriction::SetTol2d(double Tol2d)
{
	((::ShapeCustom_BSplineRestriction*)_NativeInstance)->SetTol2d(Tol2d);
}

bool Macad::Occt::ShapeCustom_BSplineRestriction::ModifyApproxSurfaceFlag()
{
	return ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->ModifyApproxSurfaceFlag();
}

bool Macad::Occt::ShapeCustom_BSplineRestriction::ModifyApproxCurve3dFlag()
{
	return ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->ModifyApproxCurve3dFlag();
}

bool Macad::Occt::ShapeCustom_BSplineRestriction::ModifyApproxCurve2dFlag()
{
	return ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->ModifyApproxCurve2dFlag();
}

void Macad::Occt::ShapeCustom_BSplineRestriction::SetContinuity3d(Macad::Occt::GeomAbs_Shape Continuity3d)
{
	((::ShapeCustom_BSplineRestriction*)_NativeInstance)->SetContinuity3d((::GeomAbs_Shape)Continuity3d);
}

void Macad::Occt::ShapeCustom_BSplineRestriction::SetContinuity2d(Macad::Occt::GeomAbs_Shape Continuity2d)
{
	((::ShapeCustom_BSplineRestriction*)_NativeInstance)->SetContinuity2d((::GeomAbs_Shape)Continuity2d);
}

void Macad::Occt::ShapeCustom_BSplineRestriction::SetMaxDegree(int MaxDegree)
{
	((::ShapeCustom_BSplineRestriction*)_NativeInstance)->SetMaxDegree(MaxDegree);
}

void Macad::Occt::ShapeCustom_BSplineRestriction::SetMaxNbSegments(int MaxNbSegments)
{
	((::ShapeCustom_BSplineRestriction*)_NativeInstance)->SetMaxNbSegments(MaxNbSegments);
}

void Macad::Occt::ShapeCustom_BSplineRestriction::SetPriority(bool Degree)
{
	((::ShapeCustom_BSplineRestriction*)_NativeInstance)->SetPriority(Degree);
}

void Macad::Occt::ShapeCustom_BSplineRestriction::SetConvRational(bool Rational)
{
	((::ShapeCustom_BSplineRestriction*)_NativeInstance)->SetConvRational(Rational);
}

Macad::Occt::ShapeCustom_RestrictionParameters^ Macad::Occt::ShapeCustom_BSplineRestriction::GetRestrictionParameters()
{
	Handle(::ShapeCustom_RestrictionParameters) _result;
	_result = ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->GetRestrictionParameters();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeCustom_RestrictionParameters::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeCustom_BSplineRestriction::SetRestrictionParameters(Macad::Occt::ShapeCustom_RestrictionParameters^ aModes)
{
	Handle(::ShapeCustom_RestrictionParameters) h_aModes = aModes->NativeInstance;
	((::ShapeCustom_BSplineRestriction*)_NativeInstance)->SetRestrictionParameters(h_aModes);
	aModes->NativeInstance = h_aModes.get();
}

double Macad::Occt::ShapeCustom_BSplineRestriction::Curve3dError()
{
	return ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->Curve3dError();
}

double Macad::Occt::ShapeCustom_BSplineRestriction::Curve2dError()
{
	return ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->Curve2dError();
}

double Macad::Occt::ShapeCustom_BSplineRestriction::SurfaceError()
{
	return ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->SurfaceError();
}

bool Macad::Occt::ShapeCustom_BSplineRestriction::NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, *(Standard_Real*)pp_Tol);
}

bool Macad::Occt::ShapeCustom_BSplineRestriction::NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol)
{
	pin_ptr<double> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(Standard_Real*)pp_P, *(Standard_Real*)pp_Tol);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::ShapeCustom_BSplineRestriction::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2)
{
	return (Macad::Occt::GeomAbs_Shape)((::ShapeCustom_BSplineRestriction*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF1->NativeInstance, *(::TopoDS_Face*)NewF2->NativeInstance);
}

double Macad::Occt::ShapeCustom_BSplineRestriction::MaxErrors(double% aCurve3dErr, double% aCurve2dErr)
{
	pin_ptr<double> pp_aCurve3dErr = &aCurve3dErr;
	pin_ptr<double> pp_aCurve2dErr = &aCurve2dErr;
	return ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->MaxErrors(*(Standard_Real*)pp_aCurve3dErr, *(Standard_Real*)pp_aCurve2dErr);
}

int Macad::Occt::ShapeCustom_BSplineRestriction::NbOfSpan()
{
	return ((::ShapeCustom_BSplineRestriction*)_NativeInstance)->NbOfSpan();
}


Macad::Occt::ShapeCustom_BSplineRestriction^ Macad::Occt::ShapeCustom_BSplineRestriction::CreateDowncasted(::ShapeCustom_BSplineRestriction* instance)
{
	return gcnew Macad::Occt::ShapeCustom_BSplineRestriction( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeCustom_ConvertToRevolution
//---------------------------------------------------------------------

Macad::Occt::ShapeCustom_ConvertToRevolution::ShapeCustom_ConvertToRevolution()
	: Macad::Occt::ShapeCustom_Modification(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeCustom_ConvertToRevolution();
}

Macad::Occt::ShapeCustom_ConvertToRevolution::ShapeCustom_ConvertToRevolution(Macad::Occt::ShapeCustom_ConvertToRevolution^ parameter1)
	: Macad::Occt::ShapeCustom_Modification(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeCustom_ConvertToRevolution(*(::ShapeCustom_ConvertToRevolution*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeCustom_ConvertToRevolution::NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	pin_ptr<bool> pp_RevWires = &RevWires;
	pin_ptr<bool> pp_RevFace = &RevFace;
	return ((::ShapeCustom_ConvertToRevolution*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol, *(Standard_Boolean*)pp_RevWires, *(Standard_Boolean*)pp_RevFace);
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::ShapeCustom_ConvertToRevolution::NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_ConvertToRevolution*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::ShapeCustom_ConvertToRevolution::NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_ConvertToRevolution*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, *(Standard_Real*)pp_Tol);
}

bool Macad::Occt::ShapeCustom_ConvertToRevolution::NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_ConvertToRevolution*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF->NativeInstance, h_C, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::ShapeCustom_ConvertToRevolution::NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol)
{
	pin_ptr<double> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_ConvertToRevolution*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(Standard_Real*)pp_P, *(Standard_Real*)pp_Tol);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::ShapeCustom_ConvertToRevolution::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2)
{
	return (Macad::Occt::GeomAbs_Shape)((::ShapeCustom_ConvertToRevolution*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF1->NativeInstance, *(::TopoDS_Face*)NewF2->NativeInstance);
}


Macad::Occt::ShapeCustom_ConvertToRevolution^ Macad::Occt::ShapeCustom_ConvertToRevolution::CreateDowncasted(::ShapeCustom_ConvertToRevolution* instance)
{
	return gcnew Macad::Occt::ShapeCustom_ConvertToRevolution( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeCustom_SweptToElementary
//---------------------------------------------------------------------

Macad::Occt::ShapeCustom_SweptToElementary::ShapeCustom_SweptToElementary()
	: Macad::Occt::ShapeCustom_Modification(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeCustom_SweptToElementary();
}

Macad::Occt::ShapeCustom_SweptToElementary::ShapeCustom_SweptToElementary(Macad::Occt::ShapeCustom_SweptToElementary^ parameter1)
	: Macad::Occt::ShapeCustom_Modification(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeCustom_SweptToElementary(*(::ShapeCustom_SweptToElementary*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeCustom_SweptToElementary::NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	pin_ptr<bool> pp_RevWires = &RevWires;
	pin_ptr<bool> pp_RevFace = &RevFace;
	return ((::ShapeCustom_SweptToElementary*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol, *(Standard_Boolean*)pp_RevWires, *(Standard_Boolean*)pp_RevFace);
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::ShapeCustom_SweptToElementary::NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_SweptToElementary*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::ShapeCustom_SweptToElementary::NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_SweptToElementary*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, *(Standard_Real*)pp_Tol);
}

bool Macad::Occt::ShapeCustom_SweptToElementary::NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_SweptToElementary*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF->NativeInstance, h_C, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::ShapeCustom_SweptToElementary::NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol)
{
	pin_ptr<double> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_SweptToElementary*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(Standard_Real*)pp_P, *(Standard_Real*)pp_Tol);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::ShapeCustom_SweptToElementary::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2)
{
	return (Macad::Occt::GeomAbs_Shape)((::ShapeCustom_SweptToElementary*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF1->NativeInstance, *(::TopoDS_Face*)NewF2->NativeInstance);
}


Macad::Occt::ShapeCustom_SweptToElementary^ Macad::Occt::ShapeCustom_SweptToElementary::CreateDowncasted(::ShapeCustom_SweptToElementary* instance)
{
	return gcnew Macad::Occt::ShapeCustom_SweptToElementary( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeCustom_ConvertToBSpline
//---------------------------------------------------------------------

Macad::Occt::ShapeCustom_ConvertToBSpline::ShapeCustom_ConvertToBSpline()
	: Macad::Occt::ShapeCustom_Modification(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeCustom_ConvertToBSpline();
}

Macad::Occt::ShapeCustom_ConvertToBSpline::ShapeCustom_ConvertToBSpline(Macad::Occt::ShapeCustom_ConvertToBSpline^ parameter1)
	: Macad::Occt::ShapeCustom_Modification(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeCustom_ConvertToBSpline(*(::ShapeCustom_ConvertToBSpline*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeCustom_ConvertToBSpline::SetExtrusionMode(bool extrMode)
{
	((::ShapeCustom_ConvertToBSpline*)_NativeInstance)->SetExtrusionMode(extrMode);
}

void Macad::Occt::ShapeCustom_ConvertToBSpline::SetRevolutionMode(bool revolMode)
{
	((::ShapeCustom_ConvertToBSpline*)_NativeInstance)->SetRevolutionMode(revolMode);
}

void Macad::Occt::ShapeCustom_ConvertToBSpline::SetOffsetMode(bool offsetMode)
{
	((::ShapeCustom_ConvertToBSpline*)_NativeInstance)->SetOffsetMode(offsetMode);
}

void Macad::Occt::ShapeCustom_ConvertToBSpline::SetPlaneMode(bool planeMode)
{
	((::ShapeCustom_ConvertToBSpline*)_NativeInstance)->SetPlaneMode(planeMode);
}

bool Macad::Occt::ShapeCustom_ConvertToBSpline::NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	pin_ptr<bool> pp_RevWires = &RevWires;
	pin_ptr<bool> pp_RevFace = &RevFace;
	return ((::ShapeCustom_ConvertToBSpline*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol, *(Standard_Boolean*)pp_RevWires, *(Standard_Boolean*)pp_RevFace);
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::ShapeCustom_ConvertToBSpline::NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_ConvertToBSpline*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::ShapeCustom_ConvertToBSpline::NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_ConvertToBSpline*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, *(Standard_Real*)pp_Tol);
}

bool Macad::Occt::ShapeCustom_ConvertToBSpline::NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_ConvertToBSpline*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF->NativeInstance, h_C, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::ShapeCustom_ConvertToBSpline::NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol)
{
	pin_ptr<double> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::ShapeCustom_ConvertToBSpline*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(Standard_Real*)pp_P, *(Standard_Real*)pp_Tol);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::ShapeCustom_ConvertToBSpline::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2)
{
	return (Macad::Occt::GeomAbs_Shape)((::ShapeCustom_ConvertToBSpline*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF1->NativeInstance, *(::TopoDS_Face*)NewF2->NativeInstance);
}


Macad::Occt::ShapeCustom_ConvertToBSpline^ Macad::Occt::ShapeCustom_ConvertToBSpline::CreateDowncasted(::ShapeCustom_ConvertToBSpline* instance)
{
	return gcnew Macad::Occt::ShapeCustom_ConvertToBSpline( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeCustom
//---------------------------------------------------------------------

Macad::Occt::ShapeCustom::ShapeCustom()
	: BaseClass<::ShapeCustom>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeCustom();
}

Macad::Occt::ShapeCustom::ShapeCustom(Macad::Occt::ShapeCustom^ parameter1)
	: BaseClass<::ShapeCustom>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeCustom(*(::ShapeCustom*)parameter1->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeCustom::ApplyModifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_Modification^ M, Macad::Occt::TopTools_DataMapOfShapeShape^ context, Macad::Occt::BRepTools_Modifier^ MD)
{
	Handle(::BRepTools_Modification) h_M = M->NativeInstance;
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ::ShapeCustom::ApplyModifier(*(::TopoDS_Shape*)S->NativeInstance, h_M, *(::TopTools_DataMapOfShapeShape*)context->NativeInstance, *(::BRepTools_Modifier*)MD->NativeInstance, 0, 0);
	M->NativeInstance = h_M.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeCustom::DirectFaces(Macad::Occt::TopoDS_Shape^ S)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ::ShapeCustom::DirectFaces(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeCustom::ScaleShape(Macad::Occt::TopoDS_Shape^ S, double scale)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ::ShapeCustom::ScaleShape(*(::TopoDS_Shape*)S->NativeInstance, scale);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeCustom::BSplineRestriction(Macad::Occt::TopoDS_Shape^ S, double Tol3d, double Tol2d, int MaxDegree, int MaxNbSegment, Macad::Occt::GeomAbs_Shape Continuity3d, Macad::Occt::GeomAbs_Shape Continuity2d, bool Degree, bool Rational, Macad::Occt::ShapeCustom_RestrictionParameters^ aParameters)
{
	Handle(::ShapeCustom_RestrictionParameters) h_aParameters = aParameters->NativeInstance;
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ::ShapeCustom::BSplineRestriction(*(::TopoDS_Shape*)S->NativeInstance, Tol3d, Tol2d, MaxDegree, MaxNbSegment, (::GeomAbs_Shape)Continuity3d, (::GeomAbs_Shape)Continuity2d, Degree, Rational, h_aParameters);
	aParameters->NativeInstance = h_aParameters.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeCustom::ConvertToRevolution(Macad::Occt::TopoDS_Shape^ S)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ::ShapeCustom::ConvertToRevolution(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeCustom::SweptToElementary(Macad::Occt::TopoDS_Shape^ S)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ::ShapeCustom::SweptToElementary(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeCustom::ConvertToBSpline(Macad::Occt::TopoDS_Shape^ S, bool extrMode, bool revolMode, bool offsetMode, bool planeMode)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ::ShapeCustom::ConvertToBSpline(*(::TopoDS_Shape*)S->NativeInstance, extrMode, revolMode, offsetMode, planeMode);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeCustom::ConvertToBSpline(Macad::Occt::TopoDS_Shape^ S, bool extrMode, bool revolMode, bool offsetMode)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ::ShapeCustom::ConvertToBSpline(*(::TopoDS_Shape*)S->NativeInstance, extrMode, revolMode, offsetMode, false);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



