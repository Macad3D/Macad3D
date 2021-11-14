// Generated wrapper code for package Quantity

#include "OcctPCH.h"
#include "Quantity.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "Quantity.h"
#include "NCollection.h"
#include "TCollection.h"


//---------------------------------------------------------------------
//  Class  Quantity_Array1OfColor
//---------------------------------------------------------------------

Macad::Occt::Quantity_Array1OfColor::Quantity_Array1OfColor()
	: BaseClass<::Quantity_Array1OfColor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Array1OfColor();
}

Macad::Occt::Quantity_Array1OfColor::Quantity_Array1OfColor(int theLower, int theUpper)
	: BaseClass<::Quantity_Array1OfColor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Array1OfColor(theLower, theUpper);
}

Macad::Occt::Quantity_Array1OfColor::Quantity_Array1OfColor(Macad::Occt::Quantity_Array1OfColor^ theOther)
	: BaseClass<::Quantity_Array1OfColor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Array1OfColor(*(::Quantity_Array1OfColor*)theOther->NativeInstance);
}

Macad::Occt::Quantity_Array1OfColor::Quantity_Array1OfColor(Macad::Occt::Quantity_Color^ theBegin, int theLower, int theUpper)
	: BaseClass<::Quantity_Array1OfColor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Array1OfColor(*(::Quantity_Color*)theBegin->NativeInstance, theLower, theUpper);
}

void Macad::Occt::Quantity_Array1OfColor::Init(Macad::Occt::Quantity_Color^ theValue)
{
	((::Quantity_Array1OfColor*)_NativeInstance)->Init(*(::Quantity_Color*)theValue->NativeInstance);
}

int Macad::Occt::Quantity_Array1OfColor::Size()
{
	return ((::Quantity_Array1OfColor*)_NativeInstance)->Size();
}

int Macad::Occt::Quantity_Array1OfColor::Length()
{
	return ((::Quantity_Array1OfColor*)_NativeInstance)->Length();
}

