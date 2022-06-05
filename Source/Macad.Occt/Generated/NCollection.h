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
/// <summary>
/// Auxiliary enumeration serving as responce from method Inspect
/// </summary>
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
	/// <summary>
	/// Access to coordinate
	/// </summary>
	static double Coord(int i, Macad::Occt::XYZ thePnt);
	/// <summary>
	/// Auxiliary method to shift point by each coordinate on given value;
	/// useful for preparing a points range for Inspect with tolerance
	/// </summary>
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
	/// <summary>
	/// Access to coordinate
	/// </summary>
	static double Coord(int i, Macad::Occt::XY thePnt);
	/// <summary>
	/// Auxiliary method to shift point by each coordinate on given value;
	/// useful for preparing a points range for Inspect with tolerance
	/// </summary>
	Macad::Occt::XY Shift(Macad::Occt::XY thePnt, double theTol);
}; // class NCollection_CellFilter_InspectorXY

//---------------------------------------------------------------------
//  Class  NCollection_BaseAllocator
//---------------------------------------------------------------------
/// <summary>
/// /**
/// * Purpose:     Basic class for memory allocation wizards.
/// *              Defines  the  interface  for devising  different  allocators
/// *              firstly to be used  by collections of NCollection, though it
/// *              it is not  deferred. It allocates/frees  the memory  through
/// *              Standard procedures, thus it is  unnecessary (and  sometimes
/// *              injurious) to have  more than one such  allocator.  To avoid
/// *              creation  of multiple  objects the  constructors  were  maid
/// *              inaccessible.  To  create the  BaseAllocator use  the method
/// *              CommonBaseAllocator.
/// *              Note that this object is managed by Handle.
/// */
/// </summary>
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
	/// <summary>
	/// CommonBaseAllocator
	/// This method is designed to have the only one BaseAllocator (to avoid
	/// useless copying of collections). However one can use operator new to
	/// create more BaseAllocators, but it is injurious.
	/// </summary>
	static Macad::Occt::NCollection_BaseAllocator^ CommonBaseAllocator();
	/// <summary>
	/// Callback function to register alloc/free calls
	/// </summary>
	static void StandardCallBack(bool theIsAlloc, System::IntPtr theStorage, size_t theRoundSize, size_t theSize);
	/// <summary>
	/// Prints memory usage statistics cumulated by StandardCallBack
	/// </summary>
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
	/// <summary>
	/// Returns attached allocator
	/// </summary>
	Macad::Occt::NCollection_BaseAllocator^ Allocator();
}; // class NCollection_BaseList

//---------------------------------------------------------------------
//  Class  NCollection_AccAllocator
//---------------------------------------------------------------------
/// <summary>
/// 
/// Class  NCollection_AccAllocator  -  accumulating  memory  allocator.  This
/// class  allocates  memory on request returning the pointer to the allocated
/// space.  The  allocation  units  are  grouped  in blocks requested from the
/// system  as  required.  This  memory  is  returned  to  the system when all
/// allocations in a block are freed.
/// 
/// By comparison with  the standard new() and malloc()  calls, this method is
/// faster and consumes very small additional memory to maintain the heap.
/// 
/// By comparison with NCollection_IncAllocator,  this class requires some more
/// additional memory  and a little more time for allocation and deallocation.
/// Memory overhead for NCollection_IncAllocator is 12 bytes per block;
/// average memory overhead for NCollection_AccAllocator is 28 bytes per block.
/// 
/// All pointers  returned by Allocate() are aligned to 4 byte boundaries.
/// To  define  the size  of  memory  blocks  requested  from the OS,  use the
/// parameter of the constructor (measured in bytes).
/// </summary>
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
	/// <summary>
	/// Constructor
	/// </summary>
	NCollection_AccAllocator(unsigned __int64 theBlockSize);
	/// <summary>
	/// Allocate memory with given size
	/// </summary>
	System::IntPtr Allocate(unsigned __int64 theSize);
	/// <summary>
	/// Free a previously allocated memory;
	/// memory is returned to the OS when all allocations in some block are freed
	/// </summary>
	void Free(System::IntPtr theAddress);
}; // class NCollection_AccAllocator

