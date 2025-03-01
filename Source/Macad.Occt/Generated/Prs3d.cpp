// Generated wrapper code for package Prs3d

#include "OcctPCH.h"
#include "Prs3d.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "TColgp.h"
#include "TCollection.h"
#include "Quantity.h"
#include "Aspect.h"
#include "Graphic3d.h"
#include "TColStd.h"
#include "AIS.h"
#include "GeomAbs.h"
#include "gp.h"
#include "Bnd.h"


//---------------------------------------------------------------------
//  Class  Prs3d_NListOfSequenceOfPnt
//---------------------------------------------------------------------

Macad::Occt::Prs3d_NListOfSequenceOfPnt::Prs3d_NListOfSequenceOfPnt()
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Prs3d_NListOfSequenceOfPnt();
}

Macad::Occt::Prs3d_NListOfSequenceOfPnt::Prs3d_NListOfSequenceOfPnt(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Prs3d_NListOfSequenceOfPnt(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::Prs3d_NListOfSequenceOfPnt::Size()
{
    int _result = ((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::Prs3d_NListOfSequenceOfPnt^ Macad::Occt::Prs3d_NListOfSequenceOfPnt::Assign(Macad::Occt::Prs3d_NListOfSequenceOfPnt^ theOther)
{
    ::Prs3d_NListOfSequenceOfPnt* _result = new ::Prs3d_NListOfSequenceOfPnt();
    *_result = ((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->Assign(*(::Prs3d_NListOfSequenceOfPnt*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Prs3d_NListOfSequenceOfPnt(_result);
}

void Macad::Occt::Prs3d_NListOfSequenceOfPnt::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::Prs3d_NListOfSequenceOfPnt::Clear()
{
    ((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::Prs3d_NListOfSequenceOfPnt::First()
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::Prs3d_NListOfSequenceOfPnt::Last()
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::Prs3d_NListOfSequenceOfPnt::Append(Macad::Occt::TColgp_HSequenceOfPnt^ theItem)
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->Append(Handle(::TColgp_HSequenceOfPnt)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::Prs3d_NListOfSequenceOfPnt::Prepend(Macad::Occt::TColgp_HSequenceOfPnt^ theItem)
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->Prepend(Handle(::TColgp_HSequenceOfPnt)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_NListOfSequenceOfPnt::RemoveFirst()
{
    ((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::Prs3d_NListOfSequenceOfPnt::Remove(Macad::Occt::Prs3d_NListOfSequenceOfPnt::Iterator^ theIter)
{
    ((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->Remove(*(::Prs3d_NListOfSequenceOfPnt::Iterator*)theIter->NativeInstance);
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::Prs3d_NListOfSequenceOfPnt::InsertBefore(Macad::Occt::TColgp_HSequenceOfPnt^ theItem, Macad::Occt::Prs3d_NListOfSequenceOfPnt::Iterator^ theIter)
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->InsertBefore(Handle(::TColgp_HSequenceOfPnt)(theItem->NativeInstance), *(::Prs3d_NListOfSequenceOfPnt::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::Prs3d_NListOfSequenceOfPnt::InsertAfter(Macad::Occt::TColgp_HSequenceOfPnt^ theItem, Macad::Occt::Prs3d_NListOfSequenceOfPnt::Iterator^ theIter)
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->InsertAfter(Handle(::TColgp_HSequenceOfPnt)(theItem->NativeInstance), *(::Prs3d_NListOfSequenceOfPnt::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_NListOfSequenceOfPnt::Reverse()
{
    ((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  Prs3d_NListOfSequenceOfPnt::Iterator
//---------------------------------------------------------------------

Macad::Occt::Prs3d_NListOfSequenceOfPnt::Iterator::Iterator()
    : Macad::Occt::BaseClass<::Prs3d_NListOfSequenceOfPnt::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Prs3d_NListOfSequenceOfPnt::Iterator();
}

bool Macad::Occt::Prs3d_NListOfSequenceOfPnt::Iterator::More()
{
    bool _result = ((::Prs3d_NListOfSequenceOfPnt::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Prs3d_NListOfSequenceOfPnt::Iterator::Next()
{
    ((::Prs3d_NListOfSequenceOfPnt::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::Prs3d_NListOfSequenceOfPnt::Iterator::Value()
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::Prs3d_NListOfSequenceOfPnt::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::Prs3d_NListOfSequenceOfPnt::Iterator::ChangeValue()
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::Prs3d_NListOfSequenceOfPnt::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  Prs3d_DimensionUnits
//---------------------------------------------------------------------

Macad::Occt::Prs3d_DimensionUnits::Prs3d_DimensionUnits()
    : Macad::Occt::BaseClass<::Prs3d_DimensionUnits>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Prs3d_DimensionUnits();
}

void Macad::Occt::Prs3d_DimensionUnits::SetAngleUnits(Macad::Occt::TCollection_AsciiString^ theUnits)
{
    ((::Prs3d_DimensionUnits*)_NativeInstance)->SetAngleUnits(*(::TCollection_AsciiString*)theUnits->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Prs3d_DimensionUnits::GetAngleUnits()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Prs3d_DimensionUnits*)_NativeInstance)->GetAngleUnits();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Prs3d_DimensionUnits::SetLengthUnits(Macad::Occt::TCollection_AsciiString^ theUnits)
{
    ((::Prs3d_DimensionUnits*)_NativeInstance)->SetLengthUnits(*(::TCollection_AsciiString*)theUnits->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Prs3d_DimensionUnits::GetLengthUnits()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Prs3d_DimensionUnits*)_NativeInstance)->GetLengthUnits();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}



//---------------------------------------------------------------------
//  Class  Prs3d_BasicAspect
//---------------------------------------------------------------------

Macad::Occt::Prs3d_BasicAspect::Prs3d_BasicAspect()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::Prs3d_BasicAspect::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_BasicAspect*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Prs3d_BasicAspect::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_BasicAspect*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Prs3d_BasicAspect^ Macad::Occt::Prs3d_BasicAspect::CreateDowncasted(::Prs3d_BasicAspect* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Prs3d_LineAspect)))
        return Macad::Occt::Prs3d_LineAspect::CreateDowncasted((::Prs3d_LineAspect*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Prs3d_TextAspect)))
        return Macad::Occt::Prs3d_TextAspect::CreateDowncasted((::Prs3d_TextAspect*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Prs3d_ShadingAspect)))
        return Macad::Occt::Prs3d_ShadingAspect::CreateDowncasted((::Prs3d_ShadingAspect*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Prs3d_PointAspect)))
        return Macad::Occt::Prs3d_PointAspect::CreateDowncasted((::Prs3d_PointAspect*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Prs3d_PlaneAspect)))
        return Macad::Occt::Prs3d_PlaneAspect::CreateDowncasted((::Prs3d_PlaneAspect*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Prs3d_ArrowAspect)))
        return Macad::Occt::Prs3d_ArrowAspect::CreateDowncasted((::Prs3d_ArrowAspect*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Prs3d_DatumAspect)))
        return Macad::Occt::Prs3d_DatumAspect::CreateDowncasted((::Prs3d_DatumAspect*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Prs3d_DimensionAspect)))
        return Macad::Occt::Prs3d_DimensionAspect::CreateDowncasted((::Prs3d_DimensionAspect*)instance);
    
    return gcnew Macad::Occt::Prs3d_BasicAspect( instance );
}



//---------------------------------------------------------------------
//  Class  Prs3d_LineAspect
//---------------------------------------------------------------------

Macad::Occt::Prs3d_LineAspect::Prs3d_LineAspect(Macad::Occt::Quantity_Color^ theColor, Macad::Occt::Aspect_TypeOfLine theType, double theWidth)
    : Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Prs3d_LineAspect(*(::Quantity_Color*)theColor->NativeInstance, (::Aspect_TypeOfLine)theType, theWidth);
}

Macad::Occt::Prs3d_LineAspect::Prs3d_LineAspect(Macad::Occt::Graphic3d_AspectLine3d^ theAspect)
    : Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Prs3d_LineAspect(Handle(::Graphic3d_AspectLine3d)(theAspect->NativeInstance));
}

void Macad::Occt::Prs3d_LineAspect::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Prs3d_LineAspect*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Prs3d_LineAspect::SetTypeOfLine(Macad::Occt::Aspect_TypeOfLine theType)
{
    ((::Prs3d_LineAspect*)_NativeInstance)->SetTypeOfLine((::Aspect_TypeOfLine)theType);
}

void Macad::Occt::Prs3d_LineAspect::SetWidth(double theWidth)
{
    ((::Prs3d_LineAspect*)_NativeInstance)->SetWidth(theWidth);
}

Macad::Occt::Graphic3d_AspectLine3d^ Macad::Occt::Prs3d_LineAspect::Aspect()
{
    Handle(::Graphic3d_AspectLine3d) _result = ((::Prs3d_LineAspect*)_NativeInstance)->Aspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_AspectLine3d::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_LineAspect::SetAspect(Macad::Occt::Graphic3d_AspectLine3d^ theAspect)
{
    ((::Prs3d_LineAspect*)_NativeInstance)->SetAspect(Handle(::Graphic3d_AspectLine3d)(theAspect->NativeInstance));
}

void Macad::Occt::Prs3d_LineAspect::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_LineAspect*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Prs3d_LineAspect::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_LineAspect*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_LineAspect::CreateDowncasted(::Prs3d_LineAspect* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Prs3d_IsoAspect)))
        return Macad::Occt::Prs3d_IsoAspect::CreateDowncasted((::Prs3d_IsoAspect*)instance);
    
    return gcnew Macad::Occt::Prs3d_LineAspect( instance );
}



//---------------------------------------------------------------------
//  Class  Prs3d_TextAspect
//---------------------------------------------------------------------

Macad::Occt::Prs3d_TextAspect::Prs3d_TextAspect()
    : Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Prs3d_TextAspect();
}

Macad::Occt::Prs3d_TextAspect::Prs3d_TextAspect(Macad::Occt::Graphic3d_AspectText3d^ theAspect)
    : Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Prs3d_TextAspect(Handle(::Graphic3d_AspectText3d)(theAspect->NativeInstance));
}

void Macad::Occt::Prs3d_TextAspect::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Prs3d_TextAspect*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Prs3d_TextAspect::SetFont(System::String^ theFont)
{
    const char* sz_theFont = (char*)(void*)Marshal::StringToHGlobalAnsi(theFont);
    ((::Prs3d_TextAspect*)_NativeInstance)->SetFont(sz_theFont);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFont);
}

void Macad::Occt::Prs3d_TextAspect::SetHeight(double theHeight)
{
    ((::Prs3d_TextAspect*)_NativeInstance)->SetHeight(theHeight);
}

void Macad::Occt::Prs3d_TextAspect::SetAngle(double theAngle)
{
    ((::Prs3d_TextAspect*)_NativeInstance)->SetAngle(theAngle);
}

double Macad::Occt::Prs3d_TextAspect::Height()
{
    double _result = ((::Prs3d_TextAspect*)_NativeInstance)->Height();
    return _result;
}

double Macad::Occt::Prs3d_TextAspect::Angle()
{
    double _result = ((::Prs3d_TextAspect*)_NativeInstance)->Angle();
    return _result;
}

void Macad::Occt::Prs3d_TextAspect::SetHorizontalJustification(Macad::Occt::Graphic3d_HorizontalTextAlignment theJustification)
{
    ((::Prs3d_TextAspect*)_NativeInstance)->SetHorizontalJustification((::Graphic3d_HorizontalTextAlignment)theJustification);
}

void Macad::Occt::Prs3d_TextAspect::SetVerticalJustification(Macad::Occt::Graphic3d_VerticalTextAlignment theJustification)
{
    ((::Prs3d_TextAspect*)_NativeInstance)->SetVerticalJustification((::Graphic3d_VerticalTextAlignment)theJustification);
}

void Macad::Occt::Prs3d_TextAspect::SetOrientation(Macad::Occt::Graphic3d_TextPath theOrientation)
{
    ((::Prs3d_TextAspect*)_NativeInstance)->SetOrientation((::Graphic3d_TextPath)theOrientation);
}

Macad::Occt::Graphic3d_HorizontalTextAlignment Macad::Occt::Prs3d_TextAspect::HorizontalJustification()
{
    ::Graphic3d_HorizontalTextAlignment _result = ((::Prs3d_TextAspect*)_NativeInstance)->HorizontalJustification();
    return (Macad::Occt::Graphic3d_HorizontalTextAlignment)_result;
}

Macad::Occt::Graphic3d_VerticalTextAlignment Macad::Occt::Prs3d_TextAspect::VerticalJustification()
{
    ::Graphic3d_VerticalTextAlignment _result = ((::Prs3d_TextAspect*)_NativeInstance)->VerticalJustification();
    return (Macad::Occt::Graphic3d_VerticalTextAlignment)_result;
}

Macad::Occt::Graphic3d_TextPath Macad::Occt::Prs3d_TextAspect::Orientation()
{
    ::Graphic3d_TextPath _result = ((::Prs3d_TextAspect*)_NativeInstance)->Orientation();
    return (Macad::Occt::Graphic3d_TextPath)_result;
}

Macad::Occt::Graphic3d_AspectText3d^ Macad::Occt::Prs3d_TextAspect::Aspect()
{
    Handle(::Graphic3d_AspectText3d) _result = ((::Prs3d_TextAspect*)_NativeInstance)->Aspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_AspectText3d::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_TextAspect::SetAspect(Macad::Occt::Graphic3d_AspectText3d^ theAspect)
{
    ((::Prs3d_TextAspect*)_NativeInstance)->SetAspect(Handle(::Graphic3d_AspectText3d)(theAspect->NativeInstance));
}

void Macad::Occt::Prs3d_TextAspect::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_TextAspect*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Prs3d_TextAspect::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_TextAspect*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Prs3d_TextAspect^ Macad::Occt::Prs3d_TextAspect::CreateDowncasted(::Prs3d_TextAspect* instance)
{
    return gcnew Macad::Occt::Prs3d_TextAspect( instance );
}



//---------------------------------------------------------------------
//  Class  Prs3d_ShadingAspect
//---------------------------------------------------------------------

Macad::Occt::Prs3d_ShadingAspect::Prs3d_ShadingAspect()
    : Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Prs3d_ShadingAspect();
}

Macad::Occt::Prs3d_ShadingAspect::Prs3d_ShadingAspect(Macad::Occt::Graphic3d_AspectFillArea3d^ theAspect)
    : Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Prs3d_ShadingAspect(Handle(::Graphic3d_AspectFillArea3d)(theAspect->NativeInstance));
}

void Macad::Occt::Prs3d_ShadingAspect::SetColor(Macad::Occt::Quantity_Color^ aColor, Macad::Occt::Aspect_TypeOfFacingModel aModel)
{
    ((::Prs3d_ShadingAspect*)_NativeInstance)->SetColor(*(::Quantity_Color*)aColor->NativeInstance, (::Aspect_TypeOfFacingModel)aModel);
}

void Macad::Occt::Prs3d_ShadingAspect::SetColor(Macad::Occt::Quantity_Color^ aColor)
{
    ((::Prs3d_ShadingAspect*)_NativeInstance)->SetColor(*(::Quantity_Color*)aColor->NativeInstance, Aspect_TOFM_BOTH_SIDE);
}

void Macad::Occt::Prs3d_ShadingAspect::SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ aMaterial, Macad::Occt::Aspect_TypeOfFacingModel aModel)
{
    ((::Prs3d_ShadingAspect*)_NativeInstance)->SetMaterial(*(::Graphic3d_MaterialAspect*)aMaterial->NativeInstance, (::Aspect_TypeOfFacingModel)aModel);
}

void Macad::Occt::Prs3d_ShadingAspect::SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ aMaterial)
{
    ((::Prs3d_ShadingAspect*)_NativeInstance)->SetMaterial(*(::Graphic3d_MaterialAspect*)aMaterial->NativeInstance, Aspect_TOFM_BOTH_SIDE);
}

void Macad::Occt::Prs3d_ShadingAspect::SetTransparency(double aValue, Macad::Occt::Aspect_TypeOfFacingModel aModel)
{
    ((::Prs3d_ShadingAspect*)_NativeInstance)->SetTransparency(aValue, (::Aspect_TypeOfFacingModel)aModel);
}

void Macad::Occt::Prs3d_ShadingAspect::SetTransparency(double aValue)
{
    ((::Prs3d_ShadingAspect*)_NativeInstance)->SetTransparency(aValue, Aspect_TOFM_BOTH_SIDE);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Prs3d_ShadingAspect::Color(Macad::Occt::Aspect_TypeOfFacingModel aModel)
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Prs3d_ShadingAspect*)_NativeInstance)->Color((::Aspect_TypeOfFacingModel)aModel);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Prs3d_ShadingAspect::Color()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Prs3d_ShadingAspect*)_NativeInstance)->Color(Aspect_TOFM_FRONT_SIDE);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Graphic3d_MaterialAspect^ Macad::Occt::Prs3d_ShadingAspect::Material(Macad::Occt::Aspect_TypeOfFacingModel aModel)
{
    ::Graphic3d_MaterialAspect* _result = new ::Graphic3d_MaterialAspect();
    *_result = (::Graphic3d_MaterialAspect)((::Prs3d_ShadingAspect*)_NativeInstance)->Material((::Aspect_TypeOfFacingModel)aModel);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MaterialAspect(_result);
}

Macad::Occt::Graphic3d_MaterialAspect^ Macad::Occt::Prs3d_ShadingAspect::Material()
{
    ::Graphic3d_MaterialAspect* _result = new ::Graphic3d_MaterialAspect();
    *_result = (::Graphic3d_MaterialAspect)((::Prs3d_ShadingAspect*)_NativeInstance)->Material(Aspect_TOFM_FRONT_SIDE);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MaterialAspect(_result);
}

double Macad::Occt::Prs3d_ShadingAspect::Transparency(Macad::Occt::Aspect_TypeOfFacingModel aModel)
{
    double _result = ((::Prs3d_ShadingAspect*)_NativeInstance)->Transparency((::Aspect_TypeOfFacingModel)aModel);
    return _result;
}

double Macad::Occt::Prs3d_ShadingAspect::Transparency()
{
    double _result = ((::Prs3d_ShadingAspect*)_NativeInstance)->Transparency(Aspect_TOFM_FRONT_SIDE);
    return _result;
}

Macad::Occt::Graphic3d_AspectFillArea3d^ Macad::Occt::Prs3d_ShadingAspect::Aspect()
{
    Handle(::Graphic3d_AspectFillArea3d) _result = ((::Prs3d_ShadingAspect*)_NativeInstance)->Aspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_AspectFillArea3d::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_ShadingAspect::SetAspect(Macad::Occt::Graphic3d_AspectFillArea3d^ theAspect)
{
    ((::Prs3d_ShadingAspect*)_NativeInstance)->SetAspect(Handle(::Graphic3d_AspectFillArea3d)(theAspect->NativeInstance));
}

void Macad::Occt::Prs3d_ShadingAspect::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_ShadingAspect*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Prs3d_ShadingAspect::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_ShadingAspect*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Prs3d_ShadingAspect^ Macad::Occt::Prs3d_ShadingAspect::CreateDowncasted(::Prs3d_ShadingAspect* instance)
{
    return gcnew Macad::Occt::Prs3d_ShadingAspect( instance );
}



//---------------------------------------------------------------------
//  Class  Prs3d_PointAspect
//---------------------------------------------------------------------

Macad::Occt::Prs3d_PointAspect::Prs3d_PointAspect(Macad::Occt::Aspect_TypeOfMarker theType, Macad::Occt::Quantity_Color^ theColor, double theScale)
    : Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Prs3d_PointAspect((::Aspect_TypeOfMarker)theType, *(::Quantity_Color*)theColor->NativeInstance, theScale);
}

Macad::Occt::Prs3d_PointAspect::Prs3d_PointAspect(Macad::Occt::Quantity_Color^ theColor, int theWidth, int theHeight, Macad::Occt::TColStd_HArray1OfByte^ theTexture)
    : Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Prs3d_PointAspect(*(::Quantity_Color*)theColor->NativeInstance, theWidth, theHeight, Handle(::TColStd_HArray1OfByte)(theTexture->NativeInstance));
}

Macad::Occt::Prs3d_PointAspect::Prs3d_PointAspect(Macad::Occt::Graphic3d_AspectMarker3d^ theAspect)
    : Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Prs3d_PointAspect(Handle(::Graphic3d_AspectMarker3d)(theAspect->NativeInstance));
}

void Macad::Occt::Prs3d_PointAspect::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Prs3d_PointAspect*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Prs3d_PointAspect::SetTypeOfMarker(Macad::Occt::Aspect_TypeOfMarker theType)
{
    ((::Prs3d_PointAspect*)_NativeInstance)->SetTypeOfMarker((::Aspect_TypeOfMarker)theType);
}

void Macad::Occt::Prs3d_PointAspect::SetScale(double theScale)
{
    ((::Prs3d_PointAspect*)_NativeInstance)->SetScale(theScale);
}

Macad::Occt::Graphic3d_AspectMarker3d^ Macad::Occt::Prs3d_PointAspect::Aspect()
{
    Handle(::Graphic3d_AspectMarker3d) _result = ((::Prs3d_PointAspect*)_NativeInstance)->Aspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_AspectMarker3d::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_PointAspect::SetAspect(Macad::Occt::Graphic3d_AspectMarker3d^ theAspect)
{
    ((::Prs3d_PointAspect*)_NativeInstance)->SetAspect(Handle(::Graphic3d_AspectMarker3d)(theAspect->NativeInstance));
}

void Macad::Occt::Prs3d_PointAspect::GetTextureSize(int% theWidth, int% theHeight)
{
    pin_ptr<int> pp_theWidth = &theWidth;
    pin_ptr<int> pp_theHeight = &theHeight;
    ((::Prs3d_PointAspect*)_NativeInstance)->GetTextureSize(*(int*)pp_theWidth, *(int*)pp_theHeight);
}

Macad::Occt::Graphic3d_MarkerImage^ Macad::Occt::Prs3d_PointAspect::GetTexture()
{
    Handle(::Graphic3d_MarkerImage) _result = ((::Prs3d_PointAspect*)_NativeInstance)->GetTexture();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_MarkerImage::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_PointAspect::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_PointAspect*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Prs3d_PointAspect::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_PointAspect*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Prs3d_PointAspect^ Macad::Occt::Prs3d_PointAspect::CreateDowncasted(::Prs3d_PointAspect* instance)
{
    return gcnew Macad::Occt::Prs3d_PointAspect( instance );
}



//---------------------------------------------------------------------
//  Class  Prs3d_PlaneAspect
//---------------------------------------------------------------------

Macad::Occt::Prs3d_PlaneAspect::Prs3d_PlaneAspect()
    : Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Prs3d_PlaneAspect();
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_PlaneAspect::EdgesAspect()
{
    Handle(::Prs3d_LineAspect) _result = ((::Prs3d_PlaneAspect*)_NativeInstance)->EdgesAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted(_result.get());
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_PlaneAspect::IsoAspect()
{
    Handle(::Prs3d_LineAspect) _result = ((::Prs3d_PlaneAspect*)_NativeInstance)->IsoAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted(_result.get());
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_PlaneAspect::ArrowAspect()
{
    Handle(::Prs3d_LineAspect) _result = ((::Prs3d_PlaneAspect*)_NativeInstance)->ArrowAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_PlaneAspect::SetArrowsLength(double theLength)
{
    ((::Prs3d_PlaneAspect*)_NativeInstance)->SetArrowsLength(theLength);
}

double Macad::Occt::Prs3d_PlaneAspect::ArrowsLength()
{
    double _result = ((::Prs3d_PlaneAspect*)_NativeInstance)->ArrowsLength();
    return _result;
}

void Macad::Occt::Prs3d_PlaneAspect::SetArrowsSize(double theSize)
{
    ((::Prs3d_PlaneAspect*)_NativeInstance)->SetArrowsSize(theSize);
}

double Macad::Occt::Prs3d_PlaneAspect::ArrowsSize()
{
    double _result = ((::Prs3d_PlaneAspect*)_NativeInstance)->ArrowsSize();
    return _result;
}

void Macad::Occt::Prs3d_PlaneAspect::SetArrowsAngle(double theAngle)
{
    ((::Prs3d_PlaneAspect*)_NativeInstance)->SetArrowsAngle(theAngle);
}

double Macad::Occt::Prs3d_PlaneAspect::ArrowsAngle()
{
    double _result = ((::Prs3d_PlaneAspect*)_NativeInstance)->ArrowsAngle();
    return _result;
}

void Macad::Occt::Prs3d_PlaneAspect::SetDisplayCenterArrow(bool theToDraw)
{
    ((::Prs3d_PlaneAspect*)_NativeInstance)->SetDisplayCenterArrow(theToDraw);
}

bool Macad::Occt::Prs3d_PlaneAspect::DisplayCenterArrow()
{
    bool _result = ((::Prs3d_PlaneAspect*)_NativeInstance)->DisplayCenterArrow();
    return _result;
}

void Macad::Occt::Prs3d_PlaneAspect::SetDisplayEdgesArrows(bool theToDraw)
{
    ((::Prs3d_PlaneAspect*)_NativeInstance)->SetDisplayEdgesArrows(theToDraw);
}

bool Macad::Occt::Prs3d_PlaneAspect::DisplayEdgesArrows()
{
    bool _result = ((::Prs3d_PlaneAspect*)_NativeInstance)->DisplayEdgesArrows();
    return _result;
}

void Macad::Occt::Prs3d_PlaneAspect::SetDisplayEdges(bool theToDraw)
{
    ((::Prs3d_PlaneAspect*)_NativeInstance)->SetDisplayEdges(theToDraw);
}

bool Macad::Occt::Prs3d_PlaneAspect::DisplayEdges()
{
    bool _result = ((::Prs3d_PlaneAspect*)_NativeInstance)->DisplayEdges();
    return _result;
}

void Macad::Occt::Prs3d_PlaneAspect::SetDisplayIso(bool theToDraw)
{
    ((::Prs3d_PlaneAspect*)_NativeInstance)->SetDisplayIso(theToDraw);
}

bool Macad::Occt::Prs3d_PlaneAspect::DisplayIso()
{
    bool _result = ((::Prs3d_PlaneAspect*)_NativeInstance)->DisplayIso();
    return _result;
}

void Macad::Occt::Prs3d_PlaneAspect::SetPlaneLength(double theLX, double theLY)
{
    ((::Prs3d_PlaneAspect*)_NativeInstance)->SetPlaneLength(theLX, theLY);
}

double Macad::Occt::Prs3d_PlaneAspect::PlaneXLength()
{
    double _result = ((::Prs3d_PlaneAspect*)_NativeInstance)->PlaneXLength();
    return _result;
}

double Macad::Occt::Prs3d_PlaneAspect::PlaneYLength()
{
    double _result = ((::Prs3d_PlaneAspect*)_NativeInstance)->PlaneYLength();
    return _result;
}

void Macad::Occt::Prs3d_PlaneAspect::SetIsoDistance(double theL)
{
    ((::Prs3d_PlaneAspect*)_NativeInstance)->SetIsoDistance(theL);
}

double Macad::Occt::Prs3d_PlaneAspect::IsoDistance()
{
    double _result = ((::Prs3d_PlaneAspect*)_NativeInstance)->IsoDistance();
    return _result;
}

void Macad::Occt::Prs3d_PlaneAspect::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_PlaneAspect*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Prs3d_PlaneAspect::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_PlaneAspect*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Prs3d_PlaneAspect^ Macad::Occt::Prs3d_PlaneAspect::CreateDowncasted(::Prs3d_PlaneAspect* instance)
{
    return gcnew Macad::Occt::Prs3d_PlaneAspect( instance );
}



//---------------------------------------------------------------------
//  Class  Prs3d_ArrowAspect
//---------------------------------------------------------------------

Macad::Occt::Prs3d_ArrowAspect::Prs3d_ArrowAspect()
    : Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Prs3d_ArrowAspect();
}

Macad::Occt::Prs3d_ArrowAspect::Prs3d_ArrowAspect(double anAngle, double aLength)
    : Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Prs3d_ArrowAspect(anAngle, aLength);
}

Macad::Occt::Prs3d_ArrowAspect::Prs3d_ArrowAspect(Macad::Occt::Graphic3d_AspectLine3d^ theAspect)
    : Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Prs3d_ArrowAspect(Handle(::Graphic3d_AspectLine3d)(theAspect->NativeInstance));
}

void Macad::Occt::Prs3d_ArrowAspect::SetAngle(double anAngle)
{
    ((::Prs3d_ArrowAspect*)_NativeInstance)->SetAngle(anAngle);
}

double Macad::Occt::Prs3d_ArrowAspect::Angle()
{
    double _result = ((::Prs3d_ArrowAspect*)_NativeInstance)->Angle();
    return _result;
}

void Macad::Occt::Prs3d_ArrowAspect::SetLength(double theLength)
{
    ((::Prs3d_ArrowAspect*)_NativeInstance)->SetLength(theLength);
}

double Macad::Occt::Prs3d_ArrowAspect::Length()
{
    double _result = ((::Prs3d_ArrowAspect*)_NativeInstance)->Length();
    return _result;
}

void Macad::Occt::Prs3d_ArrowAspect::SetZoomable(bool theIsZoomable)
{
    ((::Prs3d_ArrowAspect*)_NativeInstance)->SetZoomable(theIsZoomable);
}

bool Macad::Occt::Prs3d_ArrowAspect::IsZoomable()
{
    bool _result = ((::Prs3d_ArrowAspect*)_NativeInstance)->IsZoomable();
    return _result;
}

void Macad::Occt::Prs3d_ArrowAspect::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Prs3d_ArrowAspect*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::Graphic3d_AspectLine3d^ Macad::Occt::Prs3d_ArrowAspect::Aspect()
{
    Handle(::Graphic3d_AspectLine3d) _result = ((::Prs3d_ArrowAspect*)_NativeInstance)->Aspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_AspectLine3d::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_ArrowAspect::SetAspect(Macad::Occt::Graphic3d_AspectLine3d^ theAspect)
{
    ((::Prs3d_ArrowAspect*)_NativeInstance)->SetAspect(Handle(::Graphic3d_AspectLine3d)(theAspect->NativeInstance));
}

void Macad::Occt::Prs3d_ArrowAspect::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_ArrowAspect*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Prs3d_ArrowAspect::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_ArrowAspect*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Prs3d_ArrowAspect^ Macad::Occt::Prs3d_ArrowAspect::CreateDowncasted(::Prs3d_ArrowAspect* instance)
{
    return gcnew Macad::Occt::Prs3d_ArrowAspect( instance );
}



//---------------------------------------------------------------------
//  Class  Prs3d_DatumAspect
//---------------------------------------------------------------------

Macad::Occt::Prs3d_DatumAspect::Prs3d_DatumAspect()
    : Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Prs3d_DatumAspect();
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_DatumAspect::LineAspect(Macad::Occt::Prs3d_DatumParts thePart)
{
    Handle(::Prs3d_LineAspect) _result = ((::Prs3d_DatumAspect*)_NativeInstance)->LineAspect((::Prs3d_DatumParts)thePart);
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted(_result.get());
}

Macad::Occt::Prs3d_ShadingAspect^ Macad::Occt::Prs3d_DatumAspect::ShadingAspect(Macad::Occt::Prs3d_DatumParts thePart)
{
    Handle(::Prs3d_ShadingAspect) _result = ((::Prs3d_DatumAspect*)_NativeInstance)->ShadingAspect((::Prs3d_DatumParts)thePart);
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_ShadingAspect::CreateDowncasted(_result.get());
}

Macad::Occt::Prs3d_TextAspect^ Macad::Occt::Prs3d_DatumAspect::TextAspect(Macad::Occt::Prs3d_DatumParts thePart)
{
    Handle(::Prs3d_TextAspect) _result = ((::Prs3d_DatumAspect*)_NativeInstance)->TextAspect((::Prs3d_DatumParts)thePart);
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_TextAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_DatumAspect::SetTextAspect(Macad::Occt::Prs3d_TextAspect^ theTextAspect)
{
    ((::Prs3d_DatumAspect*)_NativeInstance)->SetTextAspect(Handle(::Prs3d_TextAspect)(theTextAspect->NativeInstance));
}

Macad::Occt::Prs3d_PointAspect^ Macad::Occt::Prs3d_DatumAspect::PointAspect()
{
    Handle(::Prs3d_PointAspect) _result = ((::Prs3d_DatumAspect*)_NativeInstance)->PointAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_PointAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_DatumAspect::SetPointAspect(Macad::Occt::Prs3d_PointAspect^ theAspect)
{
    ((::Prs3d_DatumAspect*)_NativeInstance)->SetPointAspect(Handle(::Prs3d_PointAspect)(theAspect->NativeInstance));
}

Macad::Occt::Prs3d_ArrowAspect^ Macad::Occt::Prs3d_DatumAspect::ArrowAspect()
{
    Handle(::Prs3d_ArrowAspect) _result = ((::Prs3d_DatumAspect*)_NativeInstance)->ArrowAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_ArrowAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_DatumAspect::SetArrowAspect(Macad::Occt::Prs3d_ArrowAspect^ theAspect)
{
    ((::Prs3d_DatumAspect*)_NativeInstance)->SetArrowAspect(Handle(::Prs3d_ArrowAspect)(theAspect->NativeInstance));
}

bool Macad::Occt::Prs3d_DatumAspect::DrawDatumPart(Macad::Occt::Prs3d_DatumParts thePart)
{
    bool _result = ((::Prs3d_DatumAspect*)_NativeInstance)->DrawDatumPart((::Prs3d_DatumParts)thePart);
    return _result;
}

void Macad::Occt::Prs3d_DatumAspect::SetDrawDatumAxes(Macad::Occt::Prs3d_DatumAxes theType)
{
    ((::Prs3d_DatumAspect*)_NativeInstance)->SetDrawDatumAxes((::Prs3d_DatumAxes)theType);
}

Macad::Occt::Prs3d_DatumAxes Macad::Occt::Prs3d_DatumAspect::DatumAxes()
{
    ::Prs3d_DatumAxes _result = ((::Prs3d_DatumAspect*)_NativeInstance)->DatumAxes();
    return (Macad::Occt::Prs3d_DatumAxes)_result;
}

double Macad::Occt::Prs3d_DatumAspect::Attribute(Macad::Occt::Prs3d_DatumAttribute theType)
{
    double _result = ((::Prs3d_DatumAspect*)_NativeInstance)->Attribute((::Prs3d_DatumAttribute)theType);
    return _result;
}

void Macad::Occt::Prs3d_DatumAspect::SetAttribute(Macad::Occt::Prs3d_DatumAttribute theType, double theValue)
{
    ((::Prs3d_DatumAspect*)_NativeInstance)->SetAttribute((::Prs3d_DatumAttribute)theType, theValue);
}

double Macad::Occt::Prs3d_DatumAspect::AxisLength(Macad::Occt::Prs3d_DatumParts thePart)
{
    double _result = ((::Prs3d_DatumAspect*)_NativeInstance)->AxisLength((::Prs3d_DatumParts)thePart);
    return _result;
}

void Macad::Occt::Prs3d_DatumAspect::SetAxisLength(double theL1, double theL2, double theL3)
{
    ((::Prs3d_DatumAspect*)_NativeInstance)->SetAxisLength(theL1, theL2, theL3);
}

bool Macad::Occt::Prs3d_DatumAspect::ToDrawLabels()
{
    bool _result = ((::Prs3d_DatumAspect*)_NativeInstance)->ToDrawLabels();
    return _result;
}

void Macad::Occt::Prs3d_DatumAspect::SetDrawLabels(bool theToDraw)
{
    ((::Prs3d_DatumAspect*)_NativeInstance)->SetDrawLabels(theToDraw);
}

void Macad::Occt::Prs3d_DatumAspect::SetToDrawLabels(bool theToDraw)
{
    ((::Prs3d_DatumAspect*)_NativeInstance)->SetToDrawLabels(theToDraw);
}

bool Macad::Occt::Prs3d_DatumAspect::ToDrawArrows()
{
    bool _result = ((::Prs3d_DatumAspect*)_NativeInstance)->ToDrawArrows();
    return _result;
}

void Macad::Occt::Prs3d_DatumAspect::SetDrawArrows(bool theToDraw)
{
    ((::Prs3d_DatumAspect*)_NativeInstance)->SetDrawArrows(theToDraw);
}

void Macad::Occt::Prs3d_DatumAspect::CopyAspectsFrom(Macad::Occt::Prs3d_DatumAspect^ theOther)
{
    ((::Prs3d_DatumAspect*)_NativeInstance)->CopyAspectsFrom(Handle(::Prs3d_DatumAspect)(theOther->NativeInstance));
}

void Macad::Occt::Prs3d_DatumAspect::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_DatumAspect*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Prs3d_DatumAspect::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_DatumAspect*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Prs3d_DatumParts Macad::Occt::Prs3d_DatumAspect::ArrowPartForAxis(Macad::Occt::Prs3d_DatumParts thePart)
{
    ::Prs3d_DatumParts _result = ::Prs3d_DatumAspect::ArrowPartForAxis((::Prs3d_DatumParts)thePart);
    return (Macad::Occt::Prs3d_DatumParts)_result;
}

Macad::Occt::Prs3d_TextAspect^ Macad::Occt::Prs3d_DatumAspect::TextAspect()
{
    Handle(::Prs3d_TextAspect) _result = ((::Prs3d_DatumAspect*)_NativeInstance)->TextAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_TextAspect::CreateDowncasted(_result.get());
}

Macad::Occt::Prs3d_DatumAspect^ Macad::Occt::Prs3d_DatumAspect::CreateDowncasted(::Prs3d_DatumAspect* instance)
{
    return gcnew Macad::Occt::Prs3d_DatumAspect( instance );
}



//---------------------------------------------------------------------
//  Class  Prs3d_DimensionAspect
//---------------------------------------------------------------------

Macad::Occt::Prs3d_DimensionAspect::Prs3d_DimensionAspect()
    : Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Prs3d_DimensionAspect();
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_DimensionAspect::LineAspect()
{
    Handle(::Prs3d_LineAspect) _result = ((::Prs3d_DimensionAspect*)_NativeInstance)->LineAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_DimensionAspect::SetLineAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
    ((::Prs3d_DimensionAspect*)_NativeInstance)->SetLineAspect(Handle(::Prs3d_LineAspect)(theAspect->NativeInstance));
}

Macad::Occt::Prs3d_TextAspect^ Macad::Occt::Prs3d_DimensionAspect::TextAspect()
{
    Handle(::Prs3d_TextAspect) _result = ((::Prs3d_DimensionAspect*)_NativeInstance)->TextAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_TextAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_DimensionAspect::SetTextAspect(Macad::Occt::Prs3d_TextAspect^ theAspect)
{
    ((::Prs3d_DimensionAspect*)_NativeInstance)->SetTextAspect(Handle(::Prs3d_TextAspect)(theAspect->NativeInstance));
}

bool Macad::Occt::Prs3d_DimensionAspect::IsText3d()
{
    bool _result = ((::Prs3d_DimensionAspect*)_NativeInstance)->IsText3d();
    return _result;
}

void Macad::Occt::Prs3d_DimensionAspect::MakeText3d(bool isText3d)
{
    ((::Prs3d_DimensionAspect*)_NativeInstance)->MakeText3d(isText3d);
}

bool Macad::Occt::Prs3d_DimensionAspect::IsTextShaded()
{
    bool _result = ((::Prs3d_DimensionAspect*)_NativeInstance)->IsTextShaded();
    return _result;
}

void Macad::Occt::Prs3d_DimensionAspect::MakeTextShaded(bool theIsTextShaded)
{
    ((::Prs3d_DimensionAspect*)_NativeInstance)->MakeTextShaded(theIsTextShaded);
}

bool Macad::Occt::Prs3d_DimensionAspect::IsArrows3d()
{
    bool _result = ((::Prs3d_DimensionAspect*)_NativeInstance)->IsArrows3d();
    return _result;
}

void Macad::Occt::Prs3d_DimensionAspect::MakeArrows3d(bool theIsArrows3d)
{
    ((::Prs3d_DimensionAspect*)_NativeInstance)->MakeArrows3d(theIsArrows3d);
}

bool Macad::Occt::Prs3d_DimensionAspect::IsUnitsDisplayed()
{
    bool _result = ((::Prs3d_DimensionAspect*)_NativeInstance)->IsUnitsDisplayed();
    return _result;
}

void Macad::Occt::Prs3d_DimensionAspect::MakeUnitsDisplayed(bool theIsDisplayed)
{
    ((::Prs3d_DimensionAspect*)_NativeInstance)->MakeUnitsDisplayed(theIsDisplayed);
}

void Macad::Occt::Prs3d_DimensionAspect::SetArrowOrientation(Macad::Occt::Prs3d_DimensionArrowOrientation theArrowOrient)
{
    ((::Prs3d_DimensionAspect*)_NativeInstance)->SetArrowOrientation((::Prs3d_DimensionArrowOrientation)theArrowOrient);
}

Macad::Occt::Prs3d_DimensionArrowOrientation Macad::Occt::Prs3d_DimensionAspect::ArrowOrientation()
{
    ::Prs3d_DimensionArrowOrientation _result = ((::Prs3d_DimensionAspect*)_NativeInstance)->ArrowOrientation();
    return (Macad::Occt::Prs3d_DimensionArrowOrientation)_result;
}

void Macad::Occt::Prs3d_DimensionAspect::SetTextVerticalPosition(Macad::Occt::Prs3d_DimensionTextVerticalPosition thePosition)
{
    ((::Prs3d_DimensionAspect*)_NativeInstance)->SetTextVerticalPosition((::Prs3d_DimensionTextVerticalPosition)thePosition);
}

Macad::Occt::Prs3d_DimensionTextVerticalPosition Macad::Occt::Prs3d_DimensionAspect::TextVerticalPosition()
{
    ::Prs3d_DimensionTextVerticalPosition _result = ((::Prs3d_DimensionAspect*)_NativeInstance)->TextVerticalPosition();
    return (Macad::Occt::Prs3d_DimensionTextVerticalPosition)_result;
}

void Macad::Occt::Prs3d_DimensionAspect::SetTextHorizontalPosition(Macad::Occt::Prs3d_DimensionTextHorizontalPosition thePosition)
{
    ((::Prs3d_DimensionAspect*)_NativeInstance)->SetTextHorizontalPosition((::Prs3d_DimensionTextHorizontalPosition)thePosition);
}

Macad::Occt::Prs3d_DimensionTextHorizontalPosition Macad::Occt::Prs3d_DimensionAspect::TextHorizontalPosition()
{
    ::Prs3d_DimensionTextHorizontalPosition _result = ((::Prs3d_DimensionAspect*)_NativeInstance)->TextHorizontalPosition();
    return (Macad::Occt::Prs3d_DimensionTextHorizontalPosition)_result;
}

Macad::Occt::Prs3d_ArrowAspect^ Macad::Occt::Prs3d_DimensionAspect::ArrowAspect()
{
    Handle(::Prs3d_ArrowAspect) _result = ((::Prs3d_DimensionAspect*)_NativeInstance)->ArrowAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_ArrowAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_DimensionAspect::SetArrowAspect(Macad::Occt::Prs3d_ArrowAspect^ theAspect)
{
    ((::Prs3d_DimensionAspect*)_NativeInstance)->SetArrowAspect(Handle(::Prs3d_ArrowAspect)(theAspect->NativeInstance));
}

void Macad::Occt::Prs3d_DimensionAspect::SetCommonColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Prs3d_DimensionAspect*)_NativeInstance)->SetCommonColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Prs3d_DimensionAspect::SetExtensionSize(double theSize)
{
    ((::Prs3d_DimensionAspect*)_NativeInstance)->SetExtensionSize(theSize);
}

double Macad::Occt::Prs3d_DimensionAspect::ExtensionSize()
{
    double _result = ((::Prs3d_DimensionAspect*)_NativeInstance)->ExtensionSize();
    return _result;
}

void Macad::Occt::Prs3d_DimensionAspect::SetArrowTailSize(double theSize)
{
    ((::Prs3d_DimensionAspect*)_NativeInstance)->SetArrowTailSize(theSize);
}

double Macad::Occt::Prs3d_DimensionAspect::ArrowTailSize()
{
    double _result = ((::Prs3d_DimensionAspect*)_NativeInstance)->ArrowTailSize();
    return _result;
}

void Macad::Occt::Prs3d_DimensionAspect::SetValueStringFormat(Macad::Occt::TCollection_AsciiString^ theFormat)
{
    ((::Prs3d_DimensionAspect*)_NativeInstance)->SetValueStringFormat(*(::TCollection_AsciiString*)theFormat->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Prs3d_DimensionAspect::ValueStringFormat()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Prs3d_DimensionAspect*)_NativeInstance)->ValueStringFormat();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Prs3d_DimensionAspect::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_DimensionAspect*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Prs3d_DimensionAspect::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_DimensionAspect*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Prs3d_DimensionAspect^ Macad::Occt::Prs3d_DimensionAspect::CreateDowncasted(::Prs3d_DimensionAspect* instance)
{
    return gcnew Macad::Occt::Prs3d_DimensionAspect( instance );
}



//---------------------------------------------------------------------
//  Class  Prs3d_Drawer
//---------------------------------------------------------------------

Macad::Occt::Prs3d_Drawer::Prs3d_Drawer()
    : Macad::Occt::Graphic3d_PresentationAttributes(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Prs3d_Drawer();
}

void Macad::Occt::Prs3d_Drawer::SetupOwnDefaults()
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetupOwnDefaults();
}

void Macad::Occt::Prs3d_Drawer::SetTypeOfDeflection(Macad::Occt::Aspect_TypeOfDeflection theTypeOfDeflection)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetTypeOfDeflection((::Aspect_TypeOfDeflection)theTypeOfDeflection);
}

Macad::Occt::Aspect_TypeOfDeflection Macad::Occt::Prs3d_Drawer::TypeOfDeflection()
{
    ::Aspect_TypeOfDeflection _result = ((::Prs3d_Drawer*)_NativeInstance)->TypeOfDeflection();
    return (Macad::Occt::Aspect_TypeOfDeflection)_result;
}

bool Macad::Occt::Prs3d_Drawer::HasOwnTypeOfDeflection()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnTypeOfDeflection();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnTypeOfDeflection()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnTypeOfDeflection();
}

void Macad::Occt::Prs3d_Drawer::SetMaximalChordialDeviation(double theChordialDeviation)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetMaximalChordialDeviation(theChordialDeviation);
}

double Macad::Occt::Prs3d_Drawer::MaximalChordialDeviation()
{
    double _result = ((::Prs3d_Drawer*)_NativeInstance)->MaximalChordialDeviation();
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::HasOwnMaximalChordialDeviation()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnMaximalChordialDeviation();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnMaximalChordialDeviation()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnMaximalChordialDeviation();
}

void Macad::Occt::Prs3d_Drawer::SetTypeOfHLR(Macad::Occt::Prs3d_TypeOfHLR theTypeOfHLR)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetTypeOfHLR((::Prs3d_TypeOfHLR)theTypeOfHLR);
}

Macad::Occt::Prs3d_TypeOfHLR Macad::Occt::Prs3d_Drawer::TypeOfHLR()
{
    ::Prs3d_TypeOfHLR _result = ((::Prs3d_Drawer*)_NativeInstance)->TypeOfHLR();
    return (Macad::Occt::Prs3d_TypeOfHLR)_result;
}

bool Macad::Occt::Prs3d_Drawer::HasOwnTypeOfHLR()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnTypeOfHLR();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::SetMaximalParameterValue(double theValue)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetMaximalParameterValue(theValue);
}

double Macad::Occt::Prs3d_Drawer::MaximalParameterValue()
{
    double _result = ((::Prs3d_Drawer*)_NativeInstance)->MaximalParameterValue();
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::HasOwnMaximalParameterValue()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnMaximalParameterValue();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnMaximalParameterValue()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnMaximalParameterValue();
}

void Macad::Occt::Prs3d_Drawer::SetIsoOnPlane(bool theIsEnabled)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetIsoOnPlane(theIsEnabled);
}

bool Macad::Occt::Prs3d_Drawer::IsoOnPlane()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->IsoOnPlane();
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::HasOwnIsoOnPlane()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnIsoOnPlane();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnIsoOnPlane()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnIsoOnPlane();
}

bool Macad::Occt::Prs3d_Drawer::IsoOnTriangulation()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->IsoOnTriangulation();
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::HasOwnIsoOnTriangulation()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnIsoOnTriangulation();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnIsoOnTriangulation()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnIsoOnTriangulation();
}

void Macad::Occt::Prs3d_Drawer::SetIsoOnTriangulation(bool theToEnable)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetIsoOnTriangulation(theToEnable);
}

void Macad::Occt::Prs3d_Drawer::SetDiscretisation(int theValue)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetDiscretisation(theValue);
}

