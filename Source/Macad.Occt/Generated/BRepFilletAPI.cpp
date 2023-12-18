// Generated wrapper code for package BRepFilletAPI

#include "OcctPCH.h"
#include "BRepFilletAPI.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "Message.h"
#include "TopTools.h"
#include "ChFi3d.h"
#include "GeomAbs.h"
#include "TColgp.h"
#include "Geom.h"


//---------------------------------------------------------------------
//  Class  BRepFilletAPI_LocalOperation
//---------------------------------------------------------------------

Macad::Occt::BRepFilletAPI_LocalOperation::BRepFilletAPI_LocalOperation()
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::BRepFilletAPI_LocalOperation::Add(Macad::Occt::TopoDS_Edge^ E)
{
    ((::BRepFilletAPI_LocalOperation*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRepFilletAPI_LocalOperation::ResetContour(int IC)
{
    ((::BRepFilletAPI_LocalOperation*)_NativeInstance)->ResetContour(IC);
}

int Macad::Occt::BRepFilletAPI_LocalOperation::NbContours()
{
    int _result = ((::BRepFilletAPI_LocalOperation*)_NativeInstance)->NbContours();
    return _result;
}

int Macad::Occt::BRepFilletAPI_LocalOperation::Contour(Macad::Occt::TopoDS_Edge^ E)
{
    int _result = ((::BRepFilletAPI_LocalOperation*)_NativeInstance)->Contour(*(::TopoDS_Edge*)E->NativeInstance);
    return _result;
}

int Macad::Occt::BRepFilletAPI_LocalOperation::NbEdges(int I)
{
    int _result = ((::BRepFilletAPI_LocalOperation*)_NativeInstance)->NbEdges(I);
    return _result;
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepFilletAPI_LocalOperation::Edge(int I, int J)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepFilletAPI_LocalOperation*)_NativeInstance)->Edge(I, J);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

void Macad::Occt::BRepFilletAPI_LocalOperation::Remove(Macad::Occt::TopoDS_Edge^ E)
{
    ((::BRepFilletAPI_LocalOperation*)_NativeInstance)->Remove(*(::TopoDS_Edge*)E->NativeInstance);
}

double Macad::Occt::BRepFilletAPI_LocalOperation::Length(int IC)
{
    double _result = ((::BRepFilletAPI_LocalOperation*)_NativeInstance)->Length(IC);
    return _result;
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepFilletAPI_LocalOperation::FirstVertex(int IC)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::BRepFilletAPI_LocalOperation*)_NativeInstance)->FirstVertex(IC);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepFilletAPI_LocalOperation::LastVertex(int IC)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::BRepFilletAPI_LocalOperation*)_NativeInstance)->LastVertex(IC);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

double Macad::Occt::BRepFilletAPI_LocalOperation::Abscissa(int IC, Macad::Occt::TopoDS_Vertex^ V)
{
    double _result = ((::BRepFilletAPI_LocalOperation*)_NativeInstance)->Abscissa(IC, *(::TopoDS_Vertex*)V->NativeInstance);
    return _result;
}

