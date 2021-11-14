// Generated wrapper code for package Prs3d

#include "OcctPCH.h"
#include "Prs3d.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "Prs3d.h"
#include "Standard.h"
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
	: BaseClass<::Prs3d_NListOfSequenceOfPnt>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_NListOfSequenceOfPnt();
}

Macad::Occt::Prs3d_NListOfSequenceOfPnt::Prs3d_NListOfSequenceOfPnt(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Prs3d_NListOfSequenceOfPnt>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Prs3d_NListOfSequenceOfPnt(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Prs3d_NListOfSequenceOfPnt::Prs3d_NListOfSequenceOfPnt(Macad::Occt::Prs3d_NListOfSequenceOfPnt^ theOther)
	: BaseClass<::Prs3d_NListOfSequenceOfPnt>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_NListOfSequenceOfPnt(*(::Prs3d_NListOfSequenceOfPnt*)theOther->NativeInstance);
}

int Macad::Occt::Prs3d_NListOfSequenceOfPnt::Size()
{
	return ((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->Size();
}

Macad::Occt::Prs3d_NListOfSequenceOfPnt^ Macad::Occt::Prs3d_NListOfSequenceOfPnt::Assign(Macad::Occt::Prs3d_NListOfSequenceOfPnt^ theOther)
{
	::Prs3d_NListOfSequenceOfPnt* _result = new ::Prs3d_NListOfSequenceOfPnt();
	*_result = ((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->Assign(*(::Prs3d_NListOfSequenceOfPnt*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Prs3d_NListOfSequenceOfPnt(_result);
}

void Macad::Occt::Prs3d_NListOfSequenceOfPnt::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Prs3d_NListOfSequenceOfPnt::Clear()
{
	((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::Prs3d_NListOfSequenceOfPnt::First()
{
	Handle(::TColgp_HSequenceOfPnt) _result;
	_result = ((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::Prs3d_NListOfSequenceOfPnt::Last()
{
	Handle(::TColgp_HSequenceOfPnt) _result;
	_result = ((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::Prs3d_NListOfSequenceOfPnt::Append(Macad::Occt::TColgp_HSequenceOfPnt^ theItem)
{
	Handle(::TColgp_HSequenceOfPnt) h_theItem = theItem->NativeInstance;
	Handle(::TColgp_HSequenceOfPnt) _result;
	_result = ((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_NListOfSequenceOfPnt::Append(Macad::Occt::Prs3d_NListOfSequenceOfPnt^ theOther)
{
	((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->Append(*(::Prs3d_NListOfSequenceOfPnt*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::Prs3d_NListOfSequenceOfPnt::Prepend(Macad::Occt::TColgp_HSequenceOfPnt^ theItem)
{
	Handle(::TColgp_HSequenceOfPnt) h_theItem = theItem->NativeInstance;
	Handle(::TColgp_HSequenceOfPnt) _result;
	_result = ((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_NListOfSequenceOfPnt::Prepend(Macad::Occt::Prs3d_NListOfSequenceOfPnt^ theOther)
{
	((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->Prepend(*(::Prs3d_NListOfSequenceOfPnt*)theOther->NativeInstance);
}

void Macad::Occt::Prs3d_NListOfSequenceOfPnt::RemoveFirst()
{
	((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::Prs3d_NListOfSequenceOfPnt::Reverse()
{
	((::Prs3d_NListOfSequenceOfPnt*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  Prs3d_DimensionUnits
//---------------------------------------------------------------------

Macad::Occt::Prs3d_DimensionUnits::Prs3d_DimensionUnits()
	: BaseClass<::Prs3d_DimensionUnits>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_DimensionUnits();
}

Macad::Occt::Prs3d_DimensionUnits::Prs3d_DimensionUnits(Macad::Occt::Prs3d_DimensionUnits^ theUnits)
	: BaseClass<::Prs3d_DimensionUnits>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_DimensionUnits(*(::Prs3d_DimensionUnits*)theUnits->NativeInstance);
}

void Macad::Occt::Prs3d_DimensionUnits::SetAngleUnits(Macad::Occt::TCollection_AsciiString^ theUnits)
{
	((::Prs3d_DimensionUnits*)_NativeInstance)->SetAngleUnits(*(::TCollection_AsciiString*)theUnits->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Prs3d_DimensionUnits::GetAngleUnits()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Prs3d_DimensionUnits*)_NativeInstance)->GetAngleUnits();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Prs3d_DimensionUnits::SetLengthUnits(Macad::Occt::TCollection_AsciiString^ theUnits)
{
	((::Prs3d_DimensionUnits*)_NativeInstance)->SetLengthUnits(*(::TCollection_AsciiString*)theUnits->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Prs3d_DimensionUnits::GetLengthUnits()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Prs3d_DimensionUnits*)_NativeInstance)->GetLengthUnits();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}




//---------------------------------------------------------------------
//  Class  Prs3d_BasicAspect
//---------------------------------------------------------------------

Macad::Occt::Prs3d_BasicAspect::Prs3d_BasicAspect(Macad::Occt::Prs3d_BasicAspect^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Prs3d_BasicAspect::Prs3d_BasicAspect()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
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
	Handle(::Graphic3d_AspectLine3d) h_theAspect = theAspect->NativeInstance;
	NativeInstance = new ::Prs3d_LineAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

Macad::Occt::Prs3d_LineAspect::Prs3d_LineAspect(Macad::Occt::Prs3d_LineAspect^ parameter1)
	: Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Prs3d_LineAspect(*(::Prs3d_LineAspect*)parameter1->NativeInstance);
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
	Handle(::Graphic3d_AspectLine3d) _result;
	_result = ((::Prs3d_LineAspect*)_NativeInstance)->Aspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_AspectLine3d::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_LineAspect::SetAspect(Macad::Occt::Graphic3d_AspectLine3d^ theAspect)
{
	Handle(::Graphic3d_AspectLine3d) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_LineAspect*)_NativeInstance)->SetAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
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
	Handle(::Graphic3d_AspectText3d) h_theAspect = theAspect->NativeInstance;
	NativeInstance = new ::Prs3d_TextAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

Macad::Occt::Prs3d_TextAspect::Prs3d_TextAspect(Macad::Occt::Prs3d_TextAspect^ parameter1)
	: Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Prs3d_TextAspect(*(::Prs3d_TextAspect*)parameter1->NativeInstance);
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
	return ((::Prs3d_TextAspect*)_NativeInstance)->Height();
}

double Macad::Occt::Prs3d_TextAspect::Angle()
{
	return ((::Prs3d_TextAspect*)_NativeInstance)->Angle();
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
	return (Macad::Occt::Graphic3d_HorizontalTextAlignment)((::Prs3d_TextAspect*)_NativeInstance)->HorizontalJustification();
}

Macad::Occt::Graphic3d_VerticalTextAlignment Macad::Occt::Prs3d_TextAspect::VerticalJustification()
{
	return (Macad::Occt::Graphic3d_VerticalTextAlignment)((::Prs3d_TextAspect*)_NativeInstance)->VerticalJustification();
}

Macad::Occt::Graphic3d_TextPath Macad::Occt::Prs3d_TextAspect::Orientation()
{
	return (Macad::Occt::Graphic3d_TextPath)((::Prs3d_TextAspect*)_NativeInstance)->Orientation();
}

Macad::Occt::Graphic3d_AspectText3d^ Macad::Occt::Prs3d_TextAspect::Aspect()
{
	Handle(::Graphic3d_AspectText3d) _result;
	_result = ((::Prs3d_TextAspect*)_NativeInstance)->Aspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_AspectText3d::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_TextAspect::SetAspect(Macad::Occt::Graphic3d_AspectText3d^ theAspect)
{
	Handle(::Graphic3d_AspectText3d) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_TextAspect*)_NativeInstance)->SetAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
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
	Handle(::Graphic3d_AspectFillArea3d) h_theAspect = theAspect->NativeInstance;
	NativeInstance = new ::Prs3d_ShadingAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

Macad::Occt::Prs3d_ShadingAspect::Prs3d_ShadingAspect(Macad::Occt::Prs3d_ShadingAspect^ parameter1)
	: Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Prs3d_ShadingAspect(*(::Prs3d_ShadingAspect*)parameter1->NativeInstance);
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
	*_result =  (::Quantity_Color)((::Prs3d_ShadingAspect*)_NativeInstance)->Color((::Aspect_TypeOfFacingModel)aModel);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Prs3d_ShadingAspect::Color()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Prs3d_ShadingAspect*)_NativeInstance)->Color(Aspect_TOFM_FRONT_SIDE);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Graphic3d_MaterialAspect^ Macad::Occt::Prs3d_ShadingAspect::Material(Macad::Occt::Aspect_TypeOfFacingModel aModel)
{
	::Graphic3d_MaterialAspect* _result = new ::Graphic3d_MaterialAspect();
	*_result =  (::Graphic3d_MaterialAspect)((::Prs3d_ShadingAspect*)_NativeInstance)->Material((::Aspect_TypeOfFacingModel)aModel);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MaterialAspect(_result);
}

Macad::Occt::Graphic3d_MaterialAspect^ Macad::Occt::Prs3d_ShadingAspect::Material()
{
	::Graphic3d_MaterialAspect* _result = new ::Graphic3d_MaterialAspect();
	*_result =  (::Graphic3d_MaterialAspect)((::Prs3d_ShadingAspect*)_NativeInstance)->Material(Aspect_TOFM_FRONT_SIDE);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MaterialAspect(_result);
}

double Macad::Occt::Prs3d_ShadingAspect::Transparency(Macad::Occt::Aspect_TypeOfFacingModel aModel)
{
	return ((::Prs3d_ShadingAspect*)_NativeInstance)->Transparency((::Aspect_TypeOfFacingModel)aModel);
}

double Macad::Occt::Prs3d_ShadingAspect::Transparency()
{
	return ((::Prs3d_ShadingAspect*)_NativeInstance)->Transparency(Aspect_TOFM_FRONT_SIDE);
}

Macad::Occt::Graphic3d_AspectFillArea3d^ Macad::Occt::Prs3d_ShadingAspect::Aspect()
{
	Handle(::Graphic3d_AspectFillArea3d) _result;
	_result = ((::Prs3d_ShadingAspect*)_NativeInstance)->Aspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_AspectFillArea3d::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_ShadingAspect::SetAspect(Macad::Occt::Graphic3d_AspectFillArea3d^ theAspect)
{
	Handle(::Graphic3d_AspectFillArea3d) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_ShadingAspect*)_NativeInstance)->SetAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
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
	Handle(::TColStd_HArray1OfByte) h_theTexture = theTexture->NativeInstance;
	NativeInstance = new ::Prs3d_PointAspect(*(::Quantity_Color*)theColor->NativeInstance, theWidth, theHeight, h_theTexture);
	theTexture->NativeInstance = h_theTexture.get();
}

Macad::Occt::Prs3d_PointAspect::Prs3d_PointAspect(Macad::Occt::Graphic3d_AspectMarker3d^ theAspect)
	: Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
	Handle(::Graphic3d_AspectMarker3d) h_theAspect = theAspect->NativeInstance;
	NativeInstance = new ::Prs3d_PointAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

Macad::Occt::Prs3d_PointAspect::Prs3d_PointAspect(Macad::Occt::Prs3d_PointAspect^ parameter1)
	: Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Prs3d_PointAspect(*(::Prs3d_PointAspect*)parameter1->NativeInstance);
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
	Handle(::Graphic3d_AspectMarker3d) _result;
	_result = ((::Prs3d_PointAspect*)_NativeInstance)->Aspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_AspectMarker3d::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_PointAspect::SetAspect(Macad::Occt::Graphic3d_AspectMarker3d^ theAspect)
{
	Handle(::Graphic3d_AspectMarker3d) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_PointAspect*)_NativeInstance)->SetAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

void Macad::Occt::Prs3d_PointAspect::GetTextureSize(int% theWidth, int% theHeight)
{
	pin_ptr<int> pp_theWidth = &theWidth;
	pin_ptr<int> pp_theHeight = &theHeight;
	((::Prs3d_PointAspect*)_NativeInstance)->GetTextureSize(*(Standard_Integer*)pp_theWidth, *(Standard_Integer*)pp_theHeight);
}

Macad::Occt::Graphic3d_MarkerImage^ Macad::Occt::Prs3d_PointAspect::GetTexture()
{
	Handle(::Graphic3d_MarkerImage) _result;
	_result = ((::Prs3d_PointAspect*)_NativeInstance)->GetTexture();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_MarkerImage::CreateDowncasted( _result.get());
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

Macad::Occt::Prs3d_PlaneAspect::Prs3d_PlaneAspect(Macad::Occt::Prs3d_PlaneAspect^ parameter1)
	: Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Prs3d_PlaneAspect(*(::Prs3d_PlaneAspect*)parameter1->NativeInstance);
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_PlaneAspect::EdgesAspect()
{
	Handle(::Prs3d_LineAspect) _result;
	_result = ((::Prs3d_PlaneAspect*)_NativeInstance)->EdgesAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted( _result.get());
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_PlaneAspect::IsoAspect()
{
	Handle(::Prs3d_LineAspect) _result;
	_result = ((::Prs3d_PlaneAspect*)_NativeInstance)->IsoAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted( _result.get());
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_PlaneAspect::ArrowAspect()
{
	Handle(::Prs3d_LineAspect) _result;
	_result = ((::Prs3d_PlaneAspect*)_NativeInstance)->ArrowAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_PlaneAspect::SetArrowsLength(double theLength)
{
	((::Prs3d_PlaneAspect*)_NativeInstance)->SetArrowsLength(theLength);
}

double Macad::Occt::Prs3d_PlaneAspect::ArrowsLength()
{
	return ((::Prs3d_PlaneAspect*)_NativeInstance)->ArrowsLength();
}

void Macad::Occt::Prs3d_PlaneAspect::SetArrowsSize(double theSize)
{
	((::Prs3d_PlaneAspect*)_NativeInstance)->SetArrowsSize(theSize);
}

double Macad::Occt::Prs3d_PlaneAspect::ArrowsSize()
{
	return ((::Prs3d_PlaneAspect*)_NativeInstance)->ArrowsSize();
}

void Macad::Occt::Prs3d_PlaneAspect::SetArrowsAngle(double theAngle)
{
	((::Prs3d_PlaneAspect*)_NativeInstance)->SetArrowsAngle(theAngle);
}

double Macad::Occt::Prs3d_PlaneAspect::ArrowsAngle()
{
	return ((::Prs3d_PlaneAspect*)_NativeInstance)->ArrowsAngle();
}

void Macad::Occt::Prs3d_PlaneAspect::SetDisplayCenterArrow(bool theToDraw)
{
	((::Prs3d_PlaneAspect*)_NativeInstance)->SetDisplayCenterArrow(theToDraw);
}

bool Macad::Occt::Prs3d_PlaneAspect::DisplayCenterArrow()
{
	return ((::Prs3d_PlaneAspect*)_NativeInstance)->DisplayCenterArrow();
}

void Macad::Occt::Prs3d_PlaneAspect::SetDisplayEdgesArrows(bool theToDraw)
{
	((::Prs3d_PlaneAspect*)_NativeInstance)->SetDisplayEdgesArrows(theToDraw);
}

bool Macad::Occt::Prs3d_PlaneAspect::DisplayEdgesArrows()
{
	return ((::Prs3d_PlaneAspect*)_NativeInstance)->DisplayEdgesArrows();
}

void Macad::Occt::Prs3d_PlaneAspect::SetDisplayEdges(bool theToDraw)
{
	((::Prs3d_PlaneAspect*)_NativeInstance)->SetDisplayEdges(theToDraw);
}

bool Macad::Occt::Prs3d_PlaneAspect::DisplayEdges()
{
	return ((::Prs3d_PlaneAspect*)_NativeInstance)->DisplayEdges();
}

void Macad::Occt::Prs3d_PlaneAspect::SetDisplayIso(bool theToDraw)
{
	((::Prs3d_PlaneAspect*)_NativeInstance)->SetDisplayIso(theToDraw);
}

bool Macad::Occt::Prs3d_PlaneAspect::DisplayIso()
{
	return ((::Prs3d_PlaneAspect*)_NativeInstance)->DisplayIso();
}

void Macad::Occt::Prs3d_PlaneAspect::SetPlaneLength(double theLX, double theLY)
{
	((::Prs3d_PlaneAspect*)_NativeInstance)->SetPlaneLength(theLX, theLY);
}

double Macad::Occt::Prs3d_PlaneAspect::PlaneXLength()
{
	return ((::Prs3d_PlaneAspect*)_NativeInstance)->PlaneXLength();
}

double Macad::Occt::Prs3d_PlaneAspect::PlaneYLength()
{
	return ((::Prs3d_PlaneAspect*)_NativeInstance)->PlaneYLength();
}

void Macad::Occt::Prs3d_PlaneAspect::SetIsoDistance(double theL)
{
	((::Prs3d_PlaneAspect*)_NativeInstance)->SetIsoDistance(theL);
}

double Macad::Occt::Prs3d_PlaneAspect::IsoDistance()
{
	return ((::Prs3d_PlaneAspect*)_NativeInstance)->IsoDistance();
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
	Handle(::Graphic3d_AspectLine3d) h_theAspect = theAspect->NativeInstance;
	NativeInstance = new ::Prs3d_ArrowAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

Macad::Occt::Prs3d_ArrowAspect::Prs3d_ArrowAspect(Macad::Occt::Prs3d_ArrowAspect^ parameter1)
	: Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Prs3d_ArrowAspect(*(::Prs3d_ArrowAspect*)parameter1->NativeInstance);
}

void Macad::Occt::Prs3d_ArrowAspect::SetAngle(double anAngle)
{
	((::Prs3d_ArrowAspect*)_NativeInstance)->SetAngle(anAngle);
}

double Macad::Occt::Prs3d_ArrowAspect::Angle()
{
	return ((::Prs3d_ArrowAspect*)_NativeInstance)->Angle();
}

void Macad::Occt::Prs3d_ArrowAspect::SetLength(double theLength)
{
	((::Prs3d_ArrowAspect*)_NativeInstance)->SetLength(theLength);
}

double Macad::Occt::Prs3d_ArrowAspect::Length()
{
	return ((::Prs3d_ArrowAspect*)_NativeInstance)->Length();
}

void Macad::Occt::Prs3d_ArrowAspect::SetZoomable(bool theIsZoomable)
{
	((::Prs3d_ArrowAspect*)_NativeInstance)->SetZoomable(theIsZoomable);
}

bool Macad::Occt::Prs3d_ArrowAspect::IsZoomable()
{
	return ((::Prs3d_ArrowAspect*)_NativeInstance)->IsZoomable();
}

void Macad::Occt::Prs3d_ArrowAspect::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::Prs3d_ArrowAspect*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::Graphic3d_AspectLine3d^ Macad::Occt::Prs3d_ArrowAspect::Aspect()
{
	Handle(::Graphic3d_AspectLine3d) _result;
	_result = ((::Prs3d_ArrowAspect*)_NativeInstance)->Aspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_AspectLine3d::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_ArrowAspect::SetAspect(Macad::Occt::Graphic3d_AspectLine3d^ theAspect)
{
	Handle(::Graphic3d_AspectLine3d) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_ArrowAspect*)_NativeInstance)->SetAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
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

Macad::Occt::Prs3d_DatumAspect::Prs3d_DatumAspect(Macad::Occt::Prs3d_DatumAspect^ parameter1)
	: Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Prs3d_DatumAspect(*(::Prs3d_DatumAspect*)parameter1->NativeInstance);
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_DatumAspect::LineAspect(Macad::Occt::Prs3d_DatumParts thePart)
{
	Handle(::Prs3d_LineAspect) _result;
	_result = ((::Prs3d_DatumAspect*)_NativeInstance)->LineAspect((::Prs3d_DatumParts)thePart);
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted( _result.get());
}

Macad::Occt::Prs3d_ShadingAspect^ Macad::Occt::Prs3d_DatumAspect::ShadingAspect(Macad::Occt::Prs3d_DatumParts thePart)
{
	Handle(::Prs3d_ShadingAspect) _result;
	_result = ((::Prs3d_DatumAspect*)_NativeInstance)->ShadingAspect((::Prs3d_DatumParts)thePart);
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_ShadingAspect::CreateDowncasted( _result.get());
}

Macad::Occt::Prs3d_TextAspect^ Macad::Occt::Prs3d_DatumAspect::TextAspect(Macad::Occt::Prs3d_DatumParts thePart)
{
	Handle(::Prs3d_TextAspect) _result;
	_result = ((::Prs3d_DatumAspect*)_NativeInstance)->TextAspect((::Prs3d_DatumParts)thePart);
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_TextAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_DatumAspect::SetTextAspect(Macad::Occt::Prs3d_TextAspect^ theTextAspect)
{
	Handle(::Prs3d_TextAspect) h_theTextAspect = theTextAspect->NativeInstance;
	((::Prs3d_DatumAspect*)_NativeInstance)->SetTextAspect(h_theTextAspect);
	theTextAspect->NativeInstance = h_theTextAspect.get();
}

Macad::Occt::Prs3d_PointAspect^ Macad::Occt::Prs3d_DatumAspect::PointAspect()
{
	Handle(::Prs3d_PointAspect) _result;
	_result = ((::Prs3d_DatumAspect*)_NativeInstance)->PointAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_PointAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_DatumAspect::SetPointAspect(Macad::Occt::Prs3d_PointAspect^ theAspect)
{
	Handle(::Prs3d_PointAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_DatumAspect*)_NativeInstance)->SetPointAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

Macad::Occt::Prs3d_ArrowAspect^ Macad::Occt::Prs3d_DatumAspect::ArrowAspect()
{
	Handle(::Prs3d_ArrowAspect) _result;
	_result = ((::Prs3d_DatumAspect*)_NativeInstance)->ArrowAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_ArrowAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_DatumAspect::SetArrowAspect(Macad::Occt::Prs3d_ArrowAspect^ theAspect)
{
	Handle(::Prs3d_ArrowAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_DatumAspect*)_NativeInstance)->SetArrowAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

bool Macad::Occt::Prs3d_DatumAspect::DrawDatumPart(Macad::Occt::Prs3d_DatumParts thePart)
{
	return ((::Prs3d_DatumAspect*)_NativeInstance)->DrawDatumPart((::Prs3d_DatumParts)thePart);
}

void Macad::Occt::Prs3d_DatumAspect::SetDrawDatumAxes(Macad::Occt::Prs3d_DatumAxes theType)
{
	((::Prs3d_DatumAspect*)_NativeInstance)->SetDrawDatumAxes((::Prs3d_DatumAxes)theType);
}

Macad::Occt::Prs3d_DatumAxes Macad::Occt::Prs3d_DatumAspect::DatumAxes()
{
	return (Macad::Occt::Prs3d_DatumAxes)((::Prs3d_DatumAspect*)_NativeInstance)->DatumAxes();
}

double Macad::Occt::Prs3d_DatumAspect::Attribute(Macad::Occt::Prs3d_DatumAttribute theType)
{
	return ((::Prs3d_DatumAspect*)_NativeInstance)->Attribute((::Prs3d_DatumAttribute)theType);
}

void Macad::Occt::Prs3d_DatumAspect::SetAttribute(Macad::Occt::Prs3d_DatumAttribute theType, double theValue)
{
	((::Prs3d_DatumAspect*)_NativeInstance)->SetAttribute((::Prs3d_DatumAttribute)theType, theValue);
}

double Macad::Occt::Prs3d_DatumAspect::AxisLength(Macad::Occt::Prs3d_DatumParts thePart)
{
	return ((::Prs3d_DatumAspect*)_NativeInstance)->AxisLength((::Prs3d_DatumParts)thePart);
}

void Macad::Occt::Prs3d_DatumAspect::SetAxisLength(double theL1, double theL2, double theL3)
{
	((::Prs3d_DatumAspect*)_NativeInstance)->SetAxisLength(theL1, theL2, theL3);
}

bool Macad::Occt::Prs3d_DatumAspect::ToDrawLabels()
{
	return ((::Prs3d_DatumAspect*)_NativeInstance)->ToDrawLabels();
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
	return ((::Prs3d_DatumAspect*)_NativeInstance)->ToDrawArrows();
}

void Macad::Occt::Prs3d_DatumAspect::SetDrawArrows(bool theToDraw)
{
	((::Prs3d_DatumAspect*)_NativeInstance)->SetDrawArrows(theToDraw);
}

void Macad::Occt::Prs3d_DatumAspect::CopyAspectsFrom(Macad::Occt::Prs3d_DatumAspect^ theOther)
{
	Handle(::Prs3d_DatumAspect) h_theOther = theOther->NativeInstance;
	((::Prs3d_DatumAspect*)_NativeInstance)->CopyAspectsFrom(h_theOther);
	theOther->NativeInstance = h_theOther.get();
}

Macad::Occt::Prs3d_DatumParts Macad::Occt::Prs3d_DatumAspect::ArrowPartForAxis(Macad::Occt::Prs3d_DatumParts thePart)
{
	return (Macad::Occt::Prs3d_DatumParts)::Prs3d_DatumAspect::ArrowPartForAxis((::Prs3d_DatumParts)thePart);
}

Macad::Occt::Prs3d_TextAspect^ Macad::Occt::Prs3d_DatumAspect::TextAspect()
{
	Handle(::Prs3d_TextAspect) _result;
	_result = ((::Prs3d_DatumAspect*)_NativeInstance)->TextAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_TextAspect::CreateDowncasted( _result.get());
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

Macad::Occt::Prs3d_DimensionAspect::Prs3d_DimensionAspect(Macad::Occt::Prs3d_DimensionAspect^ parameter1)
	: Macad::Occt::Prs3d_BasicAspect(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Prs3d_DimensionAspect(*(::Prs3d_DimensionAspect*)parameter1->NativeInstance);
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_DimensionAspect::LineAspect()
{
	Handle(::Prs3d_LineAspect) _result;
	_result = ((::Prs3d_DimensionAspect*)_NativeInstance)->LineAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_DimensionAspect::SetLineAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
	Handle(::Prs3d_LineAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_DimensionAspect*)_NativeInstance)->SetLineAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

Macad::Occt::Prs3d_TextAspect^ Macad::Occt::Prs3d_DimensionAspect::TextAspect()
{
	Handle(::Prs3d_TextAspect) _result;
	_result = ((::Prs3d_DimensionAspect*)_NativeInstance)->TextAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_TextAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_DimensionAspect::SetTextAspect(Macad::Occt::Prs3d_TextAspect^ theAspect)
{
	Handle(::Prs3d_TextAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_DimensionAspect*)_NativeInstance)->SetTextAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

bool Macad::Occt::Prs3d_DimensionAspect::IsText3d()
{
	return ((::Prs3d_DimensionAspect*)_NativeInstance)->IsText3d();
}

void Macad::Occt::Prs3d_DimensionAspect::MakeText3d(bool isText3d)
{
	((::Prs3d_DimensionAspect*)_NativeInstance)->MakeText3d(isText3d);
}

bool Macad::Occt::Prs3d_DimensionAspect::IsTextShaded()
{
	return ((::Prs3d_DimensionAspect*)_NativeInstance)->IsTextShaded();
}

void Macad::Occt::Prs3d_DimensionAspect::MakeTextShaded(bool theIsTextShaded)
{
	((::Prs3d_DimensionAspect*)_NativeInstance)->MakeTextShaded(theIsTextShaded);
}

bool Macad::Occt::Prs3d_DimensionAspect::IsArrows3d()
{
	return ((::Prs3d_DimensionAspect*)_NativeInstance)->IsArrows3d();
}

void Macad::Occt::Prs3d_DimensionAspect::MakeArrows3d(bool theIsArrows3d)
{
	((::Prs3d_DimensionAspect*)_NativeInstance)->MakeArrows3d(theIsArrows3d);
}

bool Macad::Occt::Prs3d_DimensionAspect::IsUnitsDisplayed()
{
	return ((::Prs3d_DimensionAspect*)_NativeInstance)->IsUnitsDisplayed();
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
	return (Macad::Occt::Prs3d_DimensionArrowOrientation)((::Prs3d_DimensionAspect*)_NativeInstance)->ArrowOrientation();
}

void Macad::Occt::Prs3d_DimensionAspect::SetTextVerticalPosition(Macad::Occt::Prs3d_DimensionTextVerticalPosition thePosition)
{
	((::Prs3d_DimensionAspect*)_NativeInstance)->SetTextVerticalPosition((::Prs3d_DimensionTextVerticalPosition)thePosition);
}

Macad::Occt::Prs3d_DimensionTextVerticalPosition Macad::Occt::Prs3d_DimensionAspect::TextVerticalPosition()
{
	return (Macad::Occt::Prs3d_DimensionTextVerticalPosition)((::Prs3d_DimensionAspect*)_NativeInstance)->TextVerticalPosition();
}

void Macad::Occt::Prs3d_DimensionAspect::SetTextHorizontalPosition(Macad::Occt::Prs3d_DimensionTextHorizontalPosition thePosition)
{
	((::Prs3d_DimensionAspect*)_NativeInstance)->SetTextHorizontalPosition((::Prs3d_DimensionTextHorizontalPosition)thePosition);
}

Macad::Occt::Prs3d_DimensionTextHorizontalPosition Macad::Occt::Prs3d_DimensionAspect::TextHorizontalPosition()
{
	return (Macad::Occt::Prs3d_DimensionTextHorizontalPosition)((::Prs3d_DimensionAspect*)_NativeInstance)->TextHorizontalPosition();
}

Macad::Occt::Prs3d_ArrowAspect^ Macad::Occt::Prs3d_DimensionAspect::ArrowAspect()
{
	Handle(::Prs3d_ArrowAspect) _result;
	_result = ((::Prs3d_DimensionAspect*)_NativeInstance)->ArrowAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_ArrowAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_DimensionAspect::SetArrowAspect(Macad::Occt::Prs3d_ArrowAspect^ theAspect)
{
	Handle(::Prs3d_ArrowAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_DimensionAspect*)_NativeInstance)->SetArrowAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
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
	return ((::Prs3d_DimensionAspect*)_NativeInstance)->ExtensionSize();
}

void Macad::Occt::Prs3d_DimensionAspect::SetArrowTailSize(double theSize)
{
	((::Prs3d_DimensionAspect*)_NativeInstance)->SetArrowTailSize(theSize);
}

double Macad::Occt::Prs3d_DimensionAspect::ArrowTailSize()
{
	return ((::Prs3d_DimensionAspect*)_NativeInstance)->ArrowTailSize();
}

void Macad::Occt::Prs3d_DimensionAspect::SetValueStringFormat(Macad::Occt::TCollection_AsciiString^ theFormat)
{
	((::Prs3d_DimensionAspect*)_NativeInstance)->SetValueStringFormat(*(::TCollection_AsciiString*)theFormat->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Prs3d_DimensionAspect::ValueStringFormat()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Prs3d_DimensionAspect*)_NativeInstance)->ValueStringFormat();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
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

Macad::Occt::Prs3d_Drawer::Prs3d_Drawer(Macad::Occt::Prs3d_Drawer^ parameter1)
	: Macad::Occt::Graphic3d_PresentationAttributes(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Prs3d_Drawer(*(::Prs3d_Drawer*)parameter1->NativeInstance);
}

void Macad::Occt::Prs3d_Drawer::SetTypeOfDeflection(Macad::Occt::Aspect_TypeOfDeflection theTypeOfDeflection)
{
	((::Prs3d_Drawer*)_NativeInstance)->SetTypeOfDeflection((::Aspect_TypeOfDeflection)theTypeOfDeflection);
}

Macad::Occt::Aspect_TypeOfDeflection Macad::Occt::Prs3d_Drawer::TypeOfDeflection()
{
	return (Macad::Occt::Aspect_TypeOfDeflection)((::Prs3d_Drawer*)_NativeInstance)->TypeOfDeflection();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnTypeOfDeflection()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnTypeOfDeflection();
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
	return ((::Prs3d_Drawer*)_NativeInstance)->MaximalChordialDeviation();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnMaximalChordialDeviation()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnMaximalChordialDeviation();
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
	return (Macad::Occt::Prs3d_TypeOfHLR)((::Prs3d_Drawer*)_NativeInstance)->TypeOfHLR();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnTypeOfHLR()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnTypeOfHLR();
}

void Macad::Occt::Prs3d_Drawer::SetMaximalParameterValue(double theValue)
{
	((::Prs3d_Drawer*)_NativeInstance)->SetMaximalParameterValue(theValue);
}

double Macad::Occt::Prs3d_Drawer::MaximalParameterValue()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->MaximalParameterValue();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnMaximalParameterValue()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnMaximalParameterValue();
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
	return ((::Prs3d_Drawer*)_NativeInstance)->IsoOnPlane();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnIsoOnPlane()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnIsoOnPlane();
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnIsoOnPlane()
{
	((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnIsoOnPlane();
}

bool Macad::Occt::Prs3d_Drawer::IsoOnTriangulation()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->IsoOnTriangulation();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnIsoOnTriangulation()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnIsoOnTriangulation();
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
	return ((::Prs3d_Drawer*)_NativeInstance)->Discretisation();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnDiscretisation()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDiscretisation();
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
	return ((::Prs3d_Drawer*)_NativeInstance)->DeviationCoefficient();
}

void Macad::Occt::Prs3d_Drawer::SetDeviationCoefficient()
{
	((::Prs3d_Drawer*)_NativeInstance)->SetDeviationCoefficient();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnDeviationCoefficient()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDeviationCoefficient();
}

double Macad::Occt::Prs3d_Drawer::PreviousDeviationCoefficient()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->PreviousDeviationCoefficient();
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
	return ((::Prs3d_Drawer*)_NativeInstance)->DeviationAngle();
}

void Macad::Occt::Prs3d_Drawer::SetDeviationAngle()
{
	((::Prs3d_Drawer*)_NativeInstance)->SetDeviationAngle();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnDeviationAngle()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDeviationAngle();
}

double Macad::Occt::Prs3d_Drawer::PreviousDeviationAngle()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->PreviousDeviationAngle();
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
	return ((::Prs3d_Drawer*)_NativeInstance)->IsAutoTriangulation();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnIsAutoTriangulation()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnIsAutoTriangulation();
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnIsAutoTriangulation()
{
	((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnIsAutoTriangulation();
}

Macad::Occt::Prs3d_IsoAspect^ Macad::Occt::Prs3d_Drawer::UIsoAspect()
{
	Handle(::Prs3d_IsoAspect) _result;
	_result = ((::Prs3d_Drawer*)_NativeInstance)->UIsoAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_IsoAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_Drawer::SetUIsoAspect(Macad::Occt::Prs3d_IsoAspect^ theAspect)
{
	Handle(::Prs3d_IsoAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->SetUIsoAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnUIsoAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnUIsoAspect();
}

Macad::Occt::Prs3d_IsoAspect^ Macad::Occt::Prs3d_Drawer::VIsoAspect()
{
	Handle(::Prs3d_IsoAspect) _result;
	_result = ((::Prs3d_Drawer*)_NativeInstance)->VIsoAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_IsoAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_Drawer::SetVIsoAspect(Macad::Occt::Prs3d_IsoAspect^ theAspect)
{
	Handle(::Prs3d_IsoAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->SetVIsoAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnVIsoAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnVIsoAspect();
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_Drawer::WireAspect()
{
	Handle(::Prs3d_LineAspect) _result;
	_result = ((::Prs3d_Drawer*)_NativeInstance)->WireAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_Drawer::SetWireAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
	Handle(::Prs3d_LineAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->SetWireAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnWireAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnWireAspect();
}

void Macad::Occt::Prs3d_Drawer::SetWireDraw(bool theIsEnabled)
{
	((::Prs3d_Drawer*)_NativeInstance)->SetWireDraw(theIsEnabled);
}

bool Macad::Occt::Prs3d_Drawer::WireDraw()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->WireDraw();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnWireDraw()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnWireDraw();
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnWireDraw()
{
	((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnWireDraw();
}

Macad::Occt::Prs3d_PointAspect^ Macad::Occt::Prs3d_Drawer::PointAspect()
{
	Handle(::Prs3d_PointAspect) _result;
	_result = ((::Prs3d_Drawer*)_NativeInstance)->PointAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_PointAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_Drawer::SetPointAspect(Macad::Occt::Prs3d_PointAspect^ theAspect)
{
	Handle(::Prs3d_PointAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->SetPointAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnPointAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnPointAspect();
}

bool Macad::Occt::Prs3d_Drawer::SetupOwnPointAspect(Macad::Occt::Prs3d_Drawer^ theDefaults)
{
	Handle(::Prs3d_Drawer) h_theDefaults = theDefaults->NativeInstance;
	return ((::Prs3d_Drawer*)_NativeInstance)->SetupOwnPointAspect(h_theDefaults);
	theDefaults->NativeInstance = h_theDefaults.get();
}

bool Macad::Occt::Prs3d_Drawer::SetupOwnPointAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->SetupOwnPointAspect(::opencascade::handle<::Prs3d_Drawer>());
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_Drawer::LineAspect()
{
	Handle(::Prs3d_LineAspect) _result;
	_result = ((::Prs3d_Drawer*)_NativeInstance)->LineAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_Drawer::SetLineAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
	Handle(::Prs3d_LineAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->SetLineAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnLineAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnLineAspect();
}

bool Macad::Occt::Prs3d_Drawer::SetOwnLineAspects(Macad::Occt::Prs3d_Drawer^ theDefaults)
{
	Handle(::Prs3d_Drawer) h_theDefaults = theDefaults->NativeInstance;
	return ((::Prs3d_Drawer*)_NativeInstance)->SetOwnLineAspects(h_theDefaults);
	theDefaults->NativeInstance = h_theDefaults.get();
}

bool Macad::Occt::Prs3d_Drawer::SetOwnLineAspects()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->SetOwnLineAspects(::opencascade::handle<::Prs3d_Drawer>());
}

bool Macad::Occt::Prs3d_Drawer::SetOwnDatumAspects(Macad::Occt::Prs3d_Drawer^ theDefaults)
{
	Handle(::Prs3d_Drawer) h_theDefaults = theDefaults->NativeInstance;
	return ((::Prs3d_Drawer*)_NativeInstance)->SetOwnDatumAspects(h_theDefaults);
	theDefaults->NativeInstance = h_theDefaults.get();
}

bool Macad::Occt::Prs3d_Drawer::SetOwnDatumAspects()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->SetOwnDatumAspects(::opencascade::handle<::Prs3d_Drawer>());
}

Macad::Occt::Prs3d_TextAspect^ Macad::Occt::Prs3d_Drawer::TextAspect()
{
	Handle(::Prs3d_TextAspect) _result;
	_result = ((::Prs3d_Drawer*)_NativeInstance)->TextAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_TextAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_Drawer::SetTextAspect(Macad::Occt::Prs3d_TextAspect^ theAspect)
{
	Handle(::Prs3d_TextAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->SetTextAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnTextAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnTextAspect();
}

Macad::Occt::Prs3d_ShadingAspect^ Macad::Occt::Prs3d_Drawer::ShadingAspect()
{
	Handle(::Prs3d_ShadingAspect) _result;
	_result = ((::Prs3d_Drawer*)_NativeInstance)->ShadingAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_ShadingAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_Drawer::SetShadingAspect(Macad::Occt::Prs3d_ShadingAspect^ theAspect)
{
	Handle(::Prs3d_ShadingAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->SetShadingAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnShadingAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnShadingAspect();
}

bool Macad::Occt::Prs3d_Drawer::SetupOwnShadingAspect(Macad::Occt::Prs3d_Drawer^ theDefaults)
{
	Handle(::Prs3d_Drawer) h_theDefaults = theDefaults->NativeInstance;
	return ((::Prs3d_Drawer*)_NativeInstance)->SetupOwnShadingAspect(h_theDefaults);
	theDefaults->NativeInstance = h_theDefaults.get();
}

bool Macad::Occt::Prs3d_Drawer::SetupOwnShadingAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->SetupOwnShadingAspect(::opencascade::handle<::Prs3d_Drawer>());
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_Drawer::SeenLineAspect()
{
	Handle(::Prs3d_LineAspect) _result;
	_result = ((::Prs3d_Drawer*)_NativeInstance)->SeenLineAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_Drawer::SetSeenLineAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
	Handle(::Prs3d_LineAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->SetSeenLineAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnSeenLineAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnSeenLineAspect();
}

Macad::Occt::Prs3d_PlaneAspect^ Macad::Occt::Prs3d_Drawer::PlaneAspect()
{
	Handle(::Prs3d_PlaneAspect) _result;
	_result = ((::Prs3d_Drawer*)_NativeInstance)->PlaneAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_PlaneAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_Drawer::SetPlaneAspect(Macad::Occt::Prs3d_PlaneAspect^ theAspect)
{
	Handle(::Prs3d_PlaneAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->SetPlaneAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnPlaneAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnPlaneAspect();
}

Macad::Occt::Prs3d_ArrowAspect^ Macad::Occt::Prs3d_Drawer::ArrowAspect()
{
	Handle(::Prs3d_ArrowAspect) _result;
	_result = ((::Prs3d_Drawer*)_NativeInstance)->ArrowAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_ArrowAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_Drawer::SetArrowAspect(Macad::Occt::Prs3d_ArrowAspect^ theAspect)
{
	Handle(::Prs3d_ArrowAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->SetArrowAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnArrowAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnArrowAspect();
}

void Macad::Occt::Prs3d_Drawer::SetLineArrowDraw(bool theIsEnabled)
{
	((::Prs3d_Drawer*)_NativeInstance)->SetLineArrowDraw(theIsEnabled);
}

bool Macad::Occt::Prs3d_Drawer::LineArrowDraw()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->LineArrowDraw();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnLineArrowDraw()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnLineArrowDraw();
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnLineArrowDraw()
{
	((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnLineArrowDraw();
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_Drawer::HiddenLineAspect()
{
	Handle(::Prs3d_LineAspect) _result;
	_result = ((::Prs3d_Drawer*)_NativeInstance)->HiddenLineAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_Drawer::SetHiddenLineAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
	Handle(::Prs3d_LineAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->SetHiddenLineAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnHiddenLineAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnHiddenLineAspect();
}

bool Macad::Occt::Prs3d_Drawer::DrawHiddenLine()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->DrawHiddenLine();
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
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDrawHiddenLine();
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnDrawHiddenLine()
{
	((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnDrawHiddenLine();
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_Drawer::VectorAspect()
{
	Handle(::Prs3d_LineAspect) _result;
	_result = ((::Prs3d_Drawer*)_NativeInstance)->VectorAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_Drawer::SetVectorAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
	Handle(::Prs3d_LineAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->SetVectorAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnVectorAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnVectorAspect();
}

void Macad::Occt::Prs3d_Drawer::SetVertexDrawMode(Macad::Occt::Prs3d_VertexDrawMode theMode)
{
	((::Prs3d_Drawer*)_NativeInstance)->SetVertexDrawMode((::Prs3d_VertexDrawMode)theMode);
}

Macad::Occt::Prs3d_VertexDrawMode Macad::Occt::Prs3d_Drawer::VertexDrawMode()
{
	return (Macad::Occt::Prs3d_VertexDrawMode)((::Prs3d_Drawer*)_NativeInstance)->VertexDrawMode();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnVertexDrawMode()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnVertexDrawMode();
}

Macad::Occt::Prs3d_DatumAspect^ Macad::Occt::Prs3d_Drawer::DatumAspect()
{
	Handle(::Prs3d_DatumAspect) _result;
	_result = ((::Prs3d_Drawer*)_NativeInstance)->DatumAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_DatumAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_Drawer::SetDatumAspect(Macad::Occt::Prs3d_DatumAspect^ theAspect)
{
	Handle(::Prs3d_DatumAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->SetDatumAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnDatumAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDatumAspect();
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_Drawer::SectionAspect()
{
	Handle(::Prs3d_LineAspect) _result;
	_result = ((::Prs3d_Drawer*)_NativeInstance)->SectionAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_Drawer::SetSectionAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
	Handle(::Prs3d_LineAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->SetSectionAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnSectionAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnSectionAspect();
}

void Macad::Occt::Prs3d_Drawer::SetFreeBoundaryAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
	Handle(::Prs3d_LineAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->SetFreeBoundaryAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_Drawer::FreeBoundaryAspect()
{
	Handle(::Prs3d_LineAspect) _result;
	_result = ((::Prs3d_Drawer*)_NativeInstance)->FreeBoundaryAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted( _result.get());
}

bool Macad::Occt::Prs3d_Drawer::HasOwnFreeBoundaryAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnFreeBoundaryAspect();
}

void Macad::Occt::Prs3d_Drawer::SetFreeBoundaryDraw(bool theIsEnabled)
{
	((::Prs3d_Drawer*)_NativeInstance)->SetFreeBoundaryDraw(theIsEnabled);
}

bool Macad::Occt::Prs3d_Drawer::FreeBoundaryDraw()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->FreeBoundaryDraw();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnFreeBoundaryDraw()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnFreeBoundaryDraw();
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnFreeBoundaryDraw()
{
	((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnFreeBoundaryDraw();
}

void Macad::Occt::Prs3d_Drawer::SetUnFreeBoundaryAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
	Handle(::Prs3d_LineAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->SetUnFreeBoundaryAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_Drawer::UnFreeBoundaryAspect()
{
	Handle(::Prs3d_LineAspect) _result;
	_result = ((::Prs3d_Drawer*)_NativeInstance)->UnFreeBoundaryAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted( _result.get());
}

bool Macad::Occt::Prs3d_Drawer::HasOwnUnFreeBoundaryAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnUnFreeBoundaryAspect();
}

void Macad::Occt::Prs3d_Drawer::SetUnFreeBoundaryDraw(bool theIsEnabled)
{
	((::Prs3d_Drawer*)_NativeInstance)->SetUnFreeBoundaryDraw(theIsEnabled);
}

bool Macad::Occt::Prs3d_Drawer::UnFreeBoundaryDraw()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->UnFreeBoundaryDraw();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnUnFreeBoundaryDraw()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnUnFreeBoundaryDraw();
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnUnFreeBoundaryDraw()
{
	((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnUnFreeBoundaryDraw();
}

void Macad::Occt::Prs3d_Drawer::SetFaceBoundaryAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
	Handle(::Prs3d_LineAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->SetFaceBoundaryAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::Prs3d_Drawer::FaceBoundaryAspect()
{
	Handle(::Prs3d_LineAspect) _result;
	_result = ((::Prs3d_Drawer*)_NativeInstance)->FaceBoundaryAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted( _result.get());
}

bool Macad::Occt::Prs3d_Drawer::HasOwnFaceBoundaryAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnFaceBoundaryAspect();
}

bool Macad::Occt::Prs3d_Drawer::SetupOwnFaceBoundaryAspect(Macad::Occt::Prs3d_Drawer^ theDefaults)
{
	Handle(::Prs3d_Drawer) h_theDefaults = theDefaults->NativeInstance;
	return ((::Prs3d_Drawer*)_NativeInstance)->SetupOwnFaceBoundaryAspect(h_theDefaults);
	theDefaults->NativeInstance = h_theDefaults.get();
}

bool Macad::Occt::Prs3d_Drawer::SetupOwnFaceBoundaryAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->SetupOwnFaceBoundaryAspect(::opencascade::handle<::Prs3d_Drawer>());
}

void Macad::Occt::Prs3d_Drawer::SetFaceBoundaryDraw(bool theIsEnabled)
{
	((::Prs3d_Drawer*)_NativeInstance)->SetFaceBoundaryDraw(theIsEnabled);
}

bool Macad::Occt::Prs3d_Drawer::FaceBoundaryDraw()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->FaceBoundaryDraw();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnFaceBoundaryDraw()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnFaceBoundaryDraw();
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnFaceBoundaryDraw()
{
	((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnFaceBoundaryDraw();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnFaceBoundaryUpperContinuity()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnFaceBoundaryUpperContinuity();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Prs3d_Drawer::FaceBoundaryUpperContinuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::Prs3d_Drawer*)_NativeInstance)->FaceBoundaryUpperContinuity();
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
	Handle(::Prs3d_DimensionAspect) _result;
	_result = ((::Prs3d_Drawer*)_NativeInstance)->DimensionAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_DimensionAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_Drawer::SetDimensionAspect(Macad::Occt::Prs3d_DimensionAspect^ theAspect)
{
	Handle(::Prs3d_DimensionAspect) h_theAspect = theAspect->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->SetDimensionAspect(h_theAspect);
	theAspect->NativeInstance = h_theAspect.get();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnDimensionAspect()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDimensionAspect();
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
	*_result =  (::TCollection_AsciiString)((::Prs3d_Drawer*)_NativeInstance)->DimLengthModelUnits();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Prs3d_Drawer::DimAngleModelUnits()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Prs3d_Drawer*)_NativeInstance)->DimAngleModelUnits();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

bool Macad::Occt::Prs3d_Drawer::HasOwnDimLengthModelUnits()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDimLengthModelUnits();
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnDimLengthModelUnits()
{
	((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnDimLengthModelUnits();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnDimAngleModelUnits()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDimAngleModelUnits();
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
	*_result =  (::TCollection_AsciiString)((::Prs3d_Drawer*)_NativeInstance)->DimLengthDisplayUnits();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Prs3d_Drawer::DimAngleDisplayUnits()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Prs3d_Drawer*)_NativeInstance)->DimAngleDisplayUnits();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

bool Macad::Occt::Prs3d_Drawer::HasOwnDimLengthDisplayUnits()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDimLengthDisplayUnits();
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnDimLengthDisplayUnits()
{
	((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnDimLengthDisplayUnits();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnDimAngleDisplayUnits()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnDimAngleDisplayUnits();
}

void Macad::Occt::Prs3d_Drawer::UnsetOwnDimAngleDisplayUnits()
{
	((::Prs3d_Drawer*)_NativeInstance)->UnsetOwnDimAngleDisplayUnits();
}

Macad::Occt::Prs3d_Drawer^ Macad::Occt::Prs3d_Drawer::Link()
{
	Handle(::Prs3d_Drawer) _result;
	_result = ((::Prs3d_Drawer*)_NativeInstance)->Link();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_Drawer::CreateDowncasted( _result.get());
}

bool Macad::Occt::Prs3d_Drawer::HasLink()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasLink();
}

void Macad::Occt::Prs3d_Drawer::Link(Macad::Occt::Prs3d_Drawer^ theDrawer)
{
	Handle(::Prs3d_Drawer) h_theDrawer = theDrawer->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->Link(h_theDrawer);
	theDrawer->NativeInstance = h_theDrawer.get();
}

void Macad::Occt::Prs3d_Drawer::SetLink(Macad::Occt::Prs3d_Drawer^ theDrawer)
{
	Handle(::Prs3d_Drawer) h_theDrawer = theDrawer->NativeInstance;
	((::Prs3d_Drawer*)_NativeInstance)->SetLink(h_theDrawer);
	theDrawer->NativeInstance = h_theDrawer.get();
}

void Macad::Occt::Prs3d_Drawer::ClearLocalAttributes()
{
	((::Prs3d_Drawer*)_NativeInstance)->ClearLocalAttributes();
}

bool Macad::Occt::Prs3d_Drawer::SetShadingModel(Macad::Occt::Graphic3d_TypeOfShadingModel theModel, bool theToOverrideDefaults)
{
	return ((::Prs3d_Drawer*)_NativeInstance)->SetShadingModel((::Graphic3d_TypeOfShadingModel)theModel, theToOverrideDefaults);
}

bool Macad::Occt::Prs3d_Drawer::SetShadingModel(Macad::Occt::Graphic3d_TypeOfShadingModel theModel)
{
	return ((::Prs3d_Drawer*)_NativeInstance)->SetShadingModel((::Graphic3d_TypeOfShadingModel)theModel, false);
}

void Macad::Occt::Prs3d_Drawer::SetHLRAngle(double theAngle)
{
	((::Prs3d_Drawer*)_NativeInstance)->SetHLRAngle(theAngle);
}

double Macad::Occt::Prs3d_Drawer::HLRAngle()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HLRAngle();
}

void Macad::Occt::Prs3d_Drawer::SetHLRAngle()
{
	((::Prs3d_Drawer*)_NativeInstance)->SetHLRAngle();
}

bool Macad::Occt::Prs3d_Drawer::HasOwnHLRDeviationAngle()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->HasOwnHLRDeviationAngle();
}

double Macad::Occt::Prs3d_Drawer::PreviousHLRDeviationAngle()
{
	return ((::Prs3d_Drawer*)_NativeInstance)->PreviousHLRDeviationAngle();
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
	: BaseClass<::Prs3d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d();
}

Macad::Occt::Prs3d::Prs3d(Macad::Occt::Prs3d^ parameter1)
	: BaseClass<::Prs3d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d(*(::Prs3d*)parameter1->NativeInstance);
}

bool Macad::Occt::Prs3d::MatchSegment(double X, double Y, double Z, double aDistance, Macad::Occt::Pnt p1, Macad::Occt::Pnt p2, double% dist)
{
	pin_ptr<Macad::Occt::Pnt> pp_p1 = &p1;
	pin_ptr<Macad::Occt::Pnt> pp_p2 = &p2;
	pin_ptr<double> pp_dist = &dist;
	return ::Prs3d::MatchSegment(X, Y, Z, aDistance, *(gp_Pnt*)pp_p1, *(gp_Pnt*)pp_p2, *(Standard_Real*)pp_dist);
}

double Macad::Occt::Prs3d::GetDeflection(Macad::Occt::Bnd_Box^ theBndBox, double theDeviationCoefficient, double theMaximalChordialDeviation)
{
	return ::Prs3d::GetDeflection(*(::Bnd_Box*)theBndBox->NativeInstance, theDeviationCoefficient, theMaximalChordialDeviation);
}

Macad::Occt::Graphic3d_ArrayOfPrimitives^ Macad::Occt::Prs3d::PrimitivesFromPolylines(Macad::Occt::Prs3d_NListOfSequenceOfPnt^ thePoints)
{
	Handle(::Graphic3d_ArrayOfPrimitives) _result;
	_result = ::Prs3d::PrimitivesFromPolylines(*(::Prs3d_NListOfSequenceOfPnt*)thePoints->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfPrimitives::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d::AddPrimitivesGroup(Macad::Occt::Graphic3d_Structure^ thePrs, Macad::Occt::Prs3d_LineAspect^ theAspect, Macad::Occt::Prs3d_NListOfSequenceOfPnt^ thePolylines)
{
	Handle(::Graphic3d_Structure) h_thePrs = thePrs->NativeInstance;
	Handle(::Prs3d_LineAspect) h_theAspect = theAspect->NativeInstance;
	::Prs3d::AddPrimitivesGroup(h_thePrs, h_theAspect, *(::Prs3d_NListOfSequenceOfPnt*)thePolylines->NativeInstance);
	thePrs->NativeInstance = h_thePrs.get();
	theAspect->NativeInstance = h_theAspect.get();
}




//---------------------------------------------------------------------
//  Class  Prs3d_Arrow
//---------------------------------------------------------------------

Macad::Occt::Prs3d_Arrow::Prs3d_Arrow()
	: BaseClass<::Prs3d_Arrow>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_Arrow();
}

Macad::Occt::Prs3d_Arrow::Prs3d_Arrow(Macad::Occt::Prs3d_Arrow^ parameter1)
	: BaseClass<::Prs3d_Arrow>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_Arrow(*(::Prs3d_Arrow*)parameter1->NativeInstance);
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_Arrow::DrawShaded(Macad::Occt::Ax1 theAxis, double theTubeRadius, double theAxisLength, double theConeRadius, double theConeLength, int theNbFacettes)
{
	pin_ptr<Macad::Occt::Ax1> pp_theAxis = &theAxis;
	Handle(::Graphic3d_ArrayOfTriangles) _result;
	_result = ::Prs3d_Arrow::DrawShaded(*(gp_Ax1*)pp_theAxis, theTubeRadius, theAxisLength, theConeRadius, theConeLength, theNbFacettes);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_ArrayOfSegments^ Macad::Occt::Prs3d_Arrow::DrawSegments(Macad::Occt::Pnt theLocation, Macad::Occt::Dir theDir, double theAngle, double theLength, int theNbSegments)
{
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	pin_ptr<Macad::Occt::Dir> pp_theDir = &theDir;
	Handle(::Graphic3d_ArrayOfSegments) _result;
	_result = ::Prs3d_Arrow::DrawSegments(*(gp_Pnt*)pp_theLocation, *(gp_Dir*)pp_theDir, theAngle, theLength, theNbSegments);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfSegments::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_Arrow::Draw(Macad::Occt::Graphic3d_Group^ theGroup, Macad::Occt::Pnt theLocation, Macad::Occt::Dir theDirection, double theAngle, double theLength)
{
	Handle(::Graphic3d_Group) h_theGroup = theGroup->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	pin_ptr<Macad::Occt::Dir> pp_theDirection = &theDirection;
	::Prs3d_Arrow::Draw(h_theGroup, *(gp_Pnt*)pp_theLocation, *(gp_Dir*)pp_theDirection, theAngle, theLength);
	theGroup->NativeInstance = h_theGroup.get();
}




//---------------------------------------------------------------------
//  Class  Prs3d_IsoAspect
//---------------------------------------------------------------------

Macad::Occt::Prs3d_IsoAspect::Prs3d_IsoAspect(Macad::Occt::Quantity_Color^ theColor, Macad::Occt::Aspect_TypeOfLine theType, double theWidth, int theNumber)
	: Macad::Occt::Prs3d_LineAspect(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Prs3d_IsoAspect(*(::Quantity_Color*)theColor->NativeInstance, (::Aspect_TypeOfLine)theType, theWidth, theNumber);
}

Macad::Occt::Prs3d_IsoAspect::Prs3d_IsoAspect(Macad::Occt::Prs3d_IsoAspect^ parameter1)
	: Macad::Occt::Prs3d_LineAspect(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Prs3d_IsoAspect(*(::Prs3d_IsoAspect*)parameter1->NativeInstance);
}

void Macad::Occt::Prs3d_IsoAspect::SetNumber(int theNumber)
{
	((::Prs3d_IsoAspect*)_NativeInstance)->SetNumber(theNumber);
}

int Macad::Occt::Prs3d_IsoAspect::Number()
{
	return ((::Prs3d_IsoAspect*)_NativeInstance)->Number();
}


Macad::Occt::Prs3d_IsoAspect^ Macad::Occt::Prs3d_IsoAspect::CreateDowncasted(::Prs3d_IsoAspect* instance)
{
	return gcnew Macad::Occt::Prs3d_IsoAspect( instance );
}



//---------------------------------------------------------------------
//  Class  Prs3d_Root
//---------------------------------------------------------------------

Macad::Occt::Prs3d_Root::Prs3d_Root()
	: BaseClass<::Prs3d_Root>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_Root();
}

Macad::Occt::Prs3d_Root::Prs3d_Root(Macad::Occt::Prs3d_Root^ parameter1)
	: BaseClass<::Prs3d_Root>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_Root(*(::Prs3d_Root*)parameter1->NativeInstance);
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Prs3d_Root::CurrentGroup(Macad::Occt::Graphic3d_Structure^ thePrs3d)
{
	Handle(::Graphic3d_Structure) h_thePrs3d = thePrs3d->NativeInstance;
	Handle(::Graphic3d_Group) _result;
	_result = ::Prs3d_Root::CurrentGroup(h_thePrs3d);
	thePrs3d->NativeInstance = h_thePrs3d.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Prs3d_Root::NewGroup(Macad::Occt::Graphic3d_Structure^ thePrs3d)
{
	Handle(::Graphic3d_Structure) h_thePrs3d = thePrs3d->NativeInstance;
	Handle(::Graphic3d_Group) _result;
	_result = ::Prs3d_Root::NewGroup(h_thePrs3d);
	thePrs3d->NativeInstance = h_thePrs3d.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  Prs3d_BndBox
//---------------------------------------------------------------------

Macad::Occt::Prs3d_BndBox::Prs3d_BndBox()
	: Macad::Occt::Prs3d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_BndBox();
}

Macad::Occt::Prs3d_BndBox::Prs3d_BndBox(Macad::Occt::Prs3d_BndBox^ parameter1)
	: Macad::Occt::Prs3d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_BndBox(*(::Prs3d_BndBox*)parameter1->NativeInstance);
}

void Macad::Occt::Prs3d_BndBox::Add(Macad::Occt::Graphic3d_Structure^ thePresentation, Macad::Occt::Bnd_Box^ theBndBox, Macad::Occt::Prs3d_Drawer^ theDrawer)
{
	Handle(::Graphic3d_Structure) h_thePresentation = thePresentation->NativeInstance;
	Handle(::Prs3d_Drawer) h_theDrawer = theDrawer->NativeInstance;
	::Prs3d_BndBox::Add(h_thePresentation, *(::Bnd_Box*)theBndBox->NativeInstance, h_theDrawer);
	thePresentation->NativeInstance = h_thePresentation.get();
	theDrawer->NativeInstance = h_theDrawer.get();
}

void Macad::Occt::Prs3d_BndBox::Add(Macad::Occt::Graphic3d_Structure^ thePresentation, Macad::Occt::Bnd_OBB^ theBndBox, Macad::Occt::Prs3d_Drawer^ theDrawer)
{
	Handle(::Graphic3d_Structure) h_thePresentation = thePresentation->NativeInstance;
	Handle(::Prs3d_Drawer) h_theDrawer = theDrawer->NativeInstance;
	::Prs3d_BndBox::Add(h_thePresentation, *(::Bnd_OBB*)theBndBox->NativeInstance, h_theDrawer);
	thePresentation->NativeInstance = h_thePresentation.get();
	theDrawer->NativeInstance = h_theDrawer.get();
}

Macad::Occt::Graphic3d_ArrayOfSegments^ Macad::Occt::Prs3d_BndBox::FillSegments(Macad::Occt::Bnd_OBB^ theBox)
{
	Handle(::Graphic3d_ArrayOfSegments) _result;
	_result = ::Prs3d_BndBox::FillSegments(*(::Bnd_OBB*)theBox->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfSegments::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_ArrayOfSegments^ Macad::Occt::Prs3d_BndBox::FillSegments(Macad::Occt::Bnd_Box^ theBox)
{
	Handle(::Graphic3d_ArrayOfSegments) _result;
	_result = ::Prs3d_BndBox::FillSegments(*(::Bnd_Box*)theBox->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfSegments::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_BndBox::FillSegments(Macad::Occt::Graphic3d_ArrayOfSegments^ theSegments, Macad::Occt::Bnd_OBB^ theBox)
{
	Handle(::Graphic3d_ArrayOfSegments) h_theSegments = theSegments->NativeInstance;
	::Prs3d_BndBox::FillSegments(h_theSegments, *(::Bnd_OBB*)theBox->NativeInstance);
	theSegments->NativeInstance = h_theSegments.get();
}

void Macad::Occt::Prs3d_BndBox::FillSegments(Macad::Occt::Graphic3d_ArrayOfSegments^ theSegments, Macad::Occt::Bnd_Box^ theBox)
{
	Handle(::Graphic3d_ArrayOfSegments) h_theSegments = theSegments->NativeInstance;
	::Prs3d_BndBox::FillSegments(h_theSegments, *(::Bnd_Box*)theBox->NativeInstance);
	theSegments->NativeInstance = h_theSegments.get();
}

void Macad::Occt::Prs3d_BndBox::fillSegments(Macad::Occt::Graphic3d_ArrayOfSegments^ theSegments, Macad::Occt::Pnt theBox)
{
	Handle(::Graphic3d_ArrayOfSegments) h_theSegments = theSegments->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_theBox = &theBox;
	::Prs3d_BndBox::fillSegments(h_theSegments, (gp_Pnt*)pp_theBox);
	theSegments->NativeInstance = h_theSegments.get();
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

Macad::Occt::Prs3d_InvalidAngle::Prs3d_InvalidAngle(Macad::Occt::Prs3d_InvalidAngle^ parameter1)
	: Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Prs3d_InvalidAngle(*(::Prs3d_InvalidAngle*)parameter1->NativeInstance);
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
	Handle(::Prs3d_InvalidAngle) _result;
	_result = ::Prs3d_InvalidAngle::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_InvalidAngle::CreateDowncasted( _result.get());
}

Macad::Occt::Prs3d_InvalidAngle^ Macad::Occt::Prs3d_InvalidAngle::NewInstance()
{
	Handle(::Prs3d_InvalidAngle) _result;
	_result = ::Prs3d_InvalidAngle::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_InvalidAngle::CreateDowncasted( _result.get());
}

Macad::Occt::Prs3d_InvalidAngle^ Macad::Occt::Prs3d_InvalidAngle::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Prs3d_InvalidAngle) _result;
	_result = ::Prs3d_InvalidAngle::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_InvalidAngle::CreateDowncasted( _result.get());
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
	Handle(::Graphic3d_StructureManager) h_theViewer = theViewer->NativeInstance;
	Handle(::Graphic3d_Structure) h_thePrs = thePrs->NativeInstance;
	NativeInstance = new ::Prs3d_PresentationShadow(h_theViewer, h_thePrs);
	theViewer->NativeInstance = h_theViewer.get();
	thePrs->NativeInstance = h_thePrs.get();
}

Macad::Occt::Prs3d_PresentationShadow::Prs3d_PresentationShadow(Macad::Occt::Prs3d_PresentationShadow^ parameter1)
	: Macad::Occt::Graphic3d_Structure(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Prs3d_PresentationShadow(*(::Prs3d_PresentationShadow*)parameter1->NativeInstance);
}

int Macad::Occt::Prs3d_PresentationShadow::ParentId()
{
	return ((::Prs3d_PresentationShadow*)_NativeInstance)->ParentId();
}

Macad::Occt::Graphic3d_ViewAffinity^ Macad::Occt::Prs3d_PresentationShadow::ParentAffinity()
{
	Handle(::Graphic3d_ViewAffinity) _result;
	_result = ((::Prs3d_PresentationShadow*)_NativeInstance)->ParentAffinity();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ViewAffinity::CreateDowncasted( _result.get());
}

void Macad::Occt::Prs3d_PresentationShadow::CalculateBoundBox()
{
	((::Prs3d_PresentationShadow*)_NativeInstance)->CalculateBoundBox();
}


Macad::Occt::Prs3d_PresentationShadow^ Macad::Occt::Prs3d_PresentationShadow::CreateDowncasted(::Prs3d_PresentationShadow* instance)
{
	return gcnew Macad::Occt::Prs3d_PresentationShadow( instance );
}



//---------------------------------------------------------------------
//  Class  Prs3d_Text
//---------------------------------------------------------------------

Macad::Occt::Prs3d_Text::Prs3d_Text()
	: BaseClass<::Prs3d_Text>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_Text();
}

Macad::Occt::Prs3d_Text::Prs3d_Text(Macad::Occt::Prs3d_Text^ parameter1)
	: BaseClass<::Prs3d_Text>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_Text(*(::Prs3d_Text*)parameter1->NativeInstance);
}

Macad::Occt::Graphic3d_Text^ Macad::Occt::Prs3d_Text::Draw(Macad::Occt::Graphic3d_Group^ theGroup, Macad::Occt::Prs3d_TextAspect^ theAspect, Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Pnt theAttachmentPoint)
{
	Handle(::Graphic3d_Group) h_theGroup = theGroup->NativeInstance;
	Handle(::Prs3d_TextAspect) h_theAspect = theAspect->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_theAttachmentPoint = &theAttachmentPoint;
	Handle(::Graphic3d_Text) _result;
	_result = ::Prs3d_Text::Draw(h_theGroup, h_theAspect, *(::TCollection_ExtendedString*)theText->NativeInstance, *(gp_Pnt*)pp_theAttachmentPoint);
	theGroup->NativeInstance = h_theGroup.get();
	theAspect->NativeInstance = h_theAspect.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Text::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_Text^ Macad::Occt::Prs3d_Text::Draw(Macad::Occt::Graphic3d_Group^ theGroup, Macad::Occt::Prs3d_TextAspect^ theAspect, Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation, bool theHasOwnAnchor)
{
	Handle(::Graphic3d_Group) h_theGroup = theGroup->NativeInstance;
	Handle(::Prs3d_TextAspect) h_theAspect = theAspect->NativeInstance;
	pin_ptr<Macad::Occt::Ax2> pp_theOrientation = &theOrientation;
	Handle(::Graphic3d_Text) _result;
	_result = ::Prs3d_Text::Draw(h_theGroup, h_theAspect, *(::TCollection_ExtendedString*)theText->NativeInstance, *(gp_Ax2*)pp_theOrientation, theHasOwnAnchor);
	theGroup->NativeInstance = h_theGroup.get();
	theAspect->NativeInstance = h_theAspect.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Text::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_Text^ Macad::Occt::Prs3d_Text::Draw(Macad::Occt::Graphic3d_Group^ theGroup, Macad::Occt::Prs3d_TextAspect^ theAspect, Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation)
{
	Handle(::Graphic3d_Group) h_theGroup = theGroup->NativeInstance;
	Handle(::Prs3d_TextAspect) h_theAspect = theAspect->NativeInstance;
	pin_ptr<Macad::Occt::Ax2> pp_theOrientation = &theOrientation;
	Handle(::Graphic3d_Text) _result;
	_result = ::Prs3d_Text::Draw(h_theGroup, h_theAspect, *(::TCollection_ExtendedString*)theText->NativeInstance, *(gp_Ax2*)pp_theOrientation, true);
	theGroup->NativeInstance = h_theGroup.get();
	theAspect->NativeInstance = h_theAspect.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Text::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  Prs3d_ToolQuadric
//---------------------------------------------------------------------

Macad::Occt::Prs3d_ToolQuadric::Prs3d_ToolQuadric()
	: BaseClass<::Prs3d_ToolQuadric>(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Prs3d_ToolQuadric::Prs3d_ToolQuadric(Macad::Occt::Prs3d_ToolQuadric^ parameter1)
	: BaseClass<::Prs3d_ToolQuadric>(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

int Macad::Occt::Prs3d_ToolQuadric::TrianglesNb(int theSlicesNb, int theStacksNb)
{
	return ::Prs3d_ToolQuadric::TrianglesNb(theSlicesNb, theStacksNb);
}

int Macad::Occt::Prs3d_ToolQuadric::VerticesNb(int theSlicesNb, int theStacksNb, bool theIsIndexed)
{
	return ::Prs3d_ToolQuadric::VerticesNb(theSlicesNb, theStacksNb, theIsIndexed);
}

int Macad::Occt::Prs3d_ToolQuadric::VerticesNb(int theSlicesNb, int theStacksNb)
{
	return ::Prs3d_ToolQuadric::VerticesNb(theSlicesNb, theStacksNb, true);
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_ToolQuadric::CreateTriangulation(Macad::Occt::Trsf theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	Handle(::Graphic3d_ArrayOfTriangles) _result;
	_result = ((::Prs3d_ToolQuadric*)_NativeInstance)->CreateTriangulation(*(gp_Trsf*)pp_theTrsf);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted( _result.get());
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
	return ((::Prs3d_ToolQuadric*)_NativeInstance)->TrianglesNb();
}

int Macad::Occt::Prs3d_ToolQuadric::VerticesNb(bool theIsIndexed)
{
	return ((::Prs3d_ToolQuadric*)_NativeInstance)->VerticesNb(theIsIndexed);
}

int Macad::Occt::Prs3d_ToolQuadric::VerticesNb()
{
	return ((::Prs3d_ToolQuadric*)_NativeInstance)->VerticesNb(true);
}




//---------------------------------------------------------------------
//  Class  Prs3d_ToolCylinder
//---------------------------------------------------------------------

Macad::Occt::Prs3d_ToolCylinder::Prs3d_ToolCylinder(double theBottomRad, double theTopRad, double theHeight, int theNbSlices, int theNbStacks)
	: Macad::Occt::Prs3d_ToolQuadric(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_ToolCylinder(theBottomRad, theTopRad, theHeight, theNbSlices, theNbStacks);
}

Macad::Occt::Prs3d_ToolCylinder::Prs3d_ToolCylinder(Macad::Occt::Prs3d_ToolCylinder^ parameter1)
	: Macad::Occt::Prs3d_ToolQuadric(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_ToolCylinder(*(::Prs3d_ToolCylinder*)parameter1->NativeInstance);
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_ToolCylinder::Create(double theBottomRad, double theTopRad, double theHeight, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	Handle(::Graphic3d_ArrayOfTriangles) _result;
	_result = ::Prs3d_ToolCylinder::Create(theBottomRad, theTopRad, theHeight, theNbSlices, theNbStacks, *(gp_Trsf*)pp_theTrsf);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  Prs3d_ToolDisk
//---------------------------------------------------------------------

Macad::Occt::Prs3d_ToolDisk::Prs3d_ToolDisk(double theInnerRadius, double theOuterRadius, int theNbSlices, int theNbStacks)
	: Macad::Occt::Prs3d_ToolQuadric(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_ToolDisk(theInnerRadius, theOuterRadius, theNbSlices, theNbStacks);
}

Macad::Occt::Prs3d_ToolDisk::Prs3d_ToolDisk(Macad::Occt::Prs3d_ToolDisk^ parameter1)
	: Macad::Occt::Prs3d_ToolQuadric(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_ToolDisk(*(::Prs3d_ToolDisk*)parameter1->NativeInstance);
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_ToolDisk::Create(double theInnerRadius, double theOuterRadius, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	Handle(::Graphic3d_ArrayOfTriangles) _result;
	_result = ::Prs3d_ToolDisk::Create(theInnerRadius, theOuterRadius, theNbSlices, theNbStacks, *(gp_Trsf*)pp_theTrsf);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted( _result.get());
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

Macad::Occt::Prs3d_ToolSector::Prs3d_ToolSector(Macad::Occt::Prs3d_ToolSector^ parameter1)
	: Macad::Occt::Prs3d_ToolQuadric(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_ToolSector(*(::Prs3d_ToolSector*)parameter1->NativeInstance);
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_ToolSector::Create(double theRadius, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	Handle(::Graphic3d_ArrayOfTriangles) _result;
	_result = ::Prs3d_ToolSector::Create(theRadius, theNbSlices, theNbStacks, *(gp_Trsf*)pp_theTrsf);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  Prs3d_ToolSphere
//---------------------------------------------------------------------

Macad::Occt::Prs3d_ToolSphere::Prs3d_ToolSphere(double theRadius, int theNbSlices, int theNbStacks)
	: Macad::Occt::Prs3d_ToolQuadric(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_ToolSphere(theRadius, theNbSlices, theNbStacks);
}

Macad::Occt::Prs3d_ToolSphere::Prs3d_ToolSphere(Macad::Occt::Prs3d_ToolSphere^ parameter1)
	: Macad::Occt::Prs3d_ToolQuadric(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_ToolSphere(*(::Prs3d_ToolSphere*)parameter1->NativeInstance);
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_ToolSphere::Create(double theRadius, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	Handle(::Graphic3d_ArrayOfTriangles) _result;
	_result = ::Prs3d_ToolSphere::Create(theRadius, theNbSlices, theNbStacks, *(gp_Trsf*)pp_theTrsf);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted( _result.get());
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

Macad::Occt::Prs3d_ToolTorus::Prs3d_ToolTorus(Macad::Occt::Prs3d_ToolTorus^ parameter1)
	: Macad::Occt::Prs3d_ToolQuadric(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Prs3d_ToolTorus(*(::Prs3d_ToolTorus*)parameter1->NativeInstance);
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_ToolTorus::Create(double theMajorRad, double theMinorRad, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	Handle(::Graphic3d_ArrayOfTriangles) _result;
	_result = ::Prs3d_ToolTorus::Create(theMajorRad, theMinorRad, theNbSlices, theNbStacks, *(gp_Trsf*)pp_theTrsf);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_ToolTorus::Create(double theMajorRad, double theMinorRad, double theAngle, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	Handle(::Graphic3d_ArrayOfTriangles) _result;
	_result = ::Prs3d_ToolTorus::Create(theMajorRad, theMinorRad, theAngle, theNbSlices, theNbStacks, *(gp_Trsf*)pp_theTrsf);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_ToolTorus::Create(double theMajorRad, double theMinorRad, double theAngle1, double theAngle2, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	Handle(::Graphic3d_ArrayOfTriangles) _result;
	_result = ::Prs3d_ToolTorus::Create(theMajorRad, theMinorRad, theAngle1, theAngle2, theNbSlices, theNbStacks, *(gp_Trsf*)pp_theTrsf);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Prs3d_ToolTorus::Create(double theMajorRad, double theMinorRad, double theAngle1, double theAngle2, double theAngle, int theNbSlices, int theNbStacks, Macad::Occt::Trsf theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	Handle(::Graphic3d_ArrayOfTriangles) _result;
	_result = ::Prs3d_ToolTorus::Create(theMajorRad, theMinorRad, theAngle1, theAngle2, theAngle, theNbSlices, theNbStacks, *(gp_Trsf*)pp_theTrsf);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted( _result.get());
}



