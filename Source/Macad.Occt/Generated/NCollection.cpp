// Generated wrapper code for package NCollection

#include "OcctPCH.h"
#include "NCollection.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "TColStd.h"
#include "Message.h"
#include "IntAna.h"
#include "TopoDS.h"
#include "BRep.h"
#include "TopTools.h"
#include "BRepCheck.h"
#include "Graphic3d.h"
#include "PrsMgr.h"
#include "SelectMgr.h"
#include "Prs3d.h"
#include "AIS.h"
#include "V3d.h"
#include "Image.h"


//---------------------------------------------------------------------
//  Class  NCollection_CellFilter_InspectorXYZ
//---------------------------------------------------------------------

Macad::Occt::NCollection_CellFilter_InspectorXYZ::NCollection_CellFilter_InspectorXYZ()
    : Macad::Occt::BaseClass<::NCollection_CellFilter_InspectorXYZ>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::NCollection_CellFilter_InspectorXYZ();
}

double Macad::Occt::NCollection_CellFilter_InspectorXYZ::Coord(int i, Macad::Occt::XYZ thePnt)
{
    pin_ptr<Macad::Occt::XYZ> pp_thePnt = &thePnt;
    double _result = ::NCollection_CellFilter_InspectorXYZ::Coord(i, *(gp_XYZ*)pp_thePnt);
    return _result;
}

Macad::Occt::XYZ Macad::Occt::NCollection_CellFilter_InspectorXYZ::Shift(Macad::Occt::XYZ thePnt, double theTol)
{
    pin_ptr<Macad::Occt::XYZ> pp_thePnt = &thePnt;
    ::gp_XYZ _nativeResult = ((::NCollection_CellFilter_InspectorXYZ*)_NativeInstance)->Shift(*(gp_XYZ*)pp_thePnt, theTol);
    return Macad::Occt::XYZ(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  NCollection_CellFilter_InspectorXY
//---------------------------------------------------------------------

Macad::Occt::NCollection_CellFilter_InspectorXY::NCollection_CellFilter_InspectorXY()
    : Macad::Occt::BaseClass<::NCollection_CellFilter_InspectorXY>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::NCollection_CellFilter_InspectorXY();
}

double Macad::Occt::NCollection_CellFilter_InspectorXY::Coord(int i, Macad::Occt::XY thePnt)
{
    pin_ptr<Macad::Occt::XY> pp_thePnt = &thePnt;
    double _result = ::NCollection_CellFilter_InspectorXY::Coord(i, *(gp_XY*)pp_thePnt);
    return _result;
}

Macad::Occt::XY Macad::Occt::NCollection_CellFilter_InspectorXY::Shift(Macad::Occt::XY thePnt, double theTol)
{
    pin_ptr<Macad::Occt::XY> pp_thePnt = &thePnt;
    ::gp_XY _nativeResult = ((::NCollection_CellFilter_InspectorXY*)_NativeInstance)->Shift(*(gp_XY*)pp_thePnt, theTol);
    return Macad::Occt::XY(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  NCollection_BaseAllocator
//---------------------------------------------------------------------

System::IntPtr Macad::Occt::NCollection_BaseAllocator::Allocate(long long unsigned int theSize)
{
    void* _result = ((::NCollection_BaseAllocator*)_NativeInstance)->Allocate(theSize);
    return System::IntPtr(_result);
}

System::IntPtr Macad::Occt::NCollection_BaseAllocator::AllocateOptimal(long long unsigned int theSize)
{
    void* _result = ((::NCollection_BaseAllocator*)_NativeInstance)->AllocateOptimal(theSize);
    return System::IntPtr(_result);
}

void Macad::Occt::NCollection_BaseAllocator::Free(System::IntPtr theAddress)
{
    ((::NCollection_BaseAllocator*)_NativeInstance)->Free(theAddress.ToPointer());
}

Macad::Occt::NCollection_BaseAllocator^ Macad::Occt::NCollection_BaseAllocator::CommonBaseAllocator()
{
    Handle(::NCollection_BaseAllocator) _result = ::NCollection_BaseAllocator::CommonBaseAllocator();
    return _result.IsNull() ? nullptr : Macad::Occt::NCollection_BaseAllocator::CreateDowncasted(_result.get());
}

Macad::Occt::NCollection_BaseAllocator^ Macad::Occt::NCollection_BaseAllocator::CreateDowncasted(::NCollection_BaseAllocator* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::NCollection_AccAllocator)))
        return Macad::Occt::NCollection_AccAllocator::CreateDowncasted((::NCollection_AccAllocator*)instance);
    if (instance->IsKind(STANDARD_TYPE(::NCollection_AlignedAllocator)))
        return Macad::Occt::NCollection_AlignedAllocator::CreateDowncasted((::NCollection_AlignedAllocator*)instance);
    if (instance->IsKind(STANDARD_TYPE(::NCollection_IncAllocator)))
        return Macad::Occt::NCollection_IncAllocator::CreateDowncasted((::NCollection_IncAllocator*)instance);
    if (instance->IsKind(STANDARD_TYPE(::NCollection_HeapAllocator)))
        return Macad::Occt::NCollection_HeapAllocator::CreateDowncasted((::NCollection_HeapAllocator*)instance);
    if (instance->IsKind(STANDARD_TYPE(::NCollection_WinHeapAllocator)))
        return Macad::Occt::NCollection_WinHeapAllocator::CreateDowncasted((::NCollection_WinHeapAllocator*)instance);
    
    return gcnew Macad::Occt::NCollection_BaseAllocator( instance );
}



