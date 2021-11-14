// Generated wrapper code for package BRepLib

#pragma once

#include "BRepLib.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  BRepLib_EdgeError
//---------------------------------------------------------------------
public enum class BRepLib_EdgeError
{
	BRepLib_EdgeDone = 0,
	BRepLib_PointProjectionFailed = 1,
	BRepLib_ParameterOutOfRange = 2,
	BRepLib_DifferentPointsOnClosedCurve = 3,
	BRepLib_PointWithInfiniteParameter = 4,
	BRepLib_DifferentsPointAndParameter = 5,
	BRepLib_LineThroughIdenticPoints = 6
}; // enum  class BRepLib_EdgeError

//---------------------------------------------------------------------
//  Enum  BRepLib_FaceError
//---------------------------------------------------------------------
public enum class BRepLib_FaceError
{
	BRepLib_FaceDone = 0,
	BRepLib_NoFace = 1,
	BRepLib_NotPlanar = 2,
	BRepLib_CurveProjectionFailed = 3,
	BRepLib_ParametersOutOfRange = 4
}; // enum  class BRepLib_FaceError

//---------------------------------------------------------------------
//  Enum  BRepLib_ShapeModification
//---------------------------------------------------------------------
public enum class BRepLib_ShapeModification
{
	BRepLib_Preserved = 0,
	BRepLib_Deleted = 1,
	BRepLib_Trimmed = 2,
	BRepLib_Merged = 3,
	BRepLib_BoundaryModified = 4
}; // enum  class BRepLib_ShapeModification

//---------------------------------------------------------------------
//  Enum  BRepLib_ShellError
//---------------------------------------------------------------------
public enum class BRepLib_ShellError
{
	BRepLib_ShellDone = 0,
	BRepLib_EmptyShell = 1,
	BRepLib_DisconnectedShell = 2,
	BRepLib_ShellParametersOutOfRange = 3
}; // enum  class BRepLib_ShellError

//---------------------------------------------------------------------
//  Enum  BRepLib_WireError
//---------------------------------------------------------------------
public enum class BRepLib_WireError
{
	BRepLib_WireDone = 0,
	BRepLib_EmptyWire = 1,
	BRepLib_DisconnectedWire = 2,
	BRepLib_NonManifoldWire = 3
}; // enum  class BRepLib_WireError

