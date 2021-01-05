// Generated wrapper code for package BRepOffsetAPI

#pragma once

#include "BRepBuilderAPI.h"
#include "BRepPrimAPI.h"
#include "BRepOffsetAPI.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_SequenceOfSequenceOfShape
//---------------------------------------------------------------------
public ref class BRepOffsetAPI_SequenceOfSequenceOfShape sealed : public BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfShape>
{

#ifdef Include_BRepOffsetAPI_SequenceOfSequenceOfShape_h
public:
	Include_BRepOffsetAPI_SequenceOfSequenceOfShape_h
#endif

public:
	BRepOffsetAPI_SequenceOfSequenceOfShape(::BRepOffsetAPI_SequenceOfSequenceOfShape* nativeInstance)
		: BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfShape>( nativeInstance, true )
	{}

	BRepOffsetAPI_SequenceOfSequenceOfShape(::BRepOffsetAPI_SequenceOfSequenceOfShape& nativeInstance)
		: BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfShape>( &nativeInstance, false )
	{}

	property ::BRepOffsetAPI_SequenceOfSequenceOfShape* NativeInstance
	{
		::BRepOffsetAPI_SequenceOfSequenceOfShape* get()
		{
			return static_cast<::BRepOffsetAPI_SequenceOfSequenceOfShape*>(_NativeInstance);
		}
	}

public:
	BRepOffsetAPI_SequenceOfSequenceOfShape();
	BRepOffsetAPI_SequenceOfSequenceOfShape(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	BRepOffsetAPI_SequenceOfSequenceOfShape(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape^ theOther);
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
	Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape^ Assign(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<TopoDS_Shape> theItem, ) */
	void Append(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape^ theSeq);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<TopoDS_Shape> theItem, ) */
	void Prepend(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape^ theSeq);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<TopoDS_Shape> theItem, ) */
	void InsertBefore(int theIndex, Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, NCollection_Sequence<TopoDS_Shape> theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<TopoDS_Shape> theItem, ) */
	void Split(int theIndex, Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape^ theSeq);
	/* Method skipped due to unknown mapping: NCollection_Sequence<TopoDS_Shape> First() */
	/* Method skipped due to unknown mapping: NCollection_Sequence<TopoDS_Shape> ChangeFirst() */
	/* Method skipped due to unknown mapping: NCollection_Sequence<TopoDS_Shape> Last() */
	/* Method skipped due to unknown mapping: NCollection_Sequence<TopoDS_Shape> ChangeLast() */
	/* Method skipped due to unknown mapping: NCollection_Sequence<TopoDS_Shape> Value(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: NCollection_Sequence<TopoDS_Shape> ChangeValue(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: void SetValue(Standard_Integer theIndex, NCollection_Sequence<TopoDS_Shape> theItem, ) */
}; // class BRepOffsetAPI_SequenceOfSequenceOfShape

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_SequenceOfSequenceOfReal
//---------------------------------------------------------------------
public ref class BRepOffsetAPI_SequenceOfSequenceOfReal sealed : public BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfReal>
{

#ifdef Include_BRepOffsetAPI_SequenceOfSequenceOfReal_h
public:
	Include_BRepOffsetAPI_SequenceOfSequenceOfReal_h
#endif

public:
	BRepOffsetAPI_SequenceOfSequenceOfReal(::BRepOffsetAPI_SequenceOfSequenceOfReal* nativeInstance)
		: BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfReal>( nativeInstance, true )
	{}

	BRepOffsetAPI_SequenceOfSequenceOfReal(::BRepOffsetAPI_SequenceOfSequenceOfReal& nativeInstance)
		: BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfReal>( &nativeInstance, false )
	{}

	property ::BRepOffsetAPI_SequenceOfSequenceOfReal* NativeInstance
	{
		::BRepOffsetAPI_SequenceOfSequenceOfReal* get()
		{
			return static_cast<::BRepOffsetAPI_SequenceOfSequenceOfReal*>(_NativeInstance);
		}
	}

public:
	BRepOffsetAPI_SequenceOfSequenceOfReal();
	BRepOffsetAPI_SequenceOfSequenceOfReal(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	BRepOffsetAPI_SequenceOfSequenceOfReal(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal^ theOther);
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
	Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal^ Assign(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<double> theItem, ) */
	void Append(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal^ theSeq);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<double> theItem, ) */
	void Prepend(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal^ theSeq);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<double> theItem, ) */
	void InsertBefore(int theIndex, Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, NCollection_Sequence<double> theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<double> theItem, ) */
	void Split(int theIndex, Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal^ theSeq);
	/* Method skipped due to unknown mapping: NCollection_Sequence<double> First() */
	/* Method skipped due to unknown mapping: NCollection_Sequence<double> ChangeFirst() */
	/* Method skipped due to unknown mapping: NCollection_Sequence<double> Last() */
	/* Method skipped due to unknown mapping: NCollection_Sequence<double> ChangeLast() */
	/* Method skipped due to unknown mapping: NCollection_Sequence<double> Value(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: NCollection_Sequence<double> ChangeValue(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: void SetValue(Standard_Integer theIndex, NCollection_Sequence<double> theItem, ) */
}; // class BRepOffsetAPI_SequenceOfSequenceOfReal

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_DraftAngle
//---------------------------------------------------------------------
public ref class BRepOffsetAPI_DraftAngle sealed : public Macad::Occt::BRepBuilderAPI_ModifyShape
{

#ifdef Include_BRepOffsetAPI_DraftAngle_h
public:
	Include_BRepOffsetAPI_DraftAngle_h
#endif

public:
	BRepOffsetAPI_DraftAngle(::BRepOffsetAPI_DraftAngle* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
	{}

	BRepOffsetAPI_DraftAngle(::BRepOffsetAPI_DraftAngle& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
	{}

	property ::BRepOffsetAPI_DraftAngle* NativeInstance
	{
		::BRepOffsetAPI_DraftAngle* get()
		{
			return static_cast<::BRepOffsetAPI_DraftAngle*>(_NativeInstance);
		}
	}

public:
	BRepOffsetAPI_DraftAngle();
	BRepOffsetAPI_DraftAngle(Macad::Occt::TopoDS_Shape^ S);
	BRepOffsetAPI_DraftAngle(Macad::Occt::BRepOffsetAPI_DraftAngle^ parameter1);
	void Clear();
	void Init(Macad::Occt::TopoDS_Shape^ S);
	void Add(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Dir Direction, double Angle, Macad::Occt::Pln NeutralPlane, bool Flag);
	void Add(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Dir Direction, double Angle, Macad::Occt::Pln NeutralPlane);
	bool AddDone();
	void Remove(Macad::Occt::TopoDS_Face^ F);
	Macad::Occt::TopoDS_Shape^ ProblematicShape();
	/* Method skipped due to unknown mapping: Draft_ErrorStatus Status() */
	Macad::Occt::TopTools_ListOfShape^ ConnectedFaces(Macad::Occt::TopoDS_Face^ F);
	Macad::Occt::TopTools_ListOfShape^ ModifiedFaces();
	void Build();
	void CorrectWires();
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopoDS_Shape^ ModifiedShape(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepOffsetAPI_DraftAngle

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_FindContigousEdges
//---------------------------------------------------------------------
public ref class BRepOffsetAPI_FindContigousEdges sealed : public BaseClass<::BRepOffsetAPI_FindContigousEdges>
{

#ifdef Include_BRepOffsetAPI_FindContigousEdges_h
public:
	Include_BRepOffsetAPI_FindContigousEdges_h
#endif

public:
	BRepOffsetAPI_FindContigousEdges(::BRepOffsetAPI_FindContigousEdges* nativeInstance)
		: BaseClass<::BRepOffsetAPI_FindContigousEdges>( nativeInstance, true )
	{}

	BRepOffsetAPI_FindContigousEdges(::BRepOffsetAPI_FindContigousEdges& nativeInstance)
		: BaseClass<::BRepOffsetAPI_FindContigousEdges>( &nativeInstance, false )
	{}

	property ::BRepOffsetAPI_FindContigousEdges* NativeInstance
	{
		::BRepOffsetAPI_FindContigousEdges* get()
		{
			return static_cast<::BRepOffsetAPI_FindContigousEdges*>(_NativeInstance);
		}
	}

public:
	BRepOffsetAPI_FindContigousEdges(double tolerance, bool option);
	BRepOffsetAPI_FindContigousEdges(double tolerance);
	BRepOffsetAPI_FindContigousEdges(Macad::Occt::BRepOffsetAPI_FindContigousEdges^ parameter1);
	void Init(double tolerance, bool option);
	void Add(Macad::Occt::TopoDS_Shape^ shape);
	void Perform();
	int NbEdges();
	int NbContigousEdges();
	Macad::Occt::TopoDS_Edge^ ContigousEdge(int index);
	Macad::Occt::TopTools_ListOfShape^ ContigousEdgeCouple(int index);
	Macad::Occt::TopoDS_Edge^ SectionToBoundary(Macad::Occt::TopoDS_Edge^ section);
	int NbDegeneratedShapes();
	Macad::Occt::TopoDS_Shape^ DegeneratedShape(int index);
	bool IsDegenerated(Macad::Occt::TopoDS_Shape^ shape);
	bool IsModified(Macad::Occt::TopoDS_Shape^ shape);
	Macad::Occt::TopoDS_Shape^ Modified(Macad::Occt::TopoDS_Shape^ shape);
	void Dump();
}; // class BRepOffsetAPI_FindContigousEdges

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeDraft
//---------------------------------------------------------------------
public ref class BRepOffsetAPI_MakeDraft sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepOffsetAPI_MakeDraft_h
public:
	Include_BRepOffsetAPI_MakeDraft_h
#endif

public:
	BRepOffsetAPI_MakeDraft(::BRepOffsetAPI_MakeDraft* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepOffsetAPI_MakeDraft(::BRepOffsetAPI_MakeDraft& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepOffsetAPI_MakeDraft* NativeInstance
	{
		::BRepOffsetAPI_MakeDraft* get()
		{
			return static_cast<::BRepOffsetAPI_MakeDraft*>(_NativeInstance);
		}
	}

public:
	BRepOffsetAPI_MakeDraft(Macad::Occt::TopoDS_Shape^ Shape, Macad::Occt::Dir Dir, double Angle);
	BRepOffsetAPI_MakeDraft(Macad::Occt::BRepOffsetAPI_MakeDraft^ parameter1);
	void SetOptions(Macad::Occt::BRepBuilderAPI_TransitionMode Style, double AngleMin, double AngleMax);
	void SetOptions(Macad::Occt::BRepBuilderAPI_TransitionMode Style, double AngleMin);
	void SetOptions(Macad::Occt::BRepBuilderAPI_TransitionMode Style);
	void SetOptions();
	void SetDraft(bool IsInternal);
	void SetDraft();
	void Perform(double LengthMax);
	void Perform(Macad::Occt::Geom_Surface^ Surface, bool KeepInsideSurface);
	void Perform(Macad::Occt::Geom_Surface^ Surface);
	void Perform(Macad::Occt::TopoDS_Shape^ StopShape, bool KeepOutSide);
	void Perform(Macad::Occt::TopoDS_Shape^ StopShape);
	Macad::Occt::TopoDS_Shell^ Shell();
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepOffsetAPI_MakeDraft

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeEvolved
//---------------------------------------------------------------------
public ref class BRepOffsetAPI_MakeEvolved sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepOffsetAPI_MakeEvolved_h
public:
	Include_BRepOffsetAPI_MakeEvolved_h
#endif

public:
	BRepOffsetAPI_MakeEvolved(::BRepOffsetAPI_MakeEvolved* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepOffsetAPI_MakeEvolved(::BRepOffsetAPI_MakeEvolved& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepOffsetAPI_MakeEvolved* NativeInstance
	{
		::BRepOffsetAPI_MakeEvolved* get()
		{
			return static_cast<::BRepOffsetAPI_MakeEvolved*>(_NativeInstance);
		}
	}

public:
	BRepOffsetAPI_MakeEvolved();
	BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid, bool theIsProfOnSpine, double theTol, bool theIsVolume, bool theRunInParallel);
	BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid, bool theIsProfOnSpine, double theTol, bool theIsVolume);
	BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid, bool theIsProfOnSpine, double theTol);
	BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid, bool theIsProfOnSpine);
	BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid);
	BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType, bool theIsAxeProf);
	BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType);
	BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile);
	BRepOffsetAPI_MakeEvolved(Macad::Occt::BRepOffsetAPI_MakeEvolved^ parameter1);
	/* Method skipped due to unknown mapping: BRepFill_Evolved Evolved() */
	void Build();
	Macad::Occt::TopTools_ListOfShape^ GeneratedShapes(Macad::Occt::TopoDS_Shape^ SpineShape, Macad::Occt::TopoDS_Shape^ ProfShape);
	Macad::Occt::TopoDS_Shape^ Top();
	Macad::Occt::TopoDS_Shape^ Bottom();
}; // class BRepOffsetAPI_MakeEvolved

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeFilling
//---------------------------------------------------------------------
public ref class BRepOffsetAPI_MakeFilling sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepOffsetAPI_MakeFilling_h
public:
	Include_BRepOffsetAPI_MakeFilling_h