bool Macad::Occt::Quantity_Array1OfColor::IsEmpty()
{
	return ((::Quantity_Array1OfColor*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::Quantity_Array1OfColor::Lower()
{
	return ((::Quantity_Array1OfColor*)_NativeInstance)->Lower();
}

int Macad::Occt::Quantity_Array1OfColor::Upper()
{
	return ((::Quantity_Array1OfColor*)_NativeInstance)->Upper();
}

bool Macad::Occt::Quantity_Array1OfColor::IsDeletable()
{
	return ((::Quantity_Array1OfColor*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::Quantity_Array1OfColor::IsAllocated()
{
	return ((::Quantity_Array1OfColor*)_NativeInstance)->IsAllocated();
}

Macad::Occt::Quantity_Array1OfColor^ Macad::Occt::Quantity_Array1OfColor::Assign(Macad::Occt::Quantity_Array1OfColor^ theOther)
{
	::Quantity_Array1OfColor* _result = new ::Quantity_Array1OfColor();
	*_result = ((::Quantity_Array1OfColor*)_NativeInstance)->Assign(*(::Quantity_Array1OfColor*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Array1OfColor(_result);
}

Macad::Occt::Quantity_Array1OfColor^ Macad::Occt::Quantity_Array1OfColor::Move(Macad::Occt::Quantity_Array1OfColor^ theOther)
{
	::Quantity_Array1OfColor* _result = new ::Quantity_Array1OfColor();
	*_result = ((::Quantity_Array1OfColor*)_NativeInstance)->Move(*(::Quantity_Array1OfColor*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Array1OfColor(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_Array1OfColor::First()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Quantity_Array1OfColor*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_Array1OfColor::ChangeFirst()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Quantity_Array1OfColor*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_Array1OfColor::Last()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Quantity_Array1OfColor*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_Array1OfColor::ChangeLast()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Quantity_Array1OfColor*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_Array1OfColor::Value(int theIndex)
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Quantity_Array1OfColor*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_Array1OfColor::ChangeValue(int theIndex)
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Quantity_Array1OfColor*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Quantity_Array1OfColor::SetValue(int theIndex, Macad::Occt::Quantity_Color^ theItem)
{
	((::Quantity_Array1OfColor*)_NativeInstance)->SetValue(theIndex, *(::Quantity_Color*)theItem->NativeInstance);
}

void Macad::Occt::Quantity_Array1OfColor::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::Quantity_Array1OfColor*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  Quantity_Array2OfColor
//---------------------------------------------------------------------

Macad::Occt::Quantity_Array2OfColor::Quantity_Array2OfColor()
	: BaseClass<::Quantity_Array2OfColor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Array2OfColor();
}

Macad::Occt::Quantity_Array2OfColor::Quantity_Array2OfColor(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::Quantity_Array2OfColor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Array2OfColor(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::Quantity_Array2OfColor::Quantity_Array2OfColor(Macad::Occt::Quantity_Array2OfColor^ theOther)
	: BaseClass<::Quantity_Array2OfColor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Array2OfColor(*(::Quantity_Array2OfColor*)theOther->NativeInstance);
}

Macad::Occt::Quantity_Array2OfColor::Quantity_Array2OfColor(Macad::Occt::Quantity_Color^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::Quantity_Array2OfColor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Array2OfColor(*(::Quantity_Color*)theBegin->NativeInstance, theRowLower, theRowUpper, theColLower, theColUpper);
}

void Macad::Occt::Quantity_Array2OfColor::Init(Macad::Occt::Quantity_Color^ theValue)
{
	((::Quantity_Array2OfColor*)_NativeInstance)->Init(*(::Quantity_Color*)theValue->NativeInstance);
}

int Macad::Occt::Quantity_Array2OfColor::Size()
{
	return ((::Quantity_Array2OfColor*)_NativeInstance)->Size();
}

int Macad::Occt::Quantity_Array2OfColor::Length()
{
	return ((::Quantity_Array2OfColor*)_NativeInstance)->Length();
}

int Macad::Occt::Quantity_Array2OfColor::NbRows()
{
	return ((::Quantity_Array2OfColor*)_NativeInstance)->NbRows();
}

int Macad::Occt::Quantity_Array2OfColor::NbColumns()
{
	return ((::Quantity_Array2OfColor*)_NativeInstance)->NbColumns();
}

int Macad::Occt::Quantity_Array2OfColor::RowLength()
{
	return ((::Quantity_Array2OfColor*)_NativeInstance)->RowLength();
}

int Macad::Occt::Quantity_Array2OfColor::ColLength()
{
	return ((::Quantity_Array2OfColor*)_NativeInstance)->ColLength();
}

int Macad::Occt::Quantity_Array2OfColor::LowerRow()
{
	return ((::Quantity_Array2OfColor*)_NativeInstance)->LowerRow();
}

int Macad::Occt::Quantity_Array2OfColor::UpperRow()
{
	return ((::Quantity_Array2OfColor*)_NativeInstance)->UpperRow();
}

int Macad::Occt::Quantity_Array2OfColor::LowerCol()
{
	return ((::Quantity_Array2OfColor*)_NativeInstance)->LowerCol();
}

int Macad::Occt::Quantity_Array2OfColor::UpperCol()
{
	return ((::Quantity_Array2OfColor*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::Quantity_Array2OfColor::IsDeletable()
{
	return ((::Quantity_Array2OfColor*)_NativeInstance)->IsDeletable();
}

Macad::Occt::Quantity_Array2OfColor^ Macad::Occt::Quantity_Array2OfColor::Assign(Macad::Occt::Quantity_Array2OfColor^ theOther)
{
	::Quantity_Array2OfColor* _result = new ::Quantity_Array2OfColor();
	*_result = ((::Quantity_Array2OfColor*)_NativeInstance)->Assign(*(::Quantity_Array2OfColor*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Array2OfColor(_result);
}

Macad::Occt::Quantity_Array2OfColor^ Macad::Occt::Quantity_Array2OfColor::Move(Macad::Occt::Quantity_Array2OfColor^ theOther)
{
	::Quantity_Array2OfColor* _result = new ::Quantity_Array2OfColor();
	*_result = ((::Quantity_Array2OfColor*)_NativeInstance)->Move(*(::Quantity_Array2OfColor*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Array2OfColor(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_Array2OfColor::Value(int theRow, int theCol)
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Quantity_Array2OfColor*)_NativeInstance)->Value(theRow, theCol);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_Array2OfColor::ChangeValue(int theRow, int theCol)
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Quantity_Array2OfColor*)_NativeInstance)->ChangeValue(theRow, theCol);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Quantity_Array2OfColor::SetValue(int theRow, int theCol, Macad::Occt::Quantity_Color^ theItem)
{
	((::Quantity_Array2OfColor*)_NativeInstance)->SetValue(theRow, theCol, *(::Quantity_Color*)theItem->NativeInstance);
}

void Macad::Occt::Quantity_Array2OfColor::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::Quantity_Array2OfColor*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  Quantity_ColorHasher
//---------------------------------------------------------------------

Macad::Occt::Quantity_ColorHasher::Quantity_ColorHasher()
	: BaseClass<::Quantity_ColorHasher>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_ColorHasher();
}

Macad::Occt::Quantity_ColorHasher::Quantity_ColorHasher(Macad::Occt::Quantity_ColorHasher^ parameter1)
	: BaseClass<::Quantity_ColorHasher>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_ColorHasher(*(::Quantity_ColorHasher*)parameter1->NativeInstance);
}

int Macad::Occt::Quantity_ColorHasher::HashCode(Macad::Occt::Quantity_Color^ theColor, int theUpperBound)
{
	return ::Quantity_ColorHasher::HashCode(*(::Quantity_Color*)theColor->NativeInstance, theUpperBound);
}

bool Macad::Occt::Quantity_ColorHasher::IsEqual(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2)
{
	return ::Quantity_ColorHasher::IsEqual(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Quantity_ColorRGBAHasher
//---------------------------------------------------------------------

Macad::Occt::Quantity_ColorRGBAHasher::Quantity_ColorRGBAHasher()
	: BaseClass<::Quantity_ColorRGBAHasher>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_ColorRGBAHasher();
}

Macad::Occt::Quantity_ColorRGBAHasher::Quantity_ColorRGBAHasher(Macad::Occt::Quantity_ColorRGBAHasher^ parameter1)
	: BaseClass<::Quantity_ColorRGBAHasher>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_ColorRGBAHasher(*(::Quantity_ColorRGBAHasher*)parameter1->NativeInstance);
}

int Macad::Occt::Quantity_ColorRGBAHasher::HashCode(Macad::Occt::Quantity_ColorRGBA^ theColor, int theUpperBound)
{
	return ::Quantity_ColorRGBAHasher::HashCode(*(::Quantity_ColorRGBA*)theColor->NativeInstance, theUpperBound);
}

bool Macad::Occt::Quantity_ColorRGBAHasher::IsEqual(Macad::Occt::Quantity_ColorRGBA^ theColor1, Macad::Occt::Quantity_ColorRGBA^ theColor2)
{
	return ::Quantity_ColorRGBAHasher::IsEqual(*(::Quantity_ColorRGBA*)theColor1->NativeInstance, *(::Quantity_ColorRGBA*)theColor2->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Quantity_Color
//---------------------------------------------------------------------

Macad::Occt::Quantity_Color::Quantity_Color()
	: BaseClass<::Quantity_Color>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Color();
}

Macad::Occt::Quantity_Color::Quantity_Color(Macad::Occt::Quantity_NameOfColor theName)
	: BaseClass<::Quantity_Color>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Color((::Quantity_NameOfColor)theName);
}

Macad::Occt::Quantity_Color::Quantity_Color(double theC1, double theC2, double theC3, Macad::Occt::Quantity_TypeOfColor theType)
	: BaseClass<::Quantity_Color>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Color(theC1, theC2, theC3, (::Quantity_TypeOfColor)theType);
}

Macad::Occt::Quantity_Color::Quantity_Color(Macad::Occt::Quantity_Color^ parameter1)
	: BaseClass<::Quantity_Color>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Color(*(::Quantity_Color*)parameter1->NativeInstance);
}

Macad::Occt::Quantity_NameOfColor Macad::Occt::Quantity_Color::Name()
{
	return (Macad::Occt::Quantity_NameOfColor)((::Quantity_Color*)_NativeInstance)->Name();
}

void Macad::Occt::Quantity_Color::SetValues(Macad::Occt::Quantity_NameOfColor theName)
{
	((::Quantity_Color*)_NativeInstance)->SetValues((::Quantity_NameOfColor)theName);
}

void Macad::Occt::Quantity_Color::Values(double% theC1, double% theC2, double% theC3, Macad::Occt::Quantity_TypeOfColor theType)
{
	pin_ptr<double> pp_theC1 = &theC1;
	pin_ptr<double> pp_theC2 = &theC2;
	pin_ptr<double> pp_theC3 = &theC3;
	((::Quantity_Color*)_NativeInstance)->Values(*(Standard_Real*)pp_theC1, *(Standard_Real*)pp_theC2, *(Standard_Real*)pp_theC3, (::Quantity_TypeOfColor)theType);
}

void Macad::Occt::Quantity_Color::SetValues(double theC1, double theC2, double theC3, Macad::Occt::Quantity_TypeOfColor theType)
{
	((::Quantity_Color*)_NativeInstance)->SetValues(theC1, theC2, theC3, (::Quantity_TypeOfColor)theType);
}

double Macad::Occt::Quantity_Color::Red()
{
	return ((::Quantity_Color*)_NativeInstance)->Red();
}

double Macad::Occt::Quantity_Color::Green()
{
	return ((::Quantity_Color*)_NativeInstance)->Green();
}

double Macad::Occt::Quantity_Color::Blue()
{
	return ((::Quantity_Color*)_NativeInstance)->Blue();
}

double Macad::Occt::Quantity_Color::Hue()
{
	return ((::Quantity_Color*)_NativeInstance)->Hue();
}

double Macad::Occt::Quantity_Color::Light()
{
	return ((::Quantity_Color*)_NativeInstance)->Light();
}

void Macad::Occt::Quantity_Color::ChangeIntensity(double theDelta)
{
	((::Quantity_Color*)_NativeInstance)->ChangeIntensity(theDelta);
}

double Macad::Occt::Quantity_Color::Saturation()
{
	return ((::Quantity_Color*)_NativeInstance)->Saturation();
}

void Macad::Occt::Quantity_Color::ChangeContrast(double theDelta)
{
	((::Quantity_Color*)_NativeInstance)->ChangeContrast(theDelta);
}

bool Macad::Occt::Quantity_Color::IsDifferent(Macad::Occt::Quantity_Color^ theOther)
{
	return ((::Quantity_Color*)_NativeInstance)->IsDifferent(*(::Quantity_Color*)theOther->NativeInstance);
}

bool Macad::Occt::Quantity_Color::IsEqual(Macad::Occt::Quantity_Color^ theOther)
{
	return ((::Quantity_Color*)_NativeInstance)->IsEqual(*(::Quantity_Color*)theOther->NativeInstance);
}

double Macad::Occt::Quantity_Color::Distance(Macad::Occt::Quantity_Color^ theColor)
{
	return ((::Quantity_Color*)_NativeInstance)->Distance(*(::Quantity_Color*)theColor->NativeInstance);
}

double Macad::Occt::Quantity_Color::SquareDistance(Macad::Occt::Quantity_Color^ theColor)
{
	return ((::Quantity_Color*)_NativeInstance)->SquareDistance(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Quantity_Color::Delta(Macad::Occt::Quantity_Color^ theColor, double% DC, double% DI)
{
	pin_ptr<double> pp_DC = &DC;
	pin_ptr<double> pp_DI = &DI;
	((::Quantity_Color*)_NativeInstance)->Delta(*(::Quantity_Color*)theColor->NativeInstance, *(Standard_Real*)pp_DC, *(Standard_Real*)pp_DI);
}

double Macad::Occt::Quantity_Color::DeltaE2000(Macad::Occt::Quantity_Color^ theOther)
{
	return ((::Quantity_Color*)_NativeInstance)->DeltaE2000(*(::Quantity_Color*)theOther->NativeInstance);
}

Macad::Occt::Quantity_NameOfColor Macad::Occt::Quantity_Color::Name(double theR, double theG, double theB)
{
	return (Macad::Occt::Quantity_NameOfColor)::Quantity_Color::Name(theR, theG, theB);
}

System::String^ Macad::Occt::Quantity_Color::StringName(Macad::Occt::Quantity_NameOfColor theColor)
{
	Standard_CString _result;
	_result = ::Quantity_Color::StringName((::Quantity_NameOfColor)theColor);
	return gcnew System::String(_result);
}

bool Macad::Occt::Quantity_Color::ColorFromName(System::String^ theName, Macad::Occt::Quantity_NameOfColor% theColor)
{
	const char* sz_theName = (char*)(void*)Marshal::StringToHGlobalAnsi(theName);
	pin_ptr<Macad::Occt::Quantity_NameOfColor> pp_theColor = &theColor;
	return ::Quantity_Color::ColorFromName(sz_theName, *(::Quantity_NameOfColor*)pp_theColor);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theName);
}

bool Macad::Occt::Quantity_Color::ColorFromName(System::String^ theColorNameString, Macad::Occt::Quantity_Color^ theColor)
{
	const char* sz_theColorNameString = (char*)(void*)Marshal::StringToHGlobalAnsi(theColorNameString);
	return ::Quantity_Color::ColorFromName(sz_theColorNameString, *(::Quantity_Color*)theColor->NativeInstance);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theColorNameString);
}

bool Macad::Occt::Quantity_Color::ColorFromHex(System::String^ theHexColorString, Macad::Occt::Quantity_Color^ theColor)
{
	const char* sz_theHexColorString = (char*)(void*)Marshal::StringToHGlobalAnsi(theHexColorString);
	return ::Quantity_Color::ColorFromHex(sz_theHexColorString, *(::Quantity_Color*)theColor->NativeInstance);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theHexColorString);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Quantity_Color::ColorToHex(Macad::Occt::Quantity_Color^ theColor, bool theToPrefixHash)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Quantity_Color::ColorToHex(*(::Quantity_Color*)theColor->NativeInstance, theToPrefixHash);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Quantity_Color::ColorToHex(Macad::Occt::Quantity_Color^ theColor)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Quantity_Color::ColorToHex(*(::Quantity_Color*)theColor->NativeInstance, true);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Quantity_Color::Color2argb(Macad::Occt::Quantity_Color^ theColor, int% theARGB)
{
	pin_ptr<int> pp_theARGB = &theARGB;
	::Quantity_Color::Color2argb(*(::Quantity_Color*)theColor->NativeInstance, *(Standard_Integer*)pp_theARGB);
}

void Macad::Occt::Quantity_Color::Argb2color(int theARGB, Macad::Occt::Quantity_Color^ theColor)
{
	::Quantity_Color::Argb2color(theARGB, *(::Quantity_Color*)theColor->NativeInstance);
}

double Macad::Occt::Quantity_Color::Convert_LinearRGB_To_sRGB(double theLinearValue)
{
	return ::Quantity_Color::Convert_LinearRGB_To_sRGB(theLinearValue);
}

float Macad::Occt::Quantity_Color::Convert_LinearRGB_To_sRGB(float theLinearValue)
{
	return ::Quantity_Color::Convert_LinearRGB_To_sRGB(theLinearValue);
}

double Macad::Occt::Quantity_Color::Convert_sRGB_To_LinearRGB(double thesRGBValue)
{
	return ::Quantity_Color::Convert_sRGB_To_LinearRGB(thesRGBValue);
}

float Macad::Occt::Quantity_Color::Convert_sRGB_To_LinearRGB(float thesRGBValue)
{
	return ::Quantity_Color::Convert_sRGB_To_LinearRGB(thesRGBValue);
}

float Macad::Occt::Quantity_Color::Convert_LinearRGB_To_sRGB_approx22(float theLinearValue)
{
	return ::Quantity_Color::Convert_LinearRGB_To_sRGB_approx22(theLinearValue);
}

float Macad::Occt::Quantity_Color::Convert_sRGB_To_LinearRGB_approx22(float thesRGBValue)
{
	return ::Quantity_Color::Convert_sRGB_To_LinearRGB_approx22(thesRGBValue);
}

void Macad::Occt::Quantity_Color::HlsRgb(double theH, double theL, double theS, double% theR, double% theG, double% theB)
{
	pin_ptr<double> pp_theR = &theR;
	pin_ptr<double> pp_theG = &theG;
	pin_ptr<double> pp_theB = &theB;
	::Quantity_Color::HlsRgb(theH, theL, theS, *(Standard_Real*)pp_theR, *(Standard_Real*)pp_theG, *(Standard_Real*)pp_theB);
}

void Macad::Occt::Quantity_Color::RgbHls(double theR, double theG, double theB, double% theH, double% theL, double% theS)
{
	pin_ptr<double> pp_theH = &theH;
	pin_ptr<double> pp_theL = &theL;
	pin_ptr<double> pp_theS = &theS;
	::Quantity_Color::RgbHls(theR, theG, theB, *(Standard_Real*)pp_theH, *(Standard_Real*)pp_theL, *(Standard_Real*)pp_theS);
}

double Macad::Occt::Quantity_Color::Epsilon()
{
	return ::Quantity_Color::Epsilon();
}

void Macad::Occt::Quantity_Color::SetEpsilon(double theEpsilon)
{
	::Quantity_Color::SetEpsilon(theEpsilon);
}




//---------------------------------------------------------------------
//  Class  Quantity_ColorRGBA
//---------------------------------------------------------------------

Macad::Occt::Quantity_ColorRGBA::Quantity_ColorRGBA()
	: BaseClass<::Quantity_ColorRGBA>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_ColorRGBA();
}

Macad::Occt::Quantity_ColorRGBA::Quantity_ColorRGBA(Macad::Occt::Quantity_Color^ theRgb)
	: BaseClass<::Quantity_ColorRGBA>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_ColorRGBA(*(::Quantity_Color*)theRgb->NativeInstance);
}

Macad::Occt::Quantity_ColorRGBA::Quantity_ColorRGBA(Macad::Occt::Quantity_Color^ theRgb, float theAlpha)
	: BaseClass<::Quantity_ColorRGBA>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_ColorRGBA(*(::Quantity_Color*)theRgb->NativeInstance, theAlpha);
}

Macad::Occt::Quantity_ColorRGBA::Quantity_ColorRGBA(float theRed, float theGreen, float theBlue, float theAlpha)
	: BaseClass<::Quantity_ColorRGBA>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_ColorRGBA(theRed, theGreen, theBlue, theAlpha);
}

Macad::Occt::Quantity_ColorRGBA::Quantity_ColorRGBA(Macad::Occt::Quantity_ColorRGBA^ parameter1)
	: BaseClass<::Quantity_ColorRGBA>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_ColorRGBA(*(::Quantity_ColorRGBA*)parameter1->NativeInstance);
}

void Macad::Occt::Quantity_ColorRGBA::SetValues(float theRed, float theGreen, float theBlue, float theAlpha)
{
	((::Quantity_ColorRGBA*)_NativeInstance)->SetValues(theRed, theGreen, theBlue, theAlpha);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_ColorRGBA::GetRGB()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Quantity_ColorRGBA*)_NativeInstance)->GetRGB();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_ColorRGBA::ChangeRGB()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Quantity_ColorRGBA*)_NativeInstance)->ChangeRGB();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Quantity_ColorRGBA::SetRGB(Macad::Occt::Quantity_Color^ theRgb)
{
	((::Quantity_ColorRGBA*)_NativeInstance)->SetRGB(*(::Quantity_Color*)theRgb->NativeInstance);
}

float Macad::Occt::Quantity_ColorRGBA::Alpha()
{
	return ((::Quantity_ColorRGBA*)_NativeInstance)->Alpha();
}

void Macad::Occt::Quantity_ColorRGBA::SetAlpha(float theAlpha)
{
	((::Quantity_ColorRGBA*)_NativeInstance)->SetAlpha(theAlpha);
}

bool Macad::Occt::Quantity_ColorRGBA::IsDifferent(Macad::Occt::Quantity_ColorRGBA^ theOther)
{
	return ((::Quantity_ColorRGBA*)_NativeInstance)->IsDifferent(*(::Quantity_ColorRGBA*)theOther->NativeInstance);
}

bool Macad::Occt::Quantity_ColorRGBA::IsEqual(Macad::Occt::Quantity_ColorRGBA^ theOther)
{
	return ((::Quantity_ColorRGBA*)_NativeInstance)->IsEqual(*(::Quantity_ColorRGBA*)theOther->NativeInstance);
}

bool Macad::Occt::Quantity_ColorRGBA::ColorFromName(System::String^ theColorNameString, Macad::Occt::Quantity_ColorRGBA^ theColor)
{
	const char* sz_theColorNameString = (char*)(void*)Marshal::StringToHGlobalAnsi(theColorNameString);
	return ::Quantity_ColorRGBA::ColorFromName(sz_theColorNameString, *(::Quantity_ColorRGBA*)theColor->NativeInstance);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theColorNameString);
}

bool Macad::Occt::Quantity_ColorRGBA::ColorFromHex(char theHexColorString, Macad::Occt::Quantity_ColorRGBA^ theColor, bool theAlphaComponentIsOff)
{
	pin_ptr<char> pp_theHexColorString = &theHexColorString;
	return ::Quantity_ColorRGBA::ColorFromHex((char*)pp_theHexColorString, *(::Quantity_ColorRGBA*)theColor->NativeInstance, theAlphaComponentIsOff);
}

bool Macad::Occt::Quantity_ColorRGBA::ColorFromHex(char theHexColorString, Macad::Occt::Quantity_ColorRGBA^ theColor)
{
	pin_ptr<char> pp_theHexColorString = &theHexColorString;
	return ::Quantity_ColorRGBA::ColorFromHex((char*)pp_theHexColorString, *(::Quantity_ColorRGBA*)theColor->NativeInstance, false);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Quantity_ColorRGBA::ColorToHex(Macad::Occt::Quantity_ColorRGBA^ theColor, bool theToPrefixHash)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Quantity_ColorRGBA::ColorToHex(*(::Quantity_ColorRGBA*)theColor->NativeInstance, theToPrefixHash);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Quantity_ColorRGBA::ColorToHex(Macad::Occt::Quantity_ColorRGBA^ theColor)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Quantity_ColorRGBA::ColorToHex(*(::Quantity_ColorRGBA*)theColor->NativeInstance, true);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}




//---------------------------------------------------------------------
//  Class  Quantity_DateDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Quantity_DateDefinitionError::Quantity_DateDefinitionError()
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Quantity_DateDefinitionError();
}

Macad::Occt::Quantity_DateDefinitionError::Quantity_DateDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Quantity_DateDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Quantity_DateDefinitionError::Quantity_DateDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Quantity_DateDefinitionError(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

Macad::Occt::Quantity_DateDefinitionError::Quantity_DateDefinitionError(Macad::Occt::Quantity_DateDefinitionError^ parameter1)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Quantity_DateDefinitionError(*(::Quantity_DateDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Quantity_DateDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Quantity_DateDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Quantity_DateDefinitionError::Raise()
{
	::Quantity_DateDefinitionError::Raise("");
}

Macad::Occt::Quantity_DateDefinitionError^ Macad::Occt::Quantity_DateDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Quantity_DateDefinitionError) _result;
	_result = ::Quantity_DateDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Quantity_DateDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Quantity_DateDefinitionError^ Macad::Occt::Quantity_DateDefinitionError::NewInstance()
{
	Handle(::Quantity_DateDefinitionError) _result;
	_result = ::Quantity_DateDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Quantity_DateDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Quantity_DateDefinitionError^ Macad::Occt::Quantity_DateDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Quantity_DateDefinitionError) _result;
	_result = ::Quantity_DateDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	 return _result.IsNull() ? nullptr : Macad::Occt::Quantity_DateDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Quantity_DateDefinitionError^ Macad::Occt::Quantity_DateDefinitionError::CreateDowncasted(::Quantity_DateDefinitionError* instance)
{
	return gcnew Macad::Occt::Quantity_DateDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Quantity_Period
//---------------------------------------------------------------------

Macad::Occt::Quantity_Period::Quantity_Period(int dd, int hh, int mn, int ss, int mis, int mics)
	: BaseClass<::Quantity_Period>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Period(dd, hh, mn, ss, mis, mics);
}

Macad::Occt::Quantity_Period::Quantity_Period(int dd, int hh, int mn, int ss, int mis)
	: BaseClass<::Quantity_Period>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Period(dd, hh, mn, ss, mis, 0);
}

Macad::Occt::Quantity_Period::Quantity_Period(int dd, int hh, int mn, int ss)
	: BaseClass<::Quantity_Period>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Period(dd, hh, mn, ss, 0, 0);
}

Macad::Occt::Quantity_Period::Quantity_Period(int ss, int mics)
	: BaseClass<::Quantity_Period>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Period(ss, mics);
}

Macad::Occt::Quantity_Period::Quantity_Period(int ss)
	: BaseClass<::Quantity_Period>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Period(ss, 0);
}

Macad::Occt::Quantity_Period::Quantity_Period(Macad::Occt::Quantity_Period^ parameter1)
	: BaseClass<::Quantity_Period>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Period(*(::Quantity_Period*)parameter1->NativeInstance);
}

