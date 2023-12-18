// Generated wrapper code for package BinTools

#include "OcctPCH.h"
#include "BinTools.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "Message.h"
#include "TopAbs.h"
#include "Geom2d.h"
#include "Geom.h"
#include "gp.h"
#include "TopLoc.h"


//---------------------------------------------------------------------
//  Class  BinTools
//---------------------------------------------------------------------

Macad::Occt::BinTools::BinTools()
    : Macad::Occt::BaseClass<::BinTools>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BinTools();
}

System::IO::TextWriter^ Macad::Occt::BinTools::PutReal(System::IO::TextWriter^ OS, double theValue)
{
    throw gcnew System::NotImplementedException();
}

System::IO::TextWriter^ Macad::Occt::BinTools::PutShortReal(System::IO::TextWriter^ OS, float theValue)
{
    throw gcnew System::NotImplementedException();
}

System::IO::TextWriter^ Macad::Occt::BinTools::PutInteger(System::IO::TextWriter^ OS, int theValue)
{
    throw gcnew System::NotImplementedException();
}

System::IO::TextWriter^ Macad::Occt::BinTools::PutBool(System::IO::TextWriter^ OS, bool theValue)
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::BinTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream, Macad::Occt::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_theStream;
    ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, oss_theStream, *(::Message_ProgressRange*)theRange->NativeInstance);
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

void Macad::Occt::BinTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream)
{
    std::ostringstream oss_theStream;
    ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, oss_theStream, ::Message_ProgressRange());
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

void Macad::Occt::BinTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream, bool theWithTriangles, bool theWithNormals, Macad::Occt::BinTools_FormatVersion theVersion, Macad::Occt::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_theStream;
    ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, oss_theStream, theWithTriangles, theWithNormals, (::BinTools_FormatVersion)theVersion, *(::Message_ProgressRange*)theRange->NativeInstance);
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

void Macad::Occt::BinTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream, bool theWithTriangles, bool theWithNormals, Macad::Occt::BinTools_FormatVersion theVersion)
{
    std::ostringstream oss_theStream;
    ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, oss_theStream, theWithTriangles, theWithNormals, (::BinTools_FormatVersion)theVersion, ::Message_ProgressRange());
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

