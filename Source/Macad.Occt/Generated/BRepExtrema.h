// Generated wrapper code for package BRepExtrema

#pragma once

#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  BRepExtrema_SupportType
//---------------------------------------------------------------------
public enum class BRepExtrema_SupportType
{
	BRepExtrema_IsVertex = 0,
	BRepExtrema_IsOnEdge = 1,
	BRepExtrema_IsInFace = 2
}; // enum  class BRepExtrema_SupportType

//---------------------------------------------------------------------
//  Class  BRepExtrema_SeqOfSolution
//---------------------------------------------------------------------
public ref class BRepExtrema_SeqOfSolution sealed : public BaseClass<::BRepExtrema_SeqOfSolution>
{

#ifdef Include_BRepExtrema_SeqOfSolution_h
public:
	Include_BRepExtrema_SeqOfSolution_h
#endif

public:
	BRepExtrema_SeqOfSolution(::BRepExtrema_SeqOfSolution* nativeInstance)
		: BaseClass<::BRepExtrema_SeqOfSolution>( nativeInstance, true )
	{}

	BRepExtrema_SeqOfSolution(::BRepExtrema_SeqOfSolution& nativeInstance)
		: BaseClass<::BRepExtrema_SeqOfSolution>( &nativeInstance, false )
	{}

	property ::BRepExtrema_SeqOfSolution* NativeInstance
	{
		::BRepExtrema_SeqOfSolution* get()
		{
			return static_cast<::BRepExtrema_SeqOfSolution*>(_NativeInstance);
		}
	}

public:
	BRepExtrema_SeqOfSolution();
	BRepExtrema_SeqOfSolution(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	BRepExtrema_SeqOfSolution(Macad::Occt::BRepExtrema_SeqOfSolution^ theOther);
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::BRepExtrema_SeqOfSolution^ Assign(Macad::Occt::BRepExtrema_SeqOfSolution^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::BRepExtrema_SolutionElem^ theItem);
	void Append(Macad::Occt::BRepExtrema_SeqOfSolution^ theSeq);
	void Prepend(Macad::Occt::BRepExtrema_SolutionElem^ theItem);
	void Prepend(Macad::Occt::BRepExtrema_SeqOfSolution^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::BRepExtrema_SolutionElem^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::BRepExtrema_SeqOfSolution^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, BRepExtrema_SolutionElem theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::BRepExtrema_SeqOfSolution^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::BRepExtrema_SolutionElem^ theItem);
	void Split(int theIndex, Macad::Occt::BRepExtrema_SeqOfSolution^ theSeq);
	Macad::Occt::BRepExtrema_SolutionElem^ First();
	Macad::Occt::BRepExtrema_SolutionElem^ ChangeFirst();
	Macad::Occt::BRepExtrema_SolutionElem^ Last();
	Macad::Occt::BRepExtrema_SolutionElem^ ChangeLast();
	Macad::Occt::BRepExtrema_SolutionElem^ Value(int theIndex);
	Macad::Occt::BRepExtrema_SolutionElem^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::BRepExtrema_SolutionElem^ theItem);
}; // class BRepExtrema_SeqOfSolution

