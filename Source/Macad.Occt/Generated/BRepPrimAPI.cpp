// Generated wrapper code for package BRepPrimAPI

#include "OcctPCH.h"
#include "BRepPrimAPI.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "Message.h"
#include "TopoDS.h"
#include "BRepOffsetAPI.h"
#include "TopTools.h"
#include "Geom.h"


//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeBox
//---------------------------------------------------------------------

Macad::Occt::BRepPrimAPI_MakeBox::BRepPrimAPI_MakeBox()
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeBox();
}

Macad::Occt::BRepPrimAPI_MakeBox::BRepPrimAPI_MakeBox(double dx, double dy, double dz)
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeBox(dx, dy, dz);
}

Macad::Occt::BRepPrimAPI_MakeBox::BRepPrimAPI_MakeBox(Macad::Occt::Pnt P, double dx, double dy, double dz)
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::BRepPrimAPI_MakeBox(*(gp_Pnt*)pp_P, dx, dy, dz);
}

Macad::Occt::BRepPrimAPI_MakeBox::BRepPrimAPI_MakeBox(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepPrimAPI_MakeBox(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::BRepPrimAPI_MakeBox::BRepPrimAPI_MakeBox(Macad::Occt::Ax2 Axes, double dx, double dy, double dz)
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeBox(*(gp_Ax2*)pp_Axes, dx, dy, dz);
}

void Macad::Occt::BRepPrimAPI_MakeBox::Init(double theDX, double theDY, double theDZ)
{
    ((::BRepPrimAPI_MakeBox*)_NativeInstance)->Init(theDX, theDY, theDZ);
}

void Macad::Occt::BRepPrimAPI_MakeBox::Init(Macad::Occt::Pnt thePnt, double theDX, double theDY, double theDZ)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    ((::BRepPrimAPI_MakeBox*)_NativeInstance)->Init(*(gp_Pnt*)pp_thePnt, theDX, theDY, theDZ);
}

void Macad::Occt::BRepPrimAPI_MakeBox::Init(Macad::Occt::Pnt thePnt1, Macad::Occt::Pnt thePnt2)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt1 = &thePnt1;
    pin_ptr<Macad::Occt::Pnt> pp_thePnt2 = &thePnt2;
    ((::BRepPrimAPI_MakeBox*)_NativeInstance)->Init(*(gp_Pnt*)pp_thePnt1, *(gp_Pnt*)pp_thePnt2);
}

void Macad::Occt::BRepPrimAPI_MakeBox::Init(Macad::Occt::Ax2 theAxes, double theDX, double theDY, double theDZ)
{
    pin_ptr<Macad::Occt::Ax2> pp_theAxes = &theAxes;
    ((::BRepPrimAPI_MakeBox*)_NativeInstance)->Init(*(gp_Ax2*)pp_theAxes, theDX, theDY, theDZ);
}

void Macad::Occt::BRepPrimAPI_MakeBox::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::BRepPrimAPI_MakeBox*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepPrimAPI_MakeBox::Build()
{
    ((::BRepPrimAPI_MakeBox*)_NativeInstance)->Build(::Message_ProgressRange());
}

Macad::Occt::TopoDS_Shell^ Macad::Occt::BRepPrimAPI_MakeBox::Shell()
{
    ::TopoDS_Shell* _result = new ::TopoDS_Shell();
    *_result = (::TopoDS_Shell)((::BRepPrimAPI_MakeBox*)_NativeInstance)->Shell();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shell(_result);
}

Macad::Occt::TopoDS_Solid^ Macad::Occt::BRepPrimAPI_MakeBox::Solid()
{
    ::TopoDS_Solid* _result = new ::TopoDS_Solid();
    *_result = (::TopoDS_Solid)((::BRepPrimAPI_MakeBox*)_NativeInstance)->Solid();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Solid(_result);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepPrimAPI_MakeBox::BottomFace()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepPrimAPI_MakeBox*)_NativeInstance)->BottomFace();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepPrimAPI_MakeBox::BackFace()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepPrimAPI_MakeBox*)_NativeInstance)->BackFace();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepPrimAPI_MakeBox::FrontFace()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepPrimAPI_MakeBox*)_NativeInstance)->FrontFace();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepPrimAPI_MakeBox::LeftFace()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepPrimAPI_MakeBox*)_NativeInstance)->LeftFace();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepPrimAPI_MakeBox::RightFace()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepPrimAPI_MakeBox*)_NativeInstance)->RightFace();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepPrimAPI_MakeBox::TopFace()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepPrimAPI_MakeBox*)_NativeInstance)->TopFace();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeOneAxis
