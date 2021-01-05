// Generated wrapper code for package Geom2d

#include "OcctPCH.h"
#include "Geom2d.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom2d.h"
#include "gp.h"
#include "Standard.h"
#include "GeomAbs.h"
#include "TColgp.h"
#include "TColStd.h"


//---------------------------------------------------------------------
//  Class  Geom2d_Geometry
//---------------------------------------------------------------------

Macad::Occt::Geom2d_Geometry::Geom2d_Geometry(Macad::Occt::Geom2d_Geometry^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Geom2d_Geometry::Geom2d_Geometry()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::Geom2d_Geometry::Mirror(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_Geometry*)_NativeInstance)->Mirror(*(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Geom2d_Geometry::Mirror(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	((::Geom2d_Geometry*)_NativeInstance)->Mirror(*(gp_Ax2d*)pp_A);
}

void Macad::Occt::Geom2d_Geometry::Rotate(Macad::Occt::Pnt2d P, double Ang)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_Geometry*)_NativeInstance)->Rotate(*(gp_Pnt2d*)pp_P, Ang);
}

void Macad::Occt::Geom2d_Geometry::Scale(Macad::Occt::Pnt2d P, double S)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_Geometry*)_NativeInstance)->Scale(*(gp_Pnt2d*)pp_P, S);
}

void Macad::Occt::Geom2d_Geometry::Translate(Macad::Occt::Vec2d V)
{
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	((::Geom2d_Geometry*)_NativeInstance)->Translate(*(gp_Vec2d*)pp_V);
}

