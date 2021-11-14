// Generated wrapper code for package BinTools

#include "OcctPCH.h"
#include "BinTools.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "TopoDS.h"
#include "Message.h"
#include "BinTools.h"
#include "TopAbs.h"
#include "Geom2d.h"
#include "Geom.h"
#include "gp.h"
#include "TopLoc.h"


//---------------------------------------------------------------------
//  Class  BinTools
//---------------------------------------------------------------------

Macad::Occt::BinTools::BinTools()
	: BaseClass<::BinTools>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools();
}

Macad::Occt::BinTools::BinTools(Macad::Occt::BinTools^ parameter1)
	: BaseClass<::BinTools>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools(*(::BinTools*)parameter1->NativeInstance);
}

bool Macad::Occt::BinTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, Macad::Occt::Message_ProgressRange^ theRange)
{
	const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
	return ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, *(::Message_ProgressRange*)theRange->NativeInstance);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
}

bool Macad::Occt::BinTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile)
{
	const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
	return ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, ::Message_ProgressRange());
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
}

bool Macad::Occt::BinTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, bool theWithTriangles, bool theWithNormals, Macad::Occt::BinTools_FormatVersion theVersion, Macad::Occt::Message_ProgressRange^ theRange)
{
	const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
	return ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, theWithTriangles, theWithNormals, (::BinTools_FormatVersion)theVersion, *(::Message_ProgressRange*)theRange->NativeInstance);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
}

bool Macad::Occt::BinTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, bool theWithTriangles, bool theWithNormals, Macad::Occt::BinTools_FormatVersion theVersion)
{
	const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
	return ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, theWithTriangles, theWithNormals, (::BinTools_FormatVersion)theVersion, ::Message_ProgressRange());
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
}

bool Macad::Occt::BinTools::Read(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, Macad::Occt::Message_ProgressRange^ theRange)
{
	const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
	return ::BinTools::Read(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, *(::Message_ProgressRange*)theRange->NativeInstance);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
}

bool Macad::Occt::BinTools::Read(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile)
{
	const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
	return ::BinTools::Read(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, ::Message_ProgressRange());
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
}




//---------------------------------------------------------------------
//  Class  BinTools_OStream
//---------------------------------------------------------------------

Macad::Occt::BinTools_OStream::BinTools_OStream(Macad::Occt::BinTools_OStream^ parameter1)
	: BaseClass<::BinTools_OStream>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_OStream(*(::BinTools_OStream*)parameter1->NativeInstance);
}

void Macad::Occt::BinTools_OStream::WriteShape(Macad::Occt::TopAbs_ShapeEnum% theType, Macad::Occt::TopAbs_Orientation% theOrientation)
{
	pin_ptr<Macad::Occt::TopAbs_ShapeEnum> pp_theType = &theType;
	pin_ptr<Macad::Occt::TopAbs_Orientation> pp_theOrientation = &theOrientation;
	((::BinTools_OStream*)_NativeInstance)->WriteShape(*(::TopAbs_ShapeEnum*)pp_theType, *(::TopAbs_Orientation*)pp_theOrientation);
}

void Macad::Occt::BinTools_OStream::PutBools(bool theValue1, bool theValue2, bool theValue3)
{
	((::BinTools_OStream*)_NativeInstance)->PutBools(theValue1, theValue2, theValue3);
}

void Macad::Occt::BinTools_OStream::PutBools(bool theValue1, bool theValue2, bool theValue3, bool theValue4, bool theValue5, bool theValue6, bool theValue7)
{
	((::BinTools_OStream*)_NativeInstance)->PutBools(theValue1, theValue2, theValue3, theValue4, theValue5, theValue6, theValue7);
}




//---------------------------------------------------------------------
//  Class  BinTools_Curve2dSet
//---------------------------------------------------------------------

Macad::Occt::BinTools_Curve2dSet::BinTools_Curve2dSet()
	: BaseClass<::BinTools_Curve2dSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_Curve2dSet();
}

