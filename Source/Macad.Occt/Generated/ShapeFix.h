// Generated wrapper code for package ShapeFix

#pragma once

#include "ShapeFix.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ShapeFix_SequenceOfWireSegment
//---------------------------------------------------------------------
public ref class ShapeFix_SequenceOfWireSegment sealed : public BaseClass<::ShapeFix_SequenceOfWireSegment>
{

#ifdef Include_ShapeFix_SequenceOfWireSegment_h
public:
	Include_ShapeFix_SequenceOfWireSegment_h
#endif

public:
	ShapeFix_SequenceOfWireSegment(::ShapeFix_SequenceOfWireSegment* nativeInstance)
		: BaseClass<::ShapeFix_SequenceOfWireSegment>( nativeInstance, true )
	{}

	ShapeFix_SequenceOfWireSegment(::ShapeFix_SequenceOfWireSegment& nativeInstance)
		: BaseClass<::ShapeFix_SequenceOfWireSegment>( &nativeInstance, false )
	{}

	property ::ShapeFix_SequenceOfWireSegment* NativeInstance
	{
		::ShapeFix_SequenceOfWireSegment* get()
		{
			return static_cast<::ShapeFix_SequenceOfWireSegment*>(_NativeInstance);
		}
	}

public:
	ShapeFix_SequenceOfWireSegment();
	ShapeFix_SequenceOfWireSegment(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	ShapeFix_SequenceOfWireSegment(Macad::Occt::ShapeFix_SequenceOfWireSegment^ theOther);
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
	Macad::Occt::ShapeFix_SequenceOfWireSegment^ Assign(Macad::Occt::ShapeFix_SequenceOfWireSegment^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::ShapeFix_WireSegment^ theItem);
	void Append(Macad::Occt::ShapeFix_SequenceOfWireSegment^ theSeq);
	void Prepend(Macad::Occt::ShapeFix_WireSegment^ theItem);
	void Prepend(Macad::Occt::ShapeFix_SequenceOfWireSegment^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::ShapeFix_WireSegment^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::ShapeFix_SequenceOfWireSegment^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, ShapeFix_WireSegment theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::ShapeFix_SequenceOfWireSegment^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::ShapeFix_WireSegment^ theItem);
	void Split(int theIndex, Macad::Occt::ShapeFix_SequenceOfWireSegment^ theSeq);
	Macad::Occt::ShapeFix_WireSegment^ First();
	Macad::Occt::ShapeFix_WireSegment^ ChangeFirst();
	Macad::Occt::ShapeFix_WireSegment^ Last();
	Macad::Occt::ShapeFix_WireSegment^ ChangeLast();
	Macad::Occt::ShapeFix_WireSegment^ Value(int theIndex);
	Macad::Occt::ShapeFix_WireSegment^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::ShapeFix_WireSegment^ theItem);
}; // class ShapeFix_SequenceOfWireSegment

