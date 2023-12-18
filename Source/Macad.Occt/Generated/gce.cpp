// Generated wrapper code for package gce

#include "OcctPCH.h"
#include "gce.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"


//---------------------------------------------------------------------
//  Class  gce_Root
//---------------------------------------------------------------------

Macad::Occt::gce_Root::gce_Root()
    : Macad::Occt::BaseClass<::gce_Root>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_Root();
}

bool Macad::Occt::gce_Root::IsDone()
{
    bool _result = ((::gce_Root*)_NativeInstance)->IsDone();
    return _result;
}

Macad::Occt::gce_ErrorType Macad::Occt::gce_Root::Status()
{
    ::gce_ErrorType _result = ((::gce_Root*)_NativeInstance)->Status();
    return (Macad::Occt::gce_ErrorType)_result;
}



//---------------------------------------------------------------------
//  Class  gce_MakeCirc
//---------------------------------------------------------------------

Macad::Occt::gce_MakeCirc::gce_MakeCirc(Macad::Occt::Ax2 A2, double Radius)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
    _NativeInstance = new ::gce_MakeCirc(*(gp_Ax2*)pp_A2, Radius);
}

Macad::Occt::gce_MakeCirc::gce_MakeCirc(Macad::Occt::gp_Circ^ Circ, double Dist)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeCirc(*(::gp_Circ*)Circ->NativeInstance, Dist);
}

Macad::Occt::gce_MakeCirc::gce_MakeCirc(Macad::Occt::gp_Circ^ Circ, Macad::Occt::Pnt Point)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeCirc(*(::gp_Circ*)Circ->NativeInstance, *(gp_Pnt*)pp_Point);
}

Macad::Occt::gce_MakeCirc::gce_MakeCirc(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    pin_ptr<Macad::Occt::Pnt> pp_P3 = &P3;
    _NativeInstance = new ::gce_MakeCirc(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3);
}

Macad::Occt::gce_MakeCirc::gce_MakeCirc(Macad::Occt::Pnt Center, Macad::Occt::Dir Norm, double Radius)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_Center = &Center;
    pin_ptr<Macad::Occt::Dir> pp_Norm = &Norm;
    _NativeInstance = new ::gce_MakeCirc(*(gp_Pnt*)pp_Center, *(gp_Dir*)pp_Norm, Radius);
}

Macad::Occt::gce_MakeCirc::gce_MakeCirc(Macad::Occt::Pnt Center, Macad::Occt::Pln Plane, double Radius)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_Center = &Center;
    pin_ptr<Macad::Occt::Pln> pp_Plane = &Plane;
    _NativeInstance = new ::gce_MakeCirc(*(gp_Pnt*)pp_Center, *(gp_Pln*)pp_Plane, Radius);
}

Macad::Occt::gce_MakeCirc::gce_MakeCirc(Macad::Occt::Pnt Center, Macad::Occt::Pnt Ptaxis, double Radius)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_Center = &Center;
    pin_ptr<Macad::Occt::Pnt> pp_Ptaxis = &Ptaxis;
    _NativeInstance = new ::gce_MakeCirc(*(gp_Pnt*)pp_Center, *(gp_Pnt*)pp_Ptaxis, Radius);
}

Macad::Occt::gce_MakeCirc::gce_MakeCirc(Macad::Occt::Ax1 Axis, double Radius)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_Axis = &Axis;
    _NativeInstance = new ::gce_MakeCirc(*(gp_Ax1*)pp_Axis, Radius);
}

Macad::Occt::gp_Circ^ Macad::Occt::gce_MakeCirc::Value()
{
    ::gp_Circ* _result = new ::gp_Circ();
    *_result = (::gp_Circ)((::gce_MakeCirc*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::gce_MakeCirc::Operator()
{
    ::gp_Circ* _result = new ::gp_Circ();
    *_result = (::gp_Circ)((::gce_MakeCirc*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeCirc2d
//---------------------------------------------------------------------

Macad::Occt::gce_MakeCirc2d::gce_MakeCirc2d(Macad::Occt::Ax2d XAxis, double Radius, bool Sense)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_XAxis = &XAxis;
    _NativeInstance = new ::gce_MakeCirc2d(*(gp_Ax2d*)pp_XAxis, Radius, Sense);
}

Macad::Occt::gce_MakeCirc2d::gce_MakeCirc2d(Macad::Occt::Ax2d XAxis, double Radius)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_XAxis = &XAxis;
    _NativeInstance = new ::gce_MakeCirc2d(*(gp_Ax2d*)pp_XAxis, Radius, true);
}

Macad::Occt::gce_MakeCirc2d::gce_MakeCirc2d(Macad::Occt::Ax22d Axis, double Radius)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax22d> pp_Axis = &Axis;
    _NativeInstance = new ::gce_MakeCirc2d(*(gp_Ax22d*)pp_Axis, Radius);
}

Macad::Occt::gce_MakeCirc2d::gce_MakeCirc2d(Macad::Occt::gp_Circ2d^ Circ, double Dist)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeCirc2d(*(::gp_Circ2d*)Circ->NativeInstance, Dist);
}

Macad::Occt::gce_MakeCirc2d::gce_MakeCirc2d(Macad::Occt::gp_Circ2d^ Circ, Macad::Occt::Pnt2d Point)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeCirc2d(*(::gp_Circ2d*)Circ->NativeInstance, *(gp_Pnt2d*)pp_Point);
}

Macad::Occt::gce_MakeCirc2d::gce_MakeCirc2d(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, Macad::Occt::Pnt2d P3)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    pin_ptr<Macad::Occt::Pnt2d> pp_P3 = &P3;
    _NativeInstance = new ::gce_MakeCirc2d(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, *(gp_Pnt2d*)pp_P3);
}

