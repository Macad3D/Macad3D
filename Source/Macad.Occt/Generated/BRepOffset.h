// Generated wrapper code for package BRepOffset

#pragma once

#include "BRepTools.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  BRepOffset_Status
//---------------------------------------------------------------------
public enum class BRepOffset_Status
{
	BRepOffset_Good = 0,
	BRepOffset_Reversed = 1,
	BRepOffset_Degenerated = 2,
	BRepOffset_Unknown = 3
}; // enum  class BRepOffset_Status

//---------------------------------------------------------------------
//  Enum  BRepOffset_Error
//---------------------------------------------------------------------
public enum class BRepOffset_Error
{
	BRepOffset_NoError = 0,
	BRepOffset_UnknownError = 1,
	BRepOffset_BadNormalsOnGeometry = 2,
	BRepOffset_C0Geometry = 3,
	BRepOffset_NullOffset = 4,
	BRepOffset_NotConnectedShell = 5,
	BRepOffset_CannotTrimEdges = 6,
	BRepOffset_CannotFuseVertices = 7,
	BRepOffset_CannotExtentEdge = 8
}; // enum  class BRepOffset_Error

//---------------------------------------------------------------------
//  Enum  BRepOffset_Mode
//---------------------------------------------------------------------
public enum class BRepOffset_Mode
{
	BRepOffset_Skin = 0,
	BRepOffset_Pipe = 1,
	BRepOffset_RectoVerso = 2
}; // enum  class BRepOffset_Mode

//---------------------------------------------------------------------
//  Enum  BRepOffsetSimple_Status
//---------------------------------------------------------------------
public enum class BRepOffsetSimple_Status
{
	BRepOffsetSimple_OK = 0,
	BRepOffsetSimple_NullInputShape = 1,
	BRepOffsetSimple_ErrorOffsetComputation = 2,
	BRepOffsetSimple_ErrorWallFaceComputation = 3,
	BRepOffsetSimple_ErrorInvalidNbShells = 4,
	BRepOffsetSimple_ErrorNonClosedShell = 5
}; // enum  class BRepOffsetSimple_Status

