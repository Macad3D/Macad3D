// Generated wrapper code for package NCollection

#include "OcctPCH.h"
#include "NCollection.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "Standard.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  NCollection_CellFilter_InspectorXYZ
//---------------------------------------------------------------------

Macad::Occt::NCollection_CellFilter_InspectorXYZ::NCollection_CellFilter_InspectorXYZ()
	: BaseClass<::NCollection_CellFilter_InspectorXYZ>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::NCollection_CellFilter_InspectorXYZ();
}

Macad::Occt::NCollection_CellFilter_InspectorXYZ::NCollection_CellFilter_InspectorXYZ(Macad::Occt::NCollection_CellFilter_InspectorXYZ^ parameter1)
	: BaseClass<::NCollection_CellFilter_InspectorXYZ>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::NCollection_CellFilter_InspectorXYZ(*(::NCollection_CellFilter_InspectorXYZ*)parameter1->NativeInstance);
}

double Macad::Occt::NCollection_CellFilter_InspectorXYZ::Coord(int i, Macad::Occt::XYZ thePnt)
{
	pin_ptr<Macad::Occt::XYZ> pp_thePnt = &thePnt;
	return ::NCollection_CellFilter_InspectorXYZ::Coord(i, *(gp_XYZ*)pp_thePnt);
}

Macad::Occt::XYZ Macad::Occt::NCollection_CellFilter_InspectorXYZ::Shift(Macad::Occt::XYZ thePnt, double theTol)
{
	pin_ptr<Macad::Occt::XYZ> pp_thePnt = &thePnt;
	return Macad::Occt::XYZ(((::NCollection_CellFilter_InspectorXYZ*)_NativeInstance)->Shift(*(gp_XYZ*)pp_thePnt, theTol));
}




//---------------------------------------------------------------------
//  Class  NCollection_CellFilter_InspectorXY
//---------------------------------------------------------------------

Macad::Occt::NCollection_CellFilter_InspectorXY::NCollection_CellFilter_InspectorXY()
	: BaseClass<::NCollection_CellFilter_InspectorXY>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::NCollection_CellFilter_InspectorXY();
}

Macad::Occt::NCollection_CellFilter_InspectorXY::NCollection_CellFilter_InspectorXY(Macad::Occt::NCollection_CellFilter_InspectorXY^ parameter1)
	: BaseClass<::NCollection_CellFilter_InspectorXY>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::NCollection_CellFilter_InspectorXY(*(::NCollection_CellFilter_InspectorXY*)parameter1->NativeInstance);
}

double Macad::Occt::NCollection_CellFilter_InspectorXY::Coord(int i, Macad::Occt::XY thePnt)
{
	pin_ptr<Macad::Occt::XY> pp_thePnt = &thePnt;
	return ::NCollection_CellFilter_InspectorXY::Coord(i, *(gp_XY*)pp_thePnt);
}

Macad::Occt::XY Macad::Occt::NCollection_CellFilter_InspectorXY::Shift(Macad::Occt::XY thePnt, double theTol)
{
	pin_ptr<Macad::Occt::XY> pp_thePnt = &thePnt;
	return Macad::Occt::XY(((::NCollection_CellFilter_InspectorXY*)_NativeInstance)->Shift(*(gp_XY*)pp_thePnt, theTol));
}




//---------------------------------------------------------------------
//  Class  NCollection_BaseAllocator
//---------------------------------------------------------------------

System::IntPtr Macad::Occt::NCollection_BaseAllocator::Allocate(unsigned __int64 size)
{
	return System::IntPtr(((::NCollection_BaseAllocator*)_NativeInstance)->Allocate(size));
}

void Macad::Occt::NCollection_BaseAllocator::Free(System::IntPtr anAddress)
{
	((::NCollection_BaseAllocator*)_NativeInstance)->Free(anAddress.ToPointer());
}

Macad::Occt::NCollection_BaseAllocator^ Macad::Occt::NCollection_BaseAllocator::CommonBaseAllocator()
{
	Handle(::NCollection_BaseAllocator) _result;
	_result = ::NCollection_BaseAllocator::CommonBaseAllocator();
	 return _result.IsNull() ? nullptr : Macad::Occt::NCollection_BaseAllocator::CreateDowncasted( _result.get());
}

void Macad::Occt::NCollection_BaseAllocator::StandardCallBack(bool theIsAlloc, System::IntPtr theStorage, size_t theRoundSize, size_t theSize)
{
	::NCollection_BaseAllocator::StandardCallBack(theIsAlloc, theStorage.ToPointer(), theRoundSize, theSize);
}

void Macad::Occt::NCollection_BaseAllocator::PrintMemUsageStatistics()
{
	::NCollection_BaseAllocator::PrintMemUsageStatistics();
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

Macad::Occt::NCollection_BaseList::NCollection_BaseList(Macad::Occt::NCollection_BaseList^ parameter1)
	: BaseClass<::NCollection_BaseList>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::NCollection_BaseList(*(::NCollection_BaseList*)parameter1->NativeInstance);
}

