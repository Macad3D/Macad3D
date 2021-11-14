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
	enum class FilterResult
	{
		NoCheck = 0,
		Overlap = 1,
		DoCheck = 2
	}; // enum  class FilterResult

	BRepExtrema_ElementFilter(Macad::Occt::BRepExtrema_ElementFilter^ parameter1);
	BRepExtrema_ElementFilter();
	Macad::Occt::BRepExtrema_ElementFilter::FilterResult PreCheckElements(int parameter1, int parameter2);
}; // class BRepExtrema_ElementFilter

//---------------------------------------------------------------------
//  Class  BRepExtrema_SolutionElem
//---------------------------------------------------------------------
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
	BRepExtrema_SolutionElem();
	BRepExtrema_SolutionElem(double theDist, Macad::Occt::Pnt thePoint, Macad::Occt::BRepExtrema_SupportType theSolType, Macad::Occt::TopoDS_Vertex^ theVertex);
	BRepExtrema_SolutionElem(double theDist, Macad::Occt::Pnt thePoint, Macad::Occt::BRepExtrema_SupportType theSolType, Macad::Occt::TopoDS_Edge^ theEdge, double theParam);
	BRepExtrema_SolutionElem(double theDist, Macad::Occt::Pnt thePoint, Macad::Occt::BRepExtrema_SupportType theSolType, Macad::Occt::TopoDS_Face^ theFace, double theU, double theV);
	BRepExtrema_SolutionElem(Macad::Occt::BRepExtrema_SolutionElem^ parameter1);
	double Dist();
	Macad::Occt::Pnt Point();
	Macad::Occt::BRepExtrema_SupportType SupportKind();
	Macad::Occt::TopoDS_Vertex^ Vertex();
	Macad::Occt::TopoDS_Edge^ Edge();
	Macad::Occt::TopoDS_Face^ Face();
	void EdgeParameter(double% theParam);
	void FaceParameter(double% theU, double% theV);
}; // class BRepExtrema_SolutionElem

//---------------------------------------------------------------------
//  Class  BRepExtrema_DistanceSS
//---------------------------------------------------------------------
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
	/* Method skipped due to unknown mapping: void BRepExtrema_DistanceSS(TopoDS_Shape S1, TopoDS_Shape S2, Bnd_Box B1, Bnd_Box B2, Standard_Real DstRef, Extrema_ExtFlag F, Extrema_ExtAlgo A, ) */
	/* Method skipped due to unknown mapping: void BRepExtrema_DistanceSS(TopoDS_Shape S1, TopoDS_Shape S2, Bnd_Box B1, Bnd_Box B2, Standard_Real DstRef, Extrema_ExtFlag F, Extrema_ExtAlgo A, ) */
	BRepExtrema_DistanceSS(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Bnd_Box^ B1, Macad::Occt::Bnd_Box^ B2, double DstRef);
	/* Method skipped due to unknown mapping: void BRepExtrema_DistanceSS(TopoDS_Shape S1, TopoDS_Shape S2, Bnd_Box B1, Bnd_Box B2, Standard_Real DstRef, Standard_Real aDeflection, Extrema_ExtFlag F, Extrema_ExtAlgo A, ) */
	/* Method skipped due to unknown mapping: void BRepExtrema_DistanceSS(TopoDS_Shape S1, TopoDS_Shape S2, Bnd_Box B1, Bnd_Box B2, Standard_Real DstRef, Standard_Real aDeflection, Extrema_ExtFlag F, Extrema_ExtAlgo A, ) */
	BRepExtrema_DistanceSS(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Bnd_Box^ B1, Macad::Occt::Bnd_Box^ B2, double DstRef, double aDeflection);
	BRepExtrema_DistanceSS(Macad::Occt::BRepExtrema_DistanceSS^ parameter1);
	bool IsDone();
	double DistValue();
	Macad::Occt::BRepExtrema_SeqOfSolution^ Seq1Value();
	Macad::Occt::BRepExtrema_SeqOfSolution^ Seq2Value();
	/* Method skipped due to unknown mapping: void SetFlag(Extrema_ExtFlag F, ) */
	/* Method skipped due to unknown mapping: void SetAlgo(Extrema_ExtAlgo A, ) */
}; // class BRepExtrema_DistanceSS