void Macad::Occt::Geom2d_Geometry::Translate(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	((::Geom2d_Geometry*)_NativeInstance)->Translate(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

void Macad::Occt::Geom2d_Geometry::Transform(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::Geom2d_Geometry*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_Geometry::Mirrored(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_Geometry*)_NativeInstance)->Mirrored(*(gp_Pnt2d*)pp_P);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_Geometry::Mirrored(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_Geometry*)_NativeInstance)->Mirrored(*(gp_Ax2d*)pp_A);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_Geometry::Rotated(Macad::Occt::Pnt2d P, double Ang)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_Geometry*)_NativeInstance)->Rotated(*(gp_Pnt2d*)pp_P, Ang);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_Geometry::Scaled(Macad::Occt::Pnt2d P, double S)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_Geometry*)_NativeInstance)->Scaled(*(gp_Pnt2d*)pp_P, S);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_Geometry::Transformed(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_Geometry*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_T);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_Geometry::Translated(Macad::Occt::Vec2d V)
{
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_Geometry*)_NativeInstance)->Translated(*(gp_Vec2d*)pp_V);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_Geometry::Translated(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_Geometry*)_NativeInstance)->Translated(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_Geometry::Copy()
{
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_Geometry*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}


Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_Geometry::CreateDowncasted(::Geom2d_Geometry* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Geom2d_AxisPlacement)))
		return Macad::Occt::Geom2d_AxisPlacement::CreateDowncasted((::Geom2d_AxisPlacement*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom2d_Curve)))
		return Macad::Occt::Geom2d_Curve::CreateDowncasted((::Geom2d_Curve*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom2d_Point)))
		return Macad::Occt::Geom2d_Point::CreateDowncasted((::Geom2d_Point*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom2d_Vector)))
		return Macad::Occt::Geom2d_Vector::CreateDowncasted((::Geom2d_Vector*)instance);

	return gcnew Macad::Occt::Geom2d_Geometry( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_AxisPlacement
//---------------------------------------------------------------------

Macad::Occt::Geom2d_AxisPlacement::Geom2d_AxisPlacement(Macad::Occt::Ax2d A)
	: Macad::Occt::Geom2d_Geometry(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	NativeInstance = new ::Geom2d_AxisPlacement(*(gp_Ax2d*)pp_A);
}

Macad::Occt::Geom2d_AxisPlacement::Geom2d_AxisPlacement(Macad::Occt::Pnt2d P, Macad::Occt::Dir2d V)
	: Macad::Occt::Geom2d_Geometry(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Dir2d> pp_V = &V;
	NativeInstance = new ::Geom2d_AxisPlacement(*(gp_Pnt2d*)pp_P, *(gp_Dir2d*)pp_V);
}

Macad::Occt::Geom2d_AxisPlacement::Geom2d_AxisPlacement(Macad::Occt::Geom2d_AxisPlacement^ parameter1)
	: Macad::Occt::Geom2d_Geometry(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_AxisPlacement(*(::Geom2d_AxisPlacement*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2d_AxisPlacement::Reverse()
{
	((::Geom2d_AxisPlacement*)_NativeInstance)->Reverse();
}

Macad::Occt::Geom2d_AxisPlacement^ Macad::Occt::Geom2d_AxisPlacement::Reversed()
{
	Handle(::Geom2d_AxisPlacement) _result;
	_result = ((::Geom2d_AxisPlacement*)_NativeInstance)->Reversed();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_AxisPlacement::CreateDowncasted( _result.get());
}

void Macad::Occt::Geom2d_AxisPlacement::SetAxis(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	((::Geom2d_AxisPlacement*)_NativeInstance)->SetAxis(*(gp_Ax2d*)pp_A);
}

void Macad::Occt::Geom2d_AxisPlacement::SetDirection(Macad::Occt::Dir2d V)
{
	pin_ptr<Macad::Occt::Dir2d> pp_V = &V;
	((::Geom2d_AxisPlacement*)_NativeInstance)->SetDirection(*(gp_Dir2d*)pp_V);
}

void Macad::Occt::Geom2d_AxisPlacement::SetLocation(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_AxisPlacement*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_P);
}

double Macad::Occt::Geom2d_AxisPlacement::Angle(Macad::Occt::Geom2d_AxisPlacement^ Other)
{
	Handle(::Geom2d_AxisPlacement) h_Other = Other->NativeInstance;
	return ((::Geom2d_AxisPlacement*)_NativeInstance)->Angle(h_Other);
	Other->NativeInstance = h_Other.get();
}

Macad::Occt::Ax2d Macad::Occt::Geom2d_AxisPlacement::Ax2d()
{
	return Macad::Occt::Ax2d(((::Geom2d_AxisPlacement*)_NativeInstance)->Ax2d());
}

Macad::Occt::Dir2d Macad::Occt::Geom2d_AxisPlacement::Direction()
{
	return Macad::Occt::Dir2d(((::Geom2d_AxisPlacement*)_NativeInstance)->Direction());
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_AxisPlacement::Location()
{
	return Macad::Occt::Pnt2d(((::Geom2d_AxisPlacement*)_NativeInstance)->Location());
}

void Macad::Occt::Geom2d_AxisPlacement::Transform(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::Geom2d_AxisPlacement*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_AxisPlacement::Copy()
{
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_AxisPlacement*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}


Macad::Occt::Geom2d_AxisPlacement^ Macad::Occt::Geom2d_AxisPlacement::CreateDowncasted(::Geom2d_AxisPlacement* instance)
{
	return gcnew Macad::Occt::Geom2d_AxisPlacement( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_UndefinedDerivative
//---------------------------------------------------------------------

Macad::Occt::Geom2d_UndefinedDerivative::Geom2d_UndefinedDerivative()
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_UndefinedDerivative();
}

Macad::Occt::Geom2d_UndefinedDerivative::Geom2d_UndefinedDerivative(System::String^ theMessage)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Geom2d_UndefinedDerivative(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Geom2d_UndefinedDerivative::Geom2d_UndefinedDerivative(Macad::Occt::Geom2d_UndefinedDerivative^ parameter1)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_UndefinedDerivative(*(::Geom2d_UndefinedDerivative*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2d_UndefinedDerivative::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Geom2d_UndefinedDerivative::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Geom2d_UndefinedDerivative::Raise()
{
	::Geom2d_UndefinedDerivative::Raise("");
}

Macad::Occt::Geom2d_UndefinedDerivative^ Macad::Occt::Geom2d_UndefinedDerivative::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Geom2d_UndefinedDerivative) _result;
	_result = ::Geom2d_UndefinedDerivative::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_UndefinedDerivative::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_UndefinedDerivative^ Macad::Occt::Geom2d_UndefinedDerivative::NewInstance()
{
	Handle(::Geom2d_UndefinedDerivative) _result;
	_result = ::Geom2d_UndefinedDerivative::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_UndefinedDerivative::CreateDowncasted( _result.get());
}


Macad::Occt::Geom2d_UndefinedDerivative^ Macad::Occt::Geom2d_UndefinedDerivative::CreateDowncasted(::Geom2d_UndefinedDerivative* instance)
{
	return gcnew Macad::Occt::Geom2d_UndefinedDerivative( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_UndefinedValue
//---------------------------------------------------------------------

Macad::Occt::Geom2d_UndefinedValue::Geom2d_UndefinedValue()
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_UndefinedValue();
}

Macad::Occt::Geom2d_UndefinedValue::Geom2d_UndefinedValue(System::String^ theMessage)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Geom2d_UndefinedValue(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Geom2d_UndefinedValue::Geom2d_UndefinedValue(Macad::Occt::Geom2d_UndefinedValue^ parameter1)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_UndefinedValue(*(::Geom2d_UndefinedValue*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2d_UndefinedValue::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Geom2d_UndefinedValue::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Geom2d_UndefinedValue::Raise()
{
	::Geom2d_UndefinedValue::Raise("");
}

Macad::Occt::Geom2d_UndefinedValue^ Macad::Occt::Geom2d_UndefinedValue::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Geom2d_UndefinedValue) _result;
	_result = ::Geom2d_UndefinedValue::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_UndefinedValue::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_UndefinedValue^ Macad::Occt::Geom2d_UndefinedValue::NewInstance()
{
	Handle(::Geom2d_UndefinedValue) _result;
	_result = ::Geom2d_UndefinedValue::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_UndefinedValue::CreateDowncasted( _result.get());
}


Macad::Occt::Geom2d_UndefinedValue^ Macad::Occt::Geom2d_UndefinedValue::CreateDowncasted(::Geom2d_UndefinedValue* instance)
{
	return gcnew Macad::Occt::Geom2d_UndefinedValue( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Curve
//---------------------------------------------------------------------

Macad::Occt::Geom2d_Curve::Geom2d_Curve(Macad::Occt::Geom2d_Curve^ parameter1)
	: Macad::Occt::Geom2d_Geometry(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Geom2d_Curve::Geom2d_Curve()
	: Macad::Occt::Geom2d_Geometry(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::Geom2d_Curve::Reverse()
{
	((::Geom2d_Curve*)_NativeInstance)->Reverse();
}

double Macad::Occt::Geom2d_Curve::ReversedParameter(double U)
{
	return ((::Geom2d_Curve*)_NativeInstance)->ReversedParameter(U);
}

double Macad::Occt::Geom2d_Curve::TransformedParameter(double U, Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	return ((::Geom2d_Curve*)_NativeInstance)->TransformedParameter(U, *(gp_Trsf2d*)pp_T);
}

double Macad::Occt::Geom2d_Curve::ParametricTransformation(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	return ((::Geom2d_Curve*)_NativeInstance)->ParametricTransformation(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::Geom2d_Curve::Reversed()
{
	Handle(::Geom2d_Curve) _result;
	_result = ((::Geom2d_Curve*)_NativeInstance)->Reversed();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

double Macad::Occt::Geom2d_Curve::FirstParameter()
{
	return ((::Geom2d_Curve*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::Geom2d_Curve::LastParameter()
{
	return ((::Geom2d_Curve*)_NativeInstance)->LastParameter();
}

bool Macad::Occt::Geom2d_Curve::IsClosed()
{
	return ((::Geom2d_Curve*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::Geom2d_Curve::IsPeriodic()
{
	return ((::Geom2d_Curve*)_NativeInstance)->IsPeriodic();
}

double Macad::Occt::Geom2d_Curve::Period()
{
	return ((::Geom2d_Curve*)_NativeInstance)->Period();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Geom2d_Curve::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::Geom2d_Curve*)_NativeInstance)->Continuity();
}

bool Macad::Occt::Geom2d_Curve::IsCN(int N)
{
	return ((::Geom2d_Curve*)_NativeInstance)->IsCN(N);
}

void Macad::Occt::Geom2d_Curve::D0(double U, Macad::Occt::Pnt2d% P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_Curve*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Geom2d_Curve::D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	((::Geom2d_Curve*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::Geom2d_Curve::D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	((::Geom2d_Curve*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::Geom2d_Curve::D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	((::Geom2d_Curve*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

Macad::Occt::Vec2d Macad::Occt::Geom2d_Curve::DN(double U, int N)
{
	return Macad::Occt::Vec2d(((::Geom2d_Curve*)_NativeInstance)->DN(U, N));
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_Curve::Value(double U)
{
	return Macad::Occt::Pnt2d(((::Geom2d_Curve*)_NativeInstance)->Value(U));
}


Macad::Occt::Geom2d_Curve^ Macad::Occt::Geom2d_Curve::CreateDowncasted(::Geom2d_Curve* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Geom2d_BoundedCurve)))
		return Macad::Occt::Geom2d_BoundedCurve::CreateDowncasted((::Geom2d_BoundedCurve*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom2d_Conic)))
		return Macad::Occt::Geom2d_Conic::CreateDowncasted((::Geom2d_Conic*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom2d_Line)))
		return Macad::Occt::Geom2d_Line::CreateDowncasted((::Geom2d_Line*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom2d_OffsetCurve)))
		return Macad::Occt::Geom2d_OffsetCurve::CreateDowncasted((::Geom2d_OffsetCurve*)instance);

	return gcnew Macad::Occt::Geom2d_Curve( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_BoundedCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2d_BoundedCurve::Geom2d_BoundedCurve(Macad::Occt::Geom2d_BoundedCurve^ parameter1)
	: Macad::Occt::Geom2d_Curve(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Geom2d_BoundedCurve::Geom2d_BoundedCurve()
	: Macad::Occt::Geom2d_Curve(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_BoundedCurve::EndPoint()
{
	return Macad::Occt::Pnt2d(((::Geom2d_BoundedCurve*)_NativeInstance)->EndPoint());
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_BoundedCurve::StartPoint()
{
	return Macad::Occt::Pnt2d(((::Geom2d_BoundedCurve*)_NativeInstance)->StartPoint());
}


Macad::Occt::Geom2d_BoundedCurve^ Macad::Occt::Geom2d_BoundedCurve::CreateDowncasted(::Geom2d_BoundedCurve* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Geom2d_BezierCurve)))
		return Macad::Occt::Geom2d_BezierCurve::CreateDowncasted((::Geom2d_BezierCurve*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom2d_BSplineCurve)))
		return Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted((::Geom2d_BSplineCurve*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom2d_TrimmedCurve)))
		return Macad::Occt::Geom2d_TrimmedCurve::CreateDowncasted((::Geom2d_TrimmedCurve*)instance);

	return gcnew Macad::Occt::Geom2d_BoundedCurve( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_BezierCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2d_BezierCurve::Geom2d_BezierCurve(Macad::Occt::TColgp_Array1OfPnt2d^ CurvePoles)
	: Macad::Occt::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_BezierCurve(*(::TColgp_Array1OfPnt2d*)CurvePoles->NativeInstance);
}

Macad::Occt::Geom2d_BezierCurve::Geom2d_BezierCurve(Macad::Occt::TColgp_Array1OfPnt2d^ CurvePoles, Macad::Occt::TColStd_Array1OfReal^ PoleWeights)
	: Macad::Occt::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_BezierCurve(*(::TColgp_Array1OfPnt2d*)CurvePoles->NativeInstance, *(::TColStd_Array1OfReal*)PoleWeights->NativeInstance);
}

Macad::Occt::Geom2d_BezierCurve::Geom2d_BezierCurve(Macad::Occt::Geom2d_BezierCurve^ parameter1)
	: Macad::Occt::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_BezierCurve(*(::Geom2d_BezierCurve*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2d_BezierCurve::Increase(int Degree)
{
	((::Geom2d_BezierCurve*)_NativeInstance)->Increase(Degree);
}

void Macad::Occt::Geom2d_BezierCurve::InsertPoleAfter(int Index, Macad::Occt::Pnt2d P, double Weight)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_BezierCurve*)_NativeInstance)->InsertPoleAfter(Index, *(gp_Pnt2d*)pp_P, Weight);
}

void Macad::Occt::Geom2d_BezierCurve::InsertPoleAfter(int Index, Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_BezierCurve*)_NativeInstance)->InsertPoleAfter(Index, *(gp_Pnt2d*)pp_P, 1.);
}

void Macad::Occt::Geom2d_BezierCurve::InsertPoleBefore(int Index, Macad::Occt::Pnt2d P, double Weight)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_BezierCurve*)_NativeInstance)->InsertPoleBefore(Index, *(gp_Pnt2d*)pp_P, Weight);
}

void Macad::Occt::Geom2d_BezierCurve::InsertPoleBefore(int Index, Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_BezierCurve*)_NativeInstance)->InsertPoleBefore(Index, *(gp_Pnt2d*)pp_P, 1.);
}

void Macad::Occt::Geom2d_BezierCurve::RemovePole(int Index)
{
	((::Geom2d_BezierCurve*)_NativeInstance)->RemovePole(Index);
}

void Macad::Occt::Geom2d_BezierCurve::Reverse()
{
	((::Geom2d_BezierCurve*)_NativeInstance)->Reverse();
}

double Macad::Occt::Geom2d_BezierCurve::ReversedParameter(double U)
{
	return ((::Geom2d_BezierCurve*)_NativeInstance)->ReversedParameter(U);
}

void Macad::Occt::Geom2d_BezierCurve::Segment(double U1, double U2)
{
	((::Geom2d_BezierCurve*)_NativeInstance)->Segment(U1, U2);
}

void Macad::Occt::Geom2d_BezierCurve::SetPole(int Index, Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_BezierCurve*)_NativeInstance)->SetPole(Index, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Geom2d_BezierCurve::SetPole(int Index, Macad::Occt::Pnt2d P, double Weight)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_BezierCurve*)_NativeInstance)->SetPole(Index, *(gp_Pnt2d*)pp_P, Weight);
}

void Macad::Occt::Geom2d_BezierCurve::SetWeight(int Index, double Weight)
{
	((::Geom2d_BezierCurve*)_NativeInstance)->SetWeight(Index, Weight);
}

bool Macad::Occt::Geom2d_BezierCurve::IsClosed()
{
	return ((::Geom2d_BezierCurve*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::Geom2d_BezierCurve::IsCN(int N)
{
	return ((::Geom2d_BezierCurve*)_NativeInstance)->IsCN(N);
}

bool Macad::Occt::Geom2d_BezierCurve::IsPeriodic()
{
	return ((::Geom2d_BezierCurve*)_NativeInstance)->IsPeriodic();
}

bool Macad::Occt::Geom2d_BezierCurve::IsRational()
{
	return ((::Geom2d_BezierCurve*)_NativeInstance)->IsRational();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Geom2d_BezierCurve::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::Geom2d_BezierCurve*)_NativeInstance)->Continuity();
}

int Macad::Occt::Geom2d_BezierCurve::Degree()
{
	return ((::Geom2d_BezierCurve*)_NativeInstance)->Degree();
}

void Macad::Occt::Geom2d_BezierCurve::D0(double U, Macad::Occt::Pnt2d% P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_BezierCurve*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Geom2d_BezierCurve::D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	((::Geom2d_BezierCurve*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::Geom2d_BezierCurve::D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	((::Geom2d_BezierCurve*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::Geom2d_BezierCurve::D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	((::Geom2d_BezierCurve*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

Macad::Occt::Vec2d Macad::Occt::Geom2d_BezierCurve::DN(double U, int N)
{
	return Macad::Occt::Vec2d(((::Geom2d_BezierCurve*)_NativeInstance)->DN(U, N));
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_BezierCurve::EndPoint()
{
	return Macad::Occt::Pnt2d(((::Geom2d_BezierCurve*)_NativeInstance)->EndPoint());
}

double Macad::Occt::Geom2d_BezierCurve::FirstParameter()
{
	return ((::Geom2d_BezierCurve*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::Geom2d_BezierCurve::LastParameter()
{
	return ((::Geom2d_BezierCurve*)_NativeInstance)->LastParameter();
}

int Macad::Occt::Geom2d_BezierCurve::NbPoles()
{
	return ((::Geom2d_BezierCurve*)_NativeInstance)->NbPoles();
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_BezierCurve::Pole(int Index)
{
	return Macad::Occt::Pnt2d(((::Geom2d_BezierCurve*)_NativeInstance)->Pole(Index));
}

void Macad::Occt::Geom2d_BezierCurve::Poles(Macad::Occt::TColgp_Array1OfPnt2d^ P)
{
	((::Geom2d_BezierCurve*)_NativeInstance)->Poles(*(::TColgp_Array1OfPnt2d*)P->NativeInstance);
}

Macad::Occt::TColgp_Array1OfPnt2d^ Macad::Occt::Geom2d_BezierCurve::Poles()
{
	::TColgp_Array1OfPnt2d* _result = new ::TColgp_Array1OfPnt2d();
	*_result =  (::TColgp_Array1OfPnt2d)((::Geom2d_BezierCurve*)_NativeInstance)->Poles();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfPnt2d(_result);
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_BezierCurve::StartPoint()
{
	return Macad::Occt::Pnt2d(((::Geom2d_BezierCurve*)_NativeInstance)->StartPoint());
}

double Macad::Occt::Geom2d_BezierCurve::Weight(int Index)
{
	return ((::Geom2d_BezierCurve*)_NativeInstance)->Weight(Index);
}

void Macad::Occt::Geom2d_BezierCurve::Weights(Macad::Occt::TColStd_Array1OfReal^ W)
{
	((::Geom2d_BezierCurve*)_NativeInstance)->Weights(*(::TColStd_Array1OfReal*)W->NativeInstance);
}

Macad::Occt::TColStd_Array1OfReal^ Macad::Occt::Geom2d_BezierCurve::Weights()
{
	::TColStd_Array1OfReal* _result;
	_result = (::TColStd_Array1OfReal*)((::Geom2d_BezierCurve*)_NativeInstance)->Weights();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfReal(_result);
}

void Macad::Occt::Geom2d_BezierCurve::Transform(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::Geom2d_BezierCurve*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

int Macad::Occt::Geom2d_BezierCurve::MaxDegree()
{
	return ::Geom2d_BezierCurve::MaxDegree();
}

void Macad::Occt::Geom2d_BezierCurve::Resolution(double ToleranceUV, double% UTolerance)
{
	pin_ptr<double> pp_UTolerance = &UTolerance;
	((::Geom2d_BezierCurve*)_NativeInstance)->Resolution(ToleranceUV, *(Standard_Real*)pp_UTolerance);
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_BezierCurve::Copy()
{
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_BezierCurve*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}


Macad::Occt::Geom2d_BezierCurve^ Macad::Occt::Geom2d_BezierCurve::CreateDowncasted(::Geom2d_BezierCurve* instance)
{
	return gcnew Macad::Occt::Geom2d_BezierCurve( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_BSplineCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2d_BSplineCurve::Geom2d_BSplineCurve(Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Multiplicities, int Degree, bool Periodic)
	: Macad::Occt::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_BSplineCurve(*(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Multiplicities->NativeInstance, Degree, Periodic);
}

Macad::Occt::Geom2d_BSplineCurve::Geom2d_BSplineCurve(Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Multiplicities, int Degree)
	: Macad::Occt::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_BSplineCurve(*(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Multiplicities->NativeInstance, Degree, false);
}

Macad::Occt::Geom2d_BSplineCurve::Geom2d_BSplineCurve(Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Multiplicities, int Degree, bool Periodic)
	: Macad::Occt::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_BSplineCurve(*(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Multiplicities->NativeInstance, Degree, Periodic);
}

Macad::Occt::Geom2d_BSplineCurve::Geom2d_BSplineCurve(Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Multiplicities, int Degree)
	: Macad::Occt::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_BSplineCurve(*(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Multiplicities->NativeInstance, Degree, false);
}

Macad::Occt::Geom2d_BSplineCurve::Geom2d_BSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ parameter1)
	: Macad::Occt::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_BSplineCurve(*(::Geom2d_BSplineCurve*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2d_BSplineCurve::IncreaseDegree(int Degree)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->IncreaseDegree(Degree);
}

void Macad::Occt::Geom2d_BSplineCurve::IncreaseMultiplicity(int Index, int M)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->IncreaseMultiplicity(Index, M);
}

void Macad::Occt::Geom2d_BSplineCurve::IncreaseMultiplicity(int I1, int I2, int M)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->IncreaseMultiplicity(I1, I2, M);
}

void Macad::Occt::Geom2d_BSplineCurve::IncrementMultiplicity(int I1, int I2, int M)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->IncrementMultiplicity(I1, I2, M);
}

void Macad::Occt::Geom2d_BSplineCurve::InsertKnot(double U, int M, double ParametricTolerance)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->InsertKnot(U, M, ParametricTolerance);
}

void Macad::Occt::Geom2d_BSplineCurve::InsertKnot(double U, int M)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->InsertKnot(U, M, 0.);
}

void Macad::Occt::Geom2d_BSplineCurve::InsertKnot(double U)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->InsertKnot(U, 1, 0.);
}

void Macad::Occt::Geom2d_BSplineCurve::InsertKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double ParametricTolerance, bool Add)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->InsertKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, ParametricTolerance, Add);
}

void Macad::Occt::Geom2d_BSplineCurve::InsertKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double ParametricTolerance)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->InsertKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, ParametricTolerance, false);
}

void Macad::Occt::Geom2d_BSplineCurve::InsertKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->InsertKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, 0., false);
}

bool Macad::Occt::Geom2d_BSplineCurve::RemoveKnot(int Index, int M, double Tolerance)
{
	return ((::Geom2d_BSplineCurve*)_NativeInstance)->RemoveKnot(Index, M, Tolerance);
}

void Macad::Occt::Geom2d_BSplineCurve::InsertPoleAfter(int Index, Macad::Occt::Pnt2d P, double Weight)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_BSplineCurve*)_NativeInstance)->InsertPoleAfter(Index, *(gp_Pnt2d*)pp_P, Weight);
}

void Macad::Occt::Geom2d_BSplineCurve::InsertPoleAfter(int Index, Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_BSplineCurve*)_NativeInstance)->InsertPoleAfter(Index, *(gp_Pnt2d*)pp_P, 1.);
}

void Macad::Occt::Geom2d_BSplineCurve::InsertPoleBefore(int Index, Macad::Occt::Pnt2d P, double Weight)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_BSplineCurve*)_NativeInstance)->InsertPoleBefore(Index, *(gp_Pnt2d*)pp_P, Weight);
}

void Macad::Occt::Geom2d_BSplineCurve::InsertPoleBefore(int Index, Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_BSplineCurve*)_NativeInstance)->InsertPoleBefore(Index, *(gp_Pnt2d*)pp_P, 1.);
}

void Macad::Occt::Geom2d_BSplineCurve::RemovePole(int Index)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->RemovePole(Index);
}

void Macad::Occt::Geom2d_BSplineCurve::Reverse()
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->Reverse();
}

double Macad::Occt::Geom2d_BSplineCurve::ReversedParameter(double U)
{
	return ((::Geom2d_BSplineCurve*)_NativeInstance)->ReversedParameter(U);
}

void Macad::Occt::Geom2d_BSplineCurve::Segment(double U1, double U2, double theTolerance)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->Segment(U1, U2, theTolerance);
}

void Macad::Occt::Geom2d_BSplineCurve::Segment(double U1, double U2)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->Segment(U1, U2, ::Precision::PConfusion());
}

void Macad::Occt::Geom2d_BSplineCurve::SetKnot(int Index, double K)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->SetKnot(Index, K);
}

void Macad::Occt::Geom2d_BSplineCurve::SetKnots(Macad::Occt::TColStd_Array1OfReal^ K)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->SetKnots(*(::TColStd_Array1OfReal*)K->NativeInstance);
}

void Macad::Occt::Geom2d_BSplineCurve::SetKnot(int Index, double K, int M)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->SetKnot(Index, K, M);
}