//---------------------------------------------------------------------
//  Class  NCollection_AlignedAllocator
//---------------------------------------------------------------------
/// <summary>
/// NCollection allocator with managed memory alignment capabilities.
/// </summary>
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
	/// <summary>
	/// Constructor. The alignment should be specified explicitly:
	/// 16 bytes for SSE instructions
	/// 32 bytes for AVX instructions
	/// </summary>
	NCollection_AlignedAllocator(unsigned __int64 theAlignment);
	/// <summary>
	/// Allocate memory with given size. Returns NULL on failure.
	/// </summary>
	System::IntPtr Allocate(unsigned __int64 theSize);
	/// <summary>
	/// Free a previously allocated memory.
	/// </summary>
	void Free(System::IntPtr thePtr);
}; // class NCollection_AlignedAllocator

//---------------------------------------------------------------------
//  Class  NCollection_Buffer
//---------------------------------------------------------------------
/// <summary>
/// Low-level buffer object.
/// </summary>
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
	/// <summary>
	/// Default constructor.
	/// When theData is NULL but theSize is not 0 than buffer of specified size will be allocated.
	/// </summary>
	/// <param name="theAlloc">
	/// memory allocator
	/// </param>
	/// <param name="theSize">
	///  buffer size
	/// </param>
	/// <param name="theData">
	///  buffer data allocated by theAlloc
	/// </param>
	NCollection_Buffer(Macad::Occt::NCollection_BaseAllocator^ theAlloc, size_t theSize, unsigned char% theData);
	/// <summary>
	/// Default constructor.
	/// When theData is NULL but theSize is not 0 than buffer of specified size will be allocated.
	/// </summary>
	/// <param name="theAlloc">
	/// memory allocator
	/// </param>
	/// <param name="theSize">
	///  buffer size
	/// </param>
	/// <param name="theData">
	///  buffer data allocated by theAlloc
	/// </param>
	NCollection_Buffer(Macad::Occt::NCollection_BaseAllocator^ theAlloc, size_t theSize);
	/// <summary>
	/// Default constructor.
	/// When theData is NULL but theSize is not 0 than buffer of specified size will be allocated.
	/// </summary>
	/// <param name="theAlloc">
	/// memory allocator
	/// </param>
	/// <param name="theSize">
	///  buffer size
	/// </param>
	/// <param name="theData">
	///  buffer data allocated by theAlloc
	/// </param>
	NCollection_Buffer(Macad::Occt::NCollection_BaseAllocator^ theAlloc);
	NCollection_Buffer(Macad::Occt::NCollection_Buffer^ parameter1);
	/// <summary>
	/// </summary>
	/// <returns>
	/// true if buffer is not allocated
	/// </returns>
	bool IsEmpty();
	/// <summary>
	/// Return buffer length in bytes.
	/// </summary>
	size_t Size();
	/// <summary>
	/// </summary>
	/// <returns>
	/// buffer allocator
	/// </returns>
	Macad::Occt::NCollection_BaseAllocator^ Allocator();
	/// <summary>
	/// Assign new buffer allocator with de-allocation of buffer.
	/// </summary>
	void SetAllocator(Macad::Occt::NCollection_BaseAllocator^ theAlloc);
	/// <summary>
	/// Allocate the buffer.
	/// </summary>
	/// <param name="theSize">
	/// buffer length in bytes
	/// </param>
	bool Allocate(size_t theSize);
	/// <summary>
	/// De-allocate buffer.
	/// </summary>
	void Free();
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class NCollection_Buffer