int Macad::Occt::NCollection_BaseList::Extent()
{
	return ((::NCollection_BaseList*)_NativeInstance)->Extent();
}

bool Macad::Occt::NCollection_BaseList::IsEmpty()
{
	return ((::NCollection_BaseList*)_NativeInstance)->IsEmpty();
}

Macad::Occt::NCollection_BaseAllocator^ Macad::Occt::NCollection_BaseList::Allocator()
{
	Handle(::NCollection_BaseAllocator) _result;
	_result = ((::NCollection_BaseList*)_NativeInstance)->Allocator();
	 return _result.IsNull() ? nullptr : Macad::Occt::NCollection_BaseAllocator::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  NCollection_AccAllocator
//---------------------------------------------------------------------

Macad::Occt::NCollection_AccAllocator::NCollection_AccAllocator(unsigned __int64 theBlockSize)
	: Macad::Occt::NCollection_BaseAllocator(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::NCollection_AccAllocator(theBlockSize);
}

System::IntPtr Macad::Occt::NCollection_AccAllocator::Allocate(unsigned __int64 theSize)
{
	return System::IntPtr(((::NCollection_AccAllocator*)_NativeInstance)->Allocate(theSize));
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

Macad::Occt::NCollection_AlignedAllocator::NCollection_AlignedAllocator(unsigned __int64 theAlignment)
	: Macad::Occt::NCollection_BaseAllocator(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::NCollection_AlignedAllocator(theAlignment);
}

System::IntPtr Macad::Occt::NCollection_AlignedAllocator::Allocate(unsigned __int64 theSize)
{
	return System::IntPtr(((::NCollection_AlignedAllocator*)_NativeInstance)->Allocate(theSize));
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

Macad::Occt::NCollection_Buffer::NCollection_Buffer(Macad::Occt::NCollection_BaseAllocator^ theAlloc, size_t theSize, unsigned char% theData)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAlloc = theAlloc->NativeInstance;
	pin_ptr<unsigned char> pp_theData = &theData;
	NativeInstance = new ::NCollection_Buffer(h_theAlloc, theSize, (Standard_Byte*)pp_theData);
	theAlloc->NativeInstance = h_theAlloc.get();
}

Macad::Occt::NCollection_Buffer::NCollection_Buffer(Macad::Occt::NCollection_BaseAllocator^ theAlloc, size_t theSize)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAlloc = theAlloc->NativeInstance;
	NativeInstance = new ::NCollection_Buffer(h_theAlloc, theSize, 0);
	theAlloc->NativeInstance = h_theAlloc.get();
}

Macad::Occt::NCollection_Buffer::NCollection_Buffer(Macad::Occt::NCollection_BaseAllocator^ theAlloc)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAlloc = theAlloc->NativeInstance;
	NativeInstance = new ::NCollection_Buffer(h_theAlloc, 0, 0);
	theAlloc->NativeInstance = h_theAlloc.get();
}

Macad::Occt::NCollection_Buffer::NCollection_Buffer(Macad::Occt::NCollection_Buffer^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::NCollection_Buffer(*(::NCollection_Buffer*)parameter1->NativeInstance);
}

bool Macad::Occt::NCollection_Buffer::IsEmpty()
{
	return ((::NCollection_Buffer*)_NativeInstance)->IsEmpty();
}

size_t Macad::Occt::NCollection_Buffer::Size()
{
	return ((::NCollection_Buffer*)_NativeInstance)->Size();
}

Macad::Occt::NCollection_BaseAllocator^ Macad::Occt::NCollection_Buffer::Allocator()
{
	Handle(::NCollection_BaseAllocator) _result;
	_result = ((::NCollection_Buffer*)_NativeInstance)->Allocator();
	 return _result.IsNull() ? nullptr : Macad::Occt::NCollection_BaseAllocator::CreateDowncasted( _result.get());
}

void Macad::Occt::NCollection_Buffer::SetAllocator(Macad::Occt::NCollection_BaseAllocator^ theAlloc)
{
	Handle(::NCollection_BaseAllocator) h_theAlloc = theAlloc->NativeInstance;
	((::NCollection_Buffer*)_NativeInstance)->SetAllocator(h_theAlloc);
	theAlloc->NativeInstance = h_theAlloc.get();
}

bool Macad::Occt::NCollection_Buffer::Allocate(size_t theSize)
{
	return ((::NCollection_Buffer*)_NativeInstance)->Allocate(theSize);
}

void Macad::Occt::NCollection_Buffer::Free()
{
	((::NCollection_Buffer*)_NativeInstance)->Free();
}