#endif

public:
	BRepOffsetAPI_MakeFilling(::BRepOffsetAPI_MakeFilling* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepOffsetAPI_MakeFilling(::BRepOffsetAPI_MakeFilling& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepOffsetAPI_MakeFilling* NativeInstance
	{
		::BRepOffsetAPI_MakeFilling* get()
		{
			return static_cast<::BRepOffsetAPI_MakeFilling*>(_NativeInstance);
		}
	}

public:
	BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng, double TolCurv, int MaxDeg, int MaxSegments);
	BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng, double TolCurv, int MaxDeg);
	BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng, double TolCurv);
	BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng);
	BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d);
	BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d);
	BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie);
	BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter);
	BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur);
	BRepOffsetAPI_MakeFilling(int Degree);
	BRepOffsetAPI_MakeFilling(Macad::Occt::BRepOffsetAPI_MakeFilling^ parameter1);
	void SetConstrParam(double Tol2d, double Tol3d, double TolAng, double TolCurv);
	void SetConstrParam(double Tol2d, double Tol3d, double TolAng);
	void SetConstrParam(double Tol2d, double Tol3d);
	void SetConstrParam(double Tol2d);
	void SetConstrParam();
	void SetResolParam(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie);
	void SetResolParam(int Degree, int NbPtsOnCur, int NbIter);
	void SetResolParam(int Degree, int NbPtsOnCur);
	void SetResolParam(int Degree);
	void SetResolParam();
	void SetApproxParam(int MaxDeg, int MaxSegments);
	void SetApproxParam(int MaxDeg);
	void SetApproxParam();
	void LoadInitSurface(Macad::Occt::TopoDS_Face^ Surf);
	int Add(Macad::Occt::TopoDS_Edge^ Constr, Macad::Occt::GeomAbs_Shape Order, bool IsBound);
	int Add(Macad::Occt::TopoDS_Edge^ Constr, Macad::Occt::GeomAbs_Shape Order);
	int Add(Macad::Occt::TopoDS_Edge^ Constr, Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order, bool IsBound);
	int Add(Macad::Occt::TopoDS_Edge^ Constr, Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order);
	int Add(Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order);
	int Add(Macad::Occt::Pnt Point);
	int Add(double U, double V, Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order);
	void Build();
	bool IsDone();
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
	double G0Error();
	double G1Error();
	double G2Error();
	double G0Error(int Index);
	double G1Error(int Index);
	double G2Error(int Index);
}; // class BRepOffsetAPI_MakeFilling

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeOffset
//---------------------------------------------------------------------
public ref class BRepOffsetAPI_MakeOffset sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepOffsetAPI_MakeOffset_h
public:
	Include_BRepOffsetAPI_MakeOffset_h
