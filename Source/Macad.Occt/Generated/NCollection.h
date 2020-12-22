// Generated wrapper code for package NCollection

#pragma once

#include "NCollection.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  NCollection_CellFilter_Action
//---------------------------------------------------------------------
public enum class NCollection_CellFilter_Action
{
	CellFilter_Keep = 0,
	CellFilter_Purge = 1
}; // enum  class NCollection_CellFilter_Action

//---------------------------------------------------------------------
//  Class  NCollection_CellFilter_InspectorXYZ
//---------------------------------------------------------------------
public ref class NCollection_CellFilter_InspectorXYZ sealed : public BaseClass<::NCollection_CellFilter_InspectorXYZ>
{

#ifdef Include_NCollection_CellFilter_InspectorXYZ_h
public:
	Include_NCollection_CellFilter_InspectorXYZ_h
#endif

public:
	NCollection_CellFilter_InspectorXYZ(::NCollection_CellFilter_InspectorXYZ* nativeInstance)
		: BaseClass<::NCollection_CellFilter_InspectorXYZ>( nativeInstance, true )
	{}

	NCollection_CellFilter_InspectorXYZ(::NCollection_CellFilter_InspectorXYZ& nativeInstance)
		: BaseClass<::NCollection_CellFilter_InspectorXYZ>( &nativeInstance, false )
	{}

	property ::NCollection_CellFilter_InspectorXYZ* NativeInstance
	{
		::NCollection_CellFilter_InspectorXYZ* get()
		{
			return static_cast<::NCollection_CellFilter_InspectorXYZ*>(_NativeInstance);
		}
	}

public:
	NCollection_CellFilter_InspectorXYZ();
	NCollection_CellFilter_InspectorXYZ(Macad::Occt::NCollection_CellFilter_InspectorXYZ^ parameter1);
	static double Coord(int i, Macad::Occt::XYZ thePnt);
	Macad::Occt::XYZ Shift(Macad::Occt::XYZ thePnt, double theTol);
}; // class NCollection_CellFilter_InspectorXYZ

//---------------------------------------------------------------------
//  Class  NCollection_CellFilter_InspectorXY
//---------------------------------------------------------------------
public ref class NCollection_CellFilter_InspectorXY sealed : public BaseClass<::NCollection_CellFilter_InspectorXY>
{

#ifdef Include_NCollection_CellFilter_InspectorXY_h
public:
	Include_NCollection_CellFilter_InspectorXY_h
#endif

public:
	NCollection_CellFilter_InspectorXY(::NCollection_CellFilter_InspectorXY* nativeInstance)
		: BaseClass<::NCollection_CellFilter_InspectorXY>( nativeInstance, true )
	{}

	NCollection_CellFilter_InspectorXY(::NCollection_CellFilter_InspectorXY& nativeInstance)
		: BaseClass<::NCollection_CellFilter_InspectorXY>( &nativeInstance, false )
	{}

	property ::NCollection_CellFilter_InspectorXY* NativeInstance
	{
		::NCollection_CellFilter_InspectorXY* get()
		{
			return static_cast<::NCollection_CellFilter_InspectorXY*>(_NativeInstance);
		}
	}

public:
	NCollection_CellFilter_InspectorXY();
	NCollection_CellFilter_InspectorXY(Macad::Occt::NCollection_CellFilter_InspectorXY^ parameter1);
	static double Coord(int i, Macad::Occt::XY thePnt);
	Macad::Occt::XY Shift(Macad::Occt::XY thePnt, double theTol);
}; // class NCollection_CellFilter_InspectorXY

