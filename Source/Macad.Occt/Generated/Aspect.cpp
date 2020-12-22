// Generated wrapper code for package Aspect

#include "OcctPCH.h"
#include "Aspect.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "Aspect.h"
#include "Standard.h"
#include "Quantity.h"
#include "V3d.h"
#include "WNT.h"
#include "TCollection.h"


//---------------------------------------------------------------------
//  Class  Aspect_SequenceOfColor
//---------------------------------------------------------------------

Macad::Occt::Aspect_SequenceOfColor::Aspect_SequenceOfColor()
	: BaseClass<::Aspect_SequenceOfColor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_SequenceOfColor();
}

Macad::Occt::Aspect_SequenceOfColor::Aspect_SequenceOfColor(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Aspect_SequenceOfColor>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Aspect_SequenceOfColor(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Aspect_SequenceOfColor::Aspect_SequenceOfColor(Macad::Occt::Aspect_SequenceOfColor^ theOther)
	: BaseClass<::Aspect_SequenceOfColor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_SequenceOfColor(*(::Aspect_SequenceOfColor*)theOther->NativeInstance);
}

int Macad::Occt::Aspect_SequenceOfColor::Size()
{
	return ((::Aspect_SequenceOfColor*)_NativeInstance)->Size();
}

int Macad::Occt::Aspect_SequenceOfColor::Length()
{
	return ((::Aspect_SequenceOfColor*)_NativeInstance)->Length();
}

int Macad::Occt::Aspect_SequenceOfColor::Lower()
{
	return ((::Aspect_SequenceOfColor*)_NativeInstance)->Lower();
}

int Macad::Occt::Aspect_SequenceOfColor::Upper()
{
	return ((::Aspect_SequenceOfColor*)_NativeInstance)->Upper();
}

bool Macad::Occt::Aspect_SequenceOfColor::IsEmpty()
{
	return ((::Aspect_SequenceOfColor*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::Aspect_SequenceOfColor::Reverse()
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Reverse();
}

void Macad::Occt::Aspect_SequenceOfColor::Exchange(int I, int J)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Aspect_SequenceOfColor::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Aspect_SequenceOfColor*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Aspect_SequenceOfColor::Clear()
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Aspect_SequenceOfColor^ Macad::Occt::Aspect_SequenceOfColor::Assign(Macad::Occt::Aspect_SequenceOfColor^ theOther)
{
	::Aspect_SequenceOfColor* _result = new ::Aspect_SequenceOfColor();
	*_result = ((::Aspect_SequenceOfColor*)_NativeInstance)->Assign(*(::Aspect_SequenceOfColor*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_SequenceOfColor(_result);
}

void Macad::Occt::Aspect_SequenceOfColor::Remove(int theIndex)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Aspect_SequenceOfColor::Remove(int theFromIndex, int theToIndex)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Aspect_SequenceOfColor::Append(Macad::Occt::Quantity_Color^ theItem)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Append(*(::Quantity_Color*)theItem->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::Append(Macad::Occt::Aspect_SequenceOfColor^ theSeq)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Append(*(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::Prepend(Macad::Occt::Quantity_Color^ theItem)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Prepend(*(::Quantity_Color*)theItem->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::Prepend(Macad::Occt::Aspect_SequenceOfColor^ theSeq)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Prepend(*(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::InsertBefore(int theIndex, Macad::Occt::Quantity_Color^ theItem)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->InsertBefore(theIndex, *(::Quantity_Color*)theItem->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::InsertBefore(int theIndex, Macad::Occt::Aspect_SequenceOfColor^ theSeq)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->InsertBefore(theIndex, *(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::InsertAfter(int theIndex, Macad::Occt::Aspect_SequenceOfColor^ theSeq)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->InsertAfter(theIndex, *(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::InsertAfter(int theIndex, Macad::Occt::Quantity_Color^ theItem)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->InsertAfter(theIndex, *(::Quantity_Color*)theItem->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::Split(int theIndex, Macad::Occt::Aspect_SequenceOfColor^ theSeq)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Split(theIndex, *(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::First()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Aspect_SequenceOfColor*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::ChangeFirst()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Aspect_SequenceOfColor*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::Last()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Aspect_SequenceOfColor*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::ChangeLast()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Aspect_SequenceOfColor*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::Value(int theIndex)
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Aspect_SequenceOfColor*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::ChangeValue(int theIndex)
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Aspect_SequenceOfColor*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Aspect_SequenceOfColor::SetValue(int theIndex, Macad::Occt::Quantity_Color^ theItem)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->SetValue(theIndex, *(::Quantity_Color*)theItem->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Aspect_ScrollDelta
//---------------------------------------------------------------------

Macad::Occt::Aspect_ScrollDelta::Aspect_ScrollDelta()
	: BaseClass<::Aspect_ScrollDelta>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_ScrollDelta();
}

Macad::Occt::Aspect_ScrollDelta::Aspect_ScrollDelta(double theValue, unsigned int theFlags)
	: BaseClass<::Aspect_ScrollDelta>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_ScrollDelta(theValue, theFlags);
}

Macad::Occt::Aspect_ScrollDelta::Aspect_ScrollDelta(double theValue)
	: BaseClass<::Aspect_ScrollDelta>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_ScrollDelta(theValue, Aspect_VKeyFlags_NONE);
}

Macad::Occt::Aspect_ScrollDelta::Aspect_ScrollDelta(Macad::Occt::Aspect_ScrollDelta^ parameter1)
	: BaseClass<::Aspect_ScrollDelta>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_ScrollDelta(*(::Aspect_ScrollDelta*)parameter1->NativeInstance);
}

bool Macad::Occt::Aspect_ScrollDelta::HasPoint()
{
	return ((::Aspect_ScrollDelta*)_NativeInstance)->HasPoint();
}

void Macad::Occt::Aspect_ScrollDelta::ResetPoint()
{
	((::Aspect_ScrollDelta*)_NativeInstance)->ResetPoint();
}




//---------------------------------------------------------------------
//  Class  _xwd_file_header
//---------------------------------------------------------------------

Macad::Occt::_xwd_file_header::_xwd_file_header()
	: BaseClass<::_xwd_file_header>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::_xwd_file_header();
}

Macad::Occt::_xwd_file_header::_xwd_file_header(Macad::Occt::_xwd_file_header^ parameter1)
	: BaseClass<::_xwd_file_header>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::_xwd_file_header(*(::_xwd_file_header*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  _xcolor
//---------------------------------------------------------------------

Macad::Occt::_xcolor::_xcolor()
	: BaseClass<::_xcolor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::_xcolor();
}

Macad::Occt::_xcolor::_xcolor(Macad::Occt::_xcolor^ parameter1)
	: BaseClass<::_xcolor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::_xcolor(*(::_xcolor*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Aspect_AspectFillAreaDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_AspectFillAreaDefinitionError::Aspect_AspectFillAreaDefinitionError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_AspectFillAreaDefinitionError();
}

Macad::Occt::Aspect_AspectFillAreaDefinitionError::Aspect_AspectFillAreaDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Aspect_AspectFillAreaDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_AspectFillAreaDefinitionError::Aspect_AspectFillAreaDefinitionError(Macad::Occt::Aspect_AspectFillAreaDefinitionError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_AspectFillAreaDefinitionError(*(::Aspect_AspectFillAreaDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_AspectFillAreaDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Aspect_AspectFillAreaDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Aspect_AspectFillAreaDefinitionError::Raise()
{
	::Aspect_AspectFillAreaDefinitionError::Raise("");
}

Macad::Occt::Aspect_AspectFillAreaDefinitionError^ Macad::Occt::Aspect_AspectFillAreaDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Aspect_AspectFillAreaDefinitionError) _result;
	_result = ::Aspect_AspectFillAreaDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_AspectFillAreaDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_AspectFillAreaDefinitionError^ Macad::Occt::Aspect_AspectFillAreaDefinitionError::NewInstance()
{
	Handle(::Aspect_AspectFillAreaDefinitionError) _result;
	_result = ::Aspect_AspectFillAreaDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_AspectFillAreaDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Aspect_AspectFillAreaDefinitionError^ Macad::Occt::Aspect_AspectFillAreaDefinitionError::CreateDowncasted(::Aspect_AspectFillAreaDefinitionError* instance)
{
	return gcnew Macad::Occt::Aspect_AspectFillAreaDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_AspectLineDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_AspectLineDefinitionError::Aspect_AspectLineDefinitionError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_AspectLineDefinitionError();
}

Macad::Occt::Aspect_AspectLineDefinitionError::Aspect_AspectLineDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Aspect_AspectLineDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_AspectLineDefinitionError::Aspect_AspectLineDefinitionError(Macad::Occt::Aspect_AspectLineDefinitionError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_AspectLineDefinitionError(*(::Aspect_AspectLineDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_AspectLineDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Aspect_AspectLineDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Aspect_AspectLineDefinitionError::Raise()
{
	::Aspect_AspectLineDefinitionError::Raise("");
}

Macad::Occt::Aspect_AspectLineDefinitionError^ Macad::Occt::Aspect_AspectLineDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Aspect_AspectLineDefinitionError) _result;
	_result = ::Aspect_AspectLineDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_AspectLineDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_AspectLineDefinitionError^ Macad::Occt::Aspect_AspectLineDefinitionError::NewInstance()
{
	Handle(::Aspect_AspectLineDefinitionError) _result;
	_result = ::Aspect_AspectLineDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_AspectLineDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Aspect_AspectLineDefinitionError^ Macad::Occt::Aspect_AspectLineDefinitionError::CreateDowncasted(::Aspect_AspectLineDefinitionError* instance)
{
	return gcnew Macad::Occt::Aspect_AspectLineDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_AspectMarkerDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_AspectMarkerDefinitionError::Aspect_AspectMarkerDefinitionError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_AspectMarkerDefinitionError();
}

Macad::Occt::Aspect_AspectMarkerDefinitionError::Aspect_AspectMarkerDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Aspect_AspectMarkerDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_AspectMarkerDefinitionError::Aspect_AspectMarkerDefinitionError(Macad::Occt::Aspect_AspectMarkerDefinitionError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_AspectMarkerDefinitionError(*(::Aspect_AspectMarkerDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_AspectMarkerDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Aspect_AspectMarkerDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Aspect_AspectMarkerDefinitionError::Raise()
{
	::Aspect_AspectMarkerDefinitionError::Raise("");
}

Macad::Occt::Aspect_AspectMarkerDefinitionError^ Macad::Occt::Aspect_AspectMarkerDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Aspect_AspectMarkerDefinitionError) _result;
	_result = ::Aspect_AspectMarkerDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_AspectMarkerDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_AspectMarkerDefinitionError^ Macad::Occt::Aspect_AspectMarkerDefinitionError::NewInstance()
{
	Handle(::Aspect_AspectMarkerDefinitionError) _result;
	_result = ::Aspect_AspectMarkerDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_AspectMarkerDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Aspect_AspectMarkerDefinitionError^ Macad::Occt::Aspect_AspectMarkerDefinitionError::CreateDowncasted(::Aspect_AspectMarkerDefinitionError* instance)
{
	return gcnew Macad::Occt::Aspect_AspectMarkerDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_Background
//---------------------------------------------------------------------

Macad::Occt::Aspect_Background::Aspect_Background()
	: BaseClass<::Aspect_Background>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_Background();
}

Macad::Occt::Aspect_Background::Aspect_Background(Macad::Occt::Quantity_Color^ AColor)
	: BaseClass<::Aspect_Background>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_Background(*(::Quantity_Color*)AColor->NativeInstance);
}

Macad::Occt::Aspect_Background::Aspect_Background(Macad::Occt::Aspect_Background^ parameter1)
	: BaseClass<::Aspect_Background>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_Background(*(::Aspect_Background*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_Background::SetColor(Macad::Occt::Quantity_Color^ AColor)
{
	((::Aspect_Background*)_NativeInstance)->SetColor(*(::Quantity_Color*)AColor->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_Background::Color()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Aspect_Background*)_NativeInstance)->Color();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}




//---------------------------------------------------------------------
//  Class  Aspect_Grid
//---------------------------------------------------------------------

Macad::Occt::Aspect_Grid::Aspect_Grid(Macad::Occt::Aspect_Grid^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::Aspect_Grid::SetXOrigin(double anOrigin)
{
	((::Aspect_Grid*)_NativeInstance)->SetXOrigin(anOrigin);
}

void Macad::Occt::Aspect_Grid::SetYOrigin(double anOrigin)
{
	((::Aspect_Grid*)_NativeInstance)->SetYOrigin(anOrigin);
}

void Macad::Occt::Aspect_Grid::SetRotationAngle(double anAngle)
{
	((::Aspect_Grid*)_NativeInstance)->SetRotationAngle(anAngle);
}

void Macad::Occt::Aspect_Grid::Rotate(double anAngle)
{
	((::Aspect_Grid*)_NativeInstance)->Rotate(anAngle);
}

void Macad::Occt::Aspect_Grid::Translate(double aDx, double aDy)
{
	((::Aspect_Grid*)_NativeInstance)->Translate(aDx, aDy);
}

void Macad::Occt::Aspect_Grid::SetColors(Macad::Occt::Quantity_Color^ aColor, Macad::Occt::Quantity_Color^ aTenthColor)
{
	((::Aspect_Grid*)_NativeInstance)->SetColors(*(::Quantity_Color*)aColor->NativeInstance, *(::Quantity_Color*)aTenthColor->NativeInstance);
}

void Macad::Occt::Aspect_Grid::Hit(double X, double Y, double% gridX, double% gridY)
{
	pin_ptr<double> pp_gridX = &gridX;
	pin_ptr<double> pp_gridY = &gridY;
	((::Aspect_Grid*)_NativeInstance)->Hit(X, Y, *(Standard_Real*)pp_gridX, *(Standard_Real*)pp_gridY);
}

void Macad::Occt::Aspect_Grid::Compute(double X, double Y, double% gridX, double% gridY)
{
	pin_ptr<double> pp_gridX = &gridX;
	pin_ptr<double> pp_gridY = &gridY;
	((::Aspect_Grid*)_NativeInstance)->Compute(X, Y, *(Standard_Real*)pp_gridX, *(Standard_Real*)pp_gridY);
}

void Macad::Occt::Aspect_Grid::Activate()
{
	((::Aspect_Grid*)_NativeInstance)->Activate();
}

void Macad::Occt::Aspect_Grid::Deactivate()
{
	((::Aspect_Grid*)_NativeInstance)->Deactivate();
}

double Macad::Occt::Aspect_Grid::XOrigin()
{
	return ((::Aspect_Grid*)_NativeInstance)->XOrigin();
}

double Macad::Occt::Aspect_Grid::YOrigin()
{
	return ((::Aspect_Grid*)_NativeInstance)->YOrigin();
}

double Macad::Occt::Aspect_Grid::RotationAngle()
{
	return ((::Aspect_Grid*)_NativeInstance)->RotationAngle();
}

bool Macad::Occt::Aspect_Grid::IsActive()
{
	return ((::Aspect_Grid*)_NativeInstance)->IsActive();
}

void Macad::Occt::Aspect_Grid::Colors(Macad::Occt::Quantity_Color^ aColor, Macad::Occt::Quantity_Color^ aTenthColor)
{
	((::Aspect_Grid*)_NativeInstance)->Colors(*(::Quantity_Color*)aColor->NativeInstance, *(::Quantity_Color*)aTenthColor->NativeInstance);
}

void Macad::Occt::Aspect_Grid::SetDrawMode(Macad::Occt::Aspect_GridDrawMode aDrawMode)
{
	((::Aspect_Grid*)_NativeInstance)->SetDrawMode((::Aspect_GridDrawMode)aDrawMode);
}

Macad::Occt::Aspect_GridDrawMode Macad::Occt::Aspect_Grid::DrawMode()
{
	return (Macad::Occt::Aspect_GridDrawMode)((::Aspect_Grid*)_NativeInstance)->DrawMode();
}

void Macad::Occt::Aspect_Grid::Display()
{
	((::Aspect_Grid*)_NativeInstance)->Display();
}

void Macad::Occt::Aspect_Grid::Erase()
{
	((::Aspect_Grid*)_NativeInstance)->Erase();
}

bool Macad::Occt::Aspect_Grid::IsDisplayed()
{
	return ((::Aspect_Grid*)_NativeInstance)->IsDisplayed();
}

void Macad::Occt::Aspect_Grid::Init()
{
	((::Aspect_Grid*)_NativeInstance)->Init();
}


Macad::Occt::Aspect_Grid^ Macad::Occt::Aspect_Grid::CreateDowncasted(::Aspect_Grid* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Aspect_CircularGrid)))
		return Macad::Occt::Aspect_CircularGrid::CreateDowncasted((::Aspect_CircularGrid*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Aspect_RectangularGrid)))
		return Macad::Occt::Aspect_RectangularGrid::CreateDowncasted((::Aspect_RectangularGrid*)instance);

	return gcnew Macad::Occt::Aspect_Grid( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_CircularGrid
//---------------------------------------------------------------------

Macad::Occt::Aspect_CircularGrid::Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber, double XOrigin, double anYOrigin, double aRotationAngle)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_CircularGrid::Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber, double XOrigin, double anYOrigin)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_CircularGrid::Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber, double XOrigin)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_CircularGrid::Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_CircularGrid::Aspect_CircularGrid(Macad::Occt::Aspect_CircularGrid^ parameter1)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::Aspect_CircularGrid::SetRadiusStep(double aStep)
{
	((::Aspect_CircularGrid*)_NativeInstance)->SetRadiusStep(aStep);
}

void Macad::Occt::Aspect_CircularGrid::SetDivisionNumber(int aNumber)
{
	((::Aspect_CircularGrid*)_NativeInstance)->SetDivisionNumber(aNumber);
}

void Macad::Occt::Aspect_CircularGrid::SetGridValues(double XOrigin, double YOrigin, double RadiusStep, int DivisionNumber, double RotationAngle)
{
	((::Aspect_CircularGrid*)_NativeInstance)->SetGridValues(XOrigin, YOrigin, RadiusStep, DivisionNumber, RotationAngle);
}

void Macad::Occt::Aspect_CircularGrid::Compute(double X, double Y, double% gridX, double% gridY)
{
	pin_ptr<double> pp_gridX = &gridX;
	pin_ptr<double> pp_gridY = &gridY;
	((::Aspect_CircularGrid*)_NativeInstance)->Compute(X, Y, *(Standard_Real*)pp_gridX, *(Standard_Real*)pp_gridY);
}

double Macad::Occt::Aspect_CircularGrid::RadiusStep()
{
	return ((::Aspect_CircularGrid*)_NativeInstance)->RadiusStep();
}

int Macad::Occt::Aspect_CircularGrid::DivisionNumber()
{
	return ((::Aspect_CircularGrid*)_NativeInstance)->DivisionNumber();
}

void Macad::Occt::Aspect_CircularGrid::Init()
{
	((::Aspect_CircularGrid*)_NativeInstance)->Init();
}


Macad::Occt::Aspect_CircularGrid^ Macad::Occt::Aspect_CircularGrid::CreateDowncasted(::Aspect_CircularGrid* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::V3d_CircularGrid)))
		return Macad::Occt::V3d_CircularGrid::CreateDowncasted((::V3d_CircularGrid*)instance);

	return gcnew Macad::Occt::Aspect_CircularGrid( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_DisplayConnection
//---------------------------------------------------------------------

Macad::Occt::Aspect_DisplayConnection::Aspect_DisplayConnection()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_DisplayConnection();
}


Macad::Occt::Aspect_DisplayConnection^ Macad::Occt::Aspect_DisplayConnection::CreateDowncasted(::Aspect_DisplayConnection* instance)
{
	return gcnew Macad::Occt::Aspect_DisplayConnection( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_DisplayConnectionDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_DisplayConnectionDefinitionError::Aspect_DisplayConnectionDefinitionError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_DisplayConnectionDefinitionError();
}

Macad::Occt::Aspect_DisplayConnectionDefinitionError::Aspect_DisplayConnectionDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Aspect_DisplayConnectionDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_DisplayConnectionDefinitionError::Aspect_DisplayConnectionDefinitionError(Macad::Occt::Aspect_DisplayConnectionDefinitionError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_DisplayConnectionDefinitionError(*(::Aspect_DisplayConnectionDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_DisplayConnectionDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Aspect_DisplayConnectionDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Aspect_DisplayConnectionDefinitionError::Raise()
{
	::Aspect_DisplayConnectionDefinitionError::Raise("");
}

Macad::Occt::Aspect_DisplayConnectionDefinitionError^ Macad::Occt::Aspect_DisplayConnectionDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Aspect_DisplayConnectionDefinitionError) _result;
	_result = ::Aspect_DisplayConnectionDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_DisplayConnectionDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_DisplayConnectionDefinitionError^ Macad::Occt::Aspect_DisplayConnectionDefinitionError::NewInstance()
{
	Handle(::Aspect_DisplayConnectionDefinitionError) _result;
	_result = ::Aspect_DisplayConnectionDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_DisplayConnectionDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Aspect_DisplayConnectionDefinitionError^ Macad::Occt::Aspect_DisplayConnectionDefinitionError::CreateDowncasted(::Aspect_DisplayConnectionDefinitionError* instance)
{
	return gcnew Macad::Occt::Aspect_DisplayConnectionDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_IdentDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_IdentDefinitionError::Aspect_IdentDefinitionError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_IdentDefinitionError();
}

Macad::Occt::Aspect_IdentDefinitionError::Aspect_IdentDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Aspect_IdentDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_IdentDefinitionError::Aspect_IdentDefinitionError(Macad::Occt::Aspect_IdentDefinitionError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_IdentDefinitionError(*(::Aspect_IdentDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_IdentDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Aspect_IdentDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Aspect_IdentDefinitionError::Raise()
{
	::Aspect_IdentDefinitionError::Raise("");
}

Macad::Occt::Aspect_IdentDefinitionError^ Macad::Occt::Aspect_IdentDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Aspect_IdentDefinitionError) _result;
	_result = ::Aspect_IdentDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_IdentDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_IdentDefinitionError^ Macad::Occt::Aspect_IdentDefinitionError::NewInstance()
{
	Handle(::Aspect_IdentDefinitionError) _result;
	_result = ::Aspect_IdentDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_IdentDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Aspect_IdentDefinitionError^ Macad::Occt::Aspect_IdentDefinitionError::CreateDowncasted(::Aspect_IdentDefinitionError* instance)
{
	return gcnew Macad::Occt::Aspect_IdentDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_GenId
//---------------------------------------------------------------------

Macad::Occt::Aspect_GenId::Aspect_GenId()
	: BaseClass<::Aspect_GenId>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_GenId();
}

Macad::Occt::Aspect_GenId::Aspect_GenId(int theLow, int theUpper)
	: BaseClass<::Aspect_GenId>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_GenId(theLow, theUpper);
}

Macad::Occt::Aspect_GenId::Aspect_GenId(Macad::Occt::Aspect_GenId^ parameter1)
	: BaseClass<::Aspect_GenId>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_GenId(*(::Aspect_GenId*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_GenId::Free()
{
	((::Aspect_GenId*)_NativeInstance)->Free();
}

void Macad::Occt::Aspect_GenId::Free(int theId)
{
	((::Aspect_GenId*)_NativeInstance)->Free(theId);
}

bool Macad::Occt::Aspect_GenId::HasFree()
{
	return ((::Aspect_GenId*)_NativeInstance)->HasFree();
}

int Macad::Occt::Aspect_GenId::Available()
{
	return ((::Aspect_GenId*)_NativeInstance)->Available();
}

int Macad::Occt::Aspect_GenId::Lower()
{
	return ((::Aspect_GenId*)_NativeInstance)->Lower();
}

int Macad::Occt::Aspect_GenId::Next()
{
	return ((::Aspect_GenId*)_NativeInstance)->Next();
}

bool Macad::Occt::Aspect_GenId::Next(int% theId)
{
	pin_ptr<int> pp_theId = &theId;
	return ((::Aspect_GenId*)_NativeInstance)->Next(*(Standard_Integer*)pp_theId);
}

int Macad::Occt::Aspect_GenId::Upper()
{
	return ((::Aspect_GenId*)_NativeInstance)->Upper();
}




//---------------------------------------------------------------------
//  Class  Aspect_GradientBackground
//---------------------------------------------------------------------

Macad::Occt::Aspect_GradientBackground::Aspect_GradientBackground()
	: Macad::Occt::Aspect_Background(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_GradientBackground();
}

Macad::Occt::Aspect_GradientBackground::Aspect_GradientBackground(Macad::Occt::Quantity_Color^ AColor1, Macad::Occt::Quantity_Color^ AColor2, Macad::Occt::Aspect_GradientFillMethod AMethod)
	: Macad::Occt::Aspect_Background(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_GradientBackground(*(::Quantity_Color*)AColor1->NativeInstance, *(::Quantity_Color*)AColor2->NativeInstance, (::Aspect_GradientFillMethod)AMethod);
}

Macad::Occt::Aspect_GradientBackground::Aspect_GradientBackground(Macad::Occt::Quantity_Color^ AColor1, Macad::Occt::Quantity_Color^ AColor2)
	: Macad::Occt::Aspect_Background(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_GradientBackground(*(::Quantity_Color*)AColor1->NativeInstance, *(::Quantity_Color*)AColor2->NativeInstance, Aspect_GFM_HOR);
}

Macad::Occt::Aspect_GradientBackground::Aspect_GradientBackground(Macad::Occt::Aspect_GradientBackground^ parameter1)
	: Macad::Occt::Aspect_Background(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_GradientBackground(*(::Aspect_GradientBackground*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_GradientBackground::SetColors(Macad::Occt::Quantity_Color^ AColor1, Macad::Occt::Quantity_Color^ AColor2, Macad::Occt::Aspect_GradientFillMethod AMethod)
{
	((::Aspect_GradientBackground*)_NativeInstance)->SetColors(*(::Quantity_Color*)AColor1->NativeInstance, *(::Quantity_Color*)AColor2->NativeInstance, (::Aspect_GradientFillMethod)AMethod);
}

void Macad::Occt::Aspect_GradientBackground::SetColors(Macad::Occt::Quantity_Color^ AColor1, Macad::Occt::Quantity_Color^ AColor2)
{
	((::Aspect_GradientBackground*)_NativeInstance)->SetColors(*(::Quantity_Color*)AColor1->NativeInstance, *(::Quantity_Color*)AColor2->NativeInstance, Aspect_GFM_HOR);
}

void Macad::Occt::Aspect_GradientBackground::Colors(Macad::Occt::Quantity_Color^ AColor1, Macad::Occt::Quantity_Color^ AColor2)
{
	((::Aspect_GradientBackground*)_NativeInstance)->Colors(*(::Quantity_Color*)AColor1->NativeInstance, *(::Quantity_Color*)AColor2->NativeInstance);
}

Macad::Occt::Aspect_GradientFillMethod Macad::Occt::Aspect_GradientBackground::BgGradientFillMethod()
{
	return (Macad::Occt::Aspect_GradientFillMethod)((::Aspect_GradientBackground*)_NativeInstance)->BgGradientFillMethod();
}




//---------------------------------------------------------------------
//  Class  Aspect_GraphicDeviceDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_GraphicDeviceDefinitionError::Aspect_GraphicDeviceDefinitionError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_GraphicDeviceDefinitionError();
}

Macad::Occt::Aspect_GraphicDeviceDefinitionError::Aspect_GraphicDeviceDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Aspect_GraphicDeviceDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_GraphicDeviceDefinitionError::Aspect_GraphicDeviceDefinitionError(Macad::Occt::Aspect_GraphicDeviceDefinitionError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_GraphicDeviceDefinitionError(*(::Aspect_GraphicDeviceDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_GraphicDeviceDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Aspect_GraphicDeviceDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Aspect_GraphicDeviceDefinitionError::Raise()
{
	::Aspect_GraphicDeviceDefinitionError::Raise("");
}

Macad::Occt::Aspect_GraphicDeviceDefinitionError^ Macad::Occt::Aspect_GraphicDeviceDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Aspect_GraphicDeviceDefinitionError) _result;
	_result = ::Aspect_GraphicDeviceDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_GraphicDeviceDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_GraphicDeviceDefinitionError^ Macad::Occt::Aspect_GraphicDeviceDefinitionError::NewInstance()
{
	Handle(::Aspect_GraphicDeviceDefinitionError) _result;
	_result = ::Aspect_GraphicDeviceDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_GraphicDeviceDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Aspect_GraphicDeviceDefinitionError^ Macad::Occt::Aspect_GraphicDeviceDefinitionError::CreateDowncasted(::Aspect_GraphicDeviceDefinitionError* instance)
{
	return gcnew Macad::Occt::Aspect_GraphicDeviceDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_Window
//---------------------------------------------------------------------

Macad::Occt::Aspect_Window::Aspect_Window(Macad::Occt::Aspect_Window^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::Aspect_Window::SetBackground(Macad::Occt::Aspect_Background^ ABack)
{
	((::Aspect_Window*)_NativeInstance)->SetBackground(*(::Aspect_Background*)ABack->NativeInstance);
}

void Macad::Occt::Aspect_Window::SetBackground(Macad::Occt::Quantity_Color^ color)
{
	((::Aspect_Window*)_NativeInstance)->SetBackground(*(::Quantity_Color*)color->NativeInstance);
}

void Macad::Occt::Aspect_Window::SetBackground(Macad::Occt::Aspect_GradientBackground^ ABackground)
{
	((::Aspect_Window*)_NativeInstance)->SetBackground(*(::Aspect_GradientBackground*)ABackground->NativeInstance);
}

void Macad::Occt::Aspect_Window::SetBackground(Macad::Occt::Quantity_Color^ theFirstColor, Macad::Occt::Quantity_Color^ theSecondColor, Macad::Occt::Aspect_GradientFillMethod theFillMethod)
{
	((::Aspect_Window*)_NativeInstance)->SetBackground(*(::Quantity_Color*)theFirstColor->NativeInstance, *(::Quantity_Color*)theSecondColor->NativeInstance, (::Aspect_GradientFillMethod)theFillMethod);
}

void Macad::Occt::Aspect_Window::Map()
{
	((::Aspect_Window*)_NativeInstance)->Map();
}

void Macad::Occt::Aspect_Window::Unmap()
{
	((::Aspect_Window*)_NativeInstance)->Unmap();
}

Macad::Occt::Aspect_TypeOfResize Macad::Occt::Aspect_Window::DoResize()
{
	return (Macad::Occt::Aspect_TypeOfResize)((::Aspect_Window*)_NativeInstance)->DoResize();
}

bool Macad::Occt::Aspect_Window::DoMapping()
{
	return ((::Aspect_Window*)_NativeInstance)->DoMapping();
}

Macad::Occt::Aspect_Background^ Macad::Occt::Aspect_Window::Background()
{
	::Aspect_Background* _result = new ::Aspect_Background();
	*_result = ((::Aspect_Window*)_NativeInstance)->Background();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_Background(_result);
}

Macad::Occt::Aspect_FillMethod Macad::Occt::Aspect_Window::BackgroundFillMethod()
{
	return (Macad::Occt::Aspect_FillMethod)((::Aspect_Window*)_NativeInstance)->BackgroundFillMethod();
}

Macad::Occt::Aspect_GradientBackground^ Macad::Occt::Aspect_Window::GradientBackground()
{
	::Aspect_GradientBackground* _result = new ::Aspect_GradientBackground();
	*_result = ((::Aspect_Window*)_NativeInstance)->GradientBackground();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_GradientBackground(_result);
}

bool Macad::Occt::Aspect_Window::IsMapped()
{
	return ((::Aspect_Window*)_NativeInstance)->IsMapped();
}

bool Macad::Occt::Aspect_Window::IsVirtual()
{
	return ((::Aspect_Window*)_NativeInstance)->IsVirtual();
}

void Macad::Occt::Aspect_Window::SetVirtual(bool theVirtual)
{
	((::Aspect_Window*)_NativeInstance)->SetVirtual(theVirtual);
}

double Macad::Occt::Aspect_Window::Ratio()
{
	return ((::Aspect_Window*)_NativeInstance)->Ratio();
}

void Macad::Occt::Aspect_Window::Position(int% X1, int% Y1, int% X2, int% Y2)
{
	pin_ptr<int> pp_X1 = &X1;
	pin_ptr<int> pp_Y1 = &Y1;
	pin_ptr<int> pp_X2 = &X2;
	pin_ptr<int> pp_Y2 = &Y2;
	((::Aspect_Window*)_NativeInstance)->Position(*(Standard_Integer*)pp_X1, *(Standard_Integer*)pp_Y1, *(Standard_Integer*)pp_X2, *(Standard_Integer*)pp_Y2);
}

void Macad::Occt::Aspect_Window::Size(int% Width, int% Height)
{
	pin_ptr<int> pp_Width = &Width;
	pin_ptr<int> pp_Height = &Height;
	((::Aspect_Window*)_NativeInstance)->Size(*(Standard_Integer*)pp_Width, *(Standard_Integer*)pp_Height);
}

System::IntPtr Macad::Occt::Aspect_Window::NativeHandle()
{
	return System::IntPtr(((::Aspect_Window*)_NativeInstance)->NativeHandle());
}

System::IntPtr Macad::Occt::Aspect_Window::NativeParentHandle()
{
	return System::IntPtr(((::Aspect_Window*)_NativeInstance)->NativeParentHandle());
}

System::IntPtr Macad::Occt::Aspect_Window::NativeFBConfig()
{
	return System::IntPtr(((::Aspect_Window*)_NativeInstance)->NativeFBConfig());
}

void Macad::Occt::Aspect_Window::SetTitle(Macad::Occt::TCollection_AsciiString^ theTitle)
{
	((::Aspect_Window*)_NativeInstance)->SetTitle(*(::TCollection_AsciiString*)theTitle->NativeInstance);
}

void Macad::Occt::Aspect_Window::InvalidateContent(Macad::Occt::Aspect_DisplayConnection^ theDisp)
{
	Handle(::Aspect_DisplayConnection) h_theDisp = theDisp->NativeInstance;
	((::Aspect_Window*)_NativeInstance)->InvalidateContent(h_theDisp);
	theDisp->NativeInstance = h_theDisp.get();
}


Macad::Occt::Aspect_Window^ Macad::Occt::Aspect_Window::CreateDowncasted(::Aspect_Window* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Aspect_NeutralWindow)))
		return Macad::Occt::Aspect_NeutralWindow::CreateDowncasted((::Aspect_NeutralWindow*)instance);
	if (instance->IsKind(STANDARD_TYPE(::WNT_Window)))
		return Macad::Occt::WNT_Window::CreateDowncasted((::WNT_Window*)instance);

	return gcnew Macad::Occt::Aspect_Window( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_NeutralWindow
//---------------------------------------------------------------------

Macad::Occt::Aspect_NeutralWindow::Aspect_NeutralWindow()
	: Macad::Occt::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_NeutralWindow();
}

Macad::Occt::Aspect_NeutralWindow::Aspect_NeutralWindow(Macad::Occt::Aspect_NeutralWindow^ parameter1)
	: Macad::Occt::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_NeutralWindow(*(::Aspect_NeutralWindow*)parameter1->NativeInstance);
}

System::IntPtr Macad::Occt::Aspect_NeutralWindow::NativeHandle()
{
	return System::IntPtr(((::Aspect_NeutralWindow*)_NativeInstance)->NativeHandle());
}

System::IntPtr Macad::Occt::Aspect_NeutralWindow::NativeParentHandle()
{
	return System::IntPtr(((::Aspect_NeutralWindow*)_NativeInstance)->NativeParentHandle());
}

System::IntPtr Macad::Occt::Aspect_NeutralWindow::NativeFBConfig()
{
	return System::IntPtr(((::Aspect_NeutralWindow*)_NativeInstance)->NativeFBConfig());
}

bool Macad::Occt::Aspect_NeutralWindow::SetNativeHandle(System::IntPtr theWindow)
{
	return ((::Aspect_NeutralWindow*)_NativeInstance)->SetNativeHandle(theWindow.ToPointer());
}

bool Macad::Occt::Aspect_NeutralWindow::SetNativeHandles(System::IntPtr theWindow, System::IntPtr theParentWindow, System::IntPtr theFbConfig)
{
	return ((::Aspect_NeutralWindow*)_NativeInstance)->SetNativeHandles(theWindow.ToPointer(), theParentWindow.ToPointer(), theFbConfig.ToPointer());
}

bool Macad::Occt::Aspect_NeutralWindow::IsMapped()
{
	return ((::Aspect_NeutralWindow*)_NativeInstance)->IsMapped();
}

void Macad::Occt::Aspect_NeutralWindow::Map()
{
	((::Aspect_NeutralWindow*)_NativeInstance)->Map();
}

void Macad::Occt::Aspect_NeutralWindow::Unmap()
{
	((::Aspect_NeutralWindow*)_NativeInstance)->Unmap();
}

Macad::Occt::Aspect_TypeOfResize Macad::Occt::Aspect_NeutralWindow::DoResize()
{
	return (Macad::Occt::Aspect_TypeOfResize)((::Aspect_NeutralWindow*)_NativeInstance)->DoResize();
}

bool Macad::Occt::Aspect_NeutralWindow::DoMapping()
{
	return ((::Aspect_NeutralWindow*)_NativeInstance)->DoMapping();
}

double Macad::Occt::Aspect_NeutralWindow::Ratio()
{
	return ((::Aspect_NeutralWindow*)_NativeInstance)->Ratio();
}

void Macad::Occt::Aspect_NeutralWindow::Position(int% theX1, int% theY1, int% theX2, int% theY2)
{
	pin_ptr<int> pp_theX1 = &theX1;
	pin_ptr<int> pp_theY1 = &theY1;
	pin_ptr<int> pp_theX2 = &theX2;
	pin_ptr<int> pp_theY2 = &theY2;
	((::Aspect_NeutralWindow*)_NativeInstance)->Position(*(Standard_Integer*)pp_theX1, *(Standard_Integer*)pp_theY1, *(Standard_Integer*)pp_theX2, *(Standard_Integer*)pp_theY2);
}

bool Macad::Occt::Aspect_NeutralWindow::SetPosition(int theX1, int theY1)
{
	return ((::Aspect_NeutralWindow*)_NativeInstance)->SetPosition(theX1, theY1);
}

bool Macad::Occt::Aspect_NeutralWindow::SetPosition(int theX1, int theY1, int theX2, int theY2)
{
	return ((::Aspect_NeutralWindow*)_NativeInstance)->SetPosition(theX1, theY1, theX2, theY2);
}

void Macad::Occt::Aspect_NeutralWindow::Size(int% theWidth, int% theHeight)
{
	pin_ptr<int> pp_theWidth = &theWidth;
	pin_ptr<int> pp_theHeight = &theHeight;
	((::Aspect_NeutralWindow*)_NativeInstance)->Size(*(Standard_Integer*)pp_theWidth, *(Standard_Integer*)pp_theHeight);
}

bool Macad::Occt::Aspect_NeutralWindow::SetSize(int theWidth, int theHeight)
{
	return ((::Aspect_NeutralWindow*)_NativeInstance)->SetSize(theWidth, theHeight);
}


Macad::Occt::Aspect_NeutralWindow^ Macad::Occt::Aspect_NeutralWindow::CreateDowncasted(::Aspect_NeutralWindow* instance)
{
	return gcnew Macad::Occt::Aspect_NeutralWindow( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_RectangularGrid
//---------------------------------------------------------------------

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin, double aFirstAngle, double aSecondAngle, double aRotationAngle)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin, double aFirstAngle, double aSecondAngle)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin, double aFirstAngle)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(Macad::Occt::Aspect_RectangularGrid^ parameter1)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::Aspect_RectangularGrid::SetXStep(double aStep)
{
	((::Aspect_RectangularGrid*)_NativeInstance)->SetXStep(aStep);
}

void Macad::Occt::Aspect_RectangularGrid::SetYStep(double aStep)
{
	((::Aspect_RectangularGrid*)_NativeInstance)->SetYStep(aStep);
}

void Macad::Occt::Aspect_RectangularGrid::SetAngle(double anAngle1, double anAngle2)
{
	((::Aspect_RectangularGrid*)_NativeInstance)->SetAngle(anAngle1, anAngle2);
}

void Macad::Occt::Aspect_RectangularGrid::SetGridValues(double XOrigin, double YOrigin, double XStep, double YStep, double RotationAngle)
{
	((::Aspect_RectangularGrid*)_NativeInstance)->SetGridValues(XOrigin, YOrigin, XStep, YStep, RotationAngle);
}

void Macad::Occt::Aspect_RectangularGrid::Compute(double X, double Y, double% gridX, double% gridY)
{
	pin_ptr<double> pp_gridX = &gridX;
	pin_ptr<double> pp_gridY = &gridY;
	((::Aspect_RectangularGrid*)_NativeInstance)->Compute(X, Y, *(Standard_Real*)pp_gridX, *(Standard_Real*)pp_gridY);
}

double Macad::Occt::Aspect_RectangularGrid::XStep()
{
	return ((::Aspect_RectangularGrid*)_NativeInstance)->XStep();
}

double Macad::Occt::Aspect_RectangularGrid::YStep()
{
	return ((::Aspect_RectangularGrid*)_NativeInstance)->YStep();
}

double Macad::Occt::Aspect_RectangularGrid::FirstAngle()
{
	return ((::Aspect_RectangularGrid*)_NativeInstance)->FirstAngle();
}

double Macad::Occt::Aspect_RectangularGrid::SecondAngle()
{
	return ((::Aspect_RectangularGrid*)_NativeInstance)->SecondAngle();
}

void Macad::Occt::Aspect_RectangularGrid::Init()
{
	((::Aspect_RectangularGrid*)_NativeInstance)->Init();
}


Macad::Occt::Aspect_RectangularGrid^ Macad::Occt::Aspect_RectangularGrid::CreateDowncasted(::Aspect_RectangularGrid* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::V3d_RectangularGrid)))
		return Macad::Occt::V3d_RectangularGrid::CreateDowncasted((::V3d_RectangularGrid*)instance);

	return gcnew Macad::Occt::Aspect_RectangularGrid( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_Touch
//---------------------------------------------------------------------

Macad::Occt::Aspect_Touch::Aspect_Touch()
	: BaseClass<::Aspect_Touch>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_Touch();
}

Macad::Occt::Aspect_Touch::Aspect_Touch(double theX, double theY, bool theIsPreciseDevice)
	: BaseClass<::Aspect_Touch>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_Touch(theX, theY, theIsPreciseDevice);
}

Macad::Occt::Aspect_Touch::Aspect_Touch(Macad::Occt::Aspect_Touch^ parameter1)
	: BaseClass<::Aspect_Touch>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_Touch(*(::Aspect_Touch*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Aspect_VKeySet
//---------------------------------------------------------------------

Macad::Occt::Aspect_VKeySet::Aspect_VKeySet()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_VKeySet();
}

unsigned int Macad::Occt::Aspect_VKeySet::Modifiers()
{
	return ((::Aspect_VKeySet*)_NativeInstance)->Modifiers();
}

double Macad::Occt::Aspect_VKeySet::DownTime(unsigned int theKey)
{
	return ((::Aspect_VKeySet*)_NativeInstance)->DownTime(theKey);
}

double Macad::Occt::Aspect_VKeySet::TimeUp(unsigned int theKey)
{
	return ((::Aspect_VKeySet*)_NativeInstance)->TimeUp(theKey);
}

bool Macad::Occt::Aspect_VKeySet::IsFreeKey(unsigned int theKey)
{
	return ((::Aspect_VKeySet*)_NativeInstance)->IsFreeKey(theKey);
}

bool Macad::Occt::Aspect_VKeySet::IsKeyDown(unsigned int theKey)
{
	return ((::Aspect_VKeySet*)_NativeInstance)->IsKeyDown(theKey);
}

void Macad::Occt::Aspect_VKeySet::Reset()
{
	((::Aspect_VKeySet*)_NativeInstance)->Reset();
}

void Macad::Occt::Aspect_VKeySet::KeyDown(unsigned int theKey, double theTime, double thePressure)
{
	((::Aspect_VKeySet*)_NativeInstance)->KeyDown(theKey, theTime, thePressure);
}

void Macad::Occt::Aspect_VKeySet::KeyDown(unsigned int theKey, double theTime)
{
	((::Aspect_VKeySet*)_NativeInstance)->KeyDown(theKey, theTime, 1.);
}

void Macad::Occt::Aspect_VKeySet::KeyUp(unsigned int theKey, double theTime)
{
	((::Aspect_VKeySet*)_NativeInstance)->KeyUp(theKey, theTime);
}

void Macad::Occt::Aspect_VKeySet::KeyFromAxis(unsigned int theNegative, unsigned int thePositive, double theTime, double thePressure)
{
	((::Aspect_VKeySet*)_NativeInstance)->KeyFromAxis(theNegative, thePositive, theTime, thePressure);
}

bool Macad::Occt::Aspect_VKeySet::HoldDuration(unsigned int theKey, double theTime, double% theDuration)
{
	pin_ptr<double> pp_theDuration = &theDuration;
	return ((::Aspect_VKeySet*)_NativeInstance)->HoldDuration(theKey, theTime, *(double*)pp_theDuration);
}

bool Macad::Occt::Aspect_VKeySet::HoldDuration(unsigned int theKey, double theTime, double% theDuration, double% thePressure)
{
	pin_ptr<double> pp_theDuration = &theDuration;
	pin_ptr<double> pp_thePressure = &thePressure;
	return ((::Aspect_VKeySet*)_NativeInstance)->HoldDuration(theKey, theTime, *(double*)pp_theDuration, *(double*)pp_thePressure);
}


Macad::Occt::Aspect_VKeySet^ Macad::Occt::Aspect_VKeySet::CreateDowncasted(::Aspect_VKeySet* instance)
{
	return gcnew Macad::Occt::Aspect_VKeySet( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_WindowDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_WindowDefinitionError::Aspect_WindowDefinitionError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_WindowDefinitionError();
}

Macad::Occt::Aspect_WindowDefinitionError::Aspect_WindowDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Aspect_WindowDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_WindowDefinitionError::Aspect_WindowDefinitionError(Macad::Occt::Aspect_WindowDefinitionError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_WindowDefinitionError(*(::Aspect_WindowDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_WindowDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Aspect_WindowDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Aspect_WindowDefinitionError::Raise()
{
	::Aspect_WindowDefinitionError::Raise("");
}

Macad::Occt::Aspect_WindowDefinitionError^ Macad::Occt::Aspect_WindowDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Aspect_WindowDefinitionError) _result;
	_result = ::Aspect_WindowDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_WindowDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_WindowDefinitionError^ Macad::Occt::Aspect_WindowDefinitionError::NewInstance()
{
	Handle(::Aspect_WindowDefinitionError) _result;
	_result = ::Aspect_WindowDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_WindowDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Aspect_WindowDefinitionError^ Macad::Occt::Aspect_WindowDefinitionError::CreateDowncasted(::Aspect_WindowDefinitionError* instance)
{
	return gcnew Macad::Occt::Aspect_WindowDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_WindowError
//---------------------------------------------------------------------

Macad::Occt::Aspect_WindowError::Aspect_WindowError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_WindowError();
}

Macad::Occt::Aspect_WindowError::Aspect_WindowError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Aspect_WindowError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_WindowError::Aspect_WindowError(Macad::Occt::Aspect_WindowError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_WindowError(*(::Aspect_WindowError*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_WindowError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Aspect_WindowError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Aspect_WindowError::Raise()
{
	::Aspect_WindowError::Raise("");
}

Macad::Occt::Aspect_WindowError^ Macad::Occt::Aspect_WindowError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Aspect_WindowError) _result;
	_result = ::Aspect_WindowError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_WindowError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_WindowError^ Macad::Occt::Aspect_WindowError::NewInstance()
{
	Handle(::Aspect_WindowError) _result;
	_result = ::Aspect_WindowError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_WindowError::CreateDowncasted( _result.get());
}


Macad::Occt::Aspect_WindowError^ Macad::Occt::Aspect_WindowError::CreateDowncasted(::Aspect_WindowError* instance)
{
	return gcnew Macad::Occt::Aspect_WindowError( instance );
}