Macad::Occt::BinTools_Curve2dSet::BinTools_Curve2dSet(Macad::Occt::BinTools_Curve2dSet^ parameter1)
	: BaseClass<::BinTools_Curve2dSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_Curve2dSet(*(::BinTools_Curve2dSet*)parameter1->NativeInstance);
}

void Macad::Occt::BinTools_Curve2dSet::Clear()
{
	((::BinTools_Curve2dSet*)_NativeInstance)->Clear();
}

int Macad::Occt::BinTools_Curve2dSet::Add(Macad::Occt::Geom2d_Curve^ C)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	return ((::BinTools_Curve2dSet*)_NativeInstance)->Add(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BinTools_Curve2dSet::Curve2d(int I)
{
	Handle(::Geom2d_Curve) _result;
	_result = ((::BinTools_Curve2dSet*)_NativeInstance)->Curve2d(I);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

int Macad::Occt::BinTools_Curve2dSet::Index(Macad::Occt::Geom2d_Curve^ C)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	return ((::BinTools_Curve2dSet*)_NativeInstance)->Index(h_C);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BinTools_Curve2dSet::WriteCurve2d(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::BinTools_OStream^ OS)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	::BinTools_Curve2dSet::WriteCurve2d(h_C, *(::BinTools_OStream*)OS->NativeInstance);
	C->NativeInstance = h_C.get();
}




//---------------------------------------------------------------------
//  Class  BinTools_CurveSet
//---------------------------------------------------------------------

Macad::Occt::BinTools_CurveSet::BinTools_CurveSet()
	: BaseClass<::BinTools_CurveSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_CurveSet();
}

Macad::Occt::BinTools_CurveSet::BinTools_CurveSet(Macad::Occt::BinTools_CurveSet^ parameter1)
	: BaseClass<::BinTools_CurveSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_CurveSet(*(::BinTools_CurveSet*)parameter1->NativeInstance);
}

void Macad::Occt::BinTools_CurveSet::Clear()
{
	((::BinTools_CurveSet*)_NativeInstance)->Clear();
}

int Macad::Occt::BinTools_CurveSet::Add(Macad::Occt::Geom_Curve^ C)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	return ((::BinTools_CurveSet*)_NativeInstance)->Add(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom_Curve^ Macad::Occt::BinTools_CurveSet::Curve(int I)
{
	Handle(::Geom_Curve) _result;
	_result = ((::BinTools_CurveSet*)_NativeInstance)->Curve(I);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}

int Macad::Occt::BinTools_CurveSet::Index(Macad::Occt::Geom_Curve^ C)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	return ((::BinTools_CurveSet*)_NativeInstance)->Index(h_C);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BinTools_CurveSet::WriteCurve(Macad::Occt::Geom_Curve^ C, Macad::Occt::BinTools_OStream^ OS)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	::BinTools_CurveSet::WriteCurve(h_C, *(::BinTools_OStream*)OS->NativeInstance);
	C->NativeInstance = h_C.get();
}




//---------------------------------------------------------------------
//  Class  BinTools_IStream
//---------------------------------------------------------------------

Macad::Occt::BinTools_IStream::BinTools_IStream(Macad::Occt::BinTools_IStream^ parameter1)
	: BaseClass<::BinTools_IStream>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_IStream(*(::BinTools_IStream*)parameter1->NativeInstance);
}

Macad::Occt::BinTools_ObjectType Macad::Occt::BinTools_IStream::ReadType()
{
	return (Macad::Occt::BinTools_ObjectType)((::BinTools_IStream*)_NativeInstance)->ReadType();
}

Macad::Occt::BinTools_ObjectType Macad::Occt::BinTools_IStream::LastType()
{
	return (Macad::Occt::BinTools_ObjectType)((::BinTools_IStream*)_NativeInstance)->LastType();
}

Macad::Occt::TopAbs_ShapeEnum Macad::Occt::BinTools_IStream::ShapeType()
{
	return (Macad::Occt::TopAbs_ShapeEnum)((::BinTools_IStream*)_NativeInstance)->ShapeType();
}