int Macad::Occt::Prs3d_Drawer::Discretisation()
{
    int _result = ((::Prs3d_Drawer*)_NativeInstance)->Discretisation();
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::HasOwnDiscretisation()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDiscretisation();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnDiscretisation()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnDiscretisation();
}

void Macad::Occt::Prs3d_Drawer::SetDeviationCoefficient(double theCoefficient)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetDeviationCoefficient(theCoefficient);
}

double Macad::Occt::Prs3d_Drawer::DeviationCoefficient()
{
    double _result = ((::Prs3d_Drawer*)_NativeInstance)->DeviationCoefficient();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::SetDeviationCoefficient()
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetDeviationCoefficient();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnDeviationCoefficient()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDeviationCoefficient();
    return _result;
}

double Macad::Occt::Prs3d_Drawer::PreviousDeviationCoefficient()
{
    double _result = ((::Prs3d_Drawer*)_NativeInstance)->PreviousDeviationCoefficient();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::UpdatePreviousDeviationCoefficient()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UpdatePreviousDeviationCoefficient();
}

void Macad::Occt::Prs3d_Drawer::SetDeviationAngle(double theAngle)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetDeviationAngle(theAngle);
}

double Macad::Occt::Prs3d_Drawer::DeviationAngle()
{
    double _result = ((::Prs3d_Drawer*)_NativeInstance)->DeviationAngle();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::SetDeviationAngle()
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetDeviationAngle();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnDeviationAngle()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDeviationAngle();
    return _result;
}