//---------------------------------------------------------------------
//  Class  NCollection_BaseList
//---------------------------------------------------------------------

int Macad::Occt::NCollection_BaseList::Extent()
{
    int _result = ((::NCollection_BaseList*)_NativeInstance)->Extent();
    return _result;
}

bool Macad::Occt::NCollection_BaseList::IsEmpty()
{
    bool _result = ((::NCollection_BaseList*)_NativeInstance)->IsEmpty();
    return _result;
}

Macad::Occt::NCollection_BaseAllocator^ Macad::Occt::NCollection_BaseList::Allocator()
{
    Handle(::NCollection_BaseAllocator) _result = ((::NCollection_BaseList*)_NativeInstance)->Allocator();
    return _result.IsNull() ? nullptr : Macad::Occt::NCollection_BaseAllocator::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  NCollection_BaseList::Iterator
//---------------------------------------------------------------------

Macad::Occt::NCollection_BaseList::Iterator::Iterator()
    : Macad::Occt::BaseClass<::NCollection_BaseList::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::NCollection_BaseList::Iterator();
}

Macad::Occt::NCollection_BaseList::Iterator::Iterator(Macad::Occt::NCollection_BaseList^ theList)
    : Macad::Occt::BaseClass<::NCollection_BaseList::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::NCollection_BaseList::Iterator(*(::NCollection_BaseList*)theList->NativeInstance);
}

void Macad::Occt::NCollection_BaseList::Iterator::Init(Macad::Occt::NCollection_BaseList^ theList)
{
    ((::NCollection_BaseList::Iterator*)_NativeInstance)->Init(*(::NCollection_BaseList*)theList->NativeInstance);
}

void Macad::Occt::NCollection_BaseList::Iterator::Initialize(Macad::Occt::NCollection_BaseList^ theList)
{
    ((::NCollection_BaseList::Iterator*)_NativeInstance)->Initialize(*(::NCollection_BaseList*)theList->NativeInstance);
}

bool Macad::Occt::NCollection_BaseList::Iterator::More()
{
    bool _result = ((::NCollection_BaseList::Iterator*)_NativeInstance)->More();
    return _result;
}

