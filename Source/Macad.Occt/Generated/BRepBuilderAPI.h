// Generated wrapper code for package BRepBuilderAPI

#pragma once

#include "BRepBuilderAPI.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  BRepBuilderAPI_EdgeError
//---------------------------------------------------------------------
public enum class BRepBuilderAPI_EdgeError
{
	BRepBuilderAPI_EdgeDone = 0,
	BRepBuilderAPI_PointProjectionFailed = 1,
	BRepBuilderAPI_ParameterOutOfRange = 2,
	BRepBuilderAPI_DifferentPointsOnClosedCurve = 3,
	BRepBuilderAPI_PointWithInfiniteParameter = 4,
	BRepBuilderAPI_DifferentsPointAndParameter = 5,
	BRepBuilderAPI_LineThroughIdenticPoints = 6
}; // enum  class BRepBuilderAPI_EdgeError

//---------------------------------------------------------------------
//  Enum  BRepBuilderAPI_FaceError
//---------------------------------------------------------------------
public enum class BRepBuilderAPI_FaceError
{
	BRepBuilderAPI_FaceDone = 0,
	BRepBuilderAPI_NoFace = 1,
	BRepBuilderAPI_NotPlanar = 2,
	BRepBuilderAPI_CurveProjectionFailed = 3,
	BRepBuilderAPI_ParametersOutOfRange = 4
}; // enum  class BRepBuilderAPI_FaceError

//---------------------------------------------------------------------
//  Enum  BRepBuilderAPI_ShellError
//---------------------------------------------------------------------
public enum class BRepBuilderAPI_ShellError
{
	BRepBuilderAPI_ShellDone = 0,
	BRepBuilderAPI_EmptyShell = 1,
	BRepBuilderAPI_DisconnectedShell = 2,
	BRepBuilderAPI_ShellParametersOutOfRange = 3
}; // enum  class BRepBuilderAPI_ShellError

//---------------------------------------------------------------------
//  Enum  BRepBuilderAPI_WireError
//---------------------------------------------------------------------
public enum class BRepBuilderAPI_WireError
{
	BRepBuilderAPI_WireDone = 0,
	BRepBuilderAPI_EmptyWire = 1,
	BRepBuilderAPI_DisconnectedWire = 2,
	BRepBuilderAPI_NonManifoldWire = 3
}; // enum  class BRepBuilderAPI_WireError

//---------------------------------------------------------------------
//  Enum  BRepBuilderAPI_PipeError
//---------------------------------------------------------------------
public enum class BRepBuilderAPI_PipeError
{
	BRepBuilderAPI_PipeDone = 0,
	BRepBuilderAPI_PipeNotDone = 1,
	BRepBuilderAPI_PlaneNotIntersectGuide = 2,
	BRepBuilderAPI_ImpossibleContact = 3
}; // enum  class BRepBuilderAPI_PipeError

//---------------------------------------------------------------------
//  Enum  BRepBuilderAPI_ShapeModification
//---------------------------------------------------------------------
public enum class BRepBuilderAPI_ShapeModification
{
	BRepBuilderAPI_Preserved = 0,
	BRepBuilderAPI_Deleted = 1,
	BRepBuilderAPI_Trimmed = 2,
	BRepBuilderAPI_Merged = 3,
	BRepBuilderAPI_BoundaryModified = 4
}; // enum  class BRepBuilderAPI_ShapeModification