Macad::Occt::NCollection_Buffer^ Macad::Occt::NCollection_Buffer::CreateDowncasted(::NCollection_Buffer* instance)
{
	return gcnew Macad::Occt::NCollection_Buffer( instance );
}



//---------------------------------------------------------------------
//  Class  NCollection_IncAllocator
//---------------------------------------------------------------------

Macad::Occt::NCollection_IncAllocator::NCollection_IncAllocator(unsigned __int64 theBlockSize)
	: Macad::Occt::NCollection_BaseAllocator(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::NCollection_IncAllocator(theBlockSize);
}

void Macad::Occt::NCollection_IncAllocator::SetThreadSafe(bool theIsThreadSafe)
{
	((::NCollection_IncAllocator*)_NativeInstance)->SetThreadSafe(theIsThreadSafe);
}

void Macad::Occt::NCollection_IncAllocator::SetThreadSafe()
{
	((::NCollection_IncAllocator*)_NativeInstance)->SetThreadSafe(true);
}

System::IntPtr Macad::Occt::NCollection_IncAllocator::Allocate(unsigned __int64 size)
{
	return System::IntPtr(((::NCollection_IncAllocator*)_NativeInstance)->Allocate(size));
}

void Macad::Occt::NCollection_IncAllocator::Free(System::IntPtr anAddress)
{
	((::NCollection_IncAllocator*)_NativeInstance)->Free(anAddress.ToPointer());
}

unsigned __int64 Macad::Occt::NCollection_IncAllocator::GetMemSize()
{
	return ((::NCollection_IncAllocator*)_NativeInstance)->GetMemSize();
}

System::IntPtr Macad::Occt::NCollection_IncAllocator::Reallocate(System::IntPtr anAddress, unsigned __int64 oldSize, unsigned __int64 newSize)
{
	return System::IntPtr(((::NCollection_IncAllocator*)_NativeInstance)->Reallocate(anAddress.ToPointer(), oldSize, newSize));
}

void Macad::Occt::NCollection_IncAllocator::Reset(bool doReleaseMem)
{
	((::NCollection_IncAllocator*)_NativeInstance)->Reset(doReleaseMem);
}

void Macad::Occt::NCollection_IncAllocator::Reset()
{
	((::NCollection_IncAllocator*)_NativeInstance)->Reset(true);
}


Macad::Occt::NCollection_IncAllocator^ Macad::Occt::NCollection_IncAllocator::CreateDowncasted(::NCollection_IncAllocator* instance)
{
	return gcnew Macad::Occt::NCollection_IncAllocator( instance );
}



//---------------------------------------------------------------------
//  Class  NCollection_HeapAllocator
//---------------------------------------------------------------------

System::IntPtr Macad::Occt::NCollection_HeapAllocator::Allocate(size_t theSize)
{
	return System::IntPtr(((::NCollection_HeapAllocator*)_NativeInstance)->Allocate(theSize));
}

void Macad::Occt::NCollection_HeapAllocator::Free(System::IntPtr anAddress)
{
	((::NCollection_HeapAllocator*)_NativeInstance)->Free(anAddress.ToPointer());
}

Macad::Occt::NCollection_HeapAllocator^ Macad::Occt::NCollection_HeapAllocator::GlobalHeapAllocator()
{
	Handle(::NCollection_HeapAllocator) _result;
	_result = ::NCollection_HeapAllocator::GlobalHeapAllocator();
	 return _result.IsNull() ? nullptr : Macad::Occt::NCollection_HeapAllocator::CreateDowncasted( _result.get());
}


Macad::Occt::NCollection_HeapAllocator^ Macad::Occt::NCollection_HeapAllocator::CreateDowncasted(::NCollection_HeapAllocator* instance)
{
	return gcnew Macad::Occt::NCollection_HeapAllocator( instance );
}



//---------------------------------------------------------------------
//  Class  NCollection_WinHeapAllocator
//---------------------------------------------------------------------

Macad::Occt::NCollection_WinHeapAllocator::NCollection_WinHeapAllocator(unsigned __int64 theInitSizeBytes)
	: Macad::Occt::NCollection_BaseAllocator(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::NCollection_WinHeapAllocator(theInitSizeBytes);
}

System::IntPtr Macad::Occt::NCollection_WinHeapAllocator::Allocate(size_t theSize)
{
	return System::IntPtr(((::NCollection_WinHeapAllocator*)_NativeInstance)->Allocate(theSize));
}

void Macad::Occt::NCollection_WinHeapAllocator::Free(System::IntPtr theAddress)
{
	((::NCollection_WinHeapAllocator*)_NativeInstance)->Free(theAddress.ToPointer());
}


Macad::Occt::NCollection_WinHeapAllocator^ Macad::Occt::NCollection_WinHeapAllocator::CreateDowncasted(::NCollection_WinHeapAllocator* instance)
{
	return gcnew Macad::Occt::NCollection_WinHeapAllocator( instance );
}