//---------------------------------------------------------------------
//  Class  BRepOffset_ListOfInterval
//---------------------------------------------------------------------
public ref class BRepOffset_ListOfInterval sealed : public BaseClass<::BRepOffset_ListOfInterval>
{

#ifdef Include_BRepOffset_ListOfInterval_h
public:
	Include_BRepOffset_ListOfInterval_h
#endif

public:
	BRepOffset_ListOfInterval(::BRepOffset_ListOfInterval* nativeInstance)
		: BaseClass<::BRepOffset_ListOfInterval>( nativeInstance, true )
	{}

	BRepOffset_ListOfInterval(::BRepOffset_ListOfInterval& nativeInstance)
		: BaseClass<::BRepOffset_ListOfInterval>( &nativeInstance, false )
	{}

	property ::BRepOffset_ListOfInterval* NativeInstance
	{
		::BRepOffset_ListOfInterval* get()
		{
			return static_cast<::BRepOffset_ListOfInterval*>(_NativeInstance);
		}
	}

public:
	BRepOffset_ListOfInterval();
	BRepOffset_ListOfInterval(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	BRepOffset_ListOfInterval(Macad::Occt::BRepOffset_ListOfInterval^ theOther);
	int Size();
	Macad::Occt::BRepOffset_ListOfInterval^ Assign(Macad::Occt::BRepOffset_ListOfInterval^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::BRepOffset_Interval^ First();
	Macad::Occt::BRepOffset_Interval^ Last();
	Macad::Occt::BRepOffset_Interval^ Append(Macad::Occt::BRepOffset_Interval^ theItem);
	/* Method skipped due to unknown mapping: void Append(BRepOffset_Interval theItem, Iterator theIter, ) */
	void Append(Macad::Occt::BRepOffset_ListOfInterval^ theOther);
	Macad::Occt::BRepOffset_Interval^ Prepend(Macad::Occt::BRepOffset_Interval^ theItem);
	void Prepend(Macad::Occt::BRepOffset_ListOfInterval^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: BRepOffset_Interval InsertBefore(BRepOffset_Interval theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(BRepOffset_ListOfInterval theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: BRepOffset_Interval InsertAfter(BRepOffset_Interval theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(BRepOffset_ListOfInterval theOther, Iterator theIter, ) */
	void Reverse();
}; // class BRepOffset_ListOfInterval

//---------------------------------------------------------------------
//  Class  BRepOffset_DataMapOfShapeListOfInterval
//---------------------------------------------------------------------
public ref class BRepOffset_DataMapOfShapeListOfInterval sealed : public BaseClass<::BRepOffset_DataMapOfShapeListOfInterval>
{

#ifdef Include_BRepOffset_DataMapOfShapeListOfInterval_h
public:
	Include_BRepOffset_DataMapOfShapeListOfInterval_h
#endif

public:
	BRepOffset_DataMapOfShapeListOfInterval(::BRepOffset_DataMapOfShapeListOfInterval* nativeInstance)
		: BaseClass<::BRepOffset_DataMapOfShapeListOfInterval>( nativeInstance, true )
	{}

	BRepOffset_DataMapOfShapeListOfInterval(::BRepOffset_DataMapOfShapeListOfInterval& nativeInstance)
		: BaseClass<::BRepOffset_DataMapOfShapeListOfInterval>( &nativeInstance, false )
	{}

	property ::BRepOffset_DataMapOfShapeListOfInterval* NativeInstance
	{
		::BRepOffset_DataMapOfShapeListOfInterval* get()
		{
			return static_cast<::BRepOffset_DataMapOfShapeListOfInterval*>(_NativeInstance);
		}
	}

public:
	BRepOffset_DataMapOfShapeListOfInterval();
	BRepOffset_DataMapOfShapeListOfInterval(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	BRepOffset_DataMapOfShapeListOfInterval(int theNbBuckets);
	BRepOffset_DataMapOfShapeListOfInterval(Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval^ theOther);
	void Exchange(Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval^ theOther);
	Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval^ Assign(Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval^ theOther);
	/* Method skipped due to unknown mapping: NCollection_List<BRepOffset_Interval> Bound(TopoDS_Shape theKey, NCollection_List<BRepOffset_Interval> theItem, ) */
	bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
	bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
	/* Method skipped due to unknown mapping: NCollection_List<BRepOffset_Interval> Seek(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_List<BRepOffset_Interval> Find(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Find(TopoDS_Shape theKey, NCollection_List<BRepOffset_Interval> theValue, ) */
	/* Method skipped due to unknown mapping: NCollection_List<BRepOffset_Interval> ChangeSeek(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_List<BRepOffset_Interval> ChangeFind(TopoDS_Shape theKey, ) */
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class BRepOffset_DataMapOfShapeListOfInterval

//---------------------------------------------------------------------
//  Class  BRepOffset_DataMapOfShapeOffset
//---------------------------------------------------------------------
public ref class BRepOffset_DataMapOfShapeOffset sealed : public BaseClass<::BRepOffset_DataMapOfShapeOffset>
{

#ifdef Include_BRepOffset_DataMapOfShapeOffset_h
public:
	Include_BRepOffset_DataMapOfShapeOffset_h
#endif

public:
	BRepOffset_DataMapOfShapeOffset(::BRepOffset_DataMapOfShapeOffset* nativeInstance)
		: BaseClass<::BRepOffset_DataMapOfShapeOffset>( nativeInstance, true )
	{}

	BRepOffset_DataMapOfShapeOffset(::BRepOffset_DataMapOfShapeOffset& nativeInstance)
		: BaseClass<::BRepOffset_DataMapOfShapeOffset>( &nativeInstance, false )
	{}

	property ::BRepOffset_DataMapOfShapeOffset* NativeInstance
	{
		::BRepOffset_DataMapOfShapeOffset* get()
		{
			return static_cast<::BRepOffset_DataMapOfShapeOffset*>(_NativeInstance);
		}
	}

public:
	BRepOffset_DataMapOfShapeOffset();
	BRepOffset_DataMapOfShapeOffset(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	BRepOffset_DataMapOfShapeOffset(int theNbBuckets);
	BRepOffset_DataMapOfShapeOffset(Macad::Occt::BRepOffset_DataMapOfShapeOffset^ theOther);
	void Exchange(Macad::Occt::BRepOffset_DataMapOfShapeOffset^ theOther);
	Macad::Occt::BRepOffset_DataMapOfShapeOffset^ Assign(Macad::Occt::BRepOffset_DataMapOfShapeOffset^ theOther);
	Macad::Occt::BRepOffset_Offset^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::BRepOffset_Offset^ theItem);
	bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
	bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
	Macad::Occt::BRepOffset_Offset^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
	Macad::Occt::BRepOffset_Offset^ Find(Macad::Occt::TopoDS_Shape^ theKey);
	bool Find(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::BRepOffset_Offset^ theValue);
	Macad::Occt::BRepOffset_Offset^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
	Macad::Occt::BRepOffset_Offset^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class BRepOffset_DataMapOfShapeOffset

//---------------------------------------------------------------------
//  Class  BRepOffset
//---------------------------------------------------------------------
public ref class BRepOffset sealed : public BaseClass<::BRepOffset>
{

#ifdef Include_BRepOffset_h
public:
	Include_BRepOffset_h
#endif

public:
	BRepOffset(::BRepOffset* nativeInstance)
		: BaseClass<::BRepOffset>( nativeInstance, true )
	{}

	BRepOffset(::BRepOffset& nativeInstance)
		: BaseClass<::BRepOffset>( &nativeInstance, false )
	{}

	property ::BRepOffset* NativeInstance
	{
		::BRepOffset* get()
		{
			return static_cast<::BRepOffset*>(_NativeInstance);
		}
	}

public:
	BRepOffset();
	BRepOffset(Macad::Occt::BRepOffset^ parameter1);
	static Macad::Occt::Geom_Surface^ Surface(Macad::Occt::Geom_Surface^ Surface, double Offset, Macad::Occt::BRepOffset_Status% theStatus, bool allowC0);
	static Macad::Occt::Geom_Surface^ Surface(Macad::Occt::Geom_Surface^ Surface, double Offset, Macad::Occt::BRepOffset_Status% theStatus);
	static Macad::Occt::Geom_Surface^ CollapseSingularities(Macad::Occt::Geom_Surface^ theSurface, Macad::Occt::TopoDS_Face^ theFace, double thePrecision);
}; // class BRepOffset

//---------------------------------------------------------------------
//  Class  BRepOffset_Interval
//---------------------------------------------------------------------
public ref class BRepOffset_Interval sealed : public BaseClass<::BRepOffset_Interval>
{

#ifdef Include_BRepOffset_Interval_h
public:
	Include_BRepOffset_Interval_h
#endif

public:
	BRepOffset_Interval(::BRepOffset_Interval* nativeInstance)
		: BaseClass<::BRepOffset_Interval>( nativeInstance, true )
	{}

	BRepOffset_Interval(::BRepOffset_Interval& nativeInstance)
		: BaseClass<::BRepOffset_Interval>( &nativeInstance, false )
	{}

	property ::BRepOffset_Interval* NativeInstance
	{
		::BRepOffset_Interval* get()
		{
			return static_cast<::BRepOffset_Interval*>(_NativeInstance);
		}
	}

public:
	BRepOffset_Interval();
	/* Method skipped due to unknown mapping: void BRepOffset_Interval(Standard_Real U1, Standard_Real U2, ChFiDS_TypeOfConcavity Type, ) */
	BRepOffset_Interval(Macad::Occt::BRepOffset_Interval^ parameter1);
	void First(double U);
	void Last(double U);
	/* Method skipped due to unknown mapping: void Type(ChFiDS_TypeOfConcavity T, ) */
	double First();
	double Last();
	/* Method skipped due to unknown mapping: ChFiDS_TypeOfConcavity Type() */
}; // class BRepOffset_Interval

//---------------------------------------------------------------------
//  Class  BRepOffset_Analyse
//---------------------------------------------------------------------
public ref class BRepOffset_Analyse sealed : public BaseClass<::BRepOffset_Analyse>
{

#ifdef Include_BRepOffset_Analyse_h
public:
	Include_BRepOffset_Analyse_h
#endif

public:
	BRepOffset_Analyse(::BRepOffset_Analyse* nativeInstance)
		: BaseClass<::BRepOffset_Analyse>( nativeInstance, true )
	{}

	BRepOffset_Analyse(::BRepOffset_Analyse& nativeInstance)
		: BaseClass<::BRepOffset_Analyse>( &nativeInstance, false )
	{}

	property ::BRepOffset_Analyse* NativeInstance
	{
		::BRepOffset_Analyse* get()
		{
			return static_cast<::BRepOffset_Analyse*>(_NativeInstance);
		}
	}

public:
	BRepOffset_Analyse();
	BRepOffset_Analyse(Macad::Occt::TopoDS_Shape^ theS, double theAngle);
	BRepOffset_Analyse(Macad::Occt::BRepOffset_Analyse^ parameter1);
	void Perform(Macad::Occt::TopoDS_Shape^ theS, double theAngle);
	bool IsDone();
	Macad::Occt::BRepOffset_ListOfInterval^ Type(Macad::Occt::TopoDS_Edge^ theE);
	/* Method skipped due to unknown mapping: void Edges(TopoDS_Vertex theV, ChFiDS_TypeOfConcavity theType, TopTools_ListOfShape theL, ) */
	/* Method skipped due to unknown mapping: void Edges(TopoDS_Face theF, ChFiDS_TypeOfConcavity theType, TopTools_ListOfShape theL, ) */
	void TangentEdges(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Vertex^ theVertex, Macad::Occt::TopTools_ListOfShape^ theEdges);
	bool HasAncestor(Macad::Occt::TopoDS_Shape^ theS);
	Macad::Occt::TopTools_ListOfShape^ Ancestors(Macad::Occt::TopoDS_Shape^ theS);
	/* Method skipped due to unknown mapping: void Explode(TopTools_ListOfShape theL, ChFiDS_TypeOfConcavity theType, ) */
	/* Method skipped due to unknown mapping: void Explode(TopTools_ListOfShape theL, ChFiDS_TypeOfConcavity theType1, ChFiDS_TypeOfConcavity theType2, ) */
	/* Method skipped due to unknown mapping: void AddFaces(TopoDS_Face theFace, TopoDS_Compound theCo, TopTools_MapOfShape theMap, ChFiDS_TypeOfConcavity theType, ) */
	/* Method skipped due to unknown mapping: void AddFaces(TopoDS_Face theFace, TopoDS_Compound theCo, TopTools_MapOfShape theMap, ChFiDS_TypeOfConcavity theType1, ChFiDS_TypeOfConcavity theType2, ) */
	void SetOffsetValue(double theOffset);
	void SetFaceOffsetMap(Macad::Occt::TopTools_DataMapOfShapeReal^ theMap);
	Macad::Occt::TopTools_ListOfShape^ NewFaces();
	Macad::Occt::TopoDS_Shape^ Generated(Macad::Occt::TopoDS_Shape^ theS);
	bool HasGenerated(Macad::Occt::TopoDS_Shape^ theS);
	Macad::Occt::TopoDS_Edge^ EdgeReplacement(Macad::Occt::TopoDS_Face^ theFace, Macad::Occt::TopoDS_Edge^ theEdge);
	Macad::Occt::TopTools_ListOfShape^ Descendants(Macad::Occt::TopoDS_Shape^ theS, bool theUpdate);
	Macad::Occt::TopTools_ListOfShape^ Descendants(Macad::Occt::TopoDS_Shape^ theS);
	void Clear();
}; // class BRepOffset_Analyse

//---------------------------------------------------------------------
//  Class  BRepOffset_Offset
//---------------------------------------------------------------------
public ref class BRepOffset_Offset sealed : public BaseClass<::BRepOffset_Offset>
{

#ifdef Include_BRepOffset_Offset_h
public:
	Include_BRepOffset_Offset_h
#endif

public:
	BRepOffset_Offset(::BRepOffset_Offset* nativeInstance)
		: BaseClass<::BRepOffset_Offset>( nativeInstance, true )
	{}

	BRepOffset_Offset(::BRepOffset_Offset& nativeInstance)
		: BaseClass<::BRepOffset_Offset>( &nativeInstance, false )
	{}

	property ::BRepOffset_Offset* NativeInstance
	{
		::BRepOffset_Offset* get()
		{
			return static_cast<::BRepOffset_Offset*>(_NativeInstance);
		}
	}

public:
	BRepOffset_Offset();
	BRepOffset_Offset(Macad::Occt::TopoDS_Face^ Face, double Offset, bool OffsetOutside, Macad::Occt::GeomAbs_JoinType JoinType);
	BRepOffset_Offset(Macad::Occt::TopoDS_Face^ Face, double Offset, bool OffsetOutside);
	BRepOffset_Offset(Macad::Occt::TopoDS_Face^ Face, double Offset);
	BRepOffset_Offset(Macad::Occt::TopoDS_Face^ Face, double Offset, Macad::Occt::TopTools_DataMapOfShapeShape^ Created, bool OffsetOutside, Macad::Occt::GeomAbs_JoinType JoinType);
	BRepOffset_Offset(Macad::Occt::TopoDS_Face^ Face, double Offset, Macad::Occt::TopTools_DataMapOfShapeShape^ Created, bool OffsetOutside);
	BRepOffset_Offset(Macad::Occt::TopoDS_Face^ Face, double Offset, Macad::Occt::TopTools_DataMapOfShapeShape^ Created);
	BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, bool Polynomial, double Tol, Macad::Occt::GeomAbs_Shape Conti);
	BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, bool Polynomial, double Tol);
	BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, bool Polynomial);
	BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset);
	BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge, bool Polynomial, double Tol, Macad::Occt::GeomAbs_Shape Conti);
	BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge, bool Polynomial, double Tol);
	BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge, bool Polynomial);
	BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge);
	BRepOffset_Offset(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset, bool Polynomial, double Tol, Macad::Occt::GeomAbs_Shape Conti);
	BRepOffset_Offset(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset, bool Polynomial, double Tol);
	BRepOffset_Offset(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset, bool Polynomial);
	BRepOffset_Offset(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset);
	BRepOffset_Offset(Macad::Occt::BRepOffset_Offset^ parameter1);
	void Init(Macad::Occt::TopoDS_Face^ Face, double Offset, bool OffsetOutside, Macad::Occt::GeomAbs_JoinType JoinType);
	void Init(Macad::Occt::TopoDS_Face^ Face, double Offset, bool OffsetOutside);
	void Init(Macad::Occt::TopoDS_Face^ Face, double Offset);
	void Init(Macad::Occt::TopoDS_Face^ Face, double Offset, Macad::Occt::TopTools_DataMapOfShapeShape^ Created, bool OffsetOutside, Macad::Occt::GeomAbs_JoinType JoinType);
	void Init(Macad::Occt::TopoDS_Face^ Face, double Offset, Macad::Occt::TopTools_DataMapOfShapeShape^ Created, bool OffsetOutside);
	void Init(Macad::Occt::TopoDS_Face^ Face, double Offset, Macad::Occt::TopTools_DataMapOfShapeShape^ Created);
	void Init(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, bool Polynomial, double Tol, Macad::Occt::GeomAbs_Shape Conti);
	void Init(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, bool Polynomial, double Tol);
	void Init(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, bool Polynomial);
	void Init(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset);
	void Init(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge, bool Polynomial, double Tol, Macad::Occt::GeomAbs_Shape Conti);
	void Init(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge, bool Polynomial, double Tol);
	void Init(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge, bool Polynomial);
	void Init(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge);
	void Init(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset, bool Polynomial, double Tol, Macad::Occt::GeomAbs_Shape Conti);
	void Init(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset, bool Polynomial, double Tol);
	void Init(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset, bool Polynomial);
	void Init(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset);
	void Init(Macad::Occt::TopoDS_Edge^ Edge, double Offset);
	Macad::Occt::TopoDS_Shape^ InitialShape();
	Macad::Occt::TopoDS_Face^ Face();
	Macad::Occt::TopoDS_Shape^ Generated(Macad::Occt::TopoDS_Shape^ Shape);
	Macad::Occt::BRepOffset_Status Status();
}; // class BRepOffset_Offset

//---------------------------------------------------------------------
//  Class  BRepOffset_Inter2d
//---------------------------------------------------------------------
public ref class BRepOffset_Inter2d sealed : public BaseClass<::BRepOffset_Inter2d>
{

#ifdef Include_BRepOffset_Inter2d_h
public:
	Include_BRepOffset_Inter2d_h
#endif

public:
	BRepOffset_Inter2d(::BRepOffset_Inter2d* nativeInstance)
		: BaseClass<::BRepOffset_Inter2d>( nativeInstance, true )
	{}

	BRepOffset_Inter2d(::BRepOffset_Inter2d& nativeInstance)
		: BaseClass<::BRepOffset_Inter2d>( &nativeInstance, false )
	{}

	property ::BRepOffset_Inter2d* NativeInstance
	{
		::BRepOffset_Inter2d* get()
		{
			return static_cast<::BRepOffset_Inter2d*>(_NativeInstance);
		}
	}

public:
	BRepOffset_Inter2d();
	BRepOffset_Inter2d(Macad::Occt::BRepOffset_Inter2d^ parameter1);
	/* Method skipped due to unknown mapping: void Compute(BRepAlgo_AsDes AsDes, TopoDS_Face F, TopTools_IndexedMapOfShape NewEdges, Standard_Real Tol, TopTools_IndexedDataMapOfShapeListOfShape theDMVV, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean ConnexIntByInt(TopoDS_Face FI, BRepOffset_Offset OFI, TopTools_DataMapOfShapeShape MES, TopTools_DataMapOfShapeShape Build, BRepAlgo_AsDes AsDes2d, Standard_Real Offset, Standard_Real Tol, BRepOffset_Analyse Analyse, TopTools_IndexedMapOfShape FacesWithVerts, TopTools_IndexedDataMapOfShapeListOfShape theDMVV, ) */
	/* Method skipped due to unknown mapping: void ConnexIntByIntInVert(TopoDS_Face FI, BRepOffset_Offset OFI, TopTools_DataMapOfShapeShape MES, TopTools_DataMapOfShapeShape Build, BRepAlgo_AsDes AsDes, BRepAlgo_AsDes AsDes2d, Standard_Real Tol, BRepOffset_Analyse Analyse, TopTools_IndexedDataMapOfShapeListOfShape theDMVV, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean FuseVertices(TopTools_IndexedDataMapOfShapeListOfShape theDMVV, BRepAlgo_AsDes theAsDes, ) */
	static bool ExtentEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Edge^ NE, double theOffset);
}; // class BRepOffset_Inter2d

