// Generated wrapper code for package BRepFeat

#include "OcctPCH.h"
#include "BRepFeat.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "TColgp.h"
#include "gp.h"
#include "Geom.h"
#include "Geom2dAdaptor.h"
#include "TopAbs.h"
#include "TopTools.h"
#include "Message.h"


//---------------------------------------------------------------------
//  Class  BRepFeat
//---------------------------------------------------------------------

Macad::Occt::BRepFeat::BRepFeat()
    : Macad::Occt::BaseClass<::BRepFeat>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFeat();
}

void Macad::Occt::BRepFeat::SampleEdges(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TColgp_SequenceOfPnt^ Pt)
{
    ::BRepFeat::SampleEdges(*(::TopoDS_Shape*)S->NativeInstance, *(::TColgp_SequenceOfPnt*)Pt->NativeInstance);
}

void Macad::Occt::BRepFeat::Barycenter(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Pnt% Pt)
{
    pin_ptr<Macad::Occt::Pnt> pp_Pt = &Pt;
    ::BRepFeat::Barycenter(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Pnt*)pp_Pt);
}

double Macad::Occt::BRepFeat::ParametricBarycenter(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Geom_Curve^ C)
{
    double _result = ::BRepFeat::ParametricBarycenter(*(::TopoDS_Shape*)S->NativeInstance, Handle(::Geom_Curve)(C->NativeInstance));
    return _result;
}

void Macad::Occt::BRepFeat::ParametricMinMax(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Geom_Curve^ C, double% prmin, double% prmax, double% prbmin, double% prbmax, bool% flag, bool Ori)
{
    pin_ptr<double> pp_prmin = &prmin;
    pin_ptr<double> pp_prmax = &prmax;
    pin_ptr<double> pp_prbmin = &prbmin;
    pin_ptr<double> pp_prbmax = &prbmax;
    pin_ptr<bool> pp_flag = &flag;
    ::BRepFeat::ParametricMinMax(*(::TopoDS_Shape*)S->NativeInstance, Handle(::Geom_Curve)(C->NativeInstance), *(double*)pp_prmin, *(double*)pp_prmax, *(double*)pp_prbmin, *(double*)pp_prbmax, *(bool*)pp_flag, Ori);
}

void Macad::Occt::BRepFeat::ParametricMinMax(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Geom_Curve^ C, double% prmin, double% prmax, double% prbmin, double% prbmax, bool% flag)
{
    pin_ptr<double> pp_prmin = &prmin;
    pin_ptr<double> pp_prmax = &prmax;
    pin_ptr<double> pp_prbmin = &prbmin;
    pin_ptr<double> pp_prbmax = &prbmax;
    pin_ptr<bool> pp_flag = &flag;
    ::BRepFeat::ParametricMinMax(*(::TopoDS_Shape*)S->NativeInstance, Handle(::Geom_Curve)(C->NativeInstance), *(double*)pp_prmin, *(double*)pp_prmax, *(double*)pp_prbmin, *(double*)pp_prbmax, *(bool*)pp_flag, false);
}