//---------------------------------------------------------------------
//  Class  NCollection_BaseAllocator
//---------------------------------------------------------------------
public ref class NCollection_BaseAllocator : public Macad::Occt::Standard_Transient
{

#ifdef Include_NCollection_BaseAllocator_h
public:
	Include_NCollection_BaseAllocator_h
#endif

protected:
	NCollection_BaseAllocator(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	NCollection_BaseAllocator(::NCollection_BaseAllocator* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	NCollection_BaseAllocator(::NCollection_BaseAllocator& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::NCollection_BaseAllocator* NativeInstance
	{
		::NCollection_BaseAllocator* get()
		{
			return static_cast<::NCollection_BaseAllocator*>(_NativeInstance);
		}
	}

	static Macad::Occt::NCollection_BaseAllocator^ CreateDowncasted(::NCollection_BaseAllocator* instance);

public:
	System::IntPtr Allocate(unsigned __int64 size);
	void Free(System::IntPtr anAddress);
	static Macad::Occt::NCollection_BaseAllocator^ CommonBaseAllocator();
	static void StandardCallBack(bool theIsAlloc, System::IntPtr theStorage, size_t theRoundSize, size_t theSize);
	static void PrintMemUsageStatistics();
}; // class NCollection_BaseAllocator

//---------------------------------------------------------------------
//  Class  NCollection_BaseList
//---------------------------------------------------------------------
public ref class NCollection_BaseList sealed : public BaseClass<::NCollection_BaseList>
{

#ifdef Include_NCollection_BaseList_h
public:
	Include_NCollection_BaseList_h
#endif

public:
	NCollection_BaseList(::NCollection_BaseList* nativeInstance)
		: BaseClass<::NCollection_BaseList>( nativeInstance, true )
	{}

	NCollection_BaseList(::NCollection_BaseList& nativeInstance)
		: BaseClass<::NCollection_BaseList>( &nativeInstance, false )
	{}

	property ::NCollection_BaseList* NativeInstance
	{
		::NCollection_BaseList* get()
		{
			return static_cast<::NCollection_BaseList*>(_NativeInstance);
		}
	}

public:
	NCollection_BaseList(Macad::Occt::NCollection_BaseList^ parameter1);
	int Extent();
	bool IsEmpty();
	Macad::Occt::NCollection_BaseAllocator^ Allocator();
}; // class NCollection_BaseList

//---------------------------------------------------------------------
//  Class  NCollection_AccAllocator
//---------------------------------------------------------------------
public ref class NCollection_AccAllocator sealed : public Macad::Occt::NCollection_BaseAllocator
{

#ifdef Include_NCollection_AccAllocator_h
public:
	Include_NCollection_AccAllocator_h
#endif

public:
	NCollection_AccAllocator(::NCollection_AccAllocator* nativeInstance)
		: Macad::Occt::NCollection_BaseAllocator( nativeInstance )
	{}

	NCollection_AccAllocator(::NCollection_AccAllocator& nativeInstance)
		: Macad::Occt::NCollection_BaseAllocator( nativeInstance )
	{}

	property ::NCollection_AccAllocator* NativeInstance
	{
		::NCollection_AccAllocator* get()
		{
			return static_cast<::NCollection_AccAllocator*>(_NativeInstance);
		}
	}

	static Macad::Occt::NCollection_AccAllocator^ CreateDowncasted(::NCollection_AccAllocator* instance);

public:
	NCollection_AccAllocator(unsigned __int64 theBlockSize);
	System::IntPtr Allocate(unsigned __int64 theSize);
	void Free(System::IntPtr theAddress);
}; // class NCollection_AccAllocator

//---------------------------------------------------------------------
//  Class  NCollection_AlignedAllocator
//---------------------------------------------------------------------
public ref class NCollection_AlignedAllocator sealed : public Macad::Occt::NCollection_BaseAllocator
{

#ifdef Include_NCollection_AlignedAllocator_h
public:
	Include_NCollection_AlignedAllocator_h
#endif

public:
	NCollection_AlignedAllocator(::NCollection_AlignedAllocator* nativeInstance)
		: Macad::Occt::NCollection_BaseAllocator( nativeInstance )
	{}

	NCollection_AlignedAllocator(::NCollection_AlignedAllocator& nativeInstance)
		: Macad::Occt::NCollection_BaseAllocator( nativeInstance )
	{}

	property ::NCollection_AlignedAllocator* NativeInstance
	{
		::NCollection_AlignedAllocator* get()
		{
			return static_cast<::NCollection_AlignedAllocator*>(_NativeInstance);
		}
	}

	static Macad::Occt::NCollection_AlignedAllocator^ CreateDowncasted(::NCollection_AlignedAllocator* instance);

public:
	NCollection_AlignedAllocator(unsigned __int64 theAlignment);
	System::IntPtr Allocate(unsigned __int64 theSize);
	void Free(System::IntPtr thePtr);
}; // class NCollection_AlignedAllocator

//---------------------------------------------------------------------
//  Class  NCollection_Buffer
//---------------------------------------------------------------------
public ref class NCollection_Buffer sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_NCollection_Buffer_h
public:
	Include_NCollection_Buffer_h
#endif

public:
	NCollection_Buffer(::NCollection_Buffer* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	NCollection_Buffer(::NCollection_Buffer& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::NCollection_Buffer* NativeInstance
	{
		::NCollection_Buffer* get()
		{
			return static_cast<::NCollection_Buffer*>(_NativeInstance);
		}
	}

	static Macad::Occt::NCollection_Buffer^ CreateDowncasted(::NCollection_Buffer* instance);

public:
	NCollection_Buffer(Macad::Occt::NCollection_BaseAllocator^ theAlloc, size_t theSize, unsigned char% theData);
	NCollection_Buffer(Macad::Occt::NCollection_BaseAllocator^ theAlloc, size_t theSize);
	NCollection_Buffer(Macad::Occt::NCollection_BaseAllocator^ theAlloc);
	NCollection_Buffer(Macad::Occt::NCollection_Buffer^ parameter1);
	bool IsEmpty();
	size_t Size();
	Macad::Occt::NCollection_BaseAllocator^ Allocator();
	void SetAllocator(Macad::Occt::NCollection_BaseAllocator^ theAlloc);
	bool Allocate(size_t theSize);
	void Free();
}; // class NCollection_Buffer

//---------------------------------------------------------------------
//  Class  NCollection_IncAllocator
//---------------------------------------------------------------------
public ref class NCollection_IncAllocator sealed : public Macad::Occt::NCollection_BaseAllocator
{

#ifdef Include_NCollection_IncAllocator_h
public:
	Include_NCollection_IncAllocator_h
#endif

public:
	NCollection_IncAllocator(::NCollection_IncAllocator* nativeInstance)
		: Macad::Occt::NCollection_BaseAllocator( nativeInstance )
	{}

	NCollection_IncAllocator(::NCollection_IncAllocator& nativeInstance)
		: Macad::Occt::NCollection_BaseAllocator( nativeInstance )
	{}

	property ::NCollection_IncAllocator* NativeInstance
	{
		::NCollection_IncAllocator* get()
		{
			return static_cast<::NCollection_IncAllocator*>(_NativeInstance);
		}
	}

	static Macad::Occt::NCollection_IncAllocator^ CreateDowncasted(::NCollection_IncAllocator* instance);

public:
	NCollection_IncAllocator(unsigned __int64 theBlockSize);
	void SetThreadSafe(bool theIsThreadSafe);
	void SetThreadSafe();
	System::IntPtr Allocate(unsigned __int64 size);
	void Free(System::IntPtr anAddress);
	unsigned __int64 GetMemSize();
	System::IntPtr Reallocate(System::IntPtr anAddress, unsigned __int64 oldSize, unsigned __int64 newSize);
	void Reset(bool doReleaseMem);
	void Reset();
}; // class NCollection_IncAllocator

//---------------------------------------------------------------------
//  Class  NCollection_HeapAllocator
//---------------------------------------------------------------------
public ref class NCollection_HeapAllocator sealed : public Macad::Occt::NCollection_BaseAllocator
{

#ifdef Include_NCollection_HeapAllocator_h
public:
	Include_NCollection_HeapAllocator_h
#endif

public:
	NCollection_HeapAllocator(::NCollection_HeapAllocator* nativeInstance)
		: Macad::Occt::NCollection_BaseAllocator( nativeInstance )
	{}

	NCollection_HeapAllocator(::NCollection_HeapAllocator& nativeInstance)
		: Macad::Occt::NCollection_BaseAllocator( nativeInstance )
	{}

	property ::NCollection_HeapAllocator* NativeInstance
	{
		::NCollection_HeapAllocator* get()
		{
			return static_cast<::NCollection_HeapAllocator*>(_NativeInstance);
		}
	}

	static Macad::Occt::NCollection_HeapAllocator^ CreateDowncasted(::NCollection_HeapAllocator* instance);

public:
	System::IntPtr Allocate(size_t theSize);
	void Free(System::IntPtr anAddress);
	static Macad::Occt::NCollection_HeapAllocator^ GlobalHeapAllocator();
}; // class NCollection_HeapAllocator

//---------------------------------------------------------------------
//  Class  NCollection_WinHeapAllocator
//---------------------------------------------------------------------
public ref class NCollection_WinHeapAllocator sealed : public Macad::Occt::NCollection_BaseAllocator
{

#ifdef Include_NCollection_WinHeapAllocator_h
public:
	Include_NCollection_WinHeapAllocator_h
#endif

public:
	NCollection_WinHeapAllocator(::NCollection_WinHeapAllocator* nativeInstance)
		: Macad::Occt::NCollection_BaseAllocator( nativeInstance )
	{}

	NCollection_WinHeapAllocator(::NCollection_WinHeapAllocator& nativeInstance)
		: Macad::Occt::NCollection_BaseAllocator( nativeInstance )
	{}

	property ::NCollection_WinHeapAllocator* NativeInstance
	{
		::NCollection_WinHeapAllocator* get()
		{
			return static_cast<::NCollection_WinHeapAllocator*>(_NativeInstance);
		}
	}

	static Macad::Occt::NCollection_WinHeapAllocator^ CreateDowncasted(::NCollection_WinHeapAllocator* instance);

public:
	NCollection_WinHeapAllocator(unsigned __int64 theInitSizeBytes);
	System::IntPtr Allocate(size_t theSize);
	void Free(System::IntPtr theAddress);
}; // class NCollection_WinHeapAllocator

}; // namespace Occt
}; // namespace Macad
