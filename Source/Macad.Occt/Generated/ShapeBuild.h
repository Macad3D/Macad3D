// Generated wrapper code for package ShapeBuild

#pragma once

#include "BRepTools.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ShapeBuild_Vertex
//---------------------------------------------------------------------
public ref class ShapeBuild_Vertex sealed : public BaseClass<::ShapeBuild_Vertex>
{

#ifdef Include_ShapeBuild_Vertex_h
public:
	Include_ShapeBuild_Vertex_h
#endif

public:
	ShapeBuild_Vertex(::ShapeBuild_Vertex* nativeInstance)
		: BaseClass<::ShapeBuild_Vertex>( nativeInstance, true )
	{}

	ShapeBuild_Vertex(::ShapeBuild_Vertex& nativeInstance)
		: BaseClass<::ShapeBuild_Vertex>( &nativeInstance, false )
	{}

	property ::ShapeBuild_Vertex* NativeInstance
	{
		::ShapeBuild_Vertex* get()
		{
			return static_cast<::ShapeBuild_Vertex*>(_NativeInstance);
		}
	}

public:
	ShapeBuild_Vertex();
	ShapeBuild_Vertex(Macad::Occt::ShapeBuild_Vertex^ parameter1);
	Macad::Occt::TopoDS_Vertex^ CombineVertex(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double tolFactor);
	Macad::Occt::TopoDS_Vertex^ CombineVertex(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	Macad::Occt::TopoDS_Vertex^ CombineVertex(Macad::Occt::Pnt pnt1, Macad::Occt::Pnt pnt2, double tol1, double tol2, double tolFactor);
	Macad::Occt::TopoDS_Vertex^ CombineVertex(Macad::Occt::Pnt pnt1, Macad::Occt::Pnt pnt2, double tol1, double tol2);
}; // class ShapeBuild_Vertex

//---------------------------------------------------------------------
//  Class  ShapeBuild_Edge
//---------------------------------------------------------------------
public ref class ShapeBuild_Edge sealed : public BaseClass<::ShapeBuild_Edge>
{

#ifdef Include_ShapeBuild_Edge_h
public:
	Include_ShapeBuild_Edge_h
#endif

public:
	ShapeBuild_Edge(::ShapeBuild_Edge* nativeInstance)
		: BaseClass<::ShapeBuild_Edge>( nativeInstance, true )
	{}

	ShapeBuild_Edge(::ShapeBuild_Edge& nativeInstance)
		: BaseClass<::ShapeBuild_Edge>( &nativeInstance, false )
	{}

	property ::ShapeBuild_Edge* NativeInstance
	{
		::ShapeBuild_Edge* get()
		{
			return static_cast<::ShapeBuild_Edge*>(_NativeInstance);
		}
	}

public:
	ShapeBuild_Edge();
	ShapeBuild_Edge(Macad::Occt::ShapeBuild_Edge^ parameter1);
	Macad::Occt::TopoDS_Edge^ CopyReplaceVertices(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
	void CopyRanges(Macad::Occt::TopoDS_Edge^ toedge, Macad::Occt::TopoDS_Edge^ fromedge, double alpha, double beta);
	void CopyRanges(Macad::Occt::TopoDS_Edge^ toedge, Macad::Occt::TopoDS_Edge^ fromedge, double alpha);
	void CopyRanges(Macad::Occt::TopoDS_Edge^ toedge, Macad::Occt::TopoDS_Edge^ fromedge);
	void SetRange3d(Macad::Occt::TopoDS_Edge^ edge, double first, double last);
	void CopyPCurves(Macad::Occt::TopoDS_Edge^ toedge, Macad::Occt::TopoDS_Edge^ fromedge);
	Macad::Occt::TopoDS_Edge^ Copy(Macad::Occt::TopoDS_Edge^ edge, bool sharepcurves);
	Macad::Occt::TopoDS_Edge^ Copy(Macad::Occt::TopoDS_Edge^ edge);
	void RemovePCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face);
	void RemovePCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surf);
	void RemovePCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surf, Macad::Occt::TopLoc_Location^ loc);
	void ReplacePCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom2d_Curve^ pcurve, Macad::Occt::TopoDS_Face^ face);
	bool ReassignPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ old, Macad::Occt::TopoDS_Face^ sub);
	Macad::Occt::Geom2d_Curve^ TransformPCurve(Macad::Occt::Geom2d_Curve^ pcurve, Macad::Occt::Trsf2d trans, double uFact, double% aFirst, double% aLast);
	void RemoveCurve3d(Macad::Occt::TopoDS_Edge^ edge);
	bool BuildCurve3d(Macad::Occt::TopoDS_Edge^ edge);
	void MakeEdge(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Curve^ curve, Macad::Occt::TopLoc_Location^ L);
	void MakeEdge(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Curve^ curve, Macad::Occt::TopLoc_Location^ L, double p1, double p2);
	void MakeEdge(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom2d_Curve^ pcurve, Macad::Occt::TopoDS_Face^ face);
	void MakeEdge(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom2d_Curve^ pcurve, Macad::Occt::TopoDS_Face^ face, double p1, double p2);
	void MakeEdge(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom2d_Curve^ pcurve, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
	void MakeEdge(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom2d_Curve^ pcurve, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double p1, double p2);
}; // class ShapeBuild_Edge