bool Macad::Occt::BRepFeat::IsInside(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2)
{
    bool _result = ::BRepFeat::IsInside(*(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance);
    return _result;
}

void Macad::Occt::BRepFeat::FaceUntil(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopoDS_Face^ F)
{
    ::BRepFeat::FaceUntil(*(::TopoDS_Shape*)S->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::TopoDS_Solid^ Macad::Occt::BRepFeat::Tool(Macad::Occt::TopoDS_Shape^ SRef, Macad::Occt::TopoDS_Face^ Fac, Macad::Occt::TopAbs_Orientation Orf)
{
    ::TopoDS_Solid* _result = new ::TopoDS_Solid();
    *_result = ::BRepFeat::Tool(*(::TopoDS_Shape*)SRef->NativeInstance, *(::TopoDS_Face*)Fac->NativeInstance, (::TopAbs_Orientation)Orf);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Solid(_result);
}

System::IO::TextWriter^ Macad::Occt::BRepFeat::Print(Macad::Occt::BRepFeat_StatusError SE, System::IO::TextWriter^ S)
{
    throw gcnew System::NotImplementedException();
}



//---------------------------------------------------------------------
//  Class  BRepFeat_Builder
//---------------------------------------------------------------------

Macad::Occt::BRepFeat_Builder::BRepFeat_Builder()
    : Macad::Occt::BOPAlgo_BOP(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFeat_Builder();
}

void Macad::Occt::BRepFeat_Builder::Clear()
{
    ((::BRepFeat_Builder*)_NativeInstance)->Clear();
}

void Macad::Occt::BRepFeat_Builder::Init(Macad::Occt::TopoDS_Shape^ theShape)
{
    ((::BRepFeat_Builder*)_NativeInstance)->Init(*(::TopoDS_Shape*)theShape->NativeInstance);
}

void Macad::Occt::BRepFeat_Builder::Init(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::TopoDS_Shape^ theTool)
{
    ((::BRepFeat_Builder*)_NativeInstance)->Init(*(::TopoDS_Shape*)theShape->NativeInstance, *(::TopoDS_Shape*)theTool->NativeInstance);
}

void Macad::Occt::BRepFeat_Builder::SetOperation(int theFuse)
{
    ((::BRepFeat_Builder*)_NativeInstance)->SetOperation(theFuse);
}

void Macad::Occt::BRepFeat_Builder::SetOperation(int theFuse, bool theFlag)
{
    ((::BRepFeat_Builder*)_NativeInstance)->SetOperation(theFuse, theFlag);
}

void Macad::Occt::BRepFeat_Builder::PartsOfTool(Macad::Occt::TopTools_ListOfShape^ theLT)
{
    ((::BRepFeat_Builder*)_NativeInstance)->PartsOfTool(*(::TopTools_ListOfShape*)theLT->NativeInstance);
}

void Macad::Occt::BRepFeat_Builder::KeepParts(Macad::Occt::TopTools_ListOfShape^ theIm)
{
    ((::BRepFeat_Builder*)_NativeInstance)->KeepParts(*(::TopTools_ListOfShape*)theIm->NativeInstance);
}

void Macad::Occt::BRepFeat_Builder::KeepPart(Macad::Occt::TopoDS_Shape^ theS)
{
    ((::BRepFeat_Builder*)_NativeInstance)->KeepPart(*(::TopoDS_Shape*)theS->NativeInstance);
}

void Macad::Occt::BRepFeat_Builder::PerformResult(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::BRepFeat_Builder*)_NativeInstance)->PerformResult(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepFeat_Builder::PerformResult()
{
    ((::BRepFeat_Builder*)_NativeInstance)->PerformResult(::Message_ProgressRange());
}

void Macad::Occt::BRepFeat_Builder::RebuildFaces()
{
    ((::BRepFeat_Builder*)_NativeInstance)->RebuildFaces();
}

void Macad::Occt::BRepFeat_Builder::RebuildEdge(Macad::Occt::TopoDS_Shape^ theE, Macad::Occt::TopoDS_Face^ theF, Macad::Occt::TopTools_MapOfShape^ theME, Macad::Occt::TopTools_ListOfShape^ aLEIm)
{
    ((::BRepFeat_Builder*)_NativeInstance)->RebuildEdge(*(::TopoDS_Shape*)theE->NativeInstance, *(::TopoDS_Face*)theF->NativeInstance, *(::TopTools_MapOfShape*)theME->NativeInstance, *(::TopTools_ListOfShape*)aLEIm->NativeInstance);
}

void Macad::Occt::BRepFeat_Builder::CheckSolidImages()
{
    ((::BRepFeat_Builder*)_NativeInstance)->CheckSolidImages();
}

void Macad::Occt::BRepFeat_Builder::FillRemoved()
{
    ((::BRepFeat_Builder*)_NativeInstance)->FillRemoved();
}

void Macad::Occt::BRepFeat_Builder::FillRemoved(Macad::Occt::TopoDS_Shape^ theS, Macad::Occt::TopTools_MapOfShape^ theM)
{
    ((::BRepFeat_Builder*)_NativeInstance)->FillRemoved(*(::TopoDS_Shape*)theS->NativeInstance, *(::TopTools_MapOfShape*)theM->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BRepFeat_Form
//---------------------------------------------------------------------

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_Form::Modified(Macad::Occt::TopoDS_Shape^ F)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_Form*)_NativeInstance)->Modified(*(::TopoDS_Shape*)F->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_Form::Generated(Macad::Occt::TopoDS_Shape^ S)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_Form*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

bool Macad::Occt::BRepFeat_Form::IsDeleted(Macad::Occt::TopoDS_Shape^ S)
{
    bool _result = ((::BRepFeat_Form*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_Form::FirstShape()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_Form*)_NativeInstance)->FirstShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_Form::LastShape()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_Form*)_NativeInstance)->LastShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_Form::NewEdges()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_Form*)_NativeInstance)->NewEdges();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_Form::TgtEdges()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_Form*)_NativeInstance)->TgtEdges();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

void Macad::Occt::BRepFeat_Form::BasisShapeValid()
{
    ((::BRepFeat_Form*)_NativeInstance)->BasisShapeValid();
}

void Macad::Occt::BRepFeat_Form::GeneratedShapeValid()
{
    ((::BRepFeat_Form*)_NativeInstance)->GeneratedShapeValid();
}

void Macad::Occt::BRepFeat_Form::ShapeFromValid()
{
    ((::BRepFeat_Form*)_NativeInstance)->ShapeFromValid();
}

void Macad::Occt::BRepFeat_Form::ShapeUntilValid()
{
    ((::BRepFeat_Form*)_NativeInstance)->ShapeUntilValid();
}

void Macad::Occt::BRepFeat_Form::GluedFacesValid()
{
    ((::BRepFeat_Form*)_NativeInstance)->GluedFacesValid();
}