void Macad::Occt::Quantity_Period::Values(int% dd, int% hh, int% mn, int% ss, int% mis, int% mics)
{
	pin_ptr<int> pp_dd = &dd;
	pin_ptr<int> pp_hh = &hh;
	pin_ptr<int> pp_mn = &mn;
	pin_ptr<int> pp_ss = &ss;
	pin_ptr<int> pp_mis = &mis;
	pin_ptr<int> pp_mics = &mics;
	((::Quantity_Period*)_NativeInstance)->Values(*(Standard_Integer*)pp_dd, *(Standard_Integer*)pp_hh, *(Standard_Integer*)pp_mn, *(Standard_Integer*)pp_ss, *(Standard_Integer*)pp_mis, *(Standard_Integer*)pp_mics);
}

void Macad::Occt::Quantity_Period::Values(int% ss, int% mics)
{
	pin_ptr<int> pp_ss = &ss;
	pin_ptr<int> pp_mics = &mics;
	((::Quantity_Period*)_NativeInstance)->Values(*(Standard_Integer*)pp_ss, *(Standard_Integer*)pp_mics);
}

void Macad::Occt::Quantity_Period::SetValues(int dd, int hh, int mn, int ss, int mis, int mics)
{
	((::Quantity_Period*)_NativeInstance)->SetValues(dd, hh, mn, ss, mis, mics);
}