//---------------------------------------------------------------------
//  Class  BRepLib
//---------------------------------------------------------------------
public ref class BRepLib sealed : public BaseClass<::BRepLib>
{

#ifdef Include_BRepLib_h
public:
	Include_BRepLib_h
#endif

public:
	BRepLib(::BRepLib* nativeInstance)
		: BaseClass<::BRepLib>( nativeInstance, true )
	{}

	BRepLib(::BRepLib& nativeInstance)
		: BaseClass<::BRepLib>( &nativeInstance, false )
	{}

	property ::BRepLib* NativeInstance
	{
		::BRepLib* get()
		{
			return static_cast<::BRepLib*>(_NativeInstance);
		}
	}

public:
	BRepLib();
	BRepLib(Macad::Occt::BRepLib^ parameter1);
	static void Precision(double P);
	static double Precision();
	static void Plane(Macad::Occt::Geom_Plane^ P);
	static Macad::Occt::Geom_Plane^ Plane();
	static bool CheckSameRange(Macad::Occt::TopoDS_Edge^ E, double Confusion);
	static bool CheckSameRange(Macad::Occt::TopoDS_Edge^ E);
	static void SameRange(Macad::Occt::TopoDS_Edge^ E, double Tolerance);
	static void SameRange(Macad::Occt::TopoDS_Edge^ E);
	static bool BuildCurve3d(Macad::Occt::TopoDS_Edge^ E, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity, int MaxDegree, int MaxSegment);
	static bool BuildCurve3d(Macad::Occt::TopoDS_Edge^ E, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity, int MaxDegree);
	static bool BuildCurve3d(Macad::Occt::TopoDS_Edge^ E, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity);
	static bool BuildCurve3d(Macad::Occt::TopoDS_Edge^ E, double Tolerance);
	static bool BuildCurve3d(Macad::Occt::TopoDS_Edge^ E);
	static bool BuildCurves3d(Macad::Occt::TopoDS_Shape^ S, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity, int MaxDegree, int MaxSegment);
	static bool BuildCurves3d(Macad::Occt::TopoDS_Shape^ S, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity, int MaxDegree);
	static bool BuildCurves3d(Macad::Occt::TopoDS_Shape^ S, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity);
	static bool BuildCurves3d(Macad::Occt::TopoDS_Shape^ S, double Tolerance);
	static bool BuildCurves3d(Macad::Occt::TopoDS_Shape^ S);
	static void BuildPCurveForEdgeOnPlane(Macad::Occt::TopoDS_Edge^ theE, Macad::Occt::TopoDS_Face^ theF);
	static void BuildPCurveForEdgeOnPlane(Macad::Occt::TopoDS_Edge^ theE, Macad::Occt::TopoDS_Face^ theF, Macad::Occt::Geom2d_Curve^ aC2D, bool% bToUpdate);
	static bool UpdateEdgeTol(Macad::Occt::TopoDS_Edge^ E, double MinToleranceRequest, double MaxToleranceToCheck);
	static bool UpdateEdgeTolerance(Macad::Occt::TopoDS_Shape^ S, double MinToleranceRequest, double MaxToleranceToCheck);
	static void SameParameter(Macad::Occt::TopoDS_Edge^ theEdge, double Tolerance);
	static void SameParameter(Macad::Occt::TopoDS_Edge^ theEdge);
	static Macad::Occt::TopoDS_Edge^ SameParameter(Macad::Occt::TopoDS_Edge^ theEdge, double theTolerance, double% theNewTol, bool IsUseOldEdge);
	static void SameParameter(Macad::Occt::TopoDS_Shape^ S, double Tolerance, bool forced);
	static void SameParameter(Macad::Occt::TopoDS_Shape^ S, double Tolerance);
	static void SameParameter(Macad::Occt::TopoDS_Shape^ S);
	static void SameParameter(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_ReShape^ theReshaper, double Tolerance, bool forced);
	static void SameParameter(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_ReShape^ theReshaper, double Tolerance);
	static void SameParameter(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_ReShape^ theReshaper);
	static void UpdateTolerances(Macad::Occt::TopoDS_Shape^ S, bool verifyFaceTolerance);
	static void UpdateTolerances(Macad::Occt::TopoDS_Shape^ S);
	static void UpdateTolerances(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_ReShape^ theReshaper, bool verifyFaceTolerance);
	static void UpdateTolerances(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_ReShape^ theReshaper);
	static void UpdateInnerTolerances(Macad::Occt::TopoDS_Shape^ S);
	static bool OrientClosedSolid(Macad::Occt::TopoDS_Solid^ solid);
	static void EncodeRegularity(Macad::Occt::TopoDS_Shape^ S, double TolAng);
	static void EncodeRegularity(Macad::Occt::TopoDS_Shape^ S);
	static void EncodeRegularity(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ LE, double TolAng);
	static void EncodeRegularity(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ LE);
	static void EncodeRegularity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, double TolAng);
	static void EncodeRegularity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2);
	static void SortFaces(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ LF);
	static void ReverseSortFaces(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ LF);
	static bool EnsureNormalConsistency(Macad::Occt::TopoDS_Shape^ S, double theAngTol, bool ForceComputeNormals);
	static bool EnsureNormalConsistency(Macad::Occt::TopoDS_Shape^ S, double theAngTol);
	static bool EnsureNormalConsistency(Macad::Occt::TopoDS_Shape^ S);
	static void UpdateDeflection(Macad::Occt::TopoDS_Shape^ S);
	/* Method skipped due to unknown mapping: void BoundingVertex(NCollection_List<TopoDS_Shape> theLV, gp_Pnt theNewCenter, Standard_Real theNewTol, ) */
	static bool FindValidRange(Macad::Occt::Adaptor3d_Curve^ theCurve, double theTolE, double theParV1, Macad::Occt::Pnt thePntV1, double theTolV1, double theParV2, Macad::Occt::Pnt thePntV2, double theTolV2, double% theFirst, double% theLast);
	static bool FindValidRange(Macad::Occt::TopoDS_Edge^ theEdge, double% theFirst, double% theLast);
	static void ExtendFace(Macad::Occt::TopoDS_Face^ theF, double theExtVal, bool theExtUMin, bool theExtUMax, bool theExtVMin, bool theExtVMax, Macad::Occt::TopoDS_Face^ theFExtended);
}; // class BRepLib

//---------------------------------------------------------------------
//  Class  BRepLib_CheckCurveOnSurface
//---------------------------------------------------------------------
public ref class BRepLib_CheckCurveOnSurface sealed : public BaseClass<::BRepLib_CheckCurveOnSurface>
{

#ifdef Include_BRepLib_CheckCurveOnSurface_h
public:
	Include_BRepLib_CheckCurveOnSurface_h
#endif

public:
	BRepLib_CheckCurveOnSurface(::BRepLib_CheckCurveOnSurface* nativeInstance)
		: BaseClass<::BRepLib_CheckCurveOnSurface>( nativeInstance, true )
	{}

	BRepLib_CheckCurveOnSurface(::BRepLib_CheckCurveOnSurface& nativeInstance)
		: BaseClass<::BRepLib_CheckCurveOnSurface>( &nativeInstance, false )
	{}

	property ::BRepLib_CheckCurveOnSurface* NativeInstance
	{
		::BRepLib_CheckCurveOnSurface* get()
		{
			return static_cast<::BRepLib_CheckCurveOnSurface*>(_NativeInstance);
		}
	}

public:
	BRepLib_CheckCurveOnSurface();
	BRepLib_CheckCurveOnSurface(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace);
	BRepLib_CheckCurveOnSurface(Macad::Occt::BRepLib_CheckCurveOnSurface^ parameter1);
	void Init(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace);
	void Perform(bool isMultiThread);
	void Perform();
	bool IsDone();
	int ErrorStatus();
	double MaxDistance();
	double MaxParameter();
}; // class BRepLib_CheckCurveOnSurface