//---------------------------------------------------------------------
//  Class  ShapeFix_DataMapOfShapeBox2d
//---------------------------------------------------------------------
public ref class ShapeFix_DataMapOfShapeBox2d sealed : public BaseClass<::ShapeFix_DataMapOfShapeBox2d>
{

#ifdef Include_ShapeFix_DataMapOfShapeBox2d_h
public:
	Include_ShapeFix_DataMapOfShapeBox2d_h
#endif

public:
	ShapeFix_DataMapOfShapeBox2d(::ShapeFix_DataMapOfShapeBox2d* nativeInstance)
		: BaseClass<::ShapeFix_DataMapOfShapeBox2d>( nativeInstance, true )
	{}

	ShapeFix_DataMapOfShapeBox2d(::ShapeFix_DataMapOfShapeBox2d& nativeInstance)
		: BaseClass<::ShapeFix_DataMapOfShapeBox2d>( &nativeInstance, false )
	{}

	property ::ShapeFix_DataMapOfShapeBox2d* NativeInstance
	{
		::ShapeFix_DataMapOfShapeBox2d* get()
		{
			return static_cast<::ShapeFix_DataMapOfShapeBox2d*>(_NativeInstance);
		}
	}

public:
	ShapeFix_DataMapOfShapeBox2d();
	ShapeFix_DataMapOfShapeBox2d(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	ShapeFix_DataMapOfShapeBox2d(int theNbBuckets);
	ShapeFix_DataMapOfShapeBox2d(Macad::Occt::ShapeFix_DataMapOfShapeBox2d^ theOther);
	void Exchange(Macad::Occt::ShapeFix_DataMapOfShapeBox2d^ theOther);
	Macad::Occt::ShapeFix_DataMapOfShapeBox2d^ Assign(Macad::Occt::ShapeFix_DataMapOfShapeBox2d^ theOther);
	Macad::Occt::Bnd_Box2d^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::Bnd_Box2d^ theItem);
	bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
	bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
	Macad::Occt::Bnd_Box2d^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
	Macad::Occt::Bnd_Box2d^ Find(Macad::Occt::TopoDS_Shape^ theKey);
	bool Find(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::Bnd_Box2d^ theValue);
	Macad::Occt::Bnd_Box2d^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
	Macad::Occt::Bnd_Box2d^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class ShapeFix_DataMapOfShapeBox2d

//---------------------------------------------------------------------
//  Class  ShapeFix_Root
//---------------------------------------------------------------------
public ref class ShapeFix_Root : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeFix_Root_h
public:
	Include_ShapeFix_Root_h
#endif

protected:
	ShapeFix_Root(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	ShapeFix_Root(::ShapeFix_Root* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeFix_Root(::ShapeFix_Root& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeFix_Root* NativeInstance
	{
		::ShapeFix_Root* get()
		{
			return static_cast<::ShapeFix_Root*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeFix_Root^ CreateDowncasted(::ShapeFix_Root* instance);

public:
	ShapeFix_Root();
	ShapeFix_Root(Macad::Occt::ShapeFix_Root^ parameter1);
	void Set(Macad::Occt::ShapeFix_Root^ Root);
	void SetContext(Macad::Occt::ShapeBuild_ReShape^ context);
	Macad::Occt::ShapeBuild_ReShape^ Context();
	void SetMsgRegistrator(Macad::Occt::ShapeExtend_BasicMsgRegistrator^ msgreg);
	Macad::Occt::ShapeExtend_BasicMsgRegistrator^ MsgRegistrator();
	void SetPrecision(double preci);
	double Precision();
	void SetMinTolerance(double mintol);
	double MinTolerance();
	void SetMaxTolerance(double maxtol);
	double MaxTolerance();
	double LimitTolerance(double toler);
	void SendMsg(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity);
	void SendMsg(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message);
	void SendMsg(Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity);
	void SendMsg(Macad::Occt::Message_Msg^ message);
	void SendWarning(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message);
	void SendWarning(Macad::Occt::Message_Msg^ message);
	void SendFail(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message);
	void SendFail(Macad::Occt::Message_Msg^ message);
}; // class ShapeFix_Root

//---------------------------------------------------------------------
//  Class  ShapeFix_EdgeProjAux
//---------------------------------------------------------------------
public ref class ShapeFix_EdgeProjAux sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeFix_EdgeProjAux_h
public:
	Include_ShapeFix_EdgeProjAux_h
#endif

public:
	ShapeFix_EdgeProjAux(::ShapeFix_EdgeProjAux* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeFix_EdgeProjAux(::ShapeFix_EdgeProjAux& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeFix_EdgeProjAux* NativeInstance
	{
		::ShapeFix_EdgeProjAux* get()
		{
			return static_cast<::ShapeFix_EdgeProjAux*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeFix_EdgeProjAux^ CreateDowncasted(::ShapeFix_EdgeProjAux* instance);

public:
	ShapeFix_EdgeProjAux();
	ShapeFix_EdgeProjAux(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E);
	ShapeFix_EdgeProjAux(Macad::Occt::ShapeFix_EdgeProjAux^ parameter1);
	void Init(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E);
	void Compute(double preci);
	bool IsFirstDone();
	bool IsLastDone();
	double FirstParam();
	double LastParam();
	bool IsIso(Macad::Occt::Geom2d_Curve^ C);
}; // class ShapeFix_EdgeProjAux

//---------------------------------------------------------------------
//  Class  ShapeFix_Edge
//---------------------------------------------------------------------
public ref class ShapeFix_Edge sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeFix_Edge_h
public:
	Include_ShapeFix_Edge_h
#endif

public:
	ShapeFix_Edge(::ShapeFix_Edge* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeFix_Edge(::ShapeFix_Edge& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeFix_Edge* NativeInstance
	{
		::ShapeFix_Edge* get()
		{
			return static_cast<::ShapeFix_Edge*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeFix_Edge^ CreateDowncasted(::ShapeFix_Edge* instance);

public:
	ShapeFix_Edge();
	ShapeFix_Edge(Macad::Occt::ShapeFix_Edge^ parameter1);
	Macad::Occt::ShapeConstruct_ProjectCurveOnSurface^ Projector();
	bool FixRemovePCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face);
	bool FixRemovePCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location);
	bool FixRemoveCurve3d(Macad::Occt::TopoDS_Edge^ edge);
	bool FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool isSeam, double prec);
	bool FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool isSeam);
	bool FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool isSeam, double prec);
	bool FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool isSeam);
	bool FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool isSeam, Macad::Occt::ShapeAnalysis_Surface^ surfana, double prec);
	bool FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool isSeam, Macad::Occt::ShapeAnalysis_Surface^ surfana);
	bool FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool isSeam, Macad::Occt::ShapeAnalysis_Surface^ surfana, double prec);
	bool FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool isSeam, Macad::Occt::ShapeAnalysis_Surface^ surfana);
	bool FixAddCurve3d(Macad::Occt::TopoDS_Edge^ edge);
	bool FixVertexTolerance(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face);
	bool FixVertexTolerance(Macad::Occt::TopoDS_Edge^ edge);
	bool FixReversed2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face);
	bool FixReversed2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location);
	bool FixSameParameter(Macad::Occt::TopoDS_Edge^ edge, double tolerance);
	bool FixSameParameter(Macad::Occt::TopoDS_Edge^ edge);
	bool FixSameParameter(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, double tolerance);
	bool FixSameParameter(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face);
	bool Status(Macad::Occt::ShapeExtend_Status status);
	void SetContext(Macad::Occt::ShapeBuild_ReShape^ context);
	Macad::Occt::ShapeBuild_ReShape^ Context();
}; // class ShapeFix_Edge

//---------------------------------------------------------------------
//  Class  ShapeFix_Wire
//---------------------------------------------------------------------
public ref class ShapeFix_Wire sealed : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_Wire_h
public:
	Include_ShapeFix_Wire_h
#endif