//---------------------------------------------------------------------

Macad::Occt::BRepPrimAPI_MakeOneAxis::BRepPrimAPI_MakeOneAxis()
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

System::IntPtr Macad::Occt::BRepPrimAPI_MakeOneAxis::OneAxis()
{
    void* _result = ((::BRepPrimAPI_MakeOneAxis*)_NativeInstance)->OneAxis();
    return System::IntPtr(_result);
}

void Macad::Occt::BRepPrimAPI_MakeOneAxis::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::BRepPrimAPI_MakeOneAxis*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepPrimAPI_MakeOneAxis::Build()
{
    ((::BRepPrimAPI_MakeOneAxis*)_NativeInstance)->Build(::Message_ProgressRange());
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepPrimAPI_MakeOneAxis::Face()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepPrimAPI_MakeOneAxis*)_NativeInstance)->Face();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::TopoDS_Shell^ Macad::Occt::BRepPrimAPI_MakeOneAxis::Shell()
{
    ::TopoDS_Shell* _result = new ::TopoDS_Shell();
    *_result = (::TopoDS_Shell)((::BRepPrimAPI_MakeOneAxis*)_NativeInstance)->Shell();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shell(_result);
}

Macad::Occt::TopoDS_Solid^ Macad::Occt::BRepPrimAPI_MakeOneAxis::Solid()
{
    ::TopoDS_Solid* _result = new ::TopoDS_Solid();
    *_result = (::TopoDS_Solid)((::BRepPrimAPI_MakeOneAxis*)_NativeInstance)->Solid();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Solid(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeCone
//---------------------------------------------------------------------

Macad::Occt::BRepPrimAPI_MakeCone::BRepPrimAPI_MakeCone(double R1, double R2, double H)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeCone(R1, R2, H);
}

Macad::Occt::BRepPrimAPI_MakeCone::BRepPrimAPI_MakeCone(double R1, double R2, double H, double angle)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeCone(R1, R2, H, angle);
}

Macad::Occt::BRepPrimAPI_MakeCone::BRepPrimAPI_MakeCone(Macad::Occt::Ax2 Axes, double R1, double R2, double H)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeCone(*(gp_Ax2*)pp_Axes, R1, R2, H);
}

Macad::Occt::BRepPrimAPI_MakeCone::BRepPrimAPI_MakeCone(Macad::Occt::Ax2 Axes, double R1, double R2, double H, double angle)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeCone(*(gp_Ax2*)pp_Axes, R1, R2, H, angle);
}

System::IntPtr Macad::Occt::BRepPrimAPI_MakeCone::OneAxis()
{
    void* _result = ((::BRepPrimAPI_MakeCone*)_NativeInstance)->OneAxis();
    return System::IntPtr(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeCylinder
//---------------------------------------------------------------------

Macad::Occt::BRepPrimAPI_MakeCylinder::BRepPrimAPI_MakeCylinder(double R, double H)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeCylinder(R, H);
}

Macad::Occt::BRepPrimAPI_MakeCylinder::BRepPrimAPI_MakeCylinder(double R, double H, double Angle)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeCylinder(R, H, Angle);
}

Macad::Occt::BRepPrimAPI_MakeCylinder::BRepPrimAPI_MakeCylinder(Macad::Occt::Ax2 Axes, double R, double H)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeCylinder(*(gp_Ax2*)pp_Axes, R, H);
}

Macad::Occt::BRepPrimAPI_MakeCylinder::BRepPrimAPI_MakeCylinder(Macad::Occt::Ax2 Axes, double R, double H, double Angle)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeCylinder(*(gp_Ax2*)pp_Axes, R, H, Angle);
}

