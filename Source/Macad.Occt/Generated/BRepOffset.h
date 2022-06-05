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
/// <summary>
/// status of an offset face
/// Good :
/// Reversed : e.g. Offset > Radius of a cylinder
/// Degenerated : e.g. Offset = Radius of a cylinder
/// Unknown : e.g. for a Beziersurf
/// </summary>
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
	BRepOffset_CannotExtentEdge = 8,
	BRepOffset_UserBreak = 9
}; // enum  class BRepOffset_Error

//---------------------------------------------------------------------
//  Enum  BRepOffset_Mode
//---------------------------------------------------------------------
/// <summary>
/// Lists the offset modes. These are the following:
/// - BRepOffset_Skin which describes the offset along
/// the surface of a solid, used to obtain a manifold topological space,
/// - BRepOffset_Pipe which describes the offset of a
/// curve, used to obtain a pre-surface,
/// - BRepOffset_RectoVerso which describes the offset
/// of a given surface shell along both sides of the surface.
/// </summary>
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
/// <summary>
/// Auxiliary tools for offset algorithms
/// </summary>
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
	/// <summary>
	/// returns   the  Offset  surface  computed from  the
	/// surface <Surface> at an OffsetDistance <Offset>.
	/// 
	/// If possible, this method returns  the real type of
	/// the surface ( e.g. An Offset of a plane is a plane).
	/// 
	/// If  no particular  case  is detected, the returned
	/// surface will have the Type Geom_OffsetSurface.
	/// Parameter allowC0 is then passed as last argument to
	/// constructor of Geom_OffsetSurface.
	/// </summary>
	static Macad::Occt::Geom_Surface^ Surface(Macad::Occt::Geom_Surface^ Surface, double Offset, Macad::Occt::BRepOffset_Status% theStatus, bool allowC0);
	/// <summary>
	/// returns   the  Offset  surface  computed from  the
	/// surface <Surface> at an OffsetDistance <Offset>.
	/// 
	/// If possible, this method returns  the real type of
	/// the surface ( e.g. An Offset of a plane is a plane).
	/// 
	/// If  no particular  case  is detected, the returned
	/// surface will have the Type Geom_OffsetSurface.
	/// Parameter allowC0 is then passed as last argument to
	/// constructor of Geom_OffsetSurface.
	/// </summary>
	static Macad::Occt::Geom_Surface^ Surface(Macad::Occt::Geom_Surface^ Surface, double Offset, Macad::Occt::BRepOffset_Status% theStatus);
	/// <summary>
	/// Preprocess surface to be offset (bspline, bezier, or revolution based on
	/// bspline or bezier curve), by collapsing each singular side to single point.
	/// 
	/// This is to avoid possible flipping of normal at the singularity
	/// of the surface due to non-zero distance between the poles that
	/// logically should be in one point (singularity).
	/// 
	/// The (parametric) side of the surface is considered to be singularity if face
	/// has degenerated edge whose vertex encompasses (by its tolerance) all points on that side,
	/// or if all poles defining that side fit into sphere with radius thePrecision.
	/// 
	/// Returns either original surface or its modified copy (if some poles have been moved).
	/// </summary>
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
/// <summary>
/// Analyses the shape to find the parts of edges
/// connecting the convex, concave or tangent faces.
/// </summary>
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
	/// <summary>
	/// Empty c-tor
	/// </summary>
	BRepOffset_Analyse();
	/// <summary>
	/// C-tor performing the job inside
	/// </summary>
	BRepOffset_Analyse(Macad::Occt::TopoDS_Shape^ theS, double theAngle);
	BRepOffset_Analyse(Macad::Occt::BRepOffset_Analyse^ parameter1);
	/// <summary>
	/// Performs the analysis
	/// </summary>
	void Perform(Macad::Occt::TopoDS_Shape^ theS, double theAngle, Macad::Occt::Message_ProgressRange^ theRange);
	/// <summary>
	/// Performs the analysis
	/// </summary>
	void Perform(Macad::Occt::TopoDS_Shape^ theS, double theAngle);
	/// <summary>
	/// Returns status of the algorithm
	/// </summary>
	bool IsDone();
	/// <summary>
	/// Returns the connectivity type of the edge
	/// </summary>
	Macad::Occt::BRepOffset_ListOfInterval^ Type(Macad::Occt::TopoDS_Edge^ theE);
	/// <summary>
	/// Stores in <L> all the edges of Type <T>
	/// on the vertex <V>.
	/// </summary>
	/* Method skipped due to unknown mapping: void Edges(TopoDS_Vertex theV, ChFiDS_TypeOfConcavity theType, TopTools_ListOfShape theL, ) */
	/// <summary>
	/// Stores in <L> all the edges of Type <T>
	/// on the face <F>.
	/// </summary>
	/* Method skipped due to unknown mapping: void Edges(TopoDS_Face theF, ChFiDS_TypeOfConcavity theType, TopTools_ListOfShape theL, ) */
	/// <summary>
	/// set in <Edges> all  the Edges of <Shape> which are
	/// tangent to <Edge> at the vertex <Vertex>.
	/// </summary>
	void TangentEdges(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Vertex^ theVertex, Macad::Occt::TopTools_ListOfShape^ theEdges);
	/// <summary>
	/// Checks if the given shape has ancestors
	/// </summary>
	bool HasAncestor(Macad::Occt::TopoDS_Shape^ theS);
	/// <summary>
	/// Returns ancestors for the shape
	/// </summary>
	Macad::Occt::TopTools_ListOfShape^ Ancestors(Macad::Occt::TopoDS_Shape^ theS);
	/// <summary>
	/// Explode in compounds of faces where
	/// all the connex edges are of type <Side>
	/// </summary>
	/* Method skipped due to unknown mapping: void Explode(TopTools_ListOfShape theL, ChFiDS_TypeOfConcavity theType, ) */
	/// <summary>
	/// Explode in compounds of faces where
	/// all the connex edges are of type <Side1> or <Side2>
	/// </summary>
	/* Method skipped due to unknown mapping: void Explode(TopTools_ListOfShape theL, ChFiDS_TypeOfConcavity theType1, ChFiDS_TypeOfConcavity theType2, ) */
	/// <summary>
	/// Add in <CO> the faces of the shell containing <Face>
	/// where all the connex edges are of type <Side>.
	/// </summary>
	/* Method skipped due to unknown mapping: void AddFaces(TopoDS_Face theFace, TopoDS_Compound theCo, TopTools_MapOfShape theMap, ChFiDS_TypeOfConcavity theType, ) */
	/// <summary>
	/// Add in <CO> the faces of the shell containing <Face>
	/// where all the connex edges are of type <Side1> or <Side2>.
	/// </summary>
	/* Method skipped due to unknown mapping: void AddFaces(TopoDS_Face theFace, TopoDS_Compound theCo, TopTools_MapOfShape theMap, ChFiDS_TypeOfConcavity theType1, ChFiDS_TypeOfConcavity theType2, ) */
	void SetOffsetValue(double theOffset);
	/// <summary>
	/// Sets the face-offset data map to analyze tangential cases
	/// </summary>
	void SetFaceOffsetMap(Macad::Occt::TopTools_DataMapOfShapeReal^ theMap);
	/// <summary>
	/// Returns the new faces constructed between tangent faces
	/// having different offset values on the shape
	/// </summary>
	Macad::Occt::TopTools_ListOfShape^ NewFaces();
	/// <summary>
	/// Returns the new face constructed for the edge connecting
	/// the two tangent faces having different offset values
	/// </summary>
	Macad::Occt::TopoDS_Shape^ Generated(Macad::Occt::TopoDS_Shape^ theS);
	/// <summary>
	/// Checks if the edge has generated a new face.
	/// </summary>
	bool HasGenerated(Macad::Occt::TopoDS_Shape^ theS);
	/// <summary>
	/// Returns the replacement of the edge in the face.
	/// If no replacement exists, returns the edge
	/// </summary>
	Macad::Occt::TopoDS_Edge^ EdgeReplacement(Macad::Occt::TopoDS_Face^ theFace, Macad::Occt::TopoDS_Edge^ theEdge);
	/// <summary>
	/// Returns the shape descendants.
	/// </summary>
	Macad::Occt::TopTools_ListOfShape^ Descendants(Macad::Occt::TopoDS_Shape^ theS, bool theUpdate);
	/// <summary>
	/// Returns the shape descendants.
	/// </summary>
	Macad::Occt::TopTools_ListOfShape^ Descendants(Macad::Occt::TopoDS_Shape^ theS);
	/// <summary>
	/// Clears the content of the algorithm
	/// </summary>
	void Clear();
}; // class BRepOffset_Analyse

