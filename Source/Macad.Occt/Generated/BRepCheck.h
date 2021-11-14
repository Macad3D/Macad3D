// Generated wrapper code for package BRepCheck

#pragma once

#include "BRepCheck.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  BRepCheck_Status
//---------------------------------------------------------------------
public enum class BRepCheck_Status
{
	BRepCheck_NoError = 0,
	BRepCheck_InvalidPointOnCurve = 1,
	BRepCheck_InvalidPointOnCurveOnSurface = 2,
	BRepCheck_InvalidPointOnSurface = 3,
	BRepCheck_No3DCurve = 4,
	BRepCheck_Multiple3DCurve = 5,
	BRepCheck_Invalid3DCurve = 6,
	BRepCheck_NoCurveOnSurface = 7,
	BRepCheck_InvalidCurveOnSurface = 8,
	BRepCheck_InvalidCurveOnClosedSurface = 9,
	BRepCheck_InvalidSameRangeFlag = 10,
	BRepCheck_InvalidSameParameterFlag = 11,
	BRepCheck_InvalidDegeneratedFlag = 12,
	BRepCheck_FreeEdge = 13,
	BRepCheck_InvalidMultiConnexity = 14,
	BRepCheck_InvalidRange = 15,
	BRepCheck_EmptyWire = 16,
	BRepCheck_RedundantEdge = 17,
	BRepCheck_SelfIntersectingWire = 18,
	BRepCheck_NoSurface = 19,
	BRepCheck_InvalidWire = 20,
	BRepCheck_RedundantWire = 21,
	BRepCheck_IntersectingWires = 22,
	BRepCheck_InvalidImbricationOfWires = 23,
	BRepCheck_EmptyShell = 24,
	BRepCheck_RedundantFace = 25,
	BRepCheck_InvalidImbricationOfShells = 26,
	BRepCheck_UnorientableShape = 27,
	BRepCheck_NotClosed = 28,
	BRepCheck_NotConnected = 29,
	BRepCheck_SubshapeNotInShape = 30,
	BRepCheck_BadOrientation = 31,
	BRepCheck_BadOrientationOfSubshape = 32,
	BRepCheck_InvalidPolygonOnTriangulation = 33,
	BRepCheck_InvalidToleranceValue = 34,
	BRepCheck_EnclosedRegion = 35,
	BRepCheck_CheckFail = 36
}; // enum  class BRepCheck_Status