Macad::Occt::TopAbs_Orientation Macad::Occt::BinTools_IStream::ShapeOrientation()
{
	return (Macad::Occt::TopAbs_Orientation)((::BinTools_IStream*)_NativeInstance)->ShapeOrientation();
}

bool Macad::Occt::BinTools_IStream::IsReference()
{
	return ((::BinTools_IStream*)_NativeInstance)->IsReference();
}

void Macad::Occt::BinTools_IStream::UpdatePosition()
{
	((::BinTools_IStream*)_NativeInstance)->UpdatePosition();
}

double Macad::Occt::BinTools_IStream::ReadReal()
{
	return ((::BinTools_IStream*)_NativeInstance)->ReadReal();
}

int Macad::Occt::BinTools_IStream::ReadInteger()
{
	return ((::BinTools_IStream*)_NativeInstance)->ReadInteger();
}

Macad::Occt::Pnt Macad::Occt::BinTools_IStream::ReadPnt()
{
	return Macad::Occt::Pnt(((::BinTools_IStream*)_NativeInstance)->ReadPnt());
}

unsigned char Macad::Occt::BinTools_IStream::ReadByte()
{
	return ((::BinTools_IStream*)_NativeInstance)->ReadByte();
}

bool Macad::Occt::BinTools_IStream::ReadBool()
{
	return ((::BinTools_IStream*)_NativeInstance)->ReadBool();
}

float Macad::Occt::BinTools_IStream::ReadShortReal()
{
	return ((::BinTools_IStream*)_NativeInstance)->ReadShortReal();
}

void Macad::Occt::BinTools_IStream::ReadBools(bool% theBool1, bool% theBool2, bool% theBool3)
{
	pin_ptr<bool> pp_theBool1 = &theBool1;
	pin_ptr<bool> pp_theBool2 = &theBool2;
	pin_ptr<bool> pp_theBool3 = &theBool3;
	((::BinTools_IStream*)_NativeInstance)->ReadBools(*(Standard_Boolean*)pp_theBool1, *(Standard_Boolean*)pp_theBool2, *(Standard_Boolean*)pp_theBool3);
}

void Macad::Occt::BinTools_IStream::ReadBools(bool% theBool1, bool% theBool2, bool% theBool3, bool% theBool4, bool% theBool5, bool% theBool6, bool% theBool7)
{
	pin_ptr<bool> pp_theBool1 = &theBool1;
	pin_ptr<bool> pp_theBool2 = &theBool2;
	pin_ptr<bool> pp_theBool3 = &theBool3;
	pin_ptr<bool> pp_theBool4 = &theBool4;
	pin_ptr<bool> pp_theBool5 = &theBool5;
	pin_ptr<bool> pp_theBool6 = &theBool6;
	pin_ptr<bool> pp_theBool7 = &theBool7;
	((::BinTools_IStream*)_NativeInstance)->ReadBools(*(Standard_Boolean*)pp_theBool1, *(Standard_Boolean*)pp_theBool2, *(Standard_Boolean*)pp_theBool3, *(Standard_Boolean*)pp_theBool4, *(Standard_Boolean*)pp_theBool5, *(Standard_Boolean*)pp_theBool6, *(Standard_Boolean*)pp_theBool7);
}




//---------------------------------------------------------------------
//  Class  BinTools_LocationSet
//---------------------------------------------------------------------

Macad::Occt::BinTools_LocationSet::BinTools_LocationSet()
	: BaseClass<::BinTools_LocationSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_LocationSet();
}

Macad::Occt::BinTools_LocationSet::BinTools_LocationSet(Macad::Occt::BinTools_LocationSet^ parameter1)
	: BaseClass<::BinTools_LocationSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_LocationSet(*(::BinTools_LocationSet*)parameter1->NativeInstance);
}

void Macad::Occt::BinTools_LocationSet::Clear()
{
	((::BinTools_LocationSet*)_NativeInstance)->Clear();
}

int Macad::Occt::BinTools_LocationSet::Add(Macad::Occt::TopLoc_Location^ L)
{
	return ((::BinTools_LocationSet*)_NativeInstance)->Add(*(::TopLoc_Location*)L->NativeInstance);
}