public:
	ShapeFix_Wire(::ShapeFix_Wire* nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	ShapeFix_Wire(::ShapeFix_Wire& nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	property ::ShapeFix_Wire* NativeInstance
	{
		::ShapeFix_Wire* get()
		{
			return static_cast<::ShapeFix_Wire*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeFix_Wire^ CreateDowncasted(::ShapeFix_Wire* instance);

public:
	ShapeFix_Wire();
	ShapeFix_Wire(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TopoDS_Face^ face, double prec);
	ShapeFix_Wire(Macad::Occt::ShapeFix_Wire^ parameter1);
	void ClearModes();
	void ClearStatuses();
	void Init(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TopoDS_Face^ face, double prec);
	void Init(Macad::Occt::ShapeAnalysis_Wire^ saw);
	void Load(Macad::Occt::TopoDS_Wire^ wire);
	void Load(Macad::Occt::ShapeExtend_WireData^ sbwd);
	void SetFace(Macad::Occt::TopoDS_Face^ face);
	void SetSurface(Macad::Occt::Geom_Surface^ surf);
	void SetSurface(Macad::Occt::Geom_Surface^ surf, Macad::Occt::TopLoc_Location^ loc);
	void SetPrecision(double prec);
	void SetMaxTailAngle(double theMaxTailAngle);
	void SetMaxTailWidth(double theMaxTailWidth);
	bool IsLoaded();
	bool IsReady();
	int NbEdges();
	Macad::Occt::TopoDS_Wire^ Wire();
	Macad::Occt::TopoDS_Wire^ WireAPIMake();
	Macad::Occt::ShapeAnalysis_Wire^ Analyzer();
	Macad::Occt::ShapeExtend_WireData^ WireData();
	Macad::Occt::TopoDS_Face^ Face();
	bool ModifyTopologyMode();
	bool ModifyGeometryMode();
	int ModifyRemoveLoopMode();
	bool ClosedWireMode();
	bool PreferencePCurveMode();
	bool FixGapsByRangesMode();
	int FixReorderMode();
	int FixSmallMode();
	int FixConnectedMode();
	int FixEdgeCurvesMode();
	int FixDegeneratedMode();
	int FixSelfIntersectionMode();
	int FixLackingMode();
	int FixGaps3dMode();
	int FixGaps2dMode();
	int FixReversed2dMode();
	int FixRemovePCurveMode();
	int FixAddPCurveMode();
	int FixRemoveCurve3dMode();
	int FixAddCurve3dMode();
	int FixSeamMode();
	int FixShiftedMode();
	int FixSameParameterMode();
	int FixVertexToleranceMode();
	int FixNotchedEdgesMode();
	int FixSelfIntersectingEdgeMode();
	int FixIntersectingEdgesMode();
	int FixNonAdjacentIntersectingEdgesMode();
	int FixTailMode();
	bool Perform();
	bool FixReorder();
	int FixSmall(bool lockvtx, double precsmall);
	int FixSmall(bool lockvtx);
	bool FixConnected(double prec);
	bool FixConnected();
	bool FixEdgeCurves();
	bool FixDegenerated();
	bool FixSelfIntersection();
	bool FixLacking(bool force);
	bool FixLacking();
	bool FixClosed(double prec);
	bool FixClosed();
	bool FixGaps3d();
	bool FixGaps2d();
	bool FixReorder(Macad::Occt::ShapeAnalysis_WireOrder^ wi);
	bool FixSmall(int num, bool lockvtx, double precsmall);
	bool FixConnected(int num, double prec);
	bool FixSeam(int num);
	bool FixShifted();
	bool FixDegenerated(int num);
	bool FixLacking(int num, bool force);
	bool FixLacking(int num);
	bool FixNotchedEdges();
	bool FixGap3d(int num, bool convert);
	bool FixGap3d(int num);
	bool FixGap2d(int num, bool convert);
	bool FixGap2d(int num);
	bool FixTails();
	bool StatusReorder(Macad::Occt::ShapeExtend_Status status);
	bool StatusSmall(Macad::Occt::ShapeExtend_Status status);
	bool StatusConnected(Macad::Occt::ShapeExtend_Status status);
	bool StatusEdgeCurves(Macad::Occt::ShapeExtend_Status status);
	bool StatusDegenerated(Macad::Occt::ShapeExtend_Status status);
	bool StatusSelfIntersection(Macad::Occt::ShapeExtend_Status status);
	bool StatusLacking(Macad::Occt::ShapeExtend_Status status);
	bool StatusClosed(Macad::Occt::ShapeExtend_Status status);
	bool StatusGaps3d(Macad::Occt::ShapeExtend_Status status);
	bool StatusGaps2d(Macad::Occt::ShapeExtend_Status status);
	bool StatusNotches(Macad::Occt::ShapeExtend_Status status);
	bool StatusRemovedSegment();
	bool StatusFixTails(Macad::Occt::ShapeExtend_Status status);
	bool LastFixStatus(Macad::Occt::ShapeExtend_Status status);
	Macad::Occt::ShapeFix_Edge^ FixEdgeTool();
}; // class ShapeFix_Wire

//---------------------------------------------------------------------
//  Class  ShapeFix_Face
//---------------------------------------------------------------------
public ref class ShapeFix_Face sealed : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_Face_h
public:
	Include_ShapeFix_Face_h
#endif

public:
	ShapeFix_Face(::ShapeFix_Face* nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	ShapeFix_Face(::ShapeFix_Face& nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	property ::ShapeFix_Face* NativeInstance
	{
		::ShapeFix_Face* get()
		{
			return static_cast<::ShapeFix_Face*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeFix_Face^ CreateDowncasted(::ShapeFix_Face* instance);

public:
	ShapeFix_Face();
	ShapeFix_Face(Macad::Occt::TopoDS_Face^ face);
	ShapeFix_Face(Macad::Occt::ShapeFix_Face^ parameter1);
	void ClearModes();
	void Init(Macad::Occt::TopoDS_Face^ face);
	void Init(Macad::Occt::Geom_Surface^ surf, double preci, bool fwd);
	void Init(Macad::Occt::Geom_Surface^ surf, double preci);
	void Init(Macad::Occt::ShapeAnalysis_Surface^ surf, double preci, bool fwd);
	void Init(Macad::Occt::ShapeAnalysis_Surface^ surf, double preci);
	void SetMsgRegistrator(Macad::Occt::ShapeExtend_BasicMsgRegistrator^ msgreg);
	void SetPrecision(double preci);
	void SetMinTolerance(double mintol);
	void SetMaxTolerance(double maxtol);
	int FixWireMode();
	int FixOrientationMode();
	int FixAddNaturalBoundMode();
	int FixMissingSeamMode();
	int FixSmallAreaWireMode();
	int RemoveSmallAreaFaceMode();
	int FixIntersectingWiresMode();
	int FixLoopWiresMode();
	int FixSplitFaceMode();
	int AutoCorrectPrecisionMode();
	int FixPeriodicDegeneratedMode();
	Macad::Occt::TopoDS_Face^ Face();
	Macad::Occt::TopoDS_Shape^ Result();
	void Add(Macad::Occt::TopoDS_Wire^ wire);
	bool Perform();
	bool FixOrientation();
	bool FixOrientation(Macad::Occt::TopTools_DataMapOfShapeListOfShape^ MapWires);
	bool FixAddNaturalBound();
	bool FixMissingSeam();
	bool FixSmallAreaWire(bool theIsRemoveSmallFace);
	bool FixLoopWire(Macad::Occt::TopTools_SequenceOfShape^ aResWires);
	bool FixIntersectingWires();
	bool FixWiresTwoCoincEdges();
	bool FixSplitFace(Macad::Occt::TopTools_DataMapOfShapeListOfShape^ MapWires);
	bool FixPeriodicDegenerated();
	bool Status(Macad::Occt::ShapeExtend_Status status);
	Macad::Occt::ShapeFix_Wire^ FixWireTool();
}; // class ShapeFix_Face

//---------------------------------------------------------------------
//  Class  ShapeFix_FixSmallFace
//---------------------------------------------------------------------
public ref class ShapeFix_FixSmallFace sealed : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_FixSmallFace_h
public:
	Include_ShapeFix_FixSmallFace_h
#endif

public:
	ShapeFix_FixSmallFace(::ShapeFix_FixSmallFace* nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	ShapeFix_FixSmallFace(::ShapeFix_FixSmallFace& nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	property ::ShapeFix_FixSmallFace* NativeInstance
	{
		::ShapeFix_FixSmallFace* get()
		{
			return static_cast<::ShapeFix_FixSmallFace*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeFix_FixSmallFace^ CreateDowncasted(::ShapeFix_FixSmallFace* instance);

public:
	ShapeFix_FixSmallFace();
	ShapeFix_FixSmallFace(Macad::Occt::ShapeFix_FixSmallFace^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ S);
	void Perform();
	Macad::Occt::TopoDS_Shape^ FixSpotFace();
	bool ReplaceVerticesInCaseOfSpot(Macad::Occt::TopoDS_Face^ F, double tol);
	bool RemoveFacesInCaseOfSpot(Macad::Occt::TopoDS_Face^ F);
	Macad::Occt::TopoDS_Shape^ FixStripFace(bool wasdone);
	Macad::Occt::TopoDS_Shape^ FixStripFace();
	bool ReplaceInCaseOfStrip(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double tol);
	bool RemoveFacesInCaseOfStrip(Macad::Occt::TopoDS_Face^ F);
	Macad::Occt::TopoDS_Edge^ ComputeSharedEdgeForStripFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopoDS_Face^ F1, double tol);
	Macad::Occt::TopoDS_Shape^ FixSplitFace(Macad::Occt::TopoDS_Shape^ S);
	bool SplitOneFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Compound^ theSplittedFaces);
	Macad::Occt::TopoDS_Face^ FixFace(Macad::Occt::TopoDS_Face^ F);
	Macad::Occt::TopoDS_Shape^ FixShape();
	Macad::Occt::TopoDS_Shape^ Shape();
	bool FixPinFace(Macad::Occt::TopoDS_Face^ F);
}; // class ShapeFix_FixSmallFace

//---------------------------------------------------------------------
//  Class  ShapeFix_FixSmallSolid
//---------------------------------------------------------------------
public ref class ShapeFix_FixSmallSolid sealed : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_FixSmallSolid_h
public:
	Include_ShapeFix_FixSmallSolid_h
#endif

public:
	ShapeFix_FixSmallSolid(::ShapeFix_FixSmallSolid* nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	ShapeFix_FixSmallSolid(::ShapeFix_FixSmallSolid& nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	property ::ShapeFix_FixSmallSolid* NativeInstance
	{
		::ShapeFix_FixSmallSolid* get()
		{
			return static_cast<::ShapeFix_FixSmallSolid*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeFix_FixSmallSolid^ CreateDowncasted(::ShapeFix_FixSmallSolid* instance);

public:
	ShapeFix_FixSmallSolid();
	ShapeFix_FixSmallSolid(Macad::Occt::ShapeFix_FixSmallSolid^ parameter1);
	void SetFixMode(int theMode);
	void SetVolumeThreshold(double theThreshold);
	void SetVolumeThreshold();
	void SetWidthFactorThreshold(double theThreshold);
	void SetWidthFactorThreshold();
	Macad::Occt::TopoDS_Shape^ Remove(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::ShapeBuild_ReShape^ theContext);
	Macad::Occt::TopoDS_Shape^ Merge(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::ShapeBuild_ReShape^ theContext);
}; // class ShapeFix_FixSmallSolid

//---------------------------------------------------------------------
//  Class  ShapeFix_WireVertex
//---------------------------------------------------------------------
public ref class ShapeFix_WireVertex sealed : public BaseClass<::ShapeFix_WireVertex>
{

#ifdef Include_ShapeFix_WireVertex_h
public:
	Include_ShapeFix_WireVertex_h
#endif

public:
	ShapeFix_WireVertex(::ShapeFix_WireVertex* nativeInstance)
		: BaseClass<::ShapeFix_WireVertex>( nativeInstance, true )
	{}

	ShapeFix_WireVertex(::ShapeFix_WireVertex& nativeInstance)
		: BaseClass<::ShapeFix_WireVertex>( &nativeInstance, false )
	{}

	property ::ShapeFix_WireVertex* NativeInstance
	{
		::ShapeFix_WireVertex* get()
		{
			return static_cast<::ShapeFix_WireVertex*>(_NativeInstance);
		}
	}

public:
	ShapeFix_WireVertex();
	ShapeFix_WireVertex(Macad::Occt::ShapeFix_WireVertex^ parameter1);
	void Init(Macad::Occt::TopoDS_Wire^ wire, double preci);
	void Init(Macad::Occt::ShapeExtend_WireData^ sbwd, double preci);
	void Init(Macad::Occt::ShapeAnalysis_WireVertex^ sawv);
	Macad::Occt::ShapeAnalysis_WireVertex^ Analyzer();
	Macad::Occt::ShapeExtend_WireData^ WireData();
	Macad::Occt::TopoDS_Wire^ Wire();
	int FixSame();
	int Fix();
}; // class ShapeFix_WireVertex

//---------------------------------------------------------------------
//  Class  ShapeFix_Wireframe
//---------------------------------------------------------------------
public ref class ShapeFix_Wireframe sealed : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_Wireframe_h
public:
	Include_ShapeFix_Wireframe_h
#endif

public:
	ShapeFix_Wireframe(::ShapeFix_Wireframe* nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	ShapeFix_Wireframe(::ShapeFix_Wireframe& nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	property ::ShapeFix_Wireframe* NativeInstance
	{
		::ShapeFix_Wireframe* get()
		{
			return static_cast<::ShapeFix_Wireframe*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeFix_Wireframe^ CreateDowncasted(::ShapeFix_Wireframe* instance);

public:
	ShapeFix_Wireframe();
	ShapeFix_Wireframe(Macad::Occt::TopoDS_Shape^ shape);
	ShapeFix_Wireframe(Macad::Occt::ShapeFix_Wireframe^ parameter1);
	void ClearStatuses();
	void Load(Macad::Occt::TopoDS_Shape^ shape);
	bool FixWireGaps();
	bool FixSmallEdges();
	bool CheckSmallEdges(Macad::Occt::TopTools_MapOfShape^ theSmallEdges, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theEdgeToFaces, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theFaceWithSmall, Macad::Occt::TopTools_MapOfShape^ theMultyEdges);
	bool MergeSmallEdges(Macad::Occt::TopTools_MapOfShape^ theSmallEdges, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theEdgeToFaces, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theFaceWithSmall, Macad::Occt::TopTools_MapOfShape^ theMultyEdges, bool theModeDrop, double theLimitAngle);
	bool MergeSmallEdges(Macad::Occt::TopTools_MapOfShape^ theSmallEdges, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theEdgeToFaces, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theFaceWithSmall, Macad::Occt::TopTools_MapOfShape^ theMultyEdges, bool theModeDrop);
	bool MergeSmallEdges(Macad::Occt::TopTools_MapOfShape^ theSmallEdges, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theEdgeToFaces, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theFaceWithSmall, Macad::Occt::TopTools_MapOfShape^ theMultyEdges);
	bool StatusWireGaps(Macad::Occt::ShapeExtend_Status status);
	bool StatusSmallEdges(Macad::Occt::ShapeExtend_Status status);
	Macad::Occt::TopoDS_Shape^ Shape();
	bool ModeDropSmallEdges();
	void SetLimitAngle(double theLimitAngle);
	double LimitAngle();
}; // class ShapeFix_Wireframe

//---------------------------------------------------------------------
//  Class  ShapeFix_FreeBounds
//---------------------------------------------------------------------
public ref class ShapeFix_FreeBounds sealed : public BaseClass<::ShapeFix_FreeBounds>
{

#ifdef Include_ShapeFix_FreeBounds_h
public:
	Include_ShapeFix_FreeBounds_h
#endif

public:
	ShapeFix_FreeBounds(::ShapeFix_FreeBounds* nativeInstance)
		: BaseClass<::ShapeFix_FreeBounds>( nativeInstance, true )
	{}

	ShapeFix_FreeBounds(::ShapeFix_FreeBounds& nativeInstance)
		: BaseClass<::ShapeFix_FreeBounds>( &nativeInstance, false )
	{}

	property ::ShapeFix_FreeBounds* NativeInstance
	{
		::ShapeFix_FreeBounds* get()
		{
			return static_cast<::ShapeFix_FreeBounds*>(_NativeInstance);
		}
	}

public:
	ShapeFix_FreeBounds();
	ShapeFix_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, double sewtoler, double closetoler, bool splitclosed, bool splitopen);
	ShapeFix_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, double closetoler, bool splitclosed, bool splitopen);
	ShapeFix_FreeBounds(Macad::Occt::ShapeFix_FreeBounds^ parameter1);
	Macad::Occt::TopoDS_Compound^ GetClosedWires();
	Macad::Occt::TopoDS_Compound^ GetOpenWires();
	Macad::Occt::TopoDS_Shape^ GetShape();
}; // class ShapeFix_FreeBounds

//---------------------------------------------------------------------
//  Class  ShapeFix_FaceConnect
//---------------------------------------------------------------------
public ref class ShapeFix_FaceConnect sealed : public BaseClass<::ShapeFix_FaceConnect>
{

#ifdef Include_ShapeFix_FaceConnect_h
public:
	Include_ShapeFix_FaceConnect_h
#endif

public:
	ShapeFix_FaceConnect(::ShapeFix_FaceConnect* nativeInstance)
		: BaseClass<::ShapeFix_FaceConnect>( nativeInstance, true )
	{}

	ShapeFix_FaceConnect(::ShapeFix_FaceConnect& nativeInstance)
		: BaseClass<::ShapeFix_FaceConnect>( &nativeInstance, false )
	{}

	property ::ShapeFix_FaceConnect* NativeInstance
	{
		::ShapeFix_FaceConnect* get()
		{
			return static_cast<::ShapeFix_FaceConnect*>(_NativeInstance);
		}
	}

public:
	ShapeFix_FaceConnect();
	ShapeFix_FaceConnect(Macad::Occt::ShapeFix_FaceConnect^ parameter1);
	bool Add(Macad::Occt::TopoDS_Face^ aFirst, Macad::Occt::TopoDS_Face^ aSecond);
	Macad::Occt::TopoDS_Shell^ Build(Macad::Occt::TopoDS_Shell^ shell, double sewtoler, double fixtoler);
	void Clear();
}; // class ShapeFix_FaceConnect

//---------------------------------------------------------------------
//  Class  ShapeFix_Shell
//---------------------------------------------------------------------
public ref class ShapeFix_Shell sealed : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_Shell_h
public:
	Include_ShapeFix_Shell_h
#endif

public:
	ShapeFix_Shell(::ShapeFix_Shell* nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	ShapeFix_Shell(::ShapeFix_Shell& nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	property ::ShapeFix_Shell* NativeInstance
	{
		::ShapeFix_Shell* get()
		{
			return static_cast<::ShapeFix_Shell*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeFix_Shell^ CreateDowncasted(::ShapeFix_Shell* instance);

public:
	ShapeFix_Shell();
	ShapeFix_Shell(Macad::Occt::TopoDS_Shell^ shape);
	ShapeFix_Shell(Macad::Occt::ShapeFix_Shell^ parameter1);
	void Init(Macad::Occt::TopoDS_Shell^ shell);
	bool Perform(Macad::Occt::Message_ProgressRange^ theProgress);
	bool Perform();
	bool FixFaceOrientation(Macad::Occt::TopoDS_Shell^ shell, bool isAccountMultiConex, bool NonManifold);
	bool FixFaceOrientation(Macad::Occt::TopoDS_Shell^ shell, bool isAccountMultiConex);
	bool FixFaceOrientation(Macad::Occt::TopoDS_Shell^ shell);
	Macad::Occt::TopoDS_Shell^ Shell();
	Macad::Occt::TopoDS_Shape^ Shape();
	int NbShells();
	Macad::Occt::TopoDS_Compound^ ErrorFaces();
	bool Status(Macad::Occt::ShapeExtend_Status status);
	Macad::Occt::ShapeFix_Face^ FixFaceTool();
	void SetMsgRegistrator(Macad::Occt::ShapeExtend_BasicMsgRegistrator^ msgreg);
	void SetPrecision(double preci);
	void SetMinTolerance(double mintol);
	void SetMaxTolerance(double maxtol);
	int FixFaceMode();
	int FixOrientationMode();
	void SetNonManifoldFlag(bool isNonManifold);
}; // class ShapeFix_Shell

//---------------------------------------------------------------------
//  Class  ShapeFix_Solid
//---------------------------------------------------------------------
public ref class ShapeFix_Solid sealed : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_Solid_h
public:
	Include_ShapeFix_Solid_h
#endif

public:
	ShapeFix_Solid(::ShapeFix_Solid* nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	ShapeFix_Solid(::ShapeFix_Solid& nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	property ::ShapeFix_Solid* NativeInstance
	{
		::ShapeFix_Solid* get()
		{
			return static_cast<::ShapeFix_Solid*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeFix_Solid^ CreateDowncasted(::ShapeFix_Solid* instance);

public:
	ShapeFix_Solid();
	ShapeFix_Solid(Macad::Occt::TopoDS_Solid^ solid);
	ShapeFix_Solid(Macad::Occt::ShapeFix_Solid^ parameter1);
	void Init(Macad::Occt::TopoDS_Solid^ solid);
	bool Perform(Macad::Occt::Message_ProgressRange^ theProgress);
	bool Perform();
	Macad::Occt::TopoDS_Solid^ SolidFromShell(Macad::Occt::TopoDS_Shell^ shell);
	bool Status(Macad::Occt::ShapeExtend_Status status);
	Macad::Occt::TopoDS_Shape^ Solid();
	Macad::Occt::ShapeFix_Shell^ FixShellTool();
	void SetMsgRegistrator(Macad::Occt::ShapeExtend_BasicMsgRegistrator^ msgreg);
	void SetPrecision(double preci);
	void SetMinTolerance(double mintol);
	void SetMaxTolerance(double maxtol);
	int FixShellMode();
	int FixShellOrientationMode();
	bool CreateOpenSolidMode();
	Macad::Occt::TopoDS_Shape^ Shape();
}; // class ShapeFix_Solid

//---------------------------------------------------------------------
//  Class  ShapeFix_ShapeTolerance
//---------------------------------------------------------------------
public ref class ShapeFix_ShapeTolerance sealed : public BaseClass<::ShapeFix_ShapeTolerance>
{

#ifdef Include_ShapeFix_ShapeTolerance_h
public:
	Include_ShapeFix_ShapeTolerance_h
#endif

public:
	ShapeFix_ShapeTolerance(::ShapeFix_ShapeTolerance* nativeInstance)
		: BaseClass<::ShapeFix_ShapeTolerance>( nativeInstance, true )
	{}

	ShapeFix_ShapeTolerance(::ShapeFix_ShapeTolerance& nativeInstance)
		: BaseClass<::ShapeFix_ShapeTolerance>( &nativeInstance, false )
	{}

	property ::ShapeFix_ShapeTolerance* NativeInstance
	{
		::ShapeFix_ShapeTolerance* get()
		{
			return static_cast<::ShapeFix_ShapeTolerance*>(_NativeInstance);
		}
	}

public:
	ShapeFix_ShapeTolerance();
	ShapeFix_ShapeTolerance(Macad::Occt::ShapeFix_ShapeTolerance^ parameter1);
	bool LimitTolerance(Macad::Occt::TopoDS_Shape^ shape, double tmin, double tmax, Macad::Occt::TopAbs_ShapeEnum styp);
	bool LimitTolerance(Macad::Occt::TopoDS_Shape^ shape, double tmin, double tmax);
	bool LimitTolerance(Macad::Occt::TopoDS_Shape^ shape, double tmin);
	void SetTolerance(Macad::Occt::TopoDS_Shape^ shape, double preci, Macad::Occt::TopAbs_ShapeEnum styp);
	void SetTolerance(Macad::Occt::TopoDS_Shape^ shape, double preci);
}; // class ShapeFix_ShapeTolerance

//---------------------------------------------------------------------
//  Class  ShapeFix_Shape
//---------------------------------------------------------------------
public ref class ShapeFix_Shape sealed : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_Shape_h
public:
	Include_ShapeFix_Shape_h
#endif

public:
	ShapeFix_Shape(::ShapeFix_Shape* nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	ShapeFix_Shape(::ShapeFix_Shape& nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	property ::ShapeFix_Shape* NativeInstance
	{
		::ShapeFix_Shape* get()
		{
			return static_cast<::ShapeFix_Shape*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeFix_Shape^ CreateDowncasted(::ShapeFix_Shape* instance);

public:
	ShapeFix_Shape();
	ShapeFix_Shape(Macad::Occt::TopoDS_Shape^ shape);
	ShapeFix_Shape(Macad::Occt::ShapeFix_Shape^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ shape);
	bool Perform(Macad::Occt::Message_ProgressRange^ theProgress);
	bool Perform();
	Macad::Occt::TopoDS_Shape^ Shape();
	Macad::Occt::ShapeFix_Solid^ FixSolidTool();
	Macad::Occt::ShapeFix_Shell^ FixShellTool();
	Macad::Occt::ShapeFix_Face^ FixFaceTool();
	Macad::Occt::ShapeFix_Wire^ FixWireTool();
	Macad::Occt::ShapeFix_Edge^ FixEdgeTool();
	bool Status(Macad::Occt::ShapeExtend_Status status);
	void SetMsgRegistrator(Macad::Occt::ShapeExtend_BasicMsgRegistrator^ msgreg);
	void SetPrecision(double preci);
	void SetMinTolerance(double mintol);
	void SetMaxTolerance(double maxtol);
	int FixSolidMode();
	int FixFreeShellMode();
	int FixFreeFaceMode();
	int FixFreeWireMode();
	int FixSameParameterMode();
	int FixVertexPositionMode();
	int FixVertexTolMode();
}; // class ShapeFix_Shape

//---------------------------------------------------------------------
//  Class  ShapeFix_EdgeConnect
//---------------------------------------------------------------------
public ref class ShapeFix_EdgeConnect sealed : public BaseClass<::ShapeFix_EdgeConnect>
{

#ifdef Include_ShapeFix_EdgeConnect_h
public:
	Include_ShapeFix_EdgeConnect_h
#endif

public:
	ShapeFix_EdgeConnect(::ShapeFix_EdgeConnect* nativeInstance)
		: BaseClass<::ShapeFix_EdgeConnect>( nativeInstance, true )
	{}

	ShapeFix_EdgeConnect(::ShapeFix_EdgeConnect& nativeInstance)
		: BaseClass<::ShapeFix_EdgeConnect>( &nativeInstance, false )
	{}

	property ::ShapeFix_EdgeConnect* NativeInstance
	{
		::ShapeFix_EdgeConnect* get()
		{
			return static_cast<::ShapeFix_EdgeConnect*>(_NativeInstance);
		}
	}

public:
	ShapeFix_EdgeConnect();
	ShapeFix_EdgeConnect(Macad::Occt::ShapeFix_EdgeConnect^ parameter1);
	void Add(Macad::Occt::TopoDS_Edge^ aFirst, Macad::Occt::TopoDS_Edge^ aSecond);
	void Add(Macad::Occt::TopoDS_Shape^ aShape);
	void Build();
	void Clear();
}; // class ShapeFix_EdgeConnect

//---------------------------------------------------------------------
//  Class  ShapeFix_ComposeShell
//---------------------------------------------------------------------
public ref class ShapeFix_ComposeShell sealed : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_ComposeShell_h
public:
	Include_ShapeFix_ComposeShell_h
#endif

public:
	ShapeFix_ComposeShell(::ShapeFix_ComposeShell* nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	ShapeFix_ComposeShell(::ShapeFix_ComposeShell& nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	property ::ShapeFix_ComposeShell* NativeInstance
	{
		::ShapeFix_ComposeShell* get()
		{
			return static_cast<::ShapeFix_ComposeShell*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeFix_ComposeShell^ CreateDowncasted(::ShapeFix_ComposeShell* instance);

public:
	ShapeFix_ComposeShell();
	ShapeFix_ComposeShell(Macad::Occt::ShapeFix_ComposeShell^ parameter1);
	void Init(Macad::Occt::ShapeExtend_CompositeSurface^ Grid, Macad::Occt::TopLoc_Location^ L, Macad::Occt::TopoDS_Face^ Face, double Prec);
	bool ClosedMode();
	bool Perform();
	void SplitEdges();
	Macad::Occt::TopoDS_Shape^ Result();
	bool Status(Macad::Occt::ShapeExtend_Status status);
	void DispatchWires(Macad::Occt::TopTools_SequenceOfShape^ faces, Macad::Occt::ShapeFix_SequenceOfWireSegment^ wires);
	void SetTransferParamTool(Macad::Occt::ShapeAnalysis_TransferParameters^ TransferParam);
	Macad::Occt::ShapeAnalysis_TransferParameters^ GetTransferParamTool();
}; // class ShapeFix_ComposeShell

//---------------------------------------------------------------------
//  Class  ShapeFix_SplitCommonVertex
//---------------------------------------------------------------------
public ref class ShapeFix_SplitCommonVertex sealed : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_SplitCommonVertex_h
public:
	Include_ShapeFix_SplitCommonVertex_h
#endif

public:
	ShapeFix_SplitCommonVertex(::ShapeFix_SplitCommonVertex* nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	ShapeFix_SplitCommonVertex(::ShapeFix_SplitCommonVertex& nativeInstance)
		: Macad::Occt::ShapeFix_Root( nativeInstance )
	{}

	property ::ShapeFix_SplitCommonVertex* NativeInstance
	{
		::ShapeFix_SplitCommonVertex* get()
		{
			return static_cast<::ShapeFix_SplitCommonVertex*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeFix_SplitCommonVertex^ CreateDowncasted(::ShapeFix_SplitCommonVertex* instance);

public:
	ShapeFix_SplitCommonVertex();
	ShapeFix_SplitCommonVertex(Macad::Occt::ShapeFix_SplitCommonVertex^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ S);
	void Perform();
	Macad::Occt::TopoDS_Shape^ Shape();
}; // class ShapeFix_SplitCommonVertex

//---------------------------------------------------------------------
//  Class  ShapeFix_WireSegment
//---------------------------------------------------------------------
public ref class ShapeFix_WireSegment sealed : public BaseClass<::ShapeFix_WireSegment>
{

#ifdef Include_ShapeFix_WireSegment_h
public:
	Include_ShapeFix_WireSegment_h
#endif

public:
	ShapeFix_WireSegment(::ShapeFix_WireSegment* nativeInstance)
		: BaseClass<::ShapeFix_WireSegment>( nativeInstance, true )
	{}

	ShapeFix_WireSegment(::ShapeFix_WireSegment& nativeInstance)
		: BaseClass<::ShapeFix_WireSegment>( &nativeInstance, false )
	{}

	property ::ShapeFix_WireSegment* NativeInstance
	{
		::ShapeFix_WireSegment* get()
		{
			return static_cast<::ShapeFix_WireSegment*>(_NativeInstance);
		}
	}

public:
	ShapeFix_WireSegment();
	ShapeFix_WireSegment(Macad::Occt::ShapeExtend_WireData^ wire, Macad::Occt::TopAbs_Orientation ori);
	ShapeFix_WireSegment(Macad::Occt::ShapeExtend_WireData^ wire);
	ShapeFix_WireSegment(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TopAbs_Orientation ori);
	ShapeFix_WireSegment(Macad::Occt::TopoDS_Wire^ wire);
	ShapeFix_WireSegment(Macad::Occt::ShapeFix_WireSegment^ parameter1);
	void Clear();
	void Load(Macad::Occt::ShapeExtend_WireData^ wire);
	Macad::Occt::ShapeExtend_WireData^ WireData();
	void Orientation(Macad::Occt::TopAbs_Orientation ori);
	Macad::Occt::TopAbs_Orientation Orientation();
	Macad::Occt::TopoDS_Vertex^ FirstVertex();
	Macad::Occt::TopoDS_Vertex^ LastVertex();
	bool IsClosed();
	int NbEdges();
	Macad::Occt::TopoDS_Edge^ Edge(int i);
	void SetEdge(int i, Macad::Occt::TopoDS_Edge^ edge);
	void AddEdge(int i, Macad::Occt::TopoDS_Edge^ edge);
	void AddEdge(int i, Macad::Occt::TopoDS_Edge^ edge, int iumin, int iumax, int ivmin, int ivmax);
	void SetPatchIndex(int i, int iumin, int iumax, int ivmin, int ivmax);
	void DefineIUMin(int i, int iumin);
	void DefineIUMax(int i, int iumax);
	void DefineIVMin(int i, int ivmin);
	void DefineIVMax(int i, int ivmax);
	void GetPatchIndex(int i, int% iumin, int% iumax, int% ivmin, int% ivmax);
	bool CheckPatchIndex(int i);
	void SetVertex(Macad::Occt::TopoDS_Vertex^ theVertex);
	Macad::Occt::TopoDS_Vertex^ GetVertex();
	bool IsVertex();
}; // class ShapeFix_WireSegment

//---------------------------------------------------------------------
//  Class  ShapeFix_IntersectionTool
//---------------------------------------------------------------------
public ref class ShapeFix_IntersectionTool sealed : public BaseClass<::ShapeFix_IntersectionTool>
{

#ifdef Include_ShapeFix_IntersectionTool_h
public:
	Include_ShapeFix_IntersectionTool_h
#endif

public:
	ShapeFix_IntersectionTool(::ShapeFix_IntersectionTool* nativeInstance)
		: BaseClass<::ShapeFix_IntersectionTool>( nativeInstance, true )
	{}

	ShapeFix_IntersectionTool(::ShapeFix_IntersectionTool& nativeInstance)
		: BaseClass<::ShapeFix_IntersectionTool>( &nativeInstance, false )
	{}

	property ::ShapeFix_IntersectionTool* NativeInstance
	{
		::ShapeFix_IntersectionTool* get()
		{
			return static_cast<::ShapeFix_IntersectionTool*>(_NativeInstance);
		}
	}

public:
	ShapeFix_IntersectionTool(Macad::Occt::ShapeBuild_ReShape^ context, double preci, double maxtol);
	ShapeFix_IntersectionTool(Macad::Occt::ShapeBuild_ReShape^ context, double preci);
	ShapeFix_IntersectionTool(Macad::Occt::ShapeFix_IntersectionTool^ parameter1);
	Macad::Occt::ShapeBuild_ReShape^ Context();
	bool SplitEdge(Macad::Occt::TopoDS_Edge^ edge, double param, Macad::Occt::TopoDS_Vertex^ vert, Macad::Occt::TopoDS_Face^ face, Macad::Occt::TopoDS_Edge^ newE1, Macad::Occt::TopoDS_Edge^ newE2, double preci);
	bool CutEdge(Macad::Occt::TopoDS_Edge^ edge, double pend, double cut, Macad::Occt::TopoDS_Face^ face, bool% iscutline);
	bool FixSelfIntersectWire(Macad::Occt::ShapeExtend_WireData^ sewd, Macad::Occt::TopoDS_Face^ face, int% NbSplit, int% NbCut, int% NbRemoved);
	bool FixIntersectingWires(Macad::Occt::TopoDS_Face^ face);
}; // class ShapeFix_IntersectionTool

//---------------------------------------------------------------------
//  Class  ShapeFix_SplitTool
//---------------------------------------------------------------------
public ref class ShapeFix_SplitTool sealed : public BaseClass<::ShapeFix_SplitTool>
{

#ifdef Include_ShapeFix_SplitTool_h
public:
	Include_ShapeFix_SplitTool_h
#endif

public:
	ShapeFix_SplitTool(::ShapeFix_SplitTool* nativeInstance)
		: BaseClass<::ShapeFix_SplitTool>( nativeInstance, true )
	{}

	ShapeFix_SplitTool(::ShapeFix_SplitTool& nativeInstance)
		: BaseClass<::ShapeFix_SplitTool>( &nativeInstance, false )
	{}

	property ::ShapeFix_SplitTool* NativeInstance
	{
		::ShapeFix_SplitTool* get()
		{
			return static_cast<::ShapeFix_SplitTool*>(_NativeInstance);
		}
	}

public:
	ShapeFix_SplitTool();
	ShapeFix_SplitTool(Macad::Occt::ShapeFix_SplitTool^ parameter1);
	bool SplitEdge(Macad::Occt::TopoDS_Edge^ edge, double param, Macad::Occt::TopoDS_Vertex^ vert, Macad::Occt::TopoDS_Face^ face, Macad::Occt::TopoDS_Edge^ newE1, Macad::Occt::TopoDS_Edge^ newE2, double tol3d, double tol2d);
	bool SplitEdge(Macad::Occt::TopoDS_Edge^ edge, double param1, double param2, Macad::Occt::TopoDS_Vertex^ vert, Macad::Occt::TopoDS_Face^ face, Macad::Occt::TopoDS_Edge^ newE1, Macad::Occt::TopoDS_Edge^ newE2, double tol3d, double tol2d);
	bool CutEdge(Macad::Occt::TopoDS_Edge^ edge, double pend, double cut, Macad::Occt::TopoDS_Face^ face, bool% iscutline);
	bool SplitEdge(Macad::Occt::TopoDS_Edge^ edge, double fp, Macad::Occt::TopoDS_Vertex^ V1, double lp, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Face^ face, Macad::Occt::TopTools_SequenceOfShape^ SeqE, int% aNum, Macad::Occt::ShapeBuild_ReShape^ context, double tol3d, double tol2d);
}; // class ShapeFix_SplitTool

//---------------------------------------------------------------------
//  Class  ShapeFix
//---------------------------------------------------------------------
public ref class ShapeFix sealed : public BaseClass<::ShapeFix>
{

#ifdef Include_ShapeFix_h
public:
	Include_ShapeFix_h
#endif

public:
	ShapeFix(::ShapeFix* nativeInstance)
		: BaseClass<::ShapeFix>( nativeInstance, true )
	{}

	ShapeFix(::ShapeFix& nativeInstance)
		: BaseClass<::ShapeFix>( &nativeInstance, false )
	{}

	property ::ShapeFix* NativeInstance
	{
		::ShapeFix* get()
		{
			return static_cast<::ShapeFix*>(_NativeInstance);
		}
	}

public:
	ShapeFix();
	ShapeFix(Macad::Occt::ShapeFix^ parameter1);
	static bool SameParameter(Macad::Occt::TopoDS_Shape^ shape, bool enforce, double preci, Macad::Occt::Message_ProgressRange^ theProgress, Macad::Occt::ShapeExtend_BasicMsgRegistrator^ theMsgReg);
	static bool SameParameter(Macad::Occt::TopoDS_Shape^ shape, bool enforce, double preci, Macad::Occt::Message_ProgressRange^ theProgress);
	static bool SameParameter(Macad::Occt::TopoDS_Shape^ shape, bool enforce, double preci);
	static bool SameParameter(Macad::Occt::TopoDS_Shape^ shape, bool enforce);
	static void EncodeRegularity(Macad::Occt::TopoDS_Shape^ shape, double tolang);
	static void EncodeRegularity(Macad::Occt::TopoDS_Shape^ shape);
	static Macad::Occt::TopoDS_Shape^ RemoveSmallEdges(Macad::Occt::TopoDS_Shape^ shape, double Tolerance, Macad::Occt::ShapeBuild_ReShape^ context);
	static bool FixVertexPosition(Macad::Occt::TopoDS_Shape^ theshape, double theTolerance, Macad::Occt::ShapeBuild_ReShape^ thecontext);
	static double LeastEdgeSize(Macad::Occt::TopoDS_Shape^ theshape);
}; // class ShapeFix

}; // namespace Occt
}; // namespace Macad