//---------------------------------------------------------------------
//  Class  BRepExtrema_MapOfIntegerPackedMapOfInteger
//---------------------------------------------------------------------
public ref class BRepExtrema_MapOfIntegerPackedMapOfInteger sealed : public BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger>
{

#ifdef Include_BRepExtrema_MapOfIntegerPackedMapOfInteger_h
public:
	Include_BRepExtrema_MapOfIntegerPackedMapOfInteger_h
#endif

public:
	BRepExtrema_MapOfIntegerPackedMapOfInteger(::BRepExtrema_MapOfIntegerPackedMapOfInteger* nativeInstance)
		: BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger>( nativeInstance, true )
	{}

	BRepExtrema_MapOfIntegerPackedMapOfInteger(::BRepExtrema_MapOfIntegerPackedMapOfInteger& nativeInstance)
		: BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger>( &nativeInstance, false )
	{}

	property ::BRepExtrema_MapOfIntegerPackedMapOfInteger* NativeInstance
	{
		::BRepExtrema_MapOfIntegerPackedMapOfInteger* get()
		{
			return static_cast<::BRepExtrema_MapOfIntegerPackedMapOfInteger*>(_NativeInstance);
		}
	}

public:
	BRepExtrema_MapOfIntegerPackedMapOfInteger();
	BRepExtrema_MapOfIntegerPackedMapOfInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	BRepExtrema_MapOfIntegerPackedMapOfInteger(int theNbBuckets);
	BRepExtrema_MapOfIntegerPackedMapOfInteger(Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ theOther);
	void Exchange(Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ theOther);
	Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ Assign(Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ theOther);
	/* Method skipped due to unknown mapping: TColStd_PackedMapOfInteger Bound(int theKey, TColStd_PackedMapOfInteger theItem, ) */
	bool IsBound(int theKey);
	bool UnBind(int theKey);
	/* Method skipped due to unknown mapping: TColStd_PackedMapOfInteger Seek(int theKey, ) */
	/* Method skipped due to unknown mapping: TColStd_PackedMapOfInteger Find(int theKey, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Find(int theKey, TColStd_PackedMapOfInteger theValue, ) */
	/* Method skipped due to unknown mapping: TColStd_PackedMapOfInteger ChangeSeek(int theKey, ) */
	/* Method skipped due to unknown mapping: TColStd_PackedMapOfInteger ChangeFind(int theKey, ) */
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class BRepExtrema_MapOfIntegerPackedMapOfInteger

//---------------------------------------------------------------------
//  Class  BRepExtrema_ElementFilter
//---------------------------------------------------------------------
/// <summary>
/// Filtering tool used to detect if two given mesh elements
/// should be tested for overlapping/intersection or not.
/// </summary>
public ref class BRepExtrema_ElementFilter sealed : public BaseClass<::BRepExtrema_ElementFilter>
{

#ifdef Include_BRepExtrema_ElementFilter_h
public:
	Include_BRepExtrema_ElementFilter_h
#endif

public:
	BRepExtrema_ElementFilter(::BRepExtrema_ElementFilter* nativeInstance)
		: BaseClass<::BRepExtrema_ElementFilter>( nativeInstance, true )
	{}

	BRepExtrema_ElementFilter(::BRepExtrema_ElementFilter& nativeInstance)
		: BaseClass<::BRepExtrema_ElementFilter>( &nativeInstance, false )
	{}

	property ::BRepExtrema_ElementFilter* NativeInstance
	{
		::BRepExtrema_ElementFilter* get()
		{
			return static_cast<::BRepExtrema_ElementFilter*>(_NativeInstance);
		}
	}

public:
	//---------------------------------------------------------------------
	//  Enum  FilterResult
	//---------------------------------------------------------------------
	/// <summary>
	/// Result of filtering function.
	/// </summary>
	enum class FilterResult
	{
		NoCheck = 0,
		Overlap = 1,
		DoCheck = 2
	}; // enum  class FilterResult

	BRepExtrema_ElementFilter(Macad::Occt::BRepExtrema_ElementFilter^ parameter1);
	BRepExtrema_ElementFilter();
	/// <summary>
	/// Checks if two mesh elements should be tested for overlapping/intersection
	/// (used for detection correct/incorrect cases of shared edges and vertices).
	/// </summary>
	Macad::Occt::BRepExtrema_ElementFilter::FilterResult PreCheckElements(int parameter1, int parameter2);
}; // class BRepExtrema_ElementFilter

//---------------------------------------------------------------------
//  Class  BRepExtrema_SolutionElem
//---------------------------------------------------------------------
/// <summary>
/// This class is used to store information relative to the minimum distance between two shapes.
/// </summary>
public ref class BRepExtrema_SolutionElem sealed : public BaseClass<::BRepExtrema_SolutionElem>
{

#ifdef Include_BRepExtrema_SolutionElem_h
public:
	Include_BRepExtrema_SolutionElem_h
#endif

public:
	BRepExtrema_SolutionElem(::BRepExtrema_SolutionElem* nativeInstance)
		: BaseClass<::BRepExtrema_SolutionElem>( nativeInstance, true )
	{}

	BRepExtrema_SolutionElem(::BRepExtrema_SolutionElem& nativeInstance)
		: BaseClass<::BRepExtrema_SolutionElem>( &nativeInstance, false )
	{}

	property ::BRepExtrema_SolutionElem* NativeInstance
	{
		::BRepExtrema_SolutionElem* get()
		{
			return static_cast<::BRepExtrema_SolutionElem*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// Empty constructor
	/// </summary>
	BRepExtrema_SolutionElem();
	/// <summary>
	/// This constructor is used when the solution of a distance is a Vertex.
	/// The different initialized fields are:
	/// </summary>
	/// <param name="theDist">
	///    the distance
	/// </param>
	/// <param name="thePoint">
	///   the solution point
	/// </param>
	/// <param name="theSolType">
	/// the type of solution
	/// </param>
	/// <param name="theVertex">
	///  and the Vertex
	/// </param>
	BRepExtrema_SolutionElem(double theDist, Macad::Occt::Pnt thePoint, Macad::Occt::BRepExtrema_SupportType theSolType, Macad::Occt::TopoDS_Vertex^ theVertex);
	/// <summary>
	/// This constructor is used when the  solution of distance is on an Edge.
	/// The different initialized fields are:
	/// </summary>
	/// <param name="theDist">
	///    the distance
	/// </param>
	/// <param name="thePoint">
	///   the solution point
	/// </param>
	/// <param name="theSolType">
	/// the type of solution
	/// </param>
	/// <param name="theEdge">
	///    the Edge
	/// </param>
	/// <param name="theParam">
	///   the parameter to locate the solution
	/// </param>
	BRepExtrema_SolutionElem(double theDist, Macad::Occt::Pnt thePoint, Macad::Occt::BRepExtrema_SupportType theSolType, Macad::Occt::TopoDS_Edge^ theEdge, double theParam);
	/// <summary>
	/// This constructor is used when the  solution of distance is in a Face.
	/// The different initialized fields are:
	/// </summary>
	/// <param name="theDist">
	///    the distance
	/// </param>
	/// <param name="thePoint">
	///   the solution point
	/// </param>
	/// <param name="theSolType">
	/// the type of solution
	/// </param>
	/// <param name="theFace">
	///    the Face
	/// </param>
	/// <param name="theU">
	///       U parameter to locate the solution
	/// </param>
	/// <param name="theV">
	///       V parameter to locate the solution
	/// </param>
	BRepExtrema_SolutionElem(double theDist, Macad::Occt::Pnt thePoint, Macad::Occt::BRepExtrema_SupportType theSolType, Macad::Occt::TopoDS_Face^ theFace, double theU, double theV);
	BRepExtrema_SolutionElem(Macad::Occt::BRepExtrema_SolutionElem^ parameter1);
	/// <summary>
	/// Returns the value of the minimum distance.
	/// </summary>
	double Dist();
	/// <summary>
	/// Returns the solution point.
	/// </summary>
	Macad::Occt::Pnt Point();
	/// <summary>
	/// Returns the Support type:
	/// IsVertex => The solution is a vertex.
	/// IsOnEdge => The solution belongs to an Edge.
	/// IsInFace => The solution is inside a Face.
	/// </summary>
	Macad::Occt::BRepExtrema_SupportType SupportKind();
	/// <summary>
	/// Returns the vertex if the solution is a Vertex.
	/// </summary>
	Macad::Occt::TopoDS_Vertex^ Vertex();
	/// <summary>
	/// Returns the vertex if the solution is an Edge.
	/// </summary>
	Macad::Occt::TopoDS_Edge^ Edge();
	/// <summary>
	/// Returns the vertex if the solution is an Face.
	/// </summary>
	Macad::Occt::TopoDS_Face^ Face();
	/// <summary>
	/// Returns the parameter value if the solution is on Edge.
	/// </summary>
	void EdgeParameter(double% theParam);
	/// <summary>
	/// Returns the parameters U and V if the solution is in a Face.
	/// </summary>
	void FaceParameter(double% theU, double% theV);
}; // class BRepExtrema_SolutionElem

//---------------------------------------------------------------------
//  Class  BRepExtrema_DistanceSS
//---------------------------------------------------------------------
/// <summary>
/// This class allows to compute minimum distance between two shapes <br>
/// (face edge vertex) and is used in DistShapeShape class. <br>
/// </summary>
public ref class BRepExtrema_DistanceSS sealed : public BaseClass<::BRepExtrema_DistanceSS>
{

#ifdef Include_BRepExtrema_DistanceSS_h
public:
	Include_BRepExtrema_DistanceSS_h
#endif

public:
	BRepExtrema_DistanceSS(::BRepExtrema_DistanceSS* nativeInstance)
		: BaseClass<::BRepExtrema_DistanceSS>( nativeInstance, true )
	{}

	BRepExtrema_DistanceSS(::BRepExtrema_DistanceSS& nativeInstance)
		: BaseClass<::BRepExtrema_DistanceSS>( &nativeInstance, false )
	{}

	property ::BRepExtrema_DistanceSS* NativeInstance
	{
		::BRepExtrema_DistanceSS* get()
		{
			return static_cast<::BRepExtrema_DistanceSS*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// computes the distance between two Shapes ( face edge vertex). <br>
	/// </summary>
	/* Method skipped due to unknown mapping: void BRepExtrema_DistanceSS(TopoDS_Shape S1, TopoDS_Shape S2, Bnd_Box B1, Bnd_Box B2, Standard_Real DstRef, Extrema_ExtFlag F, Extrema_ExtAlgo A, ) */
	/// <summary>
	/// computes the distance between two Shapes ( face edge vertex). <br>
	/// </summary>
	/* Method skipped due to unknown mapping: void BRepExtrema_DistanceSS(TopoDS_Shape S1, TopoDS_Shape S2, Bnd_Box B1, Bnd_Box B2, Standard_Real DstRef, Extrema_ExtFlag F, Extrema_ExtAlgo A, ) */
	/// <summary>
	/// computes the distance between two Shapes ( face edge vertex). <br>
	/// </summary>
	BRepExtrema_DistanceSS(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Bnd_Box^ B1, Macad::Occt::Bnd_Box^ B2, double DstRef);
	/// <summary>
	/// computes the distance between two Shapes ( face edge vertex). <br>
	/// Parameter theDeflection is used to specify a maximum deviation <br>
	/// of extreme distances from the minimum one. <br>
	/// Default value is Precision::Confusion(). <br>
	/// </summary>
	/* Method skipped due to unknown mapping: void BRepExtrema_DistanceSS(TopoDS_Shape S1, TopoDS_Shape S2, Bnd_Box B1, Bnd_Box B2, Standard_Real DstRef, Standard_Real aDeflection, Extrema_ExtFlag F, Extrema_ExtAlgo A, ) */
	/// <summary>
	/// computes the distance between two Shapes ( face edge vertex). <br>
	/// Parameter theDeflection is used to specify a maximum deviation <br>
	/// of extreme distances from the minimum one. <br>
	/// Default value is Precision::Confusion(). <br>
	/// </summary>
	/* Method skipped due to unknown mapping: void BRepExtrema_DistanceSS(TopoDS_Shape S1, TopoDS_Shape S2, Bnd_Box B1, Bnd_Box B2, Standard_Real DstRef, Standard_Real aDeflection, Extrema_ExtFlag F, Extrema_ExtAlgo A, ) */
	/// <summary>
	/// computes the distance between two Shapes ( face edge vertex). <br>
	/// Parameter theDeflection is used to specify a maximum deviation <br>
	/// of extreme distances from the minimum one. <br>
	/// Default value is Precision::Confusion(). <br>
	/// </summary>
	BRepExtrema_DistanceSS(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Bnd_Box^ B1, Macad::Occt::Bnd_Box^ B2, double DstRef, double aDeflection);
	BRepExtrema_DistanceSS(Macad::Occt::BRepExtrema_DistanceSS^ parameter1);
	/// <summary>
	/// True if the distance has been computed <br>
	/// </summary>
	bool IsDone();
	/// <summary>
	/// returns the distance value <br>
	/// </summary>
	double DistValue();
	/// <summary>
	/// returns the list of solutions on the first shape <br>
	/// </summary>
	Macad::Occt::BRepExtrema_SeqOfSolution^ Seq1Value();
	/// <summary>
	/// returns the list of solutions on the second shape <br>
	/// </summary>
	Macad::Occt::BRepExtrema_SeqOfSolution^ Seq2Value();
	/// <summary>
	/// sets the flag controlling minimum and maximum search
	/// </summary>
	/* Method skipped due to unknown mapping: void SetFlag(Extrema_ExtFlag F, ) */
	/// <summary>
	/// sets the flag controlling ...
	/// </summary>
	/* Method skipped due to unknown mapping: void SetAlgo(Extrema_ExtAlgo A, ) */
}; // class BRepExtrema_DistanceSS

//---------------------------------------------------------------------
//  Class  BRepExtrema_DistShapeShape
//---------------------------------------------------------------------
/// <summary>
/// This class  provides tools to compute minimum distance
/// between two Shapes (Compound,CompSolid, Solid, Shell, Face, Wire, Edge, Vertex).
/// </summary>
public ref class BRepExtrema_DistShapeShape sealed : public BaseClass<::BRepExtrema_DistShapeShape>
{

#ifdef Include_BRepExtrema_DistShapeShape_h
public:
	Include_BRepExtrema_DistShapeShape_h
#endif

public:
	BRepExtrema_DistShapeShape(::BRepExtrema_DistShapeShape* nativeInstance)
		: BaseClass<::BRepExtrema_DistShapeShape>( nativeInstance, true )
	{}

	BRepExtrema_DistShapeShape(::BRepExtrema_DistShapeShape& nativeInstance)
		: BaseClass<::BRepExtrema_DistShapeShape>( &nativeInstance, false )
	{}

	property ::BRepExtrema_DistShapeShape* NativeInstance
	{
		::BRepExtrema_DistShapeShape* get()
		{
			return static_cast<::BRepExtrema_DistShapeShape*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// create empty tool
	/// </summary>
	BRepExtrema_DistShapeShape();
	/// <summary>
	/// create tool and computation of the minimum distance (value and pair of points)
	/// using default deflection in single thread mode. <br>
	/// Default deflection value is Precision::Confusion(). <br>
	/// </summary>
	/// <param name="Shape1">
	/// - the first shape for distance computation
	/// </param>
	/// <param name="Shape2">
	/// - the second shape for distance computation
	/// </param>
	/// <param name="F">
	/// and @param A are not used in computation and are obsolete.
	/// </param>
	/// <param name="theRange">
	/// - the progress indicator of algorithm
	/// </param>
	/* Method skipped due to unknown mapping: void BRepExtrema_DistShapeShape(TopoDS_Shape Shape1, TopoDS_Shape Shape2, Extrema_ExtFlag F, Extrema_ExtAlgo A, Message_ProgressRange theRange, ) */
	/// <summary>
	/// create tool and computation of the minimum distance (value and pair of points)
	/// using default deflection in single thread mode. <br>
	/// Default deflection value is Precision::Confusion(). <br>
	/// </summary>
	/// <param name="Shape1">
	/// - the first shape for distance computation
	/// </param>
	/// <param name="Shape2">
	/// - the second shape for distance computation
	/// </param>
	/// <param name="F">
	/// and @param A are not used in computation and are obsolete.
	/// </param>
	/// <param name="theRange">
	/// - the progress indicator of algorithm
	/// </param>
	/* Method skipped due to unknown mapping: void BRepExtrema_DistShapeShape(TopoDS_Shape Shape1, TopoDS_Shape Shape2, Extrema_ExtFlag F, Extrema_ExtAlgo A, Message_ProgressRange theRange, ) */
	/// <summary>
	/// create tool and computation of the minimum distance (value and pair of points)
	/// using default deflection in single thread mode. <br>
	/// Default deflection value is Precision::Confusion(). <br>
	/// </summary>
	/// <param name="Shape1">
	/// - the first shape for distance computation
	/// </param>
	/// <param name="Shape2">
	/// - the second shape for distance computation
	/// </param>
	/// <param name="F">
	/// and @param A are not used in computation and are obsolete.
	/// </param>
	/// <param name="theRange">
	/// - the progress indicator of algorithm
	/// </param>
	/* Method skipped due to unknown mapping: void BRepExtrema_DistShapeShape(TopoDS_Shape Shape1, TopoDS_Shape Shape2, Extrema_ExtFlag F, Extrema_ExtAlgo A, Message_ProgressRange theRange, ) */
	/// <summary>
	/// create tool and computation of the minimum distance (value and pair of points)
	/// using default deflection in single thread mode. <br>
	/// Default deflection value is Precision::Confusion(). <br>
	/// </summary>
	/// <param name="Shape1">
	/// - the first shape for distance computation
	/// </param>
	/// <param name="Shape2">
	/// - the second shape for distance computation
	/// </param>
	/// <param name="F">
	/// and @param A are not used in computation and are obsolete.
	/// </param>
	/// <param name="theRange">
	/// - the progress indicator of algorithm
	/// </param>
	BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2);
	/// <summary>
	/// create tool and computation of the minimum distance
	/// (value and pair of points) in single thread mode. <br>
	/// Default deflection value is Precision::Confusion(). <br>
	/// </summary>
	/// <param name="Shape1">
	/// - the first shape for distance computation
	/// </param>
	/// <param name="Shape2">
	/// - the second shape for distance computation
	/// </param>
	/// <param name="theDeflection">
	/// - the presition of distance computation
	/// </param>
	/// <param name="F">
	/// and @param A are not used in computation and are obsolete.
	/// </param>
	/// <param name="theRange">
	/// - the progress indicator of algorithm
	/// </param>
	/* Method skipped due to unknown mapping: void BRepExtrema_DistShapeShape(TopoDS_Shape Shape1, TopoDS_Shape Shape2, Standard_Real theDeflection, Extrema_ExtFlag F, Extrema_ExtAlgo A, Message_ProgressRange theRange, ) */
	/// <summary>
	/// create tool and computation of the minimum distance
	/// (value and pair of points) in single thread mode. <br>
	/// Default deflection value is Precision::Confusion(). <br>
	/// </summary>
	/// <param name="Shape1">
	/// - the first shape for distance computation
	/// </param>
	/// <param name="Shape2">
	/// - the second shape for distance computation
	/// </param>
	/// <param name="theDeflection">
	/// - the presition of distance computation
	/// </param>
	/// <param name="F">
	/// and @param A are not used in computation and are obsolete.
	/// </param>
	/// <param name="theRange">
	/// - the progress indicator of algorithm
	/// </param>
	/* Method skipped due to unknown mapping: void BRepExtrema_DistShapeShape(TopoDS_Shape Shape1, TopoDS_Shape Shape2, Standard_Real theDeflection, Extrema_ExtFlag F, Extrema_ExtAlgo A, Message_ProgressRange theRange, ) */
	/// <summary>
	/// create tool and computation of the minimum distance
	/// (value and pair of points) in single thread mode. <br>
	/// Default deflection value is Precision::Confusion(). <br>
	/// </summary>
	/// <param name="Shape1">
	/// - the first shape for distance computation
	/// </param>
	/// <param name="Shape2">
	/// - the second shape for distance computation
	/// </param>
	/// <param name="theDeflection">
	/// - the presition of distance computation
	/// </param>
	/// <param name="F">
	/// and @param A are not used in computation and are obsolete.
	/// </param>
	/// <param name="theRange">
	/// - the progress indicator of algorithm
	/// </param>
	/* Method skipped due to unknown mapping: void BRepExtrema_DistShapeShape(TopoDS_Shape Shape1, TopoDS_Shape Shape2, Standard_Real theDeflection, Extrema_ExtFlag F, Extrema_ExtAlgo A, Message_ProgressRange theRange, ) */
	/// <summary>
	/// create tool and computation of the minimum distance
	/// (value and pair of points) in single thread mode. <br>
	/// Default deflection value is Precision::Confusion(). <br>
	/// </summary>
	/// <param name="Shape1">
	/// - the first shape for distance computation
	/// </param>
	/// <param name="Shape2">
	/// - the second shape for distance computation
	/// </param>
	/// <param name="theDeflection">
	/// - the presition of distance computation
	/// </param>
	/// <param name="F">
	/// and @param A are not used in computation and are obsolete.
	/// </param>
	/// <param name="theRange">
	/// - the progress indicator of algorithm
	/// </param>
	BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2, double theDeflection);
	BRepExtrema_DistShapeShape(Macad::Occt::BRepExtrema_DistShapeShape^ parameter1);
	/// <summary>
	/// Sets deflection to computation of the minimum distance <br>
	/// </summary>
	void SetDeflection(double theDeflection);
	/// <summary>
	/// load first shape into extrema <br>
	/// </summary>
	void LoadS1(Macad::Occt::TopoDS_Shape^ Shape1);
	/// <summary>
	/// load second shape into extrema <br>
	/// </summary>
	void LoadS2(Macad::Occt::TopoDS_Shape^ Shape1);
	/// <summary>
	/// computation of  the minimum  distance  (value  and <br>
	/// couple  of points). Parameter theDeflection is used <br>
	/// to specify a maximum deviation of extreme distances <br>
	/// from the minimum one. <br>
	/// Returns IsDone status. <br>
	/// theRange - the progress indicator of algorithm
	/// </summary>
	bool Perform(Macad::Occt::Message_ProgressRange^ theRange);
	/// <summary>
	/// computation of  the minimum  distance  (value  and <br>
	/// couple  of points). Parameter theDeflection is used <br>
	/// to specify a maximum deviation of extreme distances <br>
	/// from the minimum one. <br>
	/// Returns IsDone status. <br>
	/// theRange - the progress indicator of algorithm
	/// </summary>
	bool Perform();
	/// <summary>
	/// True if the minimum distance is found. <br>
	/// </summary>
	bool IsDone();
	/// <summary>
	/// Returns the number of solutions satisfying the minimum distance. <br>
	/// </summary>
	int NbSolution();
	/// <summary>
	/// Returns the value of the minimum distance. <br>
	/// </summary>
	double Value();
	/// <summary>
	/// True if one of the shapes is a solid and the other shape <br>
	/// is completely or partially inside the solid. <br>
	/// </summary>
	bool InnerSolution();
	/// <summary>
	/// Returns the Point corresponding to the <N>th solution on the first Shape <br>
	/// </summary>
	Macad::Occt::Pnt PointOnShape1(int N);
	/// <summary>
	/// Returns the Point corresponding to the <N>th solution on the second Shape <br>
	/// </summary>
	Macad::Occt::Pnt PointOnShape2(int N);
	/// <summary>
	/// gives the type of the support where the Nth solution on the first shape is situated: <br>
	/// IsVertex => the Nth solution on the first shape is a Vertex <br>
	/// IsOnEdge => the Nth soluion on the first shape is on a Edge <br>
	/// IsInFace => the Nth solution on the first shape is inside a face <br>
	/// the corresponding support is obtained by the method SupportOnShape1 <br>
	/// </summary>
	Macad::Occt::BRepExtrema_SupportType SupportTypeShape1(int N);
	/// <summary>
	/// gives the type of the support where the Nth solution on the second shape is situated: <br>
	/// IsVertex => the Nth solution on the second shape is a Vertex <br>
	/// IsOnEdge => the Nth soluion on the secondt shape is on a Edge <br>
	/// IsInFace => the Nth solution on the second shape is inside a face <br>
	/// the corresponding support is obtained by the method SupportOnShape2 <br>
	/// </summary>
	Macad::Occt::BRepExtrema_SupportType SupportTypeShape2(int N);
	/// <summary>
	/// gives the support where the Nth solution on the first shape is situated. <br>
	/// This support can be a Vertex, an Edge or a Face. <br>
	/// </summary>
	Macad::Occt::TopoDS_Shape^ SupportOnShape1(int N);
	/// <summary>
	/// gives the support where the Nth solution on the second shape is situated. <br>
	/// This support can be a Vertex, an Edge or a Face. <br>
	/// </summary>
	Macad::Occt::TopoDS_Shape^ SupportOnShape2(int N);
	/// <summary>
	/// gives the corresponding parameter t if the Nth solution <br>
	/// is situated on an Edge of the first shape <br>
	/// </summary>
	void ParOnEdgeS1(int N, double% t);
	/// <summary>
	/// gives the corresponding parameter t if the Nth solution <br>
	/// is situated on an Edge of the first shape <br>
	/// </summary>
	void ParOnEdgeS2(int N, double% t);
	/// <summary>
	/// gives the corresponding parameters (U,V) if the Nth solution <br>
	/// is situated on an face of the first shape <br>
	/// </summary>
	void ParOnFaceS1(int N, double% u, double% v);
	/// <summary>
	/// gives the corresponding parameters (U,V) if the Nth solution <br>
	/// is situated on an Face of the second shape <br>
	/// </summary>
	void ParOnFaceS2(int N, double% u, double% v);
	/// <summary>
	/// Prints on the stream o information on the current state of the object. <br>
	/// </summary>
	/* Method skipped due to unknown mapping: void Dump(ostream o, ) */
	/// <summary>
	/// Sets unused parameter
	/// Obsolete
	/// </summary>
	/* Method skipped due to unknown mapping: void SetFlag(Extrema_ExtFlag F, ) */
	/// <summary>
	/// Sets unused parameter
	/// Obsolete
	/// </summary>
	/* Method skipped due to unknown mapping: void SetAlgo(Extrema_ExtAlgo A, ) */
	/// <summary>
	/// If isMultiThread == Standard_True then computation will be performed in parallel.
	/// </summary>
	void SetMultiThread(bool theIsMultiThread);
	/// <summary>
	/// Returns Standard_True then computation will be performed in parallel
	/// Default value is Standard_False
	/// </summary>
	bool IsMultiThread();
}; // class BRepExtrema_DistShapeShape

//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtCC
//---------------------------------------------------------------------
public ref class BRepExtrema_ExtCC sealed : public BaseClass<::BRepExtrema_ExtCC>
{

#ifdef Include_BRepExtrema_ExtCC_h
public:
	Include_BRepExtrema_ExtCC_h
#endif

public:
	BRepExtrema_ExtCC(::BRepExtrema_ExtCC* nativeInstance)
		: BaseClass<::BRepExtrema_ExtCC>( nativeInstance, true )
	{}

	BRepExtrema_ExtCC(::BRepExtrema_ExtCC& nativeInstance)
		: BaseClass<::BRepExtrema_ExtCC>( &nativeInstance, false )
	{}

	property ::BRepExtrema_ExtCC* NativeInstance
	{
		::BRepExtrema_ExtCC* get()
		{
			return static_cast<::BRepExtrema_ExtCC*>(_NativeInstance);
		}
	}

public:
	BRepExtrema_ExtCC();
	/// <summary>
	/// It calculates all the distances. <br>
	/// </summary>
	BRepExtrema_ExtCC(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2);
	void Initialize(Macad::Occt::TopoDS_Edge^ E2);
	/// <summary>
	/// An exception is raised if the fields have not been initialized. <br>
	/// </summary>
	void Perform(Macad::Occt::TopoDS_Edge^ E1);
	/// <summary>
	/// True if the distances are found. <br>
	/// </summary>
	bool IsDone();
	/// <summary>
	/// Returns the number of extremum distances. <br>
	/// </summary>
	int NbExt();
	/// <summary>
	/// Returns True if E1 and E2 are parallel. <br>
	/// </summary>
	bool IsParallel();
	/// <summary>
	/// Returns the value of the <N>th extremum square distance. <br>
	/// </summary>
	double SquareDistance(int N);
	/// <summary>
	/// Returns the parameter on the first edge of the <N>th extremum distance. <br>
	/// </summary>
	double ParameterOnE1(int N);
	/// <summary>
	/// Returns the Point of the <N>th extremum distance on the edge E1. <br>
	/// </summary>
	Macad::Occt::Pnt PointOnE1(int N);
	/// <summary>
	/// Returns the parameter on the second edge of the <N>th extremum distance. <br>
	/// </summary>
	double ParameterOnE2(int N);
	/// <summary>
	/// Returns the Point of the <N>th extremum distance on the edge E2. <br>
	/// </summary>
	Macad::Occt::Pnt PointOnE2(int N);
	/// <summary>
	/// if the edges is a trimmed curve, <br>
	/// dist11 is a square distance between the point on E1 <br>
	/// of parameter FirstParameter and the point of <br>
	/// parameter FirstParameter on E2. <br>
	/// </summary>
	void TrimmedSquareDistances(double% dist11, double% distP12, double% distP21, double% distP22, Macad::Occt::Pnt% P11, Macad::Occt::Pnt% P12, Macad::Occt::Pnt% P21, Macad::Occt::Pnt% P22);
}; // class BRepExtrema_ExtCC

//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtCF
//---------------------------------------------------------------------
public ref class BRepExtrema_ExtCF sealed : public BaseClass<::BRepExtrema_ExtCF>
{

#ifdef Include_BRepExtrema_ExtCF_h
public:
	Include_BRepExtrema_ExtCF_h
#endif

public:
	BRepExtrema_ExtCF(::BRepExtrema_ExtCF* nativeInstance)
		: BaseClass<::BRepExtrema_ExtCF>( nativeInstance, true )
	{}

	BRepExtrema_ExtCF(::BRepExtrema_ExtCF& nativeInstance)
		: BaseClass<::BRepExtrema_ExtCF>( &nativeInstance, false )
	{}

	property ::BRepExtrema_ExtCF* NativeInstance
	{
		::BRepExtrema_ExtCF* get()
		{
			return static_cast<::BRepExtrema_ExtCF*>(_NativeInstance);
		}
	}

public:
	BRepExtrema_ExtCF();
	/// <summary>
	/// It calculates all the distances. <br>
	/// </summary>
	BRepExtrema_ExtCF(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
	void Initialize(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
	/// <summary>
	/// An exception is raised if the fields have not been initialized. <br>
	/// Be careful: this method uses the Face only for classify not for the fields. <br>
	/// </summary>
	void Perform(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
	/// <summary>
	/// True if the distances are found. <br>
	/// </summary>
	bool IsDone();
	/// <summary>
	/// Returns the number of extremum distances. <br>
	/// </summary>
	int NbExt();
	/// <summary>
	/// Returns the value of the <N>th extremum square distance. <br>
	/// </summary>
	double SquareDistance(int N);
	/// <summary>
	/// Returns True if the curve is on a parallel surface. <br>
	/// </summary>
	bool IsParallel();
	/// <summary>
	/// Returns the parameters on the Edge of the <N>th extremum distance. <br>
	/// </summary>
	double ParameterOnEdge(int N);
	/// <summary>
	/// Returns the parameters on the Face of the <N>th extremum distance. <br>
	/// </summary>
	void ParameterOnFace(int N, double% U, double% V);
	/// <summary>
	/// Returns the Point of the <N>th extremum distance. <br>
	/// </summary>
	Macad::Occt::Pnt PointOnEdge(int N);
	/// <summary>
	/// Returns the Point of the <N>th extremum distance. <br>
	/// </summary>
	Macad::Occt::Pnt PointOnFace(int N);
}; // class BRepExtrema_ExtCF

//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtFF
//---------------------------------------------------------------------
public ref class BRepExtrema_ExtFF sealed : public BaseClass<::BRepExtrema_ExtFF>
{

#ifdef Include_BRepExtrema_ExtFF_h
public:
	Include_BRepExtrema_ExtFF_h
#endif

public:
	BRepExtrema_ExtFF(::BRepExtrema_ExtFF* nativeInstance)
		: BaseClass<::BRepExtrema_ExtFF>( nativeInstance, true )
	{}

	BRepExtrema_ExtFF(::BRepExtrema_ExtFF& nativeInstance)
		: BaseClass<::BRepExtrema_ExtFF>( &nativeInstance, false )
	{}

	property ::BRepExtrema_ExtFF* NativeInstance
	{
		::BRepExtrema_ExtFF* get()
		{
			return static_cast<::BRepExtrema_ExtFF*>(_NativeInstance);
		}
	}

public:
	BRepExtrema_ExtFF();
	/// <summary>
	/// It calculates all the distances. <br>
	/// </summary>
	BRepExtrema_ExtFF(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2);
	BRepExtrema_ExtFF(Macad::Occt::BRepExtrema_ExtFF^ parameter1);
	void Initialize(Macad::Occt::TopoDS_Face^ F2);
	/// <summary>
	/// An exception is raised if the fields have not been initialized. <br>
	/// Be careful: this method uses the Face F2 only for classify, not for the fields. <br>
	/// </summary>
	void Perform(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2);
	/// <summary>
	/// True if the distances are found. <br>
	/// </summary>
	bool IsDone();
	/// <summary>
	/// Returns True if the surfaces are parallel. <br>
	/// </summary>
	bool IsParallel();
	/// <summary>
	/// Returns the number of extremum distances. <br>
	/// </summary>
	int NbExt();
	/// <summary>
	/// Returns the value of the <N>th extremum square distance. <br>
	/// </summary>
	double SquareDistance(int N);
	/// <summary>
	/// Returns the parameters on the Face F1 of the <N>th extremum distance. <br>
	/// </summary>
	void ParameterOnFace1(int N, double% U, double% V);
	/// <summary>
	/// Returns the parameters on the Face F2 of the <N>th extremum distance. <br>
	/// </summary>
	void ParameterOnFace2(int N, double% U, double% V);
	/// <summary>
	/// Returns the Point of the <N>th extremum distance. <br>
	/// </summary>
	Macad::Occt::Pnt PointOnFace1(int N);
	/// <summary>
	/// Returns the Point of the <N>th extremum distance. <br>
	/// </summary>
	Macad::Occt::Pnt PointOnFace2(int N);
}; // class BRepExtrema_ExtFF

//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtPC
//---------------------------------------------------------------------
public ref class BRepExtrema_ExtPC sealed : public BaseClass<::BRepExtrema_ExtPC>
{

#ifdef Include_BRepExtrema_ExtPC_h
public:
	Include_BRepExtrema_ExtPC_h
#endif

public:
	BRepExtrema_ExtPC(::BRepExtrema_ExtPC* nativeInstance)
		: BaseClass<::BRepExtrema_ExtPC>( nativeInstance, true )
	{}

	BRepExtrema_ExtPC(::BRepExtrema_ExtPC& nativeInstance)
		: BaseClass<::BRepExtrema_ExtPC>( &nativeInstance, false )
	{}

	property ::BRepExtrema_ExtPC* NativeInstance
	{
		::BRepExtrema_ExtPC* get()
		{
			return static_cast<::BRepExtrema_ExtPC*>(_NativeInstance);
		}
	}

public:
	BRepExtrema_ExtPC();
	/// <summary>
	/// It calculates all the distances. <br>
	/// </summary>
	BRepExtrema_ExtPC(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E);
	BRepExtrema_ExtPC(Macad::Occt::BRepExtrema_ExtPC^ parameter1);
	void Initialize(Macad::Occt::TopoDS_Edge^ E);
	/// <summary>
	/// An exception is raised if the fields have not been initialized. <br>
	/// </summary>
	void Perform(Macad::Occt::TopoDS_Vertex^ V);
	/// <summary>
	/// True if the distances are found. <br>
	/// </summary>
	bool IsDone();
	/// <summary>
	/// Returns the number of extremum distances. <br>
	/// </summary>
	int NbExt();
	/// <summary>
	/// Returns True if the <N>th extremum distance is a minimum. <br>
	/// </summary>
	bool IsMin(int N);
	/// <summary>
	/// Returns the value of the <N>th extremum square distance. <br>
	/// </summary>
	double SquareDistance(int N);
	/// <summary>
	/// Returns the parameter on the edge of the <N>th extremum distance. <br>
	/// </summary>
	double Parameter(int N);
	/// <summary>
	/// Returns the Point of the <N>th extremum distance. <br>
	/// </summary>
	Macad::Occt::Pnt Point(int N);
	/// <summary>
	/// if the curve is a trimmed curve, <br>
	/// dist1 is a square distance between <P> and the point <br>
	/// of parameter FirstParameter <pnt1> and <br>
	/// dist2 is a square distance between <P> and the point <br>
	/// of parameter LastParameter <pnt2>. <br>
	/// </summary>
	void TrimmedSquareDistances(double% dist1, double% dist2, Macad::Occt::Pnt% pnt1, Macad::Occt::Pnt% pnt2);
}; // class BRepExtrema_ExtPC

//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtPF
//---------------------------------------------------------------------
public ref class BRepExtrema_ExtPF sealed : public BaseClass<::BRepExtrema_ExtPF>
{

#ifdef Include_BRepExtrema_ExtPF_h
public:
	Include_BRepExtrema_ExtPF_h
#endif

public:
	BRepExtrema_ExtPF(::BRepExtrema_ExtPF* nativeInstance)
		: BaseClass<::BRepExtrema_ExtPF>( nativeInstance, true )
	{}

	BRepExtrema_ExtPF(::BRepExtrema_ExtPF& nativeInstance)
		: BaseClass<::BRepExtrema_ExtPF>( &nativeInstance, false )
	{}

	property ::BRepExtrema_ExtPF* NativeInstance
	{
		::BRepExtrema_ExtPF* get()
		{
			return static_cast<::BRepExtrema_ExtPF*>(_NativeInstance);
		}
	}

public:
	BRepExtrema_ExtPF();
	/// <summary>
	/// It calculates all the distances. <br>
	/// </summary>
	/* Method skipped due to unknown mapping: void BRepExtrema_ExtPF(TopoDS_Vertex TheVertex, TopoDS_Face TheFace, Extrema_ExtFlag TheFlag, Extrema_ExtAlgo TheAlgo, ) */
	/// <summary>
	/// It calculates all the distances. <br>
	/// </summary>
	/* Method skipped due to unknown mapping: void BRepExtrema_ExtPF(TopoDS_Vertex TheVertex, TopoDS_Face TheFace, Extrema_ExtFlag TheFlag, Extrema_ExtAlgo TheAlgo, ) */
	/// <summary>
	/// It calculates all the distances. <br>
	/// </summary>
	BRepExtrema_ExtPF(Macad::Occt::TopoDS_Vertex^ TheVertex, Macad::Occt::TopoDS_Face^ TheFace);
	/* Method skipped due to unknown mapping: void Initialize(TopoDS_Face TheFace, Extrema_ExtFlag TheFlag, Extrema_ExtAlgo TheAlgo, ) */
	/* Method skipped due to unknown mapping: void Initialize(TopoDS_Face TheFace, Extrema_ExtFlag TheFlag, Extrema_ExtAlgo TheAlgo, ) */
	void Initialize(Macad::Occt::TopoDS_Face^ TheFace);
	/// <summary>
	/// An exception is raised if the fields have not been initialized. <br>
	/// Be careful: this method uses the Face only for classify not for the fields. <br>
	/// </summary>
	void Perform(Macad::Occt::TopoDS_Vertex^ TheVertex, Macad::Occt::TopoDS_Face^ TheFace);
	/// <summary>
	/// True if the distances are found. <br>
	/// </summary>
	bool IsDone();
	/// <summary>
	/// Returns the number of extremum distances. <br>
	/// </summary>
	int NbExt();
	/// <summary>
	/// Returns the value of the <N>th extremum square distance. <br>
	/// </summary>
	double SquareDistance(int N);
	/// <summary>
	/// Returns the parameters on the Face of the <N>th extremum distance. <br>
	/// </summary>
	void Parameter(int N, double% U, double% V);
	/// <summary>
	/// Returns the Point of the <N>th extremum distance. <br>
	/// </summary>
	Macad::Occt::Pnt Point(int N);
	/* Method skipped due to unknown mapping: void SetFlag(Extrema_ExtFlag F, ) */
	/* Method skipped due to unknown mapping: void SetAlgo(Extrema_ExtAlgo A, ) */
}; // class BRepExtrema_ExtPF

//---------------------------------------------------------------------
//  Class  BRepExtrema_Poly
//---------------------------------------------------------------------
public ref class BRepExtrema_Poly sealed : public BaseClass<::BRepExtrema_Poly>
{

#ifdef Include_BRepExtrema_Poly_h
public:
	Include_BRepExtrema_Poly_h
#endif

public:
	BRepExtrema_Poly(::BRepExtrema_Poly* nativeInstance)
		: BaseClass<::BRepExtrema_Poly>( nativeInstance, true )
	{}

	BRepExtrema_Poly(::BRepExtrema_Poly& nativeInstance)
		: BaseClass<::BRepExtrema_Poly>( &nativeInstance, false )
	{}

	property ::BRepExtrema_Poly* NativeInstance
	{
		::BRepExtrema_Poly* get()
		{
			return static_cast<::BRepExtrema_Poly*>(_NativeInstance);
		}
	}

public:
	BRepExtrema_Poly();
	BRepExtrema_Poly(Macad::Occt::BRepExtrema_Poly^ parameter1);
	/// <summary>
	/// returns Standard_True if OK.
	/// </summary>
	static bool Distance(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2, double% dist);
}; // class BRepExtrema_Poly

//---------------------------------------------------------------------
//  Class  BRepExtrema_ShapeProximity
//---------------------------------------------------------------------
/// <summary>
/// Tool class for shape proximity detection.
/// For two given shapes and given tolerance (offset from the mesh) the algorithm allows
/// to determine whether or not they are overlapped. The algorithm input consists of any
/// shapes which can be decomposed into individual faces (used as basic shape elements).
/// High performance is achieved through the use of existing triangulation of faces. So
/// poly triangulation (with the desired deflection) should already be built. Note that
/// solution is approximate (and corresponds to the deflection used for triangulation).
/// 
/// The algorithm can be run in two modes. If tolerance is set to zero, the algorithm
/// will detect only intersecting faces (containing triangles with common points). If
/// tolerance is set to positive value, the algorithm will also detect faces located
/// on distance less than the given tolerance from each other.
/// </summary>
public ref class BRepExtrema_ShapeProximity sealed : public BaseClass<::BRepExtrema_ShapeProximity>
{

#ifdef Include_BRepExtrema_ShapeProximity_h
public:
	Include_BRepExtrema_ShapeProximity_h
#endif

public:
	BRepExtrema_ShapeProximity(::BRepExtrema_ShapeProximity* nativeInstance)
		: BaseClass<::BRepExtrema_ShapeProximity>( nativeInstance, true )
	{}

	BRepExtrema_ShapeProximity(::BRepExtrema_ShapeProximity& nativeInstance)
		: BaseClass<::BRepExtrema_ShapeProximity>( &nativeInstance, false )
	{}

	property ::BRepExtrema_ShapeProximity* NativeInstance
	{
		::BRepExtrema_ShapeProximity* get()
		{
			return static_cast<::BRepExtrema_ShapeProximity*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// Creates empty proximity tool.
	/// </summary>
	BRepExtrema_ShapeProximity(double theTolerance);
	/// <summary>
	/// Creates proximity tool for the given two shapes.
	/// </summary>
	BRepExtrema_ShapeProximity(Macad::Occt::TopoDS_Shape^ theShape1, Macad::Occt::TopoDS_Shape^ theShape2, double theTolerance);
	/// <summary>
	/// Creates proximity tool for the given two shapes.
	/// </summary>
	BRepExtrema_ShapeProximity(Macad::Occt::TopoDS_Shape^ theShape1, Macad::Occt::TopoDS_Shape^ theShape2);
	BRepExtrema_ShapeProximity(Macad::Occt::BRepExtrema_ShapeProximity^ parameter1);
	/// <summary>
	/// Returns tolerance value for overlap test (distance between shapes).
	/// </summary>
	double Tolerance();
	/// <summary>
	/// Sets tolerance value for overlap test (distance between shapes).
	/// </summary>
	void SetTolerance(double theTolerance);
	/// <summary>
	/// Loads 1st shape into proximity tool.
	/// </summary>
	bool LoadShape1(Macad::Occt::TopoDS_Shape^ theShape1);
	/// <summary>
	/// Loads 2nd shape into proximity tool.
	/// </summary>
	bool LoadShape2(Macad::Occt::TopoDS_Shape^ theShape2);
	/// <summary>
	/// Performs search of overlapped faces.
	/// </summary>
	void Perform();
	/// <summary>
	/// True if the search is completed.
	/// </summary>
	bool IsDone();
	/// <summary>
	/// Returns set of IDs of overlapped faces of 1st shape (started from 0).
	/// </summary>
	Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ OverlapSubShapes1();
	/// <summary>
	/// Returns set of IDs of overlapped faces of 2nd shape (started from 0).
	/// </summary>
	Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ OverlapSubShapes2();
	/// <summary>
	/// Returns sub-shape from 1st shape with the given index (started from 0).
	/// </summary>
	Macad::Occt::TopoDS_Face^ GetSubShape1(int theID);
	/// <summary>
	/// Returns sub-shape from 1st shape with the given index (started from 0).
	/// </summary>
	Macad::Occt::TopoDS_Face^ GetSubShape2(int theID);
	/// <summary>
	/// Returns set of all the face triangles of the 1st shape.
	/// </summary>
	/* Method skipped due to unknown mapping: BRepExtrema_TriangleSet ElementSet1() */
	/// <summary>
	/// Returns set of all the face triangles of the 2nd shape.
	/// </summary>
	/* Method skipped due to unknown mapping: BRepExtrema_TriangleSet ElementSet2() */
}; // class BRepExtrema_ShapeProximity

//---------------------------------------------------------------------
//  Class  BRepExtrema_UnCompatibleShape
//---------------------------------------------------------------------
public ref class BRepExtrema_UnCompatibleShape sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_BRepExtrema_UnCompatibleShape_h
public:
	Include_BRepExtrema_UnCompatibleShape_h
#endif

public:
	BRepExtrema_UnCompatibleShape(::BRepExtrema_UnCompatibleShape* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	BRepExtrema_UnCompatibleShape(::BRepExtrema_UnCompatibleShape& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::BRepExtrema_UnCompatibleShape* NativeInstance
	{
		::BRepExtrema_UnCompatibleShape* get()
		{
			return static_cast<::BRepExtrema_UnCompatibleShape*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRepExtrema_UnCompatibleShape^ CreateDowncasted(::BRepExtrema_UnCompatibleShape* instance);

public:
	BRepExtrema_UnCompatibleShape();
	BRepExtrema_UnCompatibleShape(System::String^ theMessage);
	BRepExtrema_UnCompatibleShape(System::String^ theMessage, System::String^ theStackTrace);
	BRepExtrema_UnCompatibleShape(Macad::Occt::BRepExtrema_UnCompatibleShape^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::BRepExtrema_UnCompatibleShape^ NewInstance(System::String^ theMessage);
	static Macad::Occt::BRepExtrema_UnCompatibleShape^ NewInstance();
	static Macad::Occt::BRepExtrema_UnCompatibleShape^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class BRepExtrema_UnCompatibleShape

}; // namespace Occt
}; // namespace Macad