//---------------------------------------------------------------------
//  Class  BRepOffset_Inter3d
//---------------------------------------------------------------------
public ref class BRepOffset_Inter3d sealed : public BaseClass<::BRepOffset_Inter3d>
{

#ifdef Include_BRepOffset_Inter3d_h
public:
	Include_BRepOffset_Inter3d_h
#endif

public:
	BRepOffset_Inter3d(::BRepOffset_Inter3d* nativeInstance)
		: BaseClass<::BRepOffset_Inter3d>( nativeInstance, true )
	{}

	BRepOffset_Inter3d(::BRepOffset_Inter3d& nativeInstance)
		: BaseClass<::BRepOffset_Inter3d>( &nativeInstance, false )
	{}

	property ::BRepOffset_Inter3d* NativeInstance
	{
		::BRepOffset_Inter3d* get()
		{
			return static_cast<::BRepOffset_Inter3d*>(_NativeInstance);
		}
	}

public:
	/* Method skipped due to unknown mapping: void BRepOffset_Inter3d(BRepAlgo_AsDes AsDes, TopAbs_State Side, Standard_Real Tol, ) */
	BRepOffset_Inter3d(Macad::Occt::BRepOffset_Inter3d^ parameter1);
	/* Method skipped due to unknown mapping: void CompletInt(TopTools_ListOfShape SetOfFaces, BRepAlgo_Image InitOffsetFace, ) */
	/* Method skipped due to unknown mapping: void FaceInter(TopoDS_Face F1, TopoDS_Face F2, BRepAlgo_Image InitOffsetFace, ) */
	/* Method skipped due to unknown mapping: void ConnexIntByArc(TopTools_ListOfShape SetOfFaces, TopoDS_Shape ShapeInit, BRepOffset_Analyse Analyse, BRepAlgo_Image InitOffsetFace, ) */
	void ConnexIntByInt(Macad::Occt::TopoDS_Shape^ SI, Macad::Occt::BRepOffset_DataMapOfShapeOffset^ MapSF, Macad::Occt::BRepOffset_Analyse^ A, Macad::Occt::TopTools_DataMapOfShapeShape^ MES, Macad::Occt::TopTools_DataMapOfShapeShape^ Build, Macad::Occt::TopTools_ListOfShape^ Failed, bool bIsPlanar);
	void ConnexIntByInt(Macad::Occt::TopoDS_Shape^ SI, Macad::Occt::BRepOffset_DataMapOfShapeOffset^ MapSF, Macad::Occt::BRepOffset_Analyse^ A, Macad::Occt::TopTools_DataMapOfShapeShape^ MES, Macad::Occt::TopTools_DataMapOfShapeShape^ Build, Macad::Occt::TopTools_ListOfShape^ Failed);
	void ContextIntByInt(Macad::Occt::TopTools_IndexedMapOfShape^ ContextFaces, bool ExtentContext, Macad::Occt::BRepOffset_DataMapOfShapeOffset^ MapSF, Macad::Occt::BRepOffset_Analyse^ A, Macad::Occt::TopTools_DataMapOfShapeShape^ MES, Macad::Occt::TopTools_DataMapOfShapeShape^ Build, Macad::Occt::TopTools_ListOfShape^ Failed, bool bIsPlanar);
	void ContextIntByInt(Macad::Occt::TopTools_IndexedMapOfShape^ ContextFaces, bool ExtentContext, Macad::Occt::BRepOffset_DataMapOfShapeOffset^ MapSF, Macad::Occt::BRepOffset_Analyse^ A, Macad::Occt::TopTools_DataMapOfShapeShape^ MES, Macad::Occt::TopTools_DataMapOfShapeShape^ Build, Macad::Occt::TopTools_ListOfShape^ Failed);
	/* Method skipped due to unknown mapping: void ContextIntByArc(TopTools_IndexedMapOfShape ContextFaces, Standard_Boolean ExtentContext, BRepOffset_Analyse Analyse, BRepAlgo_Image InitOffsetFace, BRepAlgo_Image InitOffsetEdge, ) */
	void AddCommonEdges(Macad::Occt::TopTools_ListOfShape^ SetOfFaces);
	void SetDone(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2);
	bool IsDone(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2);
	Macad::Occt::TopTools_IndexedMapOfShape^ TouchedFaces();
	/* Method skipped due to unknown mapping: BRepAlgo_AsDes AsDes() */
	Macad::Occt::TopTools_IndexedMapOfShape^ NewEdges();
}; // class BRepOffset_Inter3d