System::IntPtr Macad::Occt::BRepPrimAPI_MakeCylinder::OneAxis()
{
    void* _result = ((::BRepPrimAPI_MakeCylinder*)_NativeInstance)->OneAxis();
    return System::IntPtr(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeHalfSpace
//---------------------------------------------------------------------

Macad::Occt::BRepPrimAPI_MakeHalfSpace::BRepPrimAPI_MakeHalfSpace(Macad::Occt::TopoDS_Face^ Face, Macad::Occt::Pnt RefPnt)
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_RefPnt = &RefPnt;
    _NativeInstance = new ::BRepPrimAPI_MakeHalfSpace(*(::TopoDS_Face*)Face->NativeInstance, *(gp_Pnt*)pp_RefPnt);
}

Macad::Occt::BRepPrimAPI_MakeHalfSpace::BRepPrimAPI_MakeHalfSpace(Macad::Occt::TopoDS_Shell^ Shell, Macad::Occt::Pnt RefPnt)
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_RefPnt = &RefPnt;
    _NativeInstance = new ::BRepPrimAPI_MakeHalfSpace(*(::TopoDS_Shell*)Shell->NativeInstance, *(gp_Pnt*)pp_RefPnt);
}

Macad::Occt::TopoDS_Solid^ Macad::Occt::BRepPrimAPI_MakeHalfSpace::Solid()
{
    ::TopoDS_Solid* _result = new ::TopoDS_Solid();
    *_result = (::TopoDS_Solid)((::BRepPrimAPI_MakeHalfSpace*)_NativeInstance)->Solid();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Solid(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeSweep
//---------------------------------------------------------------------

Macad::Occt::BRepPrimAPI_MakeSweep::BRepPrimAPI_MakeSweep()
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepPrimAPI_MakeSweep::FirstShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakeSweep*)_NativeInstance)->FirstShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepPrimAPI_MakeSweep::LastShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakeSweep*)_NativeInstance)->LastShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakePrism
//---------------------------------------------------------------------

Macad::Occt::BRepPrimAPI_MakePrism::BRepPrimAPI_MakePrism(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Vec V, bool Copy, bool Canonize)
    : Macad::Occt::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Vec> pp_V = &V;
    _NativeInstance = new ::BRepPrimAPI_MakePrism(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Vec*)pp_V, Copy, Canonize);
}

Macad::Occt::BRepPrimAPI_MakePrism::BRepPrimAPI_MakePrism(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Vec V, bool Copy)
    : Macad::Occt::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Vec> pp_V = &V;
    _NativeInstance = new ::BRepPrimAPI_MakePrism(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Vec*)pp_V, Copy, true);
}

Macad::Occt::BRepPrimAPI_MakePrism::BRepPrimAPI_MakePrism(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Vec V)
    : Macad::Occt::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Vec> pp_V = &V;
    _NativeInstance = new ::BRepPrimAPI_MakePrism(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Vec*)pp_V, false, true);
}

Macad::Occt::BRepPrimAPI_MakePrism::BRepPrimAPI_MakePrism(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Dir D, bool Inf, bool Copy, bool Canonize)
    : Macad::Occt::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Dir> pp_D = &D;
    _NativeInstance = new ::BRepPrimAPI_MakePrism(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Dir*)pp_D, Inf, Copy, Canonize);
}

Macad::Occt::BRepPrimAPI_MakePrism::BRepPrimAPI_MakePrism(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Dir D, bool Inf, bool Copy)
    : Macad::Occt::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Dir> pp_D = &D;
    _NativeInstance = new ::BRepPrimAPI_MakePrism(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Dir*)pp_D, Inf, Copy, true);
}

Macad::Occt::BRepPrimAPI_MakePrism::BRepPrimAPI_MakePrism(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Dir D, bool Inf)
    : Macad::Occt::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Dir> pp_D = &D;
    _NativeInstance = new ::BRepPrimAPI_MakePrism(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Dir*)pp_D, Inf, false, true);
}

Macad::Occt::BRepPrimAPI_MakePrism::BRepPrimAPI_MakePrism(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Dir D)
    : Macad::Occt::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Dir> pp_D = &D;
    _NativeInstance = new ::BRepPrimAPI_MakePrism(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Dir*)pp_D, true, false, true);
}

void Macad::Occt::BRepPrimAPI_MakePrism::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::BRepPrimAPI_MakePrism*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepPrimAPI_MakePrism::Build()
{
    ((::BRepPrimAPI_MakePrism*)_NativeInstance)->Build(::Message_ProgressRange());
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepPrimAPI_MakePrism::FirstShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakePrism*)_NativeInstance)->FirstShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepPrimAPI_MakePrism::LastShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakePrism*)_NativeInstance)->LastShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepPrimAPI_MakePrism::Generated(Macad::Occt::TopoDS_Shape^ S)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepPrimAPI_MakePrism*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

