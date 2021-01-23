// Generated wrapper code for package Graphic3d

#include "OcctPCH.h"
#include "Graphic3d.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Graphic3d.h"
#include "Standard.h"
#include "NCollection.h"
#include "TCollection.h"
#include "gp.h"
#include "TopLoc.h"
#include "Quantity.h"
#include "Image.h"
#include "TColStd.h"
#include "Aspect.h"
#include "Bnd.h"
#include "V3d.h"
#include "Prs3d.h"


//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Vec2::Graphic3d_Vec2(float theXY)
	: BaseClass<::Graphic3d_Vec2>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Vec2(theXY);
}

Macad::Occt::Graphic3d_Vec2::Graphic3d_Vec2(float theX, float theY)
	: BaseClass<::Graphic3d_Vec2>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Vec2(theX, theY);
}

Macad::Occt::Graphic3d_Vec2::Graphic3d_Vec2(Macad::Occt::Graphic3d_Vec2^ theOtherVec2)
	: BaseClass<::Graphic3d_Vec2>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Vec2(*(::Graphic3d_Vec2*)theOtherVec2->NativeInstance);
}

int Macad::Occt::Graphic3d_Vec2::Length()
{
	return ::Graphic3d_Vec2::Length();
}

void Macad::Occt::Graphic3d_Vec2::SetValues(float theX, float theY)
{
	((::Graphic3d_Vec2*)_NativeInstance)->SetValues(theX, theY);
}

float Macad::Occt::Graphic3d_Vec2::x()
{
	return ((::Graphic3d_Vec2*)_NativeInstance)->x();
}

float Macad::Occt::Graphic3d_Vec2::y()
{
	return ((::Graphic3d_Vec2*)_NativeInstance)->y();
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_Vec2::xy()
{
	::Graphic3d_Vec2* _result = new ::Graphic3d_Vec2(0.0);
	*_result =  (::Graphic3d_Vec2)((::Graphic3d_Vec2*)_NativeInstance)->xy();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2(_result);
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_Vec2::yx()
{
	::Graphic3d_Vec2* _result = new ::Graphic3d_Vec2(0.0);
	*_result =  (::Graphic3d_Vec2)((::Graphic3d_Vec2*)_NativeInstance)->yx();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2(_result);
}

bool Macad::Occt::Graphic3d_Vec2::IsEqual(Macad::Occt::Graphic3d_Vec2^ theOther)
{
	return ((::Graphic3d_Vec2*)_NativeInstance)->IsEqual(*(::Graphic3d_Vec2*)theOther->NativeInstance);
}

float Macad::Occt::Graphic3d_Vec2::GetData()
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

float Macad::Occt::Graphic3d_Vec2::ChangeData()
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

void Macad::Occt::Graphic3d_Vec2::Multiply(float theFactor)
{
	((::Graphic3d_Vec2*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_Vec2::Multiplied(float theFactor)
{
	::Graphic3d_Vec2* _result = new ::Graphic3d_Vec2(0.0);
	*_result = ((::Graphic3d_Vec2*)_NativeInstance)->Multiplied(theFactor);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2(_result);
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_Vec2::cwiseMin(Macad::Occt::Graphic3d_Vec2^ theVec)
{
	::Graphic3d_Vec2* _result = new ::Graphic3d_Vec2(0.0);
	*_result = ((::Graphic3d_Vec2*)_NativeInstance)->cwiseMin(*(::Graphic3d_Vec2*)theVec->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2(_result);
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_Vec2::cwiseMax(Macad::Occt::Graphic3d_Vec2^ theVec)
{
	::Graphic3d_Vec2* _result = new ::Graphic3d_Vec2(0.0);
	*_result = ((::Graphic3d_Vec2*)_NativeInstance)->cwiseMax(*(::Graphic3d_Vec2*)theVec->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2(_result);
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_Vec2::cwiseAbs()
{
	::Graphic3d_Vec2* _result = new ::Graphic3d_Vec2(0.0);
	*_result = ((::Graphic3d_Vec2*)_NativeInstance)->cwiseAbs();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2(_result);
}

float Macad::Occt::Graphic3d_Vec2::maxComp()
{
	return ((::Graphic3d_Vec2*)_NativeInstance)->maxComp();
}

float Macad::Occt::Graphic3d_Vec2::minComp()
{
	return ((::Graphic3d_Vec2*)_NativeInstance)->minComp();
}

float Macad::Occt::Graphic3d_Vec2::Dot(Macad::Occt::Graphic3d_Vec2^ theOther)
{
	return ((::Graphic3d_Vec2*)_NativeInstance)->Dot(*(::Graphic3d_Vec2*)theOther->NativeInstance);
}

float Macad::Occt::Graphic3d_Vec2::Modulus()
{
	return ((::Graphic3d_Vec2*)_NativeInstance)->Modulus();
}

float Macad::Occt::Graphic3d_Vec2::SquareModulus()
{
	return ((::Graphic3d_Vec2*)_NativeInstance)->SquareModulus();
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_Vec2::DX()
{
	::Graphic3d_Vec2* _result = new ::Graphic3d_Vec2(0.0);
	*_result = ::Graphic3d_Vec2::DX();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2(_result);
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_Vec2::DY()
{
	::Graphic3d_Vec2* _result = new ::Graphic3d_Vec2(0.0);
	*_result = ::Graphic3d_Vec2::DY();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2(_result);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2d
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Vec2d::Graphic3d_Vec2d(double theXY)
	: BaseClass<::Graphic3d_Vec2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Vec2d(theXY);
}

Macad::Occt::Graphic3d_Vec2d::Graphic3d_Vec2d(double theX, double theY)
	: BaseClass<::Graphic3d_Vec2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Vec2d(theX, theY);
}

Macad::Occt::Graphic3d_Vec2d::Graphic3d_Vec2d(Macad::Occt::Graphic3d_Vec2d^ theOtherVec2)
	: BaseClass<::Graphic3d_Vec2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Vec2d(*(::Graphic3d_Vec2d*)theOtherVec2->NativeInstance);
}

int Macad::Occt::Graphic3d_Vec2d::Length()
{
	return ::Graphic3d_Vec2d::Length();
}

void Macad::Occt::Graphic3d_Vec2d::SetValues(double theX, double theY)
{
	((::Graphic3d_Vec2d*)_NativeInstance)->SetValues(theX, theY);
}

double Macad::Occt::Graphic3d_Vec2d::x()
{
	return ((::Graphic3d_Vec2d*)_NativeInstance)->x();
}

double Macad::Occt::Graphic3d_Vec2d::y()
{
	return ((::Graphic3d_Vec2d*)_NativeInstance)->y();
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec2d::xy()
{
	::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d(0.0);
	*_result =  (::Graphic3d_Vec2d)((::Graphic3d_Vec2d*)_NativeInstance)->xy();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec2d::yx()
{
	::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d(0.0);
	*_result =  (::Graphic3d_Vec2d)((::Graphic3d_Vec2d*)_NativeInstance)->yx();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

bool Macad::Occt::Graphic3d_Vec2d::IsEqual(Macad::Occt::Graphic3d_Vec2d^ theOther)
{
	return ((::Graphic3d_Vec2d*)_NativeInstance)->IsEqual(*(::Graphic3d_Vec2d*)theOther->NativeInstance);
}

double Macad::Occt::Graphic3d_Vec2d::GetData()
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

double Macad::Occt::Graphic3d_Vec2d::ChangeData()
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

void Macad::Occt::Graphic3d_Vec2d::Multiply(double theFactor)
{
	((::Graphic3d_Vec2d*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec2d::Multiplied(double theFactor)
{
	::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d(0.0);
	*_result = ((::Graphic3d_Vec2d*)_NativeInstance)->Multiplied(theFactor);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec2d::cwiseMin(Macad::Occt::Graphic3d_Vec2d^ theVec)
{
	::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d(0.0);
	*_result = ((::Graphic3d_Vec2d*)_NativeInstance)->cwiseMin(*(::Graphic3d_Vec2d*)theVec->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec2d::cwiseMax(Macad::Occt::Graphic3d_Vec2d^ theVec)
{
	::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d(0.0);
	*_result = ((::Graphic3d_Vec2d*)_NativeInstance)->cwiseMax(*(::Graphic3d_Vec2d*)theVec->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec2d::cwiseAbs()
{
	::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d(0.0);
	*_result = ((::Graphic3d_Vec2d*)_NativeInstance)->cwiseAbs();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

double Macad::Occt::Graphic3d_Vec2d::maxComp()
{
	return ((::Graphic3d_Vec2d*)_NativeInstance)->maxComp();
}

double Macad::Occt::Graphic3d_Vec2d::minComp()
{
	return ((::Graphic3d_Vec2d*)_NativeInstance)->minComp();
}

double Macad::Occt::Graphic3d_Vec2d::Dot(Macad::Occt::Graphic3d_Vec2d^ theOther)
{
	return ((::Graphic3d_Vec2d*)_NativeInstance)->Dot(*(::Graphic3d_Vec2d*)theOther->NativeInstance);
}

double Macad::Occt::Graphic3d_Vec2d::Modulus()
{
	return ((::Graphic3d_Vec2d*)_NativeInstance)->Modulus();
}

double Macad::Occt::Graphic3d_Vec2d::SquareModulus()
{
	return ((::Graphic3d_Vec2d*)_NativeInstance)->SquareModulus();
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec2d::DX()
{
	::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d(0.0);
	*_result = ::Graphic3d_Vec2d::DX();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec2d::DY()
{
	::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d(0.0);
	*_result = ::Graphic3d_Vec2d::DY();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2i
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Vec2i::Graphic3d_Vec2i(int theXY)
	: BaseClass<::Graphic3d_Vec2i>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Vec2i(theXY);
}

Macad::Occt::Graphic3d_Vec2i::Graphic3d_Vec2i(int theX, int theY)
	: BaseClass<::Graphic3d_Vec2i>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Vec2i(theX, theY);
}

Macad::Occt::Graphic3d_Vec2i::Graphic3d_Vec2i(Macad::Occt::Graphic3d_Vec2i^ theOtherVec2)
	: BaseClass<::Graphic3d_Vec2i>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Vec2i(*(::Graphic3d_Vec2i*)theOtherVec2->NativeInstance);
}

int Macad::Occt::Graphic3d_Vec2i::Length()
{
	return ::Graphic3d_Vec2i::Length();
}

void Macad::Occt::Graphic3d_Vec2i::SetValues(int theX, int theY)
{
	((::Graphic3d_Vec2i*)_NativeInstance)->SetValues(theX, theY);
}

int Macad::Occt::Graphic3d_Vec2i::x()
{
	return ((::Graphic3d_Vec2i*)_NativeInstance)->x();
}

int Macad::Occt::Graphic3d_Vec2i::y()
{
	return ((::Graphic3d_Vec2i*)_NativeInstance)->y();
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec2i::xy()
{
	::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i(0);
	*_result =  (::Graphic3d_Vec2i)((::Graphic3d_Vec2i*)_NativeInstance)->xy();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec2i::yx()
{
	::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i(0);
	*_result =  (::Graphic3d_Vec2i)((::Graphic3d_Vec2i*)_NativeInstance)->yx();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

bool Macad::Occt::Graphic3d_Vec2i::IsEqual(Macad::Occt::Graphic3d_Vec2i^ theOther)
{
	return ((::Graphic3d_Vec2i*)_NativeInstance)->IsEqual(*(::Graphic3d_Vec2i*)theOther->NativeInstance);
}

int Macad::Occt::Graphic3d_Vec2i::GetData()
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

int Macad::Occt::Graphic3d_Vec2i::ChangeData()
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

void Macad::Occt::Graphic3d_Vec2i::Multiply(int theFactor)
{
	((::Graphic3d_Vec2i*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec2i::Multiplied(int theFactor)
{
	::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i(0);
	*_result = ((::Graphic3d_Vec2i*)_NativeInstance)->Multiplied(theFactor);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec2i::cwiseMin(Macad::Occt::Graphic3d_Vec2i^ theVec)
{
	::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i(0);
	*_result = ((::Graphic3d_Vec2i*)_NativeInstance)->cwiseMin(*(::Graphic3d_Vec2i*)theVec->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec2i::cwiseMax(Macad::Occt::Graphic3d_Vec2i^ theVec)
{
	::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i(0);
	*_result = ((::Graphic3d_Vec2i*)_NativeInstance)->cwiseMax(*(::Graphic3d_Vec2i*)theVec->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec2i::cwiseAbs()
{
	::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i(0);
	*_result = ((::Graphic3d_Vec2i*)_NativeInstance)->cwiseAbs();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

int Macad::Occt::Graphic3d_Vec2i::maxComp()
{
	return ((::Graphic3d_Vec2i*)_NativeInstance)->maxComp();
}

int Macad::Occt::Graphic3d_Vec2i::minComp()
{
	return ((::Graphic3d_Vec2i*)_NativeInstance)->minComp();
}

int Macad::Occt::Graphic3d_Vec2i::Dot(Macad::Occt::Graphic3d_Vec2i^ theOther)
{
	return ((::Graphic3d_Vec2i*)_NativeInstance)->Dot(*(::Graphic3d_Vec2i*)theOther->NativeInstance);
}

int Macad::Occt::Graphic3d_Vec2i::Modulus()
{
	return ((::Graphic3d_Vec2i*)_NativeInstance)->Modulus();
}

int Macad::Occt::Graphic3d_Vec2i::SquareModulus()
{
	return ((::Graphic3d_Vec2i*)_NativeInstance)->SquareModulus();
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec2i::DX()
{
	::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i(0);
	*_result = ::Graphic3d_Vec2i::DX();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec2i::DY()
{
	::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i(0);
	*_result = ::Graphic3d_Vec2i::DY();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2b
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Vec2b::Graphic3d_Vec2b(char theXY)
	: BaseClass<::Graphic3d_Vec2b>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Vec2b(theXY);
}

Macad::Occt::Graphic3d_Vec2b::Graphic3d_Vec2b(char theX, char theY)
	: BaseClass<::Graphic3d_Vec2b>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Vec2b(theX, theY);
}

Macad::Occt::Graphic3d_Vec2b::Graphic3d_Vec2b(Macad::Occt::Graphic3d_Vec2b^ theOtherVec2)
	: BaseClass<::Graphic3d_Vec2b>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Vec2b(*(::Graphic3d_Vec2b*)theOtherVec2->NativeInstance);
}

int Macad::Occt::Graphic3d_Vec2b::Length()
{
	return ::Graphic3d_Vec2b::Length();
}

void Macad::Occt::Graphic3d_Vec2b::SetValues(char theX, char theY)
{
	((::Graphic3d_Vec2b*)_NativeInstance)->SetValues(theX, theY);
}

char Macad::Occt::Graphic3d_Vec2b::x()
{
	return ((::Graphic3d_Vec2b*)_NativeInstance)->x();
}

char Macad::Occt::Graphic3d_Vec2b::y()
{
	return ((::Graphic3d_Vec2b*)_NativeInstance)->y();
}

Macad::Occt::Graphic3d_Vec2b^ Macad::Occt::Graphic3d_Vec2b::xy()
{
	::Graphic3d_Vec2b* _result = new ::Graphic3d_Vec2b(0);
	*_result =  (::Graphic3d_Vec2b)((::Graphic3d_Vec2b*)_NativeInstance)->xy();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2b(_result);
}

Macad::Occt::Graphic3d_Vec2b^ Macad::Occt::Graphic3d_Vec2b::yx()
{
	::Graphic3d_Vec2b* _result = new ::Graphic3d_Vec2b(0);
	*_result =  (::Graphic3d_Vec2b)((::Graphic3d_Vec2b*)_NativeInstance)->yx();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2b(_result);
}

bool Macad::Occt::Graphic3d_Vec2b::IsEqual(Macad::Occt::Graphic3d_Vec2b^ theOther)
{
	return ((::Graphic3d_Vec2b*)_NativeInstance)->IsEqual(*(::Graphic3d_Vec2b*)theOther->NativeInstance);
}

char Macad::Occt::Graphic3d_Vec2b::GetData()
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

char Macad::Occt::Graphic3d_Vec2b::ChangeData()
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

void Macad::Occt::Graphic3d_Vec2b::Multiply(char theFactor)
{
	((::Graphic3d_Vec2b*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::Graphic3d_Vec2b^ Macad::Occt::Graphic3d_Vec2b::Multiplied(char theFactor)
{
	::Graphic3d_Vec2b* _result = new ::Graphic3d_Vec2b(0);
	*_result = ((::Graphic3d_Vec2b*)_NativeInstance)->Multiplied(theFactor);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2b(_result);
}

Macad::Occt::Graphic3d_Vec2b^ Macad::Occt::Graphic3d_Vec2b::cwiseMin(Macad::Occt::Graphic3d_Vec2b^ theVec)
{
	::Graphic3d_Vec2b* _result = new ::Graphic3d_Vec2b(0);
	*_result = ((::Graphic3d_Vec2b*)_NativeInstance)->cwiseMin(*(::Graphic3d_Vec2b*)theVec->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2b(_result);
}

Macad::Occt::Graphic3d_Vec2b^ Macad::Occt::Graphic3d_Vec2b::cwiseMax(Macad::Occt::Graphic3d_Vec2b^ theVec)
{
	::Graphic3d_Vec2b* _result = new ::Graphic3d_Vec2b(0);
	*_result = ((::Graphic3d_Vec2b*)_NativeInstance)->cwiseMax(*(::Graphic3d_Vec2b*)theVec->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2b(_result);
}

Macad::Occt::Graphic3d_Vec2b^ Macad::Occt::Graphic3d_Vec2b::cwiseAbs()
{
	::Graphic3d_Vec2b* _result = new ::Graphic3d_Vec2b(0);
	*_result = ((::Graphic3d_Vec2b*)_NativeInstance)->cwiseAbs();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2b(_result);
}

char Macad::Occt::Graphic3d_Vec2b::maxComp()
{
	return ((::Graphic3d_Vec2b*)_NativeInstance)->maxComp();
}

char Macad::Occt::Graphic3d_Vec2b::minComp()
{
	return ((::Graphic3d_Vec2b*)_NativeInstance)->minComp();
}

char Macad::Occt::Graphic3d_Vec2b::Dot(Macad::Occt::Graphic3d_Vec2b^ theOther)
{
	return ((::Graphic3d_Vec2b*)_NativeInstance)->Dot(*(::Graphic3d_Vec2b*)theOther->NativeInstance);
}

char Macad::Occt::Graphic3d_Vec2b::Modulus()
{
	return ((::Graphic3d_Vec2b*)_NativeInstance)->Modulus();
}

char Macad::Occt::Graphic3d_Vec2b::SquareModulus()
{
	return ((::Graphic3d_Vec2b*)_NativeInstance)->SquareModulus();
}

Macad::Occt::Graphic3d_Vec2b^ Macad::Occt::Graphic3d_Vec2b::DX()
{
	::Graphic3d_Vec2b* _result = new ::Graphic3d_Vec2b(0);
	*_result = ::Graphic3d_Vec2b::DX();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2b(_result);
}

Macad::Occt::Graphic3d_Vec2b^ Macad::Occt::Graphic3d_Vec2b::DY()
{
	::Graphic3d_Vec2b* _result = new ::Graphic3d_Vec2b(0);
	*_result = ::Graphic3d_Vec2b::DY();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2b(_result);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_Array1OfAttribute
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Array1OfAttribute::Graphic3d_Array1OfAttribute()
	: BaseClass<::Graphic3d_Array1OfAttribute>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Array1OfAttribute();
}

Macad::Occt::Graphic3d_Array1OfAttribute::Graphic3d_Array1OfAttribute(int theLower, int theUpper)
	: BaseClass<::Graphic3d_Array1OfAttribute>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Array1OfAttribute(theLower, theUpper);
}

Macad::Occt::Graphic3d_Array1OfAttribute::Graphic3d_Array1OfAttribute(Macad::Occt::Graphic3d_Array1OfAttribute^ theOther)
	: BaseClass<::Graphic3d_Array1OfAttribute>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Array1OfAttribute(*(::Graphic3d_Array1OfAttribute*)theOther->NativeInstance);
}

Macad::Occt::Graphic3d_Array1OfAttribute::Graphic3d_Array1OfAttribute(Macad::Occt::Graphic3d_Attribute^ theBegin, int theLower, int theUpper)
	: BaseClass<::Graphic3d_Array1OfAttribute>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Array1OfAttribute(*(::Graphic3d_Attribute*)theBegin->NativeInstance, theLower, theUpper);
}

void Macad::Occt::Graphic3d_Array1OfAttribute::Init(Macad::Occt::Graphic3d_Attribute^ theValue)
{
	((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Init(*(::Graphic3d_Attribute*)theValue->NativeInstance);
}

int Macad::Occt::Graphic3d_Array1OfAttribute::Size()
{
	return ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Size();
}

int Macad::Occt::Graphic3d_Array1OfAttribute::Length()
{
	return ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Length();
}

bool Macad::Occt::Graphic3d_Array1OfAttribute::IsEmpty()
{
	return ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::Graphic3d_Array1OfAttribute::Lower()
{
	return ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Lower();
}

int Macad::Occt::Graphic3d_Array1OfAttribute::Upper()
{
	return ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Upper();
}

bool Macad::Occt::Graphic3d_Array1OfAttribute::IsDeletable()
{
	return ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::Graphic3d_Array1OfAttribute::IsAllocated()
{
	return ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->IsAllocated();
}

Macad::Occt::Graphic3d_Array1OfAttribute^ Macad::Occt::Graphic3d_Array1OfAttribute::Assign(Macad::Occt::Graphic3d_Array1OfAttribute^ theOther)
{
	::Graphic3d_Array1OfAttribute* _result = new ::Graphic3d_Array1OfAttribute();
	*_result = ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Assign(*(::Graphic3d_Array1OfAttribute*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Array1OfAttribute(_result);
}

Macad::Occt::Graphic3d_Array1OfAttribute^ Macad::Occt::Graphic3d_Array1OfAttribute::Move(Macad::Occt::Graphic3d_Array1OfAttribute^ theOther)
{
	::Graphic3d_Array1OfAttribute* _result = new ::Graphic3d_Array1OfAttribute();
	*_result = ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Move(*(::Graphic3d_Array1OfAttribute*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Array1OfAttribute(_result);
}

Macad::Occt::Graphic3d_Attribute^ Macad::Occt::Graphic3d_Array1OfAttribute::First()
{
	::Graphic3d_Attribute* _result = new ::Graphic3d_Attribute();
	*_result =  (::Graphic3d_Attribute)((::Graphic3d_Array1OfAttribute*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Attribute(_result);
}

Macad::Occt::Graphic3d_Attribute^ Macad::Occt::Graphic3d_Array1OfAttribute::ChangeFirst()
{
	::Graphic3d_Attribute* _result = new ::Graphic3d_Attribute();
	*_result = ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Attribute(_result);
}

Macad::Occt::Graphic3d_Attribute^ Macad::Occt::Graphic3d_Array1OfAttribute::Last()
{
	::Graphic3d_Attribute* _result = new ::Graphic3d_Attribute();
	*_result =  (::Graphic3d_Attribute)((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Attribute(_result);
}

Macad::Occt::Graphic3d_Attribute^ Macad::Occt::Graphic3d_Array1OfAttribute::ChangeLast()
{
	::Graphic3d_Attribute* _result = new ::Graphic3d_Attribute();
	*_result = ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Attribute(_result);
}

Macad::Occt::Graphic3d_Attribute^ Macad::Occt::Graphic3d_Array1OfAttribute::Value(int theIndex)
{
	::Graphic3d_Attribute* _result = new ::Graphic3d_Attribute();
	*_result =  (::Graphic3d_Attribute)((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Attribute(_result);
}

Macad::Occt::Graphic3d_Attribute^ Macad::Occt::Graphic3d_Array1OfAttribute::ChangeValue(int theIndex)
{
	::Graphic3d_Attribute* _result = new ::Graphic3d_Attribute();
	*_result = ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Attribute(_result);
}

void Macad::Occt::Graphic3d_Array1OfAttribute::SetValue(int theIndex, Macad::Occt::Graphic3d_Attribute^ theItem)
{
	((::Graphic3d_Array1OfAttribute*)_NativeInstance)->SetValue(theIndex, *(::Graphic3d_Attribute*)theItem->NativeInstance);
}

void Macad::Occt::Graphic3d_Array1OfAttribute::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderObjectList
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ShaderObjectList::Graphic3d_ShaderObjectList()
	: BaseClass<::Graphic3d_ShaderObjectList>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_ShaderObjectList();
}

Macad::Occt::Graphic3d_ShaderObjectList::Graphic3d_ShaderObjectList(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Graphic3d_ShaderObjectList>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Graphic3d_ShaderObjectList(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Graphic3d_ShaderObjectList::Graphic3d_ShaderObjectList(Macad::Occt::Graphic3d_ShaderObjectList^ theOther)
	: BaseClass<::Graphic3d_ShaderObjectList>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_ShaderObjectList(*(::Graphic3d_ShaderObjectList*)theOther->NativeInstance);
}

int Macad::Occt::Graphic3d_ShaderObjectList::Size()
{
	return ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Size();
}

int Macad::Occt::Graphic3d_ShaderObjectList::Length()
{
	return ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Length();
}

int Macad::Occt::Graphic3d_ShaderObjectList::Lower()
{
	return ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Lower();
}

int Macad::Occt::Graphic3d_ShaderObjectList::Upper()
{
	return ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Upper();
}

bool Macad::Occt::Graphic3d_ShaderObjectList::IsEmpty()
{
	return ((::Graphic3d_ShaderObjectList*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::Graphic3d_ShaderObjectList::Reverse()
{
	((::Graphic3d_ShaderObjectList*)_NativeInstance)->Reverse();
}

void Macad::Occt::Graphic3d_ShaderObjectList::Exchange(int I, int J)
{
	((::Graphic3d_ShaderObjectList*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Graphic3d_ShaderObjectList::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Graphic3d_ShaderObjectList*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Graphic3d_ShaderObjectList::Clear()
{
	((::Graphic3d_ShaderObjectList*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Graphic3d_ShaderObjectList^ Macad::Occt::Graphic3d_ShaderObjectList::Assign(Macad::Occt::Graphic3d_ShaderObjectList^ theOther)
{
	::Graphic3d_ShaderObjectList* _result = new ::Graphic3d_ShaderObjectList();
	*_result = ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Assign(*(::Graphic3d_ShaderObjectList*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ShaderObjectList(_result);
}

void Macad::Occt::Graphic3d_ShaderObjectList::Remove(int theIndex)
{
	((::Graphic3d_ShaderObjectList*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Graphic3d_ShaderObjectList::Remove(int theFromIndex, int theToIndex)
{
	((::Graphic3d_ShaderObjectList*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Graphic3d_ShaderObjectList::Append(Macad::Occt::Graphic3d_ShaderObject^ theItem)
{
	Handle(::Graphic3d_ShaderObject) h_theItem = theItem->NativeInstance;
	((::Graphic3d_ShaderObjectList*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Graphic3d_ShaderObjectList::Append(Macad::Occt::Graphic3d_ShaderObjectList^ theSeq)
{
	((::Graphic3d_ShaderObjectList*)_NativeInstance)->Append(*(::Graphic3d_ShaderObjectList*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_ShaderObjectList::Prepend(Macad::Occt::Graphic3d_ShaderObject^ theItem)
{
	Handle(::Graphic3d_ShaderObject) h_theItem = theItem->NativeInstance;
	((::Graphic3d_ShaderObjectList*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Graphic3d_ShaderObjectList::Prepend(Macad::Occt::Graphic3d_ShaderObjectList^ theSeq)
{
	((::Graphic3d_ShaderObjectList*)_NativeInstance)->Prepend(*(::Graphic3d_ShaderObjectList*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_ShaderObjectList::InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderObject^ theItem)
{
	Handle(::Graphic3d_ShaderObject) h_theItem = theItem->NativeInstance;
	((::Graphic3d_ShaderObjectList*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Graphic3d_ShaderObjectList::InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderObjectList^ theSeq)
{
	((::Graphic3d_ShaderObjectList*)_NativeInstance)->InsertBefore(theIndex, *(::Graphic3d_ShaderObjectList*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_ShaderObjectList::InsertAfter(int theIndex, Macad::Occt::Graphic3d_ShaderObjectList^ theSeq)
{
	((::Graphic3d_ShaderObjectList*)_NativeInstance)->InsertAfter(theIndex, *(::Graphic3d_ShaderObjectList*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_ShaderObjectList::InsertAfter(int theIndex, Macad::Occt::Graphic3d_ShaderObject^ theItem)
{
	Handle(::Graphic3d_ShaderObject) h_theItem = theItem->NativeInstance;
	((::Graphic3d_ShaderObjectList*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Graphic3d_ShaderObjectList::Split(int theIndex, Macad::Occt::Graphic3d_ShaderObjectList^ theSeq)
{
	((::Graphic3d_ShaderObjectList*)_NativeInstance)->Split(theIndex, *(::Graphic3d_ShaderObjectList*)theSeq->NativeInstance);
}

Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObjectList::First()
{
	Handle(::Graphic3d_ShaderObject) _result;
	_result = ((::Graphic3d_ShaderObjectList*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObjectList::ChangeFirst()
{
	Handle(::Graphic3d_ShaderObject) _result;
	_result = ((::Graphic3d_ShaderObjectList*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObjectList::Last()
{
	Handle(::Graphic3d_ShaderObject) _result;
	_result = ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObjectList::ChangeLast()
{
	Handle(::Graphic3d_ShaderObject) _result;
	_result = ((::Graphic3d_ShaderObjectList*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObjectList::Value(int theIndex)
{
	Handle(::Graphic3d_ShaderObject) _result;
	_result = ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObjectList::ChangeValue(int theIndex)
{
	Handle(::Graphic3d_ShaderObject) _result;
	_result = ((::Graphic3d_ShaderObjectList*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_ShaderObjectList::SetValue(int theIndex, Macad::Occt::Graphic3d_ShaderObject^ theItem)
{
	Handle(::Graphic3d_ShaderObject) h_theItem = theItem->NativeInstance;
	((::Graphic3d_ShaderObjectList*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderVariableList
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ShaderVariableList::Graphic3d_ShaderVariableList()
	: BaseClass<::Graphic3d_ShaderVariableList>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_ShaderVariableList();
}

Macad::Occt::Graphic3d_ShaderVariableList::Graphic3d_ShaderVariableList(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Graphic3d_ShaderVariableList>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Graphic3d_ShaderVariableList(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Graphic3d_ShaderVariableList::Graphic3d_ShaderVariableList(Macad::Occt::Graphic3d_ShaderVariableList^ theOther)
	: BaseClass<::Graphic3d_ShaderVariableList>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_ShaderVariableList(*(::Graphic3d_ShaderVariableList*)theOther->NativeInstance);
}

int Macad::Occt::Graphic3d_ShaderVariableList::Size()
{
	return ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Size();
}

int Macad::Occt::Graphic3d_ShaderVariableList::Length()
{
	return ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Length();
}

int Macad::Occt::Graphic3d_ShaderVariableList::Lower()
{
	return ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Lower();
}

int Macad::Occt::Graphic3d_ShaderVariableList::Upper()
{
	return ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Upper();
}

bool Macad::Occt::Graphic3d_ShaderVariableList::IsEmpty()
{
	return ((::Graphic3d_ShaderVariableList*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::Graphic3d_ShaderVariableList::Reverse()
{
	((::Graphic3d_ShaderVariableList*)_NativeInstance)->Reverse();
}

void Macad::Occt::Graphic3d_ShaderVariableList::Exchange(int I, int J)
{
	((::Graphic3d_ShaderVariableList*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Graphic3d_ShaderVariableList::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Graphic3d_ShaderVariableList*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Graphic3d_ShaderVariableList::Clear()
{
	((::Graphic3d_ShaderVariableList*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Graphic3d_ShaderVariableList^ Macad::Occt::Graphic3d_ShaderVariableList::Assign(Macad::Occt::Graphic3d_ShaderVariableList^ theOther)
{
	::Graphic3d_ShaderVariableList* _result = new ::Graphic3d_ShaderVariableList();
	*_result = ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Assign(*(::Graphic3d_ShaderVariableList*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ShaderVariableList(_result);
}

void Macad::Occt::Graphic3d_ShaderVariableList::Remove(int theIndex)
{
	((::Graphic3d_ShaderVariableList*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Graphic3d_ShaderVariableList::Remove(int theFromIndex, int theToIndex)
{
	((::Graphic3d_ShaderVariableList*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Graphic3d_ShaderVariableList::Append(Macad::Occt::Graphic3d_ShaderVariableList^ theSeq)
{
	((::Graphic3d_ShaderVariableList*)_NativeInstance)->Append(*(::Graphic3d_ShaderVariableList*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_ShaderVariableList::Prepend(Macad::Occt::Graphic3d_ShaderVariableList^ theSeq)
{
	((::Graphic3d_ShaderVariableList*)_NativeInstance)->Prepend(*(::Graphic3d_ShaderVariableList*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_ShaderVariableList::InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderVariableList^ theSeq)
{
	((::Graphic3d_ShaderVariableList*)_NativeInstance)->InsertBefore(theIndex, *(::Graphic3d_ShaderVariableList*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_ShaderVariableList::InsertAfter(int theIndex, Macad::Occt::Graphic3d_ShaderVariableList^ theSeq)
{
	((::Graphic3d_ShaderVariableList*)_NativeInstance)->InsertAfter(theIndex, *(::Graphic3d_ShaderVariableList*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_ShaderVariableList::Split(int theIndex, Macad::Occt::Graphic3d_ShaderVariableList^ theSeq)
{
	((::Graphic3d_ShaderVariableList*)_NativeInstance)->Split(theIndex, *(::Graphic3d_ShaderVariableList*)theSeq->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderAttributeList
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ShaderAttributeList::Graphic3d_ShaderAttributeList()
	: BaseClass<::Graphic3d_ShaderAttributeList>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_ShaderAttributeList();
}

Macad::Occt::Graphic3d_ShaderAttributeList::Graphic3d_ShaderAttributeList(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Graphic3d_ShaderAttributeList>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Graphic3d_ShaderAttributeList(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Graphic3d_ShaderAttributeList::Graphic3d_ShaderAttributeList(Macad::Occt::Graphic3d_ShaderAttributeList^ theOther)
	: BaseClass<::Graphic3d_ShaderAttributeList>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_ShaderAttributeList(*(::Graphic3d_ShaderAttributeList*)theOther->NativeInstance);
}

int Macad::Occt::Graphic3d_ShaderAttributeList::Size()
{
	return ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Size();
}

int Macad::Occt::Graphic3d_ShaderAttributeList::Length()
{
	return ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Length();
}

int Macad::Occt::Graphic3d_ShaderAttributeList::Lower()
{
	return ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Lower();
}

int Macad::Occt::Graphic3d_ShaderAttributeList::Upper()
{
	return ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Upper();
}

bool Macad::Occt::Graphic3d_ShaderAttributeList::IsEmpty()
{
	return ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Reverse()
{
	((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Reverse();
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Exchange(int I, int J)
{
	((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Clear()
{
	((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Graphic3d_ShaderAttributeList^ Macad::Occt::Graphic3d_ShaderAttributeList::Assign(Macad::Occt::Graphic3d_ShaderAttributeList^ theOther)
{
	::Graphic3d_ShaderAttributeList* _result = new ::Graphic3d_ShaderAttributeList();
	*_result = ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Assign(*(::Graphic3d_ShaderAttributeList*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ShaderAttributeList(_result);
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Remove(int theIndex)
{
	((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Remove(int theFromIndex, int theToIndex)
{
	((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Append(Macad::Occt::Graphic3d_ShaderAttribute^ theItem)
{
	Handle(::Graphic3d_ShaderAttribute) h_theItem = theItem->NativeInstance;
	((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Append(Macad::Occt::Graphic3d_ShaderAttributeList^ theSeq)
{
	((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Append(*(::Graphic3d_ShaderAttributeList*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Prepend(Macad::Occt::Graphic3d_ShaderAttribute^ theItem)
{
	Handle(::Graphic3d_ShaderAttribute) h_theItem = theItem->NativeInstance;
	((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Prepend(Macad::Occt::Graphic3d_ShaderAttributeList^ theSeq)
{
	((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Prepend(*(::Graphic3d_ShaderAttributeList*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_ShaderAttributeList::InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderAttribute^ theItem)
{
	Handle(::Graphic3d_ShaderAttribute) h_theItem = theItem->NativeInstance;
	((::Graphic3d_ShaderAttributeList*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Graphic3d_ShaderAttributeList::InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderAttributeList^ theSeq)
{
	((::Graphic3d_ShaderAttributeList*)_NativeInstance)->InsertBefore(theIndex, *(::Graphic3d_ShaderAttributeList*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_ShaderAttributeList::InsertAfter(int theIndex, Macad::Occt::Graphic3d_ShaderAttributeList^ theSeq)
{
	((::Graphic3d_ShaderAttributeList*)_NativeInstance)->InsertAfter(theIndex, *(::Graphic3d_ShaderAttributeList*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_ShaderAttributeList::InsertAfter(int theIndex, Macad::Occt::Graphic3d_ShaderAttribute^ theItem)
{
	Handle(::Graphic3d_ShaderAttribute) h_theItem = theItem->NativeInstance;
	((::Graphic3d_ShaderAttributeList*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Split(int theIndex, Macad::Occt::Graphic3d_ShaderAttributeList^ theSeq)
{
	((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Split(theIndex, *(::Graphic3d_ShaderAttributeList*)theSeq->NativeInstance);
}

Macad::Occt::Graphic3d_ShaderAttribute^ Macad::Occt::Graphic3d_ShaderAttributeList::First()
{
	Handle(::Graphic3d_ShaderAttribute) _result;
	_result = ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderAttribute::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_ShaderAttribute^ Macad::Occt::Graphic3d_ShaderAttributeList::ChangeFirst()
{
	Handle(::Graphic3d_ShaderAttribute) _result;
	_result = ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderAttribute::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_ShaderAttribute^ Macad::Occt::Graphic3d_ShaderAttributeList::Last()
{
	Handle(::Graphic3d_ShaderAttribute) _result;
	_result = ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderAttribute::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_ShaderAttribute^ Macad::Occt::Graphic3d_ShaderAttributeList::ChangeLast()
{
	Handle(::Graphic3d_ShaderAttribute) _result;
	_result = ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderAttribute::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_ShaderAttribute^ Macad::Occt::Graphic3d_ShaderAttributeList::Value(int theIndex)
{
	Handle(::Graphic3d_ShaderAttribute) _result;
	_result = ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderAttribute::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_ShaderAttribute^ Macad::Occt::Graphic3d_ShaderAttributeList::ChangeValue(int theIndex)
{
	Handle(::Graphic3d_ShaderAttribute) _result;
	_result = ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderAttribute::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_ShaderAttributeList::SetValue(int theIndex, Macad::Occt::Graphic3d_ShaderAttribute^ theItem)
{
	Handle(::Graphic3d_ShaderAttribute) h_theItem = theItem->NativeInstance;
	((::Graphic3d_ShaderAttributeList*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  Graphic3d_MapOfAspectsToAspects
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_MapOfAspectsToAspects::Graphic3d_MapOfAspectsToAspects()
	: BaseClass<::Graphic3d_MapOfAspectsToAspects>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_MapOfAspectsToAspects();
}

Macad::Occt::Graphic3d_MapOfAspectsToAspects::Graphic3d_MapOfAspectsToAspects(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Graphic3d_MapOfAspectsToAspects>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Graphic3d_MapOfAspectsToAspects(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Graphic3d_MapOfAspectsToAspects::Graphic3d_MapOfAspectsToAspects(int theNbBuckets)
	: BaseClass<::Graphic3d_MapOfAspectsToAspects>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_MapOfAspectsToAspects(theNbBuckets, 0L);
}

Macad::Occt::Graphic3d_MapOfAspectsToAspects::Graphic3d_MapOfAspectsToAspects(Macad::Occt::Graphic3d_MapOfAspectsToAspects^ theOther)
	: BaseClass<::Graphic3d_MapOfAspectsToAspects>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_MapOfAspectsToAspects(*(::Graphic3d_MapOfAspectsToAspects*)theOther->NativeInstance);
}

void Macad::Occt::Graphic3d_MapOfAspectsToAspects::Exchange(Macad::Occt::Graphic3d_MapOfAspectsToAspects^ theOther)
{
	((::Graphic3d_MapOfAspectsToAspects*)_NativeInstance)->Exchange(*(::Graphic3d_MapOfAspectsToAspects*)theOther->NativeInstance);
}

Macad::Occt::Graphic3d_MapOfAspectsToAspects^ Macad::Occt::Graphic3d_MapOfAspectsToAspects::Assign(Macad::Occt::Graphic3d_MapOfAspectsToAspects^ theOther)
{
	::Graphic3d_MapOfAspectsToAspects* _result = new ::Graphic3d_MapOfAspectsToAspects();
	*_result = ((::Graphic3d_MapOfAspectsToAspects*)_NativeInstance)->Assign(*(::Graphic3d_MapOfAspectsToAspects*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MapOfAspectsToAspects(_result);
}

Macad::Occt::Graphic3d_Aspects^ Macad::Occt::Graphic3d_MapOfAspectsToAspects::Bound(Macad::Occt::Graphic3d_Aspects^ theKey, Macad::Occt::Graphic3d_Aspects^ theItem)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

bool Macad::Occt::Graphic3d_MapOfAspectsToAspects::IsBound(Macad::Occt::Graphic3d_Aspects^ theKey)
{
	Handle(::Graphic3d_Aspects) h_theKey = theKey->NativeInstance;
	return ((::Graphic3d_MapOfAspectsToAspects*)_NativeInstance)->IsBound(h_theKey);
	theKey->NativeInstance = h_theKey.get();
}

bool Macad::Occt::Graphic3d_MapOfAspectsToAspects::UnBind(Macad::Occt::Graphic3d_Aspects^ theKey)
{
	Handle(::Graphic3d_Aspects) h_theKey = theKey->NativeInstance;
	return ((::Graphic3d_MapOfAspectsToAspects*)_NativeInstance)->UnBind(h_theKey);
	theKey->NativeInstance = h_theKey.get();
}

Macad::Occt::Graphic3d_Aspects^ Macad::Occt::Graphic3d_MapOfAspectsToAspects::Seek(Macad::Occt::Graphic3d_Aspects^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

Macad::Occt::Graphic3d_Aspects^ Macad::Occt::Graphic3d_MapOfAspectsToAspects::Find(Macad::Occt::Graphic3d_Aspects^ theKey)
{
	Handle(::Graphic3d_Aspects) h_theKey = theKey->NativeInstance;
	Handle(::Graphic3d_Aspects) _result;
	_result = ((::Graphic3d_MapOfAspectsToAspects*)_NativeInstance)->Find(h_theKey);
	theKey->NativeInstance = h_theKey.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Aspects::CreateDowncasted( _result.get());
}

bool Macad::Occt::Graphic3d_MapOfAspectsToAspects::Find(Macad::Occt::Graphic3d_Aspects^ theKey, Macad::Occt::Graphic3d_Aspects^ theValue)
{
	Handle(::Graphic3d_Aspects) h_theKey = theKey->NativeInstance;
	Handle(::Graphic3d_Aspects) h_theValue = theValue->NativeInstance;
	return ((::Graphic3d_MapOfAspectsToAspects*)_NativeInstance)->Find(h_theKey, h_theValue);
	theKey->NativeInstance = h_theKey.get();
	theValue->NativeInstance = h_theValue.get();
}

Macad::Occt::Graphic3d_Aspects^ Macad::Occt::Graphic3d_MapOfAspectsToAspects::ChangeSeek(Macad::Occt::Graphic3d_Aspects^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

Macad::Occt::Graphic3d_Aspects^ Macad::Occt::Graphic3d_MapOfAspectsToAspects::ChangeFind(Macad::Occt::Graphic3d_Aspects^ theKey)
{
	Handle(::Graphic3d_Aspects) h_theKey = theKey->NativeInstance;
	Handle(::Graphic3d_Aspects) _result;
	_result = ((::Graphic3d_MapOfAspectsToAspects*)_NativeInstance)->ChangeFind(h_theKey);
	theKey->NativeInstance = h_theKey.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Aspects::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_MapOfAspectsToAspects::Clear(bool doReleaseMemory)
{
	((::Graphic3d_MapOfAspectsToAspects*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::Graphic3d_MapOfAspectsToAspects::Clear()
{
	((::Graphic3d_MapOfAspectsToAspects*)_NativeInstance)->Clear(true);
}

void Macad::Occt::Graphic3d_MapOfAspectsToAspects::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Graphic3d_MapOfAspectsToAspects*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::Graphic3d_MapOfAspectsToAspects::Size()
{
	return ((::Graphic3d_MapOfAspectsToAspects*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  Graphic3d_SequenceOfGroup
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_SequenceOfGroup::Graphic3d_SequenceOfGroup()
	: BaseClass<::Graphic3d_SequenceOfGroup>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_SequenceOfGroup();
}

Macad::Occt::Graphic3d_SequenceOfGroup::Graphic3d_SequenceOfGroup(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Graphic3d_SequenceOfGroup>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Graphic3d_SequenceOfGroup(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Graphic3d_SequenceOfGroup::Graphic3d_SequenceOfGroup(Macad::Occt::Graphic3d_SequenceOfGroup^ theOther)
	: BaseClass<::Graphic3d_SequenceOfGroup>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_SequenceOfGroup(*(::Graphic3d_SequenceOfGroup*)theOther->NativeInstance);
}

int Macad::Occt::Graphic3d_SequenceOfGroup::Size()
{
	return ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Size();
}

int Macad::Occt::Graphic3d_SequenceOfGroup::Length()
{
	return ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Length();
}

int Macad::Occt::Graphic3d_SequenceOfGroup::Lower()
{
	return ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Lower();
}

int Macad::Occt::Graphic3d_SequenceOfGroup::Upper()
{
	return ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Upper();
}

bool Macad::Occt::Graphic3d_SequenceOfGroup::IsEmpty()
{
	return ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Reverse()
{
	((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Reverse();
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Exchange(int I, int J)
{
	((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Clear()
{
	((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Graphic3d_SequenceOfGroup^ Macad::Occt::Graphic3d_SequenceOfGroup::Assign(Macad::Occt::Graphic3d_SequenceOfGroup^ theOther)
{
	::Graphic3d_SequenceOfGroup* _result = new ::Graphic3d_SequenceOfGroup();
	*_result = ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Assign(*(::Graphic3d_SequenceOfGroup*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_SequenceOfGroup(_result);
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Remove(int theIndex)
{
	((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Remove(int theFromIndex, int theToIndex)
{
	((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Append(Macad::Occt::Graphic3d_Group^ theItem)
{
	Handle(::Graphic3d_Group) h_theItem = theItem->NativeInstance;
	((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Append(Macad::Occt::Graphic3d_SequenceOfGroup^ theSeq)
{
	((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Append(*(::Graphic3d_SequenceOfGroup*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Prepend(Macad::Occt::Graphic3d_Group^ theItem)
{
	Handle(::Graphic3d_Group) h_theItem = theItem->NativeInstance;
	((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Prepend(Macad::Occt::Graphic3d_SequenceOfGroup^ theSeq)
{
	((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Prepend(*(::Graphic3d_SequenceOfGroup*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_SequenceOfGroup::InsertBefore(int theIndex, Macad::Occt::Graphic3d_Group^ theItem)
{
	Handle(::Graphic3d_Group) h_theItem = theItem->NativeInstance;
	((::Graphic3d_SequenceOfGroup*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Graphic3d_SequenceOfGroup::InsertBefore(int theIndex, Macad::Occt::Graphic3d_SequenceOfGroup^ theSeq)
{
	((::Graphic3d_SequenceOfGroup*)_NativeInstance)->InsertBefore(theIndex, *(::Graphic3d_SequenceOfGroup*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_SequenceOfGroup::InsertAfter(int theIndex, Macad::Occt::Graphic3d_SequenceOfGroup^ theSeq)
{
	((::Graphic3d_SequenceOfGroup*)_NativeInstance)->InsertAfter(theIndex, *(::Graphic3d_SequenceOfGroup*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_SequenceOfGroup::InsertAfter(int theIndex, Macad::Occt::Graphic3d_Group^ theItem)
{
	Handle(::Graphic3d_Group) h_theItem = theItem->NativeInstance;
	((::Graphic3d_SequenceOfGroup*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Split(int theIndex, Macad::Occt::Graphic3d_SequenceOfGroup^ theSeq)
{
	((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Split(theIndex, *(::Graphic3d_SequenceOfGroup*)theSeq->NativeInstance);
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_SequenceOfGroup::First()
{
	Handle(::Graphic3d_Group) _result;
	_result = ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_SequenceOfGroup::ChangeFirst()
{
	Handle(::Graphic3d_Group) _result;
	_result = ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_SequenceOfGroup::Last()
{
	Handle(::Graphic3d_Group) _result;
	_result = ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_SequenceOfGroup::ChangeLast()
{
	Handle(::Graphic3d_Group) _result;
	_result = ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_SequenceOfGroup::Value(int theIndex)
{
	Handle(::Graphic3d_Group) _result;
	_result = ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_SequenceOfGroup::ChangeValue(int theIndex)
{
	Handle(::Graphic3d_Group) _result;
	_result = ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_SequenceOfGroup::SetValue(int theIndex, Macad::Occt::Graphic3d_Group^ theItem)
{
	Handle(::Graphic3d_Group) h_theItem = theItem->NativeInstance;
	((::Graphic3d_SequenceOfGroup*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  Graphic3d_MapOfStructure
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_MapOfStructure::Graphic3d_MapOfStructure()
	: BaseClass<::Graphic3d_MapOfStructure>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_MapOfStructure();
}

Macad::Occt::Graphic3d_MapOfStructure::Graphic3d_MapOfStructure(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Graphic3d_MapOfStructure>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Graphic3d_MapOfStructure(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Graphic3d_MapOfStructure::Graphic3d_MapOfStructure(int theNbBuckets)
	: BaseClass<::Graphic3d_MapOfStructure>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_MapOfStructure(theNbBuckets, 0L);
}

Macad::Occt::Graphic3d_MapOfStructure::Graphic3d_MapOfStructure(Macad::Occt::Graphic3d_MapOfStructure^ theOther)
	: BaseClass<::Graphic3d_MapOfStructure>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_MapOfStructure(*(::Graphic3d_MapOfStructure*)theOther->NativeInstance);
}

void Macad::Occt::Graphic3d_MapOfStructure::Exchange(Macad::Occt::Graphic3d_MapOfStructure^ theOther)
{
	((::Graphic3d_MapOfStructure*)_NativeInstance)->Exchange(*(::Graphic3d_MapOfStructure*)theOther->NativeInstance);
}

Macad::Occt::Graphic3d_MapOfStructure^ Macad::Occt::Graphic3d_MapOfStructure::Assign(Macad::Occt::Graphic3d_MapOfStructure^ theOther)
{
	::Graphic3d_MapOfStructure* _result = new ::Graphic3d_MapOfStructure();
	*_result = ((::Graphic3d_MapOfStructure*)_NativeInstance)->Assign(*(::Graphic3d_MapOfStructure*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MapOfStructure(_result);
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_MapOfStructure::Added(Macad::Occt::Graphic3d_Structure^ K)
{
	Handle(::Graphic3d_Structure) h_K = K->NativeInstance;
	Handle(::Graphic3d_Structure) _result;
	_result = ((::Graphic3d_MapOfStructure*)_NativeInstance)->Added(h_K);
	K->NativeInstance = h_K.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted( _result.get());
}

bool Macad::Occt::Graphic3d_MapOfStructure::Contains(Macad::Occt::Graphic3d_Structure^ K)
{
	Handle(::Graphic3d_Structure) h_K = K->NativeInstance;
	return ((::Graphic3d_MapOfStructure*)_NativeInstance)->Contains(h_K);
	K->NativeInstance = h_K.get();
}

bool Macad::Occt::Graphic3d_MapOfStructure::Remove(Macad::Occt::Graphic3d_Structure^ K)
{
	Handle(::Graphic3d_Structure) h_K = K->NativeInstance;
	return ((::Graphic3d_MapOfStructure*)_NativeInstance)->Remove(h_K);
	K->NativeInstance = h_K.get();
}

void Macad::Occt::Graphic3d_MapOfStructure::Clear(bool doReleaseMemory)
{
	((::Graphic3d_MapOfStructure*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::Graphic3d_MapOfStructure::Clear()
{
	((::Graphic3d_MapOfStructure*)_NativeInstance)->Clear(true);
}

void Macad::Occt::Graphic3d_MapOfStructure::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Graphic3d_MapOfStructure*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::Graphic3d_MapOfStructure::Size()
{
	return ((::Graphic3d_MapOfStructure*)_NativeInstance)->Size();
}

bool Macad::Occt::Graphic3d_MapOfStructure::IsEqual(Macad::Occt::Graphic3d_MapOfStructure^ theOther)
{
	return ((::Graphic3d_MapOfStructure*)_NativeInstance)->IsEqual(*(::Graphic3d_MapOfStructure*)theOther->NativeInstance);
}

bool Macad::Occt::Graphic3d_MapOfStructure::Contains(Macad::Occt::Graphic3d_MapOfStructure^ theOther)
{
	return ((::Graphic3d_MapOfStructure*)_NativeInstance)->Contains(*(::Graphic3d_MapOfStructure*)theOther->NativeInstance);
}

void Macad::Occt::Graphic3d_MapOfStructure::Union(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight)
{
	((::Graphic3d_MapOfStructure*)_NativeInstance)->Union(*(::Graphic3d_MapOfStructure*)theLeft->NativeInstance, *(::Graphic3d_MapOfStructure*)theRight->NativeInstance);
}

bool Macad::Occt::Graphic3d_MapOfStructure::Unite(Macad::Occt::Graphic3d_MapOfStructure^ theOther)
{
	return ((::Graphic3d_MapOfStructure*)_NativeInstance)->Unite(*(::Graphic3d_MapOfStructure*)theOther->NativeInstance);
}

bool Macad::Occt::Graphic3d_MapOfStructure::HasIntersection(Macad::Occt::Graphic3d_MapOfStructure^ theMap)
{
	return ((::Graphic3d_MapOfStructure*)_NativeInstance)->HasIntersection(*(::Graphic3d_MapOfStructure*)theMap->NativeInstance);
}

void Macad::Occt::Graphic3d_MapOfStructure::Intersection(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight)
{
	((::Graphic3d_MapOfStructure*)_NativeInstance)->Intersection(*(::Graphic3d_MapOfStructure*)theLeft->NativeInstance, *(::Graphic3d_MapOfStructure*)theRight->NativeInstance);
}

bool Macad::Occt::Graphic3d_MapOfStructure::Intersect(Macad::Occt::Graphic3d_MapOfStructure^ theOther)
{
	return ((::Graphic3d_MapOfStructure*)_NativeInstance)->Intersect(*(::Graphic3d_MapOfStructure*)theOther->NativeInstance);
}

void Macad::Occt::Graphic3d_MapOfStructure::Subtraction(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight)
{
	((::Graphic3d_MapOfStructure*)_NativeInstance)->Subtraction(*(::Graphic3d_MapOfStructure*)theLeft->NativeInstance, *(::Graphic3d_MapOfStructure*)theRight->NativeInstance);
}

bool Macad::Occt::Graphic3d_MapOfStructure::Subtract(Macad::Occt::Graphic3d_MapOfStructure^ theOther)
{
	return ((::Graphic3d_MapOfStructure*)_NativeInstance)->Subtract(*(::Graphic3d_MapOfStructure*)theOther->NativeInstance);
}

void Macad::Occt::Graphic3d_MapOfStructure::Difference(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight)
{
	((::Graphic3d_MapOfStructure*)_NativeInstance)->Difference(*(::Graphic3d_MapOfStructure*)theLeft->NativeInstance, *(::Graphic3d_MapOfStructure*)theRight->NativeInstance);
}

bool Macad::Occt::Graphic3d_MapOfStructure::Differ(Macad::Occt::Graphic3d_MapOfStructure^ theOther)
{
	return ((::Graphic3d_MapOfStructure*)_NativeInstance)->Differ(*(::Graphic3d_MapOfStructure*)theOther->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_SequenceOfStructure
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_SequenceOfStructure::Graphic3d_SequenceOfStructure()
	: BaseClass<::Graphic3d_SequenceOfStructure>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_SequenceOfStructure();
}

Macad::Occt::Graphic3d_SequenceOfStructure::Graphic3d_SequenceOfStructure(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Graphic3d_SequenceOfStructure>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Graphic3d_SequenceOfStructure(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Graphic3d_SequenceOfStructure::Graphic3d_SequenceOfStructure(Macad::Occt::Graphic3d_SequenceOfStructure^ theOther)
	: BaseClass<::Graphic3d_SequenceOfStructure>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_SequenceOfStructure(*(::Graphic3d_SequenceOfStructure*)theOther->NativeInstance);
}

int Macad::Occt::Graphic3d_SequenceOfStructure::Size()
{
	return ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Size();
}

int Macad::Occt::Graphic3d_SequenceOfStructure::Length()
{
	return ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Length();
}

int Macad::Occt::Graphic3d_SequenceOfStructure::Lower()
{
	return ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Lower();
}

int Macad::Occt::Graphic3d_SequenceOfStructure::Upper()
{
	return ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Upper();
}

bool Macad::Occt::Graphic3d_SequenceOfStructure::IsEmpty()
{
	return ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Reverse()
{
	((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Reverse();
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Exchange(int I, int J)
{
	((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Clear()
{
	((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Graphic3d_SequenceOfStructure^ Macad::Occt::Graphic3d_SequenceOfStructure::Assign(Macad::Occt::Graphic3d_SequenceOfStructure^ theOther)
{
	::Graphic3d_SequenceOfStructure* _result = new ::Graphic3d_SequenceOfStructure();
	*_result = ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Assign(*(::Graphic3d_SequenceOfStructure*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_SequenceOfStructure(_result);
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Remove(int theIndex)
{
	((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Remove(int theFromIndex, int theToIndex)
{
	((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Append(Macad::Occt::Graphic3d_Structure^ theItem)
{
	Handle(::Graphic3d_Structure) h_theItem = theItem->NativeInstance;
	((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Append(Macad::Occt::Graphic3d_SequenceOfStructure^ theSeq)
{
	((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Append(*(::Graphic3d_SequenceOfStructure*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Prepend(Macad::Occt::Graphic3d_Structure^ theItem)
{
	Handle(::Graphic3d_Structure) h_theItem = theItem->NativeInstance;
	((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Prepend(Macad::Occt::Graphic3d_SequenceOfStructure^ theSeq)
{
	((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Prepend(*(::Graphic3d_SequenceOfStructure*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_SequenceOfStructure::InsertBefore(int theIndex, Macad::Occt::Graphic3d_Structure^ theItem)
{
	Handle(::Graphic3d_Structure) h_theItem = theItem->NativeInstance;
	((::Graphic3d_SequenceOfStructure*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Graphic3d_SequenceOfStructure::InsertBefore(int theIndex, Macad::Occt::Graphic3d_SequenceOfStructure^ theSeq)
{
	((::Graphic3d_SequenceOfStructure*)_NativeInstance)->InsertBefore(theIndex, *(::Graphic3d_SequenceOfStructure*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_SequenceOfStructure::InsertAfter(int theIndex, Macad::Occt::Graphic3d_SequenceOfStructure^ theSeq)
{
	((::Graphic3d_SequenceOfStructure*)_NativeInstance)->InsertAfter(theIndex, *(::Graphic3d_SequenceOfStructure*)theSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_SequenceOfStructure::InsertAfter(int theIndex, Macad::Occt::Graphic3d_Structure^ theItem)
{
	Handle(::Graphic3d_Structure) h_theItem = theItem->NativeInstance;
	((::Graphic3d_SequenceOfStructure*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Split(int theIndex, Macad::Occt::Graphic3d_SequenceOfStructure^ theSeq)
{
	((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Split(theIndex, *(::Graphic3d_SequenceOfStructure*)theSeq->NativeInstance);
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_SequenceOfStructure::First()
{
	Handle(::Graphic3d_Structure) _result;
	_result = ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_SequenceOfStructure::ChangeFirst()
{
	Handle(::Graphic3d_Structure) _result;
	_result = ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_SequenceOfStructure::Last()
{
	Handle(::Graphic3d_Structure) _result;
	_result = ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_SequenceOfStructure::ChangeLast()
{
	Handle(::Graphic3d_Structure) _result;
	_result = ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_SequenceOfStructure::Value(int theIndex)
{
	Handle(::Graphic3d_Structure) _result;
	_result = ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_SequenceOfStructure::ChangeValue(int theIndex)
{
	Handle(::Graphic3d_Structure) _result;
	_result = ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_SequenceOfStructure::SetValue(int theIndex, Macad::Occt::Graphic3d_Structure^ theItem)
{
	Handle(::Graphic3d_Structure) h_theItem = theItem->NativeInstance;
	((::Graphic3d_SequenceOfStructure*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  Graphic3d_MapOfZLayerSettings
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_MapOfZLayerSettings::Graphic3d_MapOfZLayerSettings()
	: BaseClass<::Graphic3d_MapOfZLayerSettings>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_MapOfZLayerSettings();
}

Macad::Occt::Graphic3d_MapOfZLayerSettings::Graphic3d_MapOfZLayerSettings(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Graphic3d_MapOfZLayerSettings>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Graphic3d_MapOfZLayerSettings(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Graphic3d_MapOfZLayerSettings::Graphic3d_MapOfZLayerSettings(int theNbBuckets)
	: BaseClass<::Graphic3d_MapOfZLayerSettings>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_MapOfZLayerSettings(theNbBuckets, 0L);
}

Macad::Occt::Graphic3d_MapOfZLayerSettings::Graphic3d_MapOfZLayerSettings(Macad::Occt::Graphic3d_MapOfZLayerSettings^ theOther)
	: BaseClass<::Graphic3d_MapOfZLayerSettings>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_MapOfZLayerSettings(*(::Graphic3d_MapOfZLayerSettings*)theOther->NativeInstance);
}

void Macad::Occt::Graphic3d_MapOfZLayerSettings::Exchange(Macad::Occt::Graphic3d_MapOfZLayerSettings^ theOther)
{
	((::Graphic3d_MapOfZLayerSettings*)_NativeInstance)->Exchange(*(::Graphic3d_MapOfZLayerSettings*)theOther->NativeInstance);
}

Macad::Occt::Graphic3d_MapOfZLayerSettings^ Macad::Occt::Graphic3d_MapOfZLayerSettings::Assign(Macad::Occt::Graphic3d_MapOfZLayerSettings^ theOther)
{
	::Graphic3d_MapOfZLayerSettings* _result = new ::Graphic3d_MapOfZLayerSettings();
	*_result = ((::Graphic3d_MapOfZLayerSettings*)_NativeInstance)->Assign(*(::Graphic3d_MapOfZLayerSettings*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MapOfZLayerSettings(_result);
}

Macad::Occt::Graphic3d_ZLayerSettings^ Macad::Occt::Graphic3d_MapOfZLayerSettings::Bound(int theKey, Macad::Occt::Graphic3d_ZLayerSettings^ theItem)
{
	pin_ptr<int> pp_theKey = &theKey;
	::Graphic3d_ZLayerSettings* _result;
	_result = (::Graphic3d_ZLayerSettings*)((::Graphic3d_MapOfZLayerSettings*)_NativeInstance)->Bound(*(int*)pp_theKey, *(::Graphic3d_ZLayerSettings*)theItem->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ZLayerSettings(_result);
}

bool Macad::Occt::Graphic3d_MapOfZLayerSettings::IsBound(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::Graphic3d_MapOfZLayerSettings*)_NativeInstance)->IsBound(*(int*)pp_theKey);
}

bool Macad::Occt::Graphic3d_MapOfZLayerSettings::UnBind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::Graphic3d_MapOfZLayerSettings*)_NativeInstance)->UnBind(*(int*)pp_theKey);
}

Macad::Occt::Graphic3d_ZLayerSettings^ Macad::Occt::Graphic3d_MapOfZLayerSettings::Seek(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	::Graphic3d_ZLayerSettings* _result;
	_result = (::Graphic3d_ZLayerSettings*)((::Graphic3d_MapOfZLayerSettings*)_NativeInstance)->Seek(*(int*)pp_theKey);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ZLayerSettings(_result);
}

Macad::Occt::Graphic3d_ZLayerSettings^ Macad::Occt::Graphic3d_MapOfZLayerSettings::Find(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	::Graphic3d_ZLayerSettings* _result = new ::Graphic3d_ZLayerSettings();
	*_result =  (::Graphic3d_ZLayerSettings)((::Graphic3d_MapOfZLayerSettings*)_NativeInstance)->Find(*(int*)pp_theKey);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ZLayerSettings(_result);
}

bool Macad::Occt::Graphic3d_MapOfZLayerSettings::Find(int theKey, Macad::Occt::Graphic3d_ZLayerSettings^ theValue)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::Graphic3d_MapOfZLayerSettings*)_NativeInstance)->Find(*(int*)pp_theKey, *(::Graphic3d_ZLayerSettings*)theValue->NativeInstance);
}

Macad::Occt::Graphic3d_ZLayerSettings^ Macad::Occt::Graphic3d_MapOfZLayerSettings::ChangeSeek(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	::Graphic3d_ZLayerSettings* _result;
	_result = (::Graphic3d_ZLayerSettings*)((::Graphic3d_MapOfZLayerSettings*)_NativeInstance)->ChangeSeek(*(int*)pp_theKey);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ZLayerSettings(_result);
}

Macad::Occt::Graphic3d_ZLayerSettings^ Macad::Occt::Graphic3d_MapOfZLayerSettings::ChangeFind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	::Graphic3d_ZLayerSettings* _result = new ::Graphic3d_ZLayerSettings();
	*_result = ((::Graphic3d_MapOfZLayerSettings*)_NativeInstance)->ChangeFind(*(int*)pp_theKey);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ZLayerSettings(_result);
}

void Macad::Occt::Graphic3d_MapOfZLayerSettings::Clear(bool doReleaseMemory)
{
	((::Graphic3d_MapOfZLayerSettings*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::Graphic3d_MapOfZLayerSettings::Clear()
{
	((::Graphic3d_MapOfZLayerSettings*)_NativeInstance)->Clear(true);
}

void Macad::Occt::Graphic3d_MapOfZLayerSettings::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Graphic3d_MapOfZLayerSettings*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::Graphic3d_MapOfZLayerSettings::Size()
{
	return ((::Graphic3d_MapOfZLayerSettings*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  Graphic3d_BufferRange
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_BufferRange::Graphic3d_BufferRange()
	: BaseClass<::Graphic3d_BufferRange>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_BufferRange();
}

Macad::Occt::Graphic3d_BufferRange::Graphic3d_BufferRange(int theStart, int theLength)
	: BaseClass<::Graphic3d_BufferRange>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_BufferRange(theStart, theLength);
}

Macad::Occt::Graphic3d_BufferRange::Graphic3d_BufferRange(Macad::Occt::Graphic3d_BufferRange^ parameter1)
	: BaseClass<::Graphic3d_BufferRange>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_BufferRange(*(::Graphic3d_BufferRange*)parameter1->NativeInstance);
}

bool Macad::Occt::Graphic3d_BufferRange::IsEmpty()
{
	return ((::Graphic3d_BufferRange*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::Graphic3d_BufferRange::Upper()
{
	return ((::Graphic3d_BufferRange*)_NativeInstance)->Upper();
}

void Macad::Occt::Graphic3d_BufferRange::Clear()
{
	((::Graphic3d_BufferRange*)_NativeInstance)->Clear();
}

void Macad::Occt::Graphic3d_BufferRange::Unite(Macad::Occt::Graphic3d_BufferRange^ theRange)
{
	((::Graphic3d_BufferRange*)_NativeInstance)->Unite(*(::Graphic3d_BufferRange*)theRange->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_Attribute
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Attribute::Graphic3d_Attribute()
	: BaseClass<::Graphic3d_Attribute>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Attribute();
}

Macad::Occt::Graphic3d_Attribute::Graphic3d_Attribute(Macad::Occt::Graphic3d_Attribute^ parameter1)
	: BaseClass<::Graphic3d_Attribute>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Attribute(*(::Graphic3d_Attribute*)parameter1->NativeInstance);
}

int Macad::Occt::Graphic3d_Attribute::Stride()
{
	return ((::Graphic3d_Attribute*)_NativeInstance)->Stride();
}

int Macad::Occt::Graphic3d_Attribute::Stride(Macad::Occt::Graphic3d_TypeOfData theType)
{
	return ::Graphic3d_Attribute::Stride((::Graphic3d_TypeOfData)theType);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_PolygonOffset
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_PolygonOffset::Graphic3d_PolygonOffset()
	: BaseClass<::Graphic3d_PolygonOffset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_PolygonOffset();
}

Macad::Occt::Graphic3d_PolygonOffset::Graphic3d_PolygonOffset(Macad::Occt::Graphic3d_PolygonOffset^ parameter1)
	: BaseClass<::Graphic3d_PolygonOffset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_PolygonOffset(*(::Graphic3d_PolygonOffset*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_ValueInterface
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ValueInterface::Graphic3d_ValueInterface(Macad::Occt::Graphic3d_ValueInterface^ parameter1)
	: BaseClass<::Graphic3d_ValueInterface>(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Graphic3d_ValueInterface::Graphic3d_ValueInterface()
	: BaseClass<::Graphic3d_ValueInterface>(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

size_t Macad::Occt::Graphic3d_ValueInterface::TypeID()
{
	return ((::Graphic3d_ValueInterface*)_NativeInstance)->TypeID();
}




//---------------------------------------------------------------------
//  Class  Graphic3d_ZLayerSettings
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ZLayerSettings::Graphic3d_ZLayerSettings()
	: BaseClass<::Graphic3d_ZLayerSettings>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_ZLayerSettings();
}

Macad::Occt::Graphic3d_ZLayerSettings::Graphic3d_ZLayerSettings(Macad::Occt::Graphic3d_ZLayerSettings^ parameter1)
	: BaseClass<::Graphic3d_ZLayerSettings>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_ZLayerSettings(*(::Graphic3d_ZLayerSettings*)parameter1->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_ZLayerSettings::Name()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Graphic3d_ZLayerSettings*)_NativeInstance)->Name();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetName(Macad::Occt::TCollection_AsciiString^ theName)
{
	((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetName(*(::TCollection_AsciiString*)theName->NativeInstance);
}

Macad::Occt::Graphic3d_LightSet^ Macad::Occt::Graphic3d_ZLayerSettings::Lights()
{
	Handle(::Graphic3d_LightSet) _result;
	_result = ((::Graphic3d_ZLayerSettings*)_NativeInstance)->Lights();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_LightSet::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetLights(Macad::Occt::Graphic3d_LightSet^ theLights)
{
	Handle(::Graphic3d_LightSet) h_theLights = theLights->NativeInstance;
	((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetLights(h_theLights);
	theLights->NativeInstance = h_theLights.get();
}

Macad::Occt::XYZ Macad::Occt::Graphic3d_ZLayerSettings::Origin()
{
	return Macad::Occt::XYZ(((::Graphic3d_ZLayerSettings*)_NativeInstance)->Origin());
}

Macad::Occt::TopLoc_Datum3D^ Macad::Occt::Graphic3d_ZLayerSettings::OriginTransformation()
{
	Handle(::TopLoc_Datum3D) _result;
	_result = ((::Graphic3d_ZLayerSettings*)_NativeInstance)->OriginTransformation();
	 return _result.IsNull() ? nullptr : Macad::Occt::TopLoc_Datum3D::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetOrigin(Macad::Occt::XYZ theOrigin)
{
	pin_ptr<Macad::Occt::XYZ> pp_theOrigin = &theOrigin;
	((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetOrigin(*(gp_XYZ*)pp_theOrigin);
}

bool Macad::Occt::Graphic3d_ZLayerSettings::HasCullingDistance()
{
	return ((::Graphic3d_ZLayerSettings*)_NativeInstance)->HasCullingDistance();
}

double Macad::Occt::Graphic3d_ZLayerSettings::CullingDistance()
{
	return ((::Graphic3d_ZLayerSettings*)_NativeInstance)->CullingDistance();
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetCullingDistance(double theDistance)
{
	((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetCullingDistance(theDistance);
}

bool Macad::Occt::Graphic3d_ZLayerSettings::HasCullingSize()
{
	return ((::Graphic3d_ZLayerSettings*)_NativeInstance)->HasCullingSize();
}

double Macad::Occt::Graphic3d_ZLayerSettings::CullingSize()
{
	return ((::Graphic3d_ZLayerSettings*)_NativeInstance)->CullingSize();
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetCullingSize(double theSize)
{
	((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetCullingSize(theSize);
}

bool Macad::Occt::Graphic3d_ZLayerSettings::IsImmediate()
{
	return ((::Graphic3d_ZLayerSettings*)_NativeInstance)->IsImmediate();
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetImmediate(bool theValue)
{
	((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetImmediate(theValue);
}

bool Macad::Occt::Graphic3d_ZLayerSettings::IsRaytracable()
{
	return ((::Graphic3d_ZLayerSettings*)_NativeInstance)->IsRaytracable();
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetRaytracable(bool theToRaytrace)
{
	((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetRaytracable(theToRaytrace);
}

bool Macad::Occt::Graphic3d_ZLayerSettings::UseEnvironmentTexture()
{
	return ((::Graphic3d_ZLayerSettings*)_NativeInstance)->UseEnvironmentTexture();
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetEnvironmentTexture(bool theValue)
{
	((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetEnvironmentTexture(theValue);
}

bool Macad::Occt::Graphic3d_ZLayerSettings::ToEnableDepthTest()
{
	return ((::Graphic3d_ZLayerSettings*)_NativeInstance)->ToEnableDepthTest();
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetEnableDepthTest(bool theValue)
{
	((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetEnableDepthTest(theValue);
}

bool Macad::Occt::Graphic3d_ZLayerSettings::ToEnableDepthWrite()
{
	return ((::Graphic3d_ZLayerSettings*)_NativeInstance)->ToEnableDepthWrite();
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetEnableDepthWrite(bool theValue)
{
	((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetEnableDepthWrite(theValue);
}

bool Macad::Occt::Graphic3d_ZLayerSettings::ToClearDepth()
{
	return ((::Graphic3d_ZLayerSettings*)_NativeInstance)->ToClearDepth();
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetClearDepth(bool theValue)
{
	((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetClearDepth(theValue);
}

bool Macad::Occt::Graphic3d_ZLayerSettings::ToRenderInDepthPrepass()
{
	return ((::Graphic3d_ZLayerSettings*)_NativeInstance)->ToRenderInDepthPrepass();
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetRenderInDepthPrepass(bool theToRender)
{
	((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetRenderInDepthPrepass(theToRender);
}

Macad::Occt::Graphic3d_PolygonOffset^ Macad::Occt::Graphic3d_ZLayerSettings::PolygonOffset()
{
	::Graphic3d_PolygonOffset* _result = new ::Graphic3d_PolygonOffset();
	*_result =  (::Graphic3d_PolygonOffset)((::Graphic3d_ZLayerSettings*)_NativeInstance)->PolygonOffset();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_PolygonOffset(_result);
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetPolygonOffset(Macad::Occt::Graphic3d_PolygonOffset^ theParams)
{
	((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetPolygonOffset(*(::Graphic3d_PolygonOffset*)theParams->NativeInstance);
}

Macad::Occt::Graphic3d_PolygonOffset^ Macad::Occt::Graphic3d_ZLayerSettings::ChangePolygonOffset()
{
	::Graphic3d_PolygonOffset* _result = new ::Graphic3d_PolygonOffset();
	*_result = ((::Graphic3d_ZLayerSettings*)_NativeInstance)->ChangePolygonOffset();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_PolygonOffset(_result);
}

bool Macad::Occt::Graphic3d_ZLayerSettings::IsSettingEnabled(Macad::Occt::Graphic3d_ZLayerSetting theSetting)
{
	return ((::Graphic3d_ZLayerSettings*)_NativeInstance)->IsSettingEnabled((::Graphic3d_ZLayerSetting)theSetting);
}

void Macad::Occt::Graphic3d_ZLayerSettings::EnableSetting(Macad::Occt::Graphic3d_ZLayerSetting theSetting)
{
	((::Graphic3d_ZLayerSettings*)_NativeInstance)->EnableSetting((::Graphic3d_ZLayerSetting)theSetting);
}

void Macad::Occt::Graphic3d_ZLayerSettings::DisableSetting(Macad::Occt::Graphic3d_ZLayerSetting theSetting)
{
	((::Graphic3d_ZLayerSettings*)_NativeInstance)->DisableSetting((::Graphic3d_ZLayerSetting)theSetting);
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetDepthOffsetPositive()
{
	((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetDepthOffsetPositive();
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetDepthOffsetNegative()
{
	((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetDepthOffsetNegative();
}




//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPrimitives
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfPrimitives::Graphic3d_ArrayOfPrimitives(Macad::Occt::Graphic3d_ArrayOfPrimitives^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPrimitives(*(::Graphic3d_ArrayOfPrimitives*)parameter1->NativeInstance);
}

Macad::Occt::Graphic3d_ArrayOfPrimitives^ Macad::Occt::Graphic3d_ArrayOfPrimitives::CreateArray(Macad::Occt::Graphic3d_TypeOfPrimitiveArray theType, int theMaxVertexs, int theMaxEdges, int theArrayFlags)
{
	Handle(::Graphic3d_ArrayOfPrimitives) _result;
	_result = ::Graphic3d_ArrayOfPrimitives::CreateArray((::Graphic3d_TypeOfPrimitiveArray)theType, theMaxVertexs, theMaxEdges, theArrayFlags);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfPrimitives::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_ArrayOfPrimitives^ Macad::Occt::Graphic3d_ArrayOfPrimitives::CreateArray(Macad::Occt::Graphic3d_TypeOfPrimitiveArray theType, int theMaxVertexs, int theMaxBounds, int theMaxEdges, int theArrayFlags)
{
	Handle(::Graphic3d_ArrayOfPrimitives) _result;
	_result = ::Graphic3d_ArrayOfPrimitives::CreateArray((::Graphic3d_TypeOfPrimitiveArray)theType, theMaxVertexs, theMaxBounds, theMaxEdges, theArrayFlags);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfPrimitives::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_TypeOfPrimitiveArray Macad::Occt::Graphic3d_ArrayOfPrimitives::Type()
{
	return (Macad::Occt::Graphic3d_TypeOfPrimitiveArray)((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->Type();
}

System::String^ Macad::Occt::Graphic3d_ArrayOfPrimitives::StringType()
{
	Standard_CString _result;
	_result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->StringType();
	return gcnew System::String(_result);
}

bool Macad::Occt::Graphic3d_ArrayOfPrimitives::HasVertexNormals()
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->HasVertexNormals();
}

bool Macad::Occt::Graphic3d_ArrayOfPrimitives::HasVertexColors()
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->HasVertexColors();
}

bool Macad::Occt::Graphic3d_ArrayOfPrimitives::HasVertexTexels()
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->HasVertexTexels();
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::VertexNumber()
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->VertexNumber();
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::VertexNumberAllocated()
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->VertexNumberAllocated();
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::ItemNumber()
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->ItemNumber();
}

bool Macad::Occt::Graphic3d_ArrayOfPrimitives::IsValid()
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->IsValid();
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(Macad::Occt::Pnt theVertex)
{
	pin_ptr<Macad::Occt::Pnt> pp_theVertex = &theVertex;
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(*(gp_Pnt*)pp_theVertex);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(double theX, double theY, double theZ)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(theX, theY, theZ);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(float theX, float theY, float theZ)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(theX, theY, theZ);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Quantity_Color^ theColor)
{
	pin_ptr<Macad::Occt::Pnt> pp_theVertex = &theVertex;
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(*(gp_Pnt*)pp_theVertex, *(::Quantity_Color*)theColor->NativeInstance);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(Macad::Occt::Pnt theVertex, int theColor32)
{
	pin_ptr<Macad::Occt::Pnt> pp_theVertex = &theVertex;
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(*(gp_Pnt*)pp_theVertex, theColor32);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Dir theNormal)
{
	pin_ptr<Macad::Occt::Pnt> pp_theVertex = &theVertex;
	pin_ptr<Macad::Occt::Dir> pp_theNormal = &theNormal;
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(*(gp_Pnt*)pp_theVertex, *(gp_Dir*)pp_theNormal);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(double theX, double theY, double theZ, double theNX, double theNY, double theNZ)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(theX, theY, theZ, theNX, theNY, theNZ);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(float theX, float theY, float theZ, float theNX, float theNY, float theNZ)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(theX, theY, theZ, theNX, theNY, theNZ);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Dir theNormal, Macad::Occt::Quantity_Color^ theColor)
{
	pin_ptr<Macad::Occt::Pnt> pp_theVertex = &theVertex;
	pin_ptr<Macad::Occt::Dir> pp_theNormal = &theNormal;
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(*(gp_Pnt*)pp_theVertex, *(gp_Dir*)pp_theNormal, *(::Quantity_Color*)theColor->NativeInstance);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Dir theNormal, int theColor32)
{
	pin_ptr<Macad::Occt::Pnt> pp_theVertex = &theVertex;
	pin_ptr<Macad::Occt::Dir> pp_theNormal = &theNormal;
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(*(gp_Pnt*)pp_theVertex, *(gp_Dir*)pp_theNormal, theColor32);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Pnt2d theTexel)
{
	pin_ptr<Macad::Occt::Pnt> pp_theVertex = &theVertex;
	pin_ptr<Macad::Occt::Pnt2d> pp_theTexel = &theTexel;
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(*(gp_Pnt*)pp_theVertex, *(gp_Pnt2d*)pp_theTexel);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(double theX, double theY, double theZ, double theTX, double theTY)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(theX, theY, theZ, theTX, theTY);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(float theX, float theY, float theZ, float theTX, float theTY)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(theX, theY, theZ, theTX, theTY);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Dir theNormal, Macad::Occt::Pnt2d theTexel)
{
	pin_ptr<Macad::Occt::Pnt> pp_theVertex = &theVertex;
	pin_ptr<Macad::Occt::Dir> pp_theNormal = &theNormal;
	pin_ptr<Macad::Occt::Pnt2d> pp_theTexel = &theTexel;
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(*(gp_Pnt*)pp_theVertex, *(gp_Dir*)pp_theNormal, *(gp_Pnt2d*)pp_theTexel);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(double theX, double theY, double theZ, double theNX, double theNY, double theNZ, double theTX, double theTY)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(theX, theY, theZ, theNX, theNY, theNZ, theTX, theTY);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(float theX, float theY, float theZ, float theNX, float theNY, float theNZ, float theTX, float theTY)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(theX, theY, theZ, theNX, theNY, theNZ, theTX, theTY);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetVertice(int theIndex, Macad::Occt::Pnt theVertex)
{
	pin_ptr<Macad::Occt::Pnt> pp_theVertex = &theVertex;
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetVertice(theIndex, *(gp_Pnt*)pp_theVertex);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetVertice(int theIndex, float theX, float theY, float theZ)
{
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetVertice(theIndex, theX, theY, theZ);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetVertexColor(int theIndex, Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetVertexColor(theIndex, *(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetVertexColor(int theIndex, double theR, double theG, double theB)
{
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetVertexColor(theIndex, theR, theG, theB);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetVertexColor(int theIndex, int theColor32)
{
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetVertexColor(theIndex, theColor32);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetVertexNormal(int theIndex, Macad::Occt::Dir theNormal)
{
	pin_ptr<Macad::Occt::Dir> pp_theNormal = &theNormal;
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetVertexNormal(theIndex, *(gp_Dir*)pp_theNormal);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetVertexNormal(int theIndex, double theNX, double theNY, double theNZ)
{
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetVertexNormal(theIndex, theNX, theNY, theNZ);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetVertexTexel(int theIndex, Macad::Occt::Pnt2d theTexel)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theTexel = &theTexel;
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetVertexTexel(theIndex, *(gp_Pnt2d*)pp_theTexel);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetVertexTexel(int theIndex, double theTX, double theTY)
{
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetVertexTexel(theIndex, theTX, theTY);
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_ArrayOfPrimitives::Vertice(int theRank)
{
	return Macad::Occt::Pnt(((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->Vertice(theRank));
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::Vertice(int theRank, double% theX, double% theY, double% theZ)
{
	pin_ptr<double> pp_theX = &theX;
	pin_ptr<double> pp_theY = &theY;
	pin_ptr<double> pp_theZ = &theZ;
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->Vertice(theRank, *(Standard_Real*)pp_theX, *(Standard_Real*)pp_theY, *(Standard_Real*)pp_theZ);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_ArrayOfPrimitives::VertexColor(int theRank)
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->VertexColor(theRank);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::VertexColor(int theRank, double% theR, double% theG, double% theB)
{
	pin_ptr<double> pp_theR = &theR;
	pin_ptr<double> pp_theG = &theG;
	pin_ptr<double> pp_theB = &theB;
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->VertexColor(theRank, *(Standard_Real*)pp_theR, *(Standard_Real*)pp_theG, *(Standard_Real*)pp_theB);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::VertexColor(int theRank, int% theColor)
{
	pin_ptr<int> pp_theColor = &theColor;
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->VertexColor(theRank, *(Standard_Integer*)pp_theColor);
}

Macad::Occt::Dir Macad::Occt::Graphic3d_ArrayOfPrimitives::VertexNormal(int theRank)
{
	return Macad::Occt::Dir(((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->VertexNormal(theRank));
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::VertexNormal(int theRank, double% theNX, double% theNY, double% theNZ)
{
	pin_ptr<double> pp_theNX = &theNX;
	pin_ptr<double> pp_theNY = &theNY;
	pin_ptr<double> pp_theNZ = &theNZ;
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->VertexNormal(theRank, *(Standard_Real*)pp_theNX, *(Standard_Real*)pp_theNY, *(Standard_Real*)pp_theNZ);
}

Macad::Occt::Pnt2d Macad::Occt::Graphic3d_ArrayOfPrimitives::VertexTexel(int theRank)
{
	return Macad::Occt::Pnt2d(((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->VertexTexel(theRank));
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::VertexTexel(int theRank, double% theTX, double% theTY)
{
	pin_ptr<double> pp_theTX = &theTX;
	pin_ptr<double> pp_theTY = &theTY;
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->VertexTexel(theRank, *(Standard_Real*)pp_theTX, *(Standard_Real*)pp_theTY);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::EdgeNumber()
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->EdgeNumber();
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::EdgeNumberAllocated()
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->EdgeNumberAllocated();
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::Edge(int theRank)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->Edge(theRank);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddEdge(int theVertexIndex)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddEdge(theVertexIndex);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddEdges(int theVertexIndex1, int theVertexIndex2)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddEdges(theVertexIndex1, theVertexIndex2);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddSegmentEdges(int theVertexIndex1, int theVertexIndex2)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddSegmentEdges(theVertexIndex1, theVertexIndex2);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddEdges(theVertexIndex1, theVertexIndex2, theVertexIndex3);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddTriangleEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddTriangleEdges(theVertexIndex1, theVertexIndex2, theVertexIndex3);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3, int theVertexIndex4)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddEdges(theVertexIndex1, theVertexIndex2, theVertexIndex3, theVertexIndex4);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddQuadEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3, int theVertexIndex4)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddQuadEdges(theVertexIndex1, theVertexIndex2, theVertexIndex3, theVertexIndex4);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddQuadTriangleEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3, int theVertexIndex4)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddQuadTriangleEdges(theVertexIndex1, theVertexIndex2, theVertexIndex3, theVertexIndex4);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::AddTriangleStripEdges(int theVertexLower, int theVertexUpper)
{
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddTriangleStripEdges(theVertexLower, theVertexUpper);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::AddTriangleFanEdges(int theVertexLower, int theVertexUpper, bool theToClose)
{
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddTriangleFanEdges(theVertexLower, theVertexUpper, theToClose);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::AddPolylineEdges(int theVertexLower, int theVertexUpper, bool theToClose)
{
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddPolylineEdges(theVertexLower, theVertexUpper, theToClose);
}

bool Macad::Occt::Graphic3d_ArrayOfPrimitives::HasBoundColors()
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->HasBoundColors();
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::BoundNumber()
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->BoundNumber();
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::BoundNumberAllocated()
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->BoundNumberAllocated();
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::Bound(int theRank)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->Bound(theRank);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_ArrayOfPrimitives::BoundColor(int theRank)
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->BoundColor(theRank);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::BoundColor(int theRank, double% theR, double% theG, double% theB)
{
	pin_ptr<double> pp_theR = &theR;
	pin_ptr<double> pp_theG = &theG;
	pin_ptr<double> pp_theB = &theB;
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->BoundColor(theRank, *(Standard_Real*)pp_theR, *(Standard_Real*)pp_theG, *(Standard_Real*)pp_theB);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddBound(int theEdgeNumber)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddBound(theEdgeNumber);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddBound(int theEdgeNumber, Macad::Occt::Quantity_Color^ theBColor)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddBound(theEdgeNumber, *(::Quantity_Color*)theBColor->NativeInstance);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddBound(int theEdgeNumber, double theR, double theG, double theB)
{
	return ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddBound(theEdgeNumber, theR, theG, theB);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetBoundColor(int theIndex, Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetBoundColor(theIndex, *(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetBoundColor(int theIndex, double theR, double theG, double theB)
{
	((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetBoundColor(theIndex, theR, theG, theB);
}


Macad::Occt::Graphic3d_ArrayOfPrimitives^ Macad::Occt::Graphic3d_ArrayOfPrimitives::CreateDowncasted(::Graphic3d_ArrayOfPrimitives* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_ArrayOfPoints)))
		return Macad::Occt::Graphic3d_ArrayOfPoints::CreateDowncasted((::Graphic3d_ArrayOfPoints*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_ArrayOfPolygons)))
		return Macad::Occt::Graphic3d_ArrayOfPolygons::CreateDowncasted((::Graphic3d_ArrayOfPolygons*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_ArrayOfPolylines)))
		return Macad::Occt::Graphic3d_ArrayOfPolylines::CreateDowncasted((::Graphic3d_ArrayOfPolylines*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_ArrayOfQuadrangles)))
		return Macad::Occt::Graphic3d_ArrayOfQuadrangles::CreateDowncasted((::Graphic3d_ArrayOfQuadrangles*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_ArrayOfQuadrangleStrips)))
		return Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips::CreateDowncasted((::Graphic3d_ArrayOfQuadrangleStrips*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_ArrayOfSegments)))
		return Macad::Occt::Graphic3d_ArrayOfSegments::CreateDowncasted((::Graphic3d_ArrayOfSegments*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_ArrayOfTriangleFans)))
		return Macad::Occt::Graphic3d_ArrayOfTriangleFans::CreateDowncasted((::Graphic3d_ArrayOfTriangleFans*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_ArrayOfTriangles)))
		return Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted((::Graphic3d_ArrayOfTriangles*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_ArrayOfTriangleStrips)))
		return Macad::Occt::Graphic3d_ArrayOfTriangleStrips::CreateDowncasted((::Graphic3d_ArrayOfTriangleStrips*)instance);

	return gcnew Macad::Occt::Graphic3d_ArrayOfPrimitives( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPoints
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfPoints::Graphic3d_ArrayOfPoints(int theMaxVertexs, int theArrayFlags)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPoints(theMaxVertexs, theArrayFlags);
}

Macad::Occt::Graphic3d_ArrayOfPoints::Graphic3d_ArrayOfPoints(int theMaxVertexs, bool theHasVColors, bool theHasVNormals)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPoints(theMaxVertexs, theHasVColors, theHasVNormals);
}

Macad::Occt::Graphic3d_ArrayOfPoints::Graphic3d_ArrayOfPoints(int theMaxVertexs, bool theHasVColors)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPoints(theMaxVertexs, theHasVColors, false);
}

Macad::Occt::Graphic3d_ArrayOfPoints::Graphic3d_ArrayOfPoints(int theMaxVertexs)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPoints(theMaxVertexs, false, false);
}

Macad::Occt::Graphic3d_ArrayOfPoints::Graphic3d_ArrayOfPoints(Macad::Occt::Graphic3d_ArrayOfPoints^ parameter1)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPoints(*(::Graphic3d_ArrayOfPoints*)parameter1->NativeInstance);
}


Macad::Occt::Graphic3d_ArrayOfPoints^ Macad::Occt::Graphic3d_ArrayOfPoints::CreateDowncasted(::Graphic3d_ArrayOfPoints* instance)
{
	return gcnew Macad::Occt::Graphic3d_ArrayOfPoints( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPolygons
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfPolygons::Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, int theArrayFlags)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPolygons(theMaxVertexs, theMaxBounds, theMaxEdges, theArrayFlags);
}

Macad::Occt::Graphic3d_ArrayOfPolygons::Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVNormals, bool theHasVColors, bool theHasBColors, bool theHasVTexels)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPolygons(theMaxVertexs, theMaxBounds, theMaxEdges, theHasVNormals, theHasVColors, theHasBColors, theHasVTexels);
}

Macad::Occt::Graphic3d_ArrayOfPolygons::Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVNormals, bool theHasVColors, bool theHasBColors)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPolygons(theMaxVertexs, theMaxBounds, theMaxEdges, theHasVNormals, theHasVColors, theHasBColors, false);
}

Macad::Occt::Graphic3d_ArrayOfPolygons::Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVNormals, bool theHasVColors)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPolygons(theMaxVertexs, theMaxBounds, theMaxEdges, theHasVNormals, theHasVColors, false, false);
}

Macad::Occt::Graphic3d_ArrayOfPolygons::Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVNormals)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPolygons(theMaxVertexs, theMaxBounds, theMaxEdges, theHasVNormals, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfPolygons::Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPolygons(theMaxVertexs, theMaxBounds, theMaxEdges, false, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfPolygons::Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPolygons(theMaxVertexs, theMaxBounds, 0, false, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfPolygons::Graphic3d_ArrayOfPolygons(int theMaxVertexs)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPolygons(theMaxVertexs, 0, 0, false, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfPolygons::Graphic3d_ArrayOfPolygons(Macad::Occt::Graphic3d_ArrayOfPolygons^ parameter1)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPolygons(*(::Graphic3d_ArrayOfPolygons*)parameter1->NativeInstance);
}


Macad::Occt::Graphic3d_ArrayOfPolygons^ Macad::Occt::Graphic3d_ArrayOfPolygons::CreateDowncasted(::Graphic3d_ArrayOfPolygons* instance)
{
	return gcnew Macad::Occt::Graphic3d_ArrayOfPolygons( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPolylines
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfPolylines::Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds, int theMaxEdges, int theArrayFlags)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPolylines(theMaxVertexs, theMaxBounds, theMaxEdges, theArrayFlags);
}

Macad::Occt::Graphic3d_ArrayOfPolylines::Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVColors, bool theHasBColors)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPolylines(theMaxVertexs, theMaxBounds, theMaxEdges, theHasVColors, theHasBColors);
}

Macad::Occt::Graphic3d_ArrayOfPolylines::Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVColors)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPolylines(theMaxVertexs, theMaxBounds, theMaxEdges, theHasVColors, false);
}

Macad::Occt::Graphic3d_ArrayOfPolylines::Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds, int theMaxEdges)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPolylines(theMaxVertexs, theMaxBounds, theMaxEdges, false, false);
}

Macad::Occt::Graphic3d_ArrayOfPolylines::Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPolylines(theMaxVertexs, theMaxBounds, 0, false, false);
}

Macad::Occt::Graphic3d_ArrayOfPolylines::Graphic3d_ArrayOfPolylines(int theMaxVertexs)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPolylines(theMaxVertexs, 0, 0, false, false);
}

Macad::Occt::Graphic3d_ArrayOfPolylines::Graphic3d_ArrayOfPolylines(Macad::Occt::Graphic3d_ArrayOfPolylines^ parameter1)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfPolylines(*(::Graphic3d_ArrayOfPolylines*)parameter1->NativeInstance);
}


Macad::Occt::Graphic3d_ArrayOfPolylines^ Macad::Occt::Graphic3d_ArrayOfPolylines::CreateDowncasted(::Graphic3d_ArrayOfPolylines* instance)
{
	return gcnew Macad::Occt::Graphic3d_ArrayOfPolylines( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfQuadrangles
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfQuadrangles::Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges, int theArrayFlags)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfQuadrangles(theMaxVertexs, theMaxEdges, theArrayFlags);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangles::Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals, bool theHasVColors, bool theHasVTexels)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfQuadrangles(theMaxVertexs, theMaxEdges, theHasVNormals, theHasVColors, theHasVTexels);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangles::Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals, bool theHasVColors)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfQuadrangles(theMaxVertexs, theMaxEdges, theHasVNormals, theHasVColors, false);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangles::Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfQuadrangles(theMaxVertexs, theMaxEdges, theHasVNormals, false, false);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangles::Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfQuadrangles(theMaxVertexs, theMaxEdges, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangles::Graphic3d_ArrayOfQuadrangles(int theMaxVertexs)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfQuadrangles(theMaxVertexs, 0, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangles::Graphic3d_ArrayOfQuadrangles(Macad::Occt::Graphic3d_ArrayOfQuadrangles^ parameter1)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfQuadrangles(*(::Graphic3d_ArrayOfQuadrangles*)parameter1->NativeInstance);
}


Macad::Occt::Graphic3d_ArrayOfQuadrangles^ Macad::Occt::Graphic3d_ArrayOfQuadrangles::CreateDowncasted(::Graphic3d_ArrayOfQuadrangles* instance)
{
	return gcnew Macad::Occt::Graphic3d_ArrayOfQuadrangles( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfQuadrangleStrips
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips::Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, int theArrayFlags)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfQuadrangleStrips(theMaxVertexs, theMaxStrips, theArrayFlags);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips::Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors, bool theHasSColors, bool theHasVTexels)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfQuadrangleStrips(theMaxVertexs, theMaxStrips, theHasVNormals, theHasVColors, theHasSColors, theHasVTexels);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips::Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors, bool theHasSColors)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfQuadrangleStrips(theMaxVertexs, theMaxStrips, theHasVNormals, theHasVColors, theHasSColors, false);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips::Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfQuadrangleStrips(theMaxVertexs, theMaxStrips, theHasVNormals, theHasVColors, false, false);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips::Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfQuadrangleStrips(theMaxVertexs, theMaxStrips, theHasVNormals, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips::Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfQuadrangleStrips(theMaxVertexs, theMaxStrips, false, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips::Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfQuadrangleStrips(theMaxVertexs, 0, false, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips::Graphic3d_ArrayOfQuadrangleStrips(Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips^ parameter1)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfQuadrangleStrips(*(::Graphic3d_ArrayOfQuadrangleStrips*)parameter1->NativeInstance);
}


Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips^ Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips::CreateDowncasted(::Graphic3d_ArrayOfQuadrangleStrips* instance)
{
	return gcnew Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfSegments
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfSegments::Graphic3d_ArrayOfSegments(int theMaxVertexs, int theMaxEdges, int theArrayFlags)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfSegments(theMaxVertexs, theMaxEdges, theArrayFlags);
}

Macad::Occt::Graphic3d_ArrayOfSegments::Graphic3d_ArrayOfSegments(int theMaxVertexs, int theMaxEdges, bool theHasVColors)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfSegments(theMaxVertexs, theMaxEdges, theHasVColors);
}

Macad::Occt::Graphic3d_ArrayOfSegments::Graphic3d_ArrayOfSegments(int theMaxVertexs, int theMaxEdges)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfSegments(theMaxVertexs, theMaxEdges, false);
}

Macad::Occt::Graphic3d_ArrayOfSegments::Graphic3d_ArrayOfSegments(int theMaxVertexs)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfSegments(theMaxVertexs, 0, false);
}

Macad::Occt::Graphic3d_ArrayOfSegments::Graphic3d_ArrayOfSegments(Macad::Occt::Graphic3d_ArrayOfSegments^ parameter1)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfSegments(*(::Graphic3d_ArrayOfSegments*)parameter1->NativeInstance);
}


Macad::Occt::Graphic3d_ArrayOfSegments^ Macad::Occt::Graphic3d_ArrayOfSegments::CreateDowncasted(::Graphic3d_ArrayOfSegments* instance)
{
	return gcnew Macad::Occt::Graphic3d_ArrayOfSegments( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfTriangleFans
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfTriangleFans::Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, int theArrayFlags)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangleFans(theMaxVertexs, theMaxFans, theArrayFlags);
}

Macad::Occt::Graphic3d_ArrayOfTriangleFans::Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, bool theHasVNormals, bool theHasVColors, bool theHasBColors, bool theHasVTexels)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangleFans(theMaxVertexs, theMaxFans, theHasVNormals, theHasVColors, theHasBColors, theHasVTexels);
}

Macad::Occt::Graphic3d_ArrayOfTriangleFans::Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, bool theHasVNormals, bool theHasVColors, bool theHasBColors)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangleFans(theMaxVertexs, theMaxFans, theHasVNormals, theHasVColors, theHasBColors, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleFans::Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, bool theHasVNormals, bool theHasVColors)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangleFans(theMaxVertexs, theMaxFans, theHasVNormals, theHasVColors, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleFans::Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, bool theHasVNormals)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangleFans(theMaxVertexs, theMaxFans, theHasVNormals, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleFans::Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangleFans(theMaxVertexs, theMaxFans, false, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleFans::Graphic3d_ArrayOfTriangleFans(int theMaxVertexs)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangleFans(theMaxVertexs, 0, false, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleFans::Graphic3d_ArrayOfTriangleFans(Macad::Occt::Graphic3d_ArrayOfTriangleFans^ parameter1)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangleFans(*(::Graphic3d_ArrayOfTriangleFans*)parameter1->NativeInstance);
}


Macad::Occt::Graphic3d_ArrayOfTriangleFans^ Macad::Occt::Graphic3d_ArrayOfTriangleFans::CreateDowncasted(::Graphic3d_ArrayOfTriangleFans* instance)
{
	return gcnew Macad::Occt::Graphic3d_ArrayOfTriangleFans( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfTriangles
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfTriangles::Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges, int theArrayFlags)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangles(theMaxVertexs, theMaxEdges, theArrayFlags);
}

Macad::Occt::Graphic3d_ArrayOfTriangles::Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals, bool theHasVColors, bool theHasVTexels)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangles(theMaxVertexs, theMaxEdges, theHasVNormals, theHasVColors, theHasVTexels);
}

Macad::Occt::Graphic3d_ArrayOfTriangles::Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals, bool theHasVColors)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangles(theMaxVertexs, theMaxEdges, theHasVNormals, theHasVColors, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangles::Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangles(theMaxVertexs, theMaxEdges, theHasVNormals, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangles::Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangles(theMaxVertexs, theMaxEdges, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangles::Graphic3d_ArrayOfTriangles(int theMaxVertexs)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangles(theMaxVertexs, 0, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangles::Graphic3d_ArrayOfTriangles(Macad::Occt::Graphic3d_ArrayOfTriangles^ parameter1)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangles(*(::Graphic3d_ArrayOfTriangles*)parameter1->NativeInstance);
}


Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted(::Graphic3d_ArrayOfTriangles* instance)
{
	return gcnew Macad::Occt::Graphic3d_ArrayOfTriangles( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfTriangleStrips
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfTriangleStrips::Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, int theArrayFlags)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangleStrips(theMaxVertexs, theMaxStrips, theArrayFlags);
}

Macad::Occt::Graphic3d_ArrayOfTriangleStrips::Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors, bool theHasBColors, bool theHasVTexels)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangleStrips(theMaxVertexs, theMaxStrips, theHasVNormals, theHasVColors, theHasBColors, theHasVTexels);
}

Macad::Occt::Graphic3d_ArrayOfTriangleStrips::Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors, bool theHasBColors)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangleStrips(theMaxVertexs, theMaxStrips, theHasVNormals, theHasVColors, theHasBColors, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleStrips::Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangleStrips(theMaxVertexs, theMaxStrips, theHasVNormals, theHasVColors, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleStrips::Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangleStrips(theMaxVertexs, theMaxStrips, theHasVNormals, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleStrips::Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangleStrips(theMaxVertexs, theMaxStrips, false, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleStrips::Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangleStrips(theMaxVertexs, 0, false, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleStrips::Graphic3d_ArrayOfTriangleStrips(Macad::Occt::Graphic3d_ArrayOfTriangleStrips^ parameter1)
	: Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ArrayOfTriangleStrips(*(::Graphic3d_ArrayOfTriangleStrips*)parameter1->NativeInstance);
}


Macad::Occt::Graphic3d_ArrayOfTriangleStrips^ Macad::Occt::Graphic3d_ArrayOfTriangleStrips::CreateDowncasted(::Graphic3d_ArrayOfTriangleStrips* instance)
{
	return gcnew Macad::Occt::Graphic3d_ArrayOfTriangleStrips( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_MarkerImage
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_MarkerImage::Graphic3d_MarkerImage(Macad::Occt::Image_PixMap^ theImage)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::Image_PixMap) h_theImage = theImage->NativeInstance;
	NativeInstance = new ::Graphic3d_MarkerImage(h_theImage);
	theImage->NativeInstance = h_theImage.get();
}

Macad::Occt::Graphic3d_MarkerImage::Graphic3d_MarkerImage(Macad::Occt::TColStd_HArray1OfByte^ theBitMap, int theWidth, int theHeight)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::TColStd_HArray1OfByte) h_theBitMap = theBitMap->NativeInstance;
	pin_ptr<int> pp_theWidth = &theWidth;
	pin_ptr<int> pp_theHeight = &theHeight;
	NativeInstance = new ::Graphic3d_MarkerImage(h_theBitMap, *(Standard_Integer*)pp_theWidth, *(Standard_Integer*)pp_theHeight);
	theBitMap->NativeInstance = h_theBitMap.get();
}

Macad::Occt::Graphic3d_MarkerImage::Graphic3d_MarkerImage(Macad::Occt::Graphic3d_MarkerImage^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_MarkerImage(*(::Graphic3d_MarkerImage*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_HArray1OfByte^ Macad::Occt::Graphic3d_MarkerImage::GetBitMapArray(double theAlphaValue)
{
	pin_ptr<double> pp_theAlphaValue = &theAlphaValue;
	Handle(::TColStd_HArray1OfByte) _result;
	_result = ((::Graphic3d_MarkerImage*)_NativeInstance)->GetBitMapArray(*(Standard_Real*)pp_theAlphaValue);
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfByte::CreateDowncasted( _result.get());
}

Macad::Occt::TColStd_HArray1OfByte^ Macad::Occt::Graphic3d_MarkerImage::GetBitMapArray()
{
	Handle(::TColStd_HArray1OfByte) _result;
	_result = ((::Graphic3d_MarkerImage*)_NativeInstance)->GetBitMapArray(0.5);
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfByte::CreateDowncasted( _result.get());
}

Macad::Occt::Image_PixMap^ Macad::Occt::Graphic3d_MarkerImage::GetImage()
{
	Handle(::Image_PixMap) _result;
	_result = ((::Graphic3d_MarkerImage*)_NativeInstance)->GetImage();
	 return _result.IsNull() ? nullptr : Macad::Occt::Image_PixMap::CreateDowncasted( _result.get());
}

Macad::Occt::Image_PixMap^ Macad::Occt::Graphic3d_MarkerImage::GetImageAlpha()
{
	Handle(::Image_PixMap) _result;
	_result = ((::Graphic3d_MarkerImage*)_NativeInstance)->GetImageAlpha();
	 return _result.IsNull() ? nullptr : Macad::Occt::Image_PixMap::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_MarkerImage::GetImageId()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Graphic3d_MarkerImage*)_NativeInstance)->GetImageId();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_MarkerImage::GetImageAlphaId()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Graphic3d_MarkerImage*)_NativeInstance)->GetImageAlphaId();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Graphic3d_MarkerImage::GetTextureSize(int% theWidth, int% theHeight)
{
	pin_ptr<int> pp_theWidth = &theWidth;
	pin_ptr<int> pp_theHeight = &theHeight;
	((::Graphic3d_MarkerImage*)_NativeInstance)->GetTextureSize(*(Standard_Integer*)pp_theWidth, *(Standard_Integer*)pp_theHeight);
}


Macad::Occt::Graphic3d_MarkerImage^ Macad::Occt::Graphic3d_MarkerImage::CreateDowncasted(::Graphic3d_MarkerImage* instance)
{
	return gcnew Macad::Occt::Graphic3d_MarkerImage( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_HatchStyle
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_HatchStyle::Graphic3d_HatchStyle(Macad::Occt::Image_PixMap^ thePattern)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::Image_PixMap) h_thePattern = thePattern->NativeInstance;
	NativeInstance = new ::Graphic3d_HatchStyle(h_thePattern);
	thePattern->NativeInstance = h_thePattern.get();
}

Macad::Occt::Graphic3d_HatchStyle::Graphic3d_HatchStyle(Macad::Occt::Aspect_HatchStyle theType)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_HatchStyle((::Aspect_HatchStyle)theType);
}

Macad::Occt::Graphic3d_HatchStyle::Graphic3d_HatchStyle(Macad::Occt::Graphic3d_HatchStyle^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_HatchStyle(*(::Graphic3d_HatchStyle*)parameter1->NativeInstance);
}

unsigned char Macad::Occt::Graphic3d_HatchStyle::Pattern()
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

int Macad::Occt::Graphic3d_HatchStyle::HatchType()
{
	return ((::Graphic3d_HatchStyle*)_NativeInstance)->HatchType();
}


Macad::Occt::Graphic3d_HatchStyle^ Macad::Occt::Graphic3d_HatchStyle::CreateDowncasted(::Graphic3d_HatchStyle* instance)
{
	return gcnew Macad::Occt::Graphic3d_HatchStyle( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_PBRMaterial
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_PBRMaterial::Graphic3d_PBRMaterial()
	: BaseClass<::Graphic3d_PBRMaterial>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_PBRMaterial();
}

Macad::Occt::Graphic3d_PBRMaterial::Graphic3d_PBRMaterial(Macad::Occt::Graphic3d_BSDF^ theBSDF)
	: BaseClass<::Graphic3d_PBRMaterial>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_PBRMaterial(*(::Graphic3d_BSDF*)theBSDF->NativeInstance);
}

Macad::Occt::Graphic3d_PBRMaterial::Graphic3d_PBRMaterial(Macad::Occt::Graphic3d_PBRMaterial^ parameter1)
	: BaseClass<::Graphic3d_PBRMaterial>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_PBRMaterial(*(::Graphic3d_PBRMaterial*)parameter1->NativeInstance);
}

float Macad::Occt::Graphic3d_PBRMaterial::Metallic()
{
	return ((::Graphic3d_PBRMaterial*)_NativeInstance)->Metallic();
}

void Macad::Occt::Graphic3d_PBRMaterial::SetMetallic(float theMetallic)
{
	((::Graphic3d_PBRMaterial*)_NativeInstance)->SetMetallic(theMetallic);
}

float Macad::Occt::Graphic3d_PBRMaterial::Roughness(float theNormalizedRoughness)
{
	return ::Graphic3d_PBRMaterial::Roughness(theNormalizedRoughness);
}

float Macad::Occt::Graphic3d_PBRMaterial::Roughness()
{
	return ((::Graphic3d_PBRMaterial*)_NativeInstance)->Roughness();
}

float Macad::Occt::Graphic3d_PBRMaterial::NormalizedRoughness()
{
	return ((::Graphic3d_PBRMaterial*)_NativeInstance)->NormalizedRoughness();
}

void Macad::Occt::Graphic3d_PBRMaterial::SetRoughness(float theRoughness)
{
	((::Graphic3d_PBRMaterial*)_NativeInstance)->SetRoughness(theRoughness);
}

float Macad::Occt::Graphic3d_PBRMaterial::IOR()
{
	return ((::Graphic3d_PBRMaterial*)_NativeInstance)->IOR();
}

void Macad::Occt::Graphic3d_PBRMaterial::SetIOR(float theIOR)
{
	((::Graphic3d_PBRMaterial*)_NativeInstance)->SetIOR(theIOR);
}

Macad::Occt::Quantity_ColorRGBA^ Macad::Occt::Graphic3d_PBRMaterial::Color()
{
	::Quantity_ColorRGBA* _result = new ::Quantity_ColorRGBA();
	*_result =  (::Quantity_ColorRGBA)((::Graphic3d_PBRMaterial*)_NativeInstance)->Color();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_ColorRGBA(_result);
}

void Macad::Occt::Graphic3d_PBRMaterial::SetColor(Macad::Occt::Quantity_ColorRGBA^ theColor)
{
	((::Graphic3d_PBRMaterial*)_NativeInstance)->SetColor(*(::Quantity_ColorRGBA*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_PBRMaterial::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_PBRMaterial*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

float Macad::Occt::Graphic3d_PBRMaterial::Alpha()
{
	return ((::Graphic3d_PBRMaterial*)_NativeInstance)->Alpha();
}

void Macad::Occt::Graphic3d_PBRMaterial::SetAlpha(float theAlpha)
{
	((::Graphic3d_PBRMaterial*)_NativeInstance)->SetAlpha(theAlpha);
}

void Macad::Occt::Graphic3d_PBRMaterial::SetBSDF(Macad::Occt::Graphic3d_BSDF^ theBSDF)
{
	((::Graphic3d_PBRMaterial*)_NativeInstance)->SetBSDF(*(::Graphic3d_BSDF*)theBSDF->NativeInstance);
}

void Macad::Occt::Graphic3d_PBRMaterial::GenerateEnvLUT(Macad::Occt::Image_PixMap^ theLUT, unsigned int theNbIntegralSamples)
{
	Handle(::Image_PixMap) h_theLUT = theLUT->NativeInstance;
	::Graphic3d_PBRMaterial::GenerateEnvLUT(h_theLUT, theNbIntegralSamples);
	theLUT->NativeInstance = h_theLUT.get();
}

void Macad::Occt::Graphic3d_PBRMaterial::GenerateEnvLUT(Macad::Occt::Image_PixMap^ theLUT)
{
	Handle(::Image_PixMap) h_theLUT = theLUT->NativeInstance;
	::Graphic3d_PBRMaterial::GenerateEnvLUT(h_theLUT, 1024);
	theLUT->NativeInstance = h_theLUT.get();
}

float Macad::Occt::Graphic3d_PBRMaterial::RoughnessFromSpecular(Macad::Occt::Quantity_Color^ theSpecular, double theShiness)
{
	return ::Graphic3d_PBRMaterial::RoughnessFromSpecular(*(::Quantity_Color*)theSpecular->NativeInstance, theShiness);
}

float Macad::Occt::Graphic3d_PBRMaterial::MetallicFromSpecular(Macad::Occt::Quantity_Color^ theSpecular)
{
	return ::Graphic3d_PBRMaterial::MetallicFromSpecular(*(::Quantity_Color*)theSpecular->NativeInstance);
}

float Macad::Occt::Graphic3d_PBRMaterial::MinRoughness()
{
	return ::Graphic3d_PBRMaterial::MinRoughness();
}

float Macad::Occt::Graphic3d_PBRMaterial::SpecIBLMapSamplesFactor(float theProbability, float theRoughness)
{
	return ::Graphic3d_PBRMaterial::SpecIBLMapSamplesFactor(theProbability, theRoughness);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_Fresnel
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Fresnel::Graphic3d_Fresnel()
	: BaseClass<::Graphic3d_Fresnel>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Fresnel();
}

Macad::Occt::Graphic3d_Fresnel::Graphic3d_Fresnel(Macad::Occt::Graphic3d_Fresnel^ parameter1)
	: BaseClass<::Graphic3d_Fresnel>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_Fresnel(*(::Graphic3d_Fresnel*)parameter1->NativeInstance);
}

Macad::Occt::Graphic3d_Fresnel^ Macad::Occt::Graphic3d_Fresnel::CreateConstant(float theReflection)
{
	::Graphic3d_Fresnel* _result = new ::Graphic3d_Fresnel();
	*_result = ::Graphic3d_Fresnel::CreateConstant(theReflection);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Fresnel(_result);
}

Macad::Occt::Graphic3d_Fresnel^ Macad::Occt::Graphic3d_Fresnel::CreateDielectric(float theRefractionIndex)
{
	::Graphic3d_Fresnel* _result = new ::Graphic3d_Fresnel();
	*_result = ::Graphic3d_Fresnel::CreateDielectric(theRefractionIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Fresnel(_result);
}

Macad::Occt::Graphic3d_Fresnel^ Macad::Occt::Graphic3d_Fresnel::CreateConductor(float theRefractionIndex, float theAbsorptionIndex)
{
	::Graphic3d_Fresnel* _result = new ::Graphic3d_Fresnel();
	*_result = ::Graphic3d_Fresnel::CreateConductor(theRefractionIndex, theAbsorptionIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Fresnel(_result);
}

Macad::Occt::Graphic3d_FresnelModel Macad::Occt::Graphic3d_Fresnel::FresnelType()
{
	return (Macad::Occt::Graphic3d_FresnelModel)((::Graphic3d_Fresnel*)_NativeInstance)->FresnelType();
}




//---------------------------------------------------------------------
//  Class  Graphic3d_BSDF
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_BSDF::Graphic3d_BSDF()
	: BaseClass<::Graphic3d_BSDF>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_BSDF();
}

Macad::Occt::Graphic3d_BSDF::Graphic3d_BSDF(Macad::Occt::Graphic3d_BSDF^ parameter1)
	: BaseClass<::Graphic3d_BSDF>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_BSDF(*(::Graphic3d_BSDF*)parameter1->NativeInstance);
}

Macad::Occt::Graphic3d_BSDF^ Macad::Occt::Graphic3d_BSDF::CreateMetallicRoughness(Macad::Occt::Graphic3d_PBRMaterial^ thePbr)
{
	::Graphic3d_BSDF* _result = new ::Graphic3d_BSDF();
	*_result = ::Graphic3d_BSDF::CreateMetallicRoughness(*(::Graphic3d_PBRMaterial*)thePbr->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_BSDF(_result);
}

void Macad::Occt::Graphic3d_BSDF::Normalize()
{
	((::Graphic3d_BSDF*)_NativeInstance)->Normalize();
}




//---------------------------------------------------------------------
//  Class  Graphic3d_MaterialAspect
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_MaterialAspect::Graphic3d_MaterialAspect()
	: BaseClass<::Graphic3d_MaterialAspect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_MaterialAspect();
}

Macad::Occt::Graphic3d_MaterialAspect::Graphic3d_MaterialAspect(Macad::Occt::Graphic3d_NameOfMaterial theName)
	: BaseClass<::Graphic3d_MaterialAspect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_MaterialAspect((::Graphic3d_NameOfMaterial)theName);
}

Macad::Occt::Graphic3d_MaterialAspect::Graphic3d_MaterialAspect(Macad::Occt::Graphic3d_MaterialAspect^ parameter1)
	: BaseClass<::Graphic3d_MaterialAspect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_MaterialAspect(*(::Graphic3d_MaterialAspect*)parameter1->NativeInstance);
}

int Macad::Occt::Graphic3d_MaterialAspect::NumberOfMaterials()
{
	return ::Graphic3d_MaterialAspect::NumberOfMaterials();
}

System::String^ Macad::Occt::Graphic3d_MaterialAspect::MaterialName(int theRank)
{
	Standard_CString _result;
	_result = ::Graphic3d_MaterialAspect::MaterialName(theRank);
	return gcnew System::String(_result);
}

Macad::Occt::Graphic3d_TypeOfMaterial Macad::Occt::Graphic3d_MaterialAspect::MaterialType(int theRank)
{
	return (Macad::Occt::Graphic3d_TypeOfMaterial)::Graphic3d_MaterialAspect::MaterialType(theRank);
}

bool Macad::Occt::Graphic3d_MaterialAspect::MaterialFromName(System::String^ theName, Macad::Occt::Graphic3d_NameOfMaterial% theMat)
{
	const char* sz_theName = (char*)(void*)Marshal::StringToHGlobalAnsi(theName);
	pin_ptr<Macad::Occt::Graphic3d_NameOfMaterial> pp_theMat = &theMat;
	return ::Graphic3d_MaterialAspect::MaterialFromName(sz_theName, *(::Graphic3d_NameOfMaterial*)pp_theMat);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theName);
}

Macad::Occt::Graphic3d_NameOfMaterial Macad::Occt::Graphic3d_MaterialAspect::MaterialFromName(System::String^ theName)
{
	const char* sz_theName = (char*)(void*)Marshal::StringToHGlobalAnsi(theName);
	return (Macad::Occt::Graphic3d_NameOfMaterial)::Graphic3d_MaterialAspect::MaterialFromName(sz_theName);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theName);
}

Macad::Occt::Graphic3d_NameOfMaterial Macad::Occt::Graphic3d_MaterialAspect::Name()
{
	return (Macad::Occt::Graphic3d_NameOfMaterial)((::Graphic3d_MaterialAspect*)_NativeInstance)->Name();
}

Macad::Occt::Graphic3d_NameOfMaterial Macad::Occt::Graphic3d_MaterialAspect::RequestedName()
{
	return (Macad::Occt::Graphic3d_NameOfMaterial)((::Graphic3d_MaterialAspect*)_NativeInstance)->RequestedName();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_MaterialAspect::StringName()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Graphic3d_MaterialAspect*)_NativeInstance)->StringName();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

System::String^ Macad::Occt::Graphic3d_MaterialAspect::MaterialName()
{
	Standard_CString _result;
	_result = ((::Graphic3d_MaterialAspect*)_NativeInstance)->MaterialName();
	return gcnew System::String(_result);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetMaterialName(Macad::Occt::TCollection_AsciiString^ theName)
{
	((::Graphic3d_MaterialAspect*)_NativeInstance)->SetMaterialName(*(::TCollection_AsciiString*)theName->NativeInstance);
}

void Macad::Occt::Graphic3d_MaterialAspect::Reset()
{
	((::Graphic3d_MaterialAspect*)_NativeInstance)->Reset();
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_MaterialAspect::Color()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Graphic3d_MaterialAspect*)_NativeInstance)->Color();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_MaterialAspect*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

float Macad::Occt::Graphic3d_MaterialAspect::Transparency()
{
	return ((::Graphic3d_MaterialAspect*)_NativeInstance)->Transparency();
}

float Macad::Occt::Graphic3d_MaterialAspect::Alpha()
{
	return ((::Graphic3d_MaterialAspect*)_NativeInstance)->Alpha();
}

void Macad::Occt::Graphic3d_MaterialAspect::SetTransparency(float theValue)
{
	((::Graphic3d_MaterialAspect*)_NativeInstance)->SetTransparency(theValue);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetAlpha(float theValue)
{
	((::Graphic3d_MaterialAspect*)_NativeInstance)->SetAlpha(theValue);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_MaterialAspect::AmbientColor()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Graphic3d_MaterialAspect*)_NativeInstance)->AmbientColor();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetAmbientColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_MaterialAspect*)_NativeInstance)->SetAmbientColor(*(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_MaterialAspect::DiffuseColor()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Graphic3d_MaterialAspect*)_NativeInstance)->DiffuseColor();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetDiffuseColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_MaterialAspect*)_NativeInstance)->SetDiffuseColor(*(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_MaterialAspect::SpecularColor()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Graphic3d_MaterialAspect*)_NativeInstance)->SpecularColor();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetSpecularColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_MaterialAspect*)_NativeInstance)->SetSpecularColor(*(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_MaterialAspect::EmissiveColor()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Graphic3d_MaterialAspect*)_NativeInstance)->EmissiveColor();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetEmissiveColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_MaterialAspect*)_NativeInstance)->SetEmissiveColor(*(::Quantity_Color*)theColor->NativeInstance);
}

float Macad::Occt::Graphic3d_MaterialAspect::Shininess()
{
	return ((::Graphic3d_MaterialAspect*)_NativeInstance)->Shininess();
}

void Macad::Occt::Graphic3d_MaterialAspect::SetShininess(float theValue)
{
	((::Graphic3d_MaterialAspect*)_NativeInstance)->SetShininess(theValue);
}

void Macad::Occt::Graphic3d_MaterialAspect::IncreaseShine(float theDelta)
{
	((::Graphic3d_MaterialAspect*)_NativeInstance)->IncreaseShine(theDelta);
}

float Macad::Occt::Graphic3d_MaterialAspect::RefractionIndex()
{
	return ((::Graphic3d_MaterialAspect*)_NativeInstance)->RefractionIndex();
}

void Macad::Occt::Graphic3d_MaterialAspect::SetRefractionIndex(float theValue)
{
	((::Graphic3d_MaterialAspect*)_NativeInstance)->SetRefractionIndex(theValue);
}

Macad::Occt::Graphic3d_BSDF^ Macad::Occt::Graphic3d_MaterialAspect::BSDF()
{
	::Graphic3d_BSDF* _result = new ::Graphic3d_BSDF();
	*_result =  (::Graphic3d_BSDF)((::Graphic3d_MaterialAspect*)_NativeInstance)->BSDF();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_BSDF(_result);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetBSDF(Macad::Occt::Graphic3d_BSDF^ theBSDF)
{
	((::Graphic3d_MaterialAspect*)_NativeInstance)->SetBSDF(*(::Graphic3d_BSDF*)theBSDF->NativeInstance);
}

Macad::Occt::Graphic3d_PBRMaterial^ Macad::Occt::Graphic3d_MaterialAspect::PBRMaterial()
{
	::Graphic3d_PBRMaterial* _result = new ::Graphic3d_PBRMaterial();
	*_result =  (::Graphic3d_PBRMaterial)((::Graphic3d_MaterialAspect*)_NativeInstance)->PBRMaterial();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_PBRMaterial(_result);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetPBRMaterial(Macad::Occt::Graphic3d_PBRMaterial^ thePBRMaterial)
{
	((::Graphic3d_MaterialAspect*)_NativeInstance)->SetPBRMaterial(*(::Graphic3d_PBRMaterial*)thePBRMaterial->NativeInstance);
}

bool Macad::Occt::Graphic3d_MaterialAspect::ReflectionMode(Macad::Occt::Graphic3d_TypeOfReflection theType)
{
	return ((::Graphic3d_MaterialAspect*)_NativeInstance)->ReflectionMode((::Graphic3d_TypeOfReflection)theType);
}

Macad::Occt::Graphic3d_TypeOfMaterial Macad::Occt::Graphic3d_MaterialAspect::MaterialType()
{
	return (Macad::Occt::Graphic3d_TypeOfMaterial)((::Graphic3d_MaterialAspect*)_NativeInstance)->MaterialType();
}

bool Macad::Occt::Graphic3d_MaterialAspect::MaterialType(Macad::Occt::Graphic3d_TypeOfMaterial theType)
{
	return ((::Graphic3d_MaterialAspect*)_NativeInstance)->MaterialType((::Graphic3d_TypeOfMaterial)theType);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetMaterialType(Macad::Occt::Graphic3d_TypeOfMaterial theType)
{
	((::Graphic3d_MaterialAspect*)_NativeInstance)->SetMaterialType((::Graphic3d_TypeOfMaterial)theType);
}

bool Macad::Occt::Graphic3d_MaterialAspect::IsDifferent(Macad::Occt::Graphic3d_MaterialAspect^ theOther)
{
	return ((::Graphic3d_MaterialAspect*)_NativeInstance)->IsDifferent(*(::Graphic3d_MaterialAspect*)theOther->NativeInstance);
}

bool Macad::Occt::Graphic3d_MaterialAspect::IsEqual(Macad::Occt::Graphic3d_MaterialAspect^ theOther)
{
	return ((::Graphic3d_MaterialAspect*)_NativeInstance)->IsEqual(*(::Graphic3d_MaterialAspect*)theOther->NativeInstance);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetReflectionModeOff(Macad::Occt::Graphic3d_TypeOfReflection theType)
{
	((::Graphic3d_MaterialAspect*)_NativeInstance)->SetReflectionModeOff((::Graphic3d_TypeOfReflection)theType);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderAttribute
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ShaderAttribute::Graphic3d_ShaderAttribute(Macad::Occt::TCollection_AsciiString^ theName, int theLocation)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ShaderAttribute(*(::TCollection_AsciiString*)theName->NativeInstance, theLocation);
}

Macad::Occt::Graphic3d_ShaderAttribute::Graphic3d_ShaderAttribute(Macad::Occt::Graphic3d_ShaderAttribute^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ShaderAttribute(*(::Graphic3d_ShaderAttribute*)parameter1->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_ShaderAttribute::Name()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Graphic3d_ShaderAttribute*)_NativeInstance)->Name();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

int Macad::Occt::Graphic3d_ShaderAttribute::Location()
{
	return ((::Graphic3d_ShaderAttribute*)_NativeInstance)->Location();
}


Macad::Occt::Graphic3d_ShaderAttribute^ Macad::Occt::Graphic3d_ShaderAttribute::CreateDowncasted(::Graphic3d_ShaderAttribute* instance)
{
	return gcnew Macad::Occt::Graphic3d_ShaderAttribute( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderObject
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ShaderObject::Graphic3d_ShaderObject(Macad::Occt::Graphic3d_ShaderObject^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ShaderObject(*(::Graphic3d_ShaderObject*)parameter1->NativeInstance);
}

bool Macad::Occt::Graphic3d_ShaderObject::IsDone()
{
	return ((::Graphic3d_ShaderObject*)_NativeInstance)->IsDone();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_ShaderObject::Source()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Graphic3d_ShaderObject*)_NativeInstance)->Source();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Graphic3d_TypeOfShaderObject Macad::Occt::Graphic3d_ShaderObject::Type()
{
	return (Macad::Occt::Graphic3d_TypeOfShaderObject)((::Graphic3d_ShaderObject*)_NativeInstance)->Type();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_ShaderObject::GetId()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Graphic3d_ShaderObject*)_NativeInstance)->GetId();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObject::CreateFromFile(Macad::Occt::Graphic3d_TypeOfShaderObject theType, Macad::Occt::TCollection_AsciiString^ thePath)
{
	Handle(::Graphic3d_ShaderObject) _result;
	_result = ::Graphic3d_ShaderObject::CreateFromFile((::Graphic3d_TypeOfShaderObject)theType, *(::TCollection_AsciiString*)thePath->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObject::CreateFromSource(Macad::Occt::Graphic3d_TypeOfShaderObject theType, Macad::Occt::TCollection_AsciiString^ theSource)
{
	Handle(::Graphic3d_ShaderObject) _result;
	_result = ::Graphic3d_ShaderObject::CreateFromSource((::Graphic3d_TypeOfShaderObject)theType, *(::TCollection_AsciiString*)theSource->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted( _result.get());
}


Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted(::Graphic3d_ShaderObject* instance)
{
	return gcnew Macad::Occt::Graphic3d_ShaderObject( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_TextureParams
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_TextureParams::Graphic3d_TextureParams()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_TextureParams();
}

Macad::Occt::Graphic3d_TextureParams::Graphic3d_TextureParams(Macad::Occt::Graphic3d_TextureParams^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_TextureParams(*(::Graphic3d_TextureParams*)parameter1->NativeInstance);
}

Macad::Occt::Graphic3d_TextureUnit Macad::Occt::Graphic3d_TextureParams::TextureUnit()
{
	return (Macad::Occt::Graphic3d_TextureUnit)((::Graphic3d_TextureParams*)_NativeInstance)->TextureUnit();
}

void Macad::Occt::Graphic3d_TextureParams::SetTextureUnit(Macad::Occt::Graphic3d_TextureUnit theUnit)
{
	((::Graphic3d_TextureParams*)_NativeInstance)->SetTextureUnit((::Graphic3d_TextureUnit)theUnit);
}

bool Macad::Occt::Graphic3d_TextureParams::IsModulate()
{
	return ((::Graphic3d_TextureParams*)_NativeInstance)->IsModulate();
}

void Macad::Occt::Graphic3d_TextureParams::SetModulate(bool theToModulate)
{
	((::Graphic3d_TextureParams*)_NativeInstance)->SetModulate(theToModulate);
}

bool Macad::Occt::Graphic3d_TextureParams::IsRepeat()
{
	return ((::Graphic3d_TextureParams*)_NativeInstance)->IsRepeat();
}

void Macad::Occt::Graphic3d_TextureParams::SetRepeat(bool theToRepeat)
{
	((::Graphic3d_TextureParams*)_NativeInstance)->SetRepeat(theToRepeat);
}

Macad::Occt::Graphic3d_TypeOfTextureFilter Macad::Occt::Graphic3d_TextureParams::Filter()
{
	return (Macad::Occt::Graphic3d_TypeOfTextureFilter)((::Graphic3d_TextureParams*)_NativeInstance)->Filter();
}

void Macad::Occt::Graphic3d_TextureParams::SetFilter(Macad::Occt::Graphic3d_TypeOfTextureFilter theFilter)
{
	((::Graphic3d_TextureParams*)_NativeInstance)->SetFilter((::Graphic3d_TypeOfTextureFilter)theFilter);
}

Macad::Occt::Graphic3d_LevelOfTextureAnisotropy Macad::Occt::Graphic3d_TextureParams::AnisoFilter()
{
	return (Macad::Occt::Graphic3d_LevelOfTextureAnisotropy)((::Graphic3d_TextureParams*)_NativeInstance)->AnisoFilter();
}

void Macad::Occt::Graphic3d_TextureParams::SetAnisoFilter(Macad::Occt::Graphic3d_LevelOfTextureAnisotropy theLevel)
{
	((::Graphic3d_TextureParams*)_NativeInstance)->SetAnisoFilter((::Graphic3d_LevelOfTextureAnisotropy)theLevel);
}

float Macad::Occt::Graphic3d_TextureParams::Rotation()
{
	return ((::Graphic3d_TextureParams*)_NativeInstance)->Rotation();
}

void Macad::Occt::Graphic3d_TextureParams::SetRotation(float theAngleDegrees)
{
	((::Graphic3d_TextureParams*)_NativeInstance)->SetRotation(theAngleDegrees);
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_TextureParams::Scale()
{
	::Graphic3d_Vec2* _result = new ::Graphic3d_Vec2(0.0);
	*_result =  (::Graphic3d_Vec2)((::Graphic3d_TextureParams*)_NativeInstance)->Scale();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2(_result);
}

void Macad::Occt::Graphic3d_TextureParams::SetScale(Macad::Occt::Graphic3d_Vec2^ theScale)
{
	((::Graphic3d_TextureParams*)_NativeInstance)->SetScale(*(::Graphic3d_Vec2*)theScale->NativeInstance);
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_TextureParams::Translation()
{
	::Graphic3d_Vec2* _result = new ::Graphic3d_Vec2(0.0);
	*_result =  (::Graphic3d_Vec2)((::Graphic3d_TextureParams*)_NativeInstance)->Translation();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2(_result);
}

void Macad::Occt::Graphic3d_TextureParams::SetTranslation(Macad::Occt::Graphic3d_Vec2^ theVec)
{
	((::Graphic3d_TextureParams*)_NativeInstance)->SetTranslation(*(::Graphic3d_Vec2*)theVec->NativeInstance);
}

Macad::Occt::Graphic3d_TypeOfTextureMode Macad::Occt::Graphic3d_TextureParams::GenMode()
{
	return (Macad::Occt::Graphic3d_TypeOfTextureMode)((::Graphic3d_TextureParams*)_NativeInstance)->GenMode();
}

int Macad::Occt::Graphic3d_TextureParams::BaseLevel()
{
	return ((::Graphic3d_TextureParams*)_NativeInstance)->BaseLevel();
}

int Macad::Occt::Graphic3d_TextureParams::MaxLevel()
{
	return ((::Graphic3d_TextureParams*)_NativeInstance)->MaxLevel();
}

void Macad::Occt::Graphic3d_TextureParams::SetLevelsRange(int theFirstLevel, int theSecondLevel)
{
	((::Graphic3d_TextureParams*)_NativeInstance)->SetLevelsRange(theFirstLevel, theSecondLevel);
}

void Macad::Occt::Graphic3d_TextureParams::SetLevelsRange(int theFirstLevel)
{
	((::Graphic3d_TextureParams*)_NativeInstance)->SetLevelsRange(theFirstLevel, 0);
}

unsigned int Macad::Occt::Graphic3d_TextureParams::SamplerRevision()
{
	return ((::Graphic3d_TextureParams*)_NativeInstance)->SamplerRevision();
}


Macad::Occt::Graphic3d_TextureParams^ Macad::Occt::Graphic3d_TextureParams::CreateDowncasted(::Graphic3d_TextureParams* instance)
{
	return gcnew Macad::Occt::Graphic3d_TextureParams( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_TextureRoot
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_TextureRoot::Graphic3d_TextureRoot(Macad::Occt::Graphic3d_TextureRoot^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_TextureRoot(*(::Graphic3d_TextureRoot*)parameter1->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_TextureRoot::TexturesFolder()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Graphic3d_TextureRoot::TexturesFolder();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

bool Macad::Occt::Graphic3d_TextureRoot::IsDone()
{
	return ((::Graphic3d_TextureRoot*)_NativeInstance)->IsDone();
}

Macad::Occt::Graphic3d_TypeOfTexture Macad::Occt::Graphic3d_TextureRoot::Type()
{
	return (Macad::Occt::Graphic3d_TypeOfTexture)((::Graphic3d_TextureRoot*)_NativeInstance)->Type();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_TextureRoot::GetId()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Graphic3d_TextureRoot*)_NativeInstance)->GetId();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

size_t Macad::Occt::Graphic3d_TextureRoot::Revision()
{
	return ((::Graphic3d_TextureRoot*)_NativeInstance)->Revision();
}

void Macad::Occt::Graphic3d_TextureRoot::UpdateRevision()
{
	((::Graphic3d_TextureRoot*)_NativeInstance)->UpdateRevision();
}

Macad::Occt::Image_CompressedPixMap^ Macad::Occt::Graphic3d_TextureRoot::GetCompressedImage(Macad::Occt::Image_SupportedFormats^ theSupported)
{
	Handle(::Image_SupportedFormats) h_theSupported = theSupported->NativeInstance;
	Handle(::Image_CompressedPixMap) _result;
	_result = ((::Graphic3d_TextureRoot*)_NativeInstance)->GetCompressedImage(h_theSupported);
	theSupported->NativeInstance = h_theSupported.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Image_CompressedPixMap::CreateDowncasted( _result.get());
}

Macad::Occt::Image_PixMap^ Macad::Occt::Graphic3d_TextureRoot::GetImage(Macad::Occt::Image_SupportedFormats^ theSupported)
{
	Handle(::Image_SupportedFormats) h_theSupported = theSupported->NativeInstance;
	Handle(::Image_PixMap) _result;
	_result = ((::Graphic3d_TextureRoot*)_NativeInstance)->GetImage(h_theSupported);
	theSupported->NativeInstance = h_theSupported.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Image_PixMap::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_TextureParams^ Macad::Occt::Graphic3d_TextureRoot::GetParams()
{
	Handle(::Graphic3d_TextureParams) _result;
	_result = ((::Graphic3d_TextureRoot*)_NativeInstance)->GetParams();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TextureParams::CreateDowncasted( _result.get());
}

bool Macad::Occt::Graphic3d_TextureRoot::IsColorMap()
{
	return ((::Graphic3d_TextureRoot*)_NativeInstance)->IsColorMap();
}

void Macad::Occt::Graphic3d_TextureRoot::SetColorMap(bool theIsColor)
{
	((::Graphic3d_TextureRoot*)_NativeInstance)->SetColorMap(theIsColor);
}

bool Macad::Occt::Graphic3d_TextureRoot::IsTopDown()
{
	return ((::Graphic3d_TextureRoot*)_NativeInstance)->IsTopDown();
}


Macad::Occt::Graphic3d_TextureRoot^ Macad::Occt::Graphic3d_TextureRoot::CreateDowncasted(::Graphic3d_TextureRoot* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_TextureMap)))
		return Macad::Occt::Graphic3d_TextureMap::CreateDowncasted((::Graphic3d_TextureMap*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_TextureEnv)))
		return Macad::Occt::Graphic3d_TextureEnv::CreateDowncasted((::Graphic3d_TextureEnv*)instance);

	return gcnew Macad::Occt::Graphic3d_TextureRoot( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_TextureMap
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_TextureMap::Graphic3d_TextureMap(Macad::Occt::Graphic3d_TextureMap^ parameter1)
	: Macad::Occt::Graphic3d_TextureRoot(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_TextureMap(*(::Graphic3d_TextureMap*)parameter1->NativeInstance);
}

void Macad::Occt::Graphic3d_TextureMap::EnableSmooth()
{
	((::Graphic3d_TextureMap*)_NativeInstance)->EnableSmooth();
}

bool Macad::Occt::Graphic3d_TextureMap::IsSmoothed()
{
	return ((::Graphic3d_TextureMap*)_NativeInstance)->IsSmoothed();
}

void Macad::Occt::Graphic3d_TextureMap::DisableSmooth()
{
	((::Graphic3d_TextureMap*)_NativeInstance)->DisableSmooth();
}

void Macad::Occt::Graphic3d_TextureMap::EnableModulate()
{
	((::Graphic3d_TextureMap*)_NativeInstance)->EnableModulate();
}

void Macad::Occt::Graphic3d_TextureMap::DisableModulate()
{
	((::Graphic3d_TextureMap*)_NativeInstance)->DisableModulate();
}

bool Macad::Occt::Graphic3d_TextureMap::IsModulate()
{
	return ((::Graphic3d_TextureMap*)_NativeInstance)->IsModulate();
}

void Macad::Occt::Graphic3d_TextureMap::EnableRepeat()
{
	((::Graphic3d_TextureMap*)_NativeInstance)->EnableRepeat();
}

void Macad::Occt::Graphic3d_TextureMap::DisableRepeat()
{
	((::Graphic3d_TextureMap*)_NativeInstance)->DisableRepeat();
}

bool Macad::Occt::Graphic3d_TextureMap::IsRepeat()
{
	return ((::Graphic3d_TextureMap*)_NativeInstance)->IsRepeat();
}

Macad::Occt::Graphic3d_LevelOfTextureAnisotropy Macad::Occt::Graphic3d_TextureMap::AnisoFilter()
{
	return (Macad::Occt::Graphic3d_LevelOfTextureAnisotropy)((::Graphic3d_TextureMap*)_NativeInstance)->AnisoFilter();
}

void Macad::Occt::Graphic3d_TextureMap::SetAnisoFilter(Macad::Occt::Graphic3d_LevelOfTextureAnisotropy theLevel)
{
	((::Graphic3d_TextureMap*)_NativeInstance)->SetAnisoFilter((::Graphic3d_LevelOfTextureAnisotropy)theLevel);
}


Macad::Occt::Graphic3d_TextureMap^ Macad::Occt::Graphic3d_TextureMap::CreateDowncasted(::Graphic3d_TextureMap* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_CubeMap)))
		return Macad::Occt::Graphic3d_CubeMap::CreateDowncasted((::Graphic3d_CubeMap*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_Texture2D)))
		return Macad::Occt::Graphic3d_Texture2D::CreateDowncasted((::Graphic3d_Texture2D*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_Texture1D)))
		return Macad::Occt::Graphic3d_Texture1D::CreateDowncasted((::Graphic3d_Texture1D*)instance);

	return gcnew Macad::Occt::Graphic3d_TextureMap( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_TextureSet
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_TextureSet::Graphic3d_TextureSet()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_TextureSet();
}

Macad::Occt::Graphic3d_TextureSet::Graphic3d_TextureSet(int theNbTextures)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_TextureSet(theNbTextures);
}

Macad::Occt::Graphic3d_TextureSet::Graphic3d_TextureSet(Macad::Occt::Graphic3d_TextureMap^ theTexture)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::Graphic3d_TextureMap) h_theTexture = theTexture->NativeInstance;
	NativeInstance = new ::Graphic3d_TextureSet(h_theTexture);
	theTexture->NativeInstance = h_theTexture.get();
}

Macad::Occt::Graphic3d_TextureSet::Graphic3d_TextureSet(Macad::Occt::Graphic3d_TextureSet^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_TextureSet(*(::Graphic3d_TextureSet*)parameter1->NativeInstance);
}

bool Macad::Occt::Graphic3d_TextureSet::IsEmpty()
{
	return ((::Graphic3d_TextureSet*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::Graphic3d_TextureSet::Size()
{
	return ((::Graphic3d_TextureSet*)_NativeInstance)->Size();
}

int Macad::Occt::Graphic3d_TextureSet::Lower()
{
	return ((::Graphic3d_TextureSet*)_NativeInstance)->Lower();
}

int Macad::Occt::Graphic3d_TextureSet::Upper()
{
	return ((::Graphic3d_TextureSet*)_NativeInstance)->Upper();
}

Macad::Occt::Graphic3d_TextureMap^ Macad::Occt::Graphic3d_TextureSet::First()
{
	Handle(::Graphic3d_TextureMap) _result;
	_result = ((::Graphic3d_TextureSet*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TextureMap::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_TextureSet::SetFirst(Macad::Occt::Graphic3d_TextureMap^ theTexture)
{
	Handle(::Graphic3d_TextureMap) h_theTexture = theTexture->NativeInstance;
	((::Graphic3d_TextureSet*)_NativeInstance)->SetFirst(h_theTexture);
	theTexture->NativeInstance = h_theTexture.get();
}

Macad::Occt::Graphic3d_TextureMap^ Macad::Occt::Graphic3d_TextureSet::Value(int theIndex)
{
	Handle(::Graphic3d_TextureMap) _result;
	_result = ((::Graphic3d_TextureSet*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TextureMap::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_TextureSet::SetValue(int theIndex, Macad::Occt::Graphic3d_TextureMap^ theTexture)
{
	Handle(::Graphic3d_TextureMap) h_theTexture = theTexture->NativeInstance;
	((::Graphic3d_TextureSet*)_NativeInstance)->SetValue(theIndex, h_theTexture);
	theTexture->NativeInstance = h_theTexture.get();
}


Macad::Occt::Graphic3d_TextureSet^ Macad::Occt::Graphic3d_TextureSet::CreateDowncasted(::Graphic3d_TextureSet* instance)
{
	return gcnew Macad::Occt::Graphic3d_TextureSet( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Aspects
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Aspects::Graphic3d_Aspects()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Aspects();
}

Macad::Occt::Graphic3d_Aspects::Graphic3d_Aspects(Macad::Occt::Graphic3d_Aspects^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Aspects(*(::Graphic3d_Aspects*)parameter1->NativeInstance);
}

Macad::Occt::Aspect_InteriorStyle Macad::Occt::Graphic3d_Aspects::InteriorStyle()
{
	return (Macad::Occt::Aspect_InteriorStyle)((::Graphic3d_Aspects*)_NativeInstance)->InteriorStyle();
}

void Macad::Occt::Graphic3d_Aspects::SetInteriorStyle(Macad::Occt::Aspect_InteriorStyle theStyle)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetInteriorStyle((::Aspect_InteriorStyle)theStyle);
}

Macad::Occt::Graphic3d_TypeOfShadingModel Macad::Occt::Graphic3d_Aspects::ShadingModel()
{
	return (Macad::Occt::Graphic3d_TypeOfShadingModel)((::Graphic3d_Aspects*)_NativeInstance)->ShadingModel();
}

void Macad::Occt::Graphic3d_Aspects::SetShadingModel(Macad::Occt::Graphic3d_TypeOfShadingModel theShadingModel)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetShadingModel((::Graphic3d_TypeOfShadingModel)theShadingModel);
}

Macad::Occt::Graphic3d_AlphaMode Macad::Occt::Graphic3d_Aspects::AlphaMode()
{
	return (Macad::Occt::Graphic3d_AlphaMode)((::Graphic3d_Aspects*)_NativeInstance)->AlphaMode();
}

float Macad::Occt::Graphic3d_Aspects::AlphaCutoff()
{
	return ((::Graphic3d_Aspects*)_NativeInstance)->AlphaCutoff();
}

void Macad::Occt::Graphic3d_Aspects::SetAlphaMode(Macad::Occt::Graphic3d_AlphaMode theMode, float theAlphaCutoff)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetAlphaMode((::Graphic3d_AlphaMode)theMode, theAlphaCutoff);
}

void Macad::Occt::Graphic3d_Aspects::SetAlphaMode(Macad::Occt::Graphic3d_AlphaMode theMode)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetAlphaMode((::Graphic3d_AlphaMode)theMode, 0.5F);
}

Macad::Occt::Quantity_ColorRGBA^ Macad::Occt::Graphic3d_Aspects::ColorRGBA()
{
	::Quantity_ColorRGBA* _result = new ::Quantity_ColorRGBA();
	*_result =  (::Quantity_ColorRGBA)((::Graphic3d_Aspects*)_NativeInstance)->ColorRGBA();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_ColorRGBA(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_Aspects::Color()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Graphic3d_Aspects*)_NativeInstance)->Color();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_Aspects::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_Aspects::InteriorColor()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Graphic3d_Aspects*)_NativeInstance)->InteriorColor();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_ColorRGBA^ Macad::Occt::Graphic3d_Aspects::InteriorColorRGBA()
{
	::Quantity_ColorRGBA* _result = new ::Quantity_ColorRGBA();
	*_result =  (::Quantity_ColorRGBA)((::Graphic3d_Aspects*)_NativeInstance)->InteriorColorRGBA();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_ColorRGBA(_result);
}

void Macad::Occt::Graphic3d_Aspects::SetInteriorColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetInteriorColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_Aspects::SetInteriorColor(Macad::Occt::Quantity_ColorRGBA^ theColor)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetInteriorColor(*(::Quantity_ColorRGBA*)theColor->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_Aspects::BackInteriorColor()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Graphic3d_Aspects*)_NativeInstance)->BackInteriorColor();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_ColorRGBA^ Macad::Occt::Graphic3d_Aspects::BackInteriorColorRGBA()
{
	::Quantity_ColorRGBA* _result = new ::Quantity_ColorRGBA();
	*_result =  (::Quantity_ColorRGBA)((::Graphic3d_Aspects*)_NativeInstance)->BackInteriorColorRGBA();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_ColorRGBA(_result);
}

void Macad::Occt::Graphic3d_Aspects::SetBackInteriorColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetBackInteriorColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_Aspects::SetBackInteriorColor(Macad::Occt::Quantity_ColorRGBA^ theColor)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetBackInteriorColor(*(::Quantity_ColorRGBA*)theColor->NativeInstance);
}

Macad::Occt::Graphic3d_MaterialAspect^ Macad::Occt::Graphic3d_Aspects::FrontMaterial()
{
	::Graphic3d_MaterialAspect* _result = new ::Graphic3d_MaterialAspect();
	*_result =  (::Graphic3d_MaterialAspect)((::Graphic3d_Aspects*)_NativeInstance)->FrontMaterial();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MaterialAspect(_result);
}

Macad::Occt::Graphic3d_MaterialAspect^ Macad::Occt::Graphic3d_Aspects::ChangeFrontMaterial()
{
	::Graphic3d_MaterialAspect* _result = new ::Graphic3d_MaterialAspect();
	*_result = ((::Graphic3d_Aspects*)_NativeInstance)->ChangeFrontMaterial();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MaterialAspect(_result);
}

void Macad::Occt::Graphic3d_Aspects::SetFrontMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theMaterial)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetFrontMaterial(*(::Graphic3d_MaterialAspect*)theMaterial->NativeInstance);
}

Macad::Occt::Graphic3d_MaterialAspect^ Macad::Occt::Graphic3d_Aspects::BackMaterial()
{
	::Graphic3d_MaterialAspect* _result = new ::Graphic3d_MaterialAspect();
	*_result =  (::Graphic3d_MaterialAspect)((::Graphic3d_Aspects*)_NativeInstance)->BackMaterial();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MaterialAspect(_result);
}

Macad::Occt::Graphic3d_MaterialAspect^ Macad::Occt::Graphic3d_Aspects::ChangeBackMaterial()
{
	::Graphic3d_MaterialAspect* _result = new ::Graphic3d_MaterialAspect();
	*_result = ((::Graphic3d_Aspects*)_NativeInstance)->ChangeBackMaterial();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MaterialAspect(_result);
}

void Macad::Occt::Graphic3d_Aspects::SetBackMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theMaterial)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetBackMaterial(*(::Graphic3d_MaterialAspect*)theMaterial->NativeInstance);
}

bool Macad::Occt::Graphic3d_Aspects::ToSuppressBackFaces()
{
	return ((::Graphic3d_Aspects*)_NativeInstance)->ToSuppressBackFaces();
}

void Macad::Occt::Graphic3d_Aspects::SetSuppressBackFaces(bool theToSuppress)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetSuppressBackFaces(theToSuppress);
}

bool Macad::Occt::Graphic3d_Aspects::BackFace()
{
	return ((::Graphic3d_Aspects*)_NativeInstance)->BackFace();
}

void Macad::Occt::Graphic3d_Aspects::AllowBackFace()
{
	((::Graphic3d_Aspects*)_NativeInstance)->AllowBackFace();
}

void Macad::Occt::Graphic3d_Aspects::SuppressBackFace()
{
	((::Graphic3d_Aspects*)_NativeInstance)->SuppressBackFace();
}

bool Macad::Occt::Graphic3d_Aspects::Distinguish()
{
	return ((::Graphic3d_Aspects*)_NativeInstance)->Distinguish();
}

void Macad::Occt::Graphic3d_Aspects::SetDistinguish(bool toDistinguish)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetDistinguish(toDistinguish);
}

void Macad::Occt::Graphic3d_Aspects::SetDistinguishOn()
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetDistinguishOn();
}

void Macad::Occt::Graphic3d_Aspects::SetDistinguishOff()
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetDistinguishOff();
}

Macad::Occt::Graphic3d_TextureSet^ Macad::Occt::Graphic3d_Aspects::TextureSet()
{
	Handle(::Graphic3d_TextureSet) _result;
	_result = ((::Graphic3d_Aspects*)_NativeInstance)->TextureSet();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TextureSet::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_Aspects::SetTextureSet(Macad::Occt::Graphic3d_TextureSet^ theTextures)
{
	Handle(::Graphic3d_TextureSet) h_theTextures = theTextures->NativeInstance;
	((::Graphic3d_Aspects*)_NativeInstance)->SetTextureSet(h_theTextures);
	theTextures->NativeInstance = h_theTextures.get();
}

Macad::Occt::Graphic3d_TextureMap^ Macad::Occt::Graphic3d_Aspects::TextureMap()
{
	Handle(::Graphic3d_TextureMap) _result;
	_result = ((::Graphic3d_Aspects*)_NativeInstance)->TextureMap();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TextureMap::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_Aspects::SetTextureMap(Macad::Occt::Graphic3d_TextureMap^ theTexture)
{
	Handle(::Graphic3d_TextureMap) h_theTexture = theTexture->NativeInstance;
	((::Graphic3d_Aspects*)_NativeInstance)->SetTextureMap(h_theTexture);
	theTexture->NativeInstance = h_theTexture.get();
}

bool Macad::Occt::Graphic3d_Aspects::ToMapTexture()
{
	return ((::Graphic3d_Aspects*)_NativeInstance)->ToMapTexture();
}

bool Macad::Occt::Graphic3d_Aspects::TextureMapState()
{
	return ((::Graphic3d_Aspects*)_NativeInstance)->TextureMapState();
}

void Macad::Occt::Graphic3d_Aspects::SetTextureMapOn(bool theToMap)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetTextureMapOn(theToMap);
}

void Macad::Occt::Graphic3d_Aspects::SetTextureMapOn()
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetTextureMapOn();
}

void Macad::Occt::Graphic3d_Aspects::SetTextureMapOff()
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetTextureMapOff();
}

Macad::Occt::Graphic3d_PolygonOffset^ Macad::Occt::Graphic3d_Aspects::PolygonOffset()
{
	::Graphic3d_PolygonOffset* _result = new ::Graphic3d_PolygonOffset();
	*_result =  (::Graphic3d_PolygonOffset)((::Graphic3d_Aspects*)_NativeInstance)->PolygonOffset();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_PolygonOffset(_result);
}

void Macad::Occt::Graphic3d_Aspects::SetPolygonOffset(Macad::Occt::Graphic3d_PolygonOffset^ theOffset)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetPolygonOffset(*(::Graphic3d_PolygonOffset*)theOffset->NativeInstance);
}

void Macad::Occt::Graphic3d_Aspects::PolygonOffsets(int% theMode, float% theFactor, float% theUnits)
{
	pin_ptr<int> pp_theMode = &theMode;
	pin_ptr<float> pp_theFactor = &theFactor;
	pin_ptr<float> pp_theUnits = &theUnits;
	((::Graphic3d_Aspects*)_NativeInstance)->PolygonOffsets(*(Standard_Integer*)pp_theMode, *(Standard_ShortReal*)pp_theFactor, *(Standard_ShortReal*)pp_theUnits);
}

void Macad::Occt::Graphic3d_Aspects::SetPolygonOffsets(int theMode, float theFactor, float theUnits)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetPolygonOffsets(theMode, theFactor, theUnits);
}

void Macad::Occt::Graphic3d_Aspects::SetPolygonOffsets(int theMode, float theFactor)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetPolygonOffsets(theMode, theFactor, 0.F);
}

void Macad::Occt::Graphic3d_Aspects::SetPolygonOffsets(int theMode)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetPolygonOffsets(theMode, 1.F, 0.F);
}

Macad::Occt::Aspect_TypeOfLine Macad::Occt::Graphic3d_Aspects::LineType()
{
	return (Macad::Occt::Aspect_TypeOfLine)((::Graphic3d_Aspects*)_NativeInstance)->LineType();
}

void Macad::Occt::Graphic3d_Aspects::SetLineType(Macad::Occt::Aspect_TypeOfLine theType)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetLineType((::Aspect_TypeOfLine)theType);
}

float Macad::Occt::Graphic3d_Aspects::LineWidth()
{
	return ((::Graphic3d_Aspects*)_NativeInstance)->LineWidth();
}

void Macad::Occt::Graphic3d_Aspects::SetLineWidth(float theWidth)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetLineWidth(theWidth);
}

Macad::Occt::Aspect_TypeOfMarker Macad::Occt::Graphic3d_Aspects::MarkerType()
{
	return (Macad::Occt::Aspect_TypeOfMarker)((::Graphic3d_Aspects*)_NativeInstance)->MarkerType();
}

void Macad::Occt::Graphic3d_Aspects::SetMarkerType(Macad::Occt::Aspect_TypeOfMarker theType)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetMarkerType((::Aspect_TypeOfMarker)theType);
}

float Macad::Occt::Graphic3d_Aspects::MarkerScale()
{
	return ((::Graphic3d_Aspects*)_NativeInstance)->MarkerScale();
}

void Macad::Occt::Graphic3d_Aspects::SetMarkerScale(float theScale)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetMarkerScale(theScale);
}

Macad::Occt::Graphic3d_MarkerImage^ Macad::Occt::Graphic3d_Aspects::MarkerImage()
{
	Handle(::Graphic3d_MarkerImage) _result;
	_result = ((::Graphic3d_Aspects*)_NativeInstance)->MarkerImage();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_MarkerImage::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_Aspects::SetMarkerImage(Macad::Occt::Graphic3d_MarkerImage^ theImage)
{
	Handle(::Graphic3d_MarkerImage) h_theImage = theImage->NativeInstance;
	((::Graphic3d_Aspects*)_NativeInstance)->SetMarkerImage(h_theImage);
	theImage->NativeInstance = h_theImage.get();
}

bool Macad::Occt::Graphic3d_Aspects::IsMarkerSprite()
{
	return ((::Graphic3d_Aspects*)_NativeInstance)->IsMarkerSprite();
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::Graphic3d_Aspects::TextFont()
{
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::Graphic3d_Aspects*)_NativeInstance)->TextFont();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_Aspects::SetTextFont(Macad::Occt::TCollection_HAsciiString^ theFont)
{
	Handle(::TCollection_HAsciiString) h_theFont = theFont->NativeInstance;
	((::Graphic3d_Aspects*)_NativeInstance)->SetTextFont(h_theFont);
	theFont->NativeInstance = h_theFont.get();
}

Macad::Occt::Aspect_TypeOfDisplayText Macad::Occt::Graphic3d_Aspects::TextDisplayType()
{
	return (Macad::Occt::Aspect_TypeOfDisplayText)((::Graphic3d_Aspects*)_NativeInstance)->TextDisplayType();
}

void Macad::Occt::Graphic3d_Aspects::SetTextDisplayType(Macad::Occt::Aspect_TypeOfDisplayText theType)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetTextDisplayType((::Aspect_TypeOfDisplayText)theType);
}

Macad::Occt::Quantity_ColorRGBA^ Macad::Occt::Graphic3d_Aspects::ColorSubTitleRGBA()
{
	::Quantity_ColorRGBA* _result = new ::Quantity_ColorRGBA();
	*_result =  (::Quantity_ColorRGBA)((::Graphic3d_Aspects*)_NativeInstance)->ColorSubTitleRGBA();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_ColorRGBA(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_Aspects::ColorSubTitle()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Graphic3d_Aspects*)_NativeInstance)->ColorSubTitle();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_Aspects::SetColorSubTitle(Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetColorSubTitle(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_Aspects::SetColorSubTitle(Macad::Occt::Quantity_ColorRGBA^ theColor)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetColorSubTitle(*(::Quantity_ColorRGBA*)theColor->NativeInstance);
}

bool Macad::Occt::Graphic3d_Aspects::IsTextZoomable()
{
	return ((::Graphic3d_Aspects*)_NativeInstance)->IsTextZoomable();
}

void Macad::Occt::Graphic3d_Aspects::SetTextZoomable(bool theFlag)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetTextZoomable(theFlag);
}

Macad::Occt::Aspect_TypeOfStyleText Macad::Occt::Graphic3d_Aspects::TextStyle()
{
	return (Macad::Occt::Aspect_TypeOfStyleText)((::Graphic3d_Aspects*)_NativeInstance)->TextStyle();
}

void Macad::Occt::Graphic3d_Aspects::SetTextStyle(Macad::Occt::Aspect_TypeOfStyleText theStyle)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetTextStyle((::Aspect_TypeOfStyleText)theStyle);
}

float Macad::Occt::Graphic3d_Aspects::TextAngle()
{
	return ((::Graphic3d_Aspects*)_NativeInstance)->TextAngle();
}

void Macad::Occt::Graphic3d_Aspects::SetTextAngle(float theAngle)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetTextAngle(theAngle);
}

bool Macad::Occt::Graphic3d_Aspects::ToDrawEdges()
{
	return ((::Graphic3d_Aspects*)_NativeInstance)->ToDrawEdges();
}

void Macad::Occt::Graphic3d_Aspects::SetDrawEdges(bool theToDraw)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetDrawEdges(theToDraw);
}

void Macad::Occt::Graphic3d_Aspects::SetEdgeOn()
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetEdgeOn();
}

void Macad::Occt::Graphic3d_Aspects::SetEdgeOff()
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetEdgeOff();
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_Aspects::EdgeColor()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Graphic3d_Aspects*)_NativeInstance)->EdgeColor();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_ColorRGBA^ Macad::Occt::Graphic3d_Aspects::EdgeColorRGBA()
{
	::Quantity_ColorRGBA* _result = new ::Quantity_ColorRGBA();
	*_result =  (::Quantity_ColorRGBA)((::Graphic3d_Aspects*)_NativeInstance)->EdgeColorRGBA();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_ColorRGBA(_result);
}

void Macad::Occt::Graphic3d_Aspects::SetEdgeColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetEdgeColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_Aspects::SetEdgeColor(Macad::Occt::Quantity_ColorRGBA^ theColor)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetEdgeColor(*(::Quantity_ColorRGBA*)theColor->NativeInstance);
}

Macad::Occt::Aspect_TypeOfLine Macad::Occt::Graphic3d_Aspects::EdgeLineType()
{
	return (Macad::Occt::Aspect_TypeOfLine)((::Graphic3d_Aspects*)_NativeInstance)->EdgeLineType();
}

void Macad::Occt::Graphic3d_Aspects::SetEdgeLineType(Macad::Occt::Aspect_TypeOfLine theType)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetEdgeLineType((::Aspect_TypeOfLine)theType);
}

float Macad::Occt::Graphic3d_Aspects::EdgeWidth()
{
	return ((::Graphic3d_Aspects*)_NativeInstance)->EdgeWidth();
}

void Macad::Occt::Graphic3d_Aspects::SetEdgeWidth(double theWidth)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetEdgeWidth(theWidth);
}

bool Macad::Occt::Graphic3d_Aspects::ToSkipFirstEdge()
{
	return ((::Graphic3d_Aspects*)_NativeInstance)->ToSkipFirstEdge();
}

void Macad::Occt::Graphic3d_Aspects::SetSkipFirstEdge(bool theToSkipFirstEdge)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetSkipFirstEdge(theToSkipFirstEdge);
}

bool Macad::Occt::Graphic3d_Aspects::ToDrawSilhouette()
{
	return ((::Graphic3d_Aspects*)_NativeInstance)->ToDrawSilhouette();
}

void Macad::Occt::Graphic3d_Aspects::SetDrawSilhouette(bool theToDraw)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetDrawSilhouette(theToDraw);
}

Macad::Occt::Graphic3d_HatchStyle^ Macad::Occt::Graphic3d_Aspects::HatchStyle()
{
	Handle(::Graphic3d_HatchStyle) _result;
	_result = ((::Graphic3d_Aspects*)_NativeInstance)->HatchStyle();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_HatchStyle::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_Aspects::SetHatchStyle(Macad::Occt::Graphic3d_HatchStyle^ theStyle)
{
	Handle(::Graphic3d_HatchStyle) h_theStyle = theStyle->NativeInstance;
	((::Graphic3d_Aspects*)_NativeInstance)->SetHatchStyle(h_theStyle);
	theStyle->NativeInstance = h_theStyle.get();
}

void Macad::Occt::Graphic3d_Aspects::SetHatchStyle(Macad::Occt::Aspect_HatchStyle theStyle)
{
	((::Graphic3d_Aspects*)_NativeInstance)->SetHatchStyle((::Aspect_HatchStyle)theStyle);
}

bool Macad::Occt::Graphic3d_Aspects::IsEqual(Macad::Occt::Graphic3d_Aspects^ theOther)
{
	return ((::Graphic3d_Aspects*)_NativeInstance)->IsEqual(*(::Graphic3d_Aspects*)theOther->NativeInstance);
}


Macad::Occt::Graphic3d_Aspects^ Macad::Occt::Graphic3d_Aspects::CreateDowncasted(::Graphic3d_Aspects* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_AspectFillArea3d)))
		return Macad::Occt::Graphic3d_AspectFillArea3d::CreateDowncasted((::Graphic3d_AspectFillArea3d*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_AspectLine3d)))
		return Macad::Occt::Graphic3d_AspectLine3d::CreateDowncasted((::Graphic3d_AspectLine3d*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_AspectMarker3d)))
		return Macad::Occt::Graphic3d_AspectMarker3d::CreateDowncasted((::Graphic3d_AspectMarker3d*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_AspectText3d)))
		return Macad::Occt::Graphic3d_AspectText3d::CreateDowncasted((::Graphic3d_AspectText3d*)instance);

	return gcnew Macad::Occt::Graphic3d_Aspects( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_AspectFillArea3d
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_AspectFillArea3d::Graphic3d_AspectFillArea3d()
	: Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_AspectFillArea3d();
}

Macad::Occt::Graphic3d_AspectFillArea3d::Graphic3d_AspectFillArea3d(Macad::Occt::Aspect_InteriorStyle theInterior, Macad::Occt::Quantity_Color^ theInteriorColor, Macad::Occt::Quantity_Color^ theEdgeColor, Macad::Occt::Aspect_TypeOfLine theEdgeLineType, double theEdgeWidth, Macad::Occt::Graphic3d_MaterialAspect^ theFrontMaterial, Macad::Occt::Graphic3d_MaterialAspect^ theBackMaterial)
	: Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_AspectFillArea3d((::Aspect_InteriorStyle)theInterior, *(::Quantity_Color*)theInteriorColor->NativeInstance, *(::Quantity_Color*)theEdgeColor->NativeInstance, (::Aspect_TypeOfLine)theEdgeLineType, theEdgeWidth, *(::Graphic3d_MaterialAspect*)theFrontMaterial->NativeInstance, *(::Graphic3d_MaterialAspect*)theBackMaterial->NativeInstance);
}

Macad::Occt::Graphic3d_AspectFillArea3d::Graphic3d_AspectFillArea3d(Macad::Occt::Graphic3d_AspectFillArea3d^ parameter1)
	: Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_AspectFillArea3d(*(::Graphic3d_AspectFillArea3d*)parameter1->NativeInstance);
}

bool Macad::Occt::Graphic3d_AspectFillArea3d::Edge()
{
	return ((::Graphic3d_AspectFillArea3d*)_NativeInstance)->Edge();
}


Macad::Occt::Graphic3d_AspectFillArea3d^ Macad::Occt::Graphic3d_AspectFillArea3d::CreateDowncasted(::Graphic3d_AspectFillArea3d* instance)
{
	return gcnew Macad::Occt::Graphic3d_AspectFillArea3d( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_AspectLine3d
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_AspectLine3d::Graphic3d_AspectLine3d()
	: Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_AspectLine3d();
}

Macad::Occt::Graphic3d_AspectLine3d::Graphic3d_AspectLine3d(Macad::Occt::Quantity_Color^ theColor, Macad::Occt::Aspect_TypeOfLine theType, double theWidth)
	: Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_AspectLine3d(*(::Quantity_Color*)theColor->NativeInstance, (::Aspect_TypeOfLine)theType, theWidth);
}

Macad::Occt::Graphic3d_AspectLine3d::Graphic3d_AspectLine3d(Macad::Occt::Graphic3d_AspectLine3d^ parameter1)
	: Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_AspectLine3d(*(::Graphic3d_AspectLine3d*)parameter1->NativeInstance);
}

Macad::Occt::Aspect_TypeOfLine Macad::Occt::Graphic3d_AspectLine3d::Type()
{
	return (Macad::Occt::Aspect_TypeOfLine)((::Graphic3d_AspectLine3d*)_NativeInstance)->Type();
}

void Macad::Occt::Graphic3d_AspectLine3d::SetType(Macad::Occt::Aspect_TypeOfLine theType)
{
	((::Graphic3d_AspectLine3d*)_NativeInstance)->SetType((::Aspect_TypeOfLine)theType);
}

float Macad::Occt::Graphic3d_AspectLine3d::Width()
{
	return ((::Graphic3d_AspectLine3d*)_NativeInstance)->Width();
}

void Macad::Occt::Graphic3d_AspectLine3d::SetWidth(double theWidth)
{
	((::Graphic3d_AspectLine3d*)_NativeInstance)->SetWidth(theWidth);
}

void Macad::Occt::Graphic3d_AspectLine3d::SetWidth(float theWidth)
{
	((::Graphic3d_AspectLine3d*)_NativeInstance)->SetWidth(theWidth);
}


Macad::Occt::Graphic3d_AspectLine3d^ Macad::Occt::Graphic3d_AspectLine3d::CreateDowncasted(::Graphic3d_AspectLine3d* instance)
{
	return gcnew Macad::Occt::Graphic3d_AspectLine3d( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_AspectMarker3d
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_AspectMarker3d::Graphic3d_AspectMarker3d()
	: Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_AspectMarker3d();
}

Macad::Occt::Graphic3d_AspectMarker3d::Graphic3d_AspectMarker3d(Macad::Occt::Aspect_TypeOfMarker theType, Macad::Occt::Quantity_Color^ theColor, double theScale)
	: Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_AspectMarker3d((::Aspect_TypeOfMarker)theType, *(::Quantity_Color*)theColor->NativeInstance, theScale);
}

Macad::Occt::Graphic3d_AspectMarker3d::Graphic3d_AspectMarker3d(Macad::Occt::Quantity_Color^ theColor, int theWidth, int theHeight, Macad::Occt::TColStd_HArray1OfByte^ theTextureBitmap)
	: Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
	Handle(::TColStd_HArray1OfByte) h_theTextureBitmap = theTextureBitmap->NativeInstance;
	NativeInstance = new ::Graphic3d_AspectMarker3d(*(::Quantity_Color*)theColor->NativeInstance, theWidth, theHeight, h_theTextureBitmap);
	theTextureBitmap->NativeInstance = h_theTextureBitmap.get();
}

Macad::Occt::Graphic3d_AspectMarker3d::Graphic3d_AspectMarker3d(Macad::Occt::Image_PixMap^ theTextureImage)
	: Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
	Handle(::Image_PixMap) h_theTextureImage = theTextureImage->NativeInstance;
	NativeInstance = new ::Graphic3d_AspectMarker3d(h_theTextureImage);
	theTextureImage->NativeInstance = h_theTextureImage.get();
}

Macad::Occt::Graphic3d_AspectMarker3d::Graphic3d_AspectMarker3d(Macad::Occt::Graphic3d_AspectMarker3d^ parameter1)
	: Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_AspectMarker3d(*(::Graphic3d_AspectMarker3d*)parameter1->NativeInstance);
}

float Macad::Occt::Graphic3d_AspectMarker3d::Scale()
{
	return ((::Graphic3d_AspectMarker3d*)_NativeInstance)->Scale();
}

void Macad::Occt::Graphic3d_AspectMarker3d::SetScale(float theScale)
{
	((::Graphic3d_AspectMarker3d*)_NativeInstance)->SetScale(theScale);
}

void Macad::Occt::Graphic3d_AspectMarker3d::SetScale(double theScale)
{
	((::Graphic3d_AspectMarker3d*)_NativeInstance)->SetScale(theScale);
}

Macad::Occt::Aspect_TypeOfMarker Macad::Occt::Graphic3d_AspectMarker3d::Type()
{
	return (Macad::Occt::Aspect_TypeOfMarker)((::Graphic3d_AspectMarker3d*)_NativeInstance)->Type();
}

void Macad::Occt::Graphic3d_AspectMarker3d::SetType(Macad::Occt::Aspect_TypeOfMarker theType)
{
	((::Graphic3d_AspectMarker3d*)_NativeInstance)->SetType((::Aspect_TypeOfMarker)theType);
}

void Macad::Occt::Graphic3d_AspectMarker3d::GetTextureSize(int% theWidth, int% theHeight)
{
	pin_ptr<int> pp_theWidth = &theWidth;
	pin_ptr<int> pp_theHeight = &theHeight;
	((::Graphic3d_AspectMarker3d*)_NativeInstance)->GetTextureSize(*(Standard_Integer*)pp_theWidth, *(Standard_Integer*)pp_theHeight);
}

Macad::Occt::Graphic3d_MarkerImage^ Macad::Occt::Graphic3d_AspectMarker3d::GetMarkerImage()
{
	Handle(::Graphic3d_MarkerImage) _result;
	_result = ((::Graphic3d_AspectMarker3d*)_NativeInstance)->GetMarkerImage();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_MarkerImage::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_AspectMarker3d::SetBitMap(int theWidth, int theHeight, Macad::Occt::TColStd_HArray1OfByte^ theTexture)
{
	Handle(::TColStd_HArray1OfByte) h_theTexture = theTexture->NativeInstance;
	((::Graphic3d_AspectMarker3d*)_NativeInstance)->SetBitMap(theWidth, theHeight, h_theTexture);
	theTexture->NativeInstance = h_theTexture.get();
}


Macad::Occt::Graphic3d_AspectMarker3d^ Macad::Occt::Graphic3d_AspectMarker3d::CreateDowncasted(::Graphic3d_AspectMarker3d* instance)
{
	return gcnew Macad::Occt::Graphic3d_AspectMarker3d( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_AspectText3d
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_AspectText3d::Graphic3d_AspectText3d()
	: Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_AspectText3d();
}

Macad::Occt::Graphic3d_AspectText3d::Graphic3d_AspectText3d(Macad::Occt::Quantity_Color^ theColor, System::String^ theFont, double theExpansionFactor, double theSpace, Macad::Occt::Aspect_TypeOfStyleText theStyle, Macad::Occt::Aspect_TypeOfDisplayText theDisplayType)
	: Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theFont = (char*)(void*)Marshal::StringToHGlobalAnsi(theFont);
	NativeInstance = new ::Graphic3d_AspectText3d(*(::Quantity_Color*)theColor->NativeInstance, sz_theFont, theExpansionFactor, theSpace, (::Aspect_TypeOfStyleText)theStyle, (::Aspect_TypeOfDisplayText)theDisplayType);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFont);
}

Macad::Occt::Graphic3d_AspectText3d::Graphic3d_AspectText3d(Macad::Occt::Quantity_Color^ theColor, System::String^ theFont, double theExpansionFactor, double theSpace, Macad::Occt::Aspect_TypeOfStyleText theStyle)
	: Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theFont = (char*)(void*)Marshal::StringToHGlobalAnsi(theFont);
	NativeInstance = new ::Graphic3d_AspectText3d(*(::Quantity_Color*)theColor->NativeInstance, sz_theFont, theExpansionFactor, theSpace, (::Aspect_TypeOfStyleText)theStyle, Aspect_TODT_NORMAL);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFont);
}

Macad::Occt::Graphic3d_AspectText3d::Graphic3d_AspectText3d(Macad::Occt::Quantity_Color^ theColor, System::String^ theFont, double theExpansionFactor, double theSpace)
	: Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theFont = (char*)(void*)Marshal::StringToHGlobalAnsi(theFont);
	NativeInstance = new ::Graphic3d_AspectText3d(*(::Quantity_Color*)theColor->NativeInstance, sz_theFont, theExpansionFactor, theSpace, Aspect_TOST_NORMAL, Aspect_TODT_NORMAL);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFont);
}

Macad::Occt::Graphic3d_AspectText3d::Graphic3d_AspectText3d(Macad::Occt::Graphic3d_AspectText3d^ parameter1)
	: Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_AspectText3d(*(::Graphic3d_AspectText3d*)parameter1->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_AspectText3d::Color()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Graphic3d_AspectText3d*)_NativeInstance)->Color();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_ColorRGBA^ Macad::Occt::Graphic3d_AspectText3d::ColorRGBA()
{
	::Quantity_ColorRGBA* _result = new ::Quantity_ColorRGBA();
	*_result =  (::Quantity_ColorRGBA)((::Graphic3d_AspectText3d*)_NativeInstance)->ColorRGBA();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_ColorRGBA(_result);
}

void Macad::Occt::Graphic3d_AspectText3d::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_AspectText3d*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_AspectText3d::SetColor(Macad::Occt::Quantity_ColorRGBA^ theColor)
{
	((::Graphic3d_AspectText3d*)_NativeInstance)->SetColor(*(::Quantity_ColorRGBA*)theColor->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_AspectText3d::Font()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Graphic3d_AspectText3d*)_NativeInstance)->Font();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Graphic3d_AspectText3d::SetFont(Macad::Occt::TCollection_AsciiString^ theFont)
{
	((::Graphic3d_AspectText3d*)_NativeInstance)->SetFont(*(::TCollection_AsciiString*)theFont->NativeInstance);
}

void Macad::Occt::Graphic3d_AspectText3d::SetFont(System::String^ theFont)
{
	const char* sz_theFont = (char*)(void*)Marshal::StringToHGlobalAnsi(theFont);
	((::Graphic3d_AspectText3d*)_NativeInstance)->SetFont(sz_theFont);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFont);
}

Macad::Occt::Aspect_TypeOfStyleText Macad::Occt::Graphic3d_AspectText3d::Style()
{
	return (Macad::Occt::Aspect_TypeOfStyleText)((::Graphic3d_AspectText3d*)_NativeInstance)->Style();
}

void Macad::Occt::Graphic3d_AspectText3d::SetStyle(Macad::Occt::Aspect_TypeOfStyleText theStyle)
{
	((::Graphic3d_AspectText3d*)_NativeInstance)->SetStyle((::Aspect_TypeOfStyleText)theStyle);
}

Macad::Occt::Aspect_TypeOfDisplayText Macad::Occt::Graphic3d_AspectText3d::DisplayType()
{
	return (Macad::Occt::Aspect_TypeOfDisplayText)((::Graphic3d_AspectText3d*)_NativeInstance)->DisplayType();
}

void Macad::Occt::Graphic3d_AspectText3d::SetDisplayType(Macad::Occt::Aspect_TypeOfDisplayText theDisplayType)
{
	((::Graphic3d_AspectText3d*)_NativeInstance)->SetDisplayType((::Aspect_TypeOfDisplayText)theDisplayType);
}

bool Macad::Occt::Graphic3d_AspectText3d::GetTextZoomable()
{
	return ((::Graphic3d_AspectText3d*)_NativeInstance)->GetTextZoomable();
}

float Macad::Occt::Graphic3d_AspectText3d::GetTextAngle()
{
	return ((::Graphic3d_AspectText3d*)_NativeInstance)->GetTextAngle();
}

void Macad::Occt::Graphic3d_AspectText3d::SetTextAngle(double theAngle)
{
	((::Graphic3d_AspectText3d*)_NativeInstance)->SetTextAngle(theAngle);
}


Macad::Occt::Graphic3d_AspectText3d^ Macad::Occt::Graphic3d_AspectText3d::CreateDowncasted(::Graphic3d_AspectText3d* instance)
{
	return gcnew Macad::Occt::Graphic3d_AspectText3d( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_CStructure
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_CStructure::Graphic3d_CStructure(Macad::Occt::Graphic3d_CStructure^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Graphic3d_GraphicDriver^ Macad::Occt::Graphic3d_CStructure::GraphicDriver()
{
	Handle(::Graphic3d_GraphicDriver) _result;
	_result = ((::Graphic3d_CStructure*)_NativeInstance)->GraphicDriver();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_GraphicDriver::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_SequenceOfGroup^ Macad::Occt::Graphic3d_CStructure::Groups()
{
	::Graphic3d_SequenceOfGroup* _result = new ::Graphic3d_SequenceOfGroup();
	*_result =  (::Graphic3d_SequenceOfGroup)((::Graphic3d_CStructure*)_NativeInstance)->Groups();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_SequenceOfGroup(_result);
}

Macad::Occt::TopLoc_Datum3D^ Macad::Occt::Graphic3d_CStructure::Transformation()
{
	Handle(::TopLoc_Datum3D) _result;
	_result = ((::Graphic3d_CStructure*)_NativeInstance)->Transformation();
	 return _result.IsNull() ? nullptr : Macad::Occt::TopLoc_Datum3D::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_CStructure::SetTransformation(Macad::Occt::TopLoc_Datum3D^ theTrsf)
{
	Handle(::TopLoc_Datum3D) h_theTrsf = theTrsf->NativeInstance;
	((::Graphic3d_CStructure*)_NativeInstance)->SetTransformation(h_theTrsf);
	theTrsf->NativeInstance = h_theTrsf.get();
}

Macad::Occt::Graphic3d_TransformPers^ Macad::Occt::Graphic3d_CStructure::TransformPersistence()
{
	Handle(::Graphic3d_TransformPers) _result;
	_result = ((::Graphic3d_CStructure*)_NativeInstance)->TransformPersistence();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TransformPers::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_CStructure::SetTransformPersistence(Macad::Occt::Graphic3d_TransformPers^ theTrsfPers)
{
	Handle(::Graphic3d_TransformPers) h_theTrsfPers = theTrsfPers->NativeInstance;
	((::Graphic3d_CStructure*)_NativeInstance)->SetTransformPersistence(h_theTrsfPers);
	theTrsfPers->NativeInstance = h_theTrsfPers.get();
}

Macad::Occt::Graphic3d_SequenceOfHClipPlane^ Macad::Occt::Graphic3d_CStructure::ClipPlanes()
{
	Handle(::Graphic3d_SequenceOfHClipPlane) _result;
	_result = ((::Graphic3d_CStructure*)_NativeInstance)->ClipPlanes();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_SequenceOfHClipPlane::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_CStructure::SetClipPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes)
{
	Handle(::Graphic3d_SequenceOfHClipPlane) h_thePlanes = thePlanes->NativeInstance;
	((::Graphic3d_CStructure*)_NativeInstance)->SetClipPlanes(h_thePlanes);
	thePlanes->NativeInstance = h_thePlanes.get();
}

bool Macad::Occt::Graphic3d_CStructure::IsVisible()
{
	return ((::Graphic3d_CStructure*)_NativeInstance)->IsVisible();
}

bool Macad::Occt::Graphic3d_CStructure::IsVisible(int theViewId)
{
	return ((::Graphic3d_CStructure*)_NativeInstance)->IsVisible(theViewId);
}

void Macad::Occt::Graphic3d_CStructure::SetZLayer(int theLayerIndex)
{
	((::Graphic3d_CStructure*)_NativeInstance)->SetZLayer(theLayerIndex);
}

int Macad::Occt::Graphic3d_CStructure::ZLayer()
{
	return ((::Graphic3d_CStructure*)_NativeInstance)->ZLayer();
}

Macad::Occt::Graphic3d_PresentationAttributes^ Macad::Occt::Graphic3d_CStructure::HighlightStyle()
{
	Handle(::Graphic3d_PresentationAttributes) _result;
	_result = ((::Graphic3d_CStructure*)_NativeInstance)->HighlightStyle();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_PresentationAttributes::CreateDowncasted( _result.get());
}

bool Macad::Occt::Graphic3d_CStructure::IsCulled()
{
	return ((::Graphic3d_CStructure*)_NativeInstance)->IsCulled();
}

void Macad::Occt::Graphic3d_CStructure::SetCulled(bool theIsCulled)
{
	((::Graphic3d_CStructure*)_NativeInstance)->SetCulled(theIsCulled);
}

void Macad::Occt::Graphic3d_CStructure::MarkAsNotCulled()
{
	((::Graphic3d_CStructure*)_NativeInstance)->MarkAsNotCulled();
}

bool Macad::Occt::Graphic3d_CStructure::BndBoxClipCheck()
{
	return ((::Graphic3d_CStructure*)_NativeInstance)->BndBoxClipCheck();
}

void Macad::Occt::Graphic3d_CStructure::SetBndBoxClipCheck(bool theBndBoxClipCheck)
{
	((::Graphic3d_CStructure*)_NativeInstance)->SetBndBoxClipCheck(theBndBoxClipCheck);
}

bool Macad::Occt::Graphic3d_CStructure::IsAlwaysRendered()
{
	return ((::Graphic3d_CStructure*)_NativeInstance)->IsAlwaysRendered();
}

void Macad::Occt::Graphic3d_CStructure::OnVisibilityChanged()
{
	((::Graphic3d_CStructure*)_NativeInstance)->OnVisibilityChanged();
}

void Macad::Occt::Graphic3d_CStructure::Clear()
{
	((::Graphic3d_CStructure*)_NativeInstance)->Clear();
}

void Macad::Occt::Graphic3d_CStructure::Connect(Macad::Occt::Graphic3d_CStructure^ theStructure)
{
	((::Graphic3d_CStructure*)_NativeInstance)->Connect(*(::Graphic3d_CStructure*)theStructure->NativeInstance);
}

void Macad::Occt::Graphic3d_CStructure::Disconnect(Macad::Occt::Graphic3d_CStructure^ theStructure)
{
	((::Graphic3d_CStructure*)_NativeInstance)->Disconnect(*(::Graphic3d_CStructure*)theStructure->NativeInstance);
}

void Macad::Occt::Graphic3d_CStructure::GraphicHighlight(Macad::Occt::Graphic3d_PresentationAttributes^ theStyle)
{
	Handle(::Graphic3d_PresentationAttributes) h_theStyle = theStyle->NativeInstance;
	((::Graphic3d_CStructure*)_NativeInstance)->GraphicHighlight(h_theStyle);
	theStyle->NativeInstance = h_theStyle.get();
}

void Macad::Occt::Graphic3d_CStructure::GraphicUnhighlight()
{
	((::Graphic3d_CStructure*)_NativeInstance)->GraphicUnhighlight();
}

Macad::Occt::Graphic3d_CStructure^ Macad::Occt::Graphic3d_CStructure::ShadowLink(Macad::Occt::Graphic3d_StructureManager^ theManager)
{
	Handle(::Graphic3d_StructureManager) h_theManager = theManager->NativeInstance;
	Handle(::Graphic3d_CStructure) _result;
	_result = ((::Graphic3d_CStructure*)_NativeInstance)->ShadowLink(h_theManager);
	theManager->NativeInstance = h_theManager.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_CStructure::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_CStructure::NewGroup(Macad::Occt::Graphic3d_Structure^ theStruct)
{
	Handle(::Graphic3d_Structure) h_theStruct = theStruct->NativeInstance;
	Handle(::Graphic3d_Group) _result;
	_result = ((::Graphic3d_CStructure*)_NativeInstance)->NewGroup(h_theStruct);
	theStruct->NativeInstance = h_theStruct.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_CStructure::RemoveGroup(Macad::Occt::Graphic3d_Group^ theGroup)
{
	Handle(::Graphic3d_Group) h_theGroup = theGroup->NativeInstance;
	((::Graphic3d_CStructure*)_NativeInstance)->RemoveGroup(h_theGroup);
	theGroup->NativeInstance = h_theGroup.get();
}

void Macad::Occt::Graphic3d_CStructure::updateLayerTransformation()
{
	((::Graphic3d_CStructure*)_NativeInstance)->updateLayerTransformation();
}


Macad::Occt::Graphic3d_CStructure^ Macad::Occt::Graphic3d_CStructure::CreateDowncasted(::Graphic3d_CStructure* instance)
{
	return gcnew Macad::Occt::Graphic3d_CStructure( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_WorldViewProjState
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_WorldViewProjState::Graphic3d_WorldViewProjState()
	: BaseClass<::Graphic3d_WorldViewProjState>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_WorldViewProjState();
}

Macad::Occt::Graphic3d_WorldViewProjState::Graphic3d_WorldViewProjState(size_t theProjectionState, size_t theWorldViewState, Macad::Occt::Standard_Transient^ theCamera)
	: BaseClass<::Graphic3d_WorldViewProjState>(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_WorldViewProjState::Graphic3d_WorldViewProjState(size_t theProjectionState, size_t theWorldViewState)
	: BaseClass<::Graphic3d_WorldViewProjState>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_WorldViewProjState(theProjectionState, theWorldViewState, 0);
}

Macad::Occt::Graphic3d_WorldViewProjState::Graphic3d_WorldViewProjState(Macad::Occt::Graphic3d_WorldViewProjState^ parameter1)
	: BaseClass<::Graphic3d_WorldViewProjState>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_WorldViewProjState(*(::Graphic3d_WorldViewProjState*)parameter1->NativeInstance);
}

bool Macad::Occt::Graphic3d_WorldViewProjState::IsValid()
{
	return ((::Graphic3d_WorldViewProjState*)_NativeInstance)->IsValid();
}

void Macad::Occt::Graphic3d_WorldViewProjState::Reset()
{
	((::Graphic3d_WorldViewProjState*)_NativeInstance)->Reset();
}

void Macad::Occt::Graphic3d_WorldViewProjState::Initialize(size_t theProjectionState, size_t theWorldViewState, Macad::Occt::Standard_Transient^ theCamera)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_WorldViewProjState::Initialize(size_t theProjectionState, size_t theWorldViewState)
{
	((::Graphic3d_WorldViewProjState*)_NativeInstance)->Initialize(theProjectionState, theWorldViewState, 0);
}

void Macad::Occt::Graphic3d_WorldViewProjState::Initialize(Macad::Occt::Standard_Transient^ theCamera)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_WorldViewProjState::Initialize()
{
	((::Graphic3d_WorldViewProjState*)_NativeInstance)->Initialize(0);
}

size_t Macad::Occt::Graphic3d_WorldViewProjState::ProjectionState()
{
	return ((::Graphic3d_WorldViewProjState*)_NativeInstance)->ProjectionState();
}

size_t Macad::Occt::Graphic3d_WorldViewProjState::WorldViewState()
{
	return ((::Graphic3d_WorldViewProjState*)_NativeInstance)->WorldViewState();
}

bool Macad::Occt::Graphic3d_WorldViewProjState::IsProjectionChanged(Macad::Occt::Graphic3d_WorldViewProjState^ theState)
{
	return ((::Graphic3d_WorldViewProjState*)_NativeInstance)->IsProjectionChanged(*(::Graphic3d_WorldViewProjState*)theState->NativeInstance);
}

bool Macad::Occt::Graphic3d_WorldViewProjState::IsWorldViewChanged(Macad::Occt::Graphic3d_WorldViewProjState^ theState)
{
	return ((::Graphic3d_WorldViewProjState*)_NativeInstance)->IsWorldViewChanged(*(::Graphic3d_WorldViewProjState*)theState->NativeInstance);
}

bool Macad::Occt::Graphic3d_WorldViewProjState::IsChanged(Macad::Occt::Graphic3d_WorldViewProjState^ theState)
{
	return ((::Graphic3d_WorldViewProjState*)_NativeInstance)->IsChanged(*(::Graphic3d_WorldViewProjState*)theState->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_Camera
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Camera::Graphic3d_Camera()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Camera();
}

Macad::Occt::Graphic3d_Camera::Graphic3d_Camera(Macad::Occt::Graphic3d_Camera^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::Graphic3d_Camera) h_theOther = theOther->NativeInstance;
	NativeInstance = new ::Graphic3d_Camera(h_theOther);
	theOther->NativeInstance = h_theOther.get();
}

void Macad::Occt::Graphic3d_Camera::CopyMappingData(Macad::Occt::Graphic3d_Camera^ theOtherCamera)
{
	Handle(::Graphic3d_Camera) h_theOtherCamera = theOtherCamera->NativeInstance;
	((::Graphic3d_Camera*)_NativeInstance)->CopyMappingData(h_theOtherCamera);
	theOtherCamera->NativeInstance = h_theOtherCamera.get();
}

void Macad::Occt::Graphic3d_Camera::CopyOrientationData(Macad::Occt::Graphic3d_Camera^ theOtherCamera)
{
	Handle(::Graphic3d_Camera) h_theOtherCamera = theOtherCamera->NativeInstance;
	((::Graphic3d_Camera*)_NativeInstance)->CopyOrientationData(h_theOtherCamera);
	theOtherCamera->NativeInstance = h_theOtherCamera.get();
}

void Macad::Occt::Graphic3d_Camera::Copy(Macad::Occt::Graphic3d_Camera^ theOther)
{
	Handle(::Graphic3d_Camera) h_theOther = theOther->NativeInstance;
	((::Graphic3d_Camera*)_NativeInstance)->Copy(h_theOther);
	theOther->NativeInstance = h_theOther.get();
}

Macad::Occt::Dir Macad::Occt::Graphic3d_Camera::Direction()
{
	return Macad::Occt::Dir(((::Graphic3d_Camera*)_NativeInstance)->Direction());
}

void Macad::Occt::Graphic3d_Camera::SetDirectionFromEye(Macad::Occt::Dir theDir)
{
	pin_ptr<Macad::Occt::Dir> pp_theDir = &theDir;
	((::Graphic3d_Camera*)_NativeInstance)->SetDirectionFromEye(*(gp_Dir*)pp_theDir);
}

void Macad::Occt::Graphic3d_Camera::SetDirection(Macad::Occt::Dir theDir)
{
	pin_ptr<Macad::Occt::Dir> pp_theDir = &theDir;
	((::Graphic3d_Camera*)_NativeInstance)->SetDirection(*(gp_Dir*)pp_theDir);
}

Macad::Occt::Dir Macad::Occt::Graphic3d_Camera::Up()
{
	return Macad::Occt::Dir(((::Graphic3d_Camera*)_NativeInstance)->Up());
}

void Macad::Occt::Graphic3d_Camera::SetUp(Macad::Occt::Dir theUp)
{
	pin_ptr<Macad::Occt::Dir> pp_theUp = &theUp;
	((::Graphic3d_Camera*)_NativeInstance)->SetUp(*(gp_Dir*)pp_theUp);
}

void Macad::Occt::Graphic3d_Camera::OrthogonalizeUp()
{
	((::Graphic3d_Camera*)_NativeInstance)->OrthogonalizeUp();
}

Macad::Occt::Dir Macad::Occt::Graphic3d_Camera::OrthogonalizedUp()
{
	return Macad::Occt::Dir(((::Graphic3d_Camera*)_NativeInstance)->OrthogonalizedUp());
}

Macad::Occt::Dir Macad::Occt::Graphic3d_Camera::SideRight()
{
	return Macad::Occt::Dir(((::Graphic3d_Camera*)_NativeInstance)->SideRight());
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_Camera::Eye()
{
	return Macad::Occt::Pnt(((::Graphic3d_Camera*)_NativeInstance)->Eye());
}

void Macad::Occt::Graphic3d_Camera::MoveEyeTo(Macad::Occt::Pnt theEye)
{
	pin_ptr<Macad::Occt::Pnt> pp_theEye = &theEye;
	((::Graphic3d_Camera*)_NativeInstance)->MoveEyeTo(*(gp_Pnt*)pp_theEye);
}

void Macad::Occt::Graphic3d_Camera::SetEyeAndCenter(Macad::Occt::Pnt theEye, Macad::Occt::Pnt theCenter)
{
	pin_ptr<Macad::Occt::Pnt> pp_theEye = &theEye;
	pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
	((::Graphic3d_Camera*)_NativeInstance)->SetEyeAndCenter(*(gp_Pnt*)pp_theEye, *(gp_Pnt*)pp_theCenter);
}

void Macad::Occt::Graphic3d_Camera::SetEye(Macad::Occt::Pnt theEye)
{
	pin_ptr<Macad::Occt::Pnt> pp_theEye = &theEye;
	((::Graphic3d_Camera*)_NativeInstance)->SetEye(*(gp_Pnt*)pp_theEye);
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_Camera::Center()
{
	return Macad::Occt::Pnt(((::Graphic3d_Camera*)_NativeInstance)->Center());
}

void Macad::Occt::Graphic3d_Camera::SetCenter(Macad::Occt::Pnt theCenter)
{
	pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
	((::Graphic3d_Camera*)_NativeInstance)->SetCenter(*(gp_Pnt*)pp_theCenter);
}

double Macad::Occt::Graphic3d_Camera::Distance()
{
	return ((::Graphic3d_Camera*)_NativeInstance)->Distance();
}

void Macad::Occt::Graphic3d_Camera::SetDistance(double theDistance)
{
	((::Graphic3d_Camera*)_NativeInstance)->SetDistance(theDistance);
}

double Macad::Occt::Graphic3d_Camera::Scale()
{
	return ((::Graphic3d_Camera*)_NativeInstance)->Scale();
}

void Macad::Occt::Graphic3d_Camera::SetScale(double theScale)
{
	((::Graphic3d_Camera*)_NativeInstance)->SetScale(theScale);
}

Macad::Occt::XYZ Macad::Occt::Graphic3d_Camera::AxialScale()
{
	return Macad::Occt::XYZ(((::Graphic3d_Camera*)_NativeInstance)->AxialScale());
}

void Macad::Occt::Graphic3d_Camera::SetAxialScale(Macad::Occt::XYZ theAxialScale)
{
	pin_ptr<Macad::Occt::XYZ> pp_theAxialScale = &theAxialScale;
	((::Graphic3d_Camera*)_NativeInstance)->SetAxialScale(*(gp_XYZ*)pp_theAxialScale);
}

void Macad::Occt::Graphic3d_Camera::SetProjectionType(Macad::Occt::Graphic3d_Camera::Projection theProjection)
{
	((::Graphic3d_Camera*)_NativeInstance)->SetProjectionType((::Graphic3d_Camera::Projection)theProjection);
}

Macad::Occt::Graphic3d_Camera::Projection Macad::Occt::Graphic3d_Camera::ProjectionType()
{
	return (Macad::Occt::Graphic3d_Camera::Projection)((::Graphic3d_Camera*)_NativeInstance)->ProjectionType();
}

bool Macad::Occt::Graphic3d_Camera::IsOrthographic()
{
	return ((::Graphic3d_Camera*)_NativeInstance)->IsOrthographic();
}

bool Macad::Occt::Graphic3d_Camera::IsStereo()
{
	return ((::Graphic3d_Camera*)_NativeInstance)->IsStereo();
}

void Macad::Occt::Graphic3d_Camera::SetFOVy(double theFOVy)
{
	((::Graphic3d_Camera*)_NativeInstance)->SetFOVy(theFOVy);
}

double Macad::Occt::Graphic3d_Camera::FOVy()
{
	return ((::Graphic3d_Camera*)_NativeInstance)->FOVy();
}

double Macad::Occt::Graphic3d_Camera::FOVx()
{
	return ((::Graphic3d_Camera*)_NativeInstance)->FOVx();
}

double Macad::Occt::Graphic3d_Camera::FOV2d()
{
	return ((::Graphic3d_Camera*)_NativeInstance)->FOV2d();
}

void Macad::Occt::Graphic3d_Camera::SetFOV2d(double theFOV)
{
	((::Graphic3d_Camera*)_NativeInstance)->SetFOV2d(theFOV);
}

bool Macad::Occt::Graphic3d_Camera::ZFitAll(double theScaleFactor, Macad::Occt::Bnd_Box^ theMinMax, Macad::Occt::Bnd_Box^ theGraphicBB, double% theZNear, double% theZFar)
{
	pin_ptr<double> pp_theZNear = &theZNear;
	pin_ptr<double> pp_theZFar = &theZFar;
	return ((::Graphic3d_Camera*)_NativeInstance)->ZFitAll(theScaleFactor, *(::Bnd_Box*)theMinMax->NativeInstance, *(::Bnd_Box*)theGraphicBB->NativeInstance, *(Standard_Real*)pp_theZNear, *(Standard_Real*)pp_theZFar);
}

void Macad::Occt::Graphic3d_Camera::ZFitAll(double theScaleFactor, Macad::Occt::Bnd_Box^ theMinMax, Macad::Occt::Bnd_Box^ theGraphicBB)
{
	((::Graphic3d_Camera*)_NativeInstance)->ZFitAll(theScaleFactor, *(::Bnd_Box*)theMinMax->NativeInstance, *(::Bnd_Box*)theGraphicBB->NativeInstance);
}

void Macad::Occt::Graphic3d_Camera::SetZRange(double theZNear, double theZFar)
{
	((::Graphic3d_Camera*)_NativeInstance)->SetZRange(theZNear, theZFar);
}

double Macad::Occt::Graphic3d_Camera::ZNear()
{
	return ((::Graphic3d_Camera*)_NativeInstance)->ZNear();
}

double Macad::Occt::Graphic3d_Camera::ZFar()
{
	return ((::Graphic3d_Camera*)_NativeInstance)->ZFar();
}

void Macad::Occt::Graphic3d_Camera::SetAspect(double theAspect)
{
	((::Graphic3d_Camera*)_NativeInstance)->SetAspect(theAspect);
}

double Macad::Occt::Graphic3d_Camera::Aspect()
{
	return ((::Graphic3d_Camera*)_NativeInstance)->Aspect();
}

void Macad::Occt::Graphic3d_Camera::SetZFocus(Macad::Occt::Graphic3d_Camera::FocusType theType, double theZFocus)
{
	((::Graphic3d_Camera*)_NativeInstance)->SetZFocus((::Graphic3d_Camera::FocusType)theType, theZFocus);
}

double Macad::Occt::Graphic3d_Camera::ZFocus()
{
	return ((::Graphic3d_Camera*)_NativeInstance)->ZFocus();
}

Macad::Occt::Graphic3d_Camera::FocusType Macad::Occt::Graphic3d_Camera::ZFocusType()
{
	return (Macad::Occt::Graphic3d_Camera::FocusType)((::Graphic3d_Camera*)_NativeInstance)->ZFocusType();
}

void Macad::Occt::Graphic3d_Camera::SetIOD(Macad::Occt::Graphic3d_Camera::IODType theType, double theIOD)
{
	((::Graphic3d_Camera*)_NativeInstance)->SetIOD((::Graphic3d_Camera::IODType)theType, theIOD);
}

double Macad::Occt::Graphic3d_Camera::IOD()
{
	return ((::Graphic3d_Camera*)_NativeInstance)->IOD();
}

Macad::Occt::Graphic3d_Camera::IODType Macad::Occt::Graphic3d_Camera::GetIODType()
{
	return (Macad::Occt::Graphic3d_Camera::IODType)((::Graphic3d_Camera*)_NativeInstance)->GetIODType();
}

Macad::Occt::Graphic3d_CameraTile^ Macad::Occt::Graphic3d_Camera::Tile()
{
	::Graphic3d_CameraTile* _result = new ::Graphic3d_CameraTile();
	*_result =  (::Graphic3d_CameraTile)((::Graphic3d_Camera*)_NativeInstance)->Tile();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CameraTile(_result);
}

void Macad::Occt::Graphic3d_Camera::SetTile(Macad::Occt::Graphic3d_CameraTile^ theTile)
{
	((::Graphic3d_Camera*)_NativeInstance)->SetTile(*(::Graphic3d_CameraTile*)theTile->NativeInstance);
}

void Macad::Occt::Graphic3d_Camera::Transform(Macad::Occt::Trsf theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	((::Graphic3d_Camera*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theTrsf);
}

Macad::Occt::XYZ Macad::Occt::Graphic3d_Camera::ViewDimensions()
{
	return Macad::Occt::XYZ(((::Graphic3d_Camera*)_NativeInstance)->ViewDimensions());
}

Macad::Occt::XYZ Macad::Occt::Graphic3d_Camera::ViewDimensions(double theZValue)
{
	return Macad::Occt::XYZ(((::Graphic3d_Camera*)_NativeInstance)->ViewDimensions(theZValue));
}

double Macad::Occt::Graphic3d_Camera::NDC2dOffsetX()
{
	return ((::Graphic3d_Camera*)_NativeInstance)->NDC2dOffsetX();
}

double Macad::Occt::Graphic3d_Camera::NDC2dOffsetY()
{
	return ((::Graphic3d_Camera*)_NativeInstance)->NDC2dOffsetY();
}

void Macad::Occt::Graphic3d_Camera::Frustum(Macad::Occt::Pln% theLeft, Macad::Occt::Pln% theRight, Macad::Occt::Pln% theBottom, Macad::Occt::Pln% theTop, Macad::Occt::Pln% theNear, Macad::Occt::Pln% theFar)
{
	pin_ptr<Macad::Occt::Pln> pp_theLeft = &theLeft;
	pin_ptr<Macad::Occt::Pln> pp_theRight = &theRight;
	pin_ptr<Macad::Occt::Pln> pp_theBottom = &theBottom;
	pin_ptr<Macad::Occt::Pln> pp_theTop = &theTop;
	pin_ptr<Macad::Occt::Pln> pp_theNear = &theNear;
	pin_ptr<Macad::Occt::Pln> pp_theFar = &theFar;
	((::Graphic3d_Camera*)_NativeInstance)->Frustum(*(gp_Pln*)pp_theLeft, *(gp_Pln*)pp_theRight, *(gp_Pln*)pp_theBottom, *(gp_Pln*)pp_theTop, *(gp_Pln*)pp_theNear, *(gp_Pln*)pp_theFar);
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_Camera::Project(Macad::Occt::Pnt thePnt)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	return Macad::Occt::Pnt(((::Graphic3d_Camera*)_NativeInstance)->Project(*(gp_Pnt*)pp_thePnt));
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_Camera::UnProject(Macad::Occt::Pnt thePnt)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	return Macad::Occt::Pnt(((::Graphic3d_Camera*)_NativeInstance)->UnProject(*(gp_Pnt*)pp_thePnt));
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_Camera::ConvertView2Proj(Macad::Occt::Pnt thePnt)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	return Macad::Occt::Pnt(((::Graphic3d_Camera*)_NativeInstance)->ConvertView2Proj(*(gp_Pnt*)pp_thePnt));
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_Camera::ConvertProj2View(Macad::Occt::Pnt thePnt)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	return Macad::Occt::Pnt(((::Graphic3d_Camera*)_NativeInstance)->ConvertProj2View(*(gp_Pnt*)pp_thePnt));
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_Camera::ConvertWorld2View(Macad::Occt::Pnt thePnt)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	return Macad::Occt::Pnt(((::Graphic3d_Camera*)_NativeInstance)->ConvertWorld2View(*(gp_Pnt*)pp_thePnt));
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_Camera::ConvertView2World(Macad::Occt::Pnt thePnt)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	return Macad::Occt::Pnt(((::Graphic3d_Camera*)_NativeInstance)->ConvertView2World(*(gp_Pnt*)pp_thePnt));
}

Macad::Occt::Graphic3d_WorldViewProjState^ Macad::Occt::Graphic3d_Camera::WorldViewProjState()
{
	::Graphic3d_WorldViewProjState* _result = new ::Graphic3d_WorldViewProjState();
	*_result =  (::Graphic3d_WorldViewProjState)((::Graphic3d_Camera*)_NativeInstance)->WorldViewProjState();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_WorldViewProjState(_result);
}

size_t Macad::Occt::Graphic3d_Camera::ProjectionState()
{
	return ((::Graphic3d_Camera*)_NativeInstance)->ProjectionState();
}

size_t Macad::Occt::Graphic3d_Camera::WorldViewState()
{
	return ((::Graphic3d_Camera*)_NativeInstance)->WorldViewState();
}

void Macad::Occt::Graphic3d_Camera::InvalidateProjection()
{
	((::Graphic3d_Camera*)_NativeInstance)->InvalidateProjection();
}

void Macad::Occt::Graphic3d_Camera::InvalidateOrientation()
{
	((::Graphic3d_Camera*)_NativeInstance)->InvalidateOrientation();
}

void Macad::Occt::Graphic3d_Camera::ResetCustomProjection()
{
	((::Graphic3d_Camera*)_NativeInstance)->ResetCustomProjection();
}

bool Macad::Occt::Graphic3d_Camera::IsCustomStereoFrustum()
{
	return ((::Graphic3d_Camera*)_NativeInstance)->IsCustomStereoFrustum();
}

bool Macad::Occt::Graphic3d_Camera::IsCustomStereoProjection()
{
	return ((::Graphic3d_Camera*)_NativeInstance)->IsCustomStereoProjection();
}

bool Macad::Occt::Graphic3d_Camera::IsCustomMonoProjection()
{
	return ((::Graphic3d_Camera*)_NativeInstance)->IsCustomMonoProjection();
}


Macad::Occt::Graphic3d_Camera^ Macad::Occt::Graphic3d_Camera::CreateDowncasted(::Graphic3d_Camera* instance)
{
	return gcnew Macad::Occt::Graphic3d_Camera( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_CameraTile
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_CameraTile::Graphic3d_CameraTile()
	: BaseClass<::Graphic3d_CameraTile>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_CameraTile();
}

Macad::Occt::Graphic3d_CameraTile::Graphic3d_CameraTile(Macad::Occt::Graphic3d_CameraTile^ parameter1)
	: BaseClass<::Graphic3d_CameraTile>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_CameraTile(*(::Graphic3d_CameraTile*)parameter1->NativeInstance);
}

bool Macad::Occt::Graphic3d_CameraTile::IsValid()
{
	return ((::Graphic3d_CameraTile*)_NativeInstance)->IsValid();
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_CameraTile::OffsetLowerLeft()
{
	::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i(0);
	*_result = ((::Graphic3d_CameraTile*)_NativeInstance)->OffsetLowerLeft();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_CameraTile^ Macad::Occt::Graphic3d_CameraTile::Cropped()
{
	::Graphic3d_CameraTile* _result = new ::Graphic3d_CameraTile();
	*_result = ((::Graphic3d_CameraTile*)_NativeInstance)->Cropped();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CameraTile(_result);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_CLight
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_CLight::Graphic3d_CLight(Macad::Occt::Graphic3d_TypeOfLightSource theType)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_CLight((::Graphic3d_TypeOfLightSource)theType);
}

Macad::Occt::Graphic3d_TypeOfLightSource Macad::Occt::Graphic3d_CLight::Type()
{
	return (Macad::Occt::Graphic3d_TypeOfLightSource)((::Graphic3d_CLight*)_NativeInstance)->Type();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_CLight::Name()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Graphic3d_CLight*)_NativeInstance)->Name();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Graphic3d_CLight::SetName(Macad::Occt::TCollection_AsciiString^ theName)
{
	((::Graphic3d_CLight*)_NativeInstance)->SetName(*(::TCollection_AsciiString*)theName->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_CLight::Color()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Graphic3d_CLight*)_NativeInstance)->Color();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_CLight::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_CLight*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

bool Macad::Occt::Graphic3d_CLight::IsEnabled()
{
	return ((::Graphic3d_CLight*)_NativeInstance)->IsEnabled();
}

void Macad::Occt::Graphic3d_CLight::SetEnabled(bool theIsOn)
{
	((::Graphic3d_CLight*)_NativeInstance)->SetEnabled(theIsOn);
}

bool Macad::Occt::Graphic3d_CLight::IsHeadlight()
{
	return ((::Graphic3d_CLight*)_NativeInstance)->IsHeadlight();
}

bool Macad::Occt::Graphic3d_CLight::Headlight()
{
	return ((::Graphic3d_CLight*)_NativeInstance)->Headlight();
}

void Macad::Occt::Graphic3d_CLight::SetHeadlight(bool theValue)
{
	((::Graphic3d_CLight*)_NativeInstance)->SetHeadlight(theValue);
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_CLight::Position()
{
	return Macad::Occt::Pnt(((::Graphic3d_CLight*)_NativeInstance)->Position());
}

void Macad::Occt::Graphic3d_CLight::SetPosition(Macad::Occt::Pnt thePosition)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePosition = &thePosition;
	((::Graphic3d_CLight*)_NativeInstance)->SetPosition(*(gp_Pnt*)pp_thePosition);
}

void Macad::Occt::Graphic3d_CLight::Position(double% theX, double% theY, double% theZ)
{
	pin_ptr<double> pp_theX = &theX;
	pin_ptr<double> pp_theY = &theY;
	pin_ptr<double> pp_theZ = &theZ;
	((::Graphic3d_CLight*)_NativeInstance)->Position(*(Standard_Real*)pp_theX, *(Standard_Real*)pp_theY, *(Standard_Real*)pp_theZ);
}

void Macad::Occt::Graphic3d_CLight::SetPosition(double theX, double theY, double theZ)
{
	((::Graphic3d_CLight*)_NativeInstance)->SetPosition(theX, theY, theZ);
}

float Macad::Occt::Graphic3d_CLight::ConstAttenuation()
{
	return ((::Graphic3d_CLight*)_NativeInstance)->ConstAttenuation();
}

float Macad::Occt::Graphic3d_CLight::LinearAttenuation()
{
	return ((::Graphic3d_CLight*)_NativeInstance)->LinearAttenuation();
}

void Macad::Occt::Graphic3d_CLight::Attenuation(double% theConstAttenuation, double% theLinearAttenuation)
{
	pin_ptr<double> pp_theConstAttenuation = &theConstAttenuation;
	pin_ptr<double> pp_theLinearAttenuation = &theLinearAttenuation;
	((::Graphic3d_CLight*)_NativeInstance)->Attenuation(*(Standard_Real*)pp_theConstAttenuation, *(Standard_Real*)pp_theLinearAttenuation);
}

void Macad::Occt::Graphic3d_CLight::SetAttenuation(float theConstAttenuation, float theLinearAttenuation)
{
	((::Graphic3d_CLight*)_NativeInstance)->SetAttenuation(theConstAttenuation, theLinearAttenuation);
}

Macad::Occt::Dir Macad::Occt::Graphic3d_CLight::Direction()
{
	return Macad::Occt::Dir(((::Graphic3d_CLight*)_NativeInstance)->Direction());
}

void Macad::Occt::Graphic3d_CLight::SetDirection(Macad::Occt::Dir theDir)
{
	pin_ptr<Macad::Occt::Dir> pp_theDir = &theDir;
	((::Graphic3d_CLight*)_NativeInstance)->SetDirection(*(gp_Dir*)pp_theDir);
}

void Macad::Occt::Graphic3d_CLight::Direction(double% theVx, double% theVy, double% theVz)
{
	pin_ptr<double> pp_theVx = &theVx;
	pin_ptr<double> pp_theVy = &theVy;
	pin_ptr<double> pp_theVz = &theVz;
	((::Graphic3d_CLight*)_NativeInstance)->Direction(*(Standard_Real*)pp_theVx, *(Standard_Real*)pp_theVy, *(Standard_Real*)pp_theVz);
}

void Macad::Occt::Graphic3d_CLight::SetDirection(double theVx, double theVy, double theVz)
{
	((::Graphic3d_CLight*)_NativeInstance)->SetDirection(theVx, theVy, theVz);
}

float Macad::Occt::Graphic3d_CLight::Angle()
{
	return ((::Graphic3d_CLight*)_NativeInstance)->Angle();
}

void Macad::Occt::Graphic3d_CLight::SetAngle(float theAngle)
{
	((::Graphic3d_CLight*)_NativeInstance)->SetAngle(theAngle);
}

float Macad::Occt::Graphic3d_CLight::Concentration()
{
	return ((::Graphic3d_CLight*)_NativeInstance)->Concentration();
}

void Macad::Occt::Graphic3d_CLight::SetConcentration(float theConcentration)
{
	((::Graphic3d_CLight*)_NativeInstance)->SetConcentration(theConcentration);
}

float Macad::Occt::Graphic3d_CLight::Intensity()
{
	return ((::Graphic3d_CLight*)_NativeInstance)->Intensity();
}

void Macad::Occt::Graphic3d_CLight::SetIntensity(float theValue)
{
	((::Graphic3d_CLight*)_NativeInstance)->SetIntensity(theValue);
}

float Macad::Occt::Graphic3d_CLight::Smoothness()
{
	return ((::Graphic3d_CLight*)_NativeInstance)->Smoothness();
}

void Macad::Occt::Graphic3d_CLight::SetSmoothRadius(float theValue)
{
	((::Graphic3d_CLight*)_NativeInstance)->SetSmoothRadius(theValue);
}

void Macad::Occt::Graphic3d_CLight::SetSmoothAngle(float theValue)
{
	((::Graphic3d_CLight*)_NativeInstance)->SetSmoothAngle(theValue);
}

float Macad::Occt::Graphic3d_CLight::Range()
{
	return ((::Graphic3d_CLight*)_NativeInstance)->Range();
}

void Macad::Occt::Graphic3d_CLight::SetRange(float theValue)
{
	((::Graphic3d_CLight*)_NativeInstance)->SetRange(theValue);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_CLight::GetId()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Graphic3d_CLight*)_NativeInstance)->GetId();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

size_t Macad::Occt::Graphic3d_CLight::Revision()
{
	return ((::Graphic3d_CLight*)_NativeInstance)->Revision();
}


Macad::Occt::Graphic3d_CLight^ Macad::Occt::Graphic3d_CLight::CreateDowncasted(::Graphic3d_CLight* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::V3d_AmbientLight)))
		return Macad::Occt::V3d_AmbientLight::CreateDowncasted((::V3d_AmbientLight*)instance);
	if (instance->IsKind(STANDARD_TYPE(::V3d_PositionLight)))
		return Macad::Occt::V3d_PositionLight::CreateDowncasted((::V3d_PositionLight*)instance);

	return gcnew Macad::Occt::Graphic3d_CLight( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ClipPlane
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ClipPlane::Graphic3d_ClipPlane()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ClipPlane();
}

Macad::Occt::Graphic3d_ClipPlane::Graphic3d_ClipPlane(Macad::Occt::Graphic3d_ClipPlane^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ClipPlane(*(::Graphic3d_ClipPlane*)theOther->NativeInstance);
}

Macad::Occt::Graphic3d_ClipPlane::Graphic3d_ClipPlane(Macad::Occt::Pln thePlane)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
	NativeInstance = new ::Graphic3d_ClipPlane(*(gp_Pln*)pp_thePlane);
}

void Macad::Occt::Graphic3d_ClipPlane::SetEquation(Macad::Occt::Pln thePlane)
{
	pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
	((::Graphic3d_ClipPlane*)_NativeInstance)->SetEquation(*(gp_Pln*)pp_thePlane);
}

bool Macad::Occt::Graphic3d_ClipPlane::IsOn()
{
	return ((::Graphic3d_ClipPlane*)_NativeInstance)->IsOn();
}

void Macad::Occt::Graphic3d_ClipPlane::SetOn(bool theIsOn)
{
	((::Graphic3d_ClipPlane*)_NativeInstance)->SetOn(theIsOn);
}

void Macad::Occt::Graphic3d_ClipPlane::SetCapping(bool theIsOn)
{
	((::Graphic3d_ClipPlane*)_NativeInstance)->SetCapping(theIsOn);
}

bool Macad::Occt::Graphic3d_ClipPlane::IsCapping()
{
	return ((::Graphic3d_ClipPlane*)_NativeInstance)->IsCapping();
}

Macad::Occt::Pln Macad::Occt::Graphic3d_ClipPlane::ToPlane()
{
	return Macad::Occt::Pln(((::Graphic3d_ClipPlane*)_NativeInstance)->ToPlane());
}

Macad::Occt::Graphic3d_ClipPlane^ Macad::Occt::Graphic3d_ClipPlane::Clone()
{
	Handle(::Graphic3d_ClipPlane) _result;
	_result = ((::Graphic3d_ClipPlane*)_NativeInstance)->Clone();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ClipPlane::CreateDowncasted( _result.get());
}

bool Macad::Occt::Graphic3d_ClipPlane::IsChain()
{
	return ((::Graphic3d_ClipPlane*)_NativeInstance)->IsChain();
}

Macad::Occt::Graphic3d_ClipPlane^ Macad::Occt::Graphic3d_ClipPlane::ChainPreviousPlane()
{
	Handle(::Graphic3d_ClipPlane) _result;
	_result = ((::Graphic3d_ClipPlane*)_NativeInstance)->ChainPreviousPlane();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ClipPlane::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_ClipPlane^ Macad::Occt::Graphic3d_ClipPlane::ChainNextPlane()
{
	Handle(::Graphic3d_ClipPlane) _result;
	_result = ((::Graphic3d_ClipPlane*)_NativeInstance)->ChainNextPlane();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ClipPlane::CreateDowncasted( _result.get());
}

int Macad::Occt::Graphic3d_ClipPlane::NbChainNextPlanes()
{
	return ((::Graphic3d_ClipPlane*)_NativeInstance)->NbChainNextPlanes();
}

void Macad::Occt::Graphic3d_ClipPlane::SetChainNextPlane(Macad::Occt::Graphic3d_ClipPlane^ thePlane)
{
	Handle(::Graphic3d_ClipPlane) h_thePlane = thePlane->NativeInstance;
	((::Graphic3d_ClipPlane*)_NativeInstance)->SetChainNextPlane(h_thePlane);
	thePlane->NativeInstance = h_thePlane.get();
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_ClipPlane::CappingColor()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Graphic3d_ClipPlane*)_NativeInstance)->CappingColor();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_ClipPlane::SetCappingColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_ClipPlane*)_NativeInstance)->SetCappingColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_ClipPlane::SetCappingMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theMat)
{
	((::Graphic3d_ClipPlane*)_NativeInstance)->SetCappingMaterial(*(::Graphic3d_MaterialAspect*)theMat->NativeInstance);
}

Macad::Occt::Graphic3d_MaterialAspect^ Macad::Occt::Graphic3d_ClipPlane::CappingMaterial()
{
	::Graphic3d_MaterialAspect* _result = new ::Graphic3d_MaterialAspect();
	*_result =  (::Graphic3d_MaterialAspect)((::Graphic3d_ClipPlane*)_NativeInstance)->CappingMaterial();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MaterialAspect(_result);
}

void Macad::Occt::Graphic3d_ClipPlane::SetCappingTexture(Macad::Occt::Graphic3d_TextureMap^ theTexture)
{
	Handle(::Graphic3d_TextureMap) h_theTexture = theTexture->NativeInstance;
	((::Graphic3d_ClipPlane*)_NativeInstance)->SetCappingTexture(h_theTexture);
	theTexture->NativeInstance = h_theTexture.get();
}

Macad::Occt::Graphic3d_TextureMap^ Macad::Occt::Graphic3d_ClipPlane::CappingTexture()
{
	Handle(::Graphic3d_TextureMap) _result;
	_result = ((::Graphic3d_ClipPlane*)_NativeInstance)->CappingTexture();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TextureMap::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_ClipPlane::SetCappingHatch(Macad::Occt::Aspect_HatchStyle theStyle)
{
	((::Graphic3d_ClipPlane*)_NativeInstance)->SetCappingHatch((::Aspect_HatchStyle)theStyle);
}

Macad::Occt::Aspect_HatchStyle Macad::Occt::Graphic3d_ClipPlane::CappingHatch()
{
	return (Macad::Occt::Aspect_HatchStyle)((::Graphic3d_ClipPlane*)_NativeInstance)->CappingHatch();
}

void Macad::Occt::Graphic3d_ClipPlane::SetCappingCustomHatch(Macad::Occt::Graphic3d_HatchStyle^ theStyle)
{
	Handle(::Graphic3d_HatchStyle) h_theStyle = theStyle->NativeInstance;
	((::Graphic3d_ClipPlane*)_NativeInstance)->SetCappingCustomHatch(h_theStyle);
	theStyle->NativeInstance = h_theStyle.get();
}

Macad::Occt::Graphic3d_HatchStyle^ Macad::Occt::Graphic3d_ClipPlane::CappingCustomHatch()
{
	Handle(::Graphic3d_HatchStyle) _result;
	_result = ((::Graphic3d_ClipPlane*)_NativeInstance)->CappingCustomHatch();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_HatchStyle::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_ClipPlane::SetCappingHatchOn()
{
	((::Graphic3d_ClipPlane*)_NativeInstance)->SetCappingHatchOn();
}

void Macad::Occt::Graphic3d_ClipPlane::SetCappingHatchOff()
{
	((::Graphic3d_ClipPlane*)_NativeInstance)->SetCappingHatchOff();
}

bool Macad::Occt::Graphic3d_ClipPlane::IsHatchOn()
{
	return ((::Graphic3d_ClipPlane*)_NativeInstance)->IsHatchOn();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_ClipPlane::GetId()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Graphic3d_ClipPlane*)_NativeInstance)->GetId();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Graphic3d_AspectFillArea3d^ Macad::Occt::Graphic3d_ClipPlane::CappingAspect()
{
	Handle(::Graphic3d_AspectFillArea3d) _result;
	_result = ((::Graphic3d_ClipPlane*)_NativeInstance)->CappingAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_AspectFillArea3d::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_ClipPlane::SetCappingAspect(Macad::Occt::Graphic3d_AspectFillArea3d^ theAspect)
{
	Handle(::Graphic3d_AspectFillArea3d) h_theAspect = theAspect->NativeInstance;
	((::Graphic3d_ClipPlane*)_NativeInstance)->SetCappingAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

bool Macad::Occt::Graphic3d_ClipPlane::ToUseObjectMaterial()
{
	return ((::Graphic3d_ClipPlane*)_NativeInstance)->ToUseObjectMaterial();
}

void Macad::Occt::Graphic3d_ClipPlane::SetUseObjectMaterial(bool theToUse)
{
	((::Graphic3d_ClipPlane*)_NativeInstance)->SetUseObjectMaterial(theToUse);
}

bool Macad::Occt::Graphic3d_ClipPlane::ToUseObjectTexture()
{
	return ((::Graphic3d_ClipPlane*)_NativeInstance)->ToUseObjectTexture();
}

void Macad::Occt::Graphic3d_ClipPlane::SetUseObjectTexture(bool theToUse)
{
	((::Graphic3d_ClipPlane*)_NativeInstance)->SetUseObjectTexture(theToUse);
}

bool Macad::Occt::Graphic3d_ClipPlane::ToUseObjectShader()
{
	return ((::Graphic3d_ClipPlane*)_NativeInstance)->ToUseObjectShader();
}

void Macad::Occt::Graphic3d_ClipPlane::SetUseObjectShader(bool theToUse)
{
	((::Graphic3d_ClipPlane*)_NativeInstance)->SetUseObjectShader(theToUse);
}

bool Macad::Occt::Graphic3d_ClipPlane::ToUseObjectProperties()
{
	return ((::Graphic3d_ClipPlane*)_NativeInstance)->ToUseObjectProperties();
}

unsigned int Macad::Occt::Graphic3d_ClipPlane::MCountEquation()
{
	return ((::Graphic3d_ClipPlane*)_NativeInstance)->MCountEquation();
}

unsigned int Macad::Occt::Graphic3d_ClipPlane::MCountAspect()
{
	return ((::Graphic3d_ClipPlane*)_NativeInstance)->MCountAspect();
}


Macad::Occt::Graphic3d_ClipPlane^ Macad::Occt::Graphic3d_ClipPlane::CreateDowncasted(::Graphic3d_ClipPlane* instance)
{
	return gcnew Macad::Occt::Graphic3d_ClipPlane( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Structure
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Structure::Graphic3d_Structure(Macad::Occt::Graphic3d_StructureManager^ theManager, Macad::Occt::Graphic3d_Structure^ theLinkPrs)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::Graphic3d_StructureManager) h_theManager = theManager->NativeInstance;
	Handle(::Graphic3d_Structure) h_theLinkPrs = theLinkPrs->NativeInstance;
	NativeInstance = new ::Graphic3d_Structure(h_theManager, h_theLinkPrs);
	theManager->NativeInstance = h_theManager.get();
	theLinkPrs->NativeInstance = h_theLinkPrs.get();
}

Macad::Occt::Graphic3d_Structure::Graphic3d_Structure(Macad::Occt::Graphic3d_StructureManager^ theManager)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::Graphic3d_StructureManager) h_theManager = theManager->NativeInstance;
	NativeInstance = new ::Graphic3d_Structure(h_theManager, ::opencascade::handle<::Graphic3d_Structure>());
	theManager->NativeInstance = h_theManager.get();
}

Macad::Occt::Graphic3d_Structure::Graphic3d_Structure(Macad::Occt::Graphic3d_Structure^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Structure(*(::Graphic3d_Structure*)parameter1->NativeInstance);
}

void Macad::Occt::Graphic3d_Structure::Clear(bool WithDestruction)
{
	((::Graphic3d_Structure*)_NativeInstance)->Clear(WithDestruction);
}

void Macad::Occt::Graphic3d_Structure::Clear()
{
	((::Graphic3d_Structure*)_NativeInstance)->Clear(true);
}

void Macad::Occt::Graphic3d_Structure::Display()
{
	((::Graphic3d_Structure*)_NativeInstance)->Display();
}

int Macad::Occt::Graphic3d_Structure::DisplayPriority()
{
	return ((::Graphic3d_Structure*)_NativeInstance)->DisplayPriority();
}

void Macad::Occt::Graphic3d_Structure::Erase()
{
	((::Graphic3d_Structure*)_NativeInstance)->Erase();
}

void Macad::Occt::Graphic3d_Structure::Highlight(Macad::Occt::Graphic3d_PresentationAttributes^ theStyle, bool theToUpdateMgr)
{
	Handle(::Graphic3d_PresentationAttributes) h_theStyle = theStyle->NativeInstance;
	((::Graphic3d_Structure*)_NativeInstance)->Highlight(h_theStyle, theToUpdateMgr);
	theStyle->NativeInstance = h_theStyle.get();
}

void Macad::Occt::Graphic3d_Structure::Highlight(Macad::Occt::Graphic3d_PresentationAttributes^ theStyle)
{
	Handle(::Graphic3d_PresentationAttributes) h_theStyle = theStyle->NativeInstance;
	((::Graphic3d_Structure*)_NativeInstance)->Highlight(h_theStyle, true);
	theStyle->NativeInstance = h_theStyle.get();
}

void Macad::Occt::Graphic3d_Structure::Remove()
{
	((::Graphic3d_Structure*)_NativeInstance)->Remove();
}

void Macad::Occt::Graphic3d_Structure::CalculateBoundBox()
{
	((::Graphic3d_Structure*)_NativeInstance)->CalculateBoundBox();
}

void Macad::Occt::Graphic3d_Structure::SetInfiniteState(bool theToSet)
{
	((::Graphic3d_Structure*)_NativeInstance)->SetInfiniteState(theToSet);
}

void Macad::Occt::Graphic3d_Structure::SetDisplayPriority(int Priority)
{
	((::Graphic3d_Structure*)_NativeInstance)->SetDisplayPriority(Priority);
}

void Macad::Occt::Graphic3d_Structure::ResetDisplayPriority()
{
	((::Graphic3d_Structure*)_NativeInstance)->ResetDisplayPriority();
}

void Macad::Occt::Graphic3d_Structure::SetZLayer(int theLayerId)
{
	((::Graphic3d_Structure*)_NativeInstance)->SetZLayer(theLayerId);
}

int Macad::Occt::Graphic3d_Structure::GetZLayer()
{
	return ((::Graphic3d_Structure*)_NativeInstance)->GetZLayer();
}

void Macad::Occt::Graphic3d_Structure::SetClipPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes)
{
	Handle(::Graphic3d_SequenceOfHClipPlane) h_thePlanes = thePlanes->NativeInstance;
	((::Graphic3d_Structure*)_NativeInstance)->SetClipPlanes(h_thePlanes);
	thePlanes->NativeInstance = h_thePlanes.get();
}

Macad::Occt::Graphic3d_SequenceOfHClipPlane^ Macad::Occt::Graphic3d_Structure::ClipPlanes()
{
	Handle(::Graphic3d_SequenceOfHClipPlane) _result;
	_result = ((::Graphic3d_Structure*)_NativeInstance)->ClipPlanes();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_SequenceOfHClipPlane::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_Structure::SetVisible(bool AValue)
{
	((::Graphic3d_Structure*)_NativeInstance)->SetVisible(AValue);
}

void Macad::Occt::Graphic3d_Structure::SetVisual(Macad::Occt::Graphic3d_TypeOfStructure AVisual)
{
	((::Graphic3d_Structure*)_NativeInstance)->SetVisual((::Graphic3d_TypeOfStructure)AVisual);
}

void Macad::Occt::Graphic3d_Structure::SetZoomLimit(double LimitInf, double LimitSup)
{
	((::Graphic3d_Structure*)_NativeInstance)->SetZoomLimit(LimitInf, LimitSup);
}

void Macad::Occt::Graphic3d_Structure::SetIsForHighlight(bool isForHighlight)
{
	((::Graphic3d_Structure*)_NativeInstance)->SetIsForHighlight(isForHighlight);
}

void Macad::Occt::Graphic3d_Structure::UnHighlight()
{
	((::Graphic3d_Structure*)_NativeInstance)->UnHighlight();
}

void Macad::Occt::Graphic3d_Structure::Compute()
{
	((::Graphic3d_Structure*)_NativeInstance)->Compute();
}

void Macad::Occt::Graphic3d_Structure::computeHLR(Macad::Occt::Graphic3d_Camera^ theProjector, Macad::Occt::Graphic3d_Structure^ theStructure)
{
	Handle(::Graphic3d_Camera) h_theProjector = theProjector->NativeInstance;
	Handle(::Graphic3d_Structure) h_theStructure = theStructure->NativeInstance;
	((::Graphic3d_Structure*)_NativeInstance)->computeHLR(h_theProjector, h_theStructure);
	theProjector->NativeInstance = h_theProjector.get();
	theStructure->NativeInstance = h_theStructure.get();
}

void Macad::Occt::Graphic3d_Structure::ReCompute()
{
	((::Graphic3d_Structure*)_NativeInstance)->ReCompute();
}

void Macad::Occt::Graphic3d_Structure::ReCompute(Macad::Occt::Graphic3d_DataStructureManager^ aProjector)
{
	Handle(::Graphic3d_DataStructureManager) h_aProjector = aProjector->NativeInstance;
	((::Graphic3d_Structure*)_NativeInstance)->ReCompute(h_aProjector);
	aProjector->NativeInstance = h_aProjector.get();
}

bool Macad::Occt::Graphic3d_Structure::ContainsFacet()
{
	return ((::Graphic3d_Structure*)_NativeInstance)->ContainsFacet();
}

Macad::Occt::Graphic3d_SequenceOfGroup^ Macad::Occt::Graphic3d_Structure::Groups()
{
	::Graphic3d_SequenceOfGroup* _result = new ::Graphic3d_SequenceOfGroup();
	*_result =  (::Graphic3d_SequenceOfGroup)((::Graphic3d_Structure*)_NativeInstance)->Groups();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_SequenceOfGroup(_result);
}

int Macad::Occt::Graphic3d_Structure::NumberOfGroups()
{
	return ((::Graphic3d_Structure*)_NativeInstance)->NumberOfGroups();
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_Structure::NewGroup()
{
	Handle(::Graphic3d_Group) _result;
	_result = ((::Graphic3d_Structure*)_NativeInstance)->NewGroup();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_Structure::CurrentGroup()
{
	Handle(::Graphic3d_Group) _result;
	_result = ((::Graphic3d_Structure*)_NativeInstance)->CurrentGroup();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_PresentationAttributes^ Macad::Occt::Graphic3d_Structure::HighlightStyle()
{
	Handle(::Graphic3d_PresentationAttributes) _result;
	_result = ((::Graphic3d_Structure*)_NativeInstance)->HighlightStyle();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_PresentationAttributes::CreateDowncasted( _result.get());
}

bool Macad::Occt::Graphic3d_Structure::IsDeleted()
{
	return ((::Graphic3d_Structure*)_NativeInstance)->IsDeleted();
}

bool Macad::Occt::Graphic3d_Structure::IsDisplayed()
{
	return ((::Graphic3d_Structure*)_NativeInstance)->IsDisplayed();
}

bool Macad::Occt::Graphic3d_Structure::IsEmpty()
{
	return ((::Graphic3d_Structure*)_NativeInstance)->IsEmpty();
}

bool Macad::Occt::Graphic3d_Structure::IsInfinite()
{
	return ((::Graphic3d_Structure*)_NativeInstance)->IsInfinite();
}

bool Macad::Occt::Graphic3d_Structure::IsHighlighted()
{
	return ((::Graphic3d_Structure*)_NativeInstance)->IsHighlighted();
}

bool Macad::Occt::Graphic3d_Structure::IsTransformed()
{
	return ((::Graphic3d_Structure*)_NativeInstance)->IsTransformed();
}

bool Macad::Occt::Graphic3d_Structure::IsVisible()
{
	return ((::Graphic3d_Structure*)_NativeInstance)->IsVisible();
}

Macad::Occt::Bnd_Box^ Macad::Occt::Graphic3d_Structure::MinMaxValues(bool theToIgnoreInfiniteFlag)
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Graphic3d_Structure*)_NativeInstance)->MinMaxValues(theToIgnoreInfiniteFlag);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Graphic3d_Structure::MinMaxValues()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Graphic3d_Structure*)_NativeInstance)->MinMaxValues(false);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Graphic3d_TypeOfStructure Macad::Occt::Graphic3d_Structure::Visual()
{
	return (Macad::Occt::Graphic3d_TypeOfStructure)((::Graphic3d_Structure*)_NativeInstance)->Visual();
}

bool Macad::Occt::Graphic3d_Structure::AcceptConnection(Macad::Occt::Graphic3d_Structure^ theStructure1, Macad::Occt::Graphic3d_Structure^ theStructure2, Macad::Occt::Graphic3d_TypeOfConnection theType)
{
	return ::Graphic3d_Structure::AcceptConnection((::Graphic3d_Structure*)theStructure1->NativeInstance, (::Graphic3d_Structure*)theStructure2->NativeInstance, (::Graphic3d_TypeOfConnection)theType);
}

void Macad::Occt::Graphic3d_Structure::Ancestors(Macad::Occt::Graphic3d_MapOfStructure^ SG)
{
	((::Graphic3d_Structure*)_NativeInstance)->Ancestors(*(::Graphic3d_MapOfStructure*)SG->NativeInstance);
}

void Macad::Occt::Graphic3d_Structure::Connect(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::Graphic3d_TypeOfConnection theType, bool theWithCheck)
{
	((::Graphic3d_Structure*)_NativeInstance)->Connect((::Graphic3d_Structure*)theStructure->NativeInstance, (::Graphic3d_TypeOfConnection)theType, theWithCheck);
}

void Macad::Occt::Graphic3d_Structure::Connect(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::Graphic3d_TypeOfConnection theType)
{
	((::Graphic3d_Structure*)_NativeInstance)->Connect((::Graphic3d_Structure*)theStructure->NativeInstance, (::Graphic3d_TypeOfConnection)theType, false);
}

void Macad::Occt::Graphic3d_Structure::Connect(Macad::Occt::Graphic3d_Structure^ thePrs)
{
	Handle(::Graphic3d_Structure) h_thePrs = thePrs->NativeInstance;
	((::Graphic3d_Structure*)_NativeInstance)->Connect(h_thePrs);
	thePrs->NativeInstance = h_thePrs.get();
}

void Macad::Occt::Graphic3d_Structure::Descendants(Macad::Occt::Graphic3d_MapOfStructure^ SG)
{
	((::Graphic3d_Structure*)_NativeInstance)->Descendants(*(::Graphic3d_MapOfStructure*)SG->NativeInstance);
}

void Macad::Occt::Graphic3d_Structure::Disconnect(Macad::Occt::Graphic3d_Structure^ theStructure)
{
	((::Graphic3d_Structure*)_NativeInstance)->Disconnect((::Graphic3d_Structure*)theStructure->NativeInstance);
}

void Macad::Occt::Graphic3d_Structure::Remove(Macad::Occt::Graphic3d_Structure^ thePrs)
{
	Handle(::Graphic3d_Structure) h_thePrs = thePrs->NativeInstance;
	((::Graphic3d_Structure*)_NativeInstance)->Remove(h_thePrs);
	thePrs->NativeInstance = h_thePrs.get();
}

void Macad::Occt::Graphic3d_Structure::DisconnectAll(Macad::Occt::Graphic3d_TypeOfConnection AType)
{
	((::Graphic3d_Structure*)_NativeInstance)->DisconnectAll((::Graphic3d_TypeOfConnection)AType);
}

void Macad::Occt::Graphic3d_Structure::RemoveAll()
{
	((::Graphic3d_Structure*)_NativeInstance)->RemoveAll();
}

void Macad::Occt::Graphic3d_Structure::SetOwner(System::IntPtr theOwner)
{
	((::Graphic3d_Structure*)_NativeInstance)->SetOwner(theOwner.ToPointer());
}

System::IntPtr Macad::Occt::Graphic3d_Structure::Owner()
{
	return System::IntPtr(((::Graphic3d_Structure*)_NativeInstance)->Owner());
}

void Macad::Occt::Graphic3d_Structure::SetHLRValidation(bool theFlag)
{
	((::Graphic3d_Structure*)_NativeInstance)->SetHLRValidation(theFlag);
}

bool Macad::Occt::Graphic3d_Structure::HLRValidation()
{
	return ((::Graphic3d_Structure*)_NativeInstance)->HLRValidation();
}

Macad::Occt::TopLoc_Datum3D^ Macad::Occt::Graphic3d_Structure::Transformation()
{
	Handle(::TopLoc_Datum3D) _result;
	_result = ((::Graphic3d_Structure*)_NativeInstance)->Transformation();
	 return _result.IsNull() ? nullptr : Macad::Occt::TopLoc_Datum3D::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_Structure::SetTransformation(Macad::Occt::TopLoc_Datum3D^ theTrsf)
{
	Handle(::TopLoc_Datum3D) h_theTrsf = theTrsf->NativeInstance;
	((::Graphic3d_Structure*)_NativeInstance)->SetTransformation(h_theTrsf);
	theTrsf->NativeInstance = h_theTrsf.get();
}

void Macad::Occt::Graphic3d_Structure::SetTransformPersistence(Macad::Occt::Graphic3d_TransformPers^ theTrsfPers)
{
	Handle(::Graphic3d_TransformPers) h_theTrsfPers = theTrsfPers->NativeInstance;
	((::Graphic3d_Structure*)_NativeInstance)->SetTransformPersistence(h_theTrsfPers);
	theTrsfPers->NativeInstance = h_theTrsfPers.get();
}

Macad::Occt::Graphic3d_TransformPers^ Macad::Occt::Graphic3d_Structure::TransformPersistence()
{
	Handle(::Graphic3d_TransformPers) _result;
	_result = ((::Graphic3d_Structure*)_NativeInstance)->TransformPersistence();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TransformPers::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_Structure::SetMutable(bool theIsMutable)
{
	((::Graphic3d_Structure*)_NativeInstance)->SetMutable(theIsMutable);
}

bool Macad::Occt::Graphic3d_Structure::IsMutable()
{
	return ((::Graphic3d_Structure*)_NativeInstance)->IsMutable();
}

Macad::Occt::Graphic3d_TypeOfStructure Macad::Occt::Graphic3d_Structure::ComputeVisual()
{
	return (Macad::Occt::Graphic3d_TypeOfStructure)((::Graphic3d_Structure*)_NativeInstance)->ComputeVisual();
}

void Macad::Occt::Graphic3d_Structure::GraphicClear(bool WithDestruction)
{
	((::Graphic3d_Structure*)_NativeInstance)->GraphicClear(WithDestruction);
}

void Macad::Occt::Graphic3d_Structure::GraphicConnect(Macad::Occt::Graphic3d_Structure^ theDaughter)
{
	Handle(::Graphic3d_Structure) h_theDaughter = theDaughter->NativeInstance;
	((::Graphic3d_Structure*)_NativeInstance)->GraphicConnect(h_theDaughter);
	theDaughter->NativeInstance = h_theDaughter.get();
}

void Macad::Occt::Graphic3d_Structure::GraphicDisconnect(Macad::Occt::Graphic3d_Structure^ theDaughter)
{
	Handle(::Graphic3d_Structure) h_theDaughter = theDaughter->NativeInstance;
	((::Graphic3d_Structure*)_NativeInstance)->GraphicDisconnect(h_theDaughter);
	theDaughter->NativeInstance = h_theDaughter.get();
}

void Macad::Occt::Graphic3d_Structure::GraphicTransform(Macad::Occt::TopLoc_Datum3D^ theTrsf)
{
	Handle(::TopLoc_Datum3D) h_theTrsf = theTrsf->NativeInstance;
	((::Graphic3d_Structure*)_NativeInstance)->GraphicTransform(h_theTrsf);
	theTrsf->NativeInstance = h_theTrsf.get();
}

int Macad::Occt::Graphic3d_Structure::Identification()
{
	return ((::Graphic3d_Structure*)_NativeInstance)->Identification();
}

void Macad::Occt::Graphic3d_Structure::PrintNetwork(Macad::Occt::Graphic3d_Structure^ AStructure, Macad::Occt::Graphic3d_TypeOfConnection AType)
{
	Handle(::Graphic3d_Structure) h_AStructure = AStructure->NativeInstance;
	::Graphic3d_Structure::PrintNetwork(h_AStructure, (::Graphic3d_TypeOfConnection)AType);
	AStructure->NativeInstance = h_AStructure.get();
}

void Macad::Occt::Graphic3d_Structure::Remove(Macad::Occt::Graphic3d_Structure^ thePtr, Macad::Occt::Graphic3d_TypeOfConnection theType)
{
	((::Graphic3d_Structure*)_NativeInstance)->Remove((::Graphic3d_Structure*)thePtr->NativeInstance, (::Graphic3d_TypeOfConnection)theType);
}

void Macad::Occt::Graphic3d_Structure::SetComputeVisual(Macad::Occt::Graphic3d_TypeOfStructure theVisual)
{
	((::Graphic3d_Structure*)_NativeInstance)->SetComputeVisual((::Graphic3d_TypeOfStructure)theVisual);
}

void Macad::Occt::Graphic3d_Structure::Transforms(Macad::Occt::Trsf theTrsf, double theX, double theY, double theZ, double% theNewX, double% theNewY, double% theNewZ)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	pin_ptr<double> pp_theNewX = &theNewX;
	pin_ptr<double> pp_theNewY = &theNewY;
	pin_ptr<double> pp_theNewZ = &theNewZ;
	::Graphic3d_Structure::Transforms(*(gp_Trsf*)pp_theTrsf, theX, theY, theZ, *(Standard_Real*)pp_theNewX, *(Standard_Real*)pp_theNewY, *(Standard_Real*)pp_theNewZ);
}

Macad::Occt::Graphic3d_CStructure^ Macad::Occt::Graphic3d_Structure::CStructure()
{
	Handle(::Graphic3d_CStructure) _result;
	_result = ((::Graphic3d_Structure*)_NativeInstance)->CStructure();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_CStructure::CreateDowncasted( _result.get());
}


Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_Structure::CreateDowncasted(::Graphic3d_Structure* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Prs3d_PresentationShadow)))
		return Macad::Occt::Prs3d_PresentationShadow::CreateDowncasted((::Prs3d_PresentationShadow*)instance);

	return gcnew Macad::Occt::Graphic3d_Structure( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Text
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Text::Graphic3d_Text(float theHeight)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Text(theHeight);
}

Macad::Occt::Graphic3d_Text::Graphic3d_Text(Macad::Occt::Graphic3d_Text^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Text(*(::Graphic3d_Text*)parameter1->NativeInstance);
}

void Macad::Occt::Graphic3d_Text::SetText(Macad::Occt::TCollection_AsciiString^ theText)
{
	((::Graphic3d_Text*)_NativeInstance)->SetText(*(::TCollection_AsciiString*)theText->NativeInstance);
}

void Macad::Occt::Graphic3d_Text::SetText(System::String^ theText)
{
	const char* sz_theText = (char*)(void*)Marshal::StringToHGlobalAnsi(theText);
	((::Graphic3d_Text*)_NativeInstance)->SetText(sz_theText);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theText);
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_Text::Position()
{
	return Macad::Occt::Pnt(((::Graphic3d_Text*)_NativeInstance)->Position());
}

void Macad::Occt::Graphic3d_Text::SetPosition(Macad::Occt::Pnt thePoint)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	((::Graphic3d_Text*)_NativeInstance)->SetPosition(*(gp_Pnt*)pp_thePoint);
}

Macad::Occt::Ax2 Macad::Occt::Graphic3d_Text::Orientation()
{
	return Macad::Occt::Ax2(((::Graphic3d_Text*)_NativeInstance)->Orientation());
}

bool Macad::Occt::Graphic3d_Text::HasPlane()
{
	return ((::Graphic3d_Text*)_NativeInstance)->HasPlane();
}

void Macad::Occt::Graphic3d_Text::SetOrientation(Macad::Occt::Ax2 theOrientation)
{
	pin_ptr<Macad::Occt::Ax2> pp_theOrientation = &theOrientation;
	((::Graphic3d_Text*)_NativeInstance)->SetOrientation(*(gp_Ax2*)pp_theOrientation);
}

void Macad::Occt::Graphic3d_Text::ResetOrientation()
{
	((::Graphic3d_Text*)_NativeInstance)->ResetOrientation();
}

bool Macad::Occt::Graphic3d_Text::HasOwnAnchorPoint()
{
	return ((::Graphic3d_Text*)_NativeInstance)->HasOwnAnchorPoint();
}

void Macad::Occt::Graphic3d_Text::SetOwnAnchorPoint(bool theHasOwnAnchor)
{
	((::Graphic3d_Text*)_NativeInstance)->SetOwnAnchorPoint(theHasOwnAnchor);
}

float Macad::Occt::Graphic3d_Text::Height()
{
	return ((::Graphic3d_Text*)_NativeInstance)->Height();
}

void Macad::Occt::Graphic3d_Text::SetHeight(float theHeight)
{
	((::Graphic3d_Text*)_NativeInstance)->SetHeight(theHeight);
}

Macad::Occt::Graphic3d_HorizontalTextAlignment Macad::Occt::Graphic3d_Text::HorizontalAlignment()
{
	return (Macad::Occt::Graphic3d_HorizontalTextAlignment)((::Graphic3d_Text*)_NativeInstance)->HorizontalAlignment();
}

void Macad::Occt::Graphic3d_Text::SetHorizontalAlignment(Macad::Occt::Graphic3d_HorizontalTextAlignment theJustification)
{
	((::Graphic3d_Text*)_NativeInstance)->SetHorizontalAlignment((::Graphic3d_HorizontalTextAlignment)theJustification);
}

Macad::Occt::Graphic3d_VerticalTextAlignment Macad::Occt::Graphic3d_Text::VerticalAlignment()
{
	return (Macad::Occt::Graphic3d_VerticalTextAlignment)((::Graphic3d_Text*)_NativeInstance)->VerticalAlignment();
}

void Macad::Occt::Graphic3d_Text::SetVerticalAlignment(Macad::Occt::Graphic3d_VerticalTextAlignment theJustification)
{
	((::Graphic3d_Text*)_NativeInstance)->SetVerticalAlignment((::Graphic3d_VerticalTextAlignment)theJustification);
}


Macad::Occt::Graphic3d_Text^ Macad::Occt::Graphic3d_Text::CreateDowncasted(::Graphic3d_Text* instance)
{
	return gcnew Macad::Occt::Graphic3d_Text( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Group
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Group::Graphic3d_Group(Macad::Occt::Graphic3d_Group^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::Graphic3d_Group::Clear(bool theUpdateStructureMgr)
{
	((::Graphic3d_Group*)_NativeInstance)->Clear(theUpdateStructureMgr);
}

void Macad::Occt::Graphic3d_Group::Clear()
{
	((::Graphic3d_Group*)_NativeInstance)->Clear(true);
}

void Macad::Occt::Graphic3d_Group::Remove()
{
	((::Graphic3d_Group*)_NativeInstance)->Remove();
}

Macad::Occt::Graphic3d_Aspects^ Macad::Occt::Graphic3d_Group::Aspects()
{
	Handle(::Graphic3d_Aspects) _result;
	_result = ((::Graphic3d_Group*)_NativeInstance)->Aspects();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Aspects::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_Group::SetGroupPrimitivesAspect(Macad::Occt::Graphic3d_Aspects^ theAspect)
{
	Handle(::Graphic3d_Aspects) h_theAspect = theAspect->NativeInstance;
	((::Graphic3d_Group*)_NativeInstance)->SetGroupPrimitivesAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

void Macad::Occt::Graphic3d_Group::SetPrimitivesAspect(Macad::Occt::Graphic3d_Aspects^ theAspect)
{
	Handle(::Graphic3d_Aspects) h_theAspect = theAspect->NativeInstance;
	((::Graphic3d_Group*)_NativeInstance)->SetPrimitivesAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

void Macad::Occt::Graphic3d_Group::SynchronizeAspects()
{
	((::Graphic3d_Group*)_NativeInstance)->SynchronizeAspects();
}

void Macad::Occt::Graphic3d_Group::ReplaceAspects(Macad::Occt::Graphic3d_MapOfAspectsToAspects^ theMap)
{
	((::Graphic3d_Group*)_NativeInstance)->ReplaceAspects(*(::Graphic3d_MapOfAspectsToAspects*)theMap->NativeInstance);
}

void Macad::Occt::Graphic3d_Group::AddText(Macad::Occt::Graphic3d_Text^ theTextParams, bool theToEvalMinMax)
{
	Handle(::Graphic3d_Text) h_theTextParams = theTextParams->NativeInstance;
	((::Graphic3d_Group*)_NativeInstance)->AddText(h_theTextParams, theToEvalMinMax);
	theTextParams->NativeInstance = h_theTextParams.get();
}

void Macad::Occt::Graphic3d_Group::AddText(Macad::Occt::Graphic3d_Text^ theTextParams)
{
	Handle(::Graphic3d_Text) h_theTextParams = theTextParams->NativeInstance;
	((::Graphic3d_Group*)_NativeInstance)->AddText(h_theTextParams, true);
	theTextParams->NativeInstance = h_theTextParams.get();
}

void Macad::Occt::Graphic3d_Group::AddPrimitiveArray(Macad::Occt::Graphic3d_ArrayOfPrimitives^ thePrim, bool theToEvalMinMax)
{
	Handle(::Graphic3d_ArrayOfPrimitives) h_thePrim = thePrim->NativeInstance;
	((::Graphic3d_Group*)_NativeInstance)->AddPrimitiveArray(h_thePrim, theToEvalMinMax);
	thePrim->NativeInstance = h_thePrim.get();
}

void Macad::Occt::Graphic3d_Group::AddPrimitiveArray(Macad::Occt::Graphic3d_ArrayOfPrimitives^ thePrim)
{
	Handle(::Graphic3d_ArrayOfPrimitives) h_thePrim = thePrim->NativeInstance;
	((::Graphic3d_Group*)_NativeInstance)->AddPrimitiveArray(h_thePrim, true);
	thePrim->NativeInstance = h_thePrim.get();
}

void Macad::Occt::Graphic3d_Group::SetStencilTestOptions(bool theIsEnabled)
{
	((::Graphic3d_Group*)_NativeInstance)->SetStencilTestOptions(theIsEnabled);
}

void Macad::Occt::Graphic3d_Group::SetFlippingOptions(bool theIsEnabled, Macad::Occt::Ax2 theRefPlane)
{
	pin_ptr<Macad::Occt::Ax2> pp_theRefPlane = &theRefPlane;
	((::Graphic3d_Group*)_NativeInstance)->SetFlippingOptions(theIsEnabled, *(gp_Ax2*)pp_theRefPlane);
}

bool Macad::Occt::Graphic3d_Group::ContainsFacet()
{
	return ((::Graphic3d_Group*)_NativeInstance)->ContainsFacet();
}

bool Macad::Occt::Graphic3d_Group::IsDeleted()
{
	return ((::Graphic3d_Group*)_NativeInstance)->IsDeleted();
}

bool Macad::Occt::Graphic3d_Group::IsEmpty()
{
	return ((::Graphic3d_Group*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::Graphic3d_Group::MinMaxValues(double% theXMin, double% theYMin, double% theZMin, double% theXMax, double% theYMax, double% theZMax)
{
	pin_ptr<double> pp_theXMin = &theXMin;
	pin_ptr<double> pp_theYMin = &theYMin;
	pin_ptr<double> pp_theZMin = &theZMin;
	pin_ptr<double> pp_theXMax = &theXMax;
	pin_ptr<double> pp_theYMax = &theYMax;
	pin_ptr<double> pp_theZMax = &theZMax;
	((::Graphic3d_Group*)_NativeInstance)->MinMaxValues(*(Standard_Real*)pp_theXMin, *(Standard_Real*)pp_theYMin, *(Standard_Real*)pp_theZMin, *(Standard_Real*)pp_theXMax, *(Standard_Real*)pp_theYMax, *(Standard_Real*)pp_theZMax);
}

void Macad::Occt::Graphic3d_Group::SetMinMaxValues(double theXMin, double theYMin, double theZMin, double theXMax, double theYMax, double theZMax)
{
	((::Graphic3d_Group*)_NativeInstance)->SetMinMaxValues(theXMin, theYMin, theZMin, theXMax, theYMax, theZMax);
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_Group::Structure()
{
	Handle(::Graphic3d_Structure) _result;
	_result = ((::Graphic3d_Group*)_NativeInstance)->Structure();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_Group::SetClosed(bool theIsClosed)
{
	((::Graphic3d_Group*)_NativeInstance)->SetClosed(theIsClosed);
}

bool Macad::Occt::Graphic3d_Group::IsClosed()
{
	return ((::Graphic3d_Group*)_NativeInstance)->IsClosed();
}

void Macad::Occt::Graphic3d_Group::Text(System::String^ theTextUtf, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA, bool theToEvalMinMax, bool theHasOwnAnchor)
{
	const char* sz_theTextUtf = (char*)(void*)Marshal::StringToHGlobalAnsi(theTextUtf);
	pin_ptr<Macad::Occt::Ax2> pp_theOrientation = &theOrientation;
	((::Graphic3d_Group*)_NativeInstance)->Text(sz_theTextUtf, *(gp_Ax2*)pp_theOrientation, theHeight, theAngle, (::Graphic3d_TextPath)theTp, (::Graphic3d_HorizontalTextAlignment)theHTA, (::Graphic3d_VerticalTextAlignment)theVTA, theToEvalMinMax, theHasOwnAnchor);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTextUtf);
}

void Macad::Occt::Graphic3d_Group::Text(System::String^ theTextUtf, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA, bool theToEvalMinMax)
{
	const char* sz_theTextUtf = (char*)(void*)Marshal::StringToHGlobalAnsi(theTextUtf);
	pin_ptr<Macad::Occt::Ax2> pp_theOrientation = &theOrientation;
	((::Graphic3d_Group*)_NativeInstance)->Text(sz_theTextUtf, *(gp_Ax2*)pp_theOrientation, theHeight, theAngle, (::Graphic3d_TextPath)theTp, (::Graphic3d_HorizontalTextAlignment)theHTA, (::Graphic3d_VerticalTextAlignment)theVTA, theToEvalMinMax, true);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTextUtf);
}

void Macad::Occt::Graphic3d_Group::Text(System::String^ theTextUtf, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA)
{
	const char* sz_theTextUtf = (char*)(void*)Marshal::StringToHGlobalAnsi(theTextUtf);
	pin_ptr<Macad::Occt::Ax2> pp_theOrientation = &theOrientation;
	((::Graphic3d_Group*)_NativeInstance)->Text(sz_theTextUtf, *(gp_Ax2*)pp_theOrientation, theHeight, theAngle, (::Graphic3d_TextPath)theTp, (::Graphic3d_HorizontalTextAlignment)theHTA, (::Graphic3d_VerticalTextAlignment)theVTA, true, true);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTextUtf);
}

void Macad::Occt::Graphic3d_Group::Text(Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA, bool theToEvalMinMax, bool theHasOwnAnchor)
{
	pin_ptr<Macad::Occt::Ax2> pp_theOrientation = &theOrientation;
	((::Graphic3d_Group*)_NativeInstance)->Text(*(::TCollection_ExtendedString*)theText->NativeInstance, *(gp_Ax2*)pp_theOrientation, theHeight, theAngle, (::Graphic3d_TextPath)theTp, (::Graphic3d_HorizontalTextAlignment)theHTA, (::Graphic3d_VerticalTextAlignment)theVTA, theToEvalMinMax, theHasOwnAnchor);
}

void Macad::Occt::Graphic3d_Group::Text(Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA, bool theToEvalMinMax)
{
	pin_ptr<Macad::Occt::Ax2> pp_theOrientation = &theOrientation;
	((::Graphic3d_Group*)_NativeInstance)->Text(*(::TCollection_ExtendedString*)theText->NativeInstance, *(gp_Ax2*)pp_theOrientation, theHeight, theAngle, (::Graphic3d_TextPath)theTp, (::Graphic3d_HorizontalTextAlignment)theHTA, (::Graphic3d_VerticalTextAlignment)theVTA, theToEvalMinMax, true);
}

void Macad::Occt::Graphic3d_Group::Text(Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA)
{
	pin_ptr<Macad::Occt::Ax2> pp_theOrientation = &theOrientation;
	((::Graphic3d_Group*)_NativeInstance)->Text(*(::TCollection_ExtendedString*)theText->NativeInstance, *(gp_Ax2*)pp_theOrientation, theHeight, theAngle, (::Graphic3d_TextPath)theTp, (::Graphic3d_HorizontalTextAlignment)theHTA, (::Graphic3d_VerticalTextAlignment)theVTA, true, true);
}


Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_Group::CreateDowncasted(::Graphic3d_Group* instance)
{
	return gcnew Macad::Occt::Graphic3d_Group( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_PresentationAttributes
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_PresentationAttributes::Graphic3d_PresentationAttributes()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_PresentationAttributes();
}

Macad::Occt::Graphic3d_PresentationAttributes::Graphic3d_PresentationAttributes(Macad::Occt::Graphic3d_PresentationAttributes^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_PresentationAttributes(*(::Graphic3d_PresentationAttributes*)parameter1->NativeInstance);
}

Macad::Occt::Aspect_TypeOfHighlightMethod Macad::Occt::Graphic3d_PresentationAttributes::Method()
{
	return (Macad::Occt::Aspect_TypeOfHighlightMethod)((::Graphic3d_PresentationAttributes*)_NativeInstance)->Method();
}

void Macad::Occt::Graphic3d_PresentationAttributes::SetMethod(Macad::Occt::Aspect_TypeOfHighlightMethod theMethod)
{
	((::Graphic3d_PresentationAttributes*)_NativeInstance)->SetMethod((::Aspect_TypeOfHighlightMethod)theMethod);
}

Macad::Occt::Quantity_ColorRGBA^ Macad::Occt::Graphic3d_PresentationAttributes::ColorRGBA()
{
	::Quantity_ColorRGBA* _result = new ::Quantity_ColorRGBA();
	*_result =  (::Quantity_ColorRGBA)((::Graphic3d_PresentationAttributes*)_NativeInstance)->ColorRGBA();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_ColorRGBA(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_PresentationAttributes::Color()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Graphic3d_PresentationAttributes*)_NativeInstance)->Color();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_PresentationAttributes::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_PresentationAttributes*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

float Macad::Occt::Graphic3d_PresentationAttributes::Transparency()
{
	return ((::Graphic3d_PresentationAttributes*)_NativeInstance)->Transparency();
}

void Macad::Occt::Graphic3d_PresentationAttributes::SetTransparency(float theTranspCoef)
{
	((::Graphic3d_PresentationAttributes*)_NativeInstance)->SetTransparency(theTranspCoef);
}

int Macad::Occt::Graphic3d_PresentationAttributes::ZLayer()
{
	return ((::Graphic3d_PresentationAttributes*)_NativeInstance)->ZLayer();
}

void Macad::Occt::Graphic3d_PresentationAttributes::SetZLayer(int theLayer)
{
	((::Graphic3d_PresentationAttributes*)_NativeInstance)->SetZLayer(theLayer);
}

int Macad::Occt::Graphic3d_PresentationAttributes::DisplayMode()
{
	return ((::Graphic3d_PresentationAttributes*)_NativeInstance)->DisplayMode();
}

void Macad::Occt::Graphic3d_PresentationAttributes::SetDisplayMode(int theMode)
{
	((::Graphic3d_PresentationAttributes*)_NativeInstance)->SetDisplayMode(theMode);
}

Macad::Occt::Graphic3d_AspectFillArea3d^ Macad::Occt::Graphic3d_PresentationAttributes::BasicFillAreaAspect()
{
	Handle(::Graphic3d_AspectFillArea3d) _result;
	_result = ((::Graphic3d_PresentationAttributes*)_NativeInstance)->BasicFillAreaAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_AspectFillArea3d::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_PresentationAttributes::SetBasicFillAreaAspect(Macad::Occt::Graphic3d_AspectFillArea3d^ theAspect)
{
	Handle(::Graphic3d_AspectFillArea3d) h_theAspect = theAspect->NativeInstance;
	((::Graphic3d_PresentationAttributes*)_NativeInstance)->SetBasicFillAreaAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}


Macad::Occt::Graphic3d_PresentationAttributes^ Macad::Occt::Graphic3d_PresentationAttributes::CreateDowncasted(::Graphic3d_PresentationAttributes* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Prs3d_Drawer)))
		return Macad::Occt::Prs3d_Drawer::CreateDowncasted((::Prs3d_Drawer*)instance);

	return gcnew Macad::Occt::Graphic3d_PresentationAttributes( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_SequenceOfHClipPlane
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_SequenceOfHClipPlane::Graphic3d_SequenceOfHClipPlane()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_SequenceOfHClipPlane();
}

Macad::Occt::Graphic3d_SequenceOfHClipPlane::Graphic3d_SequenceOfHClipPlane(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_SequenceOfHClipPlane(*(::Graphic3d_SequenceOfHClipPlane*)parameter1->NativeInstance);
}

bool Macad::Occt::Graphic3d_SequenceOfHClipPlane::ToOverrideGlobal()
{
	return ((::Graphic3d_SequenceOfHClipPlane*)_NativeInstance)->ToOverrideGlobal();
}

void Macad::Occt::Graphic3d_SequenceOfHClipPlane::SetOverrideGlobal(bool theToOverride)
{
	((::Graphic3d_SequenceOfHClipPlane*)_NativeInstance)->SetOverrideGlobal(theToOverride);
}

bool Macad::Occt::Graphic3d_SequenceOfHClipPlane::IsEmpty()
{
	return ((::Graphic3d_SequenceOfHClipPlane*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::Graphic3d_SequenceOfHClipPlane::Size()
{
	return ((::Graphic3d_SequenceOfHClipPlane*)_NativeInstance)->Size();
}

bool Macad::Occt::Graphic3d_SequenceOfHClipPlane::Append(Macad::Occt::Graphic3d_ClipPlane^ theItem)
{
	Handle(::Graphic3d_ClipPlane) h_theItem = theItem->NativeInstance;
	return ((::Graphic3d_SequenceOfHClipPlane*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

bool Macad::Occt::Graphic3d_SequenceOfHClipPlane::Remove(Macad::Occt::Graphic3d_ClipPlane^ theItem)
{
	Handle(::Graphic3d_ClipPlane) h_theItem = theItem->NativeInstance;
	return ((::Graphic3d_SequenceOfHClipPlane*)_NativeInstance)->Remove(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Graphic3d_SequenceOfHClipPlane::Clear()
{
	((::Graphic3d_SequenceOfHClipPlane*)_NativeInstance)->Clear();
}

Macad::Occt::Graphic3d_ClipPlane^ Macad::Occt::Graphic3d_SequenceOfHClipPlane::First()
{
	Handle(::Graphic3d_ClipPlane) _result;
	_result = ((::Graphic3d_SequenceOfHClipPlane*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ClipPlane::CreateDowncasted( _result.get());
}


Macad::Occt::Graphic3d_SequenceOfHClipPlane^ Macad::Occt::Graphic3d_SequenceOfHClipPlane::CreateDowncasted(::Graphic3d_SequenceOfHClipPlane* instance)
{
	return gcnew Macad::Occt::Graphic3d_SequenceOfHClipPlane( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ViewAffinity
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ViewAffinity::Graphic3d_ViewAffinity()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ViewAffinity();
}

Macad::Occt::Graphic3d_ViewAffinity::Graphic3d_ViewAffinity(Macad::Occt::Graphic3d_ViewAffinity^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_ViewAffinity(*(::Graphic3d_ViewAffinity*)parameter1->NativeInstance);
}

bool Macad::Occt::Graphic3d_ViewAffinity::IsVisible(int theViewId)
{
	return ((::Graphic3d_ViewAffinity*)_NativeInstance)->IsVisible(theViewId);
}

void Macad::Occt::Graphic3d_ViewAffinity::SetVisible(bool theIsVisible)
{
	((::Graphic3d_ViewAffinity*)_NativeInstance)->SetVisible(theIsVisible);
}

void Macad::Occt::Graphic3d_ViewAffinity::SetVisible(int theViewId, bool theIsVisible)
{
	((::Graphic3d_ViewAffinity*)_NativeInstance)->SetVisible(theViewId, theIsVisible);
}


Macad::Occt::Graphic3d_ViewAffinity^ Macad::Occt::Graphic3d_ViewAffinity::CreateDowncasted(::Graphic3d_ViewAffinity* instance)
{
	return gcnew Macad::Occt::Graphic3d_ViewAffinity( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_TransformPers
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_TransformPers::Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_TransformPers((::Graphic3d_TransModeFlags)theMode);
}

Macad::Occt::Graphic3d_TransformPers::Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Pnt thePnt)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	NativeInstance = new ::Graphic3d_TransformPers((::Graphic3d_TransModeFlags)theMode, *(gp_Pnt*)pp_thePnt);
}

Macad::Occt::Graphic3d_TransformPers::Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Aspect_TypeOfTriedronPosition theCorner, Macad::Occt::Graphic3d_Vec2i^ theOffset)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_TransformPers((::Graphic3d_TransModeFlags)theMode, (::Aspect_TypeOfTriedronPosition)theCorner, *(::Graphic3d_Vec2i*)theOffset->NativeInstance);
}

Macad::Occt::Graphic3d_TransformPers::Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Aspect_TypeOfTriedronPosition theCorner)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_TransformPers((::Graphic3d_TransModeFlags)theMode, (::Aspect_TypeOfTriedronPosition)theCorner, ::Graphic3d_Vec2i(0, 0));
}

Macad::Occt::Graphic3d_TransformPers::Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransformPers^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_TransformPers(*(::Graphic3d_TransformPers*)parameter1->NativeInstance);
}

bool Macad::Occt::Graphic3d_TransformPers::IsZoomOrRotate(Macad::Occt::Graphic3d_TransModeFlags theMode)
{
	return ::Graphic3d_TransformPers::IsZoomOrRotate((::Graphic3d_TransModeFlags)theMode);
}

bool Macad::Occt::Graphic3d_TransformPers::IsTrihedronOr2d(Macad::Occt::Graphic3d_TransModeFlags theMode)
{
	return ::Graphic3d_TransformPers::IsTrihedronOr2d((::Graphic3d_TransModeFlags)theMode);
}

Macad::Occt::Graphic3d_TransformPers^ Macad::Occt::Graphic3d_TransformPers::FromDeprecatedParams(Macad::Occt::Graphic3d_TransModeFlags theFlag, Macad::Occt::Pnt thePoint)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	Handle(::Graphic3d_TransformPers) _result;
	_result = ::Graphic3d_TransformPers::FromDeprecatedParams((::Graphic3d_TransModeFlags)theFlag, *(gp_Pnt*)pp_thePoint);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TransformPers::CreateDowncasted( _result.get());
}

bool Macad::Occt::Graphic3d_TransformPers::IsZoomOrRotate()
{
	return ((::Graphic3d_TransformPers*)_NativeInstance)->IsZoomOrRotate();
}

bool Macad::Occt::Graphic3d_TransformPers::IsTrihedronOr2d()
{
	return ((::Graphic3d_TransformPers*)_NativeInstance)->IsTrihedronOr2d();
}

Macad::Occt::Graphic3d_TransModeFlags Macad::Occt::Graphic3d_TransformPers::Mode()
{
	return (Macad::Occt::Graphic3d_TransModeFlags)((::Graphic3d_TransformPers*)_NativeInstance)->Mode();
}

Macad::Occt::Graphic3d_TransModeFlags Macad::Occt::Graphic3d_TransformPers::Flags()
{
	return (Macad::Occt::Graphic3d_TransModeFlags)((::Graphic3d_TransformPers*)_NativeInstance)->Flags();
}

void Macad::Occt::Graphic3d_TransformPers::SetPersistence(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Pnt thePnt)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	((::Graphic3d_TransformPers*)_NativeInstance)->SetPersistence((::Graphic3d_TransModeFlags)theMode, *(gp_Pnt*)pp_thePnt);
}

void Macad::Occt::Graphic3d_TransformPers::SetPersistence(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Aspect_TypeOfTriedronPosition theCorner, Macad::Occt::Graphic3d_Vec2i^ theOffset)
{
	((::Graphic3d_TransformPers*)_NativeInstance)->SetPersistence((::Graphic3d_TransModeFlags)theMode, (::Aspect_TypeOfTriedronPosition)theCorner, *(::Graphic3d_Vec2i*)theOffset->NativeInstance);
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_TransformPers::AnchorPoint()
{
	return Macad::Occt::Pnt(((::Graphic3d_TransformPers*)_NativeInstance)->AnchorPoint());
}

void Macad::Occt::Graphic3d_TransformPers::SetAnchorPoint(Macad::Occt::Pnt thePnt)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	((::Graphic3d_TransformPers*)_NativeInstance)->SetAnchorPoint(*(gp_Pnt*)pp_thePnt);
}

Macad::Occt::Aspect_TypeOfTriedronPosition Macad::Occt::Graphic3d_TransformPers::Corner2d()
{
	return (Macad::Occt::Aspect_TypeOfTriedronPosition)((::Graphic3d_TransformPers*)_NativeInstance)->Corner2d();
}

void Macad::Occt::Graphic3d_TransformPers::SetCorner2d(Macad::Occt::Aspect_TypeOfTriedronPosition thePos)
{
	((::Graphic3d_TransformPers*)_NativeInstance)->SetCorner2d((::Aspect_TypeOfTriedronPosition)thePos);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_TransformPers::Offset2d()
{
	::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i(0);
	*_result = ((::Graphic3d_TransformPers*)_NativeInstance)->Offset2d();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

void Macad::Occt::Graphic3d_TransformPers::SetOffset2d(Macad::Occt::Graphic3d_Vec2i^ theOffset)
{
	((::Graphic3d_TransformPers*)_NativeInstance)->SetOffset2d(*(::Graphic3d_Vec2i*)theOffset->NativeInstance);
}


Macad::Occt::Graphic3d_TransformPers^ Macad::Occt::Graphic3d_TransformPers::CreateDowncasted(::Graphic3d_TransformPers* instance)
{
	return gcnew Macad::Occt::Graphic3d_TransformPers( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_GraphicDriver
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_GraphicDriver::Graphic3d_GraphicDriver(Macad::Occt::Graphic3d_GraphicDriver^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

int Macad::Occt::Graphic3d_GraphicDriver::InquireLimit(Macad::Occt::Graphic3d_TypeOfLimit theType)
{
	return ((::Graphic3d_GraphicDriver*)_NativeInstance)->InquireLimit((::Graphic3d_TypeOfLimit)theType);
}

int Macad::Occt::Graphic3d_GraphicDriver::InquireLightLimit()
{
	return ((::Graphic3d_GraphicDriver*)_NativeInstance)->InquireLightLimit();
}

int Macad::Occt::Graphic3d_GraphicDriver::InquirePlaneLimit()
{
	return ((::Graphic3d_GraphicDriver*)_NativeInstance)->InquirePlaneLimit();
}

int Macad::Occt::Graphic3d_GraphicDriver::InquireViewLimit()
{
	return ((::Graphic3d_GraphicDriver*)_NativeInstance)->InquireViewLimit();
}

Macad::Occt::Graphic3d_CStructure^ Macad::Occt::Graphic3d_GraphicDriver::CreateStructure(Macad::Occt::Graphic3d_StructureManager^ theManager)
{
	Handle(::Graphic3d_StructureManager) h_theManager = theManager->NativeInstance;
	Handle(::Graphic3d_CStructure) _result;
	_result = ((::Graphic3d_GraphicDriver*)_NativeInstance)->CreateStructure(h_theManager);
	theManager->NativeInstance = h_theManager.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_CStructure::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_GraphicDriver::RemoveStructure(Macad::Occt::Graphic3d_CStructure^ theCStructure)
{
	Handle(::Graphic3d_CStructure) h_theCStructure = theCStructure->NativeInstance;
	((::Graphic3d_GraphicDriver*)_NativeInstance)->RemoveStructure(h_theCStructure);
	theCStructure->NativeInstance = h_theCStructure.get();
}

Macad::Occt::Graphic3d_CView^ Macad::Occt::Graphic3d_GraphicDriver::CreateView(Macad::Occt::Graphic3d_StructureManager^ theMgr)
{
	Handle(::Graphic3d_StructureManager) h_theMgr = theMgr->NativeInstance;
	Handle(::Graphic3d_CView) _result;
	_result = ((::Graphic3d_GraphicDriver*)_NativeInstance)->CreateView(h_theMgr);
	theMgr->NativeInstance = h_theMgr.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_CView::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_GraphicDriver::RemoveView(Macad::Occt::Graphic3d_CView^ theView)
{
	Handle(::Graphic3d_CView) h_theView = theView->NativeInstance;
	((::Graphic3d_GraphicDriver*)_NativeInstance)->RemoveView(h_theView);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::Graphic3d_GraphicDriver::EnableVBO(bool status)
{
	((::Graphic3d_GraphicDriver*)_NativeInstance)->EnableVBO(status);
}

bool Macad::Occt::Graphic3d_GraphicDriver::MemoryInfo(size_t% theFreeBytes, Macad::Occt::TCollection_AsciiString^ theInfo)
{
	pin_ptr<size_t> pp_theFreeBytes = &theFreeBytes;
	return ((::Graphic3d_GraphicDriver*)_NativeInstance)->MemoryInfo(*(Standard_Size*)pp_theFreeBytes, *(::TCollection_AsciiString*)theInfo->NativeInstance);
}

float Macad::Occt::Graphic3d_GraphicDriver::DefaultTextHeight()
{
	return ((::Graphic3d_GraphicDriver*)_NativeInstance)->DefaultTextHeight();
}

void Macad::Occt::Graphic3d_GraphicDriver::TextSize(Macad::Occt::Graphic3d_CView^ theView, System::String^ theText, float theHeight, float% theWidth, float% theAscent, float% theDescent)
{
	Handle(::Graphic3d_CView) h_theView = theView->NativeInstance;
	const char* sz_theText = (char*)(void*)Marshal::StringToHGlobalAnsi(theText);
	pin_ptr<float> pp_theWidth = &theWidth;
	pin_ptr<float> pp_theAscent = &theAscent;
	pin_ptr<float> pp_theDescent = &theDescent;
	((::Graphic3d_GraphicDriver*)_NativeInstance)->TextSize(h_theView, sz_theText, theHeight, *(Standard_ShortReal*)pp_theWidth, *(Standard_ShortReal*)pp_theAscent, *(Standard_ShortReal*)pp_theDescent);
	theView->NativeInstance = h_theView.get();
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theText);
}

void Macad::Occt::Graphic3d_GraphicDriver::InsertLayerBefore(int theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerAfter)
{
	((::Graphic3d_GraphicDriver*)_NativeInstance)->InsertLayerBefore(theNewLayerId, *(::Graphic3d_ZLayerSettings*)theSettings->NativeInstance, theLayerAfter);
}

void Macad::Occt::Graphic3d_GraphicDriver::InsertLayerAfter(int theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerBefore)
{
	((::Graphic3d_GraphicDriver*)_NativeInstance)->InsertLayerAfter(theNewLayerId, *(::Graphic3d_ZLayerSettings*)theSettings->NativeInstance, theLayerBefore);
}

void Macad::Occt::Graphic3d_GraphicDriver::RemoveZLayer(int theLayerId)
{
	((::Graphic3d_GraphicDriver*)_NativeInstance)->RemoveZLayer(theLayerId);
}

void Macad::Occt::Graphic3d_GraphicDriver::ZLayers(Macad::Occt::TColStd_SequenceOfInteger^ theLayerSeq)
{
	((::Graphic3d_GraphicDriver*)_NativeInstance)->ZLayers(*(::TColStd_SequenceOfInteger*)theLayerSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_GraphicDriver::SetZLayerSettings(int theLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings)
{
	((::Graphic3d_GraphicDriver*)_NativeInstance)->SetZLayerSettings(theLayerId, *(::Graphic3d_ZLayerSettings*)theSettings->NativeInstance);
}

Macad::Occt::Graphic3d_ZLayerSettings^ Macad::Occt::Graphic3d_GraphicDriver::ZLayerSettings(int theLayerId)
{
	::Graphic3d_ZLayerSettings* _result = new ::Graphic3d_ZLayerSettings();
	*_result =  (::Graphic3d_ZLayerSettings)((::Graphic3d_GraphicDriver*)_NativeInstance)->ZLayerSettings(theLayerId);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ZLayerSettings(_result);
}

bool Macad::Occt::Graphic3d_GraphicDriver::ViewExists(Macad::Occt::Aspect_Window^ theWindow, Macad::Occt::Graphic3d_CView^ theView)
{
	Handle(::Aspect_Window) h_theWindow = theWindow->NativeInstance;
	Handle(::Graphic3d_CView) h_theView = theView->NativeInstance;
	return ((::Graphic3d_GraphicDriver*)_NativeInstance)->ViewExists(h_theWindow, h_theView);
	theWindow->NativeInstance = h_theWindow.get();
	theView->NativeInstance = h_theView.get();
}

Macad::Occt::Aspect_DisplayConnection^ Macad::Occt::Graphic3d_GraphicDriver::GetDisplayConnection()
{
	Handle(::Aspect_DisplayConnection) _result;
	_result = ((::Graphic3d_GraphicDriver*)_NativeInstance)->GetDisplayConnection();
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_DisplayConnection::CreateDowncasted( _result.get());
}

int Macad::Occt::Graphic3d_GraphicDriver::NewIdentification()
{
	return ((::Graphic3d_GraphicDriver*)_NativeInstance)->NewIdentification();
}

void Macad::Occt::Graphic3d_GraphicDriver::RemoveIdentification(int theId)
{
	((::Graphic3d_GraphicDriver*)_NativeInstance)->RemoveIdentification(theId);
}


Macad::Occt::Graphic3d_GraphicDriver^ Macad::Occt::Graphic3d_GraphicDriver::CreateDowncasted(::Graphic3d_GraphicDriver* instance)
{
	return gcnew Macad::Occt::Graphic3d_GraphicDriver( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_StructureManager
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_StructureManager::Graphic3d_StructureManager(Macad::Occt::Graphic3d_GraphicDriver^ theDriver)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::Graphic3d_GraphicDriver) h_theDriver = theDriver->NativeInstance;
	NativeInstance = new ::Graphic3d_StructureManager(h_theDriver);
	theDriver->NativeInstance = h_theDriver.get();
}

Macad::Occt::Graphic3d_StructureManager::Graphic3d_StructureManager(Macad::Occt::Graphic3d_StructureManager^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_StructureManager(*(::Graphic3d_StructureManager*)parameter1->NativeInstance);
}

void Macad::Occt::Graphic3d_StructureManager::Update(int theLayerId)
{
	((::Graphic3d_StructureManager*)_NativeInstance)->Update(theLayerId);
}

void Macad::Occt::Graphic3d_StructureManager::Update()
{
	((::Graphic3d_StructureManager*)_NativeInstance)->Update(Graphic3d_ZLayerId_UNKNOWN);
}

void Macad::Occt::Graphic3d_StructureManager::Remove()
{
	((::Graphic3d_StructureManager*)_NativeInstance)->Remove();
}

void Macad::Occt::Graphic3d_StructureManager::Erase()
{
	((::Graphic3d_StructureManager*)_NativeInstance)->Erase();
}

void Macad::Occt::Graphic3d_StructureManager::DisplayedStructures(Macad::Occt::Graphic3d_MapOfStructure^ SG)
{
	((::Graphic3d_StructureManager*)_NativeInstance)->DisplayedStructures(*(::Graphic3d_MapOfStructure*)SG->NativeInstance);
}

void Macad::Occt::Graphic3d_StructureManager::HighlightedStructures(Macad::Occt::Graphic3d_MapOfStructure^ SG)
{
	((::Graphic3d_StructureManager*)_NativeInstance)->HighlightedStructures(*(::Graphic3d_MapOfStructure*)SG->NativeInstance);
}

void Macad::Occt::Graphic3d_StructureManager::ReCompute(Macad::Occt::Graphic3d_Structure^ theStructure)
{
	Handle(::Graphic3d_Structure) h_theStructure = theStructure->NativeInstance;
	((::Graphic3d_StructureManager*)_NativeInstance)->ReCompute(h_theStructure);
	theStructure->NativeInstance = h_theStructure.get();
}

void Macad::Occt::Graphic3d_StructureManager::ReCompute(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::Graphic3d_DataStructureManager^ theProjector)
{
	Handle(::Graphic3d_Structure) h_theStructure = theStructure->NativeInstance;
	Handle(::Graphic3d_DataStructureManager) h_theProjector = theProjector->NativeInstance;
	((::Graphic3d_StructureManager*)_NativeInstance)->ReCompute(h_theStructure, h_theProjector);
	theStructure->NativeInstance = h_theStructure.get();
	theProjector->NativeInstance = h_theProjector.get();
}

void Macad::Occt::Graphic3d_StructureManager::Clear(Macad::Occt::Graphic3d_Structure^ theStructure, bool theWithDestruction)
{
	((::Graphic3d_StructureManager*)_NativeInstance)->Clear((::Graphic3d_Structure*)theStructure->NativeInstance, theWithDestruction);
}

void Macad::Occt::Graphic3d_StructureManager::Connect(Macad::Occt::Graphic3d_Structure^ theMother, Macad::Occt::Graphic3d_Structure^ theDaughter)
{
	((::Graphic3d_StructureManager*)_NativeInstance)->Connect((::Graphic3d_Structure*)theMother->NativeInstance, (::Graphic3d_Structure*)theDaughter->NativeInstance);
}

void Macad::Occt::Graphic3d_StructureManager::Disconnect(Macad::Occt::Graphic3d_Structure^ theMother, Macad::Occt::Graphic3d_Structure^ theDaughter)
{
	((::Graphic3d_StructureManager*)_NativeInstance)->Disconnect((::Graphic3d_Structure*)theMother->NativeInstance, (::Graphic3d_Structure*)theDaughter->NativeInstance);
}

void Macad::Occt::Graphic3d_StructureManager::Display(Macad::Occt::Graphic3d_Structure^ theStructure)
{
	Handle(::Graphic3d_Structure) h_theStructure = theStructure->NativeInstance;
	((::Graphic3d_StructureManager*)_NativeInstance)->Display(h_theStructure);
	theStructure->NativeInstance = h_theStructure.get();
}

void Macad::Occt::Graphic3d_StructureManager::Erase(Macad::Occt::Graphic3d_Structure^ theStructure)
{
	Handle(::Graphic3d_Structure) h_theStructure = theStructure->NativeInstance;
	((::Graphic3d_StructureManager*)_NativeInstance)->Erase(h_theStructure);
	theStructure->NativeInstance = h_theStructure.get();
}

void Macad::Occt::Graphic3d_StructureManager::Highlight(Macad::Occt::Graphic3d_Structure^ theStructure)
{
	Handle(::Graphic3d_Structure) h_theStructure = theStructure->NativeInstance;
	((::Graphic3d_StructureManager*)_NativeInstance)->Highlight(h_theStructure);
	theStructure->NativeInstance = h_theStructure.get();
}

void Macad::Occt::Graphic3d_StructureManager::SetTransform(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::TopLoc_Datum3D^ theTrsf)
{
	Handle(::Graphic3d_Structure) h_theStructure = theStructure->NativeInstance;
	Handle(::TopLoc_Datum3D) h_theTrsf = theTrsf->NativeInstance;
	((::Graphic3d_StructureManager*)_NativeInstance)->SetTransform(h_theStructure, h_theTrsf);
	theStructure->NativeInstance = h_theStructure.get();
	theTrsf->NativeInstance = h_theTrsf.get();
}

void Macad::Occt::Graphic3d_StructureManager::ChangeDisplayPriority(Macad::Occt::Graphic3d_Structure^ theStructure, int theOldPriority, int theNewPriority)
{
	Handle(::Graphic3d_Structure) h_theStructure = theStructure->NativeInstance;
	((::Graphic3d_StructureManager*)_NativeInstance)->ChangeDisplayPriority(h_theStructure, theOldPriority, theNewPriority);
	theStructure->NativeInstance = h_theStructure.get();
}

void Macad::Occt::Graphic3d_StructureManager::ChangeZLayer(Macad::Occt::Graphic3d_Structure^ theStructure, int theLayerId)
{
	Handle(::Graphic3d_Structure) h_theStructure = theStructure->NativeInstance;
	((::Graphic3d_StructureManager*)_NativeInstance)->ChangeZLayer(h_theStructure, theLayerId);
	theStructure->NativeInstance = h_theStructure.get();
}

Macad::Occt::Graphic3d_GraphicDriver^ Macad::Occt::Graphic3d_StructureManager::GraphicDriver()
{
	Handle(::Graphic3d_GraphicDriver) _result;
	_result = ((::Graphic3d_StructureManager*)_NativeInstance)->GraphicDriver();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_GraphicDriver::CreateDowncasted( _result.get());
}

int Macad::Occt::Graphic3d_StructureManager::Identification(Macad::Occt::Graphic3d_CView^ theView)
{
	return ((::Graphic3d_StructureManager*)_NativeInstance)->Identification((::Graphic3d_CView*)theView->NativeInstance);
}

void Macad::Occt::Graphic3d_StructureManager::UnIdentification(Macad::Occt::Graphic3d_CView^ theView)
{
	((::Graphic3d_StructureManager*)_NativeInstance)->UnIdentification((::Graphic3d_CView*)theView->NativeInstance);
}

int Macad::Occt::Graphic3d_StructureManager::MaxNumOfViews()
{
	return ((::Graphic3d_StructureManager*)_NativeInstance)->MaxNumOfViews();
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_StructureManager::Identification(int AId)
{
	Handle(::Graphic3d_Structure) _result;
	_result = ((::Graphic3d_StructureManager*)_NativeInstance)->Identification(AId);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_StructureManager::UnHighlight(Macad::Occt::Graphic3d_Structure^ AStructure)
{
	Handle(::Graphic3d_Structure) h_AStructure = AStructure->NativeInstance;
	((::Graphic3d_StructureManager*)_NativeInstance)->UnHighlight(h_AStructure);
	AStructure->NativeInstance = h_AStructure.get();
}

void Macad::Occt::Graphic3d_StructureManager::UnHighlight()
{
	((::Graphic3d_StructureManager*)_NativeInstance)->UnHighlight();
}

void Macad::Occt::Graphic3d_StructureManager::RecomputeStructures()
{
	((::Graphic3d_StructureManager*)_NativeInstance)->RecomputeStructures();
}

Macad::Occt::Graphic3d_ViewAffinity^ Macad::Occt::Graphic3d_StructureManager::RegisterObject(Macad::Occt::Standard_Transient^ theObject)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_StructureManager::UnregisterObject(Macad::Occt::Standard_Transient^ theObject)
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_ViewAffinity^ Macad::Occt::Graphic3d_StructureManager::ObjectAffinity(Macad::Occt::Standard_Transient^ theObject)
{
	throw gcnew System::NotImplementedException();
}

bool Macad::Occt::Graphic3d_StructureManager::IsDeviceLost()
{
	return ((::Graphic3d_StructureManager*)_NativeInstance)->IsDeviceLost();
}

void Macad::Occt::Graphic3d_StructureManager::SetDeviceLost()
{
	((::Graphic3d_StructureManager*)_NativeInstance)->SetDeviceLost();
}


Macad::Occt::Graphic3d_StructureManager^ Macad::Occt::Graphic3d_StructureManager::CreateDowncasted(::Graphic3d_StructureManager* instance)
{
	return gcnew Macad::Occt::Graphic3d_StructureManager( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_CTexture
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_CTexture::Graphic3d_CTexture()
	: BaseClass<::Graphic3d_CTexture>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_CTexture();
}

Macad::Occt::Graphic3d_CTexture::Graphic3d_CTexture(Macad::Occt::Graphic3d_CTexture^ parameter1)
	: BaseClass<::Graphic3d_CTexture>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_CTexture(*(::Graphic3d_CTexture*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_ValidatedCubeMapOrder
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ValidatedCubeMapOrder::Graphic3d_ValidatedCubeMapOrder(Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ theOther)
	: BaseClass<::Graphic3d_ValidatedCubeMapOrder>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_ValidatedCubeMapOrder(*(::Graphic3d_ValidatedCubeMapOrder*)theOther->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_CubeMapOrder
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_CubeMapOrder::Graphic3d_CubeMapOrder()
	: BaseClass<::Graphic3d_CubeMapOrder>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_CubeMapOrder();
}

Macad::Occt::Graphic3d_CubeMapOrder::Graphic3d_CubeMapOrder(unsigned char thePosXLocation, unsigned char theNegXLocation, unsigned char thePosYLocation, unsigned char theNegYLocation, unsigned char thePosZLocation, unsigned char theNegZLocation)
	: BaseClass<::Graphic3d_CubeMapOrder>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_CubeMapOrder(thePosXLocation, theNegXLocation, thePosYLocation, theNegYLocation, thePosZLocation, theNegZLocation);
}

Macad::Occt::Graphic3d_CubeMapOrder::Graphic3d_CubeMapOrder(Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ theOrder)
	: BaseClass<::Graphic3d_CubeMapOrder>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_CubeMapOrder(*(::Graphic3d_ValidatedCubeMapOrder*)theOrder->NativeInstance);
}

Macad::Occt::Graphic3d_CubeMapOrder::Graphic3d_CubeMapOrder(Macad::Occt::Graphic3d_CubeMapOrder^ parameter1)
	: BaseClass<::Graphic3d_CubeMapOrder>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_CubeMapOrder(*(::Graphic3d_CubeMapOrder*)parameter1->NativeInstance);
}

Macad::Occt::Graphic3d_CubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::Set(Macad::Occt::Graphic3d_CubeMapOrder^ theOrder)
{
	::Graphic3d_CubeMapOrder* _result = new ::Graphic3d_CubeMapOrder();
	*_result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->Set(*(::Graphic3d_CubeMapOrder*)theOrder->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CubeMapOrder(_result);
}

Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::Validated()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_CubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::Set(Macad::Occt::Graphic3d_CubeMapSide theCubeMapSide, unsigned char theValue)
{
	::Graphic3d_CubeMapOrder* _result = new ::Graphic3d_CubeMapOrder();
	*_result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->Set((::Graphic3d_CubeMapSide)theCubeMapSide, theValue);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CubeMapOrder(_result);
}

Macad::Occt::Graphic3d_CubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::SetDefault()
{
	::Graphic3d_CubeMapOrder* _result = new ::Graphic3d_CubeMapOrder();
	*_result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->SetDefault();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CubeMapOrder(_result);
}

Macad::Occt::Graphic3d_CubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::Permute(Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ anOrder)
{
	::Graphic3d_CubeMapOrder* _result = new ::Graphic3d_CubeMapOrder();
	*_result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->Permute(*(::Graphic3d_ValidatedCubeMapOrder*)anOrder->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CubeMapOrder(_result);
}

Macad::Occt::Graphic3d_CubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::Permuted(Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ anOrder)
{
	::Graphic3d_CubeMapOrder* _result = new ::Graphic3d_CubeMapOrder();
	*_result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->Permuted(*(::Graphic3d_ValidatedCubeMapOrder*)anOrder->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CubeMapOrder(_result);
}

Macad::Occt::Graphic3d_CubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::Swap(Macad::Occt::Graphic3d_CubeMapSide theFirstSide, Macad::Occt::Graphic3d_CubeMapSide theSecondSide)
{
	::Graphic3d_CubeMapOrder* _result = new ::Graphic3d_CubeMapOrder();
	*_result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->Swap((::Graphic3d_CubeMapSide)theFirstSide, (::Graphic3d_CubeMapSide)theSecondSide);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CubeMapOrder(_result);
}

Macad::Occt::Graphic3d_CubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::Swapped(Macad::Occt::Graphic3d_CubeMapSide theFirstSide, Macad::Occt::Graphic3d_CubeMapSide theSecondSide)
{
	::Graphic3d_CubeMapOrder* _result = new ::Graphic3d_CubeMapOrder();
	*_result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->Swapped((::Graphic3d_CubeMapSide)theFirstSide, (::Graphic3d_CubeMapSide)theSecondSide);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CubeMapOrder(_result);
}

unsigned char Macad::Occt::Graphic3d_CubeMapOrder::Get(Macad::Occt::Graphic3d_CubeMapSide theCubeMapSide)
{
	return ((::Graphic3d_CubeMapOrder*)_NativeInstance)->Get((::Graphic3d_CubeMapSide)theCubeMapSide);
}

Macad::Occt::Graphic3d_CubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::Clear()
{
	::Graphic3d_CubeMapOrder* _result = new ::Graphic3d_CubeMapOrder();
	*_result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->Clear();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CubeMapOrder(_result);
}

bool Macad::Occt::Graphic3d_CubeMapOrder::IsEmpty()
{
	return ((::Graphic3d_CubeMapOrder*)_NativeInstance)->IsEmpty();
}

bool Macad::Occt::Graphic3d_CubeMapOrder::HasRepetitions()
{
	return ((::Graphic3d_CubeMapOrder*)_NativeInstance)->HasRepetitions();
}

bool Macad::Occt::Graphic3d_CubeMapOrder::HasOverflows()
{
	return ((::Graphic3d_CubeMapOrder*)_NativeInstance)->HasOverflows();
}

bool Macad::Occt::Graphic3d_CubeMapOrder::IsValid()
{
	return ((::Graphic3d_CubeMapOrder*)_NativeInstance)->IsValid();
}

Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::Default()
{
	throw gcnew System::NotImplementedException();
}




//---------------------------------------------------------------------
//  Class  Graphic3d_CubeMap
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_CubeMap::Graphic3d_CubeMap(Macad::Occt::TCollection_AsciiString^ theFileName, bool theToGenerateMipmaps)
	: Macad::Occt::Graphic3d_TextureMap(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Graphic3d_CubeMap::Graphic3d_CubeMap(Macad::Occt::TCollection_AsciiString^ theFileName)
	: Macad::Occt::Graphic3d_TextureMap(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Graphic3d_CubeMap::Graphic3d_CubeMap(Macad::Occt::Image_PixMap^ thePixmap, bool theToGenerateMipmaps)
	: Macad::Occt::Graphic3d_TextureMap(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Graphic3d_CubeMap::Graphic3d_CubeMap(Macad::Occt::Image_PixMap^ thePixmap)
	: Macad::Occt::Graphic3d_TextureMap(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Graphic3d_CubeMap::Graphic3d_CubeMap(Macad::Occt::Graphic3d_CubeMap^ parameter1)
	: Macad::Occt::Graphic3d_TextureMap(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

bool Macad::Occt::Graphic3d_CubeMap::More()
{
	return ((::Graphic3d_CubeMap*)_NativeInstance)->More();
}

Macad::Occt::Graphic3d_CubeMapSide Macad::Occt::Graphic3d_CubeMap::CurrentSide()
{
	return (Macad::Occt::Graphic3d_CubeMapSide)((::Graphic3d_CubeMap*)_NativeInstance)->CurrentSide();
}

void Macad::Occt::Graphic3d_CubeMap::Next()
{
	((::Graphic3d_CubeMap*)_NativeInstance)->Next();
}

void Macad::Occt::Graphic3d_CubeMap::SetZInversion(bool theZIsInverted)
{
	((::Graphic3d_CubeMap*)_NativeInstance)->SetZInversion(theZIsInverted);
}

bool Macad::Occt::Graphic3d_CubeMap::ZIsInverted()
{
	return ((::Graphic3d_CubeMap*)_NativeInstance)->ZIsInverted();
}

bool Macad::Occt::Graphic3d_CubeMap::HasMipmaps()
{
	return ((::Graphic3d_CubeMap*)_NativeInstance)->HasMipmaps();
}

void Macad::Occt::Graphic3d_CubeMap::SetMipmapsGeneration(bool theToGenerateMipmaps)
{
	((::Graphic3d_CubeMap*)_NativeInstance)->SetMipmapsGeneration(theToGenerateMipmaps);
}

Macad::Occt::Image_CompressedPixMap^ Macad::Occt::Graphic3d_CubeMap::CompressedValue(Macad::Occt::Image_SupportedFormats^ theSupported)
{
	Handle(::Image_SupportedFormats) h_theSupported = theSupported->NativeInstance;
	Handle(::Image_CompressedPixMap) _result;
	_result = ((::Graphic3d_CubeMap*)_NativeInstance)->CompressedValue(h_theSupported);
	theSupported->NativeInstance = h_theSupported.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Image_CompressedPixMap::CreateDowncasted( _result.get());
}

Macad::Occt::Image_PixMap^ Macad::Occt::Graphic3d_CubeMap::Value(Macad::Occt::Image_SupportedFormats^ theSupported)
{
	Handle(::Image_SupportedFormats) h_theSupported = theSupported->NativeInstance;
	Handle(::Image_PixMap) _result;
	_result = ((::Graphic3d_CubeMap*)_NativeInstance)->Value(h_theSupported);
	theSupported->NativeInstance = h_theSupported.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Image_PixMap::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_CubeMap^ Macad::Occt::Graphic3d_CubeMap::Reset()
{
	throw gcnew System::NotImplementedException();
}


Macad::Occt::Graphic3d_CubeMap^ Macad::Occt::Graphic3d_CubeMap::CreateDowncasted(::Graphic3d_CubeMap* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_CubeMapPacked)))
		return Macad::Occt::Graphic3d_CubeMapPacked::CreateDowncasted((::Graphic3d_CubeMapPacked*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_CubeMapSeparate)))
		return Macad::Occt::Graphic3d_CubeMapSeparate::CreateDowncasted((::Graphic3d_CubeMapSeparate*)instance);

	return gcnew Macad::Occt::Graphic3d_CubeMap( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_CubeMapPacked
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_CubeMapPacked::Graphic3d_CubeMapPacked(Macad::Occt::TCollection_AsciiString^ theFileName, Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ theOrder)
	: Macad::Occt::Graphic3d_CubeMap(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_CubeMapPacked(*(::TCollection_AsciiString*)theFileName->NativeInstance, *(::Graphic3d_ValidatedCubeMapOrder*)theOrder->NativeInstance);
}

Macad::Occt::Graphic3d_CubeMapPacked::Graphic3d_CubeMapPacked(Macad::Occt::TCollection_AsciiString^ theFileName)
	: Macad::Occt::Graphic3d_CubeMap(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_CubeMapPacked(*(::TCollection_AsciiString*)theFileName->NativeInstance, ::Graphic3d_CubeMapOrder::Default());
}

Macad::Occt::Graphic3d_CubeMapPacked::Graphic3d_CubeMapPacked(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ theOrder)
	: Macad::Occt::Graphic3d_CubeMap(BaseClass::InitMode::Uninitialized)
{
	Handle(::Image_PixMap) h_theImage = theImage->NativeInstance;
	NativeInstance = new ::Graphic3d_CubeMapPacked(h_theImage, *(::Graphic3d_ValidatedCubeMapOrder*)theOrder->NativeInstance);
	theImage->NativeInstance = h_theImage.get();
}

Macad::Occt::Graphic3d_CubeMapPacked::Graphic3d_CubeMapPacked(Macad::Occt::Image_PixMap^ theImage)
	: Macad::Occt::Graphic3d_CubeMap(BaseClass::InitMode::Uninitialized)
{
	Handle(::Image_PixMap) h_theImage = theImage->NativeInstance;
	NativeInstance = new ::Graphic3d_CubeMapPacked(h_theImage, ::Graphic3d_CubeMapOrder::Default());
	theImage->NativeInstance = h_theImage.get();
}

Macad::Occt::Graphic3d_CubeMapPacked::Graphic3d_CubeMapPacked(Macad::Occt::Graphic3d_CubeMapPacked^ parameter1)
	: Macad::Occt::Graphic3d_CubeMap(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_CubeMapPacked(*(::Graphic3d_CubeMapPacked*)parameter1->NativeInstance);
}

Macad::Occt::Image_CompressedPixMap^ Macad::Occt::Graphic3d_CubeMapPacked::CompressedValue(Macad::Occt::Image_SupportedFormats^ theSupported)
{
	Handle(::Image_SupportedFormats) h_theSupported = theSupported->NativeInstance;
	Handle(::Image_CompressedPixMap) _result;
	_result = ((::Graphic3d_CubeMapPacked*)_NativeInstance)->CompressedValue(h_theSupported);
	theSupported->NativeInstance = h_theSupported.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Image_CompressedPixMap::CreateDowncasted( _result.get());
}

Macad::Occt::Image_PixMap^ Macad::Occt::Graphic3d_CubeMapPacked::Value(Macad::Occt::Image_SupportedFormats^ theSupported)
{
	Handle(::Image_SupportedFormats) h_theSupported = theSupported->NativeInstance;
	Handle(::Image_PixMap) _result;
	_result = ((::Graphic3d_CubeMapPacked*)_NativeInstance)->Value(h_theSupported);
	theSupported->NativeInstance = h_theSupported.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Image_PixMap::CreateDowncasted( _result.get());
}


Macad::Occt::Graphic3d_CubeMapPacked^ Macad::Occt::Graphic3d_CubeMapPacked::CreateDowncasted(::Graphic3d_CubeMapPacked* instance)
{
	return gcnew Macad::Occt::Graphic3d_CubeMapPacked( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_CubeMapSeparate
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_CubeMapSeparate::Graphic3d_CubeMapSeparate(Macad::Occt::Graphic3d_CubeMapSeparate^ parameter1)
	: Macad::Occt::Graphic3d_CubeMap(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_CubeMapSeparate(*(::Graphic3d_CubeMapSeparate*)parameter1->NativeInstance);
}

Macad::Occt::Image_CompressedPixMap^ Macad::Occt::Graphic3d_CubeMapSeparate::CompressedValue(Macad::Occt::Image_SupportedFormats^ theSupported)
{
	Handle(::Image_SupportedFormats) h_theSupported = theSupported->NativeInstance;
	Handle(::Image_CompressedPixMap) _result;
	_result = ((::Graphic3d_CubeMapSeparate*)_NativeInstance)->CompressedValue(h_theSupported);
	theSupported->NativeInstance = h_theSupported.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Image_CompressedPixMap::CreateDowncasted( _result.get());
}

Macad::Occt::Image_PixMap^ Macad::Occt::Graphic3d_CubeMapSeparate::Value(Macad::Occt::Image_SupportedFormats^ theSupported)
{
	Handle(::Image_SupportedFormats) h_theSupported = theSupported->NativeInstance;
	Handle(::Image_PixMap) _result;
	_result = ((::Graphic3d_CubeMapSeparate*)_NativeInstance)->Value(h_theSupported);
	theSupported->NativeInstance = h_theSupported.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Image_PixMap::CreateDowncasted( _result.get());
}

Macad::Occt::Image_PixMap^ Macad::Occt::Graphic3d_CubeMapSeparate::GetImage(Macad::Occt::Image_SupportedFormats^ parameter1)
{
	Handle(::Image_SupportedFormats) h_parameter1 = parameter1->NativeInstance;
	Handle(::Image_PixMap) _result;
	_result = ((::Graphic3d_CubeMapSeparate*)_NativeInstance)->GetImage(h_parameter1);
	parameter1->NativeInstance = h_parameter1.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Image_PixMap::CreateDowncasted( _result.get());
}

bool Macad::Occt::Graphic3d_CubeMapSeparate::IsDone()
{
	return ((::Graphic3d_CubeMapSeparate*)_NativeInstance)->IsDone();
}


Macad::Occt::Graphic3d_CubeMapSeparate^ Macad::Occt::Graphic3d_CubeMapSeparate::CreateDowncasted(::Graphic3d_CubeMapSeparate* instance)
{
	return gcnew Macad::Occt::Graphic3d_CubeMapSeparate( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_CullingTool
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_CullingTool::Graphic3d_CullingTool()
	: BaseClass<::Graphic3d_CullingTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_CullingTool();
}

Macad::Occt::Graphic3d_CullingTool::Graphic3d_CullingTool(Macad::Occt::Graphic3d_CullingTool^ parameter1)
	: BaseClass<::Graphic3d_CullingTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_CullingTool(*(::Graphic3d_CullingTool*)parameter1->NativeInstance);
}

void Macad::Occt::Graphic3d_CullingTool::SetViewVolume(Macad::Occt::Graphic3d_Camera^ theCamera)
{
	Handle(::Graphic3d_Camera) h_theCamera = theCamera->NativeInstance;
	((::Graphic3d_CullingTool*)_NativeInstance)->SetViewVolume(h_theCamera, ::Graphic3d_Mat4d());
	theCamera->NativeInstance = h_theCamera.get();
}

void Macad::Occt::Graphic3d_CullingTool::SetViewportSize(int theViewportWidth, int theViewportHeight, double theResolutionRatio)
{
	((::Graphic3d_CullingTool*)_NativeInstance)->SetViewportSize(theViewportWidth, theViewportHeight, theResolutionRatio);
}

void Macad::Occt::Graphic3d_CullingTool::CacheClipPtsProjections()
{
	((::Graphic3d_CullingTool*)_NativeInstance)->CacheClipPtsProjections();
}

Macad::Occt::Graphic3d_Camera^ Macad::Occt::Graphic3d_CullingTool::Camera()
{
	Handle(::Graphic3d_Camera) _result;
	_result = ((::Graphic3d_CullingTool*)_NativeInstance)->Camera();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Camera::CreateDowncasted( _result.get());
}

int Macad::Occt::Graphic3d_CullingTool::ViewportWidth()
{
	return ((::Graphic3d_CullingTool*)_NativeInstance)->ViewportWidth();
}

int Macad::Occt::Graphic3d_CullingTool::ViewportHeight()
{
	return ((::Graphic3d_CullingTool*)_NativeInstance)->ViewportHeight();
}

Macad::Occt::Graphic3d_WorldViewProjState^ Macad::Occt::Graphic3d_CullingTool::WorldViewProjState()
{
	::Graphic3d_WorldViewProjState* _result = new ::Graphic3d_WorldViewProjState();
	*_result =  (::Graphic3d_WorldViewProjState)((::Graphic3d_CullingTool*)_NativeInstance)->WorldViewProjState();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_WorldViewProjState(_result);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_DataStructureManager
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_DataStructureManager::Graphic3d_DataStructureManager(Macad::Occt::Graphic3d_DataStructureManager^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}


Macad::Occt::Graphic3d_DataStructureManager^ Macad::Occt::Graphic3d_DataStructureManager::CreateDowncasted(::Graphic3d_DataStructureManager* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_CView)))
		return Macad::Occt::Graphic3d_CView::CreateDowncasted((::Graphic3d_CView*)instance);

	return gcnew Macad::Occt::Graphic3d_DataStructureManager( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_CView
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_CView::Graphic3d_CView(Macad::Occt::Graphic3d_StructureManager^ theMgr)
	: Macad::Occt::Graphic3d_DataStructureManager(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Graphic3d_CView::Graphic3d_CView(Macad::Occt::Graphic3d_CView^ parameter1)
	: Macad::Occt::Graphic3d_DataStructureManager(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

int Macad::Occt::Graphic3d_CView::Identification()
{
	return ((::Graphic3d_CView*)_NativeInstance)->Identification();
}

void Macad::Occt::Graphic3d_CView::Activate()
{
	((::Graphic3d_CView*)_NativeInstance)->Activate();
}

void Macad::Occt::Graphic3d_CView::Deactivate()
{
	((::Graphic3d_CView*)_NativeInstance)->Deactivate();
}

bool Macad::Occt::Graphic3d_CView::IsActive()
{
	return ((::Graphic3d_CView*)_NativeInstance)->IsActive();
}

void Macad::Occt::Graphic3d_CView::Remove()
{
	((::Graphic3d_CView*)_NativeInstance)->Remove();
}

bool Macad::Occt::Graphic3d_CView::IsRemoved()
{
	return ((::Graphic3d_CView*)_NativeInstance)->IsRemoved();
}

Macad::Occt::Graphic3d_Camera^ Macad::Occt::Graphic3d_CView::Camera()
{
	Handle(::Graphic3d_Camera) _result;
	_result = ((::Graphic3d_CView*)_NativeInstance)->Camera();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Camera::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_CView::SetCamera(Macad::Occt::Graphic3d_Camera^ theCamera)
{
	Handle(::Graphic3d_Camera) h_theCamera = theCamera->NativeInstance;
	((::Graphic3d_CView*)_NativeInstance)->SetCamera(h_theCamera);
	theCamera->NativeInstance = h_theCamera.get();
}

Macad::Occt::Graphic3d_TypeOfShadingModel Macad::Occt::Graphic3d_CView::ShadingModel()
{
	return (Macad::Occt::Graphic3d_TypeOfShadingModel)((::Graphic3d_CView*)_NativeInstance)->ShadingModel();
}

void Macad::Occt::Graphic3d_CView::SetShadingModel(Macad::Occt::Graphic3d_TypeOfShadingModel theModel)
{
	((::Graphic3d_CView*)_NativeInstance)->SetShadingModel((::Graphic3d_TypeOfShadingModel)theModel);
}

Macad::Occt::Graphic3d_TypeOfVisualization Macad::Occt::Graphic3d_CView::VisualizationType()
{
	return (Macad::Occt::Graphic3d_TypeOfVisualization)((::Graphic3d_CView*)_NativeInstance)->VisualizationType();
}

void Macad::Occt::Graphic3d_CView::SetVisualizationType(Macad::Occt::Graphic3d_TypeOfVisualization theType)
{
	((::Graphic3d_CView*)_NativeInstance)->SetVisualizationType((::Graphic3d_TypeOfVisualization)theType);
}

void Macad::Occt::Graphic3d_CView::SetComputedMode(bool theMode)
{
	((::Graphic3d_CView*)_NativeInstance)->SetComputedMode(theMode);
}

bool Macad::Occt::Graphic3d_CView::ComputedMode()
{
	return ((::Graphic3d_CView*)_NativeInstance)->ComputedMode();
}

void Macad::Occt::Graphic3d_CView::ReCompute(Macad::Occt::Graphic3d_Structure^ theStructure)
{
	Handle(::Graphic3d_Structure) h_theStructure = theStructure->NativeInstance;
	((::Graphic3d_CView*)_NativeInstance)->ReCompute(h_theStructure);
	theStructure->NativeInstance = h_theStructure.get();
}

void Macad::Occt::Graphic3d_CView::Update(int theLayerId)
{
	((::Graphic3d_CView*)_NativeInstance)->Update(theLayerId);
}

void Macad::Occt::Graphic3d_CView::Update()
{
	((::Graphic3d_CView*)_NativeInstance)->Update(Graphic3d_ZLayerId_UNKNOWN);
}

void Macad::Occt::Graphic3d_CView::Compute()
{
	((::Graphic3d_CView*)_NativeInstance)->Compute();
}

bool Macad::Occt::Graphic3d_CView::ContainsFacet()
{
	return ((::Graphic3d_CView*)_NativeInstance)->ContainsFacet();
}

bool Macad::Occt::Graphic3d_CView::ContainsFacet(Macad::Occt::Graphic3d_MapOfStructure^ theSet)
{
	return ((::Graphic3d_CView*)_NativeInstance)->ContainsFacet(*(::Graphic3d_MapOfStructure*)theSet->NativeInstance);
}

void Macad::Occt::Graphic3d_CView::DisplayedStructures(Macad::Occt::Graphic3d_MapOfStructure^ theStructures)
{
	((::Graphic3d_CView*)_NativeInstance)->DisplayedStructures(*(::Graphic3d_MapOfStructure*)theStructures->NativeInstance);
}

int Macad::Occt::Graphic3d_CView::NumberOfDisplayedStructures()
{
	return ((::Graphic3d_CView*)_NativeInstance)->NumberOfDisplayedStructures();
}

bool Macad::Occt::Graphic3d_CView::IsComputed(int theStructId, Macad::Occt::Graphic3d_Structure^ theComputedStruct)
{
	Handle(::Graphic3d_Structure) h_theComputedStruct = theComputedStruct->NativeInstance;
	return ((::Graphic3d_CView*)_NativeInstance)->IsComputed(theStructId, h_theComputedStruct);
	theComputedStruct->NativeInstance = h_theComputedStruct.get();
}

Macad::Occt::Bnd_Box^ Macad::Occt::Graphic3d_CView::MinMaxValues(bool theToIncludeAuxiliary)
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Graphic3d_CView*)_NativeInstance)->MinMaxValues(theToIncludeAuxiliary);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Graphic3d_CView::MinMaxValues()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Graphic3d_CView*)_NativeInstance)->MinMaxValues(false);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Graphic3d_CView::MinMaxValues(Macad::Occt::Graphic3d_MapOfStructure^ theSet, bool theToIncludeAuxiliary)
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Graphic3d_CView*)_NativeInstance)->MinMaxValues(*(::Graphic3d_MapOfStructure*)theSet->NativeInstance, theToIncludeAuxiliary);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Graphic3d_CView::MinMaxValues(Macad::Occt::Graphic3d_MapOfStructure^ theSet)
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Graphic3d_CView*)_NativeInstance)->MinMaxValues(*(::Graphic3d_MapOfStructure*)theSet->NativeInstance, false);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Graphic3d_StructureManager^ Macad::Occt::Graphic3d_CView::StructureManager()
{
	Handle(::Graphic3d_StructureManager) _result;
	_result = ((::Graphic3d_CView*)_NativeInstance)->StructureManager();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_StructureManager::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_CView::Redraw()
{
	((::Graphic3d_CView*)_NativeInstance)->Redraw();
}

void Macad::Occt::Graphic3d_CView::RedrawImmediate()
{
	((::Graphic3d_CView*)_NativeInstance)->RedrawImmediate();
}

void Macad::Occt::Graphic3d_CView::Invalidate()
{
	((::Graphic3d_CView*)_NativeInstance)->Invalidate();
}

bool Macad::Occt::Graphic3d_CView::IsInvalidated()
{
	return ((::Graphic3d_CView*)_NativeInstance)->IsInvalidated();
}

void Macad::Occt::Graphic3d_CView::Resized()
{
	((::Graphic3d_CView*)_NativeInstance)->Resized();
}

bool Macad::Occt::Graphic3d_CView::SetImmediateModeDrawToFront(bool theDrawToFrontBuffer)
{
	return ((::Graphic3d_CView*)_NativeInstance)->SetImmediateModeDrawToFront(theDrawToFrontBuffer);
}

void Macad::Occt::Graphic3d_CView::SetWindow(Macad::Occt::Aspect_Window^ theWindow, System::IntPtr theContext)
{
	Handle(::Aspect_Window) h_theWindow = theWindow->NativeInstance;
	((::Graphic3d_CView*)_NativeInstance)->SetWindow(h_theWindow, theContext.ToPointer());
	theWindow->NativeInstance = h_theWindow.get();
}

void Macad::Occt::Graphic3d_CView::SetWindow(Macad::Occt::Aspect_Window^ theWindow)
{
	Handle(::Aspect_Window) h_theWindow = theWindow->NativeInstance;
	((::Graphic3d_CView*)_NativeInstance)->SetWindow(h_theWindow, 0);
	theWindow->NativeInstance = h_theWindow.get();
}

Macad::Occt::Aspect_Window^ Macad::Occt::Graphic3d_CView::Window()
{
	Handle(::Aspect_Window) _result;
	_result = ((::Graphic3d_CView*)_NativeInstance)->Window();
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_Window::CreateDowncasted( _result.get());
}

bool Macad::Occt::Graphic3d_CView::IsDefined()
{
	return ((::Graphic3d_CView*)_NativeInstance)->IsDefined();
}

bool Macad::Occt::Graphic3d_CView::BufferDump(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::Graphic3d_BufferType% theBufferType)
{
	pin_ptr<Macad::Occt::Graphic3d_BufferType> pp_theBufferType = &theBufferType;
	return ((::Graphic3d_CView*)_NativeInstance)->BufferDump(*(::Image_PixMap*)theImage->NativeInstance, *(::Graphic3d_BufferType*)pp_theBufferType);
}

void Macad::Occt::Graphic3d_CView::InvalidateBVHData(int theLayerId)
{
	((::Graphic3d_CView*)_NativeInstance)->InvalidateBVHData(theLayerId);
}

void Macad::Occt::Graphic3d_CView::InsertLayerBefore(int theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerAfter)
{
	((::Graphic3d_CView*)_NativeInstance)->InsertLayerBefore(theNewLayerId, *(::Graphic3d_ZLayerSettings*)theSettings->NativeInstance, theLayerAfter);
}

void Macad::Occt::Graphic3d_CView::InsertLayerAfter(int theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerBefore)
{
	((::Graphic3d_CView*)_NativeInstance)->InsertLayerAfter(theNewLayerId, *(::Graphic3d_ZLayerSettings*)theSettings->NativeInstance, theLayerBefore);
}

int Macad::Occt::Graphic3d_CView::ZLayerMax()
{
	return ((::Graphic3d_CView*)_NativeInstance)->ZLayerMax();
}

void Macad::Occt::Graphic3d_CView::InvalidateZLayerBoundingBox(int theLayerId)
{
	((::Graphic3d_CView*)_NativeInstance)->InvalidateZLayerBoundingBox(theLayerId);
}

void Macad::Occt::Graphic3d_CView::RemoveZLayer(int theLayerId)
{
	((::Graphic3d_CView*)_NativeInstance)->RemoveZLayer(theLayerId);
}

void Macad::Occt::Graphic3d_CView::SetZLayerSettings(int theLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings)
{
	((::Graphic3d_CView*)_NativeInstance)->SetZLayerSettings(theLayerId, *(::Graphic3d_ZLayerSettings*)theSettings->NativeInstance);
}

double Macad::Occt::Graphic3d_CView::ConsiderZoomPersistenceObjects()
{
	return ((::Graphic3d_CView*)_NativeInstance)->ConsiderZoomPersistenceObjects();
}

Macad::Occt::Standard_Transient^ Macad::Occt::Graphic3d_CView::FBO()
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_CView::SetFBO(Macad::Occt::Standard_Transient^ theFbo)
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::Graphic3d_CView::FBOCreate(int theWidth, int theHeight)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_CView::FBORelease(Macad::Occt::Standard_Transient^ theFbo)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_CView::FBOGetDimensions(Macad::Occt::Standard_Transient^ theFbo, int% theWidth, int% theHeight, int% theWidthMax, int% theHeightMax)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_CView::FBOChangeViewport(Macad::Occt::Standard_Transient^ theFbo, int theWidth, int theHeight)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_CView::CopySettings(Macad::Occt::Graphic3d_CView^ theOther)
{
	Handle(::Graphic3d_CView) h_theOther = theOther->NativeInstance;
	((::Graphic3d_CView*)_NativeInstance)->CopySettings(h_theOther);
	theOther->NativeInstance = h_theOther.get();
}

Macad::Occt::Graphic3d_RenderingParams^ Macad::Occt::Graphic3d_CView::RenderingParams()
{
	::Graphic3d_RenderingParams* _result = new ::Graphic3d_RenderingParams();
	*_result =  (::Graphic3d_RenderingParams)((::Graphic3d_CView*)_NativeInstance)->RenderingParams();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_RenderingParams(_result);
}

Macad::Occt::Graphic3d_RenderingParams^ Macad::Occt::Graphic3d_CView::ChangeRenderingParams()
{
	::Graphic3d_RenderingParams* _result = new ::Graphic3d_RenderingParams();
	*_result = ((::Graphic3d_CView*)_NativeInstance)->ChangeRenderingParams();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_RenderingParams(_result);
}

Macad::Occt::Aspect_Background^ Macad::Occt::Graphic3d_CView::Background()
{
	::Aspect_Background* _result = new ::Aspect_Background();
	*_result = ((::Graphic3d_CView*)_NativeInstance)->Background();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_Background(_result);
}

void Macad::Occt::Graphic3d_CView::SetBackground(Macad::Occt::Aspect_Background^ theBackground)
{
	((::Graphic3d_CView*)_NativeInstance)->SetBackground(*(::Aspect_Background*)theBackground->NativeInstance);
}

Macad::Occt::Aspect_GradientBackground^ Macad::Occt::Graphic3d_CView::GradientBackground()
{
	::Aspect_GradientBackground* _result = new ::Aspect_GradientBackground();
	*_result = ((::Graphic3d_CView*)_NativeInstance)->GradientBackground();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_GradientBackground(_result);
}

void Macad::Occt::Graphic3d_CView::SetGradientBackground(Macad::Occt::Aspect_GradientBackground^ theBackground)
{
	((::Graphic3d_CView*)_NativeInstance)->SetGradientBackground(*(::Aspect_GradientBackground*)theBackground->NativeInstance);
}

Macad::Occt::Graphic3d_TextureMap^ Macad::Occt::Graphic3d_CView::BackgroundImage()
{
	Handle(::Graphic3d_TextureMap) _result;
	_result = ((::Graphic3d_CView*)_NativeInstance)->BackgroundImage();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TextureMap::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_CView::SetBackgroundImage(Macad::Occt::Graphic3d_TextureMap^ theTextureMap, bool theToUpdatePBREnv)
{
	Handle(::Graphic3d_TextureMap) h_theTextureMap = theTextureMap->NativeInstance;
	((::Graphic3d_CView*)_NativeInstance)->SetBackgroundImage(h_theTextureMap, theToUpdatePBREnv);
	theTextureMap->NativeInstance = h_theTextureMap.get();
}

void Macad::Occt::Graphic3d_CView::SetBackgroundImage(Macad::Occt::Graphic3d_TextureMap^ theTextureMap)
{
	Handle(::Graphic3d_TextureMap) h_theTextureMap = theTextureMap->NativeInstance;
	((::Graphic3d_CView*)_NativeInstance)->SetBackgroundImage(h_theTextureMap, true);
	theTextureMap->NativeInstance = h_theTextureMap.get();
}

Macad::Occt::Aspect_FillMethod Macad::Occt::Graphic3d_CView::BackgroundImageStyle()
{
	return (Macad::Occt::Aspect_FillMethod)((::Graphic3d_CView*)_NativeInstance)->BackgroundImageStyle();
}

void Macad::Occt::Graphic3d_CView::SetBackgroundImageStyle(Macad::Occt::Aspect_FillMethod theFillStyle)
{
	((::Graphic3d_CView*)_NativeInstance)->SetBackgroundImageStyle((::Aspect_FillMethod)theFillStyle);
}

Macad::Occt::Graphic3d_CubeMap^ Macad::Occt::Graphic3d_CView::BackgroundCubeMap()
{
	Handle(::Graphic3d_CubeMap) _result;
	_result = ((::Graphic3d_CView*)_NativeInstance)->BackgroundCubeMap();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_CubeMap::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_CView::GeneratePBREnvironment()
{
	((::Graphic3d_CView*)_NativeInstance)->GeneratePBREnvironment();
}

void Macad::Occt::Graphic3d_CView::ClearPBREnvironment()
{
	((::Graphic3d_CView*)_NativeInstance)->ClearPBREnvironment();
}

Macad::Occt::Graphic3d_TextureEnv^ Macad::Occt::Graphic3d_CView::TextureEnv()
{
	Handle(::Graphic3d_TextureEnv) _result;
	_result = ((::Graphic3d_CView*)_NativeInstance)->TextureEnv();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TextureEnv::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_CView::SetTextureEnv(Macad::Occt::Graphic3d_TextureEnv^ theTextureEnv)
{
	Handle(::Graphic3d_TextureEnv) h_theTextureEnv = theTextureEnv->NativeInstance;
	((::Graphic3d_CView*)_NativeInstance)->SetTextureEnv(h_theTextureEnv);
	theTextureEnv->NativeInstance = h_theTextureEnv.get();
}

Macad::Occt::Graphic3d_TypeOfBackfacingModel Macad::Occt::Graphic3d_CView::BackfacingModel()
{
	return (Macad::Occt::Graphic3d_TypeOfBackfacingModel)((::Graphic3d_CView*)_NativeInstance)->BackfacingModel();
}

void Macad::Occt::Graphic3d_CView::SetBackfacingModel(Macad::Occt::Graphic3d_TypeOfBackfacingModel theModel)
{
	((::Graphic3d_CView*)_NativeInstance)->SetBackfacingModel((::Graphic3d_TypeOfBackfacingModel)theModel);
}

Macad::Occt::Graphic3d_LightSet^ Macad::Occt::Graphic3d_CView::Lights()
{
	Handle(::Graphic3d_LightSet) _result;
	_result = ((::Graphic3d_CView*)_NativeInstance)->Lights();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_LightSet::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_CView::SetLights(Macad::Occt::Graphic3d_LightSet^ theLights)
{
	Handle(::Graphic3d_LightSet) h_theLights = theLights->NativeInstance;
	((::Graphic3d_CView*)_NativeInstance)->SetLights(h_theLights);
	theLights->NativeInstance = h_theLights.get();
}

Macad::Occt::Graphic3d_SequenceOfHClipPlane^ Macad::Occt::Graphic3d_CView::ClipPlanes()
{
	Handle(::Graphic3d_SequenceOfHClipPlane) _result;
	_result = ((::Graphic3d_CView*)_NativeInstance)->ClipPlanes();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_SequenceOfHClipPlane::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_CView::SetClipPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes)
{
	Handle(::Graphic3d_SequenceOfHClipPlane) h_thePlanes = thePlanes->NativeInstance;
	((::Graphic3d_CView*)_NativeInstance)->SetClipPlanes(h_thePlanes);
	thePlanes->NativeInstance = h_thePlanes.get();
}

void Macad::Occt::Graphic3d_CView::DiagnosticInformation(Macad::Occt::TColStd_IndexedDataMapOfStringString^ theDict, Macad::Occt::Graphic3d_DiagnosticInfo theFlags)
{
	((::Graphic3d_CView*)_NativeInstance)->DiagnosticInformation(*(::TColStd_IndexedDataMapOfStringString*)theDict->NativeInstance, (::Graphic3d_DiagnosticInfo)theFlags);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_CView::StatisticInformation()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::Graphic3d_CView*)_NativeInstance)->StatisticInformation();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Graphic3d_CView::StatisticInformation(Macad::Occt::TColStd_IndexedDataMapOfStringString^ theDict)
{
	((::Graphic3d_CView*)_NativeInstance)->StatisticInformation(*(::TColStd_IndexedDataMapOfStringString*)theDict->NativeInstance);
}

double Macad::Occt::Graphic3d_CView::UnitFactor()
{
	return ((::Graphic3d_CView*)_NativeInstance)->UnitFactor();
}

void Macad::Occt::Graphic3d_CView::SetUnitFactor(double theFactor)
{
	((::Graphic3d_CView*)_NativeInstance)->SetUnitFactor(theFactor);
}

Macad::Occt::Aspect_XRSession^ Macad::Occt::Graphic3d_CView::XRSession()
{
	Handle(::Aspect_XRSession) _result;
	_result = ((::Graphic3d_CView*)_NativeInstance)->XRSession();
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_XRSession::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_CView::SetXRSession(Macad::Occt::Aspect_XRSession^ theSession)
{
	Handle(::Aspect_XRSession) h_theSession = theSession->NativeInstance;
	((::Graphic3d_CView*)_NativeInstance)->SetXRSession(h_theSession);
	theSession->NativeInstance = h_theSession.get();
}

bool Macad::Occt::Graphic3d_CView::IsActiveXR()
{
	return ((::Graphic3d_CView*)_NativeInstance)->IsActiveXR();
}

bool Macad::Occt::Graphic3d_CView::InitXR()
{
	return ((::Graphic3d_CView*)_NativeInstance)->InitXR();
}

void Macad::Occt::Graphic3d_CView::ReleaseXR()
{
	((::Graphic3d_CView*)_NativeInstance)->ReleaseXR();
}

void Macad::Occt::Graphic3d_CView::ProcessXRInput()
{
	((::Graphic3d_CView*)_NativeInstance)->ProcessXRInput();
}

void Macad::Occt::Graphic3d_CView::SetupXRPosedCamera()
{
	((::Graphic3d_CView*)_NativeInstance)->SetupXRPosedCamera();
}

void Macad::Occt::Graphic3d_CView::UnsetXRPosedCamera()
{
	((::Graphic3d_CView*)_NativeInstance)->UnsetXRPosedCamera();
}

Macad::Occt::Graphic3d_Camera^ Macad::Occt::Graphic3d_CView::PosedXRCamera()
{
	Handle(::Graphic3d_Camera) _result;
	_result = ((::Graphic3d_CView*)_NativeInstance)->PosedXRCamera();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Camera::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_CView::SetPosedXRCamera(Macad::Occt::Graphic3d_Camera^ theCamera)
{
	Handle(::Graphic3d_Camera) h_theCamera = theCamera->NativeInstance;
	((::Graphic3d_CView*)_NativeInstance)->SetPosedXRCamera(h_theCamera);
	theCamera->NativeInstance = h_theCamera.get();
}

Macad::Occt::Graphic3d_Camera^ Macad::Occt::Graphic3d_CView::BaseXRCamera()
{
	Handle(::Graphic3d_Camera) _result;
	_result = ((::Graphic3d_CView*)_NativeInstance)->BaseXRCamera();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Camera::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_CView::SetBaseXRCamera(Macad::Occt::Graphic3d_Camera^ theCamera)
{
	Handle(::Graphic3d_Camera) h_theCamera = theCamera->NativeInstance;
	((::Graphic3d_CView*)_NativeInstance)->SetBaseXRCamera(h_theCamera);
	theCamera->NativeInstance = h_theCamera.get();
}

Macad::Occt::Trsf Macad::Occt::Graphic3d_CView::PoseXRToWorld(Macad::Occt::Trsf thePoseXR)
{
	pin_ptr<Macad::Occt::Trsf> pp_thePoseXR = &thePoseXR;
	return Macad::Occt::Trsf(((::Graphic3d_CView*)_NativeInstance)->PoseXRToWorld(*(gp_Trsf*)pp_thePoseXR));
}

void Macad::Occt::Graphic3d_CView::SynchronizeXRBaseToPosedCamera()
{
	((::Graphic3d_CView*)_NativeInstance)->SynchronizeXRBaseToPosedCamera();
}

void Macad::Occt::Graphic3d_CView::SynchronizeXRPosedToBaseCamera()
{
	((::Graphic3d_CView*)_NativeInstance)->SynchronizeXRPosedToBaseCamera();
}

void Macad::Occt::Graphic3d_CView::ComputeXRPosedCameraFromBase(Macad::Occt::Graphic3d_Camera^ theCam, Macad::Occt::Trsf theXRTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theXRTrsf = &theXRTrsf;
	((::Graphic3d_CView*)_NativeInstance)->ComputeXRPosedCameraFromBase(*(::Graphic3d_Camera*)theCam->NativeInstance, *(gp_Trsf*)pp_theXRTrsf);
}

void Macad::Occt::Graphic3d_CView::ComputeXRBaseCameraFromPosed(Macad::Occt::Graphic3d_Camera^ theCamPosed, Macad::Occt::Trsf thePoseTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_thePoseTrsf = &thePoseTrsf;
	((::Graphic3d_CView*)_NativeInstance)->ComputeXRBaseCameraFromPosed(*(::Graphic3d_Camera*)theCamPosed->NativeInstance, *(gp_Trsf*)pp_thePoseTrsf);
}

void Macad::Occt::Graphic3d_CView::TurnViewXRCamera(Macad::Occt::Trsf theTrsfTurn)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsfTurn = &theTrsfTurn;
	((::Graphic3d_CView*)_NativeInstance)->TurnViewXRCamera(*(gp_Trsf*)pp_theTrsfTurn);
}

Macad::Occt::Graphic3d_GraduatedTrihedron^ Macad::Occt::Graphic3d_CView::GetGraduatedTrihedron()
{
	::Graphic3d_GraduatedTrihedron* _result = new ::Graphic3d_GraduatedTrihedron("Arial", Font_FA_Bold, 12, "Arial", Font_FA_Regular, 12, 30.F, Quantity_NOC_WHITE, true, true);
	*_result =  (::Graphic3d_GraduatedTrihedron)((::Graphic3d_CView*)_NativeInstance)->GetGraduatedTrihedron();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_GraduatedTrihedron(_result);
}

void Macad::Occt::Graphic3d_CView::GraduatedTrihedronDisplay(Macad::Occt::Graphic3d_GraduatedTrihedron^ theTrihedronData)
{
	((::Graphic3d_CView*)_NativeInstance)->GraduatedTrihedronDisplay(*(::Graphic3d_GraduatedTrihedron*)theTrihedronData->NativeInstance);
}

void Macad::Occt::Graphic3d_CView::GraduatedTrihedronErase()
{
	((::Graphic3d_CView*)_NativeInstance)->GraduatedTrihedronErase();
}


Macad::Occt::Graphic3d_CView^ Macad::Occt::Graphic3d_CView::CreateDowncasted(::Graphic3d_CView* instance)
{
	return gcnew Macad::Occt::Graphic3d_CView( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_AxisAspect
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_AxisAspect::Graphic3d_AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset, int theNameOffset, int theTickmarksNumber, int theTickmarksLength, bool theToDrawName, bool theToDrawValues, bool theToDrawTickmarks)
	: BaseClass<::Graphic3d_AxisAspect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, *(::Quantity_Color*)theNameColor->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance, theValuesOffset, theNameOffset, theTickmarksNumber, theTickmarksLength, theToDrawName, theToDrawValues, theToDrawTickmarks);
}

Macad::Occt::Graphic3d_AxisAspect::Graphic3d_AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset, int theNameOffset, int theTickmarksNumber, int theTickmarksLength, bool theToDrawName, bool theToDrawValues)
	: BaseClass<::Graphic3d_AxisAspect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, *(::Quantity_Color*)theNameColor->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance, theValuesOffset, theNameOffset, theTickmarksNumber, theTickmarksLength, theToDrawName, theToDrawValues, true);
}

Macad::Occt::Graphic3d_AxisAspect::Graphic3d_AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset, int theNameOffset, int theTickmarksNumber, int theTickmarksLength, bool theToDrawName)
	: BaseClass<::Graphic3d_AxisAspect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, *(::Quantity_Color*)theNameColor->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance, theValuesOffset, theNameOffset, theTickmarksNumber, theTickmarksLength, theToDrawName, true, true);
}

Macad::Occt::Graphic3d_AxisAspect::Graphic3d_AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset, int theNameOffset, int theTickmarksNumber, int theTickmarksLength)
	: BaseClass<::Graphic3d_AxisAspect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, *(::Quantity_Color*)theNameColor->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance, theValuesOffset, theNameOffset, theTickmarksNumber, theTickmarksLength, true, true, true);
}

Macad::Occt::Graphic3d_AxisAspect::Graphic3d_AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset, int theNameOffset, int theTickmarksNumber)
	: BaseClass<::Graphic3d_AxisAspect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, *(::Quantity_Color*)theNameColor->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance, theValuesOffset, theNameOffset, theTickmarksNumber, 10, true, true, true);
}

Macad::Occt::Graphic3d_AxisAspect::Graphic3d_AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset, int theNameOffset)
	: BaseClass<::Graphic3d_AxisAspect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, *(::Quantity_Color*)theNameColor->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance, theValuesOffset, theNameOffset, 5, 10, true, true, true);
}

Macad::Occt::Graphic3d_AxisAspect::Graphic3d_AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset)
	: BaseClass<::Graphic3d_AxisAspect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, *(::Quantity_Color*)theNameColor->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance, theValuesOffset, 30, 5, 10, true, true, true);
}

Macad::Occt::Graphic3d_AxisAspect::Graphic3d_AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor)
	: BaseClass<::Graphic3d_AxisAspect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, *(::Quantity_Color*)theNameColor->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance, 10, 30, 5, 10, true, true, true);
}

Macad::Occt::Graphic3d_AxisAspect::Graphic3d_AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor)
	: BaseClass<::Graphic3d_AxisAspect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, *(::Quantity_Color*)theNameColor->NativeInstance, Quantity_NOC_BLACK, 10, 30, 5, 10, true, true, true);
}

Macad::Occt::Graphic3d_AxisAspect::Graphic3d_AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName)
	: BaseClass<::Graphic3d_AxisAspect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, Quantity_NOC_BLACK, Quantity_NOC_BLACK, 10, 30, 5, 10, true, true, true);
}

Macad::Occt::Graphic3d_AxisAspect::Graphic3d_AxisAspect(Macad::Occt::Graphic3d_AxisAspect^ parameter1)
	: BaseClass<::Graphic3d_AxisAspect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_AxisAspect(*(::Graphic3d_AxisAspect*)parameter1->NativeInstance);
}

void Macad::Occt::Graphic3d_AxisAspect::SetName(Macad::Occt::TCollection_ExtendedString^ theName)
{
	((::Graphic3d_AxisAspect*)_NativeInstance)->SetName(*(::TCollection_ExtendedString*)theName->NativeInstance);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::Graphic3d_AxisAspect::Name()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)((::Graphic3d_AxisAspect*)_NativeInstance)->Name();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

bool Macad::Occt::Graphic3d_AxisAspect::ToDrawName()
{
	return ((::Graphic3d_AxisAspect*)_NativeInstance)->ToDrawName();
}

void Macad::Occt::Graphic3d_AxisAspect::SetDrawName(bool theToDraw)
{
	((::Graphic3d_AxisAspect*)_NativeInstance)->SetDrawName(theToDraw);
}

bool Macad::Occt::Graphic3d_AxisAspect::ToDrawTickmarks()
{
	return ((::Graphic3d_AxisAspect*)_NativeInstance)->ToDrawTickmarks();
}

void Macad::Occt::Graphic3d_AxisAspect::SetDrawTickmarks(bool theToDraw)
{
	((::Graphic3d_AxisAspect*)_NativeInstance)->SetDrawTickmarks(theToDraw);
}

bool Macad::Occt::Graphic3d_AxisAspect::ToDrawValues()
{
	return ((::Graphic3d_AxisAspect*)_NativeInstance)->ToDrawValues();
}

void Macad::Occt::Graphic3d_AxisAspect::SetDrawValues(bool theToDraw)
{
	((::Graphic3d_AxisAspect*)_NativeInstance)->SetDrawValues(theToDraw);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_AxisAspect::NameColor()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Graphic3d_AxisAspect*)_NativeInstance)->NameColor();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_AxisAspect::SetNameColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_AxisAspect*)_NativeInstance)->SetNameColor(*(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_AxisAspect::Color()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Graphic3d_AxisAspect*)_NativeInstance)->Color();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_AxisAspect::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_AxisAspect*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

int Macad::Occt::Graphic3d_AxisAspect::TickmarksNumber()
{
	return ((::Graphic3d_AxisAspect*)_NativeInstance)->TickmarksNumber();
}

void Macad::Occt::Graphic3d_AxisAspect::SetTickmarksNumber(int theValue)
{
	((::Graphic3d_AxisAspect*)_NativeInstance)->SetTickmarksNumber(theValue);
}

int Macad::Occt::Graphic3d_AxisAspect::TickmarksLength()
{
	return ((::Graphic3d_AxisAspect*)_NativeInstance)->TickmarksLength();
}

void Macad::Occt::Graphic3d_AxisAspect::SetTickmarksLength(int theValue)
{
	((::Graphic3d_AxisAspect*)_NativeInstance)->SetTickmarksLength(theValue);
}

int Macad::Occt::Graphic3d_AxisAspect::ValuesOffset()
{
	return ((::Graphic3d_AxisAspect*)_NativeInstance)->ValuesOffset();
}

void Macad::Occt::Graphic3d_AxisAspect::SetValuesOffset(int theValue)
{
	((::Graphic3d_AxisAspect*)_NativeInstance)->SetValuesOffset(theValue);
}

int Macad::Occt::Graphic3d_AxisAspect::NameOffset()
{
	return ((::Graphic3d_AxisAspect*)_NativeInstance)->NameOffset();
}

void Macad::Occt::Graphic3d_AxisAspect::SetNameOffset(int theValue)
{
	((::Graphic3d_AxisAspect*)_NativeInstance)->SetNameOffset(theValue);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_GraduatedTrihedron
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_GraduatedTrihedron::Graphic3d_GraduatedTrihedron(Macad::Occt::TCollection_AsciiString^ theNamesFont)
	: BaseClass<::Graphic3d_GraduatedTrihedron>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_GraduatedTrihedron(*(::TCollection_AsciiString*)theNamesFont->NativeInstance, Font_FA_Bold, 12, "Arial", Font_FA_Regular, 12, 30.F, Quantity_NOC_WHITE, true, true);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::Graphic3d_GraduatedTrihedron(Macad::Occt::Graphic3d_GraduatedTrihedron^ parameter1)
	: BaseClass<::Graphic3d_GraduatedTrihedron>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_GraduatedTrihedron(*(::Graphic3d_GraduatedTrihedron*)parameter1->NativeInstance);
}

Macad::Occt::Graphic3d_AxisAspect^ Macad::Occt::Graphic3d_GraduatedTrihedron::ChangeXAxisAspect()
{
	::Graphic3d_AxisAspect* _result = new ::Graphic3d_AxisAspect("", Quantity_NOC_BLACK, Quantity_NOC_BLACK, 10, 30, 5, 10, true, true, true);
	*_result = ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ChangeXAxisAspect();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_AxisAspect(_result);
}

Macad::Occt::Graphic3d_AxisAspect^ Macad::Occt::Graphic3d_GraduatedTrihedron::ChangeYAxisAspect()
{
	::Graphic3d_AxisAspect* _result = new ::Graphic3d_AxisAspect("", Quantity_NOC_BLACK, Quantity_NOC_BLACK, 10, 30, 5, 10, true, true, true);
	*_result = ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ChangeYAxisAspect();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_AxisAspect(_result);
}

Macad::Occt::Graphic3d_AxisAspect^ Macad::Occt::Graphic3d_GraduatedTrihedron::ChangeZAxisAspect()
{
	::Graphic3d_AxisAspect* _result = new ::Graphic3d_AxisAspect("", Quantity_NOC_BLACK, Quantity_NOC_BLACK, 10, 30, 5, 10, true, true, true);
	*_result = ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ChangeZAxisAspect();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_AxisAspect(_result);
}

Macad::Occt::Graphic3d_AxisAspect^ Macad::Occt::Graphic3d_GraduatedTrihedron::ChangeAxisAspect(int theIndex)
{
	::Graphic3d_AxisAspect* _result = new ::Graphic3d_AxisAspect("", Quantity_NOC_BLACK, Quantity_NOC_BLACK, 10, 30, 5, 10, true, true, true);
	*_result = ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ChangeAxisAspect(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_AxisAspect(_result);
}

Macad::Occt::Graphic3d_AxisAspect^ Macad::Occt::Graphic3d_GraduatedTrihedron::XAxisAspect()
{
	::Graphic3d_AxisAspect* _result = new ::Graphic3d_AxisAspect("", Quantity_NOC_BLACK, Quantity_NOC_BLACK, 10, 30, 5, 10, true, true, true);
	*_result =  (::Graphic3d_AxisAspect)((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->XAxisAspect();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_AxisAspect(_result);
}

Macad::Occt::Graphic3d_AxisAspect^ Macad::Occt::Graphic3d_GraduatedTrihedron::YAxisAspect()
{
	::Graphic3d_AxisAspect* _result = new ::Graphic3d_AxisAspect("", Quantity_NOC_BLACK, Quantity_NOC_BLACK, 10, 30, 5, 10, true, true, true);
	*_result =  (::Graphic3d_AxisAspect)((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->YAxisAspect();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_AxisAspect(_result);
}

Macad::Occt::Graphic3d_AxisAspect^ Macad::Occt::Graphic3d_GraduatedTrihedron::ZAxisAspect()
{
	::Graphic3d_AxisAspect* _result = new ::Graphic3d_AxisAspect("", Quantity_NOC_BLACK, Quantity_NOC_BLACK, 10, 30, 5, 10, true, true, true);
	*_result =  (::Graphic3d_AxisAspect)((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ZAxisAspect();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_AxisAspect(_result);
}

Macad::Occt::Graphic3d_AxisAspect^ Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect(int theIndex)
{
	::Graphic3d_AxisAspect* _result = new ::Graphic3d_AxisAspect("", Quantity_NOC_BLACK, Quantity_NOC_BLACK, 10, 30, 5, 10, true, true, true);
	*_result =  (::Graphic3d_AxisAspect)((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->AxisAspect(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_AxisAspect(_result);
}

float Macad::Occt::Graphic3d_GraduatedTrihedron::ArrowsLength()
{
	return ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ArrowsLength();
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::SetArrowsLength(float theValue)
{
	((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->SetArrowsLength(theValue);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_GraduatedTrihedron::GridColor()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->GridColor();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::SetGridColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->SetGridColor(*(::Quantity_Color*)theColor->NativeInstance);
}

bool Macad::Occt::Graphic3d_GraduatedTrihedron::ToDrawGrid()
{
	return ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ToDrawGrid();
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::SetDrawGrid(bool theToDraw)
{
	((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->SetDrawGrid(theToDraw);
}

bool Macad::Occt::Graphic3d_GraduatedTrihedron::ToDrawAxes()
{
	return ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ToDrawAxes();
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::SetDrawAxes(bool theToDraw)
{
	((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->SetDrawAxes(theToDraw);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_GraduatedTrihedron::NamesFont()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->NamesFont();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::SetNamesFont(Macad::Occt::TCollection_AsciiString^ theFont)
{
	((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->SetNamesFont(*(::TCollection_AsciiString*)theFont->NativeInstance);
}

int Macad::Occt::Graphic3d_GraduatedTrihedron::NamesSize()
{
	return ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->NamesSize();
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::SetNamesSize(int theValue)
{
	((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->SetNamesSize(theValue);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_GraduatedTrihedron::ValuesFont()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ValuesFont();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::SetValuesFont(Macad::Occt::TCollection_AsciiString^ theFont)
{
	((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->SetValuesFont(*(::TCollection_AsciiString*)theFont->NativeInstance);
}

int Macad::Occt::Graphic3d_GraduatedTrihedron::ValuesSize()
{
	return ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ValuesSize();
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::SetValuesSize(int theValue)
{
	((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->SetValuesSize(theValue);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_RenderingParams
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_RenderingParams::Graphic3d_RenderingParams()
	: BaseClass<::Graphic3d_RenderingParams>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_RenderingParams();
}

Macad::Occt::Graphic3d_RenderingParams::Graphic3d_RenderingParams(Macad::Occt::Graphic3d_RenderingParams^ parameter1)
	: BaseClass<::Graphic3d_RenderingParams>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_RenderingParams(*(::Graphic3d_RenderingParams*)parameter1->NativeInstance);
}

float Macad::Occt::Graphic3d_RenderingParams::ResolutionRatio()
{
	return ((::Graphic3d_RenderingParams*)_NativeInstance)->ResolutionRatio();
}




//---------------------------------------------------------------------
//  Class  Graphic3d_Texture2D
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Texture2D::Graphic3d_Texture2D(Macad::Occt::Graphic3d_Texture2D^ parameter1)
	: Macad::Occt::Graphic3d_TextureMap(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Texture2D(*(::Graphic3d_Texture2D*)parameter1->NativeInstance);
}

int Macad::Occt::Graphic3d_Texture2D::NumberOfTextures()
{
	return ::Graphic3d_Texture2D::NumberOfTextures();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_Texture2D::TextureName(int theRank)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Graphic3d_Texture2D::TextureName(theRank);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Graphic3d_NameOfTexture2D Macad::Occt::Graphic3d_Texture2D::Name()
{
	return (Macad::Occt::Graphic3d_NameOfTexture2D)((::Graphic3d_Texture2D*)_NativeInstance)->Name();
}

void Macad::Occt::Graphic3d_Texture2D::SetImage(Macad::Occt::Image_PixMap^ thePixMap)
{
	Handle(::Image_PixMap) h_thePixMap = thePixMap->NativeInstance;
	((::Graphic3d_Texture2D*)_NativeInstance)->SetImage(h_thePixMap);
	thePixMap->NativeInstance = h_thePixMap.get();
}

bool Macad::Occt::Graphic3d_Texture2D::HasMipMaps()
{
	return ((::Graphic3d_Texture2D*)_NativeInstance)->HasMipMaps();
}

void Macad::Occt::Graphic3d_Texture2D::SetMipMaps(bool theToUse)
{
	((::Graphic3d_Texture2D*)_NativeInstance)->SetMipMaps(theToUse);
}


Macad::Occt::Graphic3d_Texture2D^ Macad::Occt::Graphic3d_Texture2D::CreateDowncasted(::Graphic3d_Texture2D* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_Texture2Dmanual)))
		return Macad::Occt::Graphic3d_Texture2Dmanual::CreateDowncasted((::Graphic3d_Texture2Dmanual*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_MediaTexture)))
		return Macad::Occt::Graphic3d_MediaTexture::CreateDowncasted((::Graphic3d_MediaTexture*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_Texture2Dplane)))
		return Macad::Occt::Graphic3d_Texture2Dplane::CreateDowncasted((::Graphic3d_Texture2Dplane*)instance);

	return gcnew Macad::Occt::Graphic3d_Texture2D( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Texture2Dmanual
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Texture2Dmanual::Graphic3d_Texture2Dmanual(Macad::Occt::TCollection_AsciiString^ theFileName)
	: Macad::Occt::Graphic3d_Texture2D(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Texture2Dmanual(*(::TCollection_AsciiString*)theFileName->NativeInstance);
}

Macad::Occt::Graphic3d_Texture2Dmanual::Graphic3d_Texture2Dmanual(Macad::Occt::Graphic3d_NameOfTexture2D theNOT)
	: Macad::Occt::Graphic3d_Texture2D(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Texture2Dmanual((::Graphic3d_NameOfTexture2D)theNOT);
}

Macad::Occt::Graphic3d_Texture2Dmanual::Graphic3d_Texture2Dmanual(Macad::Occt::Image_PixMap^ thePixMap)
	: Macad::Occt::Graphic3d_Texture2D(BaseClass::InitMode::Uninitialized)
{
	Handle(::Image_PixMap) h_thePixMap = thePixMap->NativeInstance;
	NativeInstance = new ::Graphic3d_Texture2Dmanual(h_thePixMap);
	thePixMap->NativeInstance = h_thePixMap.get();
}

Macad::Occt::Graphic3d_Texture2Dmanual::Graphic3d_Texture2Dmanual(Macad::Occt::Graphic3d_Texture2Dmanual^ parameter1)
	: Macad::Occt::Graphic3d_Texture2D(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Texture2Dmanual(*(::Graphic3d_Texture2Dmanual*)parameter1->NativeInstance);
}


Macad::Occt::Graphic3d_Texture2Dmanual^ Macad::Occt::Graphic3d_Texture2Dmanual::CreateDowncasted(::Graphic3d_Texture2Dmanual* instance)
{
	return gcnew Macad::Occt::Graphic3d_Texture2Dmanual( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_TextureEnv
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_TextureEnv::Graphic3d_TextureEnv(Macad::Occt::TCollection_AsciiString^ theFileName)
	: Macad::Occt::Graphic3d_TextureRoot(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_TextureEnv(*(::TCollection_AsciiString*)theFileName->NativeInstance);
}

Macad::Occt::Graphic3d_TextureEnv::Graphic3d_TextureEnv(Macad::Occt::Graphic3d_NameOfTextureEnv theName)
	: Macad::Occt::Graphic3d_TextureRoot(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_TextureEnv((::Graphic3d_NameOfTextureEnv)theName);
}

Macad::Occt::Graphic3d_TextureEnv::Graphic3d_TextureEnv(Macad::Occt::Image_PixMap^ thePixMap)
	: Macad::Occt::Graphic3d_TextureRoot(BaseClass::InitMode::Uninitialized)
{
	Handle(::Image_PixMap) h_thePixMap = thePixMap->NativeInstance;
	NativeInstance = new ::Graphic3d_TextureEnv(h_thePixMap);
	thePixMap->NativeInstance = h_thePixMap.get();
}

Macad::Occt::Graphic3d_TextureEnv::Graphic3d_TextureEnv(Macad::Occt::Graphic3d_TextureEnv^ parameter1)
	: Macad::Occt::Graphic3d_TextureRoot(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_TextureEnv(*(::Graphic3d_TextureEnv*)parameter1->NativeInstance);
}

Macad::Occt::Graphic3d_NameOfTextureEnv Macad::Occt::Graphic3d_TextureEnv::Name()
{
	return (Macad::Occt::Graphic3d_NameOfTextureEnv)((::Graphic3d_TextureEnv*)_NativeInstance)->Name();
}

int Macad::Occt::Graphic3d_TextureEnv::NumberOfTextures()
{
	return ::Graphic3d_TextureEnv::NumberOfTextures();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_TextureEnv::TextureName(int theRank)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Graphic3d_TextureEnv::TextureName(theRank);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}


Macad::Occt::Graphic3d_TextureEnv^ Macad::Occt::Graphic3d_TextureEnv::CreateDowncasted(::Graphic3d_TextureEnv* instance)
{
	return gcnew Macad::Occt::Graphic3d_TextureEnv( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_LightSet
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_LightSet::Graphic3d_LightSet()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_LightSet();
}

Macad::Occt::Graphic3d_LightSet::Graphic3d_LightSet(Macad::Occt::Graphic3d_LightSet^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_LightSet(*(::Graphic3d_LightSet*)parameter1->NativeInstance);
}

int Macad::Occt::Graphic3d_LightSet::Lower()
{
	return ((::Graphic3d_LightSet*)_NativeInstance)->Lower();
}

int Macad::Occt::Graphic3d_LightSet::Upper()
{
	return ((::Graphic3d_LightSet*)_NativeInstance)->Upper();
}

bool Macad::Occt::Graphic3d_LightSet::IsEmpty()
{
	return ((::Graphic3d_LightSet*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::Graphic3d_LightSet::Extent()
{
	return ((::Graphic3d_LightSet*)_NativeInstance)->Extent();
}

Macad::Occt::Graphic3d_CLight^ Macad::Occt::Graphic3d_LightSet::Value(int theIndex)
{
	Handle(::Graphic3d_CLight) _result;
	_result = ((::Graphic3d_LightSet*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_CLight::CreateDowncasted( _result.get());
}

bool Macad::Occt::Graphic3d_LightSet::Contains(Macad::Occt::Graphic3d_CLight^ theLight)
{
	Handle(::Graphic3d_CLight) h_theLight = theLight->NativeInstance;
	return ((::Graphic3d_LightSet*)_NativeInstance)->Contains(h_theLight);
	theLight->NativeInstance = h_theLight.get();
}

bool Macad::Occt::Graphic3d_LightSet::Add(Macad::Occt::Graphic3d_CLight^ theLight)
{
	Handle(::Graphic3d_CLight) h_theLight = theLight->NativeInstance;
	return ((::Graphic3d_LightSet*)_NativeInstance)->Add(h_theLight);
	theLight->NativeInstance = h_theLight.get();
}

bool Macad::Occt::Graphic3d_LightSet::Remove(Macad::Occt::Graphic3d_CLight^ theLight)
{
	Handle(::Graphic3d_CLight) h_theLight = theLight->NativeInstance;
	return ((::Graphic3d_LightSet*)_NativeInstance)->Remove(h_theLight);
	theLight->NativeInstance = h_theLight.get();
}

int Macad::Occt::Graphic3d_LightSet::NbLightsOfType(Macad::Occt::Graphic3d_TypeOfLightSource theType)
{
	return ((::Graphic3d_LightSet*)_NativeInstance)->NbLightsOfType((::Graphic3d_TypeOfLightSource)theType);
}

size_t Macad::Occt::Graphic3d_LightSet::UpdateRevision()
{
	return ((::Graphic3d_LightSet*)_NativeInstance)->UpdateRevision();
}

size_t Macad::Occt::Graphic3d_LightSet::Revision()
{
	return ((::Graphic3d_LightSet*)_NativeInstance)->Revision();
}

int Macad::Occt::Graphic3d_LightSet::NbEnabled()
{
	return ((::Graphic3d_LightSet*)_NativeInstance)->NbEnabled();
}

int Macad::Occt::Graphic3d_LightSet::NbEnabledLightsOfType(Macad::Occt::Graphic3d_TypeOfLightSource theType)
{
	return ((::Graphic3d_LightSet*)_NativeInstance)->NbEnabledLightsOfType((::Graphic3d_TypeOfLightSource)theType);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_LightSet::KeyEnabledLong()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Graphic3d_LightSet*)_NativeInstance)->KeyEnabledLong();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_LightSet::KeyEnabledShort()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Graphic3d_LightSet*)_NativeInstance)->KeyEnabledShort();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}


Macad::Occt::Graphic3d_LightSet^ Macad::Occt::Graphic3d_LightSet::CreateDowncasted(::Graphic3d_LightSet* instance)
{
	return gcnew Macad::Occt::Graphic3d_LightSet( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_FrameStatsData
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_FrameStatsData::Graphic3d_FrameStatsData()
	: BaseClass<::Graphic3d_FrameStatsData>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_FrameStatsData();
}

Macad::Occt::Graphic3d_FrameStatsData::Graphic3d_FrameStatsData(Macad::Occt::Graphic3d_FrameStatsData^ parameter1)
	: BaseClass<::Graphic3d_FrameStatsData>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_FrameStatsData(*(::Graphic3d_FrameStatsData*)parameter1->NativeInstance);
}

double Macad::Occt::Graphic3d_FrameStatsData::FrameRate()
{
	return ((::Graphic3d_FrameStatsData*)_NativeInstance)->FrameRate();
}

double Macad::Occt::Graphic3d_FrameStatsData::FrameRateCpu()
{
	return ((::Graphic3d_FrameStatsData*)_NativeInstance)->FrameRateCpu();
}

double Macad::Occt::Graphic3d_FrameStatsData::ImmediateFrameRate()
{
	return ((::Graphic3d_FrameStatsData*)_NativeInstance)->ImmediateFrameRate();
}

double Macad::Occt::Graphic3d_FrameStatsData::ImmediateFrameRateCpu()
{
	return ((::Graphic3d_FrameStatsData*)_NativeInstance)->ImmediateFrameRateCpu();
}

size_t Macad::Occt::Graphic3d_FrameStatsData::CounterValue(Macad::Occt::Graphic3d_FrameStatsCounter theIndex)
{
	return ((::Graphic3d_FrameStatsData*)_NativeInstance)->CounterValue((::Graphic3d_FrameStatsCounter)theIndex);
}

double Macad::Occt::Graphic3d_FrameStatsData::TimerValue(Macad::Occt::Graphic3d_FrameStatsTimer theIndex)
{
	return ((::Graphic3d_FrameStatsData*)_NativeInstance)->TimerValue((::Graphic3d_FrameStatsTimer)theIndex);
}

void Macad::Occt::Graphic3d_FrameStatsData::Reset()
{
	((::Graphic3d_FrameStatsData*)_NativeInstance)->Reset();
}

void Macad::Occt::Graphic3d_FrameStatsData::FillMax(Macad::Occt::Graphic3d_FrameStatsData^ theOther)
{
	((::Graphic3d_FrameStatsData*)_NativeInstance)->FillMax(*(::Graphic3d_FrameStatsData*)theOther->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_FrameStatsDataTmp
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_FrameStatsDataTmp::Graphic3d_FrameStatsDataTmp()
	: Macad::Occt::Graphic3d_FrameStatsData(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_FrameStatsDataTmp();
}

Macad::Occt::Graphic3d_FrameStatsDataTmp::Graphic3d_FrameStatsDataTmp(Macad::Occt::Graphic3d_FrameStatsDataTmp^ parameter1)
	: Macad::Occt::Graphic3d_FrameStatsData(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Graphic3d_FrameStatsDataTmp(*(::Graphic3d_FrameStatsDataTmp*)parameter1->NativeInstance);
}

void Macad::Occt::Graphic3d_FrameStatsDataTmp::FlushTimers(size_t theNbFrames, bool theIsFinal)
{
	((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->FlushTimers(theNbFrames, theIsFinal);
}

void Macad::Occt::Graphic3d_FrameStatsDataTmp::Reset()
{
	((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->Reset();
}

double Macad::Occt::Graphic3d_FrameStatsDataTmp::ChangeFrameRate()
{
	return ((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->ChangeFrameRate();
}

double Macad::Occt::Graphic3d_FrameStatsDataTmp::ChangeFrameRateCpu()
{
	return ((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->ChangeFrameRateCpu();
}

double Macad::Occt::Graphic3d_FrameStatsDataTmp::ChangeImmediateFrameRate()
{
	return ((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->ChangeImmediateFrameRate();
}

double Macad::Occt::Graphic3d_FrameStatsDataTmp::ChangeImmediateFrameRateCpu()
{
	return ((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->ChangeImmediateFrameRateCpu();
}

size_t Macad::Occt::Graphic3d_FrameStatsDataTmp::ChangeCounterValue(Macad::Occt::Graphic3d_FrameStatsCounter theIndex)
{
	return ((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->ChangeCounterValue((::Graphic3d_FrameStatsCounter)theIndex);
}

double Macad::Occt::Graphic3d_FrameStatsDataTmp::ChangeTimerValue(Macad::Occt::Graphic3d_FrameStatsTimer theIndex)
{
	return ((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->ChangeTimerValue((::Graphic3d_FrameStatsTimer)theIndex);
}




//---------------------------------------------------------------------
//  Class  Graphic3d_FrameStats
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_FrameStats::Graphic3d_FrameStats()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Graphic3d_FrameStats::Graphic3d_FrameStats(Macad::Occt::Graphic3d_FrameStats^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

double Macad::Occt::Graphic3d_FrameStats::UpdateInterval()
{
	return ((::Graphic3d_FrameStats*)_NativeInstance)->UpdateInterval();
}

void Macad::Occt::Graphic3d_FrameStats::SetUpdateInterval(double theInterval)
{
	((::Graphic3d_FrameStats*)_NativeInstance)->SetUpdateInterval(theInterval);
}

bool Macad::Occt::Graphic3d_FrameStats::IsLongLineFormat()
{
	return ((::Graphic3d_FrameStats*)_NativeInstance)->IsLongLineFormat();
}

void Macad::Occt::Graphic3d_FrameStats::SetLongLineFormat(bool theValue)
{
	((::Graphic3d_FrameStats*)_NativeInstance)->SetLongLineFormat(theValue);
}

void Macad::Occt::Graphic3d_FrameStats::FrameStart(Macad::Occt::Graphic3d_CView^ theView, bool theIsImmediateOnly)
{
	Handle(::Graphic3d_CView) h_theView = theView->NativeInstance;
	((::Graphic3d_FrameStats*)_NativeInstance)->FrameStart(h_theView, theIsImmediateOnly);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::Graphic3d_FrameStats::FrameEnd(Macad::Occt::Graphic3d_CView^ theView, bool theIsImmediateOnly)
{
	Handle(::Graphic3d_CView) h_theView = theView->NativeInstance;
	((::Graphic3d_FrameStats*)_NativeInstance)->FrameEnd(h_theView, theIsImmediateOnly);
	theView->NativeInstance = h_theView.get();
}

double Macad::Occt::Graphic3d_FrameStats::FrameDuration()
{
	return ((::Graphic3d_FrameStats*)_NativeInstance)->FrameDuration();
}

double Macad::Occt::Graphic3d_FrameStats::FrameRate()
{
	return ((::Graphic3d_FrameStats*)_NativeInstance)->FrameRate();
}

double Macad::Occt::Graphic3d_FrameStats::FrameRateCpu()
{
	return ((::Graphic3d_FrameStats*)_NativeInstance)->FrameRateCpu();
}

size_t Macad::Occt::Graphic3d_FrameStats::CounterValue(Macad::Occt::Graphic3d_FrameStatsCounter theCounter)
{
	return ((::Graphic3d_FrameStats*)_NativeInstance)->CounterValue((::Graphic3d_FrameStatsCounter)theCounter);
}

double Macad::Occt::Graphic3d_FrameStats::TimerValue(Macad::Occt::Graphic3d_FrameStatsTimer theTimer)
{
	return ((::Graphic3d_FrameStats*)_NativeInstance)->TimerValue((::Graphic3d_FrameStatsTimer)theTimer);
}

bool Macad::Occt::Graphic3d_FrameStats::HasCulledLayers()
{
	return ((::Graphic3d_FrameStats*)_NativeInstance)->HasCulledLayers();
}

bool Macad::Occt::Graphic3d_FrameStats::HasCulledStructs()
{
	return ((::Graphic3d_FrameStats*)_NativeInstance)->HasCulledStructs();
}

Macad::Occt::Graphic3d_FrameStatsData^ Macad::Occt::Graphic3d_FrameStats::LastDataFrame()
{
	::Graphic3d_FrameStatsData* _result = new ::Graphic3d_FrameStatsData();
	*_result =  (::Graphic3d_FrameStatsData)((::Graphic3d_FrameStats*)_NativeInstance)->LastDataFrame();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_FrameStatsData(_result);
}

int Macad::Occt::Graphic3d_FrameStats::LastDataFrameIndex()
{
	return ((::Graphic3d_FrameStats*)_NativeInstance)->LastDataFrameIndex();
}

size_t Macad::Occt::Graphic3d_FrameStats::ChangeCounter(Macad::Occt::Graphic3d_FrameStatsCounter theCounter)
{
	return ((::Graphic3d_FrameStats*)_NativeInstance)->ChangeCounter((::Graphic3d_FrameStatsCounter)theCounter);
}

double Macad::Occt::Graphic3d_FrameStats::ChangeTimer(Macad::Occt::Graphic3d_FrameStatsTimer theTimer)
{
	return ((::Graphic3d_FrameStats*)_NativeInstance)->ChangeTimer((::Graphic3d_FrameStatsTimer)theTimer);
}

Macad::Occt::Graphic3d_FrameStatsDataTmp^ Macad::Occt::Graphic3d_FrameStats::ActiveDataFrame()
{
	::Graphic3d_FrameStatsDataTmp* _result = new ::Graphic3d_FrameStatsDataTmp();
	*_result = ((::Graphic3d_FrameStats*)_NativeInstance)->ActiveDataFrame();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_FrameStatsDataTmp(_result);
}


Macad::Occt::Graphic3d_FrameStats^ Macad::Occt::Graphic3d_FrameStats::CreateDowncasted(::Graphic3d_FrameStats* instance)
{
	return gcnew Macad::Occt::Graphic3d_FrameStats( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_TransformError
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_TransformError::Graphic3d_TransformError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_TransformError();
}

Macad::Occt::Graphic3d_TransformError::Graphic3d_TransformError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Graphic3d_TransformError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Graphic3d_TransformError::Graphic3d_TransformError(Macad::Occt::Graphic3d_TransformError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_TransformError(*(::Graphic3d_TransformError*)parameter1->NativeInstance);
}

void Macad::Occt::Graphic3d_TransformError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Graphic3d_TransformError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Graphic3d_TransformError::Raise()
{
	::Graphic3d_TransformError::Raise("");
}

Macad::Occt::Graphic3d_TransformError^ Macad::Occt::Graphic3d_TransformError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Graphic3d_TransformError) _result;
	_result = ::Graphic3d_TransformError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TransformError::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_TransformError^ Macad::Occt::Graphic3d_TransformError::NewInstance()
{
	Handle(::Graphic3d_TransformError) _result;
	_result = ::Graphic3d_TransformError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TransformError::CreateDowncasted( _result.get());
}


Macad::Occt::Graphic3d_TransformError^ Macad::Occt::Graphic3d_TransformError::CreateDowncasted(::Graphic3d_TransformError* instance)
{
	return gcnew Macad::Occt::Graphic3d_TransformError( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_GroupDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_GroupDefinitionError::Graphic3d_GroupDefinitionError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_GroupDefinitionError();
}

Macad::Occt::Graphic3d_GroupDefinitionError::Graphic3d_GroupDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Graphic3d_GroupDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Graphic3d_GroupDefinitionError::Graphic3d_GroupDefinitionError(Macad::Occt::Graphic3d_GroupDefinitionError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_GroupDefinitionError(*(::Graphic3d_GroupDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Graphic3d_GroupDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Graphic3d_GroupDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Graphic3d_GroupDefinitionError::Raise()
{
	::Graphic3d_GroupDefinitionError::Raise("");
}

Macad::Occt::Graphic3d_GroupDefinitionError^ Macad::Occt::Graphic3d_GroupDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Graphic3d_GroupDefinitionError) _result;
	_result = ::Graphic3d_GroupDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_GroupDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_GroupDefinitionError^ Macad::Occt::Graphic3d_GroupDefinitionError::NewInstance()
{
	Handle(::Graphic3d_GroupDefinitionError) _result;
	_result = ::Graphic3d_GroupDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_GroupDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Graphic3d_GroupDefinitionError^ Macad::Occt::Graphic3d_GroupDefinitionError::CreateDowncasted(::Graphic3d_GroupDefinitionError* instance)
{
	return gcnew Macad::Occt::Graphic3d_GroupDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_MaterialDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_MaterialDefinitionError::Graphic3d_MaterialDefinitionError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_MaterialDefinitionError();
}

Macad::Occt::Graphic3d_MaterialDefinitionError::Graphic3d_MaterialDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Graphic3d_MaterialDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Graphic3d_MaterialDefinitionError::Graphic3d_MaterialDefinitionError(Macad::Occt::Graphic3d_MaterialDefinitionError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_MaterialDefinitionError(*(::Graphic3d_MaterialDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Graphic3d_MaterialDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Graphic3d_MaterialDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Graphic3d_MaterialDefinitionError::Raise()
{
	::Graphic3d_MaterialDefinitionError::Raise("");
}

Macad::Occt::Graphic3d_MaterialDefinitionError^ Macad::Occt::Graphic3d_MaterialDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Graphic3d_MaterialDefinitionError) _result;
	_result = ::Graphic3d_MaterialDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_MaterialDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_MaterialDefinitionError^ Macad::Occt::Graphic3d_MaterialDefinitionError::NewInstance()
{
	Handle(::Graphic3d_MaterialDefinitionError) _result;
	_result = ::Graphic3d_MaterialDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_MaterialDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Graphic3d_MaterialDefinitionError^ Macad::Occt::Graphic3d_MaterialDefinitionError::CreateDowncasted(::Graphic3d_MaterialDefinitionError* instance)
{
	return gcnew Macad::Occt::Graphic3d_MaterialDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_MediaTexture
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_MediaTexture::Graphic3d_MediaTexture(Macad::Occt::Graphic3d_MediaTexture^ parameter1)
	: Macad::Occt::Graphic3d_Texture2D(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_MediaTexture(*(::Graphic3d_MediaTexture*)parameter1->NativeInstance);
}

Macad::Occt::Image_PixMap^ Macad::Occt::Graphic3d_MediaTexture::GetImage(Macad::Occt::Image_SupportedFormats^ theSupported)
{
	Handle(::Image_SupportedFormats) h_theSupported = theSupported->NativeInstance;
	Handle(::Image_PixMap) _result;
	_result = ((::Graphic3d_MediaTexture*)_NativeInstance)->GetImage(h_theSupported);
	theSupported->NativeInstance = h_theSupported.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Image_PixMap::CreateDowncasted( _result.get());
}

void Macad::Occt::Graphic3d_MediaTexture::GenerateNewId()
{
	((::Graphic3d_MediaTexture*)_NativeInstance)->GenerateNewId();
}


Macad::Occt::Graphic3d_MediaTexture^ Macad::Occt::Graphic3d_MediaTexture::CreateDowncasted(::Graphic3d_MediaTexture* instance)
{
	return gcnew Macad::Occt::Graphic3d_MediaTexture( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_PriorityDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_PriorityDefinitionError::Graphic3d_PriorityDefinitionError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_PriorityDefinitionError();
}

Macad::Occt::Graphic3d_PriorityDefinitionError::Graphic3d_PriorityDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Graphic3d_PriorityDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Graphic3d_PriorityDefinitionError::Graphic3d_PriorityDefinitionError(Macad::Occt::Graphic3d_PriorityDefinitionError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_PriorityDefinitionError(*(::Graphic3d_PriorityDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Graphic3d_PriorityDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Graphic3d_PriorityDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Graphic3d_PriorityDefinitionError::Raise()
{
	::Graphic3d_PriorityDefinitionError::Raise("");
}

Macad::Occt::Graphic3d_PriorityDefinitionError^ Macad::Occt::Graphic3d_PriorityDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Graphic3d_PriorityDefinitionError) _result;
	_result = ::Graphic3d_PriorityDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_PriorityDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_PriorityDefinitionError^ Macad::Occt::Graphic3d_PriorityDefinitionError::NewInstance()
{
	Handle(::Graphic3d_PriorityDefinitionError) _result;
	_result = ::Graphic3d_PriorityDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_PriorityDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Graphic3d_PriorityDefinitionError^ Macad::Occt::Graphic3d_PriorityDefinitionError::CreateDowncasted(::Graphic3d_PriorityDefinitionError* instance)
{
	return gcnew Macad::Occt::Graphic3d_PriorityDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_StructureDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_StructureDefinitionError::Graphic3d_StructureDefinitionError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_StructureDefinitionError();
}

Macad::Occt::Graphic3d_StructureDefinitionError::Graphic3d_StructureDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Graphic3d_StructureDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Graphic3d_StructureDefinitionError::Graphic3d_StructureDefinitionError(Macad::Occt::Graphic3d_StructureDefinitionError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_StructureDefinitionError(*(::Graphic3d_StructureDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Graphic3d_StructureDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Graphic3d_StructureDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Graphic3d_StructureDefinitionError::Raise()
{
	::Graphic3d_StructureDefinitionError::Raise("");
}

Macad::Occt::Graphic3d_StructureDefinitionError^ Macad::Occt::Graphic3d_StructureDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Graphic3d_StructureDefinitionError) _result;
	_result = ::Graphic3d_StructureDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_StructureDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_StructureDefinitionError^ Macad::Occt::Graphic3d_StructureDefinitionError::NewInstance()
{
	Handle(::Graphic3d_StructureDefinitionError) _result;
	_result = ::Graphic3d_StructureDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_StructureDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Graphic3d_StructureDefinitionError^ Macad::Occt::Graphic3d_StructureDefinitionError::CreateDowncasted(::Graphic3d_StructureDefinitionError* instance)
{
	return gcnew Macad::Occt::Graphic3d_StructureDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Texture1D
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Texture1D::Graphic3d_Texture1D(Macad::Occt::Graphic3d_Texture1D^ parameter1)
	: Macad::Occt::Graphic3d_TextureMap(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Texture1D(*(::Graphic3d_Texture1D*)parameter1->NativeInstance);
}

Macad::Occt::Graphic3d_NameOfTexture1D Macad::Occt::Graphic3d_Texture1D::Name()
{
	return (Macad::Occt::Graphic3d_NameOfTexture1D)((::Graphic3d_Texture1D*)_NativeInstance)->Name();
}

int Macad::Occt::Graphic3d_Texture1D::NumberOfTextures()
{
	return ::Graphic3d_Texture1D::NumberOfTextures();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_Texture1D::TextureName(int aRank)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Graphic3d_Texture1D::TextureName(aRank);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}


Macad::Occt::Graphic3d_Texture1D^ Macad::Occt::Graphic3d_Texture1D::CreateDowncasted(::Graphic3d_Texture1D* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_Texture1Dmanual)))
		return Macad::Occt::Graphic3d_Texture1Dmanual::CreateDowncasted((::Graphic3d_Texture1Dmanual*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_Texture1Dsegment)))
		return Macad::Occt::Graphic3d_Texture1Dsegment::CreateDowncasted((::Graphic3d_Texture1Dsegment*)instance);

	return gcnew Macad::Occt::Graphic3d_Texture1D( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Texture1Dmanual
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Texture1Dmanual::Graphic3d_Texture1Dmanual(Macad::Occt::TCollection_AsciiString^ theFileName)
	: Macad::Occt::Graphic3d_Texture1D(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Texture1Dmanual(*(::TCollection_AsciiString*)theFileName->NativeInstance);
}

Macad::Occt::Graphic3d_Texture1Dmanual::Graphic3d_Texture1Dmanual(Macad::Occt::Graphic3d_NameOfTexture1D theNOT)
	: Macad::Occt::Graphic3d_Texture1D(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Texture1Dmanual((::Graphic3d_NameOfTexture1D)theNOT);
}

Macad::Occt::Graphic3d_Texture1Dmanual::Graphic3d_Texture1Dmanual(Macad::Occt::Image_PixMap^ thePixMap)
	: Macad::Occt::Graphic3d_Texture1D(BaseClass::InitMode::Uninitialized)
{
	Handle(::Image_PixMap) h_thePixMap = thePixMap->NativeInstance;
	NativeInstance = new ::Graphic3d_Texture1Dmanual(h_thePixMap);
	thePixMap->NativeInstance = h_thePixMap.get();
}

Macad::Occt::Graphic3d_Texture1Dmanual::Graphic3d_Texture1Dmanual(Macad::Occt::Graphic3d_Texture1Dmanual^ parameter1)
	: Macad::Occt::Graphic3d_Texture1D(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Texture1Dmanual(*(::Graphic3d_Texture1Dmanual*)parameter1->NativeInstance);
}


Macad::Occt::Graphic3d_Texture1Dmanual^ Macad::Occt::Graphic3d_Texture1Dmanual::CreateDowncasted(::Graphic3d_Texture1Dmanual* instance)
{
	return gcnew Macad::Occt::Graphic3d_Texture1Dmanual( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Texture1Dsegment
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Texture1Dsegment::Graphic3d_Texture1Dsegment(Macad::Occt::TCollection_AsciiString^ theFileName)
	: Macad::Occt::Graphic3d_Texture1D(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Texture1Dsegment(*(::TCollection_AsciiString*)theFileName->NativeInstance);
}

Macad::Occt::Graphic3d_Texture1Dsegment::Graphic3d_Texture1Dsegment(Macad::Occt::Graphic3d_NameOfTexture1D theNOT)
	: Macad::Occt::Graphic3d_Texture1D(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Texture1Dsegment((::Graphic3d_NameOfTexture1D)theNOT);
}

Macad::Occt::Graphic3d_Texture1Dsegment::Graphic3d_Texture1Dsegment(Macad::Occt::Image_PixMap^ thePixMap)
	: Macad::Occt::Graphic3d_Texture1D(BaseClass::InitMode::Uninitialized)
{
	Handle(::Image_PixMap) h_thePixMap = thePixMap->NativeInstance;
	NativeInstance = new ::Graphic3d_Texture1Dsegment(h_thePixMap);
	thePixMap->NativeInstance = h_thePixMap.get();
}

Macad::Occt::Graphic3d_Texture1Dsegment::Graphic3d_Texture1Dsegment(Macad::Occt::Graphic3d_Texture1Dsegment^ parameter1)
	: Macad::Occt::Graphic3d_Texture1D(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Texture1Dsegment(*(::Graphic3d_Texture1Dsegment*)parameter1->NativeInstance);
}

void Macad::Occt::Graphic3d_Texture1Dsegment::SetSegment(float theX1, float theY1, float theZ1, float theX2, float theY2, float theZ2)
{
	((::Graphic3d_Texture1Dsegment*)_NativeInstance)->SetSegment(theX1, theY1, theZ1, theX2, theY2, theZ2);
}

void Macad::Occt::Graphic3d_Texture1Dsegment::Segment(float% theX1, float% theY1, float% theZ1, float% theX2, float% theY2, float% theZ2)
{
	pin_ptr<float> pp_theX1 = &theX1;
	pin_ptr<float> pp_theY1 = &theY1;
	pin_ptr<float> pp_theZ1 = &theZ1;
	pin_ptr<float> pp_theX2 = &theX2;
	pin_ptr<float> pp_theY2 = &theY2;
	pin_ptr<float> pp_theZ2 = &theZ2;
	((::Graphic3d_Texture1Dsegment*)_NativeInstance)->Segment(*(Standard_ShortReal*)pp_theX1, *(Standard_ShortReal*)pp_theY1, *(Standard_ShortReal*)pp_theZ1, *(Standard_ShortReal*)pp_theX2, *(Standard_ShortReal*)pp_theY2, *(Standard_ShortReal*)pp_theZ2);
}


Macad::Occt::Graphic3d_Texture1Dsegment^ Macad::Occt::Graphic3d_Texture1Dsegment::CreateDowncasted(::Graphic3d_Texture1Dsegment* instance)
{
	return gcnew Macad::Occt::Graphic3d_Texture1Dsegment( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Texture2Dplane
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Texture2Dplane::Graphic3d_Texture2Dplane(Macad::Occt::TCollection_AsciiString^ theFileName)
	: Macad::Occt::Graphic3d_Texture2D(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Texture2Dplane(*(::TCollection_AsciiString*)theFileName->NativeInstance);
}

Macad::Occt::Graphic3d_Texture2Dplane::Graphic3d_Texture2Dplane(Macad::Occt::Graphic3d_NameOfTexture2D theNOT)
	: Macad::Occt::Graphic3d_Texture2D(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Texture2Dplane((::Graphic3d_NameOfTexture2D)theNOT);
}

Macad::Occt::Graphic3d_Texture2Dplane::Graphic3d_Texture2Dplane(Macad::Occt::Image_PixMap^ thePixMap)
	: Macad::Occt::Graphic3d_Texture2D(BaseClass::InitMode::Uninitialized)
{
	Handle(::Image_PixMap) h_thePixMap = thePixMap->NativeInstance;
	NativeInstance = new ::Graphic3d_Texture2Dplane(h_thePixMap);
	thePixMap->NativeInstance = h_thePixMap.get();
}

Macad::Occt::Graphic3d_Texture2Dplane::Graphic3d_Texture2Dplane(Macad::Occt::Graphic3d_Texture2Dplane^ parameter1)
	: Macad::Occt::Graphic3d_Texture2D(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Graphic3d_Texture2Dplane(*(::Graphic3d_Texture2Dplane*)parameter1->NativeInstance);
}

void Macad::Occt::Graphic3d_Texture2Dplane::SetPlaneS(float A, float B, float C, float D)
{
	((::Graphic3d_Texture2Dplane*)_NativeInstance)->SetPlaneS(A, B, C, D);
}

void Macad::Occt::Graphic3d_Texture2Dplane::SetPlaneT(float A, float B, float C, float D)
{
	((::Graphic3d_Texture2Dplane*)_NativeInstance)->SetPlaneT(A, B, C, D);
}

void Macad::Occt::Graphic3d_Texture2Dplane::SetPlane(Macad::Occt::Graphic3d_NameOfTexturePlane thePlane)
{
	((::Graphic3d_Texture2Dplane*)_NativeInstance)->SetPlane((::Graphic3d_NameOfTexturePlane)thePlane);
}

void Macad::Occt::Graphic3d_Texture2Dplane::SetScaleS(float theVal)
{
	((::Graphic3d_Texture2Dplane*)_NativeInstance)->SetScaleS(theVal);
}

void Macad::Occt::Graphic3d_Texture2Dplane::SetScaleT(float theVal)
{
	((::Graphic3d_Texture2Dplane*)_NativeInstance)->SetScaleT(theVal);
}

void Macad::Occt::Graphic3d_Texture2Dplane::SetTranslateS(float theVal)
{
	((::Graphic3d_Texture2Dplane*)_NativeInstance)->SetTranslateS(theVal);
}

void Macad::Occt::Graphic3d_Texture2Dplane::SetTranslateT(float theVal)
{
	((::Graphic3d_Texture2Dplane*)_NativeInstance)->SetTranslateT(theVal);
}

void Macad::Occt::Graphic3d_Texture2Dplane::SetRotation(float theVal)
{
	((::Graphic3d_Texture2Dplane*)_NativeInstance)->SetRotation(theVal);
}

Macad::Occt::Graphic3d_NameOfTexturePlane Macad::Occt::Graphic3d_Texture2Dplane::Plane()
{
	return (Macad::Occt::Graphic3d_NameOfTexturePlane)((::Graphic3d_Texture2Dplane*)_NativeInstance)->Plane();
}

void Macad::Occt::Graphic3d_Texture2Dplane::PlaneS(float% A, float% B, float% C, float% D)
{
	pin_ptr<float> pp_A = &A;
	pin_ptr<float> pp_B = &B;
	pin_ptr<float> pp_C = &C;
	pin_ptr<float> pp_D = &D;
	((::Graphic3d_Texture2Dplane*)_NativeInstance)->PlaneS(*(Standard_ShortReal*)pp_A, *(Standard_ShortReal*)pp_B, *(Standard_ShortReal*)pp_C, *(Standard_ShortReal*)pp_D);
}

void Macad::Occt::Graphic3d_Texture2Dplane::PlaneT(float% A, float% B, float% C, float% D)
{
	pin_ptr<float> pp_A = &A;
	pin_ptr<float> pp_B = &B;
	pin_ptr<float> pp_C = &C;
	pin_ptr<float> pp_D = &D;
	((::Graphic3d_Texture2Dplane*)_NativeInstance)->PlaneT(*(Standard_ShortReal*)pp_A, *(Standard_ShortReal*)pp_B, *(Standard_ShortReal*)pp_C, *(Standard_ShortReal*)pp_D);
}

void Macad::Occt::Graphic3d_Texture2Dplane::TranslateS(float% theVal)
{
	pin_ptr<float> pp_theVal = &theVal;
	((::Graphic3d_Texture2Dplane*)_NativeInstance)->TranslateS(*(Standard_ShortReal*)pp_theVal);
}

void Macad::Occt::Graphic3d_Texture2Dplane::TranslateT(float% theVal)
{
	pin_ptr<float> pp_theVal = &theVal;
	((::Graphic3d_Texture2Dplane*)_NativeInstance)->TranslateT(*(Standard_ShortReal*)pp_theVal);
}

void Macad::Occt::Graphic3d_Texture2Dplane::ScaleS(float% theVal)
{
	pin_ptr<float> pp_theVal = &theVal;
	((::Graphic3d_Texture2Dplane*)_NativeInstance)->ScaleS(*(Standard_ShortReal*)pp_theVal);
}

void Macad::Occt::Graphic3d_Texture2Dplane::ScaleT(float% theVal)
{
	pin_ptr<float> pp_theVal = &theVal;
	((::Graphic3d_Texture2Dplane*)_NativeInstance)->ScaleT(*(Standard_ShortReal*)pp_theVal);
}

void Macad::Occt::Graphic3d_Texture2Dplane::Rotation(float% theVal)
{
	pin_ptr<float> pp_theVal = &theVal;
	((::Graphic3d_Texture2Dplane*)_NativeInstance)->Rotation(*(Standard_ShortReal*)pp_theVal);
}


Macad::Occt::Graphic3d_Texture2Dplane^ Macad::Occt::Graphic3d_Texture2Dplane::CreateDowncasted(::Graphic3d_Texture2Dplane* instance)
{
	return gcnew Macad::Occt::Graphic3d_Texture2Dplane( instance );
}


