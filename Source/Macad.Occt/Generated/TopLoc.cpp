// Generated wrapper code for package TopLoc

#include "OcctPCH.h"
#include "TopLoc.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  TopLoc_MapOfLocation
//---------------------------------------------------------------------

Macad::Occt::TopLoc_MapOfLocation::TopLoc_MapOfLocation()
    : Macad::Occt::BaseClass<::TopLoc_MapOfLocation>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_MapOfLocation();
}

Macad::Occt::TopLoc_MapOfLocation::TopLoc_MapOfLocation(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopLoc_MapOfLocation>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_MapOfLocation(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TopLoc_MapOfLocation::TopLoc_MapOfLocation(int theNbBuckets)
    : Macad::Occt::BaseClass<::TopLoc_MapOfLocation>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_MapOfLocation(theNbBuckets, 0L);
}

void Macad::Occt::TopLoc_MapOfLocation::Exchange(Macad::Occt::TopLoc_MapOfLocation^ theOther)
{
    ((::TopLoc_MapOfLocation*)_NativeInstance)->Exchange(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
}

Macad::Occt::TopLoc_MapOfLocation^ Macad::Occt::TopLoc_MapOfLocation::Assign(Macad::Occt::TopLoc_MapOfLocation^ theOther)
{
    ::TopLoc_MapOfLocation* _result = new ::TopLoc_MapOfLocation();
    *_result = ((::TopLoc_MapOfLocation*)_NativeInstance)->Assign(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_MapOfLocation(_result);
}

void Macad::Occt::TopLoc_MapOfLocation::ReSize(int N)
{
    ((::TopLoc_MapOfLocation*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TopLoc_MapOfLocation::Add(Macad::Occt::TopLoc_Location^ theKey)
{
    bool _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->Add(*(::TopLoc_Location*)theKey->NativeInstance);
    return _result;
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopLoc_MapOfLocation::Added(Macad::Occt::TopLoc_Location^ theKey)
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::TopLoc_MapOfLocation*)_NativeInstance)->Added(*(::TopLoc_Location*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

bool Macad::Occt::TopLoc_MapOfLocation::Contains(Macad::Occt::TopLoc_Location^ theKey)
{
    bool _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->Contains(*(::TopLoc_Location*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::TopLoc_MapOfLocation::Remove(Macad::Occt::TopLoc_Location^ K)
{
    bool _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->Remove(*(::TopLoc_Location*)K->NativeInstance);
    return _result;
}

void Macad::Occt::TopLoc_MapOfLocation::Clear(bool doReleaseMemory)
{
    ((::TopLoc_MapOfLocation*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopLoc_MapOfLocation::Clear()
{
    ((::TopLoc_MapOfLocation*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TopLoc_MapOfLocation::Size()
{
    int _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->Size();
    return _result;
}

bool Macad::Occt::TopLoc_MapOfLocation::IsEqual(Macad::Occt::TopLoc_MapOfLocation^ theOther)
{
    bool _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->IsEqual(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TopLoc_MapOfLocation::Union(Macad::Occt::TopLoc_MapOfLocation^ theLeft, Macad::Occt::TopLoc_MapOfLocation^ theRight)
{
    ((::TopLoc_MapOfLocation*)_NativeInstance)->Union(*(::TopLoc_MapOfLocation*)theLeft->NativeInstance, *(::TopLoc_MapOfLocation*)theRight->NativeInstance);
}

bool Macad::Occt::TopLoc_MapOfLocation::Unite(Macad::Occt::TopLoc_MapOfLocation^ theOther)
{
    bool _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->Unite(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TopLoc_MapOfLocation::HasIntersection(Macad::Occt::TopLoc_MapOfLocation^ theMap)
{
    bool _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->HasIntersection(*(::TopLoc_MapOfLocation*)theMap->NativeInstance);
    return _result;
}

void Macad::Occt::TopLoc_MapOfLocation::Intersection(Macad::Occt::TopLoc_MapOfLocation^ theLeft, Macad::Occt::TopLoc_MapOfLocation^ theRight)
{
    ((::TopLoc_MapOfLocation*)_NativeInstance)->Intersection(*(::TopLoc_MapOfLocation*)theLeft->NativeInstance, *(::TopLoc_MapOfLocation*)theRight->NativeInstance);
}

bool Macad::Occt::TopLoc_MapOfLocation::Intersect(Macad::Occt::TopLoc_MapOfLocation^ theOther)
{
    bool _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->Intersect(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TopLoc_MapOfLocation::Subtraction(Macad::Occt::TopLoc_MapOfLocation^ theLeft, Macad::Occt::TopLoc_MapOfLocation^ theRight)
{
    ((::TopLoc_MapOfLocation*)_NativeInstance)->Subtraction(*(::TopLoc_MapOfLocation*)theLeft->NativeInstance, *(::TopLoc_MapOfLocation*)theRight->NativeInstance);
}

bool Macad::Occt::TopLoc_MapOfLocation::Subtract(Macad::Occt::TopLoc_MapOfLocation^ theOther)
{
    bool _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->Subtract(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TopLoc_MapOfLocation::Difference(Macad::Occt::TopLoc_MapOfLocation^ theLeft, Macad::Occt::TopLoc_MapOfLocation^ theRight)
{
    ((::TopLoc_MapOfLocation*)_NativeInstance)->Difference(*(::TopLoc_MapOfLocation*)theLeft->NativeInstance, *(::TopLoc_MapOfLocation*)theRight->NativeInstance);
}

bool Macad::Occt::TopLoc_MapOfLocation::Differ(Macad::Occt::TopLoc_MapOfLocation^ theOther)
{
    bool _result = ((::TopLoc_MapOfLocation*)_NativeInstance)->Differ(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TopLoc_MapOfLocation::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TopLoc_MapOfLocation::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((TopLoc_MapOfLocation^)obj)->NativeInstance);
    }
    return false;
}

System::Collections::Generic::IEnumerator<Macad::Occt::TopLoc_Location^>^ Macad::Occt::TopLoc_MapOfLocation::GetEnumerator()
{
    return gcnew Macad::Occt::TopLoc_MapOfLocation::Iterator(new ::TopLoc_MapOfLocation::Iterator(*NativeInstance));
}

System::Collections::IEnumerator^ Macad::Occt::TopLoc_MapOfLocation::GetEnumerator2()
{
    return gcnew Macad::Occt::TopLoc_MapOfLocation::Iterator(new ::TopLoc_MapOfLocation::Iterator(*NativeInstance));
}



//---------------------------------------------------------------------
//  Class  TopLoc_MapOfLocation::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopLoc_MapOfLocation::Iterator::Iterator()
    : Macad::Occt::IteratorEnumerator<Macad::Occt::TopLoc_Location^, ::TopLoc_MapOfLocation::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_MapOfLocation::Iterator();
}

bool Macad::Occt::TopLoc_MapOfLocation::Iterator::More()
{
    bool _result = ((::TopLoc_MapOfLocation::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopLoc_MapOfLocation::Iterator::Next()
{
    ((::TopLoc_MapOfLocation::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopLoc_MapOfLocation::Iterator::Value()
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::TopLoc_MapOfLocation::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopLoc_MapOfLocation::Iterator::Key()
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::TopLoc_MapOfLocation::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}



//---------------------------------------------------------------------
//  Class  TopLoc_Datum3D
//---------------------------------------------------------------------

Macad::Occt::TopLoc_Datum3D::TopLoc_Datum3D()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopLoc_Datum3D();
}

Macad::Occt::TopLoc_Datum3D::TopLoc_Datum3D(Macad::Occt::Trsf T)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Trsf> pp_T = &T;
    NativeInstance = new ::TopLoc_Datum3D(*(gp_Trsf*)pp_T);
}

Macad::Occt::Trsf Macad::Occt::TopLoc_Datum3D::Transformation()
{
    ::gp_Trsf _nativeResult = ((::TopLoc_Datum3D*)_NativeInstance)->Transformation();
    return Macad::Occt::Trsf(_nativeResult);
}

Macad::Occt::Trsf Macad::Occt::TopLoc_Datum3D::Trsf()
{
    ::gp_Trsf _nativeResult = ((::TopLoc_Datum3D*)_NativeInstance)->Trsf();
    return Macad::Occt::Trsf(_nativeResult);
}

Macad::Occt::TrsfForm Macad::Occt::TopLoc_Datum3D::Form()
{
    ::gp_TrsfForm _result = ((::TopLoc_Datum3D*)_NativeInstance)->Form();
    return (Macad::Occt::TrsfForm)_result;
}

void Macad::Occt::TopLoc_Datum3D::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::TopLoc_Datum3D*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::TopLoc_Datum3D::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::TopLoc_Datum3D*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::TopLoc_Datum3D::ShallowDump(System::IO::TextWriter^ S)
{
    std::ostringstream oss_S;
    ((::TopLoc_Datum3D*)_NativeInstance)->ShallowDump(oss_S);
    S->Write(gcnew System::String(oss_S.str().c_str()));
}

Macad::Occt::TopLoc_Datum3D^ Macad::Occt::TopLoc_Datum3D::CreateDowncasted(::TopLoc_Datum3D* instance)
{
    return gcnew Macad::Occt::TopLoc_Datum3D( instance );
}



//---------------------------------------------------------------------
//  Class  TopLoc_SListNodeOfItemLocation
//---------------------------------------------------------------------

Macad::Occt::TopLoc_SListNodeOfItemLocation::TopLoc_SListNodeOfItemLocation(Macad::Occt::TopLoc_ItemLocation^ I, Macad::Occt::TopLoc_SListOfItemLocation^ aTail)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopLoc_SListNodeOfItemLocation(*(::TopLoc_ItemLocation*)I->NativeInstance, *(::TopLoc_SListOfItemLocation*)aTail->NativeInstance);
}

Macad::Occt::TopLoc_SListOfItemLocation^ Macad::Occt::TopLoc_SListNodeOfItemLocation::Tail()
{
    ::TopLoc_SListOfItemLocation* _result = new ::TopLoc_SListOfItemLocation();
    *_result = ((::TopLoc_SListNodeOfItemLocation*)_NativeInstance)->Tail();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_SListOfItemLocation(_result);
}

Macad::Occt::TopLoc_ItemLocation^ Macad::Occt::TopLoc_SListNodeOfItemLocation::Value()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TopLoc_SListNodeOfItemLocation^ Macad::Occt::TopLoc_SListNodeOfItemLocation::CreateDowncasted(::TopLoc_SListNodeOfItemLocation* instance)
{
    return gcnew Macad::Occt::TopLoc_SListNodeOfItemLocation( instance );
}



//---------------------------------------------------------------------
//  Class  TopLoc_ItemLocation
//---------------------------------------------------------------------

Macad::Occt::TopLoc_ItemLocation::TopLoc_ItemLocation(Macad::Occt::TopLoc_Datum3D^ D, int P)
    : Macad::Occt::BaseClass<::TopLoc_ItemLocation>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_ItemLocation(Handle(::TopLoc_Datum3D)(D->NativeInstance), P);
}

void Macad::Occt::TopLoc_ItemLocation::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::TopLoc_ItemLocation*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::TopLoc_ItemLocation::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::TopLoc_ItemLocation*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  TopLoc_SListOfItemLocation
//---------------------------------------------------------------------

Macad::Occt::TopLoc_SListOfItemLocation::TopLoc_SListOfItemLocation()
    : Macad::Occt::BaseClass<::TopLoc_SListOfItemLocation>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_SListOfItemLocation();
}

Macad::Occt::TopLoc_SListOfItemLocation::TopLoc_SListOfItemLocation(Macad::Occt::TopLoc_ItemLocation^ anItem, Macad::Occt::TopLoc_SListOfItemLocation^ aTail)
    : Macad::Occt::BaseClass<::TopLoc_SListOfItemLocation>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_SListOfItemLocation(*(::TopLoc_ItemLocation*)anItem->NativeInstance, *(::TopLoc_SListOfItemLocation*)aTail->NativeInstance);
}

Macad::Occt::TopLoc_SListOfItemLocation^ Macad::Occt::TopLoc_SListOfItemLocation::Assign(Macad::Occt::TopLoc_SListOfItemLocation^ Other)
{
    ::TopLoc_SListOfItemLocation* _result = new ::TopLoc_SListOfItemLocation();
    *_result = ((::TopLoc_SListOfItemLocation*)_NativeInstance)->Assign(*(::TopLoc_SListOfItemLocation*)Other->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_SListOfItemLocation(_result);
}

bool Macad::Occt::TopLoc_SListOfItemLocation::IsEmpty()
{
    bool _result = ((::TopLoc_SListOfItemLocation*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::TopLoc_SListOfItemLocation::Clear()
{
    ((::TopLoc_SListOfItemLocation*)_NativeInstance)->Clear();
}

Macad::Occt::TopLoc_ItemLocation^ Macad::Occt::TopLoc_SListOfItemLocation::Value()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TopLoc_SListOfItemLocation^ Macad::Occt::TopLoc_SListOfItemLocation::Tail()
{
    ::TopLoc_SListOfItemLocation* _result = new ::TopLoc_SListOfItemLocation();
    *_result = (::TopLoc_SListOfItemLocation)((::TopLoc_SListOfItemLocation*)_NativeInstance)->Tail();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_SListOfItemLocation(_result);
}

void Macad::Occt::TopLoc_SListOfItemLocation::Construct(Macad::Occt::TopLoc_ItemLocation^ anItem)
{
    ((::TopLoc_SListOfItemLocation*)_NativeInstance)->Construct(*(::TopLoc_ItemLocation*)anItem->NativeInstance);
}

void Macad::Occt::TopLoc_SListOfItemLocation::ToTail()
{
    ((::TopLoc_SListOfItemLocation*)_NativeInstance)->ToTail();
}

bool Macad::Occt::TopLoc_SListOfItemLocation::More()
{
    bool _result = ((::TopLoc_SListOfItemLocation*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopLoc_SListOfItemLocation::Next()
{
    ((::TopLoc_SListOfItemLocation*)_NativeInstance)->Next();
}



//---------------------------------------------------------------------
//  Class  TopLoc_Location
//---------------------------------------------------------------------

Macad::Occt::TopLoc_Location::TopLoc_Location()
    : Macad::Occt::BaseClass<::TopLoc_Location>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_Location();
}

Macad::Occt::TopLoc_Location::TopLoc_Location(Macad::Occt::Trsf T)
    : Macad::Occt::BaseClass<::TopLoc_Location>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Trsf> pp_T = &T;
    _NativeInstance = new ::TopLoc_Location(*(gp_Trsf*)pp_T);
}

Macad::Occt::TopLoc_Location::TopLoc_Location(Macad::Occt::TopLoc_Datum3D^ D)
    : Macad::Occt::BaseClass<::TopLoc_Location>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopLoc_Location(Handle(::TopLoc_Datum3D)(D->NativeInstance));
}

bool Macad::Occt::TopLoc_Location::IsIdentity()
{
    bool _result = ((::TopLoc_Location*)_NativeInstance)->IsIdentity();
    return _result;
}

void Macad::Occt::TopLoc_Location::Identity()
{
    ((::TopLoc_Location*)_NativeInstance)->Identity();
}

Macad::Occt::TopLoc_Datum3D^ Macad::Occt::TopLoc_Location::FirstDatum()
{
    Handle(::TopLoc_Datum3D) _result = ((::TopLoc_Location*)_NativeInstance)->FirstDatum();
    return _result.IsNull() ? nullptr : Macad::Occt::TopLoc_Datum3D::CreateDowncasted(_result.get());
}

int Macad::Occt::TopLoc_Location::FirstPower()
{
    int _result = ((::TopLoc_Location*)_NativeInstance)->FirstPower();
    return _result;
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopLoc_Location::NextLocation()
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::TopLoc_Location*)_NativeInstance)->NextLocation();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

Macad::Occt::Trsf Macad::Occt::TopLoc_Location::Transformation()
{
    ::gp_Trsf _nativeResult = ((::TopLoc_Location*)_NativeInstance)->Transformation();
    return Macad::Occt::Trsf(_nativeResult);
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopLoc_Location::Inverted()
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = ((::TopLoc_Location*)_NativeInstance)->Inverted();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopLoc_Location::Multiplied(Macad::Occt::TopLoc_Location^ Other)
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = ((::TopLoc_Location*)_NativeInstance)->Multiplied(*(::TopLoc_Location*)Other->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopLoc_Location::Divided(Macad::Occt::TopLoc_Location^ Other)
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = ((::TopLoc_Location*)_NativeInstance)->Divided(*(::TopLoc_Location*)Other->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopLoc_Location::Predivided(Macad::Occt::TopLoc_Location^ Other)
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = ((::TopLoc_Location*)_NativeInstance)->Predivided(*(::TopLoc_Location*)Other->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopLoc_Location::Powered(int pwr)
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = ((::TopLoc_Location*)_NativeInstance)->Powered(pwr);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

long long unsigned int Macad::Occt::TopLoc_Location::HashCode()
{
    long long unsigned int _result = ((::TopLoc_Location*)_NativeInstance)->HashCode();
    return _result;
}

bool Macad::Occt::TopLoc_Location::IsEqual(Macad::Occt::TopLoc_Location^ Other)
{
    bool _result = ((::TopLoc_Location*)_NativeInstance)->IsEqual(*(::TopLoc_Location*)Other->NativeInstance);
    return _result;
}

bool Macad::Occt::TopLoc_Location::IsDifferent(Macad::Occt::TopLoc_Location^ Other)
{
    bool _result = ((::TopLoc_Location*)_NativeInstance)->IsDifferent(*(::TopLoc_Location*)Other->NativeInstance);
    return _result;
}

void Macad::Occt::TopLoc_Location::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::TopLoc_Location*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::TopLoc_Location::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::TopLoc_Location*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::TopLoc_Location::ShallowDump(System::IO::TextWriter^ S)
{
    std::ostringstream oss_S;
    ((::TopLoc_Location*)_NativeInstance)->ShallowDump(oss_S);
    S->Write(gcnew System::String(oss_S.str().c_str()));
}

void Macad::Occt::TopLoc_Location::Clear()
{
    ((::TopLoc_Location*)_NativeInstance)->Clear();
}

double Macad::Occt::TopLoc_Location::ScalePrec()
{
    double _result = ::TopLoc_Location::ScalePrec();
    return _result;
}

bool Macad::Occt::TopLoc_Location::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TopLoc_Location::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((TopLoc_Location^)obj)->NativeInstance);
    }
    return false;
}