bool Macad::Occt::BRepPrimAPI_MakePrism::IsDeleted(Macad::Occt::TopoDS_Shape^ S)
{
    bool _result = ((::BRepPrimAPI_MakePrism*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepPrimAPI_MakePrism::FirstShape(Macad::Occt::TopoDS_Shape^ theShape)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakePrism*)_NativeInstance)->FirstShape(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepPrimAPI_MakePrism::LastShape(Macad::Occt::TopoDS_Shape^ theShape)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakePrism*)_NativeInstance)->LastShape(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeRevol
//---------------------------------------------------------------------

Macad::Occt::BRepPrimAPI_MakeRevol::BRepPrimAPI_MakeRevol(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Ax1 A, double D, bool Copy)
    : Macad::Occt::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_A = &A;
    _NativeInstance = new ::BRepPrimAPI_MakeRevol(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Ax1*)pp_A, D, Copy);
}

Macad::Occt::BRepPrimAPI_MakeRevol::BRepPrimAPI_MakeRevol(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Ax1 A, double D)
    : Macad::Occt::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_A = &A;
    _NativeInstance = new ::BRepPrimAPI_MakeRevol(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Ax1*)pp_A, D, false);
}

Macad::Occt::BRepPrimAPI_MakeRevol::BRepPrimAPI_MakeRevol(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Ax1 A, bool Copy)
    : Macad::Occt::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_A = &A;
    _NativeInstance = new ::BRepPrimAPI_MakeRevol(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Ax1*)pp_A, Copy);
}

Macad::Occt::BRepPrimAPI_MakeRevol::BRepPrimAPI_MakeRevol(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Ax1 A)
    : Macad::Occt::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_A = &A;
    _NativeInstance = new ::BRepPrimAPI_MakeRevol(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Ax1*)pp_A, false);
}

void Macad::Occt::BRepPrimAPI_MakeRevol::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::BRepPrimAPI_MakeRevol*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepPrimAPI_MakeRevol::Build()
{
    ((::BRepPrimAPI_MakeRevol*)_NativeInstance)->Build(::Message_ProgressRange());
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepPrimAPI_MakeRevol::FirstShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakeRevol*)_NativeInstance)->FirstShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepPrimAPI_MakeRevol::LastShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakeRevol*)_NativeInstance)->LastShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepPrimAPI_MakeRevol::Generated(Macad::Occt::TopoDS_Shape^ S)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepPrimAPI_MakeRevol*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

bool Macad::Occt::BRepPrimAPI_MakeRevol::IsDeleted(Macad::Occt::TopoDS_Shape^ S)
{
    bool _result = ((::BRepPrimAPI_MakeRevol*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepPrimAPI_MakeRevol::FirstShape(Macad::Occt::TopoDS_Shape^ theShape)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakeRevol*)_NativeInstance)->FirstShape(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepPrimAPI_MakeRevol::LastShape(Macad::Occt::TopoDS_Shape^ theShape)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakeRevol*)_NativeInstance)->LastShape(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::BRepPrimAPI_MakeRevol::HasDegenerated()
{
    bool _result = ((::BRepPrimAPI_MakeRevol*)_NativeInstance)->HasDegenerated();
    return _result;
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepPrimAPI_MakeRevol::Degenerated()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepPrimAPI_MakeRevol*)_NativeInstance)->Degenerated();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeRevolution
//---------------------------------------------------------------------

Macad::Occt::BRepPrimAPI_MakeRevolution::BRepPrimAPI_MakeRevolution(Macad::Occt::Geom_Curve^ Meridian)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeRevolution(Handle(::Geom_Curve)(Meridian->NativeInstance));
}

Macad::Occt::BRepPrimAPI_MakeRevolution::BRepPrimAPI_MakeRevolution(Macad::Occt::Geom_Curve^ Meridian, double angle)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeRevolution(Handle(::Geom_Curve)(Meridian->NativeInstance), angle);
}

Macad::Occt::BRepPrimAPI_MakeRevolution::BRepPrimAPI_MakeRevolution(Macad::Occt::Geom_Curve^ Meridian, double VMin, double VMax)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeRevolution(Handle(::Geom_Curve)(Meridian->NativeInstance), VMin, VMax);
}