#endif

public:
	BRepOffsetAPI_MakeOffset(::BRepOffsetAPI_MakeOffset* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepOffsetAPI_MakeOffset(::BRepOffsetAPI_MakeOffset& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepOffsetAPI_MakeOffset* NativeInstance
	{
		::BRepOffsetAPI_MakeOffset* get()
		{
			return static_cast<::BRepOffsetAPI_MakeOffset*>(_NativeInstance);
		}
	}

public:
	BRepOffsetAPI_MakeOffset();
	BRepOffsetAPI_MakeOffset(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join, bool IsOpenResult);
	BRepOffsetAPI_MakeOffset(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join);
	BRepOffsetAPI_MakeOffset(Macad::Occt::TopoDS_Face^ Spine);
	BRepOffsetAPI_MakeOffset(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::GeomAbs_JoinType Join, bool IsOpenResult);
	BRepOffsetAPI_MakeOffset(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::GeomAbs_JoinType Join);
	BRepOffsetAPI_MakeOffset(Macad::Occt::TopoDS_Wire^ Spine);
	BRepOffsetAPI_MakeOffset(Macad::Occt::BRepOffsetAPI_MakeOffset^ parameter1);
	void Init(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join, bool IsOpenResult);
	void Init(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join);
	void Init(Macad::Occt::TopoDS_Face^ Spine);
	void Init(Macad::Occt::GeomAbs_JoinType Join, bool IsOpenResult);
	void Init(Macad::Occt::GeomAbs_JoinType Join);
	void Init();
	void AddWire(Macad::Occt::TopoDS_Wire^ Spine);
	void Perform(double Offset, double Alt);
	void Perform(double Offset);
	void Build();
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepOffsetAPI_MakeOffset

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeOffsetShape
//---------------------------------------------------------------------
public ref class BRepOffsetAPI_MakeOffsetShape : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepOffsetAPI_MakeOffsetShape_h
public:
	Include_BRepOffsetAPI_MakeOffsetShape_h
#endif

protected:
	BRepOffsetAPI_MakeOffsetShape(InitMode init)
		: Macad::Occt::BRepBuilderAPI_MakeShape( init )
	{}

public:
	BRepOffsetAPI_MakeOffsetShape(::BRepOffsetAPI_MakeOffsetShape* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepOffsetAPI_MakeOffsetShape(::BRepOffsetAPI_MakeOffsetShape& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepOffsetAPI_MakeOffsetShape* NativeInstance
	{
		::BRepOffsetAPI_MakeOffsetShape* get()
		{
			return static_cast<::BRepOffsetAPI_MakeOffsetShape*>(_NativeInstance);
		}
	}

public:
	//---------------------------------------------------------------------
	//  Enum  OffsetAlgo_Type
	//---------------------------------------------------------------------
	enum class OffsetAlgo_Type
	{
		OffsetAlgo_NONE = 0,
		OffsetAlgo_JOIN = 1,
		OffsetAlgo_SIMPLE = 2
	}; // enum  class OffsetAlgo_Type

	BRepOffsetAPI_MakeOffsetShape();
	BRepOffsetAPI_MakeOffsetShape(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool RemoveIntEdges);
	BRepOffsetAPI_MakeOffsetShape(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join);
	BRepOffsetAPI_MakeOffsetShape(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter);
	BRepOffsetAPI_MakeOffsetShape(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection);
	BRepOffsetAPI_MakeOffsetShape(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode);
	BRepOffsetAPI_MakeOffsetShape(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol);
	BRepOffsetAPI_MakeOffsetShape(Macad::Occt::BRepOffsetAPI_MakeOffsetShape^ parameter1);
	void PerformBySimple(Macad::Occt::TopoDS_Shape^ theS, double theOffsetValue);
	void PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool RemoveIntEdges);
	void PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join);
	void PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter);
	void PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection);
	void PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode);
	void PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol);
	Macad::Occt::BRepOffset_MakeOffset^ MakeOffset();
	void Build();
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ S);
	bool IsDeleted(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::GeomAbs_JoinType GetJoinType();
}; // class BRepOffsetAPI_MakeOffsetShape

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakePipe
//---------------------------------------------------------------------
public ref class BRepOffsetAPI_MakePipe sealed : public Macad::Occt::BRepPrimAPI_MakeSweep
{

#ifdef Include_BRepOffsetAPI_MakePipe_h
public:
	Include_BRepOffsetAPI_MakePipe_h
#endif

public:
	BRepOffsetAPI_MakePipe(::BRepOffsetAPI_MakePipe* nativeInstance)
		: Macad::Occt::BRepPrimAPI_MakeSweep( nativeInstance )
	{}

	BRepOffsetAPI_MakePipe(::BRepOffsetAPI_MakePipe& nativeInstance)
		: Macad::Occt::BRepPrimAPI_MakeSweep( nativeInstance )
	{}

	property ::BRepOffsetAPI_MakePipe* NativeInstance
	{
		::BRepOffsetAPI_MakePipe* get()
		{
			return static_cast<::BRepOffsetAPI_MakePipe*>(_NativeInstance);
		}
	}

public:
	BRepOffsetAPI_MakePipe(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Shape^ Profile);
	/* Method skipped due to unknown mapping: void BRepOffsetAPI_MakePipe(TopoDS_Wire Spine, TopoDS_Shape Profile, GeomFill_Trihedron aMode, Standard_Boolean ForceApproxC1, ) */
	/* Method skipped due to unknown mapping: void BRepOffsetAPI_MakePipe(TopoDS_Wire Spine, TopoDS_Shape Profile, GeomFill_Trihedron aMode, Standard_Boolean ForceApproxC1, ) */
	BRepOffsetAPI_MakePipe(Macad::Occt::BRepOffsetAPI_MakePipe^ parameter1);
	/* Method skipped due to unknown mapping: BRepFill_Pipe Pipe() */
	void Build();
	Macad::Occt::TopoDS_Shape^ FirstShape();
	Macad::Occt::TopoDS_Shape^ LastShape();
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopoDS_Shape^ Generated(Macad::Occt::TopoDS_Shape^ SSpine, Macad::Occt::TopoDS_Shape^ SProfile);
	double ErrorOnSurface();
}; // class BRepOffsetAPI_MakePipe

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakePipeShell
//---------------------------------------------------------------------
public ref class BRepOffsetAPI_MakePipeShell sealed : public Macad::Occt::BRepPrimAPI_MakeSweep
{

#ifdef Include_BRepOffsetAPI_MakePipeShell_h
public:
	Include_BRepOffsetAPI_MakePipeShell_h
#endif

public:
	BRepOffsetAPI_MakePipeShell(::BRepOffsetAPI_MakePipeShell* nativeInstance)
		: Macad::Occt::BRepPrimAPI_MakeSweep( nativeInstance )
	{}

	BRepOffsetAPI_MakePipeShell(::BRepOffsetAPI_MakePipeShell& nativeInstance)
		: Macad::Occt::BRepPrimAPI_MakeSweep( nativeInstance )
	{}

	property ::BRepOffsetAPI_MakePipeShell* NativeInstance
	{
		::BRepOffsetAPI_MakePipeShell* get()
		{
			return static_cast<::BRepOffsetAPI_MakePipeShell*>(_NativeInstance);
		}
	}

public:
	BRepOffsetAPI_MakePipeShell(Macad::Occt::TopoDS_Wire^ Spine);
	BRepOffsetAPI_MakePipeShell(Macad::Occt::BRepOffsetAPI_MakePipeShell^ parameter1);
	void SetMode(bool IsFrenet);
	void SetMode();
	void SetDiscreteMode();
	void SetMode(Macad::Occt::Ax2 Axe);
	void SetMode(Macad::Occt::Dir BiNormal);
	bool SetMode(Macad::Occt::TopoDS_Shape^ SpineSupport);
	/* Method skipped due to unknown mapping: void SetMode(TopoDS_Wire AuxiliarySpine, Standard_Boolean CurvilinearEquivalence, BRepFill_TypeOfContact KeepContact, ) */
	void SetMode(Macad::Occt::TopoDS_Wire^ AuxiliarySpine, bool CurvilinearEquivalence);
	void Add(Macad::Occt::TopoDS_Shape^ Profile, bool WithContact, bool WithCorrection);
	void Add(Macad::Occt::TopoDS_Shape^ Profile, bool WithContact);
	void Add(Macad::Occt::TopoDS_Shape^ Profile);
	void Add(Macad::Occt::TopoDS_Shape^ Profile, Macad::Occt::TopoDS_Vertex^ Location, bool WithContact, bool WithCorrection);
	void Add(Macad::Occt::TopoDS_Shape^ Profile, Macad::Occt::TopoDS_Vertex^ Location, bool WithContact);
	void Add(Macad::Occt::TopoDS_Shape^ Profile, Macad::Occt::TopoDS_Vertex^ Location);
	/* Method skipped due to unknown mapping: void SetLaw(TopoDS_Shape Profile, Law_Function L, Standard_Boolean WithContact, Standard_Boolean WithCorrection, ) */
	/* Method skipped due to unknown mapping: void SetLaw(TopoDS_Shape Profile, Law_Function L, Standard_Boolean WithContact, Standard_Boolean WithCorrection, ) */
	/* Method skipped due to unknown mapping: void SetLaw(TopoDS_Shape Profile, Law_Function L, Standard_Boolean WithContact, Standard_Boolean WithCorrection, ) */
	/* Method skipped due to unknown mapping: void SetLaw(TopoDS_Shape Profile, Law_Function L, TopoDS_Vertex Location, Standard_Boolean WithContact, Standard_Boolean WithCorrection, ) */
	/* Method skipped due to unknown mapping: void SetLaw(TopoDS_Shape Profile, Law_Function L, TopoDS_Vertex Location, Standard_Boolean WithContact, Standard_Boolean WithCorrection, ) */
	/* Method skipped due to unknown mapping: void SetLaw(TopoDS_Shape Profile, Law_Function L, TopoDS_Vertex Location, Standard_Boolean WithContact, Standard_Boolean WithCorrection, ) */
	void Delete(Macad::Occt::TopoDS_Shape^ Profile);
	bool IsReady();
	Macad::Occt::BRepBuilderAPI_PipeError GetStatus();
	void SetTolerance(double Tol3d, double BoundTol, double TolAngular);
	void SetTolerance(double Tol3d, double BoundTol);
	void SetTolerance(double Tol3d);
	void SetTolerance();
	void SetMaxDegree(int NewMaxDegree);
	void SetMaxSegments(int NewMaxSegments);
	void SetForceApproxC1(bool ForceApproxC1);
	void SetTransitionMode(Macad::Occt::BRepBuilderAPI_TransitionMode Mode);
	void SetTransitionMode();
	void Simulate(int NumberOfSection, Macad::Occt::TopTools_ListOfShape^ Result);
	void Build();
	bool MakeSolid();
	Macad::Occt::TopoDS_Shape^ FirstShape();
	Macad::Occt::TopoDS_Shape^ LastShape();
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
	double ErrorOnSurface();
	void Profiles(Macad::Occt::TopTools_ListOfShape^ theProfiles);
	Macad::Occt::TopoDS_Wire^ Spine();
}; // class BRepOffsetAPI_MakePipeShell

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeThickSolid
//---------------------------------------------------------------------
public ref class BRepOffsetAPI_MakeThickSolid sealed : public Macad::Occt::BRepOffsetAPI_MakeOffsetShape
{

#ifdef Include_BRepOffsetAPI_MakeThickSolid_h
public:
	Include_BRepOffsetAPI_MakeThickSolid_h
#endif

public:
	BRepOffsetAPI_MakeThickSolid(::BRepOffsetAPI_MakeThickSolid* nativeInstance)
		: Macad::Occt::BRepOffsetAPI_MakeOffsetShape( nativeInstance )
	{}

	BRepOffsetAPI_MakeThickSolid(::BRepOffsetAPI_MakeThickSolid& nativeInstance)
		: Macad::Occt::BRepOffsetAPI_MakeOffsetShape( nativeInstance )
	{}

	property ::BRepOffsetAPI_MakeThickSolid* NativeInstance
	{
		::BRepOffsetAPI_MakeThickSolid* get()
		{
			return static_cast<::BRepOffsetAPI_MakeThickSolid*>(_NativeInstance);
		}
	}

public:
	BRepOffsetAPI_MakeThickSolid();
	BRepOffsetAPI_MakeThickSolid(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool RemoveIntEdges);
	BRepOffsetAPI_MakeThickSolid(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join);
	BRepOffsetAPI_MakeThickSolid(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter);
	BRepOffsetAPI_MakeThickSolid(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection);
	BRepOffsetAPI_MakeThickSolid(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode);
	BRepOffsetAPI_MakeThickSolid(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol);
	BRepOffsetAPI_MakeThickSolid(Macad::Occt::BRepOffsetAPI_MakeThickSolid^ parameter1);
	void MakeThickSolidBySimple(Macad::Occt::TopoDS_Shape^ theS, double theOffsetValue);
	void MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool RemoveIntEdges);
	void MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join);
	void MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter);
	void MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection);
	void MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode);
	void MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol);
	void Build();
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepOffsetAPI_MakeThickSolid

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MiddlePath
//---------------------------------------------------------------------
public ref class BRepOffsetAPI_MiddlePath sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepOffsetAPI_MiddlePath_h
public:
	Include_BRepOffsetAPI_MiddlePath_h