//---------------------------------------------------------------------
//  Class  BRepOffset_Offset
//---------------------------------------------------------------------
/// <summary>
/// This class compute elemenary offset surface.
/// Evaluate the offset generated :
/// 1 - from a face.
/// 2 - from an edge.
/// 3 - from a vertex.
/// </summary>
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
	/// <summary>
	/// This method will be  called when you want to share
	/// the  edges  soon generated  from  an other  face.
	/// e.g. when two faces are  tangents the common  edge
	/// will generate only one edge ( no pipe).
	/// 
	/// The Map  will be fill  as  follow:
	/// 
	/// Created(E) = E'
	/// with: E  = an edge of <Face>
	/// E' = the image of E in the offsetting  of
	/// another  face  sharing E  with a
	/// continuity at least G1
	/// </summary>
	BRepOffset_Offset(Macad::Occt::TopoDS_Face^ Face, double Offset, Macad::Occt::TopTools_DataMapOfShapeShape^ Created, bool OffsetOutside, Macad::Occt::GeomAbs_JoinType JoinType);
	/// <summary>
	/// This method will be  called when you want to share
	/// the  edges  soon generated  from  an other  face.
	/// e.g. when two faces are  tangents the common  edge
	/// will generate only one edge ( no pipe).
	/// 
	/// The Map  will be fill  as  follow:
	/// 
	/// Created(E) = E'
	/// with: E  = an edge of <Face>
	/// E' = the image of E in the offsetting  of
	/// another  face  sharing E  with a
	/// continuity at least G1
	/// </summary>
	BRepOffset_Offset(Macad::Occt::TopoDS_Face^ Face, double Offset, Macad::Occt::TopTools_DataMapOfShapeShape^ Created, bool OffsetOutside);
	/// <summary>
	/// This method will be  called when you want to share
	/// the  edges  soon generated  from  an other  face.
	/// e.g. when two faces are  tangents the common  edge
	/// will generate only one edge ( no pipe).
	/// 
	/// The Map  will be fill  as  follow:
	/// 
	/// Created(E) = E'
	/// with: E  = an edge of <Face>
	/// E' = the image of E in the offsetting  of
	/// another  face  sharing E  with a
	/// continuity at least G1
	/// </summary>
	BRepOffset_Offset(Macad::Occt::TopoDS_Face^ Face, double Offset, Macad::Occt::TopTools_DataMapOfShapeShape^ Created);
	BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, bool Polynomial, double Tol, Macad::Occt::GeomAbs_Shape Conti);
	BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, bool Polynomial, double Tol);
	BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, bool Polynomial);
	BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset);
	BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge, bool Polynomial, double Tol, Macad::Occt::GeomAbs_Shape Conti);
	BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge, bool Polynomial, double Tol);
	BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge, bool Polynomial);
	BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge);
	/// <summary>
	/// Tol and Conti are only used if Polynomial is True
	/// (Used to perform the approximation)
	/// </summary>
	BRepOffset_Offset(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset, bool Polynomial, double Tol, Macad::Occt::GeomAbs_Shape Conti);
	/// <summary>
	/// Tol and Conti are only used if Polynomial is True
	/// (Used to perform the approximation)
	/// </summary>
	BRepOffset_Offset(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset, bool Polynomial, double Tol);
	/// <summary>
	/// Tol and Conti are only used if Polynomial is True
	/// (Used to perform the approximation)
	/// </summary>
	BRepOffset_Offset(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset, bool Polynomial);
	/// <summary>
	/// Tol and Conti are only used if Polynomial is True
	/// (Used to perform the approximation)
	/// </summary>
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
	/// <summary>
	/// Tol and Conti are only used if Polynomial is True
	/// (Used to perform the approximation)
	/// </summary>
	void Init(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset, bool Polynomial, double Tol, Macad::Occt::GeomAbs_Shape Conti);
	/// <summary>
	/// Tol and Conti are only used if Polynomial is True
	/// (Used to perform the approximation)
	/// </summary>
	void Init(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset, bool Polynomial, double Tol);
	/// <summary>
	/// Tol and Conti are only used if Polynomial is True
	/// (Used to perform the approximation)
	/// </summary>
	void Init(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset, bool Polynomial);
	/// <summary>
	/// Tol and Conti are only used if Polynomial is True
	/// (Used to perform the approximation)
	/// </summary>
	void Init(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset);
	/// <summary>
	/// Only used in Rolling Ball. Pipe on Free Boundary
	/// </summary>
	void Init(Macad::Occt::TopoDS_Edge^ Edge, double Offset);
	Macad::Occt::TopoDS_Shape^ InitialShape();
	Macad::Occt::TopoDS_Face^ Face();
	Macad::Occt::TopoDS_Shape^ Generated(Macad::Occt::TopoDS_Shape^ Shape);
	Macad::Occt::BRepOffset_Status Status();
}; // class BRepOffset_Offset