//---------------------------------------------------------------------
//  Class  BRepLib_Command
//---------------------------------------------------------------------
public ref class BRepLib_Command : public BaseClass<::BRepLib_Command>
{

#ifdef Include_BRepLib_Command_h
public:
	Include_BRepLib_Command_h
#endif

protected:
	BRepLib_Command(InitMode init)
		: BaseClass<::BRepLib_Command>( init )
	{}

public:
	BRepLib_Command(::BRepLib_Command* nativeInstance)
		: BaseClass<::BRepLib_Command>( nativeInstance, true )
	{}

	BRepLib_Command(::BRepLib_Command& nativeInstance)
		: BaseClass<::BRepLib_Command>( &nativeInstance, false )
	{}

	property ::BRepLib_Command* NativeInstance
	{
		::BRepLib_Command* get()
		{
			return static_cast<::BRepLib_Command*>(_NativeInstance);
		}
	}

public:
	BRepLib_Command(Macad::Occt::BRepLib_Command^ parameter1);
	bool IsDone();
	void Check();
}; // class BRepLib_Command

//---------------------------------------------------------------------
//  Class  BRepLib_FindSurface
//---------------------------------------------------------------------
public ref class BRepLib_FindSurface sealed : public BaseClass<::BRepLib_FindSurface>
{

#ifdef Include_BRepLib_FindSurface_h
public:
	Include_BRepLib_FindSurface_h
#endif

public:
	BRepLib_FindSurface(::BRepLib_FindSurface* nativeInstance)
		: BaseClass<::BRepLib_FindSurface>( nativeInstance, true )
	{}

	BRepLib_FindSurface(::BRepLib_FindSurface& nativeInstance)
		: BaseClass<::BRepLib_FindSurface>( &nativeInstance, false )
	{}

	property ::BRepLib_FindSurface* NativeInstance
	{
		::BRepLib_FindSurface* get()
		{
			return static_cast<::BRepLib_FindSurface*>(_NativeInstance);
		}
	}

public:
	BRepLib_FindSurface();
	BRepLib_FindSurface(Macad::Occt::TopoDS_Shape^ S, double Tol, bool OnlyPlane, bool OnlyClosed);
	BRepLib_FindSurface(Macad::Occt::TopoDS_Shape^ S, double Tol, bool OnlyPlane);
	BRepLib_FindSurface(Macad::Occt::TopoDS_Shape^ S, double Tol);
	BRepLib_FindSurface(Macad::Occt::TopoDS_Shape^ S);
	BRepLib_FindSurface(Macad::Occt::BRepLib_FindSurface^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ S, double Tol, bool OnlyPlane, bool OnlyClosed);
	void Init(Macad::Occt::TopoDS_Shape^ S, double Tol, bool OnlyPlane);
	void Init(Macad::Occt::TopoDS_Shape^ S, double Tol);
	void Init(Macad::Occt::TopoDS_Shape^ S);
	bool Found();
	Macad::Occt::Geom_Surface^ Surface();
	double Tolerance();
	double ToleranceReached();
	bool Existed();
	Macad::Occt::TopLoc_Location^ Location();
}; // class BRepLib_FindSurface