//---------------------------------------------------------------------
//  Enum  BRepBuilderAPI_TransitionMode
//---------------------------------------------------------------------
public enum class BRepBuilderAPI_TransitionMode
{
	BRepBuilderAPI_Transformed = 0,
	BRepBuilderAPI_RightCorner = 1,
	BRepBuilderAPI_RoundCorner = 2
}; // enum  class BRepBuilderAPI_TransitionMode

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI
//---------------------------------------------------------------------
public ref class BRepBuilderAPI sealed : public BaseClass<::BRepBuilderAPI>
{

#ifdef Include_BRepBuilderAPI_h
public:
	Include_BRepBuilderAPI_h
#endif

public:
	BRepBuilderAPI(::BRepBuilderAPI* nativeInstance)
		: BaseClass<::BRepBuilderAPI>( nativeInstance, true )
	{}

	BRepBuilderAPI(::BRepBuilderAPI& nativeInstance)
		: BaseClass<::BRepBuilderAPI>( &nativeInstance, false )
	{}

	property ::BRepBuilderAPI* NativeInstance
	{
		::BRepBuilderAPI* get()
		{
			return static_cast<::BRepBuilderAPI*>(_NativeInstance);
		}
	}

public:
	BRepBuilderAPI();
	BRepBuilderAPI(Macad::Occt::BRepBuilderAPI^ parameter1);
	static void Plane(Macad::Occt::Geom_Plane^ P);
	static Macad::Occt::Geom_Plane^ Plane();
	static void Precision(double P);
	static double Precision();
}; // class BRepBuilderAPI

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_VertexInspector
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_VertexInspector sealed : public BaseClass<::BRepBuilderAPI_VertexInspector>
{

#ifdef Include_BRepBuilderAPI_VertexInspector_h
public:
	Include_BRepBuilderAPI_VertexInspector_h
#endif

public:
	BRepBuilderAPI_VertexInspector(::BRepBuilderAPI_VertexInspector* nativeInstance)
		: BaseClass<::BRepBuilderAPI_VertexInspector>( nativeInstance, true )
	{}

	BRepBuilderAPI_VertexInspector(::BRepBuilderAPI_VertexInspector& nativeInstance)
		: BaseClass<::BRepBuilderAPI_VertexInspector>( &nativeInstance, false )
	{}

	property ::BRepBuilderAPI_VertexInspector* NativeInstance
	{
		::BRepBuilderAPI_VertexInspector* get()
		{
			return static_cast<::BRepBuilderAPI_VertexInspector*>(_NativeInstance);
		}
	}

public:
	BRepBuilderAPI_VertexInspector(double theTol);
	BRepBuilderAPI_VertexInspector(Macad::Occt::BRepBuilderAPI_VertexInspector^ parameter1);
	void Add(Macad::Occt::XYZ thePnt);
	void ClearResList();
	void SetCurrent(Macad::Occt::XYZ theCurPnt);
	Macad::Occt::TColStd_ListOfInteger^ ResInd();
	Macad::Occt::NCollection_CellFilter_Action Inspect(int theTarget);
}; // class BRepBuilderAPI_VertexInspector

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Command
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_Command : public BaseClass<::BRepBuilderAPI_Command>
{

#ifdef Include_BRepBuilderAPI_Command_h
public:
	Include_BRepBuilderAPI_Command_h
#endif

protected:
	BRepBuilderAPI_Command(InitMode init)
		: BaseClass<::BRepBuilderAPI_Command>( init )
	{}

public:
	BRepBuilderAPI_Command(::BRepBuilderAPI_Command* nativeInstance)
		: BaseClass<::BRepBuilderAPI_Command>( nativeInstance, true )
	{}

	BRepBuilderAPI_Command(::BRepBuilderAPI_Command& nativeInstance)
		: BaseClass<::BRepBuilderAPI_Command>( &nativeInstance, false )
	{}

	property ::BRepBuilderAPI_Command* NativeInstance
	{
		::BRepBuilderAPI_Command* get()
		{
			return static_cast<::BRepBuilderAPI_Command*>(_NativeInstance);
		}
	}

public:
	BRepBuilderAPI_Command(Macad::Occt::BRepBuilderAPI_Command^ parameter1);
	bool IsDone();
	void Check();
}; // class BRepBuilderAPI_Command

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Collect
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_Collect sealed : public BaseClass<::BRepBuilderAPI_Collect>
{

#ifdef Include_BRepBuilderAPI_Collect_h
public:
	Include_BRepBuilderAPI_Collect_h
#endif

public:
	BRepBuilderAPI_Collect(::BRepBuilderAPI_Collect* nativeInstance)
		: BaseClass<::BRepBuilderAPI_Collect>( nativeInstance, true )
	{}

	BRepBuilderAPI_Collect(::BRepBuilderAPI_Collect& nativeInstance)
		: BaseClass<::BRepBuilderAPI_Collect>( &nativeInstance, false )
	{}

	property ::BRepBuilderAPI_Collect* NativeInstance
	{
		::BRepBuilderAPI_Collect* get()
		{
			return static_cast<::BRepBuilderAPI_Collect*>(_NativeInstance);
		}
	}

public:
	BRepBuilderAPI_Collect();
	BRepBuilderAPI_Collect(Macad::Occt::BRepBuilderAPI_Collect^ parameter1);
	void Add(Macad::Occt::TopoDS_Shape^ SI, Macad::Occt::BRepBuilderAPI_MakeShape^ MKS);
	void AddGenerated(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopoDS_Shape^ Gen);
	void AddModif(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopoDS_Shape^ Mod);
	void Filter(Macad::Occt::TopoDS_Shape^ SF);
	Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Modification();
	Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Generated();
}; // class BRepBuilderAPI_Collect

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeShape
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_MakeShape : public Macad::Occt::BRepBuilderAPI_Command
{

#ifdef Include_BRepBuilderAPI_MakeShape_h
public:
	Include_BRepBuilderAPI_MakeShape_h
#endif

protected:
	BRepBuilderAPI_MakeShape(InitMode init)
		: Macad::Occt::BRepBuilderAPI_Command( init )
	{}

public:
	BRepBuilderAPI_MakeShape(::BRepBuilderAPI_MakeShape* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_Command( nativeInstance )
	{}

	BRepBuilderAPI_MakeShape(::BRepBuilderAPI_MakeShape& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_Command( nativeInstance )
	{}

	property ::BRepBuilderAPI_MakeShape* NativeInstance
	{
		::BRepBuilderAPI_MakeShape* get()
		{
			return static_cast<::BRepBuilderAPI_MakeShape*>(_NativeInstance);
		}
	}

public:
	BRepBuilderAPI_MakeShape(Macad::Occt::BRepBuilderAPI_MakeShape^ parameter1);
	void Build(Macad::Occt::Message_ProgressRange^ theRange);
	void Build();
	Macad::Occt::TopoDS_Shape^ Shape();
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ S);
	bool IsDeleted(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepBuilderAPI_MakeShape

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_ModifyShape
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_ModifyShape : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepBuilderAPI_ModifyShape_h
public:
	Include_BRepBuilderAPI_ModifyShape_h
#endif

protected:
	BRepBuilderAPI_ModifyShape(InitMode init)
		: Macad::Occt::BRepBuilderAPI_MakeShape( init )
	{}

public:
	BRepBuilderAPI_ModifyShape(::BRepBuilderAPI_ModifyShape* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepBuilderAPI_ModifyShape(::BRepBuilderAPI_ModifyShape& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepBuilderAPI_ModifyShape* NativeInstance
	{
		::BRepBuilderAPI_ModifyShape* get()
		{
			return static_cast<::BRepBuilderAPI_ModifyShape*>(_NativeInstance);
		}
	}

public:
	BRepBuilderAPI_ModifyShape(Macad::Occt::BRepBuilderAPI_ModifyShape^ parameter1);
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopoDS_Shape^ ModifiedShape(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepBuilderAPI_ModifyShape

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Copy
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_Copy sealed : public Macad::Occt::BRepBuilderAPI_ModifyShape
{

#ifdef Include_BRepBuilderAPI_Copy_h
public:
	Include_BRepBuilderAPI_Copy_h
#endif

public:
	BRepBuilderAPI_Copy(::BRepBuilderAPI_Copy* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
	{}

	BRepBuilderAPI_Copy(::BRepBuilderAPI_Copy& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
	{}

	property ::BRepBuilderAPI_Copy* NativeInstance
	{
		::BRepBuilderAPI_Copy* get()
		{
			return static_cast<::BRepBuilderAPI_Copy*>(_NativeInstance);
		}
	}

public:
	BRepBuilderAPI_Copy();
	BRepBuilderAPI_Copy(Macad::Occt::TopoDS_Shape^ S, bool copyGeom, bool copyMesh);
	BRepBuilderAPI_Copy(Macad::Occt::TopoDS_Shape^ S, bool copyGeom);
	BRepBuilderAPI_Copy(Macad::Occt::TopoDS_Shape^ S);
	BRepBuilderAPI_Copy(Macad::Occt::BRepBuilderAPI_Copy^ parameter1);
	void Perform(Macad::Occt::TopoDS_Shape^ S, bool copyGeom, bool copyMesh);
	void Perform(Macad::Occt::TopoDS_Shape^ S, bool copyGeom);
	void Perform(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepBuilderAPI_Copy

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_FastSewing
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_FastSewing sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRepBuilderAPI_FastSewing_h
public:
	Include_BRepBuilderAPI_FastSewing_h
#endif

public:
	BRepBuilderAPI_FastSewing(::BRepBuilderAPI_FastSewing* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	BRepBuilderAPI_FastSewing(::BRepBuilderAPI_FastSewing& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::BRepBuilderAPI_FastSewing* NativeInstance
	{
		::BRepBuilderAPI_FastSewing* get()
		{
			return static_cast<::BRepBuilderAPI_FastSewing*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRepBuilderAPI_FastSewing^ CreateDowncasted(::BRepBuilderAPI_FastSewing* instance);

public:
	//---------------------------------------------------------------------
	//  Enum  FS_Statuses
	//---------------------------------------------------------------------
	enum class FS_Statuses
	{
		FS_OK = 0,
		FS_Degenerated = 1,
		FS_FindVertexError = 2,
		FS_FindEdgeError = 4,
		FS_FaceWithNullSurface = 8,
		FS_NotNaturalBoundsFace = 16,
		FS_InfiniteSurface = 32,
		FS_EmptyInput = 64,
		FS_Exception = 128
	}; // enum  class FS_Statuses

	BRepBuilderAPI_FastSewing(double theTolerance);
	BRepBuilderAPI_FastSewing(Macad::Occt::BRepBuilderAPI_FastSewing^ parameter1);
	bool Add(Macad::Occt::TopoDS_Shape^ theShape);
	bool Add(Macad::Occt::Geom_Surface^ theSurface);
	void Perform();
	void SetTolerance(double theToler);
	double GetTolerance();
	Macad::Occt::TopoDS_Shape^ GetResult();
	/* Method skipped due to unknown mapping: unsigned int GetStatuses(ostream theOS, ) */
	unsigned int GetStatuses();
}; // class BRepBuilderAPI_FastSewing

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_FindPlane
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_FindPlane sealed : public BaseClass<::BRepBuilderAPI_FindPlane>
{

#ifdef Include_BRepBuilderAPI_FindPlane_h
public:
	Include_BRepBuilderAPI_FindPlane_h
#endif

public:
	BRepBuilderAPI_FindPlane(::BRepBuilderAPI_FindPlane* nativeInstance)
		: BaseClass<::BRepBuilderAPI_FindPlane>( nativeInstance, true )
	{}

	BRepBuilderAPI_FindPlane(::BRepBuilderAPI_FindPlane& nativeInstance)
		: BaseClass<::BRepBuilderAPI_FindPlane>( &nativeInstance, false )
	{}

	property ::BRepBuilderAPI_FindPlane* NativeInstance
	{
		::BRepBuilderAPI_FindPlane* get()
		{
			return static_cast<::BRepBuilderAPI_FindPlane*>(_NativeInstance);
		}
	}

public:
	BRepBuilderAPI_FindPlane();
	BRepBuilderAPI_FindPlane(Macad::Occt::TopoDS_Shape^ S, double Tol);
	BRepBuilderAPI_FindPlane(Macad::Occt::TopoDS_Shape^ S);
	BRepBuilderAPI_FindPlane(Macad::Occt::BRepBuilderAPI_FindPlane^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ S, double Tol);
	void Init(Macad::Occt::TopoDS_Shape^ S);
	bool Found();
	Macad::Occt::Geom_Plane^ Plane();
}; // class BRepBuilderAPI_FindPlane

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_GTransform
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_GTransform sealed : public Macad::Occt::BRepBuilderAPI_ModifyShape
{

#ifdef Include_BRepBuilderAPI_GTransform_h
public:
	Include_BRepBuilderAPI_GTransform_h
#endif

public:
	BRepBuilderAPI_GTransform(::BRepBuilderAPI_GTransform* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
	{}

	BRepBuilderAPI_GTransform(::BRepBuilderAPI_GTransform& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
	{}

	property ::BRepBuilderAPI_GTransform* NativeInstance
	{
		::BRepBuilderAPI_GTransform* get()
		{
			return static_cast<::BRepBuilderAPI_GTransform*>(_NativeInstance);
		}
	}

public:
	BRepBuilderAPI_GTransform(Macad::Occt::gp_GTrsf^ T);
	BRepBuilderAPI_GTransform(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::gp_GTrsf^ T, bool Copy);
	BRepBuilderAPI_GTransform(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::gp_GTrsf^ T);
	BRepBuilderAPI_GTransform(Macad::Occt::BRepBuilderAPI_GTransform^ parameter1);
	void Perform(Macad::Occt::TopoDS_Shape^ S, bool Copy);
	void Perform(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopoDS_Shape^ ModifiedShape(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepBuilderAPI_GTransform

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeEdge
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_MakeEdge sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepBuilderAPI_MakeEdge_h
public:
	Include_BRepBuilderAPI_MakeEdge_h
#endif

public:
	BRepBuilderAPI_MakeEdge(::BRepBuilderAPI_MakeEdge* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepBuilderAPI_MakeEdge(::BRepBuilderAPI_MakeEdge& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepBuilderAPI_MakeEdge* NativeInstance
	{
		::BRepBuilderAPI_MakeEdge* get()
		{
			return static_cast<::BRepBuilderAPI_MakeEdge*>(_NativeInstance);
		}
	}

public:
	BRepBuilderAPI_MakeEdge();
	BRepBuilderAPI_MakeEdge(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Lin^ L);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Lin^ L, double p1, double p2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Lin^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Lin^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Circ^ L);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Circ^ L, double p1, double p2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Circ^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Circ^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Elips^ L);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Elips^ L, double p1, double p2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Elips^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Elips^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Hypr^ L);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Hypr^ L, double p1, double p2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Hypr^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Hypr^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Parab^ L);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Parab^ L, double p1, double p2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Parab^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Parab^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::Geom_Curve^ L);
	BRepBuilderAPI_MakeEdge(Macad::Occt::Geom_Curve^ L, double p1, double p2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S);
	BRepBuilderAPI_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, double p1, double p2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
	BRepBuilderAPI_MakeEdge(Macad::Occt::BRepBuilderAPI_MakeEdge^ parameter1);
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
	bool IsDone();
	Macad::Occt::BRepBuilderAPI_EdgeError Error();
	Macad::Occt::TopoDS_Edge^ Edge();
	Macad::Occt::TopoDS_Vertex^ Vertex1();
	Macad::Occt::TopoDS_Vertex^ Vertex2();
}; // class BRepBuilderAPI_MakeEdge

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeEdge2d
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_MakeEdge2d sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepBuilderAPI_MakeEdge2d_h
public:
	Include_BRepBuilderAPI_MakeEdge2d_h
#endif

public:
	BRepBuilderAPI_MakeEdge2d(::BRepBuilderAPI_MakeEdge2d* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepBuilderAPI_MakeEdge2d(::BRepBuilderAPI_MakeEdge2d& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepBuilderAPI_MakeEdge2d* NativeInstance
	{
		::BRepBuilderAPI_MakeEdge2d* get()
		{
			return static_cast<::BRepBuilderAPI_MakeEdge2d*>(_NativeInstance);
		}
	}

public:
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Lin2d^ L);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Lin2d^ L, double p1, double p2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Lin2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Lin2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Circ2d^ L);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Circ2d^ L, double p1, double p2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Circ2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Circ2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Elips2d^ L);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Elips2d^ L, double p1, double p2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Elips2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Elips2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L, double p1, double p2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Parab2d^ L);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Parab2d^ L, double p1, double p2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Parab2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Parab2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, double p1, double p2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, double p1, double p2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
	BRepBuilderAPI_MakeEdge2d(Macad::Occt::BRepBuilderAPI_MakeEdge2d^ parameter1);
	void Init(Macad::Occt::Geom2d_Curve^ C);
	void Init(Macad::Occt::Geom2d_Curve^ C, double p1, double p2);
	void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, double p1, double p2);
	void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
	bool IsDone();
	Macad::Occt::BRepBuilderAPI_EdgeError Error();
	Macad::Occt::TopoDS_Edge^ Edge();
	Macad::Occt::TopoDS_Vertex^ Vertex1();
	Macad::Occt::TopoDS_Vertex^ Vertex2();
}; // class BRepBuilderAPI_MakeEdge2d

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeFace
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_MakeFace sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepBuilderAPI_MakeFace_h
public:
	Include_BRepBuilderAPI_MakeFace_h
#endif

public:
	BRepBuilderAPI_MakeFace(::BRepBuilderAPI_MakeFace* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepBuilderAPI_MakeFace(::BRepBuilderAPI_MakeFace& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepBuilderAPI_MakeFace* NativeInstance
	{
		::BRepBuilderAPI_MakeFace* get()
		{
			return static_cast<::BRepBuilderAPI_MakeFace*>(_NativeInstance);
		}
	}

public:
	BRepBuilderAPI_MakeFace();
	BRepBuilderAPI_MakeFace(Macad::Occt::TopoDS_Face^ F);
	BRepBuilderAPI_MakeFace(Macad::Occt::Pln P);
	BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cylinder^ C);
	BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cone^ C);
	BRepBuilderAPI_MakeFace(Macad::Occt::gp_Sphere^ S);
	BRepBuilderAPI_MakeFace(Macad::Occt::gp_Torus^ C);
	BRepBuilderAPI_MakeFace(Macad::Occt::Geom_Surface^ S, double TolDegen);
	BRepBuilderAPI_MakeFace(Macad::Occt::Pln P, double UMin, double UMax, double VMin, double VMax);
	BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cylinder^ C, double UMin, double UMax, double VMin, double VMax);
	BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cone^ C, double UMin, double UMax, double VMin, double VMax);
	BRepBuilderAPI_MakeFace(Macad::Occt::gp_Sphere^ S, double UMin, double UMax, double VMin, double VMax);
	BRepBuilderAPI_MakeFace(Macad::Occt::gp_Torus^ C, double UMin, double UMax, double VMin, double VMax);
	BRepBuilderAPI_MakeFace(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, double TolDegen);
	BRepBuilderAPI_MakeFace(Macad::Occt::TopoDS_Wire^ W, bool OnlyPlane);
	BRepBuilderAPI_MakeFace(Macad::Occt::TopoDS_Wire^ W);
	BRepBuilderAPI_MakeFace(Macad::Occt::Pln P, Macad::Occt::TopoDS_Wire^ W, bool Inside);
	BRepBuilderAPI_MakeFace(Macad::Occt::Pln P, Macad::Occt::TopoDS_Wire^ W);
	BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cylinder^ C, Macad::Occt::TopoDS_Wire^ W, bool Inside);
	BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cylinder^ C, Macad::Occt::TopoDS_Wire^ W);
	BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cone^ C, Macad::Occt::TopoDS_Wire^ W, bool Inside);
	BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cone^ C, Macad::Occt::TopoDS_Wire^ W);
	BRepBuilderAPI_MakeFace(Macad::Occt::gp_Sphere^ S, Macad::Occt::TopoDS_Wire^ W, bool Inside);
	BRepBuilderAPI_MakeFace(Macad::Occt::gp_Sphere^ S, Macad::Occt::TopoDS_Wire^ W);
	BRepBuilderAPI_MakeFace(Macad::Occt::gp_Torus^ C, Macad::Occt::TopoDS_Wire^ W, bool Inside);
	BRepBuilderAPI_MakeFace(Macad::Occt::gp_Torus^ C, Macad::Occt::TopoDS_Wire^ W);
	BRepBuilderAPI_MakeFace(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Wire^ W, bool Inside);
	BRepBuilderAPI_MakeFace(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Wire^ W);
	BRepBuilderAPI_MakeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Wire^ W);
	BRepBuilderAPI_MakeFace(Macad::Occt::BRepBuilderAPI_MakeFace^ parameter1);
	void Init(Macad::Occt::TopoDS_Face^ F);
	void Init(Macad::Occt::Geom_Surface^ S, bool Bound, double TolDegen);
	void Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, double TolDegen);
	void Add(Macad::Occt::TopoDS_Wire^ W);
	bool IsDone();
	Macad::Occt::BRepBuilderAPI_FaceError Error();
	Macad::Occt::TopoDS_Face^ Face();
}; // class BRepBuilderAPI_MakeFace

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakePolygon
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_MakePolygon sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepBuilderAPI_MakePolygon_h
public:
	Include_BRepBuilderAPI_MakePolygon_h
#endif

public:
	BRepBuilderAPI_MakePolygon(::BRepBuilderAPI_MakePolygon* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepBuilderAPI_MakePolygon(::BRepBuilderAPI_MakePolygon& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepBuilderAPI_MakePolygon* NativeInstance
	{
		::BRepBuilderAPI_MakePolygon* get()
		{
			return static_cast<::BRepBuilderAPI_MakePolygon*>(_NativeInstance);
		}
	}

public:
	BRepBuilderAPI_MakePolygon();
	BRepBuilderAPI_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	BRepBuilderAPI_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, bool Close);
	BRepBuilderAPI_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3);
	BRepBuilderAPI_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4, bool Close);
	BRepBuilderAPI_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4);
	BRepBuilderAPI_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	BRepBuilderAPI_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3, bool Close);
	BRepBuilderAPI_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3);
	BRepBuilderAPI_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3, Macad::Occt::TopoDS_Vertex^ V4, bool Close);
	BRepBuilderAPI_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3, Macad::Occt::TopoDS_Vertex^ V4);
	BRepBuilderAPI_MakePolygon(Macad::Occt::BRepBuilderAPI_MakePolygon^ parameter1);
	void Add(Macad::Occt::Pnt P);
	void Add(Macad::Occt::TopoDS_Vertex^ V);
	bool Added();
	void Close();
	Macad::Occt::TopoDS_Vertex^ FirstVertex();
	Macad::Occt::TopoDS_Vertex^ LastVertex();
	bool IsDone();
	Macad::Occt::TopoDS_Edge^ Edge();
	Macad::Occt::TopoDS_Wire^ Wire();
}; // class BRepBuilderAPI_MakePolygon

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeShell
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_MakeShell sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepBuilderAPI_MakeShell_h
public:
	Include_BRepBuilderAPI_MakeShell_h