double Macad::Occt::Prs3d_Drawer::PreviousDeviationAngle()
{
    double _result = ((::Prs3d_Drawer*)_NativeInstance)->PreviousDeviationAngle();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::UpdatePreviousDeviationAngle()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UpdatePreviousDeviationAngle();
}

void Macad::Occt::Prs3d_Drawer::SetAutoTriangulation(bool theIsEnabled)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetAutoTriangulation(theIsEnabled);
}

bool Macad::Occt::Prs3d_Drawer::IsAutoTriangulation()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->IsAutoTriangulation();
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::HasOwnIsAutoTriangulation()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnIsAutoTriangulation();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnIsAutoTriangulation()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnIsAutoTriangulation();
}

Macad::Occt::Prs3d_IsoAspect^ Macad::Occt::Prs3d_Drawer::UIsoAspect()
{
    Handle(::Prs3d_IsoAspect) _result = ((::Prs3d_Drawer*)_NativeInstance)->UIsoAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_IsoAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_Drawer::SetUIsoAspect(Macad::Occt::Prs3d_IsoAspect^ theAspect)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetUIsoAspect(Handle(::Prs3d_IsoAspect)(theAspect->NativeInstance));
}

bool Macad::Occt::Prs3d_Drawer::HasOwnUIsoAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnUIsoAspect();
    return _result;
}