//---------------------------------------------------------------------
//  Class  BRepLib_FuseEdges
//---------------------------------------------------------------------
public ref class BRepLib_FuseEdges sealed : public BaseClass<::BRepLib_FuseEdges>
{

#ifdef Include_BRepLib_FuseEdges_h
public:
	Include_BRepLib_FuseEdges_h
#endif

public:
	BRepLib_FuseEdges(::BRepLib_FuseEdges* nativeInstance)
		: BaseClass<::BRepLib_FuseEdges>( nativeInstance, true )
	{}

	BRepLib_FuseEdges(::BRepLib_FuseEdges& nativeInstance)
		: BaseClass<::BRepLib_FuseEdges>( &nativeInstance, false )
	{}

	property ::BRepLib_FuseEdges* NativeInstance
	{
		::BRepLib_FuseEdges* get()
		{
			return static_cast<::BRepLib_FuseEdges*>(_NativeInstance);
		}
	}

public:
	BRepLib_FuseEdges(Macad::Occt::TopoDS_Shape^ theShape, bool PerformNow);
	BRepLib_FuseEdges(Macad::Occt::TopoDS_Shape^ theShape);
	BRepLib_FuseEdges(Macad::Occt::BRepLib_FuseEdges^ parameter1);
	void AvoidEdges(Macad::Occt::TopTools_IndexedMapOfShape^ theMapEdg);
	void SetConcatBSpl(bool theConcatBSpl);
	void SetConcatBSpl();
	void Edges(Macad::Occt::TopTools_DataMapOfIntegerListOfShape^ theMapLstEdg);
	void ResultEdges(Macad::Occt::TopTools_DataMapOfIntegerShape^ theMapEdg);
	void Faces(Macad::Occt::TopTools_DataMapOfShapeShape^ theMapFac);
	Macad::Occt::TopoDS_Shape^ Shape();
	int NbVertices();
	void Perform();
}; // class BRepLib_FuseEdges

//---------------------------------------------------------------------
//  Class  BRepLib_MakeShape
//---------------------------------------------------------------------
public ref class BRepLib_MakeShape : public Macad::Occt::BRepLib_Command
{

#ifdef Include_BRepLib_MakeShape_h
public:
	Include_BRepLib_MakeShape_h
#endif

protected:
	BRepLib_MakeShape(InitMode init)
		: Macad::Occt::BRepLib_Command( init )
	{}

public:
	BRepLib_MakeShape(::BRepLib_MakeShape* nativeInstance)
		: Macad::Occt::BRepLib_Command( nativeInstance )
	{}

	BRepLib_MakeShape(::BRepLib_MakeShape& nativeInstance)
		: Macad::Occt::BRepLib_Command( nativeInstance )
	{}

	property ::BRepLib_MakeShape* NativeInstance
	{
		::BRepLib_MakeShape* get()
		{
			return static_cast<::BRepLib_MakeShape*>(_NativeInstance);
		}
	}

public:
	BRepLib_MakeShape(Macad::Occt::BRepLib_MakeShape^ parameter1);
	void Build();
	Macad::Occt::TopoDS_Shape^ Shape();
	Macad::Occt::BRepLib_ShapeModification FaceStatus(Macad::Occt::TopoDS_Face^ F);
	bool HasDescendants(Macad::Occt::TopoDS_Face^ F);
	Macad::Occt::TopTools_ListOfShape^ DescendantFaces(Macad::Occt::TopoDS_Face^ F);
	int NbSurfaces();
	Macad::Occt::TopTools_ListOfShape^ NewFaces(int I);
	Macad::Occt::TopTools_ListOfShape^ FacesFromEdges(Macad::Occt::TopoDS_Edge^ E);
}; // class BRepLib_MakeShape