void Macad::Occt::BRepFeat_Form::SketchFaceValid()
{
    ((::BRepFeat_Form*)_NativeInstance)->SketchFaceValid();
}

void Macad::Occt::BRepFeat_Form::PerfSelectionValid()
{
    ((::BRepFeat_Form*)_NativeInstance)->PerfSelectionValid();
}

Macad::Occt::Geom_Curve^ Macad::Occt::BRepFeat_Form::BarycCurve()
{
    Handle(::Geom_Curve) _result = ((::BRepFeat_Form*)_NativeInstance)->BarycCurve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::BRepFeat_StatusError Macad::Occt::BRepFeat_Form::CurrentStatusError()
{
    ::BRepFeat_StatusError _result = ((::BRepFeat_Form*)_NativeInstance)->CurrentStatusError();
    return (Macad::Occt::BRepFeat_StatusError)_result;
}



//---------------------------------------------------------------------
//  Class  BRepFeat_Gluer
//---------------------------------------------------------------------

Macad::Occt::BRepFeat_Gluer::BRepFeat_Gluer()
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFeat_Gluer();
}

Macad::Occt::BRepFeat_Gluer::BRepFeat_Gluer(Macad::Occt::TopoDS_Shape^ Snew, Macad::Occt::TopoDS_Shape^ Sbase)
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFeat_Gluer(*(::TopoDS_Shape*)Snew->NativeInstance, *(::TopoDS_Shape*)Sbase->NativeInstance);
}

void Macad::Occt::BRepFeat_Gluer::Init(Macad::Occt::TopoDS_Shape^ Snew, Macad::Occt::TopoDS_Shape^ Sbase)
{
    ((::BRepFeat_Gluer*)_NativeInstance)->Init(*(::TopoDS_Shape*)Snew->NativeInstance, *(::TopoDS_Shape*)Sbase->NativeInstance);
}

void Macad::Occt::BRepFeat_Gluer::Bind(Macad::Occt::TopoDS_Face^ Fnew, Macad::Occt::TopoDS_Face^ Fbase)
{
    ((::BRepFeat_Gluer*)_NativeInstance)->Bind(*(::TopoDS_Face*)Fnew->NativeInstance, *(::TopoDS_Face*)Fbase->NativeInstance);
}

void Macad::Occt::BRepFeat_Gluer::Bind(Macad::Occt::TopoDS_Edge^ Enew, Macad::Occt::TopoDS_Edge^ Ebase)
{
    ((::BRepFeat_Gluer*)_NativeInstance)->Bind(*(::TopoDS_Edge*)Enew->NativeInstance, *(::TopoDS_Edge*)Ebase->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFeat_Gluer::BasisShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFeat_Gluer*)_NativeInstance)->BasisShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFeat_Gluer::GluedShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFeat_Gluer*)_NativeInstance)->GluedShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::BRepFeat_Gluer::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::BRepFeat_Gluer*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepFeat_Gluer::Build()
{
    ((::BRepFeat_Gluer*)_NativeInstance)->Build(::Message_ProgressRange());
}