//---------------------------------------------------------------------
//  Class  BRepOffset_Inter2d
//---------------------------------------------------------------------
/// <summary>
/// Computes the intersections between edges on a face
/// stores result is SD as AsDes from BRepOffset.
/// </summary>
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
	/// <summary>
	/// Computes the intersections between the edges stored
	/// is AsDes as descendants of <F> . Intersections is computed
	/// between two edges if one of them is bound in NewEdges.
	/// When all faces of the shape are treated the intersection
	/// vertices have to be fused using the FuseVertices method.
	/// theDMVV contains the vertices that should be fused
	/// </summary>
	/* Method skipped due to unknown mapping: void Compute(BRepAlgo_AsDes AsDes, TopoDS_Face F, TopTools_IndexedMapOfShape NewEdges, Standard_Real Tol, TopTools_DataMapOfShapeListOfShape theEdgeIntEdges, TopTools_IndexedDataMapOfShapeListOfShape theDMVV, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Computes the intersection between the offset edges of the <FI>.
	/// All intersection vertices will be stored in AsDes2d.
	/// When all faces of the shape are treated the intersection vertices
	/// have to be fused using the FuseVertices method.
	/// theDMVV contains the vertices that should be fused.
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean ConnexIntByInt(TopoDS_Face FI, BRepOffset_Offset OFI, TopTools_DataMapOfShapeShape MES, TopTools_DataMapOfShapeShape Build, BRepAlgo_AsDes theAsDes, BRepAlgo_AsDes AsDes2d, Standard_Real Offset, Standard_Real Tol, BRepOffset_Analyse Analyse, TopTools_IndexedMapOfShape FacesWithVerts, BRepAlgo_Image theImageVV, TopTools_DataMapOfShapeListOfShape theEdgeIntEdges, TopTools_IndexedDataMapOfShapeListOfShape theDMVV, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Computes the intersection between the offset edges generated
	/// from vertices and stored into AsDes as descendants of the <FI>.
	/// All intersection vertices will be stored in AsDes2d.
	/// When all faces of the shape are treated the intersection vertices
	/// have to be fused using the FuseVertices method.
	/// theDMVV contains the vertices that should be fused.
	/// </summary>
	/* Method skipped due to unknown mapping: void ConnexIntByIntInVert(TopoDS_Face FI, BRepOffset_Offset OFI, TopTools_DataMapOfShapeShape MES, TopTools_DataMapOfShapeShape Build, BRepAlgo_AsDes AsDes, BRepAlgo_AsDes AsDes2d, Standard_Real Tol, BRepOffset_Analyse Analyse, TopTools_IndexedDataMapOfShapeListOfShape theDMVV, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Fuses the chains of vertices in the theDMVV
	/// and updates AsDes by replacing the old vertices
	/// with the new ones.
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean FuseVertices(TopTools_IndexedDataMapOfShapeListOfShape theDMVV, BRepAlgo_AsDes theAsDes, BRepAlgo_Image theImageVV, ) */
	/// <summary>
	/// extents the edge
	/// </summary>
	static bool ExtentEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Edge^ NE, double theOffset);
}; // class BRepOffset_Inter2d