Macad::Occt::Prs3d_IsoAspect^ Macad::Occt::Prs3d_Drawer::VIsoAspect()
{
    Handle(::Prs3d_IsoAspect) _result = ((::Prs3d_Drawer*)_NativeInstance)->VIsoAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_IsoAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_Drawer::SetVIsoAspect(Macad::Occt::Prs3d_IsoAspect^ theAspect)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetVIsoAspect(Handle(::Prs3d_IsoAspect)(theAspect->NativeInstance));
}

bool Macad::Occt::Prs3d_Drawer::HasOwnVIsoAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnVIsoAspect();
    return _result;
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_Drawer::WireAspect()
{
    Handle(::Prs3d_LineAspect) _result = ((::Prs3d_Drawer*)_NativeInstance)->WireAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_Drawer::SetWireAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetWireAspect(Handle(::Prs3d_LineAspect)(theAspect->NativeInstance));
}

bool Macad::Occt::Prs3d_Drawer::HasOwnWireAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnWireAspect();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::SetWireDraw(bool theIsEnabled)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetWireDraw(theIsEnabled);
}

bool Macad::Occt::Prs3d_Drawer::WireDraw()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->WireDraw();
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::HasOwnWireDraw()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnWireDraw();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnWireDraw()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnWireDraw();
}