Macad::Occt::BRepPrimAPI_MakeRevolution::BRepPrimAPI_MakeRevolution(Macad::Occt::Geom_Curve^ Meridian, double VMin, double VMax, double angle)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeRevolution(Handle(::Geom_Curve)(Meridian->NativeInstance), VMin, VMax, angle);
}

Macad::Occt::BRepPrimAPI_MakeRevolution::BRepPrimAPI_MakeRevolution(Macad::Occt::Ax2 Axes, Macad::Occt::Geom_Curve^ Meridian)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeRevolution(*(gp_Ax2*)pp_Axes, Handle(::Geom_Curve)(Meridian->NativeInstance));
}

Macad::Occt::BRepPrimAPI_MakeRevolution::BRepPrimAPI_MakeRevolution(Macad::Occt::Ax2 Axes, Macad::Occt::Geom_Curve^ Meridian, double angle)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeRevolution(*(gp_Ax2*)pp_Axes, Handle(::Geom_Curve)(Meridian->NativeInstance), angle);
}

Macad::Occt::BRepPrimAPI_MakeRevolution::BRepPrimAPI_MakeRevolution(Macad::Occt::Ax2 Axes, Macad::Occt::Geom_Curve^ Meridian, double VMin, double VMax)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeRevolution(*(gp_Ax2*)pp_Axes, Handle(::Geom_Curve)(Meridian->NativeInstance), VMin, VMax);
}

Macad::Occt::BRepPrimAPI_MakeRevolution::BRepPrimAPI_MakeRevolution(Macad::Occt::Ax2 Axes, Macad::Occt::Geom_Curve^ Meridian, double VMin, double VMax, double angle)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeRevolution(*(gp_Ax2*)pp_Axes, Handle(::Geom_Curve)(Meridian->NativeInstance), VMin, VMax, angle);
}

System::IntPtr Macad::Occt::BRepPrimAPI_MakeRevolution::OneAxis()
{
    void* _result = ((::BRepPrimAPI_MakeRevolution*)_NativeInstance)->OneAxis();
    return System::IntPtr(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeSphere
//---------------------------------------------------------------------

Macad::Occt::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(double R)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(R);
}

Macad::Occt::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(double R, double angle)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(R, angle);
}

Macad::Occt::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(double R, double angle1, double angle2)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(R, angle1, angle2);
}

Macad::Occt::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(double R, double angle1, double angle2, double angle3)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(R, angle1, angle2, angle3);
}

Macad::Occt::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(Macad::Occt::Pnt Center, double R)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_Center = &Center;
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(*(gp_Pnt*)pp_Center, R);
}

Macad::Occt::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(Macad::Occt::Pnt Center, double R, double angle)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_Center = &Center;
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(*(gp_Pnt*)pp_Center, R, angle);
}

Macad::Occt::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(Macad::Occt::Pnt Center, double R, double angle1, double angle2)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_Center = &Center;
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(*(gp_Pnt*)pp_Center, R, angle1, angle2);
}

Macad::Occt::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(Macad::Occt::Pnt Center, double R, double angle1, double angle2, double angle3)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_Center = &Center;
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(*(gp_Pnt*)pp_Center, R, angle1, angle2, angle3);
}

Macad::Occt::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(Macad::Occt::Ax2 Axis, double R)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axis = &Axis;
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(*(gp_Ax2*)pp_Axis, R);
}

Macad::Occt::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(Macad::Occt::Ax2 Axis, double R, double angle)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axis = &Axis;
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(*(gp_Ax2*)pp_Axis, R, angle);
}

Macad::Occt::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(Macad::Occt::Ax2 Axis, double R, double angle1, double angle2)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axis = &Axis;
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(*(gp_Ax2*)pp_Axis, R, angle1, angle2);
}

Macad::Occt::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(Macad::Occt::Ax2 Axis, double R, double angle1, double angle2, double angle3)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axis = &Axis;
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(*(gp_Ax2*)pp_Axis, R, angle1, angle2, angle3);
}

System::IntPtr Macad::Occt::BRepPrimAPI_MakeSphere::OneAxis()
{
    void* _result = ((::BRepPrimAPI_MakeSphere*)_NativeInstance)->OneAxis();
    return System::IntPtr(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeTorus
//---------------------------------------------------------------------

Macad::Occt::BRepPrimAPI_MakeTorus::BRepPrimAPI_MakeTorus(double R1, double R2)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeTorus(R1, R2);
}

Macad::Occt::BRepPrimAPI_MakeTorus::BRepPrimAPI_MakeTorus(double R1, double R2, double angle)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeTorus(R1, R2, angle);
}