//---------------------------------------------------------------------
//  Class  BRepLib_MakeEdge
//---------------------------------------------------------------------
public ref class BRepLib_MakeEdge sealed : public Macad::Occt::BRepLib_MakeShape
{

#ifdef Include_BRepLib_MakeEdge_h
public:
	Include_BRepLib_MakeEdge_h
#endif

public:
	BRepLib_MakeEdge(::BRepLib_MakeEdge* nativeInstance)
		: Macad::Occt::BRepLib_MakeShape( nativeInstance )
	{}

	BRepLib_MakeEdge(::BRepLib_MakeEdge& nativeInstance)
		: Macad::Occt::BRepLib_MakeShape( nativeInstance )
	{}

	property ::BRepLib_MakeEdge* NativeInstance
	{
		::BRepLib_MakeEdge* get()
		{
			return static_cast<::BRepLib_MakeEdge*>(_NativeInstance);
		}
	}

public:
	BRepLib_MakeEdge();
	BRepLib_MakeEdge(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepLib_MakeEdge(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	BRepLib_MakeEdge(Macad::Occt::gp_Lin^ L);
	BRepLib_MakeEdge(Macad::Occt::gp_Lin^ L, double p1, double p2);
	BRepLib_MakeEdge(Macad::Occt::gp_Lin^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	BRepLib_MakeEdge(Macad::Occt::gp_Lin^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepLib_MakeEdge(Macad::Occt::gp_Circ^ L);
	BRepLib_MakeEdge(Macad::Occt::gp_Circ^ L, double p1, double p2);
	BRepLib_MakeEdge(Macad::Occt::gp_Circ^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	BRepLib_MakeEdge(Macad::Occt::gp_Circ^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepLib_MakeEdge(Macad::Occt::gp_Elips^ L);
	BRepLib_MakeEdge(Macad::Occt::gp_Elips^ L, double p1, double p2);
	BRepLib_MakeEdge(Macad::Occt::gp_Elips^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	BRepLib_MakeEdge(Macad::Occt::gp_Elips^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepLib_MakeEdge(Macad::Occt::gp_Hypr^ L);
	BRepLib_MakeEdge(Macad::Occt::gp_Hypr^ L, double p1, double p2);
	BRepLib_MakeEdge(Macad::Occt::gp_Hypr^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	BRepLib_MakeEdge(Macad::Occt::gp_Hypr^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepLib_MakeEdge(Macad::Occt::gp_Parab^ L);
	BRepLib_MakeEdge(Macad::Occt::gp_Parab^ L, double p1, double p2);
	BRepLib_MakeEdge(Macad::Occt::gp_Parab^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	BRepLib_MakeEdge(Macad::Occt::gp_Parab^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L);
	BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, double p1, double p2);
	BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2);
	BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
	BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S);
	BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, double p1, double p2);
	BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2);
	BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
	BRepLib_MakeEdge(Macad::Occt::BRepLib_MakeEdge^ parameter1);
	void Init(Macad::Occt::Geom_Curve^ C);
	void Init(Macad::Occt::Geom_Curve^ C, double p1, double p2);
	void Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	void Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	void Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2);
	void Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
	void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S);
	void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, double p1, double p2);
	void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2);
	void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
	Macad::Occt::BRepLib_EdgeError Error();
	Macad::Occt::TopoDS_Edge^ Edge();
	Macad::Occt::TopoDS_Vertex^ Vertex1();
	Macad::Occt::TopoDS_Vertex^ Vertex2();
}; // class BRepLib_MakeEdge

//---------------------------------------------------------------------
//  Class  BRepLib_MakeEdge2d
//---------------------------------------------------------------------
public ref class BRepLib_MakeEdge2d sealed : public Macad::Occt::BRepLib_MakeShape
{

#ifdef Include_BRepLib_MakeEdge2d_h
public:
	Include_BRepLib_MakeEdge2d_h
#endif

public:
	BRepLib_MakeEdge2d(::BRepLib_MakeEdge2d* nativeInstance)
		: Macad::Occt::BRepLib_MakeShape( nativeInstance )
	{}

	BRepLib_MakeEdge2d(::BRepLib_MakeEdge2d& nativeInstance)
		: Macad::Occt::BRepLib_MakeShape( nativeInstance )
	{}

	property ::BRepLib_MakeEdge2d* NativeInstance
	{
		::BRepLib_MakeEdge2d* get()
		{
			return static_cast<::BRepLib_MakeEdge2d*>(_NativeInstance);
		}
	}

public:
	BRepLib_MakeEdge2d(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepLib_MakeEdge2d(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Lin2d^ L);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Lin2d^ L, double p1, double p2);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Lin2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Lin2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Circ2d^ L);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Circ2d^ L, double p1, double p2);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Circ2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Circ2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Elips2d^ L);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Elips2d^ L, double p1, double p2);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Elips2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Elips2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L, double p1, double p2);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Parab2d^ L);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Parab2d^ L, double p1, double p2);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Parab2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	BRepLib_MakeEdge2d(Macad::Occt::gp_Parab2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L);
	BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, double p1, double p2);
	BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, double p1, double p2);
	BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
	BRepLib_MakeEdge2d(Macad::Occt::BRepLib_MakeEdge2d^ parameter1);
	void Init(Macad::Occt::Geom2d_Curve^ C);
	void Init(Macad::Occt::Geom2d_Curve^ C, double p1, double p2);
	void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, double p1, double p2);
	void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
	Macad::Occt::BRepLib_EdgeError Error();
	Macad::Occt::TopoDS_Edge^ Edge();
	Macad::Occt::TopoDS_Vertex^ Vertex1();
	Macad::Occt::TopoDS_Vertex^ Vertex2();
}; // class BRepLib_MakeEdge2d