#endif

public:
	BRepBuilderAPI_MakeShell(::BRepBuilderAPI_MakeShell* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepBuilderAPI_MakeShell(::BRepBuilderAPI_MakeShell& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepBuilderAPI_MakeShell* NativeInstance
	{
		::BRepBuilderAPI_MakeShell* get()
		{
			return static_cast<::BRepBuilderAPI_MakeShell*>(_NativeInstance);
		}
	}

public:
	BRepBuilderAPI_MakeShell();
	BRepBuilderAPI_MakeShell(Macad::Occt::Geom_Surface^ S, bool Segment);
	BRepBuilderAPI_MakeShell(Macad::Occt::Geom_Surface^ S);
	BRepBuilderAPI_MakeShell(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, bool Segment);
	BRepBuilderAPI_MakeShell(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax);
	BRepBuilderAPI_MakeShell(Macad::Occt::BRepBuilderAPI_MakeShell^ parameter1);
	void Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, bool Segment);
	void Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax);
	bool IsDone();
	Macad::Occt::BRepBuilderAPI_ShellError Error();
	Macad::Occt::TopoDS_Shell^ Shell();
}; // class BRepBuilderAPI_MakeShell

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeSolid
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_MakeSolid sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepBuilderAPI_MakeSolid_h
public:
	Include_BRepBuilderAPI_MakeSolid_h