void Macad::Occt::Geom2d_BSplineCurve::PeriodicNormalization(double% U)
{
	pin_ptr<double> pp_U = &U;
	((::Geom2d_BSplineCurve*)_NativeInstance)->PeriodicNormalization(*(Standard_Real*)pp_U);
}

void Macad::Occt::Geom2d_BSplineCurve::SetPeriodic()
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->SetPeriodic();
}

void Macad::Occt::Geom2d_BSplineCurve::SetOrigin(int Index)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->SetOrigin(Index);
}

void Macad::Occt::Geom2d_BSplineCurve::SetNotPeriodic()
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->SetNotPeriodic();
}

void Macad::Occt::Geom2d_BSplineCurve::SetPole(int Index, Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_BSplineCurve*)_NativeInstance)->SetPole(Index, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Geom2d_BSplineCurve::SetPole(int Index, Macad::Occt::Pnt2d P, double Weight)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_BSplineCurve*)_NativeInstance)->SetPole(Index, *(gp_Pnt2d*)pp_P, Weight);
}

void Macad::Occt::Geom2d_BSplineCurve::SetWeight(int Index, double Weight)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->SetWeight(Index, Weight);
}

void Macad::Occt::Geom2d_BSplineCurve::MovePoint(double U, Macad::Occt::Pnt2d P, int Index1, int Index2, int% FirstModifiedPole, int% LastModifiedPole)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<int> pp_FirstModifiedPole = &FirstModifiedPole;
	pin_ptr<int> pp_LastModifiedPole = &LastModifiedPole;
	((::Geom2d_BSplineCurve*)_NativeInstance)->MovePoint(U, *(gp_Pnt2d*)pp_P, Index1, Index2, *(Standard_Integer*)pp_FirstModifiedPole, *(Standard_Integer*)pp_LastModifiedPole);
}

void Macad::Occt::Geom2d_BSplineCurve::MovePointAndTangent(double U, Macad::Occt::Pnt2d P, Macad::Occt::Vec2d Tangent, double Tolerance, int StartingCondition, int EndingCondition, int% ErrorStatus)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_Tangent = &Tangent;
	pin_ptr<int> pp_ErrorStatus = &ErrorStatus;
	((::Geom2d_BSplineCurve*)_NativeInstance)->MovePointAndTangent(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_Tangent, Tolerance, StartingCondition, EndingCondition, *(Standard_Integer*)pp_ErrorStatus);
}

bool Macad::Occt::Geom2d_BSplineCurve::IsCN(int N)
{
	return ((::Geom2d_BSplineCurve*)_NativeInstance)->IsCN(N);
}

bool Macad::Occt::Geom2d_BSplineCurve::IsG1(double theTf, double theTl, double theAngTol)
{
	return ((::Geom2d_BSplineCurve*)_NativeInstance)->IsG1(theTf, theTl, theAngTol);
}