void Macad::Occt::Quantity_Period::SetValues(int dd, int hh, int mn, int ss, int mis)
{
	((::Quantity_Period*)_NativeInstance)->SetValues(dd, hh, mn, ss, mis, 0);
}

void Macad::Occt::Quantity_Period::SetValues(int dd, int hh, int mn, int ss)
{
	((::Quantity_Period*)_NativeInstance)->SetValues(dd, hh, mn, ss, 0, 0);
}

void Macad::Occt::Quantity_Period::SetValues(int ss, int mics)
{
	((::Quantity_Period*)_NativeInstance)->SetValues(ss, mics);
}

void Macad::Occt::Quantity_Period::SetValues(int ss)
{
	((::Quantity_Period*)_NativeInstance)->SetValues(ss, 0);
}

Macad::Occt::Quantity_Period^ Macad::Occt::Quantity_Period::Subtract(Macad::Occt::Quantity_Period^ anOther)
{
	::Quantity_Period* _result = new ::Quantity_Period(0, 0, 0, 0, 0, 0);
	*_result = ((::Quantity_Period*)_NativeInstance)->Subtract(*(::Quantity_Period*)anOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Period(_result);
}

Macad::Occt::Quantity_Period^ Macad::Occt::Quantity_Period::Add(Macad::Occt::Quantity_Period^ anOther)
{
	::Quantity_Period* _result = new ::Quantity_Period(0, 0, 0, 0, 0, 0);
	*_result = ((::Quantity_Period*)_NativeInstance)->Add(*(::Quantity_Period*)anOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Period(_result);
}

bool Macad::Occt::Quantity_Period::IsEqual(Macad::Occt::Quantity_Period^ anOther)
{
	return ((::Quantity_Period*)_NativeInstance)->IsEqual(*(::Quantity_Period*)anOther->NativeInstance);
}

bool Macad::Occt::Quantity_Period::IsShorter(Macad::Occt::Quantity_Period^ anOther)
{
	return ((::Quantity_Period*)_NativeInstance)->IsShorter(*(::Quantity_Period*)anOther->NativeInstance);
}

bool Macad::Occt::Quantity_Period::IsLonger(Macad::Occt::Quantity_Period^ anOther)
{
	return ((::Quantity_Period*)_NativeInstance)->IsLonger(*(::Quantity_Period*)anOther->NativeInstance);
}

bool Macad::Occt::Quantity_Period::IsValid(int dd, int hh, int mn, int ss, int mis, int mics)
{
	return ::Quantity_Period::IsValid(dd, hh, mn, ss, mis, mics);
}

bool Macad::Occt::Quantity_Period::IsValid(int dd, int hh, int mn, int ss, int mis)
{
	return ::Quantity_Period::IsValid(dd, hh, mn, ss, mis, 0);
}

bool Macad::Occt::Quantity_Period::IsValid(int dd, int hh, int mn, int ss)
{
	return ::Quantity_Period::IsValid(dd, hh, mn, ss, 0, 0);
}

bool Macad::Occt::Quantity_Period::IsValid(int ss, int mics)
{
	return ::Quantity_Period::IsValid(ss, mics);
}

bool Macad::Occt::Quantity_Period::IsValid(int ss)
{
	return ::Quantity_Period::IsValid(ss, 0);
}




//---------------------------------------------------------------------
//  Class  Quantity_Date
//---------------------------------------------------------------------

Macad::Occt::Quantity_Date::Quantity_Date()
	: BaseClass<::Quantity_Date>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Date();
}

Macad::Occt::Quantity_Date::Quantity_Date(int mm, int dd, int yyyy, int hh, int mn, int ss, int mis, int mics)
	: BaseClass<::Quantity_Date>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Date(mm, dd, yyyy, hh, mn, ss, mis, mics);
}