#endif

public:
	BRepBuilderAPI_MakeSolid(::BRepBuilderAPI_MakeSolid* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepBuilderAPI_MakeSolid(::BRepBuilderAPI_MakeSolid& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepBuilderAPI_MakeSolid* NativeInstance
	{
		::BRepBuilderAPI_MakeSolid* get()
		{
			return static_cast<::BRepBuilderAPI_MakeSolid*>(_NativeInstance);
		}
	}

public:
	BRepBuilderAPI_MakeSolid();
	BRepBuilderAPI_MakeSolid(Macad::Occt::TopoDS_CompSolid^ S);
	BRepBuilderAPI_MakeSolid(Macad::Occt::TopoDS_Shell^ S);
	BRepBuilderAPI_MakeSolid(Macad::Occt::TopoDS_Shell^ S1, Macad::Occt::TopoDS_Shell^ S2);
	BRepBuilderAPI_MakeSolid(Macad::Occt::TopoDS_Shell^ S1, Macad::Occt::TopoDS_Shell^ S2, Macad::Occt::TopoDS_Shell^ S3);
	BRepBuilderAPI_MakeSolid(Macad::Occt::TopoDS_Solid^ So);
	BRepBuilderAPI_MakeSolid(Macad::Occt::TopoDS_Solid^ So, Macad::Occt::TopoDS_Shell^ S);
	BRepBuilderAPI_MakeSolid(Macad::Occt::BRepBuilderAPI_MakeSolid^ parameter1);
	void Add(Macad::Occt::TopoDS_Shell^ S);
	bool IsDone();
	Macad::Occt::TopoDS_Solid^ Solid();
	bool IsDeleted(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepBuilderAPI_MakeSolid

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeVertex
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_MakeVertex sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepBuilderAPI_MakeVertex_h
public:
	Include_BRepBuilderAPI_MakeVertex_h
#endif

public:
	BRepBuilderAPI_MakeVertex(::BRepBuilderAPI_MakeVertex* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepBuilderAPI_MakeVertex(::BRepBuilderAPI_MakeVertex& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepBuilderAPI_MakeVertex* NativeInstance
	{
		::BRepBuilderAPI_MakeVertex* get()
		{
			return static_cast<::BRepBuilderAPI_MakeVertex*>(_NativeInstance);
		}
	}

public:
	BRepBuilderAPI_MakeVertex(Macad::Occt::Pnt P);
	BRepBuilderAPI_MakeVertex(Macad::Occt::BRepBuilderAPI_MakeVertex^ parameter1);
	Macad::Occt::TopoDS_Vertex^ Vertex();
}; // class BRepBuilderAPI_MakeVertex

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeWire
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_MakeWire sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepBuilderAPI_MakeWire_h
public:
	Include_BRepBuilderAPI_MakeWire_h
#endif

public:
	BRepBuilderAPI_MakeWire(::BRepBuilderAPI_MakeWire* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepBuilderAPI_MakeWire(::BRepBuilderAPI_MakeWire& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepBuilderAPI_MakeWire* NativeInstance
	{
		::BRepBuilderAPI_MakeWire* get()
		{
			return static_cast<::BRepBuilderAPI_MakeWire*>(_NativeInstance);
		}
	}

public:
	BRepBuilderAPI_MakeWire();
	BRepBuilderAPI_MakeWire(Macad::Occt::TopoDS_Edge^ E);
	BRepBuilderAPI_MakeWire(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2);
	BRepBuilderAPI_MakeWire(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopoDS_Edge^ E3);
	BRepBuilderAPI_MakeWire(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopoDS_Edge^ E3, Macad::Occt::TopoDS_Edge^ E4);
	BRepBuilderAPI_MakeWire(Macad::Occt::TopoDS_Wire^ W);
	BRepBuilderAPI_MakeWire(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Edge^ E);
	BRepBuilderAPI_MakeWire(Macad::Occt::BRepBuilderAPI_MakeWire^ parameter1);
	void Add(Macad::Occt::TopoDS_Edge^ E);
	void Add(Macad::Occt::TopoDS_Wire^ W);
	void Add(Macad::Occt::TopTools_ListOfShape^ L);
	bool IsDone();
	Macad::Occt::BRepBuilderAPI_WireError Error();
	Macad::Occt::TopoDS_Wire^ Wire();
	Macad::Occt::TopoDS_Edge^ Edge();
	Macad::Occt::TopoDS_Vertex^ Vertex();
}; // class BRepBuilderAPI_MakeWire

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_NurbsConvert
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_NurbsConvert sealed : public Macad::Occt::BRepBuilderAPI_ModifyShape
{

#ifdef Include_BRepBuilderAPI_NurbsConvert_h
public:
	Include_BRepBuilderAPI_NurbsConvert_h
#endif

public:
	BRepBuilderAPI_NurbsConvert(::BRepBuilderAPI_NurbsConvert* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
	{}

	BRepBuilderAPI_NurbsConvert(::BRepBuilderAPI_NurbsConvert& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
	{}

	property ::BRepBuilderAPI_NurbsConvert* NativeInstance
	{
		::BRepBuilderAPI_NurbsConvert* get()
		{
			return static_cast<::BRepBuilderAPI_NurbsConvert*>(_NativeInstance);
		}
	}

public:
	BRepBuilderAPI_NurbsConvert();
	BRepBuilderAPI_NurbsConvert(Macad::Occt::TopoDS_Shape^ S, bool Copy);
	BRepBuilderAPI_NurbsConvert(Macad::Occt::TopoDS_Shape^ S);
	BRepBuilderAPI_NurbsConvert(Macad::Occt::BRepBuilderAPI_NurbsConvert^ parameter1);
	void Perform(Macad::Occt::TopoDS_Shape^ S, bool Copy);
	void Perform(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopoDS_Shape^ ModifiedShape(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepBuilderAPI_NurbsConvert

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Sewing
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_Sewing sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRepBuilderAPI_Sewing_h
public:
	Include_BRepBuilderAPI_Sewing_h
#endif

public:
	BRepBuilderAPI_Sewing(::BRepBuilderAPI_Sewing* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	BRepBuilderAPI_Sewing(::BRepBuilderAPI_Sewing& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::BRepBuilderAPI_Sewing* NativeInstance
	{
		::BRepBuilderAPI_Sewing* get()
		{
			return static_cast<::BRepBuilderAPI_Sewing*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRepBuilderAPI_Sewing^ CreateDowncasted(::BRepBuilderAPI_Sewing* instance);

public:
	BRepBuilderAPI_Sewing(double tolerance, bool option1, bool option2, bool option3, bool option4);
	BRepBuilderAPI_Sewing(double tolerance, bool option1, bool option2, bool option3);
	BRepBuilderAPI_Sewing(double tolerance, bool option1, bool option2);
	BRepBuilderAPI_Sewing(double tolerance, bool option1);
	BRepBuilderAPI_Sewing(double tolerance);
	BRepBuilderAPI_Sewing(Macad::Occt::BRepBuilderAPI_Sewing^ parameter1);
	void Init(double tolerance, bool option1, bool option2, bool option3, bool option4);
	void Init(double tolerance, bool option1, bool option2, bool option3);
	void Init(double tolerance, bool option1, bool option2);
	void Init(double tolerance, bool option1);
	void Init(double tolerance);
	void Init();
	void Load(Macad::Occt::TopoDS_Shape^ shape);
	void Add(Macad::Occt::TopoDS_Shape^ shape);
	void Perform(Macad::Occt::Message_ProgressRange^ theProgress);
	void Perform();
	Macad::Occt::TopoDS_Shape^ SewedShape();
	void SetContext(Macad::Occt::BRepTools_ReShape^ theContext);
	Macad::Occt::BRepTools_ReShape^ GetContext();
	int NbFreeEdges();
	Macad::Occt::TopoDS_Edge^ FreeEdge(int index);
	int NbMultipleEdges();
	Macad::Occt::TopoDS_Edge^ MultipleEdge(int index);
	int NbContigousEdges();
	Macad::Occt::TopoDS_Edge^ ContigousEdge(int index);
	Macad::Occt::TopTools_ListOfShape^ ContigousEdgeCouple(int index);
	bool IsSectionBound(Macad::Occt::TopoDS_Edge^ section);
	Macad::Occt::TopoDS_Edge^ SectionToBoundary(Macad::Occt::TopoDS_Edge^ section);
	int NbDegeneratedShapes();
	Macad::Occt::TopoDS_Shape^ DegeneratedShape(int index);
	bool IsDegenerated(Macad::Occt::TopoDS_Shape^ shape);
	bool IsModified(Macad::Occt::TopoDS_Shape^ shape);
	Macad::Occt::TopoDS_Shape^ Modified(Macad::Occt::TopoDS_Shape^ shape);
	bool IsModifiedSubShape(Macad::Occt::TopoDS_Shape^ shape);
	Macad::Occt::TopoDS_Shape^ ModifiedSubShape(Macad::Occt::TopoDS_Shape^ shape);
	void Dump();
	int NbDeletedFaces();
	Macad::Occt::TopoDS_Face^ DeletedFace(int index);
	Macad::Occt::TopoDS_Face^ WhichFace(Macad::Occt::TopoDS_Edge^ theEdg, int index);
	Macad::Occt::TopoDS_Face^ WhichFace(Macad::Occt::TopoDS_Edge^ theEdg);
	bool SameParameterMode();
	void SetSameParameterMode(bool SameParameterMode);
	double Tolerance();
	void SetTolerance(double theToler);
	double MinTolerance();
	void SetMinTolerance(double theMinToler);
	double MaxTolerance();
	void SetMaxTolerance(double theMaxToler);
	bool FaceMode();
	void SetFaceMode(bool theFaceMode);
	bool FloatingEdgesMode();
	void SetFloatingEdgesMode(bool theFloatingEdgesMode);
	bool LocalTolerancesMode();
	void SetLocalTolerancesMode(bool theLocalTolerancesMode);
	void SetNonManifoldMode(bool theNonManifoldMode);
	bool NonManifoldMode();
}; // class BRepBuilderAPI_Sewing

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Transform
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_Transform sealed : public Macad::Occt::BRepBuilderAPI_ModifyShape
{

#ifdef Include_BRepBuilderAPI_Transform_h
public:
	Include_BRepBuilderAPI_Transform_h
#endif

public:
	BRepBuilderAPI_Transform(::BRepBuilderAPI_Transform* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
	{}

	BRepBuilderAPI_Transform(::BRepBuilderAPI_Transform& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
	{}

	property ::BRepBuilderAPI_Transform* NativeInstance
	{
		::BRepBuilderAPI_Transform* get()
		{
			return static_cast<::BRepBuilderAPI_Transform*>(_NativeInstance);
		}
	}

public:
	BRepBuilderAPI_Transform(Macad::Occt::Trsf T);
	BRepBuilderAPI_Transform(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Trsf T, bool Copy);
	BRepBuilderAPI_Transform(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Trsf T);
	BRepBuilderAPI_Transform(Macad::Occt::BRepBuilderAPI_Transform^ parameter1);
	void Perform(Macad::Occt::TopoDS_Shape^ S, bool Copy);
	void Perform(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopoDS_Shape^ ModifiedShape(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepBuilderAPI_Transform

}; // namespace Occt
}; // namespace Macad