//---------------------------------------------------------------------
//  Class  BRepLib_MakeFace
//---------------------------------------------------------------------
public ref class BRepLib_MakeFace sealed : public Macad::Occt::BRepLib_MakeShape
{

#ifdef Include_BRepLib_MakeFace_h
public:
	Include_BRepLib_MakeFace_h
#endif

public:
	BRepLib_MakeFace(::BRepLib_MakeFace* nativeInstance)
		: Macad::Occt::BRepLib_MakeShape( nativeInstance )
	{}

	BRepLib_MakeFace(::BRepLib_MakeFace& nativeInstance)
		: Macad::Occt::BRepLib_MakeShape( nativeInstance )
	{}

	property ::BRepLib_MakeFace* NativeInstance
	{
		::BRepLib_MakeFace* get()
		{
			return static_cast<::BRepLib_MakeFace*>(_NativeInstance);
		}
	}

public:
	BRepLib_MakeFace();
	BRepLib_MakeFace(Macad::Occt::TopoDS_Face^ F);
	BRepLib_MakeFace(Macad::Occt::Pln P);
	BRepLib_MakeFace(Macad::Occt::gp_Cylinder^ C);
	BRepLib_MakeFace(Macad::Occt::gp_Cone^ C);
	BRepLib_MakeFace(Macad::Occt::gp_Sphere^ S);
	BRepLib_MakeFace(Macad::Occt::gp_Torus^ C);
	BRepLib_MakeFace(Macad::Occt::Geom_Surface^ S, double TolDegen);
	BRepLib_MakeFace(Macad::Occt::Pln P, double UMin, double UMax, double VMin, double VMax);
	BRepLib_MakeFace(Macad::Occt::gp_Cylinder^ C, double UMin, double UMax, double VMin, double VMax);
	BRepLib_MakeFace(Macad::Occt::gp_Cone^ C, double UMin, double UMax, double VMin, double VMax);
	BRepLib_MakeFace(Macad::Occt::gp_Sphere^ S, double UMin, double UMax, double VMin, double VMax);
	BRepLib_MakeFace(Macad::Occt::gp_Torus^ C, double UMin, double UMax, double VMin, double VMax);
	BRepLib_MakeFace(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, double TolDegen);
	BRepLib_MakeFace(Macad::Occt::TopoDS_Wire^ W, bool OnlyPlane);
	BRepLib_MakeFace(Macad::Occt::TopoDS_Wire^ W);
	BRepLib_MakeFace(Macad::Occt::Pln P, Macad::Occt::TopoDS_Wire^ W, bool Inside);
	BRepLib_MakeFace(Macad::Occt::Pln P, Macad::Occt::TopoDS_Wire^ W);
	BRepLib_MakeFace(Macad::Occt::gp_Cylinder^ C, Macad::Occt::TopoDS_Wire^ W, bool Inside);
	BRepLib_MakeFace(Macad::Occt::gp_Cylinder^ C, Macad::Occt::TopoDS_Wire^ W);
	BRepLib_MakeFace(Macad::Occt::gp_Cone^ C, Macad::Occt::TopoDS_Wire^ W, bool Inside);
	BRepLib_MakeFace(Macad::Occt::gp_Cone^ C, Macad::Occt::TopoDS_Wire^ W);
	BRepLib_MakeFace(Macad::Occt::gp_Sphere^ S, Macad::Occt::TopoDS_Wire^ W, bool Inside);
	BRepLib_MakeFace(Macad::Occt::gp_Sphere^ S, Macad::Occt::TopoDS_Wire^ W);
	BRepLib_MakeFace(Macad::Occt::gp_Torus^ C, Macad::Occt::TopoDS_Wire^ W, bool Inside);
	BRepLib_MakeFace(Macad::Occt::gp_Torus^ C, Macad::Occt::TopoDS_Wire^ W);
	BRepLib_MakeFace(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Wire^ W, bool Inside);
	BRepLib_MakeFace(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Wire^ W);
	BRepLib_MakeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Wire^ W);
	BRepLib_MakeFace(Macad::Occt::BRepLib_MakeFace^ parameter1);
	void Init(Macad::Occt::TopoDS_Face^ F);
	void Init(Macad::Occt::Geom_Surface^ S, bool Bound, double TolDegen);
	void Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, double TolDegen);
	void Add(Macad::Occt::TopoDS_Wire^ W);
	Macad::Occt::BRepLib_FaceError Error();
	Macad::Occt::TopoDS_Face^ Face();
	static bool IsDegenerated(Macad::Occt::Geom_Curve^ theCurve, double theMaxTol, double% theActTol);
}; // class BRepLib_MakeFace

//---------------------------------------------------------------------
//  Class  BRepLib_MakePolygon
//---------------------------------------------------------------------
public ref class BRepLib_MakePolygon sealed : public Macad::Occt::BRepLib_MakeShape
{

#ifdef Include_BRepLib_MakePolygon_h
public:
	Include_BRepLib_MakePolygon_h
#endif

public:
	BRepLib_MakePolygon(::BRepLib_MakePolygon* nativeInstance)
		: Macad::Occt::BRepLib_MakeShape( nativeInstance )
	{}

	BRepLib_MakePolygon(::BRepLib_MakePolygon& nativeInstance)
		: Macad::Occt::BRepLib_MakeShape( nativeInstance )
	{}

	property ::BRepLib_MakePolygon* NativeInstance
	{
		::BRepLib_MakePolygon* get()
		{
			return static_cast<::BRepLib_MakePolygon*>(_NativeInstance);
		}
	}

public:
	BRepLib_MakePolygon();
	BRepLib_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	BRepLib_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, bool Close);
	BRepLib_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3);
	BRepLib_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4, bool Close);
	BRepLib_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4);
	BRepLib_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepLib_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3, bool Close);
	BRepLib_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3);
	BRepLib_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3, Macad::Occt::TopoDS_Vertex^ V4, bool Close);
	BRepLib_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3, Macad::Occt::TopoDS_Vertex^ V4);
	BRepLib_MakePolygon(Macad::Occt::BRepLib_MakePolygon^ parameter1);
	void Add(Macad::Occt::Pnt P);
	void Add(Macad::Occt::TopoDS_Vertex^ V);
	bool Added();
	void Close();
	Macad::Occt::TopoDS_Vertex^ FirstVertex();
	Macad::Occt::TopoDS_Vertex^ LastVertex();
	Macad::Occt::TopoDS_Edge^ Edge();
	Macad::Occt::TopoDS_Wire^ Wire();
}; // class BRepLib_MakePolygon