Macad::Occt::Prs3d_PointAspect^ Macad::Occt::Prs3d_Drawer::PointAspect()
{
    Handle(::Prs3d_PointAspect) _result = ((::Prs3d_Drawer*)_NativeInstance)->PointAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_PointAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_Drawer::SetPointAspect(Macad::Occt::Prs3d_PointAspect^ theAspect)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetPointAspect(Handle(::Prs3d_PointAspect)(theAspect->NativeInstance));
}

bool Macad::Occt::Prs3d_Drawer::HasOwnPointAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnPointAspect();
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::SetupOwnPointAspect(Macad::Occt::Prs3d_Drawer^ theDefaults)
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->SetupOwnPointAspect(Handle(::Prs3d_Drawer)(theDefaults->NativeInstance));
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::SetupOwnPointAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->SetupOwnPointAspect(::opencascade::handle<::Prs3d_Drawer>());
    return _result;
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_Drawer::LineAspect()
{
    Handle(::Prs3d_LineAspect) _result = ((::Prs3d_Drawer*)_NativeInstance)->LineAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_Drawer::SetLineAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetLineAspect(Handle(::Prs3d_LineAspect)(theAspect->NativeInstance));
}

bool Macad::Occt::Prs3d_Drawer::HasOwnLineAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnLineAspect();
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::SetOwnLineAspects(Macad::Occt::Prs3d_Drawer^ theDefaults)
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->SetOwnLineAspects(Handle(::Prs3d_Drawer)(theDefaults->NativeInstance));
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::SetOwnLineAspects()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->SetOwnLineAspects(::opencascade::handle<::Prs3d_Drawer>());
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::SetOwnDatumAspects(Macad::Occt::Prs3d_Drawer^ theDefaults)
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->SetOwnDatumAspects(Handle(::Prs3d_Drawer)(theDefaults->NativeInstance));
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::SetOwnDatumAspects()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->SetOwnDatumAspects(::opencascade::handle<::Prs3d_Drawer>());
    return _result;
}

Macad::Occt::Prs3d_TextAspect^ Macad::Occt::Prs3d_Drawer::TextAspect()
{
    Handle(::Prs3d_TextAspect) _result = ((::Prs3d_Drawer*)_NativeInstance)->TextAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_TextAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_Drawer::SetTextAspect(Macad::Occt::Prs3d_TextAspect^ theAspect)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetTextAspect(Handle(::Prs3d_TextAspect)(theAspect->NativeInstance));
}

bool Macad::Occt::Prs3d_Drawer::HasOwnTextAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnTextAspect();
    return _result;
}

Macad::Occt::Prs3d_ShadingAspect^ Macad::Occt::Prs3d_Drawer::ShadingAspect()
{
    Handle(::Prs3d_ShadingAspect) _result = ((::Prs3d_Drawer*)_NativeInstance)->ShadingAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_ShadingAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_Drawer::SetShadingAspect(Macad::Occt::Prs3d_ShadingAspect^ theAspect)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetShadingAspect(Handle(::Prs3d_ShadingAspect)(theAspect->NativeInstance));
}

bool Macad::Occt::Prs3d_Drawer::HasOwnShadingAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnShadingAspect();
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::SetupOwnShadingAspect(Macad::Occt::Prs3d_Drawer^ theDefaults)
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->SetupOwnShadingAspect(Handle(::Prs3d_Drawer)(theDefaults->NativeInstance));
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::SetupOwnShadingAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->SetupOwnShadingAspect(::opencascade::handle<::Prs3d_Drawer>());
    return _result;
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_Drawer::SeenLineAspect()
{
    Handle(::Prs3d_LineAspect) _result = ((::Prs3d_Drawer*)_NativeInstance)->SeenLineAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_Drawer::SetSeenLineAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetSeenLineAspect(Handle(::Prs3d_LineAspect)(theAspect->NativeInstance));
}

bool Macad::Occt::Prs3d_Drawer::HasOwnSeenLineAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnSeenLineAspect();
    return _result;
}

Macad::Occt::Prs3d_PlaneAspect^ Macad::Occt::Prs3d_Drawer::PlaneAspect()
{
    Handle(::Prs3d_PlaneAspect) _result = ((::Prs3d_Drawer*)_NativeInstance)->PlaneAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_PlaneAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_Drawer::SetPlaneAspect(Macad::Occt::Prs3d_PlaneAspect^ theAspect)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetPlaneAspect(Handle(::Prs3d_PlaneAspect)(theAspect->NativeInstance));
}

bool Macad::Occt::Prs3d_Drawer::HasOwnPlaneAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnPlaneAspect();
    return _result;
}

Macad::Occt::Prs3d_ArrowAspect^ Macad::Occt::Prs3d_Drawer::ArrowAspect()
{
    Handle(::Prs3d_ArrowAspect) _result = ((::Prs3d_Drawer*)_NativeInstance)->ArrowAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_ArrowAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_Drawer::SetArrowAspect(Macad::Occt::Prs3d_ArrowAspect^ theAspect)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetArrowAspect(Handle(::Prs3d_ArrowAspect)(theAspect->NativeInstance));
}

bool Macad::Occt::Prs3d_Drawer::HasOwnArrowAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnArrowAspect();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::SetLineArrowDraw(bool theIsEnabled)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetLineArrowDraw(theIsEnabled);
}

bool Macad::Occt::Prs3d_Drawer::LineArrowDraw()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->LineArrowDraw();
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::HasOwnLineArrowDraw()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnLineArrowDraw();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnLineArrowDraw()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnLineArrowDraw();
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_Drawer::HiddenLineAspect()
{
    Handle(::Prs3d_LineAspect) _result = ((::Prs3d_Drawer*)_NativeInstance)->HiddenLineAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_Drawer::SetHiddenLineAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetHiddenLineAspect(Handle(::Prs3d_LineAspect)(theAspect->NativeInstance));
}

bool Macad::Occt::Prs3d_Drawer::HasOwnHiddenLineAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnHiddenLineAspect();
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::DrawHiddenLine()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->DrawHiddenLine();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::EnableDrawHiddenLine()
{
    ((::Prs3d_Drawer*)_NativeInstance)->EnableDrawHiddenLine();
}

void Macad::Occt::Prs3d_Drawer::DisableDrawHiddenLine()
{
    ((::Prs3d_Drawer*)_NativeInstance)->DisableDrawHiddenLine();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnDrawHiddenLine()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDrawHiddenLine();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnDrawHiddenLine()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnDrawHiddenLine();
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_Drawer::VectorAspect()
{
    Handle(::Prs3d_LineAspect) _result = ((::Prs3d_Drawer*)_NativeInstance)->VectorAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_Drawer::SetVectorAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetVectorAspect(Handle(::Prs3d_LineAspect)(theAspect->NativeInstance));
}

bool Macad::Occt::Prs3d_Drawer::HasOwnVectorAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnVectorAspect();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::SetVertexDrawMode(Macad::Occt::Prs3d_VertexDrawMode theMode)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetVertexDrawMode((::Prs3d_VertexDrawMode)theMode);
}