#endif

public:
	BRepOffsetAPI_MiddlePath(::BRepOffsetAPI_MiddlePath* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepOffsetAPI_MiddlePath(::BRepOffsetAPI_MiddlePath& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepOffsetAPI_MiddlePath* NativeInstance
	{
		::BRepOffsetAPI_MiddlePath* get()
		{
			return static_cast<::BRepOffsetAPI_MiddlePath*>(_NativeInstance);
		}
	}

public:
	BRepOffsetAPI_MiddlePath(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopoDS_Shape^ StartShape, Macad::Occt::TopoDS_Shape^ EndShape);
	BRepOffsetAPI_MiddlePath(Macad::Occt::BRepOffsetAPI_MiddlePath^ parameter1);
	void Build();
}; // class BRepOffsetAPI_MiddlePath

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_NormalProjection
//---------------------------------------------------------------------
public ref class BRepOffsetAPI_NormalProjection sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepOffsetAPI_NormalProjection_h
public:
	Include_BRepOffsetAPI_NormalProjection_h
#endif

public:
	BRepOffsetAPI_NormalProjection(::BRepOffsetAPI_NormalProjection* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepOffsetAPI_NormalProjection(::BRepOffsetAPI_NormalProjection& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepOffsetAPI_NormalProjection* NativeInstance
	{
		::BRepOffsetAPI_NormalProjection* get()
		{
			return static_cast<::BRepOffsetAPI_NormalProjection*>(_NativeInstance);
		}
	}

public:
	BRepOffsetAPI_NormalProjection();
	BRepOffsetAPI_NormalProjection(Macad::Occt::TopoDS_Shape^ S);
	BRepOffsetAPI_NormalProjection(Macad::Occt::BRepOffsetAPI_NormalProjection^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ S);
	void Add(Macad::Occt::TopoDS_Shape^ ToProj);
	void SetParams(double Tol3D, double Tol2D, Macad::Occt::GeomAbs_Shape InternalContinuity, int MaxDegree, int MaxSeg);
	void SetMaxDistance(double MaxDist);
	void SetLimit(bool FaceBoundaries);
	void SetLimit();
	void Compute3d(bool With3d);
	void Compute3d();
	void Build();
	bool IsDone();
	Macad::Occt::TopoDS_Shape^ Projection();
	Macad::Occt::TopoDS_Shape^ Couple(Macad::Occt::TopoDS_Edge^ E);
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopoDS_Shape^ Ancestor(Macad::Occt::TopoDS_Edge^ E);
	bool BuildWire(Macad::Occt::TopTools_ListOfShape^ Liste);
}; // class BRepOffsetAPI_NormalProjection

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_ThruSections
//---------------------------------------------------------------------
public ref class BRepOffsetAPI_ThruSections sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepOffsetAPI_ThruSections_h
public:
	Include_BRepOffsetAPI_ThruSections_h
#endif

public:
	BRepOffsetAPI_ThruSections(::BRepOffsetAPI_ThruSections* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepOffsetAPI_ThruSections(::BRepOffsetAPI_ThruSections& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepOffsetAPI_ThruSections* NativeInstance
	{
		::BRepOffsetAPI_ThruSections* get()
		{
			return static_cast<::BRepOffsetAPI_ThruSections*>(_NativeInstance);
		}
	}

public:
	BRepOffsetAPI_ThruSections(bool isSolid, bool ruled, double pres3d);
	BRepOffsetAPI_ThruSections(bool isSolid, bool ruled);
	BRepOffsetAPI_ThruSections(bool isSolid);
	BRepOffsetAPI_ThruSections(Macad::Occt::BRepOffsetAPI_ThruSections^ parameter1);
	void Init(bool isSolid, bool ruled, double pres3d);
	void Init(bool isSolid, bool ruled);
	void Init(bool isSolid);
	void Init();
	void AddWire(Macad::Occt::TopoDS_Wire^ wire);
	void AddVertex(Macad::Occt::TopoDS_Vertex^ aVertex);
	void CheckCompatibility(bool check);
	void CheckCompatibility();
	void SetSmoothing(bool UseSmoothing);
	/* Method skipped due to unknown mapping: void SetParType(Approx_ParametrizationType ParType, ) */
	void SetContinuity(Macad::Occt::GeomAbs_Shape C);
	void SetCriteriumWeight(double W1, double W2, double W3);
	void SetMaxDegree(int MaxDeg);
	/* Method skipped due to unknown mapping: Approx_ParametrizationType ParType() */
	Macad::Occt::GeomAbs_Shape Continuity();
	int MaxDegree();
	bool UseSmoothing();
	void CriteriumWeight(double% W1, double% W2, double% W3);
	void Build();
	Macad::Occt::TopoDS_Shape^ FirstShape();
	Macad::Occt::TopoDS_Shape^ LastShape();
	Macad::Occt::TopoDS_Shape^ GeneratedFace(Macad::Occt::TopoDS_Shape^ Edge);
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopTools_ListOfShape^ Wires();
}; // class BRepOffsetAPI_ThruSections

}; // namespace Occt
}; // namespace Macad