Macad::Occt::TopLoc_Location^ Macad::Occt::BinTools_LocationSet::Location(int I)
{
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result =  (::TopLoc_Location)((::BinTools_LocationSet*)_NativeInstance)->Location(I);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

int Macad::Occt::BinTools_LocationSet::Index(Macad::Occt::TopLoc_Location^ L)
{
	return ((::BinTools_LocationSet*)_NativeInstance)->Index(*(::TopLoc_Location*)L->NativeInstance);
}

int Macad::Occt::BinTools_LocationSet::NbLocations()
{
	return ((::BinTools_LocationSet*)_NativeInstance)->NbLocations();
}




//---------------------------------------------------------------------
//  Class  BinTools_ShapeSetBase
//---------------------------------------------------------------------

Macad::Occt::BinTools_ShapeSetBase::BinTools_ShapeSetBase()
	: BaseClass<::BinTools_ShapeSetBase>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_ShapeSetBase();
}

Macad::Occt::BinTools_ShapeSetBase::BinTools_ShapeSetBase(Macad::Occt::BinTools_ShapeSetBase^ parameter1)
	: BaseClass<::BinTools_ShapeSetBase>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_ShapeSetBase(*(::BinTools_ShapeSetBase*)parameter1->NativeInstance);
}

bool Macad::Occt::BinTools_ShapeSetBase::IsWithTriangles()
{
	return ((::BinTools_ShapeSetBase*)_NativeInstance)->IsWithTriangles();
}

bool Macad::Occt::BinTools_ShapeSetBase::IsWithNormals()
{
	return ((::BinTools_ShapeSetBase*)_NativeInstance)->IsWithNormals();
}

void Macad::Occt::BinTools_ShapeSetBase::SetWithTriangles(bool theWithTriangles)
{
	((::BinTools_ShapeSetBase*)_NativeInstance)->SetWithTriangles(theWithTriangles);
}

void Macad::Occt::BinTools_ShapeSetBase::SetWithNormals(bool theWithNormals)
{
	((::BinTools_ShapeSetBase*)_NativeInstance)->SetWithNormals(theWithNormals);
}

void Macad::Occt::BinTools_ShapeSetBase::SetFormatNb(int theFormatNb)
{
	((::BinTools_ShapeSetBase*)_NativeInstance)->SetFormatNb(theFormatNb);
}

int Macad::Occt::BinTools_ShapeSetBase::FormatNb()
{
	return ((::BinTools_ShapeSetBase*)_NativeInstance)->FormatNb();
}

void Macad::Occt::BinTools_ShapeSetBase::Clear()
{
	((::BinTools_ShapeSetBase*)_NativeInstance)->Clear();
}




//---------------------------------------------------------------------
//  Class  BinTools_ShapeReader
//---------------------------------------------------------------------

Macad::Occt::BinTools_ShapeReader::BinTools_ShapeReader()
	: Macad::Occt::BinTools_ShapeSetBase(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_ShapeReader();
}

Macad::Occt::BinTools_ShapeReader::BinTools_ShapeReader(Macad::Occt::BinTools_ShapeReader^ parameter1)
	: Macad::Occt::BinTools_ShapeSetBase(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_ShapeReader(*(::BinTools_ShapeReader*)parameter1->NativeInstance);
}

void Macad::Occt::BinTools_ShapeReader::Clear()
{
	((::BinTools_ShapeReader*)_NativeInstance)->Clear();
}

Macad::Occt::TopLoc_Location^ Macad::Occt::BinTools_ShapeReader::ReadLocation(Macad::Occt::BinTools_IStream^ theStream)
{
	::TopLoc_Location* _result;
	_result = (::TopLoc_Location*)((::BinTools_ShapeReader*)_NativeInstance)->ReadLocation(*(::BinTools_IStream*)theStream->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}




//---------------------------------------------------------------------
//  Class  BinTools_SurfaceSet
//---------------------------------------------------------------------

Macad::Occt::BinTools_SurfaceSet::BinTools_SurfaceSet()
	: BaseClass<::BinTools_SurfaceSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_SurfaceSet();
}