Macad::Occt::Prs3d_VertexDrawMode Macad::Occt::Prs3d_Drawer::VertexDrawMode()
{
    ::Prs3d_VertexDrawMode _result = ((::Prs3d_Drawer*)_NativeInstance)->VertexDrawMode();
    return (Macad::Occt::Prs3d_VertexDrawMode)_result;
}

bool Macad::Occt::Prs3d_Drawer::HasOwnVertexDrawMode()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnVertexDrawMode();
    return _result;
}

Macad::Occt::Prs3d_DatumAspect^ Macad::Occt::Prs3d_Drawer::DatumAspect()
{
    Handle(::Prs3d_DatumAspect) _result = ((::Prs3d_Drawer*)_NativeInstance)->DatumAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_DatumAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_Drawer::SetDatumAspect(Macad::Occt::Prs3d_DatumAspect^ theAspect)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetDatumAspect(Handle(::Prs3d_DatumAspect)(theAspect->NativeInstance));
}

bool Macad::Occt::Prs3d_Drawer::HasOwnDatumAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDatumAspect();
    return _result;
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_Drawer::SectionAspect()
{
    Handle(::Prs3d_LineAspect) _result = ((::Prs3d_Drawer*)_NativeInstance)->SectionAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_Drawer::SetSectionAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetSectionAspect(Handle(::Prs3d_LineAspect)(theAspect->NativeInstance));
}

bool Macad::Occt::Prs3d_Drawer::HasOwnSectionAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnSectionAspect();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::SetFreeBoundaryAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetFreeBoundaryAspect(Handle(::Prs3d_LineAspect)(theAspect->NativeInstance));
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_Drawer::FreeBoundaryAspect()
{
    Handle(::Prs3d_LineAspect) _result = ((::Prs3d_Drawer*)_NativeInstance)->FreeBoundaryAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted(_result.get());
}

bool Macad::Occt::Prs3d_Drawer::HasOwnFreeBoundaryAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnFreeBoundaryAspect();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::SetFreeBoundaryDraw(bool theIsEnabled)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetFreeBoundaryDraw(theIsEnabled);
}

bool Macad::Occt::Prs3d_Drawer::FreeBoundaryDraw()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->FreeBoundaryDraw();
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::HasOwnFreeBoundaryDraw()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnFreeBoundaryDraw();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnFreeBoundaryDraw()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnFreeBoundaryDraw();
}

void Macad::Occt::Prs3d_Drawer::SetUnFreeBoundaryAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetUnFreeBoundaryAspect(Handle(::Prs3d_LineAspect)(theAspect->NativeInstance));
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_Drawer::UnFreeBoundaryAspect()
{
    Handle(::Prs3d_LineAspect) _result = ((::Prs3d_Drawer*)_NativeInstance)->UnFreeBoundaryAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted(_result.get());
}

bool Macad::Occt::Prs3d_Drawer::HasOwnUnFreeBoundaryAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnUnFreeBoundaryAspect();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::SetUnFreeBoundaryDraw(bool theIsEnabled)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetUnFreeBoundaryDraw(theIsEnabled);
}

bool Macad::Occt::Prs3d_Drawer::UnFreeBoundaryDraw()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->UnFreeBoundaryDraw();
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::HasOwnUnFreeBoundaryDraw()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnUnFreeBoundaryDraw();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnUnFreeBoundaryDraw()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnUnFreeBoundaryDraw();
}

void Macad::Occt::Prs3d_Drawer::SetFaceBoundaryAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetFaceBoundaryAspect(Handle(::Prs3d_LineAspect)(theAspect->NativeInstance));
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_Drawer::FaceBoundaryAspect()
{
    Handle(::Prs3d_LineAspect) _result = ((::Prs3d_Drawer*)_NativeInstance)->FaceBoundaryAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted(_result.get());
}

bool Macad::Occt::Prs3d_Drawer::HasOwnFaceBoundaryAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnFaceBoundaryAspect();
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::SetupOwnFaceBoundaryAspect(Macad::Occt::Prs3d_Drawer^ theDefaults)
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->SetupOwnFaceBoundaryAspect(Handle(::Prs3d_Drawer)(theDefaults->NativeInstance));
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::SetupOwnFaceBoundaryAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->SetupOwnFaceBoundaryAspect(::opencascade::handle<::Prs3d_Drawer>());
    return _result;
}

void Macad::Occt::Prs3d_Drawer::SetFaceBoundaryDraw(bool theIsEnabled)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetFaceBoundaryDraw(theIsEnabled);
}

bool Macad::Occt::Prs3d_Drawer::FaceBoundaryDraw()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->FaceBoundaryDraw();
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::HasOwnFaceBoundaryDraw()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnFaceBoundaryDraw();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnFaceBoundaryDraw()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnFaceBoundaryDraw();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnFaceBoundaryUpperContinuity()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnFaceBoundaryUpperContinuity();
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Prs3d_Drawer::FaceBoundaryUpperContinuity()
{
    ::GeomAbs_Shape _result = ((::Prs3d_Drawer*)_NativeInstance)->FaceBoundaryUpperContinuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

void Macad::Occt::Prs3d_Drawer::SetFaceBoundaryUpperContinuity(Macad::Occt::GeomAbs_Shape theMostAllowedEdgeClass)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetFaceBoundaryUpperContinuity((::GeomAbs_Shape)theMostAllowedEdgeClass);
}

void Macad::Occt::Prs3d_Drawer::UnsetFaceBoundaryUpperContinuity()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UnsetFaceBoundaryUpperContinuity();
}

Macad::Occt::Prs3d_DimensionAspect^ Macad::Occt::Prs3d_Drawer::DimensionAspect()
{
    Handle(::Prs3d_DimensionAspect) _result = ((::Prs3d_Drawer*)_NativeInstance)->DimensionAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_DimensionAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_Drawer::SetDimensionAspect(Macad::Occt::Prs3d_DimensionAspect^ theAspect)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetDimensionAspect(Handle(::Prs3d_DimensionAspect)(theAspect->NativeInstance));
}

bool Macad::Occt::Prs3d_Drawer::HasOwnDimensionAspect()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDimensionAspect();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::SetDimLengthModelUnits(Macad::Occt::TCollection_AsciiString^ theUnits)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetDimLengthModelUnits(*(::TCollection_AsciiString*)theUnits->NativeInstance);
}

void Macad::Occt::Prs3d_Drawer::SetDimAngleModelUnits(Macad::Occt::TCollection_AsciiString^ theUnits)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetDimAngleModelUnits(*(::TCollection_AsciiString*)theUnits->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Prs3d_Drawer::DimLengthModelUnits()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Prs3d_Drawer*)_NativeInstance)->DimLengthModelUnits();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Prs3d_Drawer::DimAngleModelUnits()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Prs3d_Drawer*)_NativeInstance)->DimAngleModelUnits();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

bool Macad::Occt::Prs3d_Drawer::HasOwnDimLengthModelUnits()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDimLengthModelUnits();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnDimLengthModelUnits()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnDimLengthModelUnits();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnDimAngleModelUnits()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDimAngleModelUnits();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnDimAngleModelUnits()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnDimAngleModelUnits();
}

void Macad::Occt::Prs3d_Drawer::SetDimLengthDisplayUnits(Macad::Occt::TCollection_AsciiString^ theUnits)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetDimLengthDisplayUnits(*(::TCollection_AsciiString*)theUnits->NativeInstance);
}

void Macad::Occt::Prs3d_Drawer::SetDimAngleDisplayUnits(Macad::Occt::TCollection_AsciiString^ theUnits)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetDimAngleDisplayUnits(*(::TCollection_AsciiString*)theUnits->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Prs3d_Drawer::DimLengthDisplayUnits()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Prs3d_Drawer*)_NativeInstance)->DimLengthDisplayUnits();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Prs3d_Drawer::DimAngleDisplayUnits()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Prs3d_Drawer*)_NativeInstance)->DimAngleDisplayUnits();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

bool Macad::Occt::Prs3d_Drawer::HasOwnDimLengthDisplayUnits()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDimLengthDisplayUnits();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnDimLengthDisplayUnits()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnDimLengthDisplayUnits();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnDimAngleDisplayUnits()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDimAngleDisplayUnits();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnDimAngleDisplayUnits()
{
    ((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnDimAngleDisplayUnits();
}

Macad::Occt::Prs3d_Drawer^ Macad::Occt::Prs3d_Drawer::Link()
{
    Handle(::Prs3d_Drawer) _result = ((::Prs3d_Drawer*)_NativeInstance)->Link();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_Drawer::CreateDowncasted(_result.get());
}

bool Macad::Occt::Prs3d_Drawer::HasLink()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasLink();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::Link(Macad::Occt::Prs3d_Drawer^ theDrawer)
{
    ((::Prs3d_Drawer*)_NativeInstance)->Link(Handle(::Prs3d_Drawer)(theDrawer->NativeInstance));
}

void Macad::Occt::Prs3d_Drawer::SetLink(Macad::Occt::Prs3d_Drawer^ theDrawer)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetLink(Handle(::Prs3d_Drawer)(theDrawer->NativeInstance));
}

void Macad::Occt::Prs3d_Drawer::ClearLocalAttributes()
{
    ((::Prs3d_Drawer*)_NativeInstance)->ClearLocalAttributes();
}

bool Macad::Occt::Prs3d_Drawer::SetShaderProgram(Macad::Occt::Graphic3d_ShaderProgram^ theProgram, Macad::Occt::Graphic3d_GroupAspect theAspect, bool theToOverrideDefaults)
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->SetShaderProgram(Handle(::Graphic3d_ShaderProgram)(theProgram->NativeInstance), (::Graphic3d_GroupAspect)theAspect, theToOverrideDefaults);
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::SetShaderProgram(Macad::Occt::Graphic3d_ShaderProgram^ theProgram, Macad::Occt::Graphic3d_GroupAspect theAspect)
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->SetShaderProgram(Handle(::Graphic3d_ShaderProgram)(theProgram->NativeInstance), (::Graphic3d_GroupAspect)theAspect, false);
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::SetShadingModel(Macad::Occt::Graphic3d_TypeOfShadingModel theModel, bool theToOverrideDefaults)
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->SetShadingModel((::Graphic3d_TypeOfShadingModel)theModel, theToOverrideDefaults);
    return _result;
}

bool Macad::Occt::Prs3d_Drawer::SetShadingModel(Macad::Occt::Graphic3d_TypeOfShadingModel theModel)
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->SetShadingModel((::Graphic3d_TypeOfShadingModel)theModel, false);
    return _result;
}

void Macad::Occt::Prs3d_Drawer::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_Drawer*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Prs3d_Drawer::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_Drawer*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Prs3d_Drawer::SetHLRAngle(double theAngle)
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetHLRAngle(theAngle);
}

double Macad::Occt::Prs3d_Drawer::HLRAngle()
{
    double _result = ((::Prs3d_Drawer*)_NativeInstance)->HLRAngle();
    return _result;
}

void Macad::Occt::Prs3d_Drawer::SetHLRAngle()
{
    ((::Prs3d_Drawer*)_NativeInstance)->SetHLRAngle();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnHLRDeviationAngle()
{
    bool _result = ((::Prs3d_Drawer*)_NativeInstance)->HasOwnHLRDeviationAngle();
    return _result;
}

double Macad::Occt::Prs3d_Drawer::PreviousHLRDeviationAngle()
{
    double _result = ((::Prs3d_Drawer*)_NativeInstance)->PreviousHLRDeviationAngle();
    return _result;
}

Macad::Occt::Prs3d_Drawer^ Macad::Occt::Prs3d_Drawer::CreateDowncasted(::Prs3d_Drawer* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::AIS_ColoredDrawer)))
        return Macad::Occt::AIS_ColoredDrawer::CreateDowncasted((::AIS_ColoredDrawer*)instance);
    
    return gcnew Macad::Occt::Prs3d_Drawer( instance );
}