//---------------------------------------------------------------------
//  Class  ShapeBuild_ReShape
//---------------------------------------------------------------------
public ref class ShapeBuild_ReShape sealed : public Macad::Occt::BRepTools_ReShape
{

#ifdef Include_ShapeBuild_ReShape_h
public:
	Include_ShapeBuild_ReShape_h
#endif

public:
	ShapeBuild_ReShape(::ShapeBuild_ReShape* nativeInstance)
		: Macad::Occt::BRepTools_ReShape( nativeInstance )
	{}

	ShapeBuild_ReShape(::ShapeBuild_ReShape& nativeInstance)
		: Macad::Occt::BRepTools_ReShape( nativeInstance )
	{}

	property ::ShapeBuild_ReShape* NativeInstance
	{
		::ShapeBuild_ReShape* get()
		{
			return static_cast<::ShapeBuild_ReShape*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeBuild_ReShape^ CreateDowncasted(::ShapeBuild_ReShape* instance);

public:
	ShapeBuild_ReShape();
	ShapeBuild_ReShape(Macad::Occt::ShapeBuild_ReShape^ parameter1);
	Macad::Occt::TopoDS_Shape^ Apply(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopAbs_ShapeEnum until, int buildmode);
	Macad::Occt::TopoDS_Shape^ Apply(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopAbs_ShapeEnum until);
	Macad::Occt::TopoDS_Shape^ Apply(Macad::Occt::TopoDS_Shape^ shape);
	int Status(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopoDS_Shape^ newsh, bool last);
	int Status(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopoDS_Shape^ newsh);
	bool Status(Macad::Occt::ShapeExtend_Status status);
}; // class ShapeBuild_ReShape

//---------------------------------------------------------------------
//  Class  ShapeBuild
//---------------------------------------------------------------------
public ref class ShapeBuild sealed : public BaseClass<::ShapeBuild>
{

#ifdef Include_ShapeBuild_h
public:
	Include_ShapeBuild_h
#endif

public:
	ShapeBuild(::ShapeBuild* nativeInstance)
		: BaseClass<::ShapeBuild>( nativeInstance, true )
	{}

	ShapeBuild(::ShapeBuild& nativeInstance)
		: BaseClass<::ShapeBuild>( &nativeInstance, false )
	{}

	property ::ShapeBuild* NativeInstance
	{
		::ShapeBuild* get()
		{
			return static_cast<::ShapeBuild*>(_NativeInstance);
		}
	}

public:
	ShapeBuild();
	ShapeBuild(Macad::Occt::ShapeBuild^ parameter1);
	static Macad::Occt::Geom_Plane^ PlaneXOY();
}; // class ShapeBuild

}; // namespace Occt
}; // namespace Macad
