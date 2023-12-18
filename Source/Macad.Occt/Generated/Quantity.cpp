// Generated wrapper code for package Quantity

#include "OcctPCH.h"
#include "Quantity.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "TCollection.h"
#include "Graphic3d.h"


//---------------------------------------------------------------------
//  Class  Quantity_Array1OfColor
//---------------------------------------------------------------------

Macad::Occt::Quantity_Array1OfColor::Quantity_Array1OfColor()
    : Macad::Occt::BaseClass<::Quantity_Array1OfColor>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_Array1OfColor();
}

Macad::Occt::Quantity_Array1OfColor::Quantity_Array1OfColor(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::Quantity_Array1OfColor>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_Array1OfColor(theLower, theUpper);
}

Macad::Occt::Quantity_Array1OfColor::Quantity_Array1OfColor(Macad::Occt::Quantity_Color^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::Quantity_Array1OfColor>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_Array1OfColor(*(::Quantity_Color*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::Quantity_Array1OfColor::Quantity_Array1OfColor(Macad::Occt::Quantity_Color^ theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::Quantity_Array1OfColor>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_Array1OfColor(*(::Quantity_Color*)theBegin->NativeInstance, theLower, theUpper, true);
}

void Macad::Occt::Quantity_Array1OfColor::Init(Macad::Occt::Quantity_Color^ theValue)
{
    ((::Quantity_Array1OfColor*)_NativeInstance)->Init(*(::Quantity_Color*)theValue->NativeInstance);
}

int Macad::Occt::Quantity_Array1OfColor::Size()
{
    int _result = ((::Quantity_Array1OfColor*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Quantity_Array1OfColor::Length()
{
    int _result = ((::Quantity_Array1OfColor*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::Quantity_Array1OfColor::IsEmpty()
{
    bool _result = ((::Quantity_Array1OfColor*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Quantity_Array1OfColor::Lower()
{
    int _result = ((::Quantity_Array1OfColor*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Quantity_Array1OfColor::Upper()
{
    int _result = ((::Quantity_Array1OfColor*)_NativeInstance)->Upper();
    return _result;
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
    *_result = (::Quantity_Color)((::Quantity_Array1OfColor*)_NativeInstance)->First();
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
    *_result = (::Quantity_Color)((::Quantity_Array1OfColor*)_NativeInstance)->Last();
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
    *_result = (::Quantity_Color)((::Quantity_Array1OfColor*)_NativeInstance)->Value(theIndex);
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

void Macad::Occt::Quantity_Array1OfColor::UpdateLowerBound(int theLower)
{
    ((::Quantity_Array1OfColor*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Quantity_Array1OfColor::UpdateUpperBound(int theUpper)
{
    ((::Quantity_Array1OfColor*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::Quantity_Array1OfColor::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::Quantity_Array1OfColor*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::Quantity_Array1OfColor::IsDeletable()
{
    bool _result = ((::Quantity_Array1OfColor*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<Macad::Occt::Quantity_Color^>^ Macad::Occt::Quantity_Array1OfColor::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Quantity_Color^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Quantity_Array1OfColor::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Quantity_Color^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Quantity_Array1OfColor::Iterator
//---------------------------------------------------------------------

void Macad::Occt::Quantity_Array1OfColor::Iterator::Init(Macad::Occt::Quantity_Array1OfColor^ theList)
{
    ((::Quantity_Array1OfColor::Iterator*)_NativeInstance)->Init(*(::Quantity_Array1OfColor*)theList->NativeInstance);
}

bool Macad::Occt::Quantity_Array1OfColor::Iterator::More()
{
    bool _result = ((::Quantity_Array1OfColor::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Quantity_Array1OfColor::Iterator::Initialize(Macad::Occt::Quantity_Array1OfColor^ theList)
{
    ((::Quantity_Array1OfColor::Iterator*)_NativeInstance)->Initialize(*(::Quantity_Array1OfColor*)theList->NativeInstance);
}

void Macad::Occt::Quantity_Array1OfColor::Iterator::Next()
{
    ((::Quantity_Array1OfColor::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_Array1OfColor::Iterator::Value()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Quantity_Array1OfColor::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_Array1OfColor::Iterator::ChangeValue()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::Quantity_Array1OfColor::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}



//---------------------------------------------------------------------
//  Class  Quantity_Color
//---------------------------------------------------------------------

Macad::Occt::Quantity_Color::Quantity_Color()
    : Macad::Occt::BaseClass<::Quantity_Color>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_Color();
}

Macad::Occt::Quantity_Color::Quantity_Color(Macad::Occt::Quantity_NameOfColor theName)
    : Macad::Occt::BaseClass<::Quantity_Color>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_Color((::Quantity_NameOfColor)theName);
}

Macad::Occt::Quantity_Color::Quantity_Color(double theC1, double theC2, double theC3, Macad::Occt::Quantity_TypeOfColor theType)
    : Macad::Occt::BaseClass<::Quantity_Color>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_Color(theC1, theC2, theC3, (::Quantity_TypeOfColor)theType);
}

Macad::Occt::Quantity_Color::Quantity_Color(Macad::Occt::gp_Vec3f^ theRgb)
    : Macad::Occt::BaseClass<::Quantity_Color>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_Color(*(::gp_Vec3f*)theRgb->NativeInstance);
}

Macad::Occt::Quantity_NameOfColor Macad::Occt::Quantity_Color::Name()
{
    ::Quantity_NameOfColor _result = ((::Quantity_Color*)_NativeInstance)->Name();
    return (Macad::Occt::Quantity_NameOfColor)_result;
}

void Macad::Occt::Quantity_Color::SetValues(Macad::Occt::Quantity_NameOfColor theName)
{
    ((::Quantity_Color*)_NativeInstance)->SetValues((::Quantity_NameOfColor)theName);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Quantity_Color::Rgb()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Quantity_Color*)_NativeInstance)->Rgb();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

void Macad::Occt::Quantity_Color::Values(double% theC1, double% theC2, double% theC3, Macad::Occt::Quantity_TypeOfColor theType)
{
    pin_ptr<double> pp_theC1 = &theC1;
    pin_ptr<double> pp_theC2 = &theC2;
    pin_ptr<double> pp_theC3 = &theC3;
    ((::Quantity_Color*)_NativeInstance)->Values(*(double*)pp_theC1, *(double*)pp_theC2, *(double*)pp_theC3, (::Quantity_TypeOfColor)theType);
}

void Macad::Occt::Quantity_Color::SetValues(double theC1, double theC2, double theC3, Macad::Occt::Quantity_TypeOfColor theType)
{
    ((::Quantity_Color*)_NativeInstance)->SetValues(theC1, theC2, theC3, (::Quantity_TypeOfColor)theType);
}

double Macad::Occt::Quantity_Color::Red()
{
    double _result = ((::Quantity_Color*)_NativeInstance)->Red();
    return _result;
}

double Macad::Occt::Quantity_Color::Green()
{
    double _result = ((::Quantity_Color*)_NativeInstance)->Green();
    return _result;
}

double Macad::Occt::Quantity_Color::Blue()
{
    double _result = ((::Quantity_Color*)_NativeInstance)->Blue();
    return _result;
}

double Macad::Occt::Quantity_Color::Hue()
{
    double _result = ((::Quantity_Color*)_NativeInstance)->Hue();
    return _result;
}

double Macad::Occt::Quantity_Color::Light()
{
    double _result = ((::Quantity_Color*)_NativeInstance)->Light();
    return _result;
}

void Macad::Occt::Quantity_Color::ChangeIntensity(double theDelta)
{
    ((::Quantity_Color*)_NativeInstance)->ChangeIntensity(theDelta);
}

double Macad::Occt::Quantity_Color::Saturation()
{
    double _result = ((::Quantity_Color*)_NativeInstance)->Saturation();
    return _result;
}

void Macad::Occt::Quantity_Color::ChangeContrast(double theDelta)
{
    ((::Quantity_Color*)_NativeInstance)->ChangeContrast(theDelta);
}

bool Macad::Occt::Quantity_Color::IsDifferent(Macad::Occt::Quantity_Color^ theOther)
{
    bool _result = ((::Quantity_Color*)_NativeInstance)->IsDifferent(*(::Quantity_Color*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Quantity_Color::IsEqual(Macad::Occt::Quantity_Color^ theOther)
{
    bool _result = ((::Quantity_Color*)_NativeInstance)->IsEqual(*(::Quantity_Color*)theOther->NativeInstance);
    return _result;
}

double Macad::Occt::Quantity_Color::Distance(Macad::Occt::Quantity_Color^ theColor)
{
    double _result = ((::Quantity_Color*)_NativeInstance)->Distance(*(::Quantity_Color*)theColor->NativeInstance);
    return _result;
}

double Macad::Occt::Quantity_Color::SquareDistance(Macad::Occt::Quantity_Color^ theColor)
{
    double _result = ((::Quantity_Color*)_NativeInstance)->SquareDistance(*(::Quantity_Color*)theColor->NativeInstance);
    return _result;
}

void Macad::Occt::Quantity_Color::Delta(Macad::Occt::Quantity_Color^ theColor, double% DC, double% DI)
{
    pin_ptr<double> pp_DC = &DC;
    pin_ptr<double> pp_DI = &DI;
    ((::Quantity_Color*)_NativeInstance)->Delta(*(::Quantity_Color*)theColor->NativeInstance, *(double*)pp_DC, *(double*)pp_DI);
}

double Macad::Occt::Quantity_Color::DeltaE2000(Macad::Occt::Quantity_Color^ theOther)
{
    double _result = ((::Quantity_Color*)_NativeInstance)->DeltaE2000(*(::Quantity_Color*)theOther->NativeInstance);
    return _result;
}

Macad::Occt::Quantity_NameOfColor Macad::Occt::Quantity_Color::Name(double theR, double theG, double theB)
{
    ::Quantity_NameOfColor _result = ::Quantity_Color::Name(theR, theG, theB);
    return (Macad::Occt::Quantity_NameOfColor)_result;
}

System::String^ Macad::Occt::Quantity_Color::StringName(Macad::Occt::Quantity_NameOfColor theColor)
{
    Standard_CString _result = ::Quantity_Color::StringName((::Quantity_NameOfColor)theColor);
    return gcnew System::String(_result);
}

bool Macad::Occt::Quantity_Color::ColorFromName(System::String^ theName, Macad::Occt::Quantity_NameOfColor% theColor)
{
    const char* sz_theName = (char*)(void*)Marshal::StringToHGlobalAnsi(theName);
    pin_ptr<Macad::Occt::Quantity_NameOfColor> pp_theColor = &theColor;
    bool _result = ::Quantity_Color::ColorFromName(sz_theName, *(::Quantity_NameOfColor*)pp_theColor);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theName);
    return _result;
}

bool Macad::Occt::Quantity_Color::ColorFromName(System::String^ theColorNameString, Macad::Occt::Quantity_Color^ theColor)
{
    const char* sz_theColorNameString = (char*)(void*)Marshal::StringToHGlobalAnsi(theColorNameString);
    bool _result = ::Quantity_Color::ColorFromName(sz_theColorNameString, *(::Quantity_Color*)theColor->NativeInstance);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theColorNameString);
    return _result;
}

bool Macad::Occt::Quantity_Color::ColorFromHex(System::String^ theHexColorString, Macad::Occt::Quantity_Color^ theColor)
{
    const char* sz_theHexColorString = (char*)(void*)Marshal::StringToHGlobalAnsi(theHexColorString);
    bool _result = ::Quantity_Color::ColorFromHex(sz_theHexColorString, *(::Quantity_Color*)theColor->NativeInstance);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theHexColorString);
    return _result;
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

Macad::Occt::gp_Vec3f^ Macad::Occt::Quantity_Color::Convert_sRGB_To_HLS(Macad::Occt::gp_Vec3f^ theRgb)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::Quantity_Color::Convert_sRGB_To_HLS(*(::gp_Vec3f*)theRgb->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Quantity_Color::Convert_HLS_To_sRGB(Macad::Occt::gp_Vec3f^ theHls)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::Quantity_Color::Convert_HLS_To_sRGB(*(::gp_Vec3f*)theHls->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Quantity_Color::Convert_LinearRGB_To_HLS(Macad::Occt::gp_Vec3f^ theRgb)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::Quantity_Color::Convert_LinearRGB_To_HLS(*(::gp_Vec3f*)theRgb->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Quantity_Color::Convert_HLS_To_LinearRGB(Macad::Occt::gp_Vec3f^ theHls)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::Quantity_Color::Convert_HLS_To_LinearRGB(*(::gp_Vec3f*)theHls->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Quantity_Color::Convert_LinearRGB_To_Lab(Macad::Occt::gp_Vec3f^ theRgb)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::Quantity_Color::Convert_LinearRGB_To_Lab(*(::gp_Vec3f*)theRgb->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Quantity_Color::Convert_Lab_To_Lch(Macad::Occt::gp_Vec3f^ theLab)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::Quantity_Color::Convert_Lab_To_Lch(*(::gp_Vec3f*)theLab->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Quantity_Color::Convert_Lab_To_LinearRGB(Macad::Occt::gp_Vec3f^ theLab)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::Quantity_Color::Convert_Lab_To_LinearRGB(*(::gp_Vec3f*)theLab->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Quantity_Color::Convert_Lch_To_Lab(Macad::Occt::gp_Vec3f^ theLch)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::Quantity_Color::Convert_Lch_To_Lab(*(::gp_Vec3f*)theLch->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

void Macad::Occt::Quantity_Color::Color2argb(Macad::Occt::Quantity_Color^ theColor, int% theARGB)
{
    pin_ptr<int> pp_theARGB = &theARGB;
    ::Quantity_Color::Color2argb(*(::Quantity_Color*)theColor->NativeInstance, *(int*)pp_theARGB);
}

void Macad::Occt::Quantity_Color::Argb2color(int theARGB, Macad::Occt::Quantity_Color^ theColor)
{
    ::Quantity_Color::Argb2color(theARGB, *(::Quantity_Color*)theColor->NativeInstance);
}

double Macad::Occt::Quantity_Color::Convert_LinearRGB_To_sRGB(double theLinearValue)
{
    double _result = ::Quantity_Color::Convert_LinearRGB_To_sRGB(theLinearValue);
    return _result;
}

float Macad::Occt::Quantity_Color::Convert_LinearRGB_To_sRGB(float theLinearValue)
{
    float _result = ::Quantity_Color::Convert_LinearRGB_To_sRGB(theLinearValue);
    return _result;
}

double Macad::Occt::Quantity_Color::Convert_sRGB_To_LinearRGB(double thesRGBValue)
{
    double _result = ::Quantity_Color::Convert_sRGB_To_LinearRGB(thesRGBValue);
    return _result;
}

float Macad::Occt::Quantity_Color::Convert_sRGB_To_LinearRGB(float thesRGBValue)
{
    float _result = ::Quantity_Color::Convert_sRGB_To_LinearRGB(thesRGBValue);
    return _result;
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Quantity_Color::Convert_LinearRGB_To_sRGB(Macad::Occt::gp_Vec3f^ theRGB)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::Quantity_Color::Convert_LinearRGB_To_sRGB(*(::gp_Vec3f*)theRGB->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Quantity_Color::Convert_sRGB_To_LinearRGB(Macad::Occt::gp_Vec3f^ theRGB)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::Quantity_Color::Convert_sRGB_To_LinearRGB(*(::gp_Vec3f*)theRGB->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

float Macad::Occt::Quantity_Color::Convert_LinearRGB_To_sRGB_approx22(float theLinearValue)
{
    float _result = ::Quantity_Color::Convert_LinearRGB_To_sRGB_approx22(theLinearValue);
    return _result;
}

float Macad::Occt::Quantity_Color::Convert_sRGB_To_LinearRGB_approx22(float thesRGBValue)
{
    float _result = ::Quantity_Color::Convert_sRGB_To_LinearRGB_approx22(thesRGBValue);
    return _result;
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Quantity_Color::Convert_LinearRGB_To_sRGB_approx22(Macad::Occt::gp_Vec3f^ theRGB)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::Quantity_Color::Convert_LinearRGB_To_sRGB_approx22(*(::gp_Vec3f*)theRGB->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Quantity_Color::Convert_sRGB_To_LinearRGB_approx22(Macad::Occt::gp_Vec3f^ theRGB)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::Quantity_Color::Convert_sRGB_To_LinearRGB_approx22(*(::gp_Vec3f*)theRGB->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

void Macad::Occt::Quantity_Color::HlsRgb(double theH, double theL, double theS, double% theR, double% theG, double% theB)
{
    pin_ptr<double> pp_theR = &theR;
    pin_ptr<double> pp_theG = &theG;
    pin_ptr<double> pp_theB = &theB;
    ::Quantity_Color::HlsRgb(theH, theL, theS, *(double*)pp_theR, *(double*)pp_theG, *(double*)pp_theB);
}

void Macad::Occt::Quantity_Color::RgbHls(double theR, double theG, double theB, double% theH, double% theL, double% theS)
{
    pin_ptr<double> pp_theH = &theH;
    pin_ptr<double> pp_theL = &theL;
    pin_ptr<double> pp_theS = &theS;
    ::Quantity_Color::RgbHls(theR, theG, theB, *(double*)pp_theH, *(double*)pp_theL, *(double*)pp_theS);
}

double Macad::Occt::Quantity_Color::Epsilon()
{
    double _result = ::Quantity_Color::Epsilon();
    return _result;
}

void Macad::Occt::Quantity_Color::SetEpsilon(double theEpsilon)
{
    ::Quantity_Color::SetEpsilon(theEpsilon);
}

void Macad::Occt::Quantity_Color::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Quantity_Color*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Quantity_Color::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Quantity_Color*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

bool Macad::Occt::Quantity_Color::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Quantity_Color::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Quantity_Color^)obj)->NativeInstance);
    }
    return false;
}

int Macad::Occt::Quantity_Color::GetHashCode()
{
    return std::hash<::Quantity_Color>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  Quantity_ColorRGBA
//---------------------------------------------------------------------

Macad::Occt::Quantity_ColorRGBA::Quantity_ColorRGBA()
    : Macad::Occt::BaseClass<::Quantity_ColorRGBA>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_ColorRGBA();
}

Macad::Occt::Quantity_ColorRGBA::Quantity_ColorRGBA(Macad::Occt::Quantity_Color^ theRgb)
    : Macad::Occt::BaseClass<::Quantity_ColorRGBA>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_ColorRGBA(*(::Quantity_Color*)theRgb->NativeInstance);
}

Macad::Occt::Quantity_ColorRGBA::Quantity_ColorRGBA(Macad::Occt::Quantity_Color^ theRgb, float theAlpha)
    : Macad::Occt::BaseClass<::Quantity_ColorRGBA>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_ColorRGBA(*(::Quantity_Color*)theRgb->NativeInstance, theAlpha);
}

Macad::Occt::Quantity_ColorRGBA::Quantity_ColorRGBA(Macad::Occt::Graphic3d_Vec4^ theRgba)
    : Macad::Occt::BaseClass<::Quantity_ColorRGBA>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_ColorRGBA(*(::Graphic3d_Vec4*)theRgba->NativeInstance);
}

Macad::Occt::Quantity_ColorRGBA::Quantity_ColorRGBA(float theRed, float theGreen, float theBlue, float theAlpha)
    : Macad::Occt::BaseClass<::Quantity_ColorRGBA>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_ColorRGBA(theRed, theGreen, theBlue, theAlpha);
}

void Macad::Occt::Quantity_ColorRGBA::SetValues(float theRed, float theGreen, float theBlue, float theAlpha)
{
    ((::Quantity_ColorRGBA*)_NativeInstance)->SetValues(theRed, theGreen, theBlue, theAlpha);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_ColorRGBA::GetRGB()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Quantity_ColorRGBA*)_NativeInstance)->GetRGB();
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
    float _result = ((::Quantity_ColorRGBA*)_NativeInstance)->Alpha();
    return _result;
}

void Macad::Occt::Quantity_ColorRGBA::SetAlpha(float theAlpha)
{
    ((::Quantity_ColorRGBA*)_NativeInstance)->SetAlpha(theAlpha);
}

bool Macad::Occt::Quantity_ColorRGBA::IsDifferent(Macad::Occt::Quantity_ColorRGBA^ theOther)
{
    bool _result = ((::Quantity_ColorRGBA*)_NativeInstance)->IsDifferent(*(::Quantity_ColorRGBA*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Quantity_ColorRGBA::IsEqual(Macad::Occt::Quantity_ColorRGBA^ theOther)
{
    bool _result = ((::Quantity_ColorRGBA*)_NativeInstance)->IsEqual(*(::Quantity_ColorRGBA*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Quantity_ColorRGBA::ColorFromName(System::String^ theColorNameString, Macad::Occt::Quantity_ColorRGBA^ theColor)
{
    const char* sz_theColorNameString = (char*)(void*)Marshal::StringToHGlobalAnsi(theColorNameString);
    bool _result = ::Quantity_ColorRGBA::ColorFromName(sz_theColorNameString, *(::Quantity_ColorRGBA*)theColor->NativeInstance);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theColorNameString);
    return _result;
}

bool Macad::Occt::Quantity_ColorRGBA::ColorFromHex(char theHexColorString, Macad::Occt::Quantity_ColorRGBA^ theColor, bool theAlphaComponentIsOff)
{
    pin_ptr<char> pp_theHexColorString = &theHexColorString;
    bool _result = ::Quantity_ColorRGBA::ColorFromHex((char*)pp_theHexColorString, *(::Quantity_ColorRGBA*)theColor->NativeInstance, theAlphaComponentIsOff);
    return _result;
}

bool Macad::Occt::Quantity_ColorRGBA::ColorFromHex(char theHexColorString, Macad::Occt::Quantity_ColorRGBA^ theColor)
{
    pin_ptr<char> pp_theHexColorString = &theHexColorString;
    bool _result = ::Quantity_ColorRGBA::ColorFromHex((char*)pp_theHexColorString, *(::Quantity_ColorRGBA*)theColor->NativeInstance, false);
    return _result;
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

Macad::Occt::Graphic3d_Vec4^ Macad::Occt::Quantity_ColorRGBA::Convert_LinearRGB_To_sRGB(Macad::Occt::Graphic3d_Vec4^ theRGB)
{
    ::Graphic3d_Vec4* _result = new ::Graphic3d_Vec4();
    *_result = ::Quantity_ColorRGBA::Convert_LinearRGB_To_sRGB(*(::Graphic3d_Vec4*)theRGB->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4(_result);
}

Macad::Occt::Graphic3d_Vec4^ Macad::Occt::Quantity_ColorRGBA::Convert_sRGB_To_LinearRGB(Macad::Occt::Graphic3d_Vec4^ theRGB)
{
    ::Graphic3d_Vec4* _result = new ::Graphic3d_Vec4();
    *_result = ::Quantity_ColorRGBA::Convert_sRGB_To_LinearRGB(*(::Graphic3d_Vec4*)theRGB->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4(_result);
}

void Macad::Occt::Quantity_ColorRGBA::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Quantity_ColorRGBA*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Quantity_ColorRGBA::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Quantity_ColorRGBA*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

bool Macad::Occt::Quantity_ColorRGBA::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Quantity_ColorRGBA::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Quantity_ColorRGBA^)obj)->NativeInstance);
    }
    return false;
}

int Macad::Occt::Quantity_ColorRGBA::GetHashCode()
{
    return std::hash<::Quantity_ColorRGBA>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  Quantity_Period
//---------------------------------------------------------------------

Macad::Occt::Quantity_Period::Quantity_Period(int dd, int hh, int mn, int ss, int mis, int mics)
    : Macad::Occt::BaseClass<::Quantity_Period>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_Period(dd, hh, mn, ss, mis, mics);
}

Macad::Occt::Quantity_Period::Quantity_Period(int dd, int hh, int mn, int ss, int mis)
    : Macad::Occt::BaseClass<::Quantity_Period>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_Period(dd, hh, mn, ss, mis, 0);
}

Macad::Occt::Quantity_Period::Quantity_Period(int dd, int hh, int mn, int ss)
    : Macad::Occt::BaseClass<::Quantity_Period>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_Period(dd, hh, mn, ss, 0, 0);
}

Macad::Occt::Quantity_Period::Quantity_Period(int ss, int mics)
    : Macad::Occt::BaseClass<::Quantity_Period>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_Period(ss, mics);
}

Macad::Occt::Quantity_Period::Quantity_Period(int ss)
    : Macad::Occt::BaseClass<::Quantity_Period>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_Period(ss, 0);
}

void Macad::Occt::Quantity_Period::Values(int% dd, int% hh, int% mn, int% ss, int% mis, int% mics)
{
    pin_ptr<int> pp_dd = &dd;
    pin_ptr<int> pp_hh = &hh;
    pin_ptr<int> pp_mn = &mn;
    pin_ptr<int> pp_ss = &ss;
    pin_ptr<int> pp_mis = &mis;
    pin_ptr<int> pp_mics = &mics;
    ((::Quantity_Period*)_NativeInstance)->Values(*(int*)pp_dd, *(int*)pp_hh, *(int*)pp_mn, *(int*)pp_ss, *(int*)pp_mis, *(int*)pp_mics);
}

void Macad::Occt::Quantity_Period::Values(int% ss, int% mics)
{
    pin_ptr<int> pp_ss = &ss;
    pin_ptr<int> pp_mics = &mics;
    ((::Quantity_Period*)_NativeInstance)->Values(*(int*)pp_ss, *(int*)pp_mics);
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
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Quantity_Period^ Macad::Occt::Quantity_Period::Add(Macad::Occt::Quantity_Period^ anOther)
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::Quantity_Period::IsEqual(Macad::Occt::Quantity_Period^ anOther)
{
    bool _result = ((::Quantity_Period*)_NativeInstance)->IsEqual(*(::Quantity_Period*)anOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Quantity_Period::IsShorter(Macad::Occt::Quantity_Period^ anOther)
{
    bool _result = ((::Quantity_Period*)_NativeInstance)->IsShorter(*(::Quantity_Period*)anOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Quantity_Period::IsLonger(Macad::Occt::Quantity_Period^ anOther)
{
    bool _result = ((::Quantity_Period*)_NativeInstance)->IsLonger(*(::Quantity_Period*)anOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Quantity_Period::IsValid(int dd, int hh, int mn, int ss, int mis, int mics)
{
    bool _result = ::Quantity_Period::IsValid(dd, hh, mn, ss, mis, mics);
    return _result;
}

bool Macad::Occt::Quantity_Period::IsValid(int dd, int hh, int mn, int ss, int mis)
{
    bool _result = ::Quantity_Period::IsValid(dd, hh, mn, ss, mis, 0);
    return _result;
}

bool Macad::Occt::Quantity_Period::IsValid(int dd, int hh, int mn, int ss)
{
    bool _result = ::Quantity_Period::IsValid(dd, hh, mn, ss, 0, 0);
    return _result;
}

bool Macad::Occt::Quantity_Period::IsValid(int ss, int mics)
{
    bool _result = ::Quantity_Period::IsValid(ss, mics);
    return _result;
}

bool Macad::Occt::Quantity_Period::IsValid(int ss)
{
    bool _result = ::Quantity_Period::IsValid(ss, 0);
    return _result;
}

bool Macad::Occt::Quantity_Period::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Quantity_Period::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Quantity_Period^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Quantity_Date
//---------------------------------------------------------------------

Macad::Occt::Quantity_Date::Quantity_Date()
    : Macad::Occt::BaseClass<::Quantity_Date>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_Date();
}

Macad::Occt::Quantity_Date::Quantity_Date(int mm, int dd, int yyyy, int hh, int mn, int ss, int mis, int mics)
    : Macad::Occt::BaseClass<::Quantity_Date>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_Date(mm, dd, yyyy, hh, mn, ss, mis, mics);
}

Macad::Occt::Quantity_Date::Quantity_Date(int mm, int dd, int yyyy, int hh, int mn, int ss, int mis)
    : Macad::Occt::BaseClass<::Quantity_Date>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_Date(mm, dd, yyyy, hh, mn, ss, mis, 0);
}

Macad::Occt::Quantity_Date::Quantity_Date(int mm, int dd, int yyyy, int hh, int mn, int ss)
    : Macad::Occt::BaseClass<::Quantity_Date>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Quantity_Date(mm, dd, yyyy, hh, mn, ss, 0, 0);
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
    ((::Quantity_Date*)_NativeInstance)->Values(*(int*)pp_mm, *(int*)pp_dd, *(int*)pp_yy, *(int*)pp_hh, *(int*)pp_mn, *(int*)pp_ss, *(int*)pp_mis, *(int*)pp_mics);
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
    throw gcnew System::NotImplementedException();
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
    int _result = ((::Quantity_Date*)_NativeInstance)->Year();
    return _result;
}

int Macad::Occt::Quantity_Date::Month()
{
    int _result = ((::Quantity_Date*)_NativeInstance)->Month();
    return _result;
}

int Macad::Occt::Quantity_Date::Day()
{
    int _result = ((::Quantity_Date*)_NativeInstance)->Day();
    return _result;
}

int Macad::Occt::Quantity_Date::Hour()
{
    int _result = ((::Quantity_Date*)_NativeInstance)->Hour();
    return _result;
}

int Macad::Occt::Quantity_Date::Minute()
{
    int _result = ((::Quantity_Date*)_NativeInstance)->Minute();
    return _result;
}

int Macad::Occt::Quantity_Date::Second()
{
    int _result = ((::Quantity_Date*)_NativeInstance)->Second();
    return _result;
}

int Macad::Occt::Quantity_Date::MilliSecond()
{
    int _result = ((::Quantity_Date*)_NativeInstance)->MilliSecond();
    return _result;
}

int Macad::Occt::Quantity_Date::MicroSecond()
{
    int _result = ((::Quantity_Date*)_NativeInstance)->MicroSecond();
    return _result;
}

bool Macad::Occt::Quantity_Date::IsEqual(Macad::Occt::Quantity_Date^ anOther)
{
    bool _result = ((::Quantity_Date*)_NativeInstance)->IsEqual(*(::Quantity_Date*)anOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Quantity_Date::IsEarlier(Macad::Occt::Quantity_Date^ anOther)
{
    bool _result = ((::Quantity_Date*)_NativeInstance)->IsEarlier(*(::Quantity_Date*)anOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Quantity_Date::IsLater(Macad::Occt::Quantity_Date^ anOther)
{
    bool _result = ((::Quantity_Date*)_NativeInstance)->IsLater(*(::Quantity_Date*)anOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Quantity_Date::IsValid(int mm, int dd, int yy, int hh, int mn, int ss, int mis, int mics)
{
    bool _result = ::Quantity_Date::IsValid(mm, dd, yy, hh, mn, ss, mis, mics);
    return _result;
}

bool Macad::Occt::Quantity_Date::IsValid(int mm, int dd, int yy, int hh, int mn, int ss, int mis)
{
    bool _result = ::Quantity_Date::IsValid(mm, dd, yy, hh, mn, ss, mis, 0);
    return _result;
}

bool Macad::Occt::Quantity_Date::IsValid(int mm, int dd, int yy, int hh, int mn, int ss)
{
    bool _result = ::Quantity_Date::IsValid(mm, dd, yy, hh, mn, ss, 0, 0);
    return _result;
}

bool Macad::Occt::Quantity_Date::IsLeap(int yy)
{
    bool _result = ::Quantity_Date::IsLeap(yy);
    return _result;
}

bool Macad::Occt::Quantity_Date::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Quantity_Date::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Quantity_Date^)obj)->NativeInstance);
    }
    return false;
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
    Handle(::Quantity_DateDefinitionError) _result = ::Quantity_DateDefinitionError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Quantity_DateDefinitionError::CreateDowncasted(_result.get());
}

Macad::Occt::Quantity_DateDefinitionError^ Macad::Occt::Quantity_DateDefinitionError::NewInstance()
{
    Handle(::Quantity_DateDefinitionError) _result = ::Quantity_DateDefinitionError::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Quantity_DateDefinitionError::CreateDowncasted(_result.get());
}

Macad::Occt::Quantity_DateDefinitionError^ Macad::Occt::Quantity_DateDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Quantity_DateDefinitionError) _result = ::Quantity_DateDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Quantity_DateDefinitionError::CreateDowncasted(_result.get());
}

Macad::Occt::Quantity_DateDefinitionError^ Macad::Occt::Quantity_DateDefinitionError::CreateDowncasted(::Quantity_DateDefinitionError* instance)
{
    return gcnew Macad::Occt::Quantity_DateDefinitionError( instance );
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

Macad::Occt::Quantity_HArray1OfColor::Quantity_HArray1OfColor(Macad::Occt::Quantity_Color^ theBegin, int theLower, int theUpper, bool parameter1)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Quantity_HArray1OfColor(*(::Quantity_Color*)theBegin->NativeInstance, theLower, theUpper, parameter1);
}

Macad::Occt::Quantity_HArray1OfColor::Quantity_HArray1OfColor(Macad::Occt::Quantity_Array1OfColor^ theOther)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Quantity_HArray1OfColor(*(::Quantity_Array1OfColor*)theOther->NativeInstance);
}

Macad::Occt::Quantity_Array1OfColor^ Macad::Occt::Quantity_HArray1OfColor::Array1()
{
    ::Quantity_Array1OfColor* _result = new ::Quantity_Array1OfColor();
    *_result = (::Quantity_Array1OfColor)((::Quantity_HArray1OfColor*)_NativeInstance)->Array1();
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
    int _result = ((::Quantity_HArray1OfColor*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Quantity_HArray1OfColor::Length()
{
    int _result = ((::Quantity_HArray1OfColor*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::Quantity_HArray1OfColor::IsEmpty()
{
    bool _result = ((::Quantity_HArray1OfColor*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Quantity_HArray1OfColor::Lower()
{
    int _result = ((::Quantity_HArray1OfColor*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Quantity_HArray1OfColor::Upper()
{
    int _result = ((::Quantity_HArray1OfColor*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Quantity_HArray1OfColor^ Macad::Occt::Quantity_HArray1OfColor::Assign(Macad::Occt::Quantity_HArray1OfColor^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Quantity_HArray1OfColor^ Macad::Occt::Quantity_HArray1OfColor::Move(Macad::Occt::Quantity_HArray1OfColor^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_HArray1OfColor::First()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Quantity_HArray1OfColor*)_NativeInstance)->First();
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
    *_result = (::Quantity_Color)((::Quantity_HArray1OfColor*)_NativeInstance)->Last();
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
    *_result = (::Quantity_Color)((::Quantity_HArray1OfColor*)_NativeInstance)->Value(theIndex);
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

void Macad::Occt::Quantity_HArray1OfColor::UpdateLowerBound(int theLower)
{
    ((::Quantity_HArray1OfColor*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Quantity_HArray1OfColor::UpdateUpperBound(int theUpper)
{
    ((::Quantity_HArray1OfColor*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::Quantity_HArray1OfColor::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::Quantity_HArray1OfColor*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::Quantity_HArray1OfColor::IsDeletable()
{
    bool _result = ((::Quantity_HArray1OfColor*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::Quantity_HArray1OfColor^ Macad::Occt::Quantity_HArray1OfColor::CreateDowncasted(::Quantity_HArray1OfColor* instance)
{
    return gcnew Macad::Occt::Quantity_HArray1OfColor( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::Quantity_Color^>^ Macad::Occt::Quantity_HArray1OfColor::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Quantity_Color^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Quantity_HArray1OfColor::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Quantity_Color^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Quantity_HArray1OfColor::Iterator
//---------------------------------------------------------------------

void Macad::Occt::Quantity_HArray1OfColor::Iterator::Init(Macad::Occt::Quantity_HArray1OfColor^ theList)
{
    ((::Quantity_HArray1OfColor::Iterator*)_NativeInstance)->Init(*(::Quantity_HArray1OfColor*)theList->NativeInstance);
}

bool Macad::Occt::Quantity_HArray1OfColor::Iterator::More()
{
    bool _result = ((::Quantity_HArray1OfColor::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Quantity_HArray1OfColor::Iterator::Initialize(Macad::Occt::Quantity_HArray1OfColor^ theList)
{
    ((::Quantity_HArray1OfColor::Iterator*)_NativeInstance)->Initialize(*(::Quantity_HArray1OfColor*)theList->NativeInstance);
}

void Macad::Occt::Quantity_HArray1OfColor::Iterator::Next()
{
    ((::Quantity_HArray1OfColor::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_HArray1OfColor::Iterator::Value()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Quantity_HArray1OfColor::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Quantity_HArray1OfColor::Iterator::ChangeValue()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::Quantity_HArray1OfColor::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
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
    Handle(::Quantity_PeriodDefinitionError) _result = ::Quantity_PeriodDefinitionError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Quantity_PeriodDefinitionError::CreateDowncasted(_result.get());
}

Macad::Occt::Quantity_PeriodDefinitionError^ Macad::Occt::Quantity_PeriodDefinitionError::NewInstance()
{
    Handle(::Quantity_PeriodDefinitionError) _result = ::Quantity_PeriodDefinitionError::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Quantity_PeriodDefinitionError::CreateDowncasted(_result.get());
}

Macad::Occt::Quantity_PeriodDefinitionError^ Macad::Occt::Quantity_PeriodDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Quantity_PeriodDefinitionError) _result = ::Quantity_PeriodDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Quantity_PeriodDefinitionError::CreateDowncasted(_result.get());
}

Macad::Occt::Quantity_PeriodDefinitionError^ Macad::Occt::Quantity_PeriodDefinitionError::CreateDowncasted(::Quantity_PeriodDefinitionError* instance)
{
    return gcnew Macad::Occt::Quantity_PeriodDefinitionError( instance );
}