bool Macad::Occt::BinTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, Macad::Occt::Message_ProgressRange^ theRange)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, *(::Message_ProgressRange*)theRange->NativeInstance);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool Macad::Occt::BinTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, ::Message_ProgressRange());
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool Macad::Occt::BinTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, bool theWithTriangles, bool theWithNormals, Macad::Occt::BinTools_FormatVersion theVersion, Macad::Occt::Message_ProgressRange^ theRange)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, theWithTriangles, theWithNormals, (::BinTools_FormatVersion)theVersion, *(::Message_ProgressRange*)theRange->NativeInstance);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool Macad::Occt::BinTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, bool theWithTriangles, bool theWithNormals, Macad::Occt::BinTools_FormatVersion theVersion)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BinTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, theWithTriangles, theWithNormals, (::BinTools_FormatVersion)theVersion, ::Message_ProgressRange());
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool Macad::Occt::BinTools::Read(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, Macad::Occt::Message_ProgressRange^ theRange)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BinTools::Read(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, *(::Message_ProgressRange*)theRange->NativeInstance);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool Macad::Occt::BinTools::Read(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BinTools::Read(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, ::Message_ProgressRange());
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BinTools_OStream
//---------------------------------------------------------------------

Macad::Occt::BinTools_OStream::BinTools_OStream(System::IO::TextWriter^ theStream)
    : Macad::Occt::BaseClass<::BinTools_OStream>(BaseClass::InitMode::Uninitialized)
{
    std::ostringstream oss_theStream;
    _NativeInstance = new ::BinTools_OStream(oss_theStream);
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

long long unsigned int Macad::Occt::BinTools_OStream::Position()
{
    long long unsigned int _result = ((::BinTools_OStream*)_NativeInstance)->Position();
    return _result;
}

void Macad::Occt::BinTools_OStream::WriteReference(long long unsigned int thePosition)
{
    pin_ptr<long long unsigned int> pp_thePosition = &thePosition;
    ((::BinTools_OStream*)_NativeInstance)->WriteReference(*(long long unsigned int*)pp_thePosition);
}

void Macad::Occt::BinTools_OStream::WriteShape(Macad::Occt::TopAbs_ShapeEnum theType, Macad::Occt::TopAbs_Orientation theOrientation)
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
    : Macad::Occt::BaseClass<::BinTools_Curve2dSet>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BinTools_Curve2dSet();
}

void Macad::Occt::BinTools_Curve2dSet::Clear()
{
    ((::BinTools_Curve2dSet*)_NativeInstance)->Clear();
}

int Macad::Occt::BinTools_Curve2dSet::Add(Macad::Occt::Geom2d_Curve^ C)
{
    int _result = ((::BinTools_Curve2dSet*)_NativeInstance)->Add(Handle(::Geom2d_Curve)(C->NativeInstance));
    return _result;
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BinTools_Curve2dSet::Curve2d(int I)
{
    Handle(::Geom2d_Curve) _result = ((::BinTools_Curve2dSet*)_NativeInstance)->Curve2d(I);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

int Macad::Occt::BinTools_Curve2dSet::Index(Macad::Occt::Geom2d_Curve^ C)
{
    int _result = ((::BinTools_Curve2dSet*)_NativeInstance)->Index(Handle(::Geom2d_Curve)(C->NativeInstance));
    return _result;
}

void Macad::Occt::BinTools_Curve2dSet::Write(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_OS;
    ((::BinTools_Curve2dSet*)_NativeInstance)->Write(oss_OS, *(::Message_ProgressRange*)theRange->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BinTools_Curve2dSet::Write(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_Curve2dSet*)_NativeInstance)->Write(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BinTools_Curve2dSet::WriteCurve2d(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::BinTools_OStream^ OS)
{
    ::BinTools_Curve2dSet::WriteCurve2d(Handle(::Geom2d_Curve)(C->NativeInstance), *(::BinTools_OStream*)OS->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BinTools_CurveSet
//---------------------------------------------------------------------

Macad::Occt::BinTools_CurveSet::BinTools_CurveSet()
    : Macad::Occt::BaseClass<::BinTools_CurveSet>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BinTools_CurveSet();
}

void Macad::Occt::BinTools_CurveSet::Clear()
{
    ((::BinTools_CurveSet*)_NativeInstance)->Clear();
}

int Macad::Occt::BinTools_CurveSet::Add(Macad::Occt::Geom_Curve^ C)
{
    int _result = ((::BinTools_CurveSet*)_NativeInstance)->Add(Handle(::Geom_Curve)(C->NativeInstance));
    return _result;
}

Macad::Occt::Geom_Curve^ Macad::Occt::BinTools_CurveSet::Curve(int I)
{
    Handle(::Geom_Curve) _result = ((::BinTools_CurveSet*)_NativeInstance)->Curve(I);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

int Macad::Occt::BinTools_CurveSet::Index(Macad::Occt::Geom_Curve^ C)
{
    int _result = ((::BinTools_CurveSet*)_NativeInstance)->Index(Handle(::Geom_Curve)(C->NativeInstance));
    return _result;
}

void Macad::Occt::BinTools_CurveSet::Write(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_OS;
    ((::BinTools_CurveSet*)_NativeInstance)->Write(oss_OS, *(::Message_ProgressRange*)theRange->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BinTools_CurveSet::Write(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_CurveSet*)_NativeInstance)->Write(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BinTools_CurveSet::WriteCurve(Macad::Occt::Geom_Curve^ C, Macad::Occt::BinTools_OStream^ OS)
{
    ::BinTools_CurveSet::WriteCurve(Handle(::Geom_Curve)(C->NativeInstance), *(::BinTools_OStream*)OS->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BinTools_IStream
//---------------------------------------------------------------------

Macad::Occt::BinTools_ObjectType Macad::Occt::BinTools_IStream::ReadType()
{
    ::BinTools_ObjectType _result = ((::BinTools_IStream*)_NativeInstance)->ReadType();
    return (Macad::Occt::BinTools_ObjectType)_result;
}

Macad::Occt::BinTools_ObjectType Macad::Occt::BinTools_IStream::LastType()
{
    ::BinTools_ObjectType _result = ((::BinTools_IStream*)_NativeInstance)->LastType();
    return (Macad::Occt::BinTools_ObjectType)_result;
}

Macad::Occt::TopAbs_ShapeEnum Macad::Occt::BinTools_IStream::ShapeType()
{
    ::TopAbs_ShapeEnum _result = ((::BinTools_IStream*)_NativeInstance)->ShapeType();
    return (Macad::Occt::TopAbs_ShapeEnum)_result;
}

Macad::Occt::TopAbs_Orientation Macad::Occt::BinTools_IStream::ShapeOrientation()
{
    ::TopAbs_Orientation _result = ((::BinTools_IStream*)_NativeInstance)->ShapeOrientation();
    return (Macad::Occt::TopAbs_Orientation)_result;
}

long long unsigned int Macad::Occt::BinTools_IStream::Position()
{
    long long unsigned int _result = ((::BinTools_IStream*)_NativeInstance)->Position();
    return _result;
}

void Macad::Occt::BinTools_IStream::GoTo(long long unsigned int thePosition)
{
    pin_ptr<long long unsigned int> pp_thePosition = &thePosition;
    ((::BinTools_IStream*)_NativeInstance)->GoTo(*(long long unsigned int*)pp_thePosition);
}

bool Macad::Occt::BinTools_IStream::IsReference()
{
    bool _result = ((::BinTools_IStream*)_NativeInstance)->IsReference();
    return _result;
}

long long unsigned int Macad::Occt::BinTools_IStream::ReadReference()
{
    long long unsigned int _result = ((::BinTools_IStream*)_NativeInstance)->ReadReference();
    return _result;
}

void Macad::Occt::BinTools_IStream::UpdatePosition()
{
    ((::BinTools_IStream*)_NativeInstance)->UpdatePosition();
}

double Macad::Occt::BinTools_IStream::ReadReal()
{
    double _result = ((::BinTools_IStream*)_NativeInstance)->ReadReal();
    return _result;
}

int Macad::Occt::BinTools_IStream::ReadInteger()
{
    int _result = ((::BinTools_IStream*)_NativeInstance)->ReadInteger();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::BinTools_IStream::ReadPnt()
{
    ::gp_Pnt _nativeResult = ((::BinTools_IStream*)_NativeInstance)->ReadPnt();
    return Macad::Occt::Pnt(_nativeResult);
}

unsigned char Macad::Occt::BinTools_IStream::ReadByte()
{
    unsigned char _result = ((::BinTools_IStream*)_NativeInstance)->ReadByte();
    return _result;
}

bool Macad::Occt::BinTools_IStream::ReadBool()
{
    bool _result = ((::BinTools_IStream*)_NativeInstance)->ReadBool();
    return _result;
}

float Macad::Occt::BinTools_IStream::ReadShortReal()
{
    float _result = ((::BinTools_IStream*)_NativeInstance)->ReadShortReal();
    return _result;
}

void Macad::Occt::BinTools_IStream::ReadBools(bool% theBool1, bool% theBool2, bool% theBool3)
{
    pin_ptr<bool> pp_theBool1 = &theBool1;
    pin_ptr<bool> pp_theBool2 = &theBool2;
    pin_ptr<bool> pp_theBool3 = &theBool3;
    ((::BinTools_IStream*)_NativeInstance)->ReadBools(*(bool*)pp_theBool1, *(bool*)pp_theBool2, *(bool*)pp_theBool3);
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
    ((::BinTools_IStream*)_NativeInstance)->ReadBools(*(bool*)pp_theBool1, *(bool*)pp_theBool2, *(bool*)pp_theBool3, *(bool*)pp_theBool4, *(bool*)pp_theBool5, *(bool*)pp_theBool6, *(bool*)pp_theBool7);
}



//---------------------------------------------------------------------
//  Class  BinTools_LocationSet
//---------------------------------------------------------------------

Macad::Occt::BinTools_LocationSet::BinTools_LocationSet()
    : Macad::Occt::BaseClass<::BinTools_LocationSet>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BinTools_LocationSet();
}

void Macad::Occt::BinTools_LocationSet::Clear()
{
    ((::BinTools_LocationSet*)_NativeInstance)->Clear();
}

int Macad::Occt::BinTools_LocationSet::Add(Macad::Occt::TopLoc_Location^ L)
{
    int _result = ((::BinTools_LocationSet*)_NativeInstance)->Add(*(::TopLoc_Location*)L->NativeInstance);
    return _result;
}

Macad::Occt::TopLoc_Location^ Macad::Occt::BinTools_LocationSet::Location(int I)
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::BinTools_LocationSet*)_NativeInstance)->Location(I);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

int Macad::Occt::BinTools_LocationSet::Index(Macad::Occt::TopLoc_Location^ L)
{
    int _result = ((::BinTools_LocationSet*)_NativeInstance)->Index(*(::TopLoc_Location*)L->NativeInstance);
    return _result;
}

int Macad::Occt::BinTools_LocationSet::NbLocations()
{
    int _result = ((::BinTools_LocationSet*)_NativeInstance)->NbLocations();
    return _result;
}

void Macad::Occt::BinTools_LocationSet::Write(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_LocationSet*)_NativeInstance)->Write(oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  BinTools_ShapeSetBase
//---------------------------------------------------------------------

Macad::Occt::BinTools_ShapeSetBase::BinTools_ShapeSetBase()
    : Macad::Occt::BaseClass<::BinTools_ShapeSetBase>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BinTools_ShapeSetBase();
}

bool Macad::Occt::BinTools_ShapeSetBase::IsWithTriangles()
{
    bool _result = ((::BinTools_ShapeSetBase*)_NativeInstance)->IsWithTriangles();
    return _result;
}

bool Macad::Occt::BinTools_ShapeSetBase::IsWithNormals()
{
    bool _result = ((::BinTools_ShapeSetBase*)_NativeInstance)->IsWithNormals();
    return _result;
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
    int _result = ((::BinTools_ShapeSetBase*)_NativeInstance)->FormatNb();
    return _result;
}

void Macad::Occt::BinTools_ShapeSetBase::Clear()
{
    ((::BinTools_ShapeSetBase*)_NativeInstance)->Clear();
}

void Macad::Occt::BinTools_ShapeSetBase::Write(System::IO::TextWriter^ parameter1, Macad::Occt::Message_ProgressRange^ parameter2)
{
    std::ostringstream oss_parameter1;
    ((::BinTools_ShapeSetBase*)_NativeInstance)->Write(oss_parameter1, *(::Message_ProgressRange*)parameter2->NativeInstance);
    parameter1->Write(gcnew System::String(oss_parameter1.str().c_str()));
}

void Macad::Occt::BinTools_ShapeSetBase::Write(System::IO::TextWriter^ parameter1)
{
    std::ostringstream oss_parameter1;
    ((::BinTools_ShapeSetBase*)_NativeInstance)->Write(oss_parameter1, ::Message_ProgressRange());
    parameter1->Write(gcnew System::String(oss_parameter1.str().c_str()));
}

void Macad::Occt::BinTools_ShapeSetBase::Write(Macad::Occt::TopoDS_Shape^ parameter1, System::IO::TextWriter^ parameter2)
{
    std::ostringstream oss_parameter2;
    ((::BinTools_ShapeSetBase*)_NativeInstance)->Write(*(::TopoDS_Shape*)parameter1->NativeInstance, oss_parameter2);
    parameter2->Write(gcnew System::String(oss_parameter2.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  BinTools_ShapeReader
//---------------------------------------------------------------------

Macad::Occt::BinTools_ShapeReader::BinTools_ShapeReader()
    : Macad::Occt::BinTools_ShapeSetBase(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BinTools_ShapeReader();
}

void Macad::Occt::BinTools_ShapeReader::Clear()
{
    ((::BinTools_ShapeReader*)_NativeInstance)->Clear();
}

Macad::Occt::TopLoc_Location^ Macad::Occt::BinTools_ShapeReader::ReadLocation(Macad::Occt::BinTools_IStream^ theStream)
{
    const ::TopLoc_Location* _result = ((::BinTools_ShapeReader*)_NativeInstance)->ReadLocation(*(::BinTools_IStream*)theStream->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location((::TopLoc_Location*)_result);
}



//---------------------------------------------------------------------
//  Class  BinTools_SurfaceSet
//---------------------------------------------------------------------

Macad::Occt::BinTools_SurfaceSet::BinTools_SurfaceSet()
    : Macad::Occt::BaseClass<::BinTools_SurfaceSet>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BinTools_SurfaceSet();
}

void Macad::Occt::BinTools_SurfaceSet::Clear()
{
    ((::BinTools_SurfaceSet*)_NativeInstance)->Clear();
}

int Macad::Occt::BinTools_SurfaceSet::Add(Macad::Occt::Geom_Surface^ S)
{
    int _result = ((::BinTools_SurfaceSet*)_NativeInstance)->Add(Handle(::Geom_Surface)(S->NativeInstance));
    return _result;
}

Macad::Occt::Geom_Surface^ Macad::Occt::BinTools_SurfaceSet::Surface(int I)
{
    Handle(::Geom_Surface) _result = ((::BinTools_SurfaceSet*)_NativeInstance)->Surface(I);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

int Macad::Occt::BinTools_SurfaceSet::Index(Macad::Occt::Geom_Surface^ S)
{
    int _result = ((::BinTools_SurfaceSet*)_NativeInstance)->Index(Handle(::Geom_Surface)(S->NativeInstance));
    return _result;
}

void Macad::Occt::BinTools_SurfaceSet::Write(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_OS;
    ((::BinTools_SurfaceSet*)_NativeInstance)->Write(oss_OS, *(::Message_ProgressRange*)theRange->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BinTools_SurfaceSet::Write(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_SurfaceSet*)_NativeInstance)->Write(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BinTools_SurfaceSet::WriteSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::BinTools_OStream^ OS)
{
    ::BinTools_SurfaceSet::WriteSurface(Handle(::Geom_Surface)(S->NativeInstance), *(::BinTools_OStream*)OS->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BinTools_ShapeSet
//---------------------------------------------------------------------

Macad::Occt::BinTools_ShapeSet::BinTools_ShapeSet()
    : Macad::Occt::BinTools_ShapeSetBase(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BinTools_ShapeSet();
}

void Macad::Occt::BinTools_ShapeSet::Clear()
{
    ((::BinTools_ShapeSet*)_NativeInstance)->Clear();
}

int Macad::Occt::BinTools_ShapeSet::Add(Macad::Occt::TopoDS_Shape^ S)
{
    int _result = ((::BinTools_ShapeSet*)_NativeInstance)->Add(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BinTools_ShapeSet::Shape(int I)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BinTools_ShapeSet*)_NativeInstance)->Shape(I);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

int Macad::Occt::BinTools_ShapeSet::Index(Macad::Occt::TopoDS_Shape^ S)
{
    int _result = ((::BinTools_ShapeSet*)_NativeInstance)->Index(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

Macad::Occt::BinTools_LocationSet^ Macad::Occt::BinTools_ShapeSet::Locations()
{
    ::BinTools_LocationSet* _result = new ::BinTools_LocationSet();
    *_result = (::BinTools_LocationSet)((::BinTools_ShapeSet*)_NativeInstance)->Locations();
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
    int _result = ((::BinTools_ShapeSet*)_NativeInstance)->NbShapes();
    return _result;
}

void Macad::Occt::BinTools_ShapeSet::Write(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->Write(oss_OS, *(::Message_ProgressRange*)theRange->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BinTools_ShapeSet::Write(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->Write(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BinTools_ShapeSet::Write(Macad::Occt::TopoDS_Shape^ S, System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->Write(*(::TopoDS_Shape*)S->NativeInstance, oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BinTools_ShapeSet::WriteGeometry(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->WriteGeometry(oss_OS, *(::Message_ProgressRange*)theRange->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BinTools_ShapeSet::WriteGeometry(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->WriteGeometry(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BinTools_ShapeSet::WriteShape(Macad::Occt::TopoDS_Shape^ S, System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->WriteShape(*(::TopoDS_Shape*)S->NativeInstance, oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BinTools_ShapeSet::AddShape(Macad::Occt::TopoDS_Shape^ S)
{
    ((::BinTools_ShapeSet*)_NativeInstance)->AddShape(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::BinTools_ShapeSet::AddShapes(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2)
{
    ((::BinTools_ShapeSet*)_NativeInstance)->AddShapes(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance);
}

void Macad::Occt::BinTools_ShapeSet::WritePolygon3D(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->WritePolygon3D(oss_OS, *(::Message_ProgressRange*)theRange->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BinTools_ShapeSet::WritePolygon3D(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->WritePolygon3D(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BinTools_ShapeSet::WriteTriangulation(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->WriteTriangulation(oss_OS, *(::Message_ProgressRange*)theRange->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BinTools_ShapeSet::WriteTriangulation(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->WriteTriangulation(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BinTools_ShapeSet::WritePolygonOnTriangulation(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theRange)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->WritePolygonOnTriangulation(oss_OS, *(::Message_ProgressRange*)theRange->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BinTools_ShapeSet::WritePolygonOnTriangulation(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BinTools_ShapeSet*)_NativeInstance)->WritePolygonOnTriangulation(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}