//---------------------------------------------------------------------
//  Class  BRepOffset_MakeLoops
//---------------------------------------------------------------------
public ref class BRepOffset_MakeLoops sealed : public BaseClass<::BRepOffset_MakeLoops>
{

#ifdef Include_BRepOffset_MakeLoops_h
public:
	Include_BRepOffset_MakeLoops_h
#endif

public:
	BRepOffset_MakeLoops(::BRepOffset_MakeLoops* nativeInstance)
		: BaseClass<::BRepOffset_MakeLoops>( nativeInstance, true )
	{}

	BRepOffset_MakeLoops(::BRepOffset_MakeLoops& nativeInstance)
		: BaseClass<::BRepOffset_MakeLoops>( &nativeInstance, false )
	{}

	property ::BRepOffset_MakeLoops* NativeInstance
	{
		::BRepOffset_MakeLoops* get()
		{
			return static_cast<::BRepOffset_MakeLoops*>(_NativeInstance);
		}
	}

public:
	BRepOffset_MakeLoops();
	BRepOffset_MakeLoops(Macad::Occt::BRepOffset_MakeLoops^ parameter1);
	/* Method skipped due to unknown mapping: void Build(TopTools_ListOfShape LF, BRepAlgo_AsDes AsDes, BRepAlgo_Image Image, ) */
	/* Method skipped due to unknown mapping: void BuildOnContext(TopTools_ListOfShape LContext, BRepOffset_Analyse Analyse, BRepAlgo_AsDes AsDes, BRepAlgo_Image Image, Standard_Boolean InSide, ) */
	/* Method skipped due to unknown mapping: void BuildFaces(TopTools_ListOfShape LF, BRepAlgo_AsDes AsDes, BRepAlgo_Image Image, ) */
}; // class BRepOffset_MakeLoops