//---------------------------------------------------------------------
//  Class  NCollection_IncAllocator
//---------------------------------------------------------------------
/// <summary>
/// /**
/// *  Class NCollection_IncAllocator - incremental memory  allocator. This class
/// *  allocates  memory  on  request  returning  the  pointer  to  an  allocated
/// *  block. This memory is never returned  to the system until the allocator is
/// *  destroyed.
/// *
/// *  By comparison with  the standard new() and malloc()  calls, this method is
/// *  faster and consumes very small additional memory to maintain the heap.
/// *
/// *  All pointers  returned by Allocate() are  aligned to the size  of the data
/// *  type "aligned_t". To  modify the size of memory  blocks requested from the
/// *  OS,  use the parameter  of the  constructor (measured  in bytes);  if this
/// *  parameter is  smaller than  25 bytes on  32bit or  49 bytes on  64bit, the
/// *  block size will be the default 24 kbytes
/// *
/// *  Note that this allocator is most suitable for single-threaded algorithms
/// *  (consider creating dedicated allocators per working thread),
/// *  and thread-safety of allocations is DISABLED by default (see SetThreadSafe()).
/// */
/// </summary>
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
	/// <summary>
	/// Constructor.
	/// Note that this constructor does NOT setup mutex for using allocator concurrently from different threads,
	/// see SetThreadSafe() method.
	/// </summary>
	NCollection_IncAllocator(unsigned __int64 theBlockSize);
	/// <summary>
	/// Setup mutex for thread-safe allocations.
	/// </summary>
	void SetThreadSafe(bool theIsThreadSafe);
	/// <summary>
	/// Setup mutex for thread-safe allocations.
	/// </summary>
	void SetThreadSafe();
	/// <summary>
	/// Allocate memory with given size. Returns NULL on failure
	/// </summary>
	System::IntPtr Allocate(unsigned __int64 size);
	/// <summary>
	/// Free a previously allocated memory. Does nothing
	/// </summary>
	void Free(System::IntPtr anAddress);
	/// <summary>
	/// Diagnostic method, returns the total allocated size
	/// </summary>
	unsigned __int64 GetMemSize();
	/// <summary>
	/// Reallocation: it is always allowed but is only efficient with the
	/// last allocated item
	/// </summary>
	System::IntPtr Reallocate(System::IntPtr anAddress, unsigned __int64 oldSize, unsigned __int64 newSize);
	/// <summary>
	/// Re-initialize the allocator so that the next Allocate call should
	/// start allocating in the very beginning as though the allocator is just
	/// constructed. Warning: make sure that all previously allocated data are
	/// no more used in your code!
	/// </summary>
	/// True - release all previously allocated memory, False - preserve it
	/// for future allocations.
	void Reset(bool doReleaseMem);
	/// <summary>
	/// Re-initialize the allocator so that the next Allocate call should
	/// start allocating in the very beginning as though the allocator is just
	/// constructed. Warning: make sure that all previously allocated data are
	/// no more used in your code!
	/// </summary>
	/// True - release all previously allocated memory, False - preserve it
	/// for future allocations.
	void Reset();
}; // class NCollection_IncAllocator

//---------------------------------------------------------------------
//  Class  NCollection_HeapAllocator
//---------------------------------------------------------------------
/// <summary>
/// /**
/// * Allocator that uses the global dynamic heap (malloc / free).
/// */
/// </summary>
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
/// <summary>
/// This memory allocator creates dedicated heap for allocations.
/// This technics available only on Windows platform
/// (no alternative on Unix systems).
/// It may be used to take control over memory fragmentation
/// because on destruction ALL allocated memory will be released
/// to the system.
/// 
/// This allocator can also be created per each working thread
/// hovewer it real multi-threading performance is dubious.
/// 
/// Notice that this also means that existing pointers will be broken
/// and you shoould control that allocator is alive along all objects
/// allocated with him.
/// </summary>
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
	/// <summary>
	/// Main constructor
	/// </summary>
	NCollection_WinHeapAllocator(unsigned __int64 theInitSizeBytes);
	/// <summary>
	/// Allocate memory
	/// </summary>
	System::IntPtr Allocate(size_t theSize);
	/// <summary>
	/// Release memory
	/// </summary>
	void Free(System::IntPtr theAddress);
}; // class NCollection_WinHeapAllocator

}; // namespace Occt
}; // namespace Macad