double Macad::Occt::BRepFilletAPI_LocalOperation::RelativeAbscissa(int IC, Macad::Occt::TopoDS_Vertex^ V)
{
    double _result = ((::BRepFilletAPI_LocalOperation*)_NativeInstance)->RelativeAbscissa(IC, *(::TopoDS_Vertex*)V->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepFilletAPI_LocalOperation::ClosedAndTangent(int IC)
{
    bool _result = ((::BRepFilletAPI_LocalOperation*)_NativeInstance)->ClosedAndTangent(IC);
    return _result;
}

bool Macad::Occt::BRepFilletAPI_LocalOperation::Closed(int IC)
{
    bool _result = ((::BRepFilletAPI_LocalOperation*)_NativeInstance)->Closed(IC);
    return _result;
}

void Macad::Occt::BRepFilletAPI_LocalOperation::Reset()
{
    ((::BRepFilletAPI_LocalOperation*)_NativeInstance)->Reset();
}

void Macad::Occt::BRepFilletAPI_LocalOperation::Simulate(int IC)
{
    ((::BRepFilletAPI_LocalOperation*)_NativeInstance)->Simulate(IC);
}

int Macad::Occt::BRepFilletAPI_LocalOperation::NbSurf(int IC)
{
    int _result = ((::BRepFilletAPI_LocalOperation*)_NativeInstance)->NbSurf(IC);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepFilletAPI_MakeChamfer
//---------------------------------------------------------------------

Macad::Occt::BRepFilletAPI_MakeChamfer::BRepFilletAPI_MakeChamfer(Macad::Occt::TopoDS_Shape^ S)
    : Macad::Occt::BRepFilletAPI_LocalOperation(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFilletAPI_MakeChamfer(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::BRepFilletAPI_MakeChamfer::Add(Macad::Occt::TopoDS_Edge^ E)
{
    ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRepFilletAPI_MakeChamfer::Add(double Dis, Macad::Occt::TopoDS_Edge^ E)
{
    ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->Add(Dis, *(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRepFilletAPI_MakeChamfer::SetDist(double Dis, int IC, Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->SetDist(Dis, IC, *(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepFilletAPI_MakeChamfer::GetDist(int IC, double% Dis)
{
    pin_ptr<double> pp_Dis = &Dis;
    ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->GetDist(IC, *(double*)pp_Dis);
}

void Macad::Occt::BRepFilletAPI_MakeChamfer::Add(double Dis1, double Dis2, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->Add(Dis1, Dis2, *(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepFilletAPI_MakeChamfer::SetDists(double Dis1, double Dis2, int IC, Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->SetDists(Dis1, Dis2, IC, *(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepFilletAPI_MakeChamfer::Dists(int IC, double% Dis1, double% Dis2)
{
    pin_ptr<double> pp_Dis1 = &Dis1;
    pin_ptr<double> pp_Dis2 = &Dis2;
    ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->Dists(IC, *(double*)pp_Dis1, *(double*)pp_Dis2);
}

void Macad::Occt::BRepFilletAPI_MakeChamfer::AddDA(double Dis, double Angle, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->AddDA(Dis, Angle, *(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepFilletAPI_MakeChamfer::SetDistAngle(double Dis, double Angle, int IC, Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->SetDistAngle(Dis, Angle, IC, *(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepFilletAPI_MakeChamfer::GetDistAngle(int IC, double% Dis, double% Angle)
{
    pin_ptr<double> pp_Dis = &Dis;
    pin_ptr<double> pp_Angle = &Angle;
    ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->GetDistAngle(IC, *(double*)pp_Dis, *(double*)pp_Angle);
}

bool Macad::Occt::BRepFilletAPI_MakeChamfer::IsSymetric(int IC)
{
    bool _result = ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->IsSymetric(IC);
    return _result;
}

bool Macad::Occt::BRepFilletAPI_MakeChamfer::IsTwoDistances(int IC)
{
    bool _result = ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->IsTwoDistances(IC);
    return _result;
}

bool Macad::Occt::BRepFilletAPI_MakeChamfer::IsDistanceAngle(int IC)
{
    bool _result = ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->IsDistanceAngle(IC);
    return _result;
}

void Macad::Occt::BRepFilletAPI_MakeChamfer::ResetContour(int IC)
{
    ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->ResetContour(IC);
}

int Macad::Occt::BRepFilletAPI_MakeChamfer::NbContours()
{
    int _result = ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->NbContours();
    return _result;
}

int Macad::Occt::BRepFilletAPI_MakeChamfer::Contour(Macad::Occt::TopoDS_Edge^ E)
{
    int _result = ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->Contour(*(::TopoDS_Edge*)E->NativeInstance);
    return _result;
}

int Macad::Occt::BRepFilletAPI_MakeChamfer::NbEdges(int I)
{
    int _result = ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->NbEdges(I);
    return _result;
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepFilletAPI_MakeChamfer::Edge(int I, int J)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->Edge(I, J);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

void Macad::Occt::BRepFilletAPI_MakeChamfer::Remove(Macad::Occt::TopoDS_Edge^ E)
{
    ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->Remove(*(::TopoDS_Edge*)E->NativeInstance);
}

double Macad::Occt::BRepFilletAPI_MakeChamfer::Length(int IC)
{
    double _result = ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->Length(IC);
    return _result;
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepFilletAPI_MakeChamfer::FirstVertex(int IC)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->FirstVertex(IC);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepFilletAPI_MakeChamfer::LastVertex(int IC)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->LastVertex(IC);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

double Macad::Occt::BRepFilletAPI_MakeChamfer::Abscissa(int IC, Macad::Occt::TopoDS_Vertex^ V)
{
    double _result = ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->Abscissa(IC, *(::TopoDS_Vertex*)V->NativeInstance);
    return _result;
}

double Macad::Occt::BRepFilletAPI_MakeChamfer::RelativeAbscissa(int IC, Macad::Occt::TopoDS_Vertex^ V)
{
    double _result = ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->RelativeAbscissa(IC, *(::TopoDS_Vertex*)V->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepFilletAPI_MakeChamfer::ClosedAndTangent(int IC)
{
    bool _result = ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->ClosedAndTangent(IC);
    return _result;
}

bool Macad::Occt::BRepFilletAPI_MakeChamfer::Closed(int IC)
{
    bool _result = ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->Closed(IC);
    return _result;
}

void Macad::Occt::BRepFilletAPI_MakeChamfer::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepFilletAPI_MakeChamfer::Build()
{
    ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->Build(::Message_ProgressRange());
}

void Macad::Occt::BRepFilletAPI_MakeChamfer::Reset()
{
    ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->Reset();
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFilletAPI_MakeChamfer::Generated(Macad::Occt::TopoDS_Shape^ EorV)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->Generated(*(::TopoDS_Shape*)EorV->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFilletAPI_MakeChamfer::Modified(Macad::Occt::TopoDS_Shape^ F)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->Modified(*(::TopoDS_Shape*)F->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

bool Macad::Occt::BRepFilletAPI_MakeChamfer::IsDeleted(Macad::Occt::TopoDS_Shape^ F)
{
    bool _result = ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)F->NativeInstance);
    return _result;
}

void Macad::Occt::BRepFilletAPI_MakeChamfer::Simulate(int IC)
{
    ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->Simulate(IC);
}

int Macad::Occt::BRepFilletAPI_MakeChamfer::NbSurf(int IC)
{
    int _result = ((::BRepFilletAPI_MakeChamfer*)_NativeInstance)->NbSurf(IC);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepFilletAPI_MakeFillet
//---------------------------------------------------------------------

Macad::Occt::BRepFilletAPI_MakeFillet::BRepFilletAPI_MakeFillet(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::ChFi3d_FilletShape FShape)
    : Macad::Occt::BRepFilletAPI_LocalOperation(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFilletAPI_MakeFillet(*(::TopoDS_Shape*)S->NativeInstance, (::ChFi3d_FilletShape)FShape);
}

Macad::Occt::BRepFilletAPI_MakeFillet::BRepFilletAPI_MakeFillet(Macad::Occt::TopoDS_Shape^ S)
    : Macad::Occt::BRepFilletAPI_LocalOperation(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFilletAPI_MakeFillet(*(::TopoDS_Shape*)S->NativeInstance, ChFi3d_Rational);
}

void Macad::Occt::BRepFilletAPI_MakeFillet::SetParams(double Tang, double Tesp, double T2d, double TApp3d, double TolApp2d, double Fleche)
{
    ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->SetParams(Tang, Tesp, T2d, TApp3d, TolApp2d, Fleche);
}

void Macad::Occt::BRepFilletAPI_MakeFillet::SetContinuity(Macad::Occt::GeomAbs_Shape InternalContinuity, double AngularTolerance)
{
    ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->SetContinuity((::GeomAbs_Shape)InternalContinuity, AngularTolerance);
}

void Macad::Occt::BRepFilletAPI_MakeFillet::Add(Macad::Occt::TopoDS_Edge^ E)
{
    ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRepFilletAPI_MakeFillet::Add(double Radius, Macad::Occt::TopoDS_Edge^ E)
{
    ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->Add(Radius, *(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRepFilletAPI_MakeFillet::Add(double R1, double R2, Macad::Occt::TopoDS_Edge^ E)
{
    ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->Add(R1, R2, *(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRepFilletAPI_MakeFillet::Add(Macad::Occt::TColgp_Array1OfPnt2d^ UandR, Macad::Occt::TopoDS_Edge^ E)
{
    ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->Add(*(::TColgp_Array1OfPnt2d*)UandR->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRepFilletAPI_MakeFillet::SetRadius(double Radius, int IC, int IinC)
{
    ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->SetRadius(Radius, IC, IinC);
}

void Macad::Occt::BRepFilletAPI_MakeFillet::SetRadius(double R1, double R2, int IC, int IinC)
{
    ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->SetRadius(R1, R2, IC, IinC);
}

void Macad::Occt::BRepFilletAPI_MakeFillet::SetRadius(Macad::Occt::TColgp_Array1OfPnt2d^ UandR, int IC, int IinC)
{
    ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->SetRadius(*(::TColgp_Array1OfPnt2d*)UandR->NativeInstance, IC, IinC);
}

void Macad::Occt::BRepFilletAPI_MakeFillet::ResetContour(int IC)
{
    ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->ResetContour(IC);
}

bool Macad::Occt::BRepFilletAPI_MakeFillet::IsConstant(int IC)
{
    bool _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->IsConstant(IC);
    return _result;
}

double Macad::Occt::BRepFilletAPI_MakeFillet::Radius(int IC)
{
    double _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->Radius(IC);
    return _result;
}

bool Macad::Occt::BRepFilletAPI_MakeFillet::IsConstant(int IC, Macad::Occt::TopoDS_Edge^ E)
{
    bool _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->IsConstant(IC, *(::TopoDS_Edge*)E->NativeInstance);
    return _result;
}

double Macad::Occt::BRepFilletAPI_MakeFillet::Radius(int IC, Macad::Occt::TopoDS_Edge^ E)
{
    double _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->Radius(IC, *(::TopoDS_Edge*)E->NativeInstance);
    return _result;
}

void Macad::Occt::BRepFilletAPI_MakeFillet::SetRadius(double Radius, int IC, Macad::Occt::TopoDS_Edge^ E)
{
    ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->SetRadius(Radius, IC, *(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRepFilletAPI_MakeFillet::SetRadius(double Radius, int IC, Macad::Occt::TopoDS_Vertex^ V)
{
    ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->SetRadius(Radius, IC, *(::TopoDS_Vertex*)V->NativeInstance);
}

bool Macad::Occt::BRepFilletAPI_MakeFillet::GetBounds(int IC, Macad::Occt::TopoDS_Edge^ E, double% F, double% L)
{
    pin_ptr<double> pp_F = &F;
    pin_ptr<double> pp_L = &L;
    bool _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->GetBounds(IC, *(::TopoDS_Edge*)E->NativeInstance, *(double*)pp_F, *(double*)pp_L);
    return _result;
}

void Macad::Occt::BRepFilletAPI_MakeFillet::SetFilletShape(Macad::Occt::ChFi3d_FilletShape FShape)
{
    ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->SetFilletShape((::ChFi3d_FilletShape)FShape);
}

Macad::Occt::ChFi3d_FilletShape Macad::Occt::BRepFilletAPI_MakeFillet::GetFilletShape()
{
    ::ChFi3d_FilletShape _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->GetFilletShape();
    return (Macad::Occt::ChFi3d_FilletShape)_result;
}

int Macad::Occt::BRepFilletAPI_MakeFillet::NbContours()
{
    int _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->NbContours();
    return _result;
}

int Macad::Occt::BRepFilletAPI_MakeFillet::Contour(Macad::Occt::TopoDS_Edge^ E)
{
    int _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->Contour(*(::TopoDS_Edge*)E->NativeInstance);
    return _result;
}

int Macad::Occt::BRepFilletAPI_MakeFillet::NbEdges(int I)
{
    int _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->NbEdges(I);
    return _result;
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepFilletAPI_MakeFillet::Edge(int I, int J)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepFilletAPI_MakeFillet*)_NativeInstance)->Edge(I, J);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

void Macad::Occt::BRepFilletAPI_MakeFillet::Remove(Macad::Occt::TopoDS_Edge^ E)
{
    ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->Remove(*(::TopoDS_Edge*)E->NativeInstance);
}

double Macad::Occt::BRepFilletAPI_MakeFillet::Length(int IC)
{
    double _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->Length(IC);
    return _result;
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepFilletAPI_MakeFillet::FirstVertex(int IC)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->FirstVertex(IC);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepFilletAPI_MakeFillet::LastVertex(int IC)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->LastVertex(IC);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

double Macad::Occt::BRepFilletAPI_MakeFillet::Abscissa(int IC, Macad::Occt::TopoDS_Vertex^ V)
{
    double _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->Abscissa(IC, *(::TopoDS_Vertex*)V->NativeInstance);
    return _result;
}

double Macad::Occt::BRepFilletAPI_MakeFillet::RelativeAbscissa(int IC, Macad::Occt::TopoDS_Vertex^ V)
{
    double _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->RelativeAbscissa(IC, *(::TopoDS_Vertex*)V->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepFilletAPI_MakeFillet::ClosedAndTangent(int IC)
{
    bool _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->ClosedAndTangent(IC);
    return _result;
}

bool Macad::Occt::BRepFilletAPI_MakeFillet::Closed(int IC)
{
    bool _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->Closed(IC);
    return _result;
}

void Macad::Occt::BRepFilletAPI_MakeFillet::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepFilletAPI_MakeFillet::Build()
{
    ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->Build(::Message_ProgressRange());
}

void Macad::Occt::BRepFilletAPI_MakeFillet::Reset()
{
    ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->Reset();
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFilletAPI_MakeFillet::Generated(Macad::Occt::TopoDS_Shape^ EorV)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFilletAPI_MakeFillet*)_NativeInstance)->Generated(*(::TopoDS_Shape*)EorV->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFilletAPI_MakeFillet::Modified(Macad::Occt::TopoDS_Shape^ F)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFilletAPI_MakeFillet*)_NativeInstance)->Modified(*(::TopoDS_Shape*)F->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

bool Macad::Occt::BRepFilletAPI_MakeFillet::IsDeleted(Macad::Occt::TopoDS_Shape^ F)
{
    bool _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)F->NativeInstance);
    return _result;
}

int Macad::Occt::BRepFilletAPI_MakeFillet::NbSurfaces()
{
    int _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->NbSurfaces();
    return _result;
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFilletAPI_MakeFillet::NewFaces(int I)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFilletAPI_MakeFillet*)_NativeInstance)->NewFaces(I);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

void Macad::Occt::BRepFilletAPI_MakeFillet::Simulate(int IC)
{
    ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->Simulate(IC);
}

int Macad::Occt::BRepFilletAPI_MakeFillet::NbSurf(int IC)
{
    int _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->NbSurf(IC);
    return _result;
}

int Macad::Occt::BRepFilletAPI_MakeFillet::NbFaultyContours()
{
    int _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->NbFaultyContours();
    return _result;
}

int Macad::Occt::BRepFilletAPI_MakeFillet::FaultyContour(int I)
{
    int _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->FaultyContour(I);
    return _result;
}

int Macad::Occt::BRepFilletAPI_MakeFillet::NbComputedSurfaces(int IC)
{
    int _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->NbComputedSurfaces(IC);
    return _result;
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRepFilletAPI_MakeFillet::ComputedSurface(int IC, int IS)
{
    Handle(::Geom_Surface) _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->ComputedSurface(IC, IS);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

int Macad::Occt::BRepFilletAPI_MakeFillet::NbFaultyVertices()
{
    int _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->NbFaultyVertices();
    return _result;
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepFilletAPI_MakeFillet::FaultyVertex(int IV)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->FaultyVertex(IV);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

bool Macad::Occt::BRepFilletAPI_MakeFillet::HasResult()
{
    bool _result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->HasResult();
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFilletAPI_MakeFillet::BadShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepFilletAPI_MakeFillet*)_NativeInstance)->BadShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepFilletAPI_MakeFillet2d
//---------------------------------------------------------------------

Macad::Occt::BRepFilletAPI_MakeFillet2d::BRepFilletAPI_MakeFillet2d()
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFilletAPI_MakeFillet2d();
}

Macad::Occt::BRepFilletAPI_MakeFillet2d::BRepFilletAPI_MakeFillet2d(Macad::Occt::TopoDS_Face^ F)
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFilletAPI_MakeFillet2d(*(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepFilletAPI_MakeFillet2d::Init(Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->Init(*(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepFilletAPI_MakeFillet2d::Init(Macad::Occt::TopoDS_Face^ RefFace, Macad::Occt::TopoDS_Face^ ModFace)
{
    ((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->Init(*(::TopoDS_Face*)RefFace->NativeInstance, *(::TopoDS_Face*)ModFace->NativeInstance);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepFilletAPI_MakeFillet2d::AddFillet(Macad::Occt::TopoDS_Vertex^ V, double Radius)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = ((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->AddFillet(*(::TopoDS_Vertex*)V->NativeInstance, Radius);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepFilletAPI_MakeFillet2d::ModifyFillet(Macad::Occt::TopoDS_Edge^ Fillet, double Radius)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = ((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->ModifyFillet(*(::TopoDS_Edge*)Fillet->NativeInstance, Radius);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepFilletAPI_MakeFillet2d::RemoveFillet(Macad::Occt::TopoDS_Edge^ Fillet)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->RemoveFillet(*(::TopoDS_Edge*)Fillet->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepFilletAPI_MakeFillet2d::AddChamfer(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double D1, double D2)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = ((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->AddChamfer(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, D1, D2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepFilletAPI_MakeFillet2d::AddChamfer(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Vertex^ V, double D, double Ang)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = ((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->AddChamfer(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Vertex*)V->NativeInstance, D, Ang);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepFilletAPI_MakeFillet2d::ModifyChamfer(Macad::Occt::TopoDS_Edge^ Chamfer, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double D1, double D2)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = ((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->ModifyChamfer(*(::TopoDS_Edge*)Chamfer->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, D1, D2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepFilletAPI_MakeFillet2d::ModifyChamfer(Macad::Occt::TopoDS_Edge^ Chamfer, Macad::Occt::TopoDS_Edge^ E, double D, double Ang)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = ((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->ModifyChamfer(*(::TopoDS_Edge*)Chamfer->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, D, Ang);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepFilletAPI_MakeFillet2d::RemoveChamfer(Macad::Occt::TopoDS_Edge^ Chamfer)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->RemoveChamfer(*(::TopoDS_Edge*)Chamfer->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

bool Macad::Occt::BRepFilletAPI_MakeFillet2d::IsModified(Macad::Occt::TopoDS_Edge^ E)
{
    bool _result = ((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->IsModified(*(::TopoDS_Edge*)E->NativeInstance);
    return _result;
}

Macad::Occt::TopTools_SequenceOfShape^ Macad::Occt::BRepFilletAPI_MakeFillet2d::FilletEdges()
{
    ::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
    *_result = (::TopTools_SequenceOfShape)((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->FilletEdges();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_SequenceOfShape(_result);
}

int Macad::Occt::BRepFilletAPI_MakeFillet2d::NbFillet()
{
    int _result = ((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->NbFillet();
    return _result;
}

Macad::Occt::TopTools_SequenceOfShape^ Macad::Occt::BRepFilletAPI_MakeFillet2d::ChamferEdges()
{
    ::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
    *_result = (::TopTools_SequenceOfShape)((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->ChamferEdges();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_SequenceOfShape(_result);
}

int Macad::Occt::BRepFilletAPI_MakeFillet2d::NbChamfer()
{
    int _result = ((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->NbChamfer();
    return _result;
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFilletAPI_MakeFillet2d::Modified(Macad::Occt::TopoDS_Shape^ S)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->Modified(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

int Macad::Occt::BRepFilletAPI_MakeFillet2d::NbCurves()
{
    int _result = ((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->NbCurves();
    return _result;
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFilletAPI_MakeFillet2d::NewEdges(int I)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->NewEdges(I);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

bool Macad::Occt::BRepFilletAPI_MakeFillet2d::HasDescendant(Macad::Occt::TopoDS_Edge^ E)
{
    bool _result = ((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->HasDescendant(*(::TopoDS_Edge*)E->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepFilletAPI_MakeFillet2d::DescendantEdge(Macad::Occt::TopoDS_Edge^ E)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->DescendantEdge(*(::TopoDS_Edge*)E->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepFilletAPI_MakeFillet2d::BasisEdge(Macad::Occt::TopoDS_Edge^ E)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->BasisEdge(*(::TopoDS_Edge*)E->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

void Macad::Occt::BRepFilletAPI_MakeFillet2d::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepFilletAPI_MakeFillet2d::Build()
{
    ((::BRepFilletAPI_MakeFillet2d*)_NativeInstance)->Build(::Message_ProgressRange());
}