Macad::Occt::Quantity_Date::Quantity_Date(int mm, int dd, int yyyy, int hh, int mn, int ss, int mis)
	: BaseClass<::Quantity_Date>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Date(mm, dd, yyyy, hh, mn, ss, mis, 0);
}

Macad::Occt::Quantity_Date::Quantity_Date(int mm, int dd, int yyyy, int hh, int mn, int ss)
	: BaseClass<::Quantity_Date>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Date(mm, dd, yyyy, hh, mn, ss, 0, 0);
}

Macad::Occt::Quantity_Date::Quantity_Date(Macad::Occt::Quantity_Date^ parameter1)
	: BaseClass<::Quantity_Date>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Quantity_Date(*(::Quantity_Date*)parameter1->NativeInstance);
}

void Macad::Occt::Quantity_Date::Values(int% mm, int% dd, int% yy, int% hh, int% mn, int% ss, int% mis, int% mics)
{
	pin_ptr<int> pp_mm = &mm;
	pin_ptr<int> pp_dd = &dd;
	pin_ptr<int> pp_yy = &yy;
	pin_ptr<int> pp_hh = &hh;
	pin_ptr<int> pp_mn = &mn;
	pin_ptr<int> pp_ss = &ss;
	pin_ptr<int> pp_mis = &mis;
	pin_ptr<int> pp_mics = &mics;
	((::Quantity_Date*)_NativeInstance)->Values(*(Standard_Integer*)pp_mm, *(Standard_Integer*)pp_dd, *(Standard_Integer*)pp_yy, *(Standard_Integer*)pp_hh, *(Standard_Integer*)pp_mn, *(Standard_Integer*)pp_ss, *(Standard_Integer*)pp_mis, *(Standard_Integer*)pp_mics);
}