//---------------------------------------------------------------------
//  Class  BRepLib_MakeShell
//---------------------------------------------------------------------
public ref class BRepLib_MakeShell sealed : public Macad::Occt::BRepLib_MakeShape
{

#ifdef Include_BRepLib_MakeShell_h
public:
	Include_BRepLib_MakeShell_h
#endif

public:
	BRepLib_MakeShell(::BRepLib_MakeShell* nativeInstance)
		: Macad::Occt::BRepLib_MakeShape( nativeInstance )
	{}

	BRepLib_MakeShell(::BRepLib_MakeShell& nativeInstance)
		: Macad::Occt::BRepLib_MakeShape( nativeInstance )
	{}

	property ::BRepLib_MakeShell* NativeInstance
	{
		::BRepLib_MakeShell* get()
		{
			return static_cast<::BRepLib_MakeShell*>(_NativeInstance);
		}
	}

public:
	BRepLib_MakeShell();
	BRepLib_MakeShell(Macad::Occt::Geom_Surface^ S, bool Segment);
	BRepLib_MakeShell(Macad::Occt::Geom_Surface^ S);
	BRepLib_MakeShell(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, bool Segment);
	BRepLib_MakeShell(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax);
	BRepLib_MakeShell(Macad::Occt::BRepLib_MakeShell^ parameter1);
	void Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, bool Segment);
	void Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax);
	Macad::Occt::BRepLib_ShellError Error();
	Macad::Occt::TopoDS_Shell^ Shell();
}; // class BRepLib_MakeShell

//---------------------------------------------------------------------
//  Class  BRepLib_MakeSolid
//---------------------------------------------------------------------
public ref class BRepLib_MakeSolid sealed : public Macad::Occt::BRepLib_MakeShape
{

#ifdef Include_BRepLib_MakeSolid_h
public:
	Include_BRepLib_MakeSolid_h
#endif

public:
	BRepLib_MakeSolid(::BRepLib_MakeSolid* nativeInstance)
		: Macad::Occt::BRepLib_MakeShape( nativeInstance )
	{}

	BRepLib_MakeSolid(::BRepLib_MakeSolid& nativeInstance)
		: Macad::Occt::BRepLib_MakeShape( nativeInstance )
	{}

	property ::BRepLib_MakeSolid* NativeInstance
	{
		::BRepLib_MakeSolid* get()
		{
			return static_cast<::BRepLib_MakeSolid*>(_NativeInstance);
		}
	}

public:
	BRepLib_MakeSolid();
	BRepLib_MakeSolid(Macad::Occt::TopoDS_CompSolid^ S);
	BRepLib_MakeSolid(Macad::Occt::TopoDS_Shell^ S);
	BRepLib_MakeSolid(Macad::Occt::TopoDS_Shell^ S1, Macad::Occt::TopoDS_Shell^ S2);
	BRepLib_MakeSolid(Macad::Occt::TopoDS_Shell^ S1, Macad::Occt::TopoDS_Shell^ S2, Macad::Occt::TopoDS_Shell^ S3);
	BRepLib_MakeSolid(Macad::Occt::TopoDS_Solid^ So);
	BRepLib_MakeSolid(Macad::Occt::TopoDS_Solid^ So, Macad::Occt::TopoDS_Shell^ S);
	BRepLib_MakeSolid(Macad::Occt::BRepLib_MakeSolid^ parameter1);
	void Add(Macad::Occt::TopoDS_Shell^ S);
	Macad::Occt::TopoDS_Solid^ Solid();
	Macad::Occt::BRepLib_ShapeModification FaceStatus(Macad::Occt::TopoDS_Face^ F);
}; // class BRepLib_MakeSolid