//---------------------------------------------------------------------
//  Class  BRepOffset_Inter3d
//---------------------------------------------------------------------
/// <summary>
/// Computes the connection of the offset and not offset faces
/// according to the connection type required.
/// Store the result in AsDes tool.
/// </summary>
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
	/// <summary>
	/// Constructor
	/// </summary>
	/* Method skipped due to unknown mapping: void BRepOffset_Inter3d(BRepAlgo_AsDes AsDes, TopAbs_State Side, Standard_Real Tol, ) */
	BRepOffset_Inter3d(Macad::Occt::BRepOffset_Inter3d^ parameter1);
	/* Method skipped due to unknown mapping: void CompletInt(TopTools_ListOfShape SetOfFaces, BRepAlgo_Image InitOffsetFace, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Computes intersection of pair of faces
	/// </summary>
	/* Method skipped due to unknown mapping: void FaceInter(TopoDS_Face F1, TopoDS_Face F2, BRepAlgo_Image InitOffsetFace, ) */
	/// <summary>
	/// Computes connections of the offset faces that have to be connected by arcs.
	/// </summary>
	/* Method skipped due to unknown mapping: void ConnexIntByArc(TopTools_ListOfShape SetOfFaces, TopoDS_Shape ShapeInit, BRepOffset_Analyse Analyse, BRepAlgo_Image InitOffsetFace, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Computes intersection of the offset faces that have to be connected by
	/// sharp edges, i.e. it computes intersection between extended offset faces.
	/// </summary>
	void ConnexIntByInt(Macad::Occt::TopoDS_Shape^ SI, Macad::Occt::BRepOffset_DataMapOfShapeOffset^ MapSF, Macad::Occt::BRepOffset_Analyse^ A, Macad::Occt::TopTools_DataMapOfShapeShape^ MES, Macad::Occt::TopTools_DataMapOfShapeShape^ Build, Macad::Occt::TopTools_ListOfShape^ Failed, Macad::Occt::Message_ProgressRange^ theRange, bool bIsPlanar);
	/// <summary>
	/// Computes intersection of the offset faces that have to be connected by
	/// sharp edges, i.e. it computes intersection between extended offset faces.
	/// </summary>
	void ConnexIntByInt(Macad::Occt::TopoDS_Shape^ SI, Macad::Occt::BRepOffset_DataMapOfShapeOffset^ MapSF, Macad::Occt::BRepOffset_Analyse^ A, Macad::Occt::TopTools_DataMapOfShapeShape^ MES, Macad::Occt::TopTools_DataMapOfShapeShape^ Build, Macad::Occt::TopTools_ListOfShape^ Failed, Macad::Occt::Message_ProgressRange^ theRange);
	/// <summary>
	/// Computes intersection with not offset faces .
	/// </summary>
	void ContextIntByInt(Macad::Occt::TopTools_IndexedMapOfShape^ ContextFaces, bool ExtentContext, Macad::Occt::BRepOffset_DataMapOfShapeOffset^ MapSF, Macad::Occt::BRepOffset_Analyse^ A, Macad::Occt::TopTools_DataMapOfShapeShape^ MES, Macad::Occt::TopTools_DataMapOfShapeShape^ Build, Macad::Occt::TopTools_ListOfShape^ Failed, Macad::Occt::Message_ProgressRange^ theRange, bool bIsPlanar);
	/// <summary>
	/// Computes intersection with not offset faces .
	/// </summary>
	void ContextIntByInt(Macad::Occt::TopTools_IndexedMapOfShape^ ContextFaces, bool ExtentContext, Macad::Occt::BRepOffset_DataMapOfShapeOffset^ MapSF, Macad::Occt::BRepOffset_Analyse^ A, Macad::Occt::TopTools_DataMapOfShapeShape^ MES, Macad::Occt::TopTools_DataMapOfShapeShape^ Build, Macad::Occt::TopTools_ListOfShape^ Failed, Macad::Occt::Message_ProgressRange^ theRange);
	/// <summary>
	/// Computes connections of the not offset faces that have to be connected by arcs
	/// </summary>
	/* Method skipped due to unknown mapping: void ContextIntByArc(TopTools_IndexedMapOfShape ContextFaces, Standard_Boolean ExtentContext, BRepOffset_Analyse Analyse, BRepAlgo_Image InitOffsetFace, BRepAlgo_Image InitOffsetEdge, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Marks the pair of faces as already intersected
	/// </summary>
	void SetDone(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2);
	/// <summary>
	/// Checks if the pair of faces has already been treated.
	/// </summary>
	bool IsDone(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2);
	/// <summary>
	/// Returns touched faces
	/// </summary>
	Macad::Occt::TopTools_IndexedMapOfShape^ TouchedFaces();
	/// <summary>
	/// Returns AsDes tool
	/// </summary>
	/* Method skipped due to unknown mapping: BRepAlgo_AsDes AsDes() */
	/// <summary>
	/// Returns new edges
	/// </summary>
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
	/* Method skipped due to unknown mapping: void Build(TopTools_ListOfShape LF, BRepAlgo_AsDes AsDes, BRepAlgo_Image Image, BRepAlgo_Image theImageVV, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void BuildOnContext(TopTools_ListOfShape LContext, BRepOffset_Analyse Analyse, BRepAlgo_AsDes AsDes, BRepAlgo_Image Image, Standard_Boolean InSide, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void BuildFaces(TopTools_ListOfShape LF, BRepAlgo_AsDes AsDes, BRepAlgo_Image Image, Message_ProgressRange theRange, ) */
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
	BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool Thickening, bool RemoveIntEdges, Macad::Occt::Message_ProgressRange^ theRange);
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
	/// <summary>
	/// Changes the flag allowing the linearization
	/// </summary>
	void AllowLinearization(bool theIsAllowed);
	/// <summary>
	/// Add Closing Faces,  <F>  has to be  in  the initial
	/// shape S.
	/// </summary>
	void AddFace(Macad::Occt::TopoDS_Face^ F);
	/// <summary>
	/// set the offset <Off> on the Face <F>
	/// </summary>
	void SetOffsetOnFace(Macad::Occt::TopoDS_Face^ F, double Off);
	void MakeOffsetShape(Macad::Occt::Message_ProgressRange^ theRange);
	void MakeOffsetShape();
	void MakeThickSolid(Macad::Occt::Message_ProgressRange^ theRange);
	void MakeThickSolid();
	Macad::Occt::BRepOffset_Analyse^ GetAnalyse();
	bool IsDone();
	Macad::Occt::TopoDS_Shape^ Shape();
	Macad::Occt::TopoDS_Shape^ InitShape();
	/// <summary>
	/// returns information about offset state.
	/// </summary>
	Macad::Occt::BRepOffset_Error Error();
	/// <summary>
	/// Returns <Image> containing links between initials
	/// shapes and offset faces.
	/// </summary>
	/* Method skipped due to unknown mapping: BRepAlgo_Image OffsetFacesFromShapes() */
	/// <summary>
	/// Returns myJoin.
	/// </summary>
	Macad::Occt::GeomAbs_JoinType GetJoinType();
	/// <summary>
	/// Returns <Image> containing links between initials
	/// shapes and offset edges.
	/// </summary>
	/* Method skipped due to unknown mapping: BRepAlgo_Image OffsetEdgesFromShapes() */
	/// <summary>
	/// Returns the list of closing faces stores by AddFace
	/// </summary>
	Macad::Occt::TopTools_IndexedMapOfShape^ ClosingFaces();
	/// <summary>
	/// Makes pre analysis of possibility offset perform. Use method Error() to get more information.
	/// Finds first error. List of checks:
	/// 1) Check for existence object with non-null offset.
	/// 2) Check for connectivity in offset shell.
	/// 3) Check continuity of input surfaces.
	/// 4) Check for normals existence on grid.
	/// </summary>
	/// <returns>
	/// True if possible make computations and false otherwise.
	/// </returns>
	bool CheckInputData(Macad::Occt::Message_ProgressRange^ theRange);
	/// <summary>
	/// Return bad shape, which obtained in CheckInputData.
	/// </summary>
	Macad::Occt::TopoDS_Shape^ GetBadShape();
	/// <summary>
	/// Returns the  list of shapes generated from the shape <S>.
	/// </summary>
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ theS);
	/// <summary>
	/// Returns the list of shapes modified from the shape <S>.
	/// </summary>
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ theS);
	/// <summary>
	/// Returns true if the shape S has been deleted.
	/// </summary>
	bool IsDeleted(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepOffset_MakeOffset

//---------------------------------------------------------------------
//  Class  BRepOffset_MakeSimpleOffset
//---------------------------------------------------------------------
/// <summary>
/// 
/// Limitations:
/// According to the algorithm nature result depends on the smoothness of input data. Smooth (G1-continuity) input shape
/// will lead to the good result.
/// 
/// The possible drawback of the simple algorithm is that it leads, in general case, to tolerance increasing.
/// The tolerances have to grow in order to cover the gaps between the neighbor faces in the output.
/// It should be noted that the actual tolerance growth depends on the offset distance and the quality of
/// joints between the input faces. Anyway the good input shell (smooth connections between adjacent faces)
/// will lead to good result.
/// </summary>
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
	/// <summary>
	/// Constructor. Does nothing.
	/// </summary>
	BRepOffset_MakeSimpleOffset();
	/// <summary>
	/// Constructor.
	/// </summary>
	BRepOffset_MakeSimpleOffset(Macad::Occt::TopoDS_Shape^ theInputShape, double theOffsetValue);
	BRepOffset_MakeSimpleOffset(Macad::Occt::BRepOffset_MakeSimpleOffset^ parameter1);
	/// <summary>
	/// Initialies shape for modifications.
	/// </summary>
	void Initialize(Macad::Occt::TopoDS_Shape^ theInputShape, double theOffsetValue);
	/// <summary>
	/// Computes offset shape.
	/// </summary>
	void Perform();
	/// <summary>
	/// Gets error message.
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ GetErrorMessage();
	/// <summary>
	/// Gets error code.
	/// </summary>
	Macad::Occt::BRepOffsetSimple_Status GetError();
	/// <summary>
	/// Gets solid building flag.
	/// </summary>
	bool GetBuildSolidFlag();
	/// <summary>
	/// Sets solid building flag.
	/// </summary>
	void SetBuildSolidFlag(bool theBuildFlag);
	/// <summary>
	/// Gets offset value.
	/// </summary>
	double GetOffsetValue();
	/// <summary>
	/// Sets offset value.
	/// </summary>
	void SetOffsetValue(double theOffsetValue);
	/// <summary>
	/// Gets tolerance (used for handling singularities).
	/// </summary>
	double GetTolerance();
	/// <summary>
	/// Sets tolerance (used for handling singularities).
	/// </summary>
	void SetTolerance(double theValue);
	/// <summary>
	/// Gets done state.
	/// </summary>
	bool IsDone();
	/// <summary>
	/// Returns result shape.
	/// </summary>
	Macad::Occt::TopoDS_Shape^ GetResultShape();
	/// <summary>
	/// Returns result shape for the given one (if exists).
	/// </summary>
	Macad::Occt::TopoDS_Shape^ Generated(Macad::Occt::TopoDS_Shape^ theShape);
	/// <summary>
	/// Returns modified shape for the given one (if exists).
	/// </summary>
	Macad::Occt::TopoDS_Shape^ Modified(Macad::Occt::TopoDS_Shape^ theShape);
}; // class BRepOffset_MakeSimpleOffset