bool Macad::Occt::BRepFeat_Gluer::IsDeleted(Macad::Occt::TopoDS_Shape^ F)
{
    bool _result = ((::BRepFeat_Gluer*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)F->NativeInstance);
    return _result;
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_Gluer::Modified(Macad::Occt::TopoDS_Shape^ F)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_Gluer*)_NativeInstance)->Modified(*(::TopoDS_Shape*)F->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepFeat_MakeCylindricalHole
//---------------------------------------------------------------------

Macad::Occt::BRepFeat_MakeCylindricalHole::BRepFeat_MakeCylindricalHole()
    : Macad::Occt::BRepFeat_Builder(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFeat_MakeCylindricalHole();
}

void Macad::Occt::BRepFeat_MakeCylindricalHole::Init(Macad::Occt::Ax1 Axis)
{
    pin_ptr<Macad::Occt::Ax1> pp_Axis = &Axis;
    ((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->Init(*(gp_Ax1*)pp_Axis);
}

void Macad::Occt::BRepFeat_MakeCylindricalHole::Init(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Ax1 Axis)
{
    pin_ptr<Macad::Occt::Ax1> pp_Axis = &Axis;
    ((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Ax1*)pp_Axis);
}

void Macad::Occt::BRepFeat_MakeCylindricalHole::Perform(double Radius)
{
    ((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->Perform(Radius);
}

void Macad::Occt::BRepFeat_MakeCylindricalHole::Perform(double Radius, double PFrom, double PTo, bool WithControl)
{
    ((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->Perform(Radius, PFrom, PTo, WithControl);
}

void Macad::Occt::BRepFeat_MakeCylindricalHole::Perform(double Radius, double PFrom, double PTo)
{
    ((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->Perform(Radius, PFrom, PTo, true);
}

void Macad::Occt::BRepFeat_MakeCylindricalHole::PerformThruNext(double Radius, bool WithControl)
{
    ((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->PerformThruNext(Radius, WithControl);
}

void Macad::Occt::BRepFeat_MakeCylindricalHole::PerformThruNext(double Radius)
{
    ((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->PerformThruNext(Radius, true);
}

void Macad::Occt::BRepFeat_MakeCylindricalHole::PerformUntilEnd(double Radius, bool WithControl)
{
    ((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->PerformUntilEnd(Radius, WithControl);
}

void Macad::Occt::BRepFeat_MakeCylindricalHole::PerformUntilEnd(double Radius)
{
    ((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->PerformUntilEnd(Radius, true);
}

void Macad::Occt::BRepFeat_MakeCylindricalHole::PerformBlind(double Radius, double Length, bool WithControl)
{
    ((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->PerformBlind(Radius, Length, WithControl);
}

void Macad::Occt::BRepFeat_MakeCylindricalHole::PerformBlind(double Radius, double Length)
{
    ((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->PerformBlind(Radius, Length, true);
}

Macad::Occt::BRepFeat_Status Macad::Occt::BRepFeat_MakeCylindricalHole::Status()
{
    ::BRepFeat_Status _result = ((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->Status();
    return (Macad::Occt::BRepFeat_Status)_result;
}

void Macad::Occt::BRepFeat_MakeCylindricalHole::Build()
{
    ((::BRepFeat_MakeCylindricalHole*)_NativeInstance)->Build();
}



//---------------------------------------------------------------------
//  Class  BRepFeat_MakeDPrism
//---------------------------------------------------------------------

Macad::Occt::BRepFeat_MakeDPrism::BRepFeat_MakeDPrism(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Face^ Pbase, Macad::Occt::TopoDS_Face^ Skface, double Angle, int Fuse, bool Modify)
    : Macad::Occt::BRepFeat_Form(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFeat_MakeDPrism(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Face*)Pbase->NativeInstance, *(::TopoDS_Face*)Skface->NativeInstance, Angle, Fuse, Modify);
}

Macad::Occt::BRepFeat_MakeDPrism::BRepFeat_MakeDPrism()
    : Macad::Occt::BRepFeat_Form(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFeat_MakeDPrism();
}

void Macad::Occt::BRepFeat_MakeDPrism::Init(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Face^ Pbase, Macad::Occt::TopoDS_Face^ Skface, double Angle, int Fuse, bool Modify)
{
    ((::BRepFeat_MakeDPrism*)_NativeInstance)->Init(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Face*)Pbase->NativeInstance, *(::TopoDS_Face*)Skface->NativeInstance, Angle, Fuse, Modify);
}

void Macad::Occt::BRepFeat_MakeDPrism::Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ OnFace)
{
    ((::BRepFeat_MakeDPrism*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)OnFace->NativeInstance);
}

void Macad::Occt::BRepFeat_MakeDPrism::Perform(double Height)
{
    ((::BRepFeat_MakeDPrism*)_NativeInstance)->Perform(Height);
}

void Macad::Occt::BRepFeat_MakeDPrism::Perform(Macad::Occt::TopoDS_Shape^ Until)
{
    ((::BRepFeat_MakeDPrism*)_NativeInstance)->Perform(*(::TopoDS_Shape*)Until->NativeInstance);
}

void Macad::Occt::BRepFeat_MakeDPrism::Perform(Macad::Occt::TopoDS_Shape^ From, Macad::Occt::TopoDS_Shape^ Until)
{
    ((::BRepFeat_MakeDPrism*)_NativeInstance)->Perform(*(::TopoDS_Shape*)From->NativeInstance, *(::TopoDS_Shape*)Until->NativeInstance);
}

void Macad::Occt::BRepFeat_MakeDPrism::PerformUntilEnd()
{
    ((::BRepFeat_MakeDPrism*)_NativeInstance)->PerformUntilEnd();
}

void Macad::Occt::BRepFeat_MakeDPrism::PerformFromEnd(Macad::Occt::TopoDS_Shape^ FUntil)
{
    ((::BRepFeat_MakeDPrism*)_NativeInstance)->PerformFromEnd(*(::TopoDS_Shape*)FUntil->NativeInstance);
}

void Macad::Occt::BRepFeat_MakeDPrism::PerformThruAll()
{
    ((::BRepFeat_MakeDPrism*)_NativeInstance)->PerformThruAll();
}

void Macad::Occt::BRepFeat_MakeDPrism::PerformUntilHeight(Macad::Occt::TopoDS_Shape^ Until, double Height)
{
    ((::BRepFeat_MakeDPrism*)_NativeInstance)->PerformUntilHeight(*(::TopoDS_Shape*)Until->NativeInstance, Height);
}

Macad::Occt::Geom_Curve^ Macad::Occt::BRepFeat_MakeDPrism::BarycCurve()
{
    Handle(::Geom_Curve) _result = ((::BRepFeat_MakeDPrism*)_NativeInstance)->BarycCurve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

void Macad::Occt::BRepFeat_MakeDPrism::BossEdges(int sig)
{
    ((::BRepFeat_MakeDPrism*)_NativeInstance)->BossEdges(sig);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_MakeDPrism::TopEdges()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_MakeDPrism*)_NativeInstance)->TopEdges();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_MakeDPrism::LatEdges()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_MakeDPrism*)_NativeInstance)->LatEdges();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepFeat_RibSlot
//---------------------------------------------------------------------

bool Macad::Occt::BRepFeat_RibSlot::IsDeleted(Macad::Occt::TopoDS_Shape^ F)
{
    bool _result = ((::BRepFeat_RibSlot*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)F->NativeInstance);
    return _result;
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_RibSlot::Modified(Macad::Occt::TopoDS_Shape^ F)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_RibSlot*)_NativeInstance)->Modified(*(::TopoDS_Shape*)F->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_RibSlot::Generated(Macad::Occt::TopoDS_Shape^ S)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_RibSlot*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_RibSlot::FirstShape()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_RibSlot*)_NativeInstance)->FirstShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_RibSlot::LastShape()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_RibSlot*)_NativeInstance)->LastShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_RibSlot::FacesForDraft()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_RibSlot*)_NativeInstance)->FacesForDraft();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_RibSlot::NewEdges()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_RibSlot*)_NativeInstance)->NewEdges();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_RibSlot::TgtEdges()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_RibSlot*)_NativeInstance)->TgtEdges();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

double Macad::Occt::BRepFeat_RibSlot::IntPar(Macad::Occt::Geom_Curve^ C, Macad::Occt::Pnt P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    double _result = ::BRepFeat_RibSlot::IntPar(Handle(::Geom_Curve)(C->NativeInstance), *(gp_Pnt*)pp_P);
    return _result;
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepFeat_RibSlot::ChoiceOfFaces(Macad::Occt::TopTools_ListOfShape^ faces, Macad::Occt::Geom_Curve^ cc, double par, double bnd, Macad::Occt::Geom_Plane^ Pln)
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = ::BRepFeat_RibSlot::ChoiceOfFaces(*(::TopTools_ListOfShape*)faces->NativeInstance, Handle(::Geom_Curve)(cc->NativeInstance), par, bnd, Handle(::Geom_Plane)(Pln->NativeInstance));
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::BRepFeat_StatusError Macad::Occt::BRepFeat_RibSlot::CurrentStatusError()
{
    ::BRepFeat_StatusError _result = ((::BRepFeat_RibSlot*)_NativeInstance)->CurrentStatusError();
    return (Macad::Occt::BRepFeat_StatusError)_result;
}



//---------------------------------------------------------------------
//  Class  BRepFeat_MakeLinearForm
//---------------------------------------------------------------------

Macad::Occt::BRepFeat_MakeLinearForm::BRepFeat_MakeLinearForm()
    : Macad::Occt::BRepFeat_RibSlot(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFeat_MakeLinearForm();
}

Macad::Occt::BRepFeat_MakeLinearForm::BRepFeat_MakeLinearForm(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Wire^ W, Macad::Occt::Geom_Plane^ P, Macad::Occt::Vec Direction, Macad::Occt::Vec Direction1, int Fuse, bool Modify)
    : Macad::Occt::BRepFeat_RibSlot(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Vec> pp_Direction = &Direction;
    pin_ptr<Macad::Occt::Vec> pp_Direction1 = &Direction1;
    _NativeInstance = new ::BRepFeat_MakeLinearForm(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Handle(::Geom_Plane)(P->NativeInstance), *(gp_Vec*)pp_Direction, *(gp_Vec*)pp_Direction1, Fuse, Modify);
}

void Macad::Occt::BRepFeat_MakeLinearForm::Init(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Wire^ W, Macad::Occt::Geom_Plane^ P, Macad::Occt::Vec Direction, Macad::Occt::Vec Direction1, int Fuse, bool Modify)
{
    pin_ptr<Macad::Occt::Vec> pp_Direction = &Direction;
    pin_ptr<Macad::Occt::Vec> pp_Direction1 = &Direction1;
    ((::BRepFeat_MakeLinearForm*)_NativeInstance)->Init(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Handle(::Geom_Plane)(P->NativeInstance), *(gp_Vec*)pp_Direction, *(gp_Vec*)pp_Direction1, Fuse, Modify);
}

void Macad::Occt::BRepFeat_MakeLinearForm::Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ OnFace)
{
    ((::BRepFeat_MakeLinearForm*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)OnFace->NativeInstance);
}

void Macad::Occt::BRepFeat_MakeLinearForm::Perform()
{
    ((::BRepFeat_MakeLinearForm*)_NativeInstance)->Perform();
}

bool Macad::Occt::BRepFeat_MakeLinearForm::Propagate(Macad::Occt::TopTools_ListOfShape^ L, Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt FPoint, Macad::Occt::Pnt LPoint, bool% falseside)
{
    pin_ptr<Macad::Occt::Pnt> pp_FPoint = &FPoint;
    pin_ptr<Macad::Occt::Pnt> pp_LPoint = &LPoint;
    pin_ptr<bool> pp_falseside = &falseside;
    bool _result = ((::BRepFeat_MakeLinearForm*)_NativeInstance)->Propagate(*(::TopTools_ListOfShape*)L->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_FPoint, *(gp_Pnt*)pp_LPoint, *(bool*)pp_falseside);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepFeat_MakePipe
//---------------------------------------------------------------------

Macad::Occt::BRepFeat_MakePipe::BRepFeat_MakePipe()
    : Macad::Occt::BRepFeat_Form(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFeat_MakePipe();
}

Macad::Occt::BRepFeat_MakePipe::BRepFeat_MakePipe(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Shape^ Pbase, Macad::Occt::TopoDS_Face^ Skface, Macad::Occt::TopoDS_Wire^ Spine, int Fuse, bool Modify)
    : Macad::Occt::BRepFeat_Form(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFeat_MakePipe(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Shape*)Pbase->NativeInstance, *(::TopoDS_Face*)Skface->NativeInstance, *(::TopoDS_Wire*)Spine->NativeInstance, Fuse, Modify);
}

void Macad::Occt::BRepFeat_MakePipe::Init(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Shape^ Pbase, Macad::Occt::TopoDS_Face^ Skface, Macad::Occt::TopoDS_Wire^ Spine, int Fuse, bool Modify)
{
    ((::BRepFeat_MakePipe*)_NativeInstance)->Init(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Shape*)Pbase->NativeInstance, *(::TopoDS_Face*)Skface->NativeInstance, *(::TopoDS_Wire*)Spine->NativeInstance, Fuse, Modify);
}

void Macad::Occt::BRepFeat_MakePipe::Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ OnFace)
{
    ((::BRepFeat_MakePipe*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)OnFace->NativeInstance);
}

void Macad::Occt::BRepFeat_MakePipe::Perform()
{
    ((::BRepFeat_MakePipe*)_NativeInstance)->Perform();
}

void Macad::Occt::BRepFeat_MakePipe::Perform(Macad::Occt::TopoDS_Shape^ Until)
{
    ((::BRepFeat_MakePipe*)_NativeInstance)->Perform(*(::TopoDS_Shape*)Until->NativeInstance);
}

void Macad::Occt::BRepFeat_MakePipe::Perform(Macad::Occt::TopoDS_Shape^ From, Macad::Occt::TopoDS_Shape^ Until)
{
    ((::BRepFeat_MakePipe*)_NativeInstance)->Perform(*(::TopoDS_Shape*)From->NativeInstance, *(::TopoDS_Shape*)Until->NativeInstance);
}

Macad::Occt::Geom_Curve^ Macad::Occt::BRepFeat_MakePipe::BarycCurve()
{
    Handle(::Geom_Curve) _result = ((::BRepFeat_MakePipe*)_NativeInstance)->BarycCurve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  BRepFeat_MakePrism
//---------------------------------------------------------------------

Macad::Occt::BRepFeat_MakePrism::BRepFeat_MakePrism()
    : Macad::Occt::BRepFeat_Form(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFeat_MakePrism();
}

Macad::Occt::BRepFeat_MakePrism::BRepFeat_MakePrism(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Shape^ Pbase, Macad::Occt::TopoDS_Face^ Skface, Macad::Occt::Dir Direction, int Fuse, bool Modify)
    : Macad::Occt::BRepFeat_Form(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Dir> pp_Direction = &Direction;
    _NativeInstance = new ::BRepFeat_MakePrism(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Shape*)Pbase->NativeInstance, *(::TopoDS_Face*)Skface->NativeInstance, *(gp_Dir*)pp_Direction, Fuse, Modify);
}

void Macad::Occt::BRepFeat_MakePrism::Init(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Shape^ Pbase, Macad::Occt::TopoDS_Face^ Skface, Macad::Occt::Dir Direction, int Fuse, bool Modify)
{
    pin_ptr<Macad::Occt::Dir> pp_Direction = &Direction;
    ((::BRepFeat_MakePrism*)_NativeInstance)->Init(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Shape*)Pbase->NativeInstance, *(::TopoDS_Face*)Skface->NativeInstance, *(gp_Dir*)pp_Direction, Fuse, Modify);
}

void Macad::Occt::BRepFeat_MakePrism::Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ OnFace)
{
    ((::BRepFeat_MakePrism*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)OnFace->NativeInstance);
}

void Macad::Occt::BRepFeat_MakePrism::Perform(double Length)
{
    ((::BRepFeat_MakePrism*)_NativeInstance)->Perform(Length);
}

void Macad::Occt::BRepFeat_MakePrism::Perform(Macad::Occt::TopoDS_Shape^ Until)
{
    ((::BRepFeat_MakePrism*)_NativeInstance)->Perform(*(::TopoDS_Shape*)Until->NativeInstance);
}

void Macad::Occt::BRepFeat_MakePrism::Perform(Macad::Occt::TopoDS_Shape^ From, Macad::Occt::TopoDS_Shape^ Until)
{
    ((::BRepFeat_MakePrism*)_NativeInstance)->Perform(*(::TopoDS_Shape*)From->NativeInstance, *(::TopoDS_Shape*)Until->NativeInstance);
}

void Macad::Occt::BRepFeat_MakePrism::PerformUntilEnd()
{
    ((::BRepFeat_MakePrism*)_NativeInstance)->PerformUntilEnd();
}

void Macad::Occt::BRepFeat_MakePrism::PerformFromEnd(Macad::Occt::TopoDS_Shape^ FUntil)
{
    ((::BRepFeat_MakePrism*)_NativeInstance)->PerformFromEnd(*(::TopoDS_Shape*)FUntil->NativeInstance);
}

void Macad::Occt::BRepFeat_MakePrism::PerformThruAll()
{
    ((::BRepFeat_MakePrism*)_NativeInstance)->PerformThruAll();
}

void Macad::Occt::BRepFeat_MakePrism::PerformUntilHeight(Macad::Occt::TopoDS_Shape^ Until, double Length)
{
    ((::BRepFeat_MakePrism*)_NativeInstance)->PerformUntilHeight(*(::TopoDS_Shape*)Until->NativeInstance, Length);
}

Macad::Occt::Geom_Curve^ Macad::Occt::BRepFeat_MakePrism::BarycCurve()
{
    Handle(::Geom_Curve) _result = ((::BRepFeat_MakePrism*)_NativeInstance)->BarycCurve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  BRepFeat_MakeRevol
//---------------------------------------------------------------------

Macad::Occt::BRepFeat_MakeRevol::BRepFeat_MakeRevol()
    : Macad::Occt::BRepFeat_Form(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFeat_MakeRevol();
}

Macad::Occt::BRepFeat_MakeRevol::BRepFeat_MakeRevol(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Shape^ Pbase, Macad::Occt::TopoDS_Face^ Skface, Macad::Occt::Ax1 Axis, int Fuse, bool Modify)
    : Macad::Occt::BRepFeat_Form(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_Axis = &Axis;
    _NativeInstance = new ::BRepFeat_MakeRevol(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Shape*)Pbase->NativeInstance, *(::TopoDS_Face*)Skface->NativeInstance, *(gp_Ax1*)pp_Axis, Fuse, Modify);
}

void Macad::Occt::BRepFeat_MakeRevol::Init(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Shape^ Pbase, Macad::Occt::TopoDS_Face^ Skface, Macad::Occt::Ax1 Axis, int Fuse, bool Modify)
{
    pin_ptr<Macad::Occt::Ax1> pp_Axis = &Axis;
    ((::BRepFeat_MakeRevol*)_NativeInstance)->Init(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Shape*)Pbase->NativeInstance, *(::TopoDS_Face*)Skface->NativeInstance, *(gp_Ax1*)pp_Axis, Fuse, Modify);
}

void Macad::Occt::BRepFeat_MakeRevol::Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ OnFace)
{
    ((::BRepFeat_MakeRevol*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)OnFace->NativeInstance);
}

void Macad::Occt::BRepFeat_MakeRevol::Perform(double Angle)
{
    ((::BRepFeat_MakeRevol*)_NativeInstance)->Perform(Angle);
}

void Macad::Occt::BRepFeat_MakeRevol::Perform(Macad::Occt::TopoDS_Shape^ Until)
{
    ((::BRepFeat_MakeRevol*)_NativeInstance)->Perform(*(::TopoDS_Shape*)Until->NativeInstance);
}

void Macad::Occt::BRepFeat_MakeRevol::Perform(Macad::Occt::TopoDS_Shape^ From, Macad::Occt::TopoDS_Shape^ Until)
{
    ((::BRepFeat_MakeRevol*)_NativeInstance)->Perform(*(::TopoDS_Shape*)From->NativeInstance, *(::TopoDS_Shape*)Until->NativeInstance);
}

void Macad::Occt::BRepFeat_MakeRevol::PerformThruAll()
{
    ((::BRepFeat_MakeRevol*)_NativeInstance)->PerformThruAll();
}

void Macad::Occt::BRepFeat_MakeRevol::PerformUntilAngle(Macad::Occt::TopoDS_Shape^ Until, double Angle)
{
    ((::BRepFeat_MakeRevol*)_NativeInstance)->PerformUntilAngle(*(::TopoDS_Shape*)Until->NativeInstance, Angle);
}

Macad::Occt::Geom_Curve^ Macad::Occt::BRepFeat_MakeRevol::BarycCurve()
{
    Handle(::Geom_Curve) _result = ((::BRepFeat_MakeRevol*)_NativeInstance)->BarycCurve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  BRepFeat_MakeRevolutionForm
//---------------------------------------------------------------------

Macad::Occt::BRepFeat_MakeRevolutionForm::BRepFeat_MakeRevolutionForm()
    : Macad::Occt::BRepFeat_RibSlot(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFeat_MakeRevolutionForm();
}

Macad::Occt::BRepFeat_MakeRevolutionForm::BRepFeat_MakeRevolutionForm(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Wire^ W, Macad::Occt::Geom_Plane^ Plane, Macad::Occt::Ax1 Axis, double Height1, double Height2, int Fuse, bool% Sliding)
    : Macad::Occt::BRepFeat_RibSlot(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_Axis = &Axis;
    pin_ptr<bool> pp_Sliding = &Sliding;
    _NativeInstance = new ::BRepFeat_MakeRevolutionForm(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Handle(::Geom_Plane)(Plane->NativeInstance), *(gp_Ax1*)pp_Axis, Height1, Height2, Fuse, *(bool*)pp_Sliding);
}

void Macad::Occt::BRepFeat_MakeRevolutionForm::Init(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Wire^ W, Macad::Occt::Geom_Plane^ Plane, Macad::Occt::Ax1 Axis, double Height1, double Height2, int Fuse, bool% Sliding)
{
    pin_ptr<Macad::Occt::Ax1> pp_Axis = &Axis;
    pin_ptr<bool> pp_Sliding = &Sliding;
    ((::BRepFeat_MakeRevolutionForm*)_NativeInstance)->Init(*(::TopoDS_Shape*)Sbase->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Handle(::Geom_Plane)(Plane->NativeInstance), *(gp_Ax1*)pp_Axis, Height1, Height2, Fuse, *(bool*)pp_Sliding);
}

void Macad::Occt::BRepFeat_MakeRevolutionForm::Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ OnFace)
{
    ((::BRepFeat_MakeRevolutionForm*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)OnFace->NativeInstance);
}

void Macad::Occt::BRepFeat_MakeRevolutionForm::Perform()
{
    ((::BRepFeat_MakeRevolutionForm*)_NativeInstance)->Perform();
}

bool Macad::Occt::BRepFeat_MakeRevolutionForm::Propagate(Macad::Occt::TopTools_ListOfShape^ L, Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt FPoint, Macad::Occt::Pnt LPoint, bool% falseside)
{
    pin_ptr<Macad::Occt::Pnt> pp_FPoint = &FPoint;
    pin_ptr<Macad::Occt::Pnt> pp_LPoint = &LPoint;
    pin_ptr<bool> pp_falseside = &falseside;
    bool _result = ((::BRepFeat_MakeRevolutionForm*)_NativeInstance)->Propagate(*(::TopTools_ListOfShape*)L->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_FPoint, *(gp_Pnt*)pp_LPoint, *(bool*)pp_falseside);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepFeat_SplitShape
//---------------------------------------------------------------------

Macad::Occt::BRepFeat_SplitShape::BRepFeat_SplitShape()
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFeat_SplitShape();
}

Macad::Occt::BRepFeat_SplitShape::BRepFeat_SplitShape(Macad::Occt::TopoDS_Shape^ S)
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFeat_SplitShape(*(::TopoDS_Shape*)S->NativeInstance);
}

bool Macad::Occt::BRepFeat_SplitShape::Add(Macad::Occt::TopTools_SequenceOfShape^ theEdges)
{
    bool _result = ((::BRepFeat_SplitShape*)_NativeInstance)->Add(*(::TopTools_SequenceOfShape*)theEdges->NativeInstance);
    return _result;
}

void Macad::Occt::BRepFeat_SplitShape::Init(Macad::Occt::TopoDS_Shape^ S)
{
    ((::BRepFeat_SplitShape*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::BRepFeat_SplitShape::SetCheckInterior(bool ToCheckInterior)
{
    ((::BRepFeat_SplitShape*)_NativeInstance)->SetCheckInterior(ToCheckInterior);
}

void Macad::Occt::BRepFeat_SplitShape::Add(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepFeat_SplitShape*)_NativeInstance)->Add(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepFeat_SplitShape::Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepFeat_SplitShape*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepFeat_SplitShape::Add(Macad::Occt::TopoDS_Compound^ Comp, Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepFeat_SplitShape*)_NativeInstance)->Add(*(::TopoDS_Compound*)Comp->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepFeat_SplitShape::Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Edge^ EOn)
{
    ((::BRepFeat_SplitShape*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Edge*)EOn->NativeInstance);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_SplitShape::DirectLeft()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_SplitShape*)_NativeInstance)->DirectLeft();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_SplitShape::Left()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_SplitShape*)_NativeInstance)->Left();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_SplitShape::Right()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_SplitShape*)_NativeInstance)->Right();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

void Macad::Occt::BRepFeat_SplitShape::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::BRepFeat_SplitShape*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepFeat_SplitShape::Build()
{
    ((::BRepFeat_SplitShape*)_NativeInstance)->Build(::Message_ProgressRange());
}

bool Macad::Occt::BRepFeat_SplitShape::IsDeleted(Macad::Occt::TopoDS_Shape^ S)
{
    bool _result = ((::BRepFeat_SplitShape*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFeat_SplitShape::Modified(Macad::Occt::TopoDS_Shape^ F)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFeat_SplitShape*)_NativeInstance)->Modified(*(::TopoDS_Shape*)F->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}