void Macad::Occt::Quantity_Date::SetValues(int mm, int dd, int yy, int hh, int mn, int ss, int mis, int mics)
{
	((::Quantity_Date*)_NativeInstance)->SetValues(mm, dd, yy, hh, mn, ss, mis, mics);
}

void Macad::Occt::Quantity_Date::SetValues(int mm, int dd, int yy, int hh, int mn, int ss, int mis)
{
	((::Quantity_Date*)_NativeInstance)->SetValues(mm, dd, yy, hh, mn, ss, mis, 0);
}

void Macad::Occt::Quantity_Date::SetValues(int mm, int dd, int yy, int hh, int mn, int ss)
{
	((::Quantity_Date*)_NativeInstance)->SetValues(mm, dd, yy, hh, mn, ss, 0, 0);
}

Macad::Occt::Quantity_Period^ Macad::Occt::Quantity_Date::Difference(Macad::Occt::Quantity_Date^ anOther)
{
	::Quantity_Period* _result = new ::Quantity_Period(0, 0, 0, 0, 0, 0);
	*_result = ((::Quantity_Date*)_NativeInstance)->Difference(*(::Quantity_Date*)anOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Period(_result);
}

Macad::Occt::Quantity_Date^ Macad::Occt::Quantity_Date::Subtract(Macad::Occt::Quantity_Period^ aPeriod)
{
	::Quantity_Date* _result = new ::Quantity_Date();
	*_result = ((::Quantity_Date*)_NativeInstance)->Subtract(*(::Quantity_Period*)aPeriod->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Date(_result);
}

Macad::Occt::Quantity_Date^ Macad::Occt::Quantity_Date::Add(Macad::Occt::Quantity_Period^ aPeriod)
{
	::Quantity_Date* _result = new ::Quantity_Date();
	*_result = ((::Quantity_Date*)_NativeInstance)->Add(*(::Quantity_Period*)aPeriod->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Date(_result);
}

int Macad::Occt::Quantity_Date::Year()
{
	return ((::Quantity_Date*)_NativeInstance)->Year();
}

int Macad::Occt::Quantity_Date::Month()
{
	return ((::Quantity_Date*)_NativeInstance)->Month();
}

int Macad::Occt::Quantity_Date::Day()
{
	return ((::Quantity_Date*)_NativeInstance)->Day();
}

int Macad::Occt::Quantity_Date::Hour()
{
	return ((::Quantity_Date*)_NativeInstance)->Hour();
}

int Macad::Occt::Quantity_Date::Minute()
{
	return ((::Quantity_Date*)_NativeInstance)->Minute();
}

int Macad::Occt::Quantity_Date::Second()
{
	return ((::Quantity_Date*)_NativeInstance)->Second();
}

int Macad::Occt::Quantity_Date::MilliSecond()
{
	return ((::Quantity_Date*)_NativeInstance)->MilliSecond();
}

int Macad::Occt::Quantity_Date::MicroSecond()
{
	return ((::Quantity_Date*)_NativeInstance)->MicroSecond();
}

bool Macad::Occt::Quantity_Date::IsEqual(Macad::Occt::Quantity_Date^ anOther)
{
	return ((::Quantity_Date*)_NativeInstance)->IsEqual(*(::Quantity_Date*)anOther->NativeInstance);
}

bool Macad::Occt::Quantity_Date::IsEarlier(Macad::Occt::Quantity_Date^ anOther)
{
	return ((::Quantity_Date*)_NativeInstance)->IsEarlier(*(::Quantity_Date*)anOther->NativeInstance);
}

bool Macad::Occt::Quantity_Date::IsLater(Macad::Occt::Quantity_Date^ anOther)
{
	return ((::Quantity_Date*)_NativeInstance)->IsLater(*(::Quantity_Date*)anOther->NativeInstance);
}

bool Macad::Occt::Quantity_Date::IsValid(int mm, int dd, int yy, int hh, int mn, int ss, int mis, int mics)
{
	return ::Quantity_Date::IsValid(mm, dd, yy, hh, mn, ss, mis, mics);
}

bool Macad::Occt::Quantity_Date::IsValid(int mm, int dd, int yy, int hh, int mn, int ss, int mis)
{
	return ::Quantity_Date::IsValid(mm, dd, yy, hh, mn, ss, mis, 0);
}

bool Macad::Occt::Quantity_Date::IsValid(int mm, int dd, int yy, int hh, int mn, int ss)
{
	return ::Quantity_Date::IsValid(mm, dd, yy, hh, mn, ss, 0, 0);
}

bool Macad::Occt::Quantity_Date::IsLeap(int yy)
{
	return ::Quantity_Date::IsLeap(yy);
}




//---------------------------------------------------------------------
//  Class  Quantity_HArray1OfColor
//---------------------------------------------------------------------

Macad::Occt::Quantity_HArray1OfColor::Quantity_HArray1OfColor()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Quantity_HArray1OfColor();
}

Macad::Occt::Quantity_HArray1OfColor::Quantity_HArray1OfColor(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Quantity_HArray1OfColor(theLower, theUpper);
}

Macad::Occt::Quantity_HArray1OfColor::Quantity_HArray1OfColor(int theLower, int theUpper, Macad::Occt::Quantity_Color^ theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Quantity_HArray1OfColor(theLower, theUpper, *(::Quantity_Color*)theValue->NativeInstance);
}

Macad::Occt::Quantity_HArray1OfColor::Quantity_HArray1OfColor(Macad::Occt::Quantity_Array1OfColor^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Quantity_HArray1OfColor(*(::Quantity_Array1OfColor*)theOther->NativeInstance);
}

Macad::Occt::Quantity_HArray1OfColor::Quantity_HArray1OfColor(Macad::Occt::Quantity_HArray1OfColor^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Quantity_HArray1OfColor(*(::Quantity_HArray1OfColor*)parameter1->NativeInstance);
}

Macad::Occt::Quantity_Array1OfColor^ Macad::Occt::Quantity_HArray1OfColor::Array1()
{
	::Quantity_Array1OfColor* _result = new ::Quantity_Array1OfColor();
	*_result =  (::Quantity_Array1OfColor)((::Quantity_HArray1OfColor*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Array1OfColor(_result);
}

Macad::Occt::Quantity_Array1OfColor^ Macad::Occt::Quantity_HArray1OfColor::ChangeArray1()
{
	::Quantity_Array1OfColor* _result = new ::Quantity_Array1OfColor();
	*_result = ((::Quantity_HArray1OfColor*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Array1OfColor(_result);
}

void Macad::Occt::Quantity_HArray1OfColor::Init(Macad::Occt::Quantity_Color^ theValue)
{
	((::Quantity_HArray1OfColor*)_NativeInstance)->Init(*(::Quantity_Color*)theValue->NativeInstance);
}

int Macad::Occt::Quantity_HArray1OfColor::Size()
{
	return ((::Quantity_HArray1OfColor*)_NativeInstance)->Size();
}

int Macad::Occt::Quantity_HArray1OfColor::Length()
{
	return ((::Quantity_HArray1OfColor*)_NativeInstance)->Length();
}

bool Macad::Occt::Quantity_HArray1OfColor::IsEmpty()
{
	return ((::Quantity_HArray1OfColor*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::Quantity_HArray1OfColor::Lower()
{
	return ((::Quantity_HArray1OfColor*)_NativeInstance)->Lower();
}

int Macad::Occt::Quantity_HArray1OfColor::Upper()
{
	return ((::Quantity_HArray1OfColor*)_NativeInstance)->Upper();
}

bool Macad::Occt::Quantity_HArray1OfColor::IsDeletable()
{
	return ((::Quantity_HArray1OfColor*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::Quantity_HArray1OfColor::IsAllocated()
{
	return ((::Quantity_HArray1OfColor*)_NativeInstance)->IsAllocated();
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_HArray1OfColor::First()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Quantity_HArray1OfColor*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_HArray1OfColor::ChangeFirst()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Quantity_HArray1OfColor*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_HArray1OfColor::Last()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Quantity_HArray1OfColor*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_HArray1OfColor::ChangeLast()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Quantity_HArray1OfColor*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_HArray1OfColor::Value(int theIndex)
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Quantity_HArray1OfColor*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_HArray1OfColor::ChangeValue(int theIndex)
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Quantity_HArray1OfColor*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Quantity_HArray1OfColor::SetValue(int theIndex, Macad::Occt::Quantity_Color^ theItem)
{
	((::Quantity_HArray1OfColor*)_NativeInstance)->SetValue(theIndex, *(::Quantity_Color*)theItem->NativeInstance);
}

void Macad::Occt::Quantity_HArray1OfColor::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::Quantity_HArray1OfColor*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::Quantity_HArray1OfColor^ Macad::Occt::Quantity_HArray1OfColor::CreateDowncasted(::Quantity_HArray1OfColor* instance)
{
	return gcnew Macad::Occt::Quantity_HArray1OfColor( instance );
}



//---------------------------------------------------------------------
//  Class  Quantity_PeriodDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Quantity_PeriodDefinitionError::Quantity_PeriodDefinitionError()
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Quantity_PeriodDefinitionError();
}

Macad::Occt::Quantity_PeriodDefinitionError::Quantity_PeriodDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Quantity_PeriodDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Quantity_PeriodDefinitionError::Quantity_PeriodDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Quantity_PeriodDefinitionError(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

Macad::Occt::Quantity_PeriodDefinitionError::Quantity_PeriodDefinitionError(Macad::Occt::Quantity_PeriodDefinitionError^ parameter1)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Quantity_PeriodDefinitionError(*(::Quantity_PeriodDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Quantity_PeriodDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Quantity_PeriodDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Quantity_PeriodDefinitionError::Raise()
{
	::Quantity_PeriodDefinitionError::Raise("");
}

Macad::Occt::Quantity_PeriodDefinitionError^ Macad::Occt::Quantity_PeriodDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Quantity_PeriodDefinitionError) _result;
	_result = ::Quantity_PeriodDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Quantity_PeriodDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Quantity_PeriodDefinitionError^ Macad::Occt::Quantity_PeriodDefinitionError::NewInstance()
{
	Handle(::Quantity_PeriodDefinitionError) _result;
	_result = ::Quantity_PeriodDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Quantity_PeriodDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Quantity_PeriodDefinitionError^ Macad::Occt::Quantity_PeriodDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Quantity_PeriodDefinitionError) _result;
	_result = ::Quantity_PeriodDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	 return _result.IsNull() ? nullptr : Macad::Occt::Quantity_PeriodDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Quantity_PeriodDefinitionError^ Macad::Occt::Quantity_PeriodDefinitionError::CreateDowncasted(::Quantity_PeriodDefinitionError* instance)
{
	return gcnew Macad::Occt::Quantity_PeriodDefinitionError( instance );
}