Macad::Occt::gce_MakeCirc2d::gce_MakeCirc2d(Macad::Occt::Pnt2d Center, double Radius, bool Sense)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_Center = &Center;
    _NativeInstance = new ::gce_MakeCirc2d(*(gp_Pnt2d*)pp_Center, Radius, Sense);
}

Macad::Occt::gce_MakeCirc2d::gce_MakeCirc2d(Macad::Occt::Pnt2d Center, double Radius)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_Center = &Center;
    _NativeInstance = new ::gce_MakeCirc2d(*(gp_Pnt2d*)pp_Center, Radius, true);
}

Macad::Occt::gce_MakeCirc2d::gce_MakeCirc2d(Macad::Occt::Pnt2d Center, Macad::Occt::Pnt2d Point, bool Sense)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_Center = &Center;
    pin_ptr<Macad::Occt::Pnt2d> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeCirc2d(*(gp_Pnt2d*)pp_Center, *(gp_Pnt2d*)pp_Point, Sense);
}

Macad::Occt::gce_MakeCirc2d::gce_MakeCirc2d(Macad::Occt::Pnt2d Center, Macad::Occt::Pnt2d Point)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_Center = &Center;
    pin_ptr<Macad::Occt::Pnt2d> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeCirc2d(*(gp_Pnt2d*)pp_Center, *(gp_Pnt2d*)pp_Point, true);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::gce_MakeCirc2d::Value()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = (::gp_Circ2d)((::gce_MakeCirc2d*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::gce_MakeCirc2d::Operator()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = (::gp_Circ2d)((::gce_MakeCirc2d*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeCone
//---------------------------------------------------------------------

Macad::Occt::gce_MakeCone::gce_MakeCone(Macad::Occt::Ax2 A2, double Ang, double Radius)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
    _NativeInstance = new ::gce_MakeCone(*(gp_Ax2*)pp_A2, Ang, Radius);
}

Macad::Occt::gce_MakeCone::gce_MakeCone(Macad::Occt::gp_Cone^ Cone, Macad::Occt::Pnt Point)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeCone(*(::gp_Cone*)Cone->NativeInstance, *(gp_Pnt*)pp_Point);
}

Macad::Occt::gce_MakeCone::gce_MakeCone(Macad::Occt::gp_Cone^ Cone, double Dist)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeCone(*(::gp_Cone*)Cone->NativeInstance, Dist);
}

Macad::Occt::gce_MakeCone::gce_MakeCone(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    pin_ptr<Macad::Occt::Pnt> pp_P3 = &P3;
    pin_ptr<Macad::Occt::Pnt> pp_P4 = &P4;
    _NativeInstance = new ::gce_MakeCone(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, *(gp_Pnt*)pp_P4);
}

Macad::Occt::gce_MakeCone::gce_MakeCone(Macad::Occt::Ax1 Axis, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_Axis = &Axis;
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::gce_MakeCone(*(gp_Ax1*)pp_Axis, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::gce_MakeCone::gce_MakeCone(Macad::Occt::gp_Lin^ Axis, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::gce_MakeCone(*(::gp_Lin*)Axis->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::gce_MakeCone::gce_MakeCone(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double R1, double R2)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::gce_MakeCone(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, R1, R2);
}

Macad::Occt::gp_Cone^ Macad::Occt::gce_MakeCone::Value()
{
    ::gp_Cone* _result = new ::gp_Cone();
    *_result = (::gp_Cone)((::gce_MakeCone*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

Macad::Occt::gp_Cone^ Macad::Occt::gce_MakeCone::Operator()
{
    ::gp_Cone* _result = new ::gp_Cone();
    *_result = (::gp_Cone)((::gce_MakeCone*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeCylinder
//---------------------------------------------------------------------

Macad::Occt::gce_MakeCylinder::gce_MakeCylinder(Macad::Occt::Ax2 A2, double Radius)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
    _NativeInstance = new ::gce_MakeCylinder(*(gp_Ax2*)pp_A2, Radius);
}

Macad::Occt::gce_MakeCylinder::gce_MakeCylinder(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::Pnt Point)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeCylinder(*(::gp_Cylinder*)Cyl->NativeInstance, *(gp_Pnt*)pp_Point);
}

Macad::Occt::gce_MakeCylinder::gce_MakeCylinder(Macad::Occt::gp_Cylinder^ Cyl, double Dist)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeCylinder(*(::gp_Cylinder*)Cyl->NativeInstance, Dist);
}

Macad::Occt::gce_MakeCylinder::gce_MakeCylinder(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    pin_ptr<Macad::Occt::Pnt> pp_P3 = &P3;
    _NativeInstance = new ::gce_MakeCylinder(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3);
}

Macad::Occt::gce_MakeCylinder::gce_MakeCylinder(Macad::Occt::Ax1 Axis, double Radius)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_Axis = &Axis;
    _NativeInstance = new ::gce_MakeCylinder(*(gp_Ax1*)pp_Axis, Radius);
}

Macad::Occt::gce_MakeCylinder::gce_MakeCylinder(Macad::Occt::gp_Circ^ Circ)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeCylinder(*(::gp_Circ*)Circ->NativeInstance);
}

Macad::Occt::gp_Cylinder^ Macad::Occt::gce_MakeCylinder::Value()
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    *_result = (::gp_Cylinder)((::gce_MakeCylinder*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

Macad::Occt::gp_Cylinder^ Macad::Occt::gce_MakeCylinder::Operator()
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    *_result = (::gp_Cylinder)((::gce_MakeCylinder*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeDir
//---------------------------------------------------------------------

Macad::Occt::gce_MakeDir::gce_MakeDir(Macad::Occt::Vec V)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Vec> pp_V = &V;
    _NativeInstance = new ::gce_MakeDir(*(gp_Vec*)pp_V);
}

Macad::Occt::gce_MakeDir::gce_MakeDir(Macad::Occt::XYZ Coord)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::XYZ> pp_Coord = &Coord;
    _NativeInstance = new ::gce_MakeDir(*(gp_XYZ*)pp_Coord);
}

Macad::Occt::gce_MakeDir::gce_MakeDir(double Xv, double Yv, double Zv)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeDir(Xv, Yv, Zv);
}

Macad::Occt::gce_MakeDir::gce_MakeDir(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::gce_MakeDir(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::Dir Macad::Occt::gce_MakeDir::Value()
{
    ::gp_Dir _nativeResult = ((::gce_MakeDir*)_NativeInstance)->Value();
    return Macad::Occt::Dir(_nativeResult);
}

Macad::Occt::Dir Macad::Occt::gce_MakeDir::Operator()
{
    ::gp_Dir _nativeResult = ((::gce_MakeDir*)_NativeInstance)->Operator();
    return Macad::Occt::Dir(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeDir2d
//---------------------------------------------------------------------

Macad::Occt::gce_MakeDir2d::gce_MakeDir2d(Macad::Occt::Vec2d V)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
    _NativeInstance = new ::gce_MakeDir2d(*(gp_Vec2d*)pp_V);
}

Macad::Occt::gce_MakeDir2d::gce_MakeDir2d(Macad::Occt::XY Coord)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::XY> pp_Coord = &Coord;
    _NativeInstance = new ::gce_MakeDir2d(*(gp_XY*)pp_Coord);
}

Macad::Occt::gce_MakeDir2d::gce_MakeDir2d(double Xv, double Yv)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeDir2d(Xv, Yv);
}

Macad::Occt::gce_MakeDir2d::gce_MakeDir2d(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::gce_MakeDir2d(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::Dir2d Macad::Occt::gce_MakeDir2d::Value()
{
    ::gp_Dir2d _nativeResult = ((::gce_MakeDir2d*)_NativeInstance)->Value();
    return Macad::Occt::Dir2d(_nativeResult);
}

Macad::Occt::Dir2d Macad::Occt::gce_MakeDir2d::Operator()
{
    ::gp_Dir2d _nativeResult = ((::gce_MakeDir2d*)_NativeInstance)->Operator();
    return Macad::Occt::Dir2d(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeElips
//---------------------------------------------------------------------

Macad::Occt::gce_MakeElips::gce_MakeElips(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
    _NativeInstance = new ::gce_MakeElips(*(gp_Ax2*)pp_A2, MajorRadius, MinorRadius);
}

Macad::Occt::gce_MakeElips::gce_MakeElips(Macad::Occt::Pnt S1, Macad::Occt::Pnt S2, Macad::Occt::Pnt Center)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_S1 = &S1;
    pin_ptr<Macad::Occt::Pnt> pp_S2 = &S2;
    pin_ptr<Macad::Occt::Pnt> pp_Center = &Center;
    _NativeInstance = new ::gce_MakeElips(*(gp_Pnt*)pp_S1, *(gp_Pnt*)pp_S2, *(gp_Pnt*)pp_Center);
}

Macad::Occt::gp_Elips^ Macad::Occt::gce_MakeElips::Value()
{
    ::gp_Elips* _result = new ::gp_Elips();
    *_result = (::gp_Elips)((::gce_MakeElips*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

Macad::Occt::gp_Elips^ Macad::Occt::gce_MakeElips::Operator()
{
    ::gp_Elips* _result = new ::gp_Elips();
    *_result = (::gp_Elips)((::gce_MakeElips*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeElips2d
//---------------------------------------------------------------------

Macad::Occt::gce_MakeElips2d::gce_MakeElips2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_MajorAxis = &MajorAxis;
    _NativeInstance = new ::gce_MakeElips2d(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, Sense);
}

Macad::Occt::gce_MakeElips2d::gce_MakeElips2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_MajorAxis = &MajorAxis;
    _NativeInstance = new ::gce_MakeElips2d(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, true);
}

Macad::Occt::gce_MakeElips2d::gce_MakeElips2d(Macad::Occt::Ax22d A, double MajorRadius, double MinorRadius)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax22d> pp_A = &A;
    _NativeInstance = new ::gce_MakeElips2d(*(gp_Ax22d*)pp_A, MajorRadius, MinorRadius);
}

Macad::Occt::gce_MakeElips2d::gce_MakeElips2d(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d S2, Macad::Occt::Pnt2d Center)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_S1 = &S1;
    pin_ptr<Macad::Occt::Pnt2d> pp_S2 = &S2;
    pin_ptr<Macad::Occt::Pnt2d> pp_Center = &Center;
    _NativeInstance = new ::gce_MakeElips2d(*(gp_Pnt2d*)pp_S1, *(gp_Pnt2d*)pp_S2, *(gp_Pnt2d*)pp_Center);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::gce_MakeElips2d::Value()
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    *_result = (::gp_Elips2d)((::gce_MakeElips2d*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::gce_MakeElips2d::Operator()
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    *_result = (::gp_Elips2d)((::gce_MakeElips2d*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeHypr
//---------------------------------------------------------------------

Macad::Occt::gce_MakeHypr::gce_MakeHypr(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
    _NativeInstance = new ::gce_MakeHypr(*(gp_Ax2*)pp_A2, MajorRadius, MinorRadius);
}

Macad::Occt::gce_MakeHypr::gce_MakeHypr(Macad::Occt::Pnt S1, Macad::Occt::Pnt S2, Macad::Occt::Pnt Center)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_S1 = &S1;
    pin_ptr<Macad::Occt::Pnt> pp_S2 = &S2;
    pin_ptr<Macad::Occt::Pnt> pp_Center = &Center;
    _NativeInstance = new ::gce_MakeHypr(*(gp_Pnt*)pp_S1, *(gp_Pnt*)pp_S2, *(gp_Pnt*)pp_Center);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gce_MakeHypr::Value()
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    *_result = (::gp_Hypr)((::gce_MakeHypr*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gce_MakeHypr::Operator()
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    *_result = (::gp_Hypr)((::gce_MakeHypr*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeHypr2d
//---------------------------------------------------------------------

Macad::Occt::gce_MakeHypr2d::gce_MakeHypr2d(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d S2, Macad::Occt::Pnt2d Center)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_S1 = &S1;
    pin_ptr<Macad::Occt::Pnt2d> pp_S2 = &S2;
    pin_ptr<Macad::Occt::Pnt2d> pp_Center = &Center;
    _NativeInstance = new ::gce_MakeHypr2d(*(gp_Pnt2d*)pp_S1, *(gp_Pnt2d*)pp_S2, *(gp_Pnt2d*)pp_Center);
}

Macad::Occt::gce_MakeHypr2d::gce_MakeHypr2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_MajorAxis = &MajorAxis;
    _NativeInstance = new ::gce_MakeHypr2d(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, Sense);
}

Macad::Occt::gce_MakeHypr2d::gce_MakeHypr2d(Macad::Occt::Ax22d A, double MajorRadius, double MinorRadius)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax22d> pp_A = &A;
    _NativeInstance = new ::gce_MakeHypr2d(*(gp_Ax22d*)pp_A, MajorRadius, MinorRadius);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gce_MakeHypr2d::Value()
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = (::gp_Hypr2d)((::gce_MakeHypr2d*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gce_MakeHypr2d::Operator()
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = (::gp_Hypr2d)((::gce_MakeHypr2d*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeLin
//---------------------------------------------------------------------

Macad::Occt::gce_MakeLin::gce_MakeLin(Macad::Occt::Ax1 A1)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
    _NativeInstance = new ::gce_MakeLin(*(gp_Ax1*)pp_A1);
}

Macad::Occt::gce_MakeLin::gce_MakeLin(Macad::Occt::Pnt P, Macad::Occt::Dir V)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Dir> pp_V = &V;
    _NativeInstance = new ::gce_MakeLin(*(gp_Pnt*)pp_P, *(gp_Dir*)pp_V);
}

Macad::Occt::gce_MakeLin::gce_MakeLin(Macad::Occt::gp_Lin^ Lin, Macad::Occt::Pnt Point)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeLin(*(::gp_Lin*)Lin->NativeInstance, *(gp_Pnt*)pp_Point);
}

Macad::Occt::gce_MakeLin::gce_MakeLin(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::gce_MakeLin(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::gp_Lin^ Macad::Occt::gce_MakeLin::Value()
{
    ::gp_Lin* _result = new ::gp_Lin();
    *_result = (::gp_Lin)((::gce_MakeLin*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

Macad::Occt::gp_Lin^ Macad::Occt::gce_MakeLin::Operator()
{
    ::gp_Lin* _result = new ::gp_Lin();
    *_result = (::gp_Lin)((::gce_MakeLin*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeLin2d
//---------------------------------------------------------------------

Macad::Occt::gce_MakeLin2d::gce_MakeLin2d(Macad::Occt::Ax2d A)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
    _NativeInstance = new ::gce_MakeLin2d(*(gp_Ax2d*)pp_A);
}

Macad::Occt::gce_MakeLin2d::gce_MakeLin2d(Macad::Occt::Pnt2d P, Macad::Occt::Dir2d V)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    pin_ptr<Macad::Occt::Dir2d> pp_V = &V;
    _NativeInstance = new ::gce_MakeLin2d(*(gp_Pnt2d*)pp_P, *(gp_Dir2d*)pp_V);
}

Macad::Occt::gce_MakeLin2d::gce_MakeLin2d(double A, double B, double C)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeLin2d(A, B, C);
}

Macad::Occt::gce_MakeLin2d::gce_MakeLin2d(Macad::Occt::gp_Lin2d^ Lin, double Dist)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeLin2d(*(::gp_Lin2d*)Lin->NativeInstance, Dist);
}

Macad::Occt::gce_MakeLin2d::gce_MakeLin2d(Macad::Occt::gp_Lin2d^ Lin, Macad::Occt::Pnt2d Point)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeLin2d(*(::gp_Lin2d*)Lin->NativeInstance, *(gp_Pnt2d*)pp_Point);
}

Macad::Occt::gce_MakeLin2d::gce_MakeLin2d(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::gce_MakeLin2d(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gce_MakeLin2d::Value()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::gce_MakeLin2d*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gce_MakeLin2d::Operator()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::gce_MakeLin2d*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeMirror
//---------------------------------------------------------------------

Macad::Occt::gce_MakeMirror::gce_MakeMirror(Macad::Occt::Pnt Point)
    : Macad::Occt::BaseClass<::gce_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeMirror(*(gp_Pnt*)pp_Point);
}

Macad::Occt::gce_MakeMirror::gce_MakeMirror(Macad::Occt::Ax1 Axis)
    : Macad::Occt::BaseClass<::gce_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_Axis = &Axis;
    _NativeInstance = new ::gce_MakeMirror(*(gp_Ax1*)pp_Axis);
}

Macad::Occt::gce_MakeMirror::gce_MakeMirror(Macad::Occt::gp_Lin^ Line)
    : Macad::Occt::BaseClass<::gce_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeMirror(*(::gp_Lin*)Line->NativeInstance);
}

Macad::Occt::gce_MakeMirror::gce_MakeMirror(Macad::Occt::Pnt Point, Macad::Occt::Dir Direc)
    : Macad::Occt::BaseClass<::gce_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
    pin_ptr<Macad::Occt::Dir> pp_Direc = &Direc;
    _NativeInstance = new ::gce_MakeMirror(*(gp_Pnt*)pp_Point, *(gp_Dir*)pp_Direc);
}

Macad::Occt::gce_MakeMirror::gce_MakeMirror(Macad::Occt::Pln Plane)
    : Macad::Occt::BaseClass<::gce_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pln> pp_Plane = &Plane;
    _NativeInstance = new ::gce_MakeMirror(*(gp_Pln*)pp_Plane);
}

Macad::Occt::gce_MakeMirror::gce_MakeMirror(Macad::Occt::Ax2 Plane)
    : Macad::Occt::BaseClass<::gce_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_Plane = &Plane;
    _NativeInstance = new ::gce_MakeMirror(*(gp_Ax2*)pp_Plane);
}

Macad::Occt::Trsf Macad::Occt::gce_MakeMirror::Value()
{
    ::gp_Trsf _nativeResult = ((::gce_MakeMirror*)_NativeInstance)->Value();
    return Macad::Occt::Trsf(_nativeResult);
}

Macad::Occt::Trsf Macad::Occt::gce_MakeMirror::Operator()
{
    ::gp_Trsf _nativeResult = ((::gce_MakeMirror*)_NativeInstance)->Operator();
    return Macad::Occt::Trsf(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeMirror2d
//---------------------------------------------------------------------

Macad::Occt::gce_MakeMirror2d::gce_MakeMirror2d(Macad::Occt::Pnt2d Point)
    : Macad::Occt::BaseClass<::gce_MakeMirror2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeMirror2d(*(gp_Pnt2d*)pp_Point);
}

Macad::Occt::gce_MakeMirror2d::gce_MakeMirror2d(Macad::Occt::Ax2d Axis)
    : Macad::Occt::BaseClass<::gce_MakeMirror2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_Axis = &Axis;
    _NativeInstance = new ::gce_MakeMirror2d(*(gp_Ax2d*)pp_Axis);
}

Macad::Occt::gce_MakeMirror2d::gce_MakeMirror2d(Macad::Occt::gp_Lin2d^ Line)
    : Macad::Occt::BaseClass<::gce_MakeMirror2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeMirror2d(*(::gp_Lin2d*)Line->NativeInstance);
}

Macad::Occt::gce_MakeMirror2d::gce_MakeMirror2d(Macad::Occt::Pnt2d Point, Macad::Occt::Dir2d Direc)
    : Macad::Occt::BaseClass<::gce_MakeMirror2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_Point = &Point;
    pin_ptr<Macad::Occt::Dir2d> pp_Direc = &Direc;
    _NativeInstance = new ::gce_MakeMirror2d(*(gp_Pnt2d*)pp_Point, *(gp_Dir2d*)pp_Direc);
}

Macad::Occt::Trsf2d Macad::Occt::gce_MakeMirror2d::Value()
{
    ::gp_Trsf2d _nativeResult = ((::gce_MakeMirror2d*)_NativeInstance)->Value();
    return Macad::Occt::Trsf2d(_nativeResult);
}

Macad::Occt::Trsf2d Macad::Occt::gce_MakeMirror2d::Operator()
{
    ::gp_Trsf2d _nativeResult = ((::gce_MakeMirror2d*)_NativeInstance)->Operator();
    return Macad::Occt::Trsf2d(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeParab
//---------------------------------------------------------------------

Macad::Occt::gce_MakeParab::gce_MakeParab(Macad::Occt::Ax2 A2, double Focal)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
    _NativeInstance = new ::gce_MakeParab(*(gp_Ax2*)pp_A2, Focal);
}

Macad::Occt::gce_MakeParab::gce_MakeParab(Macad::Occt::Ax1 D, Macad::Occt::Pnt F)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_D = &D;
    pin_ptr<Macad::Occt::Pnt> pp_F = &F;
    _NativeInstance = new ::gce_MakeParab(*(gp_Ax1*)pp_D, *(gp_Pnt*)pp_F);
}

Macad::Occt::gp_Parab^ Macad::Occt::gce_MakeParab::Value()
{
    ::gp_Parab* _result = new ::gp_Parab();
    *_result = (::gp_Parab)((::gce_MakeParab*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

Macad::Occt::gp_Parab^ Macad::Occt::gce_MakeParab::Operator()
{
    ::gp_Parab* _result = new ::gp_Parab();
    *_result = (::gp_Parab)((::gce_MakeParab*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeParab2d
//---------------------------------------------------------------------

Macad::Occt::gce_MakeParab2d::gce_MakeParab2d(Macad::Occt::Ax2d MirrorAxis, double Focal, bool Sense)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_MirrorAxis = &MirrorAxis;
    _NativeInstance = new ::gce_MakeParab2d(*(gp_Ax2d*)pp_MirrorAxis, Focal, Sense);
}

Macad::Occt::gce_MakeParab2d::gce_MakeParab2d(Macad::Occt::Ax2d MirrorAxis, double Focal)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_MirrorAxis = &MirrorAxis;
    _NativeInstance = new ::gce_MakeParab2d(*(gp_Ax2d*)pp_MirrorAxis, Focal, true);
}

Macad::Occt::gce_MakeParab2d::gce_MakeParab2d(Macad::Occt::Ax22d A, double Focal)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax22d> pp_A = &A;
    _NativeInstance = new ::gce_MakeParab2d(*(gp_Ax22d*)pp_A, Focal);
}

Macad::Occt::gce_MakeParab2d::gce_MakeParab2d(Macad::Occt::Ax2d D, Macad::Occt::Pnt2d F, bool Sense)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_D = &D;
    pin_ptr<Macad::Occt::Pnt2d> pp_F = &F;
    _NativeInstance = new ::gce_MakeParab2d(*(gp_Ax2d*)pp_D, *(gp_Pnt2d*)pp_F, Sense);
}

Macad::Occt::gce_MakeParab2d::gce_MakeParab2d(Macad::Occt::Ax2d D, Macad::Occt::Pnt2d F)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_D = &D;
    pin_ptr<Macad::Occt::Pnt2d> pp_F = &F;
    _NativeInstance = new ::gce_MakeParab2d(*(gp_Ax2d*)pp_D, *(gp_Pnt2d*)pp_F, true);
}

Macad::Occt::gce_MakeParab2d::gce_MakeParab2d(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d Center, bool Sense)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_S1 = &S1;
    pin_ptr<Macad::Occt::Pnt2d> pp_Center = &Center;
    _NativeInstance = new ::gce_MakeParab2d(*(gp_Pnt2d*)pp_S1, *(gp_Pnt2d*)pp_Center, Sense);
}

Macad::Occt::gce_MakeParab2d::gce_MakeParab2d(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d Center)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_S1 = &S1;
    pin_ptr<Macad::Occt::Pnt2d> pp_Center = &Center;
    _NativeInstance = new ::gce_MakeParab2d(*(gp_Pnt2d*)pp_S1, *(gp_Pnt2d*)pp_Center, true);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::gce_MakeParab2d::Value()
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    *_result = (::gp_Parab2d)((::gce_MakeParab2d*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::gce_MakeParab2d::Operator()
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    *_result = (::gp_Parab2d)((::gce_MakeParab2d*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakePln
//---------------------------------------------------------------------

Macad::Occt::gce_MakePln::gce_MakePln(Macad::Occt::Ax2 A2)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
    _NativeInstance = new ::gce_MakePln(*(gp_Ax2*)pp_A2);
}

Macad::Occt::gce_MakePln::gce_MakePln(Macad::Occt::Pnt P, Macad::Occt::Dir V)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Dir> pp_V = &V;
    _NativeInstance = new ::gce_MakePln(*(gp_Pnt*)pp_P, *(gp_Dir*)pp_V);
}

Macad::Occt::gce_MakePln::gce_MakePln(double A, double B, double C, double D)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakePln(A, B, C, D);
}

Macad::Occt::gce_MakePln::gce_MakePln(Macad::Occt::Pln Pln, Macad::Occt::Pnt Point)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pln> pp_Pln = &Pln;
    pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
    _NativeInstance = new ::gce_MakePln(*(gp_Pln*)pp_Pln, *(gp_Pnt*)pp_Point);
}

Macad::Occt::gce_MakePln::gce_MakePln(Macad::Occt::Pln Pln, double Dist)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pln> pp_Pln = &Pln;
    _NativeInstance = new ::gce_MakePln(*(gp_Pln*)pp_Pln, Dist);
}

Macad::Occt::gce_MakePln::gce_MakePln(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    pin_ptr<Macad::Occt::Pnt> pp_P3 = &P3;
    _NativeInstance = new ::gce_MakePln(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3);
}

Macad::Occt::gce_MakePln::gce_MakePln(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::gce_MakePln(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::gce_MakePln::gce_MakePln(Macad::Occt::Ax1 Axis)
    : Macad::Occt::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_Axis = &Axis;
    _NativeInstance = new ::gce_MakePln(*(gp_Ax1*)pp_Axis);
}

Macad::Occt::Pln Macad::Occt::gce_MakePln::Value()
{
    ::gp_Pln _nativeResult = ((::gce_MakePln*)_NativeInstance)->Value();
    return Macad::Occt::Pln(_nativeResult);
}

Macad::Occt::Pln Macad::Occt::gce_MakePln::Operator()
{
    ::gp_Pln _nativeResult = ((::gce_MakePln*)_NativeInstance)->Operator();
    return Macad::Occt::Pln(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeRotation
//---------------------------------------------------------------------

Macad::Occt::gce_MakeRotation::gce_MakeRotation(Macad::Occt::gp_Lin^ Line, double Angle)
    : Macad::Occt::BaseClass<::gce_MakeRotation>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeRotation(*(::gp_Lin*)Line->NativeInstance, Angle);
}

Macad::Occt::gce_MakeRotation::gce_MakeRotation(Macad::Occt::Ax1 Axis, double Angle)
    : Macad::Occt::BaseClass<::gce_MakeRotation>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_Axis = &Axis;
    _NativeInstance = new ::gce_MakeRotation(*(gp_Ax1*)pp_Axis, Angle);
}

Macad::Occt::gce_MakeRotation::gce_MakeRotation(Macad::Occt::Pnt Point, Macad::Occt::Dir Direc, double Angle)
    : Macad::Occt::BaseClass<::gce_MakeRotation>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
    pin_ptr<Macad::Occt::Dir> pp_Direc = &Direc;
    _NativeInstance = new ::gce_MakeRotation(*(gp_Pnt*)pp_Point, *(gp_Dir*)pp_Direc, Angle);
}

Macad::Occt::Trsf Macad::Occt::gce_MakeRotation::Value()
{
    ::gp_Trsf _nativeResult = ((::gce_MakeRotation*)_NativeInstance)->Value();
    return Macad::Occt::Trsf(_nativeResult);
}

Macad::Occt::Trsf Macad::Occt::gce_MakeRotation::Operator()
{
    ::gp_Trsf _nativeResult = ((::gce_MakeRotation*)_NativeInstance)->Operator();
    return Macad::Occt::Trsf(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeRotation2d
//---------------------------------------------------------------------

Macad::Occt::gce_MakeRotation2d::gce_MakeRotation2d(Macad::Occt::Pnt2d Point, double Angle)
    : Macad::Occt::BaseClass<::gce_MakeRotation2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeRotation2d(*(gp_Pnt2d*)pp_Point, Angle);
}

Macad::Occt::Trsf2d Macad::Occt::gce_MakeRotation2d::Value()
{
    ::gp_Trsf2d _nativeResult = ((::gce_MakeRotation2d*)_NativeInstance)->Value();
    return Macad::Occt::Trsf2d(_nativeResult);
}

Macad::Occt::Trsf2d Macad::Occt::gce_MakeRotation2d::Operator()
{
    ::gp_Trsf2d _nativeResult = ((::gce_MakeRotation2d*)_NativeInstance)->Operator();
    return Macad::Occt::Trsf2d(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeScale
//---------------------------------------------------------------------

Macad::Occt::gce_MakeScale::gce_MakeScale(Macad::Occt::Pnt Point, double Scale)
    : Macad::Occt::BaseClass<::gce_MakeScale>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeScale(*(gp_Pnt*)pp_Point, Scale);
}

Macad::Occt::Trsf Macad::Occt::gce_MakeScale::Value()
{
    ::gp_Trsf _nativeResult = ((::gce_MakeScale*)_NativeInstance)->Value();
    return Macad::Occt::Trsf(_nativeResult);
}

Macad::Occt::Trsf Macad::Occt::gce_MakeScale::Operator()
{
    ::gp_Trsf _nativeResult = ((::gce_MakeScale*)_NativeInstance)->Operator();
    return Macad::Occt::Trsf(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeScale2d
//---------------------------------------------------------------------

Macad::Occt::gce_MakeScale2d::gce_MakeScale2d(Macad::Occt::Pnt2d Point, double Scale)
    : Macad::Occt::BaseClass<::gce_MakeScale2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeScale2d(*(gp_Pnt2d*)pp_Point, Scale);
}

Macad::Occt::Trsf2d Macad::Occt::gce_MakeScale2d::Value()
{
    ::gp_Trsf2d _nativeResult = ((::gce_MakeScale2d*)_NativeInstance)->Value();
    return Macad::Occt::Trsf2d(_nativeResult);
}

Macad::Occt::Trsf2d Macad::Occt::gce_MakeScale2d::Operator()
{
    ::gp_Trsf2d _nativeResult = ((::gce_MakeScale2d*)_NativeInstance)->Operator();
    return Macad::Occt::Trsf2d(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeTranslation
//---------------------------------------------------------------------

Macad::Occt::gce_MakeTranslation::gce_MakeTranslation(Macad::Occt::Vec Vect)
    : Macad::Occt::BaseClass<::gce_MakeTranslation>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Vec> pp_Vect = &Vect;
    _NativeInstance = new ::gce_MakeTranslation(*(gp_Vec*)pp_Vect);
}

Macad::Occt::gce_MakeTranslation::gce_MakeTranslation(Macad::Occt::Pnt Point1, Macad::Occt::Pnt Point2)
    : Macad::Occt::BaseClass<::gce_MakeTranslation>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_Point1 = &Point1;
    pin_ptr<Macad::Occt::Pnt> pp_Point2 = &Point2;
    _NativeInstance = new ::gce_MakeTranslation(*(gp_Pnt*)pp_Point1, *(gp_Pnt*)pp_Point2);
}

Macad::Occt::Trsf Macad::Occt::gce_MakeTranslation::Value()
{
    ::gp_Trsf _nativeResult = ((::gce_MakeTranslation*)_NativeInstance)->Value();
    return Macad::Occt::Trsf(_nativeResult);
}

Macad::Occt::Trsf Macad::Occt::gce_MakeTranslation::Operator()
{
    ::gp_Trsf _nativeResult = ((::gce_MakeTranslation*)_NativeInstance)->Operator();
    return Macad::Occt::Trsf(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeTranslation2d
//---------------------------------------------------------------------

Macad::Occt::gce_MakeTranslation2d::gce_MakeTranslation2d(Macad::Occt::Vec2d Vect)
    : Macad::Occt::BaseClass<::gce_MakeTranslation2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Vec2d> pp_Vect = &Vect;
    _NativeInstance = new ::gce_MakeTranslation2d(*(gp_Vec2d*)pp_Vect);
}

Macad::Occt::gce_MakeTranslation2d::gce_MakeTranslation2d(Macad::Occt::Pnt2d Point1, Macad::Occt::Pnt2d Point2)
    : Macad::Occt::BaseClass<::gce_MakeTranslation2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_Point1 = &Point1;
    pin_ptr<Macad::Occt::Pnt2d> pp_Point2 = &Point2;
    _NativeInstance = new ::gce_MakeTranslation2d(*(gp_Pnt2d*)pp_Point1, *(gp_Pnt2d*)pp_Point2);
}

Macad::Occt::Trsf2d Macad::Occt::gce_MakeTranslation2d::Value()
{
    ::gp_Trsf2d _nativeResult = ((::gce_MakeTranslation2d*)_NativeInstance)->Value();
    return Macad::Occt::Trsf2d(_nativeResult);
}

Macad::Occt::Trsf2d Macad::Occt::gce_MakeTranslation2d::Operator()
{
    ::gp_Trsf2d _nativeResult = ((::gce_MakeTranslation2d*)_NativeInstance)->Operator();
    return Macad::Occt::Trsf2d(_nativeResult);
}