Macad::Occt::BRepPrimAPI_MakeTorus::BRepPrimAPI_MakeTorus(double R1, double R2, double angle1, double angle2)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeTorus(R1, R2, angle1, angle2);
}

Macad::Occt::BRepPrimAPI_MakeTorus::BRepPrimAPI_MakeTorus(double R1, double R2, double angle1, double angle2, double angle)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeTorus(R1, R2, angle1, angle2, angle);
}

Macad::Occt::BRepPrimAPI_MakeTorus::BRepPrimAPI_MakeTorus(Macad::Occt::Ax2 Axes, double R1, double R2)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeTorus(*(gp_Ax2*)pp_Axes, R1, R2);
}

Macad::Occt::BRepPrimAPI_MakeTorus::BRepPrimAPI_MakeTorus(Macad::Occt::Ax2 Axes, double R1, double R2, double angle)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeTorus(*(gp_Ax2*)pp_Axes, R1, R2, angle);
}

Macad::Occt::BRepPrimAPI_MakeTorus::BRepPrimAPI_MakeTorus(Macad::Occt::Ax2 Axes, double R1, double R2, double angle1, double angle2)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeTorus(*(gp_Ax2*)pp_Axes, R1, R2, angle1, angle2);
}

Macad::Occt::BRepPrimAPI_MakeTorus::BRepPrimAPI_MakeTorus(Macad::Occt::Ax2 Axes, double R1, double R2, double angle1, double angle2, double angle)
    : Macad::Occt::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeTorus(*(gp_Ax2*)pp_Axes, R1, R2, angle1, angle2, angle);
}

System::IntPtr Macad::Occt::BRepPrimAPI_MakeTorus::OneAxis()
{
    void* _result = ((::BRepPrimAPI_MakeTorus*)_NativeInstance)->OneAxis();
    return System::IntPtr(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeWedge
//---------------------------------------------------------------------

Macad::Occt::BRepPrimAPI_MakeWedge::BRepPrimAPI_MakeWedge(double dx, double dy, double dz, double ltx)
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeWedge(dx, dy, dz, ltx);
}

Macad::Occt::BRepPrimAPI_MakeWedge::BRepPrimAPI_MakeWedge(Macad::Occt::Ax2 Axes, double dx, double dy, double dz, double ltx)
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeWedge(*(gp_Ax2*)pp_Axes, dx, dy, dz, ltx);
}

Macad::Occt::BRepPrimAPI_MakeWedge::BRepPrimAPI_MakeWedge(double dx, double dy, double dz, double xmin, double zmin, double xmax, double zmax)
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeWedge(dx, dy, dz, xmin, zmin, xmax, zmax);
}

Macad::Occt::BRepPrimAPI_MakeWedge::BRepPrimAPI_MakeWedge(Macad::Occt::Ax2 Axes, double dx, double dy, double dz, double xmin, double zmin, double xmax, double zmax)
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeWedge(*(gp_Ax2*)pp_Axes, dx, dy, dz, xmin, zmin, xmax, zmax);
}

void Macad::Occt::BRepPrimAPI_MakeWedge::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::BRepPrimAPI_MakeWedge*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepPrimAPI_MakeWedge::Build()
{
    ((::BRepPrimAPI_MakeWedge*)_NativeInstance)->Build(::Message_ProgressRange());
}

Macad::Occt::TopoDS_Shell^ Macad::Occt::BRepPrimAPI_MakeWedge::Shell()
{
    ::TopoDS_Shell* _result = new ::TopoDS_Shell();
    *_result = (::TopoDS_Shell)((::BRepPrimAPI_MakeWedge*)_NativeInstance)->Shell();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shell(_result);
}

Macad::Occt::TopoDS_Solid^ Macad::Occt::BRepPrimAPI_MakeWedge::Solid()
{
    ::TopoDS_Solid* _result = new ::TopoDS_Solid();
    *_result = (::TopoDS_Solid)((::BRepPrimAPI_MakeWedge*)_NativeInstance)->Solid();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Solid(_result);
}


