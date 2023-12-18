// Generated wrapper code for package TopAbs

#include "OcctPCH.h"
#include "TopAbs.h"

using namespace System::Runtime::InteropServices; // for class Marshal



//---------------------------------------------------------------------
//  Class  TopAbs
//---------------------------------------------------------------------

Macad::Occt::TopAbs::TopAbs()
    : Macad::Occt::BaseClass<::TopAbs>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopAbs();
}

Macad::Occt::TopAbs_Orientation Macad::Occt::TopAbs::Compose(Macad::Occt::TopAbs_Orientation Or1, Macad::Occt::TopAbs_Orientation Or2)
{
    ::TopAbs_Orientation _result = ::TopAbs::Compose((::TopAbs_Orientation)Or1, (::TopAbs_Orientation)Or2);
    return (Macad::Occt::TopAbs_Orientation)_result;
}

Macad::Occt::TopAbs_Orientation Macad::Occt::TopAbs::Reverse(Macad::Occt::TopAbs_Orientation Or)
{
    ::TopAbs_Orientation _result = ::TopAbs::Reverse((::TopAbs_Orientation)Or);
    return (Macad::Occt::TopAbs_Orientation)_result;
}

Macad::Occt::TopAbs_Orientation Macad::Occt::TopAbs::Complement(Macad::Occt::TopAbs_Orientation Or)
{
    ::TopAbs_Orientation _result = ::TopAbs::Complement((::TopAbs_Orientation)Or);
    return (Macad::Occt::TopAbs_Orientation)_result;
}

System::IO::TextWriter^ Macad::Occt::TopAbs::Print(Macad::Occt::TopAbs_ShapeEnum theShapeType, System::IO::TextWriter^ theStream)
{
    throw gcnew System::NotImplementedException();
}

System::IO::TextWriter^ Macad::Occt::TopAbs::Print(Macad::Occt::TopAbs_Orientation theOrientation, System::IO::TextWriter^ theStream)
{
    throw gcnew System::NotImplementedException();
}

System::IO::TextWriter^ Macad::Occt::TopAbs::Print(Macad::Occt::TopAbs_State St, System::IO::TextWriter^ S)
{
    throw gcnew System::NotImplementedException();
}

System::String^ Macad::Occt::TopAbs::ShapeTypeToString(Macad::Occt::TopAbs_ShapeEnum theType)
{
    Standard_CString _result = ::TopAbs::ShapeTypeToString((::TopAbs_ShapeEnum)theType);
    return gcnew System::String(_result);
}

Macad::Occt::TopAbs_ShapeEnum Macad::Occt::TopAbs::ShapeTypeFromString(System::String^ theTypeString)
{
    const char* sz_theTypeString = (char*)(void*)Marshal::StringToHGlobalAnsi(theTypeString);
    ::TopAbs_ShapeEnum _result = ::TopAbs::ShapeTypeFromString(sz_theTypeString);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTypeString);
    return (Macad::Occt::TopAbs_ShapeEnum)_result;
}

bool Macad::Occt::TopAbs::ShapeTypeFromString(System::String^ theTypeString, Macad::Occt::TopAbs_ShapeEnum% theType)
{
    const char* sz_theTypeString = (char*)(void*)Marshal::StringToHGlobalAnsi(theTypeString);
    pin_ptr<Macad::Occt::TopAbs_ShapeEnum> pp_theType = &theType;
    bool _result = ::TopAbs::ShapeTypeFromString(sz_theTypeString, *(::TopAbs_ShapeEnum*)pp_theType);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTypeString);
    return _result;
}

System::String^ Macad::Occt::TopAbs::ShapeOrientationToString(Macad::Occt::TopAbs_Orientation theOrientation)
{
    Standard_CString _result = ::TopAbs::ShapeOrientationToString((::TopAbs_Orientation)theOrientation);
    return gcnew System::String(_result);
}

Macad::Occt::TopAbs_Orientation Macad::Occt::TopAbs::ShapeOrientationFromString(System::String^ theOrientationString)
{
    const char* sz_theOrientationString = (char*)(void*)Marshal::StringToHGlobalAnsi(theOrientationString);
    ::TopAbs_Orientation _result = ::TopAbs::ShapeOrientationFromString(sz_theOrientationString);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theOrientationString);
    return (Macad::Occt::TopAbs_Orientation)_result;
}

bool Macad::Occt::TopAbs::ShapeOrientationFromString(System::String^ theOrientationString, Macad::Occt::TopAbs_Orientation% theOrientation)
{
    const char* sz_theOrientationString = (char*)(void*)Marshal::StringToHGlobalAnsi(theOrientationString);
    pin_ptr<Macad::Occt::TopAbs_Orientation> pp_theOrientation = &theOrientation;
    bool _result = ::TopAbs::ShapeOrientationFromString(sz_theOrientationString, *(::TopAbs_Orientation*)pp_theOrientation);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theOrientationString);
    return _result;
}