//---------------------------------------------------------------------
//  Class  BRepLib_MakeVertex
//---------------------------------------------------------------------
public ref class BRepLib_MakeVertex sealed : public Macad::Occt::BRepLib_MakeShape
{

#ifdef Include_BRepLib_MakeVertex_h
public:
	Include_BRepLib_MakeVertex_h
#endif

public:
	BRepLib_MakeVertex(::BRepLib_MakeVertex* nativeInstance)
		: Macad::Occt::BRepLib_MakeShape( nativeInstance )
	{}

	BRepLib_MakeVertex(::BRepLib_MakeVertex& nativeInstance)
		: Macad::Occt::BRepLib_MakeShape( nativeInstance )
	{}

	property ::BRepLib_MakeVertex* NativeInstance
	{
		::BRepLib_MakeVertex* get()
		{
			return static_cast<::BRepLib_MakeVertex*>(_NativeInstance);
		}
	}

public:
	BRepLib_MakeVertex(Macad::Occt::Pnt P);
	BRepLib_MakeVertex(Macad::Occt::BRepLib_MakeVertex^ parameter1);
	Macad::Occt::TopoDS_Vertex^ Vertex();
}; // class BRepLib_MakeVertex

//---------------------------------------------------------------------
//  Class  BRepLib_MakeWire
//---------------------------------------------------------------------
public ref class BRepLib_MakeWire sealed : public Macad::Occt::BRepLib_MakeShape
{

#ifdef Include_BRepLib_MakeWire_h
public:
	Include_BRepLib_MakeWire_h
#endif

public:
	BRepLib_MakeWire(::BRepLib_MakeWire* nativeInstance)
		: Macad::Occt::BRepLib_MakeShape( nativeInstance )
	{}

	BRepLib_MakeWire(::BRepLib_MakeWire& nativeInstance)
		: Macad::Occt::BRepLib_MakeShape( nativeInstance )
	{}

	property ::BRepLib_MakeWire* NativeInstance
	{
		::BRepLib_MakeWire* get()
		{
			return static_cast<::BRepLib_MakeWire*>(_NativeInstance);
		}
	}

public:
	BRepLib_MakeWire();
	BRepLib_MakeWire(Macad::Occt::TopoDS_Edge^ E);
	BRepLib_MakeWire(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2);
	BRepLib_MakeWire(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopoDS_Edge^ E3);
	BRepLib_MakeWire(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopoDS_Edge^ E3, Macad::Occt::TopoDS_Edge^ E4);
	BRepLib_MakeWire(Macad::Occt::TopoDS_Wire^ W);
	BRepLib_MakeWire(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Edge^ E);
	BRepLib_MakeWire(Macad::Occt::BRepLib_MakeWire^ parameter1);
	void Add(Macad::Occt::TopoDS_Edge^ E);
	void Add(Macad::Occt::TopoDS_Wire^ W);
	void Add(Macad::Occt::TopTools_ListOfShape^ L);
	Macad::Occt::BRepLib_WireError Error();
	Macad::Occt::TopoDS_Wire^ Wire();
	Macad::Occt::TopoDS_Edge^ Edge();
	Macad::Occt::TopoDS_Vertex^ Vertex();
}; // class BRepLib_MakeWire

//---------------------------------------------------------------------
//  Class  BRepLib_ValidateEdge
//---------------------------------------------------------------------
public ref class BRepLib_ValidateEdge sealed : public BaseClass<::BRepLib_ValidateEdge>
{

#ifdef Include_BRepLib_ValidateEdge_h
public:
	Include_BRepLib_ValidateEdge_h
#endif

public:
	BRepLib_ValidateEdge(::BRepLib_ValidateEdge* nativeInstance)
		: BaseClass<::BRepLib_ValidateEdge>( nativeInstance, true )
	{}

	BRepLib_ValidateEdge(::BRepLib_ValidateEdge& nativeInstance)
		: BaseClass<::BRepLib_ValidateEdge>( &nativeInstance, false )
	{}

	property ::BRepLib_ValidateEdge* NativeInstance
	{
		::BRepLib_ValidateEdge* get()
		{
			return static_cast<::BRepLib_ValidateEdge*>(_NativeInstance);
		}
	}

public:
	BRepLib_ValidateEdge(Macad::Occt::Adaptor3d_Curve^ theReferenceCurve, Macad::Occt::Adaptor3d_CurveOnSurface^ theOtherCurve, bool theSameParameter);
	BRepLib_ValidateEdge(Macad::Occt::BRepLib_ValidateEdge^ parameter1);
	void SetControlPointsNumber(int theControlPointsNumber);
	void SetExitIfToleranceExceeded(double theToleranceForChecking);
	void Process();
	bool IsDone();
	bool CheckTolerance(double theToleranceToCheck);
	double GetMaxDistance();
	void UpdateTolerance(double% theToleranceToUpdate);
}; // class BRepLib_ValidateEdge

}; // namespace Occt
}; // namespace Macad