//---------------------------------------------------------------------
//  Class  Prs3d
//---------------------------------------------------------------------

Macad::Occt::Prs3d::Prs3d()
    : Macad::Occt::BaseClass<::Prs3d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Prs3d();
}

bool Macad::Occt::Prs3d::MatchSegment(double X, double Y, double Z, double aDistance, Macad::Occt::Pnt p1, Macad::Occt::Pnt p2, double% dist)
{
    pin_ptr<Macad::Occt::Pnt> pp_p1 = &p1;
    pin_ptr<Macad::Occt::Pnt> pp_p2 = &p2;
    pin_ptr<double> pp_dist = &dist;
    bool _result = ::Prs3d::MatchSegment(X, Y, Z, aDistance, *(gp_Pnt*)pp_p1, *(gp_Pnt*)pp_p2, *(double*)pp_dist);
    return _result;
}

double Macad::Occt::Prs3d::GetDeflection(Macad::Occt::Graphic3d_Vec3d^ theBndMin, Macad::Occt::Graphic3d_Vec3d^ theBndMax, double theDeviationCoefficient)
{
    double _result = ::Prs3d::GetDeflection(*(::Graphic3d_Vec3d*)theBndMin->NativeInstance, *(::Graphic3d_Vec3d*)theBndMax->NativeInstance, theDeviationCoefficient);
    return _result;
}

double Macad::Occt::Prs3d::GetDeflection(Macad::Occt::Bnd_Box^ theBndBox, double theDeviationCoefficient, double theMaximalChordialDeviation)
{
    double _result = ::Prs3d::GetDeflection(*(::Bnd_Box*)theBndBox->NativeInstance, theDeviationCoefficient, theMaximalChordialDeviation);
    return _result;
}