//---------------------------------------------------------------------
//  Class  BRepExtrema_DistShapeShape
//---------------------------------------------------------------------
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
	BRepExtrema_DistShapeShape();
	/* Method skipped due to unknown mapping: void BRepExtrema_DistShapeShape(TopoDS_Shape Shape1, TopoDS_Shape Shape2, Extrema_ExtFlag F, Extrema_ExtAlgo A, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void BRepExtrema_DistShapeShape(TopoDS_Shape Shape1, TopoDS_Shape Shape2, Extrema_ExtFlag F, Extrema_ExtAlgo A, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void BRepExtrema_DistShapeShape(TopoDS_Shape Shape1, TopoDS_Shape Shape2, Extrema_ExtFlag F, Extrema_ExtAlgo A, Message_ProgressRange theRange, ) */
	BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2);
	/* Method skipped due to unknown mapping: void BRepExtrema_DistShapeShape(TopoDS_Shape Shape1, TopoDS_Shape Shape2, Standard_Real theDeflection, Extrema_ExtFlag F, Extrema_ExtAlgo A, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void BRepExtrema_DistShapeShape(TopoDS_Shape Shape1, TopoDS_Shape Shape2, Standard_Real theDeflection, Extrema_ExtFlag F, Extrema_ExtAlgo A, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void BRepExtrema_DistShapeShape(TopoDS_Shape Shape1, TopoDS_Shape Shape2, Standard_Real theDeflection, Extrema_ExtFlag F, Extrema_ExtAlgo A, Message_ProgressRange theRange, ) */
	BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2, double theDeflection);
	BRepExtrema_DistShapeShape(Macad::Occt::BRepExtrema_DistShapeShape^ parameter1);
	void SetDeflection(double theDeflection);
	void LoadS1(Macad::Occt::TopoDS_Shape^ Shape1);
	void LoadS2(Macad::Occt::TopoDS_Shape^ Shape1);
	bool Perform(Macad::Occt::Message_ProgressRange^ theRange);
	bool Perform();
	bool IsDone();
	int NbSolution();
	double Value();
	bool InnerSolution();
	Macad::Occt::Pnt PointOnShape1(int N);
	Macad::Occt::Pnt PointOnShape2(int N);
	Macad::Occt::BRepExtrema_SupportType SupportTypeShape1(int N);
	Macad::Occt::BRepExtrema_SupportType SupportTypeShape2(int N);
	Macad::Occt::TopoDS_Shape^ SupportOnShape1(int N);
	Macad::Occt::TopoDS_Shape^ SupportOnShape2(int N);
	void ParOnEdgeS1(int N, double% t);
	void ParOnEdgeS2(int N, double% t);
	void ParOnFaceS1(int N, double% u, double% v);
	void ParOnFaceS2(int N, double% u, double% v);
	/* Method skipped due to unknown mapping: void Dump(ostream o, ) */
	/* Method skipped due to unknown mapping: void SetFlag(Extrema_ExtFlag F, ) */
	/* Method skipped due to unknown mapping: void SetAlgo(Extrema_ExtAlgo A, ) */
	void SetMultiThread(bool theIsMultiThread);
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
	BRepExtrema_ExtCC(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2);
	void Initialize(Macad::Occt::TopoDS_Edge^ E2);
	void Perform(Macad::Occt::TopoDS_Edge^ E1);
	bool IsDone();
	int NbExt();
	bool IsParallel();
	double SquareDistance(int N);
	double ParameterOnE1(int N);
	Macad::Occt::Pnt PointOnE1(int N);
	double ParameterOnE2(int N);
	Macad::Occt::Pnt PointOnE2(int N);
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
	BRepExtrema_ExtCF(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
	void Initialize(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
	void Perform(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
	bool IsDone();
	int NbExt();
	double SquareDistance(int N);
	bool IsParallel();
	double ParameterOnEdge(int N);
	void ParameterOnFace(int N, double% U, double% V);
	Macad::Occt::Pnt PointOnEdge(int N);
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
	BRepExtrema_ExtFF(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2);
	BRepExtrema_ExtFF(Macad::Occt::BRepExtrema_ExtFF^ parameter1);
	void Initialize(Macad::Occt::TopoDS_Face^ F2);
	void Perform(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2);
	bool IsDone();
	bool IsParallel();
	int NbExt();
	double SquareDistance(int N);
	void ParameterOnFace1(int N, double% U, double% V);
	void ParameterOnFace2(int N, double% U, double% V);
	Macad::Occt::Pnt PointOnFace1(int N);
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
	BRepExtrema_ExtPC(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E);
	BRepExtrema_ExtPC(Macad::Occt::BRepExtrema_ExtPC^ parameter1);
	void Initialize(Macad::Occt::TopoDS_Edge^ E);
	void Perform(Macad::Occt::TopoDS_Vertex^ V);
	bool IsDone();
	int NbExt();
	bool IsMin(int N);
	double SquareDistance(int N);
	double Parameter(int N);
	Macad::Occt::Pnt Point(int N);
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
	/* Method skipped due to unknown mapping: void BRepExtrema_ExtPF(TopoDS_Vertex TheVertex, TopoDS_Face TheFace, Extrema_ExtFlag TheFlag, Extrema_ExtAlgo TheAlgo, ) */
	/* Method skipped due to unknown mapping: void BRepExtrema_ExtPF(TopoDS_Vertex TheVertex, TopoDS_Face TheFace, Extrema_ExtFlag TheFlag, Extrema_ExtAlgo TheAlgo, ) */
	BRepExtrema_ExtPF(Macad::Occt::TopoDS_Vertex^ TheVertex, Macad::Occt::TopoDS_Face^ TheFace);
	/* Method skipped due to unknown mapping: void Initialize(TopoDS_Face TheFace, Extrema_ExtFlag TheFlag, Extrema_ExtAlgo TheAlgo, ) */
	/* Method skipped due to unknown mapping: void Initialize(TopoDS_Face TheFace, Extrema_ExtFlag TheFlag, Extrema_ExtAlgo TheAlgo, ) */
	void Initialize(Macad::Occt::TopoDS_Face^ TheFace);
	void Perform(Macad::Occt::TopoDS_Vertex^ TheVertex, Macad::Occt::TopoDS_Face^ TheFace);
	bool IsDone();
	int NbExt();
	double SquareDistance(int N);
	void Parameter(int N, double% U, double% V);
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
	static bool Distance(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2, double% dist);
}; // class BRepExtrema_Poly

//---------------------------------------------------------------------
//  Class  BRepExtrema_ShapeProximity
//---------------------------------------------------------------------
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
	BRepExtrema_ShapeProximity(double theTolerance);
	BRepExtrema_ShapeProximity(Macad::Occt::TopoDS_Shape^ theShape1, Macad::Occt::TopoDS_Shape^ theShape2, double theTolerance);
	BRepExtrema_ShapeProximity(Macad::Occt::TopoDS_Shape^ theShape1, Macad::Occt::TopoDS_Shape^ theShape2);
	BRepExtrema_ShapeProximity(Macad::Occt::BRepExtrema_ShapeProximity^ parameter1);
	double Tolerance();
	void SetTolerance(double theTolerance);
	bool LoadShape1(Macad::Occt::TopoDS_Shape^ theShape1);
	bool LoadShape2(Macad::Occt::TopoDS_Shape^ theShape2);
	void Perform();
	bool IsDone();
	Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ OverlapSubShapes1();
	Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ OverlapSubShapes2();
	Macad::Occt::TopoDS_Face^ GetSubShape1(int theID);
	Macad::Occt::TopoDS_Face^ GetSubShape2(int theID);
	/* Method skipped due to unknown mapping: BRepExtrema_TriangleSet ElementSet1() */
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