//---------------------------------------------------------------------
//  Class  BRepOffset_SimpleOffset
//---------------------------------------------------------------------
/// <summary>
/// This class represents mechanism of simple offset algorithm i. e.
/// topology-preserve offset construction without intersection.
/// 
/// The list below shows mapping scheme:
/// - Each surface is mapped to its geometric offset surface.
/// - For each edge, pcurves are mapped to the same pcurves on offset surfaces.
/// - For each edge, 3d curve is constructed by re-approximation of pcurve on the first offset face.
/// - Position of each vertex in a result shell is computed as average point of all ends of edges shared by that vertex.
/// - Tolerances are updated according to the resulting geometry.
/// </summary>
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
	/// <summary>
	/// Constructor.
	/// </summary>
	/// <param name="theInputShape">
	/// shape to be offset
	/// </param>
	/// <param name="theOffsetValue">
	/// offset distance (signed)
	/// </param>
	/// <param name="theTolerance">
	/// tolerance for handling singular points
	/// </param>
	BRepOffset_SimpleOffset(Macad::Occt::TopoDS_Shape^ theInputShape, double theOffsetValue, double theTolerance);
	/// <summary>
	/// Returns Standard_True  if  the face  <F> has  been
	/// modified.  In this  case, <S> is the new geometric
	/// support of  the  face, <L> the  new location,<Tol>
	/// the new  tolerance.<RevWires> has  to  be set   to
	/// Standard_True   when the modification reverses the
	/// normal of  the   surface.(the wires   have  to  be
	/// reversed).   <RevFace>   has   to   be   set    to
	/// Standard_True if  the orientation  of the modified
	/// face changes in the  shells which contain  it.  --
	/// Here, <RevFace>  will  return Standard_True if the
	/// -- gp_Trsf is negative.
	/// </summary>
	bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
	/// <summary>
	/// Returns Standard_True  if  the edge  <E> has  been
	/// modified.  In this case,  <C> is the new geometric
	/// support of the  edge, <L> the  new location, <Tol>
	/// the         new    tolerance.   Otherwise, returns
	/// Standard_False,    and  <C>,  <L>,   <Tol> are not
	/// significant.
	/// </summary>
	bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
	/// <summary>
	/// Returns  Standard_True if the  vertex <V> has been
	/// modified.  In this  case, <P> is the new geometric
	/// support of the vertex,   <Tol> the new  tolerance.
	/// Otherwise, returns Standard_False, and <P>,  <Tol>
	/// are not significant.
	/// </summary>
	bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
	/// <summary>
	/// Returns Standard_True if  the edge  <E> has a  new
	/// curve on surface on the face <F>.In this case, <C>
	/// is the new geometric support of  the edge, <L> the
	/// new location, <Tol> the new tolerance.
	/// Otherwise, returns  Standard_False, and <C>,  <L>,
	/// <Tol> are not significant.
	/// </summary>
	bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
	/// <summary>
	/// Returns Standard_True if the Vertex  <V> has a new
	/// parameter on the  edge <E>. In  this case,  <P> is
	/// the parameter,    <Tol>  the     new    tolerance.
	/// Otherwise, returns Standard_False, and <P>,  <Tol>
	/// are not significant.
	/// </summary>
	bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
	/// <summary>
	/// Returns the  continuity of  <NewE> between <NewF1>
	/// and <NewF2>.
	/// 
	/// <NewE> is the new  edge created from <E>.  <NewF1>
	/// (resp. <NewF2>) is the new  face created from <F1>
	/// (resp. <F2>).
	/// </summary>
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
	/// <summary>
	/// <V1> is the FirstVertex ,<V2> is the Last Vertex of <Edge>
	/// taking account the orientation of Edge.
	/// </summary>
	static void EdgeVertices(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	/// <summary>
	/// <E> is a section  between <F1> and <F2>.  Computes
	/// <O1> the orientation of <E> in <F1> influenced by <F2>.
	/// idem for <O2>.
	/// </summary>
	static void OrientSection(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopAbs_Orientation% O1, Macad::Occt::TopAbs_Orientation% O2);
	/// <summary>
	/// Looks for the common Vertices and Edges between faces <theF1> and <theF2>.<br>
	/// Returns TRUE if common shapes have been found.<br>
	/// <theLE> will contain the found common edges;<br>
	/// <theLV> will contain the found common vertices.
	/// </summary>
	static bool FindCommonShapes(Macad::Occt::TopoDS_Face^ theF1, Macad::Occt::TopoDS_Face^ theF2, Macad::Occt::TopTools_ListOfShape^ theLE, Macad::Occt::TopTools_ListOfShape^ theLV);
	/// <summary>
	/// Looks for the common shapes of type <theType> between shapes <theS1> and <theS2>.<br>
	/// Returns TRUE if common shapes have been found.<br>
	/// <theLSC> will contain the found common shapes.
	/// </summary>
	static bool FindCommonShapes(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::TopAbs_ShapeEnum theType, Macad::Occt::TopTools_ListOfShape^ theLSC);
	/// <summary>
	/// Computes the   Section betwwen  <F1> and  <F2> the
	/// edges solution   are  stored in <LInt1>  with  the
	/// orientation on <F1>, the sames edges are stored in
	/// <Lint2> with the orientation on <F2>.
	/// </summary>
	static void Inter3D(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopTools_ListOfShape^ LInt1, Macad::Occt::TopTools_ListOfShape^ LInt2, Macad::Occt::TopAbs_State Side, Macad::Occt::TopoDS_Edge^ RefEdge, Macad::Occt::TopoDS_Face^ RefFace1, Macad::Occt::TopoDS_Face^ RefFace2);
	/// <summary>
	/// Find if the edges <Edges> of the face <F2> are on
	/// the face <F1>.
	/// Set in <LInt1> <LInt2> the updated edges.
	/// If all the edges are computed, returns true.
	/// </summary>
	static bool TryProject(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopTools_ListOfShape^ Edges, Macad::Occt::TopTools_ListOfShape^ LInt1, Macad::Occt::TopTools_ListOfShape^ LInt2, Macad::Occt::TopAbs_State Side, double TolConf);
	static void PipeInter(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopTools_ListOfShape^ LInt1, Macad::Occt::TopTools_ListOfShape^ LInt2, Macad::Occt::TopAbs_State Side);
	static void Inter2d(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopTools_ListOfShape^ LV, double Tol);
	static void InterOrExtent(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopTools_ListOfShape^ LInt1, Macad::Occt::TopTools_ListOfShape^ LInt2, Macad::Occt::TopAbs_State Side);
	static void CheckBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::BRepOffset_Analyse^ Analyse, bool% enlargeU, bool% enlargeVfirst, bool% enlargeVlast);
	/// <summary>
	/// Returns  True if The Surface of  <NF> has changed.
	/// if <ChangeGeom> is TRUE  ,   the surface  can  be
	/// changed .
	/// if <UpdatePCurve>  is  TRUE, update the  pcurves of the
	/// edges of <F> on   the new surface if the surface has  been changed.
	/// <enlargeU>, <enlargeVfirst>, <enlargeVlast> allow or forbid
	/// enlargement in U and V directions correspondingly.
	/// <theExtensionMode> is a mode of extension of the surface of the face:
	/// if <theExtensionMode> equals 1, potentially infinite surfaces are extended by maximum value,
	/// and limited surfaces are extended by 25%.
	/// if <theExtensionMode> equals 2, potentially infinite surfaces are extended by
	/// 10*(correspondent size of face),
	/// and limited surfaces are extended by 100%.
	/// <theLenBeforeUfirst>, <theLenAfterUlast>, <theLenBeforeVfirst>, <theLenAfterVlast>
	/// set the values of enlargement on correspondent directions.
	/// If some of them equals -1, the default value of enlargement is used.
	/// </summary>
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst, bool enlargeVlast, int theExtensionMode, double theLenBeforeUfirst, double theLenAfterUlast, double theLenBeforeVfirst, double theLenAfterVlast);
	/// <summary>
	/// Returns  True if The Surface of  <NF> has changed.
	/// if <ChangeGeom> is TRUE  ,   the surface  can  be
	/// changed .
	/// if <UpdatePCurve>  is  TRUE, update the  pcurves of the
	/// edges of <F> on   the new surface if the surface has  been changed.
	/// <enlargeU>, <enlargeVfirst>, <enlargeVlast> allow or forbid
	/// enlargement in U and V directions correspondingly.
	/// <theExtensionMode> is a mode of extension of the surface of the face:
	/// if <theExtensionMode> equals 1, potentially infinite surfaces are extended by maximum value,
	/// and limited surfaces are extended by 25%.
	/// if <theExtensionMode> equals 2, potentially infinite surfaces are extended by
	/// 10*(correspondent size of face),
	/// and limited surfaces are extended by 100%.
	/// <theLenBeforeUfirst>, <theLenAfterUlast>, <theLenBeforeVfirst>, <theLenAfterVlast>
	/// set the values of enlargement on correspondent directions.
	/// If some of them equals -1, the default value of enlargement is used.
	/// </summary>
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst, bool enlargeVlast, int theExtensionMode, double theLenBeforeUfirst, double theLenAfterUlast, double theLenBeforeVfirst);
	/// <summary>
	/// Returns  True if The Surface of  <NF> has changed.
	/// if <ChangeGeom> is TRUE  ,   the surface  can  be
	/// changed .
	/// if <UpdatePCurve>  is  TRUE, update the  pcurves of the
	/// edges of <F> on   the new surface if the surface has  been changed.
	/// <enlargeU>, <enlargeVfirst>, <enlargeVlast> allow or forbid
	/// enlargement in U and V directions correspondingly.
	/// <theExtensionMode> is a mode of extension of the surface of the face:
	/// if <theExtensionMode> equals 1, potentially infinite surfaces are extended by maximum value,
	/// and limited surfaces are extended by 25%.
	/// if <theExtensionMode> equals 2, potentially infinite surfaces are extended by
	/// 10*(correspondent size of face),
	/// and limited surfaces are extended by 100%.
	/// <theLenBeforeUfirst>, <theLenAfterUlast>, <theLenBeforeVfirst>, <theLenAfterVlast>
	/// set the values of enlargement on correspondent directions.
	/// If some of them equals -1, the default value of enlargement is used.
	/// </summary>
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst, bool enlargeVlast, int theExtensionMode, double theLenBeforeUfirst, double theLenAfterUlast);
	/// <summary>
	/// Returns  True if The Surface of  <NF> has changed.
	/// if <ChangeGeom> is TRUE  ,   the surface  can  be
	/// changed .
	/// if <UpdatePCurve>  is  TRUE, update the  pcurves of the
	/// edges of <F> on   the new surface if the surface has  been changed.
	/// <enlargeU>, <enlargeVfirst>, <enlargeVlast> allow or forbid
	/// enlargement in U and V directions correspondingly.
	/// <theExtensionMode> is a mode of extension of the surface of the face:
	/// if <theExtensionMode> equals 1, potentially infinite surfaces are extended by maximum value,
	/// and limited surfaces are extended by 25%.
	/// if <theExtensionMode> equals 2, potentially infinite surfaces are extended by
	/// 10*(correspondent size of face),
	/// and limited surfaces are extended by 100%.
	/// <theLenBeforeUfirst>, <theLenAfterUlast>, <theLenBeforeVfirst>, <theLenAfterVlast>
	/// set the values of enlargement on correspondent directions.
	/// If some of them equals -1, the default value of enlargement is used.
	/// </summary>
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst, bool enlargeVlast, int theExtensionMode, double theLenBeforeUfirst);
	/// <summary>
	/// Returns  True if The Surface of  <NF> has changed.
	/// if <ChangeGeom> is TRUE  ,   the surface  can  be
	/// changed .
	/// if <UpdatePCurve>  is  TRUE, update the  pcurves of the
	/// edges of <F> on   the new surface if the surface has  been changed.
	/// <enlargeU>, <enlargeVfirst>, <enlargeVlast> allow or forbid
	/// enlargement in U and V directions correspondingly.
	/// <theExtensionMode> is a mode of extension of the surface of the face:
	/// if <theExtensionMode> equals 1, potentially infinite surfaces are extended by maximum value,
	/// and limited surfaces are extended by 25%.
	/// if <theExtensionMode> equals 2, potentially infinite surfaces are extended by
	/// 10*(correspondent size of face),
	/// and limited surfaces are extended by 100%.
	/// <theLenBeforeUfirst>, <theLenAfterUlast>, <theLenBeforeVfirst>, <theLenAfterVlast>
	/// set the values of enlargement on correspondent directions.
	/// If some of them equals -1, the default value of enlargement is used.
	/// </summary>
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst, bool enlargeVlast, int theExtensionMode);
	/// <summary>
	/// Returns  True if The Surface of  <NF> has changed.
	/// if <ChangeGeom> is TRUE  ,   the surface  can  be
	/// changed .
	/// if <UpdatePCurve>  is  TRUE, update the  pcurves of the
	/// edges of <F> on   the new surface if the surface has  been changed.
	/// <enlargeU>, <enlargeVfirst>, <enlargeVlast> allow or forbid
	/// enlargement in U and V directions correspondingly.
	/// <theExtensionMode> is a mode of extension of the surface of the face:
	/// if <theExtensionMode> equals 1, potentially infinite surfaces are extended by maximum value,
	/// and limited surfaces are extended by 25%.
	/// if <theExtensionMode> equals 2, potentially infinite surfaces are extended by
	/// 10*(correspondent size of face),
	/// and limited surfaces are extended by 100%.
	/// <theLenBeforeUfirst>, <theLenAfterUlast>, <theLenBeforeVfirst>, <theLenAfterVlast>
	/// set the values of enlargement on correspondent directions.
	/// If some of them equals -1, the default value of enlargement is used.
	/// </summary>
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst, bool enlargeVlast);
	/// <summary>
	/// Returns  True if The Surface of  <NF> has changed.
	/// if <ChangeGeom> is TRUE  ,   the surface  can  be
	/// changed .
	/// if <UpdatePCurve>  is  TRUE, update the  pcurves of the
	/// edges of <F> on   the new surface if the surface has  been changed.
	/// <enlargeU>, <enlargeVfirst>, <enlargeVlast> allow or forbid
	/// enlargement in U and V directions correspondingly.
	/// <theExtensionMode> is a mode of extension of the surface of the face:
	/// if <theExtensionMode> equals 1, potentially infinite surfaces are extended by maximum value,
	/// and limited surfaces are extended by 25%.
	/// if <theExtensionMode> equals 2, potentially infinite surfaces are extended by
	/// 10*(correspondent size of face),
	/// and limited surfaces are extended by 100%.
	/// <theLenBeforeUfirst>, <theLenAfterUlast>, <theLenBeforeVfirst>, <theLenAfterVlast>
	/// set the values of enlargement on correspondent directions.
	/// If some of them equals -1, the default value of enlargement is used.
	/// </summary>
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst);
	/// <summary>
	/// Returns  True if The Surface of  <NF> has changed.
	/// if <ChangeGeom> is TRUE  ,   the surface  can  be
	/// changed .
	/// if <UpdatePCurve>  is  TRUE, update the  pcurves of the
	/// edges of <F> on   the new surface if the surface has  been changed.
	/// <enlargeU>, <enlargeVfirst>, <enlargeVlast> allow or forbid
	/// enlargement in U and V directions correspondingly.
	/// <theExtensionMode> is a mode of extension of the surface of the face:
	/// if <theExtensionMode> equals 1, potentially infinite surfaces are extended by maximum value,
	/// and limited surfaces are extended by 25%.
	/// if <theExtensionMode> equals 2, potentially infinite surfaces are extended by
	/// 10*(correspondent size of face),
	/// and limited surfaces are extended by 100%.
	/// <theLenBeforeUfirst>, <theLenAfterUlast>, <theLenBeforeVfirst>, <theLenAfterVlast>
	/// set the values of enlargement on correspondent directions.
	/// If some of them equals -1, the default value of enlargement is used.
	/// </summary>
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU);
	/// <summary>
	/// Returns  True if The Surface of  <NF> has changed.
	/// if <ChangeGeom> is TRUE  ,   the surface  can  be
	/// changed .
	/// if <UpdatePCurve>  is  TRUE, update the  pcurves of the
	/// edges of <F> on   the new surface if the surface has  been changed.
	/// <enlargeU>, <enlargeVfirst>, <enlargeVlast> allow or forbid
	/// enlargement in U and V directions correspondingly.
	/// <theExtensionMode> is a mode of extension of the surface of the face:
	/// if <theExtensionMode> equals 1, potentially infinite surfaces are extended by maximum value,
	/// and limited surfaces are extended by 25%.
	/// if <theExtensionMode> equals 2, potentially infinite surfaces are extended by
	/// 10*(correspondent size of face),
	/// and limited surfaces are extended by 100%.
	/// <theLenBeforeUfirst>, <theLenAfterUlast>, <theLenBeforeVfirst>, <theLenAfterVlast>
	/// set the values of enlargement on correspondent directions.
	/// If some of them equals -1, the default value of enlargement is used.
	/// </summary>
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve);
	/// <summary>
	/// Returns  True if The Surface of  <NF> has changed.
	/// if <ChangeGeom> is TRUE  ,   the surface  can  be
	/// changed .
	/// if <UpdatePCurve>  is  TRUE, update the  pcurves of the
	/// edges of <F> on   the new surface if the surface has  been changed.
	/// <enlargeU>, <enlargeVfirst>, <enlargeVlast> allow or forbid
	/// enlargement in U and V directions correspondingly.
	/// <theExtensionMode> is a mode of extension of the surface of the face:
	/// if <theExtensionMode> equals 1, potentially infinite surfaces are extended by maximum value,
	/// and limited surfaces are extended by 25%.
	/// if <theExtensionMode> equals 2, potentially infinite surfaces are extended by
	/// 10*(correspondent size of face),
	/// and limited surfaces are extended by 100%.
	/// <theLenBeforeUfirst>, <theLenAfterUlast>, <theLenBeforeVfirst>, <theLenAfterVlast>
	/// set the values of enlargement on correspondent directions.
	/// If some of them equals -1, the default value of enlargement is used.
	/// </summary>
	static bool EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom);
	static void ExtentFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopTools_DataMapOfShapeShape^ ConstShapes, Macad::Occt::TopTools_DataMapOfShapeShape^ ToBuild, Macad::Occt::TopAbs_State Side, double TolConf, Macad::Occt::TopoDS_Face^ NF);
	/// <summary>
	/// Via the wire explorer store in <NOnV1> for
	/// an Edge <E> of <W> his Edge neighbour on the first
	/// vertex <V1> of <E>.
	/// Store in NOnV2 the Neighbour of <E>on the last
	/// vertex <V2> of <E>.
	/// </summary>
	static void BuildNeighbour(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopTools_DataMapOfShapeShape^ NOnV1, Macad::Occt::TopTools_DataMapOfShapeShape^ NOnV2);
	/// <summary>
	/// Store in MVE for a vertex <V>  in <S> the incident
	/// edges <E> in <S>.
	/// An Edge is Store only one Time for a vertex.
	/// </summary>
	static void MapVertexEdges(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ MVE);
	/// <summary>
	/// Remove the non valid   part of an offsetshape
	/// 1 - Remove all the free boundary  and the faces
	/// connex to such edges.
	/// 2 - Remove all the shapes not  valid in the result
	/// (according to the side of offsetting)
	/// in this version only the first point is implemented.
	/// </summary>
	static Macad::Occt::TopoDS_Shape^ Deboucle3D(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_MapOfShape^ Boundary);
	/* Method skipped due to unknown mapping: void CorrectOrientation(TopoDS_Shape SI, TopTools_IndexedMapOfShape NewEdges, BRepAlgo_AsDes AsDes, BRepAlgo_Image InitOffset, Standard_Real Offset, ) */
	static double Gabarit(Macad::Occt::Geom_Curve^ aCurve);
	/// <summary>
	/// Compares the normal directions of the planar faces and returns
	/// TRUE if the directions are the same with the given precision.<br>
	/// </summary>
	static bool CheckPlanesNormals(Macad::Occt::TopoDS_Face^ theFace1, Macad::Occt::TopoDS_Face^ theFace2, double theTolAng);
	/// <summary>
	/// Compares the normal directions of the planar faces and returns
	/// TRUE if the directions are the same with the given precision.<br>
	/// </summary>
	static bool CheckPlanesNormals(Macad::Occt::TopoDS_Face^ theFace1, Macad::Occt::TopoDS_Face^ theFace2);
}; // class BRepOffset_Tool

}; // namespace Occt
}; // namespace Macad