Macad::Occt::Graphic3d_ArrayOfPrimitives^ Macad::Occt::Prs3d::PrimitivesFromPolylines(Macad::Occt::Prs3d_NListOfSequenceOfPnt^ thePoints)
{
    Handle(::Graphic3d_ArrayOfPrimitives) _result = ::Prs3d::PrimitivesFromPolylines(*(::Prs3d_NListOfSequenceOfPnt*)thePoints->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfPrimitives::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d::AddPrimitivesGroup(Macad::Occt::Graphic3d_Structure^ thePrs, Macad::Occt::Prs3d_LineAspect^ theAspect, Macad::Occt::Prs3d_NListOfSequenceOfPnt^ thePolylines)
{
    ::Prs3d::AddPrimitivesGroup(Handle(::Graphic3d_Structure)(thePrs->NativeInstance), Handle(::Prs3d_LineAspect)(theAspect->NativeInstance), *(::Prs3d_NListOfSequenceOfPnt*)thePolylines->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  Prs3d_Arrow
//---------------------------------------------------------------------

Macad::Occt::Prs3d_Arrow::Prs3d_Arrow()
    : Macad::Occt::BaseClass<::Prs3d_Arrow>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Prs3d_Arrow();
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_Arrow::DrawShaded(Macad::Occt::Ax1 theAxis, double theTubeRadius, double theAxisLength, double theConeRadius, double theConeLength, int theNbFacettes)
{
    pin_ptr<Macad::Occt::Ax1> pp_theAxis = &theAxis;
    Handle(::Graphic3d_ArrayOfTriangles) _result = ::Prs3d_Arrow::DrawShaded(*(gp_Ax1*)pp_theAxis, theTubeRadius, theAxisLength, theConeRadius, theConeLength, theNbFacettes);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ArrayOfSegments^ Macad::Occt::Prs3d_Arrow::DrawSegments(Macad::Occt::Pnt theLocation, Macad::Occt::Dir theDir, double theAngle, double theLength, int theNbSegments)
{
    pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
    pin_ptr<Macad::Occt::Dir> pp_theDir = &theDir;
    Handle(::Graphic3d_ArrayOfSegments) _result = ::Prs3d_Arrow::DrawSegments(*(gp_Pnt*)pp_theLocation, *(gp_Dir*)pp_theDir, theAngle, theLength, theNbSegments);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfSegments::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_Arrow::Draw(Macad::Occt::Graphic3d_Group^ theGroup, Macad::Occt::Pnt theLocation, Macad::Occt::Dir theDirection, double theAngle, double theLength)
{
    pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
    pin_ptr<Macad::Occt::Dir> pp_theDirection = &theDirection;
    ::Prs3d_Arrow::Draw(Handle(::Graphic3d_Group)(theGroup->NativeInstance), *(gp_Pnt*)pp_theLocation, *(gp_Dir*)pp_theDirection, theAngle, theLength);
}



//---------------------------------------------------------------------
//  Class  Prs3d_IsoAspect
//---------------------------------------------------------------------

Macad::Occt::Prs3d_IsoAspect::Prs3d_IsoAspect(Macad::Occt::Quantity_Color^ theColor, Macad::Occt::Aspect_TypeOfLine theType, double theWidth, int theNumber)
    : Macad::Occt::Prs3d_LineAspect(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Prs3d_IsoAspect(*(::Quantity_Color*)theColor->NativeInstance, (::Aspect_TypeOfLine)theType, theWidth, theNumber);
}

void Macad::Occt::Prs3d_IsoAspect::SetNumber(int theNumber)
{
    ((::Prs3d_IsoAspect*)_NativeInstance)->SetNumber(theNumber);
}

int Macad::Occt::Prs3d_IsoAspect::Number()
{
    int _result = ((::Prs3d_IsoAspect*)_NativeInstance)->Number();
    return _result;
}

Macad::Occt::Prs3d_IsoAspect^ Macad::Occt::Prs3d_IsoAspect::CreateDowncasted(::Prs3d_IsoAspect* instance)
{
    return gcnew Macad::Occt::Prs3d_IsoAspect( instance );
}



//---------------------------------------------------------------------
//  Class  Prs3d_Root
//---------------------------------------------------------------------

Macad::Occt::Prs3d_Root::Prs3d_Root()
    : Macad::Occt::BaseClass<::Prs3d_Root>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Prs3d_Root();
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Prs3d_Root::CurrentGroup(Macad::Occt::Graphic3d_Structure^ thePrs3d)
{
    Handle(::Graphic3d_Group) _result = ::Prs3d_Root::CurrentGroup(Handle(::Graphic3d_Structure)(thePrs3d->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Prs3d_Root::NewGroup(Macad::Occt::Graphic3d_Structure^ thePrs3d)
{
    Handle(::Graphic3d_Group) _result = ::Prs3d_Root::NewGroup(Handle(::Graphic3d_Structure)(thePrs3d->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  Prs3d_BndBox
//---------------------------------------------------------------------

Macad::Occt::Prs3d_BndBox::Prs3d_BndBox()
    : Macad::Occt::Prs3d_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Prs3d_BndBox();
}

void Macad::Occt::Prs3d_BndBox::Add(Macad::Occt::Graphic3d_Structure^ thePresentation, Macad::Occt::Bnd_Box^ theBndBox, Macad::Occt::Prs3d_Drawer^ theDrawer)
{
    ::Prs3d_BndBox::Add(Handle(::Graphic3d_Structure)(thePresentation->NativeInstance), *(::Bnd_Box*)theBndBox->NativeInstance, Handle(::Prs3d_Drawer)(theDrawer->NativeInstance));
}

void Macad::Occt::Prs3d_BndBox::Add(Macad::Occt::Graphic3d_Structure^ thePresentation, Macad::Occt::Bnd_OBB^ theBndBox, Macad::Occt::Prs3d_Drawer^ theDrawer)
{
    ::Prs3d_BndBox::Add(Handle(::Graphic3d_Structure)(thePresentation->NativeInstance), *(::Bnd_OBB*)theBndBox->NativeInstance, Handle(::Prs3d_Drawer)(theDrawer->NativeInstance));
}

Macad::Occt::Graphic3d_ArrayOfSegments^ Macad::Occt::Prs3d_BndBox::FillSegments(Macad::Occt::Bnd_OBB^ theBox)
{
    Handle(::Graphic3d_ArrayOfSegments) _result = ::Prs3d_BndBox::FillSegments(*(::Bnd_OBB*)theBox->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfSegments::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ArrayOfSegments^ Macad::Occt::Prs3d_BndBox::FillSegments(Macad::Occt::Bnd_Box^ theBox)
{
    Handle(::Graphic3d_ArrayOfSegments) _result = ::Prs3d_BndBox::FillSegments(*(::Bnd_Box*)theBox->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfSegments::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_BndBox::FillSegments(Macad::Occt::Graphic3d_ArrayOfSegments^ theSegments, Macad::Occt::Bnd_OBB^ theBox)
{
    ::Prs3d_BndBox::FillSegments(Handle(::Graphic3d_ArrayOfSegments)(theSegments->NativeInstance), *(::Bnd_OBB*)theBox->NativeInstance);
}

void Macad::Occt::Prs3d_BndBox::FillSegments(Macad::Occt::Graphic3d_ArrayOfSegments^ theSegments, Macad::Occt::Bnd_Box^ theBox)
{
    ::Prs3d_BndBox::FillSegments(Handle(::Graphic3d_ArrayOfSegments)(theSegments->NativeInstance), *(::Bnd_Box*)theBox->NativeInstance);
}

void Macad::Occt::Prs3d_BndBox::fillSegments(Macad::Occt::Graphic3d_ArrayOfSegments^ theSegments, Macad::Occt::Pnt theBox)
{
    pin_ptr<Macad::Occt::Pnt> pp_theBox = &theBox;
    ::Prs3d_BndBox::fillSegments(Handle(::Graphic3d_ArrayOfSegments)(theSegments->NativeInstance), (gp_Pnt*)pp_theBox);
}



//---------------------------------------------------------------------
//  Class  Prs3d_InvalidAngle
//---------------------------------------------------------------------

Macad::Occt::Prs3d_InvalidAngle::Prs3d_InvalidAngle()
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Prs3d_InvalidAngle();
}

Macad::Occt::Prs3d_InvalidAngle::Prs3d_InvalidAngle(System::String^ theMessage)
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Prs3d_InvalidAngle(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Prs3d_InvalidAngle::Prs3d_InvalidAngle(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Prs3d_InvalidAngle(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Prs3d_InvalidAngle::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Prs3d_InvalidAngle::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Prs3d_InvalidAngle::Raise()
{
    ::Prs3d_InvalidAngle::Raise("");
}

Macad::Occt::Prs3d_InvalidAngle^ Macad::Occt::Prs3d_InvalidAngle::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Prs3d_InvalidAngle) _result = ::Prs3d_InvalidAngle::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_InvalidAngle::CreateDowncasted(_result.get());
}

Macad::Occt::Prs3d_InvalidAngle^ Macad::Occt::Prs3d_InvalidAngle::NewInstance()
{
    Handle(::Prs3d_InvalidAngle) _result = ::Prs3d_InvalidAngle::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_InvalidAngle::CreateDowncasted(_result.get());
}

Macad::Occt::Prs3d_InvalidAngle^ Macad::Occt::Prs3d_InvalidAngle::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Prs3d_InvalidAngle) _result = ::Prs3d_InvalidAngle::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_InvalidAngle::CreateDowncasted(_result.get());
}

Macad::Occt::Prs3d_InvalidAngle^ Macad::Occt::Prs3d_InvalidAngle::CreateDowncasted(::Prs3d_InvalidAngle* instance)
{
    return gcnew Macad::Occt::Prs3d_InvalidAngle( instance );
}



//---------------------------------------------------------------------
//  Class  Prs3d_PresentationShadow
//---------------------------------------------------------------------

Macad::Occt::Prs3d_PresentationShadow::Prs3d_PresentationShadow(Macad::Occt::Graphic3d_StructureManager^ theViewer, Macad::Occt::Graphic3d_Structure^ thePrs)
    : Macad::Occt::Graphic3d_Structure(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Prs3d_PresentationShadow(Handle(::Graphic3d_StructureManager)(theViewer->NativeInstance), Handle(::Graphic3d_Structure)(thePrs->NativeInstance));
}

int Macad::Occt::Prs3d_PresentationShadow::ParentId()
{
    int _result = ((::Prs3d_PresentationShadow*)_NativeInstance)->ParentId();
    return _result;
}

Macad::Occt::Graphic3d_ViewAffinity^ Macad::Occt::Prs3d_PresentationShadow::ParentAffinity()
{
    Handle(::Graphic3d_ViewAffinity) _result = ((::Prs3d_PresentationShadow*)_NativeInstance)->ParentAffinity();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ViewAffinity::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_PresentationShadow::CalculateBoundBox()
{
    ((::Prs3d_PresentationShadow*)_NativeInstance)->CalculateBoundBox();
}

void Macad::Occt::Prs3d_PresentationShadow::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_PresentationShadow*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Prs3d_PresentationShadow::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Prs3d_PresentationShadow*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Prs3d_PresentationShadow^ Macad::Occt::Prs3d_PresentationShadow::CreateDowncasted(::Prs3d_PresentationShadow* instance)
{
    return gcnew Macad::Occt::Prs3d_PresentationShadow( instance );
}



//---------------------------------------------------------------------
//  Class  Prs3d_Text
//---------------------------------------------------------------------

Macad::Occt::Prs3d_Text::Prs3d_Text()
    : Macad::Occt::BaseClass<::Prs3d_Text>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Prs3d_Text();
}

Macad::Occt::Graphic3d_Text^ Macad::Occt::Prs3d_Text::Draw(Macad::Occt::Graphic3d_Group^ theGroup, Macad::Occt::Prs3d_TextAspect^ theAspect, Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Pnt theAttachmentPoint)
{
    pin_ptr<Macad::Occt::Pnt> pp_theAttachmentPoint = &theAttachmentPoint;
    Handle(::Graphic3d_Text) _result = ::Prs3d_Text::Draw(Handle(::Graphic3d_Group)(theGroup->NativeInstance), Handle(::Prs3d_TextAspect)(theAspect->NativeInstance), *(::TCollection_ExtendedString*)theText->NativeInstance, *(gp_Pnt*)pp_theAttachmentPoint);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Text::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Text^ Macad::Occt::Prs3d_Text::Draw(Macad::Occt::Graphic3d_Group^ theGroup, Macad::Occt::Prs3d_TextAspect^ theAspect, Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation, bool theHasOwnAnchor)
{
    pin_ptr<Macad::Occt::Ax2> pp_theOrientation = &theOrientation;
    Handle(::Graphic3d_Text) _result = ::Prs3d_Text::Draw(Handle(::Graphic3d_Group)(theGroup->NativeInstance), Handle(::Prs3d_TextAspect)(theAspect->NativeInstance), *(::TCollection_ExtendedString*)theText->NativeInstance, *(gp_Ax2*)pp_theOrientation, theHasOwnAnchor);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Text::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Text^ Macad::Occt::Prs3d_Text::Draw(Macad::Occt::Graphic3d_Group^ theGroup, Macad::Occt::Prs3d_TextAspect^ theAspect, Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation)
{
    pin_ptr<Macad::Occt::Ax2> pp_theOrientation = &theOrientation;
    Handle(::Graphic3d_Text) _result = ::Prs3d_Text::Draw(Handle(::Graphic3d_Group)(theGroup->NativeInstance), Handle(::Prs3d_TextAspect)(theAspect->NativeInstance), *(::TCollection_ExtendedString*)theText->NativeInstance, *(gp_Ax2*)pp_theOrientation, true);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Text::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  Prs3d_ToolQuadric
//---------------------------------------------------------------------

Macad::Occt::Prs3d_ToolQuadric::Prs3d_ToolQuadric()
    : Macad::Occt::BaseClass<::Prs3d_ToolQuadric>(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

int Macad::Occt::Prs3d_ToolQuadric::TrianglesNb(int theSlicesNb, int theStacksNb)
{
    int _result = ::Prs3d_ToolQuadric::TrianglesNb(theSlicesNb, theStacksNb);
    return _result;
}

int Macad::Occt::Prs3d_ToolQuadric::VerticesNb(int theSlicesNb, int theStacksNb, bool theIsIndexed)
{
    int _result = ::Prs3d_ToolQuadric::VerticesNb(theSlicesNb, theStacksNb, theIsIndexed);
    return _result;
}

int Macad::Occt::Prs3d_ToolQuadric::VerticesNb(int theSlicesNb, int theStacksNb)
{
    int _result = ::Prs3d_ToolQuadric::VerticesNb(theSlicesNb, theStacksNb, true);
    return _result;
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_ToolQuadric::CreateTriangulation(Macad::Occt::Trsf theTrsf)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    Handle(::Graphic3d_ArrayOfTriangles) _result = ((::Prs3d_ToolQuadric*)_NativeInstance)->CreateTriangulation(*(gp_Trsf*)pp_theTrsf);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_ToolQuadric::FillArray(Macad::Occt::Graphic3d_ArrayOfTriangles^ theArray, Macad::Occt::Trsf theTrsf)
{
    Handle(::Graphic3d_ArrayOfTriangles) h_theArray = theArray->NativeInstance;
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    ((::Prs3d_ToolQuadric*)_NativeInstance)->FillArray(h_theArray, *(gp_Trsf*)pp_theTrsf);
    theArray->NativeInstance = h_theArray.get();
}

int Macad::Occt::Prs3d_ToolQuadric::TrianglesNb()
{
    int _result = ((::Prs3d_ToolQuadric*)_NativeInstance)->TrianglesNb();
    return _result;
}

int Macad::Occt::Prs3d_ToolQuadric::VerticesNb(bool theIsIndexed)
{
    int _result = ((::Prs3d_ToolQuadric*)_NativeInstance)->VerticesNb(theIsIndexed);
    return _result;
}

int Macad::Occt::Prs3d_ToolQuadric::VerticesNb()
{
    int _result = ((::Prs3d_ToolQuadric*)_NativeInstance)->VerticesNb(true);
    return _result;
}



//---------------------------------------------------------------------
//  Class  Prs3d_ToolCylinder
//---------------------------------------------------------------------

Macad::Occt::Prs3d_ToolCylinder::Prs3d_ToolCylinder(double theBottomRad, double theTopRad, double theHeight, int theNbSlices, int theNbStacks)
    : Macad::Occt::Prs3d_ToolQuadric(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Prs3d_ToolCylinder(theBottomRad, theTopRad, theHeight, theNbSlices, theNbStacks);
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_ToolCylinder::Create(double theBottomRad, double theTopRad, double theHeight, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    Handle(::Graphic3d_ArrayOfTriangles) _result = ::Prs3d_ToolCylinder::Create(theBottomRad, theTopRad, theHeight, theNbSlices, theNbStacks, *(gp_Trsf*)pp_theTrsf);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  Prs3d_ToolDisk
//---------------------------------------------------------------------

Macad::Occt::Prs3d_ToolDisk::Prs3d_ToolDisk(double theInnerRadius, double theOuterRadius, int theNbSlices, int theNbStacks)
    : Macad::Occt::Prs3d_ToolQuadric(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Prs3d_ToolDisk(theInnerRadius, theOuterRadius, theNbSlices, theNbStacks);
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_ToolDisk::Create(double theInnerRadius, double theOuterRadius, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    Handle(::Graphic3d_ArrayOfTriangles) _result = ::Prs3d_ToolDisk::Create(theInnerRadius, theOuterRadius, theNbSlices, theNbStacks, *(gp_Trsf*)pp_theTrsf);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted(_result.get());
}

void Macad::Occt::Prs3d_ToolDisk::SetAngleRange(double theStartAngle, double theEndAngle)
{
    ((::Prs3d_ToolDisk*)_NativeInstance)->SetAngleRange(theStartAngle, theEndAngle);
}



//---------------------------------------------------------------------
//  Class  Prs3d_ToolSector
//---------------------------------------------------------------------

Macad::Occt::Prs3d_ToolSector::Prs3d_ToolSector(double theRadius, int theNbSlices, int theNbStacks)
    : Macad::Occt::Prs3d_ToolQuadric(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Prs3d_ToolSector(theRadius, theNbSlices, theNbStacks);
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_ToolSector::Create(double theRadius, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    Handle(::Graphic3d_ArrayOfTriangles) _result = ::Prs3d_ToolSector::Create(theRadius, theNbSlices, theNbStacks, *(gp_Trsf*)pp_theTrsf);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  Prs3d_ToolSphere
//---------------------------------------------------------------------

Macad::Occt::Prs3d_ToolSphere::Prs3d_ToolSphere(double theRadius, int theNbSlices, int theNbStacks)
    : Macad::Occt::Prs3d_ToolQuadric(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Prs3d_ToolSphere(theRadius, theNbSlices, theNbStacks);
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_ToolSphere::Create(double theRadius, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    Handle(::Graphic3d_ArrayOfTriangles) _result = ::Prs3d_ToolSphere::Create(theRadius, theNbSlices, theNbStacks, *(gp_Trsf*)pp_theTrsf);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  Prs3d_ToolTorus
//---------------------------------------------------------------------

Macad::Occt::Prs3d_ToolTorus::Prs3d_ToolTorus(double theMajorRad, double theMinorRad, int theNbSlices, int theNbStacks)
    : Macad::Occt::Prs3d_ToolQuadric(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Prs3d_ToolTorus(theMajorRad, theMinorRad, theNbSlices, theNbStacks);
}

Macad::Occt::Prs3d_ToolTorus::Prs3d_ToolTorus(double theMajorRad, double theMinorRad, double theAngle, int theNbSlices, int theNbStacks)
    : Macad::Occt::Prs3d_ToolQuadric(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Prs3d_ToolTorus(theMajorRad, theMinorRad, theAngle, theNbSlices, theNbStacks);
}

Macad::Occt::Prs3d_ToolTorus::Prs3d_ToolTorus(double theMajorRad, double theMinorRad, double theAngle1, double theAngle2, int theNbSlices, int theNbStacks)
    : Macad::Occt::Prs3d_ToolQuadric(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Prs3d_ToolTorus(theMajorRad, theMinorRad, theAngle1, theAngle2, theNbSlices, theNbStacks);
}

Macad::Occt::Prs3d_ToolTorus::Prs3d_ToolTorus(double theMajorRad, double theMinorRad, double theAngle1, double theAngle2, double theAngle, int theNbSlices, int theNbStacks)
    : Macad::Occt::Prs3d_ToolQuadric(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Prs3d_ToolTorus(theMajorRad, theMinorRad, theAngle1, theAngle2, theAngle, theNbSlices, theNbStacks);
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_ToolTorus::Create(double theMajorRad, double theMinorRad, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    Handle(::Graphic3d_ArrayOfTriangles) _result = ::Prs3d_ToolTorus::Create(theMajorRad, theMinorRad, theNbSlices, theNbStacks, *(gp_Trsf*)pp_theTrsf);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_ToolTorus::Create(double theMajorRad, double theMinorRad, double theAngle, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    Handle(::Graphic3d_ArrayOfTriangles) _result = ::Prs3d_ToolTorus::Create(theMajorRad, theMinorRad, theAngle, theNbSlices, theNbStacks, *(gp_Trsf*)pp_theTrsf);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_ToolTorus::Create(double theMajorRad, double theMinorRad, double theAngle1, double theAngle2, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    Handle(::Graphic3d_ArrayOfTriangles) _result = ::Prs3d_ToolTorus::Create(theMajorRad, theMinorRad, theAngle1, theAngle2, theNbSlices, theNbStacks, *(gp_Trsf*)pp_theTrsf);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_ToolTorus::Create(double theMajorRad, double theMinorRad, double theAngle1, double theAngle2, double theAngle, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    Handle(::Graphic3d_ArrayOfTriangles) _result = ::Prs3d_ToolTorus::Create(theMajorRad, theMinorRad, theAngle1, theAngle2, theAngle, theNbSlices, theNbStacks, *(gp_Trsf*)pp_theTrsf);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted(_result.get());
}