Macad::Occt::BinTools_SurfaceSet::BinTools_SurfaceSet(Macad::Occt::BinTools_SurfaceSet^ parameter1)
	: BaseClass<::BinTools_SurfaceSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_SurfaceSet(*(::BinTools_SurfaceSet*)parameter1->NativeInstance);
}

void Macad::Occt::BinTools_SurfaceSet::Clear()
{
	((::BinTools_SurfaceSet*)_NativeInstance)->Clear();
}

int Macad::Occt::BinTools_SurfaceSet::Add(Macad::Occt::Geom_Surface^ S)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	return ((::BinTools_SurfaceSet*)_NativeInstance)->Add(h_S);
	S->NativeInstance = h_S.get();
}

Macad::Occt::Geom_Surface^ Macad::Occt::BinTools_SurfaceSet::Surface(int I)
{
	Handle(::Geom_Surface) _result;
	_result = ((::BinTools_SurfaceSet*)_NativeInstance)->Surface(I);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

int Macad::Occt::BinTools_SurfaceSet::Index(Macad::Occt::Geom_Surface^ S)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	return ((::BinTools_SurfaceSet*)_NativeInstance)->Index(h_S);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BinTools_SurfaceSet::WriteSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::BinTools_OStream^ OS)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	::BinTools_SurfaceSet::WriteSurface(h_S, *(::BinTools_OStream*)OS->NativeInstance);
	S->NativeInstance = h_S.get();
}




//---------------------------------------------------------------------
//  Class  BinTools_ShapeSet
//---------------------------------------------------------------------

Macad::Occt::BinTools_ShapeSet::BinTools_ShapeSet()
	: Macad::Occt::BinTools_ShapeSetBase(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_ShapeSet();
}

Macad::Occt::BinTools_ShapeSet::BinTools_ShapeSet(Macad::Occt::BinTools_ShapeSet^ parameter1)
	: Macad::Occt::BinTools_ShapeSetBase(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BinTools_ShapeSet(*(::BinTools_ShapeSet*)parameter1->NativeInstance);
}

void Macad::Occt::BinTools_ShapeSet::Clear()
{
	((::BinTools_ShapeSet*)_NativeInstance)->Clear();
}

int Macad::Occt::BinTools_ShapeSet::Add(Macad::Occt::TopoDS_Shape^ S)
{
	return ((::BinTools_ShapeSet*)_NativeInstance)->Add(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BinTools_ShapeSet::Shape(int I)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BinTools_ShapeSet*)_NativeInstance)->Shape(I);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

int Macad::Occt::BinTools_ShapeSet::Index(Macad::Occt::TopoDS_Shape^ S)
{
	return ((::BinTools_ShapeSet*)_NativeInstance)->Index(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::BinTools_LocationSet^ Macad::Occt::BinTools_ShapeSet::Locations()
{
	::BinTools_LocationSet* _result = new ::BinTools_LocationSet();
	*_result =  (::BinTools_LocationSet)((::BinTools_ShapeSet*)_NativeInstance)->Locations();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BinTools_LocationSet(_result);
}

Macad::Occt::BinTools_LocationSet^ Macad::Occt::BinTools_ShapeSet::ChangeLocations()
{
	::BinTools_LocationSet* _result = new ::BinTools_LocationSet();
	*_result = ((::BinTools_ShapeSet*)_NativeInstance)->ChangeLocations();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BinTools_LocationSet(_result);
}

int Macad::Occt::BinTools_ShapeSet::NbShapes()
{
	return ((::BinTools_ShapeSet*)_NativeInstance)->NbShapes();
}

void Macad::Occt::BinTools_ShapeSet::AddShape(Macad::Occt::TopoDS_Shape^ S)
{
	((::BinTools_ShapeSet*)_NativeInstance)->AddShape(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::BinTools_ShapeSet::AddShapes(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2)
{
	((::BinTools_ShapeSet*)_NativeInstance)->AddShapes(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance);
}