//---------------------------------------------------------------------
//  Class  BRepCheck_ListOfStatus
//---------------------------------------------------------------------
public ref class BRepCheck_ListOfStatus sealed : public BaseClass<::BRepCheck_ListOfStatus>
{

#ifdef Include_BRepCheck_ListOfStatus_h
public:
	Include_BRepCheck_ListOfStatus_h
#endif

public:
	BRepCheck_ListOfStatus(::BRepCheck_ListOfStatus* nativeInstance)
		: BaseClass<::BRepCheck_ListOfStatus>( nativeInstance, true )
	{}

	BRepCheck_ListOfStatus(::BRepCheck_ListOfStatus& nativeInstance)
		: BaseClass<::BRepCheck_ListOfStatus>( &nativeInstance, false )
	{}

	property ::BRepCheck_ListOfStatus* NativeInstance
	{
		::BRepCheck_ListOfStatus* get()
		{
			return static_cast<::BRepCheck_ListOfStatus*>(_NativeInstance);
		}
	}

public:
	BRepCheck_ListOfStatus();
	BRepCheck_ListOfStatus(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	BRepCheck_ListOfStatus(Macad::Occt::BRepCheck_ListOfStatus^ theOther);
	int Size();
	Macad::Occt::BRepCheck_ListOfStatus^ Assign(Macad::Occt::BRepCheck_ListOfStatus^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::BRepCheck_Status First();
	Macad::Occt::BRepCheck_Status Last();
	Macad::Occt::BRepCheck_Status Append(Macad::Occt::BRepCheck_Status% theItem);
	/* Method skipped due to unknown mapping: void Append(BRepCheck_Status theItem, Iterator theIter, ) */
	void Append(Macad::Occt::BRepCheck_ListOfStatus^ theOther);
	Macad::Occt::BRepCheck_Status Prepend(Macad::Occt::BRepCheck_Status% theItem);
	void Prepend(Macad::Occt::BRepCheck_ListOfStatus^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: BRepCheck_Status InsertBefore(BRepCheck_Status theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(BRepCheck_ListOfStatus theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: BRepCheck_Status InsertAfter(BRepCheck_Status theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(BRepCheck_ListOfStatus theOther, Iterator theIter, ) */
	void Reverse();
}; // class BRepCheck_ListOfStatus

//---------------------------------------------------------------------
//  Class  BRepCheck_IndexedDataMapOfShapeResult
//---------------------------------------------------------------------
public ref class BRepCheck_IndexedDataMapOfShapeResult sealed : public BaseClass<::BRepCheck_IndexedDataMapOfShapeResult>
{

#ifdef Include_BRepCheck_IndexedDataMapOfShapeResult_h
public:
	Include_BRepCheck_IndexedDataMapOfShapeResult_h
#endif

public:
	BRepCheck_IndexedDataMapOfShapeResult(::BRepCheck_IndexedDataMapOfShapeResult* nativeInstance)
		: BaseClass<::BRepCheck_IndexedDataMapOfShapeResult>( nativeInstance, true )
	{}

	BRepCheck_IndexedDataMapOfShapeResult(::BRepCheck_IndexedDataMapOfShapeResult& nativeInstance)
		: BaseClass<::BRepCheck_IndexedDataMapOfShapeResult>( &nativeInstance, false )
	{}

	property ::BRepCheck_IndexedDataMapOfShapeResult* NativeInstance
	{
		::BRepCheck_IndexedDataMapOfShapeResult* get()
		{
			return static_cast<::BRepCheck_IndexedDataMapOfShapeResult*>(_NativeInstance);
		}
	}

public:
	BRepCheck_IndexedDataMapOfShapeResult();
	BRepCheck_IndexedDataMapOfShapeResult(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	BRepCheck_IndexedDataMapOfShapeResult(int theNbBuckets);
	BRepCheck_IndexedDataMapOfShapeResult(Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult^ theOther);
	void Exchange(Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult^ theOther);
	int Add(Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::BRepCheck_Result^ theItem);
	bool Contains(Macad::Occt::TopoDS_Shape^ theKey1);
	void Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::BRepCheck_Result^ theItem);
	void Swap(int theIndex1, int theIndex2);
	void RemoveLast();
	void RemoveFromIndex(int theIndex);
	void RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1);
	Macad::Occt::TopoDS_Shape^ FindKey(int theIndex);
	Macad::Occt::BRepCheck_Result^ FindFromIndex(int theIndex);
	Macad::Occt::BRepCheck_Result^ ChangeFromIndex(int theIndex);
	int FindIndex(Macad::Occt::TopoDS_Shape^ theKey1);
	Macad::Occt::BRepCheck_Result^ FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1);
	Macad::Occt::BRepCheck_Result^ ChangeFromKey(Macad::Occt::TopoDS_Shape^ theKey1);
	Macad::Occt::BRepCheck_Result^ Seek(Macad::Occt::TopoDS_Shape^ theKey1);
	Macad::Occt::BRepCheck_Result^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey1);
	bool FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::BRepCheck_Result^ theValue);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class BRepCheck_IndexedDataMapOfShapeResult

//---------------------------------------------------------------------
//  Class  BRepCheck
//---------------------------------------------------------------------
public ref class BRepCheck sealed : public BaseClass<::BRepCheck>
{

#ifdef Include_BRepCheck_h
public:
	Include_BRepCheck_h
#endif

public:
	BRepCheck(::BRepCheck* nativeInstance)
		: BaseClass<::BRepCheck>( nativeInstance, true )
	{}

	BRepCheck(::BRepCheck& nativeInstance)
		: BaseClass<::BRepCheck>( &nativeInstance, false )
	{}

	property ::BRepCheck* NativeInstance
	{
		::BRepCheck* get()
		{
			return static_cast<::BRepCheck*>(_NativeInstance);
		}
	}

public:
	BRepCheck();
	BRepCheck(Macad::Occt::BRepCheck^ parameter1);
	static void Add(Macad::Occt::BRepCheck_ListOfStatus^ List, Macad::Occt::BRepCheck_Status Stat);
	/* Method skipped due to unknown mapping: void Print(BRepCheck_Status Stat, ostream OS, ) */
	static bool SelfIntersection(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2);
	static double PrecCurve(Macad::Occt::Adaptor3d_Curve^ aAC3D);
	static double PrecSurface(Macad::Occt::Adaptor3d_Surface^ aAHSurf);
}; // class BRepCheck

//---------------------------------------------------------------------
//  Class  BRepCheck_Result
//---------------------------------------------------------------------
public ref class BRepCheck_Result : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRepCheck_Result_h
public:
	Include_BRepCheck_Result_h
#endif

protected:
	BRepCheck_Result(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	BRepCheck_Result(::BRepCheck_Result* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	BRepCheck_Result(::BRepCheck_Result& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::BRepCheck_Result* NativeInstance
	{
		::BRepCheck_Result* get()
		{
			return static_cast<::BRepCheck_Result*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRepCheck_Result^ CreateDowncasted(::BRepCheck_Result* instance);

public:
	BRepCheck_Result(Macad::Occt::BRepCheck_Result^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ S);
	void InContext(Macad::Occt::TopoDS_Shape^ ContextShape);
	void Minimum();
	void Blind();
	void SetFailStatus(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::BRepCheck_ListOfStatus^ Status();
	bool IsMinimum();
	bool IsBlind();
	void InitContextIterator();
	bool MoreShapeInContext();
	Macad::Occt::TopoDS_Shape^ ContextualShape();
	Macad::Occt::BRepCheck_ListOfStatus^ StatusOnShape();
	void NextShapeInContext();
	void SetParallel(bool theIsParallel);
	bool IsStatusOnShape(Macad::Occt::TopoDS_Shape^ theShape);
	Macad::Occt::BRepCheck_ListOfStatus^ StatusOnShape(Macad::Occt::TopoDS_Shape^ theShape);
}; // class BRepCheck_Result

//---------------------------------------------------------------------
//  Class  BRepCheck_Analyzer
//---------------------------------------------------------------------
public ref class BRepCheck_Analyzer sealed : public BaseClass<::BRepCheck_Analyzer>
{

#ifdef Include_BRepCheck_Analyzer_h
public:
	Include_BRepCheck_Analyzer_h
#endif

public:
	BRepCheck_Analyzer(::BRepCheck_Analyzer* nativeInstance)
		: BaseClass<::BRepCheck_Analyzer>( nativeInstance, true )
	{}

	BRepCheck_Analyzer(::BRepCheck_Analyzer& nativeInstance)
		: BaseClass<::BRepCheck_Analyzer>( &nativeInstance, false )
	{}

	property ::BRepCheck_Analyzer* NativeInstance
	{
		::BRepCheck_Analyzer* get()
		{
			return static_cast<::BRepCheck_Analyzer*>(_NativeInstance);
		}
	}

public:
	BRepCheck_Analyzer(Macad::Occt::TopoDS_Shape^ S, bool GeomControls, bool theIsParallel);
	BRepCheck_Analyzer(Macad::Occt::TopoDS_Shape^ S, bool GeomControls);
	BRepCheck_Analyzer(Macad::Occt::TopoDS_Shape^ S);
	BRepCheck_Analyzer(Macad::Occt::BRepCheck_Analyzer^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ S, bool GeomControls, bool theIsParallel);
	void Init(Macad::Occt::TopoDS_Shape^ S, bool GeomControls);
	void Init(Macad::Occt::TopoDS_Shape^ S);
	bool IsValid(Macad::Occt::TopoDS_Shape^ S);
	bool IsValid();
	Macad::Occt::BRepCheck_Result^ Result(Macad::Occt::TopoDS_Shape^ theSubS);
}; // class BRepCheck_Analyzer

//---------------------------------------------------------------------
//  Class  BRepCheck_Edge
//---------------------------------------------------------------------
public ref class BRepCheck_Edge sealed : public Macad::Occt::BRepCheck_Result
{

#ifdef Include_BRepCheck_Edge_h
public:
	Include_BRepCheck_Edge_h
#endif

public:
	BRepCheck_Edge(::BRepCheck_Edge* nativeInstance)
		: Macad::Occt::BRepCheck_Result( nativeInstance )
	{}

	BRepCheck_Edge(::BRepCheck_Edge& nativeInstance)
		: Macad::Occt::BRepCheck_Result( nativeInstance )
	{}

	property ::BRepCheck_Edge* NativeInstance
	{
		::BRepCheck_Edge* get()
		{
			return static_cast<::BRepCheck_Edge*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRepCheck_Edge^ CreateDowncasted(::BRepCheck_Edge* instance);

public:
	BRepCheck_Edge(Macad::Occt::TopoDS_Edge^ E);
	BRepCheck_Edge(Macad::Occt::BRepCheck_Edge^ parameter1);
	void InContext(Macad::Occt::TopoDS_Shape^ ContextShape);
	void Minimum();
	void Blind();
	bool GeometricControls();
	void GeometricControls(bool B);
	double Tolerance();
	void SetStatus(Macad::Occt::BRepCheck_Status theStatus);
	Macad::Occt::BRepCheck_Status CheckPolygonOnTriangulation(Macad::Occt::TopoDS_Edge^ theEdge);
}; // class BRepCheck_Edge

//---------------------------------------------------------------------
//  Class  BRepCheck_Face
//---------------------------------------------------------------------
public ref class BRepCheck_Face sealed : public Macad::Occt::BRepCheck_Result
{

#ifdef Include_BRepCheck_Face_h
public:
	Include_BRepCheck_Face_h
#endif

public:
	BRepCheck_Face(::BRepCheck_Face* nativeInstance)
		: Macad::Occt::BRepCheck_Result( nativeInstance )
	{}

	BRepCheck_Face(::BRepCheck_Face& nativeInstance)
		: Macad::Occt::BRepCheck_Result( nativeInstance )
	{}

	property ::BRepCheck_Face* NativeInstance
	{
		::BRepCheck_Face* get()
		{
			return static_cast<::BRepCheck_Face*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRepCheck_Face^ CreateDowncasted(::BRepCheck_Face* instance);

public:
	BRepCheck_Face(Macad::Occt::TopoDS_Face^ F);
	BRepCheck_Face(Macad::Occt::BRepCheck_Face^ parameter1);
	void InContext(Macad::Occt::TopoDS_Shape^ ContextShape);
	void Minimum();
	void Blind();
	Macad::Occt::BRepCheck_Status IntersectWires(bool Update);
	Macad::Occt::BRepCheck_Status IntersectWires();
	Macad::Occt::BRepCheck_Status ClassifyWires(bool Update);
	Macad::Occt::BRepCheck_Status ClassifyWires();
	Macad::Occt::BRepCheck_Status OrientationOfWires(bool Update);
	Macad::Occt::BRepCheck_Status OrientationOfWires();
	void SetUnorientable();
	void SetStatus(Macad::Occt::BRepCheck_Status theStatus);
	bool IsUnorientable();
	bool GeometricControls();
	void GeometricControls(bool B);
}; // class BRepCheck_Face

//---------------------------------------------------------------------
//  Class  BRepCheck_Shell
//---------------------------------------------------------------------
public ref class BRepCheck_Shell sealed : public Macad::Occt::BRepCheck_Result
{

#ifdef Include_BRepCheck_Shell_h
public:
	Include_BRepCheck_Shell_h
#endif

public:
	BRepCheck_Shell(::BRepCheck_Shell* nativeInstance)
		: Macad::Occt::BRepCheck_Result( nativeInstance )
	{}

	BRepCheck_Shell(::BRepCheck_Shell& nativeInstance)
		: Macad::Occt::BRepCheck_Result( nativeInstance )
	{}

	property ::BRepCheck_Shell* NativeInstance
	{
		::BRepCheck_Shell* get()
		{
			return static_cast<::BRepCheck_Shell*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRepCheck_Shell^ CreateDowncasted(::BRepCheck_Shell* instance);

public:
	BRepCheck_Shell(Macad::Occt::TopoDS_Shell^ S);
	BRepCheck_Shell(Macad::Occt::BRepCheck_Shell^ parameter1);
	void InContext(Macad::Occt::TopoDS_Shape^ ContextShape);
	void Minimum();
	void Blind();
	Macad::Occt::BRepCheck_Status Closed(bool Update);
	Macad::Occt::BRepCheck_Status Closed();
	Macad::Occt::BRepCheck_Status Orientation(bool Update);
	Macad::Occt::BRepCheck_Status Orientation();
	void SetUnorientable();
	bool IsUnorientable();
	int NbConnectedSet(Macad::Occt::TopTools_ListOfShape^ theSets);
}; // class BRepCheck_Shell

//---------------------------------------------------------------------
//  Class  BRepCheck_Solid
//---------------------------------------------------------------------
public ref class BRepCheck_Solid sealed : public Macad::Occt::BRepCheck_Result
{

#ifdef Include_BRepCheck_Solid_h
public:
	Include_BRepCheck_Solid_h
#endif

public:
	BRepCheck_Solid(::BRepCheck_Solid* nativeInstance)
		: Macad::Occt::BRepCheck_Result( nativeInstance )
	{}

	BRepCheck_Solid(::BRepCheck_Solid& nativeInstance)
		: Macad::Occt::BRepCheck_Result( nativeInstance )
	{}

	property ::BRepCheck_Solid* NativeInstance
	{
		::BRepCheck_Solid* get()
		{
			return static_cast<::BRepCheck_Solid*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRepCheck_Solid^ CreateDowncasted(::BRepCheck_Solid* instance);

public:
	BRepCheck_Solid(Macad::Occt::TopoDS_Solid^ theS);
	BRepCheck_Solid(Macad::Occt::BRepCheck_Solid^ parameter1);
	void InContext(Macad::Occt::TopoDS_Shape^ theContextShape);
	void Minimum();
	void Blind();
}; // class BRepCheck_Solid

//---------------------------------------------------------------------
//  Class  BRepCheck_Vertex
//---------------------------------------------------------------------
public ref class BRepCheck_Vertex sealed : public Macad::Occt::BRepCheck_Result
{

#ifdef Include_BRepCheck_Vertex_h
public:
	Include_BRepCheck_Vertex_h
#endif

public:
	BRepCheck_Vertex(::BRepCheck_Vertex* nativeInstance)
		: Macad::Occt::BRepCheck_Result( nativeInstance )
	{}

	BRepCheck_Vertex(::BRepCheck_Vertex& nativeInstance)
		: Macad::Occt::BRepCheck_Result( nativeInstance )
	{}

	property ::BRepCheck_Vertex* NativeInstance
	{
		::BRepCheck_Vertex* get()
		{
			return static_cast<::BRepCheck_Vertex*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRepCheck_Vertex^ CreateDowncasted(::BRepCheck_Vertex* instance);

public:
	BRepCheck_Vertex(Macad::Occt::TopoDS_Vertex^ V);
	BRepCheck_Vertex(Macad::Occt::BRepCheck_Vertex^ parameter1);
	void InContext(Macad::Occt::TopoDS_Shape^ ContextShape);
	void Minimum();
	void Blind();
	double Tolerance();
}; // class BRepCheck_Vertex

//---------------------------------------------------------------------
//  Class  BRepCheck_Wire
//---------------------------------------------------------------------
public ref class BRepCheck_Wire sealed : public Macad::Occt::BRepCheck_Result
{

#ifdef Include_BRepCheck_Wire_h
public:
	Include_BRepCheck_Wire_h
#endif

public:
	BRepCheck_Wire(::BRepCheck_Wire* nativeInstance)
		: Macad::Occt::BRepCheck_Result( nativeInstance )
	{}

	BRepCheck_Wire(::BRepCheck_Wire& nativeInstance)
		: Macad::Occt::BRepCheck_Result( nativeInstance )
	{}

	property ::BRepCheck_Wire* NativeInstance
	{
		::BRepCheck_Wire* get()
		{
			return static_cast<::BRepCheck_Wire*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRepCheck_Wire^ CreateDowncasted(::BRepCheck_Wire* instance);

public:
	BRepCheck_Wire(Macad::Occt::TopoDS_Wire^ W);
	BRepCheck_Wire(Macad::Occt::BRepCheck_Wire^ parameter1);
	void InContext(Macad::Occt::TopoDS_Shape^ ContextShape);
	void Minimum();
	void Blind();
	Macad::Occt::BRepCheck_Status Closed(bool Update);
	Macad::Occt::BRepCheck_Status Closed();
	Macad::Occt::BRepCheck_Status Closed2d(Macad::Occt::TopoDS_Face^ F, bool Update);
	Macad::Occt::BRepCheck_Status Closed2d(Macad::Occt::TopoDS_Face^ F);
	Macad::Occt::BRepCheck_Status Orientation(Macad::Occt::TopoDS_Face^ F, bool Update);
	Macad::Occt::BRepCheck_Status Orientation(Macad::Occt::TopoDS_Face^ F);
	Macad::Occt::BRepCheck_Status SelfIntersect(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, bool Update);
	Macad::Occt::BRepCheck_Status SelfIntersect(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2);
	bool GeometricControls();
	void GeometricControls(bool B);
	void SetStatus(Macad::Occt::BRepCheck_Status theStatus);
}; // class BRepCheck_Wire

}; // namespace Occt
}; // namespace Macad