//---------------------------------------------------------------------
//  Class  BRepOffset_MakeOffset
//---------------------------------------------------------------------
public ref class BRepOffset_MakeOffset sealed : public BaseClass<::BRepOffset_MakeOffset>
{

#ifdef Include_BRepOffset_MakeOffset_h
public:
	Include_BRepOffset_MakeOffset_h
#endif

public:
	BRepOffset_MakeOffset(::BRepOffset_MakeOffset* nativeInstance)
		: BaseClass<::BRepOffset_MakeOffset>( nativeInstance, true )
	{}

	BRepOffset_MakeOffset(::BRepOffset_MakeOffset& nativeInstance)
		: BaseClass<::BRepOffset_MakeOffset>( &nativeInstance, false )
	{}

	property ::BRepOffset_MakeOffset* NativeInstance
	{
		::BRepOffset_MakeOffset* get()
		{
			return static_cast<::BRepOffset_MakeOffset*>(_NativeInstance);
		}
	}

public:
	BRepOffset_MakeOffset();
	BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool Thickening, bool RemoveIntEdges);
	BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool Thickening);
	BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join);
	BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter);
	BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection);
	BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode);
	BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol);
	BRepOffset_MakeOffset(Macad::Occt::BRepOffset_MakeOffset^ parameter1);
	void Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool Thickening, bool RemoveIntEdges);
	void Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool Thickening);
	void Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join);
	void Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter);
	void Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection);
	void Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode);
	void Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol);
	void Clear();
	void AllowLinearization(bool theIsAllowed);
	void AddFace(Macad::Occt::TopoDS_Face^ F);
	void SetOffsetOnFace(Macad::Occt::TopoDS_Face^ F, double Off);
	void MakeOffsetShape();
	void MakeThickSolid();
	Macad::Occt::BRepOffset_Analyse^ GetAnalyse();
	bool IsDone();
	Macad::Occt::TopoDS_Shape^ Shape();
	Macad::Occt::TopoDS_Shape^ InitShape();
	Macad::Occt::BRepOffset_Error Error();
	/* Method skipped due to unknown mapping: BRepAlgo_Image OffsetFacesFromShapes() */
	Macad::Occt::GeomAbs_JoinType GetJoinType();
	/* Method skipped due to unknown mapping: BRepAlgo_Image OffsetEdgesFromShapes() */
	Macad::Occt::TopTools_IndexedMapOfShape^ ClosingFaces();
	bool CheckInputData();
	Macad::Occt::TopoDS_Shape^ GetBadShape();
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ theS);
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ theS);
	bool IsDeleted(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepOffset_MakeOffset

//---------------------------------------------------------------------
//  Class  BRepOffset_MakeSimpleOffset
//---------------------------------------------------------------------
public ref class BRepOffset_MakeSimpleOffset sealed : public BaseClass<::BRepOffset_MakeSimpleOffset>
{

#ifdef Include_BRepOffset_MakeSimpleOffset_h
public:
	Include_BRepOffset_MakeSimpleOffset_h
#endif

public:
	BRepOffset_MakeSimpleOffset(::BRepOffset_MakeSimpleOffset* nativeInstance)
		: BaseClass<::BRepOffset_MakeSimpleOffset>( nativeInstance, true )
	{}

	BRepOffset_MakeSimpleOffset(::BRepOffset_MakeSimpleOffset& nativeInstance)
		: BaseClass<::BRepOffset_MakeSimpleOffset>( &nativeInstance, false )
	{}

	property ::BRepOffset_MakeSimpleOffset* NativeInstance
	{
		::BRepOffset_MakeSimpleOffset* get()
		{
			return static_cast<::BRepOffset_MakeSimpleOffset*>(_NativeInstance);
		}
	}

public:
	BRepOffset_MakeSimpleOffset();
	BRepOffset_MakeSimpleOffset(Macad::Occt::TopoDS_Shape^ theInputShape, double theOffsetValue);
	BRepOffset_MakeSimpleOffset(Macad::Occt::BRepOffset_MakeSimpleOffset^ parameter1);
	void Initialize(Macad::Occt::TopoDS_Shape^ theInputShape, double theOffsetValue);
	void Perform();
	Macad::Occt::TCollection_AsciiString^ GetErrorMessage();
	Macad::Occt::BRepOffsetSimple_Status GetError();
	bool GetBuildSolidFlag();
	void SetBuildSolidFlag(bool theBuildFlag);
	double GetOffsetValue();
	void SetOffsetValue(double theOffsetValue);
	double GetTolerance();
	void SetTolerance(double theValue);
	bool IsDone();
	Macad::Occt::TopoDS_Shape^ GetResultShape();
	Macad::Occt::TopoDS_Shape^ Generated(Macad::Occt::TopoDS_Shape^ theShape);
	Macad::Occt::TopoDS_Shape^ Modified(Macad::Occt::TopoDS_Shape^ theShape);
}; // class BRepOffset_MakeSimpleOffset

//---------------------------------------------------------------------
//  Class  BRepOffset_SimpleOffset
//---------------------------------------------------------------------
public ref class BRepOffset_SimpleOffset sealed : public Macad::Occt::BRepTools_Modification
{

#ifdef Include_BRepOffset_SimpleOffset_h
public:
	Include_BRepOffset_SimpleOffset_h
#endif

public:
	BRepOffset_SimpleOffset(::BRepOffset_SimpleOffset* nativeInstance)
		: Macad::Occt::BRepTools_Modification( nativeInstance )
	{}

	BRepOffset_SimpleOffset(::BRepOffset_SimpleOffset& nativeInstance)
		: Macad::Occt::BRepTools_Modification( nativeInstance )
	{}

	property ::BRepOffset_SimpleOffset* NativeInstance
	{
		::BRepOffset_SimpleOffset* get()
		{
			return static_cast<::BRepOffset_SimpleOffset*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRepOffset_SimpleOffset^ CreateDowncasted(::BRepOffset_SimpleOffset* instance);

public:
	BRepOffset_SimpleOffset(Macad::Occt::TopoDS_Shape^ theInputShape, double theOffsetValue, double theTolerance);
	bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
	bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
	bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
	bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
	bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
	Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2);
}; // class BRepOffset_SimpleOffset

//---------------------------------------------------------------------
//  Class  BRepOffset_Tool
//---------------------------------------------------------------------
public ref class BRepOffset_Tool sealed : public BaseClass<::BRepOffset_Tool>
{

#ifdef Include_BRepOffset_Tool_h
public:
	Include_BRepOffset_Tool_h
#endif

public:
	BRepOffset_Tool(::BRepOffset_Tool* nativeInstance)
		: BaseClass<::BRepOffset_Tool>( nativeInstance, true )
	{}

	BRepOffset_Tool(::BRepOffset_Tool& nativeInstance)
		: BaseClass<::BRepOffset_Tool>( &nativeInstance, false )
	{}

	property ::BRepOffset_Tool* NativeInstance
	{
		::BRepOffset_Tool* get()
		{
			return static_cast<::BRepOffset_Tool*>(_NativeInstance);
		}
	}

public:
	BRepOffset_Tool();
	BRepOffset_Tool(Macad::Occt::BRepOffset_Tool^ parameter1);
	static void EdgeVertices(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	static void OrientSection(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopAbs_Orientation% O1, Macad::Occt::TopAbs_Orientation% O2);
	static bool FindCommonShapes(Macad::Occt::TopoDS_Face^ theF1, Macad::Occt::TopoDS_Face^ theF2, Macad::Occt::TopTools_ListOfShape^ theLE, Macad::Occt::TopTools_ListOfShape^ theLV);
	static bool FindCommonShapes(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::TopAbs_ShapeEnum theType, Macad::Occt::TopTools_ListOfShape^ theLSC);
	static void Inter3D(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopTools_ListOfShape^ LInt1, Macad::Occt::TopTools_ListOfShape^ LInt2, Macad::Occt::TopAbs_State Side, Macad::Occt::TopoDS_Edge^ RefEdge, bool IsRefEdgeDefined);
	static void Inter3D(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopTools_ListOfShape^ LInt1, Macad::Occt::TopTools_ListOfShape^ LInt2, Macad::Occt::TopAbs_State Side, Macad::Occt::TopoDS_Edge^ RefEdge);
	static bool TryProject(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopTools_ListOfShape^ Edges, Macad::Occt::TopTools_ListOfShape^ LInt1, Macad::Occt::TopTools_ListOfShape^ LInt2, Macad::Occt::TopAbs_State Side, double TolConf);
	static void PipeInter(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopTools_ListOfShape^ LInt1, Macad::Occt::TopTools_ListOfShape^ LInt2, Macad::Occt::TopAbs_State Side);
	static void Inter2d(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopTools_ListOfShape^ LV, double Tol);
	static void InterOrExtent(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopTools_ListOfShape^ LInt1, Macad::Occt::TopTools_ListOfShape^ LInt2, Macad::Occt::TopAbs_State Side);
	static void CheckBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::BRepOffset_Analyse^ Analyse, bool% enlargeU, bool% enlargeVfirst, bool% enlargeVlast);
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst, bool enlargeVlast, int theExtensionMode, double theLenBeforeUfirst, double theLenAfterUlast, double theLenBeforeVfirst, double theLenAfterVlast);
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst, bool enlargeVlast, int theExtensionMode, double theLenBeforeUfirst, double theLenAfterUlast, double theLenBeforeVfirst);
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst, bool enlargeVlast, int theExtensionMode, double theLenBeforeUfirst, double theLenAfterUlast);
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst, bool enlargeVlast, int theExtensionMode, double theLenBeforeUfirst);
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst, bool enlargeVlast, int theExtensionMode);
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst, bool enlargeVlast);
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst);
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU);
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve);
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom);
	static void ExtentFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopTools_DataMapOfShapeShape^ ConstShapes, Macad::Occt::TopTools_DataMapOfShapeShape^ ToBuild, Macad::Occt::TopAbs_State Side, double TolConf, Macad::Occt::TopoDS_Face^ NF);
	static void BuildNeighbour(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopTools_DataMapOfShapeShape^ NOnV1, Macad::Occt::TopTools_DataMapOfShapeShape^ NOnV2);
	static void MapVertexEdges(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ MVE);
	static Macad::Occt::TopoDS_Shape^ Deboucle3D(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_MapOfShape^ Boundary);
	/* Method skipped due to unknown mapping: void CorrectOrientation(TopoDS_Shape SI, TopTools_IndexedMapOfShape NewEdges, BRepAlgo_AsDes AsDes, BRepAlgo_Image InitOffset, Standard_Real Offset, ) */
	static double Gabarit(Macad::Occt::Geom_Curve^ aCurve);
	static bool CheckPlanesNormals(Macad::Occt::TopoDS_Face^ theFace1, Macad::Occt::TopoDS_Face^ theFace2, double theTolAng);
	static bool CheckPlanesNormals(Macad::Occt::TopoDS_Face^ theFace1, Macad::Occt::TopoDS_Face^ theFace2);
}; // class BRepOffset_Tool

}; // namespace Occt
}; // namespace Macad