bool Macad::Occt::Geom2d_BSplineCurve::IsClosed()
{
	return ((::Geom2d_BSplineCurve*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::Geom2d_BSplineCurve::IsPeriodic()
{
	return ((::Geom2d_BSplineCurve*)_NativeInstance)->IsPeriodic();
}

bool Macad::Occt::Geom2d_BSplineCurve::IsRational()
{
	return ((::Geom2d_BSplineCurve*)_NativeInstance)->IsRational();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Geom2d_BSplineCurve::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::Geom2d_BSplineCurve*)_NativeInstance)->Continuity();
}

int Macad::Occt::Geom2d_BSplineCurve::Degree()
{
	return ((::Geom2d_BSplineCurve*)_NativeInstance)->Degree();
}

void Macad::Occt::Geom2d_BSplineCurve::D0(double U, Macad::Occt::Pnt2d% P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_BSplineCurve*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Geom2d_BSplineCurve::D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	((::Geom2d_BSplineCurve*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::Geom2d_BSplineCurve::D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	((::Geom2d_BSplineCurve*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::Geom2d_BSplineCurve::D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	((::Geom2d_BSplineCurve*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

Macad::Occt::Vec2d Macad::Occt::Geom2d_BSplineCurve::DN(double U, int N)
{
	return Macad::Occt::Vec2d(((::Geom2d_BSplineCurve*)_NativeInstance)->DN(U, N));
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_BSplineCurve::LocalValue(double U, int FromK1, int ToK2)
{
	return Macad::Occt::Pnt2d(((::Geom2d_BSplineCurve*)_NativeInstance)->LocalValue(U, FromK1, ToK2));
}

void Macad::Occt::Geom2d_BSplineCurve::LocalD0(double U, int FromK1, int ToK2, Macad::Occt::Pnt2d% P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_BSplineCurve*)_NativeInstance)->LocalD0(U, FromK1, ToK2, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Geom2d_BSplineCurve::LocalD1(double U, int FromK1, int ToK2, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	((::Geom2d_BSplineCurve*)_NativeInstance)->LocalD1(U, FromK1, ToK2, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::Geom2d_BSplineCurve::LocalD2(double U, int FromK1, int ToK2, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	((::Geom2d_BSplineCurve*)_NativeInstance)->LocalD2(U, FromK1, ToK2, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::Geom2d_BSplineCurve::LocalD3(double U, int FromK1, int ToK2, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	((::Geom2d_BSplineCurve*)_NativeInstance)->LocalD3(U, FromK1, ToK2, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

Macad::Occt::Vec2d Macad::Occt::Geom2d_BSplineCurve::LocalDN(double U, int FromK1, int ToK2, int N)
{
	return Macad::Occt::Vec2d(((::Geom2d_BSplineCurve*)_NativeInstance)->LocalDN(U, FromK1, ToK2, N));
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_BSplineCurve::EndPoint()
{
	return Macad::Occt::Pnt2d(((::Geom2d_BSplineCurve*)_NativeInstance)->EndPoint());
}

int Macad::Occt::Geom2d_BSplineCurve::FirstUKnotIndex()
{
	return ((::Geom2d_BSplineCurve*)_NativeInstance)->FirstUKnotIndex();
}

double Macad::Occt::Geom2d_BSplineCurve::FirstParameter()
{
	return ((::Geom2d_BSplineCurve*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::Geom2d_BSplineCurve::Knot(int Index)
{
	return ((::Geom2d_BSplineCurve*)_NativeInstance)->Knot(Index);
}

void Macad::Occt::Geom2d_BSplineCurve::Knots(Macad::Occt::TColStd_Array1OfReal^ K)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->Knots(*(::TColStd_Array1OfReal*)K->NativeInstance);
}

Macad::Occt::TColStd_Array1OfReal^ Macad::Occt::Geom2d_BSplineCurve::Knots()
{
	::TColStd_Array1OfReal* _result = new ::TColStd_Array1OfReal();
	*_result =  (::TColStd_Array1OfReal)((::Geom2d_BSplineCurve*)_NativeInstance)->Knots();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfReal(_result);
}

void Macad::Occt::Geom2d_BSplineCurve::KnotSequence(Macad::Occt::TColStd_Array1OfReal^ K)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->KnotSequence(*(::TColStd_Array1OfReal*)K->NativeInstance);
}

Macad::Occt::TColStd_Array1OfReal^ Macad::Occt::Geom2d_BSplineCurve::KnotSequence()
{
	::TColStd_Array1OfReal* _result = new ::TColStd_Array1OfReal();
	*_result =  (::TColStd_Array1OfReal)((::Geom2d_BSplineCurve*)_NativeInstance)->KnotSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfReal(_result);
}

Macad::Occt::GeomAbs_BSplKnotDistribution Macad::Occt::Geom2d_BSplineCurve::KnotDistribution()
{
	return (Macad::Occt::GeomAbs_BSplKnotDistribution)((::Geom2d_BSplineCurve*)_NativeInstance)->KnotDistribution();
}

int Macad::Occt::Geom2d_BSplineCurve::LastUKnotIndex()
{
	return ((::Geom2d_BSplineCurve*)_NativeInstance)->LastUKnotIndex();
}

double Macad::Occt::Geom2d_BSplineCurve::LastParameter()
{
	return ((::Geom2d_BSplineCurve*)_NativeInstance)->LastParameter();
}

void Macad::Occt::Geom2d_BSplineCurve::LocateU(double U, double ParametricTolerance, int% I1, int% I2, bool WithKnotRepetition)
{
	pin_ptr<int> pp_I1 = &I1;
	pin_ptr<int> pp_I2 = &I2;
	((::Geom2d_BSplineCurve*)_NativeInstance)->LocateU(U, ParametricTolerance, *(Standard_Integer*)pp_I1, *(Standard_Integer*)pp_I2, WithKnotRepetition);
}

void Macad::Occt::Geom2d_BSplineCurve::LocateU(double U, double ParametricTolerance, int% I1, int% I2)
{
	pin_ptr<int> pp_I1 = &I1;
	pin_ptr<int> pp_I2 = &I2;
	((::Geom2d_BSplineCurve*)_NativeInstance)->LocateU(U, ParametricTolerance, *(Standard_Integer*)pp_I1, *(Standard_Integer*)pp_I2, false);
}

int Macad::Occt::Geom2d_BSplineCurve::Multiplicity(int Index)
{
	return ((::Geom2d_BSplineCurve*)_NativeInstance)->Multiplicity(Index);
}

void Macad::Occt::Geom2d_BSplineCurve::Multiplicities(Macad::Occt::TColStd_Array1OfInteger^ M)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->Multiplicities(*(::TColStd_Array1OfInteger*)M->NativeInstance);
}

Macad::Occt::TColStd_Array1OfInteger^ Macad::Occt::Geom2d_BSplineCurve::Multiplicities()
{
	::TColStd_Array1OfInteger* _result = new ::TColStd_Array1OfInteger();
	*_result =  (::TColStd_Array1OfInteger)((::Geom2d_BSplineCurve*)_NativeInstance)->Multiplicities();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfInteger(_result);
}

int Macad::Occt::Geom2d_BSplineCurve::NbKnots()
{
	return ((::Geom2d_BSplineCurve*)_NativeInstance)->NbKnots();
}

int Macad::Occt::Geom2d_BSplineCurve::NbPoles()
{
	return ((::Geom2d_BSplineCurve*)_NativeInstance)->NbPoles();
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_BSplineCurve::Pole(int Index)
{
	return Macad::Occt::Pnt2d(((::Geom2d_BSplineCurve*)_NativeInstance)->Pole(Index));
}

void Macad::Occt::Geom2d_BSplineCurve::Poles(Macad::Occt::TColgp_Array1OfPnt2d^ P)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->Poles(*(::TColgp_Array1OfPnt2d*)P->NativeInstance);
}

Macad::Occt::TColgp_Array1OfPnt2d^ Macad::Occt::Geom2d_BSplineCurve::Poles()
{
	::TColgp_Array1OfPnt2d* _result = new ::TColgp_Array1OfPnt2d();
	*_result =  (::TColgp_Array1OfPnt2d)((::Geom2d_BSplineCurve*)_NativeInstance)->Poles();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfPnt2d(_result);
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_BSplineCurve::StartPoint()
{
	return Macad::Occt::Pnt2d(((::Geom2d_BSplineCurve*)_NativeInstance)->StartPoint());
}

double Macad::Occt::Geom2d_BSplineCurve::Weight(int Index)
{
	return ((::Geom2d_BSplineCurve*)_NativeInstance)->Weight(Index);
}

void Macad::Occt::Geom2d_BSplineCurve::Weights(Macad::Occt::TColStd_Array1OfReal^ W)
{
	((::Geom2d_BSplineCurve*)_NativeInstance)->Weights(*(::TColStd_Array1OfReal*)W->NativeInstance);
}

Macad::Occt::TColStd_Array1OfReal^ Macad::Occt::Geom2d_BSplineCurve::Weights()
{
	::TColStd_Array1OfReal* _result;
	_result = (::TColStd_Array1OfReal*)((::Geom2d_BSplineCurve*)_NativeInstance)->Weights();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfReal(_result);
}

void Macad::Occt::Geom2d_BSplineCurve::Transform(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::Geom2d_BSplineCurve*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

int Macad::Occt::Geom2d_BSplineCurve::MaxDegree()
{
	return ::Geom2d_BSplineCurve::MaxDegree();
}

void Macad::Occt::Geom2d_BSplineCurve::Resolution(double ToleranceUV, double% UTolerance)
{
	pin_ptr<double> pp_UTolerance = &UTolerance;
	((::Geom2d_BSplineCurve*)_NativeInstance)->Resolution(ToleranceUV, *(Standard_Real*)pp_UTolerance);
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_BSplineCurve::Copy()
{
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_BSplineCurve*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}


Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(::Geom2d_BSplineCurve* instance)
{
	return gcnew Macad::Occt::Geom2d_BSplineCurve( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Point
//---------------------------------------------------------------------

Macad::Occt::Geom2d_Point::Geom2d_Point(Macad::Occt::Geom2d_Point^ parameter1)
	: Macad::Occt::Geom2d_Geometry(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Geom2d_Point::Geom2d_Point()
	: Macad::Occt::Geom2d_Geometry(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::Geom2d_Point::Coord(double% X, double% Y)
{
	pin_ptr<double> pp_X = &X;
	pin_ptr<double> pp_Y = &Y;
	((::Geom2d_Point*)_NativeInstance)->Coord(*(Standard_Real*)pp_X, *(Standard_Real*)pp_Y);
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_Point::Pnt2d()
{
	return Macad::Occt::Pnt2d(((::Geom2d_Point*)_NativeInstance)->Pnt2d());
}

double Macad::Occt::Geom2d_Point::X()
{
	return ((::Geom2d_Point*)_NativeInstance)->X();
}

double Macad::Occt::Geom2d_Point::Y()
{
	return ((::Geom2d_Point*)_NativeInstance)->Y();
}

double Macad::Occt::Geom2d_Point::Distance(Macad::Occt::Geom2d_Point^ Other)
{
	Handle(::Geom2d_Point) h_Other = Other->NativeInstance;
	return ((::Geom2d_Point*)_NativeInstance)->Distance(h_Other);
	Other->NativeInstance = h_Other.get();
}

double Macad::Occt::Geom2d_Point::SquareDistance(Macad::Occt::Geom2d_Point^ Other)
{
	Handle(::Geom2d_Point) h_Other = Other->NativeInstance;
	return ((::Geom2d_Point*)_NativeInstance)->SquareDistance(h_Other);
	Other->NativeInstance = h_Other.get();
}


Macad::Occt::Geom2d_Point^ Macad::Occt::Geom2d_Point::CreateDowncasted(::Geom2d_Point* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Geom2d_CartesianPoint)))
		return Macad::Occt::Geom2d_CartesianPoint::CreateDowncasted((::Geom2d_CartesianPoint*)instance);

	return gcnew Macad::Occt::Geom2d_Point( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_CartesianPoint
//---------------------------------------------------------------------

Macad::Occt::Geom2d_CartesianPoint::Geom2d_CartesianPoint(Macad::Occt::Pnt2d P)
	: Macad::Occt::Geom2d_Point(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	NativeInstance = new ::Geom2d_CartesianPoint(*(gp_Pnt2d*)pp_P);
}

Macad::Occt::Geom2d_CartesianPoint::Geom2d_CartesianPoint(double X, double Y)
	: Macad::Occt::Geom2d_Point(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_CartesianPoint(X, Y);
}

Macad::Occt::Geom2d_CartesianPoint::Geom2d_CartesianPoint(Macad::Occt::Geom2d_CartesianPoint^ parameter1)
	: Macad::Occt::Geom2d_Point(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_CartesianPoint(*(::Geom2d_CartesianPoint*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2d_CartesianPoint::SetCoord(double X, double Y)
{
	((::Geom2d_CartesianPoint*)_NativeInstance)->SetCoord(X, Y);
}

void Macad::Occt::Geom2d_CartesianPoint::SetPnt2d(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_CartesianPoint*)_NativeInstance)->SetPnt2d(*(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Geom2d_CartesianPoint::SetX(double X)
{
	((::Geom2d_CartesianPoint*)_NativeInstance)->SetX(X);
}

void Macad::Occt::Geom2d_CartesianPoint::SetY(double Y)
{
	((::Geom2d_CartesianPoint*)_NativeInstance)->SetY(Y);
}

void Macad::Occt::Geom2d_CartesianPoint::Coord(double% X, double% Y)
{
	pin_ptr<double> pp_X = &X;
	pin_ptr<double> pp_Y = &Y;
	((::Geom2d_CartesianPoint*)_NativeInstance)->Coord(*(Standard_Real*)pp_X, *(Standard_Real*)pp_Y);
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_CartesianPoint::Pnt2d()
{
	return Macad::Occt::Pnt2d(((::Geom2d_CartesianPoint*)_NativeInstance)->Pnt2d());
}

double Macad::Occt::Geom2d_CartesianPoint::X()
{
	return ((::Geom2d_CartesianPoint*)_NativeInstance)->X();
}

double Macad::Occt::Geom2d_CartesianPoint::Y()
{
	return ((::Geom2d_CartesianPoint*)_NativeInstance)->Y();
}

void Macad::Occt::Geom2d_CartesianPoint::Transform(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::Geom2d_CartesianPoint*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_CartesianPoint::Copy()
{
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_CartesianPoint*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}


Macad::Occt::Geom2d_CartesianPoint^ Macad::Occt::Geom2d_CartesianPoint::CreateDowncasted(::Geom2d_CartesianPoint* instance)
{
	return gcnew Macad::Occt::Geom2d_CartesianPoint( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Conic
//---------------------------------------------------------------------

Macad::Occt::Geom2d_Conic::Geom2d_Conic(Macad::Occt::Geom2d_Conic^ parameter1)
	: Macad::Occt::Geom2d_Curve(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Geom2d_Conic::Geom2d_Conic()
	: Macad::Occt::Geom2d_Curve(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::Geom2d_Conic::SetAxis(Macad::Occt::Ax22d theA)
{
	pin_ptr<Macad::Occt::Ax22d> pp_theA = &theA;
	((::Geom2d_Conic*)_NativeInstance)->SetAxis(*(gp_Ax22d*)pp_theA);
}

void Macad::Occt::Geom2d_Conic::SetXAxis(Macad::Occt::Ax2d theAX)
{
	pin_ptr<Macad::Occt::Ax2d> pp_theAX = &theAX;
	((::Geom2d_Conic*)_NativeInstance)->SetXAxis(*(gp_Ax2d*)pp_theAX);
}

void Macad::Occt::Geom2d_Conic::SetYAxis(Macad::Occt::Ax2d theAY)
{
	pin_ptr<Macad::Occt::Ax2d> pp_theAY = &theAY;
	((::Geom2d_Conic*)_NativeInstance)->SetYAxis(*(gp_Ax2d*)pp_theAY);
}

void Macad::Occt::Geom2d_Conic::SetLocation(Macad::Occt::Pnt2d theP)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
	((::Geom2d_Conic*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_theP);
}

Macad::Occt::Ax2d Macad::Occt::Geom2d_Conic::XAxis()
{
	return Macad::Occt::Ax2d(((::Geom2d_Conic*)_NativeInstance)->XAxis());
}

Macad::Occt::Ax2d Macad::Occt::Geom2d_Conic::YAxis()
{
	return Macad::Occt::Ax2d(((::Geom2d_Conic*)_NativeInstance)->YAxis());
}

double Macad::Occt::Geom2d_Conic::Eccentricity()
{
	return ((::Geom2d_Conic*)_NativeInstance)->Eccentricity();
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_Conic::Location()
{
	return Macad::Occt::Pnt2d(((::Geom2d_Conic*)_NativeInstance)->Location());
}

Macad::Occt::Ax22d Macad::Occt::Geom2d_Conic::Position()
{
	return Macad::Occt::Ax22d(((::Geom2d_Conic*)_NativeInstance)->Position());
}

void Macad::Occt::Geom2d_Conic::Reverse()
{
	((::Geom2d_Conic*)_NativeInstance)->Reverse();
}

double Macad::Occt::Geom2d_Conic::ReversedParameter(double U)
{
	return ((::Geom2d_Conic*)_NativeInstance)->ReversedParameter(U);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Geom2d_Conic::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::Geom2d_Conic*)_NativeInstance)->Continuity();
}

bool Macad::Occt::Geom2d_Conic::IsCN(int N)
{
	return ((::Geom2d_Conic*)_NativeInstance)->IsCN(N);
}


Macad::Occt::Geom2d_Conic^ Macad::Occt::Geom2d_Conic::CreateDowncasted(::Geom2d_Conic* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Geom2d_Circle)))
		return Macad::Occt::Geom2d_Circle::CreateDowncasted((::Geom2d_Circle*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom2d_Ellipse)))
		return Macad::Occt::Geom2d_Ellipse::CreateDowncasted((::Geom2d_Ellipse*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom2d_Hyperbola)))
		return Macad::Occt::Geom2d_Hyperbola::CreateDowncasted((::Geom2d_Hyperbola*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom2d_Parabola)))
		return Macad::Occt::Geom2d_Parabola::CreateDowncasted((::Geom2d_Parabola*)instance);

	return gcnew Macad::Occt::Geom2d_Conic( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Circle
//---------------------------------------------------------------------

Macad::Occt::Geom2d_Circle::Geom2d_Circle(Macad::Occt::gp_Circ2d^ C)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_Circle(*(::gp_Circ2d*)C->NativeInstance);
}

Macad::Occt::Geom2d_Circle::Geom2d_Circle(Macad::Occt::Ax2d A, double Radius, bool Sense)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	NativeInstance = new ::Geom2d_Circle(*(gp_Ax2d*)pp_A, Radius, Sense);
}

Macad::Occt::Geom2d_Circle::Geom2d_Circle(Macad::Occt::Ax2d A, double Radius)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	NativeInstance = new ::Geom2d_Circle(*(gp_Ax2d*)pp_A, Radius, true);
}

Macad::Occt::Geom2d_Circle::Geom2d_Circle(Macad::Occt::Ax22d A, double Radius)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax22d> pp_A = &A;
	NativeInstance = new ::Geom2d_Circle(*(gp_Ax22d*)pp_A, Radius);
}

Macad::Occt::Geom2d_Circle::Geom2d_Circle(Macad::Occt::Geom2d_Circle^ parameter1)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_Circle(*(::Geom2d_Circle*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2d_Circle::SetCirc2d(Macad::Occt::gp_Circ2d^ C)
{
	((::Geom2d_Circle*)_NativeInstance)->SetCirc2d(*(::gp_Circ2d*)C->NativeInstance);
}

void Macad::Occt::Geom2d_Circle::SetRadius(double R)
{
	((::Geom2d_Circle*)_NativeInstance)->SetRadius(R);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::Geom2d_Circle::Circ2d()
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::Geom2d_Circle*)_NativeInstance)->Circ2d();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

double Macad::Occt::Geom2d_Circle::Radius()
{
	return ((::Geom2d_Circle*)_NativeInstance)->Radius();
}

double Macad::Occt::Geom2d_Circle::ReversedParameter(double U)
{
	return ((::Geom2d_Circle*)_NativeInstance)->ReversedParameter(U);
}

double Macad::Occt::Geom2d_Circle::Eccentricity()
{
	return ((::Geom2d_Circle*)_NativeInstance)->Eccentricity();
}

double Macad::Occt::Geom2d_Circle::FirstParameter()
{
	return ((::Geom2d_Circle*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::Geom2d_Circle::LastParameter()
{
	return ((::Geom2d_Circle*)_NativeInstance)->LastParameter();
}

bool Macad::Occt::Geom2d_Circle::IsClosed()
{
	return ((::Geom2d_Circle*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::Geom2d_Circle::IsPeriodic()
{
	return ((::Geom2d_Circle*)_NativeInstance)->IsPeriodic();
}

void Macad::Occt::Geom2d_Circle::D0(double U, Macad::Occt::Pnt2d% P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_Circle*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Geom2d_Circle::D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	((::Geom2d_Circle*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::Geom2d_Circle::D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	((::Geom2d_Circle*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::Geom2d_Circle::D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	((::Geom2d_Circle*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

Macad::Occt::Vec2d Macad::Occt::Geom2d_Circle::DN(double U, int N)
{
	return Macad::Occt::Vec2d(((::Geom2d_Circle*)_NativeInstance)->DN(U, N));
}

void Macad::Occt::Geom2d_Circle::Transform(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::Geom2d_Circle*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_Circle::Copy()
{
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_Circle*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}


Macad::Occt::Geom2d_Circle^ Macad::Occt::Geom2d_Circle::CreateDowncasted(::Geom2d_Circle* instance)
{
	return gcnew Macad::Occt::Geom2d_Circle( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Vector
//---------------------------------------------------------------------

Macad::Occt::Geom2d_Vector::Geom2d_Vector(Macad::Occt::Geom2d_Vector^ parameter1)
	: Macad::Occt::Geom2d_Geometry(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Geom2d_Vector::Geom2d_Vector()
	: Macad::Occt::Geom2d_Geometry(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::Geom2d_Vector::Reverse()
{
	((::Geom2d_Vector*)_NativeInstance)->Reverse();
}

Macad::Occt::Geom2d_Vector^ Macad::Occt::Geom2d_Vector::Reversed()
{
	Handle(::Geom2d_Vector) _result;
	_result = ((::Geom2d_Vector*)_NativeInstance)->Reversed();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Vector::CreateDowncasted( _result.get());
}

double Macad::Occt::Geom2d_Vector::Angle(Macad::Occt::Geom2d_Vector^ Other)
{
	Handle(::Geom2d_Vector) h_Other = Other->NativeInstance;
	return ((::Geom2d_Vector*)_NativeInstance)->Angle(h_Other);
	Other->NativeInstance = h_Other.get();
}

void Macad::Occt::Geom2d_Vector::Coord(double% X, double% Y)
{
	pin_ptr<double> pp_X = &X;
	pin_ptr<double> pp_Y = &Y;
	((::Geom2d_Vector*)_NativeInstance)->Coord(*(Standard_Real*)pp_X, *(Standard_Real*)pp_Y);
}

double Macad::Occt::Geom2d_Vector::Magnitude()
{
	return ((::Geom2d_Vector*)_NativeInstance)->Magnitude();
}

double Macad::Occt::Geom2d_Vector::SquareMagnitude()
{
	return ((::Geom2d_Vector*)_NativeInstance)->SquareMagnitude();
}

double Macad::Occt::Geom2d_Vector::X()
{
	return ((::Geom2d_Vector*)_NativeInstance)->X();
}

double Macad::Occt::Geom2d_Vector::Y()
{
	return ((::Geom2d_Vector*)_NativeInstance)->Y();
}

double Macad::Occt::Geom2d_Vector::Crossed(Macad::Occt::Geom2d_Vector^ Other)
{
	Handle(::Geom2d_Vector) h_Other = Other->NativeInstance;
	return ((::Geom2d_Vector*)_NativeInstance)->Crossed(h_Other);
	Other->NativeInstance = h_Other.get();
}

double Macad::Occt::Geom2d_Vector::Dot(Macad::Occt::Geom2d_Vector^ Other)
{
	Handle(::Geom2d_Vector) h_Other = Other->NativeInstance;
	return ((::Geom2d_Vector*)_NativeInstance)->Dot(h_Other);
	Other->NativeInstance = h_Other.get();
}

Macad::Occt::Vec2d Macad::Occt::Geom2d_Vector::Vec2d()
{
	return Macad::Occt::Vec2d(((::Geom2d_Vector*)_NativeInstance)->Vec2d());
}


Macad::Occt::Geom2d_Vector^ Macad::Occt::Geom2d_Vector::CreateDowncasted(::Geom2d_Vector* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Geom2d_Direction)))
		return Macad::Occt::Geom2d_Direction::CreateDowncasted((::Geom2d_Direction*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom2d_VectorWithMagnitude)))
		return Macad::Occt::Geom2d_VectorWithMagnitude::CreateDowncasted((::Geom2d_VectorWithMagnitude*)instance);

	return gcnew Macad::Occt::Geom2d_Vector( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Direction
//---------------------------------------------------------------------

Macad::Occt::Geom2d_Direction::Geom2d_Direction(double X, double Y)
	: Macad::Occt::Geom2d_Vector(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_Direction(X, Y);
}

Macad::Occt::Geom2d_Direction::Geom2d_Direction(Macad::Occt::Dir2d V)
	: Macad::Occt::Geom2d_Vector(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Dir2d> pp_V = &V;
	NativeInstance = new ::Geom2d_Direction(*(gp_Dir2d*)pp_V);
}

Macad::Occt::Geom2d_Direction::Geom2d_Direction(Macad::Occt::Geom2d_Direction^ parameter1)
	: Macad::Occt::Geom2d_Vector(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_Direction(*(::Geom2d_Direction*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2d_Direction::SetCoord(double X, double Y)
{
	((::Geom2d_Direction*)_NativeInstance)->SetCoord(X, Y);
}

void Macad::Occt::Geom2d_Direction::SetDir2d(Macad::Occt::Dir2d V)
{
	pin_ptr<Macad::Occt::Dir2d> pp_V = &V;
	((::Geom2d_Direction*)_NativeInstance)->SetDir2d(*(gp_Dir2d*)pp_V);
}

void Macad::Occt::Geom2d_Direction::SetX(double X)
{
	((::Geom2d_Direction*)_NativeInstance)->SetX(X);
}

void Macad::Occt::Geom2d_Direction::SetY(double Y)
{
	((::Geom2d_Direction*)_NativeInstance)->SetY(Y);
}

Macad::Occt::Dir2d Macad::Occt::Geom2d_Direction::Dir2d()
{
	return Macad::Occt::Dir2d(((::Geom2d_Direction*)_NativeInstance)->Dir2d());
}

double Macad::Occt::Geom2d_Direction::Magnitude()
{
	return ((::Geom2d_Direction*)_NativeInstance)->Magnitude();
}

double Macad::Occt::Geom2d_Direction::SquareMagnitude()
{
	return ((::Geom2d_Direction*)_NativeInstance)->SquareMagnitude();
}

double Macad::Occt::Geom2d_Direction::Crossed(Macad::Occt::Geom2d_Vector^ Other)
{
	Handle(::Geom2d_Vector) h_Other = Other->NativeInstance;
	return ((::Geom2d_Direction*)_NativeInstance)->Crossed(h_Other);
	Other->NativeInstance = h_Other.get();
}

void Macad::Occt::Geom2d_Direction::Transform(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::Geom2d_Direction*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_Direction::Copy()
{
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_Direction*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}


Macad::Occt::Geom2d_Direction^ Macad::Occt::Geom2d_Direction::CreateDowncasted(::Geom2d_Direction* instance)
{
	return gcnew Macad::Occt::Geom2d_Direction( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Ellipse
//---------------------------------------------------------------------

Macad::Occt::Geom2d_Ellipse::Geom2d_Ellipse(Macad::Occt::gp_Elips2d^ E)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_Ellipse(*(::gp_Elips2d*)E->NativeInstance);
}

Macad::Occt::Geom2d_Ellipse::Geom2d_Ellipse(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_MajorAxis = &MajorAxis;
	NativeInstance = new ::Geom2d_Ellipse(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, Sense);
}

Macad::Occt::Geom2d_Ellipse::Geom2d_Ellipse(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_MajorAxis = &MajorAxis;
	NativeInstance = new ::Geom2d_Ellipse(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, true);
}

Macad::Occt::Geom2d_Ellipse::Geom2d_Ellipse(Macad::Occt::Ax22d Axis, double MajorRadius, double MinorRadius)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Axis = &Axis;
	NativeInstance = new ::Geom2d_Ellipse(*(gp_Ax22d*)pp_Axis, MajorRadius, MinorRadius);
}

Macad::Occt::Geom2d_Ellipse::Geom2d_Ellipse(Macad::Occt::Geom2d_Ellipse^ parameter1)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_Ellipse(*(::Geom2d_Ellipse*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2d_Ellipse::SetElips2d(Macad::Occt::gp_Elips2d^ E)
{
	((::Geom2d_Ellipse*)_NativeInstance)->SetElips2d(*(::gp_Elips2d*)E->NativeInstance);
}

void Macad::Occt::Geom2d_Ellipse::SetMajorRadius(double MajorRadius)
{
	((::Geom2d_Ellipse*)_NativeInstance)->SetMajorRadius(MajorRadius);
}

void Macad::Occt::Geom2d_Ellipse::SetMinorRadius(double MinorRadius)
{
	((::Geom2d_Ellipse*)_NativeInstance)->SetMinorRadius(MinorRadius);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::Geom2d_Ellipse::Elips2d()
{
	::gp_Elips2d* _result = new ::gp_Elips2d();
	*_result = ((::Geom2d_Ellipse*)_NativeInstance)->Elips2d();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

double Macad::Occt::Geom2d_Ellipse::ReversedParameter(double U)
{
	return ((::Geom2d_Ellipse*)_NativeInstance)->ReversedParameter(U);
}

Macad::Occt::Ax2d Macad::Occt::Geom2d_Ellipse::Directrix1()
{
	return Macad::Occt::Ax2d(((::Geom2d_Ellipse*)_NativeInstance)->Directrix1());
}

Macad::Occt::Ax2d Macad::Occt::Geom2d_Ellipse::Directrix2()
{
	return Macad::Occt::Ax2d(((::Geom2d_Ellipse*)_NativeInstance)->Directrix2());
}

double Macad::Occt::Geom2d_Ellipse::Eccentricity()
{
	return ((::Geom2d_Ellipse*)_NativeInstance)->Eccentricity();
}

double Macad::Occt::Geom2d_Ellipse::Focal()
{
	return ((::Geom2d_Ellipse*)_NativeInstance)->Focal();
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_Ellipse::Focus1()
{
	return Macad::Occt::Pnt2d(((::Geom2d_Ellipse*)_NativeInstance)->Focus1());
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_Ellipse::Focus2()
{
	return Macad::Occt::Pnt2d(((::Geom2d_Ellipse*)_NativeInstance)->Focus2());
}

double Macad::Occt::Geom2d_Ellipse::MajorRadius()
{
	return ((::Geom2d_Ellipse*)_NativeInstance)->MajorRadius();
}

double Macad::Occt::Geom2d_Ellipse::MinorRadius()
{
	return ((::Geom2d_Ellipse*)_NativeInstance)->MinorRadius();
}

double Macad::Occt::Geom2d_Ellipse::Parameter()
{
	return ((::Geom2d_Ellipse*)_NativeInstance)->Parameter();
}

double Macad::Occt::Geom2d_Ellipse::FirstParameter()
{
	return ((::Geom2d_Ellipse*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::Geom2d_Ellipse::LastParameter()
{
	return ((::Geom2d_Ellipse*)_NativeInstance)->LastParameter();
}

bool Macad::Occt::Geom2d_Ellipse::IsClosed()
{
	return ((::Geom2d_Ellipse*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::Geom2d_Ellipse::IsPeriodic()
{
	return ((::Geom2d_Ellipse*)_NativeInstance)->IsPeriodic();
}

void Macad::Occt::Geom2d_Ellipse::D0(double U, Macad::Occt::Pnt2d% P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_Ellipse*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Geom2d_Ellipse::D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	((::Geom2d_Ellipse*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::Geom2d_Ellipse::D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	((::Geom2d_Ellipse*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::Geom2d_Ellipse::D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	((::Geom2d_Ellipse*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

Macad::Occt::Vec2d Macad::Occt::Geom2d_Ellipse::DN(double U, int N)
{
	return Macad::Occt::Vec2d(((::Geom2d_Ellipse*)_NativeInstance)->DN(U, N));
}

void Macad::Occt::Geom2d_Ellipse::Transform(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::Geom2d_Ellipse*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_Ellipse::Copy()
{
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_Ellipse*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}


Macad::Occt::Geom2d_Ellipse^ Macad::Occt::Geom2d_Ellipse::CreateDowncasted(::Geom2d_Ellipse* instance)
{
	return gcnew Macad::Occt::Geom2d_Ellipse( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Hyperbola
//---------------------------------------------------------------------

Macad::Occt::Geom2d_Hyperbola::Geom2d_Hyperbola(Macad::Occt::gp_Hypr2d^ H)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_Hyperbola(*(::gp_Hypr2d*)H->NativeInstance);
}

Macad::Occt::Geom2d_Hyperbola::Geom2d_Hyperbola(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_MajorAxis = &MajorAxis;
	NativeInstance = new ::Geom2d_Hyperbola(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, Sense);
}

Macad::Occt::Geom2d_Hyperbola::Geom2d_Hyperbola(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_MajorAxis = &MajorAxis;
	NativeInstance = new ::Geom2d_Hyperbola(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, true);
}

Macad::Occt::Geom2d_Hyperbola::Geom2d_Hyperbola(Macad::Occt::Ax22d Axis, double MajorRadius, double MinorRadius)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Axis = &Axis;
	NativeInstance = new ::Geom2d_Hyperbola(*(gp_Ax22d*)pp_Axis, MajorRadius, MinorRadius);
}

Macad::Occt::Geom2d_Hyperbola::Geom2d_Hyperbola(Macad::Occt::Geom2d_Hyperbola^ parameter1)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_Hyperbola(*(::Geom2d_Hyperbola*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2d_Hyperbola::SetHypr2d(Macad::Occt::gp_Hypr2d^ H)
{
	((::Geom2d_Hyperbola*)_NativeInstance)->SetHypr2d(*(::gp_Hypr2d*)H->NativeInstance);
}

void Macad::Occt::Geom2d_Hyperbola::SetMajorRadius(double MajorRadius)
{
	((::Geom2d_Hyperbola*)_NativeInstance)->SetMajorRadius(MajorRadius);
}

void Macad::Occt::Geom2d_Hyperbola::SetMinorRadius(double MinorRadius)
{
	((::Geom2d_Hyperbola*)_NativeInstance)->SetMinorRadius(MinorRadius);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::Geom2d_Hyperbola::Hypr2d()
{
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::Geom2d_Hyperbola*)_NativeInstance)->Hypr2d();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

double Macad::Occt::Geom2d_Hyperbola::ReversedParameter(double U)
{
	return ((::Geom2d_Hyperbola*)_NativeInstance)->ReversedParameter(U);
}

double Macad::Occt::Geom2d_Hyperbola::FirstParameter()
{
	return ((::Geom2d_Hyperbola*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::Geom2d_Hyperbola::LastParameter()
{
	return ((::Geom2d_Hyperbola*)_NativeInstance)->LastParameter();
}

bool Macad::Occt::Geom2d_Hyperbola::IsClosed()
{
	return ((::Geom2d_Hyperbola*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::Geom2d_Hyperbola::IsPeriodic()
{
	return ((::Geom2d_Hyperbola*)_NativeInstance)->IsPeriodic();
}

Macad::Occt::Ax2d Macad::Occt::Geom2d_Hyperbola::Asymptote1()
{
	return Macad::Occt::Ax2d(((::Geom2d_Hyperbola*)_NativeInstance)->Asymptote1());
}

Macad::Occt::Ax2d Macad::Occt::Geom2d_Hyperbola::Asymptote2()
{
	return Macad::Occt::Ax2d(((::Geom2d_Hyperbola*)_NativeInstance)->Asymptote2());
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::Geom2d_Hyperbola::ConjugateBranch1()
{
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::Geom2d_Hyperbola*)_NativeInstance)->ConjugateBranch1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::Geom2d_Hyperbola::ConjugateBranch2()
{
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::Geom2d_Hyperbola*)_NativeInstance)->ConjugateBranch2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

Macad::Occt::Ax2d Macad::Occt::Geom2d_Hyperbola::Directrix1()
{
	return Macad::Occt::Ax2d(((::Geom2d_Hyperbola*)_NativeInstance)->Directrix1());
}

Macad::Occt::Ax2d Macad::Occt::Geom2d_Hyperbola::Directrix2()
{
	return Macad::Occt::Ax2d(((::Geom2d_Hyperbola*)_NativeInstance)->Directrix2());
}

double Macad::Occt::Geom2d_Hyperbola::Eccentricity()
{
	return ((::Geom2d_Hyperbola*)_NativeInstance)->Eccentricity();
}

double Macad::Occt::Geom2d_Hyperbola::Focal()
{
	return ((::Geom2d_Hyperbola*)_NativeInstance)->Focal();
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_Hyperbola::Focus1()
{
	return Macad::Occt::Pnt2d(((::Geom2d_Hyperbola*)_NativeInstance)->Focus1());
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_Hyperbola::Focus2()
{
	return Macad::Occt::Pnt2d(((::Geom2d_Hyperbola*)_NativeInstance)->Focus2());
}

double Macad::Occt::Geom2d_Hyperbola::MajorRadius()
{
	return ((::Geom2d_Hyperbola*)_NativeInstance)->MajorRadius();
}

double Macad::Occt::Geom2d_Hyperbola::MinorRadius()
{
	return ((::Geom2d_Hyperbola*)_NativeInstance)->MinorRadius();
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::Geom2d_Hyperbola::OtherBranch()
{
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::Geom2d_Hyperbola*)_NativeInstance)->OtherBranch();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

double Macad::Occt::Geom2d_Hyperbola::Parameter()
{
	return ((::Geom2d_Hyperbola*)_NativeInstance)->Parameter();
}

void Macad::Occt::Geom2d_Hyperbola::D0(double U, Macad::Occt::Pnt2d% P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_Hyperbola*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Geom2d_Hyperbola::D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	((::Geom2d_Hyperbola*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::Geom2d_Hyperbola::D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	((::Geom2d_Hyperbola*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::Geom2d_Hyperbola::D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	((::Geom2d_Hyperbola*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

Macad::Occt::Vec2d Macad::Occt::Geom2d_Hyperbola::DN(double U, int N)
{
	return Macad::Occt::Vec2d(((::Geom2d_Hyperbola*)_NativeInstance)->DN(U, N));
}

void Macad::Occt::Geom2d_Hyperbola::Transform(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::Geom2d_Hyperbola*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_Hyperbola::Copy()
{
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_Hyperbola*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}


Macad::Occt::Geom2d_Hyperbola^ Macad::Occt::Geom2d_Hyperbola::CreateDowncasted(::Geom2d_Hyperbola* instance)
{
	return gcnew Macad::Occt::Geom2d_Hyperbola( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Line
//---------------------------------------------------------------------

Macad::Occt::Geom2d_Line::Geom2d_Line(Macad::Occt::Ax2d A)
	: Macad::Occt::Geom2d_Curve(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	NativeInstance = new ::Geom2d_Line(*(gp_Ax2d*)pp_A);
}

Macad::Occt::Geom2d_Line::Geom2d_Line(Macad::Occt::gp_Lin2d^ L)
	: Macad::Occt::Geom2d_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_Line(*(::gp_Lin2d*)L->NativeInstance);
}

Macad::Occt::Geom2d_Line::Geom2d_Line(Macad::Occt::Pnt2d P, Macad::Occt::Dir2d V)
	: Macad::Occt::Geom2d_Curve(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Dir2d> pp_V = &V;
	NativeInstance = new ::Geom2d_Line(*(gp_Pnt2d*)pp_P, *(gp_Dir2d*)pp_V);
}

Macad::Occt::Geom2d_Line::Geom2d_Line(Macad::Occt::Geom2d_Line^ parameter1)
	: Macad::Occt::Geom2d_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_Line(*(::Geom2d_Line*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2d_Line::SetLin2d(Macad::Occt::gp_Lin2d^ L)
{
	((::Geom2d_Line*)_NativeInstance)->SetLin2d(*(::gp_Lin2d*)L->NativeInstance);
}

void Macad::Occt::Geom2d_Line::SetDirection(Macad::Occt::Dir2d V)
{
	pin_ptr<Macad::Occt::Dir2d> pp_V = &V;
	((::Geom2d_Line*)_NativeInstance)->SetDirection(*(gp_Dir2d*)pp_V);
}

Macad::Occt::Dir2d Macad::Occt::Geom2d_Line::Direction()
{
	return Macad::Occt::Dir2d(((::Geom2d_Line*)_NativeInstance)->Direction());
}

void Macad::Occt::Geom2d_Line::SetLocation(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_Line*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_P);
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_Line::Location()
{
	return Macad::Occt::Pnt2d(((::Geom2d_Line*)_NativeInstance)->Location());
}

void Macad::Occt::Geom2d_Line::SetPosition(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	((::Geom2d_Line*)_NativeInstance)->SetPosition(*(gp_Ax2d*)pp_A);
}

Macad::Occt::Ax2d Macad::Occt::Geom2d_Line::Position()
{
	return Macad::Occt::Ax2d(((::Geom2d_Line*)_NativeInstance)->Position());
}

Macad::Occt::gp_Lin2d^ Macad::Occt::Geom2d_Line::Lin2d()
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::Geom2d_Line*)_NativeInstance)->Lin2d();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::Geom2d_Line::Reverse()
{
	((::Geom2d_Line*)_NativeInstance)->Reverse();
}

double Macad::Occt::Geom2d_Line::ReversedParameter(double U)
{
	return ((::Geom2d_Line*)_NativeInstance)->ReversedParameter(U);
}

double Macad::Occt::Geom2d_Line::FirstParameter()
{
	return ((::Geom2d_Line*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::Geom2d_Line::LastParameter()
{
	return ((::Geom2d_Line*)_NativeInstance)->LastParameter();
}

bool Macad::Occt::Geom2d_Line::IsClosed()
{
	return ((::Geom2d_Line*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::Geom2d_Line::IsPeriodic()
{
	return ((::Geom2d_Line*)_NativeInstance)->IsPeriodic();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Geom2d_Line::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::Geom2d_Line*)_NativeInstance)->Continuity();
}

double Macad::Occt::Geom2d_Line::Distance(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ((::Geom2d_Line*)_NativeInstance)->Distance(*(gp_Pnt2d*)pp_P);
}

bool Macad::Occt::Geom2d_Line::IsCN(int N)
{
	return ((::Geom2d_Line*)_NativeInstance)->IsCN(N);
}

void Macad::Occt::Geom2d_Line::D0(double U, Macad::Occt::Pnt2d% P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_Line*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Geom2d_Line::D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	((::Geom2d_Line*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::Geom2d_Line::D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	((::Geom2d_Line*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::Geom2d_Line::D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	((::Geom2d_Line*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

Macad::Occt::Vec2d Macad::Occt::Geom2d_Line::DN(double U, int N)
{
	return Macad::Occt::Vec2d(((::Geom2d_Line*)_NativeInstance)->DN(U, N));
}

void Macad::Occt::Geom2d_Line::Transform(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::Geom2d_Line*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

double Macad::Occt::Geom2d_Line::TransformedParameter(double U, Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	return ((::Geom2d_Line*)_NativeInstance)->TransformedParameter(U, *(gp_Trsf2d*)pp_T);
}

double Macad::Occt::Geom2d_Line::ParametricTransformation(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	return ((::Geom2d_Line*)_NativeInstance)->ParametricTransformation(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_Line::Copy()
{
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_Line*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}


Macad::Occt::Geom2d_Line^ Macad::Occt::Geom2d_Line::CreateDowncasted(::Geom2d_Line* instance)
{
	return gcnew Macad::Occt::Geom2d_Line( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_OffsetCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2d_OffsetCurve::Geom2d_OffsetCurve(Macad::Occt::Geom2d_Curve^ C, double Offset, bool isNotCheckC0)
	: Macad::Occt::Geom2d_Curve(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	NativeInstance = new ::Geom2d_OffsetCurve(h_C, Offset, isNotCheckC0);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom2d_OffsetCurve::Geom2d_OffsetCurve(Macad::Occt::Geom2d_Curve^ C, double Offset)
	: Macad::Occt::Geom2d_Curve(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	NativeInstance = new ::Geom2d_OffsetCurve(h_C, Offset, false);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom2d_OffsetCurve::Geom2d_OffsetCurve(Macad::Occt::Geom2d_OffsetCurve^ parameter1)
	: Macad::Occt::Geom2d_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_OffsetCurve(*(::Geom2d_OffsetCurve*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2d_OffsetCurve::Reverse()
{
	((::Geom2d_OffsetCurve*)_NativeInstance)->Reverse();
}

double Macad::Occt::Geom2d_OffsetCurve::ReversedParameter(double U)
{
	return ((::Geom2d_OffsetCurve*)_NativeInstance)->ReversedParameter(U);
}

void Macad::Occt::Geom2d_OffsetCurve::SetBasisCurve(Macad::Occt::Geom2d_Curve^ C, bool isNotCheckC0)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::Geom2d_OffsetCurve*)_NativeInstance)->SetBasisCurve(h_C, isNotCheckC0);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::Geom2d_OffsetCurve::SetBasisCurve(Macad::Occt::Geom2d_Curve^ C)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::Geom2d_OffsetCurve*)_NativeInstance)->SetBasisCurve(h_C, false);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::Geom2d_OffsetCurve::SetOffsetValue(double D)
{
	((::Geom2d_OffsetCurve*)_NativeInstance)->SetOffsetValue(D);
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::Geom2d_OffsetCurve::BasisCurve()
{
	Handle(::Geom2d_Curve) _result;
	_result = ((::Geom2d_OffsetCurve*)_NativeInstance)->BasisCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Geom2d_OffsetCurve::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::Geom2d_OffsetCurve*)_NativeInstance)->Continuity();
}

void Macad::Occt::Geom2d_OffsetCurve::D0(double U, Macad::Occt::Pnt2d% P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_OffsetCurve*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Geom2d_OffsetCurve::D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	((::Geom2d_OffsetCurve*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::Geom2d_OffsetCurve::D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	((::Geom2d_OffsetCurve*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::Geom2d_OffsetCurve::D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	((::Geom2d_OffsetCurve*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

Macad::Occt::Vec2d Macad::Occt::Geom2d_OffsetCurve::DN(double U, int N)
{
	return Macad::Occt::Vec2d(((::Geom2d_OffsetCurve*)_NativeInstance)->DN(U, N));
}

double Macad::Occt::Geom2d_OffsetCurve::FirstParameter()
{
	return ((::Geom2d_OffsetCurve*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::Geom2d_OffsetCurve::LastParameter()
{
	return ((::Geom2d_OffsetCurve*)_NativeInstance)->LastParameter();
}

double Macad::Occt::Geom2d_OffsetCurve::Offset()
{
	return ((::Geom2d_OffsetCurve*)_NativeInstance)->Offset();
}

bool Macad::Occt::Geom2d_OffsetCurve::IsClosed()
{
	return ((::Geom2d_OffsetCurve*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::Geom2d_OffsetCurve::IsCN(int N)
{
	return ((::Geom2d_OffsetCurve*)_NativeInstance)->IsCN(N);
}

bool Macad::Occt::Geom2d_OffsetCurve::IsPeriodic()
{
	return ((::Geom2d_OffsetCurve*)_NativeInstance)->IsPeriodic();
}

double Macad::Occt::Geom2d_OffsetCurve::Period()
{
	return ((::Geom2d_OffsetCurve*)_NativeInstance)->Period();
}

void Macad::Occt::Geom2d_OffsetCurve::Transform(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::Geom2d_OffsetCurve*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

double Macad::Occt::Geom2d_OffsetCurve::TransformedParameter(double U, Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	return ((::Geom2d_OffsetCurve*)_NativeInstance)->TransformedParameter(U, *(gp_Trsf2d*)pp_T);
}

double Macad::Occt::Geom2d_OffsetCurve::ParametricTransformation(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	return ((::Geom2d_OffsetCurve*)_NativeInstance)->ParametricTransformation(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_OffsetCurve::Copy()
{
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_OffsetCurve*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Geom2d_OffsetCurve::GetBasisCurveContinuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::Geom2d_OffsetCurve*)_NativeInstance)->GetBasisCurveContinuity();
}


Macad::Occt::Geom2d_OffsetCurve^ Macad::Occt::Geom2d_OffsetCurve::CreateDowncasted(::Geom2d_OffsetCurve* instance)
{
	return gcnew Macad::Occt::Geom2d_OffsetCurve( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Parabola
//---------------------------------------------------------------------

Macad::Occt::Geom2d_Parabola::Geom2d_Parabola(Macad::Occt::gp_Parab2d^ Prb)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_Parabola(*(::gp_Parab2d*)Prb->NativeInstance);
}

Macad::Occt::Geom2d_Parabola::Geom2d_Parabola(Macad::Occt::Ax2d MirrorAxis, double Focal, bool Sense)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_MirrorAxis = &MirrorAxis;
	NativeInstance = new ::Geom2d_Parabola(*(gp_Ax2d*)pp_MirrorAxis, Focal, Sense);
}

Macad::Occt::Geom2d_Parabola::Geom2d_Parabola(Macad::Occt::Ax2d MirrorAxis, double Focal)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_MirrorAxis = &MirrorAxis;
	NativeInstance = new ::Geom2d_Parabola(*(gp_Ax2d*)pp_MirrorAxis, Focal, true);
}

Macad::Occt::Geom2d_Parabola::Geom2d_Parabola(Macad::Occt::Ax22d Axis, double Focal)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Axis = &Axis;
	NativeInstance = new ::Geom2d_Parabola(*(gp_Ax22d*)pp_Axis, Focal);
}

Macad::Occt::Geom2d_Parabola::Geom2d_Parabola(Macad::Occt::Ax2d D, Macad::Occt::Pnt2d F)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_D = &D;
	pin_ptr<Macad::Occt::Pnt2d> pp_F = &F;
	NativeInstance = new ::Geom2d_Parabola(*(gp_Ax2d*)pp_D, *(gp_Pnt2d*)pp_F);
}

Macad::Occt::Geom2d_Parabola::Geom2d_Parabola(Macad::Occt::Geom2d_Parabola^ parameter1)
	: Macad::Occt::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_Parabola(*(::Geom2d_Parabola*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2d_Parabola::SetFocal(double Focal)
{
	((::Geom2d_Parabola*)_NativeInstance)->SetFocal(Focal);
}

void Macad::Occt::Geom2d_Parabola::SetParab2d(Macad::Occt::gp_Parab2d^ Prb)
{
	((::Geom2d_Parabola*)_NativeInstance)->SetParab2d(*(::gp_Parab2d*)Prb->NativeInstance);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::Geom2d_Parabola::Parab2d()
{
	::gp_Parab2d* _result = new ::gp_Parab2d();
	*_result = ((::Geom2d_Parabola*)_NativeInstance)->Parab2d();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

double Macad::Occt::Geom2d_Parabola::ReversedParameter(double U)
{
	return ((::Geom2d_Parabola*)_NativeInstance)->ReversedParameter(U);
}

double Macad::Occt::Geom2d_Parabola::FirstParameter()
{
	return ((::Geom2d_Parabola*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::Geom2d_Parabola::LastParameter()
{
	return ((::Geom2d_Parabola*)_NativeInstance)->LastParameter();
}

bool Macad::Occt::Geom2d_Parabola::IsClosed()
{
	return ((::Geom2d_Parabola*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::Geom2d_Parabola::IsPeriodic()
{
	return ((::Geom2d_Parabola*)_NativeInstance)->IsPeriodic();
}

Macad::Occt::Ax2d Macad::Occt::Geom2d_Parabola::Directrix()
{
	return Macad::Occt::Ax2d(((::Geom2d_Parabola*)_NativeInstance)->Directrix());
}

double Macad::Occt::Geom2d_Parabola::Eccentricity()
{
	return ((::Geom2d_Parabola*)_NativeInstance)->Eccentricity();
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_Parabola::Focus()
{
	return Macad::Occt::Pnt2d(((::Geom2d_Parabola*)_NativeInstance)->Focus());
}

double Macad::Occt::Geom2d_Parabola::Focal()
{
	return ((::Geom2d_Parabola*)_NativeInstance)->Focal();
}

double Macad::Occt::Geom2d_Parabola::Parameter()
{
	return ((::Geom2d_Parabola*)_NativeInstance)->Parameter();
}

void Macad::Occt::Geom2d_Parabola::D0(double U, Macad::Occt::Pnt2d% P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_Parabola*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Geom2d_Parabola::D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	((::Geom2d_Parabola*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::Geom2d_Parabola::D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	((::Geom2d_Parabola*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::Geom2d_Parabola::D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	((::Geom2d_Parabola*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

Macad::Occt::Vec2d Macad::Occt::Geom2d_Parabola::DN(double U, int N)
{
	return Macad::Occt::Vec2d(((::Geom2d_Parabola*)_NativeInstance)->DN(U, N));
}

void Macad::Occt::Geom2d_Parabola::Transform(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::Geom2d_Parabola*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

double Macad::Occt::Geom2d_Parabola::TransformedParameter(double U, Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	return ((::Geom2d_Parabola*)_NativeInstance)->TransformedParameter(U, *(gp_Trsf2d*)pp_T);
}

double Macad::Occt::Geom2d_Parabola::ParametricTransformation(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	return ((::Geom2d_Parabola*)_NativeInstance)->ParametricTransformation(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_Parabola::Copy()
{
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_Parabola*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}


Macad::Occt::Geom2d_Parabola^ Macad::Occt::Geom2d_Parabola::CreateDowncasted(::Geom2d_Parabola* instance)
{
	return gcnew Macad::Occt::Geom2d_Parabola( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Transformation
//---------------------------------------------------------------------

Macad::Occt::Geom2d_Transformation::Geom2d_Transformation()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_Transformation();
}

Macad::Occt::Geom2d_Transformation::Geom2d_Transformation(Macad::Occt::Trsf2d T)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	NativeInstance = new ::Geom2d_Transformation(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::Geom2d_Transformation::Geom2d_Transformation(Macad::Occt::Geom2d_Transformation^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_Transformation(*(::Geom2d_Transformation*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2d_Transformation::SetMirror(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_Transformation*)_NativeInstance)->SetMirror(*(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Geom2d_Transformation::SetMirror(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	((::Geom2d_Transformation*)_NativeInstance)->SetMirror(*(gp_Ax2d*)pp_A);
}

void Macad::Occt::Geom2d_Transformation::SetRotation(Macad::Occt::Pnt2d P, double Ang)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_Transformation*)_NativeInstance)->SetRotation(*(gp_Pnt2d*)pp_P, Ang);
}

void Macad::Occt::Geom2d_Transformation::SetScale(Macad::Occt::Pnt2d P, double S)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_Transformation*)_NativeInstance)->SetScale(*(gp_Pnt2d*)pp_P, S);
}

void Macad::Occt::Geom2d_Transformation::SetTransformation(Macad::Occt::Ax2d FromSystem1, Macad::Occt::Ax2d ToSystem2)
{
	pin_ptr<Macad::Occt::Ax2d> pp_FromSystem1 = &FromSystem1;
	pin_ptr<Macad::Occt::Ax2d> pp_ToSystem2 = &ToSystem2;
	((::Geom2d_Transformation*)_NativeInstance)->SetTransformation(*(gp_Ax2d*)pp_FromSystem1, *(gp_Ax2d*)pp_ToSystem2);
}

void Macad::Occt::Geom2d_Transformation::SetTransformation(Macad::Occt::Ax2d ToSystem)
{
	pin_ptr<Macad::Occt::Ax2d> pp_ToSystem = &ToSystem;
	((::Geom2d_Transformation*)_NativeInstance)->SetTransformation(*(gp_Ax2d*)pp_ToSystem);
}

void Macad::Occt::Geom2d_Transformation::SetTranslation(Macad::Occt::Vec2d V)
{
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	((::Geom2d_Transformation*)_NativeInstance)->SetTranslation(*(gp_Vec2d*)pp_V);
}

void Macad::Occt::Geom2d_Transformation::SetTranslation(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	((::Geom2d_Transformation*)_NativeInstance)->SetTranslation(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

void Macad::Occt::Geom2d_Transformation::SetTrsf2d(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::Geom2d_Transformation*)_NativeInstance)->SetTrsf2d(*(gp_Trsf2d*)pp_T);
}

bool Macad::Occt::Geom2d_Transformation::IsNegative()
{
	return ((::Geom2d_Transformation*)_NativeInstance)->IsNegative();
}

Macad::Occt::TrsfForm Macad::Occt::Geom2d_Transformation::Form()
{
	return (Macad::Occt::TrsfForm)((::Geom2d_Transformation*)_NativeInstance)->Form();
}

double Macad::Occt::Geom2d_Transformation::ScaleFactor()
{
	return ((::Geom2d_Transformation*)_NativeInstance)->ScaleFactor();
}

Macad::Occt::Trsf2d Macad::Occt::Geom2d_Transformation::Trsf2d()
{
	return Macad::Occt::Trsf2d(((::Geom2d_Transformation*)_NativeInstance)->Trsf2d());
}

double Macad::Occt::Geom2d_Transformation::Value(int Row, int Col)
{
	return ((::Geom2d_Transformation*)_NativeInstance)->Value(Row, Col);
}

void Macad::Occt::Geom2d_Transformation::Invert()
{
	((::Geom2d_Transformation*)_NativeInstance)->Invert();
}

Macad::Occt::Geom2d_Transformation^ Macad::Occt::Geom2d_Transformation::Inverted()
{
	Handle(::Geom2d_Transformation) _result;
	_result = ((::Geom2d_Transformation*)_NativeInstance)->Inverted();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Transformation::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Transformation^ Macad::Occt::Geom2d_Transformation::Multiplied(Macad::Occt::Geom2d_Transformation^ Other)
{
	Handle(::Geom2d_Transformation) h_Other = Other->NativeInstance;
	Handle(::Geom2d_Transformation) _result;
	_result = ((::Geom2d_Transformation*)_NativeInstance)->Multiplied(h_Other);
	Other->NativeInstance = h_Other.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Transformation::CreateDowncasted( _result.get());
}

void Macad::Occt::Geom2d_Transformation::Multiply(Macad::Occt::Geom2d_Transformation^ Other)
{
	Handle(::Geom2d_Transformation) h_Other = Other->NativeInstance;
	((::Geom2d_Transformation*)_NativeInstance)->Multiply(h_Other);
	Other->NativeInstance = h_Other.get();
}

void Macad::Occt::Geom2d_Transformation::Power(int N)
{
	((::Geom2d_Transformation*)_NativeInstance)->Power(N);
}

Macad::Occt::Geom2d_Transformation^ Macad::Occt::Geom2d_Transformation::Powered(int N)
{
	Handle(::Geom2d_Transformation) _result;
	_result = ((::Geom2d_Transformation*)_NativeInstance)->Powered(N);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Transformation::CreateDowncasted( _result.get());
}

void Macad::Occt::Geom2d_Transformation::PreMultiply(Macad::Occt::Geom2d_Transformation^ Other)
{
	Handle(::Geom2d_Transformation) h_Other = Other->NativeInstance;
	((::Geom2d_Transformation*)_NativeInstance)->PreMultiply(h_Other);
	Other->NativeInstance = h_Other.get();
}

void Macad::Occt::Geom2d_Transformation::Transforms(double% X, double% Y)
{
	pin_ptr<double> pp_X = &X;
	pin_ptr<double> pp_Y = &Y;
	((::Geom2d_Transformation*)_NativeInstance)->Transforms(*(Standard_Real*)pp_X, *(Standard_Real*)pp_Y);
}

Macad::Occt::Geom2d_Transformation^ Macad::Occt::Geom2d_Transformation::Copy()
{
	Handle(::Geom2d_Transformation) _result;
	_result = ((::Geom2d_Transformation*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Transformation::CreateDowncasted( _result.get());
}


Macad::Occt::Geom2d_Transformation^ Macad::Occt::Geom2d_Transformation::CreateDowncasted(::Geom2d_Transformation* instance)
{
	return gcnew Macad::Occt::Geom2d_Transformation( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_TrimmedCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2d_TrimmedCurve::Geom2d_TrimmedCurve(Macad::Occt::Geom2d_Curve^ C, double U1, double U2, bool Sense, bool theAdjustPeriodic)
	: Macad::Occt::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	NativeInstance = new ::Geom2d_TrimmedCurve(h_C, U1, U2, Sense, theAdjustPeriodic);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom2d_TrimmedCurve::Geom2d_TrimmedCurve(Macad::Occt::Geom2d_Curve^ C, double U1, double U2, bool Sense)
	: Macad::Occt::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	NativeInstance = new ::Geom2d_TrimmedCurve(h_C, U1, U2, Sense, true);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom2d_TrimmedCurve::Geom2d_TrimmedCurve(Macad::Occt::Geom2d_Curve^ C, double U1, double U2)
	: Macad::Occt::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	NativeInstance = new ::Geom2d_TrimmedCurve(h_C, U1, U2, true, true);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom2d_TrimmedCurve::Geom2d_TrimmedCurve(Macad::Occt::Geom2d_TrimmedCurve^ parameter1)
	: Macad::Occt::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_TrimmedCurve(*(::Geom2d_TrimmedCurve*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2d_TrimmedCurve::Reverse()
{
	((::Geom2d_TrimmedCurve*)_NativeInstance)->Reverse();
}

double Macad::Occt::Geom2d_TrimmedCurve::ReversedParameter(double U)
{
	return ((::Geom2d_TrimmedCurve*)_NativeInstance)->ReversedParameter(U);
}

void Macad::Occt::Geom2d_TrimmedCurve::SetTrim(double U1, double U2, bool Sense, bool theAdjustPeriodic)
{
	((::Geom2d_TrimmedCurve*)_NativeInstance)->SetTrim(U1, U2, Sense, theAdjustPeriodic);
}

void Macad::Occt::Geom2d_TrimmedCurve::SetTrim(double U1, double U2, bool Sense)
{
	((::Geom2d_TrimmedCurve*)_NativeInstance)->SetTrim(U1, U2, Sense, true);
}

void Macad::Occt::Geom2d_TrimmedCurve::SetTrim(double U1, double U2)
{
	((::Geom2d_TrimmedCurve*)_NativeInstance)->SetTrim(U1, U2, true, true);
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::Geom2d_TrimmedCurve::BasisCurve()
{
	Handle(::Geom2d_Curve) _result;
	_result = ((::Geom2d_TrimmedCurve*)_NativeInstance)->BasisCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Geom2d_TrimmedCurve::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::Geom2d_TrimmedCurve*)_NativeInstance)->Continuity();
}

bool Macad::Occt::Geom2d_TrimmedCurve::IsCN(int N)
{
	return ((::Geom2d_TrimmedCurve*)_NativeInstance)->IsCN(N);
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_TrimmedCurve::EndPoint()
{
	return Macad::Occt::Pnt2d(((::Geom2d_TrimmedCurve*)_NativeInstance)->EndPoint());
}

double Macad::Occt::Geom2d_TrimmedCurve::FirstParameter()
{
	return ((::Geom2d_TrimmedCurve*)_NativeInstance)->FirstParameter();
}

bool Macad::Occt::Geom2d_TrimmedCurve::IsClosed()
{
	return ((::Geom2d_TrimmedCurve*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::Geom2d_TrimmedCurve::IsPeriodic()
{
	return ((::Geom2d_TrimmedCurve*)_NativeInstance)->IsPeriodic();
}

double Macad::Occt::Geom2d_TrimmedCurve::Period()
{
	return ((::Geom2d_TrimmedCurve*)_NativeInstance)->Period();
}

double Macad::Occt::Geom2d_TrimmedCurve::LastParameter()
{
	return ((::Geom2d_TrimmedCurve*)_NativeInstance)->LastParameter();
}

Macad::Occt::Pnt2d Macad::Occt::Geom2d_TrimmedCurve::StartPoint()
{
	return Macad::Occt::Pnt2d(((::Geom2d_TrimmedCurve*)_NativeInstance)->StartPoint());
}

void Macad::Occt::Geom2d_TrimmedCurve::D0(double U, Macad::Occt::Pnt2d% P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2d_TrimmedCurve*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Geom2d_TrimmedCurve::D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	((::Geom2d_TrimmedCurve*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::Geom2d_TrimmedCurve::D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	((::Geom2d_TrimmedCurve*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::Geom2d_TrimmedCurve::D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	((::Geom2d_TrimmedCurve*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

Macad::Occt::Vec2d Macad::Occt::Geom2d_TrimmedCurve::DN(double U, int N)
{
	return Macad::Occt::Vec2d(((::Geom2d_TrimmedCurve*)_NativeInstance)->DN(U, N));
}

void Macad::Occt::Geom2d_TrimmedCurve::Transform(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::Geom2d_TrimmedCurve*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

double Macad::Occt::Geom2d_TrimmedCurve::TransformedParameter(double U, Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	return ((::Geom2d_TrimmedCurve*)_NativeInstance)->TransformedParameter(U, *(gp_Trsf2d*)pp_T);
}

double Macad::Occt::Geom2d_TrimmedCurve::ParametricTransformation(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	return ((::Geom2d_TrimmedCurve*)_NativeInstance)->ParametricTransformation(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_TrimmedCurve::Copy()
{
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_TrimmedCurve*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}


Macad::Occt::Geom2d_TrimmedCurve^ Macad::Occt::Geom2d_TrimmedCurve::CreateDowncasted(::Geom2d_TrimmedCurve* instance)
{
	return gcnew Macad::Occt::Geom2d_TrimmedCurve( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_VectorWithMagnitude
//---------------------------------------------------------------------

Macad::Occt::Geom2d_VectorWithMagnitude::Geom2d_VectorWithMagnitude(Macad::Occt::Vec2d V)
	: Macad::Occt::Geom2d_Vector(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	NativeInstance = new ::Geom2d_VectorWithMagnitude(*(gp_Vec2d*)pp_V);
}

Macad::Occt::Geom2d_VectorWithMagnitude::Geom2d_VectorWithMagnitude(double X, double Y)
	: Macad::Occt::Geom2d_Vector(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_VectorWithMagnitude(X, Y);
}

Macad::Occt::Geom2d_VectorWithMagnitude::Geom2d_VectorWithMagnitude(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
	: Macad::Occt::Geom2d_Vector(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	NativeInstance = new ::Geom2d_VectorWithMagnitude(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::Geom2d_VectorWithMagnitude::Geom2d_VectorWithMagnitude(Macad::Occt::Geom2d_VectorWithMagnitude^ parameter1)
	: Macad::Occt::Geom2d_Vector(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2d_VectorWithMagnitude(*(::Geom2d_VectorWithMagnitude*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2d_VectorWithMagnitude::SetCoord(double X, double Y)
{
	((::Geom2d_VectorWithMagnitude*)_NativeInstance)->SetCoord(X, Y);
}

void Macad::Occt::Geom2d_VectorWithMagnitude::SetVec2d(Macad::Occt::Vec2d V)
{
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	((::Geom2d_VectorWithMagnitude*)_NativeInstance)->SetVec2d(*(gp_Vec2d*)pp_V);
}

void Macad::Occt::Geom2d_VectorWithMagnitude::SetX(double X)
{
	((::Geom2d_VectorWithMagnitude*)_NativeInstance)->SetX(X);
}

void Macad::Occt::Geom2d_VectorWithMagnitude::SetY(double Y)
{
	((::Geom2d_VectorWithMagnitude*)_NativeInstance)->SetY(Y);
}

double Macad::Occt::Geom2d_VectorWithMagnitude::Magnitude()
{
	return ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Magnitude();
}

double Macad::Occt::Geom2d_VectorWithMagnitude::SquareMagnitude()
{
	return ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->SquareMagnitude();
}

void Macad::Occt::Geom2d_VectorWithMagnitude::Add(Macad::Occt::Geom2d_Vector^ Other)
{
	Handle(::Geom2d_Vector) h_Other = Other->NativeInstance;
	((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Add(h_Other);
	Other->NativeInstance = h_Other.get();
}

Macad::Occt::Geom2d_VectorWithMagnitude^ Macad::Occt::Geom2d_VectorWithMagnitude::Added(Macad::Occt::Geom2d_Vector^ Other)
{
	Handle(::Geom2d_Vector) h_Other = Other->NativeInstance;
	Handle(::Geom2d_VectorWithMagnitude) _result;
	_result = ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Added(h_Other);
	Other->NativeInstance = h_Other.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_VectorWithMagnitude::CreateDowncasted( _result.get());
}

double Macad::Occt::Geom2d_VectorWithMagnitude::Crossed(Macad::Occt::Geom2d_Vector^ Other)
{
	Handle(::Geom2d_Vector) h_Other = Other->NativeInstance;
	return ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Crossed(h_Other);
	Other->NativeInstance = h_Other.get();
}

void Macad::Occt::Geom2d_VectorWithMagnitude::Divide(double Scalar)
{
	((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Divide(Scalar);
}

Macad::Occt::Geom2d_VectorWithMagnitude^ Macad::Occt::Geom2d_VectorWithMagnitude::Divided(double Scalar)
{
	Handle(::Geom2d_VectorWithMagnitude) _result;
	_result = ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Divided(Scalar);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_VectorWithMagnitude::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_VectorWithMagnitude^ Macad::Occt::Geom2d_VectorWithMagnitude::Multiplied(double Scalar)
{
	Handle(::Geom2d_VectorWithMagnitude) _result;
	_result = ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Multiplied(Scalar);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_VectorWithMagnitude::CreateDowncasted( _result.get());
}

void Macad::Occt::Geom2d_VectorWithMagnitude::Multiply(double Scalar)
{
	((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Multiply(Scalar);
}

void Macad::Occt::Geom2d_VectorWithMagnitude::Normalize()
{
	((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Normalize();
}

Macad::Occt::Geom2d_VectorWithMagnitude^ Macad::Occt::Geom2d_VectorWithMagnitude::Normalized()
{
	Handle(::Geom2d_VectorWithMagnitude) _result;
	_result = ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Normalized();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_VectorWithMagnitude::CreateDowncasted( _result.get());
}

void Macad::Occt::Geom2d_VectorWithMagnitude::Subtract(Macad::Occt::Geom2d_Vector^ Other)
{
	Handle(::Geom2d_Vector) h_Other = Other->NativeInstance;
	((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Subtract(h_Other);
	Other->NativeInstance = h_Other.get();
}

Macad::Occt::Geom2d_VectorWithMagnitude^ Macad::Occt::Geom2d_VectorWithMagnitude::Subtracted(Macad::Occt::Geom2d_Vector^ Other)
{
	Handle(::Geom2d_Vector) h_Other = Other->NativeInstance;
	Handle(::Geom2d_VectorWithMagnitude) _result;
	_result = ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Subtracted(h_Other);
	Other->NativeInstance = h_Other.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_VectorWithMagnitude::CreateDowncasted( _result.get());
}

void Macad::Occt::Geom2d_VectorWithMagnitude::Transform(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::Geom2d_Geometry^ Macad::Occt::Geom2d_VectorWithMagnitude::Copy()
{
	Handle(::Geom2d_Geometry) _result;
	_result = ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Geometry::CreateDowncasted( _result.get());
}


Macad::Occt::Geom2d_VectorWithMagnitude^ Macad::Occt::Geom2d_VectorWithMagnitude::CreateDowncasted(::Geom2d_VectorWithMagnitude* instance)
{
	return gcnew Macad::Occt::Geom2d_VectorWithMagnitude( instance );
}