bool Macad::Occt::NCollection_BaseList::Iterator::IsEqual(Macad::Occt::NCollection_BaseList::Iterator^ theOther)
{
    bool _result = ((::NCollection_BaseList::Iterator*)_NativeInstance)->IsEqual(*(::NCollection_BaseList::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::NCollection_BaseList::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::NCollection_BaseList::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  NCollection_BasePointerVector
//---------------------------------------------------------------------

Macad::Occt::NCollection_BasePointerVector::NCollection_BasePointerVector()
    : Macad::Occt::BaseClass<::NCollection_BasePointerVector>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::NCollection_BasePointerVector();
}

bool Macad::Occt::NCollection_BasePointerVector::IsEmpty()
{
    bool _result = ((::NCollection_BasePointerVector*)_NativeInstance)->IsEmpty();
    return _result;
}

long long unsigned int Macad::Occt::NCollection_BasePointerVector::Size()
{
    long long unsigned int _result = ((::NCollection_BasePointerVector*)_NativeInstance)->Size();
    return _result;
}

long long unsigned int Macad::Occt::NCollection_BasePointerVector::Capacity()
{
    long long unsigned int _result = ((::NCollection_BasePointerVector*)_NativeInstance)->Capacity();
    return _result;
}

void Macad::Occt::NCollection_BasePointerVector::RemoveLast()
{
    ((::NCollection_BasePointerVector*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::NCollection_BasePointerVector::Clear(bool theReleaseMemory)
{
    ((::NCollection_BasePointerVector*)_NativeInstance)->Clear(theReleaseMemory);
}

void Macad::Occt::NCollection_BasePointerVector::Clear()
{
    ((::NCollection_BasePointerVector*)_NativeInstance)->Clear(false);
}

System::IntPtr Macad::Occt::NCollection_BasePointerVector::GetArray()
{
    void* _result = ((::NCollection_BasePointerVector*)_NativeInstance)->GetArray();
    return System::IntPtr(_result);
}

System::IntPtr Macad::Occt::NCollection_BasePointerVector::Value(long long unsigned int theInd)
{
    void* _result = ((::NCollection_BasePointerVector*)_NativeInstance)->Value(theInd);
    return System::IntPtr(_result);
}

void Macad::Occt::NCollection_BasePointerVector::Append(System::IntPtr thePnt)
{
    ((::NCollection_BasePointerVector*)_NativeInstance)->Append(thePnt.ToPointer());
}

void Macad::Occt::NCollection_BasePointerVector::SetValue(long long unsigned int theInd, System::IntPtr thePnt)
{
    ((::NCollection_BasePointerVector*)_NativeInstance)->SetValue(theInd, thePnt.ToPointer());
}



//---------------------------------------------------------------------
//  Class  NCollection_AccAllocator
//---------------------------------------------------------------------

Macad::Occt::NCollection_AccAllocator::NCollection_AccAllocator(long long unsigned int theBlockSize)
    : Macad::Occt::NCollection_BaseAllocator(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::NCollection_AccAllocator(theBlockSize);
}

Macad::Occt::NCollection_AccAllocator::NCollection_AccAllocator()
    : Macad::Occt::NCollection_BaseAllocator(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::NCollection_AccAllocator(::NCollection_AccAllocator::DefaultBlockSize);
}

System::IntPtr Macad::Occt::NCollection_AccAllocator::Allocate(long long unsigned int theSize)
{
    void* _result = ((::NCollection_AccAllocator*)_NativeInstance)->Allocate(theSize);
    return System::IntPtr(_result);
}

System::IntPtr Macad::Occt::NCollection_AccAllocator::AllocateOptimal(long long unsigned int theSize)
{
    void* _result = ((::NCollection_AccAllocator*)_NativeInstance)->AllocateOptimal(theSize);
    return System::IntPtr(_result);
}

void Macad::Occt::NCollection_AccAllocator::Free(System::IntPtr theAddress)
{
    ((::NCollection_AccAllocator*)_NativeInstance)->Free(theAddress.ToPointer());
}

Macad::Occt::NCollection_AccAllocator^ Macad::Occt::NCollection_AccAllocator::CreateDowncasted(::NCollection_AccAllocator* instance)
{
    return gcnew Macad::Occt::NCollection_AccAllocator( instance );
}



//---------------------------------------------------------------------
//  Class  NCollection_AlignedAllocator
//---------------------------------------------------------------------

Macad::Occt::NCollection_AlignedAllocator::NCollection_AlignedAllocator(long long unsigned int theAlignment)
    : Macad::Occt::NCollection_BaseAllocator(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::NCollection_AlignedAllocator(theAlignment);
}

System::IntPtr Macad::Occt::NCollection_AlignedAllocator::Allocate(long long unsigned int theSize)
{
    void* _result = ((::NCollection_AlignedAllocator*)_NativeInstance)->Allocate(theSize);
    return System::IntPtr(_result);
}

System::IntPtr Macad::Occt::NCollection_AlignedAllocator::AllocateOptimal(long long unsigned int theSize)
{
    void* _result = ((::NCollection_AlignedAllocator*)_NativeInstance)->AllocateOptimal(theSize);
    return System::IntPtr(_result);
}

void Macad::Occt::NCollection_AlignedAllocator::Free(System::IntPtr thePtr)
{
    ((::NCollection_AlignedAllocator*)_NativeInstance)->Free(thePtr.ToPointer());
}

Macad::Occt::NCollection_AlignedAllocator^ Macad::Occt::NCollection_AlignedAllocator::CreateDowncasted(::NCollection_AlignedAllocator* instance)
{
    return gcnew Macad::Occt::NCollection_AlignedAllocator( instance );
}



//---------------------------------------------------------------------
//  Class  NCollection_Buffer
//---------------------------------------------------------------------

Macad::Occt::NCollection_Buffer::NCollection_Buffer(Macad::Occt::NCollection_BaseAllocator^ theAlloc, long long unsigned int theSize, unsigned char% theData)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<unsigned char> pp_theData = &theData;
    NativeInstance = new ::NCollection_Buffer(Handle(::NCollection_BaseAllocator)(theAlloc->NativeInstance), theSize, (unsigned char*)pp_theData);
}

Macad::Occt::NCollection_Buffer::NCollection_Buffer(Macad::Occt::NCollection_BaseAllocator^ theAlloc, long long unsigned int theSize)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::NCollection_Buffer(Handle(::NCollection_BaseAllocator)(theAlloc->NativeInstance), theSize, nullptr);
}

Macad::Occt::NCollection_Buffer::NCollection_Buffer(Macad::Occt::NCollection_BaseAllocator^ theAlloc)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::NCollection_Buffer(Handle(::NCollection_BaseAllocator)(theAlloc->NativeInstance), 0, nullptr);
}

unsigned char Macad::Occt::NCollection_Buffer::Data()
{
    throw gcnew System::NotImplementedException();
}

unsigned char Macad::Occt::NCollection_Buffer::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::NCollection_Buffer::IsEmpty()
{
    bool _result = ((::NCollection_Buffer*)_NativeInstance)->IsEmpty();
    return _result;
}

long long unsigned int Macad::Occt::NCollection_Buffer::Size()
{
    long long unsigned int _result = ((::NCollection_Buffer*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::NCollection_BaseAllocator^ Macad::Occt::NCollection_Buffer::Allocator()
{
    Handle(::NCollection_BaseAllocator) _result = ((::NCollection_Buffer*)_NativeInstance)->Allocator();
    return _result.IsNull() ? nullptr : Macad::Occt::NCollection_BaseAllocator::CreateDowncasted(_result.get());
}

void Macad::Occt::NCollection_Buffer::SetAllocator(Macad::Occt::NCollection_BaseAllocator^ theAlloc)
{
    ((::NCollection_Buffer*)_NativeInstance)->SetAllocator(Handle(::NCollection_BaseAllocator)(theAlloc->NativeInstance));
}

bool Macad::Occt::NCollection_Buffer::Allocate(long long unsigned int theSize)
{
    bool _result = ((::NCollection_Buffer*)_NativeInstance)->Allocate(theSize);
    return _result;
}

void Macad::Occt::NCollection_Buffer::Free()
{
    ((::NCollection_Buffer*)_NativeInstance)->Free();
}

void Macad::Occt::NCollection_Buffer::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::NCollection_Buffer*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::NCollection_Buffer::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::NCollection_Buffer*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::NCollection_Buffer^ Macad::Occt::NCollection_Buffer::CreateDowncasted(::NCollection_Buffer* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Image_PixMapData)))
        return Macad::Occt::Image_PixMapData::CreateDowncasted((::Image_PixMapData*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_BoundBuffer)))
        return Macad::Occt::Graphic3d_BoundBuffer::CreateDowncasted((::Graphic3d_BoundBuffer*)instance);
    
    return gcnew Macad::Occt::NCollection_Buffer( instance );
}



//---------------------------------------------------------------------
//  Class  NCollection_IncAllocator
//---------------------------------------------------------------------

Macad::Occt::NCollection_IncAllocator::NCollection_IncAllocator(long long unsigned int theBlockSize)
    : Macad::Occt::NCollection_BaseAllocator(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::NCollection_IncAllocator(theBlockSize);
}

Macad::Occt::NCollection_IncAllocator::NCollection_IncAllocator()
    : Macad::Occt::NCollection_BaseAllocator(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::NCollection_IncAllocator(::NCollection_IncAllocator::THE_DEFAULT_BLOCK_SIZE);
}

void Macad::Occt::NCollection_IncAllocator::SetThreadSafe(bool theIsThreadSafe)
{
    ((::NCollection_IncAllocator*)_NativeInstance)->SetThreadSafe(theIsThreadSafe);
}

void Macad::Occt::NCollection_IncAllocator::SetThreadSafe()
{
    ((::NCollection_IncAllocator*)_NativeInstance)->SetThreadSafe(true);
}

System::IntPtr Macad::Occt::NCollection_IncAllocator::Allocate(long long unsigned int size)
{
    void* _result = ((::NCollection_IncAllocator*)_NativeInstance)->Allocate(size);
    return System::IntPtr(_result);
}

System::IntPtr Macad::Occt::NCollection_IncAllocator::AllocateOptimal(long long unsigned int size)
{
    void* _result = ((::NCollection_IncAllocator*)_NativeInstance)->AllocateOptimal(size);
    return System::IntPtr(_result);
}

void Macad::Occt::NCollection_IncAllocator::Free(System::IntPtr parameter1)
{
    ((::NCollection_IncAllocator*)_NativeInstance)->Free(parameter1.ToPointer());
}

void Macad::Occt::NCollection_IncAllocator::Reset(bool theReleaseMemory)
{
    ((::NCollection_IncAllocator*)_NativeInstance)->Reset(theReleaseMemory);
}

void Macad::Occt::NCollection_IncAllocator::Reset()
{
    ((::NCollection_IncAllocator*)_NativeInstance)->Reset(false);
}

Macad::Occt::NCollection_IncAllocator^ Macad::Occt::NCollection_IncAllocator::CreateDowncasted(::NCollection_IncAllocator* instance)
{
    return gcnew Macad::Occt::NCollection_IncAllocator( instance );
}



//---------------------------------------------------------------------
//  Class  NCollection_HeapAllocator
//---------------------------------------------------------------------

System::IntPtr Macad::Occt::NCollection_HeapAllocator::Allocate(long long unsigned int theSize)
{
    void* _result = ((::NCollection_HeapAllocator*)_NativeInstance)->Allocate(theSize);
    return System::IntPtr(_result);
}

System::IntPtr Macad::Occt::NCollection_HeapAllocator::AllocateOptimal(long long unsigned int theSize)
{
    void* _result = ((::NCollection_HeapAllocator*)_NativeInstance)->AllocateOptimal(theSize);
    return System::IntPtr(_result);
}

void Macad::Occt::NCollection_HeapAllocator::Free(System::IntPtr anAddress)
{
    ((::NCollection_HeapAllocator*)_NativeInstance)->Free(anAddress.ToPointer());
}

Macad::Occt::NCollection_HeapAllocator^ Macad::Occt::NCollection_HeapAllocator::GlobalHeapAllocator()
{
    Handle(::NCollection_HeapAllocator) _result = ::NCollection_HeapAllocator::GlobalHeapAllocator();
    return _result.IsNull() ? nullptr : Macad::Occt::NCollection_HeapAllocator::CreateDowncasted(_result.get());
}

Macad::Occt::NCollection_HeapAllocator^ Macad::Occt::NCollection_HeapAllocator::CreateDowncasted(::NCollection_HeapAllocator* instance)
{
    return gcnew Macad::Occt::NCollection_HeapAllocator( instance );
}



//---------------------------------------------------------------------
//  Class  NCollection_WinHeapAllocator
//---------------------------------------------------------------------

Macad::Occt::NCollection_WinHeapAllocator::NCollection_WinHeapAllocator(long long unsigned int theInitSizeBytes)
    : Macad::Occt::NCollection_BaseAllocator(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::NCollection_WinHeapAllocator(theInitSizeBytes);
}

Macad::Occt::NCollection_WinHeapAllocator::NCollection_WinHeapAllocator()
    : Macad::Occt::NCollection_BaseAllocator(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::NCollection_WinHeapAllocator(524288);
}

System::IntPtr Macad::Occt::NCollection_WinHeapAllocator::Allocate(long long unsigned int theSize)
{
    void* _result = ((::NCollection_WinHeapAllocator*)_NativeInstance)->Allocate(theSize);
    return System::IntPtr(_result);
}

System::IntPtr Macad::Occt::NCollection_WinHeapAllocator::AllocateOptimal(long long unsigned int theSize)
{
    void* _result = ((::NCollection_WinHeapAllocator*)_NativeInstance)->AllocateOptimal(theSize);
    return System::IntPtr(_result);
}

void Macad::Occt::NCollection_WinHeapAllocator::Free(System::IntPtr theAddress)
{
    ((::NCollection_WinHeapAllocator*)_NativeInstance)->Free(theAddress.ToPointer());
}

Macad::Occt::NCollection_WinHeapAllocator^ Macad::Occt::NCollection_WinHeapAllocator::CreateDowncasted(::NCollection_WinHeapAllocator* instance)
{
    return gcnew Macad::Occt::NCollection_WinHeapAllocator( instance );
}


